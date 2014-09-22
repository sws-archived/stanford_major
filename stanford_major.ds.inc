<?php
/**
 * @file
 * stanford_major.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_major_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_major|isotope';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_major';
  $ds_fieldsetting->view_mode = 'isotope';
  $ds_fieldsetting->settings = array(
    'card_back_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'classes' => 'card-flip-title',
        ),
      ),
    ),
    'title' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Learn more',
        'wrapper' => 'div',
        'class' => 'card-learn-more',
        'ft' => array(),
      ),
    ),
    'field_s_major_degree_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'card-degree-types',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'degree',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|stanford_major|isotope'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function stanford_major_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'card_back_title';
  $ds_field->label = 'Title - Back';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:title]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['card_back_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'card_image';
  $ds_field->label = 'Card  Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:image_fake]',
      'format' => 'plain_text',
    ),
    'use_token' => 1,
  );
  $export['card_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_major_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_major|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_major';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_s_major_what_you_ll_study',
        2 => 'field_s_major_degree_type',
        3 => 'field_s_major_school',
        4 => 'field_s_major_department_program',
        5 => 'field_s_major_related_links',
        6 => 'field_s_major_featured_image',
        7 => 'field_s_major_student_interests',
        8 => 'field_s_major_foundation_courses',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_s_major_what_you_ll_study' => 'ds_content',
      'field_s_major_degree_type' => 'ds_content',
      'field_s_major_school' => 'ds_content',
      'field_s_major_department_program' => 'ds_content',
      'field_s_major_related_links' => 'ds_content',
      'field_s_major_featured_image' => 'ds_content',
      'field_s_major_student_interests' => 'ds_content',
      'field_s_major_foundation_courses' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
  );
  $export['node|stanford_major|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_major|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_major';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'study' => array(
        0 => 'field_s_major_what_you_ll_study',
      ),
    ),
    'fields' => array(
      'field_s_major_what_you_ll_study' => 'study',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|stanford_major|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_major|isotope';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_major';
  $ds_layout->view_mode = 'isotope';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_card_flipper',
        1 => 'field_s_major_degree_type',
        2 => 'group_major_card_front',
        3 => 'card_back_title',
        4 => 'field_s_major_what_you_ll_study',
        5 => 'group_major_card_back',
        6 => 'node_link',
        7 => 'group_card_image',
        8 => 'field_s_major_featured_image',
        9 => 'title',
      ),
    ),
    'fields' => array(
      'group_card_flipper' => 'ds_content',
      'field_s_major_degree_type' => 'ds_content',
      'group_major_card_front' => 'ds_content',
      'card_back_title' => 'ds_content',
      'field_s_major_what_you_ll_study' => 'ds_content',
      'group_major_card_back' => 'ds_content',
      'node_link' => 'ds_content',
      'group_card_image' => 'ds_content',
      'field_s_major_featured_image' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|stanford_major|isotope'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_major_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'isotope';
  $ds_view_mode->label = 'Card Flipper';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['isotope'] = $ds_view_mode;

  return $export;
}
