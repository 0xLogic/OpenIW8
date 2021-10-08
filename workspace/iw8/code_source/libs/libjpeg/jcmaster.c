/*
==============
initial_setup
==============
*/
void initial_setup(jpeg_decompress_struct *cinfo)
{
  int num_components; 
  jpeg_component_info *comp_info; 
  int max_v_samp_factor; 
  int v5; 
  int max_h_samp_factor; 
  int *p_v_samp_factor; 
  int v8; 
  int v9; 
  unsigned int *p_width_in_blocks; 
  int v11; 
  int v12; 
  int v13; 

  if ( (int)cinfo->image_height > 65500 || (int)cinfo->image_width > 65500 )
  {
    cinfo->err->msg_code = 41;
    cinfo->err->msg_parm.i[0] = 65500;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( cinfo->data_precision != 8 )
  {
    cinfo->err->msg_code = 15;
    cinfo->err->msg_parm.i[0] = cinfo->data_precision;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  num_components = cinfo->num_components;
  if ( num_components > 10 )
  {
    cinfo->err->msg_code = 26;
    cinfo->err->msg_parm.i[0] = cinfo->num_components;
    cinfo->err->msg_parm.i[1] = 10;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    num_components = cinfo->num_components;
  }
  comp_info = cinfo->comp_info;
  max_v_samp_factor = 1;
  v5 = 0;
  cinfo->max_h_samp_factor = 1;
  cinfo->max_v_samp_factor = 1;
  if ( num_components > 0 )
  {
    max_h_samp_factor = 1;
    p_v_samp_factor = &comp_info->v_samp_factor;
    do
    {
      v8 = *(p_v_samp_factor - 1);
      if ( (unsigned int)(v8 - 1) > 3 || *p_v_samp_factor <= 0 || *p_v_samp_factor > 4 )
      {
        cinfo->err->msg_code = 18;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        max_h_samp_factor = cinfo->max_h_samp_factor;
        v8 = *(p_v_samp_factor - 1);
        max_v_samp_factor = cinfo->max_v_samp_factor;
      }
      if ( max_h_samp_factor <= v8 )
        max_h_samp_factor = v8;
      cinfo->max_h_samp_factor = max_h_samp_factor;
      if ( max_v_samp_factor <= *p_v_samp_factor )
        max_v_samp_factor = *p_v_samp_factor;
      ++v5;
      p_v_samp_factor += 24;
      cinfo->max_v_samp_factor = max_v_samp_factor;
    }
    while ( v5 < cinfo->num_components );
    comp_info = cinfo->comp_info;
  }
  v9 = 0;
  cinfo->min_DCT_scaled_size = 8;
  if ( cinfo->num_components > 0 )
  {
    p_width_in_blocks = &comp_info->width_in_blocks;
    do
    {
      v11 = *(p_width_in_blocks - 5);
      p_width_in_blocks[2] = 8;
      *p_width_in_blocks = j_jdiv_round_up(cinfo->image_width * v11, 8 * cinfo->max_h_samp_factor);
      v12 = j_jdiv_round_up(*(p_width_in_blocks - 4) * cinfo->image_height, 8 * cinfo->max_v_samp_factor);
      v13 = *(p_width_in_blocks - 5);
      p_width_in_blocks[1] = v12;
      p_width_in_blocks[3] = j_jdiv_round_up(cinfo->image_width * v13, cinfo->max_h_samp_factor);
      p_width_in_blocks[4] = j_jdiv_round_up(*(p_width_in_blocks - 4) * cinfo->image_height, cinfo->max_v_samp_factor);
      ++v9;
      *((_BYTE *)p_width_in_blocks + 20) = 1;
      *(_QWORD *)(p_width_in_blocks + 13) = 0i64;
      p_width_in_blocks += 24;
    }
    while ( v9 < cinfo->num_components );
    max_v_samp_factor = cinfo->max_v_samp_factor;
  }
  cinfo->total_iMCU_rows = j_jdiv_round_up(cinfo->image_height, 8 * max_v_samp_factor);
  cinfo->inputctl->has_multiple_scans = cinfo->comps_in_scan < cinfo->num_components || cinfo->progressive_mode;
}

/*
==============
per_scan_setup
==============
*/
void per_scan_setup(jpeg_decompress_struct *cinfo)
{
  int comps_in_scan; 
  jpeg_component_info *v3; 
  int v_samp_factor; 
  unsigned int v5; 
  int image_height; 
  int v7; 
  int v8; 
  jpeg_component_info **cur_comp_info; 
  jpeg_component_info *v10; 
  unsigned int h_samp_factor; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int height_in_blocks; 
  int v17; 

  comps_in_scan = cinfo->comps_in_scan;
  if ( comps_in_scan == 1 )
  {
    v3 = cinfo->cur_comp_info[0];
    cinfo->MCUs_per_row = v3->width_in_blocks;
    cinfo->MCU_rows_in_scan = v3->height_in_blocks;
    v3->MCU_sample_width = v3->DCT_scaled_size;
    v_samp_factor = v3->height_in_blocks % v3->v_samp_factor;
    v3->MCU_width = 1;
    v3->MCU_height = 1;
    v3->MCU_blocks = 1;
    if ( !v_samp_factor )
      v_samp_factor = v3->v_samp_factor;
    v3->last_row_height = v_samp_factor;
    v3->last_col_width = 1;
    *(_QWORD *)&cinfo->blocks_in_MCU = 1i64;
  }
  else
  {
    if ( (unsigned int)(comps_in_scan - 1) > 3 )
    {
      cinfo->err->msg_code = 26;
      cinfo->err->msg_parm.i[0] = cinfo->comps_in_scan;
      cinfo->err->msg_parm.i[1] = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v5 = j_jdiv_round_up(cinfo->image_width, 8 * cinfo->max_h_samp_factor);
    image_height = cinfo->image_height;
    v7 = 8 * cinfo->max_v_samp_factor;
    cinfo->MCUs_per_row = v5;
    v8 = 0;
    cinfo->MCU_rows_in_scan = j_jdiv_round_up(image_height, v7);
    cinfo->blocks_in_MCU = 0;
    if ( cinfo->comps_in_scan > 0 )
    {
      cur_comp_info = cinfo->cur_comp_info;
      do
      {
        v10 = *cur_comp_info;
        h_samp_factor = (*cur_comp_info)->h_samp_factor;
        v12 = (*cur_comp_info)->v_samp_factor;
        v13 = h_samp_factor * (*cur_comp_info)->DCT_scaled_size;
        v14 = h_samp_factor * v12;
        v10->MCU_width = h_samp_factor;
        v10->MCU_height = v12;
        v10->MCU_sample_width = v13;
        v15 = v10->width_in_blocks % h_samp_factor;
        height_in_blocks = v10->height_in_blocks;
        v10->MCU_blocks = h_samp_factor * v12;
        if ( !v15 )
          v15 = h_samp_factor;
        v10->last_col_width = v15;
        v17 = height_in_blocks % v12;
        if ( !(height_in_blocks % v12) )
          v17 = v12;
        v10->last_row_height = v17;
        if ( v14 + cinfo->blocks_in_MCU > 10 )
        {
          cinfo->err->msg_code = 13;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        for ( ; v14 > 0; ++cinfo->blocks_in_MCU )
        {
          --v14;
          cinfo->MCU_membership[cinfo->blocks_in_MCU] = v8;
        }
        ++v8;
        ++cur_comp_info;
      }
      while ( v8 < cinfo->comps_in_scan );
    }
  }
}

/*
==============
finish_pass_master
==============
*/
void finish_pass_master(jpeg_compress_struct *cinfo)
{
  jpeg_comp_master *master; 
  int prepare_for_pass; 
  int v4; 

  master = cinfo->master;
  ((void (*)(void))cinfo->entropy->finish_pass)();
  prepare_for_pass = (int)master[1].prepare_for_pass;
  if ( prepare_for_pass )
  {
    v4 = prepare_for_pass - 1;
    if ( !v4 )
    {
      ++HIDWORD(master[1].prepare_for_pass);
      LODWORD(master[1].prepare_for_pass) = 2;
      return;
    }
    if ( v4 == 1 )
    {
      if ( cinfo->optimize_coding )
      {
        ++HIDWORD(master[1].pass_startup);
        ++HIDWORD(master[1].prepare_for_pass);
        LODWORD(master[1].prepare_for_pass) = 1;
        return;
      }
      goto LABEL_8;
    }
  }
  else
  {
    LODWORD(master[1].prepare_for_pass) = 2;
    if ( !cinfo->optimize_coding )
LABEL_8:
      ++HIDWORD(master[1].pass_startup);
  }
  ++HIDWORD(master[1].prepare_for_pass);
}

/*
==============
jinit_c_master_control
==============
*/
void jinit_c_master_control(jpeg_compress_struct *cinfo, unsigned __int8 transcode_only)
{
  __int64 v4; 
  int v5; 
  int num_scans; 

  v4 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 48i64);
  cinfo->master = (jpeg_comp_master *)v4;
  *(_QWORD *)v4 = prepare_for_pass;
  *(_QWORD *)(v4 + 8) = pass_startup;
  *(_QWORD *)(v4 + 16) = finish_pass_master;
  *(_BYTE *)(v4 + 25) = 0;
  initial_setup_0(cinfo);
  if ( cinfo->scan_info )
  {
    validate_script(cinfo);
    if ( cinfo->progressive_mode )
      cinfo->optimize_coding = 1;
  }
  else
  {
    cinfo->progressive_mode = 0;
    cinfo->num_scans = 1;
  }
  if ( transcode_only )
    v5 = 2 - (cinfo->optimize_coding != 0);
  else
    v5 = 0;
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  num_scans = 2 * cinfo->num_scans;
  if ( !cinfo->optimize_coding )
    num_scans = cinfo->num_scans;
  *(_DWORD *)(v4 + 40) = num_scans;
}

/*
==============
pass_startup
==============
*/
void pass_startup(jpeg_compress_struct *cinfo)
{
  cinfo->master->call_pass_startup = 0;
  ((void (*)(void))cinfo->marker->write_frame_header)();
  cinfo->marker->write_scan_header(cinfo);
}

/*
==============
prepare_for_pass
==============
*/
void prepare_for_pass(jpeg_compress_struct *cinfo)
{
  jpeg_comp_master *master; 
  int v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int prepare_for_pass_high; 
  jpeg_progress_mgr *progress; 

  master = cinfo->master;
  v3 = (int)master[1].prepare_for_pass;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        cinfo->err->msg_code = 48;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        goto LABEL_20;
      }
    }
    else
    {
      select_scan_parameters(cinfo);
      per_scan_setup_0(cinfo);
      if ( cinfo->Ss || !cinfo->Ah || cinfo->arith_code )
      {
        LOBYTE(v5) = 1;
        cinfo->entropy->start_pass(cinfo, v5);
        cinfo->coef->start_pass(cinfo, JBUF_CRANK_DEST);
        master->call_pass_startup = 0;
        goto LABEL_20;
      }
      ++HIDWORD(master[1].prepare_for_pass);
      LODWORD(master[1].prepare_for_pass) = 2;
    }
    if ( !cinfo->optimize_coding )
    {
      select_scan_parameters(cinfo);
      per_scan_setup_0(cinfo);
    }
    cinfo->entropy->start_pass(cinfo, 0i64);
    cinfo->coef->start_pass(cinfo, JBUF_CRANK_DEST);
    if ( !HIDWORD(master[1].pass_startup) )
      cinfo->marker->write_frame_header(cinfo);
    cinfo->marker->write_scan_header(cinfo);
    master->call_pass_startup = 0;
  }
  else
  {
    select_scan_parameters(cinfo);
    per_scan_setup_0(cinfo);
    if ( !cinfo->raw_data_in )
    {
      cinfo->cconvert->start_pass(cinfo);
      cinfo->downsample->start_pass(cinfo);
      cinfo->prep->start_pass(cinfo, JBUF_PASS_THRU);
    }
    cinfo->fdct->start_pass(cinfo);
    cinfo->entropy->start_pass(cinfo, cinfo->optimize_coding);
    v6 = 0i64;
    if ( SLODWORD(master[1].pass_startup) > 1 )
      v6 = 3i64;
    cinfo->coef->start_pass(cinfo, v6);
    cinfo->main->start_pass(cinfo, JBUF_PASS_THRU);
    master->call_pass_startup = cinfo->optimize_coding == 0;
  }
LABEL_20:
  prepare_for_pass_high = HIDWORD(master[1].prepare_for_pass);
  master->is_last_pass = prepare_for_pass_high == LODWORD(master[1].pass_startup) - 1;
  progress = cinfo->progress;
  if ( progress )
  {
    progress->completed_passes = prepare_for_pass_high;
    cinfo->progress->total_passes = (int)master[1].pass_startup;
  }
}

