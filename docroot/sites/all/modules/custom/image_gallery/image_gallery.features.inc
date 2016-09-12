<?php
/**
 * @file
 * image_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function image_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function image_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: photo_gallery.
  $styles['photo_gallery'] = array(
    'label' => 'Photo Gallery',
    'effects' => array(
      71 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 245,
          'height' => 184,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function image_gallery_node_info() {
  $items = array(
    'add_images' => array(
      'name' => t('Add Images'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
