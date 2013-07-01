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
	  <div class="row">
		<?php 	$featured_product = views_embed_view('featured_product') ;
				print $featured_product; ?>
	  </div>
	  <div class="row">
		<?php 	$frontpage_news = views_embed_view('frontpage_news') ;
				print $frontpage_news; ?>
	  </div>
	  <div class="row">
		<?php 	$frontpage_products_block = block_load('views', 'product-block');      
				$frontpage_products = drupal_render(_block_get_renderable_array(_block_render_blocks(array($frontpage_products_block))));        
				print $frontpage_products; ?>
	  </div>
	  <div class="row">
	  	<div class="span2 offset10">
	  		<p>&nbsp;</p>
	  		<p>&nbsp;</p>
	  		<a href="/products"><button class="btn btn-large btn-inverse" type="button">View More Products</button></a>
	  		<p>&nbsp;</p>
	  	</div>
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







