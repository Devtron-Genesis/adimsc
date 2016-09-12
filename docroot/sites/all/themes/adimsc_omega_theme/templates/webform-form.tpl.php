<?php

/**
 * @file
 * Customize the display of a complete webform.
 *
 * This file may be renamed "webform-form-[nid].tpl.php" to target a specific
 * webform on your site. Or you can leave it "webform-form.tpl.php" to affect
 * all webforms on your site.
 *
 * Available variables:
 * - $form: The complete form array.
 * - $nid: The node ID of the Webform.
 *
 * The $form array contains two main pieces:
 * - $form['submitted']: The main content of the user-created form.
 * - $form['details']: Internal information stored by Webform.
 *
 * If a preview is enabled, these keys will be available on the preview page:
 * - $form['preview_message']: The preview message renderable.
 * - $form['preview']: A renderable representing the entire submission preview.
 */
?>
<?php
  // Print out the progress bar at the top of the page
  print drupal_render($form['progressbar']);

  // Print out the preview message if on the preview page.
  if (isset($form['preview_message'])) {
    print '<div class="messages warning">';
    print drupal_render($form['preview_message']);
    print '</div>';
  }
  // Print out the main part of the form.
  // Feel free to break this up and move the pieces within the array.
  hide($form['submitted']);
  print '<div class="left-group">';
  print drupal_render($form['submitted']['name']);
  print drupal_render($form['submitted']['license_no']);
  print drupal_render($form['submitted']['affiliated_club_na']);
  print drupal_render($form['submitted']['mobile_tel']);
  print drupal_render($form['submitted']['email']);
  print drupal_render($form['submitted']['nationality']);
  print drupal_render($form['submitted']['for_emergency_name']);
  print drupal_render($form['submitted']['date_of_birth']);
  print drupal_render($form['submitted']['blood_group']);
  print drupal_render($form['submitted']['  mobile_no']);
  print '</div>';
  // Always print out the entire $form. This renders the remaining pieces of the
  // form that haven't yet been rendered above (buttons, hidden elements, etc).
  print drupal_render_children($form);
