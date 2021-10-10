/*
==============
fill_inverse_cmap
==============
*/
void fill_inverse_cmap(jpeg_decompress_struct *cinfo, int c0, int c1, int c2)
{
  int v4; 
  int v5; 
  int v6; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  int v8; 
  int v9; 
  int v10; 
  int nearby_colors; 
  unsigned __int8 *v13; 
  __int64 v14; 
  _QWORD *v15; 
  __int64 v16; 
  __int64 v17; 
  _WORD *v18; 
  __int16 v19; 
  unsigned __int8 bestcolor[128]; 
  unsigned __int8 colorlist[256]; 

  v4 = c2 >> 2;
  v5 = c1 >> 3;
  v6 = c0 >> 2;
  finish_pass = cinfo->cquantize[1].finish_pass;
  v8 = 32 * (c0 >> 2);
  v9 = 32 * (c1 >> 3);
  v10 = 32 * (c2 >> 2);
  nearby_colors = find_nearby_colors(cinfo, v8 + 4, v9 + 2, v10 + 4, colorlist);
  find_best_colors(cinfo, v8 + 4, v9 + 2, v10 + 4, nearby_colors, colorlist, bestcolor);
  v13 = bestcolor;
  v14 = 4i64;
  v15 = (_QWORD *)((char *)finish_pass + 32 * v6);
  do
  {
    v16 = 2 * (4 * v4 + 256i64 * v5);
    v17 = 8i64;
    do
    {
      v18 = (_WORD *)(v16 + *v15);
      v16 += 64i64;
      *v18 = *v13 + 1;
      v18[1] = v13[1] + 1;
      v18[2] = v13[2] + 1;
      v19 = v13[3];
      v13 += 4;
      v18[3] = v19 + 1;
      --v17;
    }
    while ( v17 );
    ++v15;
    --v14;
  }
  while ( v14 );
}

/*
==============
find_best_colors
==============
*/
void find_best_colors(jpeg_decompress_struct *cinfo, int minc0, int minc1, int minc2, int numcolors, unsigned __int8 *colorlist, unsigned __int8 *bestcolor)
{
  int v7; 
  unsigned __int8 *v8; 
  int v9; 
  jpeg_decompress_struct *v10; 
  __int64 v11; 
  unsigned __int8 **colormap; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned __int8 *v19; 
  int v20; 
  int v21; 
  int v22; 
  int *v23; 
  int v24; 
  int v25; 
  int v26; 
  int i; 
  int v28; 
  int v29; 
  int v30; 
  int v32; 
  __int64 v34; 
  _BYTE v36[512]; 

  v7 = minc2;
  v8 = bestcolor;
  v9 = minc0;
  v10 = cinfo;
  v32 = minc1;
  *(__m256i *)v36 = _ymm;
  *(__m256i *)&v36[32] = _ymm;
  *(__m256i *)&v36[64] = _ymm;
  *(__m256i *)&v36[96] = _ymm;
  *(__m256i *)&v36[128] = _ymm;
  *(__m256i *)&v36[160] = _ymm;
  *(__m256i *)&v36[192] = _ymm;
  *(__m256i *)&v36[224] = _ymm;
  *(__m256i *)&v36[256] = _ymm;
  *(__m256i *)&v36[288] = _ymm;
  *(__m256i *)&v36[320] = _ymm;
  *(__m256i *)&v36[352] = _ymm;
  *(__m256i *)&v36[384] = _ymm;
  *(__m256i *)&v36[416] = _ymm;
  *(__m256i *)&v36[448] = _ymm;
  *(__m256i *)&v36[480] = _ymm;
  if ( numcolors > 0 )
  {
    v11 = 0i64;
    v34 = 0i64;
    do
    {
      colormap = v10->colormap;
      v13 = 3;
      v14 = colorlist[v11];
      v15 = v9 - (*colormap)[v14];
      v16 = 3 * (minc1 - colormap[1][v14]);
      v17 = 8 * (3 * v16 + 18);
      v18 = 2 * (v7 - colormap[2][v14]);
      v19 = v8;
      v20 = v18 * v18;
      v21 = (v7 - colormap[2][v14]) << 6;
      v22 = v15 * v15 + v16 * v16 + v20;
      v23 = (int *)v36;
      v24 = 16 * (v15 + 4);
      do
      {
        v25 = v22;
        v26 = v17;
        for ( i = 7; i >= 0; --i )
        {
          if ( v25 < *v23 )
          {
            *v23 = v25;
            *v19 = v14;
          }
          v28 = v25 + v21 + 256;
          if ( v28 < v23[1] )
          {
            v23[1] = v28;
            v19[1] = v14;
          }
          v29 = v28 + v21 + 768;
          if ( v29 < v23[2] )
          {
            v23[2] = v29;
            v19[2] = v14;
          }
          v30 = v29 + v21 + 1280;
          if ( v30 < v23[3] )
          {
            v23[3] = v30;
            v19[3] = v14;
          }
          v25 += v26;
          v23 += 4;
          v26 += 288;
          v19 += 4;
        }
        v22 += v24;
        v24 += 128;
        --v13;
      }
      while ( v13 >= 0 );
      v11 = v34 + 1;
      v7 = minc2;
      minc1 = v32;
      v9 = minc0;
      v10 = cinfo;
      v8 = bestcolor;
      v34 = v11;
    }
    while ( v11 < numcolors );
  }
}

