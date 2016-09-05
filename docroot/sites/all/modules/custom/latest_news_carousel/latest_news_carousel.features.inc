<?php
/**
 * @file
 * latest_news_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function latest_news_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function latest_news_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: news_image_carosaul.
  $styles['news_image_carosaul'] = array(
    'label' => 'News Image Carosaul',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 140,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
