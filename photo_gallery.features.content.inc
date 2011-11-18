<?php

/**
 * Implementation of hook_content_default_fields().
 */
function photo_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery_desc
  $fields['gallery-field_gallery_desc'] = array(
    'field_name' => 'field_gallery_desc',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_gallery_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '7',
      'description' => 'Enter a description for the gallery.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_gallery_reference
  $fields['gallery-field_gallery_reference'] = array(
    'field_name' => 'field_gallery_reference',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'page' => 'page',
      'announcements' => 0,
      'calendar_event' => 0,
      'community' => 0,
      'community_links' => 0,
      'community_page_story' => 0,
      'employee' => 0,
      'extension_page' => 0,
      'gallery' => 0,
      'group' => 0,
      'header_top_link' => 0,
      'home_slideshow' => 0,
      'latest_news_feed' => 0,
      'letterhead' => 0,
      'news_feed_item' => 0,
      'publication' => 0,
      'social_media' => 0,
      'extension_story' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Page to include slideshow',
      'weight' => '8',
      'description' => 'Select a page to have the gallery photos displayed in a slideshow.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_pictures
  $fields['gallery-field_pictures'] = array(
    'field_name' => 'field_pictures',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'pictures',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'NoPictures.jpg',
        'filepath' => 'sites/default/files/imagefield_default_images/NoPictures.jpg',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/NoPictures.jpg',
        'filesize' => 41851,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1278701407,
        'fid' => '34',
      ),
      'use_default_image' => 1,
      'filefield_sources' => array(
        'imce' => FALSE,
        'remote' => FALSE,
        'reference' => FALSE,
        'attach' => FALSE,
      ),
      'filefield_source_autocomplete' => '0',
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => 0,
      'filefield_source_attach_mode' => 'move',
      'label' => 'Pictures',
      'weight' => '9',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Page to include slideshow');
  t('Pictures');

  return $fields;
}
