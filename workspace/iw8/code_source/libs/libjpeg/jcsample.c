/*
==============
fullsize_downsample
==============
*/
void fullsize_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  unsigned int image_width; 
  int v8; 
  __int64 max_v_samp_factor; 
  __int64 i; 
  unsigned __int8 *v11; 

  j_jcopy_sample_rows(input_data, 0, output_data, 0, cinfo->max_v_samp_factor, cinfo->image_width);
  image_width = cinfo->image_width;
  v8 = 8 * compptr->width_in_blocks - image_width;
  if ( v8 > 0 )
  {
    max_v_samp_factor = cinfo->max_v_samp_factor;
    if ( max_v_samp_factor > 0 )
    {
      for ( i = 0i64; i < max_v_samp_factor; ++i )
      {
        v11 = &output_data[i][image_width];
        memset(v11, *(v11 - 1), (unsigned int)v8);
      }
    }
  }
}

/*
==============
fullsize_smooth_downsample
==============
*/
void fullsize_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  unsigned int image_width; 
  unsigned int v6; 
  int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int8 **v12; 
  __int64 v13; 
  int smoothing_factor; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  unsigned __int8 **v19; 
  signed __int64 v20; 
  _BYTE *v21; 
  unsigned int v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  int v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  int v28; 
  unsigned __int8 *v29; 
  int v30; 
  int v31; 
  _BYTE *v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  signed __int64 v37; 
  unsigned int v38; 

  image_width = cinfo->image_width;
  v6 = 8 * compptr->width_in_blocks;
  if ( (int)(v6 - image_width) > 0 )
  {
    v9 = cinfo->max_v_samp_factor + 2;
    v10 = v9;
    if ( v9 > 0 )
    {
      v11 = 8 * compptr->width_in_blocks - image_width;
      v12 = input_data - 1;
      do
      {
        v13 = (__int64)*v12++;
        memset((void *)(image_width + v13), *(_BYTE *)(image_width + v13 - 1), v11);
        --v10;
      }
      while ( v10 );
    }
  }
  smoothing_factor = cinfo->smoothing_factor;
  v15 = 0;
  v16 = (128 - smoothing_factor) << 9;
  v17 = smoothing_factor << 6;
  if ( compptr->v_samp_factor > 0 )
  {
    v18 = v6 - 2;
    v38 = v6 - 2;
    v19 = input_data + 1;
    v20 = (char *)output_data - (char *)input_data - 8;
    v37 = v20;
    do
    {
      v21 = *(unsigned __int8 **)((char *)v19 + v20);
      v22 = v18;
      v23 = *(v19 - 2);
      v24 = *(v19 - 1);
      v25 = *v23;
      v26 = v23 + 1;
      v27 = *v19 + 1;
      v28 = *v24;
      v29 = v24 + 1;
      v30 = v28 + **v19 + v25;
      v31 = *v29 + *v26 + *v27;
      *v21 = (unsigned int)(v17 * (v31 + 2 * v30 - v28) + v16 * v28 + 0x8000) >> 16;
      v32 = v21 + 1;
      do
      {
        v33 = *v29;
        ++v26;
        ++v27;
        ++v29;
        ++v32;
        v34 = *v29 + *v26 + *v27;
        v35 = v17 * (v31 + v34 + v30 - v33) + v16 * v33 + 0x8000;
        v30 = v31;
        v31 = v34;
        *(v32 - 1) = BYTE2(v35);
        --v22;
      }
      while ( v22 );
      v36 = 2 * v34;
      v18 = v38;
      ++v15;
      ++v19;
      *v32 = (v17 * (v30 + v36 - *v29) + v16 * (unsigned int)*v29 + 0x8000) >> 16;
      v20 = v37;
    }
    while ( v15 < compptr->v_samp_factor );
  }
}