/*
==============
find_nearby_colors
==============
*/
__int64 find_nearby_colors(jpeg_decompress_struct *cinfo, int minc0, int minc1, int minc2, unsigned __int8 *colorlist)
{
  unsigned int v5; 
  int actual_number_of_colors; 
  int v9; 
  int v10; 
  int v12; 
  unsigned __int8 *v13; 
  int v14; 
  int v15; 
  unsigned __int8 **colormap; 
  unsigned __int8 *v17; 
  signed __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  bool v28; 
  int v29; 
  char *v30; 
  int v32; 
  int v33; 
  int v34; 
  char *v35; 
  __int64 v36; 
  signed __int64 v37; 
  char v38[1024]; 

  v5 = 0;
  actual_number_of_colors = cinfo->actual_number_of_colors;
  v9 = 0x7FFFFFFF;
  v10 = minc2 + 24;
  v12 = minc0 + 24;
  v13 = colorlist;
  v14 = minc1 + 28;
  v15 = (minc0 + 24 + minc0) >> 1;
  v34 = actual_number_of_colors;
  v33 = v15;
  v32 = (minc2 + 24 + minc2) >> 1;
  if ( actual_number_of_colors > 0 )
  {
    colormap = cinfo->colormap;
    v35 = v38;
    v36 = (unsigned int)cinfo->actual_number_of_colors;
    v17 = colormap[1];
    v18 = *colormap - v17;
    v37 = colormap[2] - v17;
    while ( 1 )
    {
      v19 = v17[v18];
      if ( v19 < minc0 )
      {
        v20 = (v19 - minc0) * (v19 - minc0);
        v21 = v19 - v12;
        goto LABEL_8;
      }
      if ( v19 > v12 )
        break;
      v20 = 0;
      if ( v19 > v15 )
        goto LABEL_7;
      v21 = v19 - v12;
LABEL_8:
      v22 = *v17;
      v23 = v21 * v21;
      if ( v22 < minc1 )
      {
        v20 += 3 * (v22 - minc1) * 3 * (v22 - minc1);
        v24 = v22 - v14;
        goto LABEL_15;
      }
      if ( v22 > v14 )
      {
        v20 += 3 * (v22 - v14) * 3 * (v22 - v14);
LABEL_14:
        v24 = v22 - minc1;
        goto LABEL_15;
      }
      if ( v22 > (minc1 + 28 + minc1) >> 1 )
        goto LABEL_14;
      v24 = v22 - v14;
LABEL_15:
      v25 = v17[v37];
      if ( v25 >= minc2 )
      {
        if ( v25 <= v10 )
        {
          if ( v25 <= v32 )
          {
            v26 = v25 - v10;
            goto LABEL_22;
          }
        }
        else
        {
          v20 += 2 * (v25 - v10) * 2 * (v25 - v10);
        }
        v26 = v25 - minc2;
      }
      else
      {
        v20 += 2 * (v25 - minc2) * 2 * (v25 - minc2);
        v26 = v25 - v10;
      }
LABEL_22:
      v27 = 3 * v24 * 3 * v24 + v23 + 2 * v26 * 2 * v26;
      v15 = v33;
      if ( v27 >= v9 )
        v27 = v9;
      ++v17;
      *(_DWORD *)v35 = v20;
      v9 = v27;
      v28 = v36-- == 1;
      v35 += 4;
      if ( v28 )
      {
        v13 = colorlist;
        actual_number_of_colors = v34;
        goto LABEL_26;
      }
    }
    v20 = (v19 - v12) * (v19 - v12);
LABEL_7:
    v21 = v19 - minc0;
    goto LABEL_8;
  }
LABEL_26:
  v29 = 0;
  if ( actual_number_of_colors > 0 )
  {
    v30 = v38;
    do
    {
      if ( *(_DWORD *)v30 <= v9 )
      {
        ++v5;
        *v13++ = v29;
      }
      ++v29;
      v30 += 4;
    }
    while ( v29 < actual_number_of_colors );
  }
  return v5;
}

/*
==============
finish_pass1
==============
*/
void finish_pass1(jpeg_decompress_struct *cinfo)
{
  jpeg_color_quantizer *cquantize; 

  cquantize = cinfo->cquantize;
  cinfo->colormap = (unsigned __int8 **)cquantize[1].start_pass;
  select_colors(cinfo, (int)cquantize[1].color_quantize);
  LOBYTE(cquantize[1].new_color_map) = 1;
}

/*
==============
finish_pass2
==============
*/
void finish_pass2(jpeg_decompress_struct *cinfo)
{
  ;
}

