<?php
/**
 * @file
 * image_frontpage.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function image_frontpage_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'homepage';
  $delta->name = 'Homepage';
  $delta->description = '';
  $delta->theme = 'omega_image';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_omega_image_settings' => array(
      'alpha_region_header_first_columns' => '12',
      'alpha_region_header_second_columns' => '12',
      'alpha_region_preface_first_columns' => '12',
      'alpha_region_preface_second_columns' => '6',
      'alpha_region_preface_third_columns' => '6',
      'alpha_region_postscript_first_columns' => '3',
      'alpha_region_postscript_second_columns' => '3',
      'alpha_region_postscript_third_columns' => '3',
      'alpha_region_postscript_fourth_columns' => '3',
    ),
    'color_omega_image_files' => NULL,
    'color_omega_image_logo' => NULL,
    'color_omega_image_palette' => NULL,
    'color_omega_image_stylesheets' => NULL,
    'color_omega_image_screenshot' => NULL,
  );
  $export['homepage'] = $delta;

  return $export;
}
