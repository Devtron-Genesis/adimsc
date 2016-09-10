<?php
/**
 * @file
 * home_youtube_video_content_.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function home_youtube_video_content__field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-home_youtube_video-field_youtube_video_link_'.
  $field_instances['node-home_youtube_video-field_youtube_video_link_'] = array(
    'bundle' => 'home_youtube_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'youtube',
        'settings' => array(
          'youtube_autohide' => 0,
          'youtube_autoplay' => 0,
          'youtube_controls' => 0,
          'youtube_height' => '',
          'youtube_iv_load_policy' => 0,
          'youtube_loop' => 0,
          'youtube_showinfo' => 0,
          'youtube_size' => '420x315',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_youtube_video_link_',
    'label' => 'Youtube Video link ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Youtube Video link ');

  return $field_instances;
}
