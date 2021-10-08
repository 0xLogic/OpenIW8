/*
==============
process_data_simple_main
==============
*/
void process_data_simple_main(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned int *in_row_ctr, unsigned int in_rows_avail)
{
  jpeg_c_main_controller *main; 
  unsigned int start_pass_high; 
  _DWORD *v10; 
  bool v11; 
  unsigned __int8 v12; 
  char process_data; 
  unsigned int start_pass; 

  main = cinfo->main;
  if ( LODWORD(main[1].start_pass) < cinfo->total_iMCU_rows )
  {
    start_pass_high = HIDWORD(main[1].start_pass);
    v10 = (_DWORD *)&main[1].start_pass + 1;
    do
    {
      v11 = start_pass_high == 8;
      if ( start_pass_high < 8 )
      {
        cinfo->prep->pre_process_data(cinfo, input_buf, in_row_ctr, in_rows_avail, (unsigned __int8 ***)&main[2], (unsigned int *)((char *)&main[1].start_pass + 4), 8u);
        v11 = *v10 == 8;
      }
      if ( !v11 )
        break;
      v12 = cinfo->coef->compress_data(cinfo, (unsigned __int8 ***)&main[2]);
      process_data = (char)main[1].process_data;
      if ( !v12 )
      {
        if ( !process_data )
        {
          --*in_row_ctr;
          LOBYTE(main[1].process_data) = 1;
        }
        return;
      }
      if ( process_data )
      {
        ++*in_row_ctr;
        LOBYTE(main[1].process_data) = 0;
      }
      ++LODWORD(main[1].start_pass);
      start_pass_high = 0;
      start_pass = (unsigned int)main[1].start_pass;
      *v10 = 0;
    }
    while ( start_pass < cinfo->total_iMCU_rows );
  }
}

/*
==============
start_pass_main
==============
*/
void start_pass_main(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode)
{
  jpeg_c_main_controller *main; 

  if ( !cinfo->raw_data_in )
  {
    main = cinfo->main;
    main[1].start_pass = NULL;
    LOBYTE(main[1].process_data) = 0;
    HIDWORD(main[1].process_data) = pass_mode;
    if ( pass_mode )
    {
      cinfo->err->msg_code = 4;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    else
    {
      main->process_data = process_data_simple_main;
    }
  }
}

/*
==============
jinit_d_main_controller
==============
*/
void jinit_d_main_controller(jpeg_decompress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  jpeg_d_main_controller *v4; 
  jpeg_d_main_controller *v5; 
  int v6; 
  int min_DCT_scaled_size; 
  jpeg_d_main_controller *main; 
  __int64 v9; 
  int num_components; 
  __int64 v11; 
  int v12; 
  int *p_v_samp_factor; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  int *v18; 
  jpeg_d_main_controller *v19; 
  jpeg_d_main_controller *v20; 

  v4 = (jpeg_d_main_controller *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 136i64);
  cinfo->main = v4;
  v5 = v4;
  v20 = v4;
  v4->start_pass = start_pass_main_0;
  if ( need_full_buffer )
  {
    cinfo->err->msg_code = 4;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v6 = 0;
  min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
  if ( cinfo->upsample->need_context_rows )
  {
    if ( min_DCT_scaled_size < 2 )
    {
      cinfo->err->msg_code = 47;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
    }
    main = cinfo->main;
    v9 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 16i64 * cinfo->num_components);
    main[6].process_data = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 **, unsigned int *, unsigned int))v9;
    main[7].start_pass = (void (__fastcall *)(jpeg_decompress_struct *, J_BUF_MODE))(v9 + 8i64 * cinfo->num_components);
    num_components = cinfo->num_components;
    if ( num_components > 0 )
    {
      v11 = 0i64;
      v12 = 0;
      p_v_samp_factor = &cinfo->comp_info->v_samp_factor;
      v14 = min_DCT_scaled_size + 4;
      do
      {
        v15 = *p_v_samp_factor * p_v_samp_factor[6] / cinfo->min_DCT_scaled_size;
        v16 = v15 * v14;
        ++v12;
        v11 += 8i64;
        p_v_samp_factor += 24;
        v17 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 16i64 * v15 * v14) + 8i64 * v15;
        *(_QWORD *)((char *)main[6].process_data + v11 - 8) = v17;
        *(_QWORD *)((char *)main[7].start_pass + v11 - 8) = v17 + 8i64 * v16;
        num_components = cinfo->num_components;
      }
      while ( v12 < num_components );
      v5 = v20;
      v6 = 0;
    }
    min_DCT_scaled_size = cinfo->min_DCT_scaled_size + 2;
  }
  else
  {
    num_components = cinfo->num_components;
  }
  if ( num_components > 0 )
  {
    v18 = &cinfo->comp_info->v_samp_factor;
    v19 = v5 + 1;
    do
    {
      v19->start_pass = (void (__fastcall *)(jpeg_decompress_struct *, J_BUF_MODE))cinfo->mem->alloc_sarray(cinfo, 1i64, (unsigned int)(v18[6] * v18[4]), (unsigned int)(min_DCT_scaled_size * (*v18 * v18[6] / cinfo->min_DCT_scaled_size)));
      ++v6;
      v19 = (jpeg_d_main_controller *)((char *)v19 + 8);
      v18 += 24;
    }
    while ( v6 < cinfo->num_components );
  }
}

