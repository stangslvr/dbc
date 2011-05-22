<?php

/**
 * Implementation of hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => t('Shop News'),
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
function news_views_api() {
  return array(
    'api' => '2',
  );
}