/*
==============
init_error_limit
==============
*/
void init_error_limit(jpeg_decompress_struct *cinfo)
{
  jpeg_color_quantizer *cquantize; 
  _DWORD *v2; 
  int v3; 
  int *v4; 
  _DWORD *v5; 
  __int64 v6; 
  _DWORD *v7; 

  cquantize = cinfo->cquantize;
  v2 = (_DWORD *)(cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 2044i64) + 1020);
  v3 = 16;
  cquantize[2].finish_pass = (void (__fastcall *)(jpeg_decompress_struct *))v2;
  v4 = v2 + 16;
  *v2 = 0;
  v5 = v2 - 16;
  v2[1] = 1;
  LODWORD(v6) = 16;
  *((_QWORD *)v2 - 1) = -2i64;
  v2[2] = 2;
  v2[3] = 3;
  *(v2 - 3) = -3;
  v2[4] = 4;
  *(v2 - 4) = -4;
  v2[5] = 5;
  *(v2 - 5) = -5;
  v2[6] = 6;
  *(v2 - 6) = -6;
  v2[7] = 7;
  *(v2 - 7) = -7;
  v2[8] = 8;
  *(v2 - 8) = -8;
  v2[9] = 9;
  *(v2 - 9) = -9;
  v2[10] = 10;
  *(v2 - 10) = -10;
  v2[11] = 11;
  *(v2 - 11) = -11;
  v2[12] = 12;
  *(v2 - 12) = -12;
  v2[13] = 13;
  *(v2 - 13) = -13;
  v2[14] = 14;
  *(v2 - 14) = -14;
  v2[15] = 15;
  *(v2 - 15) = -15;
  do
  {
    *v4++ = v3;
    --v5;
    LODWORD(v6) = v6 + 1;
    v5[1] = -v3;
    v3 += (v6 & 1) == 0;
  }
  while ( (int)v6 < 48 );
  v6 = (int)v6;
  if ( (int)v6 <= 255i64 )
  {
    v7 = &v2[-(int)v6];
    do
    {
      v2[v6++] = v3;
      *v7-- = -v3;
    }
    while ( v6 <= 255 );
  }
}

/*
==============
jinit_2pass_quantizer
==============
*/
void jinit_2pass_quantizer(jpeg_decompress_struct *cinfo)
{
  __int64 v2; 
  __int64 v3; 
  __int64 i; 
  int desired_number_of_colors; 

  v2 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 88i64);
  cinfo->cquantize = (jpeg_color_quantizer *)v2;
  v3 = 0i64;
  *(_QWORD *)v2 = start_pass_2_quant;
  *(_QWORD *)(v2 + 24) = new_color_map_2_quant;
  *(_QWORD *)(v2 + 64) = 0i64;
  *(_QWORD *)(v2 + 80) = 0i64;
  if ( cinfo->out_color_components != 3 )
  {
    cinfo->err->msg_code = 47;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  *(_QWORD *)(v2 + 48) = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
  for ( i = 0i64; i < 256; i += 8i64 )
    *(_QWORD *)(i + *(_QWORD *)(v2 + 48)) = cinfo->mem->alloc_large(cinfo, 1i64, 4096i64);
  *(_BYTE *)(v2 + 56) = 1;
  if ( cinfo->enable_2pass_quant )
  {
    desired_number_of_colors = cinfo->desired_number_of_colors;
    if ( desired_number_of_colors < 8 )
    {
      cinfo->err->msg_code = 56;
      cinfo->err->msg_parm.i[0] = 8;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    if ( desired_number_of_colors > 256 )
    {
      cinfo->err->msg_code = 57;
      cinfo->err->msg_parm.i[0] = 256;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    v3 = ((__int64 (__fastcall *)(jpeg_decompress_struct *, __int64, _QWORD))cinfo->mem->alloc_sarray)(cinfo, 1i64, (unsigned int)desired_number_of_colors);
    *(_DWORD *)(v2 + 40) = desired_number_of_colors;
  }
  *(_QWORD *)(v2 + 32) = v3;
  if ( cinfo->dither_mode )
  {
    cinfo->dither_mode = JDITHER_FS;
    *(_QWORD *)(v2 + 64) = cinfo->mem->alloc_large(cinfo, 1i64, 6i64 * (cinfo->output_width + 2));
    init_error_limit(cinfo);
  }
}

/*
==============
median_cut
==============
*/
__int64 median_cut(jpeg_decompress_struct *cinfo, box *boxlist, int numboxes, int desired_colors)
{
  int v4; 
  box *v5; 
  int v6; 
  int *p_c1max; 
  box *v8; 
  int v9; 
  int *p_volume; 
  __int64 v11; 
  int volume; 
  box *v13; 
  __int64 v14; 
  int v15; 
  box *v16; 
  int c1min; 
  int c2min; 
  int c0min; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v30; 

  v30 = desired_colors;
  v4 = numboxes;
  v5 = boxlist;
  if ( numboxes >= desired_colors )
    return (unsigned int)numboxes;
  v6 = 2 * numboxes;
  p_c1max = &boxlist[numboxes].c1max;
  do
  {
    v8 = NULL;
    if ( v6 > desired_colors )
    {
      volume = 0;
      v13 = v5;
      if ( v4 > 0 )
      {
        v14 = (unsigned int)v4;
        do
        {
          v15 = volume;
          v16 = v13;
          volume = v13->volume;
          if ( volume <= v15 )
            v16 = v8;
          ++v13;
          v8 = v16;
          if ( volume <= v15 )
            volume = v15;
          --v14;
        }
        while ( v14 );
      }
    }
    else
    {
      v9 = 0;
      if ( v4 > 0 )
      {
        p_volume = &v5->volume;
        v11 = (unsigned int)v4;
        do
        {
          if ( p_volume[1] > v9 && *p_volume > 0 )
          {
            v8 = (box *)(p_volume - 6);
            v9 = p_volume[1];
          }
          p_volume += 8;
          --v11;
        }
        while ( v11 );
      }
    }
    if ( !v8 )
      break;
    *(p_c1max - 2) = v8->c0max;
    *p_c1max = v8->c1max;
    p_c1max[2] = v8->c2max;
    *(p_c1max - 3) = v8->c0min;
    *(p_c1max - 1) = v8->c1min;
    p_c1max[1] = v8->c2min;
    c1min = v8->c1min;
    c2min = v8->c2min;
    c0min = v8->c0min;
    v20 = 12 * (v8->c1max - c1min);
    v21 = 16 * (v8->c2max - c2min);
    v22 = (v21 > v20) + 1;
    if ( v21 <= v20 )
      v21 = 12 * (v8->c1max - c1min);
    if ( 8 * (v8->c0max - c0min) > v21 )
      v22 = 0;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          v24 = (c2min + v8->c2max) / 2;
          v8->c2max = v24;
          p_c1max[1] = v24 + 1;
        }
      }
      else
      {
        v25 = (c1min + v8->c1max) / 2;
        v8->c1max = v25;
        *(p_c1max - 1) = v25 + 1;
      }
    }
    else
    {
      v26 = (c0min + v8->c0max) / 2;
      v8->c0max = v26;
      *(p_c1max - 3) = v26 + 1;
    }
    update_box(cinfo, v8);
    update_box(cinfo, (box *)(p_c1max - 3));
    desired_colors = v30;
    ++v4;
    v5 = boxlist;
    v6 += 2;
    p_c1max += 8;
  }
  while ( v4 < v30 );
  return (unsigned int)v4;
}

