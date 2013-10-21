<header id="navbar" role="banner" class="navbar navbar-fixed-top navbar-inverse">
  <div class="navbar-inner">
    <div class="container">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>

      <?php if (!empty($logo)): ?>
        <a class="logo pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <h1 id="site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
        </h1>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="nav-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </div>
</header>

<?php /* kpr($variables); */ ?>
<!-- Highlighted section -->
<div id="highlighted" class="jumbotron">
	<div class="container">
		<div class="row">
			<div class="span12">
				<div class="row">
					<div class="span4">
				      <?php if (!empty($variables['search_box'])): ?>
				        	<?php print render($variables['search_box']); ?>
				      <?php endif; ?>
					</div>
					<div class="span8">
						<?php if (!empty($page['highlighted'])): ?>
							<?php print render($page['highlighted']); ?>
						<?php endif; ?>
					</div>
				</div>
			</div>
			<div class="span12">
				<?php 	$catchphrases = views_embed_view('catchphrases') ;
						print $catchphrases; ?>
			</div>			
			<div id="grapepickers" class="span12">	
				
				<header role="banner" id="page-header">
					<?php if (!empty($site_slogan)): ?>
					  <p class="lead"><?php /* print $site_slogan; */ ?></p>
					<?php endif; ?>
					
					<?php print render($page['header']); ?>
				</header> <!-- /#header -->			
				<?php	$grapepickers = views_embed_view('illustrations') ;
						print $grapepickers;
				?>
			</div>
		</div>
	</div>
</div>
<!-- end Highlighted section -->

<!-- Main section -->
<section id="main-content">
	<div class="main-container container">
		<div class="span12">
			<?php if(!empty($variables['products-submenu'])){ print $variables['products-submenu'];} ?>
		</div>
		<p>&nbsp;</p>	
		<p>&nbsp;</p>
	  <header role="banner" id="page-header">
	    <?php if (!empty($site_slogan)): ?>
	      <p class="lead"><?php /* print $site_slogan; */ ?></p>
	    <?php endif; ?>
	
	    <?php print render($page['header']); ?>
	  </header> <!-- /#header -->
	
	  <div class="row">
	
	    <?php if (!empty($page['sidebar_first'])): ?>
	      <aside class="span3" role="complementary">
	        <?php print render($page['sidebar_first']); ?>
	      </aside>  <!-- /#sidebar-first -->
	    <?php endif; ?>  
	
	    <section class="<?php print _bootstrap_content_span($columns); ?>">  
	
	      
	      <?php /* if (!empty($breadcrumb)): print $breadcrumb; endif; */?>
	      <a id="main-content"></a>
	      <?php print render($title_prefix); ?>
	      <?php if (!empty($title)): ?>
	        <h1 class="page-header"><?php print $title; ?></h1>
	      <?php endif; ?>
	      <?php print render($title_suffix); ?>
	      <?php print $messages; ?>
	      <?php if (!empty($tabs)): ?>
	        <?php print render($tabs); ?>
	      <?php endif; ?>
	      <?php if (!empty($page['help'])): ?>
	        <div class="well"><?php print render($page['help']); ?></div>
	      <?php endif; ?>
	      <?php if (!empty($action_links)): ?>
	        <ul class="action-links"><?php print render($action_links); ?></ul>
	      <?php endif; ?>
	      <?php hide($page['content']['system_main']['pager']); 
	      		print render($page['content']); 
	      ?>
	    </section>
	
	  </div>
	</div>
</section>
<!-- end Main section -->

<!-- Footer section -->
<div id="footer" class="jumbotron">
	<footer class="footer container">
	  <div class="row">
	  	<div class="span3">
		<?php if(!empty($variables['suppliers-menu'])){ print $variables['suppliers-menu'];} ?>
		<?php if(!empty($variables['menu-user'])){ print $variables['menu-user'];} ?>
	  	</div>
	  	<div class="span3">
		<?php if(!empty($variables['countries-menu'])){ print $variables['countries-menu'];} ?>
	  	</div>
	  	<div class="span3">
		<?php if(!empty($variables['products-menu'])){ print $variables['products-menu'];} ?>
	  	</div>
	  	<div class="span3">
		<?php if(!empty($variables['menu-main'])){ print $variables['menu-main'];} ?>
	  	</div>
	  </div>
	</footer>
</div>

<div id="footer-bottom" class="jumbotron">
	<footer class="footer container">
		<?php if(!empty($variables['menu-info'])){ print $variables['menu-info'];} ?>
	</footer>
</div>
<!-- end Footer section -->

