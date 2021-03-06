<?php
/**
 * @file
 * image_legacy_types.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_legacy_types_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_legacy_types_node_info() {
  $items = array(
    'download_item' => array(
      'name' => t('Downloadable Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_detail' => array(
      'name' => t('Image Detail'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
