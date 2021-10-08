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
  int v4; 
  unsigned __int64 v5; 
  char p[32]; 

  __asm { vmovsd  xmm2, qword ptr [rdx]; n }
  v5 = (unsigned int)lj_strfmt_wfnum(NULL, 0xF000035u, *(long double *)&_XMM2, p) - (v4 + 32);
  return j_lj_str_new(L, p, v5);
}

/*
==============
lj_strfmt_wfnum
==============
*/

char *__fastcall lj_strfmt_wfnum(SBuf *sb, unsigned int sf, double n, char *p)
{
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  char *ptr64; 
  int v12; 
  int v13; 
  int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  char *v21; 
  char *v22; 
  unsigned __int64 v23; 
  char *v24; 
  unsigned int v25; 
  const char *v26; 
  int v27; 
  char v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned int v33; 
  int v34; 
  int v35; 
  int v36; 
  unsigned int v37; 
  char v38; 
  int v39; 
  unsigned int v40; 
  char *v41; 
  char *v42; 
  unsigned __int64 v43; 
  _BYTE *v44; 
  void *v45; 
  unsigned __int64 v46; 
  _BYTE *v47; 
  __int64 v48; 
  _BYTE *v49; 
  __int64 v50; 
  _BYTE *v51; 
  __int64 v52; 
  int v53; 
  unsigned int v54; 
  char v55; 
  int v56; 
  int v58; 
  unsigned int v61; 
  signed int v62; 
  int v63; 
  unsigned int v64; 
  __int64 v65; 
  bool v66; 
  unsigned int v67; 
  unsigned __int64 v68; 
  unsigned __int64 v69; 
  int v70; 
  unsigned int v71; 
  int v72; 
  int v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  int v77; 
  int v78; 
  unsigned int v79; 
  const char *v80; 
  int v81; 
  int v82; 
  __int64 v83; 
  int v84; 
  int v85; 
  __int64 v86; 
  unsigned int *v87; 
  unsigned int v88; 
  __int64 v89; 
  __int64 v90; 
  int v91; 
  __int64 v92; 
  int v93; 
  int v94; 
  __int64 v95; 
  unsigned int *v96; 
  unsigned int v97; 
  unsigned int v98; 
  int v99; 
  int v100; 
  __int64 v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  unsigned int v108; 
  int v109; 
  unsigned int v110; 
  int v111; 
  unsigned int v112; 
  int v113; 
  char v114; 
  unsigned int v115; 
  char v116; 
  unsigned int v117; 
  unsigned int v118; 
  char *v119; 
  char *v120; 
  unsigned __int64 v121; 
  char *v122; 
  unsigned __int64 v123; 
  char *v124; 
  int i; 
  char *v126; 
  char *j; 
  char *v128; 
  char *v129; 
  char *v130; 
  unsigned int v131; 
  __int64 v132; 
  int v133; 
  int v134; 
  __int64 v135; 
  unsigned int *v136; 
  unsigned int v137; 
  __int64 v138; 
  unsigned int v139; 
  unsigned int v140; 
  unsigned int v141; 
  unsigned int v142; 
  unsigned int v143; 
  unsigned int v144; 
  unsigned int v145; 
  int v146; 
  unsigned int v147; 
  int v148; 
  unsigned int v149; 
  unsigned int v150; 
  unsigned int v151; 
  char v152; 
  unsigned int v153; 
  unsigned int v154; 
  char *v155; 
  char *v156; 
  unsigned __int64 v157; 
  char *v158; 
  unsigned __int64 v159; 
  __int64 v160; 
  unsigned int v161; 
  char *m; 
  char *v163; 
  char *ii; 
  char *v165; 
  unsigned int v167; 
  int v169; 
  char v170; 
  int v171; 
  int v172; 
  int k; 
  int ka; 
  int kb; 
  int kc; 
  char v178; 
  unsigned int v179; 
  int v180; 
  char v181; 
  unsigned int v182; 
  int v183; 
  int v184; 
  char v185; 
  unsigned int v186; 
  const char *v187; 
  int v188; 
  unsigned int v189; 
  unsigned int v190; 
  SBuf *sba; 
  unsigned int nd; 
  int v193; 
  int v194; 
  int v195; 
  unsigned int ref[31]; 
  char pa[8]; 
  char v198; 
  void *retaddr; 

  _R11 = &retaddr;
  sba = sb;
  v8 = BYTE2(sf);
  v9 = sf;
  v10 = HIBYTE(sf) - 1;
  __asm { vmovsd  qword ptr [rbp+0D0h+p], xmm2 }
  ptr64 = p;
  v12 = *(_DWORD *)&pa[4];
  v13 = *(_DWORD *)&pa[4];
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (v13 & 0x7FFFFFFFu) >= 0x7FF00000 )
  {
    v15 = 0;
    v16 = sf & 0x2000;
    if ( *(_DWORD *)pa | v12 & 0xFFFFF )
    {
      v17 = 7233902;
      if ( v16 )
        v17 = 5128526;
      v18 = (v9 >> 6) & 0x20;
    }
    else
    {
      v17 = 6909542;
      if ( v16 )
        v17 = 4804166;
      if ( v12 >= 0 )
      {
        if ( (v9 & 0x200) != 0 )
        {
          v18 = 43;
        }
        else
        {
          v18 = 0;
          if ( (v9 & 0x800) != 0 )
            v18 = 32;
        }
      }
      else
      {
        v18 = 45;
      }
    }
    v169 = v18;
    LOBYTE(v15) = v18 != 0;
    v19 = v15 + 3;
    if ( !p )
    {
      v20 = v19;
      if ( v8 > v19 )
        v20 = v8;
      if ( v20 <= LODWORD(sb->e.ptr64) - LODWORD(sb->p.ptr64) )
      {
        ptr64 = (char *)sb->p.ptr64;
      }
      else
      {
        v21 = j_lj_buf_more2(sb, v20);
        v18 = v169;
        ptr64 = v21;
      }
      LOWORD(v9) = sf;
    }
    if ( (v9 & 0x100) == 0 )
    {
      if ( v8 > v19 )
      {
        v22 = ptr64;
        v23 = v8 - v19;
        ptr64 += v23;
        memset(v22, 32, v23);
        do
        {
          --v8;
          --v23;
        }
        while ( v23 );
      }
      --v8;
    }
    if ( v18 )
      *ptr64++ = v18;
    v24 = ptr64 + 3;
    *ptr64 = BYTE2(v17);
    ptr64[1] = BYTE1(v17);
    ptr64[2] = v17;
    goto LABEL_274;
  }
  v25 = sf & 0x30;
  if ( !v25 )
  {
    v26 = "0123456789abcdefpx";
    if ( (v9 & 0x2000) != 0 )
      v26 = "0123456789ABCDEFPX";
    v27 = (*(_DWORD *)&pa[4] >> 20) & 0x7FF;
    v187 = v26;
    if ( *(int *)&pa[4] >= 0 )
    {
      if ( (v9 & 0x200) != 0 )
      {
        v28 = 43;
      }
      else
      {
        v28 = 0;
        if ( (v9 & 0x800) != 0 )
          v28 = 32;
      }
    }
    else
    {
      v28 = 45;
    }
    v29 = *(_DWORD *)pa;
    v30 = *(_DWORD *)&pa[4] & 0xFFFFF;
    v170 = v28;
    *(_DWORD *)&pa[4] &= 0xFFFFFu;
    if ( v27 )
    {
      v30 |= 0x100000u;
      *(_DWORD *)&pa[4] = v30;
      v27 -= 1023;
      LODWORD(v31) = v30;
    }
    else
    {
      LODWORD(v31) = v30;
      if ( *(_DWORD *)pa | v30 )
      {
        if ( v30 )
        {
          _BitScanReverse((unsigned int *)&v34, v30);
          v35 = 20;
        }
        else
        {
          _BitScanReverse((unsigned int *)&v34, *(unsigned int *)pa);
          v35 = 52;
        }
        v36 = v35 - v34;
        v32 = *(_QWORD *)pa << v36;
        v27 = -1022 - v36;
        *(_QWORD *)pa = v32;
        v30 = HIDWORD(v32);
        v29 = v32;
        v31 = HIDWORD(v32);
        goto LABEL_41;
      }
    }
    v32 = *(_QWORD *)pa;
LABEL_41:
    if ( (int)v10 >= 0 )
    {
      if ( (unsigned int)v10 < 0xD )
      {
        v32 += 1i64 << (51 - 4 * (unsigned __int8)v10);
        *(_QWORD *)pa = v32;
        v30 = HIDWORD(v32);
      }
    }
    else if ( v29 )
    {
      _BitScanForward(&v33, v29);
      v10 = 13 - (v33 >> 2);
    }
    else
    {
      _BitScanForward(&v37, v31 | 0x100000);
      v10 = 5 - (v37 >> 2);
    }
    v38 = 45;
    if ( v27 >= 0 )
      v38 = 43;
    v178 = v38;
    k = v10 | sf & 0x1000;
    v182 = abs32(v27);
    _BitScanReverse((unsigned int *)&v39, v182 | 1);
    v19 = v10 + (v182 > ndigits_dec_threshold[((unsigned int)(77 * v39) >> 8) + 1]) + ((unsigned int)(77 * v39) >> 8) + 1 + (k != 0) + (v28 != 0) + 5;
    if ( !ptr64 )
    {
      v40 = v10 + (v182 > ndigits_dec_threshold[((unsigned int)(77 * v39) >> 8) + 1]) + ((unsigned int)(77 * v39) >> 8) + 1 + (k != 0) + (v28 != 0) + 5;
      if ( v8 > v19 )
        v40 = v8;
      if ( v40 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
      {
        ptr64 = (char *)sba->p.ptr64;
      }
      else
      {
        v41 = j_lj_buf_more2(sba, v40);
        v28 = v170;
        ptr64 = v41;
        v26 = v187;
      }
    }
    if ( (sf & 0x500) == 0 )
    {
      if ( v8 > v19 )
      {
        v42 = ptr64;
        v43 = v8 - v19;
        ptr64 += v43;
        memset(v42, 32, v43);
        do
        {
          --v8;
          --v43;
        }
        while ( v43 );
      }
      --v8;
    }
    if ( v28 )
      *ptr64++ = v28;
    *ptr64 = 48;
    ptr64[1] = v26[17];
    v44 = ptr64 + 2;
    if ( (sf & 0x500) == 1024 )
    {
      if ( v8 > v19 )
      {
        v45 = v44;
        v46 = v8 - v19;
        v44 += v46;
        memset(v45, 48, v46);
        do
        {
          --v8;
          --v46;
        }
        while ( v46 );
      }
      --v8;
    }
    v47 = v44 + 1;
    *v44 = (v30 >> 20) + 48;
    if ( k )
    {
      *v47 = 46;
      v48 = (__int64)&v47[v10 + 1];
      if ( (unsigned int)v10 >= 0xD )
      {
        if ( (unsigned int)v10 > 0xD )
        {
          v49 = &v47[v10];
          v50 = (unsigned int)(v10 - 13);
          do
          {
            LODWORD(v10) = v10 - 1;
            *v49-- = 48;
            --v50;
          }
          while ( v50 );
        }
      }
      else
      {
        v32 >>= 4 * (13 - (unsigned __int8)v10);
      }
      if ( (_DWORD)v10 )
      {
        v51 = &v47[(unsigned int)v10];
        do
        {
          --v51;
          v52 = v32 & 0xF;
          v32 >>= 4;
          v51[1] = v26[v52];
          LODWORD(v10) = v10 - 1;
        }
        while ( (_DWORD)v10 );
      }
      v47 = (_BYTE *)v48;
    }
    *v47 = v26[16];
    v47[1] = v178;
    v24 = j_lj_strfmt_wint(v47 + 2, v182);
    goto LABEL_274;
  }
  v53 = 0;
  v183 = *(_DWORD *)&pa[4];
  v54 = (*(_DWORD *)&pa[4] >> 20) & 0x7FF;
  v171 = 0;
  if ( *(int *)&pa[4] >= 0 )
  {
    if ( (v9 & 0x200) != 0 )
    {
      v181 = 43;
    }
    else
    {
      v55 = 0;
      if ( (v9 & 0x800) != 0 )
        v55 = 32;
      v181 = v55;
    }
  }
  else
  {
    v181 = 45;
  }
  v56 = (((int)v10 >> 31) & 7) + v10;
  if ( v25 == 48 )
    v56 = ((v56 - 1) >> 31) ^ (v56 - 1);
  v184 = v9 & 0x10;
  if ( (v9 & 0x10) == 0 )
    goto LABEL_98;
  if ( (unsigned int)v56 >= 0xE )
    goto LABEL_98;
  __asm
  {
    vxorpd  xmm0, xmm0, xmm0
    vucomisd xmm6, xmm0
  }
  v58 = rescale_e[(unsigned __int64)v54 >> 6];
  v171 = v58;
  if ( !rescale_e[(unsigned __int64)v54 >> 6] )
    goto LABEL_98;
  __asm
  {
    vmulsd  xmm0, xmm6, ds:rva rescale_n[rdx+rax*8]
    vmovsd  qword ptr [rbp+0D0h+p], xmm0
  }
  if ( !v54 )
  {
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@4202a05f20000000
      vmovsd  qword ptr [rbp+0D0h+p], xmm0
    }
    v171 = v58 - 10;
  }
  *(_QWORD *)pa -= 2i64;
  v61 = *(_DWORD *)pa;
  v183 = *(_DWORD *)&pa[4];
  v62 = ((*(_DWORD *)&pa[4] >> 20) & 0x7FF) - 1075;
  v63 = *(_DWORD *)&pa[4] & 0xFFFFF | 0x100000;
