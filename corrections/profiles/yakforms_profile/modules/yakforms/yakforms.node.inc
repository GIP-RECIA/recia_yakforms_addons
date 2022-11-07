<?php

/**
 * @file
 * Contains custom content type definition for Yakforms.
 */

/**
 * Returns the field bases for the custom content type.
 *
 * Adapted from previous yakforms_feature export.
 *
 * @return array
 *   The field base array to populate the content type with fields.
 */
function yakforms_custom_field_bases() {
  $field_bases = array();
  // Exported field_base: 'field_form1_expiration'.
  $field_bases['field_form1_expiration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_expiration',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_form1_file'.
  $field_bases['field_form1_file'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_form1_image'.
  $field_bases['field_form1_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_form1_results_access'.
  $field_bases['field_form1_results_access'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_results_access',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'user_autocomplete',
        ),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_form1_results_public'.
  $field_bases['field_form1_results_public'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_results_public',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_form1_template'.
  $field_bases['field_form1_template'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_template',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => "List this form as a template",
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_form1_template_desc'.
  $field_bases['field_form1_template_desc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form1_template_desc',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );
  return $field_bases;
}

/**
 * Returns fields instances for custom content type.
 *
 * Originally adapted from the yakforms_feature export.
 */
function yakforms_custom_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-form1-body'.
  $field_instances['node-form1-body'] = array(
    'bundle' => 'form1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => "Describe what your form is about. This will appear above your form.<br/>
If you want to display pictures, you should consider using an external image hosting service, like <a href='https://framapic.org' target='_blank'>framapic.org</a>.",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'wysiwyg_admin' => 0,
          'wysiwyg_form' => 0,
          'wysiwyg_user' => 'wysiwyg_user',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'wysiwyg_admin' => array(
              'weight' => 0,
            ),
            'wysiwyg_form' => array(
              'weight' => -9,
            ),
            'wysiwyg_user' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_expiration'.
  $field_instances['node-form1-field_form1_expiration'] = array(
    'bundle' => 'form1',
    'deleted' => 0,
    'description' => "Forms expire after 6 months, and are destroyed after 9 months (this cover 90% of use cases, and avoids database overloads).<br>
  At the given date, your form won't be accessible publically. You and you only will however be able to access it - and its results - for 60 more days, from your account.
  If you wish to extend its expiration date, you simply have to edit the field above once your form is live.<br>
  If this constraint doesn't suit your needs or if you want more information, please refer to <a href='/limitations'>the limitation page</a>.
  ",
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_expiration',
    'label' => "Expiration date",
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+6 months',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_file'.
  $field_instances['node-form1-field_form1_file'] = array(
    'bundle' => 'form1',
    'deleted' => 0,
    'description' => "You can attach up to 5 files to your form.",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_file',
    'label' => 'Attached files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'forms/files',
      'file_extensions' => 'txt pdf doc odt png jpg gif rtf xls ods ppt pptx docx xlsx odp',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_image'.
  $field_instances['node-form1-field_form1_image'] = array(
    'bundle' => 'form1',
    'deleted' => 0,
    'description' => "Optional image that will be displayed at the top of your form (example : logo or banner).",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_image',
    'label' => "Optional banner",
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'forms/img',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_results_access'.
  $field_instances['node-form1-field_form1_results_access'] = array(
    'bundle' => 'form1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => "<p>You can authorize other authenticated users to access this form's results : this requires them already having created an account. To do that, fill in their usernames in the field above (separated by commas if several).</p>
  <p>When logged in, these users will have access to the results by browsing to the form's page, and clicking on the 'Results' tab. They will be able to edit and delete results. <strong>They will however NOT be able to edit the form itself</strong> (add or remove fields, change the title, etc).</p>
  <p>For more information, see <a href='https://docs.yakforms.org/features/partage-resultats/'>our documentation</a>.</p>",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_results_access',
    'label' => "Users having access to the results.",
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_results_public'.
  $field_instances['node-form1-field_form1_results_public'] = array(
    'bundle' => 'form1',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => "<p>If you select 'yes', all results for this form will be accessible <strong>by everyone</strong>.</p> Even if no one but you will be able to edit the results, this is <strong>NOT RECOMMANDED</strong> because you might make public private information of people who would not want it to be public (first and last names, email and postal addresses, telephone numbers...)</p>
<p><strong>By selecting 'yes', you agree to protect the anonymity of the participants, and will be wholly responsible for information you make public.</strong></p>
<p>Please note that the 'Users having access to results' option below allows you to give access to the results (read, modify and delete) to selected authenticated users.</p>",
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_results_public',
    'label' => "Public access to results",
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_template'.
  $field_instances['node-form1-field_form1_template'] = array(
    'bundle' => 'form1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => "If you check this box, you form will be displayed in the public list of templates, allowing anybody to clone it, use it as a form template and adapt it.<strong>If it is listed as a template, any visitor will be able to fill in your form.</strong>.",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_template',
    'label' => "List this form as a template",
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-form1-field_form1_template_desc'.
  $field_instances['node-form1-field_form1_template_desc'] = array(
    'bundle' => 'form1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => "A short description of your form template (for example : « Subscription form for an concert »).",
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'aqbove',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form1_template_desc',
    'label' => 'Template description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'wysiwyg_user' => 'wysiwyg_user',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'wysiwyg_user' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t("<p>If you select 'yes', all results for this form will be accessible <strong>by everyone</strong>.</p> Even if no one but you will be able to edit the results, this is <strong>NOT RECOMMANDED</strong> because you might make public private information of people who would not want it to be public (first and last names, email and postal addresses, telephone numbers...)</p>
<p><strong>By selecting 'yes', you agree to protect the anonymity of the participants, and will be wholly responsible for information you make public.</strong></p>
<p>Please note that the 'Users having access to results' option below allows you to give access to the results (read, modify and delete) to selected authenticated users.</p>");
  t("Public access to results");
  t('Body');
  t('Comment');
  t("Expiration date");
  t('Description');
  t('Template description');
  t("Describe what your form is about. This will appear above your form.<br/>
If you want to display pictures, you should consider using an external image hosting service, like <a href='https://framapic.org' target='_blank'>framapic.org</a>.");
  t('Attached files');
  t('Image');
  t("Optional banner");
  t("Optional image that will be displayed at the top of your form (example : logo or banner).");
  t("Forms expire after 6 months, and are destroyed after 9 months (this cover 90% of use cases, and avoids database overloads).<br>
  At the given date, your form won't be accessible publically. You and you only will however be able to access it - and its results - for 60 more days, from your account.
  If you wish to extend its expiration date, you simply have to edit the field above once your form is live.<br>
  If this constraint doesn't suit your needs or if you want more information, please refer to <a href='/limitations'>the limitation page</a>.
  ");
  t("List this form as a template");
  t("A short description of your form template (for example : « Subscription form for an concert »).");
  t("Words separated by commas.");
  t("If you check this box, you form will be displayed in the public list of templates, allowing anybody to clone it, use it as a form template and adapt it.<strong>If it is listed as a template, any visitor will be able to fill in your form.</strong>.");
  t("Tags");
  t("Upload an image to display with this content.");
  t("Users having access to the results.");
  t("<p>You can authorize other authenticated users to access this form's results : this requires them already having created an account. To do that, fill in their usernames in the field above (separated by commas if several).</p>
  <p>When logged in, these users will have access to the results by browsing to the form's page, and clicking on the 'Results' tab. They will be able to edit and delete results. <strong>They will however NOT be able to edit the form itself</strong> (add or remove fields, change the title, etc).</p>
  <p>For more information, see <a href='https://docs.yakforms.org/features/partage-resultats/'>our documentation</a>.</p>");
  t("You can attach up to 5 files to your form.");
  t('file(s)');

  return $field_instances;
}
