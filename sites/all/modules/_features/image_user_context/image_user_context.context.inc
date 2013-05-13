<?php
/**
 * @file
 * image_user_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function image_user_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'disable_context' => array(
      'disabled' => array(
        'about' => 'about',
        'all_products' => 'all_products',
        'contact' => 'contact',
        'country' => 'country',
        'downloads' => 'downloads',
        'homepage' => 'homepage',
        'legal' => 'legal',
        'news' => 'news',
        'product' => 'product',
        'product_page' => 'product_page',
        'supplier' => 'supplier',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['user'] = $context;

  return $export;
}
