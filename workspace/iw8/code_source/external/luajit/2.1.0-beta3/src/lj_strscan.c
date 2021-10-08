/*
==============
lj_strscan_scan
==============
*/
__int64 lj_strscan_scan(const unsigned __int8 *p, TValue *o, unsigned int opt)
{
  __int64 v4; 
  StrScanFmt v5; 
  const unsigned __int8 *v7; 
  unsigned int neg; 
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  char v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  StrScanFmt v16; 
  char v17; 
  int v18; 
  const unsigned __int8 *v19; 
  unsigned int dig; 
  int v21; 
  unsigned int v22; 
  int ex2; 
  char v24; 
  int v25; 
  const unsigned __int8 *v26; 
  __int64 v27; 
  const unsigned __int8 *v28; 
  char v29; 
  unsigned int v30; 
  int v31; 
  unsigned __int8 v32; 
  unsigned __int8 *v33; 
  int v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 i; 
  int v38; 
  char v39; 
  unsigned int v40; 
  unsigned int v41; 
  const unsigned __int8 *v42; 
  __int64 v43; 
  unsigned __int64 v47; 
  unsigned __int8 v48; 
  __int64 v49; 
  int v50; 
  StrScanFmt v51; 
  unsigned __int64 v52; 
  unsigned int v53; 
  unsigned __int8 v54; 
  __int64 v55; 
  int v56; 
  int v57; 
  int v61; 
  unsigned int v63; 

  v4 = *p;
  v5 = STRSCAN_ERROR;
  _R12 = o;
  v7 = p;
  neg = 0;
  v9 = lj_char_bits[v4 + 1];
  if ( (v9 & 8) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      do
        v10 = *++v7;
      while ( (lj_char_bits[v10 + 1] & 2) != 0 );
    }
    v11 = *v7;
    if ( ((*v7 - 43) & 0xFD) == 0 )
    {
      ++v7;
      if ( v11 == 45 )
        neg = 1;
    }
    LOBYTE(v4) = *v7;
    if ( *v7 >= 0x41u )
    {
      v12 = v4 | 0x20;
      v13 = 0xFFF8000000000000ui64;
      if ( v12 == 105 && (v7[1] | 0x20) == 110 && (v7[2] | 0x20) == 102 )
      {
        v7 += 3;
        v13 = ((neg ^ 1i64) << 63) - 0x10000000000000i64;
        if ( (*v7 | 0x20) == 105 && (v7[1] | 0x20) == 110 && (v7[2] | 0x20) == 105 && (v7[3] | 0x20) == 116 && (v7[4] | 0x20) == 121 )
          v7 += 5;
      }
      else if ( v12 == 110 && (v7[1] | 0x20) == 97 && (v7[2] | 0x20) == 110 )
      {
        v7 += 3;
      }
      if ( (lj_char_bits[*v7 + 1] & 2) != 0 )
      {
        do
          v14 = *++v7;
        while ( (lj_char_bits[v14 + 1] & 2) != 0 );
      }
      if ( !*v7 )
      {
        o->u64 = v13;
        return 1i64;
      }
      return 0i64;
    }
  }
  v16 = STRSCAN_INT;
  v63 = opt & 0x10;
  v17 = 8;
  if ( (opt & 0x10) == 0 || (v18 = 0, (_BYTE)v4 != 48) )
    v18 = 10;
  v61 = v18;
  v19 = NULL;
  dig = 0;
  v21 = 0;
  v22 = 0;
  ex2 = 0;
  if ( (unsigned __int8)v4 <= 0x30u )
  {
    if ( (_BYTE)v4 != 48 )
      goto LABEL_35;
    v24 = v7[1] | 0x20;
    if ( v24 == 120 )
    {
      v17 = 16;
      v7 += 2;
      v25 = 16;
    }
    else
    {
      if ( v24 != 98 )
        goto LABEL_35;
      v25 = 2;
      v7 += 2;
    }
    v61 = v25;
    while ( 1 )
    {
LABEL_35:
      while ( *v7 == 48 )
      {
        v21 = 1;
        ++v7;
      }
      if ( *v7 != 46 )
        break;
      if ( v19 )
        return 0i64;
      v19 = v7++;
    }
  }
  v26 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      v27 = *v7;
      if ( ((unsigned __int8)v17 & lj_char_bits[v27 + 1]) == 0 )
        break;
      ++dig;
      ++v7;
      v22 = (v27 & 0xF) + 10 * v22;
    }
    if ( (_BYTE)v27 != 46 )
      break;
    if ( v19 )
      return 0i64;
    v19 = v7++;
  }
  if ( !(dig | v21) )
    return 0i64;
  if ( !v19 || (v16 = STRSCAN_NUM, !dig) )
  {
    v30 = v61;
    goto LABEL_55;
  }
  v28 = v7 - 1;
  for ( ex2 = (_DWORD)v19 - (_DWORD)v7 + 1; ex2 < 0; ++ex2 )
  {
    v29 = *v28--;
    if ( v29 != 48 )
      break;
    --dig;
  }
  v30 = v61;
  if ( v61 != 16 )
  {
LABEL_55:
    if ( v30 < 0xA )
      goto LABEL_70;
    goto LABEL_56;
  }
  ex2 *= 4;
