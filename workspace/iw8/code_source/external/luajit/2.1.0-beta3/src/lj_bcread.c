/*
==============
lj_bcread_proto
==============
*/
GCproto *lj_bcread_proto(LexState *ls)
{
  unsigned int v1; 
  unsigned int v3; 
  const char *p; 
  unsigned __int8 v5; 
  const char *v6; 
  unsigned __int8 v7; 
  const char *v8; 
  unsigned __int8 v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  GCproto *v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v26; 
  __int64 v31; 
  __int64 v34; 
  __int64 v35; 
  unsigned int *v36; 
  unsigned int v37; 
  __int16 *ptr64; 
  __int64 v39; 
  __int16 v40; 
  unsigned int *v41; 
  __int64 v42; 
  const char *v43; 
  const char *v44; 
  int v45; 
  unsigned int v46; 
  int v47; 
  char v48; 
  char v49; 
  unsigned int v50; 
  char v53; 
  __int16 *v54; 
  int numline; 
  unsigned int v56; 
  __int64 v57; 
  __int16 v58; 
  unsigned int v59; 
  __int64 v60; 
  __int64 v63; 
  __int64 v68; 
  __int64 v71; 
  unsigned int *v72; 
  unsigned int v73; 
  int sizeuv; 
  _BYTE *v75; 
  unsigned int v78; 
  int v79; 
  unsigned int len; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int sizekgc; 
  unsigned int v84; 
  unsigned __int8 v85; 
  unsigned __int8 v86; 
  unsigned __int8 v87; 
  unsigned int v88; 

  v1 = 0;
  v3 = 0;
  len = 0;
  v78 = 0;
  v79 = 0;
  if ( ls->p >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  p = ls->p;
  v5 = *p++;
  v87 = v5;
  ls->p = p;
  if ( p >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v6 = ls->p;
  v7 = *v6++;
  v85 = v7;
  ls->p = v6;
  if ( v6 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v8 = ls->p;
  v9 = *v8++;
  v86 = v9;
  ls->p = v8;
  if ( v8 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v10 = ls->p;
  v11 = *(unsigned __int8 *)v10;
  ls->p = v10 + 1;
  v82 = v11;
  v12 = j_lj_buf_ruleb128(&ls->p);
  sizekgc = v12;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v13 = j_lj_buf_ruleb128(&ls->p);
  v88 = v13;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v14 = j_lj_buf_ruleb128(&ls->p);
  v81 = v14;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v15 = v14 + 1;
  if ( (ls->level & 2) == 0 )
  {
    v3 = j_lj_buf_ruleb128(&ls->p);
    len = v3;
    if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
      __debugbreak();
    if ( v3 )
    {
      v78 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      v79 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
    }
  }
  v16 = (4 * (v15 + 2 * v12) + 111) & 0xFFFFFFF8;
  v17 = v16 + 8 * v13;
  v84 = v17 + 2 * ((v11 + 1) & 0xFFFFFFFE);
  v18 = v3 + v84;
  v19 = (GCproto *)j_lj_mem_newgco(ls->L, v3 + v84);
  v19->gct = 7;
  v19->numparams = v85;
  v19->framesize = v86;
  v19->k.ptr64 = (unsigned __int64)v19 + v16;
  v19->sizept = v18;
  v19->sizebc = v15;
  v19->sizekgc = 0;
  v19->trace = 0;
  v19->uv.ptr64 = (unsigned __int64)v19 + v17;
  v19->sizekn = v88;
  v19->flags = v87;
  v19->sizeuv = v82;
  v20 = 89;
  v19->chunkname.gcptr64 = (unsigned __int64)ls->chunkname;
  *(_DWORD *)((char *)&v19->nextgc.gcptr64 + (unsigned int)v16 - 8i64 * (sizekgc + 1)) = 0;
  if ( (v19->flags & 2) != 0 )
    v20 = 92;
  LODWORD(v19[1].nextgc.gcptr64) = (v19->framesize << 8) | v20;
  bcread_block(ls, (char *)&v19[1].nextgc.gcptr64 + 4, 4 * v81);
  if ( (ls->level & 1) != 0 )
  {
    v21 = 1;
    if ( v15 > 1 )
    {
      if ( v81 >= 0x10 )
      {
        v22 = 9;
        do
        {
          v23 = v21;
          v21 += 16;
          _XMM0 = *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v23);
          __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
          *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v23) = _XMM1;
          v26 = v22 - 4;
          _XMM0 = *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v26);
          __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
          *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v26) = _XMM1;
          _XMM0 = *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v22);
          __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
          *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v22) = _XMM1;
          v31 = v22 + 4;
          v22 += 16;
          _XMM0 = *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v31);
          __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
          *(_OWORD *)((char *)&v19[1].nextgc.gcptr64 + 4 * v31) = _XMM1;
        }
        while ( v21 < v15 - (v81 & 0xF) );
      }
      if ( v21 < v15 )
      {
        v34 = v21;
        v35 = v15 - v21;
        v36 = (unsigned int *)((char *)&v19[1] + 4 * v34);
        do
        {
          v37 = *v36++;
          *(v36 - 1) = _byteswap_ulong(v37);
          --v35;
        }
        while ( v35 );
      }
    }
  }
  if ( v82 )
  {
    ptr64 = (__int16 *)v19->uv.ptr64;
    bcread_block(ls, ptr64, 2 * v82);
    if ( (ls->level & 1) != 0 )
    {
      v39 = v82;
      do
      {
        v40 = *ptr64++;
        *(ptr64 - 1) = __ROL2__(v40, 8);
        --v39;
      }
      while ( v39 );
    }
  }
  bcread_kgc(ls, v19, sizekgc);
  v41 = (unsigned int *)v19->k.ptr64;
  v19->sizekgc = sizekgc;
  if ( v88 )
  {
    v42 = v88;
    do
    {
      v43 = ls->p;
      v44 = v43 + 1;
      v45 = *v43 & 1;
      v46 = *(unsigned __int8 *)v43 >> 1;
      if ( v46 >= 0x40 )
      {
        v47 = -1;
        v46 &= 0x3Fu;
        do
        {
          v48 = *v44;
          v47 += 7;
          v49 = *v44++;
          v46 |= (v49 & 0x7F) << v47;
        }
        while ( (unsigned __int8)v48 >= 0x80u );
      }
      ls->p = v44;
      if ( v44 > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 147, "ls->p <= ls->pe") )
        __debugbreak();
      if ( v45 )
      {
        *v41 = v46;
        v50 = j_lj_buf_ruleb128(&ls->p);
        if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
          __debugbreak();
        v41[1] = v50;
      }
      else
      {
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, ebx }
        *(double *)v41 = *(double *)&_XMM0;
      }
      v41 += 2;
      --v42;
    }
    while ( v42 );
  }
  v19->firstline = v78;
  v19->numline = v79;
  if ( len )
  {
    v53 = 0;
    if ( v79 >= 256 )
      v53 = (v79 >= 0x10000) + 1;
    v54 = (__int16 *)((char *)v19 + v84);
    v19->uvinfo.ptr64 = (unsigned __int64)v19 + v84 + (unsigned __int64)(v81 << v53);
    v19->lineinfo.ptr64 = (unsigned __int64)v54;
    bcread_block(ls, v54, len);
    if ( (ls->level & 1) != 0 )
    {
      numline = v19->numline;
      if ( numline >= 256 )
      {
        v56 = v19->sizebc - 1;
        if ( numline >= 0x10000 )
        {
          if ( v19->sizebc != 1 )
          {
            if ( v56 >= 0x10 )
            {
              v59 = 8;
              do
              {
                v60 = v1;
                v1 += 16;
                _XMM0 = *(_OWORD *)&v54[2 * v60];
                __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
                *(_OWORD *)&v54[2 * v60] = _XMM1;
                v63 = v59 - 4;
                _XMM0 = *(_OWORD *)&v54[2 * v63];
                __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
                *(_OWORD *)&v54[2 * v63] = _XMM1;
                _XMM0 = *(_OWORD *)&v54[2 * v59];
                __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
                *(_OWORD *)&v54[2 * v59] = _XMM1;
                v68 = v59 + 4;
                v59 += 16;
                _XMM0 = *(_OWORD *)&v54[2 * v68];
                __asm { vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203 }
                *(_OWORD *)&v54[2 * v68] = _XMM1;
              }
              while ( v1 < (v56 & 0xFFFFFFF0) );
            }
            if ( v1 < v56 )
            {
              v71 = v56 - v1;
              v72 = (unsigned int *)&v54[2 * v1];
              do
              {
                v73 = *v72++;
                *(v72 - 1) = _byteswap_ulong(v73);
                --v71;
              }
              while ( v71 );
            }
          }
        }
        else if ( v19->sizebc != 1 )
        {
          v57 = v56;
          do
          {
            v58 = *v54++;
            *(v54 - 1) = __ROL2__(v58, 8);
            --v57;
          }
          while ( v57 );
        }
      }
    }
    sizeuv = v19->sizeuv;
    v75 = (_BYTE *)v19->uvinfo.ptr64;
    if ( v19->sizeuv )
    {
      do
      {
        while ( *v75++ )
          ;
        --sizeuv;
      }
      while ( sizeuv );
    }
    v19->varinfo.ptr64 = (unsigned __int64)v75;
  }
  else
  {
    v19->lineinfo.ptr64 = 0i64;
    v19->uvinfo.ptr64 = 0i64;
    v19->varinfo.ptr64 = 0i64;
  }
  return v19;
}

