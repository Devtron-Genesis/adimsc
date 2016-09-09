<?php
/**
 * @file
 * footer_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function footer_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'footer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_footer-view';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Country Flag Image */
  $handler->display->display_options['fields']['field_country_image']['id'] = 'field_country_image';
  $handler->display->display_options['fields']['field_country_image']['table'] = 'field_data_field_country_image';
  $handler->display->display_options['fields']['field_country_image']['field'] = 'field_country_image';
  $handler->display->display_options['fields']['field_country_image']['label'] = '';
  $handler->display->display_options['fields']['field_country_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_country_image']['settings'] = array(
    'image_style' => 'footer_images',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'field_countdown_integer';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$datess = format_date($data->field_field_event_date[0][\'raw\'][\'countdown_timer\'],\'adimsc_footer_event\');
print(\' - \'.$datess);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['id'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['field'] = 'field_event_date_countdown_timer';
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
    'events' => 'events',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_countdown_timer']['id'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['filters']['field_event_date_countdown_timer']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_countdown_timer']['field'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['filters']['field_event_date_countdown_timer']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_countdown_timer']['value']['value'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'footer';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['footer'] = array(
    t('Master'),
    t('Footer'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['footer'] = $view;

  return $export;
}
