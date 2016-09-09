<?php
/**
 * @file
 * chairman_mesage_home.features.inc
 */

/**
 * Implements hook_views_api().
 */
function chairman_mesage_home_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function chairman_mesage_home_node_info() {
  $items = array(
    'chairman_message' => array(
      'name' => t('Chairman Message'),
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
