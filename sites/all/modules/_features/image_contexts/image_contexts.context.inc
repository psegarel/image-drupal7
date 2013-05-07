<?php
/**
 * @file
 * image_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function image_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'zh-hans/about' => 'zh-hans/about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-about-block' => array(
          'module' => 'views',
          'delta' => 'about-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-contact-block' => array(
          'module' => 'views',
          'delta' => 'contact-block',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'about',
    ),
    'region' => array(
      'omega_image' => array(
        'disable' => array(
          'content' => 'content',
          'branding' => 'branding',
          'page_top' => 0,
          'page_bottom' => 0,
          'user_first' => 0,
          'user_second' => 0,
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
  $export['about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_products';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products' => 'products',
        'zh-hans/产品' => 'zh-hans/产品',
        'zh-hans/products' => 'zh-hans/products',
        '~/products/*' => '~/products/*',
        '~/zh-hans/products/*' => '~/zh-hans/products/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-all_products-block_3' => array(
          'module' => 'views',
          'delta' => 'all_products-block_3',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'products',
    ),
    'region' => array(
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
  $export['all_products'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-webforms-block' => array(
          'module' => 'views',
          'delta' => 'webforms-block',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-contact-block' => array(
          'module' => 'views',
          'delta' => 'contact-block',
          'region' => 'preface_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'about',
    ),
    'region' => array(
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
  $export['contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'country';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
        'zh-hans' => 'zh-hans',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'countries' => 'countries',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-country-block' => array(
          'module' => 'views',
          'delta' => 'country-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-country-block_1' => array(
          'module' => 'views',
          'delta' => 'country-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
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
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['country'] = $context;

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
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'homepage',
    ),
    'region' => array(
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
  $context->name = 'news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
        'zh-hans/news' => 'zh-hans/news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
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
  $export['news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product';
  $context->description = 'Product Category page';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
        'zh-hans' => 'zh-hans',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'products' => 'products',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-product-block_1' => array(
          'module' => 'views',
          'delta' => 'product-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Product Category page');
  $export['product'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_page';
  $context->description = 'Single Product page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-product-block_2' => array(
          'module' => 'views',
          'delta' => 'product-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Single Product page');
  $export['product_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-catchphrases-block' => array(
          'module' => 'views',
          'delta' => 'catchphrases-block',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'user_first',
          'weight' => '-9',
        ),
        'delta_blocks-site-name' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-name',
          'region' => 'user_first',
          'weight' => '-8',
        ),
        'delta_blocks-site-slogan' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-slogan',
          'region' => 'user_first',
          'weight' => '-7',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_first',
          'weight' => '-5',
        ),
        'views-illustrations-block' => array(
          'module' => 'views',
          'delta' => 'illustrations-block',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'superfish-5' => array(
          'module' => 'superfish',
          'delta' => '5',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header_first',
          'weight' => '-8',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'postscript_first',
          'weight' => '-8',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => '3',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'superfish-4' => array(
          'module' => 'superfish',
          'delta' => '4',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'superfish-6' => array(
          'module' => 'superfish',
          'delta' => '6',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
        'superfish-7' => array(
          'module' => 'superfish',
          'delta' => '7',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'supplier';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
        'zh-hans' => 'zh-hans',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'suppliers' => 'suppliers',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-suppliers-block_2' => array(
          'module' => 'views',
          'delta' => 'suppliers-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-suppliers-block_1' => array(
          'module' => 'views',
          'delta' => 'suppliers-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
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
  $export['supplier'] = $context;

  return $export;
}
