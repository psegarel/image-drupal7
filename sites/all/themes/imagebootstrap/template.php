<?php
function imagebootstrap_js_alter(&$javascript) 
{
  // Replace with current version.
  $jQuery_version = '1.7.2';
  $javascript['misc/jquery.js']['data'] = libraries_get_path('jquery').'/jquery-1.7.2.min.js';
  $javascript['misc/jquery.js']['version'] = $jQuery_version;

}