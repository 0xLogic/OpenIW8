/*
==============
fullsize_upsample
==============
*/
void fullsize_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  *output_data_ptr = input_data;
}

/*
==============
h2v1_fancy_upsample
==============
*/
void h2v1_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  unsigned __int8 **v4; 
  int v5; 
  char *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  int v11; 
  unsigned __int8 *v12; 
  _BYTE *v13; 
  unsigned int v14; 
  int v15; 
  unsigned __int8 *v16; 
  int v17; 

  v4 = *output_data_ptr;
  v5 = 0;
  if ( cinfo->max_v_samp_factor > 0 )
  {
    v8 = (char *)((char *)input_data - (char *)v4);
    do
    {
      v9 = *(unsigned __int8 **)((char *)v4 + (_QWORD)v8);
      v10 = *v4;
      v11 = *v9;
      v12 = v9 + 1;
      *v10 = v11;
      v10[1] = (3 * v11 + (unsigned int)*v12 + 2) >> 2;
      v13 = v10 + 2;
      v14 = compptr->downsampled_width - 2;
      if ( compptr->downsampled_width != 2 )
      {
        do
        {
          v15 = *v12;
          v16 = v12++;
          *v13 = ((unsigned int)*(v16 - 1) + 3 * v15 + 1) >> 2;
          v13[1] = ((unsigned int)*v12 + 3 * v15 + 2) >> 2;
          v13 += 2;
          --v14;
        }
        while ( v14 );
      }
      v17 = *v12;
      ++v5;
      ++v4;
      *v13 = (3 * v17 + (unsigned int)*(v12 - 1) + 1) >> 2;
      v13[1] = v17;
    }
    while ( v5 < cinfo->max_v_samp_factor );
  }
}

/*
==============
h2v1_upsample
==============
*/
void h2v1_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  unsigned __int8 **v4; 
  int v5; 
  char *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 v11; 

  v4 = *output_data_ptr;
  v5 = 0;
  if ( cinfo->max_v_samp_factor > 0 )
  {
    v7 = (char *)((char *)input_data - (char *)v4);
    do
    {
      v8 = *v4;
      v9 = *(unsigned __int8 **)((char *)v4 + (_QWORD)v7);
      v10 = &(*v4)[cinfo->output_width];
      if ( *v4 < v10 )
      {
        do
        {
          v11 = *v9++;
          *v8 = v11;
          v8[1] = v11;
          v8 += 2;
        }
        while ( v8 < v10 );
      }
      ++v5;
      ++v4;
    }
    while ( v5 < cinfo->max_v_samp_factor );
  }
}

/*
==============
h2v2_fancy_upsample
==============
*/
void h2v2_fancy_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  unsigned __int8 **v4; 
  int v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  int v13; 
  int v14; 
  unsigned __int8 *v15; 
  int v16; 
  unsigned __int8 *v17; 
  int v18; 
  _BYTE *v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  unsigned __int8 **v26; 

  v4 = *output_data_ptr;
  v5 = 0;
  v26 = *output_data_ptr;
  if ( cinfo->max_v_samp_factor > 0 )
  {
    v7 = 0i64;
    v8 = 0i64;
    do
    {
      v9 = 0;
      do
      {
        v10 = input_data[v8];
        if ( v9 )
          v11 = input_data[v8 + 1];
        else
          v11 = input_data[v8 - 1];
        ++v5;
        v12 = v4[v7++];
        v13 = *v11 + 3 * *v10;
        v14 = v10[1];
        v15 = v10 + 2;
        v16 = v11[1] + 3 * v14;
        v17 = v11 + 2;
        v18 = v16;
        *v12 = (unsigned int)(4 * v13 + 8) >> 4;
        v12[1] = (unsigned int)(v13 + v16 + 2 * v13 + 7) >> 4;
        v19 = v12 + 2;
        v20 = compptr->downsampled_width - 2;
        if ( compptr->downsampled_width != 2 )
        {
          do
          {
            v21 = *v15;
            v22 = 3 * v18;
            ++v17;
            ++v15;
            v16 = *(v17 - 1) + 3 * v21;
            v23 = (unsigned int)(3 * v18 + v13 + 8) >> 4;
            v13 = v18;
            *v19 = v23;
            v18 = v16;
            v19[1] = (unsigned int)(v22 + v16 + 7) >> 4;
            v19 += 2;
            --v20;
          }
          while ( v20 );
        }
        ++v9;
        *v19 = (unsigned int)(v16 + v13 + 2 * v16 + 8) >> 4;
        v19[1] = (unsigned int)(4 * v16 + 7) >> 4;
        v4 = v26;
      }
      while ( v9 < 2 );
      ++v8;
    }
    while ( v5 < cinfo->max_v_samp_factor );
  }
}

