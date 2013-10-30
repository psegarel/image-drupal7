<?php
/**
 * @file
 * image_illustration.features.inc
 */

/**
 * Implements hook_node_info().
 */
function image_illustration_node_info() {
  $items = array(
    'illustration' => array(
      'name' => t('Illustration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
