<div class="node <?php print $classes; ?>" id="node-<?php print $node->nid; ?>">
  <div class="node-inner">

    <?php if (!$page): ?>
      <h2 class="title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <div class="content">
      
	  <div class="news_date"><?php print date('F  j, Y',$node->created); ?></div>
	  
	<?php if ($teaser): ?>
		
		<?php if ($node->field_news_body[0]['view'] ){ ?>
		<div class="news"><?php print $node->field_news_body[0]['view'] ?></div>
		<?php } ?>


  	<?php else: ?>
 	
		<?php if ($node->field_news_body[0]['view'] ){ ?>
		<div class="news"><?php print $node->field_news_body[0]['view'] ?></div>
		<?php } ?>
		<div class="news_read_more"><a href="/news">Read More Shop News...</a></div>
 
  	<?php endif; ?>  
	  
	  

	  
	  
	  
	  
    </div>


  </div> <!-- /node-inner -->
</div> <!-- /node-->