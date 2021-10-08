/*
==============
jpeg_idct_ifast
==============
*/
void jpeg_idct_ifast(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, __int16 *coef_block, unsigned __int8 **output_buf, unsigned int output_col)
{
  char *v5; 
  _DWORD *dct_table; 
  __int16 v8; 
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
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int *v41; 
  __int16 v42; 
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
  __int64 v70; 
  char *v71; 
  __int64 i; 
  int v73; 
  unsigned __int8 *v74; 
  unsigned __int8 v75; 
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
  int v98; 
  int v99; 
  unsigned __int8 *v100; 
  unsigned __int8 v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  __int64 v128; 
  unsigned __int8 *v130; 
  char v131[256]; 

  v5 = v131;
  dct_table = compptr->dct_table;
  v130 = cinfo->sample_range_limit + 128;
  v128 = 4i64;
  do
  {
    v8 = coef_block[8];
    if ( v8 || coef_block[16] || coef_block[24] || coef_block[32] || coef_block[40] || coef_block[48] || coef_block[56] )
    {
      v15 = *dct_table * *coef_block;
      v16 = dct_table[32] * coef_block[32];
      v17 = dct_table[16] * coef_block[16];
      v18 = dct_table[48] * coef_block[48];
      v19 = v16 + v15;
      v20 = v15 - v16;
      v21 = v18 + v17;
      v22 = v18 + v17 + v19;
      v23 = 362 * (v17 - v18);
      v24 = v19 - v21;
      v25 = dct_table[40] * coef_block[40];
      v26 = (v23 >> 8) - v21;
      v27 = v8 * dct_table[8];
      v28 = dct_table[56] * coef_block[56];
      v29 = v26 + v20;
      v30 = v20 - v26;
      v31 = dct_table[24] * coef_block[24];
      v32 = v25 + v31;
      v33 = v25 - v31;
      v34 = v28 + v27;
      v35 = v28 + v27 + v32;
      v36 = v27 - v28;
      *((_DWORD *)v5 + 56) = v22 - v35;
      v37 = (473 * (v36 + v33)) >> 8;
      v38 = v37 + ((-669 * v33) >> 8) - v35;
      v39 = ((362 * (v34 - v32)) >> 8) - v38;
      *((_DWORD *)v5 + 48) = v29 - v38;
      v40 = v39 + ((277 * v36) >> 8) - v37;
      v12 = v38 + v29;
      v10 = v30 - v39;
      v13 = v35 + v22;
      v11 = v30 + v39;
      v9 = v24 - v40;
      v14 = v24 + v40;
    }
    else
    {
      v9 = *dct_table * *coef_block;
      *((_DWORD *)v5 + 48) = v9;
      v10 = v9;
      *((_DWORD *)v5 + 56) = v9;
      v11 = v9;
      v12 = v9;
      v13 = v9;
      v14 = v9;
    }
    *((_DWORD *)v5 + 32) = v14;
    *(_DWORD *)v5 = v13;
    *((_DWORD *)v5 + 8) = v12;
    *((_DWORD *)v5 + 16) = v11;
    *((_DWORD *)v5 + 40) = v10;
    v41 = (int *)(v5 + 4);
    *((_DWORD *)v5 + 24) = v9;
    v42 = coef_block[9];
    if ( v42 || coef_block[17] || coef_block[25] || coef_block[33] || coef_block[41] || coef_block[49] || coef_block[57] )
    {
      v44 = dct_table[1] * coef_block[1];
      v45 = dct_table[33] * coef_block[33];
      v46 = dct_table[17] * coef_block[17];
      v47 = dct_table[49] * coef_block[49];
      v48 = v45 + v44;
      v49 = v44 - v45;
      v50 = v47 + v46;
      v51 = v47 + v46 + v48;
      v52 = 362 * (v46 - v47);
      v53 = v48 - v50;
      v54 = dct_table[41] * coef_block[41];
      v55 = (v52 >> 8) - v50;
      v56 = v42 * dct_table[9];
      v57 = dct_table[57] * coef_block[57];
      v58 = v55 + v49;
      v59 = v49 - v55;
      v60 = dct_table[25] * coef_block[25];
      v61 = v54 + v60;
      v62 = v54 - v60;
      v63 = v57 + v56;
      v64 = v57 + v56 + v61;
      v65 = v56 - v57;
      *v41 = v64 + v51;
      v41[56] = v51 - v64;
      v66 = (473 * (v65 + v62)) >> 8;
      v67 = v66 + ((-669 * v62) >> 8) - v64;
      v68 = ((362 * (v63 - v61)) >> 8) - v67;
      v41[8] = v67 + v58;
      v69 = v68 + ((277 * v65) >> 8) - v66;
      v41[48] = v58 - v67;
      v41[16] = v68 + v59;
      v41[40] = v59 - v68;
      v41[32] = v69 + v53;
      v41[24] = v53 - v69;
    }
    else
    {
      v43 = dct_table[1] * coef_block[1];
      *v41 = v43;
      *((_DWORD *)v5 + 9) = v43;
      *((_DWORD *)v5 + 17) = v43;
      *((_DWORD *)v5 + 25) = v43;
      *((_DWORD *)v5 + 33) = v43;
      *((_DWORD *)v5 + 41) = v43;
      *((_DWORD *)v5 + 49) = v43;
      *((_DWORD *)v5 + 57) = v43;
    }
    coef_block += 2;
    v5 = (char *)(v41 + 1);
    dct_table += 2;
    --v128;
  }
  while ( v128 );
  v70 = output_col;
  v71 = v131;
  for ( i = 0i64; i < 8; i += 2i64 )
  {
    v73 = *((_DWORD *)v71 + 1);
    v74 = &output_buf[i][v70];
    if ( v73 || *((_DWORD *)v71 + 2) || *((_DWORD *)v71 + 3) || *((_DWORD *)v71 + 4) || *((_DWORD *)v71 + 5) || *((_DWORD *)v71 + 6) || *((_DWORD *)v71 + 7) )
    {
      v76 = *((_DWORD *)v71 + 4);
      v77 = *((_DWORD *)v71 + 2);
      v78 = *(_DWORD *)v71 + v76;
      v79 = *(_DWORD *)v71 - v76;
      v80 = *((_DWORD *)v71 + 6);
      v81 = v80 + v77;
      v82 = v80 + v77 + v78;
      v83 = 362 * (v77 - v80);
      v84 = *((_DWORD *)v71 + 5);
      v85 = v78 - v81;
      v86 = (v83 >> 8) - v81;
      v87 = v86 + v79;
      v88 = v79 - v86;
      v89 = *((_DWORD *)v71 + 3);
      v90 = v84 + v89;
      v91 = v84 - v89;
      v92 = *((_DWORD *)v71 + 7);
      v93 = v92 + v73 + v90;
      v126 = v73 - v92;
      v94 = v92 + v73 - v90;
      v95 = (473 * (v73 - v92 + v91)) >> 8;
      v96 = v95 + ((-669 * v91) >> 8) - v93;
      *v74 = v130[((__int64)(unsigned int)(v93 + v82) >> 5) & 0x3FF];
      v97 = ((362 * v94) >> 8) - v96;
      v98 = v97 + ((277 * v126) >> 8) - v95;
      v74[7] = v130[((__int64)(unsigned int)(v82 - v93) >> 5) & 0x3FF];
      v74[1] = v130[((__int64)(unsigned int)(v96 + v87) >> 5) & 0x3FF];
      v74[6] = v130[((__int64)(unsigned int)(v87 - v96) >> 5) & 0x3FF];
      v74[2] = v130[((__int64)(unsigned int)(v97 + v88) >> 5) & 0x3FF];
      v74[5] = v130[((__int64)(unsigned int)(v88 - v97) >> 5) & 0x3FF];
      v74[4] = v130[((__int64)(unsigned int)(v98 + v85) >> 5) & 0x3FF];
      v75 = v130[((__int64)(unsigned int)(v85 - v98) >> 5) & 0x3FF];
    }
    else
    {
      v75 = v130[((__int64)*(unsigned int *)v71 >> 5) & 0x3FF];
      *v74 = v75;
      v74[1] = v75;
      v74[2] = v75;
      v74[4] = v75;
      v74[5] = v75;
      v74[6] = v75;
      v74[7] = v75;
    }
    v74[3] = v75;
    v99 = *((_DWORD *)v71 + 9);
    v100 = &output_buf[i + 1][output_col];
    if ( v99 || *((_DWORD *)v71 + 10) || *((_DWORD *)v71 + 11) || *((_DWORD *)v71 + 12) || *((_DWORD *)v71 + 13) || *((_DWORD *)v71 + 14) || *((_DWORD *)v71 + 15) )
    {
      v102 = *((_DWORD *)v71 + 12);
      v103 = *((_DWORD *)v71 + 8);
      v104 = *((_DWORD *)v71 + 10);
      v105 = v103 + v102;
      v106 = v103 - v102;
      v107 = *((_DWORD *)v71 + 14);
      v108 = v107 + v104;
      v109 = v107 + v104 + v105;
      v110 = 362 * (v104 - v107);
      v111 = *((_DWORD *)v71 + 13);
      v112 = v105 - v108;
      v113 = (v110 >> 8) - v108;
      v114 = v113 + v106;
      v115 = v106 - v113;
      v116 = *((_DWORD *)v71 + 11);
      v117 = v111 + v116;
      v118 = v111 - v116;
      v119 = *((_DWORD *)v71 + 15);
      v120 = v119 + v99 + v117;
      v127 = v99 - v119;
      v121 = v119 + v99 - v117;
      v122 = (473 * (v99 - v119 + v118)) >> 8;
      v123 = v122 + ((-669 * v118) >> 8) - v120;
      *v100 = v130[((__int64)(unsigned int)(v120 + v109) >> 5) & 0x3FF];
      v124 = ((362 * v121) >> 8) - v123;
      v125 = v124 + ((277 * v127) >> 8) - v122;
      v100[7] = v130[((__int64)(unsigned int)(v109 - v120) >> 5) & 0x3FF];
      v100[1] = v130[((__int64)(unsigned int)(v123 + v114) >> 5) & 0x3FF];
      v100[6] = v130[((__int64)(unsigned int)(v114 - v123) >> 5) & 0x3FF];
      v100[2] = v130[((__int64)(unsigned int)(v124 + v115) >> 5) & 0x3FF];
      v100[5] = v130[((__int64)(unsigned int)(v115 - v124) >> 5) & 0x3FF];
      v100[4] = v130[((__int64)(unsigned int)(v125 + v112) >> 5) & 0x3FF];
      v100[3] = v130[((__int64)(unsigned int)(v112 - v125) >> 5) & 0x3FF];
    }
    else
    {
      v101 = v130[((__int64)*((unsigned int *)v71 + 8) >> 5) & 0x3FF];
      *v100 = v101;
      v100[1] = v101;
      v100[2] = v101;
      v100[3] = v101;
      v100[4] = v101;
      v100[5] = v101;
      v100[6] = v101;
      v100[7] = v101;
    }
    v70 = output_col;
    v71 += 64;
  }
}

