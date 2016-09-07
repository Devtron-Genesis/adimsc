<?php
/**
 * @file
 * news_content_type_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_content_type_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function news_content_type_view_image_default_styles() {
  $styles = array();

  // Exported image style: all_news_big.
  $styles['all_news_big'] = array(
    'label' => 'All News Big',
    'effects' => array(
      12 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 740,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: all_news_scroll.
  $styles['all_news_scroll'] = array(
    'label' => 'All News Scroll',
    'effects' => array(
      11 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 80,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_latest_news_corusal.
  $styles['home_latest_news_corusal'] = array(
    'label' => 'Home Latest News Corusal',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 200,
          'height' => 180,
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
function news_content_type_view_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Post all news about ADIMSC'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
