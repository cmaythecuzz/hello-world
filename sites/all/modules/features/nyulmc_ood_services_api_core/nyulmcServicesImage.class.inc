<?php
/**
 * @class nyulmcServicesImage
 *
 *   A very small class for basic image processing/prepping for a
 *   service response preperation. Most of this is referenced
 *   by nyulmcServiceHelpers.class.inc. Note that some image logic lives in
 *   there, particularly in regards to WYSIWYG parsing.
 */
class nyulmcServicesImage {

    /**
     * Determine the local host + path to the public files directory.
     *
     * @return string
     *   The root local host + path/to/files. Use this to resolve WYSIWYG
     *   asset linking.
     */
    static function getLocalHostFilePath() {
        return $_SERVER['HTTP_HOST'] . '/' . variable_get('file_public_path', conf_path() . '/files');
    }

    /**
     * Return an approprate replacement host + file_path to replace a forbidden
     * URL with when processing assets.
     *
     * @return string
     */
    static function getReplacementHost() {
        /**
        // There is how we would replace the host, were things not relative.
         *
        $result = $_SERVER['HTTP_HOST'] . '/' . variable_get('file_public_path', conf_path() . '/files');
        if(strpos($result, 'http://') === FALSE) {
        $result = 'http://' . $result;
        }
         /**/
        $result = '/files';

        return $result;
    }

    /**
     * Convert a Drupal file URL into an absolute URL, which can be understood outside of Drupal.
     *
     * This function converts the URL, then applies any replacement host logic.
     *
     * @param  [type] $uri [description]
     * @return [type]      [description]
     */
    static function createFileUrl($uri) {

        // Check for a public file path,
        // and only grab the relative portion following 'public://'.
        if(strpos(trim($uri), 'public://') === 0) {
            $relative_path = substr($uri, strpos($uri, 'public://') + strlen('public://'));
        }
        else {
            return FALSE;
        }

        // Update to the approprate host, or remove it altogether,
        // making things relative.
        $root = self::getReplacementHost();

        // Encode the URL before returning it.
        return str_replace('%3A', ':', str_replace('%2F', '/', rawurlencode($root . '/' . $relative_path)));
    }
}
