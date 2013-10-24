<?php
/**
 * @file
 * image_products.features.inc
 */

/**
 * Implements hook_node_info().
 */
function image_products_node_info() {
  $items = array(
    'featured_product' => array(
      'name' => t('Featured Product'),
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
  );
  return $items;
}
