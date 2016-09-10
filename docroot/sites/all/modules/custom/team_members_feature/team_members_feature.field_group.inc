<?php
/**
 * @file
 * team_members_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function team_members_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography_group|node|team_members|form';
  $field_group->group_name = 'group_biography_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'BIOGRAPHY',
    'weight' => '5',
    'children' => array(
      0 => 'field_biography_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-biography-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_biography_group|node|team_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_career_info_group|node|team_members|form';
  $field_group->group_name = 'group_career_info_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CAREER INFO',
    'weight' => '4',
    'children' => array(
      0 => 'field_career_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-career-info-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_career_info_group|node|team_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plamer_group|node|team_members|form';
  $field_group->group_name = 'group_plamer_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PLAMERS',
    'weight' => '6',
    'children' => array(
      0 => 'field_plamares_detail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-plamer-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_plamer_group|node|team_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team_member_profile|node|team_members|form';
  $field_group->group_name = 'group_team_member_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '3',
    'children' => array(
      0 => 'field_nationality',
      1 => 'field_place_date_of_birth',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-team-member-profile field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_team_member_profile|node|team_members|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teams_association_group|node|team_members|form';
  $field_group->group_name = 'group_teams_association_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'team_members';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teams Association',
    'weight' => '7',
    'children' => array(
      0 => 'field_associated_teams',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teams-association-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_teams_association_group|node|team_members|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('BIOGRAPHY');
  t('CAREER INFO');
  t('PLAMERS');
  t('Profile');
  t('Teams Association');

  return $field_groups;
}
