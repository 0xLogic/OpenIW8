/*
==============
lj_strscan_scan
==============
*/
__int64 lj_strscan_scan(const unsigned __int8 *p, TValue *o, unsigned int opt)
{
  __int64 v3; 
  StrScanFmt v4; 
  const unsigned __int8 *v6; 
  unsigned int neg; 
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  char v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  StrScanFmt v15; 
  char v16; 
  int v17; 
  const unsigned __int8 *v18; 
  unsigned int dig; 
  int v20; 
  unsigned int v21; 
  int ex2; 
  char v23; 
  int v24; 
  const unsigned __int8 *v25; 
  __int64 v26; 
  const unsigned __int8 *v27; 
  char v28; 
  unsigned int v29; 
  int v30; 
  unsigned __int8 v31; 
  unsigned __int8 *v32; 
  int v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 i; 
  int v37; 
  char v38; 
  unsigned int v39; 
  unsigned int v40; 
  const unsigned __int8 *v41; 
  __int64 v42; 
  unsigned __int64 v46; 
  unsigned __int8 v47; 
  unsigned __int64 v48; 
  int v49; 
  StrScanFmt v50; 
  unsigned __int64 v51; 
  unsigned int v52; 
  unsigned __int8 v53; 
  unsigned __int64 v54; 
  int v55; 
  int v56; 
  int v60; 
  unsigned int v62; 

  v3 = *p;
  v4 = STRSCAN_ERROR;
  v6 = p;
  neg = 0;
  v8 = lj_char_bits[v3 + 1];
  if ( (v8 & 8) == 0 )
  {
    if ( (v8 & 2) != 0 )
    {
      do
        v9 = *++v6;
      while ( (lj_char_bits[v9 + 1] & 2) != 0 );
    }
    v10 = *v6;
    if ( ((*v6 - 43) & 0xFD) == 0 )
    {
      ++v6;
      if ( v10 == 45 )
        neg = 1;
    }
    LOBYTE(v3) = *v6;
    if ( *v6 >= 0x41u )
    {
      v11 = v3 | 0x20;
      v12 = 0xFFF8000000000000ui64;
      if ( v11 == 105 && (v6[1] | 0x20) == 110 && (v6[2] | 0x20) == 102 )
      {
        v6 += 3;
        v12 = ((neg ^ 1i64) << 63) - 0x10000000000000i64;
        if ( (*v6 | 0x20) == 105 && (v6[1] | 0x20) == 110 && (v6[2] | 0x20) == 105 && (v6[3] | 0x20) == 116 && (v6[4] | 0x20) == 121 )
          v6 += 5;
      }
      else if ( v11 == 110 && (v6[1] | 0x20) == 97 && (v6[2] | 0x20) == 110 )
      {
        v6 += 3;
      }
      if ( (lj_char_bits[*v6 + 1] & 2) != 0 )
      {
        do
          v13 = *++v6;
        while ( (lj_char_bits[v13 + 1] & 2) != 0 );
      }
      if ( !*v6 )
      {
        o->u64 = v12;
        return 1i64;
      }
      return 0i64;
    }
  }
  v15 = STRSCAN_INT;
  v62 = opt & 0x10;
  v16 = 8;
  if ( (opt & 0x10) == 0 || (v17 = 0, (_BYTE)v3 != 48) )
    v17 = 10;
  v60 = v17;
  v18 = NULL;
  dig = 0;
  v20 = 0;
  v21 = 0;
  ex2 = 0;
  if ( (unsigned __int8)v3 <= 0x30u )
  {
    if ( (_BYTE)v3 != 48 )
      goto LABEL_35;
    v23 = v6[1] | 0x20;
    if ( v23 == 120 )
    {
      v16 = 16;
      v6 += 2;
      v24 = 16;
    }
    else
    {
      if ( v23 != 98 )
        goto LABEL_35;
      v24 = 2;
      v6 += 2;
    }
    v60 = v24;
    while ( 1 )
    {
LABEL_35:
      while ( *v6 == 48 )
      {
        v20 = 1;
        ++v6;
      }
      if ( *v6 != 46 )
        break;
      if ( v18 )
        return 0i64;
      v18 = v6++;
    }
  }
  v25 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v26 = *v6;
      if ( ((unsigned __int8)v16 & lj_char_bits[v26 + 1]) == 0 )
        break;
      ++dig;
      ++v6;
      v21 = (v26 & 0xF) + 10 * v21;
    }
    if ( (_BYTE)v26 != 46 )
      break;
    if ( v18 )
      return 0i64;
    v18 = v6++;
  }
  if ( !(dig | v20) )
    return 0i64;
  if ( !v18 || (v15 = STRSCAN_NUM, !dig) )
  {
    v29 = v60;
    goto LABEL_55;
  }
  v27 = v6 - 1;
  for ( ex2 = (_DWORD)v18 - (_DWORD)v6 + 1; ex2 < 0; ++ex2 )
  {
    v28 = *v27--;
    if ( v28 != 48 )
      break;
    --dig;
  }
  v29 = v60;
  if ( v60 != 16 )
  {
LABEL_55:
    if ( v29 < 0xA )
      goto LABEL_70;
    goto LABEL_56;
  }
  ex2 *= 4;
