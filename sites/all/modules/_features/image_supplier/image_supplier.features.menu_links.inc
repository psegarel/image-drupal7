<?php
/**
 * @file
 * image_supplier.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function image_supplier_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-suppliers:taxonomy/term/49
  $menu_links['menu-suppliers:taxonomy/term/49'] = array(
    'menu_name' => 'menu-suppliers',
    'link_path' => 'taxonomy/term/49',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bodega Maurizio Lorca',
    'options' => array(
      'attributes' => array(
        'title' => 'Bodega Maurizio Lorca',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-suppliers:taxonomy/term/50
  $menu_links['menu-suppliers:taxonomy/term/50'] = array(
    'menu_name' => 'menu-suppliers',
    'link_path' => 'taxonomy/term/50',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bodega Enrique Foster',
    'options' => array(
      'attributes' => array(
        'title' => 'Bodega Enrique Foster',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-suppliers:taxonomy/term/51
  $menu_links['menu-suppliers:taxonomy/term/51'] = array(
    'menu_name' => 'menu-suppliers',
    'link_path' => 'taxonomy/term/51',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Greenpath Food for Life',
    'options' => array(
      'attributes' => array(
        'title' => 'Greenpath Food for Life',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-suppliers:taxonomy/term/52
  $menu_links['menu-suppliers:taxonomy/term/52'] = array(
    'menu_name' => 'menu-suppliers',
    'link_path' => 'taxonomy/term/52',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Junta Winery',
    'options' => array(
      'attributes' => array(
        'title' => 'Junta Winery',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bodega Enrique Foster');
  t('Bodega Maurizio Lorca');
  t('Greenpath Food for Life');
  t('Junta Winery');


  return $menu_links;
}
