/*
==============
alloc_fs_workspace
==============
*/
void alloc_fs_workspace(jpeg_decompress_struct *cinfo)
{
  int v1; 
  unsigned __int64 v2; 
  void (__fastcall **p_finish_pass)(jpeg_decompress_struct *); 

  v1 = 0;
  v2 = 2i64 * (cinfo->output_width + 2);
  if ( cinfo->out_color_components > 0 )
  {
    p_finish_pass = &cinfo->cquantize[3].finish_pass;
    do
    {
      *p_finish_pass = (void (__fastcall *)(jpeg_decompress_struct *))cinfo->mem->alloc_large(cinfo, 1i64, v2);
      ++v1;
      ++p_finish_pass;
    }
    while ( v1 < cinfo->out_color_components );
  }
}

/*
==============
color_quantize
==============
*/
void color_quantize(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  unsigned int output_width; 
  unsigned __int8 **v5; 
  __int64 out_color_components; 
  signed __int64 v7; 
  __int64 v8; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  unsigned __int8 *v10; 
  unsigned int v11; 
  unsigned __int8 *i; 
  unsigned __int8 v13; 
  __int64 j; 
  __int64 v15; 
  __int64 v16; 

  if ( num_rows > 0 )
  {
    output_width = cinfo->output_width;
    v5 = output_buf;
    out_color_components = cinfo->out_color_components;
    v7 = (char *)input_buf - (char *)output_buf;
    v8 = num_rows;
    finish_pass = cinfo->cquantize[1].finish_pass;
    do
    {
      v10 = *(unsigned __int8 **)((char *)v5 + v7);
      v11 = output_width;
      for ( i = *v5; v11; --v11 )
      {
        v13 = 0;
        for ( j = 0i64; j < out_color_components; v13 += *(_BYTE *)(v16 + v15) )
        {
          v15 = *v10++;
          v16 = *((_QWORD *)finish_pass + j++);
        }
        *i++ = v13;
      }
      ++v5;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
color_quantize3
==============
*/
void color_quantize3(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  unsigned __int8 **v4; 
  unsigned int output_width; 
  __int64 v6; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  signed __int64 v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned __int8 *i; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = output_buf;
  output_width = cinfo->output_width;
  v6 = num_rows;
  finish_pass = cinfo->cquantize[1].finish_pass;
  v8 = *(_QWORD *)finish_pass;
  v9 = *((_QWORD *)finish_pass + 1);
  v10 = *((_QWORD *)finish_pass + 2);
  if ( num_rows > 0 )
  {
    v11 = (char *)input_buf - (char *)output_buf;
    do
    {
      v12 = *(unsigned __int8 **)((char *)v4 + v11);
      v13 = output_width;
      for ( i = *v4; v13; --v13 )
      {
        v15 = *v12;
        ++i;
        v16 = v12[1];
        v17 = v12[2];
        v12 += 3;
        *(i - 1) = *(_BYTE *)(v17 + v10) + *(_BYTE *)(v16 + v9) + *(_BYTE *)(v15 + v8);
      }
      ++v4;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
create_colorindex
==============
*/
void create_colorindex(jpeg_decompress_struct *cinfo)
{
  J_DITHER_MODE dither_mode; 
  jpeg_color_quantizer *cquantize; 
  __int64 v4; 
  unsigned __int8 **v5; 
  int color_quantize; 
  int v7; 
  int *v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  _BYTE *v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  _BYTE *v19; 
  jpeg_color_quantizer *v21; 

  dither_mode = cinfo->dither_mode;
  cquantize = cinfo->cquantize;
  v4 = 766i64;
  v21 = cquantize;
  LOBYTE(cquantize[1].new_color_map) = dither_mode == JDITHER_ORDERED;
  if ( dither_mode != JDITHER_ORDERED )
    v4 = 256i64;
  v5 = cinfo->mem->alloc_sarray(cinfo, 1i64, v4, (unsigned int)cinfo->out_color_components);
  color_quantize = (int)cquantize[1].color_quantize;
  v7 = 0;
  cquantize[1].finish_pass = (void (__fastcall *)(jpeg_decompress_struct *))v5;
  if ( cinfo->out_color_components > 0 )
  {
    v8 = (int *)&cquantize[1].new_color_map + 1;
    v9 = 0i64;
    do
    {
      v10 = *v8;
      color_quantize /= *v8;
      if ( dither_mode == JDITHER_ORDERED )
        *(_QWORD *)((char *)cquantize[1].finish_pass + v9) += 255i64;
      v11 = 2 * v10 - 2;
      v12 = 0;
      v13 = 0;
      v14 = *(_BYTE **)((char *)cquantize[1].finish_pass + v9);
      v15 = 0i64;
      v16 = (v10 + 254) / v11;
      do
      {
        if ( v13 > v16 )
        {
          v17 = 510 * v12 + v10 + 254;
          do
          {
            v17 += 510;
            ++v12;
            v16 = v17 / v11;
          }
          while ( v13 > v17 / v11 );
        }
        ++v13;
        v14[v15++] = color_quantize * v12;
      }
      while ( v15 <= 255 );
      if ( dither_mode == JDITHER_ORDERED )
      {
        v18 = 1i64;
        v19 = v14 - 1;
        do
        {
          *v19-- = *v14;
          v14[v18++ + 255] = v14[255];
        }
        while ( v18 <= 255 );
      }
      ++v7;
      cquantize = v21;
      ++v8;
      v9 += 8i64;
    }
    while ( v7 < cinfo->out_color_components );
  }
}

/*
==============
create_colormap
==============
*/
void create_colormap(jpeg_decompress_struct *cinfo)
{
  jpeg_color_quantizer *cquantize; 
  jpeg_decompress_struct *v2; 
  __int64 out_color_components; 
  int v4; 
  int desired_number_of_colors; 
  unsigned int *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int *v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  jpeg_error_mgr *err; 
  __int64 v20; 
  int v21; 
  int v22; 
  _QWORD *v23; 
  unsigned int v24; 
  __int64 v25; 
  signed int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 i; 
  __int64 j; 
  unsigned int *v34; 
  jpeg_color_quantizer *v35; 
  int v37; 
  int v38; 

  cquantize = cinfo->cquantize;
  v2 = cinfo;
  out_color_components = cinfo->out_color_components;
  v4 = 1;
  desired_number_of_colors = cinfo->desired_number_of_colors;
  v35 = cquantize;
  v6 = (unsigned int *)&cquantize[1].new_color_map + 1;
  v34 = (unsigned int *)&cquantize[1].new_color_map + 1;
  do
  {
    v7 = v4++;
    v8 = v4;
    if ( (int)out_color_components > 1 )
    {
      v9 = (unsigned int)(out_color_components - 1);
      do
      {
        v8 *= v4;
        --v9;
      }
      while ( v9 );
    }
  }
  while ( v8 <= desired_number_of_colors );
  if ( v7 < 2 )
  {
    v2->err->msg_code = 56;
    v2->err->msg_parm.i[0] = v8;
    v2->err->error_exit((jpeg_common_struct *)v2);
  }
  v10 = 1;
  v37 = 1;
  if ( out_color_components > 0 )
  {
    v11 = (int *)&cquantize[1].new_color_map + 1;
    v12 = out_color_components;
    v13 = out_color_components;
    while ( v12 )
    {
      *v11++ = v7;
      --v12;
    }
    do
    {
      v10 *= v7;
      --v13;
    }
    while ( v13 );
    v37 = v10;
  }
  do
  {
LABEL_14:
    v14 = 0;
    v15 = 0i64;
    v16 = 0i64;
    if ( out_color_components <= 0 )
      break;
    while ( 1 )
    {
      v17 = v2->out_color_space == JCS_RGB ? *((_DWORD *)&unk_144750E70 + v16) : v15;
      v18 = v6[v17];
      if ( (v18 + 1) * (v10 / v18) > desired_number_of_colors )
        break;
      v15 = (unsigned int)(v15 + 1);
      v6[v17] = v18 + 1;
      ++v16;
      v37 = (v18 + 1) * (v10 / v18);
      v10 = v37;
      v14 = 1;
      if ( v16 >= out_color_components )
        goto LABEL_14;
    }
  }
  while ( v14 );
  err = v2->err;
  if ( v2->out_color_components == 3 )
  {
    err->msg_parm.i[0] = v10;
    err->msg_parm.i[1] = *v6;
    err->msg_parm.i[2] = (int)cquantize[2].start_pass;
    err->msg_parm.i[3] = HIDWORD(cquantize[2].start_pass);
    v2->err->msg_code = 94;
  }
  else
  {
    err->msg_code = 95;
    v2->err->msg_parm.i[0] = v10;
  }
  ((void (__fastcall *)(jpeg_decompress_struct *, __int64, __int64))v2->err->emit_message)(v2, 1i64, v15);
  v20 = (__int64)v2->mem->alloc_sarray((jpeg_common_struct *)v2, 1i64, v10, v2->out_color_components);
  v21 = 0;
  v22 = v10;
  v38 = 0;
  if ( v2->out_color_components > 0 )
  {
    v23 = (_QWORD *)v20;
    do
    {
      v24 = *v6;
      v25 = v22 / (int)*v6;
      if ( (int)*v6 > 0 )
      {
        v26 = v24 - 1;
        v27 = v10;
        v28 = 0;
        v29 = v24;
        v30 = 0i64;
        v31 = (int)(v24 - 1) / 2;
        do
        {
          for ( i = v30; i < v27; i += v22 )
          {
            for ( j = 0i64; j < v25; ++j )
              *(_BYTE *)(i + *v23 + j) = (v28 + v31) / v26;
          }
          v28 += 255;
          v30 += v25;
          --v29;
        }
        while ( v29 );
        v10 = v37;
        v2 = cinfo;
        v21 = v38;
        v6 = v34;
      }
      ++v21;
      ++v6;
      ++v23;
      v38 = v21;
      v22 = v25;
      v34 = v6;
    }
    while ( v21 < v2->out_color_components );
  }
  LODWORD(v35[1].color_quantize) = v10;
  v35[1].start_pass = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8))v20;
}

/*
==============
create_odither_tables
==============
*/
void create_odither_tables(jpeg_decompress_struct *cinfo)
{
  jpeg_color_quantizer *cquantize; 
  int v2; 
  __int64 v4; 
  _DWORD *v5; 
  int *v6; 
  void (__fastcall **p_finish_pass)(jpeg_decompress_struct *); 
  int v8; 
  __int64 v9; 
  _DWORD *v10; 
  __int64 v11; 
  __int64 v12; 
  const unsigned __int8 *v13; 
  int v14; 
  int *v15; 
  int v16; 

  cquantize = cinfo->cquantize;
  v2 = 0;
  if ( cinfo->out_color_components > 0 )
  {
    v4 = 0i64;
    v5 = (_DWORD *)&cquantize[1].new_color_map + 1;
    v6 = (int *)&cquantize[1].new_color_map + 1;
    p_finish_pass = &cquantize[2].finish_pass;
    do
    {
      v8 = *v6;
      v9 = 0i64;
      if ( v4 <= 0 )
        goto LABEL_9;
      v10 = v5;
      while ( v8 != *v10 )
      {
        ++v9;
        ++v10;
        if ( v9 >= v4 )
          goto LABEL_9;
      }
      v11 = *((_QWORD *)&cquantize[2].finish_pass + v9);
      if ( !v11 )
      {
LABEL_9:
        v12 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 1024i64);
        v13 = &base_dither_matrix[0][1];
        v11 = v12;
        v14 = (v8 << 9) - 512;
        v15 = (int *)(v12 + 8);
        do
        {
          *(v15 - 2) = (65025 - 510 * *(v13 - 1)) / v14;
          *(v15 - 1) = (65025 - 510 * *v13) / v14;
          *v15 = (65025 - 510 * v13[1]) / v14;
          v15[1] = (65025 - 510 * v13[2]) / v14;
          v15[2] = (65025 - 510 * v13[3]) / v14;
          v15[3] = (65025 - 510 * v13[4]) / v14;
          v15[4] = (65025 - 510 * v13[5]) / v14;
          v15[5] = (65025 - 510 * v13[6]) / v14;
          v15[6] = (65025 - 510 * v13[7]) / v14;
          v15[7] = (65025 - 510 * v13[8]) / v14;
          v15[8] = (65025 - 510 * v13[9]) / v14;
          v15 += 16;
          *(v15 - 7) = (65025 - 510 * v13[10]) / v14;
          *(v15 - 6) = (65025 - 510 * v13[11]) / v14;
          *(v15 - 5) = (65025 - 510 * v13[12]) / v14;
          *(v15 - 4) = (65025 - 510 * v13[13]) / v14;
          v16 = v13[14];
          v13 += 16;
          *(v15 - 3) = (65025 - 510 * v16) / v14;
        }
        while ( (__int64)v13 < (__int64)&unk_144750E71 );
        v5 = (_DWORD *)&cquantize[1].new_color_map + 1;
      }
      *p_finish_pass = (void (__fastcall *)(jpeg_decompress_struct *))v11;
      ++v2;
      ++p_finish_pass;
      ++v4;
      ++v6;
    }
    while ( v2 < cinfo->out_color_components );
  }
}

/*
==============
finish_pass_1_quant
==============
*/
void finish_pass_1_quant(jpeg_decompress_struct *cinfo)
{
  ;
}

/*
==============
jinit_1pass_quantizer
==============
*/
void jinit_1pass_quantizer(jpeg_decompress_struct *cinfo)
{
  jpeg_color_quantizer *v2; 

  v2 = (jpeg_color_quantizer *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 152i64);
  cinfo->cquantize = v2;
  v2->start_pass = start_pass_1_quant;
  v2->finish_pass = finish_pass_1_quant;
  v2->new_color_map = new_color_map_1_quant;
  v2[3].finish_pass = NULL;
  v2[2].finish_pass = NULL;
  if ( cinfo->out_color_components > 4 )
  {
    cinfo->err->msg_code = 55;
    cinfo->err->msg_parm.i[0] = 4;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  if ( cinfo->desired_number_of_colors > 256 )
  {
    cinfo->err->msg_code = 57;
    cinfo->err->msg_parm.i[0] = 256;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  create_colormap(cinfo);
  create_colorindex(cinfo);
  if ( cinfo->dither_mode == JDITHER_FS )
    alloc_fs_workspace(cinfo);
}

/*
==============
new_color_map_1_quant
==============
*/
void new_color_map_1_quant(jpeg_decompress_struct *cinfo)
{
  cinfo->err->msg_code = 46;
  cinfo->err->error_exit((jpeg_common_struct *)cinfo);
}

/*
==============
quantize3_ord_dither
==============
*/
void quantize3_ord_dither(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  jpeg_color_quantizer *cquantize; 
  __int64 v5; 
  unsigned __int8 **v6; 
  unsigned int output_width; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  int color_quantize_high; 
  char *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  char *v16; 
  char *v17; 
  char *v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  jpeg_color_quantizer *v26; 
  unsigned int v27; 
  char *v28; 
  unsigned __int8 **v29; 
  char v30; 

  v29 = output_buf;
  cquantize = cinfo->cquantize;
  v5 = num_rows;
  v6 = output_buf;
  output_width = cinfo->output_width;
  v26 = cquantize;
  finish_pass = cquantize[1].finish_pass;
  v27 = output_width;
  v22 = num_rows;
  v23 = *(_QWORD *)finish_pass;
  v25 = *((_QWORD *)finish_pass + 2);
  v24 = *((_QWORD *)finish_pass + 1);
  if ( num_rows > 0 )
  {
    color_quantize_high = HIDWORD(cquantize[2].color_quantize);
    v10 = (char *)((char *)input_buf - (char *)v6);
    v30 = color_quantize_high;
    v28 = (char *)((char *)input_buf - (char *)v6);
    do
    {
      v11 = 0i64;
      v12 = output_width;
      v13 = *(unsigned __int8 **)((char *)v6 + (_QWORD)v10);
      v14 = *v6;
      v15 = (__int64)color_quantize_high << 6;
      v16 = (char *)cquantize[2].finish_pass + v15;
      v17 = (char *)cquantize[2].new_color_map + v15;
      if ( output_width )
      {
        v18 = (char *)cquantize[3].start_pass + v15;
        do
        {
          ++v14;
          v19 = v13[1];
          v20 = *v13 + *(_DWORD *)&v16[4 * v11];
          v21 = v13[2];
          v13 += 3;
          *(v14 - 1) = *(_BYTE *)(v21 + *(_DWORD *)&v18[4 * v11] + v25) + *(_BYTE *)(v19 + *(_DWORD *)&v17[4 * v11] + v24) + *(_BYTE *)(v20 + v23);
          v11 = ((_BYTE)v11 + 1) & 0xF;
          --v12;
        }
        while ( v12 );
        LOBYTE(color_quantize_high) = v30;
        v6 = v29;
        cquantize = v26;
        v5 = v22;
        output_width = v27;
        v10 = v28;
      }
      ++v6;
      color_quantize_high = ((_BYTE)color_quantize_high + 1) & 0xF;
      v29 = v6;
      --v5;
      v30 = color_quantize_high;
      v22 = v5;
      HIDWORD(cquantize[2].color_quantize) = color_quantize_high;
    }
    while ( v5 );
  }
}

/*
==============
quantize_fs_dither
==============
*/
void quantize_fs_dither(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  jpeg_color_quantizer *cquantize; 
  void **v5; 
  unsigned int output_width; 
  int out_color_components; 
  __int64 v8; 
  signed __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  _BYTE *v14; 
  unsigned __int8 *v15; 
  _WORD *v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int16 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int16 v25; 
  bool v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned __int8 *sample_range_limit; 
  jpeg_color_quantizer *v35; 
  __int16 v36; 
  signed __int64 v37; 
  unsigned __int8 **v38; 
  unsigned int v39; 

  v38 = output_buf;
  cquantize = cinfo->cquantize;
  v5 = (void **)output_buf;
  output_width = cinfo->output_width;
  out_color_components = cinfo->out_color_components;
  v8 = num_rows;
  v35 = cquantize;
  v39 = output_width;
  sample_range_limit = cinfo->sample_range_limit;
  v31 = num_rows;
  v27 = out_color_components;
  if ( num_rows > 0 )
  {
    v9 = (char *)input_buf - (char *)output_buf;
    v37 = (char *)input_buf - (char *)output_buf;
    v10 = output_width;
    do
    {
      j_jzero_far(*v5, v10);
      if ( out_color_components > 0 )
      {
        v11 = 0i64;
        v12 = 0i64;
        v29 = 0i64;
        v28 = 0i64;
        v30 = (unsigned int)out_color_components;
        do
        {
          v13 = out_color_components;
          v14 = *v5;
          v15 = (unsigned __int8 *)(*(char **)((char *)v5 + v9) + v12);
          v16 = *(void (__fastcall **)(jpeg_decompress_struct *))((char *)&cquantize[3].finish_pass + v11);
          if ( LOBYTE(cquantize[4].finish_pass) )
          {
            v17 = -1i64;
            v18 = 0x7FFFFFFFFFFFFFFFi64;
            v15 += out_color_components * (output_width - 1);
            v14 += output_width - 1;
            v13 = -out_color_components;
            v16 += output_width + 1;
          }
          else
          {
            v17 = 1i64;
            v18 = 1i64;
          }
          v19 = 0;
          v20 = 0;
          v36 = 0;
          v32 = *(_QWORD *)((char *)cquantize[1].finish_pass + v11);
          v33 = *(_QWORD *)((char *)cquantize[1].start_pass + v11);
          if ( v39 )
          {
            v21 = v13;
            do
            {
              v22 = *v15;
              v15 += v21;
              v23 = sample_range_limit[v22 + (((__int16)v16[v18] + v19 + 8) >> 4)];
              v24 = *(unsigned __int8 *)(v23 + v32);
              *v14 += v24;
              v14 += v17;
              LODWORD(v23) = v23 - *(unsigned __int8 *)(v24 + v33);
              LOWORD(v22) = v20 + 3 * v23;
              v25 = v36;
              *v16 = v22;
              v36 = v23;
              v20 = 5 * v23 + v25;
              v16 += v17;
              v19 = 7 * v23;
              --output_width;
            }
            while ( output_width );
            v11 = v29;
            v12 = v28;
            cquantize = v35;
            out_color_components = v27;
          }
          output_width = v39;
          ++v12;
          v5 = (void **)v38;
          v11 += 8i64;
          v26 = v30-- == 1;
          *v16 = v20;
          v9 = v37;
          v28 = v12;
          v29 = v11;
        }
        while ( !v26 );
        v8 = v31;
      }
      ++v5;
      --v8;
      LOBYTE(cquantize[4].finish_pass) = LOBYTE(cquantize[4].finish_pass) == 0;
      v31 = v8;
      v38 = (unsigned __int8 **)v5;
      v10 = output_width;
    }
    while ( v8 );
  }
}

/*
==============
quantize_ord_dither
==============
*/
void quantize_ord_dither(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  unsigned __int64 output_width; 
  void **v5; 
  int out_color_components; 
  jpeg_color_quantizer *cquantize; 
  __int64 v8; 
  signed __int64 v9; 
  __int64 color_quantize_high; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned __int8 *v17; 
  char *v18; 
  char *v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  int v27; 
  signed __int64 v28; 
  unsigned int v29; 

  output_width = cinfo->output_width;
  v5 = (void **)output_buf;
  out_color_components = cinfo->out_color_components;
  cquantize = cinfo->cquantize;
  v8 = num_rows;
  v29 = cinfo->output_width;
  v24 = num_rows;
  v27 = out_color_components;
  if ( num_rows > 0 )
  {
    v9 = (char *)input_buf - (char *)output_buf;
    v28 = (char *)input_buf - (char *)output_buf;
    v26 = cinfo->output_width;
    do
    {
      j_jzero_far(*v5, output_width);
      color_quantize_high = SHIDWORD(cquantize[2].color_quantize);
      v23 = HIDWORD(cquantize[2].color_quantize);
      if ( out_color_components > 0 )
      {
        v11 = v29;
        v12 = color_quantize_high << 6;
        v13 = 0i64;
        v25 = color_quantize_high << 6;
        v14 = 0i64;
        v15 = (unsigned int)out_color_components;
        do
        {
          v16 = v11;
          v17 = (unsigned __int8 *)(*(char **)((char *)v5 + v9) + v14);
          v18 = (char *)*v5;
          v19 = *(char **)((char *)&cquantize[2].finish_pass + v13) + v12;
          v20 = *(_QWORD *)((char *)cquantize[1].finish_pass + v13);
          v21 = 0i64;
          if ( v11 )
          {
            do
            {
              v22 = *v17;
              ++v18;
              v17 += out_color_components;
              *(v18 - 1) += *(_BYTE *)(v22 + *(_DWORD *)&v19[4 * v21] + v20);
              v21 = ((_BYTE)v21 + 1) & 0xF;
              --v16;
            }
            while ( v16 );
            out_color_components = v27;
            v12 = v25;
            v11 = v29;
          }
          v9 = v28;
          ++v14;
          v13 += 8i64;
          --v15;
        }
        while ( v15 );
        LOBYTE(color_quantize_high) = v23;
        v8 = v24;
      }
      ++v5;
      --v8;
      HIDWORD(cquantize[2].color_quantize) = ((_BYTE)color_quantize_high + 1) & 0xF;
      output_width = v26;
      v24 = v8;
    }
    while ( v8 );
  }
}

/*
==============
start_pass_1_quant
==============
*/
void start_pass_1_quant(jpeg_decompress_struct *cinfo, __int64 is_pre_scan)
{
  jpeg_color_quantizer *cquantize; 
  J_DITHER_MODE dither_mode; 
  __int32 v5; 
  void **p_finish_pass; 
  int v7; 
  unsigned __int64 i; 
  void (__fastcall *v9)(jpeg_decompress_struct *, unsigned __int8 **, unsigned __int8 **, int); 
  void (__fastcall *v10)(jpeg_decompress_struct *, unsigned __int8 **, unsigned __int8 **, int); 

  cquantize = cinfo->cquantize;
  cinfo->colormap = (unsigned __int8 **)cquantize[1].start_pass;
  cinfo->actual_number_of_colors = (int)cquantize[1].color_quantize;
  dither_mode = cinfo->dither_mode;
  if ( dither_mode )
  {
    v5 = dither_mode - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        LOBYTE(cquantize[4].finish_pass) = 0;
        cquantize->color_quantize = quantize_fs_dither;
        p_finish_pass = (void **)&cquantize[3].finish_pass;
        if ( !*p_finish_pass )
          alloc_fs_workspace(cinfo);
        v7 = 0;
        for ( i = 2i64 * (cinfo->output_width + 2); v7 < cinfo->out_color_components; ++p_finish_pass )
        {
          j_jzero_far(*p_finish_pass, i);
          ++v7;
        }
      }
      else
      {
        cinfo->err->msg_code = 48;
        ((void (__fastcall *)(jpeg_decompress_struct *, __int64))cinfo->err->error_exit)(cinfo, is_pre_scan);
      }
    }
    else
    {
      v9 = quantize3_ord_dither;
      if ( cinfo->out_color_components != 3 )
        v9 = quantize_ord_dither;
      cquantize->color_quantize = v9;
      HIDWORD(cquantize[2].color_quantize) = 0;
      if ( !LOBYTE(cquantize[1].new_color_map) )
        create_colorindex(cinfo);
      if ( !cquantize[2].finish_pass )
        create_odither_tables(cinfo);
    }
  }
  else
  {
    v10 = color_quantize;
    if ( cinfo->out_color_components == 3 )
      v10 = color_quantize3;
    cquantize->color_quantize = v10;
  }
}

