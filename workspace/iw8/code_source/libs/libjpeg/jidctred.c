/*
==============
jpeg_idct_1x1
==============
*/
void jpeg_idct_1x1(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, __int16 *coef_block, unsigned __int8 **output_buf, unsigned int output_col)
{
  (*output_buf)[output_col] = cinfo->sample_range_limit[((((unsigned int)(*coef_block * *(_DWORD *)compptr->dct_table) + 4i64) >> 3) & 0x3FF) + 128];
}

/*
==============
jpeg_idct_2x2
==============
*/
void jpeg_idct_2x2(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, __int16 *coef_block, unsigned __int8 **output_buf, unsigned int output_col)
{
  unsigned __int8 *sample_range_limit; 
  __int16 *v6; 
  int *v7; 
  _DWORD *dct_table; 
  int i; 
  __int16 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int16 v15; 
  int v16; 
  int v17; 
  int v18; 
  __int16 v19; 
  int v20; 
  int v21; 
  int v22; 
  __int16 v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned __int8 *v27; 
  unsigned __int8 v28; 
  int v29; 
  int v30; 
  unsigned __int8 *v31; 
  unsigned __int8 v32; 
  int v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 

  sample_range_limit = cinfo->sample_range_limit;
  v6 = coef_block + 24;
  v7 = (int *)&v35 + 1;
  dct_table = compptr->dct_table;
  for ( i = 8; i > 0; i -= 4 )
  {
    if ( ((i - 2) & 0xFFFFFFF9) != 0 || i == 8 )
    {
      v11 = *(v6 - 16);
      if ( v11 || *v6 || v6[16] || v6[32] )
      {
        v13 = (*dct_table * *(v6 - 24)) << 15;
        v14 = 29692 * v11 * dct_table[8] + 6967 * dct_table[40] * v6[16] - 5906 * dct_table[56] * v6[32] - 10426 * *v6 * dct_table[24];
        v12 = (v14 + v13 + 4096) >> 13;
        v7[7] = (v13 - v14 + 4096) >> 13;
      }
      else
      {
        v12 = 4 * *dct_table * *(v6 - 24);
        v7[7] = v12;
      }
      *(v7 - 1) = v12;
    }
    if ( ((i - 3) & 0xFFFFFFF9) != 0 || i == 9 )
    {
      v15 = *(v6 - 15);
      if ( v15 || v6[1] || v6[17] || v6[33] )
      {
        v17 = (dct_table[1] * *(v6 - 23)) << 15;
        v18 = 29692 * v15 * dct_table[9] + 6967 * dct_table[41] * v6[17] - 10426 * dct_table[25] * v6[1] - 5906 * dct_table[57] * v6[33];
        v16 = (v18 + v17 + 4096) >> 13;
        v7[8] = (v17 - v18 + 4096) >> 13;
      }
      else
      {
        v16 = 4 * dct_table[1] * *(v6 - 23);
        v7[8] = v16;
      }
      *v7 = v16;
    }
    if ( ((i - 4) & 0xFFFFFFF9) != 0 || i == 10 )
    {
      v19 = *(v6 - 14);
      if ( v19 || v6[2] || v6[18] || v6[34] )
      {
        v21 = (dct_table[2] * *(v6 - 22)) << 15;
        v22 = 29692 * v19 * dct_table[10] + 6967 * dct_table[42] * v6[18] - 10426 * dct_table[26] * v6[2] - 5906 * dct_table[58] * v6[34];
        v20 = (v22 + v21 + 4096) >> 13;
        v7[9] = (v21 - v22 + 4096) >> 13;
      }
      else
      {
        v20 = 4 * dct_table[2] * *(v6 - 22);
        v7[9] = v20;
      }
      v7[1] = v20;
    }
    if ( ((i - 5) & 0xFFFFFFF9) != 0 || i == 11 )
    {
      v23 = *(v6 - 13);
      if ( v23 || v6[3] || v6[19] || v6[35] )
      {
        v25 = (dct_table[3] * *(v6 - 21)) << 15;
        v26 = 29692 * v23 * dct_table[11] + 6967 * dct_table[43] * v6[19] - 10426 * dct_table[27] * v6[3] - 5906 * dct_table[59] * v6[35];
        v24 = (v26 + v25 + 4096) >> 13;
        v7[10] = (v25 - v26 + 4096) >> 13;
      }
      else
      {
        v24 = 4 * dct_table[3] * *(v6 - 21);
        v7[10] = v24;
      }
      v7[2] = v24;
    }
    v6 += 4;
    dct_table += 4;
    v7 += 4;
  }
  v27 = *output_buf;
  if ( HIDWORD(v35) || v36 || v37 || v38 )
  {
    v29 = (_DWORD)v35 << 15;
    v30 = 6967 * v37 + 29692 * HIDWORD(v35) - 10426 * v36 - 5906 * v38;
    v27[output_col] = sample_range_limit[((((unsigned int)(v30 + ((_DWORD)v35 << 15)) + 0x80000i64) >> 20) & 0x3FF) + 128];
    v28 = sample_range_limit[((((unsigned int)(v29 - v30) + 0x80000i64) >> 20) & 0x3FF) + 128];
  }
  else
  {
    v28 = sample_range_limit[(((v35 + 16) >> 5) & 0x3FF) + 128];
    v27[output_col] = v28;
  }
  v27[output_col + 1] = v28;
  v31 = &output_buf[1][output_col];
  if ( HIDWORD(v39) || v40 || v41 || v42 )
  {
    v33 = (_DWORD)v39 << 15;
    v34 = 6967 * v41 + 29692 * HIDWORD(v39) - 10426 * v40 - 5906 * v42;
    *v31 = sample_range_limit[((((unsigned int)(v34 + ((_DWORD)v39 << 15)) + 0x80000i64) >> 20) & 0x3FF) + 128];
    v32 = sample_range_limit[((((unsigned int)(v33 - v34) + 0x80000i64) >> 20) & 0x3FF) + 128];
  }
  else
  {
    v32 = sample_range_limit[(((v39 + 16) >> 5) & 0x3FF) + 128];
    *v31 = v32;
  }
  v31[1] = v32;
}