LABEL_56:
  v31 = 101;
  if ( v30 == 16 )
    v31 = 112;
  if ( (*v7 | 0x20) == v31 )
  {
    v32 = v7[1];
    v33 = (unsigned __int8 *)(v7 + 1);
    v34 = 0;
    v16 = STRSCAN_NUM;
    if ( ((v32 - 43) & 0xFD) == 0 )
    {
      ++v33;
      if ( v32 == 45 )
        v34 = 1;
    }
    v35 = *v33;
    if ( (lj_char_bits[v35 + 1] & 8) == 0 )
      return 0i64;
    v7 = v33 + 1;
    v36 = v35 & 0xF;
    for ( i = *v7; (lj_char_bits[i + 1] & 8) != 0; ++v7 )
    {
      if ( v36 < 0x10000 )
        v36 = (i & 0xF) + 10 * v36;
      i = v7[1];
    }
    v38 = -v36;
    if ( !v34 )
      v38 = v36;
    v30 = v61;
    ex2 += v38;
  }
LABEL_70:
  if ( !*v7 )
  {
    v40 = opt;
    v41 = v63;
    goto LABEL_97;
  }
  v39 = *v7 | 0x20;
  if ( v39 == 105 )
  {
    v40 = opt;
    if ( (opt & 4) != 0 )
    {
      v41 = v63;
      v16 = STRSCAN_IMAG;
      ++v7;
      goto LABEL_89;
    }
    return 0i64;
  }
  v41 = v63;
  if ( v16 != STRSCAN_INT )
    goto LABEL_88;
  if ( v39 == 117 )
    v16 = STRSCAN_U32;
  v42 = v7 + 1;
  if ( v39 != 117 )
    v42 = v7;
  v7 = v42;
  if ( (*v42 | 0x20) == 108 )
  {
    v7 = v42 + 1;
    if ( (v42[1] | 0x20) == 108 )
    {
      v7 = v42 + 2;
      v16 += 2;
    }
    else if ( !v63 )
    {
      return 0i64;
    }
  }
  if ( (*v7 | 0x20) == 117 && ((v16 - 3) & 0xFFFFFFFD) == 0 )
  {
    ++v7;
    ++v16;
  }
  if ( v16 == STRSCAN_U32 )
  {
    if ( !v63 )
      return 0i64;
    goto LABEL_88;
  }
  if ( (unsigned int)v16 < STRSCAN_I64 )
  {
LABEL_88:
    v40 = opt;
    goto LABEL_89;
  }
  v40 = opt;
  if ( (opt & 8) == 0 )
    return 0i64;
LABEL_89:
  if ( (lj_char_bits[*v7 + 1] & 2) != 0 )
  {
    do
      v43 = *++v7;
    while ( (lj_char_bits[v43 + 1] & 2) != 0 );
  }
  if ( *v7 )
    return 0i64;
