<?php

/**
 * Implementation of hook_content_default_fields().
 */
function news_content_default_fields() {
  $fields = array();

  // Exported field: field_news_body
  $fields['news-field_news_body'] = array(
    'field_name' => 'field_news_body',
    'type_name' => 'news',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_news_body][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'News',
      'weight' => '-4',
      'description' => 'Input the shop news into this area.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_news_image
  $fields['news-field_news_image'] = array(
    'field_name' => 'field_news_image',
    'type_name' => 'news',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => 0,
    'list_default' => 1,
    'description_field' => 0,
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 1,
      'insert_styles' => array(
        'imagecache_Image' => 'imagecache_Image',
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_photo_gallery_bg' => 0,
        'imagecache_photo_gallery_front' => 0,
        'imagecache_photo_gallery_sm' => 0,
        'imagecache_photo_gallery_thumb' => 0,
      ),
      'insert_default' => 'imagecache_Image',
      'insert_class' => 'news_photo',
      'insert_width' => '',
      'label' => 'Image',
      'weight' => '3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('News');

  return $fields;
}
