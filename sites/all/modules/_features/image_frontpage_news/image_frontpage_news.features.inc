<?php
/**
 * @file
 * image_frontpage_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_frontpage_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_frontpage_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
