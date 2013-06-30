<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 *
 */
 
/**
 * Theme function to allow any menu tree to be themed as a Superfish menu.
 */
function omega_image_superfish($variables) {
  global $user, $language;

  $id = $variables['id'];
  $menu_name = $variables['menu_name'];
  $mlid = $variables['mlid'];
  $sfsettings = $variables['sfsettings'];

  $menu = menu_tree_all_data($menu_name);

  if (function_exists('i18n_menu_localize_tree')) {
    $menu = i18n_menu_localize_tree($menu);
  }

  // For custom $menus and menus built all the way from the top-level we
  // don't need to "create" the specific sub-menu and we need to get the title
  // from the $menu_name since there is no "parent item" array.
  // Create the specific menu if we have a mlid.
  if (!empty($mlid)) {
    // Load the parent menu item.
    $item = menu_link_load($mlid);
    $title = check_plain($item['title']);
    $parent_depth = $item['depth'];
    // Narrow down the full menu to the specific sub-tree we need.
    for ($p = 1; $p < 10; $p++) {
      if ($sub_mlid = $item["p$p"]) {
        $subitem = menu_link_load($sub_mlid);
        $key = (50000 + $subitem['weight']) . ' ' . $subitem['title'] . ' ' . $subitem['mlid'];
        $menu = (isset($menu[$key]['below'])) ? $menu[$key]['below'] : $menu;
      }
    }
  }
  else {
    $result = db_query("SELECT title FROM {menu_custom} WHERE menu_name = :a", array(':a' => $menu_name))->fetchField();
    $title = check_plain($result);
  }

  $output['content'] = '';
  $output['subject'] = $title;
  if ($menu) {
    // Set the total menu depth counting from this parent if we need it.
    $depth = $sfsettings['depth'];
    $depth = ($sfsettings['depth'] > 0 && isset($parent_depth)) ? $parent_depth + $depth : $depth;

    $var = array(
      'id' => $id,
      'menu' => $menu,
      'depth' => $depth,
      'trail' => superfish_build_page_trail(menu_tree_page_data($menu_name)),
      'sfsettings' => $sfsettings
    );
    if ($menu_tree = theme('superfish_build', $var)) {
      if ($menu_tree['content']) {
        // Add custom HTML codes around the main menu.
        if ($sfsettings['wrapmul'] && strpos($sfsettings['wrapmul'], ',') !== FALSE) {
          $wmul = explode(',', $sfsettings['wrapmul']);
          // In case you just wanted to add something after the element.
          if (drupal_substr($sfsettings['wrapmul'], 0) == ',') {
            array_unshift($wmul, '');
          }
        }
        else {
          $wmul = array();
        }
        
        $output['content'] = isset($wmul[0]) ? $wmul[0] : '';
        
        if($id == 5)
        {
	        $output['content'] .= '<nav class="clearfix"> ';
	        $output['content'] .= '<ul id="superfish-' . $id . '"';
	        $output['content'] .= ' class="clearfix menu sf-menu sf-' . $menu_name . ' sf-' . $sfsettings['type'] . ' sf-style-' . $sfsettings['style'];
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-total-items-' . $menu_tree['total_children'] : '';
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-parent-items-' . $menu_tree['parent_children'] : '';
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-single-items-' . $menu_tree['single_children'] : '';
	        $output['content'] .= ($sfsettings['ulclass']) ? ' ' . $sfsettings['ulclass'] : '';
	        $output['content'] .= ($language->direction == 1) ? ' rtl' : '';
	        $output['content'] .= '">' . $menu_tree['content'] . '</ul>';
	        $output['content'] .= isset($wmul[1]) ? $wmul[1] : '';
			$output['content'] .= '<a href="" id="pull">Menu</a>'; 
	        $output['content'] .= '</nav> ';        

        }else{
        
	        $output['content'] .= '<ul id="superfish-' . $id . '"';
	        $output['content'] .= ' class="menu sf-menu sf-' . $menu_name . ' sf-' . $sfsettings['type'] . ' sf-style-' . $sfsettings['style'];
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-total-items-' . $menu_tree['total_children'] : '';
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-parent-items-' . $menu_tree['parent_children'] : '';
	        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-single-items-' . $menu_tree['single_children'] : '';
	        $output['content'] .= ($sfsettings['ulclass']) ? ' ' . $sfsettings['ulclass'] : '';
	        $output['content'] .= ($language->direction == 1) ? ' rtl' : '';
	        $output['content'] .= '">' . $menu_tree['content'] . '</ul>';
	        $output['content'] .= isset($wmul[1]) ? $wmul[1] : '';        
        }
      }
    }
  }
  
  return $output;
}


