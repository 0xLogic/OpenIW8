/*
==============
grayscale_convert
==============
*/
void grayscale_convert(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 ***output_buf, unsigned int output_row, int num_rows)
{
  int v6; 
  __int64 image_width; 
  __int64 i; 
  unsigned __int8 *v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  unsigned __int8 v13; 

  v6 = num_rows - 1;
  image_width = cinfo->image_width;
  for ( i = cinfo->input_components; v6 >= 0; --v6 )
  {
    v9 = *input_buf++;
    v10 = output_row++;
    v11 = (*output_buf)[v10];
    if ( (_DWORD)image_width )
    {
      v12 = image_width;
      do
      {
        v13 = *v9;
        v9 += i;
        *v11++ = v13;
        --v12;
      }
      while ( v12 );
    }
  }
}

/*
==============
null_convert
==============
*/
void null_convert(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 ***output_buf, unsigned int output_row, int num_rows)
{
  int v6; 
  __int64 image_width; 
  __int64 i; 
  __int64 j; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned __int8 v15; 

  v6 = num_rows - 1;
  image_width = cinfo->image_width;
  for ( i = cinfo->num_components; v6 >= 0; --v6 )
  {
    for ( j = 0i64; j < i; ++j )
    {
      v12 = output_buf[j][output_row];
      if ( (_DWORD)image_width )
      {
        v13 = &(*input_buf)[j];
        v14 = image_width;
        do
        {
          v15 = *v13;
          v13 += i;
          *v12++ = v15;
          --v14;
        }
        while ( v14 );
      }
    }
    ++input_buf;
    ++output_row;
  }
}

/*
==============
build_ycc_rgb_table
==============
*/
void build_ycc_rgb_table(jpeg_decompress_struct *cinfo)
{
  jpeg_color_deconverter *cconvert; 
  int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 

  cconvert = cinfo->cconvert;
  cconvert[1].start_pass = (void (__fastcall *)(jpeg_decompress_struct *))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  cconvert[1].color_convert = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int, unsigned __int8 **, int))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  cconvert[2].start_pass = (void (__fastcall *)(jpeg_decompress_struct *))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  cconvert[2].color_convert = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8 ***, unsigned int, unsigned __int8 **, int))cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
  v3 = 5990656;
  v4 = 0i64;
  v5 = 2919680;
  v6 = -14831872;
  v7 = -11728000;
  do
  {
    v8 = v7 >> 16;
    v7 += 91881;
    *(_DWORD *)((char *)cconvert[1].start_pass + v4) = v8;
    v9 = v6;
    v6 += 116130;
    *(_DWORD *)((char *)cconvert[1].color_convert + v4) = v9 >> 16;
    *(_DWORD *)((char *)cconvert[2].start_pass + v4) = v3;
    v3 -= 46802;
    *(_DWORD *)((char *)cconvert[2].color_convert + v4) = v5;
    v5 -= 22554;
    v4 += 4i64;
  }
  while ( v4 <= 1020 );
}

/*
==============
gray_rgb_convert
==============
*/
void gray_rgb_convert(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int input_row, unsigned __int8 **output_buf, int num_rows)
{
  int v6; 
  __int64 i; 
  __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  unsigned __int8 v12; 

  v6 = num_rows - 1;
  for ( i = cinfo->output_width; v6 >= 0; --v6 )
  {
    ++output_buf;
    v8 = input_row++;
    v9 = (*input_buf)[v8];
    if ( (_DWORD)i )
    {
      v10 = *(output_buf - 1) + 2;
      v11 = i;
      do
      {
        v12 = *v9++;
        *(v10 - 2) = v12;
        *(v10 - 1) = v12;
        *v10 = v12;
        v10 += 3;
        --v11;
      }
      while ( v11 );
    }
  }
}

