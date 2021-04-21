<?php

/**
 * @file
 * Functions that are only called on the admin pages.
 */

/**
 * Overriding system settings form.
 */
function superfish_system_settings_form($form, $automatic_defaults = TRUE) {
  $form['actions']['#type'] = 'container';
  $form['actions']['#attributes']['class'][] = 'form-actions';
  $form['actions']['#weight'] = 100;
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  if ($automatic_defaults) {
    $form = _system_settings_form_automatic_defaults($form);
  }

  if (!empty($_POST) && form_get_errors()) {
    backdrop_set_message(t('The settings have not been saved because of the errors.'), 'error');
  }

  $form['#submit'][] = 'system_settings_form_submit';
  // By default, render the form using theme_system_settings_form().
  if (!isset($form['#theme'])) {
    $form['#theme'] = 'system_settings_form';
  }
  return $form;
}

/**
 * Module settings form.
 */
function superfish_admin_settings($form, &$form_state) {
  $config = config('superfish.settings');
  $form['#config'] = 'superfish.settings';
  $form['superfish_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of blocks'),
    '#multiple' => FALSE,
    '#description' => sprintf('%1$s (%2$s: 4)',
      t('The number of Superfish menu blocks.'),
      t('Default')
    ),
    '#default_value' => config_get('superfish.settings', 'superfish_number'),
  );
  return system_settings_form($form);
}

/**
 * Implements hook_validate().
 */
function superfish_admin_settings_validate($form, &$form_state) {
  if (!is_numeric($form_state['values']['superfish_number'])) {
    form_set_error('superfish_number', t('Please enter a number.'));
  }
}
