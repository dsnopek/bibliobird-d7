<?php
// $Id$

/**
 * @file
 * Admin pages for Profile
 */

/**
 * Form constructor for the Bibliobird Profile admin settings.
 *
 * @insgroup forms
 */
function bibliobird_profile_admin_settings($form, &$form_state) {
  $form['bibliobird_profile_role_titles'] = array(
    '#type' => 'fieldset',
    '#title' => t('Role titles'),
    '#tree' => TRUE,
  );

  $values = variable_get('bibliobird_profile_role_titles', array());
  foreach (user_roles() as $rid => $role) {
    $form['bibliobird_profile_role_titles'][$rid] = array(
      '#type' => 'textfield',
      '#title' => $role,
      '#size' => 40,
      '#maxlength' => 255,
      '#default_value' => isset($values[$rid]) ? $values[$rid] : '',
    );
  }

  return system_settings_form($form);
}

