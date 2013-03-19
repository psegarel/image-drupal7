<?php
/**
 * @file
 * image_taxonomy_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function image_taxonomy_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Petit Verdot',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '00b9d1fb-8324-e964-49d8-e60f2197c07f',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Carmenere',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '05f7a5dc-7aa9-72e4-75f6-7dbaf7f45c60',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => '销售',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '2bef6d52-8e36-d404-5115-ca364fa7b417',
    'language' => 'en',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'features',
  );
  $terms[] = array(
    'name' => 'Torrontes',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '2db00a6b-6b13-0744-3984-80c1cd3a2a9c',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Syrah',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '2f6fe11a-a06b-8624-5d07-5180598cf9b7',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Cabernet Franc',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '3552c068-54d2-22d4-6dcf-f6b62887ccf9',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Bodega Maurizio Lorca',
    'description' => 'Encouraged by the success with Enrige Foster, Maurizio Lorca started his own estate with the support of Mr. Foster. 

The vineyards yields are kept very low, ranging from 1 – 2 bottles, resulting in a strong concentration of aromas, color and very soft tannins. 

The goal is to produce inspired, unique wines of excellent quality.',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '3dcc40ba-d6ef-5ca4-9596-9e4d5e4ecbe2',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'suppliers',
    'field_logo' => array(
      'und' => array(
        0 => array(
          'fid' => 'b227a6f2-a7a3-03b4-1d92-d88fd4d276c6',
          'alt' => '',
          'title' => '',
          'width' => '120',
          'height' => '120',
          'uid' => '1',
          'filename' => 'lorca.gif',
          'uri' => 'public://suppliers/lorca.gif',
          'filemime' => 'image/gif',
          'filesize' => '3667',
          'status' => '1',
          'timestamp' => '1363535724',
          'uuid' => 'b227a6f2-a7a3-03b4-1d92-d88fd4d276c6',
          'focus_rect' => NULL,
          'crop_rect' => NULL,
          'rdf_mapping' => array(),
        ),
      ),
    ),
    'field_country' => array(
      'und' => array(
        0 => array(
          'tid' => '72e22693-c56a-ebb4-edad-2f446ce82129',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Sauvignon',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '48617952-4a7b-2a84-b541-683287834210',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Chardonnay',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '49dabd2d-1797-7c94-ad2b-bcc3fe3e772b',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Argentina',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '72e22693-c56a-ebb4-edad-2f446ce82129',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'countries',
  );
  $terms[] = array(
    'name' => 'Merlot',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '7f464479-3da8-5154-8985-73dccf9db0ca',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Wine',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '823216ae-f632-f684-517a-df864f678058',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'products',
  );
  $terms[] = array(
    'name' => 'Sale',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '84eecae6-aefa-0ec4-8999-3d2516ad6b93',
    'language' => 'en',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'features',
  );
  $terms[] = array(
    'name' => 'New',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '8f5945fc-90b8-a624-4127-13e709531c2c',
    'language' => 'en',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'features',
  );
  $terms[] = array(
    'name' => '新',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => '92c50a7a-ac8e-f0b4-c9cd-1eb155bd4ca0',
    'language' => 'en',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'features',
  );
  $terms[] = array(
    'name' => 'Junta Winery',
    'description' => 'The spirited young entrepreneurs behind this venture  go to great lengths to make top quality Premium wines by using the finest quality grapes and taking great care in vinification.  Winemaker Antonio Vásquez is a passionate winemaker with 10 years experience making wines not only from all the regions of Chile, but around the world. ‘the mine’ offers a complete range of wines and are able to captivate the most demanding consumers: 

‘ the mine’ wines are Fruity and refreshing wines, lightly accompanied by soft touches of oak. They preserve each variety`s distinctive aromas and flavors. 
‘the mine 33 Reserve’ wines seek to perfectly balance the fruit of each variety with the complexity from French oak ageing, obtaining structured, smooth and elegant wines.  
‘the mine Grand Reserve’ wines form most concentrated grapes assemble complexity and elegance. This range rescues the balance of terroir and dedication of our winemaker to obtain a wine of the highest level.
',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9695c173-c966-b8b4-c543-db20b56e3e63',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'suppliers',
    'field_logo' => array(
      'und' => array(
        0 => array(
          'fid' => 'a1f87d3c-1adc-e3e4-0992-1e46ea75feac',
          'alt' => '',
          'title' => '',
          'width' => '120',
          'height' => '120',
          'uid' => '1',
          'filename' => 'junta.gif',
          'uri' => 'public://suppliers/junta.gif',
          'filemime' => 'image/gif',
          'filesize' => '2986',
          'status' => '1',
          'timestamp' => '1363535760',
          'uuid' => 'a1f87d3c-1adc-e3e4-0992-1e46ea75feac',
          'focus_rect' => NULL,
          'crop_rect' => NULL,
          'rdf_mapping' => array(),
        ),
      ),
    ),
    'field_country' => array(
      'und' => array(
        0 => array(
          'tid' => 'c042302f-48c8-3d24-59e2-11d9699fc000',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Olive Oil',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9efe95c2-3962-8404-6541-4ec8435c4593',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'products',
  );
  $terms[] = array(
    'name' => 'Blend',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => 'a48db0ff-e946-2334-2178-7db258c55ab3',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Chile',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'c042302f-48c8-3d24-59e2-11d9699fc000',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'countries',
  );
  $terms[] = array(
    'name' => 'Malbec',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => 'c99aebd5-df96-03c4-2967-f050c9cbd098',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  $terms[] = array(
    'name' => 'Greenpath Food for Life',
    'description' => 'Greenpath offers the finest products from the Chilean countryside. 

Their aromatic, flavorful ‘Las Piedras’ olive oils emerged from the Jurgens family ́s deep-rooted affection for the Chilean countryside. 

The trees on the tree orchards on the ‘Las Palmas Sur’ olive grove were planted six years ago and have been tended with patience and dedication ever since. 

Their Extra Virgin Olive Oil offers extraordinary fruit characteristics. All their orchards are under organic management.',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'd07b26fa-180e-73d4-69fc-9fa4f48038fa',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'suppliers',
    'field_logo' => array(
      'und' => array(
        0 => array(
          'fid' => '7db20fc1-d670-d844-4982-aa2e2eafda7f',
          'alt' => '',
          'title' => '',
          'width' => '120',
          'height' => '120',
          'uid' => '1',
          'filename' => 'greenpath.gif',
          'uri' => 'public://suppliers/greenpath.gif',
          'filemime' => 'image/gif',
          'filesize' => '3585',
          'status' => '1',
          'timestamp' => '1363535745',
          'uuid' => '7db20fc1-d670-d844-4982-aa2e2eafda7f',
          'focus_rect' => NULL,
          'crop_rect' => NULL,
          'rdf_mapping' => array(),
        ),
      ),
    ),
    'field_country' => array(
      'und' => array(
        0 => array(
          'tid' => 'c042302f-48c8-3d24-59e2-11d9699fc000',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bodega Enrique Foster',
    'description' => 'Bodega Enrique Foster is a state-of-the-art winery surrounded by 90-year old vines. 

Their objective is nothing less than to produce the best Malbec in the world. No expense has been spared, from the latest vineyard management to the stainless steel equipment and the new French and American oak barrels in the underground cellars. 

Their winemaker, Mauricio Lorca, already produced several prize winning wines for Bodega Enrique Foster.',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'db2db856-d9b6-6114-3dd4-6c368a9b4811',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'suppliers',
    'field_logo' => array(
      'und' => array(
        0 => array(
          'fid' => 'f5766c20-0c2e-7e84-1d10-d27f8680718a',
          'alt' => '',
          'title' => '',
          'width' => '120',
          'height' => '120',
          'uid' => '1',
          'filename' => 'enriquefoster.png',
          'uri' => 'public://suppliers/enriquefoster.png',
          'filemime' => 'image/png',
          'filesize' => '10600',
          'status' => '1',
          'timestamp' => '1363535712',
          'uuid' => 'f5766c20-0c2e-7e84-1d10-d27f8680718a',
          'focus_rect' => NULL,
          'crop_rect' => NULL,
          'rdf_mapping' => array(),
        ),
      ),
    ),
    'field_country' => array(
      'und' => array(
        0 => array(
          'tid' => '72e22693-c56a-ebb4-edad-2f446ce82129',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cabernet',
    'description' => '',
    'format' => 'plain_text',
    'weight' => '0',
    'uuid' => 'f83c3109-3b58-3844-3947-da38263dbbbb',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'grape_varieties',
  );
  return $terms;
}