/*
==============
h2v1_downsample
==============
*/
void h2v1_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  unsigned int image_width; 
  unsigned int v7; 
  int v9; 
  __int64 max_v_samp_factor; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  int v14; 
  signed __int64 v15; 
  __int64 v16; 
  int v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 

  image_width = cinfo->image_width;
  v7 = 8 * compptr->width_in_blocks;
  v9 = 16 * compptr->width_in_blocks - image_width;
  if ( v9 > 0 )
  {
    max_v_samp_factor = cinfo->max_v_samp_factor;
    if ( max_v_samp_factor > 0 )
    {
      v11 = 0i64;
      v12 = image_width;
      do
      {
        v13 = &input_data[v11++][v12];
        memset(v13, *(v13 - 1), (unsigned int)v9);
      }
      while ( v11 < max_v_samp_factor );
    }
  }
  v14 = 0;
  if ( compptr->v_samp_factor > 0 )
  {
    v15 = (char *)output_data - (char *)input_data;
    do
    {
      v16 = *(__int64 *)((char *)input_data + v15);
      v17 = 0;
      v18 = *input_data;
      if ( v7 )
      {
        v19 = v7;
        do
        {
          v20 = v18[1];
          ++v16;
          v21 = *v18;
          v18 += 2;
          v22 = v17 + v20;
          v17 ^= 1u;
          *(_BYTE *)(v16 - 1) = (v22 + v21) >> 1;
          --v19;
        }
        while ( v19 );
      }
      ++v14;
      ++input_data;
    }
    while ( v14 < compptr->v_samp_factor );
  }
}

/*
==============
h2v2_downsample
==============
*/
void h2v2_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  int v4; 
  unsigned int image_width; 
  unsigned int v7; 
  int v10; 
  __int64 max_v_samp_factor; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  int v16; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  v4 = 0;
  image_width = cinfo->image_width;
  v7 = 8 * compptr->width_in_blocks;
  v10 = 16 * compptr->width_in_blocks - image_width;
  if ( v10 > 0 )
  {
    max_v_samp_factor = cinfo->max_v_samp_factor;
    if ( max_v_samp_factor > 0 )
    {
      v12 = 0i64;
      v13 = image_width;
      do
      {
        v14 = &input_data[v12++][v13];
        memset(v14, *(v14 - 1), (unsigned int)v10);
      }
      while ( v12 < max_v_samp_factor );
    }
  }
  if ( compptr->v_samp_factor > 0 )
  {
    do
    {
      v15 = *output_data;
      v16 = 1;
      v17 = *input_data;
      v18 = input_data[1];
      if ( v7 )
      {
        v19 = v7;
        do
        {
          v20 = v17[1];
          ++v15;
          v21 = v18[1];
          v18 += 2;
          v22 = *v17;
          v17 += 2;
          v23 = v20 + v21;
          v24 = v16 + *(v18 - 2);
          v16 ^= 3u;
          *(v15 - 1) = (v23 + v24 + v22) >> 2;
          --v19;
        }
        while ( v19 );
      }
      input_data += 2;
      ++v4;
      ++output_data;
    }
    while ( v4 < compptr->v_samp_factor );
  }
}

