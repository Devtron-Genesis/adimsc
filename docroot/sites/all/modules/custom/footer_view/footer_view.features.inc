<?php
/**
 * @file
 * footer_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function footer_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function footer_view_image_default_styles() {
  $styles = array();

  // Exported image style: footer_images.
  $styles['footer_images'] = array(
    'label' => 'Footer Images',
    'effects' => array(
      6 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 22,
          'height' => 17,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
