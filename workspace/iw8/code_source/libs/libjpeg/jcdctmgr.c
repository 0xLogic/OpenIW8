/*
==============
forward_DCT
==============
*/
void forward_DCT(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **sample_data, __int16 (*coef_blocks)[64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  jpeg_forward_dct *fdct; 
  void (__fastcall *start_pass)(jpeg_compress_struct *); 
  __int16 *v9; 
  __int64 v10; 
  unsigned __int8 **v12; 
  __int64 v13; 
  char *v14; 
  unsigned __int8 **v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  int v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  int v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  int v24; 
  unsigned __int8 *v25; 
  int *v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
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
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  char v76[4]; 
  char v77[252]; 

  fdct = cinfo->fdct;
  start_pass = fdct[1].start_pass;
  if ( num_blocks )
  {
    v9 = &(*coef_blocks)[2];
    v10 = num_blocks;
    v12 = &sample_data[start_row + 2];
    v13 = *((_QWORD *)&fdct[1].forward_DCT + compptr->quant_tbl_no) - (_QWORD)v77;
    do
    {
      v14 = v76;
      v15 = v12;
      v16 = 2i64;
      do
      {
        v17 = &(*(v15 - 2))[start_col];
        *(_DWORD *)v14 = *v17 - 128;
        *((_DWORD *)v14 + 1) = v17[1] - 128;
        *((_DWORD *)v14 + 2) = v17[2] - 128;
        *((_DWORD *)v14 + 3) = v17[3] - 128;
        *((_DWORD *)v14 + 4) = v17[4] - 128;
        *((_DWORD *)v14 + 5) = v17[5] - 128;
        *((_DWORD *)v14 + 6) = v17[6] - 128;
        v18 = v17[7] - 128;
        v19 = (__int64)*(v15 - 1);
        *((_DWORD *)v14 + 7) = v18;
        v20 = (unsigned __int8 *)(start_col + v19);
        *((_DWORD *)v14 + 8) = *v20 - 128;
        *((_DWORD *)v14 + 9) = v20[1] - 128;
        *((_DWORD *)v14 + 10) = v20[2] - 128;
        *((_DWORD *)v14 + 11) = v20[3] - 128;
        *((_DWORD *)v14 + 12) = v20[4] - 128;
        *((_DWORD *)v14 + 13) = v20[5] - 128;
        *((_DWORD *)v14 + 14) = v20[6] - 128;
        v21 = v20[7];
        v22 = *v15;
        *((_DWORD *)v14 + 15) = v21 - 128;
        v23 = &v22[start_col];
        *((_DWORD *)v14 + 16) = *v23 - 128;
        *((_DWORD *)v14 + 17) = v23[1] - 128;
        *((_DWORD *)v14 + 18) = v23[2] - 128;
        *((_DWORD *)v14 + 19) = v23[3] - 128;
        *((_DWORD *)v14 + 20) = v23[4] - 128;
        *((_DWORD *)v14 + 21) = v23[5] - 128;
        *((_DWORD *)v14 + 22) = v23[6] - 128;
        v24 = v23[7];
        v25 = &v15[1][start_col];
        *((_DWORD *)v14 + 23) = v24 - 128;
        v15 += 4;
        *((_DWORD *)v14 + 24) = *v25 - 128;
        v14 += 128;
        *((_DWORD *)v14 - 7) = v25[1] - 128;
        *((_DWORD *)v14 - 6) = v25[2] - 128;
        *((_DWORD *)v14 - 5) = v25[3] - 128;
        *((_DWORD *)v14 - 4) = v25[4] - 128;
        *((_DWORD *)v14 - 3) = v25[5] - 128;
        *((_DWORD *)v14 - 2) = v25[6] - 128;
        *((_DWORD *)v14 - 1) = v25[7] - 128;
        --v16;
      }
      while ( v16 );
      ((void (__fastcall *)(char *, char *, unsigned __int8 **, _QWORD))start_pass)(v76, v14, v15, start_col);
      v26 = (int *)v77;
      v27 = 8i64;
      do
      {
        v28 = *(int *)((char *)v26 + v13);
        v29 = *(v26 - 1);
        v30 = v28 >> 1;
        if ( v29 >= 0 )
        {
          v33 = v30 + v29;
          if ( v33 < v28 )
            LOWORD(v32) = 0;
          else
            v32 = v33 / v28;
        }
        else
        {
          v31 = v30 - v29;
          if ( v31 < v28 )
            LOWORD(v32) = 0;
          else
            v32 = -(v31 / v28);
        }
        v34 = *v26;
        *(v9 - 2) = v32;
        v35 = *(int *)((char *)v26 + v13 + 4);
        v36 = v35 >> 1;
        if ( v34 >= 0 )
        {
          v39 = v36 + v34;
          if ( v39 < v35 )
            LOWORD(v38) = 0;
          else
            v38 = v39 / v35;
        }
        else
        {
          v37 = v36 - v34;
          if ( v37 < v35 )
            LOWORD(v38) = 0;
          else
            v38 = -(v37 / v35);
        }
        v40 = v26[1];
        *(v9 - 1) = v38;
        v41 = *(int *)((char *)v26 + v13 + 8);
        v42 = v41 >> 1;
        if ( v40 >= 0 )
        {
          v45 = v42 + v40;
          if ( v45 < v41 )
            LOWORD(v44) = 0;
          else
            v44 = v45 / v41;
        }
        else
        {
          v43 = v42 - v40;
          if ( v43 < v41 )
            LOWORD(v44) = 0;
          else
            v44 = -(v43 / v41);
        }
        v46 = v26[2];
        *v9 = v44;
        v47 = *(int *)((char *)v26 + v13 + 12);
        v48 = v47 >> 1;
        if ( v46 >= 0 )
        {
          v51 = v48 + v46;
          if ( v51 < v47 )
            LOWORD(v50) = 0;
          else
            v50 = v51 / v47;
        }
        else
        {
          v49 = v48 - v46;
          if ( v49 < v47 )
            LOWORD(v50) = 0;
          else
            v50 = -(v49 / v47);
        }
        v52 = v26[3];
        v9[1] = v50;
        v53 = *(int *)((char *)v26 + v13 + 16);
        v54 = v53 >> 1;
        if ( v52 >= 0 )
        {
          v57 = v54 + v52;
          if ( v57 < v53 )
            LOWORD(v56) = 0;
          else
            v56 = v57 / v53;
        }
        else
        {
          v55 = v54 - v52;
          if ( v55 < v53 )
            LOWORD(v56) = 0;
          else
            v56 = -(v55 / v53);
        }
        v58 = v26[4];
        v9[2] = v56;
        v59 = *(int *)((char *)v26 + v13 + 20);
        v60 = v59 >> 1;
        if ( v58 >= 0 )
        {
          v63 = v60 + v58;
          if ( v63 < v59 )
            LOWORD(v62) = 0;
          else
            v62 = v63 / v59;
        }
        else
        {
          v61 = v60 - v58;
          if ( v61 < v59 )
            LOWORD(v62) = 0;
          else
            v62 = -(v61 / v59);
        }
        v64 = v26[5];
        v9[3] = v62;
        v65 = *(int *)((char *)v26 + v13 + 24);
        v66 = v65 >> 1;
        if ( v64 >= 0 )
        {
          v69 = v66 + v64;
          if ( v69 < v65 )
            LOWORD(v68) = 0;
          else
            v68 = v69 / v65;
        }
        else
        {
          v67 = v66 - v64;
          if ( v67 < v65 )
            LOWORD(v68) = 0;
          else
            v68 = -(v67 / v65);
        }
        v70 = v26[6];
        v9[4] = v68;
        v71 = *(int *)((char *)v26 + v13 + 28);
        v72 = v71 >> 1;
        if ( v70 >= 0 )
        {
          v75 = v72 + v70;
          if ( v75 < v71 )
            LOWORD(v74) = 0;
          else
            v74 = v75 / v71;
        }
        else
        {
          v73 = v72 - v70;
          if ( v73 < v71 )
            LOWORD(v74) = 0;
          else
            v74 = -(v73 / v71);
        }
        v9[5] = v74;
        v26 += 8;
        v9 += 8;
        --v27;
      }
      while ( v27 );
      start_col += 8;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
forward_DCT_float
==============
*/
void forward_DCT_float(jpeg_compress_struct *cinfo, jpeg_component_info *compptr, unsigned __int8 **sample_data, __int16 (*coef_blocks)[64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks)
{
  jpeg_forward_dct *fdct; 
  void (__fastcall *forward_DCT)(jpeg_compress_struct *, jpeg_component_info *, unsigned __int8 **, __int16 (*)[64], unsigned int, unsigned int, unsigned int); 
  unsigned __int64 v9; 
  char *v10; 
  __int16 *v12; 
  unsigned __int8 **v13; 
  __int64 v14; 
  float *v15; 
  unsigned __int8 **v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  int v19; 
  __int64 v20; 
  unsigned __int8 *v21; 
  int v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  int v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  __int64 v28; 
  char *v29; 
  __int16 *v30; 
  unsigned __int64 v31; 
  float v32; 
  __int16 v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  __int64 v38; 
  char *v39; 
  __int16 *v40; 
  unsigned __int64 v41; 
  __m128 v42; 
  __m128 v47; 
  __m128 v52; 
  __m128 v57; 
  __int16 v62[2]; 
  char v64[236]; 
  __int16 v65[10]; 

  fdct = cinfo->fdct;
  forward_DCT = fdct[3].forward_DCT;
  v9 = *((_QWORD *)&fdct[4].start_pass + compptr->quant_tbl_no);
  if ( num_blocks )
  {
    v10 = (char *)v62 - v9;
    v12 = &(*coef_blocks)[63];
    v13 = &sample_data[start_row + 2];
    v14 = num_blocks;
    do
    {
      v15 = (float *)v62;
      v16 = v13;
      v17 = 2i64;
      do
      {
        v18 = &(*(v16 - 2))[start_col];
        *v15 = (float)(*v18 - 128);
        v15[1] = (float)(v18[1] - 128);
        v15[2] = (float)(v18[2] - 128);
        v15[3] = (float)(v18[3] - 128);
        v15[4] = (float)(v18[4] - 128);
        v15[5] = (float)(v18[5] - 128);
        v15[6] = (float)(v18[6] - 128);
        v19 = v18[7];
        v20 = (__int64)*(v16 - 1);
        v15[7] = (float)(v19 - 128);
        v21 = (unsigned __int8 *)(start_col + v20);
        v15[8] = (float)(*v21 - 128);
        v15[9] = (float)(v21[1] - 128);
        v15[10] = (float)(v21[2] - 128);
        v15[11] = (float)(v21[3] - 128);
        v15[12] = (float)(v21[4] - 128);
        v15[13] = (float)(v21[5] - 128);
        v15[14] = (float)(v21[6] - 128);
        v22 = v21[7] - 128;
        v23 = *v16;
        v15[15] = (float)v22;
        v24 = &v23[start_col];
        v15[16] = (float)(*v24 - 128);
        v15[17] = (float)(v24[1] - 128);
        v15[18] = (float)(v24[2] - 128);
        v15[19] = (float)(v24[3] - 128);
        v15[20] = (float)(v24[4] - 128);
        v15[21] = (float)(v24[5] - 128);
        v15[22] = (float)(v24[6] - 128);
        v25 = v24[7];
        v26 = v16[1];
        v15[23] = (float)(v25 - 128);
        v27 = &v26[start_col];
        v15[24] = (float)(*v27 - 128);
        v15[25] = (float)(v27[1] - 128);
        v15[26] = (float)(v27[2] - 128);
        v15[27] = (float)(v27[3] - 128);
        v15[28] = (float)(v27[4] - 128);
        v15[29] = (float)(v27[5] - 128);
        v15[30] = (float)(v27[6] - 128);
        v15 += 32;
        v16 += 4;
        *(v15 - 1) = (float)(v27[7] - 128);
        --v17;
      }
      while ( v17 );
      ((void (__fastcall *)(__int16 *, float *, unsigned __int8 **, _QWORD))forward_DCT)(v62, v15, v16, start_col);
      if ( (v12 - 63 > v65 || v12 < v62) && ((unsigned __int64)(v12 - 63) > v9 + 252 || (unsigned __int64)v12 < v9) )
      {
        v38 = 4i64;
        v39 = &v64[-v9];
        v40 = v12 - 55;
        v41 = v9 + 32;
        do
        {
          v40 += 16;
          v42 = _mm128_mul_ps(*(__m128 *)&v10[v41 - 32], *(__m128 *)(v41 - 32));
          v41 += 64i64;
          _XMM2 = _mm128_add_ps(v42, (__m128)_xmm);
          __asm
          {
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vpsubw  xmm2, xmm4, xmm1
          }
          v47 = _mm128_mul_ps(*(__m128 *)&v39[v41 - 96], *(__m128 *)(v41 - 80));
          *((_QWORD *)v40 - 6) = _XMM2;
          _XMM2 = _mm128_add_ps(v47, (__m128)_xmm);
          __asm
          {
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vpsubw  xmm2, xmm4, xmm1
          }
          v52 = _mm128_mul_ps(*(__m128 *)&v10[v41 - 64], *(__m128 *)(v41 - 64));
          *((_QWORD *)v40 - 5) = _XMM2;
          _XMM2 = _mm128_add_ps(v52, (__m128)_xmm);
          __asm
          {
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vpsubw  xmm2, xmm4, xmm1
          }
          v57 = _mm128_mul_ps(*(__m128 *)&v39[v41 - 64], *(__m128 *)(v41 - 48));
          *((_QWORD *)v40 - 4) = _XMM2;
          _XMM2 = _mm128_add_ps(v57, (__m128)_xmm);
          __asm
          {
            vcvttps2dq xmm3, xmm2
            vpshufb xmm4, xmm3, cs:__xmm@0d0c0908050401000d0c090805040100
            vpsubw  xmm2, xmm4, xmm1
          }
          *((_QWORD *)v40 - 3) = _XMM2;
          --v38;
        }
        while ( v38 );
      }
      else
      {
        v28 = 16i64;
        v29 = v64 - v9 + 10;
        v30 = v12 - 61;
        v31 = v9 + 8;
        do
        {
          v32 = *(float *)&v29[v31 - 8];
          v33 = (int)(float)((float)(*(float *)&v10[v31 - 8] * *(float *)(v31 - 8)) + 16384.5) - 0x4000;
          v31 += 16i64;
          *(v30 - 2) = v33;
          v30 += 4;
          v34 = v32 * *(float *)(v31 - 20);
          v35 = *(float *)&v10[v31 - 16];
          *(v30 - 5) = (int)(float)(v34 + 16384.5) - 0x4000;
          v36 = v35 * *(float *)(v31 - 16);
          v37 = *(float *)&v29[v31 - 16];
          *(v30 - 4) = (int)(float)(v36 + 16384.5) - 0x4000;
          *(v30 - 3) = (int)(float)((float)(v37 * *(float *)(v31 - 12)) + 16384.5) - 0x4000;
          --v28;
        }
        while ( v28 );
      }
      v12 += 64;
      start_col += 8;
      --v14;
    }
    while ( v14 );
  }
}

/*
==============
jinit_forward_dct
==============
*/
void jinit_forward_dct(jpeg_compress_struct *cinfo)
{
  jpeg_forward_dct *v2; 
  J_DCT_METHOD dct_method; 
  __int32 v4; 
  void (__fastcall *v5)(int *); 

  v2 = (jpeg_forward_dct *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 96i64);
  cinfo->fdct = v2;
  v2->start_pass = start_pass_fdctmgr;
  dct_method = cinfo->dct_method;
  if ( dct_method == JDCT_ISLOW )
  {
    v2->forward_DCT = forward_DCT;
    v5 = j_jpeg_fdct_islow;
    goto LABEL_8;
  }
  v4 = dct_method - 1;
  if ( !v4 )
  {
    v2->forward_DCT = forward_DCT;
    v5 = j_jpeg_fdct_ifast;
LABEL_8:
    v2[1].start_pass = (void (__fastcall *)(jpeg_compress_struct *))v5;
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    v2->forward_DCT = forward_DCT_float;
    v2[3].forward_DCT = (void (__fastcall *)(jpeg_compress_struct *, jpeg_component_info *, unsigned __int8 **, __int16 (*)[64], unsigned int, unsigned int, unsigned int))j_jpeg_fdct_float;
  }
  else
  {
    cinfo->err->msg_code = 48;
    cinfo->err->error_exit((jpeg_common_struct *)cinfo);
  }
LABEL_9:
  v2[1].forward_DCT = NULL;
  v2[4].start_pass = NULL;
  v2[2].start_pass = NULL;
  v2[4].forward_DCT = NULL;
  v2[2].forward_DCT = NULL;
  v2[5].start_pass = NULL;
  v2[3].start_pass = NULL;
  v2[5].forward_DCT = NULL;
}

/*
==============
start_pass_fdctmgr
==============
*/
void start_pass_fdctmgr(jpeg_compress_struct *cinfo)
{
  jpeg_forward_dct *fdct; 
  int v2; 
  int *p_quant_tbl_no; 
  __int64 v5; 
  __int64 v6; 
  J_DCT_METHOD dct_method; 
  JQUANT_TBL *v8; 
  __int32 v9; 
  __int64 v10; 
  __int64 v11; 
  double *v12; 
  unsigned int v13; 
  double v14; 
  __int128 v18; 
  unsigned __int64 v48; 
  unsigned __int64 v49; 
  const __int16 *v50; 
  signed __int64 v51; 
  int v52; 
  int v53; 
  __int64 v54; 
  char *v55; 
  __int64 v56; 
  char *v57; 
  unsigned __int16 *v58; 
  unsigned __int64 v87; 
  __int64 v88; 
  unsigned __int16 *v89; 
  unsigned __int64 v90; 
  __int64 v91; 

  fdct = cinfo->fdct;
  v2 = 0;
  if ( cinfo->num_components > 0 )
  {
    p_quant_tbl_no = &cinfo->comp_info->quant_tbl_no;
    do
    {
      v5 = *p_quant_tbl_no;
      v6 = v5;
      if ( (unsigned int)v5 > 3 || !cinfo->quant_tbl_ptrs[v5] )
      {
        cinfo->err->msg_code = 52;
        cinfo->err->msg_parm.i[0] = v5;
        cinfo->err->error_exit((jpeg_common_struct *)cinfo);
      }
      dct_method = cinfo->dct_method;
      v8 = cinfo->quant_tbl_ptrs[v6];
      if ( dct_method )
      {
        v9 = dct_method - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *((_QWORD *)&fdct[4].start_pass + v6);
            if ( !v10 )
            {
              v10 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
              *((_QWORD *)&fdct[4].start_pass + v6) = v10;
            }
            v11 = 0i64;
            v12 = (double *)aanscalefactor;
            do
            {
              v13 = v8->quantval[v11];
              v11 += 8i64;
              v14 = *v12;
              _XMM0 = v13;
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.125 / (*(double *)&_XMM0 * *v12);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 32) = *(float *)&_XMM0;
              ++v12;
              _XMM1 = v8->quantval[v11 - 7];
              __asm { vcvtdq2pd xmm1, xmm1 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.09011997777179934 / (*(double *)&_XMM1 * v14);
              _XMM0 = v18;
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              *(float *)(v10 + 4 * v11 - 28) = *(float *)&_XMM1;
              _XMM0 = v8->quantval[v11 - 6];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.09567085808222033 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 24) = *(float *)&_XMM0;
              _XMM0 = v8->quantval[v11 - 5];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.1063037618838187 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 20) = *(float *)&_XMM0;
              _XMM0 = v8->quantval[v11 - 4];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.125 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 16) = *(float *)&_XMM0;
              _XMM0 = v8->quantval[v11 - 3];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.1590948226499883 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 12) = *(float *)&_XMM0;
              _XMM0 = v8->quantval[v11 - 2];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.2309698831902152 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 8) = *(float *)&_XMM0;
              _XMM0 = v8->quantval[v11 - 1];
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v18 + 1) = 0i64;
              *(double *)&v18 = 0.4530637236410742 / (*(double *)&_XMM0 * v14);
              _XMM1 = v18;
              __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
              *(float *)(v10 + 4 * v11 - 4) = *(float *)&_XMM0;
            }
            while ( (__int64)v12 < (__int64)&unk_1447509C0 );
          }
          else
          {
            cinfo->err->msg_code = 48;
            cinfo->err->error_exit((jpeg_common_struct *)cinfo);
          }
        }
        else
        {
          v48 = *((_QWORD *)&fdct[1].forward_DCT + v6);
          if ( !v48 )
          {
            v48 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
            *((_QWORD *)&fdct[1].forward_DCT + v6) = v48;
          }
          v49 = v48 + 252;
          if ( (v48 > (unsigned __int64)&aanscales[63] || v49 < (unsigned __int64)aanscales) && (v48 > (unsigned __int64)&v8->quantval[63] || v49 < (unsigned __int64)v8) )
          {
            v54 = v48 + 32;
            v55 = (char *)((char *)aanscales - (char *)v8);
            v56 = 4i64;
            v57 = (char *)((char *)&aanscales[4] - (char *)v8);
            v58 = &v8->quantval[8];
            do
            {
              v54 += 64i64;
              _XMM0 = *(unsigned __int64 *)&v55[(_QWORD)v58 - 16];
              _XMM1 = *((unsigned __int64 *)v58 - 2);
              v58 += 16;
              __asm
              {
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
              }
              _XMM0 = *(unsigned __int64 *)&v57[(_QWORD)v58 - 48];
              __asm
              {
                vpaddd  xmm3, xmm2, xmm4
                vpmovsxwd xmm2, xmm0
                vpsrad  xmm1, xmm3, xmm5
              }
              *(_OWORD *)(v54 - 96) = _XMM1;
              _XMM1 = *((unsigned __int64 *)v58 - 5);
              __asm
              {
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
              }
              _XMM0 = *(unsigned __int64 *)&v55[(_QWORD)v58 - 32];
              __asm
              {
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
              }
              *(_OWORD *)(v54 - 80) = _XMM1;
              _XMM1 = *((unsigned __int64 *)v58 - 4);
              __asm
              {
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
              }
              _XMM0 = *(unsigned __int64 *)&v57[(_QWORD)v58 - 32];
              __asm
              {
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
              }
              *(_OWORD *)(v54 - 64) = _XMM1;
              _XMM1 = *((unsigned __int64 *)v58 - 3);
              __asm
              {
                vpmovsxwd xmm2, xmm0
                vpmovzxwd xmm0, xmm1
                vpmulld xmm2, xmm0, xmm2
                vpaddd  xmm3, xmm2, xmm4
                vpsrad  xmm1, xmm3, xmm5
              }
              *(_OWORD *)(v54 - 48) = _XMM1;
              --v56;
            }
            while ( v56 );
          }
          else
          {
            v50 = aanscales;
            v51 = (char *)v8 - (char *)aanscales;
            do
            {
              v52 = *(unsigned __int16 *)((char *)v50 + v51);
              v48 += 4i64;
              v53 = *v50++;
              *(_DWORD *)(v48 - 4) = (v53 * v52 + 1024) >> 11;
            }
            while ( (__int64)v50 < (__int64)aanscalefactor );
          }
        }
      }
      else
      {
        v87 = *((_QWORD *)&fdct[1].forward_DCT + v6);
        if ( !v87 )
        {
          v87 = cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
          *((_QWORD *)&fdct[1].forward_DCT + v6) = v87;
        }
        v88 = 0i64;
        if ( v87 > (unsigned __int64)&v8->quantval[63] || v87 + 252 < (unsigned __int64)v8 )
        {
          v89 = &v8->quantval[8];
          v90 = v87 + 32;
          v91 = 4i64;
          do
          {
            v90 += 64i64;
            _XMM0 = *((unsigned __int64 *)v89 - 2);
            v89 += 16;
            __asm { vpmovzxwd xmm1, xmm0 }
            _XMM0 = *((unsigned __int64 *)v89 - 5);
            __asm { vpslld  xmm2, xmm1, xmm3 }
            *(_OWORD *)(v90 - 96) = _XMM2;
            __asm { vpmovzxwd xmm1, xmm0 }
            _XMM0 = *((unsigned __int64 *)v89 - 4);
            __asm { vpslld  xmm2, xmm1, xmm3 }
            *(_OWORD *)(v90 - 80) = _XMM2;
            __asm { vpmovzxwd xmm1, xmm0 }
            _XMM0 = *((unsigned __int64 *)v89 - 3);
            __asm { vpslld  xmm2, xmm1, xmm3 }
            *(_OWORD *)(v90 - 64) = _XMM2;
            __asm
            {
              vpmovzxwd xmm1, xmm0
              vpslld  xmm2, xmm1, xmm3
            }
            *(_OWORD *)(v90 - 48) = _XMM2;
            --v91;
          }
          while ( v91 );
        }
        else
        {
          do
          {
            *(_DWORD *)(v87 + 4 * v88) = 8 * v8->quantval[v88];
            ++v88;
          }
          while ( v88 < 64 );
        }
      }
      ++v2;
      p_quant_tbl_no += 24;
    }
    while ( v2 < cinfo->num_components );
  }
}

