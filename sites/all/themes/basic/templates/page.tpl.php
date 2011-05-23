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
    <?php print $scripts; ?>
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

    <div id="main" class="clearfix">
	
	 <div class="roundedcornr_box">
	 <div class="roundedcornr_top"><div></div></div>
	 <div class="roundedcornr_content">
    
      <div id="content">
        <div id="content-inner" class="inner column center">
		
		
		
		

			
			<?php if ($content_top): ?>
			            <div id="content-top">
			              <?php print $content_top; ?>
			            </div> <!-- /#content-top -->
			          <?php endif; ?>
			
			          <?php if ($title|| $messages || $help || $tabs): ?>
			            <div id="content-header">
			
						  <?php if ($tabs && !$is_front): ?>
			                <div class="tabs"><?php print $tabs; ?></div>
			              <?php endif; ?>
						  
			              <?php if ($title): ?>
			                <h1 class="title"><?php print $title; ?></h1>
			              <?php endif; ?>
			
			              <?php print $messages; ?>
			
			              <?php print $help; ?> 
			

			
			            </div> <!-- /#content-header -->
			          <?php endif; ?>
			
			          <div id="content-area">
			            <?php print $content; ?>
			          </div> <!-- /#content-area -->
			
			          <?php if ($content_bottom): ?>
			            <div id="content-bottom">
			              <?php print $content_bottom; ?>
			            </div><!-- /#content-bottom -->
			          <?php endif; ?>
			
			          </div>
			
			

		
		
	        </div> <!-- /content-inner /content -->	
		
		
        <?php if ($left): ?>
          <div id="sidebar-first" class="column sidebar first">
		  
		  		
		   
		      
		  
            <div id="sidebar-first-inner" class="inner">
              <?php print $left; ?>
            </div>
			
			</div>
	   		
			</div>	
			
          
        <?php endif; ?> <!-- /sidebar-left -->
 


     </div>
	<div class="roundedcornr_bottom"><div></div></div>
	</div>
	
	

	  <!-- ______________________ FOOTER _______________________ -->

      <?php if(!empty($footer_message) || !empty($footer_block)): ?>
        <div id="footer">
          <?php print $footer_message; ?>
          <?php print $footer_block; ?>
        </div> <!-- /footer -->
      <?php endif; ?>
	  
	  <div class="car"><img src="../sites/all/themes/basic/images/car.png"></div>
	  
</div> <!-- /page -->
    <?php print $closure; ?>
  </body>
</html>