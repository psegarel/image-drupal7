<?php
/**
 * @file
 * image_products_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function image_products_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/3165
  $menu_links['main-menu:node/3165'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3165',
    'router_path' => 'node/%',
    'link_title' => 'Products',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Products');


  return $menu_links;
}
