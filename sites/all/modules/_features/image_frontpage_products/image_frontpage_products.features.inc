<?php
/**
 * @file
 * image_frontpage_products.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_frontpage_products_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_frontpage_products_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'supplier' => array(
      'name' => t('Supplier'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
