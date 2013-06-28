<?php
/**
 * @file
 * image_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function image_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'legal';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'legal' => 'legal',
        'zh-hans/legal' => 'zh-hans/legal',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-about-block_1' => array(
          'module' => 'views',
          'delta' => 'about-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['legal'] = $context;

  return $export;
}
