<?php
/**
 * @file
 * race_type_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function race_type__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function race_type__image_default_styles() {
  $styles = array();

  // Exported image style: race_types_images_style.
  $styles['race_types_images_style'] = array(
    'label' => 'Race Types Images Style',
    'effects' => array(
      7 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 281,
          'height' => 662,
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
function race_type__node_info() {
  $items = array(
    'race_type' => array(
      'name' => t('Race Type'),
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
