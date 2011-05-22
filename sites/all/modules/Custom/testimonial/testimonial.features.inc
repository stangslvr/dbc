<?php

/**
 * Implementation of hook_node_info().
 */
function testimonial_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials'),
      'module' => 'features',
      'description' => t('Enter Customer Testimonials Here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function testimonial_views_api() {
  return array(
    'api' => '2',
  );
}
