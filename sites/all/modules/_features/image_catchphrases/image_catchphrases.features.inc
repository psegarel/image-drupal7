<?php
/**
 * @file
 * image_catchphrases.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_catchphrases_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_catchphrases_node_info() {
  $items = array(
    'catchphrase' => array(
      'name' => t('Catchphrase'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
