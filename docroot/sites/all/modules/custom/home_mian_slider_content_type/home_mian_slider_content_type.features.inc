<?php
/**
 * @file
 * home_mian_slider_content_type.features.inc
 */

/**
 * Implements hook_views_api().
 */
function home_mian_slider_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function home_mian_slider_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: home_slider.
  $styles['home_slider'] = array(
    'label' => 'Home Slider',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 550,
          'height' => 320,
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
function home_mian_slider_content_type_node_info() {
  $items = array(
    'home_slider_images' => array(
      'name' => t('Home Slider Images'),
      'base' => 'node_content',
      'description' => t('The images of this content type\'ll be shown on home page slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