$load_t_lo:
  v67 = 0;
  nd = (v61 >> 29) | (8 * v63);
  LODWORD(v68) = v61 & 0x1FFFFFFF;
  do
  {
    v69 = (unsigned int)v68 | ((unsigned __int64)*(&nd + v67) << 29);
    v68 = v69 / 0x3B9ACA00;
    *(&nd + v67++) = v69 % 0x3B9ACA00;
  }
  while ( !v67 );
  v70 = v193;
  v9 = sf;
  LODWORD(v65) = 0;
  if ( (_DWORD)v68 )
    v70 = v69 / 0x3B9ACA00;
  LOBYTE(v65) = (_DWORD)v68 != 0;
  v193 = v70;
  while ( 1 )
  {
    if ( v62 < 0 )
    {
      v71 = nd_div2k(&nd, v65, -v62, v9);
      ka = v71;
      if ( (_DWORD)v65 && !*(&nd + (unsigned int)v65) )
        LODWORD(v65) = v65 - 1;
    }
    else
    {
      LODWORD(v65) = nd_mul2k(&nd, v65, v62, 0, v9);
      v71 = 0;
      ka = 0;
    }
    if ( !v184 )
      break;
    v72 = -1;
    if ( v71 && !*(&nd + (unsigned int)v65) )
    {
      LODWORD(v65) = 64;
      do
        v65 = (unsigned int)(v65 - 1);
      while ( !*(&nd + v65) );
      v72 = -577;
    }
    v73 = v171;
    v74 = *(&nd + (unsigned int)v65);
    _BitScanReverse(&v75, v74 | 1);
    v76 = ((77 * v75) >> 8) + 1 + (v74 > ndigits_dec_threshold[((77 * v75) >> 8) + 1]);
    v179 = v76;
    v77 = v65 + v76 + 8 * v65 + v72;
    v188 = v77;
    if ( !v171 )
      goto LABEL_140;
    if ( *(_DWORD *)pa < 0xFFFFFFFE || (v78 = 71, (~v183 & 0xFFFFF) != 0) )
      v78 = 70;
    v79 = v78 + v62;
    v80 = &four_ulp_m_e[2 * v78 + 2 * v62];
    if ( v79 > 0x7F )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strfmt_num.c", 424, "0 <= eidx && eidx < 128") )
      {
        __debugbreak();
        v74 = *(&nd + (unsigned int)v65);
      }
      v76 = v179;
    }
    v81 = *(unsigned __int8 *)v80;
    ref[0] = v74;
    v82 = v80[1];
    v195 = *(&nd + (((_BYTE)v65 - 1) & 0x3F));
    v194 = *(&nd + (((_BYTE)v65 - 2) & 0x3F));
    if ( v82 < 0 )
    {
      v85 = (v82 - 8) / 9;
      v83 = (unsigned int)(v85 + 64);
      v84 = 9 * v85;
    }
    else
    {
      v83 = v82 / 9u;
      v84 = 9 * v83;
    }
    v86 = v82 - v84;
    v87 = &nd + v83;
    v88 = *v87 + v81 * (ndigits_dec_threshold[v86] + 1);
    if ( v88 < 0x3B9ACA00 )
    {
LABEL_135:
      *(&nd + v83) = v88;
    }
    else
    {
      while ( 1 )
      {
        *v87 = v88 - 1000000000;
        if ( (_DWORD)v83 == (_DWORD)v65 )
          break;
        v83 = ((_BYTE)v83 + 1) & 0x3F;
        v87 = &nd + v83;
        v88 = *v87 + 1;
        if ( v88 < 0x3B9ACA00 )
          goto LABEL_135;
      }
      *(&nd + (((_BYTE)v65 + 1) & 0x3F)) = 1;
    }
    if ( nd_similar(&nd, v65, ref, v76, v56 + 1) )
    {
      v77 = v188;
      v76 = v179;
      v73 = v171;
LABEL_140:
      LODWORD(v89) = ka;
      if ( v56 - v77 < 9 * (-ka & 0x3F) )
      {
        LODWORD(v90) = v65;
        v91 = v77 - v56 - 1;
        if ( v91 < 0 )
        {
          v94 = (v77 - v56 - 9) / 9;
          v92 = (unsigned int)(v94 + 64);
          v93 = 9 * v94;
        }
        else
        {
          v92 = v91 / 9u;
          v93 = 9 * v92;
        }
        v95 = v91 - v93;
        v96 = &nd + v92;
        v97 = *v96 + 5 * ndigits_dec_threshold[v95] + 5;
        if ( v97 < 0x3B9ACA00 )
        {
LABEL_147:
          *(&nd + v92) = v97;
        }
        else
        {
          while ( 1 )
          {
            *v96 = v97 - 1000000000;
            if ( (_DWORD)v92 == (_DWORD)v65 )
              break;
            v92 = ((_BYTE)v92 + 1) & 0x3F;
            v96 = &nd + v92;
            v97 = *v96 + 1;
            if ( v97 < 0x3B9ACA00 )
              goto LABEL_147;
          }
          v90 = ((_BYTE)v65 + 1) & 0x3F;
          *(&nd + v90) = 1;
        }
        LODWORD(v65) = v90;
        _BitScanReverse(&v98, *(&nd + (unsigned int)v90) | 1);
        v77 += v76 != ((77 * v98) >> 8) + 1 + (*(&nd + (unsigned int)v90) > ndigits_dec_threshold[((77 * v98) >> 8) + 1]);
      }
      LOWORD(v9) = sf;
      v99 = v77 + v73;
      v172 = v77 + v73;
      if ( (sf & 0x20) != 0 )
      {
        if ( v56 >= v99 && v99 >= -4 )
        {
          v56 -= v99;
          v100 = 0;
          if ( v99 >= 0 )
            v100 = v65;
          LODWORD(v65) = v100;
          goto $g_format_like_f;
        }
        if ( (sf & 0x1000) == 0 && v56 && v8 > 5 )
        {
          if ( v56 < (((_BYTE)v65 - (_BYTE)ka) & 0x3F) + v76 + 8 * (((_BYTE)v65 - (_BYTE)ka) & 0x3F) - 1 )
            LODWORD(v89) = ((_BYTE)v65 - (unsigned __int8)((int)(v56 - v76 + 9) / 9)) & 0x3F;
          else
            v56 = (((_BYTE)v65 - (_BYTE)ka) & 0x3F) + v76 + 8 * (((_BYTE)v65 - (_BYTE)ka) & 0x3F) - 1;
          LODWORD(v101) = v56 - 9 * (((_BYTE)v65 - (_BYTE)v89) & 0x3F) - v76 + 10;
          lj_strfmt_wuint9(pa, *(&nd + (unsigned int)v89));
          while ( v56 )
          {
            v101 = (unsigned int)(v101 - 1);
            if ( pa[v101] != 48 )
              break;
            --v56;
            if ( !(_DWORD)v101 )
            {
              if ( (_DWORD)v89 == (_DWORD)v65 )
              {
                v56 = 0;
                break;
              }
              v89 = (unsigned int)(v89 + 1);
              v102 = *(&nd + v89);
              v103 = v102 / 0x2710;
              v102 %= 0x2710u;
              pa[0] = v103 / 0x2710 + 48;
              v103 %= 0x2710u;
              v104 = (8389 * v103) >> 23;
              pa[1] = v104 + 48;
              v105 = -1000 * v104 + v103;
              v106 = (41 * v105) >> 12;
              pa[2] = v106 + 48;
              v107 = -100 * v106 + v105;
              pa[3] = ((103 * v107) >> 10) + 48;
              pa[4] = v107 - 10 * ((103 * v107) >> 10) + 48;
              LODWORD(v101) = 9;
              v108 = (8389 * v102) >> 23;
              pa[5] = v108 + 48;
              v109 = -1000 * v108 + v102;
              v110 = (unsigned int)(41 * v109) >> 12;
              pa[6] = v110 + 48;
              v111 = -100 * v110 + v109;
              v112 = (unsigned int)(103 * v111) >> 10;
              pa[7] = v112 + 48;
              v198 = v111 - 10 * v112 + 48;
            }
          }
          v99 = v172;
        }
      }
      v113 = -v99;
      v114 = 45;
      if ( v99 >= 0 )
        v114 = 43;
      if ( v99 >= 0 )
        v113 = v99;
      v185 = v114;
      kb = v113;
      v189 = v56 | sf & 0x1000;
      _BitScanReverse(&v115, v113 | 1);
      v116 = v181;
      LOBYTE(v53) = v113 < 10;
      v19 = v56 + (v189 != 0) + (v113 > ndigits_dec_threshold[((77 * v115) >> 8) + 1]) + ((77 * v115) >> 8) + 1 + (v181 != 0) + 3 + v53;
      if ( !ptr64 )
      {
        v117 = v19;
        if ( v8 > v19 )
          v117 = v8;
        v118 = v117 + 5;
        if ( v118 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
        {
          ptr64 = (char *)sba->p.ptr64;
        }
        else
        {
          v119 = j_lj_buf_more2(sba, v118);
          v116 = v181;
          ptr64 = v119;
        }
      }
      if ( (sf & 0x500) == 0 )
      {
        if ( v8 > v19 )
        {
          v120 = ptr64;
          v121 = v8 - v19;
          ptr64 += v121;
          memset(v120, 32, v121);
          do
          {
            --v8;
            --v121;
          }
          while ( v121 );
        }
        --v8;
      }
      if ( v116 )
        *ptr64++ = v116;
      if ( (sf & 0x500) == 1024 )
      {
        if ( v8 > v19 )
        {
          v122 = ptr64;
          v123 = v8 - v19;
          ptr64 += v123;
          memset(v122, 48, v123);
          do
          {
            --v8;
            --v123;
          }
          while ( v123 );
        }
        --v8;
      }
      v124 = j_lj_strfmt_wint(ptr64 + 1, *(&nd + (unsigned int)v65));
      *ptr64 = ptr64[1];
      if ( v189 )
      {
        ptr64[1] = 46;
        for ( i = v56 + (_DWORD)ptr64 - (_DWORD)v124 + 2; i > 0; v124 = lj_strfmt_wuint9(v124, *(&nd + (unsigned int)v65)) )
        {
          if ( (_DWORD)v65 == (_DWORD)v89 )
            break;
          LODWORD(v65) = ((_BYTE)v65 - 1) & 0x3F;
          i -= 9;
        }
        if ( (sf & 0x1020) == 32 )
        {
          v126 = &v124[i & (unsigned __int64)((__int64)i >> 31)];
          for ( j = v126 - 1; *j == 48; --j )
            v126 = j;
          v128 = v126 - 1;
          if ( *(v126 - 1) != 46 )
            v128 = v126;
          v129 = v128;
        }
        else
        {
          if ( i > 0 )
          {
            memset(v124, 48, (unsigned int)i);
            v124 += (unsigned int)i;
            do
              --i;
            while ( i > 0 );
          }
          v129 = &v124[i];
        }
      }
      else
      {
        v129 = ptr64 + 1;
      }
      v130 = v129 + 2;
      *v129 = ~BYTE1(sf) & 0x20 | 0x45;
      v129[1] = v185;
      if ( kb < 10 )
      {
        *v130 = 48;
        v130 = v129 + 3;
      }
      v24 = j_lj_strfmt_wint(v130, kb);
      goto LABEL_274;
    }
    v9 = sf;
    __asm { vmovsd  qword ptr [rbp+0D0h+p], xmm6 }
    v12 = *(_DWORD *)&pa[4];
    v171 = 0;
    v54 = (*(_DWORD *)&pa[4] >> 20) & 0x7FF;
    v183 = *(_DWORD *)&pa[4];
LABEL_98:
    v63 = v12 & 0xFFFFF;
    v64 = v54;
    nd = v63;
    if ( v54 )
      nd = v63 | 0x100000;
    else
      v54 = 1;
    LODWORD(v65) = 0;
    v66 = v64 == 0;
    v61 = *(_DWORD *)pa;
    if ( !v66 )
      v63 |= 0x100000u;
    v62 = v54 - 1043;
    if ( *(_DWORD *)pa )
    {
      v62 -= 32;
      goto $load_t_lo;
    }
  }
  LODWORD(v89) = ka;
  if ( v56 < 9 * (-ka & 0x3Fu) )
  {
    v131 = ~v56;
    if ( v56 >= 0 )
    {
      v134 = (-v56 - 9) / 9;
      v132 = (unsigned int)(v134 + 64);
      v133 = 9 * v134;
    }
    else
    {
      v132 = v131 / 9;
      v133 = 9 * v132;
    }
    v135 = (int)(v131 - v133);
    v136 = &nd + v132;
    v137 = *v136 + 5 * ndigits_dec_threshold[v135] + 5;
    if ( v137 < 0x3B9ACA00 )
    {
LABEL_218:
      *(&nd + v132) = v137;
    }
    else
    {
      while ( 1 )
      {
        *v136 = v137 - 1000000000;
        if ( (_DWORD)v132 == (_DWORD)v65 )
          break;
        v132 = ((_BYTE)v132 + 1) & 0x3F;
        v136 = &nd + v132;
        v137 = *v136 + 1;
        if ( v137 < 0x3B9ACA00 )
          goto LABEL_218;
      }
      LODWORD(v65) = ((_BYTE)v65 + 1) & 0x3F;
      *(&nd + (unsigned int)v65) = 1;
    }
    LOWORD(v9) = sf;
  }
