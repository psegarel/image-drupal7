<?php
/**
 * @file
 * image_downloads.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function image_downloads_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'downloads';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
        'zh-hans' => 'zh-hans',
      ),
    ),
    'menu' => array(
      'values' => array(
        'downloads' => 'downloads',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-downloads-block_1' => array(
          'module' => 'views',
          'delta' => 'downloads-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['downloads'] = $context;

  return $export;
}
