<?php
/********************
* Module admin page
********************/

/**
 * Add admin page to menu
 */
function recia_menu() {
  $items['admin/config/system/recia'] = array(
    'title' => 'Recia module',
    'page callback' => 'drupal_get_form',
    'page arguments' => array('recia_form'),
    'access arguments' => array('administer users'),
    'type' => MENU_NORMAL_ITEM,
  );

  return $items;
}

/**
 * Admin page définition
 */
function recia_form($form, &$form_state) {
  /* Cas configuration extend */
  $form['recia_cas'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cas additional parameters'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,  
  );
  
  $casDomList = variable_get('recia_cas_direct_access_domains',[]);
  $form['recia_cas']['recia_cas_direct_access_domains'] = array(
    '#type' => 'textarea',
    '#title' => $t('Domains list'),
    '#default_value' => implode("\n",$casDomList),
  );

  
  $form['#submit'][] = 'recia_form_submit';

  return system_settings_form($form);
}

/**
 * Admin page save datas
 */
function recia_form_submit($form, &$form_state) {
  $casDomList = $casDomList = variable_get('recia_cas_direct_access_domains',[]);
  if(is_string($casDomList))variable_set('recia_cas_direct_access_domains',explode("\n",$casDomList));
}