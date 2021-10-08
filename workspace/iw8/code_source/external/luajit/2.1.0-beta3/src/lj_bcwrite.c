/*
==============
lj_bcwrite
==============
*/
__int64 lj_bcwrite(lua_State *L, GCproto *pt, int (*writer)(lua_State *, const void *, unsigned __int64, void *), void *data, int strip)
{
  unsigned int v5; 
  __int64 v6; 
  unsigned __int64 ptr64; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  lua_State *v13; 
  GCproto *v14; 
  int (__fastcall *v15)(lua_State *, const void *, unsigned __int64, void *); 
  void *v16; 
  int v17; 
  unsigned int v18; 

  v14 = pt;
  v15 = writer;
  v16 = data;
  v17 = strip;
  v18 = 0;
  v13 = L;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v5 = j_lj_vm_cpcall(L, 0i64, &v10, cpwriter);
  if ( !v5 )
    v5 = v18;
  v6 = (unsigned int)(v11 - v12);
  ptr64 = v13->glref.ptr64;
  v8 = v12;
  *(_QWORD *)(ptr64 + 48) -= v6;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(ptr64 + 16))(*(_QWORD *)(ptr64 + 24), v8, v6, 0i64);
  return v5;
}

/*
==============
cpwriter
==============
*/
TValue *cpwriter(lua_State *L, int (*dummy)(lua_State *), void *ud)
{
  int v4; 
  int v5; 
  __int64 v6; 
  size_t v7; 
  const void *v8; 
  char *v9; 
  char v10; 
  char *v11; 
  char *v12; 
  int v13; 
  int v14; 
  GCproto *v15; 
  __int64 v16; 
  __int64 v17; 
  char v19; 

  v4 = *((_DWORD *)ud + 2);
  v5 = *((_DWORD *)ud + 4);
  if ( (unsigned int)(v4 - v5) < 0x400 )
  {
    j_lj_buf_need2((SBuf *)ud, 0x400u);
    v4 = *((_DWORD *)ud + 2);
    v5 = *((_DWORD *)ud + 4);
  }
  v6 = *(_QWORD *)(*((_QWORD *)ud + 4) + 64i64);
  v7 = *(unsigned int *)(v6 + 16);
  v8 = (const void *)(v6 + 24);
  if ( (int)v7 + 10 <= (unsigned int)(v4 - v5) )
    v9 = (char *)*((_QWORD *)ud + 2);
  else
    v9 = j_lj_buf_need2((SBuf *)ud, (int)v7 + 10);
  *(_DWORD *)v9 = 38423579;
  v10 = 8;
  if ( *((_DWORD *)ud + 14) )
    v10 = 10;
  v11 = v9 + 5;
  v9[4] = (*(_BYTE *)(*((_QWORD *)ud + 4) + 61i64) & 4) + v10;
  if ( !*((_DWORD *)ud + 14) )
  {
    v12 = j_lj_strfmt_wuleb128(v11, v7);
    v13 = (int)v12;
    memcpy_0(v12, v8, v7);
    LODWORD(v11) = v7 + v13;
  }
  v14 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))ud + 5))(*((_QWORD *)ud + 3), *((_QWORD *)ud + 2), (unsigned int)((_DWORD)v11 - *((_DWORD *)ud + 4)), *((_QWORD *)ud + 6));
  v15 = (GCproto *)*((_QWORD *)ud + 4);
  *((_DWORD *)ud + 15) = v14;
  bcwrite_proto((BCWriteCtx *)ud, v15);
  if ( !*((_DWORD *)ud + 15) )
  {
    v16 = *((_QWORD *)ud + 6);
    v17 = *((_QWORD *)ud + 3);
    v19 = 0;
    *((_DWORD *)ud + 15) = (*((__int64 (__fastcall **)(__int64, char *, __int64, __int64))ud + 5))(v17, &v19, 1i64, v16);
  }
  return 0i64;
}

