/*
==============
h2v1_merged_upsample
==============
*/
void h2v1_merged_upsample(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int in_row_group_ctr, unsigned __int8 **output_buf)
{
  jpeg_upsampler *upsample; 
  unsigned __int8 *sample_range_limit; 
  unsigned __int8 *v6; 
  void (__fastcall *start_pass)(jpeg_decompress_struct *); 
  void (__fastcall *v8)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int); 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned int output_width; 
  unsigned int v15; 
  void (__fastcall *v16)(jpeg_decompress_struct *); 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  void (__fastcall *v30)(jpeg_decompress_struct *); 
  void (__fastcall *v31)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int); 

  upsample = cinfo->upsample;
  sample_range_limit = cinfo->sample_range_limit;
  v6 = *output_buf;
  start_pass = upsample[2].start_pass;
  v8 = upsample[1].upsample;
  v9 = *(_QWORD *)&upsample[1].need_context_rows;
  v31 = upsample[2].upsample;
  v30 = start_pass;
  v10 = in_row_group_ctr;
  v11 = (*input_buf)[v10];
  v12 = input_buf[1][v10];
  v13 = input_buf[2][v10];
  output_width = cinfo->output_width;
  v15 = output_width >> 1;
  if ( output_width >> 1 )
  {
    v16 = start_pass;
    do
    {
      v17 = *v12++;
      v18 = *v13++;
      v19 = *(_DWORD *)(v9 + 4 * v17);
      v20 = *((_DWORD *)v8 + v18);
      v21 = *v11;
      v22 = (*((_DWORD *)v16 + v18) + *((_DWORD *)v31 + v17)) >> 16;
      v6[2] = sample_range_limit[v21 + v20];
      v6[1] = sample_range_limit[v21 + v22];
      *v6 = sample_range_limit[v21 + v19];
      v23 = v11[1];
      v11 += 2;
      v6[5] = sample_range_limit[v23 + v20];
      v6[4] = sample_range_limit[v23 + v22];
      v6[3] = sample_range_limit[v23 + v19];
      v6 += 6;
      --v15;
    }
    while ( v15 );
    start_pass = v30;
    output_width = cinfo->output_width;
  }
  if ( (output_width & 1) != 0 )
  {
    v24 = 4i64 * *v12;
    v25 = *v13;
    v26 = *(_DWORD *)(v24 + v9);
    v27 = *(_DWORD *)((char *)v31 + v24) + *((_DWORD *)start_pass + v25);
    v28 = *v11;
    v6[2] = sample_range_limit[v28 + *((_DWORD *)v8 + v25)];
    v6[1] = sample_range_limit[v28 + (v27 >> 16)];
    *v6 = sample_range_limit[v28 + v26];
  }
}

/*
==============
h2v2_merged_upsample
==============
*/
void h2v2_merged_upsample(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int in_row_group_ctr, unsigned __int8 **output_buf)
{
  jpeg_upsampler *upsample; 
  unsigned __int8 *sample_range_limit; 
  unsigned __int8 *v7; 
  __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned int output_width; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  void (__fastcall *start_pass)(jpeg_decompress_struct *); 
  __int64 v33; 
  void (__fastcall *v35)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int); 
  void (__fastcall *v36)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int); 

  upsample = cinfo->upsample;
  sample_range_limit = cinfo->sample_range_limit;
  v7 = output_buf[1];
  v35 = upsample[1].upsample;
  v8 = 2 * in_row_group_ctr;
  v9 = (*input_buf)[v8];
  v10 = (*input_buf)[(unsigned int)(v8 + 1)];
  v33 = *(_QWORD *)&upsample[1].need_context_rows;
  start_pass = upsample[2].start_pass;
  v36 = upsample[2].upsample;
  v11 = input_buf[1][in_row_group_ctr];
  v12 = input_buf[2][in_row_group_ctr];
  v13 = *output_buf;
  output_width = cinfo->output_width;
  v15 = output_width >> 1;
  if ( output_width >> 1 )
  {
    do
    {
      v16 = *v11++;
      v17 = *v12++;
      v18 = *((_DWORD *)v35 + v17);
      v19 = *v9;
      v20 = (*((_DWORD *)start_pass + v17) + *((_DWORD *)v36 + v16)) >> 16;
      v21 = *(_DWORD *)(v33 + 4 * v16);
      v13[2] = sample_range_limit[v19 + v18];
      v13[1] = sample_range_limit[v19 + v20];
      *v13 = sample_range_limit[v19 + v21];
      v22 = v9[1];
      v9 += 2;
      v13[5] = sample_range_limit[v22 + v18];
      v13[4] = sample_range_limit[v22 + v20];
      v13[3] = sample_range_limit[v22 + v21];
      v13 += 6;
      v23 = *v10;
      v7[2] = sample_range_limit[v23 + v18];
      v7[1] = sample_range_limit[v23 + v20];
      *v7 = sample_range_limit[v23 + v21];
      v24 = v10[1];
      v10 += 2;
      v7[5] = sample_range_limit[v24 + v18];
      v7[4] = sample_range_limit[v24 + v20];
      v7[3] = sample_range_limit[v24 + v21];
      v7 += 6;
      --v15;
    }
    while ( v15 );
    output_width = cinfo->output_width;
  }
  if ( (output_width & 1) != 0 )
  {
    v25 = 4i64 * *v12;
    v26 = *(_DWORD *)((char *)v35 + v25);
    v27 = *v11;
    v28 = *v9;
    v29 = (*(_DWORD *)((char *)start_pass + v25) + *((_DWORD *)v36 + v27)) >> 16;
    v30 = *(_DWORD *)(v33 + 4 * v27);
    v13[2] = sample_range_limit[v28 + v26];
    v13[1] = sample_range_limit[v28 + v29];
    *v13 = sample_range_limit[v28 + v30];
    v31 = *v10;
    v7[2] = sample_range_limit[v31 + v26];
    v7[1] = sample_range_limit[v31 + v29];
    *v7 = sample_range_limit[v31 + v30];
  }
}

