<?php
/**
 * @file
 * race_type_.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function race_type__field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_race_groups|node|race_type|form';
  $field_group->group_name = 'group_about_race_groups';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'race_type';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Race',
    'weight' => '3',
    'children' => array(
      0 => 'field_about_races',
      1 => 'field_about_race_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-race-groups field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_race_groups|node|race_type|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_race_group|node|race_type|form';
  $field_group->group_name = 'group_about_race_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'race_type';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Team',
    'weight' => '8',
    'children' => array(
      0 => 'field_about_team',
      1 => 'field_about_team_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-race-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_race_group|node|race_type|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Race');
  t('About Team');

  return $field_groups;
}
