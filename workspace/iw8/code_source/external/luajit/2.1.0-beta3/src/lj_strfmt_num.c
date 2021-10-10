/*
==============
lj_strfmt_putfnum
==============
*/
SBuf *lj_strfmt_putfnum(SBuf *sb, unsigned int sf, long double n)
{
  sb->p.ptr64 = (unsigned __int64)lj_strfmt_wfnum(sb, sf, n, NULL);
  return sb;
}

/*
==============
lj_strfmt_num
==============
*/
GCstr *lj_strfmt_num(lua_State *L, const TValue *o)
{
  int v3; 
  unsigned __int64 v4; 
  char p[32]; 

  v4 = (unsigned int)lj_strfmt_wfnum(NULL, 0xF000035u, o->n, p) - (v3 + 32);
  return j_lj_str_new(L, p, v4);
}

/*
==============
lj_strfmt_wfnum
==============
*/
char *lj_strfmt_wfnum(SBuf *sb, unsigned int sf, long double n, char *p)
{
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  char *ptr64; 
  __int64 v10; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char *v17; 
  char *v18; 
  unsigned __int64 v19; 
  char *v20; 
  unsigned int v21; 
  const char *v22; 
  int v23; 
  char v24; 
  unsigned int v25; 
  unsigned int v26; 
  __int64 v27; 
  double v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  int v32; 
  unsigned int v33; 
  char v34; 
  int v35; 
  unsigned int v36; 
  char *v37; 
  char *v38; 
  unsigned __int64 v39; 
  _BYTE *v40; 
  void *v41; 
  unsigned __int64 v42; 
  _BYTE *v43; 
  __int64 v44; 
  _BYTE *v45; 
  __int64 v46; 
  _BYTE *v47; 
  __int64 v48; 
  int v49; 
  unsigned int v50; 
  char v51; 
  int v52; 
  unsigned __int64 v54; 
  int v55; 
  double v56; 
  unsigned int v57; 
  signed int v58; 
  int v59; 
  unsigned int v60; 
  __int64 v61; 
  bool v62; 
  unsigned int v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  int v66; 
  unsigned int v67; 
  int v68; 
  int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  int v73; 
  int v74; 
  unsigned int v75; 
  const char *v76; 
  int v77; 
  int v78; 
  __int64 v79; 
  int v80; 
  int v81; 
  __int64 v82; 
  unsigned int *v83; 
  unsigned int v84; 
  __int64 v85; 
  __int64 v86; 
  int v87; 
  __int64 v88; 
  int v89; 
  int v90; 
  __int64 v91; 
  unsigned int *v92; 
  unsigned int v93; 
  unsigned int v94; 
  int v95; 
  int v96; 
  __int64 v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  int v105; 
  unsigned int v106; 
  int v107; 
  unsigned int v108; 
  int v109; 
  char v110; 
  unsigned int v111; 
  char v112; 
  unsigned int v113; 
  unsigned int v114; 
  char *v115; 
  char *v116; 
  unsigned __int64 v117; 
  char *v118; 
  unsigned __int64 v119; 
  char *v120; 
  int i; 
  char *v122; 
  char *j; 
  char *v124; 
  char *v125; 
  char *v126; 
  unsigned int v127; 
  __int64 v128; 
  int v129; 
  int v130; 
  __int64 v131; 
  unsigned int *v132; 
  unsigned int v133; 
  __int64 v134; 
  unsigned int v135; 
  unsigned int v136; 
  unsigned int v137; 
  unsigned int v138; 
  unsigned int v139; 
  unsigned int v140; 
  unsigned int v141; 
  int v142; 
  unsigned int v143; 
  int v144; 
  unsigned int v145; 
  unsigned int v146; 
  unsigned int v147; 
  char v148; 
  unsigned int v149; 
  unsigned int v150; 
  char *v151; 
  char *v152; 
  unsigned __int64 v153; 
  char *v154; 
  unsigned __int64 v155; 
  __int64 v156; 
  unsigned int v157; 
  char *m; 
  char *v159; 
  char *ii; 
  char *v161; 
  unsigned int v162; 
  int v164; 
  char v165; 
  int v166; 
  int v167; 
  int k; 
  int ka; 
  int kb; 
  int kc; 
  char v173; 
  unsigned int v174; 
  int v175; 
  char v176; 
  unsigned int v177; 
  int v178; 
  int v179; 
  char v180; 
  unsigned int v181; 
  const char *v182; 
  int v183; 
  unsigned int v184; 
  unsigned int v185; 
  SBuf *sba; 
  unsigned int nd; 
  int v188; 
  int v189; 
  int v190; 
  unsigned int ref[31]; 
  char pa[8]; 
  char v193; 

  sba = sb;
  v6 = BYTE2(sf);
  v7 = sf;
  v8 = HIBYTE(sf) - 1;
  *(double *)pa = n;
  ptr64 = p;
  v10 = HIDWORD(*(_QWORD *)&n);
  if ( (HIDWORD(n) & 0x7FFFFFFFu) >= 0x7FF00000 )
  {
    v11 = 0;
    v12 = sf & 0x2000;
    if ( *(_DWORD *)pa | HIDWORD(n) & 0xFFFFF )
    {
      v13 = 7233902;
      if ( v12 )
        v13 = 5128526;
      v14 = (v7 >> 6) & 0x20;
    }
    else
    {
      v13 = 6909542;
      if ( v12 )
        v13 = 4804166;
      if ( n >= 0.0 )
      {
        if ( (v7 & 0x200) != 0 )
        {
          v14 = 43;
        }
        else
        {
          v14 = 0;
          if ( (v7 & 0x800) != 0 )
            v14 = 32;
        }
      }
      else
      {
        v14 = 45;
      }
    }
    v164 = v14;
    LOBYTE(v11) = v14 != 0;
    v15 = v11 + 3;
    if ( !p )
    {
      v16 = v15;
      if ( v6 > v15 )
        v16 = v6;
      if ( v16 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
      {
        ptr64 = (char *)sb->p.ptr64;
      }
      else
      {
        v17 = j_lj_buf_more2(sb, v16);
        v14 = v164;
        ptr64 = v17;
      }
      LOWORD(v7) = sf;
    }
    if ( (v7 & 0x100) == 0 )
    {
      if ( v6 > v15 )
      {
        v18 = ptr64;
        v19 = v6 - v15;
        ptr64 += v19;
        memset(v18, 32, v19);
        do
        {
          --v6;
          --v19;
        }
        while ( v19 );
      }
      --v6;
    }
    if ( v14 )
      *ptr64++ = v14;
    v20 = ptr64 + 3;
    *ptr64 = BYTE2(v13);
    ptr64[1] = BYTE1(v13);
    ptr64[2] = v13;
    goto LABEL_275;
  }
  v21 = sf & 0x30;
  if ( !v21 )
  {
    v22 = "0123456789abcdefpx";
    if ( (v7 & 0x2000) != 0 )
      v22 = "0123456789ABCDEFPX";
    v23 = (*(_DWORD *)&pa[4] >> 20) & 0x7FF;
    v182 = v22;
    if ( *(int *)&pa[4] >= 0 )
    {
      if ( (v7 & 0x200) != 0 )
      {
        v24 = 43;
      }
      else
      {
        v24 = 0;
        if ( (v7 & 0x800) != 0 )
          v24 = 32;
      }
    }
    else
    {
      v24 = 45;
    }
    v25 = *(_DWORD *)pa;
    v26 = *(_DWORD *)&pa[4] & 0xFFFFF;
    v165 = v24;
    *(_DWORD *)&pa[4] &= 0xFFFFFu;
    if ( v23 )
    {
      v26 |= 0x100000u;
      *(_DWORD *)&pa[4] = v26;
      v23 -= 1023;
      LODWORD(v27) = v26;
    }
    else
    {
      LODWORD(v27) = v26;
      if ( *(_DWORD *)pa | v26 )
      {
        if ( v26 )
        {
          _BitScanReverse((unsigned int *)&v30, v26);
          v31 = 20;
        }
        else
        {
          _BitScanReverse((unsigned int *)&v30, *(unsigned int *)pa);
          v31 = 52;
        }
        v32 = v31 - v30;
        *(_QWORD *)&v28 = *(_QWORD *)pa << v32;
        v23 = -1022 - v32;
        *(double *)pa = v28;
        v26 = HIDWORD(v28);
        v25 = LODWORD(v28);
        v27 = HIDWORD(*(_QWORD *)&v28);
        goto LABEL_41;
      }
    }
    v28 = *(double *)pa;
LABEL_41:
    if ( (int)v8 >= 0 )
    {
      if ( (unsigned int)v8 < 0xD )
      {
        *(_QWORD *)&v28 += 1i64 << (51 - 4 * (unsigned __int8)v8);
        *(double *)pa = v28;
        v26 = HIDWORD(v28);
      }
    }
    else if ( v25 )
    {
      _BitScanForward(&v29, v25);
      v8 = 13 - (v29 >> 2);
    }
    else
    {
      _BitScanForward(&v33, v27 | 0x100000);
      v8 = 5 - (v33 >> 2);
    }
    v34 = 45;
    if ( v23 >= 0 )
      v34 = 43;
    v173 = v34;
    k = v8 | sf & 0x1000;
    v177 = abs32(v23);
    _BitScanReverse((unsigned int *)&v35, v177 | 1);
    v15 = v8 + (v177 > ndigits_dec_threshold[((unsigned int)(77 * v35) >> 8) + 1]) + ((unsigned int)(77 * v35) >> 8) + 1 + (k != 0) + (v24 != 0) + 5;
    if ( !ptr64 )
    {
      v36 = v8 + (v177 > ndigits_dec_threshold[((unsigned int)(77 * v35) >> 8) + 1]) + ((unsigned int)(77 * v35) >> 8) + 1 + (k != 0) + (v24 != 0) + 5;
      if ( v6 > v15 )
        v36 = v6;
      if ( v36 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
      {
        ptr64 = (char *)sba->p.ptr64;
      }
      else
      {
        v37 = j_lj_buf_more2(sba, v36);
        v24 = v165;
        ptr64 = v37;
        v22 = v182;
      }
    }
    if ( (sf & 0x500) == 0 )
    {
      if ( v6 > v15 )
      {
        v38 = ptr64;
        v39 = v6 - v15;
        ptr64 += v39;
        memset(v38, 32, v39);
        do
        {
          --v6;
          --v39;
        }
        while ( v39 );
      }
      --v6;
    }
    if ( v24 )
      *ptr64++ = v24;
    *ptr64 = 48;
    ptr64[1] = v22[17];
    v40 = ptr64 + 2;
    if ( (sf & 0x500) == 1024 )
    {
      if ( v6 > v15 )
      {
        v41 = v40;
        v42 = v6 - v15;
        v40 += v42;
        memset(v41, 48, v42);
        do
        {
          --v6;
          --v42;
        }
        while ( v42 );
      }
      --v6;
    }
    v43 = v40 + 1;
    *v40 = (v26 >> 20) + 48;
    if ( k )
    {
      *v43 = 46;
      v44 = (__int64)&v43[v8 + 1];
      if ( (unsigned int)v8 >= 0xD )
      {
        if ( (unsigned int)v8 > 0xD )
        {
          v45 = &v43[v8];
          v46 = (unsigned int)(v8 - 13);
          do
          {
            LODWORD(v8) = v8 - 1;
            *v45-- = 48;
            --v46;
          }
          while ( v46 );
        }
      }
      else
      {
        *(_QWORD *)&v28 >>= 4 * (13 - (unsigned __int8)v8);
      }
      if ( (_DWORD)v8 )
      {
        v47 = &v43[(unsigned int)v8];
        do
        {
          --v47;
          v48 = LOBYTE(v28) & 0xF;
          *(_QWORD *)&v28 >>= 4;
          v47[1] = v22[v48];
          LODWORD(v8) = v8 - 1;
        }
        while ( (_DWORD)v8 );
      }
      v43 = (_BYTE *)v44;
    }
    *v43 = v22[16];
    v43[1] = v173;
    v20 = j_lj_strfmt_wint(v43 + 2, v177);
    goto LABEL_275;
  }
  v49 = 0;
  v178 = *(_DWORD *)&pa[4];
  v50 = (*(_DWORD *)&pa[4] >> 20) & 0x7FF;
  v166 = 0;
  if ( *(int *)&pa[4] >= 0 )
  {
    if ( (v7 & 0x200) != 0 )
    {
      v176 = 43;
    }
    else
    {
      v51 = 0;
      if ( (v7 & 0x800) != 0 )
        v51 = 32;
      v176 = v51;
    }
  }
  else
  {
    v176 = 45;
  }
  v52 = (((int)v8 >> 31) & 7) + v8;
  if ( v21 == 48 )
    v52 = ((v52 - 1) >> 31) ^ (v52 - 1);
  v179 = v7 & 0x10;
  if ( (v7 & 0x10) == 0 )
    goto LABEL_99;
  if ( (unsigned int)v52 >= 0xE )
    goto LABEL_99;
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  if ( n == *(double *)&_XMM0 )
    goto LABEL_99;
  v54 = (unsigned __int64)v50 >> 6;
  v55 = rescale_e[v54];
  v166 = v55;
  if ( !rescale_e[v54] )
    goto LABEL_99;
  v56 = n * rescale_n[v54];
  *(double *)pa = v56;
  if ( !v50 )
  {
    *(double *)pa = v56 * 1.0e10;
    v166 = v55 - 10;
  }
  *(_QWORD *)pa -= 2i64;
  v57 = *(_DWORD *)pa;
  v178 = *(_DWORD *)&pa[4];
  v58 = ((*(_DWORD *)&pa[4] >> 20) & 0x7FF) - 1075;
  v59 = *(_DWORD *)&pa[4] & 0xFFFFF | 0x100000;
$load_t_lo:
  v63 = 0;
  nd = (v57 >> 29) | (8 * v59);
  LODWORD(v64) = v57 & 0x1FFFFFFF;
  do
  {
    v65 = (unsigned int)v64 | ((unsigned __int64)*(&nd + v63) << 29);
    v64 = v65 / 0x3B9ACA00;
    *(&nd + v63++) = v65 % 0x3B9ACA00;
  }
  while ( !v63 );
  v66 = v188;
  v7 = sf;
  LODWORD(v61) = 0;
  if ( (_DWORD)v64 )
    v66 = v65 / 0x3B9ACA00;
  LOBYTE(v61) = (_DWORD)v64 != 0;
  v188 = v66;
  while ( 1 )
  {
    if ( v58 < 0 )
    {
      v67 = nd_div2k(&nd, v61, -v58, v7);
      ka = v67;
      if ( (_DWORD)v61 && !*(&nd + (unsigned int)v61) )
        LODWORD(v61) = v61 - 1;
    }
    else
    {
      LODWORD(v61) = nd_mul2k(&nd, v61, v58, 0, v7);
      v67 = 0;
      ka = 0;
    }
    if ( !v179 )
      break;
    v68 = -1;
    if ( v67 && !*(&nd + (unsigned int)v61) )
    {
      LODWORD(v61) = 64;
      do
        v61 = (unsigned int)(v61 - 1);
      while ( !*(&nd + v61) );
      v68 = -577;
    }
    v69 = v166;
    v70 = *(&nd + (unsigned int)v61);
    _BitScanReverse(&v71, v70 | 1);
    v72 = ((77 * v71) >> 8) + 1 + (v70 > ndigits_dec_threshold[((77 * v71) >> 8) + 1]);
    v174 = v72;
    v73 = v61 + v72 + 8 * v61 + v68;
    v183 = v73;
    if ( !v166 )
      goto LABEL_141;
    if ( *(_DWORD *)pa < 0xFFFFFFFE || (v74 = 71, (~v178 & 0xFFFFF) != 0) )
      v74 = 70;
    v75 = v74 + v58;
    v76 = &four_ulp_m_e[2 * v74 + 2 * v58];
    if ( v75 > 0x7F )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt_num.c", 424, "0 <= eidx && eidx < 128") )
      {
        __debugbreak();
        v70 = *(&nd + (unsigned int)v61);
      }
      v72 = v174;
    }
    v77 = *(unsigned __int8 *)v76;
    ref[0] = v70;
    v78 = v76[1];
    v190 = *(&nd + (((_BYTE)v61 - 1) & 0x3F));
    v189 = *(&nd + (((_BYTE)v61 - 2) & 0x3F));
    if ( v78 < 0 )
    {
      v81 = (v78 - 8) / 9;
      v79 = (unsigned int)(v81 + 64);
      v80 = 9 * v81;
    }
    else
    {
      v79 = v78 / 9u;
      v80 = 9 * v79;
    }
    v82 = v78 - v80;
    v83 = &nd + v79;
    v84 = *v83 + v77 * (ndigits_dec_threshold[v82] + 1);
    if ( v84 < 0x3B9ACA00 )
    {
LABEL_136:
      *(&nd + v79) = v84;
    }
    else
    {
      while ( 1 )
      {
        *v83 = v84 - 1000000000;
        if ( (_DWORD)v79 == (_DWORD)v61 )
          break;
        v79 = ((_BYTE)v79 + 1) & 0x3F;
        v83 = &nd + v79;
        v84 = *v83 + 1;
        if ( v84 < 0x3B9ACA00 )
          goto LABEL_136;
      }
      *(&nd + (((_BYTE)v61 + 1) & 0x3F)) = 1;
    }
    if ( nd_similar(&nd, v61, ref, v72, v52 + 1) )
    {
      v73 = v183;
      v72 = v174;
      v69 = v166;
LABEL_141:
      LODWORD(v85) = ka;
      if ( v52 - v73 < 9 * (-ka & 0x3F) )
      {
        LODWORD(v86) = v61;
        v87 = v73 - v52 - 1;
        if ( v87 < 0 )
        {
          v90 = (v73 - v52 - 9) / 9;
          v88 = (unsigned int)(v90 + 64);
          v89 = 9 * v90;
        }
        else
        {
          v88 = v87 / 9u;
          v89 = 9 * v88;
        }
        v91 = v87 - v89;
        v92 = &nd + v88;
        v93 = *v92 + 5 * ndigits_dec_threshold[v91] + 5;
        if ( v93 < 0x3B9ACA00 )
        {
LABEL_148:
          *(&nd + v88) = v93;
        }
        else
        {
          while ( 1 )
          {
            *v92 = v93 - 1000000000;
            if ( (_DWORD)v88 == (_DWORD)v61 )
              break;
            v88 = ((_BYTE)v88 + 1) & 0x3F;
            v92 = &nd + v88;
            v93 = *v92 + 1;
            if ( v93 < 0x3B9ACA00 )
              goto LABEL_148;
          }
          v86 = ((_BYTE)v61 + 1) & 0x3F;
          *(&nd + v86) = 1;
        }
        LODWORD(v61) = v86;
        _BitScanReverse(&v94, *(&nd + (unsigned int)v86) | 1);
        v73 += v72 != ((77 * v94) >> 8) + 1 + (*(&nd + (unsigned int)v86) > ndigits_dec_threshold[((77 * v94) >> 8) + 1]);
      }
      LOWORD(v7) = sf;
      v95 = v73 + v69;
      v167 = v73 + v69;
      if ( (sf & 0x20) != 0 )
      {
        if ( v52 >= v95 && v95 >= -4 )
        {
          v52 -= v95;
          v96 = 0;
          if ( v95 >= 0 )
            v96 = v61;
          LODWORD(v61) = v96;
          goto $g_format_like_f;
        }
        if ( (sf & 0x1000) == 0 && v52 && v6 > 5 )
        {
          if ( v52 < (((_BYTE)v61 - (_BYTE)ka) & 0x3F) + v72 + 8 * (((_BYTE)v61 - (_BYTE)ka) & 0x3F) - 1 )
            LODWORD(v85) = ((_BYTE)v61 - (unsigned __int8)((int)(v52 - v72 + 9) / 9)) & 0x3F;
          else
            v52 = (((_BYTE)v61 - (_BYTE)ka) & 0x3F) + v72 + 8 * (((_BYTE)v61 - (_BYTE)ka) & 0x3F) - 1;
          LODWORD(v97) = v52 - 9 * (((_BYTE)v61 - (_BYTE)v85) & 0x3F) - v72 + 10;
          lj_strfmt_wuint9(pa, *(&nd + (unsigned int)v85));
          while ( v52 )
          {
            v97 = (unsigned int)(v97 - 1);
            if ( pa[v97] != 48 )
              break;
            --v52;
            if ( !(_DWORD)v97 )
            {
              if ( (_DWORD)v85 == (_DWORD)v61 )
              {
                v52 = 0;
                break;
              }
              v85 = (unsigned int)(v85 + 1);
              v98 = *(&nd + v85);
              v99 = v98 / 0x2710;
              v98 %= 0x2710u;
              pa[0] = v99 / 0x2710 + 48;
              v99 %= 0x2710u;
              v100 = (8389 * v99) >> 23;
              pa[1] = v100 + 48;
              v101 = -1000 * v100 + v99;
              v102 = (41 * v101) >> 12;
              pa[2] = v102 + 48;
              v103 = -100 * v102 + v101;
              pa[3] = ((103 * v103) >> 10) + 48;
              pa[4] = v103 - 10 * ((103 * v103) >> 10) + 48;
              LODWORD(v97) = 9;
              v104 = (8389 * v98) >> 23;
              pa[5] = v104 + 48;
              v105 = -1000 * v104 + v98;
              v106 = (unsigned int)(41 * v105) >> 12;
              pa[6] = v106 + 48;
              v107 = -100 * v106 + v105;
              v108 = (unsigned int)(103 * v107) >> 10;
              pa[7] = v108 + 48;
              v193 = v107 - 10 * v108 + 48;
            }
          }
          v95 = v167;
        }
      }
      v109 = -v95;
      v110 = 45;
      if ( v95 >= 0 )
        v110 = 43;
      if ( v95 >= 0 )
        v109 = v95;
      v180 = v110;
      kb = v109;
      v184 = v52 | sf & 0x1000;
      _BitScanReverse(&v111, v109 | 1);
      v112 = v176;
      LOBYTE(v49) = v109 < 10;
      v15 = v52 + (v184 != 0) + (v109 > ndigits_dec_threshold[((77 * v111) >> 8) + 1]) + ((77 * v111) >> 8) + 1 + (v176 != 0) + 3 + v49;
      if ( !ptr64 )
      {
        v113 = v15;
        if ( v6 > v15 )
          v113 = v6;
        v114 = v113 + 5;
        if ( v114 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
        {
          ptr64 = (char *)sba->p.ptr64;
        }
        else
        {
          v115 = j_lj_buf_more2(sba, v114);
          v112 = v176;
          ptr64 = v115;
        }
      }
      if ( (sf & 0x500) == 0 )
      {
        if ( v6 > v15 )
        {
          v116 = ptr64;
          v117 = v6 - v15;
          ptr64 += v117;
          memset(v116, 32, v117);
          do
          {
            --v6;
            --v117;
          }
          while ( v117 );
        }
        --v6;
      }
      if ( v112 )
        *ptr64++ = v112;
      if ( (sf & 0x500) == 1024 )
      {
        if ( v6 > v15 )
        {
          v118 = ptr64;
          v119 = v6 - v15;
          ptr64 += v119;
          memset(v118, 48, v119);
          do
          {
            --v6;
            --v119;
          }
          while ( v119 );
        }
        --v6;
      }
      v120 = j_lj_strfmt_wint(ptr64 + 1, *(&nd + (unsigned int)v61));
      *ptr64 = ptr64[1];
      if ( v184 )
      {
        ptr64[1] = 46;
        for ( i = v52 + (_DWORD)ptr64 - (_DWORD)v120 + 2; i > 0; v120 = lj_strfmt_wuint9(v120, *(&nd + (unsigned int)v61)) )
        {
          if ( (_DWORD)v61 == (_DWORD)v85 )
            break;
          LODWORD(v61) = ((_BYTE)v61 - 1) & 0x3F;
          i -= 9;
        }
        if ( (sf & 0x1020) == 32 )
        {
          v122 = &v120[i & (unsigned __int64)((__int64)i >> 31)];
          for ( j = v122 - 1; *j == 48; --j )
            v122 = j;
          v124 = v122 - 1;
          if ( *(v122 - 1) != 46 )
            v124 = v122;
          v125 = v124;
        }
        else
        {
          if ( i > 0 )
          {
            memset(v120, 48, (unsigned int)i);
            v120 += (unsigned int)i;
            do
              --i;
            while ( i > 0 );
          }
          v125 = &v120[i];
        }
      }
      else
      {
        v125 = ptr64 + 1;
      }
      v126 = v125 + 2;
      *v125 = ~BYTE1(sf) & 0x20 | 0x45;
      v125[1] = v180;
      if ( kb < 10 )
      {
        *v126 = 48;
        v126 = v125 + 3;
      }
      v20 = j_lj_strfmt_wint(v126, kb);
      goto LABEL_275;
    }
    v7 = sf;
    *(double *)pa = n;
    v10 = HIDWORD(*(_QWORD *)&n);
    v166 = 0;
    v50 = (HIDWORD(n) >> 20) & 0x7FF;
    v178 = *(_DWORD *)&pa[4];
LABEL_99:
    v59 = v10 & 0xFFFFF;
    v60 = v50;
    nd = v59;
    if ( v50 )
      nd = v59 | 0x100000;
    else
      v50 = 1;
    LODWORD(v61) = 0;
    v62 = v60 == 0;
    v57 = *(_DWORD *)pa;
    if ( !v62 )
      v59 |= 0x100000u;
    v58 = v50 - 1043;
    if ( *(_DWORD *)pa )
    {
      v58 -= 32;
      goto $load_t_lo;
    }
  }
  LODWORD(v85) = ka;
  if ( v52 < 9 * (-ka & 0x3Fu) )
  {
    v127 = ~v52;
    if ( v52 >= 0 )
    {
      v130 = (-v52 - 9) / 9;
      v128 = (unsigned int)(v130 + 64);
      v129 = 9 * v130;
    }
    else
    {
      v128 = v127 / 9;
      v129 = 9 * v128;
    }
    v131 = (int)(v127 - v129);
    v132 = &nd + v128;
    v133 = *v132 + 5 * ndigits_dec_threshold[v131] + 5;
    if ( v133 < 0x3B9ACA00 )
    {
LABEL_219:
      *(&nd + v128) = v133;
    }
    else
    {
      while ( 1 )
      {
        *v132 = v133 - 1000000000;
        if ( (_DWORD)v128 == (_DWORD)v61 )
          break;
        v128 = ((_BYTE)v128 + 1) & 0x3F;
        v132 = &nd + v128;
        v133 = *v132 + 1;
        if ( v133 < 0x3B9ACA00 )
          goto LABEL_219;
      }
      LODWORD(v61) = ((_BYTE)v61 + 1) & 0x3F;
      *(&nd + (unsigned int)v61) = 1;
    }
    LOWORD(v7) = sf;
  }
$g_format_like_f:
  v175 = v7 & 0x1010;
  if ( v175 == 16 && v52 && v6 )
  {
    if ( (_DWORD)v85 )
    {
      if ( v52 < (unsigned int)(576 - 9 * v85) )
        LODWORD(v85) = 64 - (v52 + 8) / 9u;
      else
        v52 = 576 - 9 * v85;
      LODWORD(v134) = v85 + v52 + 8 * v85 - 567;
      lj_strfmt_wuint9(pa, *(&nd + (unsigned int)v85));
      while ( v52 )
      {
        v134 = (unsigned int)(v134 - 1);
        if ( pa[v134] != 48 )
          break;
        --v52;
        if ( !(_DWORD)v134 )
        {
          if ( (_DWORD)v85 == 63 )
          {
            v52 = 0;
            break;
          }
          v85 = (unsigned int)(v85 + 1);
          v135 = *(&nd + v85);
          v136 = v135 / 0x2710;
          v135 %= 0x2710u;
          pa[0] = v136 / 0x2710 + 48;
          v136 %= 0x2710u;
          v137 = (8389 * v136) >> 23;
          pa[1] = v137 + 48;
          v138 = -1000 * v137 + v136;
          v139 = (41 * v138) >> 12;
          pa[2] = v139 + 48;
          v140 = -100 * v139 + v138;
          pa[3] = ((103 * v140) >> 10) + 48;
          pa[4] = v140 - 10 * ((103 * v140) >> 10) + 48;
          LODWORD(v134) = 9;
          v141 = (8389 * v135) >> 23;
          pa[5] = v141 + 48;
          v142 = -1000 * v141 + v135;
          v143 = (unsigned int)(41 * v142) >> 12;
          pa[6] = v143 + 48;
          v144 = -100 * v143 + v142;
          v145 = (unsigned int)(103 * v144) >> 10;
          pa[7] = v145 + 48;
          v193 = v144 - 10 * v145 + 48;
        }
      }
      LOWORD(v7) = sf;
    }
    else
    {
      v52 = 0;
    }
  }
  v146 = *(&nd + (unsigned int)v61);
  *(_QWORD *)pa = &nd + (unsigned int)v61;
  kc = v52 | v7 & 0x1000;
  v185 = v146;
  _BitScanReverse(&v147, v146 | 1);
  v148 = v176;
  LOBYTE(v49) = v176 != 0;
  v15 = v52 + (kc != 0) + (v146 > ndigits_dec_threshold[((77 * v147) >> 8) + 1]) + ((77 * v147) >> 8) + 1 + v49 + 9 * v61;
  v181 = v15;
  if ( !ptr64 )
  {
    v149 = v15;
    if ( v6 > v15 )
      v149 = v6;
    v150 = v149 + 8;
    if ( v150 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
    {
      ptr64 = (char *)sba->p.ptr64;
    }
    else
    {
      v151 = j_lj_buf_more2(sba, v150);
      v146 = v185;
      ptr64 = v151;
    }
  }
  if ( (sf & 0x500) == 0 )
  {
    if ( v6 > v15 )
    {
      v152 = ptr64;
      v153 = v6 - v15;
      ptr64 += v153;
      memset(v152, 32, v153);
      do
      {
        --v6;
        --v153;
      }
      while ( v153 );
      v148 = v176;
    }
    --v6;
  }
  if ( v148 )
    *ptr64++ = v148;
  if ( (sf & 0x500) == 1024 )
  {
    if ( v6 > v15 )
    {
      v154 = ptr64;
      v155 = v6 - v15;
      ptr64 += v155;
      memset(v154, 48, v155);
      do
      {
        --v6;
        --v155;
      }
      while ( v155 );
    }
    --v6;
  }
  v20 = j_lj_strfmt_wint(ptr64, v146);
  if ( (_DWORD)v61 )
  {
    v156 = *(_QWORD *)pa;
    do
    {
      v157 = *(_DWORD *)(v156 - 4);
      v156 -= 4i64;
      v20 = lj_strfmt_wuint9(v20, v157);
      LODWORD(v61) = v61 - 1;
    }
    while ( (_DWORD)v61 );
    v15 = v181;
  }
  if ( kc )
  {
    *v20 = 46;
    for ( m = v20 + 1; v52 > 0; m = lj_strfmt_wuint9(m, *(&nd + (unsigned int)v61)) )
    {
      if ( (_DWORD)v61 == (_DWORD)v85 )
        break;
      LODWORD(v61) = ((_BYTE)v61 - 1) & 0x3F;
      v52 -= 9;
    }
    if ( v175 == 16 )
    {
      v159 = &m[v52 & (unsigned __int64)((__int64)v52 >> 31)];
      for ( ii = v159 - 1; *ii == 48; --ii )
        v159 = ii;
      v161 = v159 - 1;
      if ( *(v159 - 1) != 46 )
        v161 = v159;
      v20 = v161;
    }
    else
    {
      if ( v52 > 0 )
      {
        memset(m, 48, (unsigned int)v52);
        m += (unsigned int)v52;
        do
          --v52;
        while ( v52 > 0 );
      }
      v20 = &m[v52];
    }
  }
LABEL_275:
  if ( (sf & 0x100) == 0 || v6 <= v15 )
    return v20;
  v162 = v6 - v15;
  memset(v20, 32, v162);
  return &v20[v162];
}

/*
==============
lj_strfmt_wuint9
==============
*/
char *lj_strfmt_wuint9(char *p, unsigned int u)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char *result; 

  v4 = u / 0x2710;
  v5 = -10000 * (u / 0x2710);
  v6 = u / 0x2710 / 0x2710;
  *p = v6 + 48;
  v7 = v5 + u;
  v8 = -10000 * v6 + v4;
  v9 = (8389 * v8) >> 23;
  p[1] = v9 + 48;
  v10 = -1000 * v9 + v8;
  v11 = (41 * v10) >> 12;
  p[2] = v11 + 48;
  v12 = -100 * v11 + v10;
  p[3] = ((103 * v12) >> 10) + 48;
  p[4] = v12 - 10 * ((103 * v12) >> 10) + 48;
  v13 = (8389 * v7) >> 23;
  p[5] = v13 + 48;
  v14 = -1000 * v13 + v7;
  v15 = (41 * v14) >> 12;
  p[6] = v15 + 48;
  v16 = -100 * v15 + v14;
  p[7] = ((103 * v16) >> 10) + 48;
  result = p + 9;
  p[8] = v16 - 10 * ((103 * v16) >> 10) + 48;
  return result;
}

/*
==============
nd_div2k
==============
*/
__int64 nd_div2k(unsigned int *nd, unsigned int ndhi, unsigned int k, unsigned int sf)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  signed int v13; 
  __int128 v17; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  int i; 
  unsigned int v25; 
  unsigned int v26; 

  v4 = 0;
  v5 = ndhi;
  v6 = -1;
  v7 = k;
  v9 = -1;
  if ( !ndhi )
  {
    v10 = *nd;
    if ( !*nd )
      return 0i64;
    _BitScanForward(&v11, v10);
    if ( v11 >= k )
    {
      *nd = v10 >> k;
      return 0i64;
    }
    *nd = v10 >> v11;
    v7 = k - v11;
  }
  if ( v7 > 0x12 )
  {
    v13 = HIBYTE(sf) - 1;
    if ( (sf & 0x30) == 32 )
    {
      v9 = 63 - v13 / 9;
    }
    else
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, eax }
      *((_QWORD *)&v17 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v17 = *(double *)&_XMM0 * -0.3010299956639811;
      _XMM1 = v17;
      __asm { vcvttsd2si eax, xmm1 }
      v9 = (int)(1 - _EAX - HIBYTE(sf)) / 9 + 62;
      v6 = ndhi - v13 / 8 + 61;
    }
  }
  if ( v7 >= 9 )
  {
    while ( 1 )
    {
      LOBYTE(v19) = v5;
      v20 = 1953125 * (nd[v5] & 0x1FF);
      nd[v5] >>= 9;
      if ( (_DWORD)v5 != v4 )
      {
        do
        {
          v19 = ((_BYTE)v19 - 1) & 0x3F;
          v21 = v20 + (nd[v19] >> 9);
          v20 = 1953125 * (nd[v19] & 0x1FF);
          nd[v19] = v21;
        }
        while ( (_DWORD)v19 != v4 );
      }
      if ( v4 != v9 && v4 != v6 )
        break;
      if ( !nd[v5] )
      {
        if ( (_DWORD)v5 == v4 )
          return v4;
LABEL_22:
        v5 = ((_BYTE)v5 - 1) & 0x3F;
        --v6;
      }
LABEL_23:
      v7 -= 9;
      if ( v7 < 9 )
        goto LABEL_24;
    }
    if ( v20 )
    {
      v4 = ((_BYTE)v4 - 1) & 0x3F;
      nd[v4] = v20;
    }
    if ( nd[v5] )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_24:
  if ( v7 )
  {
    v22 = (1 << v7) - 1;
    v23 = v22 & nd[v5];
    nd[v5] >>= v7;
    for ( i = (1000000000 >> v7) * v23; (_DWORD)v5 != v4; i = (1000000000 >> v7) * v26 )
    {
      v5 = ((_BYTE)v5 - 1) & 0x3F;
      v25 = i + (nd[v5] >> v7);
      v26 = v22 & nd[v5];
      nd[v5] = v25;
    }
    if ( i )
    {
      v4 = ((_BYTE)v4 - 1) & 0x3F;
      nd[v4] = i;
    }
  }
  return v4;
}

/*
==============
nd_mul2k
==============
*/
__int64 nd_mul2k(unsigned int *nd, unsigned int ndhi, unsigned int k, unsigned int carry_in, unsigned int sf)
{
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int i; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned __int64 v16; 

  v5 = 0i64;
  LODWORD(v6) = carry_in;
  v7 = k;
  LODWORD(v8) = ndhi;
  v10 = 1;
  if ( k > 0x3A && (sf & 0x30) != 32 )
    v10 = ndhi - ((unsigned int)(HIBYTE(sf) + 16) >> 3);
  if ( k >= 0x1D )
  {
    v11 = k / 0x1D;
    do
    {
      for ( i = v5; i <= (unsigned int)v8; nd[v13] = v14 % 0x3B9ACA00 )
      {
        v13 = i++;
        v14 = (unsigned int)v6 | ((unsigned __int64)nd[v13] << 29);
        v6 = v14 / 0x3B9ACA00;
      }
      if ( (_DWORD)v6 )
      {
        v8 = (unsigned int)(v8 + 1);
        v15 = v10++;
        nd[v8] = v6;
        LODWORD(v6) = 0;
        if ( v15 == (_DWORD)v5 )
          v5 = (unsigned int)(v5 + 1);
      }
      v7 -= 29;
      --v11;
    }
    while ( v11 );
  }
  if ( v7 )
  {
    for ( ; (unsigned int)v5 <= (unsigned int)v8; v5 = (unsigned int)(v5 + 1) )
    {
      v16 = (unsigned int)v6 | ((unsigned __int64)nd[v5] << v7);
      v6 = v16 / 0x3B9ACA00;
      nd[v5] = v16 % 0x3B9ACA00;
    }
    if ( (_DWORD)v6 )
    {
      LODWORD(v8) = v8 + 1;
      nd[(unsigned int)v8] = v6;
    }
  }
  return (unsigned int)v8;
}

/*
==============
nd_similar
==============
*/
__int64 nd_similar(unsigned int *nd, unsigned int ndhi, unsigned int *ref, unsigned int hilen, unsigned int prec)
{
  unsigned int *v5; 
  __int64 v6; 
  __int64 v8; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  char Buf2[16]; 
  char Buf1[16]; 

  v5 = ref;
  v6 = ndhi;
  if ( hilen > prec )
  {
    v8 = 9 - hilen + prec;
    goto LABEL_8;
  }
  if ( nd[ndhi] != *ref )
    return 0i64;
  v8 = prec - hilen;
  v5 = ref - 1;
  v6 = ((_BYTE)ndhi - 1) & 0x3F;
  if ( (unsigned int)v8 >= 9 )
  {
    if ( nd[v6] == *v5 )
    {
      v8 = (unsigned int)(v8 - 9);
      v5 = ref - 2;
      v6 = ((_BYTE)v6 - 1) & 0x3F;
LABEL_8:
      if ( (unsigned int)v8 >= 9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt_num.c", 260, "prec < 9") )
        __debugbreak();
      goto LABEL_11;
    }
    return 0i64;
  }
LABEL_11:
  v10 = nd[v6];
  v11 = v10 / 0x2710;
  v10 %= 0x2710u;
  Buf1[0] = v11 / 0x2710 + 48;
  v11 %= 0x2710u;
  v12 = (8389 * v11) >> 23;
  Buf1[1] = v12 + 48;
  v13 = -1000 * v12 + v11;
  v14 = (41 * v13) >> 12;
  Buf1[2] = v14 + 48;
  v15 = -100 * v14 + v13;
  Buf1[3] = ((103 * v15) >> 10) + 48;
  Buf1[4] = v15 - 10 * ((103 * v15) >> 10) + 48;
  v16 = (8389 * v10) >> 23;
  Buf1[5] = v16 + 48;
  v17 = -1000 * v16 + v10;
  v18 = (41 * v17) >> 12;
  Buf1[6] = v18 + 48;
  v19 = -100 * v18 + v17;
  LOBYTE(v18) = (103 * v19) >> 10;
  Buf1[7] = v18 + 48;
  Buf1[8] = v19 - 10 * v18 + 48;
  v20 = *v5;
  v21 = *v5 / 0x2710;
  Buf2[0] = v21 / 0x2710 + 48;
  v22 = -10000 * v21 + v20;
  v21 %= 0x2710u;
  v23 = (8389 * v21) >> 23;
  Buf2[1] = v23 + 48;
  v24 = -1000 * v23 + v21;
  v25 = (41 * v24) >> 12;
  Buf2[2] = v25 + 48;
  v26 = -100 * v25 + v24;
  Buf2[3] = ((103 * v26) >> 10) + 48;
  Buf2[4] = v26 - 10 * ((103 * v26) >> 10) + 48;
  v27 = (8389 * v22) >> 23;
  Buf2[5] = v27 + 48;
  v28 = -1000 * v27 + v22;
  v29 = (41 * v28) >> 12;
  Buf2[6] = v29 + 48;
  v30 = -100 * v29 + v28;
  v31 = (103 * v30) >> 10;
  Buf2[7] = v31 + 48;
  Buf2[8] = v30 - 10 * v31 + 48;
  v32 = memcmp_0(Buf1, Buf2, (unsigned int)v8);
  v33 = 0;
  if ( !v32 && Buf1[v8] < 53 == Buf2[v8] < 53 )
    return 1;
  return v33;
}