/*
==============
bcwrite_kgc
==============
*/
void bcwrite_kgc(BCWriteCtx *ctx, GCproto *pt)
{
  __int64 sizekgc; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  char *ptr64; 
  char *v12; 
  size_t v13; 

  sizekgc = pt->sizekgc;
  v5 = sizekgc;
  v6 = pt->k.ptr64 - 8 * sizekgc;
  if ( (_DWORD)sizekgc )
  {
    do
    {
      v7 = *(_QWORD *)v6;
      v8 = 1;
      v9 = *(_BYTE *)(*(_QWORD *)v6 + 9i64);
      if ( v9 == 4 )
      {
        v8 = *(_DWORD *)(v7 + 16) + 5;
        v10 = v8;
      }
      else if ( v9 == 7 )
      {
        if ( (pt->flags & 1) == 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 124, "(pt->flags & 0x01)") )
          __debugbreak();
        v10 = 0;
      }
      else
      {
        if ( v9 != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 140, "o->gch.gct == ~(~11u)") )
          __debugbreak();
        v10 = 1;
        v8 = 11;
      }
      if ( v8 <= LODWORD(ctx->sb.e.ptr64) - LODWORD(ctx->sb.p.ptr64) )
        ptr64 = (char *)ctx->sb.p.ptr64;
      else
        ptr64 = j_lj_buf_more2(&ctx->sb, v8);
      v12 = j_lj_strfmt_wuleb128(ptr64, v10);
      if ( v10 < 5 )
      {
        if ( v10 == 1 )
        {
          if ( *(_BYTE *)(v7 + 9) != 11 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 151, "(o)->gch.gct == ~(~11u)") )
            __debugbreak();
          bcwrite_ktab(ctx, v12, (const GCtab *)v7);
          goto LABEL_25;
        }
      }
      else
      {
        if ( *(_BYTE *)(v7 + 9) != 4 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 149, "(o)->gch.gct == ~(~4u)") )
            __debugbreak();
          if ( *(_BYTE *)(v7 + 9) != 4 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 149, "(o)->gch.gct == ~(~4u)") )
              __debugbreak();
          }
        }
        v13 = *(unsigned int *)(v7 + 16);
        memcpy_0(v12, (const void *)(v7 + 24), v13);
        v12 += v13;
      }
      ctx->sb.p.ptr64 = (unsigned __int64)v12;
LABEL_25:
      v6 += 8i64;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
bcwrite_ktab
==============
*/
void bcwrite_ktab(BCWriteCtx *ctx, char *p, const GCtab *t)
{
  __int64 asize; 
  unsigned int v4; 
  __int64 v7; 
  __int64 i; 
  unsigned int hmask; 
  unsigned __int64 ptr64; 
  int v12; 
  int v13; 
  unsigned int v14; 
  _QWORD *v15; 
  unsigned __int64 v16; 
  bool v17; 
  char *v18; 
  const TValue *v19; 
  const TValue *j; 

  asize = t->asize;
  v4 = 0;
  v7 = 0i64;
  if ( (_DWORD)asize )
  {
    for ( i = asize - 1; i >= 0; --i )
    {
      if ( *(_QWORD *)(t->array.ptr64 + 8 * i) != -1i64 )
        break;
    }
    v7 = (unsigned int)(i + 1);
  }
  hmask = t->hmask;
  if ( hmask )
  {
    ptr64 = t->node.ptr64;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if ( hmask + 1 < 2 )
      goto LABEL_11;
    v15 = (_QWORD *)t->node.ptr64;
    v16 = (unsigned __int64)(hmask + 1) >> 1;
    v14 = 2 * v16;
    do
    {
      v17 = *v15 == -1i64;
      v15 += 6;
      v12 += !v17;
      v13 += *(v15 - 3) != -1i64;
      --v16;
    }
    while ( v16 );
    if ( v14 <= hmask )
LABEL_11:
      LOBYTE(v4) = *(_QWORD *)(ptr64 + 24i64 * v14) != -1i64;
    v4 += v13 + v12;
  }
  v18 = j_lj_strfmt_wuleb128(p, v7);
  ctx->sb.p.ptr64 = (unsigned __int64)j_lj_strfmt_wuleb128(v18, v4);
  if ( (_DWORD)v7 )
  {
    v19 = (const TValue *)t->array.ptr64;
    do
    {
      bcwrite_ktabk(ctx, v19++, 1);
      --v7;
    }
    while ( v7 );
  }
  if ( v4 )
  {
    for ( j = (const TValue *)(t->node.ptr64 + 24i64 * t->hmask); ; j -= 3 )
    {
      if ( j->u64 != -1i64 )
      {
        bcwrite_ktabk(ctx, j + 1, 0);
        bcwrite_ktabk(ctx, j, 1);
        if ( !--v4 )
          break;
      }
    }
  }
}

