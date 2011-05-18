<div class="node <?php print $classes; ?>" id="node-<?php print $node->nid; ?>">
  <div class="node-inner">
  


    <div class="content">


	<?php if ($node->field_gallery_year_make_model[0]['value'] ){ ?>
	<div class="gallery_model">Project: <?php print $node->field_gallery_year_make_model[0]['value'] ?></div>
	<?php } ?>
	
	<?php if ($node->field_gallery_owner[0]['view'] ){ ?>
	<div class="gallery_owner">Owner: <?php print $node->field_gallery_owner[0]['view'] ?></div>
	<?php } ?>
	
	<?php if ($node->field_gallery_project_desc[0]['view'] ){ ?>
	<div class="gallery_body"> <?php print $node->field_gallery_project_desc[0]['view'] ?></div>
	<?php } ?>
	
    <div class="gallery_prev"><a href="#" onclick="$.galleria.prev(); return false;"><img src="/sites/all/themes/basic/images/prev.png"></a></div>
    <div class="gallery_next"><a href="#" onclick="$.galleria.next(); return false;"><img src="/sites/all/themes/basic/images/next.png"></a></div>
	
	<div class="gallery_photos"> <?php print $node->field_photos[0]['view'] ?></div>
	
	<div class="gallery_category"> <?php print $node->taxonomy[0]['name'] ?></div>
	  
	  
    </div>


  </div> <!-- /node-inner -->
</div> <!-- /node-->