$g_format_like_f:
  v180 = v9 & 0x1010;
  if ( v180 == 16 && v56 && v8 )
  {
    if ( (_DWORD)v89 )
    {
      if ( v56 < (unsigned int)(576 - 9 * v89) )
        LODWORD(v89) = 64 - (v56 + 8) / 9u;
      else
        v56 = 576 - 9 * v89;
      LODWORD(v138) = v89 + v56 + 8 * v89 - 567;
      lj_strfmt_wuint9(pa, *(&nd + (unsigned int)v89));
      while ( v56 )
      {
        v138 = (unsigned int)(v138 - 1);
        if ( pa[v138] != 48 )
          break;
        --v56;
        if ( !(_DWORD)v138 )
        {
          if ( (_DWORD)v89 == 63 )
          {
            v56 = 0;
            break;
          }
          v89 = (unsigned int)(v89 + 1);
          v139 = *(&nd + v89);
          v140 = v139 / 0x2710;
          v139 %= 0x2710u;
          pa[0] = v140 / 0x2710 + 48;
          v140 %= 0x2710u;
          v141 = (8389 * v140) >> 23;
          pa[1] = v141 + 48;
          v142 = -1000 * v141 + v140;
          v143 = (41 * v142) >> 12;
          pa[2] = v143 + 48;
          v144 = -100 * v143 + v142;
          pa[3] = ((103 * v144) >> 10) + 48;
          pa[4] = v144 - 10 * ((103 * v144) >> 10) + 48;
          LODWORD(v138) = 9;
          v145 = (8389 * v139) >> 23;
          pa[5] = v145 + 48;
          v146 = -1000 * v145 + v139;
          v147 = (unsigned int)(41 * v146) >> 12;
          pa[6] = v147 + 48;
          v148 = -100 * v147 + v146;
          v149 = (unsigned int)(103 * v148) >> 10;
          pa[7] = v149 + 48;
          v198 = v148 - 10 * v149 + 48;
        }
      }
      LOWORD(v9) = sf;
    }
    else
    {
      v56 = 0;
    }
  }
  v150 = *(&nd + (unsigned int)v65);
  *(_QWORD *)pa = &nd + (unsigned int)v65;
  kc = v56 | v9 & 0x1000;
  v190 = v150;
  _BitScanReverse(&v151, v150 | 1);
  v152 = v181;
  LOBYTE(v53) = v181 != 0;
  v19 = v56 + (kc != 0) + (v150 > ndigits_dec_threshold[((77 * v151) >> 8) + 1]) + ((77 * v151) >> 8) + 1 + v53 + 9 * v65;
  v186 = v19;
  if ( !ptr64 )
  {
    v153 = v19;
    if ( v8 > v19 )
      v153 = v8;
    v154 = v153 + 8;
    if ( v154 <= LODWORD(sba->e.ptr64) - LODWORD(sba->p.ptr64) )
    {
      ptr64 = (char *)sba->p.ptr64;
    }
    else
    {
      v155 = j_lj_buf_more2(sba, v154);
      v150 = v190;
      ptr64 = v155;
    }
  }
  if ( (sf & 0x500) == 0 )
  {
    if ( v8 > v19 )
    {
      v156 = ptr64;
      v157 = v8 - v19;
      ptr64 += v157;
      memset(v156, 32, v157);
      do
      {
        --v8;
        --v157;
      }
      while ( v157 );
      v152 = v181;
    }
    --v8;
  }
  if ( v152 )
    *ptr64++ = v152;
  if ( (sf & 0x500) == 1024 )
  {
    if ( v8 > v19 )
    {
      v158 = ptr64;
      v159 = v8 - v19;
      ptr64 += v159;
      memset(v158, 48, v159);
      do
      {
        --v8;
        --v159;
      }
      while ( v159 );
    }
    --v8;
  }
  v24 = j_lj_strfmt_wint(ptr64, v150);
  if ( (_DWORD)v65 )
  {
    v160 = *(_QWORD *)pa;
    do
    {
      v161 = *(_DWORD *)(v160 - 4);
      v160 -= 4i64;
      v24 = lj_strfmt_wuint9(v24, v161);
      LODWORD(v65) = v65 - 1;
    }
    while ( (_DWORD)v65 );
    v19 = v186;
  }
  if ( kc )
  {
    *v24 = 46;
    for ( m = v24 + 1; v56 > 0; m = lj_strfmt_wuint9(m, *(&nd + (unsigned int)v65)) )
    {
      if ( (_DWORD)v65 == (_DWORD)v89 )
        break;
      LODWORD(v65) = ((_BYTE)v65 - 1) & 0x3F;
      v56 -= 9;
    }
    if ( v180 == 16 )
    {
      v163 = &m[v56 & (unsigned __int64)((__int64)v56 >> 31)];
      for ( ii = v163 - 1; *ii == 48; --ii )
        v163 = ii;
      v165 = v163 - 1;
      if ( *(v163 - 1) != 46 )
        v165 = v163;
      v24 = v165;
    }
    else
    {
      if ( v56 > 0 )
      {
        memset(m, 48, (unsigned int)v56);
        m += (unsigned int)v56;
        do
          --v56;
        while ( v56 > 0 );
      }
      v24 = &m[v56];
    }
  }
