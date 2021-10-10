/*
==============
stb_realloc_sized
==============
*/

void *__fastcall stb_realloc_sized(void *p, unsigned __int64 old_size, unsigned __int64 size)
{
  return ?stb_realloc_sized@@YAPEAXPEAX_K1@Z(p, old_size, size);
}

/*
==============
stb_free
==============
*/

void __fastcall stb_free(void *p)
{
  ?stb_free@@YAXPEAX@Z(p);
}

/*
==============
stb_malloc
==============
*/

void *__fastcall stb_malloc(unsigned __int64 size)
{
  return ?stb_malloc@@YAPEAX_K@Z(size);
}

/*
==============
stb_realloc
==============
*/

void *__fastcall stb_realloc(void *p, unsigned __int64 size)
{
  return ?stb_realloc@@YAPEAXPEAX_K@Z(p, size);
}

/*
==============
stbi_set_allocator
==============
*/

void __fastcall stbi_set_allocator(void *(__fastcall *mal)(unsigned __int64), void *(__fastcall *re)(void *, unsigned __int64), void (__fastcall *fr)(void *))
{
  ?stbi_set_allocator@@YAXP6APEAX_K@ZP6APEAXPEAX0@ZP6AX2@Z@Z(mal, re, fr);
}

/*
==============
stbi__stdio_read
==============
*/
size_t stbi__stdio_read(void *user, char *data, int size)
{
  return fread(data, 1ui64, size, (FILE *)user);
}

/*
==============
stbi__stdio_skip
==============
*/
void stbi__stdio_skip(void *user, int n)
{
  fseek((FILE *)user, n, 1);
}

/*
==============
stbi__stdio_eof
==============
*/

int __cdecl stbi__stdio_eof(FILE *Stream)
{
  return feof(Stream);
}

/*
==============
load_jpeg_image
==============
*/
unsigned __int8 *load_jpeg_image(stbi__jpeg *z, int *out_x, int *out_y, int *comp, int req_comp)
{
  __m256i v6; 
  int v7; 
  int *v8; 
  stbi__jpeg *v9; 
  int v10; 
  stbi__context *s; 
  int img_n; 
  int v14; 
  __int64 v15; 
  void *(__fastcall *v16)(unsigned __int64); 
  unsigned __int64 index; 
  __int64 v18; 
  __int64 v20; 
  int *p_h; 
  char *v22; 
  __int64 v23; 
  unsigned __int8 *v24; 
  unsigned __int64 v25; 
  int img_h_max; 
  int v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  unsigned int img_x; 
  __int64 v32; 
  unsigned int v33; 
  unsigned __int8 *(__fastcall *resample_row_hv_2_kernel)(unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, int); 
  int img_y; 
  int v36; 
  int v37; 
  __int64 v38; 
  unsigned __int8 *v39; 
  int v40; 
  unsigned __int64 v41; 
  stbi__context *v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  unsigned __int8 *v48; 
  __int64 v49; 
  int *p_y; 
  int *v51; 
  int v52; 
  int v53; 
  __int64 v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  unsigned __int8 v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  void (__fastcall *YCbCr_to_RGB_kernel)(unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, const unsigned __int8 *, int, int); 
  __int64 v66; 
  int v67; 
  __int64 v68; 
  unsigned __int8 v69; 
  unsigned int v70; 
  __int64 v71; 
  __int16 v72; 
  __int16 v73; 
  __int16 v74; 
  __int16 v75; 
  __int16 v76; 
  __int16 v77; 
  int app14_color_transform; 
  __int64 v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  __int64 v84; 
  int v85; 
  int v86; 
  unsigned int v87; 
  __int64 v88; 
  unsigned __int8 v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned __int8 *v92; 
  __int64 v93; 
  __int64 v94; 
  __m256i v99; 
  char v100; 
  char v101; 

  v7 = req_comp;
  v8 = comp;
  v9 = z;
  z->s->img_n = 0;
  if ( (unsigned int)req_comp > 4 )
  {
    stbi__g_failure_reason = "bad req_comp";
    return 0i64;
  }
  v10 = stbi__decode_jpeg_image(z);
  s = v9->s;
  if ( !v10 )
  {
    stbi__free_jpeg_components(v9, s->img_n, 0);
    return 0i64;
  }
  img_n = s->img_n;
  v14 = 1;
  if ( !req_comp )
  {
    v7 = 1;
    if ( img_n >= 3 )
      v7 = 3;
  }
  if ( img_n == 3 && (v9->rgb == 3 || !v9->app14_color_transform && !v9->jfif) )
  {
    v15 = 1i64;
    v93 = 1i64;
LABEL_13:
    if ( v7 < 3 && !(_DWORD)v15 )
      img_n = 1;
    goto LABEL_16;
  }
  v93 = 0i64;
  v15 = 0i64;
  if ( img_n == 3 )
    goto LABEL_13;
LABEL_16:
  v16 = alt_stb_malloc;
  index = stbi_mem.index;
  v18 = img_n;
  v94 = img_n;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v99 = v6;
  if ( img_n <= 0 )
    goto LABEL_37;
  v20 = 0i64;
  p_h = &v9->img_comp[0].h;
  v22 = &v100;
  do
  {
    v23 = v9->s->img_x + 3;
    if ( v16 )
    {
      v24 = (unsigned __int8 *)((__int64 (__fastcall *)(_QWORD, __int64))v16)(v9->s->img_x + 3, v15);
      v16 = alt_stb_malloc;
      index = stbi_mem.index;
    }
    else
    {
      v25 = v23 + index;
      if ( v23 + index >= stbi_mem.size )
      {
        *(_QWORD *)(p_h + 17) = 0i64;
LABEL_49:
        v40 = v9->s->img_n;
LABEL_55:
        stbi__free_jpeg_components(v9, v40, 0);
        stbi__g_failure_reason = "outofmem";
        return 0i64;
      }
      stbi_mem.old_index = index;
      v24 = &stbi_mem.data[index];
      index += v23;
      stbi_mem.index = v25;
    }
    *(_QWORD *)(p_h + 17) = v24;
    if ( !v24 )
      goto LABEL_49;
    v27 = v9->img_h_max >> 31;
    img_h_max = v9->img_h_max;
    *((_DWORD *)v22 + 4) = 0;
    v28 = __SPAIR64__(v27, img_h_max) / *p_h;
    *(_DWORD *)v22 = v28;
    v29 = v9->img_v_max / p_h[1];
    *((_DWORD *)v22 + 1) = v29;
    v30 = v29;
    *((_DWORD *)v22 + 3) = v29 >> 1;
    img_x = v9->s->img_x;
    v32 = *(_QWORD *)(p_h + 11);
    *((_QWORD *)v22 - 1) = v32;
    *((_QWORD *)v22 - 2) = v32;
    v33 = img_x + v28 - 1;
    v15 = img_x;
    LODWORD(v15) = v33 % v28;
    *((_DWORD *)v22 + 2) = v33 / v28;
    if ( v28 == 1 )
    {
      if ( v30 == 1 )
      {
        resample_row_hv_2_kernel = resample_row_1;
        goto LABEL_35;
      }
      v28 = 1;
      if ( v30 == 2 )
      {
        resample_row_hv_2_kernel = stbi__resample_row_v_2;
        goto LABEL_35;
      }
    }
    else
    {
      if ( v28 != 2 )
        goto LABEL_34;
      if ( v30 == 1 )
      {
        resample_row_hv_2_kernel = stbi__resample_row_h_2;
        goto LABEL_35;
      }
    }
    if ( v28 == 2 && v30 == 2 )
    {
      resample_row_hv_2_kernel = v9->resample_row_hv_2_kernel;
      goto LABEL_35;
    }
LABEL_34:
    resample_row_hv_2_kernel = stbi__resample_row_generic;
LABEL_35:
    *((_QWORD *)v22 - 3) = resample_row_hv_2_kernel;
    ++v20;
    v22 += 48;
    p_h += 24;
  }
  while ( v20 < v18 );
  s = v9->s;
LABEL_37:
  img_y = s->img_y;
  v36 = s->img_x;
  if ( v7 < 0 )
    goto LABEL_52;
  if ( v36 < 0 )
    goto LABEL_52;
  if ( v36 )
  {
    v15 = (unsigned int)(0x7FFFFFFF % v36);
    if ( v7 > 0x7FFFFFFF / v36 )
      goto LABEL_52;
  }
  if ( v7 * v36 < 0 )
    goto LABEL_52;
  if ( img_y < 0 )
    goto LABEL_52;
  if ( img_y )
  {
    v15 = (unsigned int)(0x7FFFFFFF % img_y);
    if ( v7 * v36 > 0x7FFFFFFF / img_y )
      goto LABEL_52;
  }
  v37 = v7 * img_y * v36;
  if ( v37 == 0x7FFFFFFF )
    goto LABEL_52;
  v38 = v37 + 1;
  if ( v16 )
  {
    v39 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, __int64))v16)(v38, v15);
    goto LABEL_53;
  }
  v41 = index + v38;
  if ( v41 >= stbi_mem.size )
  {
LABEL_52:
    v39 = NULL;
  }
  else
  {
    v39 = &stbi_mem.data[index];
    stbi_mem.old_index = index;
    stbi_mem.index = v41;
  }
LABEL_53:
  v42 = v9->s;
  v92 = v39;
  if ( !v39 )
  {
    v40 = v42->img_n;
    goto LABEL_55;
  }
  v43 = 0;
  v91 = 0;
  if ( !v42->img_y )
    goto LABEL_116;
  v44 = v99.m256i_i64[3];
  v45 = v99.m256i_i64[2];
  v46 = v99.m256i_i64[1];
  v47 = v99.m256i_i64[0];
  while ( 2 )
  {
    v48 = &v39[v7 * v43 * v42->img_x];
    v49 = 0i64;
    if ( v94 > 0 )
    {
      p_y = &v9->img_comp[0].y;
      v51 = (int *)&v101;
      do
      {
        v52 = *(v51 - 2);
        v53 = *v51;
        if ( *v51 < v52 >> 1 )
          v54 = *(_QWORD *)(v51 - 5);
        else
          v54 = *(_QWORD *)(v51 - 7);
        if ( v53 < v52 >> 1 )
          v55 = *(_QWORD *)(v51 - 7);
        else
          v55 = *(_QWORD *)(v51 - 5);
        v99.m256i_i64[v49] = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD))(v51 - 9))(*((_QWORD *)p_y + 5), v55, v54, (unsigned int)*(v51 - 1), *(v51 - 3));
        *v51 = v53 + 1;
        if ( v53 + 1 >= v52 )
        {
          v56 = ++v51[1];
          v57 = *(_QWORD *)(v51 - 5);
          *v51 = 0;
          *(_QWORD *)(v51 - 7) = v57;
          if ( v56 < *p_y )
            *(_QWORD *)(v51 - 5) = v57 + p_y[1];
        }
        ++v49;
        v51 += 12;
        p_y += 24;
      }
      while ( v49 < v94 );
      v9 = z;
      v44 = v99.m256i_i64[3];
      v45 = v99.m256i_i64[2];
      v46 = v99.m256i_i64[1];
      v42 = z->s;
      v47 = v99.m256i_i64[0];
    }
    if ( v7 < 3 )
    {
      if ( v93 )
      {
        v70 = v42->img_x;
        v71 = 0i64;
        if ( v7 == 1 )
        {
          if ( v70 )
          {
            do
            {
              ++v48;
              v72 = 150 * *(unsigned __int8 *)(v71 + v46);
              v73 = 29 * *(unsigned __int8 *)(v71 + v45);
              v74 = *(unsigned __int8 *)(v71 + v47);
              v71 = (unsigned int)(v71 + 1);
              *(v48 - 1) = (unsigned __int16)(77 * v74 + v73 + v72) >> 8;
              v42 = v9->s;
            }
            while ( (unsigned int)v71 < v9->s->img_x );
          }
        }
        else if ( v70 )
        {
          do
          {
            v48 += 2;
            v75 = 150 * *(unsigned __int8 *)(v71 + v46);
            v76 = 29 * *(unsigned __int8 *)(v71 + v45);
            v77 = *(unsigned __int8 *)(v71 + v47);
            v71 = (unsigned int)(v71 + 1);
            *(v48 - 1) = -1;
            *(v48 - 2) = (unsigned __int16)(77 * v77 + v76 + v75) >> 8;
            v42 = v9->s;
          }
          while ( (unsigned int)v71 < v9->s->img_x );
        }
        goto LABEL_114;
      }
      if ( v42->img_n != 4 )
        goto LABEL_108;
      app14_color_transform = v9->app14_color_transform;
      if ( !app14_color_transform )
      {
        v79 = 0i64;
        if ( v42->img_x )
        {
          do
          {
            v80 = *(unsigned __int8 *)(v79 + v44);
            v81 = *(unsigned __int8 *)(v79 + v46);
            v82 = *(unsigned __int8 *)(v79 + v45);
            v83 = *(unsigned __int8 *)(v79 + v47);
            v79 = (unsigned int)(v79 + 1);
            v48[1] = -1;
            *v48 = (unsigned __int16)(77 * (unsigned __int8)((unsigned __int16)(v80 * v83 + 128 + ((unsigned int)(v80 * v83 + 128) >> 8)) >> 8) + 29 * (unsigned __int8)((unsigned __int16)(v80 * v82 + 128 + ((unsigned int)(v80 * v82 + 128) >> 8)) >> 8) + 150 * (unsigned __int8)((unsigned __int16)(v80 * v81 + 128 + ((unsigned int)(v80 * v81 + 128) >> 8)) >> 8)) >> 8;
            v48 += v7;
            v42 = v9->s;
          }
          while ( (unsigned int)v79 < v9->s->img_x );
        }
        goto LABEL_114;
      }
      if ( app14_color_transform == 2 )
      {
        v84 = 0i64;
        if ( v42->img_x )
        {
          do
          {
            v85 = (unsigned __int8)~*(_BYTE *)(v84 + v47);
            v86 = *(unsigned __int8 *)(v84 + v44);
            v84 = (unsigned int)(v84 + 1);
            v48[1] = -1;
            *v48 = (unsigned __int16)(v86 * v85 + 128 + ((unsigned int)(v86 * v85 + 128) >> 8)) >> 8;
            v48 += v7;
            v42 = v9->s;
          }
          while ( (unsigned int)v84 < v9->s->img_x );
        }
      }
      else
      {
LABEL_108:
        v87 = v42->img_x;
        v88 = 0i64;
        if ( v7 == 1 )
        {
          if ( v87 )
          {
            do
            {
              v48[v88] = *(_BYTE *)(v88 + v47);
              v88 = (unsigned int)(v88 + 1);
              v42 = v9->s;
            }
            while ( (unsigned int)v88 < v9->s->img_x );
          }
        }
        else if ( v87 )
        {
          do
          {
            v89 = *(_BYTE *)(v88 + v47);
            v88 = (unsigned int)(v88 + 1);
            *v48 = v89;
            v48[1] = -1;
            v48 += 2;
            v42 = v9->s;
          }
          while ( (unsigned int)v88 < v9->s->img_x );
        }
      }
    }
    else
    {
      v58 = v42->img_n;
      if ( v58 == 3 )
      {
        if ( !v93 )
        {
          v9->YCbCr_to_RGB_kernel(v48, (const unsigned __int8 *)v47, (const unsigned __int8 *)v46, (const unsigned __int8 *)v45, v42->img_x, v7);
          v42 = v9->s;
          goto LABEL_114;
        }
        v59 = 0i64;
        if ( v42->img_x )
        {
          do
          {
            *v48 = *(_BYTE *)(v59 + v47);
            v48[1] = *(_BYTE *)(v59 + v46);
            v60 = *(_BYTE *)(v59 + v45);
            v59 = (unsigned int)(v59 + 1);
            v48[2] = v60;
            v48[3] = -1;
            v48 += v7;
          }
          while ( (unsigned int)v59 < v9->s->img_x );
          v42 = v9->s;
          goto LABEL_114;
        }
LABEL_90:
        v42 = v9->s;
        goto LABEL_114;
      }
      if ( v58 != 4 )
      {
        v68 = 0i64;
        if ( v42->img_x )
        {
          do
          {
            v69 = *(_BYTE *)(v68 + v47);
            v68 = (unsigned int)(v68 + 1);
            v48[2] = v69;
            v48[1] = v69;
            *v48 = v69;
            v48[3] = -1;
            v48 += v7;
          }
          while ( (unsigned int)v68 < v9->s->img_x );
        }
        goto LABEL_90;
      }
      v61 = v9->app14_color_transform;
      if ( v61 )
      {
        YCbCr_to_RGB_kernel = v9->YCbCr_to_RGB_kernel;
        v90 = v42->img_x;
        if ( v61 != 2 )
        {
          YCbCr_to_RGB_kernel(v48, (const unsigned __int8 *)v47, (const unsigned __int8 *)v46, (const unsigned __int8 *)v45, v90, v7);
          v42 = v9->s;
          goto LABEL_114;
        }
        YCbCr_to_RGB_kernel(v48, (const unsigned __int8 *)v47, (const unsigned __int8 *)v46, (const unsigned __int8 *)v45, v90, v7);
        v66 = 0i64;
        if ( !v9->s->img_x )
          goto LABEL_90;
        do
        {
          v67 = *(unsigned __int8 *)(v66 + v44);
          v66 = (unsigned int)(v66 + 1);
          *v48 = (unsigned __int16)(v67 * (unsigned __int8)~*v48 + 128 + ((v67 * (unsigned int)(unsigned __int8)~*v48 + 128) >> 8)) >> 8;
          v48[1] = (unsigned __int16)(v67 * (unsigned __int8)~v48[1] + 128 + ((v67 * (unsigned int)(unsigned __int8)~v48[1] + 128) >> 8)) >> 8;
          v48[2] = (unsigned __int16)(v67 * (unsigned __int8)~v48[2] + 128 + ((v67 * (unsigned int)(unsigned __int8)~v48[2] + 128) >> 8)) >> 8;
          v48 += v7;
        }
        while ( (unsigned int)v66 < v9->s->img_x );
        v42 = v9->s;
      }
      else
      {
        v62 = 0i64;
        if ( !v42->img_x )
          goto LABEL_90;
        do
        {
          v63 = *(unsigned __int8 *)(v62 + v44);
          *v48 = (unsigned __int16)(v63 * *(unsigned __int8 *)(v62 + v47) + 128 + ((v63 * (unsigned int)*(unsigned __int8 *)(v62 + v47) + 128) >> 8)) >> 8;
          v48[1] = (unsigned __int16)(v63 * *(unsigned __int8 *)(v62 + v46) + 128 + ((v63 * (unsigned int)*(unsigned __int8 *)(v62 + v46) + 128) >> 8)) >> 8;
          v64 = *(unsigned __int8 *)(v62 + v45);
          v62 = (unsigned int)(v62 + 1);
          v48[3] = -1;
          v48[2] = (unsigned __int16)(v63 * v64 + 128 + ((unsigned int)(v63 * v64 + 128) >> 8)) >> 8;
          v48 += v7;
        }
        while ( (unsigned int)v62 < v9->s->img_x );
        v42 = v9->s;
      }
    }
LABEL_114:
    v39 = v92;
    v43 = v91 + 1;
    v91 = v43;
    if ( v43 < v42->img_y )
      continue;
    break;
  }
  v8 = comp;
  v14 = 1;
LABEL_116:
  stbi__free_jpeg_components(v9, v42->img_n, 0);
  *out_x = v9->s->img_x;
  *out_y = v9->s->img_y;
  if ( v8 )
  {
    if ( v9->s->img_n >= 3 )
      v14 = 3;
    *v8 = v14;
  }
  return v39;
}

/*
==============
load_jpeg_image_swizzle
==============
*/
unsigned __int8 *load_jpeg_image_swizzle(stbi__context *s, unsigned __int8 *output, unsigned int outputwidth, unsigned int outputheight, int outputXOffset, int outputYOffset, int req_comp, unsigned int pitch, unsigned int linear, void *tp, unsigned int (*swizzle_offset)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void *), void (*outputcopy)(unsigned __int8 *, unsigned __int8, unsigned __int8, unsigned __int8))
{
  stbi__jpeg *v16; 
  int v17; 
  stbi__context *v18; 
  int img_n; 
  char *v20; 
  int *p_h; 
  __int64 i; 
  void *v24; 
  __int64 img_h_max; 
  unsigned int v26; 
  int v27; 
  __int64 v28; 
  unsigned __int8 *(__fastcall *resample_row_hv_2_kernel)(unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, int); 
  stbi__context *v30; 
  int v31; 
  __int64 v32; 
  int *p_y; 
  int *v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned int v46; 
  int v47; 
  int v48; 
  unsigned __int8 *v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  char v54; 
  char v55; 
  char v56; 
  __int128 v61; 
  __int64 v62; 
  char v63; 
  char v64; 

  if ( alt_stb_malloc )
  {
    v16 = (stbi__jpeg *)alt_stb_malloc(0x4888ui64);
  }
  else if ( stbi_mem.index + 18568 < stbi_mem.size )
  {
    v16 = (stbi__jpeg *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 18568i64;
  }
  else
  {
    v16 = NULL;
  }
  v16->s = s;
  s->img_n = 0;
  if ( req_comp != 4 )
    return 0i64;
  v17 = stbi__decode_jpeg_image(v16);
  v18 = v16->s;
  img_n = v16->s->img_n;
  if ( !v17 )
  {
LABEL_56:
    stbi__free_jpeg_components(v16, img_n, 0);
    return 0i64;
  }
  if ( img_n != 3 || v18->img_x > outputwidth || v18->img_y > outputheight )
    return 0i64;
  v20 = &v63;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v61 = _XMM0;
  v62 = 0i64;
  p_h = &v16->img_comp[0].h;
  for ( i = 0i64; i < 3; ++i )
  {
    v24 = stbi__malloc(v16->s->img_x + 3);
    *(_QWORD *)(p_h + 17) = v24;
    if ( !v24 )
    {
      img_n = v16->s->img_n;
      goto LABEL_56;
    }
    img_h_max = v16->img_h_max;
    *((_DWORD *)v20 + 4) = 0;
    v26 = img_h_max / *p_h;
    *(_DWORD *)v20 = v26;
    v27 = v16->img_v_max / p_h[1];
    *((_DWORD *)v20 + 1) = v27;
    *((_DWORD *)v20 + 3) = v27 >> 1;
    *((_DWORD *)v20 + 2) = (v16->s->img_x + v26 - 1) / v26;
    v28 = *(_QWORD *)(p_h + 11);
    *((_QWORD *)v20 - 1) = v28;
    *((_QWORD *)v20 - 2) = v28;
    if ( v26 == 1 )
    {
      if ( v27 == 1 )
      {
        resample_row_hv_2_kernel = resample_row_1;
        goto LABEL_25;
      }
      v26 = 1;
      if ( v27 == 2 )
      {
        resample_row_hv_2_kernel = stbi__resample_row_v_2;
        goto LABEL_25;
      }
    }
    else
    {
      if ( v26 != 2 )
        goto LABEL_24;
      if ( v27 == 1 )
      {
        resample_row_hv_2_kernel = stbi__resample_row_h_2;
        goto LABEL_25;
      }
    }
    if ( v26 == 2 && v27 == 2 )
    {
      resample_row_hv_2_kernel = v16->resample_row_hv_2_kernel;
      goto LABEL_25;
    }
LABEL_24:
    resample_row_hv_2_kernel = stbi__resample_row_generic;
LABEL_25:
    *((_QWORD *)v20 - 3) = resample_row_hv_2_kernel;
    v20 += 48;
    p_h += 24;
  }
  v30 = v16->s;
  v31 = outputYOffset;
  if ( v16->s->img_y )
  {
    do
    {
      v32 = 0i64;
      p_y = &v16->img_comp[0].y;
      v34 = (int *)&v64;
      do
      {
        v35 = *(v34 - 2);
        v36 = *v34;
        if ( *v34 < v35 >> 1 )
          v37 = *(_QWORD *)(v34 - 5);
        else
          v37 = *(_QWORD *)(v34 - 7);
        if ( v36 < v35 >> 1 )
          v38 = *(_QWORD *)(v34 - 7);
        else
          v38 = *(_QWORD *)(v34 - 5);
        *((_QWORD *)&v61 + v32) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD))(v34 - 9))(*((_QWORD *)p_y + 5), v38, v37, (unsigned int)*(v34 - 1), *(v34 - 3));
        *v34 = v36 + 1;
        if ( v36 + 1 >= v35 )
        {
          v39 = ++v34[1];
          v40 = *(_QWORD *)(v34 - 5);
          *v34 = 0;
          *(_QWORD *)(v34 - 7) = v40;
          if ( v39 < *p_y )
            *(_QWORD *)(v34 - 5) = v40 + p_y[1];
        }
        ++v32;
        v34 += 12;
        p_y += 24;
      }
      while ( v32 < 3 );
      v30 = v16->s;
      v41 = outputXOffset;
      if ( v16->s->img_x )
      {
        v42 = v62;
        v43 = 0i64;
        v44 = *((_QWORD *)&v61 + 1);
        v45 = v61;
        do
        {
          v46 = swizzle_offset(v41, v31, outputwidth, outputheight, 4u, pitch, linear, tp);
          v47 = *(unsigned __int8 *)(v42 + v43);
          v48 = *(unsigned __int8 *)(v43 + v44);
          v49 = &output[v46];
          v50 = (*(unsigned __int8 *)(v45 + v43) << 20) + 0x80000;
          v51 = (v50 + 1470208 * (v47 - 128)) >> 20;
          v52 = (int)(v50 + ((360960 * (128 - v48)) & 0xFFFF0000) + 748800 * (128 - v47)) >> 20;
          v53 = (v50 + 1858048 * (v48 - 128)) >> 20;
          if ( (unsigned int)v51 > 0xFF )
          {
            v54 = -1;
            if ( v51 < 0 )
              v54 = 0;
            LOBYTE(v51) = v54;
          }
          if ( (unsigned int)v52 > 0xFF )
          {
            v55 = -1;
            if ( v52 < 0 )
              v55 = 0;
            LOBYTE(v52) = v55;
          }
          if ( (unsigned int)v53 > 0xFF )
          {
            v56 = -1;
            if ( v53 < 0 )
              v56 = 0;
            LOBYTE(v53) = v56;
          }
          outputcopy(v49, v51, v52, v53);
          v30 = v16->s;
          v43 = (unsigned int)(++v41 - outputXOffset);
        }
        while ( (unsigned int)v43 < v16->s->img_x );
      }
      ++v31;
    }
    while ( v31 - outputYOffset < v30->img_y );
  }
  stbi__free_jpeg_components(v16, v30->img_n, 0);
  return output;
}

/*
==============
load_jpeg_image_yuv
==============
*/
unsigned __int8 *load_jpeg_image_yuv(stbi__context *s, int *out_y_x, int *out_y_y, int *out_uv_x, int *out_uv_y)
{
  unsigned __int8 *v5; 
  stbi__jpeg *v10; 
  int y; 
  int v13; 
  unsigned __int64 v14; 
  size_t v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  stbi__context *v18; 

  v5 = NULL;
  if ( alt_stb_malloc )
  {
    v10 = (stbi__jpeg *)alt_stb_malloc(0x4888ui64);
  }
  else if ( stbi_mem.index + 18568 < stbi_mem.size )
  {
    v10 = (stbi__jpeg *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 18568i64;
  }
  else
  {
    v10 = NULL;
  }
  v10->s = s;
  v10->marker = -1;
  *(_QWORD *)&v10->code_buffer = 0i64;
  v10->nomore = 0;
  s->img_n = 0;
  if ( stbi__decode_jpeg_image(v10) )
  {
    *out_y_x = v10->img_comp[0].x;
    *out_y_y = v10->img_comp[0].y;
    if ( v10->s->img_n <= 1 )
    {
      *out_uv_x = 0;
      y = 0;
    }
    else
    {
      *out_uv_x = v10->img_comp[1].x;
      y = v10->img_comp[1].y;
    }
    *out_uv_y = y;
    v13 = y * *out_uv_x;
    if ( alt_stb_malloc )
    {
      v5 = (unsigned __int8 *)alt_stb_malloc(*out_y_y * *out_y_x + 2 * v13);
    }
    else
    {
      v14 = stbi_mem.index + *out_y_y * *out_y_x + 2 * v13;
      if ( v14 < stbi_mem.size )
      {
        v5 = &stbi_mem.data[stbi_mem.index];
        stbi_mem.old_index = stbi_mem.index;
        stbi_mem.index = v14;
      }
    }
    v15 = *out_y_y * *out_y_x;
    v16 = &v5[v15];
    v17 = &v5[v15 + *out_uv_y * *out_uv_x];
    memcpy_0(v5, v10->img_comp[0].data, v15);
    v18 = v10->s;
    if ( v10->s->img_n > 1 )
    {
      memcpy_0(v16, v10->img_comp[1].data, *out_uv_y * *out_uv_x);
      memcpy_0(v17, v10->img_comp[2].data, *out_uv_y * *out_uv_x);
      v18 = v10->s;
    }
    stbi__free_jpeg_components(v10, v18->img_n, 0);
    return v5;
  }
  else
  {
    stbi__free_jpeg_components(v10, v10->s->img_n, 0);
    return 0i64;
  }
}

/*
==============
resample_row_1
==============
*/
unsigned __int8 *resample_row_1(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, int w)
{
  return in_near;
}

/*
==============
stb_free
==============
*/
void stb_free(void *p)
{
  if ( alt_stb_free )
    alt_stb_free(p);
}

/*
==============
stb_malloc
==============
*/
unsigned __int8 *stb_malloc(unsigned __int64 size)
{
  unsigned __int8 *result; 

  if ( alt_stb_malloc )
    return (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))alt_stb_malloc)(size, size);
  if ( stbi_mem.index + size >= stbi_mem.size )
    return 0i64;
  result = &stbi_mem.data[stbi_mem.index];
  stbi_mem.old_index = stbi_mem.index;
  stbi_mem.index += size;
  return result;
}

/*
==============
stb_realloc
==============
*/
void *stb_realloc(void *p, unsigned __int64 size)
{
  if ( alt_stb_realloc )
    return alt_stb_realloc(p, size);
  else
    return stb_realloc_sized(p, stbi_mem.index - stbi_mem.old_index, size);
}

/*
==============
stb_realloc_sized
==============
*/
unsigned __int8 *stb_realloc_sized(void *p, unsigned __int64 old_size, unsigned __int64 size)
{
  unsigned __int8 *v6; 

  if ( alt_stb_realloc )
    return (unsigned __int8 *)alt_stb_realloc(p, size);
  if ( alt_stb_malloc )
  {
    v6 = (unsigned __int8 *)alt_stb_malloc(size);
  }
  else if ( stbi_mem.index + size < stbi_mem.size )
  {
    v6 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += size;
  }
  else
  {
    v6 = NULL;
  }
  memcpy_0(v6, p, old_size);
  if ( alt_stb_free )
    alt_stb_free(p);
  return v6;
}

