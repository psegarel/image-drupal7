<?php
/**
 * @file
 * image_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function image_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_product-block' => array(
          'module' => 'views',
          'delta' => 'featured_product-block',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'views-frontpage_news-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_news-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-product-block' => array(
          'module' => 'views',
          'delta' => 'product-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-product-block_3' => array(
          'module' => 'views',
          'delta' => 'product-block_3',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'homepage',
    ),
    'region' => array(
      'garland' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'content' => 0,
          'header' => 0,
          'footer' => 0,
          'highlighted' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'omega_image' => array(
        'disable' => array(
          'content' => 'content',
          'page_top' => 0,
          'page_bottom' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'zh-hans/search' => 'zh-hans/search',
        'search/*' => 'search/*',
        'zh-hans/search/*' => 'zh-hans/search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'country' => 'country',
        'supplier' => 'supplier',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['search'] = $context;

  return $export;
}