/*
==============
new_color_map_2_quant
==============
*/
void new_color_map_2_quant(jpeg_decompress_struct *cinfo)
{
  LOBYTE(cinfo->cquantize[1].new_color_map) = 1;
}

/*
==============
pass2_fs_dither
==============
*/
void pass2_fs_dither(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  unsigned int output_width; 
  unsigned __int8 **v5; 
  jpeg_color_quantizer *cquantize; 
  unsigned __int8 **colormap; 
  char *v8; 
  __int16 v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  void (__fastcall *start_pass)(jpeg_decompress_struct *, unsigned __int8); 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int16 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int16 v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  bool v29; 
  unsigned __int16 *v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34; 
  int v35; 
  __int16 v36; 
  __int16 v37; 
  int v38; 
  __int16 v39; 
  int v40; 
  __int16 v41; 
  __int16 v42; 
  __int16 v43; 
  __int16 v44; 
  __int16 v45; 
  unsigned int v46; 
  unsigned int v47; 
  void (__fastcall *v48)(jpeg_decompress_struct *); 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  unsigned __int8 *sample_range_limit; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  unsigned __int16 *v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v58; 
  unsigned __int8 *v59; 
  jpeg_color_quantizer *v60; 
  char *v62; 
  unsigned __int8 **v63; 
  __int16 v64; 

  v63 = output_buf;
  output_width = cinfo->output_width;
  v5 = output_buf;
  cquantize = cinfo->cquantize;
  v60 = cquantize;
  v47 = output_width;
  finish_pass = cquantize[1].finish_pass;
  sample_range_limit = cinfo->sample_range_limit;
  v48 = cquantize[2].finish_pass;
  colormap = cinfo->colormap;
  v57 = *colormap;
  v59 = colormap[2];
  v53 = num_rows;
  v58 = colormap[1];
  if ( num_rows > 0 )
  {
    v8 = (char *)((char *)input_buf - (char *)v5);
    v9 = 0;
    v62 = v8;
    do
    {
      v10 = *(unsigned __int8 **)((char *)v5 + (_QWORD)v8);
      v11 = *v5;
      start_pass = cquantize[2].start_pass;
      if ( LOBYTE(cquantize[2].color_quantize) )
      {
        v49 = -1i64;
        v10 += 3 * output_width - 3;
        v11 += output_width - 1;
        start_pass = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8))((char *)start_pass + 6 * output_width + 6);
        v13 = -6i64;
        v14 = 0;
        v15 = -3i64;
        v16 = -4i64;
        v17 = -2i64;
      }
      else
      {
        v13 = 6i64;
        v49 = 1i64;
        v14 = 1;
        v16 = 8i64;
        v17 = 10i64;
        v15 = 3i64;
      }
      LOBYTE(cquantize[2].color_quantize) = v14;
      v18 = 0;
      v44 = 0;
      v19 = 0;
      v52 = v17;
      v20 = 0;
      v51 = v16;
      v21 = 0;
      v50 = v13;
      v22 = 0;
      v45 = 0;
      v43 = 0;
      v41 = 0;
      v42 = 0;
      v64 = 0;
      v46 = output_width;
      if ( output_width )
      {
        do
        {
          v23 = sample_range_limit[*((_DWORD *)v48 + ((v21 + *(__int16 *)((char *)start_pass + v13) + 8i64) >> 4)) + *v10];
          v24 = v20 + *(__int16 *)((char *)start_pass + v16);
          v25 = sample_range_limit[*((_DWORD *)v48 + ((v24 + 8i64) >> 4)) + v10[1]];
          v26 = sample_range_limit[*((_DWORD *)v48 + ((v19 + *(__int16 *)((char *)start_pass + v17) + 8i64) >> 4)) + v10[2]];
          v27 = (v26 >> 3) + 32 * ((unsigned __int64)sample_range_limit[*((_DWORD *)v48 + ((v24 + 8i64) >> 4)) + v10[1]] >> 2);
          v28 = *(_QWORD *)((char *)finish_pass + (v23 & 0xFFFFFFF8));
          v29 = *(_WORD *)(v28 + 2 * v27) == 0;
          v30 = (unsigned __int16 *)(v28 + 2 * v27);
          v56 = v30;
          if ( v29 )
          {
            fill_inverse_cmap(cinfo, v23 >> 3, v25 >> 2, (unsigned int)v26 >> 3);
            v22 = v42;
            v9 = v64;
            v30 = v56;
          }
          v31 = *v30;
          v10 += v15;
          *v11 = v31 - 1;
          v11 += v49;
          v32 = v23 - v57[v31 - 1];
          v33 = v25 - v58[v31 - 1];
          v34 = 3 * v33;
          v35 = v26 - v59[v31 - 1];
          *(_WORD *)start_pass = v9 + 3 * v32;
          v9 = 5 * v32 + v41;
          v36 = v22 + 3 * v33;
          v64 = v9;
          v37 = v43;
          *((_WORD *)start_pass + 1) = v36;
          v21 = 7 * v32;
          LODWORD(v31) = 2 * v33;
          v43 = v33;
          v16 = v51;
          v38 = v31 + v34;
          v41 = v32;
          v22 = v38 + v37;
          v20 = v31 + v38;
          *((_WORD *)start_pass + 2) = v44 + 3 * v35;
          v39 = v45;
          LODWORD(v31) = 2 * v35;
          v40 = 5 * v35;
          v45 = v35;
          v17 = v52;
          start_pass = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8))((char *)start_pass + 2 * v15);
          v18 = v40 + v39;
          v42 = v22;
          v19 = v31 + v40;
          v44 = v18;
          v29 = v46-- == 1;
          v13 = v50;
        }
        while ( !v29 );
        v5 = v63;
        output_width = v47;
      }
      cquantize = v60;
      ++v5;
      v29 = v53-- == 1;
      v8 = v62;
      *(_WORD *)start_pass = v9;
      v9 = 0;
      *((_WORD *)start_pass + 1) = v22;
      *((_WORD *)start_pass + 2) = v18;
      v63 = v5;
    }
    while ( !v29 );
  }
}