/*
==============
h2v2_smooth_downsample
==============
*/
void h2v2_smooth_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  unsigned int image_width; 
  unsigned int v7; 
  int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int8 **v12; 
  __int64 v13; 
  int smoothing_factor; 
  int v15; 
  int v16; 
  unsigned __int8 **v17; 
  unsigned __int8 *v18; 
  unsigned __int8 **v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  int v27; 
  unsigned __int8 *v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  _BYTE *v32; 
  unsigned __int8 *v33; 
  unsigned __int8 *v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  unsigned __int8 **v48; 
  int v49; 
  unsigned __int8 **v51; 

  v51 = output_data;
  image_width = cinfo->image_width;
  v7 = 8 * compptr->width_in_blocks;
  if ( (int)(16 * compptr->width_in_blocks - image_width) > 0 )
  {
    v9 = cinfo->max_v_samp_factor + 2;
    v10 = v9;
    if ( v9 > 0 )
    {
      v11 = 16 * compptr->width_in_blocks - image_width;
      v12 = input_data - 1;
      do
      {
        v13 = (__int64)*v12++;
        memset((void *)(image_width + v13), *(_BYTE *)(image_width + v13 - 1), v11);
        --v10;
      }
      while ( v10 );
    }
  }
  smoothing_factor = cinfo->smoothing_factor;
  v49 = 0;
  v15 = 5 * smoothing_factor;
  v16 = 16 * smoothing_factor;
  v46 = 0x4000 - 16 * v15;
  if ( compptr->v_samp_factor > 0 )
  {
    v47 = v7 - 2;
    v17 = input_data - 1;
    do
    {
      v18 = v17[1];
      v19 = v17 + 2;
      v20 = *v17;
      v21 = v17[3];
      v22 = *v19;
      v23 = v21 + 2;
      v24 = *output_data;
      v25 = v18 + 2;
      v26 = v20 + 2;
      v27 = *v21;
      v28 = *v19 + 2;
      v29 = *v18;
      v30 = **v19;
      v48 = v19;
      LODWORD(v21) = v20[1] + v21[1] + v29 + v18[2];
      LODWORD(v19) = v18[1];
      v31 = v47;
      *v24 = (v16 * (v27 + *v20 + v20[2] + 2 * (v27 + *v20 + v30 + (_DWORD)v21 + *v28) + *v23) + v46 * (v30 + v29 + v22[1] + (unsigned int)v19) + 0x8000) >> 16;
      v32 = v24 + 1;
      do
      {
        v33 = v28 + 2;
        v34 = v23 + 2;
        ++v32;
        v25 += 2;
        v35 = *(v28 - 1) + v26[1] + v23[1];
        v26 += 2;
        v36 = v28[2] + *(v26 - 2) + *v25 + *v23 + *(v25 - 3) + v35;
        v37 = *(v23 - 1);
        v23 = v34;
        v38 = v37 + 2 * v36;
        v39 = *(v25 - 1) + v28[1];
        v40 = *v28;
        v28 += 2;
        *(v32 - 1) = (v16 * (*v34 + *v26 + *(v26 - 3) + v38) + v46 * ((unsigned int)*(v25 - 2) + v40 + v39) + 0x8000) >> 16;
        --v31;
      }
      while ( v31 );
      v41 = v34[1];
      v42 = v33[1];
      v43 = v25[1];
      v44 = v16 * (v41 + v26[1] + *(v23 - 1) + 2 * (v41 + v26[1] + v42 + *(v25 - 1) + *(v28 - 1) + v43 + *v23 + *v26) + *(v26 - 1));
      v45 = v46 * (v42 + v43 + *v28 + *v25);
      output_data = ++v51;
      *v32 = (unsigned int)(v44 + v45 + 0x8000) >> 16;
      v17 = v48;
      ++v49;
    }
    while ( v49 < compptr->v_samp_factor );
  }
}

