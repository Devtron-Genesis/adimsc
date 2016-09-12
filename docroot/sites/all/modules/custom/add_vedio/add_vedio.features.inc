<?php
/**
 * @file
 * add_vedio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function add_vedio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function add_vedio_node_info() {
  $items = array(
    'add_vedios' => array(
      'name' => t('Add Vedios'),
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
