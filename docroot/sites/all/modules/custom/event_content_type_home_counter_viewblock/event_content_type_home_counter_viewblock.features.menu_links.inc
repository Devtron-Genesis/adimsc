<?php
/**
 * @file
 * event_content_type_home_counter_viewblock.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function event_content_type_home_counter_viewblock_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_team-calender:team-calender.
  $menu_links['main-menu_team-calender:team-calender'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'team-calender',
    'router_path' => 'team-calender',
    'link_title' => 'Team calender',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'external' => 0,
      'identifier' => 'main-menu_team-calender:team-calender',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_event-calender:adimsc-calander',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Team calender');

  return $menu_links;
}