/*
==============
select_scan_parameters
==============
*/
void select_scan_parameters(jpeg_compress_struct *cinfo)
{
  const jpeg_scan_info *scan_info; 
  int v3; 
  int *p_comps_in_scan; 
  jpeg_component_info **cur_comp_info; 
  int *v6; 
  __int64 v7; 
  int num_components; 
  int v9; 
  jpeg_component_info **v10; 
  __int64 v11; 

  scan_info = cinfo->scan_info;
  if ( scan_info )
  {
    v3 = 0;
    p_comps_in_scan = &scan_info[SHIDWORD(cinfo->master[1].pass_startup)].comps_in_scan;
    cinfo->comps_in_scan = *p_comps_in_scan;
    if ( *p_comps_in_scan > 0 )
    {
      cur_comp_info = cinfo->cur_comp_info;
      v6 = p_comps_in_scan + 1;
      do
      {
        v7 = *v6;
        ++cur_comp_info;
        ++v3;
        ++v6;
        *(cur_comp_info - 1) = &cinfo->comp_info[v7];
      }
      while ( v3 < *p_comps_in_scan );
    }
    cinfo->Ss = p_comps_in_scan[5];
    cinfo->Se = p_comps_in_scan[6];
    cinfo->Ah = p_comps_in_scan[7];
    cinfo->Al = p_comps_in_scan[8];
  }
  else
  {
    num_components = cinfo->num_components;
    if ( num_components > 4 )
    {
      cinfo->err->msg_code = 26;
      cinfo->err->msg_parm.i[0] = cinfo->num_components;
      cinfo->err->msg_parm.i[1] = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      num_components = cinfo->num_components;
    }
    cinfo->comps_in_scan = num_components;
    v9 = 0;
    if ( num_components > 0 )
    {
      v10 = cinfo->cur_comp_info;
      do
      {
        v11 = v9;
        ++v10;
        ++v9;
        *(v10 - 1) = &cinfo->comp_info[v11];
      }
      while ( v9 < cinfo->num_components );
    }
    cinfo->Ss = 0;
    *(_QWORD *)&cinfo->Se = 63i64;
    cinfo->Al = 0;
  }
}