/*
==============
bcwrite_ktabk
==============
*/
void bcwrite_ktabk(BCWriteCtx *ctx, const TValue *o, int narrow)
{
  char *ptr64; 
  __int64 v8; 
  __int64 v9; 
  size_t v10; 
  unsigned int v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  char *v19; 

  _RBX = o;
  if ( (unsigned int)(LODWORD(ctx->sb.e.ptr64) - LODWORD(ctx->sb.p.ptr64)) >= 0xB )
    ptr64 = (char *)ctx->sb.p.ptr64;
  else
    ptr64 = j_lj_buf_more2(&ctx->sb, 0xBu);
  v8 = _RBX->it64 >> 47;
  if ( (_DWORD)v8 == -5 )
  {
    v9 = _RBX->u64 & 0x7FFFFFFFFFFFi64;
    v10 = *(unsigned int *)(v9 + 0x10);
    v11 = v10 + 5;
    if ( (int)v10 + 5 <= (unsigned int)(LODWORD(ctx->sb.e.ptr64) - LODWORD(ctx->sb.p.ptr64)) )
      v12 = (char *)ctx->sb.p.ptr64;
    else
      v12 = j_lj_buf_more2(&ctx->sb, v11);
    v13 = j_lj_strfmt_wuleb128(v12, v11);
    v14 = &v13[v10];
    memcpy_0(v13, (const void *)(v9 + 24), v10);
  }
  else if ( (unsigned int)v8 >= 0xFFFFFFF2 )
  {
    if ( (unsigned int)v8 < 0xFFFFFFFD && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 64, "(((uint32_t)((o)->it64 >> 47)) >= (~2u))") )
      __debugbreak();
    *ptr64 = ~(unsigned __int8)(_RBX->it64 >> 47);
    v14 = ptr64 + 1;
  }
  else
  {
    if ( narrow )
    {
      __asm
      {
        vmovsd  xmm1, qword ptr [rbx]
        vcvttsd2si edx, xmm1; v
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, edx
        vucomisd xmm1, xmm0
      }
    }
    *ptr64 = 4;
    v19 = j_lj_strfmt_wuleb128(ptr64 + 1, _RBX->i);
    v14 = j_lj_strfmt_wuleb128(v19, _RBX->it);
  }
  ctx->sb.p.ptr64 = (unsigned __int64)v14;
}

