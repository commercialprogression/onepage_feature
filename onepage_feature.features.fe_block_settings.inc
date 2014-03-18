<?php
/**
 * @file
 * onepage_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function onepage_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-sections-anchor_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sections-anchor_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'onepage_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'onepage_theme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-sections-sections_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sections-sections_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'onepage_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'onepage_theme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slideshow-slideshow_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'slideshow-slideshow_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'onepage_theme' => array(
        'region' => 'featured',
        'status' => 1,
        'theme' => 'onepage_theme',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
