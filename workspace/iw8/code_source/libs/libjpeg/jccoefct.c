/*
==============
compress_data
==============
*/
unsigned __int8 compress_data(jpeg_compress_struct *cinfo, unsigned __int8 ***input_buf)
{
  jpeg_c_coef_controller *coef; 
  jpeg_compress_struct *v3; 
  unsigned __int8 ***v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  unsigned int start_pass_high; 
  int v9; 
  int **cur_comp_info; 
  int *v11; 
  signed int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  void **v17; 
  int i; 
  _WORD *v19; 
  jpeg_c_coef_controller *v20; 
  int last_row_height; 
  int v22; 
  void (__fastcall **v23)(jpeg_compress_struct *, J_BUF_MODE); 
  _WORD *v24; 
  _WORD *v25; 
  unsigned __int8 result; 
  jpeg_component_info *v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  jpeg_component_info **v32; 
  int v35; 
  unsigned int v36; 

  coef = cinfo->coef;
  v3 = cinfo;
  v4 = input_buf;
  v5 = cinfo->MCUs_per_row - 1;
  v6 = cinfo->total_iMCU_rows - 1;
  v30 = v5;
  v7 = (int)coef[1].compress_data;
  v36 = v6;
  v35 = v7;
  if ( v7 >= SHIDWORD(coef[1].compress_data) )
  {
LABEL_22:
    ++LODWORD(coef[1].start_pass);
    v20 = v3->coef;
    if ( v3->comps_in_scan <= 1 )
    {
      v27 = v3->cur_comp_info[0];
      if ( LODWORD(v20[1].start_pass) >= v3->total_iMCU_rows - 1 )
        last_row_height = v27->last_row_height;
      else
        last_row_height = v27->v_samp_factor;
    }
    else
    {
      last_row_height = 1;
    }
    HIDWORD(v20[1].compress_data) = last_row_height;
    result = 1;
    *(void (__fastcall **)(jpeg_compress_struct *, J_BUF_MODE))((char *)&v20[1].start_pass + 4) = NULL;
  }
  else
  {
    start_pass_high = HIDWORD(coef[1].start_pass);
    v28 = start_pass_high;
    while ( start_pass_high > v5 )
    {
LABEL_21:
      ++v7;
      HIDWORD(coef[1].start_pass) = 0;
      start_pass_high = 0;
      v35 = v7;
      v28 = 0;
      if ( v7 >= SHIDWORD(coef[1].compress_data) )
        goto LABEL_22;
    }
    while ( 1 )
    {
      v9 = 0;
      v29 = 0;
      if ( v3->comps_in_scan > 0 )
      {
        cur_comp_info = (int **)v3->cur_comp_info;
        v32 = v3->cur_comp_info;
        do
        {
          v11 = *cur_comp_info;
          if ( start_pass_high >= v5 )
            v12 = v11[17];
          else
            v12 = v11[13];
          v13 = 8 * v7;
          v14 = start_pass_high * v11[16];
          v15 = 0;
          v31 = v14;
          if ( v11[14] > 0 )
          {
            v16 = v11[13];
            do
            {
              if ( LODWORD(coef[1].start_pass) < v6 || v15 + v7 < v11[18] )
              {
                v3->fdct->forward_DCT(v3, (jpeg_component_info *)v11, v4[v11[1]], *((__int16 (**)[64])&coef[2].start_pass + v9), v13, v14, v12);
                v16 = v11[13];
                if ( v12 < v16 )
                {
                  j_jzero_far(*((void **)&coef[2].start_pass + v12 + v9), (__int64)(v16 - v12) << 7);
                  v16 = v11[13];
                  v22 = v12;
                  if ( v12 < v16 )
                  {
                    v23 = &coef[2].start_pass + v9 + (__int64)v12;
                    do
                    {
                      v24 = *(v23 - 1);
                      ++v22;
                      v25 = *v23++;
                      *v25 = *v24;
                      v16 = v11[13];
                    }
                    while ( v22 < v16 );
                  }
                }
              }
              else
              {
                v17 = (void **)(&coef[2].start_pass + v9);
                j_jzero_far(*v17, (__int64)v16 << 7);
                v16 = v11[13];
                for ( i = 0; i < v16; v16 = v11[13] )
                {
                  ++i;
                  v19 = *v17++;
                  *v19 = **((_WORD **)&coef[1].compress_data + v9);
                }
                v3 = cinfo;
              }
              v14 = v31;
              v9 += v16;
              v7 = v35;
              v13 += 8;
              v6 = v36;
              ++v15;
              v4 = input_buf;
            }
            while ( v15 < v11[14] );
            cur_comp_info = (int **)v32;
            start_pass_high = v28;
          }
          ++cur_comp_info;
          v5 = v30;
          ++v29;
          v32 = (jpeg_component_info **)cur_comp_info;
        }
        while ( v29 < v3->comps_in_scan );
      }
      if ( !v3->entropy->encode_mcu(v3, (__int16 (**)[64])&coef[2]) )
        break;
      v7 = v35;
      ++start_pass_high;
      v6 = v36;
      v4 = input_buf;
      v28 = start_pass_high;
      if ( start_pass_high > v5 )
        goto LABEL_21;
    }
    LODWORD(coef[1].compress_data) = v35;
    result = 0;
    HIDWORD(coef[1].start_pass) = start_pass_high;
  }
  return result;
}

