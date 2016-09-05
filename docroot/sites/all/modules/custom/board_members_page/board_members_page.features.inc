<?php
/**
 * @file
 * board_members_page.features.inc
 */

/**
 * Implements hook_views_api().
 */
function board_members_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function board_members_page_node_info() {
  $items = array(
    'board_members' => array(
      'name' => t('Board Members'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Designation'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