/*
==============
process_data_context_main
==============
*/
void process_data_context_main(jpeg_decompress_struct *cinfo, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  jpeg_d_main_controller *main; 
  int process_data_high; 
  int v10; 
  int v11; 
  int v12; 
  jpeg_d_main_controller *v13; 
  __int64 v14; 
  int *p_v_samp_factor; 
  int v16; 
  signed int v17; 
  __int64 v18; 
  _QWORD *v19; 
  _QWORD *v20; 
  _DWORD *v21; 
  jpeg_d_main_controller *v22; 
  int min_DCT_scaled_size; 
  __int64 v24; 
  int *v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  jpeg_d_main_controller *v38; 
  int v39; 

  main = cinfo->main;
  if ( !LOBYTE(main[6].start_pass) )
  {
    if ( !cinfo->coef->decompress_data(cinfo, (unsigned __int8 ***)*((_QWORD *)&main[6].process_data + SLODWORD(main[7].process_data))) )
      return;
    ++HIDWORD(main[8].start_pass);
    LOBYTE(main[6].start_pass) = 1;
  }
  process_data_high = HIDWORD(main[7].process_data);
  v10 = 0;
  if ( !process_data_high )
  {
LABEL_9:
    HIDWORD(main[6].start_pass) = 0;
    LODWORD(main[8].start_pass) = cinfo->min_DCT_scaled_size - 1;
    if ( HIDWORD(main[8].start_pass) == cinfo->total_iMCU_rows )
    {
      v12 = 0;
      v13 = cinfo->main;
      if ( cinfo->num_components > 0 )
      {
        v14 = 0i64;
        p_v_samp_factor = &cinfo->comp_info->v_samp_factor;
        do
        {
          v16 = *p_v_samp_factor * p_v_samp_factor[6] / cinfo->min_DCT_scaled_size;
          v17 = p_v_samp_factor[8] % (unsigned int)(*p_v_samp_factor * p_v_samp_factor[6]);
          if ( !v17 )
            v17 = *p_v_samp_factor * p_v_samp_factor[6];
          if ( !v14 )
            LODWORD(v13[8].start_pass) = (v17 - 1) / v16 + 1;
          v18 = 2 * v16;
          if ( 2 * v16 > 0 )
          {
            v19 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)&v13[6].process_data + SLODWORD(v13[7].process_data)) + 8 * v14) + 8i64 * v17);
            v20 = v19 - 1;
            do
            {
              *v19++ = *v20;
              --v18;
            }
            while ( v18 );
          }
          ++v12;
          ++v14;
          p_v_samp_factor += 24;
        }
        while ( v12 < cinfo->num_components );
      }
    }
    HIDWORD(main[7].process_data) = 1;
    goto LABEL_21;
  }
  v11 = process_data_high - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      return;
    cinfo->post->post_process_data(cinfo, (unsigned __int8 ***)*((_QWORD *)&main[6].process_data + SLODWORD(main[7].process_data)), (unsigned int *)((char *)&main[6].start_pass + 4), (unsigned int)main[8].start_pass, output_buf, out_row_ctr, out_rows_avail);
    if ( HIDWORD(main[6].start_pass) < LODWORD(main[8].start_pass) )
      return;
    HIDWORD(main[7].process_data) = 0;
    if ( *out_row_ctr >= out_rows_avail )
      return;
    goto LABEL_9;
  }