/*
==============
h2v2_upsample
==============
*/
void h2v2_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  unsigned __int8 **v4; 
  int v5; 
  unsigned __int8 **v8; 
  unsigned __int8 *v9; 
  __int64 num_cols; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 

  v4 = *output_data_ptr;
  v5 = 0;
  if ( cinfo->max_v_samp_factor > 0 )
  {
    v8 = *output_data_ptr;
    do
    {
      v9 = *v8;
      num_cols = cinfo->output_width;
      v11 = *input_data;
      v12 = &(*v8)[num_cols];
      if ( *v8 < v12 )
      {
        do
        {
          v13 = *v11++;
          *v9 = v13;
          v9[1] = v13;
          v9 += 2;
        }
        while ( v9 < v12 );
        LODWORD(num_cols) = cinfo->output_width;
      }
      j_jcopy_sample_rows(v4, v5, v4, v5 + 1, 1, num_cols);
      ++input_data;
      v5 += 2;
      v8 += 2;
    }
    while ( v5 < cinfo->max_v_samp_factor );
  }
}

/*
==============
int_upsample
==============
*/
void int_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  jpeg_upsampler *upsample; 
  int v5; 
  __int64 component_index; 
  unsigned __int8 **v9; 
  unsigned __int8 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int8 **v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  char *v16; 
  unsigned __int8 *v17; 
  char v18; 

  upsample = cinfo->upsample;
  v5 = 0;
  component_index = compptr->component_index;
  v9 = *output_data_ptr;
  v10 = *(&upsample[9].need_context_rows + component_index);
  v11 = *((unsigned __int8 *)&upsample[10].start_pass + component_index + 2);
  if ( cinfo->max_v_samp_factor > 0 )
  {
    v12 = *((unsigned __int8 *)&upsample[10].start_pass + component_index + 2);
    v13 = *output_data_ptr;
    v14 = 8 * v12;
    do
    {
      v15 = *v13;
      v16 = (char *)*input_data;
      v17 = &(*v13)[cinfo->output_width];
      if ( *v13 < v17 )
      {
        do
        {
          v18 = *v16++;
          if ( v10 )
          {
            memset(v15, v18, v10);
            v15 += v10;
          }
        }
        while ( v15 < v17 );
        v14 = 8 * v12;
      }
      if ( v12 > 1 )
      {
        j_jcopy_sample_rows(v9, v5, v9, v5 + 1, v11 - 1, cinfo->output_width);
        v12 = v11;
      }
      ++input_data;
      v5 += v11;
      v13 = (unsigned __int8 **)((char *)v13 + v14);
    }
    while ( v5 < cinfo->max_v_samp_factor );
  }
}

