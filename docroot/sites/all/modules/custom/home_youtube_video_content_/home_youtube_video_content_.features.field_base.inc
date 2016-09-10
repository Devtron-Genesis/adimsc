<?php
/**
 * @file
 * home_youtube_video_content_.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function home_youtube_video_content__field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_youtube_video_link_'.
  $field_bases['field_youtube_video_link_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_youtube_video_link_',
    'indexes' => array(
      'video_id' => array(
        0 => 'video_id',
      ),
    ),
    'locked' => 0,
    'module' => 'youtube',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'youtube',
  );

  return $field_bases;
}
