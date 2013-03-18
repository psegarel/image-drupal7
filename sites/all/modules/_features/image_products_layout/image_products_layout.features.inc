<?php
/**
 * @file
 * image_products_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_products_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