/*
==============
lj_bcread
==============
*/
GCproto *lj_bcread(LexState *ls)
{
  lua_State *L; 
  const char *p; 
  const char *pe; 
  __int64 v5; 
  const char *v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 *v9; 

  L = ls->L;
  if ( ls->c != 27 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 424, "ls->c == 0x1b") )
    __debugbreak();
  ls->lastline = LODWORD(L->top) - LODWORD(L->stack.ptr64);
  ls->sb.p.ptr64 = ls->sb.b.ptr64;
  if ( !bcread_header(ls) )
    bcread_error(ls, LJ_ERR_BCFMT);
  while ( 1 )
  {
    p = ls->p;
    pe = ls->pe;
    if ( p < pe && !*p )
      break;
    if ( p + 5 > pe )
      bcread_fill(ls, 5u, 0);
    v5 = j_lj_buf_ruleb128(&ls->p);
    if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
      __debugbreak();
    if ( !(_DWORD)v5 )
      goto LABEL_24;
    v6 = ls->p;
    if ( &v6[v5] > ls->pe )
    {
      bcread_fill(ls, v5, 1);
      v6 = ls->p;
    }
    v7 = (unsigned __int64)j_lj_bcread_proto(ls);
    if ( ls->p != &v6[v5] )
      goto LABEL_30;
    v8 = (__int64)(v7 | 0xFFFC000000000000ui64) >> 47;
    L->top->u64 = v7 | 0xFFFC000000000000ui64;
    if ( (unsigned int)(v8 + 4) > 0xFFFFFFF6 && (~(_DWORD)v8 != *(unsigned __int8 *)((v7 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v7 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
    if ( ++L->top >= (TValue *)L->maxstack.ptr64 )
      j_lj_state_growstack1(L);
  }
  ls->p = p + 1;
LABEL_24:
  if ( 2 * (LODWORD(ls->pe) - LODWORD(ls->p)) > 0 || (v9 = (__int64 *)&L->top[-1], v9 != (__int64 *)(L->stack.ptr64 + ls->lastline)) )
LABEL_30:
    bcread_error(ls, LJ_ERR_BCBAD);
  L->top = (TValue *)v9;
  if ( (unsigned int)(*v9 >> 47) != -8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 455, "(((uint32_t)((L->top)->it64 >> 47)) == (~7u))") )
    __debugbreak();
  return (GCproto *)(L->top->u64 & 0x7FFFFFFFFFFFi64);
}

/*
==============
bcread_block
==============
*/
void bcread_block(LexState *ls, void *q, unsigned int len)
{
  const char *p; 
  size_t v5; 
  const char *v6; 

  p = ls->p;
  v5 = len;
  v6 = &p[len];
  ls->p = v6;
  if ( v6 > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 109, "ls->p <= ls->pe") )
    __debugbreak();
  memcpy_0(q, p, v5);
}

/*
==============
bcread_error
==============
*/
void __noreturn bcread_error(LexState *ls, ErrMsg em)
{
  const char *chunkarg; 
  lua_State *L; 
  char v4; 

  chunkarg = ls->chunkarg;
  L = ls->L;
  v4 = *chunkarg;
  if ( *chunkarg == 27 )
  {
    chunkarg = "(binary)";
  }
  else if ( v4 == 64 || v4 == 61 )
  {
    ++chunkarg;
  }
  j_lj_strfmt_pushf(ls->L, "%s: %s", chunkarg, &lj_err_allmsg[em]);
  j_lj_err_throw(L, 3);
}

/*
==============
bcread_fill
==============
*/
void bcread_fill(LexState *ls, unsigned int len, int need)
{
  __int64 v3; 
  const char *v6; 
  const char *pe; 
  char *ptr64; 
  unsigned int v9; 
  const char *p; 
  void *rdata; 
  lua_State *L; 
  const char *v13; 
  const char *v14; 
  size_t v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *v18; 
  const char *v19; 
  const char *v20; 
  size_t Size; 

  v3 = len;
  if ( len )
  {
    if ( len > 0x7FFFFF00 )
      goto LABEL_33;
  }
  else if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 50, "len != 0") )
  {
    __debugbreak();
  }
  if ( ls->c < 0 )
