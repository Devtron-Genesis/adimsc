<?php
/**
 * @file
 * home_youtube_video_content_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_youtube_video_content__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'youtube_home_vedio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Youtube Home Vedio';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Youtube Video link  */
  $handler->display->display_options['fields']['field_youtube_video_link_']['id'] = 'field_youtube_video_link_';
  $handler->display->display_options['fields']['field_youtube_video_link_']['table'] = 'field_data_field_youtube_video_link_';
  $handler->display->display_options['fields']['field_youtube_video_link_']['field'] = 'field_youtube_video_link_';
  $handler->display->display_options['fields']['field_youtube_video_link_']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video_link_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video_link_']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_youtube_video_link_']['settings'] = array(
    'youtube_size' => 'custom',
    'youtube_width' => '535',
    'youtube_height' => '300',
    'youtube_autoplay' => 0,
    'youtube_loop' => 0,
    'youtube_showinfo' => 1,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
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
    'home_youtube_video' => 'home_youtube_video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'youtube-home-vedio';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $translatables['youtube_home_vedio'] = array(
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
    t('Page'),
    t('Block'),
  );
  $export['youtube_home_vedio'] = $view;

  return $export;
}
