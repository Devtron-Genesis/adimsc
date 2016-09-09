<?php
/**
 * @file
 * race_type_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function race_type__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'race_types_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Race Types View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_owl-carosel-race-types-page';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Race Type Image */
  $handler->display->display_options['fields']['field_race_type_image']['id'] = 'field_race_type_image';
  $handler->display->display_options['fields']['field_race_type_image']['table'] = 'field_data_field_race_type_image';
  $handler->display->display_options['fields']['field_race_type_image']['field'] = 'field_race_type_image';
  $handler->display->display_options['fields']['field_race_type_image']['label'] = '';
  $handler->display->display_options['fields']['field_race_type_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_race_type_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_race_type_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_race_type_image']['type'] = 'owlcarousel_formatter';
  $handler->display->display_options['fields']['field_race_type_image']['settings'] = array(
    'settings_group' => 'owlcarousel_settings_owl-carosel-race-types-page',
    'image_style' => 'race_types_images_style',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="show-btn-default">for detailed information click bere</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'race_type' => 'race_type',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'race-types';
  $translatables['race_types_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="show-btn-default">for detailed information click bere</div>'),
    t('Page'),
  );
  $export['race_types_view'] = $view;

  return $export;
}