LABEL_33:
    bcread_error(ls, LJ_ERR_BCBAD);
  LODWORD(v6) = ls->p;
  LODWORD(pe) = ls->pe;
  while ( 1 )
  {
    ptr64 = (char *)ls->sb.b.ptr64;
    v9 = (_DWORD)pe - (_DWORD)v6;
    if ( v9 )
    {
      if ( LODWORD(ls->sb.p.ptr64) == (_DWORD)ptr64 )
      {
        if ( (unsigned int)v3 <= LODWORD(ls->sb.e.ptr64) - LODWORD(ls->sb.b.ptr64) )
          ptr64 = (char *)ls->sb.b.ptr64;
        else
          ptr64 = j_lj_buf_need2(&ls->sb, v3);
        memcpy_0(ptr64, ls->p, v9);
      }
      else
      {
        if ( ls->pe != (const char *)ls->sb.p.ptr64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 60, "ls->pe == (((char *)(void *)((&ls->sb)->p).ptr64))") )
          __debugbreak();
        p = ls->p;
        if ( p != ptr64 )
          memmove_0(ptr64, p, v9);
      }
      ls->p = ptr64;
      ls->pe = &ptr64[v9];
    }
    rdata = ls->rdata;
    L = ls->L;
    ls->sb.p.ptr64 = (unsigned __int64)&ptr64[v9];
    v13 = ls->rfunc(L, rdata, &Size);
    v14 = v13;
    if ( !v13 )
      break;
    v15 = Size;
    if ( !Size )
      break;
    if ( v9 )
    {
      v16 = Size + v9;
      v17 = v16;
      if ( v16 < (unsigned int)v3 )
        v17 = v3;
      if ( v17 <= LODWORD(ls->sb.e.ptr64) - LODWORD(ls->sb.b.ptr64) )
      {
        v19 = (const char *)ls->sb.b.ptr64;
      }
      else
      {
        v18 = j_lj_buf_need2(&ls->sb, v17);
        v15 = Size;
        v19 = v18;
      }
      memcpy_0((void *)ls->sb.p.ptr64, v14, v15);
      v20 = &v19[v16];
      ls->sb.p.ptr64 = (unsigned __int64)v20;
    }
    else
    {
      v20 = &v13[Size];
      v19 = v13;
    }
    ls->p = v19;
    ls->pe = v20;
    v6 = ls->p;
    pe = ls->pe;
    if ( &v6[v3] <= pe )
      return;
  }
  if ( need )
    bcread_error(ls, LJ_ERR_BCBAD);
  ls->c = -1;
}

