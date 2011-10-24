<?php
    if ($row->_field_data['nid']['entity']->field_sponsor_fake_real['und'][0]['value'] == 'fake') {
        print '<a href="/diventa-sponsor"><img typeof="foaf:Image" src="' . base_path() . '/sites/default/files/styles/sponsor_gold/public/session.jpg" alt="" /></a>';
    } else {
      print $output;
    }
?>