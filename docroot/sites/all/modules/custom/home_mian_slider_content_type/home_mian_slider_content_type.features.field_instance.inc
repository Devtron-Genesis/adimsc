<?php
/**
 * @file
 * home_mian_slider_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function home_mian_slider_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-home_slider_images-field_home_slider_images'.
  $field_instances['node-home_slider_images-field_home_slider_images'] = array(
    'bundle' => 'home_slider_images',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_home_slider_images',
    'label' => 'Home Slider Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'home_slider',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Slider Images');

  return $field_instances;
}
