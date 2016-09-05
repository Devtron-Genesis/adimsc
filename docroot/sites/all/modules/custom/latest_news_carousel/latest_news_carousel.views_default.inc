<?php
/**
 * @file
 * latest_news_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function latest_news_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'latest_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_news-carosaul';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_image' => 'field_news_image',
    'changed' => 'changed',
    'changed_1' => 'changed_1',
    'field_news_detail' => 'field_news_detail',
  );
  /* Field: Content: News Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_image_carosaul',
    'image_link' => '',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'node';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'F';
  $handler->display->display_options['fields']['changed_1']['second_date_format'] = 'long';
  /* Field: Content: News Detail */
  $handler->display->display_options['fields']['field_news_detail']['id'] = 'field_news_detail';
  $handler->display->display_options['fields']['field_news_detail']['table'] = 'field_data_field_news_detail';
  $handler->display->display_options['fields']['field_news_detail']['field'] = 'field_news_detail';
  $handler->display->display_options['fields']['field_news_detail']['label'] = '';
  $handler->display->display_options['fields']['field_news_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_detail']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_news_detail']['settings'] = array(
    'trim_length' => '60',
  );
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
    'news' => 'news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'latest-news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['latest_news'] = array(
    t('Master'),
    t('Latest News'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['latest_news'] = $view;

  return $export;
}