/*
==============
bcread_header
==============
*/
__int64 bcread_header(LexState *ls)
{
  const char *p; 
  const char *pe; 
  const char *v4; 
  char v5; 
  const char *v6; 
  const char *v7; 
  char v8; 
  const char *v9; 
  const char *v10; 
  char v11; 
  unsigned int v12; 
  const char *chunkarg; 
  unsigned __int64 v14; 
  unsigned __int64 v16; 
  const char *v17; 
  const char *v18; 

  p = ls->p;
  pe = ls->pe;
  if ( p + 13 > pe )
  {
    bcread_fill(ls, 0xDu, 0);
    p = ls->p;
    pe = ls->pe;
  }
  if ( p >= pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v4 = ls->p;
  v5 = *v4;
  v6 = v4 + 1;
  ls->p = v6;
  if ( v5 != 76 )
    return 0i64;
  if ( v6 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v7 = ls->p;
  v8 = *v7;
  v9 = v7 + 1;
  ls->p = v9;
  if ( v8 != 74 )
    return 0i64;
  if ( v9 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v10 = ls->p;
  v11 = *v10;
  ls->p = v10 + 1;
  if ( v11 != 2 )
    return 0i64;
  v12 = j_lj_buf_ruleb128(&ls->p);
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  ls->level = v12;
  if ( (v12 & 0xFFFFFFF0) != 0 || (v12 & 8) == 0 || (v12 & 4) != 0 )
    return 0i64;
  if ( (v12 & 2) != 0 )
  {
    chunkarg = ls->chunkarg;
    v14 = -1i64;
    do
      ++v14;
    while ( chunkarg[v14] );
    ls->chunkname = j_lj_str_new(ls->L, chunkarg, v14);
    return 1i64;
  }
  else
  {
    v16 = j_lj_buf_ruleb128(&ls->p);
    if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
      __debugbreak();
    v17 = ls->p;
    v18 = ls->pe;
    if ( &v17[v16] > v18 )
    {
      bcread_fill(ls, v16, 1);
      v18 = ls->pe;
      v17 = ls->p;
    }
    ls->p = &v17[v16];
    if ( &v17[v16] > v18 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 109, "ls->p <= ls->pe") )
      __debugbreak();
    ls->chunkname = j_lj_str_new(ls->L, v17, v16);
    return 1i64;
  }
}

/*
==============
bcread_kgc
==============
*/
void bcread_kgc(LexState *ls, GCproto *pt, unsigned int sizekgc)
{
  GCtab **v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  const char *p; 
  unsigned __int64 v9; 
  const char *v10; 
  GCtab *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  GCtab *v16; 
  TValue *ptr64; 
  __int64 v18; 
  TValue *v19; 
  lua_State *L; 
  unsigned __int64 top; 
  TValue o; 
  unsigned int v23; 

  if ( sizekgc )
  {
    v23 = sizekgc;
    v4 = (GCtab **)(pt->k.ptr64 - 8i64 * sizekgc);
    v5 = 0;
    do
    {
      v6 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      if ( v6 < 5 )
      {
        if ( v6 == 1 )
        {
          v12 = j_lj_buf_ruleb128(&ls->p);
          if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
            __debugbreak();
          v13 = j_lj_buf_ruleb128(&ls->p);
          if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
            __debugbreak();
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 == 1 )
            {
              v14 = 1;
            }
            else
            {
              _BitScanReverse(&v15, v13 - 1);
              v14 = v15 + 1;
            }
          }
          else
          {
            v14 = 0;
          }
          v16 = j_lj_tab_new(ls->L, v12, v14);
          v11 = v16;
          if ( (_DWORD)v12 )
          {
            ptr64 = (TValue *)v16->array.ptr64;
            do
            {
              bcread_ktabk(ls, ptr64++);
              --v12;
            }
            while ( v12 );
          }
          if ( (_DWORD)v13 )
          {
            v18 = v13;
            do
            {
              bcread_ktabk(ls, &o);
              if ( o.u64 == -1i64 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 216, "!((&key)->it64 == -1)") )
                __debugbreak();
              v19 = j_lj_tab_set(ls->L, v11, &o);
              bcread_ktabk(ls, v19);
              --v18;
            }
            while ( v18 );
          }
        }
        else
        {
          L = ls->L;
          if ( v6 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 253, "tp == BCDUMP_KGC_CHILD") )
            __debugbreak();
          top = (unsigned __int64)L->top;
          if ( top <= L->stack.ptr64 + ls->lastline )
            bcread_error(ls, LJ_ERR_BCBAD);
          L->top = (TValue *)(top - 8);
          if ( (unsigned int)(*(__int64 *)(top - 8) >> 47) != -8 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 257, "(((uint32_t)((L->top)->it64 >> 47)) == (~7u))") )
            __debugbreak();
          v11 = (GCtab *)(L->top->u64 & 0x7FFFFFFFFFFFi64);
        }
      }
      else
      {
        v7 = v6 - 5;
        p = ls->p;
        v9 = (unsigned int)v7;
        v10 = &p[v7];
        ls->p = v10;
        if ( v10 > ls->pe )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 109, "ls->p <= ls->pe") )
            __debugbreak();
        }
        v11 = (GCtab *)j_lj_str_new(ls->L, p, v9);
      }
      *v4 = v11;
      ++v5;
      ++v4;
    }
    while ( v5 < v23 );
  }
}