LABEL_56:
  v30 = 101;
  if ( v29 == 16 )
    v30 = 112;
  if ( (*v6 | 0x20) == v30 )
  {
    v31 = v6[1];
    v32 = (unsigned __int8 *)(v6 + 1);
    v33 = 0;
    v15 = STRSCAN_NUM;
    if ( ((v31 - 43) & 0xFD) == 0 )
    {
      ++v32;
      if ( v31 == 45 )
        v33 = 1;
    }
    v34 = *v32;
    if ( (lj_char_bits[v34 + 1] & 8) == 0 )
      return 0i64;
    v6 = v32 + 1;
    v35 = v34 & 0xF;
    for ( i = *v6; (lj_char_bits[i + 1] & 8) != 0; ++v6 )
    {
      if ( v35 < 0x10000 )
        v35 = (i & 0xF) + 10 * v35;
      i = v6[1];
    }
    v37 = -v35;
    if ( !v33 )
      v37 = v35;
    v29 = v60;
    ex2 += v37;
  }
LABEL_70:
  if ( !*v6 )
  {
    v39 = opt;
    v40 = v62;
    goto LABEL_97;
  }
  v38 = *v6 | 0x20;
  if ( v38 == 105 )
  {
    v39 = opt;
    if ( (opt & 4) != 0 )
    {
      v40 = v62;
      v15 = STRSCAN_IMAG;
      ++v6;
      goto LABEL_89;
    }
    return 0i64;
  }
  v40 = v62;
  if ( v15 != STRSCAN_INT )
    goto LABEL_88;
  if ( v38 == 117 )
    v15 = STRSCAN_U32;
  v41 = v6 + 1;
  if ( v38 != 117 )
    v41 = v6;
  v6 = v41;
  if ( (*v41 | 0x20) == 108 )
  {
    v6 = v41 + 1;
    if ( (v41[1] | 0x20) == 108 )
    {
      v6 = v41 + 2;
      v15 += 2;
    }
    else if ( !v62 )
    {
      return 0i64;
    }
  }
  if ( (*v6 | 0x20) == 117 && ((v15 - 3) & 0xFFFFFFFD) == 0 )
  {
    ++v6;
    ++v15;
  }
  if ( v15 == STRSCAN_U32 )
  {
    if ( !v62 )
      return 0i64;
    goto LABEL_88;
  }
  if ( (unsigned int)v15 < STRSCAN_I64 )
  {
LABEL_88:
    v39 = opt;
    goto LABEL_89;
  }
  v39 = opt;
  if ( (opt & 8) == 0 )
    return 0i64;
LABEL_89:
  if ( (lj_char_bits[*v6 + 1] & 2) != 0 )
  {
    do
      v42 = *++v6;
    while ( (lj_char_bits[v42 + 1] & 2) != 0 );
  }
  if ( *v6 )
    return 0i64;