LABEL_274:
  __asm { vmovaps xmm6, xmmword ptr [rsp+1D0h+var_58+8] }
  if ( (sf & 0x100) == 0 || v8 <= v19 )
    return v24;
  v167 = v8 - v19;
  memset(v24, 32, v167);
  return &v24[v167];
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
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  signed int v14; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  int i; 
  unsigned int v25; 
  unsigned int v26; 

  v5 = 0;
  v6 = ndhi;
  v7 = -1;
  v8 = k;
  v10 = -1;
  if ( !ndhi )
  {
    v11 = *nd;
    if ( !*nd )
      return 0i64;
    _BitScanForward(&v12, v11);
    if ( v12 >= k )
    {
      *nd = v11 >> k;
      return 0i64;
    }
    *nd = v11 >> v12;
    v8 = k - v12;
  }
  if ( v8 > 0x12 )
  {
    v14 = HIBYTE(sf) - 1;
    if ( (sf & 0x30) == 32 )
    {
      v10 = 63 - v14 / 9;
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, eax
        vmulsd  xmm1, xmm0, cs:__real@bfd34413509f79fe
        vcvttsd2si eax, xmm1
      }
      v10 = (int)(1 - _EAX - HIBYTE(sf)) / 9 + 62;
      v7 = ndhi - v14 / 8 + 61;
    }
  }
  if ( v8 >= 9 )
  {
    while ( 1 )
    {
      LOBYTE(v19) = v6;
      v20 = 1953125 * (nd[v6] & 0x1FF);
      nd[v6] >>= 9;
      if ( (_DWORD)v6 != v5 )
      {
        do
        {
          v19 = ((_BYTE)v19 - 1) & 0x3F;
          v21 = v20 + (nd[v19] >> 9);
          v20 = 1953125 * (nd[v19] & 0x1FF);
          nd[v19] = v21;
        }
        while ( (_DWORD)v19 != v5 );
      }
      if ( v5 != v10 && v5 != v7 )
        break;
      if ( !nd[v6] )
      {
        if ( (_DWORD)v6 == v5 )
          return v5;
LABEL_22:
        v6 = ((_BYTE)v6 - 1) & 0x3F;
        --v7;
      }
LABEL_23:
      v8 -= 9;
      if ( v8 < 9 )
        goto LABEL_24;
    }
    if ( v20 )
    {
      v5 = ((_BYTE)v5 - 1) & 0x3F;
      nd[v5] = v20;
    }
    if ( nd[v6] )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_24:
  if ( v8 )
  {
    v22 = (1 << v8) - 1;
    v23 = v22 & nd[v6];
    nd[v6] >>= v8;
    for ( i = (1000000000 >> v8) * v23; (_DWORD)v6 != v5; i = (1000000000 >> v8) * v26 )
    {
      v6 = ((_BYTE)v6 - 1) & 0x3F;
      v25 = i + (nd[v6] >> v8);
      v26 = v22 & nd[v6];
      nd[v6] = v25;
    }
    if ( i )
    {
      v5 = ((_BYTE)v5 - 1) & 0x3F;
      nd[v5] = i;
    }
  }
  return v5;
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

