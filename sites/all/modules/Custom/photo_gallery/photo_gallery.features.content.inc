<?php

/**
 * Implementation of hook_content_default_fields().
 */
function photo_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery_owner
  $fields['photos-field_gallery_owner'] = array(
    'field_name' => 'field_gallery_owner',
    'type_name' => 'photos',
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gallery_owner][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owners Name',
      'weight' => '-3',
      'description' => 'Enter the owner of this projects name.  This will be displayed to the public so make sure the owner would be ok with first and last name, otherwise just used first name in this field.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_gallery_project_desc
  $fields['photos-field_gallery_project_desc'] = array(
    'field_name' => 'field_gallery_project_desc',
    'type_name' => 'photos',
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gallery_project_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project Description',
      'weight' => '-1',
      'description' => 'Describe the Project in detail as an overview.  Then each photo can have a simple description of what you are seeing.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_gallery_year_make_model
  $fields['photos-field_gallery_year_make_model'] = array(
    'field_name' => 'field_gallery_year_make_model',
    'type_name' => 'photos',
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
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gallery_year_make_model][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Year, Make & Model',
      'weight' => '-2',
      'description' => 'What is the year, make and model of this project.  Ex. 1956 Chevy Nomad',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_photos
  $fields['photos-field_photos'] = array(
    'field_name' => 'field_photos',
    'type_name' => 'photos',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield_galleria',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
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
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_alt' => 0,
        'taxonomy_1' => 0,
        'cck_field_gallery_owner' => 0,
        'cck_field_gallery_year_make_model' => 0,
        'cck_field_gallery_project_desc' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'resolution' => '200x150',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'label' => 'Photos',
      'weight' => 0,
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Owners Name');
  t('Photos');
  t('Project Description');
  t('Year, Make & Model');

  return $fields;
}
