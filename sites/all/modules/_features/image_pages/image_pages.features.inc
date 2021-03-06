<?php
/**
 * @file
 * image_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function image_pages_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_pages_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
