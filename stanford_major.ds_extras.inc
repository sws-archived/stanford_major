<?php
/**
 * @file
 * stanford_major.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function stanford_major_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'majors-page';
  $ds_vd->label = 'Majors: Majors Page (Views template)';
  $export['majors-page'] = $ds_vd;

  return $export;
}
