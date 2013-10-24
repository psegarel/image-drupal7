<?php
/**
 * @file
 * image_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