/*
==============
pass2_no_dither
==============
*/
void pass2_no_dither(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  jpeg_decompress_struct *v4; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  unsigned int output_width; 
  __int64 v8; 
  signed __int64 v9; 
  unsigned __int8 *v10; 
  unsigned int v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int16 v19; 
  int v20; 
  int v21; 
  int v22; 
  void (__fastcall *v23)(jpeg_decompress_struct *); 
  int nearby_colors; 
  __int64 v25; 
  unsigned __int8 *v26; 
  _QWORD *v27; 
  __int64 v28; 
  __int64 v29; 
  _WORD *v30; 
  __int16 v31; 
  bool v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned __int8 *v36; 
  void (__fastcall *v37)(jpeg_decompress_struct *); 
  unsigned __int8 **v38; 
  __int64 v39; 
  __int16 *v40; 
  signed __int64 v41; 
  unsigned __int8 bestcolor[128]; 
  unsigned __int8 colorlist[256]; 

  v4 = cinfo;
  v38 = output_buf;
  finish_pass = cinfo->cquantize[1].finish_pass;
  output_width = v4->output_width;
  v8 = num_rows;
  v39 = num_rows;
  v37 = finish_pass;
  v34 = output_width;
  if ( num_rows > 0 )
  {
    v9 = (char *)input_buf - (char *)output_buf;
    v41 = v9;
    do
    {
      v10 = *(unsigned __int8 **)((char *)output_buf + v9);
      v11 = output_width;
      v12 = *output_buf;
      v36 = v12;
      v33 = output_width;
      if ( output_width )
      {
        do
        {
          v13 = v10[1];
          v14 = *v10;
          v15 = v10[2];
          v10 += 3;
          v16 = v14 >> 3;
          v17 = v15 >> 3;
          v18 = v13 >> 2;
          v40 = (__int16 *)(*((_QWORD *)finish_pass + v16) + 2 * (v17 + 32 * v18));
          v19 = *v40;
          if ( !*v40 )
          {
            v20 = (int)v16 >> 2;
            v21 = (int)v18 >> 3;
            v22 = (int)v17 >> 2;
            v23 = v4->cquantize[1].finish_pass;
            nearby_colors = find_nearby_colors(v4, 32 * v20 + 4, 32 * v21 + 2, 32 * v22 + 4, colorlist);
            find_best_colors(cinfo, 32 * v20 + 4, 32 * v21 + 2, 32 * v22 + 4, nearby_colors, colorlist, bestcolor);
            v25 = 4i64;
            v26 = bestcolor;
            v27 = (_QWORD *)((char *)v23 + 8 * (unsigned int)(4 * v20));
            do
            {
              v28 = 2 * ((unsigned int)(4 * v22) + 32i64 * (unsigned int)(8 * v21));
              v29 = 8i64;
              do
              {
                v30 = (_WORD *)(v28 + *v27);
                v28 += 64i64;
                *v30 = *v26 + 1;
                v30[1] = v26[1] + 1;
                v30[2] = v26[2] + 1;
                v31 = v26[3];
                v26 += 4;
                v30[3] = v31 + 1;
                --v29;
              }
              while ( v29 );
              ++v27;
              --v25;
            }
            while ( v25 );
            v12 = v36;
            v11 = v33;
            v4 = cinfo;
            LOBYTE(v19) = *(_BYTE *)v40;
          }
          finish_pass = v37;
          *v12++ = v19 - 1;
          v32 = v11-- == 1;
          v36 = v12;
          v33 = v11;
        }
        while ( !v32 );
        v8 = v39;
        output_width = v34;
        v9 = v41;
      }
      output_buf = v38 + 1;
      --v8;
      ++v38;
      v39 = v8;
    }
    while ( v8 );
  }
}