LABEL_97:
  if ( v16 == STRSCAN_INT && v30 == 10 )
  {
    if ( dig < 0xA || dig == 10 && *v26 <= 0x32u && v22 < neg + 0x80000000 )
    {
      _EAX = -v22;
      if ( !neg )
        _EAX = v22;
      if ( (v40 & 2) != 0 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, eax
          vmovsd  qword ptr [r12], xmm0
        }
        return 1i64;
      }
      goto LABEL_107;
    }
    goto LABEL_158;
  }
  if ( !v30 )
  {
    if ( (unsigned int)(v16 - 1) > 1 )
    {
      v47 = 0i64;
      if ( dig <= 0x16 )
      {
        if ( dig == 22 )
        {
          if ( *v26 <= 0x31u )
          {
LABEL_115:
            while ( 1 )
            {
              v48 = *v26;
              --dig;
              if ( (unsigned __int8)(*v26 - 48) > 7u )
                break;
              ++v26;
              v47 = (v48 & 7) + 8 * v47;
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
          if ( v16 == STRSCAN_INT )
          {
            if ( v47 >= neg + 0x80000000 )
              v16 = STRSCAN_U32;
          }
          else if ( v16 != STRSCAN_U32 )
          {
            v49 = -(__int64)v47;
            if ( !neg )
              v49 = v47;
            _R12->u64 = v49;
            return (unsigned int)v16;
          }
          if ( (v47 & 0xFFFFFFFF00000000ui64) == 0 )
          {
            v5 = v16;
            v50 = -(int)v47;
            if ( !neg )
              v50 = v47;
            _R12->i = v50;
          }
        }
      }
      return (unsigned int)v5;
    }
    goto LABEL_158;
  }
  if ( v30 != 16 )
  {
    if ( v30 != 2 )
    {
LABEL_158:
      v51 = strscan_dec(v26, _R12, v16, v40, ex2, neg, dig);
      goto LABEL_159;
    }
    v52 = 0i64;
    if ( !ex2 && dig <= 0x40 )
    {
      v53 = dig;
      if ( dig )
      {
        do
        {
          v54 = *v26;
          if ( (*v26 & 0xFE) != 48 )
            return 0i64;
          ++v26;
          v52 = (2 * v52) | v54 & 1;
        }
        while ( --v53 );
      }
      if ( v16 == STRSCAN_INT )
      {
        if ( (v40 & 2) == 0 && v52 < neg + 0x80000000 )
        {
          v56 = -(int)v52;
          if ( !neg )
            v56 = v52;
          _R12->i = v56;
          return 3i64;
        }
        if ( !v41 )
        {
          v16 = STRSCAN_NUM;
          goto LABEL_151;
        }
      }
      else if ( v16 != STRSCAN_U32 )
      {
        if ( (unsigned int)(v16 - 5) <= 1 )
        {
          v55 = -(__int64)v52;
          if ( !neg )
            v55 = v52;
          _R12->u64 = v55;
          goto LABEL_160;
        }
LABEL_151:
        if ( (v52 & 0xC000000000000000ui64) != 0 )
        {
          ex2 = 2;
          v52 = v52 & 3 | (v52 >> 2);
        }
        strscan_double(v52, _R12, ex2, neg);
        goto LABEL_160;
      }
      if ( dig <= 0x20 )
      {
        v57 = -(int)v52;
        if ( !neg )
          v57 = v52;
        _R12->i = v57;
        return 4i64;
      }
    }
    return 0i64;
  }
  v51 = strscan_hex(v26, _R12, v16, v40, ex2, neg, dig);
LABEL_159:
  v16 = v51;
LABEL_160:
  if ( v16 == STRSCAN_NUM && (v40 & 1) != 0 )
  {
    __asm
    {
      vmovsd  xmm1, qword ptr [r12]
      vcvttsd2si eax, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, eax
      vucomisd xmm1, xmm0
    }
    if ( (v40 & 1) == 0 )
    {
LABEL_107:
      _R12->i = _EAX;
      return 3i64;
    }
  }
  return (unsigned int)v16;
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
  unsigned __int8 *v9; 
  unsigned int v10; 
  char v12; 
  int v14; 
  unsigned int v15; 
  unsigned __int8 *v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  const unsigned __int8 *v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  const unsigned __int8 *v22; 
  unsigned __int8 v23; 
  const unsigned __int8 *v24; 
  unsigned __int8 v25; 
  unsigned __int8 v26; 
  const unsigned __int8 *v27; 
  unsigned __int8 v28; 
  const unsigned __int8 *v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  char *v32; 
  unsigned __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v37; 
  unsigned int v46; 
  int v47; 
  __int64 v48; 
  unsigned __int64 v49; 
  bool v50; 
  __int64 v51; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  __int64 v55; 
  unsigned int v56; 
  int v57; 
  unsigned int v58; 
  int v59; 
  __int64 v60; 
  unsigned int v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  unsigned __int64 v65; 
  int i; 
  int v67; 
  unsigned __int8 v68; 
  char v69[511]; 

  _R12 = o;
  v9 = &v68;
  v10 = dig;
  _R14 = 0i64;
  v12 = opt;
  if ( dig )
  {
    if ( dig <= 0x320 )
      v14 = ex10;
    else
      v14 = ex10 + dig - 800;
    v15 = 800;
    v16 = &v68;
    if ( dig <= 0x320 )
      v15 = dig;
    if ( (((unsigned __int8)v14 ^ (unsigned __int8)v15) & 1) != 0 )
    {
      v17 = *p;
      v18 = *p;
      if ( *p == 46 )
        v18 = p[1];
      v9 = (unsigned __int8 *)v69;
      --v15;
      v68 = v18 & 0xF;
      v16 = (unsigned __int8 *)v69;
      if ( v17 == 46 )
        ++p;
      ++p;
    }
    if ( v15 > 1 )
    {
      _R14 = ((v15 - 2) >> 1) + 1;
      do
      {
        v19 = p;
        v20 = *p;
        if ( *p == 46 )
          v20 = p[1];
        if ( *p == 46 )
          v19 = p + 1;
        v21 = v19[1];
        v22 = v19 + 1;
        v23 = v21;
        if ( v21 == 46 )
          v23 = v19[2];
        *v9++ = (v23 & 0xF) + 10 * (v20 & 0xF);
        v16 = v9;
        if ( v21 == 46 )
          v22 = v19 + 2;
        v15 -= 2;
        p = v22 + 1;
        --_R14;
      }
      while ( _R14 );
    }
    v24 = p;
    if ( v15 )
    {
      v25 = *p;
      if ( *p == 46 )
        v26 = p[1];
      else
        v26 = *p;
      --v14;
      v10 = dig + 1;
      *v9 = 10 * (v26 & 0xF);
      v27 = v24;
      v9 = v16 + 1;
      if ( v25 == 46 )
        v27 = v24 + 1;
      p = v27 + 1;
    }
    if ( v10 > 0x320 )
    {
      while ( 1 )
      {
        v28 = *p;
        v29 = p;
        if ( *p == 46 )
          v30 = p[1];
        else
          v30 = *p;
        if ( v28 == 46 )
          ++v29;
        if ( v30 != 48 )
          break;
        --v10;
        p = v29 + 1;
        if ( v10 <= 0x320 )
          goto LABEL_39;
      }
      *(v9 - 1) |= 1u;
      goto LABEL_39;
    }
    for ( ; v14 > 0; v10 += 2 )
    {
      if ( v10 > 0x12 )
        break;
      *v9 = 0;
      v14 -= 2;
      ++v9;
    }
    if ( v10 > 0x14 || v14 )
      goto LABEL_39;
  }
  else
  {
    v14 = 0;
    v68 = 0;
  }
  v31 = v68;
  v32 = v69;
  v33 = v9 - (unsigned __int8 *)v69;
  if ( v69 > (char *)v9 )
    v33 = _R14;
  if ( v33 )
  {
    do
    {
      v34 = (unsigned __int8)*v32++;
      v31 = v34 + 100 * v31;
    }
    while ( v32 - v69 < v33 );
  }
  if ( v10 == 20 && (v68 > 0x12u || v31 >= 0) )
    goto LABEL_39;
  if ( fmt == STRSCAN_INT )
  {
    if ( (v12 & 2) == 0 && v31 < (unsigned __int64)(neg + 0x80000000) )
    {
      v37 = -(int)v31;
      if ( !neg )
        v37 = v31;
      _R12->i = v37;
      return 3i64;
    }
    if ( (v12 & 0x10) == 0 )
    {
      fmt = STRSCAN_NUM;
      goto $plainnumber;
    }
  }
  else if ( fmt != STRSCAN_U32 )
  {
    if ( (unsigned int)(fmt - 5) <= 1 )
    {
      v35 = -v31;
      if ( !neg )
        v35 = v31;
      _R12->u64 = v35;
      return (unsigned int)fmt;
    }
$plainnumber:
    if ( v31 >= 0 )
    {
      __asm
      {
        vmovd   xmm0, [rbp+150h+neg]
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2sd xmm4, xmm4, r8
        vxorpd  xmm3, xmm4, cs:__xmm@80000000000000008000000000000000
        vmovd   xmm1, r14d
        vpcmpeqd xmm2, xmm0, xmm1
        vshufps xmm2, xmm2, xmm2, 0
        vblendvpd xmm0, xmm3, xmm4, xmm2
        vmovsd  qword ptr [r12], xmm0
      }
      return (unsigned int)fmt;
    }
LABEL_39:
    if ( fmt == STRSCAN_INT )
    {
      if ( (v12 & 0x10) == 0 )
      {
        fmt = STRSCAN_NUM;
        goto LABEL_73;
      }
    }
    else if ( fmt <= STRSCAN_INT )
    {
LABEL_73:
      v46 = (_DWORD)v9 - (unsigned int)&v68;
      v47 = v46 + (v14 >> 1);
      LODWORD(v48) = _R14;
      if ( (!v46 || (v14 & 1) != 0) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strscan.c", 265, "lo > 0 && (ex10 & 1) == 0") )
        __debugbreak();
      if ( v47 > 155 )
      {
        v49 = 0xFFF0000000000000ui64;
        if ( !neg )
          v49 = 0x7FF0000000000000i64;
        _R12->u64 = v49;
        return (unsigned int)fmt;
      }
      if ( v47 < -163 )
      {
        _R12->u64 = 0x8000000000000000ui64;
        return (unsigned int)fmt;
      }
      v50 = v47 <= 9;
      if ( v47 < 9 )
      {
        do
        {
          if ( v47 >= ((v46 - v48) & 0x1FF) )
            break;
          LODWORD(_R14) = _R14 - 6;
          LODWORD(v51) = ((_WORD)v46 - 1) & 0x1FF;
          v52 = (5243 * ((unsigned int)(v69[(((_WORD)v46 - 1) & 0x1FF) - 1] << 6) >> 2)) >> 17;
          v53 = -100 * v52 + (v69[(((_WORD)v46 - 1) & 0x1FF) - 1] << 6);
          for ( v69[(((_WORD)v46 - 1) & 0x1FF) - 1] = -100 * v52 + (v69[(((_WORD)v46 - 1) & 0x1FF) - 1] << 6); (_DWORD)v51 != (_DWORD)v48; v69[v51 - 1] = v53 )
          {
            if ( !v53 && (_DWORD)v51 == (((_WORD)v46 - 1) & 0x1FF) )
              v46 = v51;
            v51 = ((_WORD)v51 - 1) & 0x1FF;
            v54 = v52 + (v69[v51 - 1] << 6);
            v52 = (5243 * (v54 >> 2)) >> 17;
            v53 = -100 * v52 + v54;
          }
          if ( v52 )
          {
            v48 = ((_WORD)v48 - 1) & 0x1FF;
            if ( v69[(((_WORD)v46 - 1) & 0x1FF) - 1] )
            {
              if ( (_DWORD)v48 == v46 )
              {
                v55 = ((_WORD)v46 - 1) & 0x1FF;
                v46 = ((_WORD)v46 - 1) & 0x1FF;
                v69[(((_WORD)v55 - 1) & 0x1FF) - 1] |= v69[v55 - 1];
              }
            }
            else
            {
              v46 = ((_WORD)v46 - 1) & 0x1FF;
            }
            v69[v48 - 1] = v52;
            ++v47;
          }
        }
        while ( v47 < 9 );
        v50 = v47 <= 9;
      }
      if ( !v50 )
      {
        do
        {
          v56 = 0;
          v57 = v48;
          LODWORD(_R14) = _R14 + 6;
          do
          {
            v58 = v69[v57 - 1] + v56;
            v59 = v58 & 0x3F;
            v58 >>= 6;
            v56 = 100 * v59;
            v69[v57 - 1] = v58;
            if ( !(_BYTE)v58 && v57 == (_DWORD)v48 )
            {
              LODWORD(v48) = ((_WORD)v48 + 1) & 0x1FF;
              --v47;
            }
            v57 = ((_WORD)v57 + 1) & 0x1FF;
          }
          while ( v57 != v46 );
          if ( v56 )
          {
            while ( (_DWORD)v48 != v46 )
            {
              v60 = v46;
              v61 = v56 >> 6;
              v56 = 100 * (v56 & 0x3F);
              v46 = ((_WORD)v46 + 1) & 0x1FF;
              v69[v60 - 1] = v61;
              if ( !v56 )
                goto LABEL_109;
            }
            v69[(((_WORD)v46 - 1) & 0x1FF) - 1] |= 1u;
          }
LABEL_109:
          ;
        }
        while ( v47 > 9 );
      }
      v62 = (unsigned int)v48;
      v63 = v47 - 1;
      v64 = ((_WORD)v48 + 1) & 0x1FF;
      v65 = v69[v62 - 1];
      if ( v63 <= 0 )
      {
LABEL_113:
        if ( (_DWORD)v64 != v46 )
        {
          v65 *= 2i64;
          LODWORD(_R14) = _R14 - 1;
          while ( !v69[v64 - 1] )
          {
            v64 = ((_WORD)v64 + 1) & 0x1FF;
            if ( (_DWORD)v64 == v46 )
              goto LABEL_122;
          }
          v65 |= 1ui64;
          goto LABEL_122;
        }
      }
      else
      {
        while ( (_DWORD)v64 != v46 )
        {
          --v63;
          v65 = v69[v64 - 1] + 100 * v65;
          v64 = ((_WORD)v64 + 1) & 0x1FF;
          if ( v63 <= 0 )
            goto LABEL_113;
        }
      }
      for ( i = v63 - 1; i >= 0; --i )
        v65 *= 100i64;
LABEL_122:
      strscan_double(v65, _R12, _R14, neg);
      return (unsigned int)fmt;
    }
    return 0i64;
  }
  if ( (v31 & 0xFFFFFFFF00000000ui64) != 0 )
    return 0i64;
  v67 = -(int)v31;
  if ( !neg )
    v67 = v31;
  _R12->i = v67;
  return 4i64;
}

/*
==============
strscan_double
==============
*/
void strscan_double(unsigned __int64 x, TValue *o, int ex2, int neg)
{
  signed __int64 v5; 
  bool v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 

  v5 = x;
  _EBP = neg;
  _RSI = o;
  if ( ex2 > -1075 )
  {
LABEL_11:
    v9 = v5 < 0;
    goto LABEL_12;
  }
  v9 = (x & 0x8000000000000000ui64) != 0i64;
  if ( x )
  {
    if ( HIDWORD(x) )
    {
      _BitScanReverse(&v10, HIDWORD(x));
      v11 = v10 + 32;
    }
    else
    {
      _BitScanReverse((unsigned int *)&v11, x);
    }
    if ( (unsigned int)(v11 + ex2 + 1075) <= 0x34 )
    {
      v12 = 1i64 << (-51 - (unsigned __int8)ex2);
      if ( (v12 & x) != 0 && ((3 * v12 - 1) & x) != 0 )
        v5 = x + 2 * v12;
      v5 &= ~(2 * v12 - 1);
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_strscan.c", 96, "(int64_t)x >= 0") )
    __debugbreak();
  _EAX = 0;
  __asm
  {
    vmovd   xmm0, ebp
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2sd xmm4, xmm4, rbx
    vxorpd  xmm3, xmm4, cs:__xmm@80000000000000008000000000000000
    vshufps xmm2, xmm2, xmm2, 0
    vblendvpd xmm0, xmm3, xmm4, xmm2; X
    vmovsd  [rsp+28h+arg_0], xmm0
  }
  if ( ex2 )
    *(double *)&_XMM0 = ldexp(*(double *)&_XMM0, ex2);
  __asm { vmovsd  qword ptr [rsi], xmm0 }
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

