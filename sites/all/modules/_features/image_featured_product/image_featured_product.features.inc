<?php
/**
 * @file
 * image_featured_product.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_featured_product_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_featured_product_node_info() {
  $items = array(
    'featured_product' => array(
      'name' => t('Featured Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