LABEL_97:
  if ( v15 == STRSCAN_INT && v29 == 10 )
  {
    if ( dig < 0xA || dig == 10 && *v25 <= 0x32u && v21 < neg + 0x80000000 )
    {
      _EAX = -v21;
      if ( !neg )
        _EAX = v21;
      if ( (v39 & 2) != 0 )
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, eax }
        o->u64 = *(unsigned __int64 *)&_XMM0;
        return 1i64;
      }
      goto LABEL_107;
    }
    goto LABEL_158;
  }
  if ( !v29 )
  {
    if ( (unsigned int)(v15 - 1) > 1 )
    {
      v46 = 0i64;
      if ( dig <= 0x16 )
      {
        if ( dig == 22 )
        {
          if ( *v25 <= 0x31u )
          {
LABEL_115:
            while ( 1 )
            {
              v47 = *v25;
              --dig;
              if ( (unsigned __int8)(*v25 - 48) > 7u )
                break;
              ++v25;
              v46 = (v47 & 7) + 8 * v46;
              if ( !dig )
                goto LABEL_117;
            }
          }
        }
        else
        {
          if ( dig )
            goto LABEL_115;
LABEL_117:
          if ( v15 == STRSCAN_INT )
          {
            if ( v46 >= neg + 0x80000000 )
              v15 = STRSCAN_U32;
          }
          else if ( v15 != STRSCAN_U32 )
          {
            v48 = -(__int64)v46;
            if ( !neg )
              v48 = v46;
            o->u64 = v48;
            return (unsigned int)v15;
          }
          if ( (v46 & 0xFFFFFFFF00000000ui64) == 0 )
          {
            v4 = v15;
            v49 = -(int)v46;
            if ( !neg )
              v49 = v46;
            o->i = v49;
          }
        }
      }
      return (unsigned int)v4;
    }
    goto LABEL_158;
  }
  if ( v29 != 16 )
  {
    if ( v29 != 2 )
    {
LABEL_158:
      v50 = strscan_dec(v25, o, v15, v39, ex2, neg, dig);
      goto LABEL_159;
    }
    v51 = 0i64;
    if ( !ex2 && dig <= 0x40 )
    {
      v52 = dig;
      if ( dig )
      {
        do
        {
          v53 = *v25;
          if ( (*v25 & 0xFE) != 48 )
            return 0i64;
          ++v25;
          v51 = (2 * v51) | v53 & 1;
        }
        while ( --v52 );
      }
      if ( v15 == STRSCAN_INT )
      {
        if ( (v39 & 2) == 0 && v51 < neg + 0x80000000 )
        {
          v55 = -(int)v51;
          if ( !neg )
            v55 = v51;
          o->i = v55;
          return 3i64;
        }
        if ( !v40 )
        {
          v15 = STRSCAN_NUM;
          goto LABEL_151;
        }
      }
      else if ( v15 != STRSCAN_U32 )
      {
        if ( (unsigned int)(v15 - 5) <= 1 )
        {
          v54 = -(__int64)v51;
          if ( !neg )
            v54 = v51;
          o->u64 = v54;
          goto LABEL_160;
        }
LABEL_151:
        if ( (v51 & 0xC000000000000000ui64) != 0 )
        {
          ex2 = 2;
          v51 = v51 & 3 | (v51 >> 2);
        }
        strscan_double(v51, o, ex2, neg);
        goto LABEL_160;
      }
      if ( dig <= 0x20 )
      {
        v56 = -(int)v51;
        if ( !neg )
          v56 = v51;
        o->i = v56;
        return 4i64;
      }
    }
    return 0i64;
  }
  v50 = strscan_hex(v25, o, v15, v39, ex2, neg, dig);
LABEL_159:
  v15 = v50;
LABEL_160:
  if ( v15 == STRSCAN_NUM && (v39 & 1) != 0 )
  {
    _XMM1 = o->u64;
    __asm { vcvttsd2si eax, xmm1 }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, eax }
    if ( *(double *)&_XMM1 == *(double *)&_XMM0 )
    {
LABEL_107:
      o->i = _EAX;
      return 3i64;
    }
  }
  return (unsigned int)v15;
}