/*
==============
prescan_quantize
==============
*/
void prescan_quantize(jpeg_decompress_struct *cinfo, unsigned __int8 **input_buf, unsigned __int8 **output_buf, int num_rows)
{
  unsigned int output_width; 
  __int64 v6; 
  __int64 v7; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  unsigned __int8 *v9; 
  unsigned int i; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int16 *v13; 
  __int16 v14; 

  if ( num_rows > 0 )
  {
    output_width = cinfo->output_width;
    v6 = num_rows;
    v7 = 0i64;
    finish_pass = cinfo->cquantize[1].finish_pass;
    do
    {
      v9 = input_buf[v7];
      for ( i = output_width; i; --i )
      {
        v11 = v9[1];
        v12 = v9[2];
        v9 += 3;
        v13 = (__int16 *)(*((_QWORD *)finish_pass + ((unsigned __int64)*(v9 - 3) >> 3)) + 2 * ((v12 >> 3) + 32 * (v11 >> 2)));
        v14 = *v13 + 1;
        if ( *v13 == -1 )
          v14 = *v13;
        *v13 = v14;
      }
      ++v7;
    }
    while ( v7 < v6 );
  }
}

/*
==============
select_colors
==============
*/
void select_colors(jpeg_decompress_struct *cinfo, int desired_colors)
{
  jpeg_decompress_struct *v2; 
  __int64 v4; 
  box *v5; 
  _DWORD *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  __int64 v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  unsigned __int16 *v25; 
  unsigned __int16 *v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  jpeg_error_mgr *err; 
  __int64 v31; 
  __int64 v32; 
  _DWORD *v33; 
  __int64 v34; 
  void (__fastcall *v35)(jpeg_decompress_struct *); 
  __int64 v36; 
  int v38; 
  int v39; 
  int v40; 

  v2 = cinfo;
  v4 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 32i64 * desired_colors);
  *(_DWORD *)(v4 + 12) = 63;
  v5 = (box *)v4;
  v6 = (_DWORD *)(v4 + 12);
  *(_DWORD *)v4 = 0;
  v33 = (_DWORD *)(v4 + 12);
  *(_QWORD *)(v4 + 4) = 31i64;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 31;
  update_box(v2, (box *)v4);
  v7 = median_cut(v2, v5, 1, desired_colors);
  v40 = v7;
  v36 = v7;
  if ( v7 > 0 )
  {
    v8 = 0i64;
    v32 = 0i64;
    do
    {
      v9 = (int)*(v6 - 3);
      v10 = 0;
      v11 = 0;
      v12 = *(v6 - 1);
      v13 = 0;
      v14 = *v6;
      v15 = 0;
      v16 = (int)v6[1];
      v17 = v9;
      finish_pass = v2->cquantize[1].finish_pass;
      v19 = (int)*(v6 - 2);
      v20 = v6[2];
      v35 = finish_pass;
      v38 = v12;
      v39 = *v6;
      v31 = v9;
      v34 = v19;
      if ( v9 <= v19 )
      {
        v21 = 8 * v9 + 4;
        do
        {
          if ( v12 <= v14 )
          {
            v22 = *((_QWORD *)finish_pass + v17);
            v23 = 4 * v12 + 2;
            v24 = (unsigned int)(v14 - v12 + 1);
            v25 = (unsigned __int16 *)(v22 + 2 * (v16 + 32i64 * v12));
            do
            {
              v26 = v25;
              if ( (int)v16 <= v20 )
              {
                v27 = 8 * v16 + 4;
                v28 = (unsigned int)(v20 - v16 + 1);
                do
                {
                  v29 = *v26++;
                  if ( v29 )
                  {
                    v10 += v29;
                    v11 += v29 * v21;
                    v13 += v29 * v23;
                    v15 += v29 * v27;
                  }
                  v27 += 8;
                  --v28;
                }
                while ( v28 );
              }
              v25 += 32;
              v23 += 4;
              --v24;
            }
            while ( v24 );
            v17 = v31;
            v12 = v38;
            v14 = v39;
            v19 = v34;
            finish_pass = v35;
          }
          ++v17;
          v21 += 8;
          v31 = v17;
        }
        while ( v17 <= v19 );
        v6 = v33;
        v2 = cinfo;
        v8 = v32;
      }
      v6 += 8;
      v33 = v6;
      (*v2->colormap)[v8] = ((v10 >> 1) + v11) / v10;
      *(_BYTE *)(v8 + *((_QWORD *)v2->colormap + 1)) = ((v10 >> 1) + v13) / v10;
      *(_BYTE *)(v8 + *((_QWORD *)v2->colormap + 2)) = ((v10 >> 1) + v15) / v10;
      v32 = ++v8;
    }
    while ( v8 < v36 );
    v7 = v40;
  }
  err = v2->err;
  v2->actual_number_of_colors = v7;
  err->msg_code = 96;
  v2->err->msg_parm.i[0] = v7;
  v2->err->emit_message((jpeg_common_struct *)v2, 1);
}

