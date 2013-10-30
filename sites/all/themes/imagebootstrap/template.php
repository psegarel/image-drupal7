<?php
function imagebootstrap_js_alter(&$javascript) 
{
  // Replace with current version.
  $jQuery_version = '1.7.2';
  $javascript['misc/jquery.js']['data'] = libraries_get_path('jquery').'/jquery-1.7.2.min.js';
  $javascript['misc/jquery.js']['version'] = $jQuery_version;

}

function imagebootstrap_preprocess_taxonomy_term(&$variables)
{
	// $illustrations = views_embed_view('suppliers', 'block_3' , $variables['tid']);
	// 
	$illustrations_block = block_load('views', 'suppliers-block_3');
	$illustrations_build = _block_get_renderable_array(_block_render_blocks(array($illustrations_block)));
	$illustrations = drupal_render($illustrations_build); 
	$variables['illustrations'] = $illustrations;
	//dsm($variables);
}