/*
==============
jinit_c_prep_controller
==============
*/
void jinit_c_prep_controller(jpeg_compress_struct *cinfo, unsigned __int8 need_full_buffer)
{
  jpeg_c_prep_controller *v3; 
  __int64 max_v_samp_factor; 
  jpeg_c_prep_controller *prep; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  int *p_h_samp_factor; 
  jpeg_c_prep_controller *v11; 
  void *v12; 
  unsigned __int8 **v13; 
  char *v14; 
  __int64 v15; 
  char *v16; 
  _QWORD *v17; 
  int v18; 
  int *v19; 
  jpeg_c_prep_controller *v20; 
  __int64 Size; 
  unsigned int v22; 
  __int64 v23; 

  if ( need_full_buffer )
  {
    cinfo->err->msg_code = 4;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v3 = (jpeg_c_prep_controller *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 112i64);
  cinfo->prep = v3;
  v3->start_pass = start_pass_prep;
  if ( cinfo->downsample->need_context_rows )
  {
    v3->pre_process_data = pre_process_context;
    max_v_samp_factor = cinfo->max_v_samp_factor;
    prep = cinfo->prep;
    v6 = 0;
    v7 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 40i64 * (int)max_v_samp_factor * cinfo->num_components);
    v8 = max_v_samp_factor;
    if ( cinfo->num_components > 0 )
    {
      v9 = 3 * max_v_samp_factor;
      p_h_samp_factor = &cinfo->comp_info->h_samp_factor;
      Size = 24i64 * (_DWORD)max_v_samp_factor;
      v23 = 40i64 * (_DWORD)max_v_samp_factor;
      v11 = prep + 1;
      v22 = 3 * max_v_samp_factor;
      do
      {
        v12 = (void *)(v7 + 8 * v8);
        v13 = cinfo->mem->alloc_sarray(cinfo, 1i64, (unsigned int)(8 * cinfo->max_h_samp_factor * p_h_samp_factor[5] / *p_h_samp_factor), v9);
        memcpy_0(v12, v13, Size);
        if ( v8 > 0 )
        {
          v14 = (char *)v13 - v7 + -16 * v8;
          v15 = v8;
          v16 = (char *)v13 - v7 + -32 * v8;
          v17 = (_QWORD *)(32 * v8 + v7);
          do
          {
            v17[-4 * v8] = *(_QWORD *)((char *)v17 + (_QWORD)v14);
            *v17 = *(_QWORD *)((char *)v17 + (_QWORD)v16);
            ++v17;
            --v15;
          }
          while ( v15 );
        }
        v7 += v23;
        ++v6;
        v9 = v22;
        p_h_samp_factor += 24;
        v11->start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))v12;
        v11 = (jpeg_c_prep_controller *)((char *)v11 + 8);
      }
      while ( v6 < cinfo->num_components );
    }
  }
  else
  {
    v18 = 0;
    v3->pre_process_data = pre_process_data;
    if ( cinfo->num_components > 0 )
    {
      v19 = &cinfo->comp_info->h_samp_factor;
      v20 = v3 + 1;
      do
      {
        v20->start_pass = (void (__fastcall *)(jpeg_compress_struct *, J_BUF_MODE))cinfo->mem->alloc_sarray(cinfo, 1i64, (unsigned int)(8 * cinfo->max_h_samp_factor * v19[5] / *v19), (unsigned int)cinfo->max_v_samp_factor);
        ++v18;
        v20 = (jpeg_c_prep_controller *)((char *)v20 + 8);
        v19 += 24;
      }
      while ( v18 < cinfo->num_components );
    }
  }
}