/*
==============
start_pass_2_quant
==============
*/
void start_pass_2_quant(jpeg_decompress_struct *cinfo, unsigned __int8 is_pre_scan)
{
  jpeg_color_quantizer *cquantize; 
  J_DITHER_MODE dither_mode; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  void (__fastcall *v6)(jpeg_decompress_struct *, unsigned __int8 **, unsigned __int8 **, int); 
  int actual_number_of_colors; 
  void (__fastcall *start_pass)(jpeg_decompress_struct *, unsigned __int8); 
  unsigned __int64 v9; 
  void (__fastcall *v10)(jpeg_decompress_struct *, unsigned __int8); 
  __int64 i; 

  cquantize = cinfo->cquantize;
  dither_mode = cinfo->dither_mode;
  finish_pass = cquantize[1].finish_pass;
  if ( dither_mode )
  {
    dither_mode = JDITHER_FS;
    cinfo->dither_mode = JDITHER_FS;
  }
  if ( is_pre_scan )
  {
    LOBYTE(cquantize[1].new_color_map) = 1;
    cquantize->color_quantize = prescan_quantize;
    cquantize->finish_pass = finish_pass1;
  }
  else
  {
    v6 = pass2_fs_dither;
    if ( dither_mode != JDITHER_FS )
      v6 = pass2_no_dither;
    cquantize->color_quantize = v6;
    cquantize->finish_pass = finish_pass2;
    actual_number_of_colors = cinfo->actual_number_of_colors;
    if ( actual_number_of_colors < 1 )
    {
      cinfo->err->msg_code = 56;
      cinfo->err->msg_parm.i[0] = 1;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    if ( actual_number_of_colors > 256 )
    {
      cinfo->err->msg_code = 57;
      cinfo->err->msg_parm.i[0] = 256;
      cinfo->err->error_exit((jpeg_common_struct *)cinfo);
    }
    if ( cinfo->dither_mode == JDITHER_FS )
    {
      start_pass = cquantize[2].start_pass;
      v9 = 6i64 * (cinfo->output_width + 2);
      if ( !start_pass )
      {
        v10 = (void (__fastcall *)(jpeg_decompress_struct *, unsigned __int8))cinfo->mem->alloc_large(cinfo, 1i64, v9);
        cquantize[2].start_pass = v10;
        start_pass = v10;
      }
      j_jzero_far(start_pass, v9);
      if ( !cquantize[2].finish_pass )
        init_error_limit(cinfo);
      LOBYTE(cquantize[2].color_quantize) = 0;
    }
  }
  if ( LOBYTE(cquantize[1].new_color_map) )
  {
    for ( i = 0i64; i < 32; ++i )
      j_jzero_far(*((void **)finish_pass + i), 0x1000ui64);
    LOBYTE(cquantize[1].new_color_map) = 0;
  }
}

/*
==============
update_box
==============
*/
void update_box(jpeg_decompress_struct *cinfo, box *boxp)
{
  box *v2; 
  __int64 c0max; 
  int c1min; 
  int c1max; 
  void (__fastcall *finish_pass)(jpeg_decompress_struct *); 
  __int64 c0min; 
  __int64 c2min; 
  int c2max; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  _WORD *v14; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  _WORD *v21; 
  int v23; 
  __int64 v24; 
  int v25; 
  _WORD *v26; 
  int v28; 
  __int64 v29; 
  int v30; 
  _WORD *v31; 
  box *v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  _WORD *v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  _WORD *v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  _WORD *v45; 
  __int64 v46; 
  bool v47; 
  int v48; 
  int v50; 

  v2 = boxp;
  c0max = boxp->c0max;
  c1min = boxp->c1min;
  c1max = boxp->c1max;
  finish_pass = cinfo->cquantize[1].finish_pass;
  c0min = boxp->c0min;
  c2min = boxp->c2min;
  c2max = boxp->c2max;
  v50 = c0min;
  if ( (int)c0max > (int)c0min )
  {
    v10 = boxp->c0min;
    v11 = boxp->c0min;
    if ( c0min > c0max )
    {
LABEL_10:
      v2 = boxp;
    }
    else
    {
      while ( 1 )
      {
        v12 = c1min;
        if ( c1min <= c1max )
          break;
LABEL_8:
        ++v10;
        if ( ++v11 > c0max )
        {
          LODWORD(c0min) = v50;
          goto LABEL_10;
        }
      }
      while ( 1 )
      {
        v13 = c2min;
        v14 = (_WORD *)(*((_QWORD *)finish_pass + v11) + 2 * (c2min + 32i64 * v12));
        if ( (int)c2min <= c2max )
          break;
LABEL_7:
        if ( ++v12 > c1max )
          goto LABEL_8;
      }
      while ( !*v14++ )
      {
        if ( ++v13 > c2max )
          goto LABEL_7;
      }
      v2 = boxp;
      LODWORD(c0min) = v10;
      v50 = v10;
      boxp->c0min = v10;
    }
  }
  v16 = (int)c0min;
  if ( (int)c0max > (int)c0min )
  {
    v17 = (int)c0max;
    v18 = c0max;
    if ( (int)c0max >= (__int64)(int)c0min )
    {
      while ( 1 )
      {
        v19 = c1min;
        if ( c1min <= c1max )
          break;
LABEL_18:
        --v18;
        if ( --v17 < v16 )
          goto $have_c0max;
      }
      while ( 1 )
      {
        v20 = c2min;
        v21 = (_WORD *)(*((_QWORD *)finish_pass + v17) + 2 * (c2min + 32i64 * v19));
        if ( (int)c2min <= c2max )
          break;
LABEL_17:
        if ( ++v19 > c1max )
          goto LABEL_18;
      }
      while ( !*v21++ )
      {
        if ( ++v20 > c2max )
          goto LABEL_17;
      }
      LODWORD(c0max) = v18;
      v2->c0max = v18;
    }
  }
$have_c0max:
  if ( c1max <= c1min )
    goto LABEL_39;
  v23 = c1min;
  while ( 1 )
  {
    v24 = v16;
    if ( v16 <= (int)c0max )
      break;
LABEL_26:
    if ( ++v23 > c1max )
      goto $have_c1min;
  }
  while ( 1 )
  {
    v25 = c2min;
    v26 = (_WORD *)(2 * (c2min + 32i64 * v23) + *((_QWORD *)finish_pass + v24));
    if ( (int)c2min <= c2max )
      break;
LABEL_25:
    if ( ++v24 > (int)c0max )
      goto LABEL_26;
  }
  while ( !*v26++ )
  {
    if ( ++v25 > c2max )
      goto LABEL_25;
  }
  c1min = v23;
  boxp->c1min = v23;
$have_c1min:
  if ( c1max <= c1min )
  {
LABEL_39:
    v33 = boxp;
  }
  else
  {
    v28 = c1max;
    while ( 1 )
    {
      v29 = v16;
      if ( v16 <= (int)c0max )
        break;
LABEL_38:
      if ( --v28 < c1min )
        goto LABEL_39;
    }
    while ( 1 )
    {
      v30 = c2min;
      v31 = (_WORD *)(2 * (c2min + 32i64 * v28) + *((_QWORD *)finish_pass + v29));
      if ( (int)c2min <= c2max )
        break;
LABEL_37:
      if ( ++v29 > (int)c0max )
        goto LABEL_38;
    }
    while ( !*v31++ )
    {
      if ( ++v30 > c2max )
        goto LABEL_37;
    }
    v33 = boxp;
    c1max = v28;
    boxp->c1max = v28;
  }
  if ( c2max > (int)c2min )
  {
    v34 = c2min;
    while ( 1 )
    {
      v35 = v16;
      if ( v16 <= (int)c0max )
        break;
LABEL_47:
      if ( ++v34 > c2max )
        goto $have_c2min;
    }
    while ( 1 )
    {
      v36 = c1min;
      v37 = (_WORD *)(2 * (v34 + 32i64 * c1min) + *((_QWORD *)finish_pass + v35));
      if ( c1min <= c1max )
        break;
LABEL_46:
      if ( ++v35 > (int)c0max )
        goto LABEL_47;
    }
    while ( !*v37 )
    {
      ++v36;
      v37 += 32;
      if ( v36 > c1max )
        goto LABEL_46;
    }
    LODWORD(c2min) = v34;
    v33->c2min = v34;
$have_c2min:
    if ( c2max > (int)c2min )
    {
      v38 = c2max;
      while ( 1 )
      {
        v39 = v16;
        if ( v16 <= (int)c0max )
          break;
LABEL_58:
        if ( --v38 < (int)c2min )
          goto $have_c2max;
      }
      while ( 1 )
      {
        v40 = c1min;
        v41 = (_WORD *)(2 * (v38 + 32i64 * c1min) + *((_QWORD *)finish_pass + v39));
        if ( c1min <= c1max )
          break;
LABEL_57:
        if ( ++v39 > (int)c0max )
          goto LABEL_58;
      }
      while ( !*v41 )
      {
        ++v40;
        v41 += 32;
        if ( v40 > c1max )
          goto LABEL_57;
      }
      c2max = v38;
      v33->c2max = v38;
    }
  }
$have_c2max:
  v42 = 0;
  v33->volume = 8 * (c0max - v50) * 8 * (c0max - v50) + 12 * (c1max - c1min) * 12 * (c1max - c1min) + 16 * (c2max - c2min) * 16 * (c2max - c2min);
  if ( v16 > (int)c0max )
  {
    v33->colorcount = 0;
  }
  else
  {
    do
    {
      if ( c1min <= c1max )
      {
        v43 = (unsigned int)(c1max - c1min + 1);
        v44 = *((_QWORD *)finish_pass + v16) + 2 * ((int)c2min + 32i64 * c1min);
        do
        {
          v45 = (_WORD *)v44;
          if ( (int)c2min <= c2max )
          {
            v46 = (unsigned int)(c2max - c2min + 1);
            do
            {
              v47 = *v45 == 0;
              v48 = v42 + 1;
              ++v45;
              if ( v47 )
                v48 = v42;
              v42 = v48;
              --v46;
            }
            while ( v46 );
          }
          v44 += 64i64;
          --v43;
        }
        while ( v43 );
      }
      ++v16;
    }
    while ( v16 <= (int)c0max );
    boxp->colorcount = v42;
  }
}