/*
==============
stbi__YCbCr_to_RGB_row
==============
*/
void stbi__YCbCr_to_RGB_row(unsigned __int8 *out, const unsigned __int8 *y, const unsigned __int8 *pcb, const unsigned __int8 *pcr, int count, int step)
{
  __int64 v6; 
  const unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  signed __int64 v9; 
  signed __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  char v17; 
  char v18; 
  char v19; 

  v6 = count;
  v7 = pcr;
  if ( count > 0 )
  {
    v8 = out + 2;
    v9 = y - pcr;
    v10 = pcb - pcr;
    do
    {
      v11 = *v7;
      v12 = v7[v10];
      v13 = (v7[v9] << 20) + 0x80000;
      v14 = (v13 + 1470208 * (v11 - 128)) >> 20;
      v15 = (int)(v13 + ((360960 * (128 - v12)) & 0xFFFF0000) + 748800 * (128 - v11)) >> 20;
      v16 = (v13 + 1858048 * (v12 - 128)) >> 20;
      if ( (unsigned int)v14 > 0xFF )
      {
        v17 = -1;
        if ( v14 < 0 )
          v17 = 0;
        LOBYTE(v14) = v17;
      }
      if ( (unsigned int)v15 > 0xFF )
      {
        v18 = -1;
        if ( v15 < 0 )
          v18 = 0;
        LOBYTE(v15) = v18;
      }
      if ( (unsigned int)v16 > 0xFF )
      {
        v19 = -1;
        if ( v16 < 0 )
          v19 = 0;
        LOBYTE(v16) = v19;
      }
      *(v8 - 2) = v14;
      ++v7;
      *(v8 - 1) = v15;
      *v8 = v16;
      v8[1] = -1;
      v8 += step;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
stbi__YCbCr_to_RGB_simd
==============
*/
void stbi__YCbCr_to_RGB_simd(unsigned __int8 *out, const unsigned __int8 *y, const unsigned __int8 *pcb, const unsigned __int8 *pcr, int count, int step)
{
  int v8; 
  __int64 v11; 
  unsigned __int8 *v37; 
  signed __int64 v38; 
  signed __int64 v39; 
  const unsigned __int8 *v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  char v48; 
  char v49; 
  char v50; 

  v8 = 0;
  if ( step == 4 )
  {
    _XMM8 = _xmm;
    if ( count > 7 )
    {
      __asm { vpxor   xmm9, xmm9, xmm9 }
      do
      {
        v11 = v8;
        v8 += 8;
        _XMM0 = *(unsigned __int64 *)&pcr[v11];
        __asm { vpxor   xmm1, xmm0, xmm8 }
        _XMM0 = *(unsigned __int64 *)&pcb[v11];
        __asm
        {
          vpunpcklbw xmm7, xmm9, xmm1
          vpxor   xmm1, xmm0, xmm8
          vpunpcklbw xmm6, xmm9, xmm1
          vpunpcklbw xmm1, xmm8, xmm0
          vpsrlw  xmm4, xmm1, 4
          vpmulhw xmm0, xmm7, xmm10
          vpaddw  xmm1, xmm0, xmm4
          vpsraw  xmm3, xmm1, 4
          vpmulhw xmm2, xmm6, xmm13
          vpaddw  xmm0, xmm2, xmm4
          vpsraw  xmm1, xmm0, 4
          vpackuswb xmm5, xmm3, xmm1
          vpmulhw xmm0, xmm6, xmm12
          vpaddw  xmm2, xmm0, xmm4
          vpmulhw xmm1, xmm7, xmm11
          vpaddw  xmm2, xmm2, xmm1
          vpsraw  xmm0, xmm2, 4
          vpackuswb xmm3, xmm0, xmm14
          vpunpcklbw xmm2, xmm5, xmm3
          vpunpckhbw xmm1, xmm5, xmm3
          vpunpcklwd xmm0, xmm2, xmm1
        }
        *(_OWORD *)out = _XMM0;
        __asm { vpunpckhwd xmm0, xmm2, xmm1 }
        *((_OWORD *)out + 1) = _XMM0;
        out += 32;
      }
      while ( v8 + 7 < count );
    }
  }
  if ( v8 < (__int64)count )
  {
    v37 = out + 2;
    v38 = y - pcr;
    v39 = pcb - pcr;
    v40 = &pcr[v8];
    v41 = count - (__int64)v8;
    do
    {
      v42 = *v40;
      v43 = v40[v39];
      v44 = (v40[v38] << 20) + 0x80000;
      v45 = (v44 + 1470208 * (v42 - 128)) >> 20;
      v46 = (int)(v44 + ((360960 * (128 - v43)) & 0xFFFF0000) + 748800 * (128 - v42)) >> 20;
      v47 = (v44 + 1858048 * (v43 - 128)) >> 20;
      if ( (unsigned int)v45 > 0xFF )
      {
        v48 = -1;
        if ( v45 < 0 )
          v48 = 0;
        LOBYTE(v45) = v48;
      }
      if ( (unsigned int)v46 > 0xFF )
      {
        v49 = -1;
        if ( v46 < 0 )
          v49 = 0;
        LOBYTE(v46) = v49;
      }
      if ( (unsigned int)v47 > 0xFF )
      {
        v50 = -1;
        if ( v47 < 0 )
          v50 = 0;
        LOBYTE(v47) = v50;
      }
      *(v37 - 2) = v45;
      ++v40;
      *(v37 - 1) = v46;
      *v37 = v47;
      v37[1] = -1;
      v37 += step;
      --v41;
    }
    while ( v41 );
  }
}

/*
==============
stbi__build_huffman
==============
*/
__int64 stbi__build_huffman(stbi__huffman *h, int *count)
{
  int v2; 
  int v4; 
  int v5; 
  __int64 v6; 
  int i; 
  __int64 v8; 
  unsigned __int8 *size; 
  int v10; 
  unsigned int *v11; 
  unsigned int v12; 
  int v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  int j; 
  unsigned __int16 *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int16 *code; 
  unsigned int v21; 
  char v22; 
  int v23; 

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0i64;
  do
  {
    for ( i = 0; i < *count; ++i )
    {
      h->size[v6] = v5 + 1;
      ++v4;
      ++v6;
    }
    ++v5;
    ++count;
  }
  while ( v5 < 16 );
  v8 = v4;
  size = h->size;
  v10 = 1;
  v11 = &h->maxcode[1];
  v12 = 0;
  v13 = 0;
  v14 = 0i64;
  v15 = h->size;
  h->size[v8] = 0;
  for ( j = 15; j >= 0; --j )
  {
    v11[18] = v13 - v12;
    if ( *v15 == v10 )
    {
      v17 = &h->code[v14];
      do
      {
        ++v14;
        *v17++ = v12;
        v15 = &size[v14];
        v18 = v12;
        ++v13;
        ++v12;
      }
      while ( size[v14] == v10 );
      if ( v18 >= 1 << v10 )
      {
        stbi__g_failure_reason = "bad code lengths";
        return 0i64;
      }
    }
    v19 = v12 << j;
    v12 *= 2;
    *v11 = v19;
    ++v10;
    ++v11;
  }
  h->maxcode[v10] = -1;
  memset_0(h, 255, 0x200ui64);
  if ( v13 > 0 )
  {
    code = h->code;
    do
    {
      v21 = *size;
      if ( v21 <= 9 )
      {
        v22 = 9 - v21;
        v23 = 1 << (9 - v21);
        if ( v23 > 0 )
          memset(&h->fast[*code << v22], v2, v23);
      }
      ++v2;
      ++code;
      ++size;
    }
    while ( v2 < v13 );
  }
  return 1i64;
}

/*
==============
stbi__check_png_header
==============
*/
__int64 stbi__check_png_header(stbi__context *s)
{
  __int64 v1; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v4; 
  int v5; 
  unsigned __int8 *v6; 

  v1 = 0i64;
  while ( 1 )
  {
    img_buffer = s->img_buffer;
    if ( img_buffer >= s->img_buffer_end )
    {
      if ( s->read_from_callbacks )
      {
        v5 = s->io.read(s->io_user_data, (char *)s->buffer_start, s->buflen);
        s->img_buffer = s->buffer_start;
        if ( v5 )
        {
          s->img_buffer_end = &s->buffer_start[v5];
        }
        else
        {
          s->read_from_callbacks = 0;
          s->img_buffer_end = &s->buffer_start[1];
          s->buffer_start[0] = 0;
        }
        v6 = s->img_buffer;
        v4 = *v6;
        s->img_buffer = v6 + 1;
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = *img_buffer;
      s->img_buffer = img_buffer + 1;
    }
    if ( v4 != png_sig[v1] )
      break;
    if ( ++v1 >= 8 )
      return 1i64;
  }
  stbi__g_failure_reason = "bad png sig";
  return 0i64;
}

/*
==============
stbi__compute_huffman_codes
==============
*/
__int64 stbi__compute_huffman_codes(stbi__zbuf *a)
{
  int num_bits; 
  unsigned int code_buffer; 
  unsigned __int8 *zbuffer_end; 
  unsigned __int8 *zbuffer; 
  unsigned __int8 v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  unsigned __int8 v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  unsigned __int8 *v20; 
  unsigned int v21; 
  unsigned __int8 *v22; 
  unsigned __int8 v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  unsigned __int8 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  unsigned int v40; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  unsigned __int8 v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 
  int v48; 
  int v49; 
  unsigned __int8 v50; 
  unsigned __int8 *v51; 
  unsigned int v52; 
  unsigned __int8 *v53; 
  unsigned __int8 v54; 
  int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned __int8 *v58; 
  unsigned int v59; 
  unsigned __int8 *v60; 
  unsigned __int8 v61; 
  int v62; 
  unsigned int v63; 
  int v64; 
  unsigned __int8 *v65; 
  unsigned int v66; 
  unsigned __int8 *v67; 
  unsigned __int8 v68; 
  int v69; 
  unsigned int v70; 
  int v71; 
  stbi__zhuffman z; 
  unsigned __int8 sizelist[8]; 
  __int64 v75; 
  __int16 v76; 
  char v77; 
  unsigned __int8 v79[464]; 

  num_bits = a->num_bits;
  code_buffer = a->code_buffer;
  if ( num_bits < 5 )
  {
    zbuffer_end = a->zbuffer_end;
    do
    {
      zbuffer = a->zbuffer;
      if ( a->zbuffer < zbuffer_end )
      {
        v6 = *zbuffer;
        a->zbuffer = zbuffer + 1;
      }
      else
      {
        v6 = 0;
      }
      v7 = v6 << num_bits;
      num_bits += 8;
      v8 = code_buffer | v7;
      a->num_bits = num_bits;
      a->code_buffer = v8;
      code_buffer = v8;
    }
    while ( num_bits <= 24 );
  }
  v9 = num_bits - 5;
  v10 = code_buffer >> 5;
  a->code_buffer = code_buffer >> 5;
  a->num_bits = v9;
  v11 = (code_buffer & 0x1F) + 257;
  if ( v9 < 5 )
  {
    v12 = a->zbuffer_end;
    v13 = code_buffer >> 5;
    do
    {
      v14 = a->zbuffer;
      if ( a->zbuffer < v12 )
      {
        v15 = *v14;
        a->zbuffer = v14 + 1;
      }
      else
      {
        v15 = 0;
      }
      v16 = v15 << v9;
      v9 += 8;
      v10 = v13 | v16;
      a->num_bits = v9;
      a->code_buffer = v10;
      v13 = v10;
    }
    while ( v9 <= 24 );
  }
  v17 = v9 - 5;
  v18 = v10 >> 5;
  v19 = v10 & 0x1F;
  a->code_buffer = v18;
  a->num_bits = v9 - 5;
  if ( v9 - 5 < 4 )
  {
    v20 = a->zbuffer_end;
    v21 = v18;
    do
    {
      v22 = a->zbuffer;
      if ( a->zbuffer < v20 )
      {
        v23 = *v22;
        a->zbuffer = v22 + 1;
      }
      else
      {
        v23 = 0;
      }
      v24 = v23 << v17;
      v17 += 8;
      v18 = v21 | v24;
      a->num_bits = v17;
      a->code_buffer = v18;
      v21 = v18;
    }
    while ( v17 <= 24 );
  }
  *(_QWORD *)sizelist = 0i64;
  v25 = v18 >> 4;
  v26 = v19 + v11 + 1;
  v27 = v17 - 4;
  a->code_buffer = v18 >> 4;
  a->num_bits = v27;
  v28 = 0;
  v75 = 0i64;
  v76 = 0;
  v29 = (v18 & 0xF) + 4;
  v77 = 0;
  v30 = 0i64;
  v31 = v27;
  v32 = v18 >> 4;
  do
  {
    v33 = v25;
    if ( v27 < 3 )
    {
      v34 = a->zbuffer_end;
      v27 = v31;
      do
      {
        v35 = a->zbuffer;
        if ( a->zbuffer < v34 )
        {
          v36 = *v35;
          a->zbuffer = v35 + 1;
        }
        else
        {
          v36 = 0;
        }
        v37 = v36 << v27;
        v27 += 8;
        v33 = v32 | v37;
        a->num_bits = v27;
        a->code_buffer = v33;
        v32 = v33;
      }
      while ( v27 <= 24 );
    }
    v38 = length_dezigzag[v30];
    v27 -= 3;
    a->num_bits = v27;
    v25 = v33 >> 3;
    ++v30;
    a->code_buffer = v33 >> 3;
    sizelist[v38] = v33 & 7;
    v32 = v33 >> 3;
    v31 = v27;
  }
  while ( v30 < v29 );
  if ( stbi__zbuild_huffman(&z, sizelist, 19) )
  {
    do
    {
      v39 = a->num_bits;
      v40 = a->code_buffer;
      if ( v39 < 16 )
      {
        v41 = a->zbuffer_end;
        do
        {
          v42 = a->zbuffer;
          if ( a->zbuffer < v41 )
          {
            v43 = *v42;
            a->zbuffer = v42 + 1;
          }
          else
          {
            v43 = 0;
          }
          v44 = v43 << v39;
          v39 += 8;
          v40 |= v44;
          a->num_bits = v39;
          a->code_buffer = v40;
        }
        while ( v39 <= 24 );
      }
      v45 = z.fast[v40 & 0x1FF];
      if ( z.fast[v40 & 0x1FF] )
      {
        v46 = v45 >> 9;
        a->code_buffer = v40 >> (v45 >> 9);
        v47 = v45 & 0x1FF;
        a->num_bits = v39 - v46;
      }
      else
      {
        v47 = stbi__zhuffman_decode_slowpath(a, &z);
      }
      if ( (unsigned int)v47 > 0x12 )
        goto LABEL_79;
      if ( v47 >= 16 )
      {
        v49 = a->num_bits;
        v50 = 0;
        if ( v47 == 16 )
        {
          if ( v49 >= 2 )
          {
            v56 = a->code_buffer;
          }
          else
          {
            v51 = a->zbuffer_end;
            v52 = a->code_buffer;
            do
            {
              v53 = a->zbuffer;
              if ( a->zbuffer < v51 )
              {
                v54 = *v53;
                a->zbuffer = v53 + 1;
              }
              else
              {
                v54 = 0;
              }
              v55 = v54 << v49;
              v49 += 8;
              v56 = v52 | v55;
              a->num_bits = v49;
              a->code_buffer = v56;
              v52 = v56;
            }
            while ( v49 <= 24 );
          }
          v57 = v56;
          v48 = (v56 & 3) + 3;
          a->code_buffer = v57 >> 2;
          a->num_bits = v49 - 2;
          if ( !v28 )
            goto LABEL_79;
          v50 = v79[v28 - 1];
        }
        else
        {
          if ( v47 == 17 )
          {
            if ( v49 >= 3 )
            {
              v63 = a->code_buffer;
            }
            else
            {
              v58 = a->zbuffer_end;
              v59 = a->code_buffer;
              do
              {
                v60 = a->zbuffer;
                if ( a->zbuffer < v58 )
                {
                  v61 = *v60;
                  a->zbuffer = v60 + 1;
                }
                else
                {
                  v61 = 0;
                }
                v62 = v61 << v49;
                v49 += 8;
                v63 = v59 | v62;
                a->num_bits = v49;
                a->code_buffer = v63;
                v59 = v63;
              }
              while ( v49 <= 24 );
            }
            a->code_buffer = v63 >> 3;
            v48 = (v63 & 7) + 3;
            v64 = v49 - 3;
          }
          else
          {
            if ( v49 >= 7 )
            {
              v70 = a->code_buffer;
            }
            else
            {
              v65 = a->zbuffer_end;
              v66 = a->code_buffer;
              do
              {
                v67 = a->zbuffer;
                if ( a->zbuffer < v65 )
                {
                  v68 = *v67;
                  a->zbuffer = v67 + 1;
                }
                else
                {
                  v68 = 0;
                }
                v69 = v68 << v49;
                v49 += 8;
                v70 = v66 | v69;
                a->num_bits = v49;
                a->code_buffer = v70;
                v66 = v70;
              }
              while ( v49 <= 24 );
            }
            a->code_buffer = v70 >> 7;
            v48 = (v70 & 0x7F) + 11;
            v64 = v49 - 7;
          }
          a->num_bits = v64;
        }
        if ( v26 - v28 < v48 )
          goto LABEL_79;
        memset_0(&v79[v28], v50, (unsigned int)v48);
      }
      else
      {
        v48 = 1;
        v79[v28] = v47;
      }
      v71 = v48 + v28;
      v28 = v71;
    }
    while ( v71 < v26 );
    if ( v71 != v26 )
    {
LABEL_79:
      stbi__g_failure_reason = "bad codelengths";
      return 0i64;
    }
    if ( stbi__zbuild_huffman(&a->z_length, v79, v11) && stbi__zbuild_huffman(&a->z_distance, &v79[v11], v19 + 1) )
      return 1i64;
  }
  return 0i64;
}

/*
==============
stbi__convert_format16
==============
*/
unsigned __int8 *stbi__convert_format16(unsigned __int16 *data, int img_n, int req_comp, unsigned int x, unsigned int y)
{
  __int64 v10; 
  unsigned __int8 *v11; 
  unsigned __int64 v12; 
  signed int i; 
  unsigned __int16 *v14; 
  unsigned __int16 *v15; 
  signed int j; 
  signed int k; 
  unsigned __int16 v18; 
  signed int m; 
  unsigned __int16 v20; 
  signed int n; 
  signed int ii; 
  unsigned __int16 v23; 
  signed int jj; 
  unsigned __int16 v25; 
  signed int nn; 
  unsigned __int16 v27; 
  signed int kk; 
  int v29; 
  int v30; 
  signed int mm; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  signed int i1; 
  int v37; 
  int v38; 
  signed int i2; 
  int v40; 
  int v41; 
  signed int i3; 
  unsigned __int16 v43; 

  if ( req_comp == img_n )
    return (unsigned __int8 *)data;
  v10 = 2 * y * x * req_comp;
  if ( alt_stb_malloc )
  {
    v11 = (unsigned __int8 *)alt_stb_malloc((unsigned int)v10);
  }
  else
  {
    v12 = stbi_mem.index + v10;
    if ( v12 >= stbi_mem.size )
      goto LABEL_49;
    v11 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index = v12;
  }
  if ( v11 )
  {
    for ( i = 0; i < (int)y; ++i )
    {
      v14 = &data[x * img_n * i];
      v15 = (unsigned __int16 *)&v11[2 * x * req_comp * i];
      switch ( req_comp + 8 * img_n )
      {
        case 10:
          for ( j = x - 1; j >= 0; v15 += 2 )
          {
            --j;
            *v15 = *v14++;
            v15[1] = -1;
          }
          break;
        case 11:
          for ( k = x - 1; k >= 0; v15 += 3 )
          {
            --k;
            v18 = *v14;
            v15[2] = *v14++;
            v15[1] = v18;
            *v15 = v18;
          }
          break;
        case 12:
          for ( m = x - 1; m >= 0; v15 += 4 )
          {
            --m;
            v20 = *v14;
            v15[2] = *v14++;
            v15[1] = v20;
            *v15 = v20;
            v15[3] = -1;
          }
          break;
        case 17:
          for ( n = x - 1; n >= 0; v14 += 2 )
          {
            --n;
            *v15++ = *v14;
          }
          break;
        case 19:
          for ( ii = x - 1; ii >= 0; v15 += 3 )
          {
            --ii;
            v23 = *v14;
            v15[2] = *v14;
            v14 += 2;
            v15[1] = v23;
            *v15 = v23;
          }
          break;
        case 20:
          for ( jj = x - 1; jj >= 0; *(v15 - 1) = *(v14 - 1) )
          {
            --jj;
            v25 = *v14;
            v15[2] = *v14;
            v14 += 2;
            v15[1] = v25;
            *v15 = v25;
            v15 += 4;
          }
          break;
        case 25:
          for ( kk = x - 1; kk >= 0; *(v15 - 1) = (77 * (unsigned int)*(v14 - 3) + 29 * v30 + v29) >> 8 )
          {
            ++v15;
            v29 = 150 * v14[1];
            v30 = v14[2];
            v14 += 3;
            --kk;
          }
          break;
        case 26:
          for ( mm = x - 1; mm >= 0; *(v15 - 2) = (unsigned int)(77 * v35 + v34 + v32) >> 8 )
          {
            v15 += 2;
            v32 = 150 * v14[1];
            v33 = v14[2];
            v14 += 3;
            v34 = 29 * v33;
            v35 = *(v14 - 3);
            *(v15 - 1) = -1;
            --mm;
          }
          break;
        case 28:
          for ( nn = x - 1; nn >= 0; *(v15 - 1) = -1 )
          {
            --nn;
            *v15 = *v14;
            v15 += 4;
            v27 = v14[1];
            v14 += 3;
            *(v15 - 3) = v27;
            *(v15 - 2) = *(v14 - 1);
          }
          break;
        case 33:
          for ( i1 = x - 1; i1 >= 0; *(v15 - 1) = (77 * (unsigned int)*(v14 - 4) + 29 * v38 + v37) >> 8 )
          {
            ++v15;
            v37 = 150 * v14[1];
            v38 = v14[2];
            v14 += 4;
            --i1;
          }
          break;
        case 34:
          for ( i2 = x - 1; i2 >= 0; *(v15 - 1) = *(v14 - 1) )
          {
            v15 += 2;
            v40 = 150 * v14[1];
            v41 = v14[2];
            v14 += 4;
            --i2;
            *(v15 - 2) = (77 * (unsigned int)*(v14 - 4) + 29 * v41 + v40) >> 8;
          }
          break;
        case 35:
          for ( i3 = x - 1; i3 >= 0; *(v15 - 1) = *(v14 - 2) )
          {
            --i3;
            *v15 = *v14;
            v15 += 3;
            v43 = v14[1];
            v14 += 4;
            *(v15 - 2) = v43;
          }
          break;
        default:
          continue;
      }
    }
    if ( alt_stb_free )
      alt_stb_free(data);
    return v11;
  }
LABEL_49:
  if ( alt_stb_free )
    alt_stb_free(data);
  stbi__g_failure_reason = "outofmem";
  return 0i64;
}

/*
==============
stbi__convert_format
==============
*/
unsigned __int8 *stbi__convert_format(unsigned __int8 *data, int img_n, int req_comp, unsigned int x, unsigned int y)
{
  int v10; 
  signed int v11; 
  unsigned __int8 *v12; 
  signed int i; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  signed int j; 
  signed int k; 
  unsigned __int8 v18; 
  signed int m; 
  unsigned __int8 v20; 
  signed int n; 
  signed int ii; 
  unsigned __int8 v23; 
  signed int jj; 
  unsigned __int8 v25; 
  signed int nn; 
  unsigned __int8 v27; 
  signed int kk; 
  __int16 v29; 
  __int16 v30; 
  signed int mm; 
  __int16 v32; 
  __int16 v33; 
  __int16 v34; 
  __int16 v35; 
  signed int i1; 
  __int16 v37; 
  __int16 v38; 
  signed int i2; 
  __int16 v40; 
  __int16 v41; 
  signed int i3; 
  unsigned __int8 v43; 

  if ( req_comp == img_n )
    return data;
  if ( req_comp < 0 || (x & 0x80000000) != 0 || x && req_comp > 0x7FFFFFFF / (int)x )
    goto LABEL_57;
  v10 = x * req_comp;
  if ( ((x * req_comp) & 0x80000000) != 0 || (y & 0x80000000) != 0 || y && v10 > 0x7FFFFFFF / (int)y )
    goto LABEL_57;
  v11 = y * v10;
  if ( alt_stb_malloc )
  {
    v12 = (unsigned __int8 *)alt_stb_malloc(v11);
  }
  else
  {
    if ( stbi_mem.index + v11 >= stbi_mem.size )
      goto LABEL_57;
    v12 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += v11;
  }
  if ( v12 )
  {
    for ( i = 0; i < (int)y; ++i )
    {
      v14 = &data[x * img_n * i];
      v15 = &v12[x * req_comp * i];
      switch ( req_comp + 8 * img_n )
      {
        case 10:
          for ( j = x - 1; j >= 0; v15 += 2 )
          {
            --j;
            *v15 = *v14++;
            v15[1] = -1;
          }
          break;
        case 11:
          for ( k = x - 1; k >= 0; v15 += 3 )
          {
            --k;
            v18 = *v14;
            v15[2] = *v14++;
            v15[1] = v18;
            *v15 = v18;
          }
          break;
        case 12:
          for ( m = x - 1; m >= 0; v15 += 4 )
          {
            --m;
            v20 = *v14;
            v15[2] = *v14++;
            v15[1] = v20;
            *v15 = v20;
            v15[3] = -1;
          }
          break;
        case 17:
          for ( n = x - 1; n >= 0; v14 += 2 )
          {
            --n;
            *v15++ = *v14;
          }
          break;
        case 19:
          for ( ii = x - 1; ii >= 0; v15 += 3 )
          {
            --ii;
            v23 = *v14;
            v15[2] = *v14;
            v14 += 2;
            v15[1] = v23;
            *v15 = v23;
          }
          break;
        case 20:
          for ( jj = x - 1; jj >= 0; *(v15 - 1) = *(v14 - 1) )
          {
            --jj;
            v25 = *v14;
            v15[2] = *v14;
            v14 += 2;
            v15[1] = v25;
            *v15 = v25;
            v15 += 4;
          }
          break;
        case 25:
          for ( kk = x - 1; kk >= 0; *(v15 - 1) = (unsigned __int16)(77 * *(v14 - 3) + 29 * v30 + v29) >> 8 )
          {
            ++v15;
            v29 = 150 * v14[1];
            v30 = v14[2];
            v14 += 3;
            --kk;
          }
          break;
        case 26:
          for ( mm = x - 1; mm >= 0; *(v15 - 2) = (unsigned __int16)(77 * v35 + v34 + v32) >> 8 )
          {
            v15 += 2;
            v32 = 150 * v14[1];
            v33 = v14[2];
            v14 += 3;
            v34 = 29 * v33;
            v35 = *(v14 - 3);
            *(v15 - 1) = -1;
            --mm;
          }
          break;
        case 28:
          for ( nn = x - 1; nn >= 0; *(v15 - 1) = -1 )
          {
            --nn;
            *v15 = *v14;
            v15 += 4;
            v27 = v14[1];
            v14 += 3;
            *(v15 - 3) = v27;
            *(v15 - 2) = *(v14 - 1);
          }
          break;
        case 33:
          for ( i1 = x - 1; i1 >= 0; *(v15 - 1) = (unsigned __int16)(77 * *(v14 - 4) + 29 * v38 + v37) >> 8 )
          {
            ++v15;
            v37 = 150 * v14[1];
            v38 = v14[2];
            v14 += 4;
            --i1;
          }
          break;
        case 34:
          for ( i2 = x - 1; i2 >= 0; *(v15 - 1) = *(v14 - 1) )
          {
            v15 += 2;
            v40 = 150 * v14[1];
            v41 = v14[2];
            v14 += 4;
            --i2;
            *(v15 - 2) = (unsigned __int16)(77 * *(v14 - 4) + 29 * v41 + v40) >> 8;
          }
          break;
        case 35:
          for ( i3 = x - 1; i3 >= 0; *(v15 - 1) = *(v14 - 2) )
          {
            --i3;
            *v15 = *v14;
            v15 += 3;
            v43 = v14[1];
            v14 += 4;
            *(v15 - 2) = v43;
          }
          break;
        default:
          continue;
      }
    }
    if ( alt_stb_free )
      alt_stb_free(data);
    return v12;
  }
LABEL_57:
  if ( alt_stb_free )
    alt_stb_free(data);
  stbi__g_failure_reason = "outofmem";
  return 0i64;
}

/*
==============
stbi__create_png_image
==============
*/
int stbi__create_png_image(stbi__png *a, unsigned __int8 *image_data, unsigned int image_data_len, int out_n, int depth, int color, int interlaced)
{
  unsigned __int8 *v7; 
  stbi__context *s; 
  unsigned int v10; 
  int v11; 
  int img_y; 
  int img_x; 
  int v15; 
  int v16; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  stbi__context *v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  unsigned int x; 
  unsigned int v25; 
  __int64 v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  unsigned int raw_len; 
  unsigned __int8 *v36; 
  int v37; 
  int v38; 
  int v39; 
  unsigned int v41; 
  int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  int y; 
  int v47; 
  unsigned int v48; 
  unsigned __int8 *v49; 
  __int64 v50; 
  __int128 v51; 
  int v52; 
  int v53; 
  int v54; 
  __int128 v55; 
  int v56; 
  __int64 v57; 
  __int128 v58; 
  int v59; 
  int v60; 
  int v61; 
  __int128 v62; 
  __int64 v63; 
  int v64; 

  v49 = image_data;
  v7 = image_data;
  raw_len = image_data_len;
  s = a->s;
  v10 = image_data_len;
  v11 = out_n * ((depth == 16) + 1);
  if ( !interlaced )
    return stbi__create_png_image_raw(a, image_data, image_data_len, out_n, s->img_x, s->img_y, depth, color);
  img_y = s->img_y;
  img_x = s->img_x;
  if ( img_x < 0 || img_y < 0 || img_y && img_x > 0x7FFFFFFF / img_y )
    goto LABEL_15;
  v15 = img_y * img_x;
  if ( v15 < 0 || v11 < 0 || v11 && v15 > 0x7FFFFFFF / v11 )
    goto LABEL_15;
  v16 = v11 * v15;
  if ( !alt_stb_malloc )
  {
    if ( v16 + stbi_mem.index < stbi_mem.size )
    {
      stbi_mem.old_index = stbi_mem.index;
      v36 = &stbi_mem.data[stbi_mem.index];
      v7 = image_data;
      stbi_mem.index += v16;
      goto LABEL_16;
    }
LABEL_15:
    v36 = NULL;
    goto LABEL_16;
  }
  v17 = (unsigned __int8 *)alt_stb_malloc(v16);
  v10 = raw_len;
  v36 = v17;
LABEL_16:
  v18 = 0;
  v39 = 0;
  v19 = 0i64;
  v50 = 0i64;
  while ( 1 )
  {
    v20 = a->s;
    v55 = _xmm;
    v62 = _xmm;
    v51 = _xmm;
    v52 = 2;
    v53 = 2;
    v54 = 1;
    v21 = *(_DWORD *)((char *)&v51 + v19);
    v56 = 0;
    v57 = 1i64;
    v22 = v21 - *(_DWORD *)((char *)&v55 + v19);
    v44 = *(_DWORD *)((char *)&v55 + v19);
    v23 = v20->img_x;
    v58 = _xmm;
    v59 = 4;
    v60 = 2;
    v61 = 2;
    x = (v22 + v23 - 1) / v21;
    v43 = v21;
    v25 = *(_DWORD *)((char *)&v58 + v19);
    v26 = x;
    v45 = x;
    v63 = 2i64;
    v64 = 1;
    v41 = v25;
    if ( x )
    {
      v42 = *(_DWORD *)((char *)&v62 + v19);
      y = (v20->img_y - v42 + v25 - 1) / v25;
      v27 = y;
      if ( y )
        break;
    }
LABEL_31:
    ++v18;
    v19 += 4i64;
    v39 = v18;
    v50 = v19;
    if ( v18 >= 7 )
    {
      a->out = v36;
      return 1;
    }
  }
  v28 = y * (((int)(depth * x * v20->img_n + 7) >> 3) + 1);
  v48 = v28;
  if ( stbi__create_png_image_raw(a, v7, v10, out_n, x, y, depth, color) )
  {
    v29 = 0;
    v37 = 0;
    if ( y > 0 )
    {
      v30 = 0;
      v31 = v11 * v26;
      v38 = 0;
      v47 = v11 * v26;
      do
      {
        if ( (int)v26 > 0 )
        {
          v32 = v30;
          v33 = v42 + v29 * v41;
          v34 = v11 * v44;
          do
          {
            memcpy_0(&v36[v11 * v33 * a->s->img_x + v34], &a->out[v32], v11);
            v33 = v42 + v29 * v41;
            v32 += v11;
            v34 += v11 * v43;
            --v26;
          }
          while ( v26 );
          v29 = v37;
          v30 = v38;
          v26 = v45;
          v27 = y;
          v31 = v47;
        }
        ++v29;
        v30 += v31;
        v37 = v29;
        v38 = v30;
      }
      while ( v29 < v27 );
      v28 = v48;
      v19 = v50;
    }
    if ( alt_stb_free )
      alt_stb_free(a->out);
    v18 = v39;
    v10 = raw_len - v28;
    v7 = &v49[v28];
    raw_len -= v28;
    v49 = v7;
    goto LABEL_31;
  }
  if ( alt_stb_free )
    alt_stb_free(v36);
  return 0;
}

/*
==============
stbi__create_png_image_raw
==============
*/
__int64 stbi__create_png_image_raw(stbi__png *a, unsigned __int8 *raw, unsigned int raw_len, int out_n, unsigned int x, unsigned int y, int depth, int color)
{
  signed int v8; 
  unsigned int v10; 
  int v11; 
  stbi__png *v13; 
  int v14; 
  int v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 *v27; 
  unsigned __int8 *v28; 
  unsigned __int8 *v29; 
  signed __int64 v30; 
  unsigned __int8 *v31; 
  signed __int64 v32; 
  __int64 v33; 
  unsigned __int8 v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  unsigned __int8 *v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  _BYTE *v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int8 *v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  unsigned __int64 v48; 
  unsigned __int8 *v49; 
  _OWORD *v50; 
  unsigned __int8 *v59; 
  __int64 v60; 
  __int64 v61; 
  unsigned __int8 *v62; 
  __int64 v63; 
  int v64; 
  int v65; 
  _BYTE *v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  unsigned __int64 v70; 
  unsigned __int8 *v71; 
  unsigned __int8 *v72; 
  __int64 v73; 
  unsigned __int8 *v74; 
  unsigned __int8 *v75; 
  __int64 v76; 
  unsigned __int8 *v77; 
  __int64 v78; 
  unsigned __int8 v79; 
  __int64 v80; 
  unsigned __int8 *v81; 
  __int64 v82; 
  unsigned __int8 *v83; 
  __int64 v84; 
  int v85; 
  __int64 v86; 
  unsigned __int64 v87; 
  unsigned __int8 *v88; 
  __int64 v89; 
  __int64 v90; 
  unsigned __int64 v91; 
  signed __int64 v92; 
  unsigned __int64 v93; 
  unsigned __int8 *v94; 
  signed __int64 v103; 
  unsigned __int8 *v104; 
  unsigned __int64 v105; 
  __int64 v106; 
  unsigned __int64 v107; 
  unsigned __int8 *v108; 
  int v109; 
  int v110; 
  unsigned __int8 *v111; 
  unsigned __int64 v112; 
  unsigned __int8 *v113; 
  unsigned __int64 v114; 
  unsigned __int8 *v115; 
  unsigned __int8 v116; 
  unsigned __int64 v117; 
  unsigned __int8 *v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  const unsigned __int8 *v122; 
  __int64 v123; 
  unsigned __int8 *v124; 
  unsigned __int8 *v125; 
  unsigned __int8 *v126; 
  char v127; 
  int v128; 
  unsigned __int64 v129; 
  char v130; 
  int v131; 
  unsigned __int64 v132; 
  char v133; 
  char v134; 
  int v135; 
  unsigned __int64 v136; 
  char v137; 
  __int64 v138; 
  unsigned __int8 *v139; 
  unsigned __int8 *v140; 
  unsigned __int8 *v141; 
  unsigned __int8 v142; 
  unsigned __int8 *out; 
  unsigned __int8 *v144; 
  unsigned int v145; 
  __int64 v146; 
  __int16 v147; 
  __int16 v148; 
  int v149; 
  int img_n; 
  int v151; 
  unsigned __int8 *v152; 
  __int64 v153; 
  unsigned int v154; 
  unsigned int v155; 
  unsigned int v156; 
  unsigned int v157; 
  unsigned __int8 *v158; 
  __int64 v159; 
  __int64 v160; 
  _BYTE *v161; 
  unsigned __int64 v162; 
  unsigned __int8 *v163; 
  int v164; 
  __int64 v165; 
  __int64 v166; 

  v8 = x;
  v10 = y;
  v11 = out_n;
  v164 = 0;
  v154 = x;
  v13 = a;
  v14 = out_n * ((depth == 16) + 1);
  v157 = x * v14;
  img_n = a->s->img_n;
  v15 = ((depth == 16) + 1) * img_n;
  v149 = v15;
  if ( (x & 0x80000000) != 0 || (y & 0x80000000) != 0 || y && (int)x > 0x7FFFFFFF / (int)y || ((y * x) & 0x80000000) != 0 || v14 < 0 || v14 && (int)(y * x) > 0x7FFFFFFF / v14 )
    goto LABEL_13;
  if ( alt_stb_malloc )
  {
    v16 = (unsigned __int8 *)alt_stb_malloc((int)(y * x * v14));
    v15 = ((depth == 16) + 1) * img_n;
    v17 = 0i64;
    v8 = x;
    goto LABEL_14;
  }
  if ( stbi_mem.index + (int)(y * x * v14) >= stbi_mem.size )
  {
LABEL_13:
    v17 = 0i64;
    v16 = NULL;
  }
  else
  {
    v16 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    v17 = 0i64;
    stbi_mem.index += (int)(y * x * v14);
  }
LABEL_14:
  v13->out = v16;
  if ( !v16 )
  {
    stbi__g_failure_reason = "outofmem";
    return 0i64;
  }
  if ( img_n < 0 || v8 < 0 || v8 && img_n > 0x7FFFFFFF / v8 )
    goto LABEL_224;
  v19 = v8 * img_n;
  v151 = v8 * img_n;
  if ( v8 * img_n < 0 )
    goto LABEL_224;
  v20 = depth;
  if ( depth < 0 )
    goto LABEL_224;
  if ( depth )
  {
    if ( v19 > 0x7FFFFFFF / depth )
    {
LABEL_224:
      stbi__g_failure_reason = "too large";
      return 0i64;
    }
    v20 = depth;
  }
  if ( v20 * v19 > 2147483640 )
    goto LABEL_224;
  v21 = (unsigned int)(v20 * v19 + 7) >> 3;
  v156 = v21;
  if ( raw_len < y * (v21 + 1) )
  {
    stbi__g_failure_reason = "not enough pixels";
    return 0i64;
  }
  v155 = 0;
  v22 = 0;
  if ( y )
  {
    v23 = v15;
    v24 = img_n;
    v160 = v15;
    v25 = v14;
    while ( 1 )
    {
      v26 = *raw;
      v27 = raw + 1;
      v28 = &a->out[v157 * v22];
      v166 = v157 * v22;
      v152 = v28;
      if ( (unsigned int)v26 > 4 )
      {
        stbi__g_failure_reason = "invalid filter";
        return 0i64;
      }
      if ( v20 < 8 )
      {
        v149 = 1;
        v23 = 1i64;
        v160 = 1i64;
        v154 = v21;
        v28 += v8 * v11 - v21;
        v152 = v28;
      }
      v29 = &v28[-v157];
      v158 = v29;
      if ( !v22 )
        LODWORD(v26) = first_row_filter[v26];
      if ( v23 > 0 )
      {
        v30 = v29 - v27;
        v31 = v27;
        v32 = v28 - v27;
        v33 = v23;
        while ( 2 )
        {
          switch ( (int)v26 )
          {
            case 0:
              do
              {
                v31[v32] = *v31;
                ++v31;
                --v33;
              }
              while ( v33 );
              break;
            case 1:
              do
              {
                v31[v32] = *v31;
                ++v31;
                --v33;
              }
              while ( v33 );
              break;
            case 2:
              do
              {
                v31[v32] = *v31 + v31[v30];
                ++v31;
                --v33;
              }
              while ( v33 );
              break;
            case 3:
              do
              {
                v34 = v31[v30];
                ++v31;
                v31[v32 - 1] = *(v31 - 1) + (v34 >> 1);
                --v33;
              }
              while ( v33 );
              break;
            case 4:
              do
              {
                v31[v32] = *v31 + stbi__paeth(0, v31[v30], 0);
                ++v31;
                --v33;
              }
              while ( v33 );
              v28 = v152;
              v17 = 0i64;
              v29 = v158;
              v8 = x;
              v20 = depth;
              break;
            case 5:
              do
              {
                v31[v32] = *v31;
                ++v31;
                --v33;
              }
              while ( v33 );
              break;
            case 6:
              do
              {
                v31[v32] = *v31;
                ++v31;
                --v33;
              }
              while ( v33 );
              break;
            default:
              ++v31;
              if ( --v33 )
                continue;
              break;
          }
          break;
        }
        v24 = img_n;
        v11 = out_n;
      }
      if ( v20 == 8 )
        break;
      if ( v20 != 16 )
      {
        v35 = 1i64;
        v36 = 1i64;
LABEL_64:
        v37 = v149;
        goto LABEL_65;
      }
      if ( img_n != v11 )
        *(_WORD *)&v28[v23] = -1;
      v37 = v149;
      v35 = v25;
      v36 = v149;
LABEL_65:
      raw = &v27[v36];
      v38 = &v29[v35];
      v39 = (unsigned __int64)&v28[v35];
      v163 = &v29[v35];
      if ( depth < 8 || img_n == out_n )
      {
        v85 = v149 * (v154 - 1);
        v86 = v85;
        switch ( (int)v26 )
        {
          case 0:
            memcpy_0((void *)v39, raw, v85);
            break;
          case 1:
            if ( v85 > 0 )
            {
              v87 = v39 - (_QWORD)raw;
              v88 = raw;
              do
              {
                v88[v87] = *v88 + v88[v87 - v23];
                ++v88;
                --v86;
              }
              while ( v86 );
            }
            break;
          case 2:
            v89 = 0i64;
            if ( v85 > 0 && (unsigned int)v85 >= 0x40 )
            {
              v90 = v85 - 1;
              v91 = v39 + v90;
              if ( (v39 > (unsigned __int64)&raw[v90] || v91 < (unsigned __int64)raw) && (v39 > (unsigned __int64)&v38[v90] || v91 < (unsigned __int64)v38) )
              {
                v92 = v38 - raw;
                v93 = v39 - (_QWORD)raw;
                v94 = raw;
                do
                {
                  _XMM2 = *(_OWORD *)&v94[v92 + 16];
                  _XMM1 = *(_OWORD *)&v94[v92];
                  __asm { vpaddb  xmm1, xmm1, xmmword ptr [rax] }
                  *(_OWORD *)&v94[v93] = _XMM1;
                  __asm { vpaddb  xmm1, xmm2, xmmword ptr [rax+10h] }
                  _XMM2 = *(_OWORD *)&v94[v92 + 32];
                  *(_OWORD *)&v94[v93 + 16] = _XMM1;
                  __asm { vpaddb  xmm1, xmm2, xmmword ptr [rax+20h] }
                  _XMM2 = *(_OWORD *)&v94[v92 + 48];
                  *(_OWORD *)&v94[v93 + 32] = _XMM1;
                  __asm { vpaddb  xmm1, xmm2, xmmword ptr [rax+30h] }
                  v89 += 64i64;
                  *(_OWORD *)&v94[v93 + 48] = _XMM1;
                  v94 += 64;
                }
                while ( v89 < v85 - (v85 & 0x3F) );
              }
            }
            if ( v89 < v85 )
            {
              v103 = v38 - raw;
              v104 = &raw[v89];
              v105 = v39 - (_QWORD)raw;
              v106 = v85 - v89;
              do
              {
                v104[v105] = *v104 + v104[v103];
                ++v104;
                --v106;
              }
              while ( v106 );
            }
            break;
          case 3:
            if ( v85 > 0 )
            {
              v107 = v39 - (_QWORD)v38;
              v108 = (unsigned __int8 *)(raw - v38);
              do
              {
                v109 = v38[v107 - v23];
                v110 = *v38++;
                v38[v107 - 1] = v38[(_QWORD)v108 - 1] + ((unsigned int)(v110 + v109) >> 1);
                --v86;
              }
              while ( v86 );
            }
            break;
          case 4:
            if ( v85 > 0 )
            {
              v111 = &v38[-v39];
              v112 = v39 - v23;
              v113 = &raw[v23 - v39];
              do
              {
                *(_BYTE *)(v23 + v112) = v113[v112] + stbi__paeth(*(unsigned __int8 *)v112, v111[v23 + v112], v111[v112]);
                ++v112;
                --v86;
              }
              while ( v86 );
            }
            break;
          case 5:
            if ( v85 > 0 )
            {
              v114 = v39 - (_QWORD)raw;
              v115 = raw;
              do
              {
                v116 = v115[v114 - v23];
                ++v115;
                v115[v114 - 1] = *(v115 - 1) + (v116 >> 1);
                --v86;
              }
              while ( v86 );
            }
            break;
          case 6:
            if ( v85 > 0 )
            {
              v117 = v39 - (_QWORD)raw;
              v118 = raw;
              do
              {
                v118[v117] = *v118 + v118[v117 - v23];
                ++v118;
                --v86;
              }
              while ( v86 );
            }
            break;
          default:
            break;
        }
        v20 = depth;
        raw += v85;
      }
      else
      {
        switch ( (int)v26 )
        {
          case 0:
            if ( v8 != 1 )
            {
              v40 = (unsigned int)(v8 - 1);
              do
              {
                if ( v23 > 0 )
                {
                  v41 = (_BYTE *)v39;
                  v42 = v23;
                  do
                  {
                    *v41 = raw[(_QWORD)v41 - v39];
                    ++v41;
                    --v42;
                  }
                  while ( v42 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                --v40;
              }
              while ( v40 );
            }
            break;
          case 1:
            if ( v8 != 1 )
            {
              v43 = (unsigned int)(v8 - 1);
              do
              {
                if ( v23 > 0 )
                {
                  v44 = raw;
                  v45 = v23;
                  do
                  {
                    v44[v39 - (_QWORD)raw] = *v44 + v44[v39 - v25 - (_QWORD)raw];
                    ++v44;
                    --v45;
                  }
                  while ( v45 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                --v43;
              }
              while ( v43 );
            }
            break;
          case 2:
            if ( v8 != 1 )
            {
              v46 = (unsigned int)(v8 - 1);
              do
              {
                if ( v37 > 0 && (unsigned int)v37 >= 0x40 )
                {
                  v17 = 0i64;
                  v47 = v37 - 1;
                  v48 = v47 + v39;
                  if ( (v39 > (unsigned __int64)&raw[v47] || v48 < (unsigned __int64)raw) && (v39 > (unsigned __int64)&v38[v47] || v48 < (unsigned __int64)v38) )
                  {
                    v49 = &raw[-v39];
                    v50 = (_OWORD *)(v39 + 16);
                    do
                    {
                      _XMM2 = *(_OWORD *)&v49[(_QWORD)v50];
                      _XMM1 = *(_OWORD *)((char *)v50 + (_QWORD)v49 - 16);
                      __asm { vpaddb  xmm1, xmm1, xmmword ptr [rdx+rax-10h] }
                      *(v50 - 1) = _XMM1;
                      __asm { vpaddb  xmm1, xmm2, xmmword ptr [rdx+rax] }
                      _XMM2 = *(_OWORD *)((char *)v50 + (_QWORD)v49 + 16);
                      *v50 = _XMM1;
                      __asm { vpaddb  xmm1, xmm2, xmmword ptr [rdx+rax+10h] }
                      _XMM2 = *(_OWORD *)((char *)v50 + (_QWORD)v49 + 32);
                      v50[1] = _XMM1;
                      __asm { vpaddb  xmm1, xmm2, xmmword ptr [rdx+rax+20h] }
                      v17 += 64i64;
                      v50[2] = _XMM1;
                      v50 += 4;
                    }
                    while ( v17 < v37 - (v37 & 0x3F) );
                  }
                }
                if ( v17 < v23 )
                {
                  v59 = &raw[v17];
                  v60 = v23 - v17;
                  do
                  {
                    v59[v39 - (_QWORD)raw] = *v59 + v59[v38 - raw];
                    ++v59;
                    --v60;
                  }
                  while ( v60 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                v38 += v25;
                v17 = 0i64;
                --v46;
              }
              while ( v46 );
            }
            break;
          case 3:
            if ( v8 != 1 )
            {
              v61 = (unsigned int)(v8 - 1);
              do
              {
                if ( v23 > 0 )
                {
                  v62 = v38;
                  v63 = v23;
                  do
                  {
                    v64 = v62[v39 - v25 - (_QWORD)v38];
                    v65 = *v62++;
                    v62[v39 - (_QWORD)v38 - 1] = v62[raw - v38 - 1] + ((unsigned int)(v65 + v64) >> 1);
                    --v63;
                  }
                  while ( v63 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                v38 += v25;
                --v61;
              }
              while ( v61 );
            }
            break;
          case 4:
            if ( v8 != 1 )
            {
              v66 = (_BYTE *)(v23 + v39);
              v153 = v37;
              v67 = v25 + v23;
              v68 = (unsigned int)(v8 - 1);
              v69 = v37;
              v70 = v25 - v39;
              v162 = v25 - v39;
              v161 = (_BYTE *)(v23 + v39);
              v165 = v25 + v23;
              v159 = v68;
              do
              {
                if ( v23 > 0 )
                {
                  v71 = &v66[-v67];
                  v72 = &v38[-v39];
                  v73 = v23;
                  v74 = &v38[v70];
                  v75 = &raw[v70];
                  do
                  {
                    v71[v25] = v71[(_QWORD)v75] + stbi__paeth(*v71, v71[(_QWORD)v74], v72[(_QWORD)v71]);
                    ++v71;
                    --v73;
                  }
                  while ( v73 );
                  v38 = v163;
                  v23 = v160;
                  v70 = v162;
                  v66 = v161;
                  v68 = v159;
                  v69 = v153;
                  v67 = v165;
                }
                v70 -= v25;
                *v66 = -1;
                v66 += v25;
                v162 = v70;
                v38 += v25;
                v161 = v66;
                raw += v69;
                v163 = v38;
                v39 += v25;
                v159 = --v68;
              }
              while ( v68 );
            }
            break;
          case 5:
            if ( v8 != 1 )
            {
              v76 = (unsigned int)(v8 - 1);
              do
              {
                if ( v23 > 0 )
                {
                  v77 = raw;
                  v78 = v23;
                  do
                  {
                    v79 = v77[v39 - v25 - (_QWORD)raw];
                    ++v77;
                    v77[v39 - (_QWORD)raw - 1] = *(v77 - 1) + (v79 >> 1);
                    --v78;
                  }
                  while ( v78 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                --v76;
              }
              while ( v76 );
            }
            break;
          case 6:
            if ( v8 != 1 )
            {
              v80 = (unsigned int)(v8 - 1);
              do
              {
                if ( v23 > 0 )
                {
                  v81 = raw;
                  v82 = v23;
                  do
                  {
                    v81[v39 - (_QWORD)raw] = *v81 + v81[v39 - v25 - (_QWORD)raw];
                    ++v81;
                    --v82;
                  }
                  while ( v82 );
                }
                *(_BYTE *)(v23 + v39) = -1;
                raw += v37;
                v39 += v25;
                --v80;
              }
              while ( v80 );
            }
            break;
          default:
            break;
        }
        v20 = depth;
        if ( depth == 16 )
        {
          v8 = x;
          v83 = &a->out[v166];
          if ( x )
          {
            v84 = x;
            do
            {
              v83[v23 + 1] = -1;
              v83 += v25;
              --v84;
            }
            while ( v84 );
          }
          goto LABEL_165;
        }
      }
      v8 = x;
LABEL_165:
      v17 = 0i64;
      v11 = out_n;
      v22 = v155 + 1;
      v21 = v156;
      v24 = img_n;
      v155 = v22;
      if ( v22 >= y )
      {
        v19 = v151;
        v13 = a;
        v10 = y;
        goto LABEL_167;
      }
    }
    if ( img_n != v11 )
      v28[v24] = -1;
    v35 = v11;
    v36 = v24;
    goto LABEL_64;
  }
LABEL_167:
  if ( v20 >= 8 )
  {
    if ( v20 == 16 )
    {
      out = v13->out;
      v144 = out;
      v145 = v10 * v8 * v11;
      if ( v145 )
      {
        v146 = v145;
        do
        {
          v147 = *out;
          out += 2;
          v148 = v144[1];
          v144 += 2;
          *((_WORD *)v144 - 1) = v148 | (v147 << 8);
          --v146;
        }
        while ( v146 );
      }
    }
  }
  else if ( v10 )
  {
    v119 = v8;
    v120 = (unsigned int)(v8 * v11);
    v121 = v21;
    v122 = &stbi__depth_scale_table[v20];
    while ( 1 )
    {
      v123 = v157 * (unsigned int)v17;
      v124 = a->out;
      v125 = &v124[v123];
      v126 = &v124[v123 - v121 + v120];
      if ( color )
        v127 = 1;
      else
        v127 = *v122;
      if ( v20 == 4 )
      {
        v128 = v19;
        if ( v19 >= 2 )
        {
          v129 = (unsigned __int64)(unsigned int)v19 >> 1;
          v128 = v19 - 2 * ((unsigned int)v19 >> 1);
          do
          {
            *v125 = v127 * (*v126 >> 4);
            v130 = *v126++;
            v125[1] = v127 * (v130 & 0xF);
            v125 += 2;
            --v129;
          }
          while ( v129 );
        }
        if ( v128 > 0 )
          *v125 = v127 * (*v126 >> 4);
      }
      else
      {
        if ( v20 == 2 )
        {
          v131 = v19;
          if ( v19 >= 4 )
          {
            v132 = (unsigned __int64)(unsigned int)v19 >> 2;
            v131 = v19 - 4 * ((unsigned int)v19 >> 2);
            do
            {
              *v125 = v127 * (*v126 >> 6);
              v125[1] = v127 * ((*v126 >> 4) & 3);
              v125[2] = v127 * ((*v126 >> 2) & 3);
              v133 = *v126++;
              v125[3] = v127 * (v133 & 3);
              v125 += 4;
              --v132;
            }
            while ( v132 );
          }
          if ( v131 > 0 )
            *v125++ = v127 * (*v126 >> 6);
          if ( v131 > 1 )
            *v125++ = v127 * ((*v126 >> 4) & 3);
          if ( v131 <= 2 )
            goto LABEL_209;
          v134 = (*v126 >> 2) & 3;
        }
        else
        {
          if ( v20 != 1 )
            goto LABEL_209;
          v135 = v19;
          if ( v19 >= 8 )
          {
            v136 = (unsigned __int64)(unsigned int)v19 >> 3;
            v135 = v19 - 8 * ((unsigned int)v19 >> 3);
            do
            {
              *v125 = v127 * (*v126 >> 7);
              v125[1] = v127 * ((*v126 & 0x40) != 0);
              v125[2] = v127 * ((*v126 & 0x20) != 0);
              v125[3] = v127 * ((*v126 & 0x10) != 0);
              v125[4] = v127 * ((*v126 & 8) != 0);
              v125[5] = v127 * ((*v126 & 4) != 0);
              v125[6] = v127 * ((*v126 & 2) != 0);
              v137 = *v126++;
              v125[7] = v127 * (v137 & 1);
              v125 += 8;
              --v136;
            }
            while ( v136 );
          }
          if ( v135 > 0 )
            *v125++ = v127 * (*v126 >> 7);
          if ( v135 > 1 )
            *v125++ = v127 * ((*v126 & 0x40) != 0);
          if ( v135 > 2 )
            *v125++ = v127 * ((*v126 & 0x20) != 0);
          if ( v135 > 3 )
            *v125++ = v127 * ((*v126 & 0x10) != 0);
          if ( v135 > 4 )
            *v125++ = v127 * ((*v126 & 8) != 0);
          if ( v135 > 5 )
            *v125++ = v127 * ((*v126 & 4) != 0);
          if ( v135 <= 6 )
            goto LABEL_209;
          v134 = (*v126 & 2) != 0;
        }
        *v125 = v127 * v134;
      }
LABEL_209:
      if ( img_n != v11 )
      {
        v138 = v119 - 1;
        v139 = &a->out[v123];
        if ( img_n == 1 )
        {
          for ( ; v138 >= 0; --v138 )
          {
            v139[2 * v138 + 1] = -1;
            v139[2 * v138] = v139[v138];
          }
        }
        else if ( v138 >= 0 )
        {
          v140 = &v139[2 * v138 + v119];
          v141 = &v139[4 * v138 + 2];
          do
          {
            --v138;
            v141[1] = -1;
            v142 = v140[1];
            v140 -= 3;
            *v141 = v142;
            v141 -= 4;
            v141[3] = v140[3];
            v141[2] = v140[2];
          }
          while ( v138 >= 0 );
        }
      }
      v20 = depth;
      LODWORD(v17) = v164 + 1;
      v19 = v151;
      v164 = v17;
      if ( (unsigned int)v17 >= y )
        return 1i64;
    }
  }
  return 1i64;
}

/*
==============
stbi__decode_jpeg_header
==============
*/
_BOOL8 stbi__decode_jpeg_header(stbi__jpeg *z, int scan)
{
  int v2; 
  int marker; 
  stbi__context *s; 

  v2 = 0;
  z->app14_color_transform = -1;
  z->jfif = 0;
  z->marker = -1;
  if ( stbi__get_marker(z) != 0xD8 )
  {
    stbi__g_failure_reason = "no SOI";
    return 0i64;
  }
  if ( scan == 1 )
    return 1i64;
  marker = stbi__get_marker(z);
  if ( marker == 192 )
  {
LABEL_14:
    LOBYTE(v2) = marker == 194;
    z->progressive = v2;
    return stbi__process_frame_header(z, scan) != 0;
  }
  while ( 1 )
  {
    if ( (unsigned int)(marker - 193) <= 1 )
      goto LABEL_14;
    if ( !stbi__process_marker(z, marker) )
      return 0i64;
    marker = stbi__get_marker(z);
    if ( marker == 255 )
      break;
LABEL_13:
    if ( marker == 192 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    s = z->s;
    if ( !z->s->io.read )
      break;
    if ( s->io.eof(s->io_user_data) )
    {
      if ( !s->read_from_callbacks )
        goto LABEL_17;
      break;
    }
LABEL_12:
    marker = stbi__get_marker(z);
    if ( marker != 255 )
      goto LABEL_13;
  }
  if ( s->img_buffer < s->img_buffer_end )
    goto LABEL_12;
LABEL_17:
  stbi__g_failure_reason = "no SOF";
  return 0i64;
}

/*
==============
stbi__decode_jpeg_image
==============
*/
__int64 stbi__decode_jpeg_image(stbi__jpeg *j)
{
  __int64 v1; 
  int marker; 
  stbi__context *s; 
  stbi__context *v5; 
  unsigned __int8 *img_buffer; 
  int v7; 
  unsigned __int8 v8; 
  stbi__context *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 
  int v14; 
  int v15; 
  const char *v16; 
  int v18; 
  __int16 **p_coeff; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  __int16 *v24; 

  v1 = 0i64;
  j->img_comp[0].raw_data = NULL;
  j->img_comp[0].raw_coeff = NULL;
  j->img_comp[1].raw_data = NULL;
  j->img_comp[1].raw_coeff = NULL;
  j->img_comp[2].raw_data = NULL;
  j->img_comp[2].raw_coeff = NULL;
  j->img_comp[3].raw_data = NULL;
  j->img_comp[3].raw_coeff = NULL;
  j->restart_interval = 0;
  if ( !stbi__decode_jpeg_header(j, 0) )
    return 0i64;
  marker = stbi__get_marker(j);
  if ( (unsigned __int8)marker == 217 )
    goto LABEL_31;
  do
  {
    if ( marker != 218 )
    {
      if ( marker == 220 )
      {
        v14 = stbi__get16be(j->s);
        v15 = stbi__get16be(j->s);
        if ( v14 == 4 )
        {
          if ( v15 == j->s->img_y )
            goto LABEL_30;
          v16 = "bad DNL height";
        }
        else
        {
          v16 = "bad DNL len";
        }
        stbi__g_failure_reason = v16;
      }
      else if ( stbi__process_marker(j, marker) )
      {
        goto LABEL_30;
      }
      return 0i64;
    }
    if ( !stbi__process_scan_header(j) || !stbi__parse_entropy_coded_data(j) )
      return 0i64;
    if ( j->marker != 0xFF )
      goto LABEL_30;
    while ( 1 )
    {
      s = j->s;
      if ( j->s->io.read )
      {
        if ( !s->io.eof(s->io_user_data) )
          goto LABEL_11;
        if ( !s->read_from_callbacks )
          goto LABEL_30;
      }
      if ( s->img_buffer >= s->img_buffer_end )
        goto LABEL_30;
LABEL_11:
      v5 = j->s;
      img_buffer = j->s->img_buffer;
      if ( img_buffer < j->s->img_buffer_end )
        goto LABEL_17;
      if ( v5->read_from_callbacks )
      {
        v7 = v5->io.read(v5->io_user_data, (char *)v5->buffer_start, v5->buflen);
        v5->img_buffer = v5->buffer_start;
        if ( v7 )
        {
          v5->img_buffer_end = &v5->buffer_start[v7];
        }
        else
        {
          v5->read_from_callbacks = 0;
          v5->img_buffer_end = &v5->buffer_start[1];
          v5->buffer_start[0] = 0;
        }
        img_buffer = v5->img_buffer;
LABEL_17:
        v8 = *img_buffer;
        v5->img_buffer = img_buffer + 1;
        if ( v8 == 0xFF )
          break;
      }
    }
    v9 = j->s;
    v10 = j->s->img_buffer;
    if ( v10 >= j->s->img_buffer_end )
    {
      if ( v9->read_from_callbacks )
      {
        stbi__refill_buffer(j->s);
        v12 = v9->img_buffer;
        v13 = *v12;
        v9->img_buffer = v12 + 1;
        j->marker = v13;
      }
      else
      {
        j->marker = 0;
      }
    }
    else
    {
      v11 = *v10;
      v9->img_buffer = v10 + 1;
      j->marker = v11;
    }
LABEL_30:
    marker = stbi__get_marker(j);
  }
  while ( (unsigned __int8)marker != 217 );
LABEL_31:
  if ( j->progressive )
  {
    v18 = 0;
    if ( j->s->img_n > 0 )
    {
      p_coeff = &j->img_comp[0].coeff;
      do
      {
        v20 = 0;
        v21 = (*((_DWORD *)p_coeff - 13) + 7) >> 3;
        v22 = (*((_DWORD *)p_coeff - 12) + 7) >> 3;
        if ( v22 > 0 )
        {
          do
          {
            v23 = 0;
            if ( v21 > 0 )
            {
              do
              {
                stbi__jpeg_dequantize(&(*p_coeff)[64 * (v23 + v20 * *((_DWORD *)p_coeff + 2))], j->dequant[(__int64)*((int *)p_coeff - 17)]);
                j->idct_block_kernel((unsigned __int8 *)&(*(p_coeff - 4))[4 * v20 * *((_DWORD *)p_coeff - 11) + v1], *((unsigned int *)p_coeff - 11), v24);
                ++v23;
                v1 += 4i64;
              }
              while ( v23 < v21 );
              v1 = 0i64;
            }
            ++v20;
          }
          while ( v20 < v22 );
        }
        ++v18;
        p_coeff += 12;
      }
      while ( v18 < j->s->img_n );
    }
  }
  return 1i64;
}

/*
==============
stbi__free_jpeg_components
==============
*/
__int64 stbi__free_jpeg_components(stbi__jpeg *z, int ncomp, int why)
{
  void (*v4)(void); 
  void **p_raw_data; 
  __int64 v6; 

  if ( ncomp > 0 )
  {
    v4 = (void (*)(void))alt_stb_free;
    p_raw_data = &z->img_comp[0].raw_data;
    v6 = (unsigned int)ncomp;
    do
    {
      if ( *p_raw_data )
      {
        if ( v4 )
        {
          v4();
          v4 = (void (*)(void))alt_stb_free;
        }
        *p_raw_data = NULL;
        *(p_raw_data - 1) = NULL;
      }
      if ( p_raw_data[1] )
      {
        if ( v4 )
        {
          v4();
          v4 = (void (*)(void))alt_stb_free;
        }
        p_raw_data[1] = NULL;
        p_raw_data[3] = NULL;
      }
      if ( p_raw_data[2] )
      {
        if ( v4 )
        {
          v4();
          v4 = (void (*)(void))alt_stb_free;
        }
        p_raw_data[2] = NULL;
      }
      p_raw_data += 12;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)why;
}

/*
==============
stbi__get16be
==============
*/
__int64 stbi__get16be(stbi__context *s)
{
  unsigned __int8 *img_buffer; 
  unsigned __int8 *img_buffer_end; 
  unsigned __int8 v4; 
  unsigned __int8 *v5; 
  int v6; 
  unsigned __int8 v7; 

  img_buffer = s->img_buffer;
  img_buffer_end = s->img_buffer_end;
  if ( img_buffer >= img_buffer_end )
  {
    if ( s->read_from_callbacks )
    {
      stbi__refill_buffer(s);
      v5 = s->img_buffer;
      img_buffer_end = s->img_buffer_end;
      v4 = *v5;
      img_buffer = v5 + 1;
      s->img_buffer = img_buffer;
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = *img_buffer++;
    s->img_buffer = img_buffer;
  }
  v6 = v4;
  if ( img_buffer < img_buffer_end )
    goto LABEL_9;
  if ( s->read_from_callbacks )
  {
    stbi__refill_buffer(s);
    img_buffer = s->img_buffer;
LABEL_9:
    v7 = *img_buffer;
    s->img_buffer = img_buffer + 1;
    return (v6 << 8) + (unsigned int)v7;
  }
  return v4 << 8;
}

/*
==============
stbi__get_marker
==============
*/
unsigned __int8 stbi__get_marker(stbi__jpeg *j)
{
  unsigned __int8 result; 
  stbi__context *s; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v5; 
  stbi__context *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 v8; 

  result = j->marker;
  if ( result != 0xFF )
  {
    j->marker = -1;
    return result;
  }
  s = j->s;
  img_buffer = j->s->img_buffer;
  if ( img_buffer >= j->s->img_buffer_end )
  {
    if ( !s->read_from_callbacks )
      return -1;
    stbi__refill_buffer(j->s);
    img_buffer = s->img_buffer;
  }
  v5 = *img_buffer;
  s->img_buffer = img_buffer + 1;
  if ( v5 == 0xFF )
  {
    while ( 1 )
    {
      v6 = j->s;
      v7 = j->s->img_buffer;
      if ( v7 >= j->s->img_buffer_end )
      {
        if ( !v6->read_from_callbacks )
          return 0;
        stbi__refill_buffer(j->s);
        v7 = v6->img_buffer;
      }
      v8 = *v7;
      v6->img_buffer = v7 + 1;
      if ( v8 != 0xFF )
        return v8;
    }
  }
  return -1;
}

/*
==============
stbi__grow_buffer_unsafe
==============
*/
void stbi__grow_buffer_unsafe(stbi__jpeg *j)
{
  int v2; 
  stbi__context *s; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v5; 
  int v6; 
  unsigned __int8 *v7; 
  stbi__context *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 v10; 
  int v11; 
  unsigned __int8 *v12; 
  int v13; 
  stbi__context *v14; 
  unsigned __int8 *v15; 
  unsigned __int8 v16; 
  int v17; 
  unsigned __int8 *v18; 
  int code_bits; 

  while ( j->nomore )
  {
    v2 = 0;
LABEL_31:
    code_bits = j->code_bits;
    j->code_buffer |= v2 << (24 - code_bits);
    j->code_bits = code_bits + 8;
    if ( code_bits + 8 > 24 )
      return;
  }
  s = j->s;
  img_buffer = j->s->img_buffer;
  if ( img_buffer >= j->s->img_buffer_end )
  {
    if ( s->read_from_callbacks )
    {
      v6 = s->io.read(s->io_user_data, (char *)s->buffer_start, s->buflen);
      s->img_buffer = s->buffer_start;
      if ( v6 )
      {
        s->img_buffer_end = &s->buffer_start[v6];
      }
      else
      {
        s->read_from_callbacks = 0;
        s->img_buffer_end = &s->buffer_start[1];
        s->buffer_start[0] = 0;
      }
      v7 = s->img_buffer;
      v5 = *v7;
      s->img_buffer = v7 + 1;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *img_buffer;
    s->img_buffer = img_buffer + 1;
  }
  v2 = v5;
  if ( v5 != 255 )
    goto LABEL_31;
  v8 = j->s;
  v9 = j->s->img_buffer;
  if ( v9 >= j->s->img_buffer_end )
  {
    if ( v8->read_from_callbacks )
    {
      v11 = v8->io.read(v8->io_user_data, (char *)v8->buffer_start, v8->buflen);
      v8->img_buffer = v8->buffer_start;
      if ( v11 )
      {
        v8->img_buffer_end = &v8->buffer_start[v11];
      }
      else
      {
        v8->read_from_callbacks = 0;
        v8->img_buffer_end = &v8->buffer_start[1];
        v8->buffer_start[0] = 0;
      }
      v12 = v8->img_buffer;
      v10 = *v12;
      v8->img_buffer = v12 + 1;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = *v9;
    v8->img_buffer = v9 + 1;
  }
  v13 = v10;
  if ( v10 == 255 )
  {
    do
    {
      v14 = j->s;
      v15 = j->s->img_buffer;
      if ( v15 >= j->s->img_buffer_end )
      {
        if ( v14->read_from_callbacks )
        {
          v17 = v14->io.read(v14->io_user_data, (char *)v14->buffer_start, v14->buflen);
          v14->img_buffer = v14->buffer_start;
          if ( v17 )
          {
            v14->img_buffer_end = &v14->buffer_start[v17];
          }
          else
          {
            v14->read_from_callbacks = 0;
            v14->img_buffer_end = &v14->buffer_start[1];
            v14->buffer_start[0] = 0;
          }
          v18 = v14->img_buffer;
          v16 = *v18;
          v14->img_buffer = v18 + 1;
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        v16 = *v15;
        v14->img_buffer = v15 + 1;
      }
      v13 = v16;
    }
    while ( v16 == 255 );
  }
  if ( !v13 )
    goto LABEL_31;
  j->marker = v13;
  j->nomore = 1;
}

/*
==============
stbi__idct_block
==============
*/
void stbi__idct_block(unsigned __int8 *out, int out_stride, __int16 *data)
{
  char *v3; 
  __int16 *v4; 
  __int16 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  __int16 v35; 
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
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  __int64 *v65; 
  unsigned __int8 *v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  bool v98; 
  int v99; 
  int v100; 
  int v101; 
  __int64 v102; 
  __int64 *v103; 
  __int64 v105; 
  __int64 v107; 
  char v108; 

  v3 = &v108;
  v4 = data + 16;
  v102 = 4i64;
  do
  {
    v5 = *(v4 - 8);
    if ( v5 || *v4 || v4[8] || v4[16] || v4[24] || v4[32] || v4[40] )
    {
      v9 = v4[8];
      v10 = *v4;
      v11 = v4[32];
      v12 = v4[40];
      v13 = v4[24];
      v14 = *(v4 - 16);
      v15 = 2217 * (v11 + v10);
      v16 = v15 - 7567 * v11;
      v17 = v4[16];
      v18 = v15 + 3135 * v10;
      v19 = (v17 + v14) << 12;
      v20 = (v14 - v17) << 12;
      v21 = v19 + v18 + 512;
      v22 = v20 + v16 + 512;
      v99 = v19 - v18;
      v23 = v20 - v16;
      v24 = v5;
      v23 += 512;
      v25 = v13 + v5;
      v26 = 4816 * (v25 + v12 + v9) - 3685 * (v12 + v5);
      v27 = -1597 * v25;
      v28 = 4816 * (v25 + v12 + v9) - 10497 * (v13 + v9);
      v29 = -8034 * (v12 + v9);
      v30 = v29 + 12586 * v9;
      v31 = v29 + v26 + 1223 * v12;
      v32 = v26 + v27 + 6149 * v24;
      v33 = v28 + v30;
      v34 = v28 + v27 + 8410 * v13;
      *((_DWORD *)v3 - 8) = (v21 + v32) >> 10;
      *(_DWORD *)v3 = (v22 + v33) >> 10;
      *((_DWORD *)v3 + 8) = (v23 + v34) >> 10;
      v6 = (v99 + 512 + v31) >> 10;
      v7 = (v23 - v34) >> 10;
      v8 = (v99 + 512 - v31) >> 10;
      *((_DWORD *)v3 + 48) = (v21 - v32) >> 10;
      *((_DWORD *)v3 + 40) = (v22 - v33) >> 10;
    }
    else
    {
      v6 = 4 * *(v4 - 16);
      *((_DWORD *)v3 + 48) = v6;
      v7 = v6;
      *((_DWORD *)v3 + 40) = v6;
      v8 = v6;
      *((_DWORD *)v3 + 8) = v6;
      *(_DWORD *)v3 = v6;
      *((_DWORD *)v3 - 8) = v6;
    }
    *((_DWORD *)v3 + 24) = v8;
    *((_DWORD *)v3 + 32) = v7;
    *((_DWORD *)v3 + 16) = v6;
    v35 = *(v4 - 7);
    if ( v35 || v4[1] || v4[9] || v4[17] || v4[25] || v4[33] || v4[41] )
    {
      v39 = v4[9];
      v40 = v4[1];
      v41 = v4[33];
      v42 = v4[41];
      v43 = v4[25];
      v44 = *(v4 - 15);
      v45 = 2217 * (v41 + v40);
      v46 = v45 - 7567 * v41;
      v47 = v4[17];
      v48 = v45 + 3135 * v40;
      v49 = (v47 + v44) << 12;
      v50 = (v44 - v47) << 12;
      v51 = v49 + v48 + 512;
      v52 = v50 + v46 + 512;
      v100 = v49 - v48;
      v53 = v50 - v46;
      v54 = v35;
      v53 += 512;
      v55 = v43 + v35;
      v56 = 4816 * (v55 + v42 + v39) - 3685 * (v42 + v35);
      v57 = -1597 * v55;
      v58 = 4816 * (v55 + v42 + v39) - 10497 * (v43 + v39);
      v59 = -8034 * (v42 + v39);
      v60 = v59 + 12586 * v39;
      v61 = v59 + v56 + 1223 * v42;
      v62 = v56 + v57 + 6149 * v54;
      v63 = v58 + v60;
      v64 = v58 + v57 + 8410 * v43;
      *((_DWORD *)v3 - 7) = (v51 + v62) >> 10;
      *((_DWORD *)v3 + 1) = (v52 + v63) >> 10;
      *((_DWORD *)v3 + 9) = (v53 + v64) >> 10;
      v36 = (v100 + 512 + v61) >> 10;
      v37 = (v53 - v64) >> 10;
      v38 = (v100 + 512 - v61) >> 10;
      *((_DWORD *)v3 + 49) = (v51 - v62) >> 10;
      *((_DWORD *)v3 + 41) = (v52 - v63) >> 10;
    }
    else
    {
      v36 = 4 * *(v4 - 15);
      *((_DWORD *)v3 + 49) = v36;
      v37 = v36;
      *((_DWORD *)v3 + 41) = v36;
      v38 = v36;
      *((_DWORD *)v3 + 9) = v36;
      *((_DWORD *)v3 + 1) = v36;
      *((_DWORD *)v3 - 7) = v36;
    }
    *((_DWORD *)v3 + 25) = v38;
    v4 += 2;
    *((_DWORD *)v3 + 33) = v37;
    *((_DWORD *)v3 + 17) = v36;
    v3 += 8;
    --v102;
  }
  while ( v102 );
  v65 = &v107;
  v103 = &v107;
  v66 = out + 1;
  v105 = 8i64;
  do
  {
    v67 = *((_DWORD *)v65 - 4);
    v68 = *((_DWORD *)v65 + 1);
    v69 = *((_DWORD *)v65 - 1);
    v70 = *((_DWORD *)v65 - 3);
    v71 = *((_DWORD *)v65 - 6);
    v72 = 2217 * (*(_DWORD *)v65 + v67) - 7567 * *(_DWORD *)v65;
    v73 = *((_DWORD *)v65 - 2);
    v74 = 2217 * (*(_DWORD *)v65 + v67) + 3135 * v67;
    v75 = v73 + v71;
    v76 = (v71 - v73) << 12;
    v75 <<= 12;
    v77 = v76 + v72 + 16842752;
    v78 = v76 - v72;
    v79 = *((_DWORD *)v65 - 5);
    v80 = v75 + v74 + 16842752;
    v81 = v78 + 16842752;
    v82 = v75 - v74 + 16842752;
    v83 = 4816 * (v69 + v79 + v68 + v70) - 3685 * (v68 + v79);
    v84 = -1597 * (v69 + v79);
    v85 = 4816 * (v69 + v79 + v68 + v70) - 10497 * (v69 + v70);
    v86 = -8034 * (v68 + v70);
    v87 = v85 + v84 + 8410 * v69;
    v101 = v83 + v84 + 6149 * v79;
    v88 = v86 + v83 + 1223 * v68;
    v89 = v85 + v86 + 12586 * v70;
    v90 = (v80 + v101) >> 17;
    if ( (unsigned int)v90 > 0xFF )
    {
      if ( v90 >= 0 )
        LOBYTE(v90) = -1;
      else
        LOBYTE(v90) = 0;
    }
    *(v66 - 1) = v90;
    v91 = (v80 - v101) >> 17;
    if ( (unsigned int)v91 > 0xFF )
    {
      if ( v91 >= 0 )
        LOBYTE(v91) = -1;
      else
        LOBYTE(v91) = 0;
    }
    v66[6] = v91;
    v92 = (v77 + v89) >> 17;
    if ( (unsigned int)v92 > 0xFF )
    {
      if ( v92 >= 0 )
        LOBYTE(v92) = -1;
      else
        LOBYTE(v92) = 0;
    }
    *v66 = v92;
    v93 = (v77 - v89) >> 17;
    if ( (unsigned int)v93 > 0xFF )
    {
      if ( v93 >= 0 )
        LOBYTE(v93) = -1;
      else
        LOBYTE(v93) = 0;
    }
    v66[5] = v93;
    v94 = (v81 + v87) >> 17;
    if ( (unsigned int)v94 > 0xFF )
    {
      if ( v94 >= 0 )
        LOBYTE(v94) = -1;
      else
        LOBYTE(v94) = 0;
    }
    v66[1] = v94;
    v95 = (v81 - v87) >> 17;
    if ( (unsigned int)v95 > 0xFF )
    {
      if ( v95 >= 0 )
        LOBYTE(v95) = -1;
      else
        LOBYTE(v95) = 0;
    }
    v66[4] = v95;
    v96 = (v82 + v88) >> 17;
    if ( (unsigned int)v96 > 0xFF )
    {
      if ( v96 >= 0 )
        LOBYTE(v96) = -1;
      else
        LOBYTE(v96) = 0;
    }
    v66[2] = v96;
    v97 = (v82 - v88) >> 17;
    if ( (unsigned int)v97 > 0xFF )
    {
      if ( v97 >= 0 )
        LOBYTE(v97) = -1;
      else
        LOBYTE(v97) = 0;
    }
    v65 = v103 + 4;
    v66[3] = v97;
    v66 += out_stride;
    v98 = v105-- == 1;
    v103 += 4;
  }
  while ( !v98 );
}

/*
==============
stbi__idct_simd
==============
*/

void __fastcall stbi__idct_simd(unsigned __int8 *out, int out_stride, __int16 *data, double _XMM3_8)
{
  unsigned __int8 *v256; 
  unsigned __int8 *v260; 
  unsigned __int8 *v263; 
  unsigned __int8 *v264; 
  unsigned __int8 *v266; 
  unsigned __int8 *v267; 
  __int128 v269; 
  __int128 v270; 
  __int128 v271; 
  __int128 v272; 
  __int128 v273; 
  __int128 v274; 
  __int128 v275; 
  __int128 v276; 

  _XMM5 = *((_OWORD *)data + 7);
  _XMM4 = *(_OWORD *)data;
  _XMM2 = *((_OWORD *)data + 2);
  __asm
  {
    vpunpcklwd xmm1, xmm2, xmmword ptr [r8+60h]
    vpmaddwd xmm0, xmm1, cs:__xmm@eb1a08a9eb1a08a9eb1a08a9eb1a08a9
    vpunpckhwd xmm2, xmm2, xmmword ptr [r8+60h]
    vpmaddwd xmm0, xmm2, cs:__xmm@eb1a08a9eb1a08a9eb1a08a9eb1a08a9
    vpmaddwd xmm0, xmm1, cs:__xmm@08a914e808a914e808a914e808a914e8
    vpaddw  xmm1, xmm4, xmmword ptr [r8+40h]
    vpmaddwd xmm0, xmm2, cs:__xmm@08a914e808a914e808a914e808a914e8
    vpsubw  xmm2, xmm4, xmmword ptr [r8+40h]
  }
  _XMM6 = *((_OWORD *)data + 5);
  __asm
  {
    vpxor   xmm3, xmm3, xmm3
    vpunpcklwd xmm0, xmm3, xmm1
    vpsrad  xmm15, xmm0, 4
    vpunpckhwd xmm1, xmm3, xmm1
    vpsrad  xmm0, xmm1, 4
  }
  v269 = _XMM0;
  __asm
  {
    vpunpckhwd xmm1, xmm3, xmm2
    vpunpcklwd xmm7, xmm5, xmm8
    vpunpcklwd xmm10, xmm6, xmm12
    vpunpckhwd xmm9, xmm5, xmm8
    vpunpcklwd xmm0, xmm3, xmm2
    vpsrad  xmm0, xmm0, 4
  }
  v270 = _XMM0;
  __asm { vpsrad  xmm0, xmm1, 4 }
  v272 = _XMM0;
  __asm
  {
    vpaddw  xmm0, xmm6, xmm8
    vpaddw  xmm1, xmm5, xmm12
    vpunpcklwd xmm2, xmm1, xmm0
    vpmaddwd xmm4, xmm2, cs:__xmm@e9cf12d0e9cf12d0e9cf12d0e9cf12d0
    vpunpckhwd xmm3, xmm1, xmm0
    vpmaddwd xmm5, xmm3, cs:__xmm@e9cf12d0e9cf12d0e9cf12d0e9cf12d0
    vpmaddwd xmm8, xmm3, cs:__xmm@12d0046b12d0046b12d0046b12d0046b
    vpmaddwd xmm1, xmm9, cs:__xmm@e09ee565e09ee565e09ee565e09ee565
    vpmaddwd xmm0, xmm7, cs:__xmm@e09ee565e09ee565e09ee565e09ee565
    vpunpckhwd xmm11, xmm6, xmm12
    vpmaddwd xmm6, xmm2, cs:__xmm@12d0046b12d0046b12d0046b12d0046b
    vpaddd  xmm0, xmm0, xmm6
    vpaddd  xmm0, xmm1, xmm8
    vpmaddwd xmm1, xmm11, cs:__xmm@f9c31a9df9c31a9df9c31a9df9c31a9d
    vpaddd  xmm13, xmm1, xmm5
    vpmaddwd xmm1, xmm9, cs:__xmm@11c8e09e11c8e09e11c8e09e11c8e09e
    vpmaddwd xmm0, xmm10, cs:__xmm@f9c31a9df9c31a9df9c31a9df9c31a9d
    vpaddd  xmm14, xmm0, xmm4
    vpmaddwd xmm0, xmm7, cs:__xmm@11c8e09e11c8e09e11c8e09e11c8e09e
    vpaddd  xmm9, xmm1, xmm5
    vpmaddwd xmm1, xmm11, cs:__xmm@11c8f9c311c8f9c311c8f9c311c8f9c3
    vpaddd  xmm12, xmm0, xmm4
    vpmaddwd xmm0, xmm10, cs:__xmm@11c8f9c311c8f9c311c8f9c311c8f9c3
    vpaddd  xmm7, xmm0, xmm6
    vpaddd  xmm0, xmm15, [rsp+1A8h+var_198]
    vpaddd  xmm6, xmm1, xmm8
  }
  _XMM1 = v269;
  __asm
  {
    vpaddd  xmm1, xmm1, [rsp+1A8h+var_178]
    vpaddd  xmm4, xmm1, xmm10
    vpaddd  xmm5, xmm0, xmm10
    vpaddd  xmm1, xmm4, xmm6
    vpaddd  xmm0, xmm5, xmm7
    vpsrad  xmm2, xmm1, 0Ah
  }
  v274 = _XMM15;
  __asm
  {
    vpsrad  xmm3, xmm0, 0Ah
    vpackssdw xmm15, xmm3, xmm2
    vpsubd  xmm1, xmm4, xmm6
  }
  _XMM6 = v270;
  __asm
  {
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm0, xmm5, xmm7
  }
  _XMM7 = v272;
  __asm
  {
    vpaddd  xmm1, xmm7, [rsp+1A8h+var_1A8]
    vpsrad  xmm3, xmm0, 0Ah
    vpackssdw xmm0, xmm3, xmm2
    vpaddd  xmm0, xmm6, [rsp+1A8h+var_158]
    vpaddd  xmm5, xmm0, xmm10
    vpaddd  xmm4, xmm1, xmm10
    vpaddd  xmm1, xmm4, xmm9
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm1, xmm4, xmm9
    vpaddd  xmm0, xmm5, xmm12
    vpsrad  xmm3, xmm0, 0Ah
    vpackssdw xmm10, xmm3, xmm2
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm1, xmm7, [rsp+1A8h+var_1A8]
    vpsubd  xmm0, xmm5, xmm12
    vpsrad  xmm3, xmm0, 0Ah
    vpsubd  xmm0, xmm6, [rsp+1A8h+var_158]
    vpaddd  xmm5, xmm0, xmm6
    vpackssdw xmm11, xmm3, xmm2
    vpaddd  xmm4, xmm1, xmm6
    vpaddd  xmm1, xmm4, xmm13
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm1, xmm4, xmm13
    vpaddd  xmm0, xmm5, xmm14
    vpsrad  xmm3, xmm0, 0Ah
    vpackssdw xmm8, xmm3, xmm2
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm0, xmm5, xmm14
    vpsrad  xmm3, xmm0, 0Ah
  }
  _XMM0 = v274;
  __asm
  {
    vpsubd  xmm0, xmm0, [rsp+1A8h+var_198]
    vpaddd  xmm5, xmm0, xmm6
  }
  _XMM0 = v269;
  __asm
  {
    vpsubd  xmm1, xmm0, [rsp+1A8h+var_178]
    vpaddd  xmm0, xmm5, [rsp+1A8h+var_128]
    vpackssdw xmm7, xmm3, xmm2
    vpaddd  xmm4, xmm1, xmm6
    vpaddd  xmm1, xmm4, [rsp+1A8h+var_118]
    vpsrad  xmm3, xmm0, 0Ah
    vpsubd  xmm0, xmm5, [rsp+1A8h+var_128]
    vpsrad  xmm2, xmm1, 0Ah
    vpsubd  xmm1, xmm4, [rsp+1A8h+var_118]
    vpackssdw xmm6, xmm3, xmm2
    vpsrad  xmm3, xmm0, 0Ah
    vpunpcklwd xmm5, xmm10, xmm7
    vpsrad  xmm2, xmm1, 0Ah
    vpunpcklwd xmm1, xmm6, [rsp+1A8h+var_108]
    vpackssdw xmm0, xmm3, xmm2
    vpunpckhwd xmm3, xmm6, [rsp+1A8h+var_108]
    vpunpcklwd xmm4, xmm15, xmm0
    vpunpckhwd xmm9, xmm15, xmm0
    vpunpckhwd xmm2, xmm8, xmm11
    vpunpckhwd xmm10, xmm10, xmm7
    vpunpcklwd xmm7, xmm9, xmm2
    vpunpckhwd xmm9, xmm9, xmm2
    vpunpcklwd xmm0, xmm8, xmm11
    vpunpcklwd xmm6, xmm4, xmm0
    vpunpckhwd xmm8, xmm4, xmm0
    vpunpcklwd xmm0, xmm5, xmm1
    vpunpckhwd xmm4, xmm5, xmm1
    vpunpcklwd xmm1, xmm10, xmm3
    vpunpckhwd xmm5, xmm10, xmm3
    vpunpcklwd xmm10, xmm6, xmm0
    vpunpckhwd xmm13, xmm6, xmm0
    vpunpcklwd xmm0, xmm9, xmm5
    vpunpcklwd xmm2, xmm8, xmm4
    vpunpcklwd xmm3, xmm7, xmm1
    vpunpckhwd xmm6, xmm7, xmm1
    vpunpcklwd xmm1, xmm2, xmm0
    vpunpckhwd xmm2, xmm2, xmm0
    vpmaddwd xmm0, xmm1, cs:__xmm@eb1a08a9eb1a08a9eb1a08a9eb1a08a9
    vpunpckhwd xmm12, xmm8, xmm4
    vpunpckhwd xmm4, xmm9, xmm5
    vpmaddwd xmm15, xmm1, cs:__xmm@08a914e808a914e808a914e808a914e8
    vpmaddwd xmm0, xmm2, cs:__xmm@eb1a08a9eb1a08a9eb1a08a9eb1a08a9
    vpmaddwd xmm0, xmm2, cs:__xmm@08a914e808a914e808a914e808a914e8
    vpsubw  xmm2, xmm10, xmm3
    vpaddw  xmm1, xmm3, xmm10
    vpunpcklwd xmm10, xmm6, xmm13
    vpxor   xmm5, xmm5, xmm5
    vpunpcklwd xmm0, xmm5, xmm1
    vpsrad  xmm14, xmm0, 4
    vpunpckhwd xmm1, xmm5, xmm1
    vpsrad  xmm0, xmm1, 4
  }
  v276 = _XMM0;
  __asm
  {
    vpunpckhwd xmm1, xmm5, xmm2
    vpunpcklwd xmm0, xmm5, xmm2
    vpsrad  xmm0, xmm0, 4
  }
  v275 = _XMM0;
  __asm { vpsrad  xmm0, xmm1, 4 }
  v273 = _XMM0;
  __asm
  {
    vpaddw  xmm0, xmm6, xmm12
    vpaddw  xmm1, xmm4, xmm13
    vpunpcklwd xmm2, xmm1, xmm0
    vpunpckhwd xmm3, xmm1, xmm0
    vpmaddwd xmm7, xmm3, cs:__xmm@12d0046b12d0046b12d0046b12d0046b
    vpmaddwd xmm5, xmm3, cs:__xmm@e9cf12d0e9cf12d0e9cf12d0e9cf12d0
  }
  _XMM3 = v273;
  __asm
  {
    vpunpcklwd xmm8, xmm4, xmm12
    vpmaddwd xmm0, xmm8, cs:__xmm@e09ee565e09ee565e09ee565e09ee565
    vpunpckhwd xmm11, xmm6, xmm13
    vpmaddwd xmm6, xmm2, cs:__xmm@12d0046b12d0046b12d0046b12d0046b
    vpaddd  xmm0, xmm0, xmm6
    vpunpckhwd xmm9, xmm4, xmm12
    vpmaddwd xmm4, xmm2, cs:__xmm@e9cf12d0e9cf12d0e9cf12d0e9cf12d0
    vpmaddwd xmm1, xmm9, cs:__xmm@e09ee565e09ee565e09ee565e09ee565
  }
  _XMM2 = v275;
  __asm
  {
    vpaddd  xmm0, xmm1, xmm7
    vpmaddwd xmm1, xmm11, cs:__xmm@f9c31a9df9c31a9df9c31a9df9c31a9d
    vpmaddwd xmm0, xmm10, cs:__xmm@f9c31a9df9c31a9df9c31a9df9c31a9d
    vpaddd  xmm0, xmm0, xmm4
    vpaddd  xmm0, xmm1, xmm5
    vpmaddwd xmm1, xmm9, cs:__xmm@11c8e09e11c8e09e11c8e09e11c8e09e
    vpmaddwd xmm0, xmm8, cs:__xmm@11c8e09e11c8e09e11c8e09e11c8e09e
    vpaddd  xmm0, xmm0, xmm4
    vpmaddwd xmm0, xmm10, cs:__xmm@11c8f9c311c8f9c311c8f9c311c8f9c3
    vpaddd  xmm8, xmm1, xmm5
    vpmaddwd xmm1, xmm11, cs:__xmm@11c8f9c311c8f9c311c8f9c311c8f9c3
    vpaddd  xmm5, xmm0, xmm6
  }
  _XMM6 = v276;
  __asm
  {
    vpaddd  xmm4, xmm1, xmm7
    vpaddd  xmm1, xmm6, [rsp+1A8h+var_118]
    vpaddd  xmm0, xmm14, xmm15
    vpaddd  xmm15, xmm0, xmm10
    vpaddd  xmm0, xmm2, [rsp+1A8h+var_138]
    vpaddd  xmm13, xmm0, xmm10
    vpsubd  xmm0, xmm2, [rsp+1A8h+var_138]
  }
  v271 = _XMM14;
  __asm
  {
    vpaddd  xmm14, xmm1, xmm10
    vpaddd  xmm1, xmm3, [rsp+1A8h+var_158]
    vpaddd  xmm12, xmm1, xmm10
    vpsubd  xmm1, xmm3, [rsp+1A8h+var_158]
    vpaddd  xmm10, xmm0, xmm10
  }
  _XMM0 = v271;
  __asm
  {
    vpsubd  xmm0, xmm0, [rsp+1A8h+var_F8]
    vpaddd  xmm9, xmm1, xmm2
    vpsubd  xmm1, xmm6, [rsp+1A8h+var_118]
    vpaddd  xmm7, xmm0, xmm2
    vpaddd  xmm0, xmm15, xmm5
    vpaddd  xmm6, xmm1, xmm2
    vpsrad  xmm3, xmm0, 11h
    vpaddd  xmm0, xmm13, [rsp+1A8h+var_1A8]
    vpaddd  xmm1, xmm14, xmm4
    vpsrad  xmm4, xmm0, 11h
    vpsrad  xmm2, xmm1, 11h
    vpackssdw xmm5, xmm3, xmm2
    vpaddd  xmm1, xmm12, xmm8
    vpsrad  xmm2, xmm1, 11h
    vpaddd  xmm1, xmm10, [rsp+1A8h+var_188]
    vpackssdw xmm0, xmm4, xmm2
    vpackuswb xmm11, xmm5, xmm0
    vpaddd  xmm0, xmm9, [rsp+1A8h+var_198]
    vpsrad  xmm2, xmm0, 11h
    vpaddd  xmm0, xmm6, [rsp+1A8h+var_178]
    vpsrad  xmm3, xmm1, 11h
    vpaddd  xmm1, xmm7, [rsp+1A8h+var_E8]
    vpackssdw xmm5, xmm3, xmm2
    vpsrad  xmm2, xmm0, 11h
    vpsubd  xmm0, xmm7, [rsp+1A8h+var_E8]
    vpsrad  xmm3, xmm0, 11h
    vpsubd  xmm0, xmm10, [rsp+1A8h+var_188]
    vpsrad  xmm4, xmm1, 11h
    vpackssdw xmm1, xmm4, xmm2
    vpackuswb xmm8, xmm5, xmm1
    vpsubd  xmm1, xmm6, [rsp+1A8h+var_178]
    vpsrad  xmm4, xmm0, 11h
    vpsrad  xmm2, xmm1, 11h
    vpsubd  xmm1, xmm9, [rsp+1A8h+var_198]
    vpackssdw xmm5, xmm3, xmm2
    vpsrad  xmm2, xmm1, 11h
    vpsubd  xmm1, xmm13, [rsp+1A8h+var_1A8]
    vpackssdw xmm0, xmm4, xmm2
    vpackuswb xmm6, xmm5, xmm0
    vpsubd  xmm0, xmm12, [rsp+1A8h+var_D8]
    vpsrad  xmm2, xmm0, 11h
    vpsubd  xmm0, xmm14, [rsp+1A8h+var_B8]
    vpsrad  xmm3, xmm1, 11h
    vpsubd  xmm1, xmm15, [rsp+1A8h+var_C8]
    vpackssdw xmm5, xmm3, xmm2
    vpsrad  xmm2, xmm0, 11h
    vpsrad  xmm4, xmm1, 11h
    vpackssdw xmm1, xmm4, xmm2
    vpackuswb xmm3, xmm5, xmm1
    vpunpckhbw xmm1, xmm8, xmm3
    vpunpcklbw xmm0, xmm8, xmm3
    vpunpcklbw xmm2, xmm11, xmm6
    vpunpcklbw xmm3, xmm2, xmm0
    vpunpckhbw xmm5, xmm2, xmm0
    vpunpckhbw xmm4, xmm11, xmm6
    vpunpckhbw xmm2, xmm4, xmm1
    vpunpcklbw xmm0, xmm4, xmm1
    vpunpcklbw xmm1, xmm3, xmm0
  }
  *(_QWORD *)out = _XMM1;
  v256 = &out[out_stride];
  __asm
  {
    vpunpckhbw xmm4, xmm3, xmm0
    vpunpcklbw xmm3, xmm5, xmm2
    vpshufd xmm0, xmm1, 4Eh ; 'N'
  }
  *(_QWORD *)v256 = _XMM0;
  v260 = &v256[out_stride];
  __asm
  {
    vpshufd xmm0, xmm4, 4Eh ; 'N'
    vpunpckhbw xmm2, xmm5, xmm2
  }
  *(_QWORD *)v260 = _XMM4;
  v263 = &v260[out_stride];
  *(_QWORD *)v263 = _XMM0;
  v264 = &v263[out_stride];
  __asm { vpshufd xmm0, xmm3, 4Eh ; 'N' }
  *(_QWORD *)v264 = _XMM3;
  v266 = &v264[out_stride];
  *(_QWORD *)v266 = _XMM0;
  v267 = &v266[out_stride];
  __asm { vpshufd xmm0, xmm2, 4Eh ; 'N' }
  *(_QWORD *)v267 = _XMM2;
  *(_QWORD *)&v267[out_stride] = _XMM0;
}

/*
==============
stbi__jpeg_decode_block
==============
*/
__int64 stbi__jpeg_decode_block(stbi__jpeg *j, __int16 *data, stbi__huffman *hdc, stbi__huffman *hac, __int16 *fac, int b, unsigned __int16 *dequant)
{
  unsigned int code_buffer; 
  unsigned __int8 v12; 
  int code_bits; 
  __int64 v14; 
  int v15; 
  unsigned __int8 v16; 
  unsigned int *v17; 
  int i; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 
  signed int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  unsigned int v33; 
  unsigned __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  __int64 v38; 
  unsigned int v39; 
  unsigned __int8 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 
  unsigned int v46; 
  unsigned int *v47; 
  int v48; 
  __int64 k; 
  int v50; 
  unsigned __int8 v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  unsigned __int8 v55; 
  int v56; 
  unsigned int v57; 

  if ( j->code_bits < 16 )
  {
    stbi__grow_buffer_unsafe(j);
    if ( j->code_bits < 16 )
      stbi__grow_buffer_unsafe(j);
  }
  code_buffer = j->code_buffer;
  v12 = hdc->fast[(unsigned __int64)code_buffer >> 23];
  if ( v12 != 0xFF )
  {
    code_bits = j->code_bits;
    v14 = v12;
    v15 = hdc->size[v12];
    if ( v15 > code_bits )
      goto LABEL_43;
    j->code_buffer = code_buffer << v15;
    j->code_bits = code_bits - v15;
    v16 = hdc->values[v14];
    goto LABEL_13;
  }
  v17 = &hdc->maxcode[10];
  for ( i = 10; HIWORD(code_buffer) >= *v17; ++v17 )
    ++i;
  v19 = j->code_bits;
  if ( i == 17 )
  {
    v20 = v19 - 16;
    goto LABEL_42;
  }
  if ( i <= v19 )
  {
    v21 = (int)(hdc->delta[i] + (stbi__bmask[i] & (code_buffer >> (32 - i))));
    j->code_bits = v19 - i;
    j->code_buffer = code_buffer << i;
    v16 = hdc->values[v21];
LABEL_13:
    v22 = v16;
    memset_0(data, 0, 0x80ui64);
    if ( (_DWORD)v22 )
    {
      v23 = j->code_bits;
      if ( v23 < (int)v22 )
      {
        stbi__grow_buffer_unsafe(j);
        v23 = j->code_bits;
      }
      v24 = stbi__bmask[v22];
      v25 = j->code_buffer;
      j->code_bits = v23 - v22;
      v26 = stbi__jbias[v22] & ~(v25 >> 31);
      v27 = __ROL4__(v25, v22);
      v28 = (v27 & v24) + v26;
      j->code_buffer = v27 & ~v24;
    }
    else
    {
      v28 = 0;
    }
    v29 = 1;
    v30 = b;
    v31 = v28 + j->img_comp[v30].dc_pred;
    j->img_comp[v30].dc_pred = v31;
    *data = *dequant * v31;
    while ( 1 )
    {
      v32 = j->code_bits;
      if ( v32 < 16 )
      {
        stbi__grow_buffer_unsafe(j);
        v32 = j->code_bits;
      }
      v33 = j->code_buffer;
      v34 = (unsigned __int64)v33 >> 23;
      v35 = fac[v34];
      if ( fac[v34] )
      {
        v36 = v35 & 0xF;
        v37 = ((v35 >> 4) & 0xF) + v29;
        j->code_buffer = v33 << v36;
        v38 = v37;
        v29 = v37 + 1;
        j->code_bits = v32 - v36;
        data[stbi__jpeg_dezigzag[v38]] = (v35 >> 8) * dequant[stbi__jpeg_dezigzag[v38]];
      }
      else
      {
        v39 = j->code_buffer;
        if ( v32 < 16 )
        {
          stbi__grow_buffer_unsafe(j);
          v33 = j->code_buffer;
          v39 = v33;
        }
        v40 = hac->fast[(unsigned __int64)v39 >> 23];
        if ( v40 == 0xFF )
        {
          v46 = HIWORD(v39);
          v47 = &hac->maxcode[10];
          v48 = 10;
          for ( k = 10i64; v46 >= *v47; ++k )
          {
            ++v48;
            ++v47;
          }
          v50 = j->code_bits;
          if ( v48 == 17 )
          {
            v20 = v50 - 16;
LABEL_42:
            j->code_bits = v20;
            break;
          }
          if ( v48 > v50 )
            break;
          v45 = v50 - v48;
          v44 = v33 << v48;
          v42 = (int)(hac->delta[k] + (stbi__bmask[k] & (v33 >> (32 - v48))));
        }
        else
        {
          v41 = j->code_bits;
          v42 = v40;
          v43 = hac->size[v40];
          if ( v43 > v41 )
            break;
          v44 = v39 << v43;
          v45 = v41 - v43;
        }
        j->code_bits = v45;
        j->code_buffer = v44;
        v51 = hac->values[v42];
        v52 = v51 & 0xF;
        if ( (v51 & 0xF) != 0 )
        {
          v53 = (v51 >> 4) + v29;
          v54 = v53;
          v29 = v53 + 1;
          v55 = stbi__jpeg_dezigzag[v54];
          if ( v45 < (int)v52 )
          {
            stbi__grow_buffer_unsafe(j);
            v45 = j->code_bits;
            v44 = j->code_buffer;
          }
          v56 = __ROL4__(v44, v52);
          v57 = stbi__bmask[v52];
          j->code_bits = v45 - v52;
          j->code_buffer = v56 & ~v57;
          data[v55] = dequant[v55] * ((v57 & v56) + (LOWORD(stbi__jbias[v52]) & ~(unsigned __int16)(v44 >> 31)));
        }
        else
        {
          if ( v51 != 240 )
            return 1i64;
          v29 += 16;
        }
      }
      if ( v29 >= 64 )
        return 1i64;
    }
  }
LABEL_43:
  stbi__g_failure_reason = "bad huffman code";
  return 0i64;
}

/*
==============
stbi__jpeg_decode_block_prog_ac
==============
*/
__int64 stbi__jpeg_decode_block_prog_ac(stbi__jpeg *j, __int16 *data, stbi__huffman *hac, __int16 *fac)
{
  __int64 spec_start; 
  __int16 *v7; 
  int eob_run; 
  int succ_low; 
  int code_bits; 
  unsigned int code_buffer; 
  unsigned __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned __int8 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  unsigned int *v28; 
  int v29; 
  __int64 i; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  unsigned __int8 v36; 
  unsigned int v37; 
  int v38; 
  __int16 v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int v43; 
  int v44; 
  int v45; 
  unsigned __int16 v46; 
  const unsigned __int8 *v47; 
  __int16 *v48; 
  int v49; 
  signed int v50; 
  __int16 v51; 
  __int16 v52; 
  __int64 v53; 
  unsigned int v54; 
  unsigned __int8 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  int v59; 
  int v60; 
  unsigned int *v61; 
  int v62; 
  __int64 k; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  int v68; 
  unsigned int v69; 
  __int16 *v70; 
  __int16 *v71; 
  int v72; 
  signed int v73; 
  __int16 v74; 
  __int16 v75; 
  int spec_end; 

  spec_start = j->spec_start;
  v7 = data;
  if ( !(_DWORD)spec_start )
  {
    stbi__g_failure_reason = "can't merge dc and ac";
    return 0i64;
  }
  eob_run = j->eob_run;
  succ_low = j->succ_low;
  if ( !j->succ_high )
  {
    if ( eob_run )
    {
      j->eob_run = eob_run - 1;
      return 1i64;
    }
    while ( 1 )
    {
      code_bits = j->code_bits;
      if ( code_bits < 16 )
      {
        stbi__grow_buffer_unsafe(j);
        code_bits = j->code_bits;
        v7 = data;
      }
      code_buffer = j->code_buffer;
      v14 = (unsigned __int64)code_buffer >> 23;
      v15 = fac[v14];
      if ( fac[v14] )
        break;
      v21 = j->code_buffer;
      if ( code_bits < 16 )
      {
        stbi__grow_buffer_unsafe(j);
        code_buffer = j->code_buffer;
        v21 = code_buffer;
      }
      v22 = hac->fast[(unsigned __int64)v21 >> 23];
      if ( v22 == 0xFF )
      {
        v27 = HIWORD(v21);
        v28 = &hac->maxcode[10];
        v29 = 10;
        for ( i = 10i64; v27 >= *v28; ++i )
        {
          ++v29;
          ++v28;
        }
        v31 = j->code_bits;
        if ( v29 == 17 )
        {
          v45 = v31 - 16;
          goto LABEL_92;
        }
        if ( v29 > v31 )
          goto LABEL_93;
        v26 = v31 - v29;
        v19 = code_buffer << v29;
        v24 = (int)(hac->delta[i] + (stbi__bmask[i] & (code_buffer >> (32 - v29))));
      }
      else
      {
        v23 = j->code_bits;
        v24 = v22;
        v25 = hac->size[v22];
        if ( v25 > v23 )
          goto LABEL_93;
        v19 = v21 << v25;
        v26 = v23 - v25;
      }
      j->code_bits = v26;
      j->code_buffer = v19;
      v32 = hac->values[v24] >> 4;
      v33 = hac->values[v24] & 0xF;
      if ( (hac->values[v24] & 0xF) != 0 )
      {
        v34 = v32 + spec_start;
        v35 = v34;
        LODWORD(spec_start) = v34 + 1;
        v36 = stbi__jpeg_dezigzag[v35];
        if ( v26 < (int)v33 )
        {
          stbi__grow_buffer_unsafe(j);
          v26 = j->code_bits;
          v19 = j->code_buffer;
        }
        v37 = stbi__bmask[v33];
        v38 = v19;
        j->code_bits = v26 - v33;
        v39 = LOWORD(stbi__jbias[v33]) & ~(unsigned __int16)(v19 >> 31);
        v7 = data;
        v40 = __ROL4__(v38, v33);
        j->code_buffer = v40 & ~v37;
        LOWORD(v19) = (v40 & v37) + v39;
        v20 = v36;
        goto LABEL_26;
      }
      if ( (unsigned int)v32 < 0xF )
      {
        v41 = 1 << (hac->values[v24] >> 4);
        j->eob_run = v41;
        if ( (_DWORD)v32 )
        {
          v42 = 1 << v32;
          if ( v26 < (int)v32 )
          {
            stbi__grow_buffer_unsafe(j);
            v26 = j->code_bits;
            v42 = j->eob_run;
            v19 = j->code_buffer;
          }
          v43 = stbi__bmask[v32];
          j->code_bits = v26 - v32;
          v44 = __ROL4__(v19, v32);
          j->code_buffer = v44 & ~v43;
          v41 = v42 + (v44 & v43);
        }
        j->eob_run = v41 - 1;
        return 1i64;
      }
      v7 = data;
      LODWORD(spec_start) = spec_start + 16;
LABEL_27:
      if ( (int)spec_start > j->spec_end )
        return 1i64;
    }
    v16 = v15 & 0xF;
    v17 = ((v15 >> 4) & 0xF) + spec_start;
    j->code_buffer = code_buffer << v16;
    v18 = v17;
    LODWORD(spec_start) = v17 + 1;
    j->code_bits = code_bits - v16;
    v19 = v15 >> 8;
    v20 = stbi__jpeg_dezigzag[v18];
LABEL_26:
    v7[v20] = (_WORD)v19 << succ_low;
    goto LABEL_27;
  }
  v46 = 1 << succ_low;
  if ( !eob_run )
  {
    v53 = j->spec_start;
    while ( 1 )
    {
      if ( j->code_bits < 16 )
        stbi__grow_buffer_unsafe(j);
      v54 = j->code_buffer;
      v55 = hac->fast[(unsigned __int64)v54 >> 23];
      if ( v55 == 0xFF )
      {
        v61 = &hac->maxcode[10];
        v62 = 10;
        for ( k = 10i64; HIWORD(v54) >= *v61; ++k )
        {
          ++v62;
          ++v61;
        }
        v64 = j->code_bits;
        if ( v62 == 17 )
        {
          v45 = v64 - 16;
LABEL_92:
          j->code_bits = v45;
LABEL_93:
          stbi__g_failure_reason = "bad huffman code";
          return 0i64;
        }
        if ( v62 > v64 )
          goto LABEL_93;
        v60 = v64 - v62;
        LODWORD(v57) = hac->delta[k] + (stbi__bmask[k] & (v54 >> (32 - v62)));
        v59 = v54 << v62;
        v57 = (int)v57;
      }
      else
      {
        v56 = j->code_bits;
        v57 = v55;
        v58 = hac->size[v55];
        if ( v58 > v56 )
          goto LABEL_93;
        v59 = v54 << v58;
        v60 = v56 - v58;
      }
      j->code_bits = v60;
      j->code_buffer = v59;
      v65 = hac->values[v57] >> 4;
      v66 = hac->values[v57] & 0xF;
      if ( (hac->values[v57] & 0xF) != 0 )
      {
        if ( v66 != 1 )
          goto LABEL_93;
        if ( v60 < 1 )
        {
          stbi__grow_buffer_unsafe(j);
          v60 = j->code_bits;
          v59 = j->code_buffer;
        }
        LOWORD(v66) = v46;
        j->code_buffer = 2 * v59;
        j->code_bits = v60 - 1;
        if ( v59 >= 0 )
          v66 = -(__int16)v46;
      }
      else if ( (unsigned int)v65 < 0xF )
      {
        v67 = (1 << (hac->values[v57] >> 4)) - 1;
        j->eob_run = v67;
        if ( (_DWORD)v65 )
        {
          if ( v60 < (int)v65 )
          {
            stbi__grow_buffer_unsafe(j);
            v60 = j->code_bits;
            v67 = j->eob_run;
            v59 = j->code_buffer;
          }
          v68 = __ROL4__(v59, v65);
          v69 = stbi__bmask[v65];
          j->code_bits = v60 - v65;
          j->code_buffer = v68 & ~v69;
          j->eob_run = v67 + (v68 & v69);
        }
        LODWORD(v65) = 64;
      }
      if ( (int)spec_start > j->spec_end )
        return 1i64;
      v70 = data;
      while ( 1 )
      {
        LODWORD(spec_start) = spec_start + 1;
        v71 = &v70[stbi__jpeg_dezigzag[v53++]];
        if ( *v71 )
        {
          v72 = j->code_bits;
          if ( v72 < 1 )
          {
            stbi__grow_buffer_unsafe(j);
            v72 = j->code_bits;
          }
          v73 = j->code_buffer;
          j->code_buffer = 2 * v73;
          j->code_bits = v72 - 1;
          if ( v73 >= 0 || (v74 = *v71, ((unsigned __int16)*v71 & v46) != 0) )
          {
            v70 = data;
          }
          else
          {
            v70 = data;
            if ( v74 <= 0 )
              v75 = v74 - v46;
            else
              v75 = v46 + v74;
            *v71 = v75;
          }
          goto LABEL_86;
        }
        if ( !(_DWORD)v65 )
          break;
        LODWORD(v65) = v65 - 1;
LABEL_86:
        spec_end = j->spec_end;
        if ( (int)spec_start > spec_end )
          goto LABEL_89;
      }
      *v71 = v66;
      spec_end = j->spec_end;
LABEL_89:
      if ( (int)spec_start > spec_end )
        return 1i64;
    }
  }
  j->eob_run = eob_run - 1;
  if ( (int)spec_start > j->spec_end )
    return 1i64;
  v47 = &stbi__jpeg_dezigzag[spec_start];
  do
  {
    v48 = &v7[*v47];
    if ( *v48 )
    {
      v49 = j->code_bits;
      if ( v49 < 1 )
      {
        stbi__grow_buffer_unsafe(j);
        v49 = j->code_bits;
        v7 = data;
      }
      v50 = j->code_buffer;
      j->code_buffer = 2 * v50;
      j->code_bits = v49 - 1;
      if ( v50 < 0 )
      {
        v51 = *v48;
        if ( ((unsigned __int16)*v48 & v46) == 0 )
        {
          if ( v51 <= 0 )
            v52 = v51 - v46;
          else
            v52 = v46 + v51;
          *v48 = v52;
        }
      }
    }
    LODWORD(spec_start) = spec_start + 1;
    ++v47;
  }
  while ( (int)spec_start <= j->spec_end );
  return 1i64;
}

/*
==============
stbi__jpeg_decode_block_prog_dc
==============
*/
__int64 stbi__jpeg_decode_block_prog_dc(stbi__jpeg *j, __int16 *data, stbi__huffman *hdc, int b)
{
  __int64 v5; 
  unsigned int v9; 
  unsigned __int8 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int *v16; 
  int i; 
  unsigned __int8 v18; 
  signed int v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  int code_bits; 
  signed int code_buffer; 

  v5 = b;
  if ( j->spec_end )
  {
    stbi__g_failure_reason = "can't merge dc and ac";
    return 0i64;
  }
  if ( j->code_bits < 16 )
    stbi__grow_buffer_unsafe(j);
  if ( j->succ_high )
  {
    code_bits = j->code_bits;
    if ( code_bits < 1 )
    {
      stbi__grow_buffer_unsafe(j);
      code_bits = j->code_bits;
    }
    code_buffer = j->code_buffer;
    j->code_buffer = 2 * code_buffer;
    j->code_bits = code_bits - 1;
    if ( code_buffer < 0 )
      *data += 1 << j->succ_low;
    return 1i64;
  }
  memset_0(data, 0, 0x80ui64);
  if ( j->code_bits < 16 )
    stbi__grow_buffer_unsafe(j);
  v9 = j->code_buffer;
  v10 = hdc->fast[(unsigned __int64)v9 >> 23];
  if ( v10 == 0xFF )
  {
    v16 = &hdc->maxcode[10];
    for ( i = 10; HIWORD(v9) >= *v16; ++v16 )
      ++i;
    v11 = j->code_bits;
    if ( i == 17 )
    {
      v11 -= 16;
      v14 = -1;
      j->code_bits = v11;
      goto LABEL_20;
    }
    if ( i > v11 )
    {
      v14 = -1;
      goto LABEL_20;
    }
    v11 -= i;
    LODWORD(v12) = hdc->delta[i] + (stbi__bmask[i] & (v9 >> (32 - i)));
    v15 = v9 << i;
    v12 = (int)v12;
  }
  else
  {
    v11 = j->code_bits;
    v12 = v10;
    v13 = hdc->size[v10];
    if ( v13 > v11 )
    {
      v14 = -1;
LABEL_20:
      if ( v11 < v14 )
      {
        stbi__grow_buffer_unsafe(j);
        v11 = j->code_bits;
      }
      v19 = j->code_buffer;
      j->code_bits = v11 - v14;
      v20 = __ROL4__(v19, v14);
      v21 = v14;
      v22 = ~(v19 >> 31) & stbi__jbias[v21];
      v23 = v20 & stbi__bmask[v21];
      j->code_buffer = v20 & ~stbi__bmask[v21];
      v24 = v23 + v22;
      goto LABEL_24;
    }
    v15 = v9 << v13;
    v11 -= v13;
  }
  j->code_bits = v11;
  j->code_buffer = v15;
  v18 = hdc->values[v12];
  v14 = v18;
  if ( v18 )
    goto LABEL_20;
  v24 = 0;
LABEL_24:
  v25 = v24 + j->img_comp[v5].dc_pred;
  j->img_comp[v5].dc_pred = v25;
  *data = (_WORD)v25 << j->succ_low;
  return 1i64;
}

/*
==============
stbi__jpeg_dequantize
==============
*/
void stbi__jpeg_dequantize(__int16 *data, unsigned __int16 *dequant)
{
  __int16 *v2; 
  signed __int64 v3; 
  __int64 v4; 
  __int16 v5; 
  __int16 v6; 

  v2 = data + 1;
  v3 = (char *)dequant - (char *)data;
  v4 = 2i64;
  do
  {
    *(v2 - 1) *= *(__int16 *)((char *)v2 + v3 - 2);
    *v2 *= *(__int16 *)((char *)v2 + v3);
    v2[1] *= *(__int16 *)((char *)v2 + v3 + 2);
    v2[2] *= *(__int16 *)((char *)v2 + v3 + 4);
    v2[3] *= *(__int16 *)((char *)v2 + v3 + 6);
    v2[4] *= *(__int16 *)((char *)v2 + v3 + 8);
    v2[5] *= *(__int16 *)((char *)v2 + v3 + 10);
    v2[6] *= *(__int16 *)((char *)v2 + v3 + 12);
    v2[7] *= *(__int16 *)((char *)v2 + v3 + 14);
    v2[8] *= *(__int16 *)((char *)v2 + v3 + 16);
    v2[9] *= *(__int16 *)((char *)v2 + v3 + 18);
    v2[10] *= *(__int16 *)((char *)v2 + v3 + 20);
    v2[11] *= *(__int16 *)((char *)v2 + v3 + 22);
    v2[12] *= *(__int16 *)((char *)v2 + v3 + 24);
    v2[13] *= *(__int16 *)((char *)v2 + v3 + 26);
    v2[14] *= *(__int16 *)((char *)v2 + v3 + 28);
    v2[15] *= *(__int16 *)((char *)v2 + v3 + 30);
    v2[16] *= *(__int16 *)((char *)v2 + v3 + 32);
    v2[17] *= *(__int16 *)((char *)v2 + v3 + 34);
    v2[18] *= *(__int16 *)((char *)v2 + v3 + 36);
    v5 = *(__int16 *)((char *)v2 + v3 + 38);
    v6 = v2[19];
    v2 += 32;
    *(v2 - 13) = v5 * v6;
    *(v2 - 12) *= *(__int16 *)((char *)v2 + v3 - 24);
    *(v2 - 11) *= *(__int16 *)((char *)v2 + v3 - 22);
    *(v2 - 10) *= *(__int16 *)((char *)v2 + v3 - 20);
    *(v2 - 9) *= *(__int16 *)((char *)v2 + v3 - 18);
    *(v2 - 8) *= *(__int16 *)((char *)v2 + v3 - 16);
    *(v2 - 7) *= *(__int16 *)((char *)v2 + v3 - 14);
    *(v2 - 6) *= *(__int16 *)((char *)v2 + v3 - 12);
    *(v2 - 5) *= *(__int16 *)((char *)v2 + v3 - 10);
    *(v2 - 4) *= *(__int16 *)((char *)v2 + v3 - 8);
    *(v2 - 3) *= *(__int16 *)((char *)v2 + v3 - 6);
    *(v2 - 2) *= *(__int16 *)((char *)v2 + v3 - 4);
    --v4;
  }
  while ( v4 );
}

/*
==============
stbi__jpeg_info
==============
*/
__int64 stbi__jpeg_info(stbi__context *s, int *x, int *y, int *comp)
{
  unsigned int v4; 
  stbi__jpeg *v9; 
  int *v10; 
  int v11; 

  v4 = 0;
  if ( alt_stb_malloc )
  {
    v9 = (stbi__jpeg *)alt_stb_malloc(0x4888ui64);
  }
  else if ( stbi_mem.index + 18568 < stbi_mem.size )
  {
    v9 = (stbi__jpeg *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 18568i64;
  }
  else
  {
    v9 = NULL;
  }
  v9->s = s;
  if ( stbi__decode_jpeg_header(v9, 2) )
  {
    if ( x )
      *x = v9->s->img_x;
    if ( y )
      *y = v9->s->img_y;
    if ( comp )
    {
      v11 = 1;
      if ( v9->s->img_n >= 3 )
        v11 = 3;
      *comp = v11;
    }
    v4 = 1;
  }
  else
  {
    v10 = (int *)v9->s;
    *((_QWORD *)v10 + 23) = v9->s->img_buffer_original;
    *((_QWORD *)v10 + 24) = *((_QWORD *)v10 + 26);
  }
  if ( alt_stb_free )
    alt_stb_free(v9);
  return v4;
}

/*
==============
stbi__ldr_to_hdr
==============
*/
float *stbi__ldr_to_hdr(unsigned __int8 *data, int x, int y, int comp)
{
  __int64 v4; 
  unsigned __int8 *v5; 
  int v7; 
  int v8; 
  unsigned __int64 v9; 
  unsigned __int8 *v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  __int64 v18; 
  float *v19; 
  __int64 v20; 
  __int64 v21; 
  float *v22; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  float *v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  unsigned __int8 *v36; 
  float *v37; 
  __int64 v38; 
  int v39; 
  int v40; 
  unsigned __int8 *v41; 

  v4 = comp;
  v5 = data;
  if ( !data )
    return 0i64;
  if ( x < 0 || y < 0 || y && x > 0x7FFFFFFF / y )
    goto LABEL_39;
  v7 = y * x;
  if ( y * x < 0 || comp < 0 || comp && v7 > 0x7FFFFFFF / comp )
    goto LABEL_39;
  v8 = comp * v7;
  if ( comp * v7 < 0 || v8 > 0x1FFFFFFF )
    goto LABEL_39;
  v9 = 4 * v8;
  if ( alt_stb_malloc )
  {
    v10 = (unsigned __int8 *)alt_stb_malloc(v9);
  }
  else
  {
    if ( stbi_mem.index + v9 >= stbi_mem.size )
      goto LABEL_39;
    v10 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += v9;
  }
  v41 = v10;
  if ( v10 )
  {
    v11 = v4;
    if ( (v4 & 1) == 0 )
      v11 = v4 - 1;
    v12 = 0;
    v40 = v11;
    if ( v7 > 0 )
    {
      v13 = 4 * v4;
      v14 = v5;
      v15 = stbi__l2h_gamma;
      v16 = v4;
      v17 = stbi__l2h_scale;
      v18 = v11;
      v19 = (float *)v10;
      v20 = (unsigned int)v7;
      do
      {
        if ( v18 > 0 )
        {
          v21 = 0i64;
          v22 = v19;
          do
          {
            _XMM0 = COERCE_UNSIGNED_INT64(pow_0((float)((float)v14[v21] * 0.0039215689), v15) * v17);
            __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
            ++v21;
            *v22++ = *(float *)&_XMM2;
          }
          while ( v21 < v18 );
          v13 = 4 * v4;
          v12 = 0;
          v16 = v4;
        }
        v19 = (float *)((char *)v19 + v13);
        v14 += v16;
        --v20;
      }
      while ( v20 );
      v11 = v40;
      v10 = v41;
      v5 = data;
    }
    if ( v11 < (int)v4 )
    {
      if ( v7 >= 4 )
      {
        v25 = 4 * (int)v4;
        v26 = v11 + 2 * (int)v4;
        v27 = v11 + (int)v4 - v26;
        v28 = (int)v4 + v11 + 2 * (int)v4 - v26;
        v29 = v11 - v26;
        v30 = ((unsigned int)(v7 - 4) >> 2) + 1;
        v31 = &v5[v26];
        v32 = (float *)&v10[4 * v26];
        v33 = v30;
        v12 = 4 * v30;
        do
        {
          v32[v29] = (float)v31[v29] * 0.0039215689;
          v32[v27] = (float)v31[v27] * 0.0039215689;
          *v32 = (float)*v31 * 0.0039215689;
          v34 = v31[v28];
          v31 += v25;
          v32[v28] = (float)v34 * 0.0039215689;
          v32 += v25;
          --v33;
        }
        while ( v33 );
        v11 = v40;
      }
      if ( v12 < v7 )
      {
        v35 = v11 + v4 * v12;
        v36 = &v5[v35];
        v37 = (float *)&v10[4 * v35];
        v38 = (unsigned int)(v7 - v12);
        do
        {
          v39 = *v36;
          v36 += v4;
          *v37 = (float)v39 * 0.0039215689;
          v37 += v4;
          --v38;
        }
        while ( v38 );
      }
    }
    if ( alt_stb_free )
      alt_stb_free(v5);
    return (float *)v10;
  }
LABEL_39:
  if ( alt_stb_free )
    alt_stb_free(v5);
  stbi__g_failure_reason = "outofmem";
  return 0i64;
}

/*
==============
stbi__load_and_postprocess_16bit
==============
*/
unsigned __int16 *stbi__load_and_postprocess_16bit(stbi__context *s, int *x, int *y, int *comp, int req_comp)
{
  int v5; 
  unsigned __int16 *result; 
  unsigned __int16 *v10; 
  int v11; 
  int v12; 
  unsigned __int8 *v13; 
  __int64 i; 
  stbi__result_info ri; 

  v5 = req_comp;
  result = (unsigned __int16 *)stbi__load_main(s, x, y, comp, req_comp, &ri, 16);
  v10 = result;
  if ( !result )
    return result;
  if ( ri.bits_per_channel != 16 )
  {
    if ( req_comp )
      v11 = req_comp;
    else
      v11 = *comp;
    v12 = v11 * *y * *x;
    if ( alt_stb_malloc )
    {
      v13 = (unsigned __int8 *)alt_stb_malloc(2 * v12);
    }
    else
    {
      if ( stbi_mem.index + 2 * v12 >= stbi_mem.size )
      {
LABEL_17:
        stbi__g_failure_reason = "outofmem";
        v10 = NULL;
        goto LABEL_18;
      }
      v13 = &stbi_mem.data[stbi_mem.index];
      stbi_mem.old_index = stbi_mem.index;
      stbi_mem.index += 2 * v12;
    }
    if ( v13 )
    {
      if ( v12 > 0 )
      {
        for ( i = 0i64; i < v12; ++i )
          *(_WORD *)&v13[2 * i] = 257 * *((unsigned __int8 *)v10 + i);
      }
      if ( alt_stb_free )
        alt_stb_free(v10);
      v10 = (unsigned __int16 *)v13;
      goto LABEL_18;
    }
    goto LABEL_17;
  }
LABEL_18:
  if ( stbi__vertically_flip_on_load )
  {
    if ( !req_comp )
      v5 = *comp;
    stbi__vertical_flip(v10, *x, *y, 2 * v5);
  }
  return v10;
}

/*
==============
stbi__load_and_postprocess_8bit
==============
*/
unsigned __int8 *stbi__load_and_postprocess_8bit(stbi__context *s, int *x, int *y, int *comp, int req_comp)
{
  int v5; 
  unsigned __int8 *result; 
  unsigned __int8 *v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  _QWORD *v18; 
  __int128 *v19; 
  __int64 i; 
  stbi__result_info ri; 

  v5 = req_comp;
  result = (unsigned __int8 *)stbi__load_main(s, x, y, comp, req_comp, &ri, 8);
  v10 = result;
  if ( !result )
    return result;
  if ( ri.bits_per_channel != 8 )
  {
    if ( req_comp )
      v11 = req_comp;
    else
      v11 = *comp;
    v12 = v11 * *y * *x;
    v13 = v12;
    if ( alt_stb_malloc )
    {
      v14 = (unsigned __int8 *)alt_stb_malloc(v12);
    }
    else
    {
      if ( stbi_mem.index + v12 >= stbi_mem.size )
      {
LABEL_22:
        stbi__g_failure_reason = "outofmem";
        v10 = NULL;
        goto LABEL_23;
      }
      v14 = &stbi_mem.data[stbi_mem.index];
      stbi_mem.old_index = stbi_mem.index;
      stbi_mem.index += v12;
    }
    if ( v14 )
    {
      v15 = 0;
      if ( v12 > 0 && (unsigned int)v12 >= 0x20 )
      {
        v16 = v12 - 1;
        if ( v14 > &v10[2 * v16] || &v14[v16] < v10 )
        {
          v17 = v12 - (v12 & 0x1F);
          v18 = v14 + 8;
          v19 = (__int128 *)(v10 + 32);
          do
          {
            _XMM0 = *(v19 - 2);
            __asm
            {
              vpsrlw  xmm2, xmm0, xmm4
              vpshufb xmm3, xmm2, cs:__xmm@0e0c0a08060402000e0c0a0806040200
            }
            _XMM0 = *(v19 - 1);
            *(v18 - 1) = _XMM3;
            __asm
            {
              vpsrlw  xmm2, xmm0, xmm4
              vpshufb xmm3, xmm2, cs:__xmm@0e0c0a08060402000e0c0a0806040200
            }
            _XMM0 = *v19;
            *v18 = _XMM3;
            __asm
            {
              vpsrlw  xmm2, xmm0, xmm4
              vpshufb xmm3, xmm2, cs:__xmm@0e0c0a08060402000e0c0a0806040200
            }
            _XMM0 = v19[1];
            v18[1] = _XMM3;
            __asm
            {
              vpsrlw  xmm2, xmm0, xmm4
              vpshufb xmm3, xmm2, cs:__xmm@0e0c0a08060402000e0c0a0806040200
            }
            v18[2] = _XMM3;
            v18 += 4;
            v15 += 32;
            v19 += 4;
          }
          while ( (__int64)v18 - 8 - (__int64)v14 < v17 );
        }
      }
      for ( i = v15; i < v13; ++i )
        v14[i] = v10[2 * i + 1];
      if ( alt_stb_free )
        alt_stb_free(v10);
      v10 = v14;
      goto LABEL_23;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( stbi__vertically_flip_on_load )
  {
    if ( !req_comp )
      v5 = *comp;
    stbi__vertical_flip(v10, *x, *y, v5);
  }
  return v10;
}

/*
==============
stbi__load_main
==============
*/
unsigned __int8 *stbi__load_main(stbi__context *s, int *x, int *y, int *comp, int req_comp, stbi__result_info *ri)
{
  unsigned __int8 *v6; 
  void *(__fastcall *v7)(unsigned __int64); 
  stbi__jpeg *v11; 
  int v12; 
  unsigned __int8 *jpeg_image; 
  int v15; 
  unsigned __int8 *out; 
  int depth; 
  stbi__context *v18; 
  int img_out_n; 
  unsigned int img_x; 
  unsigned __int8 *v21; 
  unsigned int ya; 
  stbi__png z; 

  v6 = NULL;
  v7 = alt_stb_malloc;
  *(_QWORD *)&ri->bits_per_channel = 8i64;
  ri->channel_order = 0;
  if ( v7 )
  {
    v11 = (stbi__jpeg *)v7(18568ui64);
  }
  else if ( stbi_mem.index + 18568 < stbi_mem.size )
  {
    v11 = (stbi__jpeg *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 18568i64;
  }
  else
  {
    v11 = NULL;
  }
  v11->s = s;
  stbi__setup_jpeg(v11);
  v11->jfif = 0;
  v11->app14_color_transform = -1;
  v11->marker = -1;
  if ( stbi__get_marker(v11) == 0xD8 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    stbi__g_failure_reason = "no SOI";
  }
  s->img_buffer = s->img_buffer_original;
  s->img_buffer_end = s->img_buffer_original_end;
  if ( alt_stb_free )
    alt_stb_free(v11);
  if ( v12 )
  {
    if ( alt_stb_malloc )
    {
      v6 = (unsigned __int8 *)alt_stb_malloc(0x4888ui64);
    }
    else if ( stbi_mem.index + 18568 < stbi_mem.size )
    {
      v6 = &stbi_mem.data[stbi_mem.index];
      stbi_mem.old_index = stbi_mem.index;
      stbi_mem.index += 18568i64;
    }
    *(_QWORD *)v6 = s;
    stbi__setup_jpeg((stbi__jpeg *)v6);
    jpeg_image = load_jpeg_image((stbi__jpeg *)v6, x, y, comp, req_comp);
    if ( alt_stb_free )
      alt_stb_free(v6);
    return jpeg_image;
  }
  v15 = stbi__check_png_header(s);
  s->img_buffer = s->img_buffer_original;
  s->img_buffer_end = s->img_buffer_original_end;
  if ( !v15 )
  {
    stbi__g_failure_reason = "unknown image type";
    return 0i64;
  }
  z.s = s;
  out = NULL;
  if ( (unsigned int)req_comp > 4 )
  {
    stbi__g_failure_reason = "bad req_comp";
    return 0i64;
  }
  if ( stbi__parse_png_file(&z, 0, req_comp) )
  {
    depth = z.depth;
    out = z.out;
    v18 = z.s;
    if ( z.depth < 8 )
      depth = 8;
    ri->bits_per_channel = depth;
    if ( !req_comp || (img_out_n = v18->img_out_n, req_comp == img_out_n) || ((img_x = v18->img_x, ya = v18->img_y, depth != 8) ? (v21 = stbi__convert_format16((unsigned __int16 *)out, img_out_n, req_comp, img_x, ya)) : (v21 = stbi__convert_format(out, img_out_n, req_comp, img_x, ya)), v18->img_out_n = req_comp, (out = v21) != NULL) )
    {
      *x = v18->img_x;
      *y = v18->img_y;
      if ( comp )
        *comp = v18->img_n;
      goto LABEL_33;
    }
    return 0i64;
  }
  v6 = z.out;
LABEL_33:
  if ( alt_stb_free )
  {
    alt_stb_free(v6);
    if ( alt_stb_free )
    {
      alt_stb_free(z.expanded);
      if ( alt_stb_free )
        alt_stb_free(z.idata);
    }
  }
  return out;
}

/*
==============
stbi__malloc
==============
*/
unsigned __int8 *stbi__malloc(unsigned __int64 size)
{
  unsigned __int8 *result; 

  if ( alt_stb_malloc )
    return (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))alt_stb_malloc)(size, size);
  if ( stbi_mem.index + size >= stbi_mem.size )
    return 0i64;
  result = &stbi_mem.data[stbi_mem.index];
  stbi_mem.old_index = stbi_mem.index;
  stbi_mem.index += size;
  return result;
}

/*
==============
stbi__paeth
==============
*/
__int64 stbi__paeth(int a, int b, int c)
{
  int v4; 
  signed int v5; 
  signed int v6; 
  signed int v7; 

  v4 = a - c + b - c;
  v5 = abs32(b - c);
  v6 = abs32(a - c);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return (unsigned int)a;
  if ( v6 <= v7 )
    return (unsigned int)b;
  return (unsigned int)c;
}

/*
==============
stbi__parse_entropy_coded_data
==============
*/
__int64 stbi__parse_entropy_coded_data(stbi__jpeg *z)
{
  int restart_interval; 
  int v3; 
  bool v4; 
  int scan_n; 
  __int64 b; 
  int v7; 
  char *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v16; 
  int v17; 
  int v18; 
  int *v19; 
  __int64 v20; 
  int v21; 
  int *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  __int16 *v34; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int *order; 
  __int64 v42; 
  int v43; 
  int *v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int *v51; 
  int *v52; 
  __int16 data[64]; 

  *(_QWORD *)&z->code_buffer = 0i64;
  z->nomore = 0;
  z->img_comp[3].dc_pred = 0;
  z->img_comp[2].dc_pred = 0;
  z->img_comp[1].dc_pred = 0;
  z->img_comp[0].dc_pred = 0;
  restart_interval = z->restart_interval;
  z->marker = -1;
  v3 = 0x7FFFFFFF;
  if ( restart_interval )
    v3 = restart_interval;
  z->eob_run = 0;
  v4 = z->progressive == 0;
  scan_n = z->scan_n;
  z->todo = v3;
  if ( !v4 )
  {
    if ( scan_n == 1 )
    {
      v28 = z->order[0];
      v29 = 0;
      v30 = v28;
      v31 = (z->img_comp[v28].x + 7) >> 3;
      v32 = (z->img_comp[v28].y + 7) >> 3;
      if ( v32 > 0 )
      {
        while ( 1 )
        {
          v33 = 0;
          if ( v31 > 0 )
            break;
LABEL_55:
          if ( ++v29 >= v32 )
            return 1i64;
        }
        while ( 1 )
        {
          v34 = &z->img_comp[v30].coeff[64 * (v33 + v29 * z->img_comp[v30].coeff_w)];
          if ( !(z->spec_start ? stbi__jpeg_decode_block_prog_ac(z, v34, &z->huff_ac[z->img_comp[v30].ha], z->fast_ac[(__int64)z->img_comp[v30].ha]) : (unsigned int)stbi__jpeg_decode_block_prog_dc(z, v34, &z->huff_dc[z->img_comp[v30].hd], v28)) )
            return 0i64;
          if ( --z->todo <= 0 )
          {
            if ( z->code_bits < 24 )
              stbi__grow_buffer_unsafe(z);
            if ( (unsigned __int8)(z->marker + 48) > 7u )
              return 1i64;
            *(_QWORD *)&z->code_buffer = 0i64;
            v36 = 0x7FFFFFFF;
            z->nomore = 0;
            z->img_comp[3].dc_pred = 0;
            z->img_comp[2].dc_pred = 0;
            z->img_comp[1].dc_pred = 0;
            z->img_comp[0].dc_pred = 0;
            v37 = z->restart_interval;
            z->marker = -1;
            if ( v37 )
              v36 = v37;
            z->eob_run = 0;
            z->todo = v36;
          }
          if ( ++v33 >= v31 )
            goto LABEL_55;
        }
      }
    }
    else
    {
      v38 = 0;
      if ( z->img_mcu_y > 0 )
      {
        while ( 1 )
        {
          v39 = 0;
          if ( z->img_mcu_x > 0 )
            break;
LABEL_75:
          if ( ++v38 >= z->img_mcu_y )
            return 1i64;
        }
        while ( 1 )
        {
          v40 = 0;
          if ( z->scan_n > 0 )
            break;
LABEL_67:
          if ( --z->todo <= 0 )
          {
            if ( z->code_bits < 24 )
              stbi__grow_buffer_unsafe(z);
            if ( (unsigned __int8)(z->marker + 48) > 7u )
              return 1i64;
            *(_QWORD *)&z->code_buffer = 0i64;
            v47 = 0x7FFFFFFF;
            z->nomore = 0;
            z->img_comp[3].dc_pred = 0;
            z->img_comp[2].dc_pred = 0;
            z->img_comp[1].dc_pred = 0;
            z->img_comp[0].dc_pred = 0;
            v48 = z->restart_interval;
            z->marker = -1;
            if ( v48 )
              v47 = v48;
            z->eob_run = 0;
            z->todo = v47;
          }
          if ( ++v39 >= z->img_mcu_x )
            goto LABEL_75;
        }
        order = z->order;
        v52 = z->order;
        while ( 1 )
        {
          v42 = *order;
          v43 = 0;
          v44 = (int *)((char *)z + 96 * v42);
          if ( v44[4522] > 0 )
            break;
LABEL_66:
          ++v40;
          order = ++v52;
          if ( v40 >= z->scan_n )
            goto LABEL_67;
        }
        while ( 1 )
        {
          v45 = v44[4521];
          v46 = 0;
          if ( v45 > 0 )
            break;
LABEL_65:
          if ( ++v43 >= v44[4522] )
            goto LABEL_66;
        }
        while ( (unsigned int)stbi__jpeg_decode_block_prog_dc(z, (__int16 *)(*((_QWORD *)v44 + 2270) + 2i64 * ((v46 + v44[4542] * (v43 + v44[4522] * v38) + v39 * v45) << 6)), &z->huff_dc[v44[4524]], v42) )
        {
          v45 = v44[4521];
          if ( ++v46 >= v45 )
            goto LABEL_65;
        }
        return 0i64;
      }
    }
    return 1i64;
  }
  if ( scan_n != 1 )
  {
    v16 = 0;
    v49 = 0;
    if ( z->img_mcu_y > 0 )
    {
      while ( 1 )
      {
        v17 = 0;
        if ( z->img_mcu_x > 0 )
          break;
LABEL_38:
        v49 = ++v16;
        if ( v16 >= z->img_mcu_y )
          return 1i64;
      }
      while ( 1 )
      {
        v18 = 0;
        v50 = 0;
        if ( z->scan_n > 0 )
          break;
LABEL_30:
        if ( --z->todo <= 0 )
        {
          if ( z->code_bits < 24 )
            stbi__grow_buffer_unsafe(z);
          if ( (unsigned __int8)(z->marker + 48) > 7u )
            return 1i64;
          *(_QWORD *)&z->code_buffer = 0i64;
          v26 = 0x7FFFFFFF;
          z->nomore = 0;
          z->img_comp[3].dc_pred = 0;
          z->img_comp[2].dc_pred = 0;
          z->img_comp[1].dc_pred = 0;
          z->img_comp[0].dc_pred = 0;
          v27 = z->restart_interval;
          z->marker = -1;
          if ( v27 )
            v26 = v27;
          z->eob_run = 0;
          z->todo = v26;
        }
        v16 = v49;
        if ( ++v17 >= z->img_mcu_x )
          goto LABEL_38;
      }
      v19 = z->order;
      v51 = z->order;
      while ( 1 )
      {
        v20 = *v19;
        v21 = 0;
        v22 = (int *)((char *)z + 96 * v20);
        if ( v22[4522] > 0 )
          break;
LABEL_29:
        ++v18;
        v19 = v51 + 1;
        v50 = v18;
        ++v51;
        if ( v18 >= z->scan_n )
          goto LABEL_30;
      }
      while ( 1 )
      {
        v23 = v22[4521];
        v24 = 0;
        if ( v23 > 0 )
          break;
LABEL_27:
        if ( ++v21 >= v22[4522] )
        {
          v18 = v50;
          goto LABEL_29;
        }
      }
      while ( 1 )
      {
        v25 = v21 + v16 * v22[4522];
        if ( !(unsigned int)stbi__jpeg_decode_block(z, data, &z->huff_dc[v22[4524]], &z->huff_ac[v22[4525]], z->fast_ac[(__int64)v22[4525]], v20, z->dequant[(__int64)v22[4523]]) )
          return 0i64;
        z->idct_block_kernel((unsigned __int8 *)(*((_QWORD *)v22 + 2266) + 8 * v22[4529] * v25 + (__int64)(8 * (v24 + v17 * v23))), v22[4529], data);
        v23 = v22[4521];
        ++v24;
        v16 = v49;
        if ( v24 >= v23 )
          goto LABEL_27;
      }
    }
    return 1i64;
  }
  b = z->order[0];
  v7 = 0;
  v8 = (char *)z + 96 * b;
  v9 = (*((_DWORD *)v8 + 4527) + 7) >> 3;
  v10 = (*((_DWORD *)v8 + 4528) + 7) >> 3;
  if ( v10 <= 0 )
    return 1i64;
  while ( 1 )
  {
    v11 = 0;
    if ( v9 > 0 )
      break;
LABEL_17:
    if ( ++v7 >= v10 )
      return 1i64;
  }
  v12 = 0;
  while ( (unsigned int)stbi__jpeg_decode_block(z, data, &z->huff_dc[*((int *)v8 + 4524)], &z->huff_ac[*((int *)v8 + 4525)], z->fast_ac[(__int64)*((int *)v8 + 4525)], b, z->dequant[(__int64)*((int *)v8 + 4523)]) )
  {
    z->idct_block_kernel((unsigned __int8 *)(v12 + *((_QWORD *)v8 + 2266) + 8 * v7 * *((_DWORD *)v8 + 4529)), *((unsigned int *)v8 + 4529), data);
    if ( --z->todo <= 0 )
    {
      if ( z->code_bits < 24 )
        stbi__grow_buffer_unsafe(z);
      if ( (unsigned __int8)(z->marker + 48) > 7u )
        return 1i64;
      *(_QWORD *)&z->code_buffer = 0i64;
      v13 = 0x7FFFFFFF;
      z->nomore = 0;
      z->img_comp[3].dc_pred = 0;
      z->img_comp[2].dc_pred = 0;
      z->img_comp[1].dc_pred = 0;
      z->img_comp[0].dc_pred = 0;
      v14 = z->restart_interval;
      z->marker = -1;
      if ( v14 )
        v13 = v14;
      z->eob_run = 0;
      z->todo = v13;
    }
    ++v11;
    v12 += 8;
    if ( v11 >= v9 )
      goto LABEL_17;
  }
  return 0i64;
}

/*
==============
stbi__parse_huffman_block
==============
*/
__int64 stbi__parse_huffman_block(stbi__zbuf *a)
{
  char *zout; 
  int num_bits; 
  unsigned int code_buffer; 
  unsigned __int8 *zbuffer_end; 
  unsigned __int8 *zbuffer; 
  unsigned __int8 v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned __int8 v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 v26; 
  int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  unsigned int v35; 
  unsigned __int8 *v36; 
  unsigned __int8 *v37; 
  unsigned __int8 v38; 
  int v39; 
  int v40; 
  char *v41; 
  char v42; 

  zout = a->zout;
  while ( 1 )
  {
    while ( 1 )
    {
      num_bits = a->num_bits;
      code_buffer = a->code_buffer;
      if ( num_bits < 16 )
      {
        zbuffer_end = a->zbuffer_end;
        do
        {
          zbuffer = a->zbuffer;
          if ( a->zbuffer < zbuffer_end )
          {
            v7 = *zbuffer;
            a->zbuffer = zbuffer + 1;
          }
          else
          {
            v7 = 0;
          }
          v8 = v7 << num_bits;
          num_bits += 8;
          v9 = code_buffer | v8;
          a->num_bits = num_bits;
          a->code_buffer = v9;
          code_buffer = v9;
        }
        while ( num_bits <= 24 );
      }
      v10 = code_buffer & 0x1FF;
      v11 = a->z_length.fast[v10];
      if ( a->z_length.fast[v10] )
      {
        v12 = v11 >> 9;
        a->code_buffer = code_buffer >> (v11 >> 9);
        v13 = v11 & 0x1FF;
        a->num_bits = num_bits - v12;
      }
      else
      {
        v13 = stbi__zhuffman_decode_slowpath(a, &a->z_length);
      }
      if ( v13 >= 256 )
        break;
      if ( v13 < 0 )
        goto LABEL_58;
      if ( zout >= a->zout_end )
      {
        if ( !stbi__zexpand(a, zout, 1) )
          return 0i64;
        zout = a->zout;
      }
      *zout++ = v13;
    }
    if ( v13 == 256 )
      break;
    v14 = a->num_bits;
    v15 = a->code_buffer;
    v16 = *(_DWORD *)&aCWorkspaceIw8C_1024[4 * v13 + 60];
    v17 = *(_DWORD *)&aUnhandledWinrt[4 * v13 + 28];
    if ( v16 )
    {
      if ( v14 < v16 )
      {
        v18 = a->zbuffer_end;
        do
        {
          v19 = a->zbuffer;
          if ( a->zbuffer < v18 )
          {
            v20 = *v19;
            a->zbuffer = v19 + 1;
          }
          else
          {
            v20 = 0;
          }
          v21 = v20 << v14;
          v14 += 8;
          v22 = v15 | v21;
          a->num_bits = v14;
          a->code_buffer = v22;
          v15 = v22;
        }
        while ( v14 <= 24 );
      }
      v14 -= v16;
      a->num_bits = v14;
      v23 = v15 >> v16;
      a->code_buffer = v15 >> v16;
      v17 += v15 & ((1 << v16) - 1);
    }
    else
    {
      v23 = a->code_buffer;
    }
    if ( v14 >= 16 )
    {
      v28 = v23;
    }
    else
    {
      v24 = a->zbuffer_end;
      do
      {
        v25 = a->zbuffer;
        if ( a->zbuffer < v24 )
        {
          v26 = *v25;
          a->zbuffer = v25 + 1;
        }
        else
        {
          v26 = 0;
        }
        v27 = v26 << v14;
        v14 += 8;
        v28 = v23 | v27;
        a->num_bits = v14;
        a->code_buffer = v28;
        v23 = v28;
      }
      while ( v14 <= 24 );
    }
    v29 = a->z_distance.fast[v28 & 0x1FF];
    if ( a->z_distance.fast[v28 & 0x1FF] )
    {
      v30 = v29 >> 9;
      a->code_buffer = v28 >> (v29 >> 9);
      v31 = v29 & 0x1FF;
      a->num_bits = v14 - v30;
    }
    else
    {
      v31 = stbi__zhuffman_decode_slowpath(a, &a->z_distance);
    }
    if ( v31 < 0 )
    {
LABEL_58:
      stbi__g_failure_reason = "bad huffman code";
      return 0i64;
    }
    v32 = stbi__zdist_extra[v31];
    v33 = stbi__zdist_base[v31];
    if ( v32 )
    {
      v34 = a->num_bits;
      v35 = a->code_buffer;
      if ( v34 < v32 )
      {
        v36 = a->zbuffer_end;
        do
        {
          v37 = a->zbuffer;
          if ( a->zbuffer < v36 )
          {
            v38 = *v37;
            a->zbuffer = v37 + 1;
          }
          else
          {
            v38 = 0;
          }
          v39 = v38 << v34;
          v34 += 8;
          v40 = v35 | v39;
          a->num_bits = v34;
          a->code_buffer = v40;
          v35 = v40;
        }
        while ( v34 <= 24 );
      }
      a->num_bits = v34 - v32;
      a->code_buffer = v35 >> v32;
      v33 += v35 & ((1 << v32) - 1);
    }
    if ( zout - a->zout_start < v33 )
    {
      stbi__g_failure_reason = "bad dist";
      return 0i64;
    }
    if ( &zout[v17] > a->zout_end )
    {
      if ( !stbi__zexpand(a, zout, v17) )
        return 0i64;
      zout = a->zout;
    }
    v41 = &zout[-v33];
    if ( v33 == 1 )
    {
      if ( v17 )
      {
        memset(zout, *v41, v17);
        zout += v17;
      }
    }
    else
    {
      for ( ; v17; --v17 )
      {
        v42 = *v41++;
        *zout++ = v42;
      }
    }
  }
  a->zout = zout;
  return 1i64;
}

/*
==============
stbi__parse_png_file
==============
*/
__int64 stbi__parse_png_file(stbi__png *z, int scan, int req_comp)
{
  stbi__png *v3; 
  stbi__context *s; 
  unsigned int v5; 
  int interlaced; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int8 *idata; 
  const char *v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  int v22; 
  int v23; 
  int v24; 
  unsigned __int8 *v25; 
  int v26; 
  int v27; 
  void *io_user_data; 
  int v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  unsigned __int8 *v33; 
  unsigned __int8 v34; 
  unsigned __int8 *v35; 
  unsigned int v36; 
  int v37; 
  unsigned __int8 *v38; 
  unsigned __int8 v39; 
  unsigned __int8 *v40; 
  unsigned int v41; 
  char v42; 
  char v43; 
  char v44; 
  unsigned __int8 v45; 
  unsigned __int8 *v46; 
  unsigned int img_y; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned __int8 *v51; 
  unsigned __int8 v52; 
  unsigned __int8 *v53; 
  __int64 v54; 
  int img_n; 
  int v56; 
  __int16 *v57; 
  __int16 *v58; 
  unsigned int v59; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 *img_buffer_end; 
  unsigned __int8 v62; 
  unsigned __int8 *v63; 
  int v64; 
  unsigned __int8 v65; 
  unsigned __int8 *v66; 
  unsigned __int8 v67; 
  unsigned __int8 *v68; 
  signed int v69; 
  char *v70; 
  unsigned __int8 *v71; 
  int v72; 
  bool v73; 
  void (__fastcall *v74)(void *); 
  char *zout_start; 
  int v76; 
  int v77; 
  char v78; 
  int color; 
  __int64 v80; 
  unsigned __int8 *out; 
  __int16 v82; 
  __int64 v83; 
  __int16 v84; 
  __int16 v85; 
  __int16 v86; 
  __int16 v87; 
  unsigned __int8 v88; 
  __int64 v89; 
  char v90; 
  char v91; 
  char v92; 
  char v93; 
  unsigned __int8 *v94; 
  unsigned int v95; 
  __int64 v96; 
  unsigned __int8 v97; 
  __int64 v98; 
  unsigned __int8 v99; 
  unsigned __int8 v100; 
  unsigned __int8 v101; 
  int v102; 
  unsigned int v103; 
  unsigned int v104; 
  __int64 v105; 
  unsigned __int8 v106; 
  int v107; 
  int v108; 
  unsigned __int8 *v109; 
  int v110; 
  unsigned __int8 *v111; 
  __int64 v112; 
  unsigned __int8 *v113; 
  __int64 v114; 
  unsigned __int8 v115; 
  __int64 v116; 
  unsigned __int8 v117; 
  void (__fastcall *v118)(void *); 
  unsigned __int8 i; 
  char v121; 
  __int16 v122; 
  char v123; 
  int v124; 
  int v125; 
  int v126; 
  unsigned int v127; 
  int v128; 
  unsigned int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  stbi__png *v134; 
  stbi__zbuf a; 
  __int16 v136[520]; 

  v3 = z;
  v134 = z;
  v131 = req_comp;
  v127 = 0;
  v129 = 0;
  s = z->s;
  v5 = 0;
  interlaced = 0;
  v126 = 0;
  v130 = 0;
  v128 = 0;
  z->expanded = NULL;
  z->idata = NULL;
  z->out = NULL;
  v121 = 0;
  v8 = 0;
  v125 = scan;
  i = 0;
  v122 = 0;
  v123 = 0;
  v124 = 1;
  if ( !(unsigned int)stbi__check_png_header(s) )
    return 0i64;
  if ( scan == 1 )
    return 1i64;
  while ( 1 )
  {
    v9 = stbi__get16be(s);
    v10 = stbi__get16be(s) + (v9 << 16);
    v132 = v10;
    v11 = stbi__get16be(s);
    v12 = stbi__get16be(s);
    v13 = v11 << 16;
    v14 = v13 + v12;
    v133 = v13 + v12;
    if ( (unsigned int)(v13 + v12) > 0x49484452 )
    {
      if ( v133 == 1347179589 )
      {
        if ( v124 )
          goto LABEL_245;
        if ( (unsigned int)v10 > 0x300 || (v5 = v10 / 3u, v129 = v10 / 3u, 3 * (v10 / 3u) != v10) )
        {
          v16 = "invalid PLTE";
          goto LABEL_246;
        }
        v59 = 0;
        if ( v5 )
        {
          img_buffer = s->img_buffer;
          do
          {
            img_buffer_end = s->img_buffer_end;
            if ( img_buffer >= img_buffer_end )
            {
              if ( s->read_from_callbacks )
              {
                stbi__refill_buffer(s);
                v63 = s->img_buffer;
                img_buffer_end = s->img_buffer_end;
                v62 = *v63;
                img_buffer = v63 + 1;
                s->img_buffer = v63 + 1;
              }
              else
              {
                v62 = 0;
              }
            }
            else
            {
              v62 = *img_buffer++;
              s->img_buffer = img_buffer;
            }
            v64 = 4 * v59;
            LOBYTE(v136[2 * v59 + 8]) = v62;
            if ( img_buffer >= img_buffer_end )
            {
              if ( s->read_from_callbacks )
              {
                stbi__refill_buffer(s);
                v66 = s->img_buffer;
                img_buffer_end = s->img_buffer_end;
                v65 = *v66;
                img_buffer = v66 + 1;
                s->img_buffer = v66 + 1;
              }
              else
              {
                v65 = 0;
              }
            }
            else
            {
              v65 = *img_buffer++;
              s->img_buffer = img_buffer;
            }
            *((_BYTE *)&v136[8] + (unsigned int)(v64 + 1)) = v65;
            if ( img_buffer >= img_buffer_end )
            {
              if ( s->read_from_callbacks )
              {
                stbi__refill_buffer(s);
                v68 = s->img_buffer;
                v67 = *v68;
                img_buffer = v68 + 1;
                s->img_buffer = v68 + 1;
              }
              else
              {
                v67 = 0;
              }
            }
            else
            {
              v67 = *img_buffer++;
              s->img_buffer = img_buffer;
            }
            ++v59;
            *((_BYTE *)&v136[8] + (unsigned int)(v64 + 2)) = v67;
            *((_BYTE *)&v136[8] + (unsigned int)(v64 + 3)) = -1;
          }
          while ( v59 < v5 );
        }
        goto LABEL_134;
      }
      if ( v133 == 1951551059 )
      {
        if ( v124 )
          goto LABEL_245;
        if ( v3->idata )
        {
          v16 = "tRNS after IDAT";
          goto LABEL_246;
        }
        if ( i )
        {
          if ( v125 == 2 )
          {
            s->img_n = 4;
            return 1i64;
          }
          if ( !v5 )
          {
            v16 = "tRNS before PLTE";
            goto LABEL_246;
          }
          if ( v10 > v5 )
            goto LABEL_241;
          v50 = 0;
          for ( i = 4; v50 < v10; *((_BYTE *)&v136[8] + v54) = v52 )
          {
            v51 = s->img_buffer;
            if ( v51 >= s->img_buffer_end )
            {
              if ( s->read_from_callbacks )
              {
                stbi__refill_buffer(s);
                v53 = s->img_buffer;
                v52 = *v53;
                s->img_buffer = v53 + 1;
              }
              else
              {
                v52 = 0;
              }
            }
            else
            {
              v52 = *v51;
              s->img_buffer = v51 + 1;
            }
            v54 = 4 * v50++ + 3;
          }
        }
        else
        {
          img_n = s->img_n;
          if ( (img_n & 1) == 0 )
          {
            v16 = "tRNS with alpha";
            goto LABEL_246;
          }
          if ( v10 != 2 * img_n )
          {
LABEL_241:
            v16 = "bad tRNS len";
            goto LABEL_246;
          }
          v56 = 0;
          v121 = 1;
          if ( v3->depth == 16 )
          {
            if ( img_n > 0 )
            {
              v57 = v136;
              do
              {
                ++v56;
                *v57++ = stbi__get16be(s);
              }
              while ( v56 < s->img_n );
            }
          }
          else if ( img_n > 0 )
          {
            v58 = &v122;
            do
            {
              v58 = (__int16 *)((char *)v58 + 1);
              ++v56;
              *((_BYTE *)v58 - 1) = stbi__depth_scale_table[v3->depth] * stbi__get16be(s);
            }
            while ( v56 < s->img_n );
            interlaced = v126;
          }
        }
        goto LABEL_134;
      }
      goto LABEL_85;
    }
    if ( v13 + v12 == 1229472850 )
    {
      if ( !v124 )
      {
        v16 = "multiple IHDR";
        goto LABEL_246;
      }
      v124 = 0;
      if ( v10 != 13 )
      {
        v16 = "bad IHDR len";
        goto LABEL_246;
      }
      v29 = stbi__get16be(s);
      v30 = (v29 << 16) + stbi__get16be(s);
      s->img_x = v30;
      if ( v30 > 0x1000000 || (v31 = stbi__get16be(s), v32 = stbi__get16be(s) + (v31 << 16), s->img_y = v32, v32 > 0x1000000) )
      {
LABEL_82:
        v16 = "too large";
        goto LABEL_246;
      }
      v33 = s->img_buffer;
      if ( v33 >= s->img_buffer_end )
      {
        if ( s->read_from_callbacks )
        {
          stbi__refill_buffer(s);
          v35 = s->img_buffer;
          v34 = *v35;
          s->img_buffer = v35 + 1;
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = *v33;
        s->img_buffer = v33 + 1;
      }
      v36 = v34;
      v3->depth = v34;
      if ( v34 != 1 )
      {
        if ( v34 > 0x10u || (v37 = 65812, !_bittest(&v37, v36)) )
        {
          v16 = "1/2/4/8/16-bit only";
          goto LABEL_246;
        }
      }
      v38 = s->img_buffer;
      if ( v38 >= s->img_buffer_end )
      {
        if ( s->read_from_callbacks )
        {
          stbi__refill_buffer(s);
          v40 = s->img_buffer;
          v39 = *v40;
          v38 = v40 + 1;
          s->img_buffer = v38;
        }
        else
        {
          v39 = 0;
        }
      }
      else
      {
        v39 = *v38++;
        s->img_buffer = v38;
      }
      v41 = v39;
      v130 = v39;
      if ( v39 > 6u )
      {
LABEL_234:
        v16 = "bad ctype";
        goto LABEL_246;
      }
      if ( v39 == 3 )
      {
        if ( v3->depth == 16 )
          goto LABEL_234;
        v42 = 3;
        i = 3;
      }
      else
      {
        if ( (v39 & 1) != 0 )
          goto LABEL_234;
        v42 = i;
      }
      if ( v38 >= s->img_buffer_end )
      {
        if ( !s->read_from_callbacks )
          goto LABEL_65;
        stbi__refill_buffer(s);
        v38 = s->img_buffer;
      }
      v43 = *v38++;
      s->img_buffer = v38;
      if ( v43 )
      {
        v16 = "bad comp method";
        goto LABEL_246;
      }
LABEL_65:
      if ( v38 >= s->img_buffer_end )
      {
        if ( !s->read_from_callbacks )
        {
LABEL_69:
          if ( v38 >= s->img_buffer_end )
          {
            if ( s->read_from_callbacks )
            {
              stbi__refill_buffer(s);
              v46 = s->img_buffer;
              v45 = *v46;
              s->img_buffer = v46 + 1;
            }
            else
            {
              v45 = 0;
            }
          }
          else
          {
            v45 = *v38;
            s->img_buffer = v38 + 1;
          }
          interlaced = v45;
          v126 = v45;
          if ( v45 > 1u )
          {
            v16 = "bad interlace method";
            goto LABEL_246;
          }
          if ( !s->img_x || (img_y = s->img_y) == 0 )
          {
            v16 = "0-pixel image";
            goto LABEL_246;
          }
          v48 = 0x40000000 / s->img_x;
          if ( v42 )
          {
            s->img_n = 1;
            if ( v48 >> 2 < img_y )
              goto LABEL_82;
          }
          else
          {
            v49 = (v41 & 2 | 1) + ((v41 >> 2) & 1);
            s->img_n = v49;
            if ( v48 / v49 < img_y )
              goto LABEL_82;
            if ( v125 == 2 )
              return 1i64;
          }
          goto LABEL_134;
        }
        stbi__refill_buffer(s);
        v38 = s->img_buffer;
      }
      v44 = *v38++;
      s->img_buffer = v38;
      if ( v44 )
      {
        v16 = "bad filter method";
        goto LABEL_246;
      }
      goto LABEL_69;
    }
    if ( v133 == 1130840649 )
    {
      v128 = 1;
      if ( v10 >= 0 )
      {
        if ( s->io.read && (v26 = LODWORD(s->img_buffer_end) - LODWORD(s->img_buffer), v26 < v10) )
        {
          v27 = v10 - v26;
          io_user_data = s->io_user_data;
          s->img_buffer = s->img_buffer_end;
          s->io.skip(io_user_data, v27);
        }
        else
        {
          s->img_buffer += v10;
        }
      }
      else
      {
        s->img_buffer = s->img_buffer_end;
      }
      goto LABEL_134;
    }
    if ( v133 != 1229209940 )
      break;
    if ( v124 )
      goto LABEL_245;
    if ( i && !v5 )
    {
      v16 = "no PLTE";
      goto LABEL_246;
    }
    if ( v125 == 2 )
    {
      s->img_n = i;
      return 1i64;
    }
    v17 = v127;
    v18 = v10 + v127;
    if ( (int)(v10 + v127) < (int)v127 )
      return 0i64;
    if ( v18 > v8 )
    {
      v19 = v8;
      if ( !v8 )
      {
        v8 = 4096;
        if ( (unsigned int)v10 > 0x1000 )
          v8 = v10;
      }
      for ( ; v18 > v8; v8 *= 2 )
        ;
      v20 = (unsigned __int8 *)stb_realloc_sized(v3->idata, v19, v8);
      if ( !v20 )
        goto LABEL_221;
      v3->idata = v20;
    }
    v21 = &v3->idata[v17];
    if ( s->io.read && (v22 = LODWORD(s->img_buffer_end) - LODWORD(s->img_buffer), v22 < v10) )
    {
      memcpy_0(v21, s->img_buffer, v22);
      v23 = v10 - v22;
      v24 = s->io.read(s->io_user_data, (char *)&v21[v22], v23);
      s->img_buffer = s->img_buffer_end;
      if ( v24 != v23 )
        goto LABEL_28;
    }
    else
    {
      v25 = s->img_buffer;
      if ( &v25[v10] > s->img_buffer_end )
      {
LABEL_28:
        v16 = "outofdata";
        goto LABEL_246;
      }
      memcpy_0(v21, v25, v10);
      s->img_buffer += v10;
    }
    v3 = v134;
    interlaced = v126;
    v127 = v18;
    v5 = v129;
LABEL_134:
    stbi__get16be(s);
    stbi__get16be(s);
  }
  if ( v133 != 1229278788 )
  {
LABEL_85:
    if ( v124 )
      goto LABEL_245;
    if ( (v14 & 0x20000000) == 0 )
    {
      invalid_chunk[0] = (unsigned int)(v13 + v12) >> 24;
      invalid_chunk[1] = (unsigned int)(v13 + v12) >> 16;
      invalid_chunk[3] = v133;
      v16 = invalid_chunk;
      invalid_chunk[2] = BYTE1(v14);
      goto LABEL_246;
    }
    stbi__skip(s, v10);
    goto LABEL_134;
  }
  if ( v124 )
  {
LABEL_245:
    v16 = "first not IHDR";
    goto LABEL_246;
  }
  if ( v125 )
    return 1i64;
  idata = v3->idata;
  if ( !idata )
  {
    v16 = "no IDAT";
LABEL_246:
    stbi__g_failure_reason = v16;
    return 0i64;
  }
  v69 = s->img_y * (s->img_n * ((v3->depth * s->img_x + 7) >> 3) + 1);
  if ( alt_stb_malloc )
  {
    v70 = (char *)alt_stb_malloc(v69);
    goto LABEL_139;
  }
  if ( v69 + stbi_mem.index >= stbi_mem.size )
    goto LABEL_144;
  stbi_mem.old_index = stbi_mem.index;
  v70 = (char *)&stbi_mem.data[stbi_mem.index];
  stbi_mem.index += v69;
LABEL_139:
  if ( !v70 )
  {
LABEL_144:
    v72 = v128;
    goto LABEL_145;
  }
  v71 = &idata[v127];
  a.zbuffer = idata;
  v72 = v128;
  a.zbuffer_end = v71;
  a.zout_start = v70;
  a.zout = v70;
  a.zout_end = &v70[v69];
  a.z_expandable = 1;
  v73 = stbi__parse_zlib(&a, v128 == 0) == 0;
  v74 = alt_stb_free;
  if ( v73 )
  {
    if ( !alt_stb_free )
    {
LABEL_146:
      zout_start = NULL;
      goto LABEL_147;
    }
    alt_stb_free(a.zout_start);
LABEL_145:
    v74 = alt_stb_free;
    goto LABEL_146;
  }
  v69 = LODWORD(a.zout) - LODWORD(a.zout_start);
  zout_start = a.zout_start;
LABEL_147:
  v3->expanded = (unsigned __int8 *)zout_start;
  if ( !zout_start )
    return 0i64;
  if ( v74 )
    v74(v3->idata);
  v76 = v131;
  v3->idata = NULL;
  v77 = s->img_n + 1;
  if ( v76 != v77 || v76 == 3 || i )
  {
    v78 = v121;
    if ( !v121 )
      v77 = s->img_n;
  }
  else
  {
    v78 = v121;
  }
  color = v130;
  s->img_out_n = v77;
  if ( !stbi__create_png_image(v3, v3->expanded, v69, v77, v3->depth, color, interlaced) )
    return 0i64;
  if ( v78 )
  {
    v80 = v3->s->img_x * v3->s->img_y;
    out = v3->out;
    if ( v3->depth == 16 )
    {
      if ( (_DWORD)v80 )
      {
        if ( s->img_out_n == 2 )
        {
          v82 = v136[0];
          v83 = (unsigned int)v80;
          do
          {
            v73 = *(_WORD *)out == (unsigned __int16)v82;
            out += 4;
            v84 = -1;
            if ( v73 )
              v84 = 0;
            *((_WORD *)out - 1) = v84;
            --v83;
          }
          while ( v83 );
        }
        else
        {
          v85 = v136[2];
          v86 = v136[1];
          v87 = v136[0];
          do
          {
            if ( *(_WORD *)out == v87 && *((_WORD *)out + 1) == v86 && *((_WORD *)out + 2) == v85 )
              *((_WORD *)out + 3) = 0;
            out += 8;
            --v80;
          }
          while ( v80 );
        }
      }
    }
    else if ( (_DWORD)v80 )
    {
      if ( s->img_out_n == 2 )
      {
        v88 = v122;
        v89 = (unsigned int)v80;
        do
        {
          v73 = *out == v88;
          out += 2;
          v90 = -1;
          if ( v73 )
            v90 = 0;
          *(out - 1) = v90;
          --v89;
        }
        while ( v89 );
      }
      else
      {
        v91 = v123;
        v92 = HIBYTE(v122);
        v93 = v122;
        do
        {
          if ( *out == v93 && out[1] == v92 && out[2] == v91 )
            out[3] = 0;
          out += 4;
          --v80;
        }
        while ( v80 );
      }
    }
  }
  if ( v72 )
  {
    if ( stbi__de_iphone_flag )
    {
      if ( s->img_out_n > 2 )
      {
        v94 = v3->out;
        v95 = v3->s->img_x * v3->s->img_y;
        if ( v95 )
        {
          if ( v3->s->img_out_n == 3 )
          {
            v96 = v95;
            do
            {
              v97 = *v94;
              *v94 = v94[2];
              v94[2] = v97;
              v94 += 3;
              --v96;
            }
            while ( v96 );
          }
          else if ( stbi__unpremultiply_on_load )
          {
            v98 = v95;
            do
            {
              v99 = v94[3];
              v100 = *v94;
              v101 = v94[2];
              if ( v99 )
              {
                v102 = v99 >> 1;
                v94[1] = (v102 + 255 * (unsigned int)v94[1]) / v99;
                v103 = (v102 + 255 * (unsigned int)v100) / v99;
                v104 = (v102 + 255 * (unsigned int)v101) / v99;
              }
              else
              {
                LOBYTE(v103) = *v94;
                LOBYTE(v104) = v94[2];
              }
              *v94 = v104;
              v94[2] = v103;
              v94 += 4;
              --v98;
            }
            while ( v98 );
          }
          else
          {
            v105 = v95;
            do
            {
              v106 = *v94;
              *v94 = v94[2];
              v94[2] = v106;
              v94 += 4;
              --v105;
            }
            while ( v105 );
          }
        }
      }
    }
  }
  if ( i )
  {
    v107 = v131;
    v108 = i;
    s->img_n = i;
    s->img_out_n = i;
    if ( v107 >= 3 )
    {
      s->img_out_n = v107;
      v108 = v107;
    }
    v109 = v3->out;
    v110 = v3->s->img_x * v3->s->img_y;
    if ( v110 < 0 || v110 > 0x7FFFFFFF / v108 )
      goto LABEL_221;
    if ( alt_stb_malloc )
    {
      v111 = (unsigned __int8 *)alt_stb_malloc(v110 * v108);
      goto LABEL_212;
    }
    if ( stbi_mem.index + v110 * v108 >= stbi_mem.size )
      goto LABEL_221;
    v111 = &stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += v110 * v108;
LABEL_212:
    if ( !v111 )
    {
LABEL_221:
      v16 = "outofmem";
      goto LABEL_246;
    }
    if ( v110 )
    {
      v112 = (unsigned int)v110;
      v113 = v111 + 2;
      if ( v108 == 3 )
      {
        do
        {
          v114 = *v109;
          v113 += 3;
          ++v109;
          v115 = v136[2 * v114 + 9];
          *(v113 - 5) = v136[2 * v114 + 8];
          *(v113 - 4) = HIBYTE(v136[2 * v114 + 8]);
          *(v113 - 3) = v115;
          --v112;
        }
        while ( v112 );
      }
      else
      {
        do
        {
          v116 = *v109;
          v113 += 4;
          ++v109;
          v117 = HIBYTE(v136[2 * v116 + 9]);
          *(v113 - 6) = v136[2 * v116 + 8];
          *(v113 - 5) = HIBYTE(v136[2 * v116 + 8]);
          *(v113 - 4) = v136[2 * v116 + 9];
          *(v113 - 3) = v117;
          --v112;
        }
        while ( v112 );
      }
    }
    v118 = alt_stb_free;
    if ( alt_stb_free )
    {
      alt_stb_free(v3->out);
      v118 = alt_stb_free;
    }
    v3->out = v111;
  }
  else
  {
    v118 = alt_stb_free;
    if ( v78 )
      ++s->img_n;
  }
  if ( v118 )
    v118(v3->expanded);
  v3->expanded = NULL;
  return 1i64;
}

/*
==============
stbi__parse_uncompressed_block
==============
*/
__int64 stbi__parse_uncompressed_block(stbi__zbuf *a)
{
  int num_bits; 
  int v3; 
  int v4; 
  unsigned int code_buffer; 
  unsigned __int8 *zbuffer_end; 
  unsigned __int8 *zbuffer; 
  unsigned __int8 v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  char v17; 
  __int64 v18; 
  __int64 result; 
  size_t v20; 
  char *zout; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  unsigned __int8 v25; 

  num_bits = a->num_bits;
  v3 = num_bits;
  v4 = num_bits & 7;
  if ( (num_bits & 7) != 0 )
  {
    code_buffer = a->code_buffer;
    if ( num_bits < v4 )
    {
      zbuffer_end = a->zbuffer_end;
      do
      {
        zbuffer = a->zbuffer;
        if ( a->zbuffer < zbuffer_end )
        {
          v8 = *zbuffer;
          a->zbuffer = zbuffer + 1;
        }
        else
        {
          v8 = 0;
        }
        v9 = v8 << num_bits;
        num_bits += 8;
        v10 = code_buffer | v9;
        a->num_bits = num_bits;
        a->code_buffer = v10;
        code_buffer = v10;
      }
      while ( num_bits <= 24 );
    }
    num_bits -= v4;
    a->code_buffer = code_buffer >> v4;
    a->num_bits = num_bits;
    v3 = num_bits;
  }
  v11 = 0;
  if ( num_bits > 0 )
  {
    v12 = a->code_buffer;
    v13 = &v22;
    do
    {
      ++v11;
      v12 >>= 8;
      v3 -= 8;
      *v13++ = a->code_buffer;
      a->code_buffer = v12;
    }
    while ( v3 > 0 );
    a->num_bits = v3;
  }
  v14 = v11;
  if ( v11 < 4i64 )
  {
    v15 = a->zbuffer_end;
    do
    {
      v16 = a->zbuffer;
      if ( a->zbuffer < v15 )
      {
        v17 = *v16;
        a->zbuffer = v16 + 1;
      }
      else
      {
        v17 = 0;
      }
      *(&v22 + v14++) = v17;
    }
    while ( v14 < 4 );
  }
  v18 = v22 + (v23 << 8);
  if ( v24 + (v25 << 8) != ((v22 + (v23 << 8)) ^ 0xFFFF) )
  {
    stbi__g_failure_reason = "zlib corrupt";
    return 0i64;
  }
  v20 = (unsigned int)v18;
  if ( &a->zbuffer[(unsigned __int64)(unsigned int)v18] > a->zbuffer_end )
  {
    stbi__g_failure_reason = "read past buffer";
    return 0i64;
  }
  zout = a->zout;
  if ( &zout[v18] > a->zout_end && !stbi__zexpand(a, zout, v18) )
    return 0i64;
  memcpy_0(a->zout, a->zbuffer, v20);
  a->zbuffer += v20;
  result = 1i64;
  a->zout += v20;
  return result;
}

/*
==============
stbi__parse_zlib
==============
*/
__int64 stbi__parse_zlib(stbi__zbuf *a, int parse_header)
{
  unsigned __int8 *zbuffer; 
  unsigned __int8 *zbuffer_end; 
  unsigned __int8 v5; 
  unsigned __int8 v6; 
  int num_bits; 
  unsigned int code_buffer; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 v12; 
  int v13; 
  int v14; 
  char v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  unsigned __int8 v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 

  if ( parse_header )
  {
    zbuffer = a->zbuffer;
    zbuffer_end = a->zbuffer_end;
    if ( a->zbuffer < zbuffer_end )
    {
      v5 = *zbuffer++;
      a->zbuffer = zbuffer;
    }
    else
    {
      v5 = 0;
    }
    if ( zbuffer < zbuffer_end )
    {
      v6 = *zbuffer;
      a->zbuffer = zbuffer + 1;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 + (v5 << 8) != 31 * ((v6 + (v5 << 8)) / 0x1Fu) )
    {
      stbi__g_failure_reason = "bad zlib header";
      return 0i64;
    }
    if ( (v6 & 0x20) != 0 )
    {
      stbi__g_failure_reason = "no preset dict";
      return 0i64;
    }
    if ( (v5 & 0xF) != 8 )
    {
      stbi__g_failure_reason = "bad compression";
      return 0i64;
    }
  }
  *(_QWORD *)&a->num_bits = 0i64;
  while ( 1 )
  {
    num_bits = a->num_bits;
    code_buffer = a->code_buffer;
    if ( num_bits < 1 )
    {
      v10 = a->zbuffer_end;
      do
      {
        v11 = a->zbuffer;
        if ( a->zbuffer < v10 )
        {
          v12 = *v11;
          a->zbuffer = v11 + 1;
        }
        else
        {
          v12 = 0;
        }
        v13 = v12 << num_bits;
        num_bits += 8;
        v14 = code_buffer | v13;
        a->num_bits = num_bits;
        a->code_buffer = v14;
        code_buffer = v14;
      }
      while ( num_bits <= 24 );
    }
    v15 = code_buffer;
    v16 = code_buffer >> 1;
    v17 = v15 & 1;
    a->code_buffer = v16;
    v18 = num_bits - 1;
    a->num_bits = v18;
    if ( v18 < 2 )
    {
      v19 = a->zbuffer_end;
      v20 = v16;
      do
      {
        v21 = a->zbuffer;
        if ( a->zbuffer < v19 )
        {
          v22 = *v21;
          a->zbuffer = v21 + 1;
        }
        else
        {
          v22 = 0;
        }
        v23 = v22 << v18;
        v18 += 8;
        v16 = v20 | v23;
        a->num_bits = v18;
        a->code_buffer = v16;
        v20 = v16;
      }
      while ( v18 <= 24 );
    }
    a->code_buffer = v16 >> 2;
    a->num_bits = v18 - 2;
    v24 = v16 & 3;
    if ( (v16 & 3) == 0 )
    {
      v25 = stbi__parse_uncompressed_block(a);
      goto LABEL_36;
    }
    if ( v24 == 3 )
      return 0i64;
    if ( v24 == 1 )
    {
      if ( !stbi__zbuild_huffman(&a->z_length, stbi__zdefault_length, 288) )
        return 0i64;
      v26 = stbi__zbuild_huffman(&a->z_distance, stbi__zdefault_distance, 32);
    }
    else
    {
      v26 = stbi__compute_huffman_codes(a);
    }
    if ( !v26 )
      return 0i64;
    v25 = stbi__parse_huffman_block(a);
LABEL_36:
    if ( !v25 )
      return 0i64;
    if ( v17 )
      return 1i64;
  }
}

/*
==============
stbi__process_frame_header
==============
*/
__int64 stbi__process_frame_header(stbi__jpeg *z, int scan)
{
  stbi__context *s; 
  int v4; 
  unsigned int v6; 
  int v7; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v9; 
  unsigned int v10; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned __int8 *v15; 
  int img_n; 
  unsigned __int8 **p_linebuf; 
  int v18; 
  int v19; 
  const unsigned __int8 *v20; 
  int *p_h; 
  unsigned __int8 *v22; 
  unsigned __int8 v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 v26; 
  unsigned __int8 *v27; 
  unsigned __int8 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  unsigned __int8 v32; 
  unsigned __int8 *v33; 
  int img_x; 
  int img_y; 
  int v36; 
  int v37; 
  int *p_v; 
  __int64 v39; 
  int v40; 
  signed int v41; 
  int v42; 
  void *(__fastcall *v43)(unsigned __int64); 
  int *p_x; 
  unsigned __int64 index; 
  int v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  __int64 v52; 
  unsigned __int8 *v53; 
  const char *v54; 
  unsigned __int64 v55; 
  int v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  unsigned __int8 *v61; 
  unsigned __int64 v62; 

  s = z->s;
  v4 = 1;
  v6 = 1;
  v7 = stbi__get16be(z->s);
  if ( v7 < 11 )
  {
LABEL_104:
    stbi__g_failure_reason = "bad SOF len";
    return 0i64;
  }
  img_buffer = s->img_buffer;
  if ( img_buffer >= s->img_buffer_end )
  {
    if ( !s->read_from_callbacks )
    {
LABEL_103:
      stbi__g_failure_reason = "only 8-bit";
      return 0i64;
    }
    stbi__refill_buffer(s);
    img_buffer = s->img_buffer;
  }
  v9 = *img_buffer;
  s->img_buffer = img_buffer + 1;
  if ( v9 != 8 )
    goto LABEL_103;
  v10 = stbi__get16be(s);
  s->img_y = v10;
  if ( !v10 )
  {
    stbi__g_failure_reason = "no header height";
    return 0i64;
  }
  v12 = stbi__get16be(s);
  s->img_x = v12;
  if ( !v12 )
  {
    stbi__g_failure_reason = "0 width";
    return 0i64;
  }
  v13 = s->img_buffer;
  if ( v13 >= s->img_buffer_end )
  {
    if ( s->read_from_callbacks )
    {
      stbi__refill_buffer(s);
      v15 = s->img_buffer;
      LOBYTE(v14) = *v15;
      s->img_buffer = v15 + 1;
    }
    else
    {
      LOBYTE(v14) = 0;
    }
  }
  else
  {
    LOBYTE(v14) = *v13;
    s->img_buffer = v13 + 1;
  }
  img_n = (unsigned __int8)v14;
  if ( (((unsigned __int8)v14 - 1) & 0xFFFFFFFC) != 0 || (unsigned __int8)v14 == 2 )
  {
    stbi__g_failure_reason = "bad component count";
    return 0i64;
  }
  s->img_n = (unsigned __int8)v14;
  v14 = (unsigned __int8)v14;
  if ( (_BYTE)v14 )
  {
    p_linebuf = &z->img_comp[0].linebuf;
    do
    {
      *(p_linebuf - 3) = NULL;
      *p_linebuf = NULL;
      p_linebuf += 12;
      --v14;
    }
    while ( v14 );
    img_n = s->img_n;
  }
  if ( v7 != 3 * img_n + 8 )
    goto LABEL_104;
  z->rgb = 0;
  v18 = s->img_n;
  v19 = 0;
  if ( v18 > 0 )
  {
    v20 = rgb;
    p_h = &z->img_comp[0].h;
    while ( 1 )
    {
      v22 = s->img_buffer;
      if ( v22 >= s->img_buffer_end )
      {
        if ( s->read_from_callbacks )
        {
          stbi__refill_buffer(s);
          v24 = s->img_buffer;
          v23 = *v24;
          s->img_buffer = v24 + 1;
        }
        else
        {
          v23 = 0;
        }
      }
      else
      {
        v23 = *v22;
        s->img_buffer = v22 + 1;
      }
      *(p_h - 1) = v23;
      if ( s->img_n == 3 && v23 == *v20 )
        ++z->rgb;
      v25 = s->img_buffer;
      if ( v25 >= s->img_buffer_end )
      {
        if ( s->read_from_callbacks )
        {
          stbi__refill_buffer(s);
          v27 = s->img_buffer;
          v26 = *v27;
          s->img_buffer = v27 + 1;
        }
        else
        {
          v26 = 0;
        }
      }
      else
      {
        v26 = *v25;
        s->img_buffer = v25 + 1;
      }
      v28 = v26;
      v29 = v26 >> 4;
      *p_h = v29;
      if ( !v29 || v29 > 4 )
        break;
      v30 = v28 & 0xF;
      p_h[1] = v30;
      if ( !v30 || v30 > 4 )
      {
        v54 = "bad V";
        goto LABEL_73;
      }
      v31 = s->img_buffer;
      if ( v31 >= s->img_buffer_end )
      {
        if ( s->read_from_callbacks )
        {
          stbi__refill_buffer(s);
          v33 = s->img_buffer;
          v32 = *v33;
          s->img_buffer = v33 + 1;
        }
        else
        {
          v32 = 0;
        }
      }
      else
      {
        v32 = *v31;
        s->img_buffer = v31 + 1;
      }
      p_h[2] = v32;
      if ( v32 > 3u )
      {
        v54 = "bad TQ";
        goto LABEL_73;
      }
      v18 = s->img_n;
      ++v19;
      ++v20;
      p_h += 24;
      if ( v19 >= v18 )
        goto LABEL_48;
    }
    v54 = "bad H";
    goto LABEL_73;
  }
LABEL_48:
  if ( scan )
    return 1i64;
  img_x = s->img_x;
  img_y = s->img_y;
  if ( (s->img_x & 0x80000000) != 0 || img_y < 0 || img_y && img_x > 0x7FFFFFFF / img_y || (v36 = img_y * img_x, v36 < 0) || v18 < 0 || v18 && v36 > 0x7FFFFFFF / v18 )
  {
    v54 = "too large";
LABEL_73:
    stbi__g_failure_reason = v54;
    return 0i64;
  }
  v37 = s->img_n;
  if ( v37 > 0 )
  {
    p_v = &z->img_comp[0].v;
    v39 = (unsigned int)v37;
    do
    {
      v40 = v4;
      v4 = *(p_v - 1);
      p_v += 24;
      v41 = v6;
      v6 = *(p_v - 24);
      if ( v4 <= v40 )
        v4 = v40;
      if ( (int)v6 <= v41 )
        v6 = v41;
      --v39;
    }
    while ( v39 );
  }
  z->img_h_max = v4;
  z->img_v_max = v6;
  z->img_mcu_w = 8 * v4;
  z->img_mcu_h = 8 * v6;
  v42 = 0;
  z->img_mcu_x = (s->img_x + 8 * v4 - 1) / (8 * v4);
  z->img_mcu_y = (s->img_y + 8 * v6 - 1) / (8 * v6);
  if ( s->img_n <= 0 )
    return 1i64;
  v43 = alt_stb_malloc;
  p_x = &z->img_comp[0].x;
  index = stbi_mem.index;
  while ( 1 )
  {
    v46 = *(p_x - 5);
    HIDWORD(v47) = 0;
    *p_x = (s->img_x * *(p_x - 6) + v4 - 1) / v4;
    LODWORD(v47) = (s->img_y * v46 + v6 - 1) % v6;
    p_x[1] = (s->img_y * v46 + v6 - 1) / v6;
    v48 = 8 * *(p_x - 6) * z->img_mcu_x;
    p_x[2] = v48;
    v49 = z->img_mcu_y * v46;
    *(_QWORD *)(p_x + 13) = 0i64;
    *(_QWORD *)(p_x + 9) = 0i64;
    *(_QWORD *)(p_x + 11) = 0i64;
    v50 = 8 * v49;
    p_x[3] = v50;
    if ( v48 < 0 )
      break;
    if ( v50 < 0 )
      break;
    if ( v50 )
    {
      v47 = (unsigned int)(0x7FFFFFFF % v50);
      if ( v48 > 0x7FFFFFFF / v50 )
        break;
    }
    v51 = v50 * v48;
    v52 = v51 + 15;
    if ( v43 )
    {
      v53 = (unsigned __int8 *)((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64))v43)(v51 + 15, v47, index);
      v43 = alt_stb_malloc;
      index = stbi_mem.index;
    }
    else
    {
      v55 = index + v52;
      if ( index + v52 < stbi_mem.size )
      {
        stbi_mem.old_index = index;
        v53 = &stbi_mem.data[index];
        index = v55;
        stbi_mem.index = v55;
      }
      else
      {
        v53 = NULL;
      }
    }
    *(_QWORD *)(p_x + 7) = v53;
    if ( !v53 )
      goto LABEL_98;
    *(_QWORD *)(p_x + 5) = (unsigned __int64)(v53 + 15) & 0xFFFFFFFFFFFFFFF0ui64;
    if ( z->progressive )
    {
      v56 = p_x[2];
      v57 = p_x[3];
      p_x[15] = v56 / 8;
      v58 = (v57 >> 31) & 7;
      p_x[16] = v57 / 8;
      if ( v56 < 0 || v57 < 0 || v57 && (v58 = (unsigned int)(0x7FFFFFFF % v57), v56 > 0x7FFFFFFF / v57) || (v59 = v57 * v56, v59 < 0) || v59 > 0x3FFFFFFF || 2 * v59 > 2147483632 )
      {
        *(_QWORD *)(p_x + 9) = 0i64;
        goto LABEL_98;
      }
      v60 = 2 * v59 + 15;
      if ( v43 )
      {
        v61 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))v43)(v60, v58, index);
        v43 = alt_stb_malloc;
        index = stbi_mem.index;
      }
      else
      {
        v62 = v60 + index;
        if ( v60 + index < stbi_mem.size )
        {
          stbi_mem.old_index = index;
          v61 = &stbi_mem.data[index];
          index += v60;
          stbi_mem.index = v62;
        }
        else
        {
          v61 = NULL;
        }
      }
      *(_QWORD *)(p_x + 9) = v61;
      if ( !v61 )
        goto LABEL_98;
      *(_QWORD *)(p_x + 13) = (unsigned __int64)(v61 + 15) & 0xFFFFFFFFFFFFFFF0ui64;
    }
    ++v42;
    p_x += 24;
    if ( v42 >= s->img_n )
      return 1i64;
  }
  *(_QWORD *)(p_x + 7) = 0i64;
LABEL_98:
  stbi__g_failure_reason = "outofmem";
  return stbi__free_jpeg_components(z, v42 + 1, 0);
}

/*
==============
stbi__process_marker
==============
*/
__int64 stbi__process_marker(stbi__jpeg *z, int m)
{
  int v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  stbi__context *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 v11; 
  unsigned __int8 *v12; 
  int v13; 
  stbi__context *v14; 
  __int64 v15; 
  int v16; 
  stbi__context *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 v19; 
  unsigned __int8 *v20; 
  int v21; 
  stbi__context *v22; 
  unsigned __int8 *v23; 
  stbi__context *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  bool v30; 
  stbi__context *v31; 
  unsigned __int8 *v32; 
  unsigned __int8 v33; 
  unsigned __int8 *v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned __int64 v37; 
  stbi__context *v38; 
  unsigned __int16 v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  __int64 v42; 
  int v43; 
  stbi__context *s; 
  int v45; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v47; 
  unsigned __int8 *v48; 
  unsigned int v49; 
  unsigned int v50; 
  int *v51; 
  __int64 v52; 
  stbi__context *v53; 
  unsigned __int8 *v54; 
  unsigned __int8 v55; 
  unsigned __int8 *v56; 
  __int64 v57; 
  char *v58; 
  __int64 v59; 
  char *v60; 
  __int64 i; 
  stbi__context *v62; 
  unsigned __int8 *v63; 
  unsigned __int8 v64; 
  unsigned __int8 *v65; 
  unsigned __int8 *v66; 
  int v67; 
  __int16 *v68; 
  unsigned __int8 v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int count[16]; 

  switch ( m )
  {
    case 196:
      v29 = stbi__get16be(z->s) - 2;
      if ( v29 > 0 )
      {
        while ( 1 )
        {
          s = z->s;
          v45 = 0;
          img_buffer = z->s->img_buffer;
          if ( img_buffer >= z->s->img_buffer_end )
          {
            if ( s->read_from_callbacks )
            {
              stbi__refill_buffer(z->s);
              v48 = s->img_buffer;
              v47 = *v48;
              s->img_buffer = v48 + 1;
            }
            else
            {
              v47 = 0;
            }
          }
          else
          {
            v47 = *img_buffer;
            s->img_buffer = img_buffer + 1;
          }
          v49 = v47 & 0xF;
          v50 = v47 >> 4;
          if ( v50 > 1 || v49 > 3 )
            break;
          v51 = count;
          v52 = 16i64;
          do
          {
            v53 = z->s;
            v54 = z->s->img_buffer;
            if ( v54 >= z->s->img_buffer_end )
            {
              if ( v53->read_from_callbacks )
              {
                stbi__refill_buffer(z->s);
                v56 = v53->img_buffer;
                v55 = *v56;
                v53->img_buffer = v56 + 1;
              }
              else
              {
                v55 = 0;
              }
            }
            else
            {
              v55 = *v54;
              v53->img_buffer = v54 + 1;
            }
            *v51 = v55;
            v45 += v55;
            ++v51;
            --v52;
          }
          while ( v52 );
          v73 = v45;
          v74 = v29 - 17;
          v57 = v49;
          v58 = (char *)z + 1680 * v49;
          if ( v50 )
          {
            if ( !(unsigned int)stbi__build_huffman((stbi__huffman *)(v58 + 6728), count) )
              return 0i64;
            v59 = 7752i64;
          }
          else
          {
            if ( !(unsigned int)stbi__build_huffman((stbi__huffman *)(v58 + 8), count) )
              return 0i64;
            v59 = 1032i64;
          }
          v60 = &v58[v59];
          for ( i = 0i64; i < v73; v60[i++] = v64 )
          {
            v62 = z->s;
            v63 = z->s->img_buffer;
            if ( v63 >= z->s->img_buffer_end )
            {
              if ( v62->read_from_callbacks )
              {
                stbi__refill_buffer(z->s);
                v65 = v62->img_buffer;
                v64 = *v65;
                v62->img_buffer = v65 + 1;
              }
              else
              {
                v64 = 0;
              }
            }
            else
            {
              v64 = *v63;
              v62->img_buffer = v63 + 1;
            }
          }
          if ( v50 )
          {
            v66 = (unsigned __int8 *)(v58 + 6728);
            v67 = 0;
            v68 = z->fast_ac[v57];
            do
            {
              v69 = *v66;
              *v68 = 0;
              if ( v69 != 0xFF )
              {
                v70 = (unsigned __int8)v58[v69 + 8008];
                v71 = v58[v69 + 7752] & 0xF;
                if ( v71 )
                {
                  if ( (unsigned int)(v70 + v71) <= 9 )
                  {
                    v72 = ((v67 << v70) & 0x1FF) >> (9 - v71);
                    if ( v72 < 1 << (v71 - 1) )
                      v72 += 1 - (1 << v71);
                    if ( (unsigned int)(v72 + 128) <= 0xFF )
                      *v68 = v70 + v71 + 16 * (((unsigned __int8)v58[v69 + 7752] >> 4) + 16 * v72);
                  }
                }
              }
              ++v67;
              ++v66;
              ++v68;
            }
            while ( v67 < 512 );
          }
          v29 = v74 - v73;
          if ( v74 - v73 <= 0 )
            goto LABEL_116;
        }
        stbi__g_failure_reason = "bad DHT header";
        return 0i64;
      }
LABEL_116:
      v28 = 0;
LABEL_117:
      v30 = v29 == 0;
LABEL_118:
      LOBYTE(v28) = v30;
      return v28;
    case 219:
      v27 = stbi__get16be(z->s);
      v28 = 0;
      v29 = v27 - 2;
      v30 = v27 == 2;
      if ( v27 - 2 > 0 )
      {
        while ( 1 )
        {
          v31 = z->s;
          v32 = z->s->img_buffer;
          if ( v32 >= z->s->img_buffer_end )
          {
            if ( v31->read_from_callbacks )
            {
              stbi__refill_buffer(z->s);
              v34 = v31->img_buffer;
              v33 = *v34;
              v31->img_buffer = v34 + 1;
            }
            else
            {
              v33 = 0;
            }
          }
          else
          {
            v33 = *v32;
            v31->img_buffer = v32 + 1;
          }
          v35 = v33 >> 4;
          if ( v35 > 1 )
            break;
          if ( (v33 & 0xFu) > 3 )
          {
            stbi__g_failure_reason = "bad DQT table";
            return 0i64;
          }
          v36 = 0i64;
          v37 = (unsigned __int64)(v33 & 0xF) << 6;
          do
          {
            v38 = z->s;
            if ( v35 )
            {
              v39 = stbi__get16be(z->s);
            }
            else
            {
              v40 = v38->img_buffer;
              if ( v40 >= v38->img_buffer_end )
              {
                if ( v38->read_from_callbacks )
                {
                  stbi__refill_buffer(z->s);
                  v41 = v38->img_buffer;
                  LOBYTE(v39) = *v41;
                  v38->img_buffer = v41 + 1;
                }
                else
                {
                  LOBYTE(v39) = 0;
                }
              }
              else
              {
                LOBYTE(v39) = *v40;
                v38->img_buffer = v40 + 1;
              }
              v39 = (unsigned __int8)v39;
            }
            v42 = stbi__jpeg_dezigzag[v36++];
            z->dequant[0][v37 + v42] = v39;
          }
          while ( v36 < 64 );
          v43 = 65;
          if ( v35 )
            v43 = 129;
          v29 -= v43;
          if ( v29 <= 0 )
            goto LABEL_117;
        }
        stbi__g_failure_reason = "bad DQT type";
        return 0i64;
      }
      goto LABEL_118;
    case 221:
      if ( (unsigned int)stbi__get16be(z->s) == 4 )
      {
        z->restart_interval = stbi__get16be(z->s);
        return 1i64;
      }
      else
      {
        stbi__g_failure_reason = "bad DRI len";
        return 0i64;
      }
  }
  if ( m != 255 )
  {
    if ( (unsigned int)(m - 224) > 0xF && m != 254 )
    {
      stbi__g_failure_reason = "unknown marker";
      return 0i64;
    }
    v5 = stbi__get16be(z->s);
    if ( v5 < 2 )
    {
      if ( m == 254 )
        stbi__g_failure_reason = "bad COM len";
      else
        stbi__g_failure_reason = "bad APP len";
      return 0i64;
    }
    v6 = v5 - 2;
    if ( m == 224 )
    {
      if ( v6 >= 5 )
      {
        v7 = 0i64;
        v8 = 1;
        do
        {
          v9 = z->s;
          v10 = z->s->img_buffer;
          if ( v10 >= z->s->img_buffer_end )
          {
            if ( v9->read_from_callbacks )
            {
              stbi__refill_buffer(z->s);
              v12 = v9->img_buffer;
              v11 = *v12;
              v9->img_buffer = v12 + 1;
            }
            else
            {
              v11 = 0;
            }
          }
          else
          {
            v11 = *v10;
            v9->img_buffer = v10 + 1;
          }
          v13 = 0;
          if ( v11 == tag[v7] )
            v13 = v8;
          ++v7;
          v8 = v13;
        }
        while ( v7 < 5 );
        v6 -= 5;
        if ( v13 )
        {
          v14 = z->s;
          z->jfif = 1;
          stbi__skip(v14, v6);
          return 1i64;
        }
      }
      goto LABEL_48;
    }
    if ( m != 238 || v6 < 12 )
      goto LABEL_48;
    v15 = 0i64;
    v16 = 1;
    do
    {
      v17 = z->s;
      v18 = z->s->img_buffer;
      if ( v18 >= z->s->img_buffer_end )
      {
        if ( v17->read_from_callbacks )
        {
          stbi__refill_buffer(z->s);
          v20 = v17->img_buffer;
          v19 = *v20;
          v17->img_buffer = v20 + 1;
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        v19 = *v18;
        v17->img_buffer = v18 + 1;
      }
      v21 = 0;
      if ( v19 == tag_0[v15] )
        v21 = v16;
      ++v15;
      v16 = v21;
    }
    while ( v15 < 6 );
    v6 -= 6;
    if ( !v21 )
    {
LABEL_48:
      stbi__skip(z->s, v6);
      return 1i64;
    }
    v22 = z->s;
    v23 = z->s->img_buffer;
    if ( v23 >= z->s->img_buffer_end )
    {
      if ( v22->read_from_callbacks )
      {
        stbi__refill_buffer(z->s);
        ++v22->img_buffer;
      }
    }
    else
    {
      v22->img_buffer = v23 + 1;
    }
    stbi__get16be(z->s);
    stbi__get16be(z->s);
    v24 = z->s;
    v25 = z->s->img_buffer;
    if ( v25 >= z->s->img_buffer_end )
    {
      if ( !v24->read_from_callbacks )
      {
        v26 = 0;
        goto LABEL_47;
      }
      stbi__refill_buffer(z->s);
      v25 = v24->img_buffer;
    }
    v26 = *v25;
    v24->img_buffer = v25 + 1;
LABEL_47:
    v6 -= 6;
    z->app14_color_transform = v26;
    goto LABEL_48;
  }
  stbi__g_failure_reason = "expected marker";
  return 0i64;
}

/*
==============
stbi__process_scan_header
==============
*/
__int64 stbi__process_scan_header(stbi__jpeg *z)
{
  int v2; 
  stbi__context *s; 
  int v4; 
  unsigned __int8 *img_buffer; 
  unsigned __int8 v6; 
  unsigned __int8 *v7; 
  int v9; 
  int *order; 
  stbi__context *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 v13; 
  unsigned __int8 *v14; 
  stbi__context *v15; 
  int v16; 
  unsigned __int8 *v17; 
  unsigned __int8 v18; 
  unsigned __int8 *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  int img_n; 
  stbi__jpeg::<unnamed_type_img_comp> *img_comp; 
  unsigned int v25; 
  stbi__context *v26; 
  unsigned __int8 *v27; 
  unsigned __int8 v28; 
  const char *v29; 
  unsigned __int8 *v30; 
  stbi__context *v31; 
  unsigned __int8 *v32; 
  unsigned __int8 v33; 
  unsigned __int8 *v34; 
  stbi__context *v35; 
  unsigned __int8 *v36; 
  unsigned __int8 v37; 
  unsigned __int8 *v38; 
  int spec_start; 
  unsigned int v40; 
  unsigned int v41; 
  bool v42; 
  int spec_end; 

  v2 = stbi__get16be(z->s);
  s = z->s;
  v4 = v2;
  img_buffer = z->s->img_buffer;
  if ( img_buffer >= z->s->img_buffer_end )
  {
    if ( s->read_from_callbacks )
    {
      stbi__refill_buffer(z->s);
      v7 = s->img_buffer;
      v6 = *v7;
      s->img_buffer = v7 + 1;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *img_buffer;
    s->img_buffer = img_buffer + 1;
  }
  z->scan_n = v6;
  if ( !v6 || v6 > 4u || v6 > z->s->img_n )
  {
    stbi__g_failure_reason = "bad SOS component count";
    return 0i64;
  }
  if ( v4 != 2 * v6 + 6 )
  {
    stbi__g_failure_reason = "bad SOS len";
    return 0i64;
  }
  v9 = 0;
  order = z->order;
  do
  {
    v11 = z->s;
    v12 = z->s->img_buffer;
    if ( v12 >= z->s->img_buffer_end )
    {
      if ( v11->read_from_callbacks )
      {
        stbi__refill_buffer(z->s);
        v14 = v11->img_buffer;
        v13 = *v14;
        v11->img_buffer = v14 + 1;
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      v13 = *v12;
      v11->img_buffer = v12 + 1;
    }
    v15 = z->s;
    v16 = v13;
    v17 = z->s->img_buffer;
    if ( v17 >= z->s->img_buffer_end )
    {
      if ( v15->read_from_callbacks )
      {
        stbi__refill_buffer(z->s);
        v19 = v15->img_buffer;
        v18 = *v19;
        v15->img_buffer = v19 + 1;
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v17;
      v15->img_buffer = v17 + 1;
    }
    v20 = 0;
    v21 = v18;
    v22 = 0i64;
    img_n = z->s->img_n;
    if ( img_n > 0 )
    {
      img_comp = z->img_comp;
      do
      {
        if ( img_comp->id == v16 )
          break;
        ++v20;
        ++v22;
        ++img_comp;
      }
      while ( v20 < img_n );
    }
    if ( v20 == img_n )
      return 0i64;
    z->img_comp[v22].hd = v21 >> 4;
    if ( v21 >> 4 > 3 )
    {
      v29 = "bad DC huff";
      goto LABEL_35;
    }
    v25 = v21 & 0xF;
    z->img_comp[v22].ha = v25;
    if ( v25 > 3 )
    {
      v29 = "bad AC huff";
      goto LABEL_35;
    }
    *order = v20;
    ++v9;
    ++order;
  }
  while ( v9 < z->scan_n );
  v26 = z->s;
  v27 = v26->img_buffer;
  if ( v27 >= v26->img_buffer_end )
  {
    if ( v26->read_from_callbacks )
    {
      stbi__refill_buffer(v26);
      v30 = v26->img_buffer;
      v28 = *v30;
      v26->img_buffer = v30 + 1;
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    v26->img_buffer = v27 + 1;
  }
  v31 = z->s;
  z->spec_start = v28;
  v32 = v31->img_buffer;
  if ( v32 >= v31->img_buffer_end )
  {
    if ( v31->read_from_callbacks )
    {
      stbi__refill_buffer(v31);
      v34 = v31->img_buffer;
      v33 = *v34;
      v31->img_buffer = v34 + 1;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    v33 = *v32;
    v31->img_buffer = v32 + 1;
  }
  v35 = z->s;
  z->spec_end = v33;
  v36 = v35->img_buffer;
  if ( v36 >= v35->img_buffer_end )
  {
    if ( v35->read_from_callbacks )
    {
      stbi__refill_buffer(v35);
      v38 = v35->img_buffer;
      v37 = *v38;
      v35->img_buffer = v38 + 1;
    }
    else
    {
      v37 = 0;
    }
  }
  else
  {
    v37 = *v36;
    v35->img_buffer = v36 + 1;
  }
  spec_start = z->spec_start;
  v40 = v37 & 0xF;
  v41 = v37 >> 4;
  v42 = z->progressive == 0;
  z->succ_high = v41;
  z->succ_low = v40;
  if ( v42 )
  {
    if ( !spec_start && !v41 && !v40 )
    {
      z->spec_end = 63;
      return 1i64;
    }
LABEL_58:
    v29 = "bad SOS";
LABEL_35:
    stbi__g_failure_reason = v29;
    return 0i64;
  }
  if ( spec_start > 63 )
    goto LABEL_58;
  spec_end = z->spec_end;
  if ( spec_end > 63 || spec_start > spec_end || v41 > 0xD || v40 > 0xD )
    goto LABEL_58;
  return 1i64;
}

/*
==============
stbi__refill_buffer
==============
*/
void stbi__refill_buffer(stbi__context *s)
{
  unsigned __int8 *buffer_start; 
  int v3; 

  buffer_start = s->buffer_start;
  v3 = s->io.read(s->io_user_data, (char *)s->buffer_start, s->buflen);
  s->img_buffer = buffer_start;
  if ( v3 )
  {
    s->img_buffer_end = &s->buffer_start[v3];
  }
  else
  {
    s->read_from_callbacks = 0;
    s->img_buffer_end = &s->buffer_start[1];
    *buffer_start = 0;
  }
}

/*
==============
stbi__resample_row_generic
==============
*/
unsigned __int8 *stbi__resample_row_generic(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, __int64 w, int hs)
{
  unsigned __int8 *v5; 
  __int64 v6; 

  if ( (int)w > 0 )
  {
    v5 = out;
    w = (unsigned int)w;
    do
    {
      if ( hs > 0i64 )
      {
        v6 = 0i64;
        do
          v5[v6++] = *in_near;
        while ( v6 < hs );
      }
      v5 += hs;
      ++in_near;
      --w;
    }
    while ( w );
  }
  return out;
}

/*
==============
stbi__resample_row_h_2
==============
*/
unsigned __int8 *stbi__resample_row_h_2(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, int w)
{
  unsigned __int8 v4; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  int v13; 
  int v14; 
  __int64 v15; 

  v4 = *in_near;
  *out = *in_near;
  if ( w == 1 )
  {
    out[1] = v4;
    return out;
  }
  else
  {
    v7 = 1;
    v8 = w;
    v9 = w - 1i64;
    out[1] = (3 * *in_near + (unsigned int)in_near[1] + 2) >> 2;
    if ( v9 > 1 )
    {
      v10 = w - 2i64;
      v11 = in_near;
      v7 = v9;
      v12 = out + 2;
      do
      {
        v13 = v11[1];
        v12 += 2;
        ++v11;
        v14 = 3 * v13 + 2;
        *(v12 - 2) = (v14 + (unsigned int)*(v11 - 1)) >> 2;
        *(v12 - 1) = (v14 + (unsigned int)v11[1]) >> 2;
        --v10;
      }
      while ( v10 );
    }
    v15 = 2 * v7;
    out[v15] = (3 * in_near[v8 - 2] + (unsigned int)in_near[v9] + 2) >> 2;
    out[v15 + 1] = in_near[v9];
    return out;
  }
}

/*
==============
stbi__resample_row_hv_2
==============
*/
unsigned __int8 *stbi__resample_row_hv_2(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, int w)
{
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  unsigned __int8 *result; 
  signed __int64 v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int v16; 

  v5 = w;
  v6 = *in_far + 3 * *in_near;
  if ( w == 1 )
  {
    v7 = (unsigned int)(v6 + 2) >> 2;
    out[1] = v7;
    *out = v7;
    return out;
  }
  else
  {
    *out = (unsigned int)(v6 + 2) >> 2;
    if ( w > 1i64 )
    {
      v9 = in_near - in_far;
      v10 = in_far + 1;
      v11 = v5 - 1;
      v12 = out + 2;
      do
      {
        v13 = *v10;
        v14 = v6;
        v15 = v10[v9];
        v12 += 2;
        ++v10;
        v6 = v13 + 3 * v15;
        *(v12 - 3) = (unsigned int)(v14 + v6 + 2 * v14 + 8) >> 4;
        *(v12 - 2) = (unsigned int)(v6 + v14 + 2 * v6 + 8) >> 4;
        --v11;
      }
      while ( v11 );
    }
    v16 = v6 + 2;
    result = out;
    out[2 * (int)v5 - 1] = v16 >> 2;
  }
  return result;
}

/*
==============
stbi__resample_row_hv_2_simd
==============
*/
unsigned __int8 *stbi__resample_row_hv_2_simd(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, int w)
{
  __int64 v6; 
  int v8; 
  int v10; 
  unsigned int v11; 
  unsigned __int8 *result; 
  unsigned __int8 *v13; 
  signed __int64 v14; 
  unsigned __int8 *v15; 
  unsigned int v16; 
  unsigned __int8 *v17; 
  __int64 v19; 
  int v42; 
  int v43; 
  int v44; 
  signed __int64 v45; 
  unsigned __int8 *v46; 
  __int64 v47; 
  unsigned __int8 *v48; 
  int v49; 
  int v50; 
  int v51; 
  unsigned int v52; 

  v6 = w;
  v8 = 0;
  v10 = *in_far + 3 * *in_near;
  if ( (_DWORD)v6 == 1 )
  {
    v11 = (unsigned int)(v10 + 2) >> 2;
    out[1] = v11;
    *out = v11;
    return out;
  }
  else
  {
    if ( (int)v6 - 1 >= 0 && (((_DWORD)v6 - 1) & 0xFFFFFFF8) != 0 )
    {
      v13 = in_far + 8;
      v14 = in_near - in_far;
      v15 = in_far;
      v16 = (((((_DWORD)v6 - 1) & 0xFFFFFFF8) - 1) >> 3) + 1;
      v17 = out;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      v19 = v16;
      v8 = 8 * v16;
      do
      {
        _XMM0 = *(unsigned __int64 *)&v15[v14];
        v15 += 8;
        __asm { vpunpcklbw xmm2, xmm0, xmm6 }
        _XMM0 = *((unsigned __int64 *)v15 - 1);
        __asm
        {
          vpunpcklbw xmm1, xmm0, xmm6
          vpsubw  xmm3, xmm1, xmm2
          vpsllw  xmm2, xmm2, 2
          vpaddw  xmm5, xmm3, xmm2
        }
        v17 += 16;
        __asm
        {
          vpsllw  xmm0, xmm5, 2
          vpaddw  xmm3, xmm0, xmm7
          vpslldq xmm1, xmm5, 2
          vpinsrw xmm0, xmm1, edx, 0
          vpsubw  xmm2, xmm0, xmm5
          vpaddw  xmm4, xmm2, xmm3
          vpsrldq xmm0, xmm5, 2
          vpinsrw xmm0, xmm0, ecx, 7
          vpsubw  xmm1, xmm0, xmm5
          vpaddw  xmm2, xmm1, xmm3
          vpunpcklwd xmm0, xmm4, xmm2
          vpunpckhwd xmm1, xmm4, xmm2
          vpsrlw  xmm3, xmm0, 4
          vpsrlw  xmm2, xmm1, 4
          vpackuswb xmm0, xmm3, xmm2
        }
        *((_OWORD *)v17 - 1) = _XMM0;
        v42 = v13[v14 - 1];
        v13 += 8;
        v10 = *(v13 - 9) + 3 * v42;
        --v19;
      }
      while ( v19 );
    }
    v43 = in_far[v8] + 3 * in_near[v8];
    v44 = v8 + 1;
    out[2 * v8] = (unsigned int)(v43 + v10 + 2 * v43 + 8) >> 4;
    if ( v8 + 1 < v6 )
    {
      v45 = in_near - in_far;
      v46 = &in_far[v44];
      v47 = v6 - v44;
      v48 = &out[2 * v44];
      do
      {
        v49 = *v46;
        v50 = v43;
        v51 = v46[v45];
        v48 += 2;
        ++v46;
        v43 = v49 + 3 * v51;
        *(v48 - 3) = (unsigned int)(v50 + v43 + 2 * v50 + 8) >> 4;
        *(v48 - 2) = (unsigned int)(v43 + v50 + 2 * v43 + 8) >> 4;
        --v47;
      }
      while ( v47 );
    }
    v52 = (unsigned int)(v43 + 2) >> 2;
    result = out;
    out[2 * (int)v6 - 1] = v52;
  }
  return result;
}

/*
==============
stbi__resample_row_v_2
==============
*/
unsigned __int8 *stbi__resample_row_v_2(unsigned __int8 *out, unsigned __int8 *in_near, unsigned __int8 *in_far, int w)
{
  int v4; 
  __int64 v7; 
  unsigned __int8 *v8; 
  unsigned int *v9; 
  signed __int64 v10; 
  signed __int64 v11; 
  unsigned __int8 *v48; 
  signed __int64 v49; 
  __int64 v50; 
  int v51; 

  v4 = 0;
  if ( w > 0 && (unsigned int)w >= 0x10 )
  {
    v7 = w - 1;
    v8 = &out[v7];
    if ( (out > &in_far[v7] || v8 < in_far) && (out > &in_near[v7] || v8 < in_near) )
    {
      v9 = (unsigned int *)in_far;
      v10 = in_near - in_far;
      v11 = out - in_far;
      do
      {
        _XMM0 = *(unsigned int *)((char *)v9 + v10);
        __asm { vpmovzxbd xmm1, xmm0 }
        _XMM0 = *v9;
        __asm
        {
          vpmulld xmm2, xmm1, xmm5
          vpmovzxbd xmm1, xmm0
        }
        _XMM0 = *(unsigned int *)((char *)v9 + v10 + 4);
        __asm
        {
          vpaddd  xmm2, xmm2, xmm1
          vpaddd  xmm3, xmm2, xmm6
          vpsrad  xmm4, xmm3, xmm7
          vpshufb xmm1, xmm4, cs:__xmm@000000000c080400000000000c080400
        }
        *(unsigned int *)((char *)v9 + v11) = _XMM1;
        __asm { vpmovzxbd xmm1, xmm0 }
        _XMM0 = v9[1];
        __asm
        {
          vpmulld xmm2, xmm1, xmm5
          vpmovzxbd xmm1, xmm0
        }
        _XMM0 = *(unsigned int *)((char *)v9 + v10 + 8);
        __asm
        {
          vpaddd  xmm2, xmm2, xmm1
          vpaddd  xmm3, xmm2, xmm6
          vpsrad  xmm4, xmm3, xmm7
          vpshufb xmm1, xmm4, cs:__xmm@000000000c080400000000000c080400
        }
        *(unsigned int *)((char *)v9 + v11 + 4) = _XMM1;
        __asm { vpmovzxbd xmm1, xmm0 }
        _XMM0 = v9[2];
        __asm
        {
          vpmulld xmm2, xmm1, xmm5
          vpmovzxbd xmm1, xmm0
        }
        _XMM0 = *(unsigned int *)((char *)v9 + v10 + 12);
        __asm
        {
          vpaddd  xmm2, xmm2, xmm1
          vpaddd  xmm3, xmm2, xmm6
          vpsrad  xmm4, xmm3, xmm7
          vpshufb xmm1, xmm4, cs:__xmm@000000000c080400000000000c080400
        }
        *(unsigned int *)((char *)v9 + v11 + 8) = _XMM1;
        __asm { vpmovzxbd xmm1, xmm0 }
        _XMM0 = v9[3];
        __asm
        {
          vpmulld xmm2, xmm1, xmm5
          vpmovzxbd xmm1, xmm0
          vpaddd  xmm2, xmm2, xmm1
          vpaddd  xmm3, xmm2, xmm6
          vpsrad  xmm4, xmm3, xmm7
          vpshufb xmm1, xmm4, cs:__xmm@000000000c080400000000000c080400
        }
        *(unsigned int *)((char *)v9 + v11 + 12) = _XMM1;
        v9 += 4;
        v4 += 16;
      }
      while ( (char *)v9 - (char *)in_far < w - (w & 0xF) );
    }
  }
  if ( v4 < (__int64)w )
  {
    v48 = &in_far[v4];
    v49 = in_near - in_far;
    v50 = w - (__int64)v4;
    do
    {
      v51 = v48[v49];
      ++v48;
      v48[out - in_far - 1] = (3 * v51 + (unsigned int)*(v48 - 1) + 2) >> 2;
      --v50;
    }
    while ( v50 );
  }
  return out;
}

/*
==============
stbi__setup_jpeg
==============
*/
void stbi__setup_jpeg(stbi__jpeg *j)
{
  j->idct_block_kernel = stbi__idct_block;
  j->YCbCr_to_RGB_kernel = stbi__YCbCr_to_RGB_row;
  j->resample_row_hv_2_kernel = (unsigned __int8 *(__fastcall *)(unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, int))stbi__resample_row_hv_2;
  _RAX = 1i64;
  __asm { cpuid }
  if ( (_RDX & 0x4000000) != 0 )
  {
    j->idct_block_kernel = (void (__fastcall *)(unsigned __int8 *, int, __int16 *))stbi__idct_simd;
    j->YCbCr_to_RGB_kernel = stbi__YCbCr_to_RGB_simd;
    j->resample_row_hv_2_kernel = (unsigned __int8 *(__fastcall *)(unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, int))stbi__resample_row_hv_2_simd;
  }
}

/*
==============
stbi__skip
==============
*/
void stbi__skip(stbi__context *s, int n)
{
  int v3; 
  __int64 v4; 
  void *io_user_data; 

  if ( n >= 0 )
  {
    if ( s->io.read && (v3 = LODWORD(s->img_buffer_end) - LODWORD(s->img_buffer), v3 < n) )
    {
      v4 = (unsigned int)(n - v3);
      io_user_data = s->io_user_data;
      s->img_buffer = s->img_buffer_end;
      s->io.skip(io_user_data, v4);
    }
    else
    {
      s->img_buffer += n;
    }
  }
  else
  {
    s->img_buffer = s->img_buffer_end;
  }
}

/*
==============
stbi__vertical_flip
==============
*/
void stbi__vertical_flip(void *image, int w, int h, int bytes_per_pixel)
{
  char *v4; 
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  char *v8; 
  char *v9; 
  unsigned __int64 v10; 
  size_t v11; 
  char Src[2048]; 

  v4 = (char *)image;
  v5 = w * (__int64)bytes_per_pixel;
  if ( h >> 1 > 0 )
  {
    v6 = (char *)image + v5 * (h - 1);
    v7 = (unsigned int)(h >> 1);
    do
    {
      v8 = v4;
      v9 = v6;
      v10 = v5;
      if ( v5 )
      {
        do
        {
          v11 = 2048i64;
          if ( v10 < 0x800 )
            v11 = v10;
          memcpy_0(Src, v8, v11);
          memcpy_0(v8, v9, v11);
          memcpy_0(v9, Src, v11);
          v8 += v11;
          v9 += v11;
          v10 -= v11;
        }
        while ( v10 );
      }
      v4 += v5;
      v6 -= v5;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
stbi__zbuild_huffman
==============
*/
__int64 stbi__zbuild_huffman(stbi__zhuffman *z, const unsigned __int8 *sizelist, int num)
{
  int v5; 
  unsigned __int16 v6; 
  const unsigned __int8 *v8; 
  __int64 v9; 
  __int64 v10; 
  int i; 
  int v12; 
  int v13; 
  int j; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned int v21; 
  int k; 
  __int64 v23; 
  __int64 v25[8]; 
  int v26; 
  int v27[16]; 

  memset(v25, 0, sizeof(v25));
  v5 = 0;
  v6 = 0;
  v26 = 0;
  memset_0(z, 0, 0x400ui64);
  if ( num > 0 )
  {
    v8 = sizelist;
    v9 = (unsigned int)num;
    do
    {
      v10 = *v8++;
      ++*((_DWORD *)v25 + v10);
      --v9;
    }
    while ( v9 );
  }
  LODWORD(v25[0]) = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *((_DWORD *)v25 + i) > 1 << i )
    {
      stbi__g_failure_reason = "bad sizes";
      return 0i64;
    }
  }
  v12 = 1;
  v13 = 0;
  for ( j = 15; j > 0; --j )
  {
    v15 = *((_DWORD *)v25 + v12);
    v27[v12] = v13;
    z->firstcode[v12] = v13;
    v16 = v15 + v13;
    z->firstsymbol[v12] = v6;
    if ( v15 && v16 - 1 >= 1 << v12 )
    {
      stbi__g_failure_reason = "bad codelengths";
      return 0i64;
    }
    v17 = v16 << j;
    v13 = 2 * v16;
    v6 += v15;
    z->maxcode[v12++] = v17;
  }
  z->maxcode[16] = 0x10000;
  if ( num > 0 )
  {
    do
    {
      v18 = *sizelist;
      if ( *sizelist )
      {
        v19 = v27[v18];
        v20 = v19 + z->firstsymbol[v18] - z->firstcode[v18];
        z->size[v20] = v18;
        z->value[v20] = v5;
        if ( (unsigned int)v18 <= 9 )
        {
          v21 = (16 * ((4 * ((2 * (v19 & 0x5555)) & 0x3333 | (v19 >> 1) & 0x1111)) & 0xF0F | (((2 * (v19 & 0x5555)) | (v19 >> 1) & 0x5555u) >> 2) & 0x303)) | (((4 * ((2 * (v19 & 0x5555)) & 0x3333 | (v19 >> 1) & 0x1111)) | (((2 * (v19 & 0x5555)) | (v19 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4) & 0xF0F;
          for ( k = (((unsigned __int8)v21 << 8) | BYTE1(v21)) >> (16 - v18); k < 512; z->fast[v23] = v5 | ((_WORD)v18 << 9) )
          {
            v23 = k;
            k += 1 << v18;
          }
        }
        v27[v18] = v19 + 1;
      }
      ++v5;
      ++sizelist;
    }
    while ( v5 < num );
  }
  return 1i64;
}

/*
==============
stbi__zexpand
==============
*/
__int64 stbi__zexpand(stbi__zbuf *z, char *zout, int n)
{
  bool v3; 
  int v6; 
  int v7; 
  int i; 
  __int64 v9; 
  char *v10; 

  v3 = z->z_expandable == 0;
  z->zout = zout;
  if ( v3 )
  {
    stbi__g_failure_reason = "output buffer limit";
    return 0i64;
  }
  else
  {
    v6 = (_DWORD)zout - LODWORD(z->zout_start);
    v7 = LODWORD(z->zout_end) - LODWORD(z->zout_start);
    for ( i = v7; v6 + n > i; i *= 2 )
      ;
    v9 = i;
    v10 = (char *)stb_realloc_sized(z->zout_start, v7, i);
    if ( v10 )
    {
      z->zout_start = v10;
      z->zout = &v10[v6];
      z->zout_end = &v10[v9];
      return 1i64;
    }
    else
    {
      stbi__g_failure_reason = "outofmem";
      return 0i64;
    }
  }
}

/*
==============
stbi__zhuffman_decode_slowpath
==============
*/
__int64 stbi__zhuffman_decode_slowpath(stbi__zbuf *a, stbi__zhuffman *z)
{
  signed int code_buffer; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  int v7; 
  signed int v8; 
  int *v9; 
  int v11; 
  int v12; 

  code_buffer = a->code_buffer;
  v4 = (2 * (code_buffer & 0x5555)) | (code_buffer >> 1) & 0x5555;
  v5 = 10;
  v6 = (4 * (v4 & 0x3333)) | (v4 >> 2) & 0x3333;
  v7 = 16 * ((4 * (v4 & 0x3333)) & 0xF0F | (v4 >> 2) & 0x303);
  v8 = ((v7 | (v6 >> 4) & 0xF0F) >> 8) | ((unsigned __int8)(v7 | (v6 >> 4) & 0xF) << 8);
  v9 = &z->maxcode[10];
  if ( v8 >= z->maxcode[10] )
  {
    do
    {
      ++v5;
      ++v9;
    }
    while ( v8 >= *v9 );
    if ( v5 == 16 )
      return 0xFFFFFFFFi64;
  }
  v11 = (v8 >> (16 - v5)) - z->firstcode[v5];
  v12 = z->firstsymbol[v5];
  a->num_bits -= v5;
  a->code_buffer = (unsigned int)code_buffer >> v5;
  return z->value[v11 + v12];
}

/*
==============
stbi_set_allocator
==============
*/
void stbi_set_allocator(void *(*mal)(unsigned __int64), void *(*re)(void *, unsigned __int64), void (*fr)(void *))
{
  alt_stb_malloc = mal;
  alt_stb_realloc = re;
  alt_stb_free = fr;
}

/*
==============
stbi_clear_memglob
==============
*/
__int64 stbi_clear_memglob()
{
  __int64 result; 

  result = 0i64;
  stbi_mem.data = NULL;
  stbi_mem.index = 0i64;
  stbi_mem.old_index = 0i64;
  stbi_mem.size = 0;
  return result;
}

/*
==============
stbi_convert_iphone_png_to_rgb
==============
*/
void stbi_convert_iphone_png_to_rgb(int flag_true_if_should_convert)
{
  stbi__de_iphone_flag = flag_true_if_should_convert;
}

/*
==============
stbi_failure_reason
==============
*/
const char *stbi_failure_reason()
{
  return stbi__g_failure_reason;
}

/*
==============
stbi_hdr_to_ldr_gamma
==============
*/
void stbi_hdr_to_ldr_gamma(float gamma)
{
  stbi__h2l_gamma_i = 1.0 / gamma;
}

/*
==============
stbi_hdr_to_ldr_scale
==============
*/
void stbi_hdr_to_ldr_scale(float scale)
{
  stbi__h2l_scale_i = 1.0 / scale;
}

/*
==============
stbi_image_free
==============
*/
void stbi_image_free(void *retval_from_stbi_load)
{
  if ( alt_stb_free )
    alt_stb_free(retval_from_stbi_load);
}

/*
==============
stbi_info
==============
*/
__int64 stbi_info(const char *filename, int *x, int *y, int *comp)
{
  errno_t v7; 
  FILE *v8; 
  int v10; 
  unsigned int v11; 
  int v12; 
  unsigned __int8 *v13; 
  stbi__context *v14; 
  stbi__context *v15; 
  FILE *Stream; 
  stbi__png z; 
  stbi__context s; 

  v7 = fopen_s(&Stream, filename, "rb");
  v8 = Stream;
  if ( v7 )
    v8 = NULL;
  Stream = v8;
  if ( v8 )
  {
    v10 = ftell(v8);
    s.io_user_data = v8;
    v11 = 1;
    s.buflen = 128;
    s.read_from_callbacks = 1;
    s.img_buffer_original = s.buffer_start;
    s.io = stbi__stdio_callbacks;
    v12 = stbi__stdio_callbacks.read(v8, (char *)s.buffer_start, 128);
    if ( v12 )
    {
      s.img_buffer = s.buffer_start;
      v13 = &s.buffer_start[v12];
    }
    else
    {
      s.read_from_callbacks = 0;
      s.img_buffer = s.buffer_start;
      v13 = &s.buffer_start[1];
      s.buffer_start[0] = 0;
    }
    s.img_buffer_end = v13;
    s.img_buffer_original_end = v13;
    if ( !(unsigned int)stbi__jpeg_info(&s, x, y, comp) )
    {
      z.s = &s;
      if ( (unsigned int)stbi__parse_png_file(&z, 2, 0) )
      {
        v15 = z.s;
        if ( x )
          *x = z.s->img_x;
        if ( y )
          *y = v15->img_y;
        if ( comp )
          *comp = v15->img_n;
      }
      else
      {
        v14 = z.s;
        v11 = 0;
        z.s->img_buffer = z.s->img_buffer_original;
        v14->img_buffer_end = v14->img_buffer_original_end;
        stbi__g_failure_reason = "unknown image type";
      }
    }
    fseek(v8, v10, 0);
    fclose(v8);
    return v11;
  }
  else
  {
    stbi__g_failure_reason = "can't fopen";
    return 0i64;
  }
}

/*
==============
stbi_info_from_callbacks
==============
*/
__int64 stbi_info_from_callbacks(const stbi_io_callbacks *c, void *user, int *x, int *y, int *comp)
{
  __int128 v5; 
  int (__fastcall *eof)(void *); 
  int v9; 
  unsigned __int8 *v10; 
  __int64 result; 
  stbi__context *v12; 
  stbi__png z; 
  stbi__context s; 

  v5 = *(_OWORD *)&c->read;
  eof = c->eof;
  s.img_buffer_original = s.buffer_start;
  s.io_user_data = user;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  *(_OWORD *)&s.io.read = v5;
  s.io.eof = eof;
  v9 = ((__int64 (__fastcall *)(void *, unsigned __int8 *, __int64))v5)(user, s.buffer_start, 128i64);
  if ( v9 )
  {
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[v9];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v10;
  s.img_buffer_original_end = v10;
  if ( !(unsigned int)stbi__jpeg_info(&s, x, y, comp) )
  {
    z.s = &s;
    result = stbi__parse_png_file(&z, 2, 0);
    v12 = z.s;
    if ( !(_DWORD)result )
    {
      z.s->img_buffer = z.s->img_buffer_original;
      v12->img_buffer_end = v12->img_buffer_original_end;
      stbi__g_failure_reason = "unknown image type";
      return result;
    }
    if ( x )
      *x = z.s->img_x;
    if ( y )
      *y = v12->img_y;
    if ( comp )
      *comp = v12->img_n;
  }
  return 1i64;
}

/*
==============
stbi_info_from_file
==============
*/
__int64 stbi_info_from_file(_iobuf *f, int *x, int *y, int *comp)
{
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned __int8 *v11; 
  stbi__context *v12; 
  stbi__context *v13; 
  stbi__png z; 
  stbi__context s; 

  v8 = ftell(f);
  s.io_user_data = f;
  v9 = 1;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  s.img_buffer_original = s.buffer_start;
  s.io = stbi__stdio_callbacks;
  v10 = stbi__stdio_callbacks.read(f, (char *)s.buffer_start, 128);
  if ( v10 )
  {
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[v10];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v11;
  s.img_buffer_original_end = v11;
  if ( !(unsigned int)stbi__jpeg_info(&s, x, y, comp) )
  {
    z.s = &s;
    if ( (unsigned int)stbi__parse_png_file(&z, 2, 0) )
    {
      v13 = z.s;
      if ( x )
        *x = z.s->img_x;
      if ( y )
        *y = v13->img_y;
      if ( comp )
        *comp = v13->img_n;
    }
    else
    {
      v12 = z.s;
      v9 = 0;
      z.s->img_buffer = z.s->img_buffer_original;
      v12->img_buffer_end = v12->img_buffer_original_end;
      stbi__g_failure_reason = "unknown image type";
    }
  }
  fseek(f, v8, 0);
  return v9;
}

/*
==============
stbi_info_from_memory
==============
*/
__int64 stbi_info_from_memory(const unsigned __int8 *buffer, int len, int *x, int *y, int *comp)
{
  __int64 result; 
  stbi__context *v8; 
  stbi__context *v9; 
  stbi__png z; 
  stbi__context s; 

  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  if ( !(unsigned int)stbi__jpeg_info(&s, x, y, comp) )
  {
    z.s = &s;
    result = stbi__parse_png_file(&z, 2, 0);
    if ( !(_DWORD)result )
    {
      v8 = z.s;
      z.s->img_buffer = z.s->img_buffer_original;
      v8->img_buffer_end = v8->img_buffer_original_end;
      stbi__g_failure_reason = "unknown image type";
      return result;
    }
    v9 = z.s;
    if ( x )
      *x = z.s->img_x;
    if ( y )
      *y = v9->img_y;
    if ( comp )
      *comp = v9->img_n;
  }
  return 1i64;
}

/*
==============
stbi_is_16_bit
==============
*/
__int64 stbi_is_16_bit(const char *filename)
{
  errno_t v1; 
  FILE *v2; 
  unsigned int v3; 
  int v5; 
  int v6; 
  char *v7; 
  stbi__context *s; 
  FILE *Stream; 
  stbi__png z; 
  char v11; 
  stbi_io_callbacks v12; 
  FILE *v13; 
  int v14; 
  int v15; 
  char v16; 
  char v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  char *v21; 

  v1 = fopen_s(&Stream, filename, "rb");
  v2 = Stream;
  v3 = 0;
  if ( v1 )
    v2 = NULL;
  Stream = v2;
  if ( v2 )
  {
    v5 = ftell(v2);
    v13 = v2;
    v15 = 128;
    v20 = &v16;
    v14 = 1;
    v12 = stbi__stdio_callbacks;
    v6 = stbi__stdio_callbacks.read(v2, &v16, 128);
    if ( v6 )
    {
      v18 = &v16;
      v7 = &v16 + v6;
    }
    else
    {
      v14 = 0;
      v18 = &v16;
      v7 = &v17;
      v16 = 0;
    }
    v19 = v7;
    v21 = v7;
    z.s = (stbi__context *)&v11;
    if ( (unsigned int)stbi__parse_png_file(&z, 2, 0) && z.depth == 16 )
    {
      v3 = 1;
    }
    else
    {
      s = z.s;
      z.s->img_buffer = z.s->img_buffer_original;
      s->img_buffer_end = s->img_buffer_original_end;
    }
    fseek(v2, v5, 0);
    fclose(v2);
    return v3;
  }
  else
  {
    stbi__g_failure_reason = "can't fopen";
    return 0i64;
  }
}

/*
==============
stbi_is_16_bit_from_callbacks
==============
*/
__int64 stbi_is_16_bit_from_callbacks(const stbi_io_callbacks *c, void *user)
{
  __int128 v2; 
  int (__fastcall *eof)(void *); 
  int v4; 
  char *v5; 
  stbi__context *v6; 
  __int64 result; 
  stbi__context *s; 
  stbi__png z; 
  char v10; 
  __int128 v11; 
  __int64 v12; 
  void *v13; 
  int v14; 
  int v15; 
  char v16; 
  char v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  char *v21; 

  v2 = *(_OWORD *)&c->read;
  eof = c->eof;
  v13 = user;
  v15 = 128;
  v20 = &v16;
  v14 = 1;
  v11 = v2;
  v12 = (__int64)eof;
  v4 = ((__int64 (__fastcall *)(void *, char *, __int64))v2)(user, &v16, 128i64);
  if ( v4 )
  {
    v18 = &v16;
    v5 = &v16 + v4;
  }
  else
  {
    v14 = 0;
    v18 = &v16;
    v5 = &v17;
    v16 = 0;
  }
  v19 = v5;
  v21 = v5;
  z.s = (stbi__context *)&v10;
  if ( (unsigned int)stbi__parse_png_file(&z, 2, 0) )
  {
    if ( z.depth == 16 )
    {
      return 1i64;
    }
    else
    {
      s = z.s;
      result = 0i64;
      z.s->img_buffer = z.s->img_buffer_original;
      s->img_buffer_end = s->img_buffer_original_end;
    }
  }
  else
  {
    v6 = z.s;
    z.s->img_buffer = z.s->img_buffer_original;
    v6->img_buffer_end = v6->img_buffer_original_end;
    return 0i64;
  }
  return result;
}

/*
==============
stbi_is_16_bit_from_file
==============
*/
__int64 stbi_is_16_bit_from_file(_iobuf *f)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  char *v5; 
  stbi__context *s; 
  stbi__png z; 
  char v9; 
  stbi_io_callbacks v10; 
  _iobuf *v11; 
  int v12; 
  int v13; 
  char v14; 
  char v15; 
  char *v16; 
  char *v17; 
  char *v18; 
  char *v19; 

  v2 = ftell(f);
  v11 = f;
  v13 = 128;
  v18 = &v14;
  v12 = 1;
  v10 = stbi__stdio_callbacks;
  v3 = stbi__stdio_callbacks.read(f, &v14, 128);
  v4 = 0;
  if ( v3 )
  {
    v16 = &v14;
    v5 = &v14 + v3;
  }
  else
  {
    v12 = 0;
    v16 = &v14;
    v5 = &v15;
    v14 = 0;
  }
  v17 = v5;
  v19 = v5;
  z.s = (stbi__context *)&v9;
  if ( (unsigned int)stbi__parse_png_file(&z, 2, 0) && z.depth == 16 )
  {
    v4 = 1;
  }
  else
  {
    s = z.s;
    z.s->img_buffer = z.s->img_buffer_original;
    s->img_buffer_end = s->img_buffer_original_end;
  }
  fseek(f, v2, 0);
  return v4;
}

/*
==============
stbi_is_16_bit_from_memory
==============
*/
__int64 stbi_is_16_bit_from_memory(const unsigned __int8 *buffer, int len)
{
  __int64 result; 
  stbi__context *v3; 
  stbi__context *s; 
  stbi__png z; 
  char v6; 
  __int64 v7; 
  int v8; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  const unsigned __int8 *v12; 

  v7 = 0i64;
  v8 = 0;
  v11 = buffer;
  v9 = buffer;
  v12 = &buffer[len];
  v10 = v12;
  z.s = (stbi__context *)&v6;
  result = stbi__parse_png_file(&z, 2, 0);
  if ( (_DWORD)result )
  {
    if ( z.depth == 16 )
    {
      return 1i64;
    }
    else
    {
      s = z.s;
      z.s->img_buffer = z.s->img_buffer_original;
      s->img_buffer_end = s->img_buffer_original_end;
      return 0i64;
    }
  }
  else
  {
    v3 = z.s;
    z.s->img_buffer = z.s->img_buffer_original;
    v3->img_buffer_end = v3->img_buffer_original_end;
  }
  return result;
}

/*
==============
stbi_is_hdr
==============
*/
__int64 stbi_is_hdr(const char *filename)
{
  FILE *Stream; 

  if ( !fopen_s(&Stream, filename, "rb") && Stream )
    fclose(Stream);
  return 0i64;
}

/*
==============
stbi_is_hdr_from_callbacks
==============
*/
__int64 stbi_is_hdr_from_callbacks(const stbi_io_callbacks *clbk, void *user)
{
  return 0i64;
}

/*
==============
stbi_is_hdr_from_file
==============
*/
__int64 stbi_is_hdr_from_file(_iobuf *f)
{
  return 0i64;
}

/*
==============
stbi_is_hdr_from_memory
==============
*/
__int64 stbi_is_hdr_from_memory(const unsigned __int8 *buffer, int len)
{
  return 0i64;
}

/*
==============
stbi_ldr_to_hdr_gamma
==============
*/
void stbi_ldr_to_hdr_gamma(float gamma)
{
  stbi__l2h_gamma = gamma;
}

/*
==============
stbi_ldr_to_hdr_scale
==============
*/
void stbi_ldr_to_hdr_scale(float scale)
{
  stbi__l2h_scale = scale;
}

/*
==============
stbi_load
==============
*/
unsigned __int8 *stbi_load(const char *filename, int *x, int *y, int *comp, int req_comp)
{
  errno_t v8; 
  FILE *v9; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  FILE *Stream; 
  stbi__context s; 

  v8 = fopen_s(&Stream, filename, "rb");
  v9 = Stream;
  if ( v8 )
    v9 = NULL;
  Stream = v9;
  if ( v9 )
  {
    s.io_user_data = v9;
    s.img_buffer_original = s.buffer_start;
    s.buflen = 128;
    s.read_from_callbacks = 1;
    s.io = stbi__stdio_callbacks;
    v11 = stbi__stdio_callbacks.read(v9, (char *)s.buffer_start, 128);
    if ( v11 )
    {
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[v11];
    }
    else
    {
      s.read_from_callbacks = 0;
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[1];
      s.buffer_start[0] = 0;
    }
    s.img_buffer_end = v12;
    s.img_buffer_original_end = v12;
    v13 = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
    if ( v13 )
      fseek(v9, LODWORD(s.img_buffer) - LODWORD(s.img_buffer_end), 1);
    fclose(v9);
    return v13;
  }
  else
  {
    stbi__g_failure_reason = "can't fopen";
    return 0i64;
  }
}

/*
==============
stbi_load_16
==============
*/
unsigned __int16 *stbi_load_16(const char *filename, int *x, int *y, int *comp, int req_comp)
{
  errno_t v8; 
  FILE *v9; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int16 *v13; 
  FILE *Stream; 
  stbi__context s; 

  v8 = fopen_s(&Stream, filename, "rb");
  v9 = Stream;
  if ( v8 )
    v9 = NULL;
  Stream = v9;
  if ( v9 )
  {
    s.io_user_data = v9;
    s.img_buffer_original = s.buffer_start;
    s.buflen = 128;
    s.read_from_callbacks = 1;
    s.io = stbi__stdio_callbacks;
    v11 = stbi__stdio_callbacks.read(v9, (char *)s.buffer_start, 128);
    if ( v11 )
    {
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[v11];
    }
    else
    {
      s.read_from_callbacks = 0;
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[1];
      s.buffer_start[0] = 0;
    }
    s.img_buffer_end = v12;
    s.img_buffer_original_end = v12;
    v13 = stbi__load_and_postprocess_16bit(&s, x, y, comp, req_comp);
    if ( v13 )
      fseek(v9, LODWORD(s.img_buffer) - LODWORD(s.img_buffer_end), 1);
    fclose(v9);
    return v13;
  }
  else
  {
    stbi__g_failure_reason = "can't fopen";
    return 0i64;
  }
}

/*
==============
stbi_load_16_from_callbacks
==============
*/
unsigned __int16 *stbi_load_16_from_callbacks(const stbi_io_callbacks *clbk, void *user, int *x, int *y, int *channels_in_file, int desired_channels)
{
  __int128 v6; 
  int (__fastcall *eof)(void *); 
  int v10; 
  unsigned __int8 *v11; 
  stbi__context s; 

  v6 = *(_OWORD *)&clbk->read;
  eof = clbk->eof;
  s.img_buffer_original = s.buffer_start;
  s.io_user_data = user;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  *(_OWORD *)&s.io.read = v6;
  s.io.eof = eof;
  v10 = ((__int64 (__fastcall *)(void *, unsigned __int8 *, __int64))v6)(user, s.buffer_start, 128i64);
  if ( v10 )
  {
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[v10];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v11;
  s.img_buffer_original_end = v11;
  return stbi__load_and_postprocess_16bit(&s, x, y, channels_in_file, desired_channels);
}

/*
==============
stbi_load_16_from_memory
==============
*/
unsigned __int16 *stbi_load_16_from_memory(const unsigned __int8 *buffer, int len, int *x, int *y, int *channels_in_file, int desired_channels)
{
  stbi__context s; 

  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  return stbi__load_and_postprocess_16bit(&s, x, y, channels_in_file, desired_channels);
}

/*
==============
stbi_load_from_callbacks
==============
*/
unsigned __int8 *stbi_load_from_callbacks(const stbi_io_callbacks *clbk, void *user, int *x, int *y, int *comp, int req_comp)
{
  __int128 v6; 
  int (__fastcall *eof)(void *); 
  int v10; 
  unsigned __int8 *v11; 
  stbi__context s; 

  v6 = *(_OWORD *)&clbk->read;
  eof = clbk->eof;
  s.img_buffer_original = s.buffer_start;
  s.io_user_data = user;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  *(_OWORD *)&s.io.read = v6;
  s.io.eof = eof;
  v10 = ((__int64 (__fastcall *)(void *, unsigned __int8 *, __int64))v6)(user, s.buffer_start, 128i64);
  if ( v10 )
  {
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[v10];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v11 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v11;
  s.img_buffer_original_end = v11;
  return stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
}

/*
==============
stbi_load_from_file
==============
*/
unsigned __int8 *stbi_load_from_file(_iobuf *f, int *x, int *y, int *comp, int req_comp)
{
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *result; 
  unsigned __int8 *v12; 
  stbi__context s; 

  s.img_buffer_original = s.buffer_start;
  s.io_user_data = f;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  s.io = stbi__stdio_callbacks;
  v9 = stbi__stdio_callbacks.read(f, (char *)s.buffer_start, 128);
  if ( v9 )
  {
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[v9];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v10;
  s.img_buffer_original_end = v10;
  result = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
  v12 = result;
  if ( result )
  {
    fseek(f, LODWORD(s.img_buffer) - LODWORD(s.img_buffer_end), 1);
    return v12;
  }
  return result;
}

/*
==============
stbi_load_from_file_16
==============
*/
unsigned __int16 *stbi_load_from_file_16(_iobuf *f, int *x, int *y, int *comp, int req_comp)
{
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int16 *result; 
  unsigned __int16 *v12; 
  stbi__context s; 

  s.img_buffer_original = s.buffer_start;
  s.io_user_data = f;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  s.io = stbi__stdio_callbacks;
  v9 = stbi__stdio_callbacks.read(f, (char *)s.buffer_start, 128);
  if ( v9 )
  {
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[v9];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v10;
  s.img_buffer_original_end = v10;
  result = stbi__load_and_postprocess_16bit(&s, x, y, comp, req_comp);
  v12 = result;
  if ( result )
  {
    fseek(f, LODWORD(s.img_buffer) - LODWORD(s.img_buffer_end), 1);
    return v12;
  }
  return result;
}

/*
==============
stbi_load_from_memory
==============
*/
unsigned __int8 *stbi_load_from_memory(const unsigned __int8 *buffer, int len, int *x, int *y, int *comp, int req_comp)
{
  stbi__context s; 

  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  return stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
}

/*
==============
stbi_load_jpeg_from_memory_swizzle
==============
*/
unsigned __int8 *stbi_load_jpeg_from_memory_swizzle(const unsigned __int8 *buffer, int len, unsigned __int8 *output, unsigned int outputwidth, unsigned int outputheight, int outputXOffset, int outputYOffset, int req_comp, unsigned int pitch, unsigned int linear, void *tp, unsigned int (*swizzle_offset)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void *), void (*outputcopy)(unsigned __int8 *, unsigned __int8, unsigned __int8, unsigned __int8))
{
  stbi__context s; 

  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  return load_jpeg_image_swizzle(&s, output, outputwidth, outputheight, outputXOffset, outputYOffset, req_comp, pitch, linear, tp, swizzle_offset, outputcopy);
}

/*
==============
stbi_load_jpeg_from_memory_yuv
==============
*/
unsigned __int8 *stbi_load_jpeg_from_memory_yuv(unsigned __int8 *buffer, int len, int *y_x, int *y_y, int *uv_x, int *uv_y)
{
  stbi__context s; 

  s.img_buffer_original = buffer;
  s.img_buffer = buffer;
  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original_end = &buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  return load_jpeg_image_yuv(&s, y_x, y_y, uv_x, uv_y);
}

/*
==============
stbi_load_jpeg_info_from_memory
==============
*/
__int64 stbi_load_jpeg_info_from_memory(const unsigned __int8 *buffer, int len, int *x, int *y, int *comp)
{
  stbi__context s; 

  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  return stbi__jpeg_info(&s, x, y, comp);
}

/*
==============
stbi_loadf
==============
*/
float *stbi_loadf(const char *filename, int *x, int *y, int *comp, int req_comp)
{
  int v5; 
  FILE *v9; 
  int v10; 
  float *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  FILE *Stream; 
  stbi__context s; 

  v5 = req_comp;
  if ( fopen_s(&Stream, filename, "rb") || (v9 = Stream) == NULL )
  {
    stbi__g_failure_reason = "can't fopen";
    return 0i64;
  }
  else
  {
    s.img_buffer_original = s.buffer_start;
    s.io_user_data = Stream;
    s.buflen = 128;
    s.io = stbi__stdio_callbacks;
    s.read_from_callbacks = 1;
    v10 = stbi__stdio_callbacks.read(Stream, (char *)s.buffer_start, 128);
    v11 = NULL;
    if ( v10 )
    {
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[v10];
    }
    else
    {
      s.read_from_callbacks = 0;
      s.img_buffer = s.buffer_start;
      v12 = &s.buffer_start[1];
      s.buffer_start[0] = 0;
    }
    s.img_buffer_end = v12;
    s.img_buffer_original_end = v12;
    v13 = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
    if ( v13 )
    {
      if ( !req_comp )
        v5 = *comp;
      v11 = stbi__ldr_to_hdr(v13, *x, *y, v5);
    }
    else
    {
      stbi__g_failure_reason = "unknown image type";
    }
    fclose(v9);
    return v11;
  }
}

/*
==============
stbi_loadf_from_callbacks
==============
*/
float *stbi_loadf_from_callbacks(const stbi_io_callbacks *clbk, void *user, int *x, int *y, int *comp, int req_comp)
{
  __int128 v6; 
  int (__fastcall *eof)(void *); 
  int v8; 
  int v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  float *result; 
  stbi__context s; 

  v6 = *(_OWORD *)&clbk->read;
  eof = clbk->eof;
  v8 = req_comp;
  s.img_buffer_original = s.buffer_start;
  s.io_user_data = user;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  *(_OWORD *)&s.io.read = v6;
  s.io.eof = eof;
  v11 = ((__int64 (__fastcall *)(void *, unsigned __int8 *, __int64))v6)(user, s.buffer_start, 128i64);
  if ( v11 )
  {
    s.img_buffer = s.buffer_start;
    v12 = &s.buffer_start[v11];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v12 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v12;
  s.img_buffer_original_end = v12;
  v13 = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
  if ( v13 )
  {
    if ( !req_comp )
      v8 = *comp;
    return stbi__ldr_to_hdr(v13, *x, *y, v8);
  }
  else
  {
    result = NULL;
    stbi__g_failure_reason = "unknown image type";
  }
  return result;
}

/*
==============
stbi_loadf_from_file
==============
*/
float *stbi_loadf_from_file(_iobuf *f, int *x, int *y, int *comp, int req_comp)
{
  int v5; 
  int v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  float *result; 
  stbi__context s; 

  v5 = req_comp;
  s.img_buffer_original = s.buffer_start;
  s.io_user_data = f;
  s.buflen = 128;
  s.read_from_callbacks = 1;
  s.io = stbi__stdio_callbacks;
  v9 = stbi__stdio_callbacks.read(f, (char *)s.buffer_start, 128);
  if ( v9 )
  {
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[v9];
  }
  else
  {
    s.read_from_callbacks = 0;
    s.img_buffer = s.buffer_start;
    v10 = &s.buffer_start[1];
    s.buffer_start[0] = 0;
  }
  s.img_buffer_end = v10;
  s.img_buffer_original_end = v10;
  v11 = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
  if ( v11 )
  {
    if ( !req_comp )
      v5 = *comp;
    return stbi__ldr_to_hdr(v11, *x, *y, v5);
  }
  else
  {
    result = NULL;
    stbi__g_failure_reason = "unknown image type";
  }
  return result;
}

/*
==============
stbi_loadf_from_memory
==============
*/
float *stbi_loadf_from_memory(const unsigned __int8 *buffer, int len, int *x, int *y, int *comp, int req_comp)
{
  int v7; 
  unsigned __int8 *v9; 
  float *result; 
  stbi__context s; 

  v7 = req_comp;
  s.io.read = NULL;
  s.read_from_callbacks = 0;
  s.img_buffer_original = (unsigned __int8 *)buffer;
  s.img_buffer = (unsigned __int8 *)buffer;
  s.img_buffer_original_end = (unsigned __int8 *)&buffer[len];
  s.img_buffer_end = s.img_buffer_original_end;
  v9 = stbi__load_and_postprocess_8bit(&s, x, y, comp, req_comp);
  if ( v9 )
  {
    if ( !req_comp )
      v7 = *comp;
    return stbi__ldr_to_hdr(v9, *x, *y, v7);
  }
  else
  {
    result = NULL;
    stbi__g_failure_reason = "unknown image type";
  }
  return result;
}

/*
==============
stbi_set_flip_vertically_on_load
==============
*/
void stbi_set_flip_vertically_on_load(int flag_true_if_should_flip)
{
  stbi__vertically_flip_on_load = flag_true_if_should_flip;
}

/*
==============
stbi_set_memglob
==============
*/
void stbi_set_memglob(unsigned __int8 *buffer, unsigned int size)
{
  if ( !stbi_mem.data )
  {
    stbi_mem.data = buffer;
    stbi_mem.index = 0i64;
    stbi_mem.old_index = 0i64;
    stbi_mem.size = size;
  }
}

/*
==============
stbi_set_unpremultiply_on_load
==============
*/
void stbi_set_unpremultiply_on_load(int flag_true_if_should_unpremultiply)
{
  stbi__unpremultiply_on_load = flag_true_if_should_unpremultiply;
}

/*
==============
stbi_zlib_decode_buffer
==============
*/
__int64 stbi_zlib_decode_buffer(char *obuffer, int olen, const char *ibuffer, int ilen)
{
  stbi__zbuf a; 

  a.zout_start = obuffer;
  a.zbuffer_end = (unsigned __int8 *)&ibuffer[ilen];
  a.zout = obuffer;
  a.zout_end = &obuffer[olen];
  a.zbuffer = (unsigned __int8 *)ibuffer;
  a.z_expandable = 0;
  if ( (unsigned int)stbi__parse_zlib(&a, 1) )
    return (unsigned int)(LODWORD(a.zout) - LODWORD(a.zout_start));
  else
    return 0xFFFFFFFFi64;
}

/*
==============
stbi_zlib_decode_malloc
==============
*/
char *stbi_zlib_decode_malloc(const char *buffer, int len, int *outlen)
{
  __int64 v4; 
  char *v6; 
  stbi__zbuf a; 

  v4 = len;
  if ( alt_stb_malloc )
  {
    v6 = (char *)alt_stb_malloc(0x4000ui64);
  }
  else
  {
    if ( stbi_mem.index + 0x4000 >= stbi_mem.size )
      return 0i64;
    v6 = (char *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 0x4000i64;
  }
  if ( !v6 )
    return 0i64;
  a.zbuffer = (unsigned __int8 *)buffer;
  a.zbuffer_end = (unsigned __int8 *)&buffer[v4];
  a.zout_start = v6;
  a.zout_end = v6 + 0x4000;
  a.zout = v6;
  a.z_expandable = 1;
  if ( !(unsigned int)stbi__parse_zlib(&a, 1) )
  {
    if ( alt_stb_free )
      alt_stb_free(a.zout_start);
    return 0i64;
  }
  if ( outlen )
    *outlen = LODWORD(a.zout) - LODWORD(a.zout_start);
  return a.zout_start;
}

/*
==============
stbi_zlib_decode_malloc_guesssize
==============
*/
char *stbi_zlib_decode_malloc_guesssize(const char *buffer, int len, int initial_size, int *outlen)
{
  __int64 v5; 
  __int64 v7; 
  char *v8; 
  stbi__zbuf a; 

  v5 = len;
  v7 = initial_size;
  if ( alt_stb_malloc )
  {
    v8 = (char *)alt_stb_malloc(initial_size);
  }
  else
  {
    if ( stbi_mem.index + initial_size >= stbi_mem.size )
      return 0i64;
    stbi_mem.old_index = stbi_mem.index;
    v8 = (char *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.index += initial_size;
  }
  if ( !v8 )
    return 0i64;
  a.zout_start = v8;
  a.zbuffer_end = (unsigned __int8 *)&buffer[v5];
  a.zout = v8;
  a.zout_end = &v8[v7];
  a.zbuffer = (unsigned __int8 *)buffer;
  a.z_expandable = 1;
  if ( !(unsigned int)stbi__parse_zlib(&a, 1) )
  {
    if ( alt_stb_free )
      alt_stb_free(a.zout_start);
    return 0i64;
  }
  if ( outlen )
    *outlen = LODWORD(a.zout) - LODWORD(a.zout_start);
  return a.zout_start;
}

/*
==============
stbi_zlib_decode_malloc_guesssize_headerflag
==============
*/
char *stbi_zlib_decode_malloc_guesssize_headerflag(const char *buffer, int len, int initial_size, int *outlen, int parse_header)
{
  __int64 v6; 
  __int64 v8; 
  char *v9; 
  stbi__zbuf a; 

  v6 = len;
  v8 = initial_size;
  if ( alt_stb_malloc )
  {
    v9 = (char *)alt_stb_malloc(initial_size);
  }
  else
  {
    if ( stbi_mem.index + initial_size >= stbi_mem.size )
      return 0i64;
    stbi_mem.old_index = stbi_mem.index;
    v9 = (char *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.index += initial_size;
  }
  if ( !v9 )
    return 0i64;
  a.zbuffer_end = (unsigned __int8 *)&buffer[v6];
  a.zout_start = v9;
  a.zout = v9;
  a.zout_end = &v9[v8];
  a.zbuffer = (unsigned __int8 *)buffer;
  a.z_expandable = 1;
  if ( !(unsigned int)stbi__parse_zlib(&a, parse_header) )
  {
    if ( alt_stb_free )
      alt_stb_free(a.zout_start);
    return 0i64;
  }
  if ( outlen )
    *outlen = LODWORD(a.zout) - LODWORD(a.zout_start);
  return a.zout_start;
}

/*
==============
stbi_zlib_decode_noheader_buffer
==============
*/
__int64 stbi_zlib_decode_noheader_buffer(char *obuffer, int olen, const char *ibuffer, int ilen)
{
  stbi__zbuf a; 

  a.zout_start = obuffer;
  a.zbuffer_end = (unsigned __int8 *)&ibuffer[ilen];
  a.zout = obuffer;
  a.zout_end = &obuffer[olen];
  a.zbuffer = (unsigned __int8 *)ibuffer;
  a.z_expandable = 0;
  if ( (unsigned int)stbi__parse_zlib(&a, 0) )
    return (unsigned int)(LODWORD(a.zout) - LODWORD(a.zout_start));
  else
    return 0xFFFFFFFFi64;
}

/*
==============
stbi_zlib_decode_noheader_malloc
==============
*/
char *stbi_zlib_decode_noheader_malloc(const char *buffer, int len, int *outlen)
{
  __int64 v4; 
  char *v6; 
  stbi__zbuf a; 

  v4 = len;
  if ( alt_stb_malloc )
  {
    v6 = (char *)alt_stb_malloc(0x4000ui64);
  }
  else
  {
    if ( stbi_mem.index + 0x4000 >= stbi_mem.size )
      return 0i64;
    v6 = (char *)&stbi_mem.data[stbi_mem.index];
    stbi_mem.old_index = stbi_mem.index;
    stbi_mem.index += 0x4000i64;
  }
  if ( !v6 )
    return 0i64;
  a.zbuffer = (unsigned __int8 *)buffer;
  a.zbuffer_end = (unsigned __int8 *)&buffer[v4];
  a.zout_start = v6;
  a.zout_end = v6 + 0x4000;
  a.zout = v6;
  a.z_expandable = 1;
  if ( !(unsigned int)stbi__parse_zlib(&a, 0) )
  {
    if ( alt_stb_free )
      alt_stb_free(a.zout_start);
    return 0i64;
  }
  if ( outlen )
    *outlen = LODWORD(a.zout) - LODWORD(a.zout_start);
  return a.zout_start;
}

