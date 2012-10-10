<?php
function vk_fb_admin_settings() {
  global $base_url;
  
  $form['vkontakte'] = array(
    '#type' => 'fieldset',
    '#title' => t('vKontakte API settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
    
  $form['vkontakte']['vk_fb_login_vk_app_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Application ID'),
    '#description' => t('Enter your VK Application ID'),
    '#default_value' => variable_get('vk_fb_login_vk_app_id', ''),
  );
  
  $form['vkontakte']['vk_fb_login_vk_secret_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret key'),
    '#description' => t('Enter your VK Application secret key'),
    '#default_value' => variable_get('vk_fb_login_vk_secret_key', ''),
  );

  $form['facebook'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook API settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['facebook']['vk_fb_login_fb_app_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Application ID'),
    '#description' => t('Enter your FB Application ID'),
    '#default_value' => variable_get('vk_fb_login_fb_app_id', ''),
  );

  $form['facebook']['vk_fb_login_fb_secret_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret key'),
    '#description' => t('Enter your FB Application secret key'),
    '#default_value' => variable_get('vk_fb_login_fb_secret_key', ''),
  );
    
  $form = system_settings_form($form);
  return $form;
} 