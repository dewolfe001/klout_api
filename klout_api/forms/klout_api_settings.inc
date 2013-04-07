<?php
// $Id$
/**
 * @file
 *
 * The admin/settings/advuser form.
 *

/**
 * The callback function for admin/settings/advuser.
 */
function klout_api_settings() {
  // We need to clear the warning because of the klout_api_notify_uid1 field and
  // the profile fields selection.
  
  // drupal_get_messages('klout_api_warning');


  // Controls for the page listings.
  $form['klout_api_credentials'] = array(
    '#type' => 'fieldset',
    '#title' => t('API Credentials'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  // API Keys

  $form['klout_api_credentials']['klout_api_key'] = array(
    '#title' => t('API Key'),
    '#description' => t('The public API key'),
	'#type' => 'textfield',
	'#size' => '32',
    '#default_value' => variable_get('klout_api_key', ""),
  );
  $form['klout_api_credentials']['klout_api_secret'] = array(
    '#title' => t('Shared Secret'),
    '#description' => t('The API Shared Secret'),
	'#type' => 'textfield',
	'#size' => '24',
    '#default_value' => variable_get('klout_api_secret', ""),
  );

  return system_settings_form($form);
}

/**
 * Returns the HTML representation of the available tokens list.
 *
 * @return string The HTML representation of the list of usable tokens and their
 * descriptions, organized by token type.
 */
function _klout_api_get_tokens_list() {
  static $tokens_list = '';

  if (!$tokens_list) {
    $tokens_list = theme('token_tree', array('token_types' => array('user', 'site'), 'click_insert' => FALSE, 'show_restricted' => FALSE, 'global_types' => FALSE));
  }
  return $tokens_list;
}

// vim:ft=php:sts=2:sw=2:ts=2:et:ai:sta:ff=unix
