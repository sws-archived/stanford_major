<?php
/**
 * @file
 * stanford_major.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function stanford_major_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Minor',
    'description' => 'Minor',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0070b35a-ff62-4854-83c5-710dda2bc986',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  $terms[] = array(
    'name' => 'Computers & Technology',
    'description' => '',
    'format' => 'content_editor_text_format',
    'weight' => 0,
    'uuid' => '03ab3f3f-14f3-4d8e-b325-b2b89cfa063a',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Management & Entrepreneurship',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '06435671-0419-4828-9fd9-023e923ebce5',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Honors',
    'description' => 'Honors',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0738ebb8-feae-4ea2-a209-c1c276a4e046',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  $terms[] = array(
    'name' => 'Building & Design',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '18c64d45-b567-4b3c-8c31-d73f9f64c619',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'School of Education',
    'description' => '<p>School of Education</p>
',
    'format' => 'content_editor_text_format',
    'weight' => 0,
    'uuid' => '2ca4eee5-4af3-4304-979c-a3a1df3a7dea',
    'vocabulary_machine_name' => 'stanford_school',
  );
  $terms[] = array(
    'name' => 'Economic & Political Systems',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '35334fc7-3903-404d-a636-66529a634c35',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'School of Engineering',
    'description' => '<p>School of Engineering</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3b0f947f-dd11-44f0-8d51-2a9924c6b6f9',
    'vocabulary_machine_name' => 'stanford_school',
  );
  $terms[] = array(
    'name' => 'Math & Sciences',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4bc40dc5-ed82-4ed4-94ef-e479aa2b56dc',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Co-Term',
    'description' => 'Coterminal ',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5b831c0d-87d5-477d-86c1-488da16cc585',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  $terms[] = array(
    'name' => 'Energy & Environment',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '678bdb8d-9be8-45dd-b383-98d2d221213e',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'BA',
    'description' => 'Bachelor of Arts',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6b7a7a65-f443-4e6d-be91-06c5f5ff45ca',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  $terms[] = array(
    'name' => 'Human Cultures & Behavior',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '77cf6bb8-e651-4fd0-9bb5-d68ccc82d624',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'BS',
    'description' => 'Bachelor of Science',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8b2e3f80-8649-4440-adf4-f576a6663b26',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  $terms[] = array(
    'name' => 'Public Service',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8d5a3cc5-0404-4aaf-a253-7a850b53ccd0',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Department/Program 1',
    'description' => '<p><strong>orem Ipsum</strong> is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry&#39;s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9a6331cc-7036-4c4d-b6d4-5f501749670f',
    'vocabulary_machine_name' => 'stanford_department_program',
  );
  $terms[] = array(
    'name' => 'Arts & Performance',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'bd6efc30-7610-4756-8a2c-865d7e61c06b',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'School of Humanities & Sciences',
    'description' => '<p>School of Humanities &amp; Sciences</p>
',
    'format' => 'content_editor_text_format',
    'weight' => 0,
    'uuid' => 'bd8fc620-e9a2-46d9-95e5-7949d386dabf',
    'vocabulary_machine_name' => 'stanford_school',
  );
  $terms[] = array(
    'name' => 'History & Literature',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5f8f900-0d97-428e-b8cd-3ad4b4d7e98a',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Medicine',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c773c645-0e3a-483f-9fb1-82846b2d81a9',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'Interdisciplinary Programs',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cb16fba1-077a-4271-aa72-39680b5f562a',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'School of Earth Sciences',
    'description' => '<p>School of Earth Sciences</p>
',
    'format' => 'content_editor_text_format',
    'weight' => 0,
    'uuid' => 'd2704b6b-fe75-403e-98b4-52b1f49f2998',
    'vocabulary_machine_name' => 'stanford_school',
  );
  $terms[] = array(
    'name' => 'Languages',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e4d16342-dbc5-445a-b781-ec42ddaaba6b',
    'vocabulary_machine_name' => 'student_interests',
  );
  $terms[] = array(
    'name' => 'BAS',
    'description' => 'Bachelor of Arts and Science
',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ec24b9ac-d0b7-4d72-924b-05901261cb5f',
    'vocabulary_machine_name' => 'stanford_degree_type',
  );
  return $terms;
}
