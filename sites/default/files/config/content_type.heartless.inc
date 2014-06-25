<?php
/**
 * @file
 * content_type.heartless.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'heartless',
  'name' => 'heartless',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__heartless' => 'variable.field_bundle_settings_node__heartless',
  'variable.node_options_heartless' => 'variable.node_options_heartless',
  'variable.node_preview_heartless' => 'variable.node_preview_heartless',
  'variable.node_submitted_heartless' => 'variable.node_submitted_heartless',
  'variable.comment_default_per_page_heartless' => 'variable.comment_default_per_page_heartless',
  'variable.comment_form_location_heartless' => 'variable.comment_form_location_heartless',
  'variable.comment_preview_heartless' => 'variable.comment_preview_heartless',
  'variable.comment_subject_field_heartless' => 'variable.comment_subject_field_heartless',
);

$optional = array(
  'field.node.body.heartless' => 'field.node.body.heartless',
  'field.node.field_heart_true_false.heartless' => 'field.node.field_heart_true_false.heartless',
  'permission.create_heartless_content' => 'permission.create_heartless_content',
  'permission.edit_own_heartless_content' => 'permission.edit_own_heartless_content',
  'permission.edit_any_heartless_content' => 'permission.edit_any_heartless_content',
  'permission.delete_own_heartless_content' => 'permission.delete_own_heartless_content',
  'permission.delete_any_heartless_content' => 'permission.delete_any_heartless_content',
);

$modules = array(
  0 => 'node',
);