/*
==============
compress_first_pass
==============
*/
unsigned __int8 compress_first_pass(jpeg_compress_struct *cinfo, unsigned __int8 ***input_buf)
{
  unsigned __int8 ***v2; 
  jpeg_c_coef_controller *coef; 
  unsigned int v4; 
  jpeg_component_info *comp_info; 
  __int64 v6; 
  __int64 v7; 
  unsigned int start_pass; 
  __int64 v9; 
  int v_samp_factor; 
  unsigned int h_samp_factor; 
  __int64 width_in_blocks; 
  int v13; 
  int v14; 
  int v15; 
  __int16 (**v16)[64]; 
  int v17; 
  __int16 (*v18)[64]; 
  __int16 *v19; 
  __int16 v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  void **v27; 
  unsigned __int64 v28; 
  char *v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int16 v33; 
  _WORD *v34; 
  __int64 v35; 
  int v37; 
  jpeg_component_info *v38; 
  unsigned __int8 ***v39; 
  jpeg_c_coef_controller *v40; 
  __int64 v41; 
  __int64 v42; 
  jpeg_compress_struct *v43; 
  unsigned __int8 ***v44; 
  int v45; 
  unsigned int v46; 

  v44 = input_buf;
  v43 = cinfo;
  v2 = input_buf;
  coef = cinfo->coef;
  v4 = cinfo->total_iMCU_rows - 1;
  comp_info = cinfo->comp_info;
  v40 = coef;
  v46 = v4;
  v37 = 0;
  v38 = comp_info;
  if ( cinfo->num_components > 0 )
  {
    v6 = (char *)coef - (char *)input_buf + 112;
    v42 = v6;
    v39 = input_buf;
    do
    {
      v7 = ((__int64 (__fastcall *)(jpeg_compress_struct *, _QWORD, _QWORD))cinfo->mem->access_virt_barray)(cinfo, *(unsigned __int8 ***)((char *)input_buf + v6), (unsigned int)(comp_info->v_samp_factor * LODWORD(coef[1].start_pass)));
      start_pass = (unsigned int)coef[1].start_pass;
      v9 = v7;
      v41 = v7;
      if ( start_pass >= v4 )
      {
        v_samp_factor = comp_info->height_in_blocks % comp_info->v_samp_factor;
        if ( !v_samp_factor )
          v_samp_factor = comp_info->v_samp_factor;
      }
      else
      {
        v_samp_factor = comp_info->v_samp_factor;
      }
      h_samp_factor = comp_info->h_samp_factor;
      width_in_blocks = comp_info->width_in_blocks;
      v45 = v_samp_factor;
      v13 = comp_info->width_in_blocks % h_samp_factor;
      v14 = v13;
      if ( v13 > 0 )
        v14 = h_samp_factor - v13;
      v15 = 0;
      if ( v_samp_factor > 0 )
      {
        v16 = (__int16 (**)[64])v7;
        v17 = v_samp_factor;
        do
        {
          v18 = *v16;
          v43->fdct->forward_DCT(v43, v38, *v39, *v16, 8 * v15, 0, width_in_blocks);
          if ( v14 > 0 )
          {
            v19 = v18[width_in_blocks];
            j_jzero_far(v19, (__int64)v14 << 7);
            v20 = *(v19 - 64);
            v21 = v14;
            do
            {
              *v19 = v20;
              v19 += 64;
              --v21;
            }
            while ( v21 );
          }
          ++v15;
          ++v16;
        }
        while ( v15 < v17 );
        v9 = v41;
        comp_info = v38;
        start_pass = (unsigned int)v40[1].start_pass;
        v4 = v46;
      }
      if ( start_pass == v4 )
      {
        v22 = v45;
        v23 = v14 + width_in_blocks;
        v24 = (int)h_samp_factor;
        v25 = v23 / h_samp_factor;
        if ( v45 < comp_info->v_samp_factor )
        {
          v26 = v23;
          v27 = (void **)(v9 + 8i64 * v45);
          v28 = v26 << 7;
          do
          {
            v29 = (char *)*v27;
            v30 = (__int64)*(v27 - 1);
            j_jzero_far(*v27, v28);
            if ( (_DWORD)v25 )
            {
              v31 = v25;
              v32 = v30 - (_QWORD)v29;
              do
              {
                v33 = *(_WORD *)&v29[128 * v24 - 128 + v32];
                if ( v24 > 0 )
                {
                  v34 = v29;
                  v35 = v24;
                  do
                  {
                    *v34 = v33;
                    v34 += 64;
                    --v35;
                  }
                  while ( v35 );
                }
                v29 += 128 * v24;
                --v31;
              }
              while ( v31 );
            }
            comp_info = v38;
            ++v22;
            ++v27;
          }
          while ( v22 < v38->v_samp_factor );
          v4 = v46;
        }
      }
      ++comp_info;
      cinfo = v43;
      input_buf = v39 + 1;
      v6 = v42;
      ++v37;
      ++v39;
      coef = v40;
      v38 = comp_info;
    }
    while ( v37 < v43->num_components );
    v2 = v44;
  }
  return compress_output(cinfo, v2);
}

