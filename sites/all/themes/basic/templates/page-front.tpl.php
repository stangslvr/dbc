<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
	
	<!--[if lte IE 6]><style type="text/css" media="all">@import "<?php print $base_path . path_to_theme() ?>/css/ie6.css";</style><![endif]-->
    <!--[if IE 7]><style type="text/css" media="all">@import "<?php print $base_path . path_to_theme() ?>/css/ie7.css";</style><![endif]-->
	<!--[if IE 8]><style type="text/css" media="all">@import "<?php print $base_path . path_to_theme() ?>/css/ie7.css";</style><![endif]-->


<!-- include Cycle plugin -->
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.2.6/jquery.min.js"></script>
<script type="text/javascript" src="/sites/all/themes/basic/jquery.cycle.min.js"></script>

<!--  initialize the slideshow when the DOM is ready -->
<script type="text/javascript">
$(document).ready(function() {
    $('.slideshow').cycle({
		fx:      'scrollLeft', 
    	speed:    1500, 
    	timeout:  7000 
	});
});
</script>
</head>

  <body class="<?php print $body_classes; ?>">
      <div class="PageBackgroundGradient"></div>
    <div class="PageBackgroundGlare">
      <div class="PageBackgroundGlareImage"></div>
    </div>
  
<div id="page">

    <!-- ______________________ HEADER _______________________ -->

    <div id="header">

        <div id="slogan">
            <h1 id="site_slogan">
              <?php print $site_slogan; ?>
            </h1>
		</div> <!-- /name-and-slogan -->
	  
	  
	  <div id="logo-title">
		<div id="logo">
        <?php if (!empty($logo)): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
          </a>
        <?php endif; ?>
		</div>
		


      </div> <!-- /logo-title -->
       
	  <?php if (!empty($primary_links)): ?>
          <div id="menu_navigation">
            <?php if (!empty($primary_links)){ print theme('links', $primary_links, array('id' => 'primary', 'class' => 'links main-menu')); } ?>
          </div> <!-- /navigation -->
      <?php endif; ?>
		
      <?php if ($header): ?>
        <div id="header-region">
          <?php print $header; ?>
        </div>
      <?php endif; ?>

    </div> <!-- /header -->

    <!-- ______________________ MAIN _______________________ -->

    <div id="main_front" class="clearfix">
		

<div class="slideshow_holder">
	<div class="slideshow">
		<a href="/node/3"><img src="/sites/all/themes/basic/images/front-slide-0.jpg" /></a>
		<a href="/node/3"><img src="/sites/all/themes/basic/images/front-slide-1.jpg" /></a>
		<a href="/node/3"><img src="/sites/all/themes/basic/images/front-slide-2.jpg" /></a>
	</div>
</div>
		
	<div class="front_block_holder_1"><h2>Photos</h2><?php  print views_embed_view('Photos','block_3', '');  ?></div>
	<div class="front_block_holder_2"><h2>Shop News</h2><?php  print views_embed_view('News','block_1', '');  ?></div>
	<div class="front_block_holder_3"><h2>Testimonials</h2><?php  print views_embed_view('Testimonials','block_1', '');  ?></div>
	
	</div>
	
	

	  <!-- ______________________ FOOTER _______________________ -->

      <?php if(!empty($footer_message) || !empty($footer_block)): ?>
        <div id="footer">
          <?php print $footer_message; ?>
          <?php print $footer_block; ?>
        </div> <!-- /footer -->
      <?php endif; ?>
	  

</div> <!-- /page -->
    <?php print $closure; ?>
  </body>
</html>