/*
==============
jinit_color_deconverter
==============
*/
void jinit_color_deconverter(jpeg_decompress_struct *cinfo)
{
  jpeg_color_deconverter *v2; 
  J_COLOR_SPACE jpeg_color_space; 
  bool v4; 
  J_COLOR_SPACE v5; 
  bool v6; 
  int v7; 
  __int64 v8; 

  v2 = (jpeg_color_deconverter *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 48i64);
  cinfo->cconvert = v2;
  v2->start_pass = start_pass_dcolor;
  jpeg_color_space = cinfo->jpeg_color_space;
  if ( jpeg_color_space == JCS_GRAYSCALE )
  {
    v4 = cinfo->num_components == 1;
LABEL_10:
    if ( v4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( jpeg_color_space <= JCS_GRAYSCALE )
    goto LABEL_7;
  if ( jpeg_color_space <= JCS_YCbCr )
  {
    v4 = cinfo->num_components == 3;
    goto LABEL_10;
  }
  if ( jpeg_color_space <= JCS_YCCK )
  {
    v4 = cinfo->num_components == 4;
    goto LABEL_10;
  }
LABEL_7:
  if ( cinfo->num_components >= 1 )
    goto LABEL_12;
LABEL_11:
  cinfo->err->msg_code = 10;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
LABEL_12:
  v5 = cinfo->jpeg_color_space;
  if ( cinfo->out_color_space != JCS_GRAYSCALE )
  {
    if ( cinfo->out_color_space == JCS_RGB )
    {
      cinfo->out_color_components = 3;
      if ( v5 == JCS_YCbCr )
      {
        v2->color_convert = ycc_rgb_convert;
        build_ycc_rgb_table(cinfo);
        goto LABEL_32;
      }
      if ( v5 == JCS_GRAYSCALE )
      {
        v2->color_convert = gray_rgb_convert;
        goto LABEL_32;
      }
      v6 = v5 == JCS_RGB;
    }
    else
    {
      if ( cinfo->out_color_space != JCS_CMYK )
      {
        if ( cinfo->out_color_space == v5 )
        {
          cinfo->out_color_components = cinfo->num_components;
          v2->color_convert = null_convert_0;
          goto LABEL_32;
        }
        goto LABEL_28;
      }
      cinfo->out_color_components = 4;
      if ( v5 == JCS_YCCK )
      {
        v2->color_convert = ycck_cmyk_convert;
        build_ycc_rgb_table(cinfo);
        goto LABEL_32;
      }
      v6 = v5 == JCS_CMYK;
    }
    if ( v6 )
    {
      v2->color_convert = null_convert_0;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  cinfo->out_color_components = 1;
  if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_28:
    cinfo->err->msg_code = 27;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    goto LABEL_32;
  }
  v7 = 1;
  v2->color_convert = grayscale_convert_0;
  if ( cinfo->num_components > 1 )
  {
    v8 = 1i64;
    do
    {
      ++v8;
      ++v7;
      cinfo->comp_info[v8 - 1].component_needed = 0;
    }
    while ( v7 < cinfo->num_components );
  }
LABEL_32:
  if ( cinfo->quantize_colors )
    cinfo->output_components = 1;
  else
    cinfo->output_components = cinfo->out_color_components;
}

/*
==============
start_pass_dcolor
==============
*/
void start_pass_dcolor(jpeg_decompress_struct *cinfo)
{
  ;
}

/*
==============
ycc_rgb_convert
==============
*/
void ycc_rgb_convert(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int input_row, unsigned __int8 **output_buf, int num_rows)
{
  jpeg_color_deconverter *cconvert; 
  unsigned int output_width; 
  unsigned __int8 *sample_range_limit; 
  unsigned __int8 ***v10; 
  bool v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  signed __int64 v19; 
  signed __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  jpeg_color_deconverter v25; 
  jpeg_color_deconverter v26; 
  unsigned int v27; 
  int num_rowsa; 

  cconvert = cinfo->cconvert;
  output_width = cinfo->output_width;
  sample_range_limit = cinfo->sample_range_limit;
  v10 = input_buf;
  v11 = num_rows - 1 < 0;
  v12 = num_rows - 1;
  v25 = cconvert[1];
  v26 = cconvert[2];
  v27 = output_width;
  num_rowsa = num_rows - 1;
  if ( !v11 )
  {
    do
    {
      v13 = (__int64)*output_buf++;
      v14 = input_row++;
      v15 = v10[2][v14];
      v16 = (*v10)[v14];
      v17 = v10[1][v14];
      if ( output_width )
      {
        v18 = v13 + 1;
        v19 = v16 - v17;
        v20 = v15 - v17;
        v21 = output_width;
        do
        {
          v22 = v17[v19];
          v18 += 3i64;
          v23 = v17[v20];
          v24 = *v17++;
          *(_BYTE *)(v18 - 2) = sample_range_limit[v22 + *((_DWORD *)v25.start_pass + v23)];
          *(_BYTE *)(v18 - 3) = sample_range_limit[v22 + ((*((_DWORD *)v26.color_convert + v24) + *((_DWORD *)v26.start_pass + v23)) >> 16)];
          *(_BYTE *)(v18 - 4) = sample_range_limit[v22 + *((_DWORD *)v25.color_convert + v24)];
          --v21;
        }
        while ( v21 );
        v12 = num_rowsa;
        v10 = input_buf;
        output_width = v27;
      }
      num_rowsa = --v12;
    }
    while ( v12 >= 0 );
  }
}

/*
==============
ycck_cmyk_convert
==============
*/
void ycck_cmyk_convert(jpeg_decompress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int input_row, unsigned __int8 **output_buf, int num_rows)
{
  jpeg_color_deconverter *cconvert; 
  unsigned int output_width; 
  unsigned __int8 ***v8; 
  unsigned __int8 *sample_range_limit; 
  bool v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  signed __int64 v19; 
  signed __int64 v20; 
  signed __int64 v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  jpeg_color_deconverter v26; 
  jpeg_color_deconverter v27; 
  unsigned int v28; 
  unsigned int v29; 
  int num_rowsa; 

  cconvert = cinfo->cconvert;
  output_width = cinfo->output_width;
  v8 = input_buf;
  sample_range_limit = cinfo->sample_range_limit;
  v10 = num_rows - 1 < 0;
  v11 = num_rows - 1;
  v26 = cconvert[1];
  v27 = cconvert[2];
  v28 = output_width;
  num_rowsa = num_rows - 1;
  if ( !v10 )
  {
    do
    {
      v12 = (__int64)*output_buf++;
      v13 = input_row++;
      v29 = input_row;
      v14 = v8[2][v13];
      v15 = (*v8)[v13];
      v16 = v8[3][v13];
      v17 = v8[1][v13];
      if ( output_width )
      {
        v18 = v12 + 2;
        v19 = v15 - v17;
        v20 = v14 - v17;
        v21 = v16 - v17;
        v22 = output_width;
        do
        {
          v23 = v17[v19];
          v18 += 4i64;
          v24 = v17[v20];
          v25 = *v17++;
          *(_BYTE *)(v18 - 6) = sample_range_limit[255 - *((_DWORD *)v26.start_pass + v24) - v23];
          *(_BYTE *)(v18 - 5) = sample_range_limit[255 - ((*((_DWORD *)v27.color_convert + v25) + *((_DWORD *)v27.start_pass + v24)) >> 16) - v23];
          *(_BYTE *)(v18 - 4) = sample_range_limit[255 - *((_DWORD *)v26.color_convert + v25) - v23];
          *(_BYTE *)(v18 - 3) = v17[v21 - 1];
          --v22;
        }
        while ( v22 );
        v8 = input_buf;
        v11 = num_rowsa;
        input_row = v29;
        output_width = v28;
      }
      num_rowsa = --v11;
    }
    while ( v11 >= 0 );
  }
}

