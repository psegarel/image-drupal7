<?php
/**
 * @file
 * image_products_page.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function image_products_page_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'products';
  $delta->name = 'Products';
  $delta->description = '';
  $delta->theme = 'omega_image';
  $delta->mode = 'override';
  $delta->parent = '';
  $delta->settings = array();
  $export['products'] = $delta;

  return $export;
}
