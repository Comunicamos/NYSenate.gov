<?php
  /*
   * View 'flag_opendata'
   */
  $view = new view;
  $view->name = 'flag_opendata';
  $view->description = 'View for flag: Open Data';
  $view->tag = 'flag';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'flag_content_rel' => array(
      'label' => 'opendata',
      'required' => 1,
      'flag' => 'opendata',
      'user_scope' => 'any',
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'relationship' => 'none',
    ),
    'uid' => array(
      'label' => 'user',
      'required' => 0,
      'id' => 'uid',
      'table' => 'flag_content',
      'field' => 'uid',
      'relationship' => 'flag_content_rel',
    ),
  ));
  $handler->override_option('fields', array(
    'field_creation_value' => array(
      'label' => 'Creation',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'short',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => '',
      ),
      'repeat' => array(
        'show_repeat_rule' => '',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_creation_value',
      'table' => 'node_data_field_creation',
      'field' => 'field_creation_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Posted',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'm/d/Y',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Title',
      'link_to_node' => 1,
    ),
    'tid' => array(
      'label' => 'Categories',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '1' => 1,
        '4' => 0,
        '3' => 0,
        '2' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_committee_nid' => array(
      'label' => 'Committee',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_committee_nid',
      'table' => 'node_data_field_committee',
      'field' => 'field_committee_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_senator_nid' => array(
      'label' => 'Senator',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_senator_nid',
      'table' => 'node_data_field_senator',
      'field' => 'field_senator_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_pdf_fid' => array(
      'label' => 'Formats',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_pdf_fid',
      'table' => 'node_data_field_pdf',
      'field' => 'field_pdf_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_filetypes_value' => array(
      'label' => 'Filetypes',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_filetypes_value',
      'table' => 'node_data_field_filetypes',
      'field' => 'field_filetypes_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Keywords',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'term_node_tid_depth' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_op',
        'identifier' => 'term',
        'label' => 'Categories',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '1',
      'depth' => '0',
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 1,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 1,
    ),
    'date_filter' => array(
      'operator' => 'between',
      'value' => array(
        'min' => NULL,
        'max' => NULL,
        'value' => NULL,
        'default_date' => '',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => 'date_filter_op',
        'label' => 'Creation date',
        'use_operator' => 0,
        'identifier' => 'creation_date',
        'optional' => 1,
        'remember' => 0,
      ),
      'date_fields' => array(
        'node_data_field_creation.field_creation_value' => 'node_data_field_creation.field_creation_value',
      ),
      'date_method' => 'AND',
      'granularity' => 'day',
      'form_type' => 'date_popup',
      'default_date' => '',
      'default_to_date' => '',
      'year_range' => '-3:+3',
      'id' => 'date_filter',
      'table' => 'node',
      'field' => 'date_filter',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'date_filter_1' => array(
      'operator' => 'between',
      'value' => array(
        'min' => NULL,
        'max' => NULL,
        'value' => NULL,
        'default_date' => '',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => 'date_filter_1_op',
        'label' => 'Post date',
        'use_operator' => 0,
        'identifier' => 'post_date',
        'optional' => 1,
        'remember' => 0,
      ),
      'date_fields' => array(
        'comments.timestamp' => 'comments.timestamp',
      ),
      'date_method' => 'AND',
      'granularity' => 'day',
      'form_type' => 'date_popup',
      'default_date' => '',
      'default_to_date' => '',
      'year_range' => '-3:+3',
      'id' => 'date_filter_1',
      'table' => 'node',
      'field' => 'date_filter',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_committee_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_committee_nid_op',
        'identifier' => 'committee',
        'label' => 'Committees',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_committee_nid',
      'table' => 'node_data_field_committee',
      'field' => 'field_committee_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 1,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '3' => '3',
      '5' => '5',
      '10' => '10',
    ),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Open Data Search Form');
  $handler->override_option('header', '<div class="opendata-trouble"><?php print t(\'Having trouble finding what you\\\'re looking for? \' . l(t(\'Check Open Legislation\'), \'legislation\') . \'. \'); ?><div class="opendata-help"><?php print t(l(t(\'What\\\'s the difference?\'), \'node/18648\')); ?></div></div>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', '25');
  $handler->override_option('use_pager', TRUE);
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'desc',
    'columns' => array(
      'field_creation_value' => 'field_creation_value',
      'created' => 'created',
      'title' => 'title',
      'tid' => 'tid',
      'field_committee_nid' => 'field_committee_nid',
      'field_senator_nid' => 'field_senator_nid',
      'field_pdf_fid' => 'field_pdf_fid',
      'field_filetypes_value' => 'field_filetypes_value',
    ),
    'info' => array(
      'field_creation_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'tid' => array(
        'separator' => '',
      ),
      'field_committee_nid' => array(
        'separator' => '',
      ),
      'field_senator_nid' => array(
        'separator' => '',
      ),
      'field_pdf_fid' => array(
        'separator' => '',
      ),
      'field_filetypes_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => 'field_creation_value',
  ));
  $handler = $view->new_display('page', 'Open Data Search Form', 'page_1');
  $handler->override_option('path', 'opendata_revised');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Open Data',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => NULL,
    'description' => '',
    'weight' => NULL,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'API', 'page_2');
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'field_creation_value' => 'field_creation_value',
      'created' => 'created',
      'title' => 'title',
      'tid' => 'tid',
      'field_committee_nid' => 'field_committee_nid',
      'field_senator_nid' => 'field_senator_nid',
      'field_pdf_fid' => 'field_pdf_fid',
      'field_filetypes_value' => 'field_filetypes_value',
    ),
    'info' => array(
      'field_creation_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'tid' => array(
        'separator' => '',
      ),
      'field_committee_nid' => array(
        'separator' => '',
      ),
      'field_senator_nid' => array(
        'separator' => '',
      ),
      'field_pdf_fid' => array(
        'separator' => '',
      ),
      'field_filetypes_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'execution_type' => '1',
    'display_type' => '0',
    'hide_select_all' => 0,
    'skip_confirmation' => 0,
    'display_result' => 1,
    'merge_single_action' => 1,
    'selected_operations' => array(
      'node_save_action' => 'node_save_action',
      'og_add_group_action' => 0,
      'flag_nodes:011ab0cbfb36fa7c0e88c34a045b2623' => 0,
      'node_assign_owner_action' => 0,
      'flag_nodes:f2cfd46679f3369d9945a8559c359fec' => 0,
      'views_bulk_operations_delete_node_action' => 0,
      'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
      'flag_nodes:e747c1e01dab2f0121306da7d6cb8e0c' => 0,
      'flag_nodes:ee72169f07a131a7b08d3edef4e5550d' => 0,
      'flag_nodes:62b80d2a20d583d71c81cc4d00b01eea' => 0,
      'flag_nodes:9f13a38ce962e695f03aa9fb8b8a3feb' => 0,
      'flag_nodes:b6b382aa4344340643919fdf00e67daa' => 0,
      'system_message_action' => 0,
      'token_actions_message_action' => 0,
      'flag_nodes:69d53351abf23828ff8efbf361c3a1b8' => 0,
      'views_bulk_operations_action' => 0,
      'views_bulk_operations_script_action' => 0,
      'node_export_node_bulk:a8cf63fecab3eb3edf6760bc02f258a6' => 0,
      'flag_nodes:06c5d4f98973f65e0e2fe8d3c52663d9' => 0,
      'flag_nodes:6225b82cc9741a61d4795ea7a1617923' => 0,
      'flag_nodes:9f7c8f9b1702a12a9a3fb1ace2e2eae5' => 0,
      'flag_nodes:7187d83694b62b9c190e269d67da635d' => 0,
      'flag_nodes:5e0d0c768515a48e5451b21e5315534c' => 0,
      'flag_nodes:4e58dfbde6c9048301adbd8cbb17dffc' => 0,
      'flag_nodes:ba570845cbd18652255d639880690d29' => 0,
      'flag_nodes:4c70de019742479de64c7fd71338bff7' => 0,
      'og_make_private_action' => 0,
      'og_make_public_action' => 0,
      'node_make_sticky_action' => 0,
      'node_make_unsticky_action' => 0,
      'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
      'views_bulk_operations_fields_action' => 0,
      'views_bulk_operations_taxonomy_action' => 0,
      'views_bulk_operations_argument_selector_action' => 0,
      'flag_nodes:f38b4c0e4df26ab7d752e68094201198' => 0,
      'node_promote_action' => 0,
      'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
      'flag_nodes:adf14c523595e2fc00c167b39fbc4b0d' => 0,
      'flag_nodes:df7fc2eecab0ddd2e82c0dca494c09e5' => 0,
      'flag_nodes:82431221f5d4c7a02f06ec1b6b6fa988' => 0,
      'flag_nodes:54c2921bf1e7c5d6cf7d1720f76112c8' => 0,
      'flag_nodes:ab7882e735079e1693558240a9cc7914' => 0,
      'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
      'node_publish_action' => 0,
      'token_actions_goto_action' => 0,
      'system_goto_action' => 0,
      'emfield_operations_reload' => 0,
      'flag_nodes:0d8caa800805d435463c70aa31f6bba4' => 0,
      'flag_nodes:37b9ddcdcc8e03a57f75ff0e76d1eef7' => 0,
      'flag_nodes:b6df2690d2c99a62f6f343f3274028cc' => 0,
      'flag_nodes:c9e06191ada7e7d5ed40cd8dc5190e54' => 0,
      'flag_nodes:f8245db11c5968ab5ef7dce12fd948e4' => 0,
      'flag_nodes:a6261dd43a91d80718807130553605cf' => 0,
      'og_remove_groups_action' => 0,
      'node_unpromote_action' => 0,
      'og_remove_group_action' => 0,
      'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
      'flag_nodes:f203064acd146ba8b658a8a8f0c7325f' => 0,
      'flag_nodes:2b95f23c3bf3e74b0520243b3f934fc0' => 0,
      'flag_nodes:12891d45c2ba9fa366fa63007abfa73f' => 0,
      'flag_nodes:a4e49b53e37d857f899e5456d98a1ab6' => 0,
      'system_send_email_action' => 0,
      'token_actions_send_email_action' => 0,
      'batches_node_operations_update' => 0,
      'flag_nodes:e44d3b04e02d96642c2aaff778aa6e93' => 0,
      'flag_nodes:76f0162edb4a9146ce29759504fba9ee' => 0,
      'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
      'node_unpublish_action' => 0,
      'node_unpublish_by_keyword_action' => 0,
      'auto_nodetitle_operations_update' => 0,
      'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
    ),
    'views_bulk_operations_fields_action' => array(
      'php_code' => 0,
      'display_fields' => array(
        '_all_' => '_all_',
      ),
    ),
  ));
  $handler->override_option('path', 'opendata_api');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $views[$view->name] = $view;
