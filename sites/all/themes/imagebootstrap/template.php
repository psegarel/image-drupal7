<?php
function imagebootstrap_js_alter(&$javascript) 
{
  // Replace with current version.
  // $jQuery_version = '1.7.2';
  // $javascript['misc/jquery.js']['data'] = libraries_get_path('jquery').'/jquery-1.7.2.min.js';
  // $javascript['misc/jquery.js']['version'] = $jQuery_version;

}

function imagebootstrap_preprocess_taxonomy_term(&$variables)
{
	if(isset($variables['term'])){
		$term = $variables['term'];
		
		switch($term->vocabulary_machine_name)
		{
			case 'countries':
				$illustrations_block = block_load('views', 'countries-block_2');
				$illustrations_build = _block_get_renderable_array(_block_render_blocks(array($illustrations_block)));
				$illustrations = drupal_render($illustrations_build); 
				break;
			
			case 'suppliers':
				$illustrations_block = block_load('views', 'suppliers-block_3');
				$illustrations_build = _block_get_renderable_array(_block_render_blocks(array($illustrations_block)));
				$illustrations = drupal_render($illustrations_build); 
				break;
		}
		
		if(isset($illustrations)){
			$variables['illustrations'] = $illustrations;
		}
	}
}