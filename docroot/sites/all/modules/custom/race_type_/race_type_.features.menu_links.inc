<?php
/**
 * @file
 * race_type_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function race_type__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_race--drivers:race-types.
  $menu_links['main-menu_race--drivers:race-types'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'race-types',
    'router_path' => 'race-types',
    'link_title' => 'Race & drivers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'external' => 0,
      'identifier' => 'main-menu_race--drivers:race-types',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Race & drivers');

  return $menu_links;
}