/*
==============
bcwrite_proto
==============
*/
void bcwrite_proto(BCWriteCtx *ctx, GCproto *pt)
{
  __int64 v5; 
  __int64 sizekgc; 
  GCproto **v7; 
  unsigned int v8; 
  char *ptr64; 
  char *v10; 
  char *v11; 
  char *v12; 
  unsigned __int64 v13; 
  char *v14; 
  char *v15; 
  size_t v16; 
  char *v17; 
  size_t v18; 
  __int64 sizekn; 
  char *v21; 
  __int64 v22; 
  __int64 v23; 
  bool v24; 
  int v25; 
  char *v29; 
  char *v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  char *v35; 

  v5 = 0i64;
  if ( (pt->flags & 1) != 0 )
  {
    sizekgc = pt->sizekgc;
    v7 = (GCproto **)(pt->k.ptr64 - 8);
    if ( pt->sizekgc )
    {
      do
      {
        if ( (*v7)->gct == 7 )
          bcwrite_proto(ctx, *v7);
        --v7;
        --sizekgc;
      }
      while ( sizekgc );
    }
  }
  v8 = 2 * (pt->sizeuv + 2 * pt->sizebc) + 35;
  if ( v8 <= LODWORD(ctx->sb.e.ptr64) - LODWORD(ctx->sb.b.ptr64) )
    ptr64 = (char *)ctx->sb.b.ptr64;
  else
    ptr64 = j_lj_buf_need2(&ctx->sb, v8);
  ptr64[5] = pt->flags & 7;
  ptr64[6] = pt->numparams;
  ptr64[7] = pt->framesize;
  ptr64[8] = pt->sizeuv;
  v10 = j_lj_strfmt_wuleb128(ptr64 + 9, pt->sizekgc);
  v11 = j_lj_strfmt_wuleb128(v10, pt->sizekn);
  v12 = j_lj_strfmt_wuleb128(v11, pt->sizebc - 1);
  if ( !ctx->strip )
  {
    v13 = pt->lineinfo.ptr64;
    if ( v13 )
      v5 = (unsigned int)((_DWORD)pt + pt->sizept - v13);
    v14 = j_lj_strfmt_wuleb128(v12, v5);
    v12 = v14;
    if ( (_DWORD)v5 )
    {
      v15 = j_lj_strfmt_wuleb128(v14, pt->firstline);
      v12 = j_lj_strfmt_wuleb128(v15, pt->numline);
    }
  }
  v16 = 4 * pt->sizebc - 4;
  memcpy_0(v12, (char *)&pt[1].nextgc.gcptr64 + 4, v16);
  v17 = &v12[v16];
  v18 = 2i64 * pt->sizeuv;
  memcpy_0(v17, (const void *)pt->uv.ptr64, v18);
  ctx->sb.p.ptr64 = (unsigned __int64)&v17[v18];
  bcwrite_kgc(ctx, pt);
  sizekn = pt->sizekn;
  _RSI = pt->k.ptr64;
  if ( 10 * (int)sizekn <= (unsigned int)(LODWORD(ctx->sb.e.ptr64) - LODWORD(ctx->sb.p.ptr64)) )
    v21 = (char *)ctx->sb.p.ptr64;
  else
    v21 = j_lj_buf_more2(&ctx->sb, 10 * (int)sizekn);
  if ( (_DWORD)sizekn )
  {
    v22 = sizekn;
    do
    {
      v23 = *(__int64 *)_RSI >> 47;
      v24 = (_DWORD)v23 == -14;
      if ( (unsigned int)v23 >= 0xFFFFFFF2 )
      {
        v25 = j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 182, "(((uint32_t)((o)->it64 >> 47)) < (~13u))");
        v24 = v25 == 0;
        if ( v25 )
          __debugbreak();
      }
      __asm
      {
        vmovsd  xmm1, qword ptr [rsi]
        vcvttsd2si ebx, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, ebx
        vucomisd xmm1, xmm0
      }
      if ( v24 )
      {
        v29 = j_lj_strfmt_wuleb128(v21, (2 * _EBX) | _EBX & 0x80000000);
        v21 = v29;
        if ( _EBX < 0 )
        {
          *(v29 - 1) &= 7u;
          *(v29 - 1) |= (_EBX >> 27) & 0x18;
        }
      }
      else
      {
        v30 = j_lj_strfmt_wuleb128(v21, ((2 * *(_DWORD *)_RSI) | *(_DWORD *)_RSI & 0x80000000) + 1);
        v31 = *(_DWORD *)_RSI;
        if ( *(_DWORD *)_RSI >= 0x80000000 )
        {
          *(v30 - 1) &= 7u;
          *(v30 - 1) |= (v31 >> 27) & 0x18;
        }
        v21 = j_lj_strfmt_wuleb128(v30, *(_DWORD *)(_RSI + 4));
      }
      _RSI += 8i64;
      --v22;
    }
    while ( v22 );
  }
  ctx->sb.p.ptr64 = (unsigned __int64)v21;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > LODWORD(ctx->sb.e.ptr64) - (int)v21 )
      v21 = j_lj_buf_more2(&ctx->sb, v5);
    memcpy_0(v21, (const void *)pt->lineinfo.ptr64, (unsigned int)v5);
    ctx->sb.p.ptr64 = (unsigned __int64)&v21[v5];
    LODWORD(v21) = v5 + (_DWORD)v21;
  }
  if ( !ctx->status )
  {
    v32 = (_DWORD)v21 - LODWORD(ctx->sb.b.ptr64) - 5;
    _BitScanReverse(&v33, v32);
    v34 = (9 * v33 + 72) >> 6;
    v35 = (char *)(ctx->sb.b.ptr64 + 5 - v34);
    if ( j_lj_strfmt_wuleb128(v35, v32) != (char *)(ctx->sb.b.ptr64 + 5) )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_bcwrite.c", 295, "p == (((char *)(void *)((&ctx->sb)->b).ptr64)) + 5") )
        __debugbreak();
    }
    ctx->status = ctx->wfunc((lua_State *)ctx->sb.L.ptr64, v35, v34 + v32, ctx->wdata);
  }
}

