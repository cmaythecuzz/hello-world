<?php

/**
 * @class nyulmcSlugFieldCollection
 *   A class for handling slug generation and verification for multiple field collections
 *  within a node.
 *
 */
class nyulmcSlugFieldCollection extends nyulmcSlug
{
  protected $field_collection;
  protected $field_name;
  public function prepareSlug($slug, $field_name, $field_collection, $type = '', $id = null, $enforce_unique_slug = TRUE) {
    $this->field_collection = $field_collection;
    $this->field_name = $field_name;
    return parent::prepareSlug($slug, '', '', '', $id, true);
  }

  protected function isSlugUnique($slug, $restrict_to_bundle = TRUE) {
    foreach($this->field_collection[LANGUAGE_NONE] as $key => $field) {
      if($key === $this->entity_id) {
        continue;
      }
      $existentSlug = $field[$this->field_name][LANGUAGE_NONE][0]['value'];
      if($slug == $existentSlug) {
        return false;
      }
    }
    return true;
  }

}