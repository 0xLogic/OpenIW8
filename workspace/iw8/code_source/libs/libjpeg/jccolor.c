/*
==============
cmyk_ycck_convert
==============
*/
void cmyk_ycck_convert(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 ***output_buf, unsigned int output_row, int num_rows)
{
  unsigned __int8 ***v5; 
  unsigned int image_width; 
  bool v7; 
  int v8; 
  void (__fastcall *start_pass)(jpeg_compress_struct *); 
  unsigned __int8 *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 **v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  signed __int64 v19; 
  signed __int64 v20; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int8 v25; 
  unsigned int v26; 
  unsigned __int8 **v27; 
  int num_rowsa; 

  v5 = output_buf;
  image_width = cinfo->image_width;
  v7 = num_rows - 1 < 0;
  v8 = num_rows - 1;
  num_rowsa = num_rows - 1;
  start_pass = cinfo->cconvert[1].start_pass;
  v26 = image_width;
  if ( !v7 )
  {
    do
    {
      v10 = *input_buf;
      v11 = output_row++;
      v27 = input_buf + 1;
      v12 = v11;
      v13 = v5[1][v11];
      v14 = (*v5)[v11];
      v15 = v5[2][v12];
      v16 = v5[3];
      if ( image_width )
      {
        v17 = v10 + 2;
        v18 = image_width;
        v19 = v16[v12] - v14;
        v20 = v13 - v14;
        v21 = v15 - v14;
        do
        {
          v22 = *(v17 - 1);
          ++v14;
          v23 = *(v17 - 2);
          v24 = *v17;
          v25 = v17[1];
          v17 += 4;
          v14[v19 - 1] = v25;
          *(v14 - 1) = (unsigned int)(*((_DWORD *)start_pass + 255 - v23) + *((_DWORD *)start_pass + 511 - v22) + *((_DWORD *)start_pass + 767 - v24)) >> 16;
          v14[v20 - 1] = (unsigned int)(*((_DWORD *)start_pass + 255 - v23 + 768) + *((_DWORD *)start_pass + 255 - v22 + 1024) + *((_DWORD *)start_pass + 255 - v24 + 1280)) >> 16;
          v14[v21 - 1] = (unsigned int)(*((_DWORD *)start_pass + 255 - v22 + 1536) + *((_DWORD *)start_pass + 255 - v24 + 1792) + *((_DWORD *)start_pass + 1535 - v23)) >> 16;
          --v18;
        }
        while ( v18 );
        v5 = output_buf;
        v8 = num_rowsa;
        image_width = v26;
      }
      input_buf = v27;
      num_rowsa = --v8;
    }
    while ( v8 >= 0 );
  }
}

