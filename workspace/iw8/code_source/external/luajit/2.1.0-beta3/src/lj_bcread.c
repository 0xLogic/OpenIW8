/*
==============
lj_bcread_proto
==============
*/
GCproto *lj_bcread_proto(LexState *ls)
{
  unsigned int v2; 
  unsigned int v4; 
  const char *p; 
  unsigned __int8 v6; 
  const char *v7; 
  unsigned __int8 v8; 
  const char *v9; 
  unsigned __int8 v10; 
  const char *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v35; 
  __int64 v36; 
  unsigned int *v37; 
  unsigned int v38; 
  __int16 *ptr64; 
  __int64 v40; 
  __int16 v41; 
  __int64 v43; 
  const char *v44; 
  const char *v45; 
  int v46; 
  unsigned int v47; 
  int v48; 
  char v49; 
  char v50; 
  unsigned int v51; 
  char v53; 
  int numline; 
  unsigned int v56; 
  __int64 v57; 
  __int16 v58; 
  unsigned int v59; 
  __int64 v72; 
  unsigned int *v73; 
  unsigned int v74; 
  int sizeuv; 
  _BYTE *v76; 
  unsigned int v79; 
  int v80; 
  unsigned int len; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int sizekgc; 
  unsigned int v85; 
  unsigned __int8 v86; 
  unsigned __int8 v87; 
  unsigned __int8 v88; 
  unsigned int v89; 

  v2 = 0;
  v4 = 0;
  len = 0;
  v79 = 0;
  v80 = 0;
  if ( ls->p >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  p = ls->p;
  v6 = *p++;
  v88 = v6;
  ls->p = p;
  if ( p >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v7 = ls->p;
  v8 = *v7++;
  v86 = v8;
  ls->p = v7;
  if ( v7 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v9 = ls->p;
  v10 = *v9++;
  v87 = v10;
  ls->p = v9;
  if ( v9 >= ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 122, "ls->p < ls->pe") )
    __debugbreak();
  v11 = ls->p;
  v12 = *(unsigned __int8 *)v11;
  ls->p = v11 + 1;
  v83 = v12;
  v13 = j_lj_buf_ruleb128(&ls->p);
  sizekgc = v13;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v14 = j_lj_buf_ruleb128(&ls->p);
  v89 = v14;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v15 = j_lj_buf_ruleb128(&ls->p);
  v82 = v15;
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  v16 = v15 + 1;
  if ( (ls->level & 2) == 0 )
  {
    v4 = j_lj_buf_ruleb128(&ls->p);
    len = v4;
    if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
      __debugbreak();
    if ( v4 )
    {
      v79 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      v80 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
    }
  }
  v17 = (4 * (v16 + 2 * v13) + 111) & 0xFFFFFFF8;
  v18 = v17 + 8 * v14;
  v85 = v18 + 2 * ((v12 + 1) & 0xFFFFFFFE);
  v19 = v4 + v85;
  _RBP = (GCproto *)j_lj_mem_newgco(ls->L, v4 + v85);
  _RBP->gct = 7;
  _RBP->numparams = v86;
  _RBP->framesize = v87;
  _RBP->k.ptr64 = (unsigned __int64)_RBP + v17;
  _RBP->sizept = v19;
  _RBP->sizebc = v16;
  _RBP->sizekgc = 0;
  _RBP->trace = 0;
  _RBP->uv.ptr64 = (unsigned __int64)_RBP + v18;
  _RBP->sizekn = v89;
  _RBP->flags = v88;
  _RBP->sizeuv = v83;
  v21 = 89;
  _RBP->chunkname.gcptr64 = (unsigned __int64)ls->chunkname;
  *(_DWORD *)((char *)&_RBP->nextgc.gcptr64 + (unsigned int)v17 - 8i64 * (sizekgc + 1)) = 0;
  if ( (_RBP->flags & 2) != 0 )
    v21 = 92;
  LODWORD(_RBP[1].nextgc.gcptr64) = (_RBP->framesize << 8) | v21;
  bcread_block(ls, (char *)&_RBP[1].nextgc.gcptr64 + 4, 4 * v82);
  if ( (ls->level & 1) != 0 )
  {
    v22 = 1;
    if ( v16 > 1 )
    {
      if ( v82 >= 0x10 )
      {
        v23 = 9;
        do
        {
          _RAX = v22;
          v22 += 16;
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rbp+rax*4+68h]
            vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
            vmovdqu xmmword ptr [rbp+rax*4+68h], xmm1
          }
          _RAX = v23 - 4;
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rbp+rax*4+68h]
            vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
            vmovdqu xmmword ptr [rbp+rax*4+68h], xmm1
          }
          _RAX = v23;
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rbp+rax*4+68h]
            vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
            vmovdqu xmmword ptr [rbp+rax*4+68h], xmm1
          }
          _RAX = v23 + 4;
          v23 += 16;
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rbp+rax*4+68h]
            vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
            vmovdqu xmmword ptr [rbp+rax*4+68h], xmm1
          }
        }
        while ( v22 < v16 - (v82 & 0xF) );
      }
      if ( v22 < v16 )
      {
        v35 = v22;
        v36 = v16 - v22;
        v37 = (unsigned int *)((char *)&_RBP[1] + 4 * v35);
        do
        {
          v38 = *v37++;
          *(v37 - 1) = _byteswap_ulong(v38);
          --v36;
        }
        while ( v36 );
      }
    }
  }
  if ( v83 )
  {
    ptr64 = (__int16 *)_RBP->uv.ptr64;
    bcread_block(ls, ptr64, 2 * v83);
    if ( (ls->level & 1) != 0 )
    {
      v40 = v83;
      do
      {
        v41 = *ptr64++;
        *(ptr64 - 1) = __ROL2__(v41, 8);
        --v40;
      }
      while ( v40 );
    }
  }
  bcread_kgc(ls, _RBP, sizekgc);
  _RDI = (unsigned int *)_RBP->k.ptr64;
  _RBP->sizekgc = sizekgc;
  if ( v89 )
  {
    v43 = v89;
    do
    {
      v44 = ls->p;
      v45 = v44 + 1;
      v46 = *v44 & 1;
      v47 = *(unsigned __int8 *)v44 >> 1;
      if ( v47 >= 0x40 )
      {
        v48 = -1;
        v47 &= 0x3Fu;
        do
        {
          v49 = *v45;
          v48 += 7;
          v50 = *v45++;
          v47 |= (v50 & 0x7F) << v48;
        }
        while ( (unsigned __int8)v49 >= 0x80u );
      }
      ls->p = v45;
      if ( v45 > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 147, "ls->p <= ls->pe") )
        __debugbreak();
      if ( v46 )
      {
        *_RDI = v47;
        v51 = j_lj_buf_ruleb128(&ls->p);
        if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
          __debugbreak();
        _RDI[1] = v51;
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, ebx
          vmovsd  qword ptr [rdi], xmm0
        }
      }
      _RDI += 2;
      --v43;
    }
    while ( v43 );
  }
  _RBP->firstline = v79;
  _RBP->numline = v80;
  if ( len )
  {
    v53 = 0;
    if ( v80 >= 256 )
      v53 = (v80 >= 0x10000) + 1;
    _RBX = (__int16 *)((char *)_RBP + v85);
    _RBP->uvinfo.ptr64 = (unsigned __int64)_RBP + v85 + (unsigned __int64)(v82 << v53);
    _RBP->lineinfo.ptr64 = (unsigned __int64)_RBX;
    bcread_block(ls, _RBX, len);
    if ( (ls->level & 1) != 0 )
    {
      numline = _RBP->numline;
      if ( numline >= 256 )
      {
        v56 = _RBP->sizebc - 1;
        if ( numline >= 0x10000 )
        {
          if ( _RBP->sizebc != 1 )
          {
            if ( v56 >= 0x10 )
            {
              v59 = 8;
              do
              {
                _RAX = v2;
                v2 += 16;
                __asm
                {
                  vmovdqu xmm0, xmmword ptr [rbx+rax*4]
                  vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
                  vmovdqu xmmword ptr [rbx+rax*4], xmm1
                }
                _RAX = v59 - 4;
                __asm
                {
                  vmovdqu xmm0, xmmword ptr [rbx+rax*4]
                  vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
                  vmovdqu xmmword ptr [rbx+rax*4], xmm1
                }
                _RAX = v59;
                __asm
                {
                  vmovdqu xmm0, xmmword ptr [rbx+rax*4]
                  vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
                  vmovdqu xmmword ptr [rbx+rax*4], xmm1
                }
                _RAX = v59 + 4;
                v59 += 16;
                __asm
                {
                  vmovdqu xmm0, xmmword ptr [rbx+rax*4]
                  vpshufb xmm1, xmm0, cs:__xmm@0c0d0e0f08090a0b0405060700010203
                  vmovdqu xmmword ptr [rbx+rax*4], xmm1
                }
              }
              while ( v2 < (v56 & 0xFFFFFFF0) );
            }
            if ( v2 < v56 )
            {
              v72 = v56 - v2;
              v73 = (unsigned int *)&_RBX[2 * v2];
              do
              {
                v74 = *v73++;
                *(v73 - 1) = _byteswap_ulong(v74);
                --v72;
              }
              while ( v72 );
            }
          }
        }
        else if ( _RBP->sizebc != 1 )
        {
          v57 = v56;
          do
          {
            v58 = *_RBX++;
            *(_RBX - 1) = __ROL2__(v58, 8);
            --v57;
          }
          while ( v57 );
        }
      }
    }
    sizeuv = _RBP->sizeuv;
    v76 = (_BYTE *)_RBP->uvinfo.ptr64;
    if ( _RBP->sizeuv )
    {
      do
      {
        while ( *v76++ )
          ;
        --sizeuv;
      }
      while ( sizeuv );
    }
    _RBP->varinfo.ptr64 = (unsigned __int64)v76;
  }
  else
  {
    _RBP->lineinfo.ptr64 = 0i64;
    _RBP->uvinfo.ptr64 = 0i64;
    _RBP->varinfo.ptr64 = 0i64;
  }
  return _RBP;
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
  __int64 v5; 
  __int64 v6; 
  const char *p; 
  unsigned __int64 v8; 
  const char *v9; 
  unsigned __int64 v10; 
  lua_State *L; 
  __int64 v12; 
  unsigned int v15; 
  unsigned int v16; 

  _R14 = o;
  v5 = j_lj_buf_ruleb128(&ls->p);
  if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
    __debugbreak();
  if ( (unsigned int)v5 < 5 )
  {
    if ( (_DWORD)v5 == 3 )
    {
      j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, edi
        vmovsd  qword ptr [r14], xmm0
      }
    }
    else if ( (_DWORD)v5 == 4 )
    {
      v15 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      _R14->i = v15;
      v16 = j_lj_buf_ruleb128(&ls->p);
      if ( ls->p > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 130, "ls->p <= ls->pe") )
        __debugbreak();
      _R14->it = v16;
    }
    else
    {
      _R14->u64 = ~(v5 << 47);
    }
  }
  else
  {
    v6 = (unsigned int)(v5 - 5);
    p = ls->p;
    v8 = (unsigned int)v6;
    v9 = &p[v6];
    ls->p = v9;
    if ( v9 > ls->pe && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcread.c", 109, "ls->p <= ls->pe") )
      __debugbreak();
    v10 = (unsigned __int64)j_lj_str_new(ls->L, p, v8);
    L = ls->L;
    _R14->u64 = v10 | 0xFFFD800000000000ui64;
    v12 = (__int64)(v10 | 0xFFFD800000000000ui64) >> 47;
    if ( (unsigned int)(v12 + 4) > 0xFFFFFFF6 && (~(_DWORD)v12 != *(unsigned __int8 *)((v10 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v10 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
}

