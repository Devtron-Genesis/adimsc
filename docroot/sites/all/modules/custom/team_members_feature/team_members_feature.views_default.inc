<?php
/**
 * @file
 * team_members_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function team_members_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'team_member';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team Member';
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
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_team-members';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['type'] = 'owlcarousel_formatter';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'settings_group' => 'owlcarousel_settings_team-members',
    'image_style' => 'medium',
  );
  /* Field: Content: Member Name */
  $handler->display->display_options['fields']['field_member_name_1']['id'] = 'field_member_name_1';
  $handler->display->display_options['fields']['field_member_name_1']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name_1']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_member_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name_1']['element_label_colon'] = FALSE;
  /* Field: Content: Place & Date of Birth */
  $handler->display->display_options['fields']['field_place_date_of_birth']['id'] = 'field_place_date_of_birth';
  $handler->display->display_options['fields']['field_place_date_of_birth']['table'] = 'field_data_field_place_date_of_birth';
  $handler->display->display_options['fields']['field_place_date_of_birth']['field'] = 'field_place_date_of_birth';
  $handler->display->display_options['fields']['field_place_date_of_birth']['label'] = '';
  $handler->display->display_options['fields']['field_place_date_of_birth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_place_date_of_birth']['element_label_colon'] = FALSE;
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_nationality']['id'] = 'field_nationality';
  $handler->display->display_options['fields']['field_nationality']['table'] = 'field_data_field_nationality';
  $handler->display->display_options['fields']['field_nationality']['field'] = 'field_nationality';
  $handler->display->display_options['fields']['field_nationality']['label'] = '';
  $handler->display->display_options['fields']['field_nationality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nationality']['element_label_colon'] = FALSE;
  /* Field: Content: Career Detail */
  $handler->display->display_options['fields']['field_career_detail']['id'] = 'field_career_detail';
  $handler->display->display_options['fields']['field_career_detail']['table'] = 'field_data_field_career_detail';
  $handler->display->display_options['fields']['field_career_detail']['field'] = 'field_career_detail';
  $handler->display->display_options['fields']['field_career_detail']['label'] = '';
  $handler->display->display_options['fields']['field_career_detail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_career_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_career_detail']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_career_detail']['multi_type'] = 'ul';
  /* Field: Content: Biography Detail */
  $handler->display->display_options['fields']['field_biography_detail']['id'] = 'field_biography_detail';
  $handler->display->display_options['fields']['field_biography_detail']['table'] = 'field_data_field_biography_detail';
  $handler->display->display_options['fields']['field_biography_detail']['field'] = 'field_biography_detail';
  $handler->display->display_options['fields']['field_biography_detail']['label'] = '';
  $handler->display->display_options['fields']['field_biography_detail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_biography_detail']['element_label_colon'] = FALSE;
  /* Field: Content: Plamares Detail */
  $handler->display->display_options['fields']['field_plamares_detail']['id'] = 'field_plamares_detail';
  $handler->display->display_options['fields']['field_plamares_detail']['table'] = 'field_data_field_plamares_detail';
  $handler->display->display_options['fields']['field_plamares_detail']['field'] = 'field_plamares_detail';
  $handler->display->display_options['fields']['field_plamares_detail']['label'] = '';
  $handler->display->display_options['fields']['field_plamares_detail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plamares_detail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plamares_detail']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_plamares_detail']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="left-section">
  [field_member_image]
  <h1>TEAM MEMBERS</h1>
</div>
<div class="right-section">
  <h2>[field_member_name_1]</h2>
  <div class="bio-block">
    <span>Profile</span>
    <ul>
      <li>Nationality : [field_nationality]</li>
      <li>Place & Date of Birth: [field_place_date_of_birth]</li>
    </ul>
  </div>
  <div class="bio-block">
    <span>CAREER INFO:</span> [field_career_detail]
  </div>
  <div class="bio-block">
    <span>biography</span>
    <p>[field_biography_detail]</p>
  </div>
  <div class="bio-block">
    <span>plamares</span> [field_plamares_detail]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Associated Teams (field_associated_teams) */
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['id'] = 'field_associated_teams_target_id';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['table'] = 'field_data_field_associated_teams';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['field'] = 'field_associated_teams_target_id';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_associated_teams_target_id']['summary_options']['items_per_page'] = '25';
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
    'team_members' => 'team_members',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'd-team-members';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'team_members');
  $handler->display->display_options['block_description'] = 'team-member-block';
  $translatables['team_member'] = array(
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
    t('<div class="left-section">
  [field_member_image]
  <h1>TEAM MEMBERS</h1>
</div>
<div class="right-section">
  <h2>[field_member_name_1]</h2>
  <div class="bio-block">
    <span>Profile</span>
    <ul>
      <li>Nationality : [field_nationality]</li>
      <li>Place & Date of Birth: [field_place_date_of_birth]</li>
    </ul>
  </div>
  <div class="bio-block">
    <span>CAREER INFO:</span> [field_career_detail]
  </div>
  <div class="bio-block">
    <span>biography</span>
    <p>[field_biography_detail]</p>
  </div>
  <div class="bio-block">
    <span>plamares</span> [field_plamares_detail]
  </div>
</div>'),
    t('All'),
    t('Page'),
    t('Block'),
    t('team-member-block'),
  );
  $export['team_member'] = $view;

  return $export;
}