/*
==============
jpeg_idct_4x4
==============
*/
void jpeg_idct_4x4(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, __int16 *coef_block, unsigned __int8 **output_buf, unsigned int output_col)
{
  char *v5; 
  unsigned __int8 *sample_range_limit; 
  int v7; 
  _DWORD *dct_table; 
  __int16 *v9; 
  __int16 v10; 
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
  __int16 v22; 
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
  unsigned __int8 *v34; 
  unsigned __int8 v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  unsigned __int8 *v41; 
  unsigned __int8 v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  unsigned __int8 *v48; 
  unsigned __int8 v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  unsigned __int8 *v55; 
  unsigned __int8 v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  char v63[12]; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  char v68[12]; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  char v73[12]; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  char v78[12]; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 

  v5 = v68;
  sample_range_limit = cinfo->sample_range_limit;
  v7 = 8;
  dct_table = compptr->dct_table;
  v9 = coef_block + 16;
  do
  {
    if ( v7 != 4 )
    {
      v10 = *(v9 - 8);
      if ( v10 || *v9 || v9[8] || v9[24] || v9[32] || v9[40] )
      {
        v12 = dct_table[40] * v9[24];
        v13 = dct_table[24] * v9[8];
        v14 = dct_table[56] * v9[40];
        v15 = (*dct_table * *(v9 - 16)) << 14;
        v16 = 15137 * *v9 * dct_table[16] - 6270 * dct_table[48] * v9[32];
        v17 = v16 + v15;
        v18 = v15 - v16;
        v19 = v10 * dct_table[8];
        v20 = 8697 * v19 + 11893 * v12 - 17799 * v13 - 1730 * v14;
        v21 = 7373 * v13 + 20995 * v19 - 4926 * v12 - 4176 * v14;
        *((_DWORD *)v5 - 8) = (v17 + v21 + 2048) >> 12;
        v11 = (v18 + v20 + 2048) >> 12;
        *((_DWORD *)v5 + 8) = (v18 - v20 + 2048) >> 12;
        *((_DWORD *)v5 + 16) = (v17 - v21 + 2048) >> 12;
      }
      else
      {
        v11 = 4 * *dct_table * *(v9 - 16);
        *((_DWORD *)v5 - 8) = v11;
        *((_DWORD *)v5 + 8) = v11;
        *((_DWORD *)v5 + 16) = v11;
      }
      *(_DWORD *)v5 = v11;
    }
    if ( v7 != 5 )
    {
      v22 = *(v9 - 7);
      if ( v22 || v9[1] || v9[9] || v9[25] || v9[33] || v9[41] )
      {
        v24 = dct_table[41] * v9[25];
        v25 = dct_table[25] * v9[9];
        v26 = dct_table[57] * v9[41];
        v27 = (dct_table[1] * *(v9 - 15)) << 14;
        v28 = 15137 * dct_table[17] * v9[1] - 6270 * dct_table[49] * v9[33];
        v29 = v22 * dct_table[9];
        v30 = v28 + v27;
        v31 = v27 - v28;
        v32 = 8697 * v29 + 11893 * v24 - 17799 * v25 - 1730 * v26;
        v33 = 7373 * v25 + 20995 * v29 - 4926 * v24 - 4176 * v26;
        *((_DWORD *)v5 - 7) = (v30 + v33 + 2048) >> 12;
        v23 = (v31 + v32 + 2048) >> 12;
        *((_DWORD *)v5 + 9) = (v31 - v32 + 2048) >> 12;
        *((_DWORD *)v5 + 17) = (v30 - v33 + 2048) >> 12;
      }
      else
      {
        v23 = 4 * dct_table[1] * *(v9 - 15);
        *((_DWORD *)v5 - 7) = v23;
        *((_DWORD *)v5 + 9) = v23;
        *((_DWORD *)v5 + 17) = v23;
      }
      *((_DWORD *)v5 + 1) = v23;
    }
    v9 += 2;
    dct_table += 2;
    v5 += 8;
    v7 -= 2;
  }
  while ( v7 > 0 );
  v34 = &(*output_buf)[output_col];
  if ( *(_QWORD *)&v63[4] || v64 || v65 || v66 || v67 )
  {
    v36 = 15137 * *(_DWORD *)&v63[8] - 6270 * v66;
    v37 = v36 + (*(_DWORD *)v63 << 14);
    v38 = (*(_DWORD *)v63 << 14) - v36;
    v39 = 8697 * *(_DWORD *)&v63[4] + 11893 * v65 - 17799 * v64 - 1730 * v67;
    v40 = 20995 * *(_DWORD *)&v63[4] + 7373 * v64 - 4926 * v65 - 4176 * v67;
    *v34 = sample_range_limit[((((unsigned int)(v37 + v40) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v34[3] = sample_range_limit[((((unsigned int)(v37 - v40) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v34[1] = sample_range_limit[((((unsigned int)(v38 + v39) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v35 = sample_range_limit[((((unsigned int)(v38 - v39) + 0x40000i64) >> 19) & 0x3FF) + 128];
  }
  else
  {
    v35 = sample_range_limit[(((*(_QWORD *)v63 + 16i64) >> 5) & 0x3FF) + 128];
    *v34 = v35;
    v34[1] = v35;
    v34[3] = v35;
  }
  v34[2] = v35;
  v41 = &output_buf[1][output_col];
  if ( *(_QWORD *)&v68[4] || v69 || v70 || v71 || v72 )
  {
    v43 = 15137 * *(_DWORD *)&v68[8] - 6270 * v71;
    v44 = v43 + (*(_DWORD *)v68 << 14);
    v45 = (*(_DWORD *)v68 << 14) - v43;
    v46 = 8697 * *(_DWORD *)&v68[4] + 11893 * v70 - 17799 * v69 - 1730 * v72;
    v47 = 20995 * *(_DWORD *)&v68[4] + 7373 * v69 - 4926 * v70 - 4176 * v72;
    *v41 = sample_range_limit[((((unsigned int)(v44 + v47) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v41[3] = sample_range_limit[((((unsigned int)(v44 - v47) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v41[1] = sample_range_limit[((((unsigned int)(v45 + v46) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v41[2] = sample_range_limit[((((unsigned int)(v45 - v46) + 0x40000i64) >> 19) & 0x3FF) + 128];
  }
  else
  {
    v42 = sample_range_limit[(((*(_QWORD *)v68 + 16i64) >> 5) & 0x3FF) + 128];
    *v41 = v42;
    v41[1] = v42;
    v41[2] = v42;
    v41[3] = v42;
  }
  v48 = &output_buf[2][output_col];
  if ( *(_QWORD *)&v73[4] || v74 || v75 || v76 || v77 )
  {
    v50 = 15137 * *(_DWORD *)&v73[8] - 6270 * v76;
    v51 = v50 + (*(_DWORD *)v73 << 14);
    v52 = (*(_DWORD *)v73 << 14) - v50;
    v53 = 8697 * *(_DWORD *)&v73[4] + 11893 * v75 + -17799 * v74 - 1730 * v77;
    v54 = 20995 * *(_DWORD *)&v73[4] + 7373 * v74 - 4926 * v75 - 4176 * v77;
    *v48 = sample_range_limit[((((unsigned int)(v51 + v54) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v48[3] = sample_range_limit[((((unsigned int)(v51 - v54) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v48[1] = sample_range_limit[((((unsigned int)(v52 + v53) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v48[2] = sample_range_limit[((((unsigned int)(v52 - v53) + 0x40000i64) >> 19) & 0x3FF) + 128];
  }
  else
  {
    v49 = sample_range_limit[(((*(_QWORD *)v73 + 16i64) >> 5) & 0x3FF) + 128];
    *v48 = v49;
    v48[1] = v49;
    v48[2] = v49;
    v48[3] = v49;
  }
  v55 = &output_buf[3][output_col];
  if ( *(_QWORD *)&v78[4] || v79 || v80 || v81 || v82 )
  {
    v57 = 15137 * *(_DWORD *)&v78[8] - 6270 * v81;
    v58 = v57 + (*(_DWORD *)v78 << 14);
    v59 = (*(_DWORD *)v78 << 14) - v57;
    v60 = 8697 * *(_DWORD *)&v78[4] + 11893 * v80 + -17799 * v79 - 1730 * v82;
    v61 = 7373 * v79 + 20995 * *(_DWORD *)&v78[4] - 4926 * v80 - 4176 * v82;
    *v55 = sample_range_limit[((((unsigned int)(v58 + v61) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v55[3] = sample_range_limit[((((unsigned int)(v58 - v61) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v55[1] = sample_range_limit[((((unsigned int)(v59 + v60) + 0x40000i64) >> 19) & 0x3FF) + 128];
    v55[2] = sample_range_limit[((((unsigned int)(v59 - v60) + 0x40000i64) >> 19) & 0x3FF) + 128];
  }
  else
  {
    v56 = sample_range_limit[(((*(_QWORD *)v78 + 16i64) >> 5) & 0x3FF) + 128];
    *v55 = v56;
    v55[1] = v56;
    v55[2] = v56;
    v55[3] = v56;
  }
}

