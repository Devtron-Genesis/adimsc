  <?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
function adimsc_omega_theme_preprocess_node(&$vars) {
$vars['members'] = views_embed_view('team_member', 'team_members', $vars['nid']);
$vars['gallery'] = views_embed_view('image_gallery', 'image_gallery', $vars['nid']);
$vars['v_gallery'] = views_embed_view('vedio_gallery', 'vedio_gallery_block', $vars['nid']);
// dsm($vars);
  // dsm($addblock);
}
