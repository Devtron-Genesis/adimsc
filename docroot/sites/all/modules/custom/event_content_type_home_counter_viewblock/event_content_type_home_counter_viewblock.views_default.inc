<?php
/**
 * @file
 * event_content_type_home_counter_viewblock.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_content_type_home_counter_viewblock_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'adimsc_calander';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Adimsc Calander';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'php',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$dates = format_date($data->field_field_event_date[0][\'raw\'][\'countdown_timer\'],\'adimsc_calender_group\');
print($dates);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'field_countdown_integer';
  /* Field: Content: Event end date */
  $handler->display->display_options['fields']['field_event_end_date']['id'] = 'field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['table'] = 'field_data_field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['field'] = 'field_event_end_date';
  $handler->display->display_options['fields']['field_event_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_end_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_end_date']['settings'] = array(
    'format_type' => 'adimsc_calender_event_start',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$datess = format_date($data->field_field_event_date[0][\'raw\'][\'countdown_timer\'],\'adimsc_calender\');
print($datess);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-location">
[title]
</div>
<div class="event-date">
[php_1] - [field_event_end_date]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['id'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_countdown_timer']['field'] = 'field_event_date_countdown_timer';
  /* Contextual filter: Content: Event Date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_countdown_timer']['id'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['arguments']['field_event_date_countdown_timer']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_countdown_timer']['field'] = 'field_event_date_countdown_timer';
  $handler->display->display_options['arguments']['field_event_date_countdown_timer']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_countdown_timer']['summary']['format'] = 'default_summary';
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
  $handler->display->display_options['path'] = 'adimsc-calander';
  $translatables['adimsc_calander'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="event-location">
[title]
</div>
<div class="event-date">
[php_1] - [field_event_end_date]
</div>'),
    t('All'),
    t('Page'),
  );
  $export['adimsc_calander'] = $view;

  $view = new view();
  $view->name = 'home_upcoming_event_conter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Upcoming Event Conter';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Country Image */
  $handler->display->display_options['fields']['field_country_image']['id'] = 'field_country_image';
  $handler->display->display_options['fields']['field_country_image']['table'] = 'field_data_field_country_image';
  $handler->display->display_options['fields']['field_country_image']['field'] = 'field_country_image';
  $handler->display->display_options['fields']['field_country_image']['label'] = '';
  $handler->display->display_options['fields']['field_country_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_country_image']['element_wrapper_class'] = 'video-flag';
  $handler->display->display_options['fields']['field_country_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_country_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_country_image']['settings'] = array(
    'image_style' => 'home_event_counter_flag_image',
    'image_link' => '',
  );
  /* Field: Content: Event Country */
  $handler->display->display_options['fields']['field_events_country']['id'] = 'field_events_country';
  $handler->display->display_options['fields']['field_events_country']['table'] = 'field_data_field_events_country';
  $handler->display->display_options['fields']['field_events_country']['field'] = 'field_events_country';
  $handler->display->display_options['fields']['field_events_country']['label'] = '';
  $handler->display->display_options['fields']['field_events_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_events_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_events_country']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_events_country']['element_wrapper_class'] = 'country';
  $handler->display->display_options['fields']['field_events_country']['element_default_classes'] = FALSE;
  /* Field: Content: Event City */
  $handler->display->display_options['fields']['field_event_city']['id'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['table'] = 'field_data_field_event_city';
  $handler->display->display_options['fields']['field_event_city']['field'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['label'] = '';
  $handler->display->display_options['fields']['field_event_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_city']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_city']['element_wrapper_class'] = 'city';
  $handler->display->display_options['fields']['field_event_city']['element_default_classes'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_class'] = 'date , fa fa-calendar-check-o';
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['type'] = 'field_countdown_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'video-timer';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="video-description">
  <div class="video-title-area">
    <div class="video-flag">
      [field_country_image]
    </div>
    <div class="video-title">
      <h2>[field_events_country]<br>
      [field_event_city]</h2>
      <div class="date">
        <i aria-hidden="true" class="fa fa-calendar-check-o"></i>
        <span>[field_event_date_1]</span>
      </div>
    </div>
  </div>
  <div class="video-timer">
    [field_event_date]
    <div class="time-block">
      <span>Days</span> <span>hours</span> <span>Minutes</span>
      <span>secounds</span>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['home_upcoming_event_conter'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="video-description">
  <div class="video-title-area">
    <div class="video-flag">
      [field_country_image]
    </div>
    <div class="video-title">
      <h2>[field_events_country]<br>
      [field_event_city]</h2>
      <div class="date">
        <i aria-hidden="true" class="fa fa-calendar-check-o"></i>
        <span>[field_event_date_1]</span>
      </div>
    </div>
  </div>
  <div class="video-timer">
    [field_event_date]
    <div class="time-block">
      <span>Days</span> <span>hours</span> <span>Minutes</span>
      <span>secounds</span>
    </div>
  </div>
</div>'),
    t('Block'),
  );
  $export['home_upcoming_event_conter'] = $view;

  return $export;
}