function _omega_image_superfish($variables) {
  global $user, $language;
  
  if(isset($variables['menu_name']))
  {
  	if($variables['menu_name'] == 'main-menu' && $variables['id'] == 5)
  	{
		  $id = $variables['id'];
		  $menu_name = $variables['menu_name'];
		  $mlid = $variables['mlid'];
		  $sfsettings = $variables['sfsettings'];
		
		  $menu = menu_tree_all_data($menu_name);
		
		  if (function_exists('i18n_menu_localize_tree')) {
		    $menu = i18n_menu_localize_tree($menu);
		  }
		
		  // For custom $menus and menus built all the way from the top-level we
		  // don't need to "create" the specific sub-menu and we need to get the title
		  // from the $menu_name since there is no "parent item" array.
		  // Create the specific menu if we have a mlid.
		  if (!empty($mlid)) {
		    // Load the parent menu item.
		    $item = menu_link_load($mlid);
		    $title = check_plain($item['title']);
		    $parent_depth = $item['depth'];
		    // Narrow down the full menu to the specific sub-tree we need.
		    for ($p = 1; $p < 10; $p++) {
		      if ($sub_mlid = $item["p$p"]) {
		        $subitem = menu_link_load($sub_mlid);
		        $key = (50000 + $subitem['weight']) . ' ' . $subitem['title'] . ' ' . $subitem['mlid'];
		        $menu = (isset($menu[$key]['below'])) ? $menu[$key]['below'] : $menu;
		      }
		    }
		  }
		  else {
		    $result = db_query("SELECT title FROM {menu_custom} WHERE menu_name = :a", array(':a' => $menu_name))->fetchField();
		    $title = check_plain($result);
		  }
		
		  $output['content'] = '';
		  $output['subject'] = $title;
		  if ($menu) {
		    // Set the total menu depth counting from this parent if we need it.
		    $depth = $sfsettings['depth'];
		    $depth = ($sfsettings['depth'] > 0 && isset($parent_depth)) ? $parent_depth + $depth : $depth;
		
		    $var = array(
		      'id' => $id,
		      'menu' => $menu,
		      'depth' => $depth,
		      'trail' => superfish_build_page_trail(menu_tree_page_data($menu_name)),
		      'sfsettings' => $sfsettings
		    );
		    if ($menu_tree = theme('superfish_build', $var)) {
		      if ($menu_tree['content']) {
		        // Add custom HTML codes around the main menu.
		        if ($sfsettings['wrapmul'] && strpos($sfsettings['wrapmul'], ',') !== FALSE) {
		          $wmul = explode(',', $sfsettings['wrapmul']);
		          // In case you just wanted to add something after the element.
		          if (drupal_substr($sfsettings['wrapmul'], 0) == ',') {
		            array_unshift($wmul, '');
		          }
		        }
		        else {
		          $wmul = array();
		        }
		        $output['content'] = isset($wmul[0]) ? $wmul[0] : '';
		        $output['content'] .= '<nav class="clearfix"> ';
		        $output['content'] .= '<ul id="superfish-' . $id . '"';
		        $output['content'] .= ' class="clearfix menu sf-menu sf-' . $menu_name . ' sf-' . $sfsettings['type'] . ' sf-style-' . $sfsettings['style'];
		        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-total-items-' . $menu_tree['total_children'] : '';
		        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-parent-items-' . $menu_tree['parent_children'] : '';
		        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-single-items-' . $menu_tree['single_children'] : '';
		        $output['content'] .= ($sfsettings['ulclass']) ? ' ' . $sfsettings['ulclass'] : '';
		        $output['content'] .= ($language->direction == 1) ? ' rtl' : '';
		        $output['content'] .= '">' . $menu_tree['content'] . '</ul>';
		        $output['content'] .= isset($wmul[1]) ? $wmul[1] : '';
    			$output['content'] .= '<a href="#" id="pull">Menu</a>'; 
		        $output['content'] .= '</nav> ';
		      }
		    }
		  }
		 
  		return $output;
  	}
  }  
}
 