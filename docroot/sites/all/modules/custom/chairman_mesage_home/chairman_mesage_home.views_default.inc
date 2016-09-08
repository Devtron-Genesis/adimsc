<?php
/**
 * @file
 * chairman_mesage_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function chairman_mesage_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'chairman_home_message_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Chairman Home message view';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Chairman Image */
  $handler->display->display_options['fields']['field_chairman_image']['id'] = 'field_chairman_image';
  $handler->display->display_options['fields']['field_chairman_image']['table'] = 'field_data_field_chairman_image';
  $handler->display->display_options['fields']['field_chairman_image']['field'] = 'field_chairman_image';
  $handler->display->display_options['fields']['field_chairman_image']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chairman_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_chairman_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Chairman Message */
  $handler->display->display_options['fields']['field_field_chairman_message']['id'] = 'field_field_chairman_message';
  $handler->display->display_options['fields']['field_field_chairman_message']['table'] = 'field_data_field_field_chairman_message';
  $handler->display->display_options['fields']['field_field_chairman_message']['field'] = 'field_field_chairman_message';
  $handler->display->display_options['fields']['field_field_chairman_message']['label'] = '';
  $handler->display->display_options['fields']['field_field_chairman_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_chairman_message']['element_label_colon'] = FALSE;
  /* Field: Content: Chairman Name */
  $handler->display->display_options['fields']['field_chairman_name']['id'] = 'field_chairman_name';
  $handler->display->display_options['fields']['field_chairman_name']['table'] = 'field_data_field_chairman_name';
  $handler->display->display_options['fields']['field_chairman_name']['field'] = 'field_chairman_name';
  $handler->display->display_options['fields']['field_chairman_name']['label'] = '';
  $handler->display->display_options['fields']['field_chairman_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chairman_name']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section>
  <div class="section-cover">
    <div class="content-area">
      <div class="chairman-div">
        <div class="chairman-img img-responsive">
          [field_chairman_image]
          <p>[field_chairman_name] <a href="#">Chairman</a></p>
        </div>
        <div class="chairman-bio">
          [field_field_chairman_message]
        </div>
      </div>
    </div>
  </div>
</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'chairman_message' => 'chairman_message',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'chairman-message';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['chairman_home_message_view'] = array(
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
    t('<section>
  <div class="section-cover">
    <div class="content-area">
      <div class="chairman-div">
        <div class="chairman-img img-responsive">
          [field_chairman_image]
          <p>[field_chairman_name] <a href="#">Chairman</a></p>
        </div>
        <div class="chairman-bio">
          [field_field_chairman_message]
        </div>
      </div>
    </div>
  </div>
</section>'),
    t('Page'),
    t('Block'),
  );
  $export['chairman_home_message_view'] = $view;

  return $export;
}