/*
==============
int_downsample
==============
*/
void int_downsample(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **input_data, unsigned __int8 **output_data)
{
  __int64 max_v_samp_factor; 
  unsigned __int8 **v8; 
  unsigned __int8 **v9; 
  __int64 image_width; 
  int v_samp_factor; 
  int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  __int64 i; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  jpeg_component_info *v20; 
  __int64 v21; 
  unsigned __int8 *v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  unsigned __int8 **v27; 
  __int64 v28; 
  int v30; 
  int v37; 
  int v38; 
  unsigned int v39; 
  __int64 v40; 
  int v46; 
  int v47; 
  unsigned int v48; 
  unsigned __int8 **v50; 
  unsigned __int8 **v51; 

  v51 = output_data;
  v50 = input_data;
  max_v_samp_factor = cinfo->max_v_samp_factor;
  v8 = input_data;
  v9 = output_data;
  image_width = cinfo->image_width;
  v_samp_factor = compptr->v_samp_factor;
  v12 = cinfo->max_h_samp_factor / compptr->h_samp_factor;
  v13 = 8 * compptr->width_in_blocks;
  v14 = cinfo->max_v_samp_factor;
  v48 = v13;
  v15 = v14 / v_samp_factor;
  v46 = v12 * (v14 / v_samp_factor);
  if ( (int)(v13 * v12 - image_width) > 0 && (int)max_v_samp_factor > 0 )
  {
    for ( i = 0i64; i < max_v_samp_factor; ++i )
    {
      v17 = &v8[i][image_width];
      memset(v17, *(v17 - 1), v13 * v12 - (unsigned int)image_width);
    }
    v_samp_factor = compptr->v_samp_factor;
  }
  v18 = 0;
  v19 = v15;
  v47 = 0;
  if ( v_samp_factor > 0 )
  {
    v20 = compptr;
    v21 = 8 * v15;
    do
    {
      v22 = *v9;
      v23 = 0;
      if ( v13 )
      {
        v24 = v46;
        v25 = v13;
        do
        {
          v26 = 0;
          if ( v19 > 0 )
          {
            v27 = v8;
            v28 = v19;
            __asm
            {
              vpxor   xmm2, xmm2, xmm2
              vpxor   xmm3, xmm3, xmm3
            }
            do
            {
              v30 = 0;
              _RAX = &(*v27)[v23];
              if ( v12 > 0 && (unsigned int)v12 >= 8 )
              {
                do
                {
                  __asm
                  {
                    vmovd   xmm0, dword ptr [rax]
                    vpmovzxbd xmm1, xmm0
                    vmovd   xmm0, dword ptr [rax+4]
                    vpaddd  xmm2, xmm1, xmm2
                  }
                  _RAX += 8;
                  v30 += 8;
                  __asm
                  {
                    vpmovzxbd xmm1, xmm0
                    vpaddd  xmm3, xmm1, xmm3
                  }
                }
                while ( v30 < v12 - (v12 & 7) );
              }
              v37 = 0;
              v38 = 0;
              if ( v30 < v12 )
              {
                if ( v12 - v30 >= 2 )
                {
                  v39 = ((unsigned int)(v12 - v30 - 2) >> 1) + 1;
                  v40 = v39;
                  v30 += 2 * v39;
                  do
                  {
                    v37 += *_RAX;
                    v38 += _RAX[1];
                    _RAX += 2;
                    --v40;
                  }
                  while ( v40 );
                }
                if ( v30 < v12 )
                  v26 += *_RAX;
                v26 += v38 + v37;
              }
              ++v27;
              --v28;
            }
            while ( v28 );
            v8 = v50;
            v24 = v46;
            __asm
            {
              vpaddd  xmm1, xmm3, xmm2
              vpsrldq xmm0, xmm1, 8
              vpaddd  xmm2, xmm1, xmm0
              vpsrldq xmm0, xmm2, 4
              vpaddd  xmm0, xmm2, xmm0
              vmovd   eax, xmm0
            }
            v26 += _EAX;
          }
          v23 += v12;
          *v22++ = (v26 + v46 / 2) / v24;
          --v25;
        }
        while ( v25 );
        v18 = v47;
        v21 = 8 * v19;
        v9 = v51;
        v13 = v48;
        v20 = compptr;
      }
      v8 = (unsigned __int8 **)((char *)v8 + v21);
      ++v18;
      ++v9;
      v50 = v8;
      v47 = v18;
      v51 = v9;
    }
    while ( v18 < v20->v_samp_factor );
  }
}