/*
==============
jinit_color_converter
==============
*/
void jinit_color_converter(jpeg_compress_struct *cinfo)
{
  jpeg_color_converter *v2; 
  J_COLOR_SPACE in_color_space; 
  bool v4; 
  J_COLOR_SPACE v5; 
  J_COLOR_SPACE v6; 
  J_COLOR_SPACE v7; 

  v2 = (jpeg_color_converter *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 24i64);
  cinfo->cconvert = v2;
  v2->start_pass = null_method;
  in_color_space = cinfo->in_color_space;
  if ( in_color_space == JCS_GRAYSCALE )
  {
    v4 = cinfo->input_components == 1;
LABEL_10:
    if ( v4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( in_color_space <= JCS_GRAYSCALE )
    goto LABEL_7;
  if ( in_color_space <= JCS_YCbCr )
  {
    v4 = cinfo->input_components == 3;
    goto LABEL_10;
  }
  if ( in_color_space <= JCS_YCCK )
  {
    v4 = cinfo->input_components == 4;
    goto LABEL_10;
  }
LABEL_7:
  if ( cinfo->input_components >= 1 )
    goto LABEL_12;
LABEL_11:
  cinfo->err->msg_code = 9;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
LABEL_12:
  if ( cinfo->jpeg_color_space != JCS_GRAYSCALE )
  {
    switch ( cinfo->jpeg_color_space )
    {
      case JCS_RGB:
        if ( cinfo->num_components != 3 )
        {
          cinfo->err->msg_code = 10;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        if ( cinfo->in_color_space == JCS_RGB )
          goto LABEL_20;
        break;
      case JCS_YCbCr:
        if ( cinfo->num_components != 3 )
        {
          cinfo->err->msg_code = 10;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        v6 = cinfo->in_color_space;
        if ( v6 == JCS_RGB )
        {
          v2->start_pass = rgb_ycc_start;
          v2->color_convert = rgb_ycc_convert;
          return;
        }
        if ( v6 == JCS_YCbCr )
          goto LABEL_20;
        break;
      case JCS_CMYK:
        if ( cinfo->num_components != 4 )
        {
          cinfo->err->msg_code = 10;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        if ( cinfo->in_color_space == JCS_CMYK )
          goto LABEL_20;
        break;
      case JCS_YCCK:
        if ( cinfo->num_components != 4 )
        {
          cinfo->err->msg_code = 10;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        v5 = cinfo->in_color_space;
        if ( v5 == JCS_CMYK )
        {
          v2->start_pass = rgb_ycc_start;
          v2->color_convert = cmyk_ycck_convert;
          return;
        }
        if ( v5 == JCS_YCCK )
        {
LABEL_20:
          v2->color_convert = null_convert;
          return;
        }
        break;
      default:
        if ( cinfo->jpeg_color_space != cinfo->in_color_space || cinfo->num_components != cinfo->input_components )
        {
          cinfo->err->msg_code = 27;
          cinfo->err->error_exit((jpeg_common_struct *)cinfo);
        }
        goto LABEL_20;
    }
    goto LABEL_40;
  }
  if ( cinfo->num_components != 1 )
  {
    cinfo->err->msg_code = 10;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v7 = cinfo->in_color_space;
  if ( v7 != JCS_GRAYSCALE )
  {
    if ( v7 == JCS_RGB )
    {
      v2->start_pass = rgb_ycc_start;
      v2->color_convert = rgb_gray_convert;
      return;
    }
    if ( v7 != JCS_YCbCr )
    {
LABEL_40:
      cinfo->err->msg_code = 27;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      return;
    }
  }
  v2->color_convert = grayscale_convert;
}

/*
==============
null_method
==============
*/
void null_method(jpeg_compress_struct *cinfo)
{
  ;
}

/*
==============
rgb_gray_convert
==============
*/
void rgb_gray_convert(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 ***output_buf, unsigned int output_row, int num_rows)
{
  int v7; 
  __int64 image_width; 
  void (__fastcall *i)(jpeg_compress_struct *); 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v7 = num_rows - 1;
  image_width = cinfo->image_width;
  for ( i = cinfo->cconvert[1].start_pass; v7 >= 0; --v7 )
  {
    v11 = (__int64)*input_buf++;
    v12 = output_row++;
    v13 = (*output_buf)[v12];
    if ( (_DWORD)image_width )
    {
      v14 = (unsigned __int8 *)(v11 + 1);
      v15 = image_width;
      do
      {
        v16 = *(v14 - 1);
        v17 = *v14;
        v18 = v14[1];
        ++v13;
        v14 += 3;
        *(v13 - 1) = (unsigned int)(*((_DWORD *)i + v18) + *((_DWORD *)i + v17 + 256) + *((_DWORD *)i + v16 + 512)) >> 16;
        --v15;
      }
      while ( v15 );
    }
  }
}

/*
==============
rgb_ycc_convert
==============
*/
void rgb_ycc_convert(jpeg_compress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 ***output_buf, unsigned int output_row, int num_rows)
{
  int v7; 
  unsigned int image_width; 
  void (__fastcall *i)(jpeg_compress_struct *); 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 

  v7 = num_rows - 1;
  image_width = cinfo->image_width;
  v21 = image_width;
  for ( i = cinfo->cconvert[1].start_pass; v7 >= 0; --v7 )
  {
    v11 = (__int64)*input_buf++;
    v12 = output_row++;
    v13 = output_buf[1][v12];
    if ( image_width )
    {
      v14 = (unsigned __int8 *)(v11 + 1);
      v15 = image_width;
      v16 = (unsigned __int8 *)((*output_buf)[v12] - v13);
      v17 = (unsigned __int8 *)(output_buf[2][v12] - v13);
      do
      {
        v18 = *(v14 - 1);
        v19 = *v14;
        v20 = v14[1];
        ++v13;
        v14 += 3;
        v13[(_QWORD)v16 - 1] = (unsigned int)(*((_DWORD *)i + v20) + *((_DWORD *)i + v19 + 256) + *((_DWORD *)i + v18 + 512)) >> 16;
        *(v13 - 1) = (unsigned int)(*((_DWORD *)i + v20 + 768) + *((_DWORD *)i + v19 + 1024) + *((_DWORD *)i + v18 + 1280)) >> 16;
        v13[(_QWORD)v17 - 1] = (unsigned int)(*((_DWORD *)i + v20 + 1280) + *((_DWORD *)i + v19 + 1536) + *((_DWORD *)i + v18 + 1792)) >> 16;
        --v15;
      }
      while ( v15 );
      image_width = v21;
    }
  }
}

/*
==============
rgb_ycc_start
==============
*/
void rgb_ycc_start(jpeg_compress_struct *cinfo)
{
  jpeg_color_converter *cconvert; 
  __int64 v2; 
  int v3; 
  _OWORD *v4; 

  cconvert = cinfo->cconvert;
  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 0x2000i64);
  v3 = 0;
  cconvert[1].start_pass = (void (__fastcall *)(jpeg_compress_struct *))v2;
  v4 = (_OWORD *)(v2 + 2048);
  do
  {
    _XMM0 = (unsigned int)v3;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm3, xmm0, xmm4
      vpmulld xmm0, xmm3, xmm6
    }
    *(v4 - 64) = _XMM0;
    __asm { vpmulld xmm1, xmm3, xmm5 }
    *(v4 - 128) = _XMM1;
    __asm
    {
      vpmulld xmm0, xmm3, xmm7
      vpaddd  xmm1, xmm0, xmm8
    }
    *v4 = _XMM1;
    __asm { vpmulld xmm0, xmm3, xmm9 }
    v4[64] = _XMM0;
    __asm
    {
      vpslld  xmm0, xmm3, xmm11
      vpmulld xmm1, xmm3, xmm10
      vpaddd  xmm2, xmm0, xmm12
    }
    v4[128] = _XMM1;
    __asm
    {
      vpmulld xmm0, xmm3, xmm13
      vpmulld xmm1, xmm3, xmm14
    }
    v3 += 4;
    v4[256] = _XMM0;
    v4[192] = _XMM2;
    v4[320] = _XMM1;
    ++v4;
  }
  while ( v3 <= 255 );
}

