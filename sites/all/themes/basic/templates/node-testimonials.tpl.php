<div class="node <?php print $classes; ?>" id="node-<?php print $node->nid; ?>">
  <div class="node-inner">
  


    <div class="content">
		<div class="upper_quote"><img src="/sites/all/themes/basic/images/topquote.png"></div>
		<div class="testimonials">
		<div class="testimonial_body"><?php print $node->field_testimonial[0]['view'] ?></div>
		<div class="testimonial_owner"><?php print $node->field_owners_name[0]['view'] ?></div>
		<div class="testimonial_vehicle"><?php print $node->field_test_vehicle[0]['view'] ?></div>
		</div>
	<div class="lower_quote"><img src="/sites/all/themes/basic/images/bottomquote.png"></div>

	<?php if ($node->field_test_gallery_ref[0]['view']){ ?>
	<div class="testimonial_gallery"><span class="link_text">View This Project's Gallery:</span>  <?php print $node->field_test_gallery_ref[0]['view'] ?></div>
	<?php } ?>
	  
	  
    </div>


  </div> <!-- /node-inner -->
</div> <!-- /node-->