/*
==============
compress_output
==============
*/
unsigned __int8 compress_output(jpeg_compress_struct *cinfo, unsigned __int8 ***input_buf, __int64 a3)
{
  jpeg_c_coef_controller *coef; 
  int v4; 
  char *v6; 
  __int64 compress_data_low; 
  unsigned int start_pass_high; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  char *v12; 
  __int64 v13; 
  int v14; 
  unsigned __int64 v15; 
  _QWORD *v16; 
  int v17; 
  unsigned __int64 v18; 
  void (__fastcall **v19)(jpeg_compress_struct *, J_BUF_MODE); 
  jpeg_c_coef_controller *v20; 
  int last_row_height; 
  unsigned __int8 result; 
  jpeg_component_info *v23; 
  int v24; 
  __int64 v25; 
  char v26[32]; 

  coef = cinfo->coef;
  v4 = 0;
  if ( cinfo->comps_in_scan > 0 )
  {
    v6 = v26;
    do
    {
      ++v4;
      *(_QWORD *)v6 = ((__int64 (__fastcall *)(jpeg_compress_struct *, _QWORD, _QWORD))cinfo->mem->access_virt_barray)(cinfo, *((_QWORD *)&coef[7].start_pass + *(int *)(*(_QWORD *)&v6[(char *)cinfo - v26 + 328] + 4i64)), (unsigned int)(*(_DWORD *)(*(_QWORD *)&v6[(char *)cinfo - v26 + 328] + 12i64) * LODWORD(coef[1].start_pass)));
      v6 += 8;
    }
    while ( v4 < cinfo->comps_in_scan );
  }
  compress_data_low = SLODWORD(coef[1].compress_data);
  v24 = compress_data_low;
  if ( (int)compress_data_low >= SHIDWORD(coef[1].compress_data) )
  {
LABEL_21:
    ++LODWORD(coef[1].start_pass);
    v20 = cinfo->coef;
    if ( cinfo->comps_in_scan <= 1 )
    {
      v23 = cinfo->cur_comp_info[0];
      if ( LODWORD(v20[1].start_pass) >= cinfo->total_iMCU_rows - 1 )
        last_row_height = v23->last_row_height;
      else
        last_row_height = v23->v_samp_factor;
    }
    else
    {
      last_row_height = 1;
    }
    HIDWORD(v20[1].compress_data) = last_row_height;
    result = 1;
    *(void (__fastcall **)(jpeg_compress_struct *, J_BUF_MODE))((char *)&v20[1].start_pass + 4) = NULL;
  }
  else
  {
    start_pass_high = HIDWORD(coef[1].start_pass);
    v9 = 8 * compress_data_low;
    v25 = 8 * compress_data_low;
    while ( start_pass_high >= cinfo->MCUs_per_row )
    {
LABEL_20:
      LODWORD(compress_data_low) = compress_data_low + 1;
      HIDWORD(coef[1].start_pass) = 0;
      v9 += 8i64;
      v24 = compress_data_low;
      start_pass_high = 0;
      v25 = v9;
      if ( (int)compress_data_low >= SHIDWORD(coef[1].compress_data) )
        goto LABEL_21;
    }
    while ( 1 )
    {
      v10 = 0i64;
      v11 = 0;
      if ( cinfo->comps_in_scan > 0 )
      {
        v12 = v26;
        do
        {
          v13 = *(_QWORD *)&v12[(char *)cinfo - v26 + 328];
          v14 = 0;
          a3 = *(unsigned int *)(v13 + 52);
          if ( *(int *)(v13 + 56) > 0 )
          {
            v15 = (unsigned __int64)(start_pass_high * *(_DWORD *)(v13 + 52)) << 7;
            v16 = (_QWORD *)(v9 + *(_QWORD *)v12);
            do
            {
              v17 = 0;
              v18 = v15 + *v16;
              if ( (int)a3 > 0 )
              {
                v19 = &coef[2].start_pass + v10;
                do
                {
                  *v19++ = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))v18;
                  a3 = *(unsigned int *)(v13 + 52);
                  v18 += 128i64;
                  ++v10;
                  ++v17;
                }
                while ( v17 < (int)a3 );
              }
              ++v14;
              ++v16;
            }
            while ( v14 < *(_DWORD *)(v13 + 56) );
            v9 = v25;
          }
          ++v11;
          v12 += 8;
        }
        while ( v11 < cinfo->comps_in_scan );
      }
      if ( !((unsigned __int8 (__fastcall *)(jpeg_compress_struct *, jpeg_c_coef_controller *, __int64, __int64))cinfo->entropy->encode_mcu)(cinfo, &coef[2], a3, v10) )
        break;
      v9 = v25;
      if ( ++start_pass_high >= cinfo->MCUs_per_row )
      {
        LODWORD(compress_data_low) = v24;
        goto LABEL_20;
      }
    }
    LODWORD(coef[1].compress_data) = v24;
    result = 0;
    HIDWORD(coef[1].start_pass) = start_pass_high;
  }
  return result;
}