/*
==============
bcread_ktabk
==============
*/
void bcread_ktabk(LexState *ls, TValue *o)
{
  __int64 v4; 
  __int64 v5; 
  const char *p; 
  unsigned __int64 v7; 
  const char *v8; 
  unsigned __int64 v9; 
  lua_State *L; 
  __int64 v11; 
  int v14; 
  unsigned int v15; 

  v4 = j_lj_buf_ruleb128(&ls->p);
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  if ( (unsigned int)v4 < 5 )
  {
    if ( (_DWORD)v4 == 3 )
    {
      j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, edi }
      o->u64 = *(unsigned __int64 *)&_XMM0;
    }
    else if ( (_DWORD)v4 == 4 )
    {
      v14 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      o->i = v14;
      v15 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      o->it = v15;
    }
    else
    {
      o->u64 = ~(v4 << 47);
    }
  }
  else
  {
    v5 = (unsigned int)(v4 - 5);
    p = ls->p;
    v7 = (unsigned int)v5;
    v8 = &p[v5];
    ls->p = v8;
    if ( v8 > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 109, "ls->p <= ls->pe") )
      __debugbreak();
    v9 = (unsigned __int64)j_lj_str_new(ls->L, p, v7);
    L = ls->L;
    o->u64 = v9 | 0xFFFD800000000000ui64;
    v11 = (__int64)(v9 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v11 + 4) > 0xFFFFFFF6 && (~(_DWORD)v11 != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