/*
==============
jinit_merged_upsampler
==============
*/
void jinit_merged_upsampler(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  void *v5; 
  jpeg_upsampler *upsample; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 88i64);
  cinfo->upsample = (jpeg_upsampler *)v2;
  v3 = 0i64;
  *(_QWORD *)v2 = start_pass_merged_upsample;
  *(_BYTE *)(v2 + 16) = 0;
  v4 = cinfo->output_width * cinfo->out_color_components;
  *(_DWORD *)(v2 + 76) = v4;
  if ( cinfo->max_v_samp_factor == 2 )
  {
    *(_QWORD *)(v2 + 8) = merged_2v_upsample;
    *(_QWORD *)(v2 + 24) = h2v2_merged_upsample;
    v5 = cinfo->mem->alloc_large(cinfo, 1i64, v4);
  }
  else
  {
    *(_QWORD *)(v2 + 8) = merged_1v_upsample;
    *(_QWORD *)(v2 + 24) = h2v1_merged_upsample;
    v5 = NULL;
  }
  *(_QWORD *)(v2 + 64) = v5;
  upsample = cinfo->upsample;
  upsample[1].upsample = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  *(_QWORD *)&upsample[1].need_context_rows = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  upsample[2].start_pass = (void (__fastcall *)(jpeg_decompress_struct *))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  upsample[2].upsample = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int *, unsigned int, unsigned __int8 **, unsigned int *, unsigned int))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  v7 = 5990656;
  v8 = 2919680;
  v9 = -14831872;
  v10 = -11728000;
  do
  {
    v11 = v10 >> 16;
    v10 += 91881;
    *(_DWORD *)((char *)upsample[1].upsample + v3) = v11;
    v12 = v9;
    v9 += 116130;
    *(_DWORD *)(v3 + *(_QWORD *)&upsample[1].need_context_rows) = v12 >> 16;
    *(_DWORD *)((char *)upsample[2].start_pass + v3) = v7;
    v7 -= 46802;
    *(_DWORD *)((char *)upsample[2].upsample + v3) = v8;
    v8 -= 22554;
    v3 += 4i64;
  }
  while ( v3 <= 1020 );
}

/*
==============
merged_1v_upsample
==============
*/
void merged_1v_upsample(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, unsigned int in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr)
{
  ((void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, _QWORD, unsigned __int8 **))cinfo->upsample[1].start_pass)(cinfo, input_buf, *in_row_group_ctr, &output_buf[*out_row_ctr]);
  ++*out_row_ctr;
  ++*in_row_group_ctr;
}

/*
==============
merged_2v_upsample
==============
*/
void merged_2v_upsample(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int *in_row_group_ctr, unsigned int in_row_groups_avail, unsigned __int8 **output_buf, unsigned int *out_row_ctr, unsigned int out_rows_avail)
{
  jpeg_upsampler *upsample; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 

  upsample = cinfo->upsample;
  if ( LOBYTE(upsample[3].start_pass) )
  {
    v11 = 1;
    j_jcopy_sample_rows((unsigned __int8 **)&upsample[2].need_context_rows, 0, &output_buf[*out_row_ctr], 0, 1, HIDWORD(upsample[3].start_pass));
    LOBYTE(upsample[3].start_pass) = 0;
  }
  else
  {
    v12 = *out_row_ctr;
    v13 = 2;
    if ( LODWORD(upsample[3].upsample) < 2 )
      v13 = (unsigned int)upsample[3].upsample;
    v11 = out_rows_avail - v12;
    if ( v13 <= out_rows_avail - (unsigned int)v12 )
      v11 = v13;
    v14 = output_buf[v12];
    if ( v11 <= 1 )
    {
      v15 = *(unsigned __int8 **)&upsample[2].need_context_rows;
      LOBYTE(upsample[3].start_pass) = 1;
    }
    else
    {
      v15 = output_buf[(unsigned int)(v12 + 1)];
    }
    ((void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, _QWORD, unsigned __int8 **))upsample[1].start_pass)(cinfo, input_buf, *in_row_group_ctr, &v14);
  }
  *out_row_ctr += v11;
  LODWORD(upsample[3].upsample) -= v11;
  if ( !LOBYTE(upsample[3].start_pass) )
    ++*in_row_group_ctr;
}

/*
==============
start_pass_merged_upsample
==============
*/
void start_pass_merged_upsample(jpeg_decompress_struct *cinfo)
{
  jpeg_upsampler *upsample; 

  upsample = cinfo->upsample;
  LOBYTE(upsample[3].start_pass) = 0;
  LODWORD(upsample[3].upsample) = cinfo->output_height;
}