/*
==============
lj_strscan_num
==============
*/
_BOOL8 lj_strscan_num(GCstr *str, TValue *o)
{
  StrScanFmt v2; 

  v2 = j_lj_strscan_scan((const unsigned __int8 *)&str[1], o, 2u);
  if ( (unsigned int)v2 > STRSCAN_NUM && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strscan.c", 529, "fmt == STRSCAN_ERROR || fmt == STRSCAN_NUM") )
    __debugbreak();
  return v2 != STRSCAN_ERROR;
}

/*
==============
strscan_dec
==============
*/
__int64 strscan_dec(const unsigned __int8 *p, TValue *o, StrScanFmt fmt, unsigned int opt, int ex10, int neg, unsigned int dig)
{
  unsigned __int8 *v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  char v11; 
  int v13; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  const unsigned __int8 *v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  const unsigned __int8 *v21; 
  unsigned __int8 v22; 
  const unsigned __int8 *v23; 
  unsigned __int8 v24; 
  unsigned __int8 v25; 
  const unsigned __int8 *v26; 
  unsigned __int8 v27; 
  const unsigned __int8 *v28; 
  unsigned __int8 v29; 
  __int64 v30; 
  char *v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  int v36; 
  unsigned int v43; 
  int v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  bool v47; 
  __int64 v48; 
  unsigned int v49; 
  int v50; 
  unsigned int v51; 
  __int64 v52; 
  unsigned int v53; 
  int v54; 
  unsigned int v55; 
  int v56; 
  __int64 v57; 
  unsigned int v58; 
  __int64 v59; 
  int v60; 
  __int64 v61; 
  unsigned __int64 v62; 
  int i; 
  int v64; 
  unsigned __int8 v65; 
  char v66[511]; 

  v8 = &v65;
  v9 = dig;
  v10 = 0i64;
  v11 = opt;
  if ( dig )
  {
    if ( dig <= 0x320 )
      v13 = ex10;
    else
      v13 = ex10 + dig - 800;
    v14 = 800;
    v15 = &v65;
    if ( dig <= 0x320 )
      v14 = dig;
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)v14) & 1) != 0 )
    {
      v16 = *p;
      v17 = *p;
      if ( *p == 46 )
        v17 = p[1];
      v8 = (unsigned __int8 *)v66;
      --v14;
      v65 = v17 & 0xF;
      v15 = (unsigned __int8 *)v66;
      if ( v16 == 46 )
        ++p;
      ++p;
    }
    if ( v14 > 1 )
    {
      v10 = ((v14 - 2) >> 1) + 1;
      do
      {
        v18 = p;
        v19 = *p;
        if ( *p == 46 )
          v19 = p[1];
        if ( *p == 46 )
          v18 = p + 1;
        v20 = v18[1];
        v21 = v18 + 1;
        v22 = v20;
        if ( v20 == 46 )
          v22 = v18[2];
        *v8++ = (v22 & 0xF) + 10 * (v19 & 0xF);
        v15 = v8;
        if ( v20 == 46 )
          v21 = v18 + 2;
        v14 -= 2;
        p = v21 + 1;
        --v10;
      }
      while ( v10 );
    }
    v23 = p;
    if ( v14 )
    {
      v24 = *p;
      if ( *p == 46 )
        v25 = p[1];
      else
        v25 = *p;
      --v13;
      v9 = dig + 1;
      *v8 = 10 * (v25 & 0xF);
      v26 = v23;
      v8 = v15 + 1;
      if ( v24 == 46 )
        v26 = v23 + 1;
      p = v26 + 1;
    }
    if ( v9 > 0x320 )
    {
      while ( 1 )
      {
        v27 = *p;
        v28 = p;
        if ( *p == 46 )
          v29 = p[1];
        else
          v29 = *p;
        if ( v27 == 46 )
          ++v28;
        if ( v29 != 48 )
          break;
        --v9;
        p = v28 + 1;
        if ( v9 <= 0x320 )
          goto LABEL_39;
      }
      *(v8 - 1) |= 1u;
      goto LABEL_39;
    }
    for ( ; v13 > 0; v9 += 2 )
    {
      if ( v9 > 0x12 )
        break;
      *v8 = 0;
      v13 -= 2;
      ++v8;
    }
    if ( v9 > 0x14 || v13 )
      goto LABEL_39;
  }
  else
  {
    v13 = 0;
    v65 = 0;
  }
  v30 = v65;
  v31 = v66;
  v32 = v8 - (unsigned __int8 *)v66;
  if ( v66 > (char *)v8 )
    v32 = v10;
  if ( v32 )
  {
    do
    {
      v33 = (unsigned __int8)*v31++;
      v30 = v33 + 100 * v30;
    }
    while ( v31 - v66 < v32 );
  }
  if ( v9 == 20 && (v65 > 0x12u || v30 >= 0) )
    goto LABEL_39;
  if ( fmt == STRSCAN_INT )
  {
    if ( (v11 & 2) == 0 && v30 < (unsigned __int64)(neg + 0x80000000) )
    {
      v36 = -(int)v30;
      if ( !neg )
        v36 = v30;
      o->i = v36;
      return 3i64;
    }
    if ( (v11 & 0x10) == 0 )
    {
      fmt = STRSCAN_NUM;
      goto $plainnumber;
    }
  }
  else if ( fmt != STRSCAN_U32 )
  {
    if ( (unsigned int)(fmt - 5) <= 1 )
    {
      v34 = -v30;
      if ( !neg )
        v34 = v30;
      o->u64 = v34;
      return (unsigned int)fmt;
    }
$plainnumber:
    if ( v30 >= 0 )
    {
      _XMM0 = (unsigned int)neg;
      _XMM4 = 0i64;
      __asm
      {
        vcvtsi2sd xmm4, xmm4, r8
        vxorpd  xmm3, xmm4, cs:__xmm@80000000000000008000000000000000
        vpcmpeqd xmm2, xmm0, xmm1
      }
      _mm_shuffle_ps(_XMM2, _XMM2, 0);
      __asm { vblendvpd xmm0, xmm3, xmm4, xmm2 }
      o->u64 = *(unsigned __int64 *)&_XMM0;
      return (unsigned int)fmt;
    }
LABEL_39:
    if ( fmt == STRSCAN_INT )
    {
      if ( (v11 & 0x10) == 0 )
      {
        fmt = STRSCAN_NUM;
        goto LABEL_73;
      }
    }
    else if ( fmt <= STRSCAN_INT )
    {
LABEL_73:
      v43 = (_DWORD)v8 - (unsigned int)&v65;
      v44 = v43 + (v13 >> 1);
      LODWORD(v45) = v10;
      if ( (!v43 || (v13 & 1) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strscan.c", 265, "lo > 0 && (ex10 & 1) == 0") )
        __debugbreak();
      if ( v44 > 155 )
      {
        v46 = 0xFFF0000000000000ui64;
        if ( !neg )
          v46 = 0x7FF0000000000000i64;
        o->u64 = v46;
        return (unsigned int)fmt;
      }
      if ( v44 < -163 )
      {
        o->u64 = 0x8000000000000000ui64;
        return (unsigned int)fmt;
      }
      v47 = v44 <= 9;
      if ( v44 < 9 )
      {
        do
        {
          if ( v44 >= ((v43 - v45) & 0x1FF) )
            break;
          LODWORD(v10) = v10 - 6;
          LODWORD(v48) = ((_WORD)v43 - 1) & 0x1FF;
          v49 = (5243 * ((unsigned int)(v66[(((_WORD)v43 - 1) & 0x1FF) - 1] << 6) >> 2)) >> 17;
          v50 = -100 * v49 + (v66[(((_WORD)v43 - 1) & 0x1FF) - 1] << 6);
          for ( v66[(((_WORD)v43 - 1) & 0x1FF) - 1] = -100 * v49 + (v66[(((_WORD)v43 - 1) & 0x1FF) - 1] << 6); (_DWORD)v48 != (_DWORD)v45; v66[v48 - 1] = v50 )
          {
            if ( !v50 && (_DWORD)v48 == (((_WORD)v43 - 1) & 0x1FF) )
              v43 = v48;
            v48 = ((_WORD)v48 - 1) & 0x1FF;
            v51 = v49 + (v66[v48 - 1] << 6);
            v49 = (5243 * (v51 >> 2)) >> 17;
            v50 = -100 * v49 + v51;
          }
          if ( v49 )
          {
            v45 = ((_WORD)v45 - 1) & 0x1FF;
            if ( v66[(((_WORD)v43 - 1) & 0x1FF) - 1] )
            {
              if ( (_DWORD)v45 == v43 )
              {
                v52 = ((_WORD)v43 - 1) & 0x1FF;
                v43 = ((_WORD)v43 - 1) & 0x1FF;
                v66[(((_WORD)v52 - 1) & 0x1FF) - 1] |= v66[v52 - 1];
              }
            }
            else
            {
              v43 = ((_WORD)v43 - 1) & 0x1FF;
            }
            v66[v45 - 1] = v49;
            ++v44;
          }
        }
        while ( v44 < 9 );
        v47 = v44 <= 9;
      }
      if ( !v47 )
      {
        do
        {
          v53 = 0;
          v54 = v45;
          LODWORD(v10) = v10 + 6;
          do
          {
            v55 = v66[v54 - 1] + v53;
            v56 = v55 & 0x3F;
            v55 >>= 6;
            v53 = 100 * v56;
            v66[v54 - 1] = v55;
            if ( !(_BYTE)v55 && v54 == (_DWORD)v45 )
            {
              LODWORD(v45) = ((_WORD)v45 + 1) & 0x1FF;
              --v44;
            }
            v54 = ((_WORD)v54 + 1) & 0x1FF;
          }
          while ( v54 != v43 );
          if ( v53 )
          {
            while ( (_DWORD)v45 != v43 )
            {
              v57 = v43;
              v58 = v53 >> 6;
              v53 = 100 * (v53 & 0x3F);
              v43 = ((_WORD)v43 + 1) & 0x1FF;
              v66[v57 - 1] = v58;
              if ( !v53 )
                goto LABEL_109;
            }
            v66[(((_WORD)v43 - 1) & 0x1FF) - 1] |= 1u;
          }
LABEL_109:
          ;
        }
        while ( v44 > 9 );
      }
      v59 = (unsigned int)v45;
      v60 = v44 - 1;
      v61 = ((_WORD)v45 + 1) & 0x1FF;
      v62 = v66[v59 - 1];
      if ( v60 <= 0 )
      {
LABEL_113:
        if ( (_DWORD)v61 != v43 )
        {
          v62 *= 2i64;
          LODWORD(v10) = v10 - 1;
          while ( !v66[v61 - 1] )
          {
            v61 = ((_WORD)v61 + 1) & 0x1FF;
            if ( (_DWORD)v61 == v43 )
              goto LABEL_122;
          }
          v62 |= 1ui64;
          goto LABEL_122;
        }
      }
      else
      {
        while ( (_DWORD)v61 != v43 )
        {
          --v60;
          v62 = v66[v61 - 1] + 100 * v62;
          v61 = ((_WORD)v61 + 1) & 0x1FF;
          if ( v60 <= 0 )
            goto LABEL_113;
        }
      }
      for ( i = v60 - 1; i >= 0; --i )
        v62 *= 100i64;
LABEL_122:
      strscan_double(v62, o, v10, neg);
      return (unsigned int)fmt;
    }
    return 0i64;
  }
  if ( (v30 & 0xFFFFFFFF00000000ui64) != 0 )
    return 0i64;
  v64 = -(int)v30;
  if ( !neg )
    v64 = v30;
  o->i = v64;
  return 4i64;
}

/*
==============
strscan_double
==============
*/
void strscan_double(unsigned __int64 x, TValue *o, int ex2, int neg)
{
  signed __int64 v4; 
  bool v8; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 

  v4 = x;
  if ( ex2 > -1075 )
  {
LABEL_11:
    v8 = v4 < 0;
    goto LABEL_12;
  }
  v8 = (x & 0x8000000000000000ui64) != 0i64;
  if ( x )
  {
    if ( HIDWORD(x) )
    {
      _BitScanReverse(&v9, HIDWORD(x));
      v10 = v9 + 32;
    }
    else
    {
      _BitScanReverse((unsigned int *)&v10, x);
    }
    if ( (unsigned int)(v10 + ex2 + 1075) <= 0x34 )
    {
      v11 = 1i64 << (-51 - (unsigned __int8)ex2);
      if ( (v11 & x) != 0 && ((3 * v11 - 1) & x) != 0 )
        v4 = x + 2 * v11;
      v4 &= ~(2 * v11 - 1);
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strscan.c", 96, "(int64_t)x >= 0") )
    __debugbreak();
  _XMM0 = (unsigned int)neg;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM4 = 0i64;
  __asm
  {
    vcvtsi2sd xmm4, xmm4, rbx
    vxorpd  xmm3, xmm4, cs:__xmm@80000000000000008000000000000000
  }
  _mm_shuffle_ps(_XMM2, _XMM2, 0);
  __asm { vblendvpd xmm0, xmm3, xmm4, xmm2; X }
  if ( ex2 )
    *(double *)&_XMM0 = ldexp(*(double *)&_XMM0, ex2);
  o->u64 = *(unsigned __int64 *)&_XMM0;
}

/*
==============
strscan_hex
==============
*/
__int64 strscan_hex(const unsigned __int8 *p, TValue *o, StrScanFmt fmt, unsigned int opt, int ex2, int neg, unsigned int dig)
{
  unsigned __int64 v7; 
  unsigned int v8; 
  char v9; 
  unsigned __int8 v12; 
  const unsigned __int8 *v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  const unsigned __int8 *v16; 
  __int64 v17; 
  int v18; 
  unsigned __int8 v19; 
  const unsigned __int8 *v20; 
  unsigned __int8 v21; 
  bool v22; 
  const unsigned __int8 *v23; 
  unsigned __int64 v24; 
  int v26; 
  int v27; 

  v7 = 0i64;
  v8 = dig;
  v9 = opt;
  if ( dig > 0x10 )
    v8 = 16;
  for ( ; v8; --v8 )
  {
    v12 = *p;
    v13 = p;
    v14 = *p;
    if ( *p == 46 )
      v14 = p[1];
    v15 = v14 + 9;
    if ( v14 <= 0x39u )
      v15 = v14;
    v7 = (v15 & 0xF) + 16 * v7;
    v16 = v13;
    if ( v12 == 46 )
      v16 = v13 + 1;
    p = v16 + 1;
  }
  if ( dig <= 0x10 )
  {
    v18 = ex2;
  }
  else
  {
    v17 = dig - 16;
    v18 = ex2 + 4 * v17;
    do
    {
      v19 = *p;
      v20 = p;
      if ( *p == 46 )
        v21 = p[1];
      else
        v21 = *p;
      v22 = v21 == 48;
      v23 = v20;
      v7 |= !v22;
      if ( v19 == 46 )
        v23 = v20 + 1;
      p = v23 + 1;
      --v17;
    }
    while ( v17 );
  }
  if ( fmt == STRSCAN_INT )
  {
    if ( (v9 & 2) == 0 && v7 < neg + 0x80000000 )
    {
      v26 = -(int)v7;
      if ( !neg )
        v26 = v7;
      o->i = v26;
      return 3i64;
    }
    if ( (v9 & 0x10) == 0 )
    {
      fmt = STRSCAN_NUM;
LABEL_35:
      if ( (v7 & 0xC000000000000000ui64) != 0 )
      {
        v7 = v7 & 3 | (v7 >> 2);
        v18 += 2;
      }
      strscan_double(v7, o, v18, neg);
      return (unsigned int)fmt;
    }
  }
  else if ( fmt != STRSCAN_U32 )
  {
    if ( (unsigned int)(fmt - 5) <= 1 )
    {
      if ( dig <= 0x10 )
      {
        v24 = -(__int64)v7;
        if ( !neg )
          v24 = v7;
        o->u64 = v24;
        return (unsigned int)fmt;
      }
      return 0i64;
    }
    goto LABEL_35;
  }
  if ( dig > 8 )
    return 0i64;
  v27 = -(int)v7;
  if ( !neg )
    v27 = v7;
  o->i = v27;
  return 4i64;
}

