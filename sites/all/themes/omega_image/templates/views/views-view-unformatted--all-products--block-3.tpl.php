<?php
$count = 0;
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
<?php $count++?>
<?php if($count % 6 == 0):?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' omega"';  } ?>>
    <?php print $row; ?>
  </div>
<?php elseif($count % 6 == 1):?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' alpha"';  } ?>>
    <?php print $row; ?>
  </div>
<?php else:?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endif; ?> 
<?php endforeach; ?>