<?php
/**
 * @file
 * image_supplier.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function image_supplier_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-suppliers.
  $menus['menu-suppliers'] = array(
    'menu_name' => 'menu-suppliers',
    'title' => 'Suppliers',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Suppliers');


  return $menus;
}
