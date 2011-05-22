<?php

/**
 * Implementation of hook_content_default_fields().
 */
function testimonial_content_default_fields() {
  $fields = array();

  // Exported field: field_owners_name
  $fields['testimonials-field_owners_name'] = array(
    'field_name' => 'field_owners_name',
    'type_name' => 'testimonials',
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
          '_error_element' => 'default_value_widget][field_owners_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owners Name',
      'weight' => '32',
      'description' => 'Put the name of the person who wrote this testimonial in this field.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_test_gallery_ref
  $fields['testimonials-field_test_gallery_ref'] = array(
    'field_name' => 'field_test_gallery_ref',
    'type_name' => 'testimonials',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'photos' => 'photos',
      'news' => 0,
      'page' => 0,
      'testimonials' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to Photo Gallery',
      'weight' => '34',
      'description' => 'If you have a photo gallery of the vehicle referred to in the testimonial, select it from this list and a link will be created for you.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_test_vehicle
  $fields['testimonials-field_test_vehicle'] = array(
    'field_name' => 'field_test_vehicle',
    'type_name' => 'testimonials',
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
          '_error_element' => 'default_value_widget][field_test_vehicle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Vehicle Description',
      'weight' => '33',
      'description' => 'Ex. 1967 Ford Mustang',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_testimonial
  $fields['testimonials-field_testimonial'] = array(
    'field_name' => 'field_testimonial',
    'type_name' => 'testimonials',
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
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_testimonial][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Testimonial',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link to Photo Gallery');
  t('Owners Name');
  t('Testimonial');
  t('Vehicle Description');

  return $fields;
}