/*
==============
pre_process_context
==============
*/
void pre_process_context(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned int *in_row_ctr, unsigned int in_rows_avail, unsigned __int8 ***output_buf, unsigned int *out_row_group_ctr, unsigned int out_row_groups_avail)
{
  jpeg_c_prep_controller *prep; 
  unsigned int *v9; 
  unsigned int *v10; 
  unsigned __int8 **v11; 
  int *v12; 
  int *v13; 
  __int64 v14; 
  int *v15; 
  unsigned __int8 ***v16; 
  int v17; 
  int v18; 
  int max_v_samp_factor; 
  int v20; 
  int v21; 
  int start_pass_high; 
  int pre_process_data_high; 
  int *v24; 
  int v25; 
  int v26; 
  unsigned __int8 ***v27; 
  int v28; 
  unsigned int num_cols; 
  unsigned __int8 **v30; 
  int v31; 
  int *v32; 
  int *v33; 
  jpeg_c_prep_controller *v34; 
  int *v35; 
  int *v36; 
  int v37; 
  unsigned int v40; 

  v40 = in_rows_avail;
  prep = cinfo->prep;
  v9 = in_row_ctr;
  v10 = out_row_group_ctr;
  v11 = input_buf;
  v34 = prep;
  v37 = 3 * cinfo->max_v_samp_factor;
  if ( *out_row_group_ctr < out_row_groups_avail )
  {
    v12 = (int *)&prep[6].start_pass + 1;
    v13 = (int *)&prep[6].pre_process_data + 1;
    v32 = (int *)&prep[6].pre_process_data + 1;
    do
    {
      v14 = *v9;
      v15 = v12;
      v36 = v13;
      v35 = v12;
      v33 = v12;
      if ( (unsigned int)v14 >= in_rows_avail )
      {
        if ( LODWORD(prep[6].start_pass) )
          return;
        start_pass_high = *v12;
        pre_process_data_high = *v13;
        if ( *v12 < *v13 )
        {
          v26 = 0;
          if ( cinfo->num_components > 0 )
          {
            v27 = (unsigned __int8 ***)&prep[1];
            do
            {
              pre_process_data_high = *v13;
              v28 = *v12;
              num_cols = cinfo->image_width;
              v30 = *v27;
              if ( *v12 >= pre_process_data_high )
              {
                prep = v34;
              }
              else
              {
                v31 = v28 - 1;
                do
                  j_jcopy_sample_rows(v30, v31, v30, v28++, 1, num_cols);
                while ( v28 < pre_process_data_high );
                prep = v34;
                v12 = v33;
                pre_process_data_high = HIDWORD(v34[6].pre_process_data);
              }
              v13 = v32;
              ++v26;
              ++v27;
            }
            while ( v26 < cinfo->num_components );
            v15 = v35;
            v10 = out_row_group_ctr;
            v9 = in_row_ctr;
          }
          *v12 = pre_process_data_high;
LABEL_17:
          cinfo->downsample->downsample(cinfo, (unsigned __int8 ***)&prep[1], (unsigned int)prep[6].pre_process_data, output_buf, *v10);
          ++*v10;
          LODWORD(prep[6].pre_process_data) += cinfo->max_v_samp_factor;
          v24 = v15;
          v13 = v36;
          v33 = v15;
          v32 = v36;
          if ( SLODWORD(prep[6].pre_process_data) >= v37 )
          {
            v13 = (int *)&prep[6].pre_process_data + 1;
            LODWORD(prep[6].pre_process_data) = 0;
            v24 = (int *)&prep[6].start_pass + 1;
            v32 = (int *)&prep[6].pre_process_data + 1;
            v33 = (int *)&prep[6].start_pass + 1;
          }
          v25 = *v15;
          if ( *v15 >= v37 )
          {
            *v15 = 0;
            v25 = 0;
            v32 = v13;
            v33 = v24;
          }
          *v36 = cinfo->max_v_samp_factor + v25;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = (unsigned __int8 ***)&prep[1];
        v17 = in_rows_avail - v14;
        if ( HIDWORD(prep[6].pre_process_data) - HIDWORD(prep[6].start_pass) < in_rows_avail - (unsigned int)v14 )
          v17 = HIDWORD(prep[6].pre_process_data) - HIDWORD(prep[6].start_pass);
        ((void (__fastcall *)(jpeg_compress_struct *, unsigned __int8 **, jpeg_c_prep_controller *))cinfo->cconvert->color_convert)(cinfo, &v11[v14], &prep[1]);
        if ( LODWORD(prep[6].start_pass) == cinfo->image_height )
        {
          v18 = 0;
          if ( cinfo->num_components > 0 )
          {
            max_v_samp_factor = cinfo->max_v_samp_factor;
            do
            {
              v20 = 1;
              if ( max_v_samp_factor >= 1 )
              {
                v21 = -1;
                do
                {
                  j_jcopy_sample_rows(*v16, 0, *v16, v21, 1, cinfo->image_width);
                  max_v_samp_factor = cinfo->max_v_samp_factor;
                  ++v20;
                  --v21;
                }
                while ( v20 <= max_v_samp_factor );
              }
              ++v18;
              ++v16;
            }
            while ( v18 < cinfo->num_components );
            v13 = v32;
          }
          v10 = out_row_group_ctr;
        }
        *v9 += v17;
        HIDWORD(prep[6].start_pass) += v17;
        LODWORD(prep[6].start_pass) -= v17;
        start_pass_high = HIDWORD(prep[6].start_pass);
        pre_process_data_high = HIDWORD(prep[6].pre_process_data);
        v15 = v35;
      }
      v32 = v13;
      if ( start_pass_high == pre_process_data_high )
        goto LABEL_17;
LABEL_22:
      v12 = v33;
      in_rows_avail = v40;
      v11 = input_buf;
    }
    while ( *v10 < out_row_groups_avail );
  }
}

/*
==============
pre_process_data
==============
*/
void pre_process_data(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned int *in_row_ctr, unsigned int in_rows_avail, unsigned __int8 ***output_buf, unsigned int *out_row_group_ctr, unsigned int out_row_groups_avail)
{
  jpeg_c_prep_controller *prep; 
  unsigned int v9; 
  unsigned int *v10; 
  int v11; 
  unsigned int *v12; 
  unsigned int v13; 
  unsigned __int8 ***v14; 
  int v15; 
  int v16; 
  bool v17; 
  int v18; 
  int max_v_samp_factor; 
  int v20; 
  unsigned __int8 ***v21; 
  int start_pass_high; 
  unsigned int num_cols; 
  unsigned __int8 **v24; 
  int v25; 
  unsigned __int8 ***v26; 
  unsigned int *p_width_in_blocks; 
  int v28; 
  int v29; 
  unsigned __int8 **v30; 
  int v31; 
  unsigned int v32; 
  int v33; 
  jpeg_c_prep_controller *v34; 
  unsigned __int8 **v35; 
  unsigned int v37; 

  v37 = in_rows_avail;
  v35 = input_buf;
  prep = cinfo->prep;
  v9 = *in_row_ctr;
  v10 = in_row_ctr;
  v34 = prep;
  if ( *in_row_ctr < in_rows_avail )
  {
    v11 = 0;
    v12 = out_row_group_ctr;
    v13 = out_row_groups_avail;
    while ( *v12 < v13 )
    {
      v14 = (unsigned __int8 ***)&prep[1];
      v15 = in_rows_avail - v9;
      if ( cinfo->max_v_samp_factor - HIDWORD(prep[6].start_pass) < in_rows_avail - v9 )
        v15 = cinfo->max_v_samp_factor - HIDWORD(prep[6].start_pass);
      ((void (__fastcall *)(jpeg_compress_struct *, unsigned __int8 **, jpeg_c_prep_controller *))cinfo->cconvert->color_convert)(cinfo, &input_buf[v9], &prep[1]);
      *v10 += v15;
      v16 = v15 + HIDWORD(prep[6].start_pass);
      v17 = LODWORD(prep[6].start_pass) == v15;
      LODWORD(prep[6].start_pass) -= v15;
      v18 = v16;
      HIDWORD(prep[6].start_pass) = v16;
      if ( v17 )
      {
        max_v_samp_factor = cinfo->max_v_samp_factor;
        if ( v16 < max_v_samp_factor )
        {
          v20 = 0;
          v18 = cinfo->max_v_samp_factor;
          if ( cinfo->num_components > 0 )
          {
            v21 = (unsigned __int8 ***)&prep[1];
            do
            {
              start_pass_high = HIDWORD(prep[6].start_pass);
              v18 = max_v_samp_factor;
              num_cols = cinfo->image_width;
              v24 = *v21;
              if ( start_pass_high < max_v_samp_factor )
              {
                v25 = start_pass_high - 1;
                do
                  j_jcopy_sample_rows(v24, v25, v24, start_pass_high++, 1, num_cols);
                while ( start_pass_high < max_v_samp_factor );
                max_v_samp_factor = cinfo->max_v_samp_factor;
                v18 = max_v_samp_factor;
                prep = v34;
              }
              ++v20;
              ++v21;
            }
            while ( v20 < cinfo->num_components );
            v12 = out_row_group_ctr;
            v14 = (unsigned __int8 ***)&prep[1];
            v11 = 0;
          }
          v10 = in_row_ctr;
          HIDWORD(prep[6].start_pass) = v18;
        }
      }
      v26 = output_buf;
      if ( v18 == cinfo->max_v_samp_factor )
      {
        cinfo->downsample->downsample(cinfo, v14, 0, output_buf, *v12);
        HIDWORD(prep[6].start_pass) = 0;
        ++*v12;
      }
      v13 = out_row_groups_avail;
      if ( !LODWORD(prep[6].start_pass) && *v12 < out_row_groups_avail )
      {
        if ( cinfo->num_components > 0 )
        {
          p_width_in_blocks = &cinfo->comp_info->width_in_blocks;
          do
          {
            v28 = *(p_width_in_blocks - 4);
            v29 = *v12 * v28;
            v30 = *v26;
            v31 = v13 * v28;
            v32 = 8 * *p_width_in_blocks;
            if ( v29 < v31 )
            {
              v33 = v29 - 1;
              do
                j_jcopy_sample_rows(v30, v33, v30, v29++, 1, v32);
              while ( v29 < v31 );
              v12 = out_row_group_ctr;
              v13 = out_row_groups_avail;
            }
            ++v11;
            v26 = output_buf + 1;
            p_width_in_blocks += 24;
            ++output_buf;
          }
          while ( v11 < cinfo->num_components );
        }
        *v12 = v13;
        return;
      }
      v9 = *v10;
      in_rows_avail = v37;
      if ( *v10 >= v37 )
        return;
      input_buf = v35;
    }
  }
}

/*
==============
start_pass_prep
==============
*/
void start_pass_prep(jpeg_compress_struct *cinfo, J_BUF_MODE pass_mode)
{
  jpeg_c_prep_controller *prep; 

  prep = cinfo->prep;
  if ( pass_mode )
  {
    cinfo->err->msg_code = 4;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  LODWORD(prep[6].start_pass) = cinfo->image_height;
  *(void (__fastcall **)(jpeg_compress_struct *, J_BUF_MODE))((char *)&prep[6].start_pass + 4) = NULL;
  HIDWORD(prep[6].pre_process_data) = 2 * cinfo->max_v_samp_factor;
}