/*
==============
validate_script
==============
*/
void validate_script(jpeg_compress_struct *cinfo)
{
  int v1; 
  const jpeg_scan_info *scan_info; 
  int v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  int num_components; 
  char *v8; 
  unsigned __int64 i; 
  int j; 
  __int64 comps_in_scan; 
  __int64 v12; 
  __int64 v13; 
  int *component_index; 
  int v15; 
  int Ss; 
  __int64 Se; 
  unsigned int Ah; 
  unsigned int Al; 
  bool v20; 
  __int64 v21; 
  int *v22; 
  __int64 v23; 
  int *v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  int v28; 
  int *v29; 
  int *v30; 
  char *v31; 
  char *v32; 
  int v33; 
  const jpeg_scan_info *v34; 
  __int64 v35; 
  int *v36; 
  char v37[2560]; 
  char v38[16]; 

  v1 = 0;
  if ( cinfo->num_scans <= 0 )
  {
    cinfo->err->msg_code = 19;
    cinfo->err->msg_parm.i[0] = 0;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  scan_info = cinfo->scan_info;
  v34 = scan_info;
  if ( scan_info->Ss || scan_info->Se != 63 )
  {
    num_components = cinfo->num_components;
    cinfo->progressive_mode = 1;
    if ( num_components > 0 )
    {
      v8 = v37;
      for ( i = (unsigned __int64)(unsigned int)num_components << 6; i; --i )
      {
        *(_DWORD *)v8 = -1;
        v8 += 4;
      }
    }
  }
  else
  {
    v4 = cinfo->num_components;
    v5 = 0i64;
    cinfo->progressive_mode = 0;
    if ( v4 > 0 )
    {
      v6 = 0i64;
      do
      {
        if ( v6 >= 0xA )
        {
          j___report_rangecheckfailure(v5);
          JUMPOUT(0x143865B2Ai64);
        }
        v38[v6] = 0;
        v5 = (unsigned int)(v5 + 1);
        ++v6;
      }
      while ( (int)v5 < v4 );
    }
  }
  for ( j = 1; j <= cinfo->num_scans; v34 = scan_info )
  {
    comps_in_scan = scan_info->comps_in_scan;
    if ( (unsigned int)(comps_in_scan - 1) > 3 )
    {
      cinfo->err->msg_code = 26;
      cinfo->err->msg_parm.i[0] = comps_in_scan;
      cinfo->err->msg_parm.i[1] = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v12 = 0i64;
    v13 = comps_in_scan;
    if ( (int)comps_in_scan > 0 )
    {
      component_index = scan_info->component_index;
      do
      {
        v15 = *component_index;
        if ( *component_index < 0 || v15 >= cinfo->num_components )
        {
          cinfo->err->msg_code = 19;
          cinfo->err->msg_parm.i[0] = j;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        if ( v12 > 0 && v15 <= *(component_index - 1) )
        {
          cinfo->err->msg_code = 19;
          cinfo->err->msg_parm.i[0] = j;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        ++v12;
        ++component_index;
      }
      while ( v12 < comps_in_scan );
    }
    Ss = scan_info->Ss;
    Se = scan_info->Se;
    Ah = scan_info->Ah;
    Al = scan_info->Al;
    v33 = Ss;
    if ( cinfo->progressive_mode )
    {
      if ( (unsigned int)Ss > 0x3F || (int)Se < Ss || (int)Se >= 64 || Ah > 0xA || Al > 0xA )
      {
        cinfo->err->msg_code = 17;
        cinfo->err->msg_parm.i[0] = j;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        Ss = v33;
      }
      if ( Ss )
        v20 = (_DWORD)comps_in_scan == 1;
      else
        v20 = (_DWORD)Se == 0;
      if ( !v20 )
      {
        cinfo->err->msg_code = 17;
        cinfo->err->msg_parm.i[0] = j;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        Ss = v33;
      }
      v21 = Se;
      if ( (int)comps_in_scan > 0 )
      {
        v22 = v34->component_index;
        v23 = Ss;
        v36 = v34->component_index;
        v35 = Ss;
        while ( 1 )
        {
          v24 = (int *)&v37[256 * (__int64)*v22];
          if ( Ss && *v24 < 0 )
          {
            cinfo->err->msg_code = 17;
            cinfo->err->msg_parm.i[0] = j;
            cinfo->err->error_exit((jpeg_common_struct *)cinfo);
            v23 = v35;
          }
          v25 = v23;
          if ( v23 <= v21 )
            break;
LABEL_52:
          Ss = v33;
          v22 = ++v36;
          if ( !--v13 )
            goto LABEL_53;
        }
        while ( 2 )
        {
          v26 = v24[v25];
          if ( v26 < 0 )
          {
            v27 = Ah == 0;
            goto LABEL_48;
          }
          if ( Ah != v26 )
            goto LABEL_49;
          v27 = Al == Ah - 1;
LABEL_48:
          if ( !v27 )
          {
LABEL_49:
            cinfo->err->msg_code = 17;
            cinfo->err->msg_parm.i[0] = j;
            cinfo->err->error_exit((jpeg_common_struct *)cinfo);
          }
          v24[v25++] = Al;
          if ( v25 > v21 )
          {
            v23 = v35;
            goto LABEL_52;
          }
          continue;
        }
      }
LABEL_53:
      scan_info = v34;
    }
    else
    {
      if ( Ss || __PAIR64__(Ah, Se) != 63 || Al )
      {
        cinfo->err->msg_code = 17;
        cinfo->err->msg_parm.i[0] = j;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      if ( (int)comps_in_scan > 0 )
      {
        v30 = scan_info->component_index;
        do
        {
          v31 = &v38[*v30];
          if ( *v31 )
          {
            cinfo->err->msg_code = 19;
            cinfo->err->msg_parm.i[0] = j;
            cinfo->err->error_exit((jpeg_common_struct *)cinfo);
          }
          ++v30;
          *v31 = 1;
          --v13;
        }
        while ( v13 );
      }
    }
    ++scan_info;
    ++j;
    v1 = 0;
  }
  v28 = cinfo->num_components;
  if ( cinfo->progressive_mode )
  {
    if ( v28 > 0 )
    {
      v29 = (int *)v37;
      do
      {
        if ( *v29 < 0 )
        {
          cinfo->err->msg_code = 45;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        ++v1;
        v29 += 64;
      }
      while ( v1 < cinfo->num_components );
    }
  }
  else if ( v28 > 0 )
  {
    v32 = v38;
    do
    {
      if ( !*v32 )
      {
        cinfo->err->msg_code = 45;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      ++v1;
      ++v32;
    }
    while ( v1 < cinfo->num_components );
  }
}

