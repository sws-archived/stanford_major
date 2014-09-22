<?php
/**
 * @file
 * stanford_major.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_major_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'major_nodes';
  $context->description = 'Context for major nodes';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_major' => 'stanford_major',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_majors-block_4' => array(
          'module' => 'views',
          'delta' => 'stanford_majors-block_4',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'ds_extras-study' => array(
          'module' => 'ds_extras',
          'delta' => 'study',
          'region' => 'content_upper',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content_upper',
          'weight' => '-9',
        ),
        'views-majors_degrees_offered-block' => array(
          'module' => 'views',
          'delta' => 'majors_degrees_offered-block',
          'region' => 'content_upper',
          'weight' => '-8',
        ),
        'views-stanford_majors-block_3' => array(
          'module' => 'views',
          'delta' => 'stanford_majors-block_3',
          'region' => 'content_upper',
          'weight' => '-7',
        ),
        'views-stanford_majors-block_1' => array(
          'module' => 'views',
          'delta' => 'stanford_majors-block_1',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
        'views-stanford_majors-block_2' => array(
          'module' => 'views',
          'delta' => 'stanford_majors-block_2',
          'region' => 'content_lower',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for major nodes');
  $export['major_nodes'] = $context;

  return $export;
}