/*
==============
jinit_c_coef_controller
==============
*/
void jinit_c_coef_controller(jpeg_compress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  jpeg_c_coef_controller *v4; 
  jpeg_c_coef_controller *v5; 
  int v6; 
  int *p_height_in_blocks; 
  jpeg_c_coef_controller *v8; 
  int v9; 
  jpeg_memory_mgr *mem; 
  int v11; 
  unsigned int v12; 
  char *v13; 

  v4 = (jpeg_c_coef_controller *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 192i64);
  cinfo->coef = v4;
  v5 = v4;
  v4->start_pass = start_pass_coef;
  if ( need_full_buffer )
  {
    v6 = 0;
    if ( cinfo->num_components > 0 )
    {
      p_height_in_blocks = (int *)&cinfo->comp_info->height_in_blocks;
      v8 = v4 + 7;
      do
      {
        v9 = *(p_height_in_blocks - 5);
        mem = cinfo->mem;
        v11 = j_jround_up(*p_height_in_blocks, v9);
        v12 = j_jround_up(*(p_height_in_blocks - 1), *(p_height_in_blocks - 6));
        v8->start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))mem->request_virt_barray((jpeg_common_struct *)cinfo, 1i64, 0, v12, v11, v9);
        ++v6;
        v8 = (jpeg_c_coef_controller *)((char *)v8 + 8);
        p_height_in_blocks += 24;
      }
      while ( v6 < cinfo->num_components );
    }
  }
  else
  {
    v13 = (char *)cinfo->mem->alloc_large(cinfo, 1i64, 1280i64);
    v5[2].start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))v13;
    v5[2].compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))(v13 + 128);
    v5[3].start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))(v13 + 256);
    v5[3].compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))(v13 + 384);
    v5[4].start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))(v13 + 512);
    v5[4].compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))(v13 + 640);
    v5[5].start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))(v13 + 768);
    v5[5].compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))(v13 + 896);
    v5[6].start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))(v13 + 1024);
    v5[6].compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))(v13 + 1152);
    v5[7].start_pass = NULL;
  }
}

/*
==============
start_pass_coef
==============
*/
void start_pass_coef(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode)
{
  jpeg_c_coef_controller *coef; 
  jpeg_c_coef_controller *v3; 
  int last_row_height; 
  jpeg_component_info *v5; 
  __int32 v6; 

  coef = cinfo->coef;
  LODWORD(coef[1].start_pass) = 0;
  v3 = cinfo->coef;
  if ( cinfo->comps_in_scan <= 1 )
  {
    v5 = cinfo->cur_comp_info[0];
    if ( LODWORD(v3[1].start_pass) >= cinfo->total_iMCU_rows - 1 )
      last_row_height = v5->last_row_height;
    else
      last_row_height = v5->v_samp_factor;
  }
  else
  {
    last_row_height = 1;
  }
  HIDWORD(v3[1].compress_data) = last_row_height;
  *(void (__fastcall **)(jpeg_compress_struct *, J_BUF_MODE))((char *)&v3[1].start_pass + 4) = NULL;
  if ( pass_mode )
  {
    v6 = pass_mode - 2;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( !coef[7].start_pass )
        {
          cinfo->err->msg_code = 4;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        coef->compress_data = compress_first_pass;
      }
      else
      {
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
    }
    else
    {
      if ( !coef[7].start_pass )
      {
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      coef->compress_data = (unsigned __int8 (__fastcall *)(jpeg_compress_struct *, unsigned __int8 ***))compress_output;
    }
  }
  else
  {
    if ( coef[7].start_pass )
    {
      cinfo->err->msg_code = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    coef->compress_data = compress_data;
  }
}

