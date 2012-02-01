<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function photo_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(),
  );

  // Exported permission: view imagecache gallery-preview
  $permissions['view imagecache gallery-preview'] = array(
    'name' => 'view imagecache gallery-preview',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache gallery-slideshow
  $permissions['view imagecache gallery-slideshow'] = array(
    'name' => 'view imagecache gallery-slideshow',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache gallery-thumbnail
  $permissions['view imagecache gallery-thumbnail'] = array(
    'name' => 'view imagecache gallery-thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache galleryformatter_slide
  $permissions['view imagecache galleryformatter_slide'] = array(
    'name' => 'view imagecache galleryformatter_slide',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache galleryformatter_thumb
  $permissions['view imagecache galleryformatter_thumb'] = array(
    'name' => 'view imagecache galleryformatter_thumb',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache slideshow-220
  $permissions['view imagecache slideshow-220'] = array(
    'name' => 'view imagecache slideshow-220',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  return $permissions;
}
