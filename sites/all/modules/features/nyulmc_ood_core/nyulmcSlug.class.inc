<?php

use Cocur\Slugify\Slugify;
/**
 * @class NYULMCSlug
 *   A class for handling slug generation and verification.
 *
 *   For use with NYULMC_Core.
 */
class nyulmcSlug {

    protected $table_name;
    protected $field_name;
    protected $entity_type;
    protected $bundle;
    protected $entity_id;
    protected $separator = '-';

    /**
     * Prepare a slug to be set, and unique. If non-unique,
     * we'll attempt to make it so.
     *
     * @param string $slug
     *   A non-empty string, which we should attempt to make unique.
     * @param string $field
     *   The name of the entity field this slug lives in. E.G. field_slug
     * @param string $entity
     *   The type of entity, such as node, taxonomy_term, etc.
     * @param string $type
     *   The bundle, such as node content type.
     * @param int $id
     *   The ID of the entity this slug belongs to. We'll use this to exclude
     *   our current node when querring uniqueness.
     * @param boolean $enforce_unique_slug
     *   If set, we enforce a unique slug. Defaults to TRUE.
     *
     * @return string
     *   A unique slug. (unique to the table it belongs to, not to the database
     *   in general)
     */
    public function prepareSlug($slug, $field, $entity, $type, $id, $enforce_unique_slug = TRUE) {

        // @todo These should be autoloaded, preferibally.
        require_once(libraries_get_path('slugify-master') . '/src/SlugifyInterface.php');
        require_once(libraries_get_path('slugify-master') . '/src/Slugify.php');

        // If a slug is not set, use the title as a default.
        if(empty($slug)) {
            Throw new Exception('Failed generate slug. Was your slug or title set?');
        }
        elseif(!is_string($slug)) {
            Throw new Exception('A non-string was found, and cannot be sluggified.');
        }

        $this->table = 'field_data_' . $field;
        $this->field = $field . '_value';
        $this->entity_type = $entity;
        $this->bundle = $type;
        $this->entity_id = $id;

        $slugify = new Slugify();

        // Add a rule to remove apostrophies from the slug,
        // without replacing them with a dash.
        $slugify->addRule("'", "");

        // Assemble a slug using the slugify library.
        // @see sites/all/libraries/slugify-main
        $my_slug = $slugify->slugify($slug, $this->separator);

        // Only assert uniqueness if requested.
        if($enforce_unique_slug === TRUE) {
            // Enforce slug uniqueness.
            $my_slug = $this->uniqueifySlug($my_slug);
        }

        // Then check for uniqueness. If we match other results, append a number to our slug.
        // Do a db lookup on the field. Make sure to exclude our value.
        return $my_slug;
    }


    /**
     * Verify that a given slug is unique in the context of it's slug table.
     *
     * I.E. Only slugs in the same table, such as slugs sharing field_slug, will
     * be verified as unique.
     *
     * @param string $slug
     *   A slug we should validate as unique for the given table.
     * @param boolean $restrict_to_bundle
     *   Should we restrict our slug to being unique in it's own bundle only?
     *   Defaults to TRUE.
     *
     * @return boolean
     *   (TRUE) if unique, otherwise (FALSE).
     */
    protected function isSlugUnique($slug, $restrict_to_bundle = TRUE) {
        try {
            // Search for a unique slug within our table.
            $query = db_select($this->table, 't')
                ->fields('t', array($this->field))
                ->condition('t.' . $this->field, $slug, '=');

            // If we have an origin ID (node ID), exclude that entry from the results.
            // If our ID is NULL, do not perform this condition, or we get no results,
            // and false positives occur.
            if(is_numeric($this->entity_id) && $this->entity_id > 0) {
                $query->condition('t.entity_id', $this->entity_id, '<>');
                if($restrict_to_bundle === TRUE) {
                    $query->condition('t.bundle', $this->bundle, '=');
                }
            }
            $result = $query->execute()->fetchAll(PDO::FETCH_ASSOC);

            // If we had any results, our slug is not unique.
            if(!empty($result)) {
                return FALSE;
            }

            return TRUE;
        }
        catch(Exception $e) {
            Throw new Exception('Error while checking database for slug uniqueness.');
        }
    }

    /**
     * Give a path, attempt to generate a unique path.
     *
     * @return [type] [description]
     *
     * @note modeled on PAth Auto's path alias functionality.
     * @see pathauto_alias_uniquify() in pathauto/pathauto.inc.
     */
    protected function uniqueifySlug($slug) {

        // If our slug is already unique, simply return it.
        if($this->isSlugUnique($slug)) {
            return $slug;
        }

        /**
        @todo
        Should we depend upon pathauto's limits? If we generate a slug larger
        than path auto, it will not be reliable for generating path alias URLs.
         */
        module_load_include('inc', 'pathauto', 'pathauto');

        // If the slug already exists, generate a new, hopefully unique, variant.
        $maxlength = min(variable_get('pathauto_max_length', 100), _pathauto_get_schema_alias_maxlength());
        $separator = $this->separator;
        $original_slug = $slug;

        $i = 0;
        do {
            // Append an incrementing numeric suffix until we find a unique alias.
            $unique_suffix = $separator . $i;
            $slug = truncate_utf8($original_slug, $maxlength - drupal_strlen($unique_suffix, TRUE)) . $unique_suffix;

            /**
            @todo
            Pathauto performs this loop logic, but exposes itself it an infinite
            loop. While unlikely, should we set any break conditions?
             */
            $i++;
        }
        while (!$this->isSlugUnique($slug));

        return $slug;
    }
}