/*
==============
jinit_upsampler
==============
*/
void jinit_upsampler(jpeg_decompress_struct *cinfo)
{
  jpeg_upsampler *v2; 
  bool v3; 
  int v4; 
  int *v5; 
  _QWORD *p_upsample; 
  __int64 v7; 
  int *p_h_samp_factor; 
  int min_DCT_scaled_size; 
  int v10; 
  int v11; 
  int max_h_samp_factor; 
  __int64 max_v_samp_factor; 
  int v14; 
  void (__fastcall *v15)(jpeg_decompress_struct *, jpeg_component_info *, unsigned __int8 **, unsigned __int8 ***); 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  jpeg_memory_mgr *mem; 
  unsigned int v20; 
  __int64 v21; 
  jpeg_upsampler *v22; 

  v2 = (jpeg_upsampler *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
  cinfo->upsample = v2;
  v2->start_pass = start_pass_upsample;
  v2->upsample = sep_upsample;
  v2->need_context_rows = 0;
  if ( cinfo->CCIR601_sampling )
  {
    cinfo->err->msg_code = 25;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v3 = cinfo->do_fancy_upsampling && cinfo->min_DCT_scaled_size > 1;
  v4 = 0;
  if ( cinfo->num_components > 0 )
  {
    v5 = (int *)&v2[8];
    p_upsample = &v2[4].upsample;
    v7 = 0i64;
    v22 = v2 + 8;
    p_h_samp_factor = &cinfo->comp_info->h_samp_factor;
    do
    {
      min_DCT_scaled_size = cinfo->min_DCT_scaled_size;
      v10 = *p_h_samp_factor * p_h_samp_factor[7] / min_DCT_scaled_size;
      v11 = p_h_samp_factor[7] * p_h_samp_factor[1] / min_DCT_scaled_size;
      max_h_samp_factor = cinfo->max_h_samp_factor;
      max_v_samp_factor = (unsigned int)cinfo->max_v_samp_factor;
      v14 = v11;
      *v5 = v11;
      if ( *((_BYTE *)p_h_samp_factor + 40) )
      {
        if ( v10 != max_h_samp_factor || v11 != (_DWORD)max_v_samp_factor )
        {
          if ( 2 * v10 != max_h_samp_factor )
            goto LABEL_25;
          if ( v11 == (_DWORD)max_v_samp_factor )
          {
            if ( !v3 || (v15 = h2v1_fancy_upsample, (unsigned int)p_h_samp_factor[8] <= 2) )
              v15 = h2v1_upsample;
            *p_upsample = v15;
            goto LABEL_29;
          }
          if ( 2 * v11 == (_DWORD)max_v_samp_factor )
          {
            if ( v3 && (unsigned int)p_h_samp_factor[8] > 2 )
            {
              *p_upsample = h2v2_fancy_upsample;
              v2->need_context_rows = 1;
            }
            else
            {
              *p_upsample = h2v2_upsample;
            }
          }
          else
          {
LABEL_25:
            v16 = max_h_samp_factor;
            v18 = (unsigned int)(max_h_samp_factor >> 31);
            v17 = __SPAIR64__(v18, v16) / v10;
            LODWORD(v18) = __SPAIR64__(v18, v16) % v10;
            if ( (_DWORD)v18 || (v18 = (unsigned int)((int)max_v_samp_factor >> 31), (LODWORD(v18) = (int)max_v_samp_factor % v14) != 0) )
            {
              cinfo->err->msg_code = 38;
              ((void (__fastcall *)(jpeg_decompress_struct *, __int64, __int64, _QWORD))cinfo->err->error_exit)(cinfo, v18, max_v_samp_factor, v17);
            }
            else
            {
              *p_upsample = int_upsample;
              *(&v2[9].need_context_rows + v7) = v17;
              *((_BYTE *)&v2[10].start_pass + v7 + 2) = (int)max_v_samp_factor / v14;
            }
          }
LABEL_29:
          mem = cinfo->mem;
          v20 = j_jround_up(cinfo->output_width, cinfo->max_h_samp_factor);
          v21 = (__int64)mem->alloc_sarray((jpeg_common_struct *)cinfo, 1i64, v20, cinfo->max_v_samp_factor);
          v5 = (int *)v22;
          *(p_upsample - 10) = v21;
          goto LABEL_30;
        }
        *p_upsample = fullsize_upsample;
      }
      else
      {
        *p_upsample = noop_upsample;
      }
LABEL_30:
      ++v5;
      ++v4;
      ++v7;
      v22 = (jpeg_upsampler *)v5;
      ++p_upsample;
      p_h_samp_factor += 24;
    }
    while ( v4 < cinfo->num_components );
  }
}

/*
==============
noop_upsample
==============
*/
void noop_upsample(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 ***output_data_ptr)
{
  *output_data_ptr = NULL;
}

/*
==============
sep_upsample
==============
*/
void sep_upsample(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, unsigned int in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  unsigned __int8 ***v8; 
  jpeg_upsampler *upsample; 
  int v11; 
  int v12; 
  jpeg_component_info *comp_info; 
  signed __int64 v14; 
  jpeg_upsampler *v15; 
  unsigned int v16; 
  __int64 v17; 
  int v18; 

  v8 = input_buf;
  upsample = cinfo->upsample;
  v11 = *(_DWORD *)&upsample[7].need_context_rows;
  if ( v11 >= cinfo->max_v_samp_factor )
  {
    v11 = 0;
    v12 = 0;
    comp_info = cinfo->comp_info;
    if ( cinfo->num_components > 0 )
    {
      v14 = (char *)upsample - (char *)input_buf;
      v15 = upsample + 8;
      do
      {
        (*(void (__fastcall **)(jpeg_decompress_struct *, jpeg_component_info *, unsigned __int8 **, __int64))((char *)v8 + v14 + 104))(cinfo, comp_info, &(*v8)[LODWORD(v15->start_pass) * *in_row_group_ctr], (__int64)&upsample[1] + 8 * v12++);
        v15 = (jpeg_upsampler *)((char *)v15 + 4);
        ++comp_info;
        ++v8;
      }
      while ( v12 < cinfo->num_components );
      v11 = 0;
    }
    *(_DWORD *)&upsample[7].need_context_rows = 0;
  }
  v16 = *((_DWORD *)&upsample[7].need_context_rows + 1);
  if ( cinfo->max_v_samp_factor - v11 <= v16 )
    v16 = cinfo->max_v_samp_factor - v11;
  v17 = *out_row_ctr;
  v18 = out_rows_avail - v17;
  if ( v16 <= out_rows_avail - (unsigned int)v17 )
    v18 = v16;
  cinfo->cconvert->color_convert(cinfo, (unsigned __int8 ***)&upsample[1], v11, &output_buf[v17], v18);
  *out_row_ctr += v18;
  *(_DWORD *)&upsample[7].need_context_rows += v18;
  *((_DWORD *)&upsample[7].need_context_rows + 1) -= v18;
  if ( *(_DWORD *)&upsample[7].need_context_rows >= cinfo->max_v_samp_factor )
    ++*in_row_group_ctr;
}

/*
==============
start_pass_upsample
==============
*/
void start_pass_upsample(jpeg_decompress_struct *cinfo)
{
  jpeg_upsampler *upsample; 

  upsample = cinfo->upsample;
  *(_DWORD *)&upsample[7].need_context_rows = cinfo->max_v_samp_factor;
  *((_DWORD *)&upsample[7].need_context_rows + 1) = cinfo->output_height;
}

