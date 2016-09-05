<?php
/**
 * @file
 * top_bar_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function top_bar_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu_--login:<void>.
  $menu_links['menu-top-menu_--login:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => '  LOGIN',
    'options' => array(
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'attributes' => array(
        'id' => 'login-block',
        'class' => array(
          0 => 'fa',
          1 => 'fa-user',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_--login:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_about-us:<void>.
  $menu_links['menu-top-menu_about-us:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'ABOUT US',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_about-us:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_about-us:node/1.
  $menu_links['menu-top-menu_about-us:node/1'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'ABOUT US',
    'options' => array(
      'alter' => TRUE,
      'external' => 0,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_about-us:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_about-us:<void>',
  );
  // Exported menu link: menu-top-menu_admisc-calendar:<void>.
  $menu_links['menu-top-menu_admisc-calendar:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'ADMISC CALENDAR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_admisc-calendar:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_event-calendar:<void>',
  );
  // Exported menu link: menu-top-menu_board-members:<void>.
  $menu_links['menu-top-menu_board-members:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'BOARD MEMBERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_board-members:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_about-us:<void>',
  );
  // Exported menu link: menu-top-menu_chairman-message:<void>.
  $menu_links['menu-top-menu_chairman-message:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'CHAIRMAN MESSAGE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_chairman-message:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_about-us:<void>',
  );
  // Exported menu link: menu-top-menu_class-1:<void>.
  $menu_links['menu-top-menu_class-1:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'CLASS 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_class-1:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_contact-us:<void>.
  $menu_links['menu-top-menu_contact-us:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'CONTACT US',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_contact-us:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_event-calendar:<void>.
  $menu_links['menu-top-menu_event-calendar:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'EVENT CALENDAR',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_event-calendar:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_facilities:<void>.
  $menu_links['menu-top-menu_facilities:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'FACILITIES',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_facilities:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_formula-1:<void>.
  $menu_links['menu-top-menu_formula-1:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'FORMULA 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_formula-1:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_formula-2:<void>.
  $menu_links['menu-top-menu_formula-2:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'FORMULA 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_formula-2:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_home:<void>.
  $menu_links['menu-top-menu_home:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_home:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com.
  $menu_links['menu-top-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://www.facebook.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-facebook" aria-hidden="true"></i>',
    'options' => array(
      'alter' => TRUE,
      'external' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'html' => 1,
      'identifier' => 'menu-top-menu_i-classfa-fa-facebook-aria-hiddentruei:https://www.facebook.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com.
  $menu_links['menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://twitter.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-twitter" aria-hidden="true"></i>',
    'options' => array(
      'external' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'html' => 1,
      'identifier' => 'menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://www.instagram.com.
  $menu_links['menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://www.instagram.com'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://www.instagram.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-twitter" aria-hidden="true"></i>',
    'options' => array(
      'external' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'html' => 1,
      'identifier' => 'menu-top-menu_i-classfa-fa-twitter-aria-hiddentruei:https://www.instagram.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_i-classfa-fa-youtube-play-aria-hiddentruei:https://www.youtube.com.
  $menu_links['menu-top-menu_i-classfa-fa-youtube-play-aria-hiddentruei:https://www.youtube.com'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'https://www.youtube.com',
    'router_path' => '',
    'link_title' => '<i class="fa fa-youtube-play" aria-hidden="true"></i>',
    'options' => array(
      'external' => 1,
      'html' => 1,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-top-menu_i-classfa-fa-youtube-play-aria-hiddentruei:https://www.youtube.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_jet-ski:<void>.
  $menu_links['menu-top-menu_jet-ski:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'JET SKI',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_jet-ski:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_nations-cup:<void>.
  $menu_links['menu-top-menu_nations-cup:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'NATIONS CUP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_nations-cup:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_news:<void>.
  $menu_links['menu-top-menu_news:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'NEWS',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_news:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_online-registration:<void>.
  $menu_links['menu-top-menu_online-registration:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'ONLINE REGISTRATION',
    'options' => array(
      'attributes' => array(
        'id' => 'online-reg',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_online-registration:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_race--drivers:<void>.
  $menu_links['menu-top-menu_race--drivers:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'RACE & DRIVERS',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_race--drivers:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_teams-calendar:<void>.
  $menu_links['menu-top-menu_teams-calendar:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'TEAMS CALENDAR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_teams-calendar:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_event-calendar:<void>',
  );
  // Exported menu link: menu-top-menu_usefull-links:<void>.
  $menu_links['menu-top-menu_usefull-links:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'USEFULL LINKS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_usefull-links:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_contact-us:<void>',
  );
  // Exported menu link: menu-top-menu_wooden-power-boat:<void>.
  $menu_links['menu-top-menu_wooden-power-boat:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'WOODEN POWER BOAT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_wooden-power-boat:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );
  // Exported menu link: menu-top-menu_xcat:<void>.
  $menu_links['menu-top-menu_xcat:<void>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<void>',
    'router_path' => '<void>',
    'link_title' => 'XCAT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'external' => TRUE,
      'identifier' => 'menu-top-menu_xcat:<void>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-top-menu_race--drivers:<void>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('  LOGIN');
  t('<i class="fa fa-facebook" aria-hidden="true"></i>');
  t('<i class="fa fa-twitter" aria-hidden="true"></i>');
  t('<i class="fa fa-youtube-play" aria-hidden="true"></i>');
  t('ABOUT US');
  t('ADMISC CALENDAR');
  t('BOARD MEMBERS');
  t('CHAIRMAN MESSAGE');
  t('CLASS 1');
  t('CONTACT US');
  t('EVENT CALENDAR');
  t('FACILITIES');
  t('FORMULA 1');
  t('FORMULA 2');
  t('HOME');
  t('JET SKI');
  t('NATIONS CUP');
  t('NEWS');
  t('ONLINE REGISTRATION');
  t('RACE & DRIVERS');
  t('TEAMS CALENDAR');
  t('USEFULL LINKS');
  t('WOODEN POWER BOAT');
  t('XCAT');

  return $menu_links;
}
