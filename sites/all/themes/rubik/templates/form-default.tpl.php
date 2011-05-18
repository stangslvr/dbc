<div class='form form-layout-default clear-block'>
  <div class='column-main'><div class='column-wrapper clear-block'>
    
	<?php print drupal_render($form); ?>
    
  </div></div>
  <div class='column-side'><div class='column-wrapper clear-block'>
    
    <?php print drupal_render($sidebar); ?>
	
	<?php if ($_SERVER['REQUEST_URI']=='/node/add/photos' ) {
	echo '<div class="help_text"><img src="/sites/all/themes/rubik/images/photos_help_text.png"></div>';
	} elseif ($_SERVER['REQUEST_URI']=='/node/add/page' ) {
	echo '<div class="help_text"><img src="/sites/all/themes/rubik/images/page_help_text.png"></div>';
	} elseif ($_SERVER['REQUEST_URI']=='/node/add/news' ) {
	echo '<div class="help_text"><img src="/sites/all/themes/rubik/images/news_help_text.png"></div>';
	} elseif ($_SERVER['REQUEST_URI']=='/node/add/testimonials' ) {
	echo '<div class="help_text"><img src="/sites/all/themes/rubik/images/testimonial_help_text.png"></div>';	
	} else {
		echo('');
	}
		
	?>
	
  </div></div>
  <?php if (!empty($footer)): ?>
    <div class='column-footer'><div class='column-wrapper clear-block'><?php print drupal_render($footer); ?></div></div>
  <?php endif; ?>
  
  <div class='buttons'><?php print rubik_render_clone($buttons); ?></div>
</div>
