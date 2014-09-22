<?php
/**
 * @file
 * stanford_major.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_major_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_flipper|node|stanford_major|isotope';
  $field_group->group_name = 'group_card_flipper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_major';
  $field_group->mode = 'isotope';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flipper',
    'weight' => '0',
    'children' => array(
      0 => 'group_major_card_back',
      1 => 'group_major_card_front',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Flipper',
      'instance_settings' => array(
        'classes' => 'card-flipper',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_flipper|node|stanford_major|isotope'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_image|node|stanford_major|isotope';
  $field_group->group_name = 'group_card_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_major';
  $field_group->mode = 'isotope';
  $field_group->parent_name = 'group_major_card_front';
  $field_group->data = array(
    'label' => 'Card Image',
    'weight' => '16',
    'children' => array(
      0 => 'field_s_major_featured_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Image',
      'instance_settings' => array(
        'classes' => 'card-flip-image',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_image|node|stanford_major|isotope'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_card_back|node|stanford_major|isotope';
  $field_group->group_name = 'group_major_card_back';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_major';
  $field_group->mode = 'isotope';
  $field_group->parent_name = 'group_card_flipper';
  $field_group->data = array(
    'label' => 'Card Back',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_major_degree_type',
      1 => 'field_s_major_what_you_ll_study',
      2 => 'card_back_title',
      3 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Back',
      'instance_settings' => array(
        'classes' => 'card-back',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_major_card_back|node|stanford_major|isotope'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_card_front|node|stanford_major|isotope';
  $field_group->group_name = 'group_major_card_front';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_major';
  $field_group->mode = 'isotope';
  $field_group->parent_name = 'group_card_flipper';
  $field_group->data = array(
    'label' => 'Card Front',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_card_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card Front',
      'instance_settings' => array(
        'classes' => 'card-front',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_major_card_front|node|stanford_major|isotope'] = $field_group;

  return $export;
}
