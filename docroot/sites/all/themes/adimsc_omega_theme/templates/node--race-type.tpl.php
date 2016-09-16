<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Article" it would result in "node-article". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. page, article, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<article<?php print $attributes; ?>>
  <?php if (!empty($title_prefix) || !empty($title_suffix) || !$page): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <footer class="node__submitted">
      <?php print $user_picture; ?>
      <p class="submitted"><?php print $submitted; ?></p>
    </footer>
    <?php endif; ?>
      <div<?php print $content_attributes; ?>>
      <section>
      <div class="section-cover">
      <div class="race-detail-area">
      <div class="race-img">
      <?php
      // We hide the comments and links now so that we can render them later.
      print render($content['field_race_type_image']);
      ?>
      </div>
      <div class="race-detail">
      <div class="race-detail-tabs resource-bar">
      <span class="close-btn visible-xs visible-1040"><i aria-hidden="true"
      class="fa fa-times"></i></span>
        <ul role="tablist">
          <li class="active" role="presentation">
            <a aria-controls="home" class="about-race" data-toggle="tab"
            href="#aboutRace" role="tab"><i></i> <span>About Race</span></a>
            </li>
            <li role="presentation">
              <a aria-controls="home" class="about-team" data-toggle="tab"
              href="#aboutTeam" role="tab"><i></i> <span>About Team</span></a>
            </li>
            <li role="presentation">
              <a aria-controls="home" class="team-members" data-toggle="tab"
              href="#teamMembers" role="tab"><i></i> <span>Team
              Members</span></a>
            </li>
            <li role="presentation">
              <a aria-controls="home" class="photo-gallery" data-toggle="tab"
              href="#photoGallery" role="tab"><i></i> <span>Photo
              Gallery</span></a>
            </li>
            <li role="presentation">
              <a aria-controls="home" class="video-gallery" data-toggle="tab"
              href="#videoGallery" role="tab"><i></i> <span>Video
              Gallery</span></a>
            </li>
          </ul>
        </div>
        <div class="tab-content race-detail-content">
          <span class=
          "menu-btn resource-btn visible-xs visible-1040"><i aria-hidden="true"
          class="fa fa-bars"></i></span>
          <div class="tab-pane active" id="aboutRace" role="tabpanel">
            <div class="left-section">
              <h1>UIM F1H2o World championship</h1>
              <p><?php print render($content['field_about_races']);?></p>
            </div>
            <div class="right-section">
            <?php print render($content['field_about_race_image']);
            ?>
            </div>
          </div>
          <div class="tab-pane" id="aboutTeam" role="tabpanel">
            <div class="left-section">
              <h1>F1 Team Abu Dhabi</h1>
              <p>
              <?php print render($content['field_about_team']);?>
              </p>
            </div>
            <div class="right-section">
            <?php print render($content['field_about_team_image']);?>
            </div>
          </div>
          <div class="tab-pane" id="teamMembers" role="tabpanel">
          <!--Reder Team Members Region-->
       <?php echo $members;?>
            </div>
        <div class="tab-pane" id="photoGallery" role="tabpanel">
        <!--Reder Team Gallery Images View-->
            <h1>Photo Gallery</h1>
           <?php echo $gallery;?>
            </div>
          <div class="tab-pane" id="videoGallery" role="tabpanel">
           <h1>Video Gallery</h1>
           <div class="team-video-area">
                  <?php echo $v_gallery;?>

            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
  </div>
</article>