LABEL_21:
  v21 = (_DWORD *)&main[6].start_pass + 1;
  cinfo->post->post_process_data(cinfo, (unsigned __int8 ***)*((_QWORD *)&main[6].process_data + SLODWORD(main[7].process_data)), (unsigned int *)((char *)&main[6].start_pass + 4), (unsigned int)main[8].start_pass, output_buf, out_row_ctr, out_rows_avail);
  if ( HIDWORD(main[6].start_pass) >= LODWORD(main[8].start_pass) )
  {
    if ( HIDWORD(main[8].start_pass) == 1 )
    {
      v22 = cinfo->main;
      min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
      v38 = v22;
      v39 = min_DCT_scaled_size;
      if ( cinfo->num_components > 0 )
      {
        v24 = 0i64;
        v25 = &cinfo->comp_info->v_samp_factor;
        do
        {
          v26 = *(_QWORD *)((char *)v22[6].process_data + v24);
          v27 = *v25 * v25[6] / cinfo->min_DCT_scaled_size;
          v28 = v27;
          v29 = v27;
          v30 = *(_QWORD *)((char *)v22[7].start_pass + v24);
          if ( v27 > 0 )
          {
            v31 = v27 * (min_DCT_scaled_size + 2);
            v32 = v30 - 8i64 * v27;
            v33 = -v27;
            do
            {
              v34 = v31 + v33;
              v32 += 8i64;
              *(_QWORD *)(v26 - v30 + v32 - 8) = *(_QWORD *)(v26 + 8 * v34);
              *(_QWORD *)(v32 - 8) = *(_QWORD *)(v30 + 8 * v34);
              v35 = v31++;
              v36 = 8 * v35;
              *(_QWORD *)(v36 + v26) = *(_QWORD *)(v26 + 8 * v28 - v30 + v32 - 8);
              *(_QWORD *)(v36 + v30) = *(_QWORD *)(v32 + 8 * v28 - 8);
              --v29;
            }
            while ( v29 );
            v22 = v38;
            min_DCT_scaled_size = v39;
          }
          ++v10;
          v24 += 8i64;
          v25 += 24;
        }
        while ( v10 < cinfo->num_components );
        v21 = (_DWORD *)&main[6].start_pass + 1;
      }
    }
    LODWORD(main[7].process_data) ^= 1u;
    LOBYTE(main[6].start_pass) = 0;
    *v21 = cinfo->min_DCT_scaled_size + 1;
    v37 = cinfo->min_DCT_scaled_size + 2;
    HIDWORD(main[7].process_data) = 2;
    LODWORD(main[8].start_pass) = v37;
  }
}

/*
==============
process_data_crank_post
==============
*/
void process_data_crank_post(jpeg_decompress_struct *cinfo, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  cinfo->post->post_process_data(cinfo, NULL, NULL, 0, output_buf, out_row_ctr, out_rows_avail);
}