/*
==============
jinit_downsampler
==============
*/
void jinit_downsampler(jpeg_compress_struct *cinfo)
{
  char v2; 
  jpeg_downsampler *v3; 
  int v4; 
  jpeg_downsampler *v5; 
  int *p_v_samp_factor; 
  int v7; 
  int max_h_samp_factor; 
  int max_v_samp_factor; 
  __int64 v10; 

  v2 = 1;
  v3 = (jpeg_downsampler *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 104i64);
  cinfo->downsample = v3;
  v3->start_pass = start_pass_downsample;
  v3->downsample = sep_downsample;
  v3->need_context_rows = 0;
  if ( cinfo->CCIR601_sampling )
  {
    cinfo->err->msg_code = 25;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
  v4 = 0;
  if ( cinfo->num_components > 0 )
  {
    v5 = v3 + 1;
    p_v_samp_factor = &cinfo->comp_info->v_samp_factor;
    do
    {
      v7 = *(p_v_samp_factor - 1);
      max_h_samp_factor = cinfo->max_h_samp_factor;
      if ( v7 == max_h_samp_factor && *p_v_samp_factor == cinfo->max_v_samp_factor )
      {
        if ( cinfo->smoothing_factor )
        {
          v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))fullsize_smooth_downsample;
          v3->need_context_rows = 1;
        }
        else
        {
          v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))fullsize_downsample;
        }
      }
      else
      {
        if ( 2 * v7 != max_h_samp_factor )
          goto LABEL_17;
        max_v_samp_factor = cinfo->max_v_samp_factor;
        if ( *p_v_samp_factor == max_v_samp_factor )
        {
          v2 = 0;
          v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))h2v1_downsample;
        }
        else
        {
          if ( 2 * *p_v_samp_factor != max_v_samp_factor )
          {
LABEL_17:
            v10 = (unsigned int)(max_h_samp_factor >> 31);
            LODWORD(v10) = __SPAIR64__(v10, cinfo->max_h_samp_factor) % v7;
            if ( (_DWORD)v10 || (v10 = (unsigned int)(cinfo->max_v_samp_factor >> 31), LODWORD(v10) = cinfo->max_v_samp_factor % *p_v_samp_factor, (_DWORD)v10) )
            {
              cinfo->err->msg_code = 38;
              ((void (__fastcall *)(jpeg_compress_struct *, __int64, _QWORD, _QWORD))cinfo->err->error_exit)(cinfo, v10, int_downsample, h2v1_downsample);
            }
            else
            {
              v2 = 0;
              v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))int_downsample;
            }
            goto LABEL_21;
          }
          if ( cinfo->smoothing_factor )
          {
            v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))h2v2_smooth_downsample;
            v3->need_context_rows = 1;
          }
          else
          {
            v5->start_pass = (void (__fastcall *)(jpeg_compress_struct *))h2v2_downsample;
          }
        }
      }
LABEL_21:
      ++v4;
      v5 = (jpeg_downsampler *)((char *)v5 + 8);
      p_v_samp_factor += 24;
    }
    while ( v4 < cinfo->num_components );
  }
  if ( cinfo->smoothing_factor )
  {
    if ( !v2 )
    {
      cinfo->err->msg_code = 99;
      cinfo->err->emit_message((jpeg_common_struct *)cinfo, 0);
    }
  }
}

/*
==============
sep_downsample
==============
*/
void sep_downsample(jpeg_compress_struct *cinfo, unsigned __int8 ***input_buf, unsigned int in_row_index, unsigned __int8 ***output_buf, unsigned int out_row_group_index)
{
  int v6; 
  jpeg_downsampler *downsample; 
  unsigned __int8 ***v8; 
  jpeg_component_info *comp_info; 
  signed __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v6 = 0;
  downsample = cinfo->downsample;
  v8 = output_buf;
  comp_info = cinfo->comp_info;
  if ( cinfo->num_components > 0 )
  {
    v10 = (char *)input_buf - (char *)output_buf;
    v11 = (char *)downsample - (char *)output_buf + 24;
    v12 = in_row_index;
    do
    {
      (*(void (__fastcall **)(jpeg_compress_struct *, jpeg_component_info *, unsigned __int8 **, unsigned __int8 **))((char *)v8 + v11))(cinfo, comp_info, &(*(unsigned __int8 ***)((char *)v8 + v10))[v12], &(*v8)[out_row_group_index * comp_info->v_samp_factor]);
      ++v6;
      ++v8;
      ++comp_info;
    }
    while ( v6 < cinfo->num_components );
  }
}

/*
==============
start_pass_downsample
==============
*/
void start_pass_downsample(jpeg_compress_struct *cinfo)
{
  ;
}

