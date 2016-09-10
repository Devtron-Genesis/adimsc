<?php
/**
 * @file
 * team_members_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function team_members_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function team_members_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function team_members_feature_node_info() {
  $items = array(
    'team_members' => array(
      'name' => t('Team Members'),
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
