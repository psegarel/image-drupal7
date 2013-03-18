<?php
/**
 * @file
 * image_products_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_products_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function image_products_page_views_api() {
  return array("api" => "3.0");
}
