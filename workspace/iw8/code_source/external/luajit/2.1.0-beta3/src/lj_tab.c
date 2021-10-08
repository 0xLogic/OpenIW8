/*
==============
lj_tab_new
==============
*/
GCtab *lj_tab_new(lua_State *L, unsigned int asize, unsigned int hbits)
{
  GCtab *v3; 
  unsigned int v4; 
  unsigned int hmask; 
  __int64 v6; 
  _QWORD *v7; 

  v3 = newtab(L, asize, hbits);
  v4 = v3->asize;
  if ( v4 )
    memset((void *)v3->array.ptr64, 0xFFu, 8i64 * v4);
  hmask = v3->hmask;
  if ( hmask )
  {
    v6 = hmask + 1;
    v7 = (_QWORD *)(v3->node.ptr64 + 8);
    do
    {
      v7[1] = 0i64;
      *v7 = -1i64;
      *(v7 - 1) = -1i64;
      v7 += 3;
      --v6;
    }
    while ( v6 );
  }
  return v3;
}

/*
==============
lj_tab_new_ah
==============
*/
GCtab *lj_tab_new_ah(lua_State *L, int a, int h)
{
  unsigned int v4; 
  GCtab *v5; 
  unsigned int asize; 
  unsigned int hmask; 
  __int64 v8; 
  _QWORD *v9; 

  if ( h )
  {
    if ( h != 1 )
    {
      _BitScanReverse((unsigned int *)&h, h - 1);
      ++h;
    }
  }
  else
  {
    h = 0;
  }
  v4 = a + 1;
  if ( a <= 0 )
    v4 = 0;
  v5 = newtab(L, v4, h);
  asize = v5->asize;
  if ( asize )
    memset((void *)v5->array.ptr64, 0xFFu, 8i64 * asize);
  hmask = v5->hmask;
  if ( hmask )
  {
    v8 = hmask + 1;
    v9 = (_QWORD *)(v5->node.ptr64 + 8);
    do
    {
      v9[1] = 0i64;
      *v9 = -1i64;
      *(v9 - 1) = -1i64;
      v9 += 3;
      --v8;
    }
    while ( v8 );
  }
  return v5;
}

/*
==============
lj_tab_dup
==============
*/
GCtab *lj_tab_dup(lua_State *L, const GCtab *kt)
{
  unsigned int hmask; 
  unsigned int v5; 
  unsigned int v6; 
  GCtab *v7; 
  __int64 asize; 
  _QWORD *ptr64; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  _QWORD *v18; 
  __int64 v19; 
  __int64 v20; 

  hmask = kt->hmask;
  if ( hmask )
  {
    _BitScanReverse(&v5, hmask);
    v6 = v5 + 1;
  }
  else
  {
    v6 = 0;
  }
  v7 = newtab(L, kt->asize, v6);
  if ( *(_QWORD *)&kt->asize != *(_QWORD *)&v7->asize && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 188, "kt->asize == t->asize && kt->hmask == t->hmask") )
    __debugbreak();
  v7->nomm = 0;
  asize = kt->asize;
  if ( (_DWORD)asize )
  {
    ptr64 = (_QWORD *)kt->array.ptr64;
    if ( (unsigned int)asize >= 0x40 )
    {
      memcpy_0((void *)v7->array.ptr64, ptr64, 8 * asize);
    }
    else
    {
      v10 = v7->array.ptr64 - (_QWORD)ptr64;
      v11 = (unsigned int)asize;
      do
      {
        v12 = *ptr64;
        *(_QWORD *)((char *)ptr64 + v10) = *ptr64;
        v13 = v12 >> 47;
        if ( (unsigned int)(v12 >> 47) + 4 > 0xFFFFFFF6 )
        {
          v14 = v12 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v13 != *(unsigned __int8 *)(v14 + 9) || (*(_BYTE *)(v14 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
        ++ptr64;
        --v11;
      }
      while ( v11 );
    }
  }
  v15 = kt->hmask;
  if ( v15 )
  {
    v16 = kt->node.ptr64;
    v17 = v7->node.ptr64 - v16;
    v18 = (_QWORD *)(v16 + 8);
    v7->freetop.ptr64 = v17 + kt->freetop.ptr64;
    v19 = v15 + 1;
    do
    {
      v20 = v18[1];
      *(_QWORD *)((char *)v18 + v17 - 8) = *(v18 - 1);
      *(_QWORD *)((char *)v18 + v17) = *v18;
      v18 += 3;
      if ( v20 )
        v20 += v17;
      *(_QWORD *)((char *)v18 + v17 - 16) = v20;
      --v19;
    }
    while ( v19 );
  }
  return v7;
}

/*
==============
lj_tab_clear
==============
*/
void lj_tab_clear(GCtab *t)
{
  unsigned int asize; 
  unsigned int hmask; 
  unsigned __int64 ptr64; 
  __int64 v4; 
  __int64 v5; 
  _QWORD *v6; 

  asize = t->asize;
  if ( asize )
    memset((void *)t->array.ptr64, 0xFFu, 8i64 * asize);
  hmask = t->hmask;
  if ( hmask )
  {
    ptr64 = t->node.ptr64;
    v4 = hmask + 1;
    v5 = (unsigned int)v4;
    t->freetop.ptr64 = ptr64 + 24 * v4;
    v6 = (_QWORD *)(ptr64 + 8);
    do
    {
      v6[1] = 0i64;
      *v6 = -1i64;
      *(v6 - 1) = -1i64;
      v6 += 3;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
lj_tab_free
==============
*/
void lj_tab_free(global_State *g, GCtab *t)
{
  unsigned int hmask; 
  void *ptr64; 
  unsigned __int64 v6; 
  unsigned int asize; 
  void *v8; 
  void *allocd; 
  unsigned __int64 v10; 
  unsigned __int64 total; 
  void *v12; 
  void *(__fastcall *allocf)(void *, void *, unsigned __int64, unsigned __int64); 

  hmask = t->hmask;
  if ( hmask )
  {
    ptr64 = (void *)t->node.ptr64;
    v6 = 24i64 * (hmask + 1);
    g->gc.total -= v6;
    g->allocf(g->allocd, ptr64, v6, 0i64);
  }
  asize = t->asize;
  if ( asize && t->colo <= 0 )
  {
    v8 = (void *)t->array.ptr64;
    allocd = g->allocd;
    v10 = 8i64 * asize;
    g->gc.total -= v10;
    g->allocf(allocd, v8, v10, 0i64);
  }
  total = g->gc.total;
  v12 = g->allocd;
  allocf = g->allocf;
  if ( t->colo )
  {
    g->gc.total = total - (8i64 * (t->colo & 0x7F) + 64);
    ((void (__fastcall *)(void *, GCtab *))allocf)(v12, t);
  }
  else
  {
    g->gc.total = total - 64;
    allocf(v12, t, 64ui64, 0i64);
  }
}

/*
==============
lj_tab_resize
==============
*/
void lj_tab_resize(lua_State *L, GCtab *t, unsigned int asize, unsigned int hbits)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v8; 
  unsigned __int64 v9; 
  char *v10; 
  char *v11; 
  char *v12; 
  __int64 v13; 
  signed __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  char *v20; 
  _QWORD *v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 *v24; 
  TValue *v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  const TValue *v29; 
  __int64 v30; 
  __int64 v31; 
  TValue *v32; 
  __int64 u64; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 ptr64; 
  char *p; 
  unsigned int hmask; 

  v4 = hbits;
  v5 = t->asize;
  ptr64 = t->node.ptr64;
  hmask = t->hmask;
  v8 = asize;
  if ( asize > (unsigned int)v5 )
  {
    if ( asize > 0x8000001 )
      goto LABEL_47;
    v9 = 8i64 * asize;
    v10 = (char *)t->array.ptr64;
    if ( t->colo <= 0 )
    {
      v12 = (char *)j_lj_mem_realloc(L, (void *)t->array.ptr64, 8 * v5, v9);
    }
    else
    {
      v11 = (char *)j_lj_mem_realloc(L, NULL, 0i64, v9);
      t->colo |= 0x80u;
      v12 = v11;
      if ( (_DWORD)v5 )
      {
        v13 = (unsigned int)v5;
        v14 = v11 - v10;
        do
        {
          v15 = *(_QWORD *)v10;
          *(_QWORD *)&v10[v14] = *(_QWORD *)v10;
          v16 = v15 >> 47;
          if ( (unsigned int)(v15 >> 47) + 4 > 0xFFFFFFF6 )
          {
            v17 = v15 & 0x7FFFFFFFFFFFi64;
            if ( ~(_DWORD)v16 != *(unsigned __int8 *)(v17 + 9) || (*(_BYTE *)(v17 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
            {
              if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
                __debugbreak();
            }
          }
          v10 += 8;
          --v13;
        }
        while ( v13 );
        v8 = asize;
        v4 = hbits;
      }
    }
    t->array.ptr64 = (unsigned __int64)v12;
    t->asize = v8;
    if ( (unsigned int)v5 < v8 )
      memset(&v12[8 * v5], 0xFFu, 8i64 * (v8 - (unsigned int)v5));
  }
  if ( !v4 )
  {
    v22 = L->glref.ptr64 + 248;
    t->node.ptr64 = v22;
    t->hmask = 0;
    t->freetop.ptr64 = v22;
    goto LABEL_25;
  }
  if ( v4 > 0x1A )
LABEL_47:
    j_lj_err_msg(L, LJ_ERR_TABOV);
  v18 = 1 << v4;
  v19 = v18;
  v20 = (char *)j_lj_mem_realloc(L, NULL, 0i64, 24i64 * v18);
  t->node.ptr64 = (unsigned __int64)v20;
  t->freetop.ptr64 = (unsigned __int64)&v20[24 * v18];
  t->hmask = v18 - 1;
  if ( v18 == 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 81, "t->hmask != 0") )
    __debugbreak();
  v21 = v20 + 8;
  do
  {
    v21[1] = 0i64;
    *v21 = -1i64;
    *(v21 - 1) = -1i64;
    v21 += 3;
    --v19;
  }
  while ( v19 );
LABEL_25:
  if ( v8 < (unsigned int)v5 )
  {
    p = (char *)t->array.ptr64;
    t->asize = v8;
    v23 = 8i64 * v8;
    v24 = (__int64 *)&p[v23];
    do
    {
      if ( *v24 != -1 )
      {
        v25 = j_lj_tab_setinth(L, t, v8);
        v26 = *v24;
        v27 = *v24 >> 47;
        v25->u64 = *v24;
        if ( (unsigned int)(v27 + 4) > 0xFFFFFFF6 )
        {
          v28 = v26 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v27 != *(unsigned __int8 *)(v28 + 9) || (*(_BYTE *)(v28 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
      }
      ++v8;
      ++v24;
    }
    while ( v8 < (unsigned int)v5 );
    if ( t->colo <= 0 )
      t->array.ptr64 = (unsigned __int64)j_lj_mem_realloc(L, p, 8 * v5, v23);
  }
  if ( hmask )
  {
    v29 = (const TValue *)ptr64;
    v30 = hmask + 1;
    v31 = v30;
    do
    {
      if ( v29->u64 != -1i64 )
      {
        v32 = j_lj_tab_set(L, t, v29 + 1);
        u64 = v29->u64;
        v34 = v29->it64 >> 47;
        v32->u64 = v29->u64;
        if ( (unsigned int)(v34 + 4) > 0xFFFFFFF6 )
        {
          v35 = u64 & 0x7FFFFFFFFFFFi64;
          if ( ~(_DWORD)v34 != *(unsigned __int8 *)(v35 + 9) || (*(_BYTE *)(v35 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
          {
            if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
              __debugbreak();
          }
        }
      }
      v29 += 3;
      --v31;
    }
    while ( v31 );
    v36 = L->glref.ptr64;
    *(_QWORD *)(v36 + 48) -= 24 * v30;
    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD))(v36 + 16))(*(_QWORD *)(v36 + 24), ptr64, 24 * v30, 0i64);
  }
}

/*
==============
lj_tab_reasize
==============
*/
void lj_tab_reasize(lua_State *L, GCtab *t, unsigned int nasize)
{
  unsigned int hmask; 
  unsigned int v4; 

  hmask = t->hmask;
  if ( hmask )
  {
    _BitScanReverse(&v4, hmask);
    j_lj_tab_resize(L, t, nasize + 1, v4 + 1);
  }
  else
  {
    j_lj_tab_resize(L, t, nasize + 1, 0);
  }
}

/*
==============
lj_tab_getinth
==============
*/
const TValue *lj_tab_getinth(GCtab *t, int key)
{
  int v5; 
  __int64 v8; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, edx
    vmovsd  [rsp+arg_0], xmm0
  }
  v5 = __ROL4__(2 * HIDWORD(v8), 14);
  _RDX = t->node.ptr64 + 24i64 * (t->hmask & (((((unsigned int)v8 ^ (2 * HIDWORD(v8))) - v5) ^ __ROL4__(v5, 5)) - __ROL4__((v8 ^ (2 * HIDWORD(v8))) - v5, 13)));
  do
  {
    if ( (unsigned int)(*(__int64 *)(_RDX + 8) >> 47) < 0xFFFFFFF2 )
      __asm { vucomisd xmm0, qword ptr [rdx+8] }
    _RDX = *(_QWORD *)(_RDX + 16);
  }
  while ( _RDX );
  return 0i64;
}

/*
==============
lj_tab_getstr
==============
*/
const TValue *lj_tab_getstr(GCtab *t, GCstr *key)
{
  const TValue *result; 

  result = (const TValue *)(t->node.ptr64 + 24i64 * (key->hash & t->hmask));
  do
  {
    if ( (unsigned int)(result[1].it64 >> 47) == -5 && (GCstr *)(result[1].u64 & 0x7FFFFFFFFFFFi64) == key )
      break;
    result = (const TValue *)result[2].u64;
  }
  while ( result );
  return result;
}

/*
==============
lj_tab_get
==============
*/
Node *lj_tab_get(lua_State *L, GCtab *t, const TValue *key)
{
  signed __int64 u64; 
  __int64 v8; 
  unsigned __int64 v9; 
  Node *ptr64; 

  _RDI = key;
  u64 = key->u64;
  if ( (unsigned int)(u64 >> 47) == -5 )
  {
    v8 = u64 & 0x7FFFFFFFFFFFi64;
    v9 = t->node.ptr64 + 24i64 * (t->hmask & *(_DWORD *)(v8 + 12));
    while ( (unsigned int)(*(__int64 *)(v9 + 8) >> 47) != -5 || (*(_QWORD *)(v9 + 8) & 0x7FFFFFFFFFFFi64) != v8 )
    {
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    return (Node *)v9;
  }
  else
  {
    if ( (unsigned int)(u64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( u64 == -1 )
      {
LABEL_6:
        if ( *(_QWORD *)(L->glref.ptr64 + 248) != -1i64 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 454, "((&(((global_State *)(void *)(L->glref).ptr64))->nilnode.val)->it64 == -1)") )
            __debugbreak();
        }
        return (Node *)(L->glref.ptr64 + 248);
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm1, qword ptr [rdi]
        vcvttsd2si edx, xmm1; key
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, edx
        vucomisd xmm1, xmm0
      }
    }
    ptr64 = hashkey(t, _RDI);
    while ( !j_lj_obj_equal(&ptr64->key, _RDI) )
    {
      ptr64 = (Node *)ptr64->next.ptr64;
      if ( !ptr64 )
        goto LABEL_6;
    }
    return ptr64;
  }
}

/*
==============
lj_tab_newkey
==============
*/
Node *lj_tab_newkey(lua_State *L, GCtab *t, const TValue *key)
{
  Node *v6; 
  unsigned __int64 ptr64; 
  Node *v8; 
  Node *v9; 
  Node *i; 
  Node *j; 
  unsigned __int64 u64; 
  unsigned __int8 marked; 
  unsigned __int64 v14; 
  char v15; 

  v6 = hashkey(t, key);
  if ( v6->val.u64 != -1i64 || !t->hmask )
  {
    ptr64 = t->node.ptr64;
    v8 = (Node *)t->freetop.ptr64;
    if ( ((unsigned __int64)v8 < ptr64 || (unsigned __int64)v8 > ptr64 + 8 * (3i64 * t->hmask + 3)) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 466, "freenode >= nodebase && freenode <= nodebase+t->hmask+1") )
      __debugbreak();
    do
    {
      if ( v8 == (Node *)ptr64 )
      {
        rehashtab(L, t, key);
        return (Node *)j_lj_tab_set(L, t, key);
      }
      --v8;
    }
    while ( v8->key.u64 != -1i64 );
    t->freetop.ptr64 = (unsigned __int64)v8;
    if ( v8 == (Node *)(L->glref.ptr64 + 248) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 474, "freenode != &(((global_State *)(void *)(L->glref).ptr64))->nilnode") )
      __debugbreak();
    v9 = hashkey(t, &v6->key);
    if ( v9 == v6 )
    {
      v8->next.ptr64 = v6->next.ptr64;
      v6->next.ptr64 = (unsigned __int64)v8;
      v6 = v8;
    }
    else
    {
      for ( i = (Node *)v9->next.ptr64; i != v6; i = (Node *)i->next.ptr64 )
        v9 = i;
      v9->next.ptr64 = (unsigned __int64)v8;
      v8->val.u64 = v6->val.u64;
      v8->key.u64 = v6->key.u64;
      v8->next.ptr64 = v6->next.ptr64;
      v6->next.ptr64 = 0i64;
      v6->val.u64 = -1i64;
      for ( j = (Node *)v8->next.ptr64; j; j = (Node *)v8->next.ptr64 )
      {
        if ( (unsigned int)(j->key.it64 >> 47) == -5 && j->val.u64 != -1i64 && (Node *)(t->node.ptr64 + 24i64 * (t->hmask & *(_DWORD *)((j->key.u64 & 0x7FFFFFFFFFFFi64) + 0xC))) == v6 )
        {
          v8->next.ptr64 = j->next.ptr64;
          j->next.ptr64 = v6->next.ptr64;
          v6->next.ptr64 = (unsigned __int64)j;
        }
        else
        {
          v8 = j;
        }
      }
    }
  }
  u64 = key->u64;
  if ( key->u64 == 0x8000000000000000ui64 )
    u64 = 0i64;
  v6->key.u64 = u64;
  marked = t->marked;
  if ( (marked & 4) != 0 )
  {
    v14 = L->glref.ptr64;
    if ( (marked & (unsigned __int8)~*(_BYTE *)(v14 + 64) & 3) != 0 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 84, "((o)->gch.marked & 0x04) && !((o)->gch.marked & (g->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02))") )
      __debugbreak();
    v15 = *(_BYTE *)(v14 + 65);
    if ( (v15 == 5 || !v15) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_gc.h", 85, "g->gc.state != GCSfinalize && g->gc.state != GCSpause") )
      __debugbreak();
    t->marked &= ~4u;
    t->gclist.gcptr64 = *(_QWORD *)(v14 + 96);
    *(_QWORD *)(v14 + 96) = t;
  }
  if ( v6->val.u64 != -1i64 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_tab.c", 508, "((&n->val)->it64 == -1)") )
      __debugbreak();
  }
  return v6;
}

/*
==============
lj_tab_setinth
==============
*/
TValue *lj_tab_setinth(lua_State *L, GCtab *t, int key)
{
  int v7; 
  TValue keya; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, r8d
    vmovsd  qword ptr [rsp+28h+key], xmm0
  }
  v7 = __ROL4__(2 * keya.it, 14);
  _RDX = t->node.ptr64 + 24i64 * (t->hmask & ((((keya.i ^ (2 * keya.it)) - v7) ^ __ROL4__(v7, 5)) - __ROL4__((keya.i ^ (2 * keya.it)) - v7, 13)));
  do
  {
    if ( (unsigned int)(*(__int64 *)(_RDX + 8) >> 47) < 0xFFFFFFF2 )
      __asm { vucomisd xmm0, qword ptr [rdx+8] }
    _RDX = *(_QWORD *)(_RDX + 16);
  }
  while ( _RDX );
  return j_lj_tab_newkey(L, t, &keya);
}

/*
==============
lj_tab_setstr
==============
*/
TValue *lj_tab_setstr(lua_State *L, GCtab *t, GCstr *key)
{
  unsigned __int64 v5; 
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  TValue keya; 

  v5 = t->node.ptr64 + 24i64 * (key->hash & t->hmask);
  do
  {
    if ( (unsigned int)(*(__int64 *)(v5 + 8) >> 47) == -5 && (GCstr *)(*(_QWORD *)(v5 + 8) & 0x7FFFFFFFFFFFi64) == key )
      return (TValue *)v5;
    v5 = *(_QWORD *)(v5 + 16);
  }
  while ( v5 );
  v6 = (unsigned __int64)key | 0xFFFD800000000000ui64;
  keya.u64 = v6;
  v7 = v6 >> 47;
  if ( (unsigned int)(v6 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v8 = v6 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v7 != *(unsigned __int8 *)(v8 + 9) || (*(_BYTE *)(v8 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return j_lj_tab_newkey(L, t, &keya);
}

/*
==============
lj_tab_set
==============
*/
Node *lj_tab_set(lua_State *L, GCtab *t, const TValue *key)
{
  const TValue *v4; 
  unsigned __int64 u64; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  Node *ptr64; 
  TValue keya; 

  t->nomm = 0;
  v4 = key;
  u64 = key->u64;
  v8 = key->it64 >> 47;
  if ( (_DWORD)v8 == -5 )
  {
    v9 = u64 & 0x7FFFFFFFFFFFi64;
    v10 = t->node.ptr64 + 24i64 * (t->hmask & *(_DWORD *)(v9 + 12));
    while ( (unsigned int)(*(__int64 *)(v10 + 8) >> 47) != -5 || (*(_QWORD *)(v10 + 8) & 0x7FFFFFFFFFFFi64) != v9 )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
      {
        keya.u64 = v9 | 0xFFFD800000000000ui64;
        if ( ~(unsigned int)((__int64)(v9 | 0xFFFD800000000000ui64) >> 47) != *(unsigned __int8 *)((v9 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v9 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
        {
          if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
            __debugbreak();
        }
        return (Node *)j_lj_tab_newkey(L, t, &keya);
      }
    }
    return (Node *)v10;
  }
  else
  {
    if ( (unsigned int)v8 >= 0xFFFFFFF2 )
    {
      if ( u64 == -1i64 )
        j_lj_err_msg(L, LJ_ERR_NILIDX);
    }
    else
    {
      __asm
      {
        vmovsd  xmm1, qword ptr [r8]
        vcvttsd2si r8d, xmm1; key
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, r8d
        vucomisd xmm1, xmm0
      }
    }
    ptr64 = hashkey(t, v4);
    while ( !j_lj_obj_equal(&ptr64->key, v4) )
    {
      ptr64 = (Node *)ptr64->next.ptr64;
      if ( !ptr64 )
        return (Node *)j_lj_tab_newkey(L, t, v4);
    }
    return ptr64;
  }
}

/*
==============
lj_tab_next
==============
*/
__int64 lj_tab_next(lua_State *L, GCtab *t, TValue *key)
{
  signed __int64 u64; 
  Node *ptr64; 
  unsigned int asize; 
  __int64 v13; 
  unsigned int hmask; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  _RDI = key;
  u64 = key->u64;
  if ( (unsigned int)(u64 >> 47) >= 0xFFFFFFF2 )
    goto LABEL_4;
  __asm
  {
    vmovsd  xmm1, qword ptr [rdi]
    vcvttsd2si edx, xmm1
  }
  if ( _EDX >= t->asize )
    goto LABEL_4;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, edx
    vucomisd xmm1, xmm0
  }
  if ( _EDX != t->asize )
  {
LABEL_4:
    if ( u64 == -1 )
    {
      _EDX = -1;
    }
    else
    {
      ptr64 = hashkey(t, _RDI);
      do
      {
        if ( j_lj_obj_equal(&ptr64->key, _RDI) )
        {
          _EDX = t->asize + ((int)ptr64 - LODWORD(t->node.ptr64)) / 24;
          goto LABEL_12;
        }
        ptr64 = (Node *)ptr64->next.ptr64;
      }
      while ( ptr64 );
      if ( _RDI->it != -98305 )
        j_lj_err_msg(L, LJ_ERR_NEXTIDX);
      _EDX = _RDI->i - 1;
    }
  }
LABEL_12:
  asize = t->asize;
  v13 = _EDX + 1;
  if ( (unsigned int)v13 < asize )
  {
    while ( *(_QWORD *)(t->array.ptr64 + 8 * v13) == -1i64 )
    {
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= asize )
        goto LABEL_15;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, edx
      vmovsd  qword ptr [rdi], xmm0
    }
    v21 = *(_QWORD *)(t->array.ptr64 + 8 * v13);
    _RDI[1].u64 = v21;
    v22 = v21 >> 47;
    if ( (unsigned int)(v21 >> 47) + 4 <= 0xFFFFFFF6 )
      return 1i64;
    goto LABEL_28;
  }
LABEL_15:
  hmask = t->hmask;
  v15 = (unsigned int)v13 - asize;
  if ( (unsigned int)v15 > hmask )
    return 0i64;
  v16 = t->node.ptr64;
  while ( 1 )
  {
    v17 = 3 * v15;
    if ( *(_QWORD *)(v16 + 24 * v15) != -1i64 )
      break;
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 > hmask )
      return 0i64;
  }
  v23 = *(_QWORD *)(v16 + 24 * v15 + 8);
  _RDI->u64 = v23;
  v24 = v23 >> 47;
  if ( (unsigned int)(v23 >> 47) + 4 > 0xFFFFFFF6 )
  {
    v25 = v23 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v24 != *(unsigned __int8 *)(v25 + 9) || (*(_BYTE *)(v25 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  v21 = *(_QWORD *)(v16 + 8 * v17);
  _RDI[1].u64 = v21;
  v22 = v21 >> 47;
  if ( (unsigned int)(v21 >> 47) + 4 > 0xFFFFFFF6 )
  {
LABEL_28:
    v26 = v21 & 0x7FFFFFFFFFFFi64;
    if ( ~(_DWORD)v22 != *(unsigned __int8 *)(v26 + 9) || (*(_BYTE *)(v26 + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 925, "!((((uint32_t)((o1)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o1)->it64 >> 47)) == ((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o1)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
  }
  return 1i64;
}

/*
==============
lj_tab_len
==============
*/
unsigned int lj_tab_len(GCtab *t)
{
  unsigned int asize; 
  __int64 v2; 
  unsigned __int64 ptr64; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 

  asize = t->asize;
  v2 = asize - 1;
  if ( asize > 1 && (ptr64 = t->array.ptr64, *(_QWORD *)(ptr64 + 8 * v2) == -1i64) )
  {
    v4 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      do
      {
        v5 = (v4 + asize) >> 1;
        v6 = v5 - 1;
        if ( *(_QWORD *)(ptr64 + 8 * v6) != -1i64 )
          v4 = (v4 + asize) >> 1;
        if ( *(_QWORD *)(ptr64 + 8 * v6) != -1i64 )
          v5 = asize;
        asize = v5;
      }
      while ( v5 - v4 > 1 );
    }
    return v4 - 1;
  }
  else
  {
    if ( !asize )
      LODWORD(v2) = 0;
    if ( t->hmask )
      return unbound_search(t, v2);
    else
      return v2;
  }
}

/*
==============
hashkey
==============
*/
Node *hashkey(const GCtab *t, const TValue *key)
{
  unsigned __int64 u64; 
  __int64 v3; 
  unsigned __int64 v5; 
  int v6; 
  int v7; 

  u64 = key->u64;
  v3 = key->it64 >> 47;
  if ( (_DWORD)v3 == -5 )
    return (Node *)(t->node.ptr64 + 24i64 * (t->hmask & *(_DWORD *)((u64 & 0x7FFFFFFFFFFFi64) + 0xC)));
  if ( (unsigned int)v3 < 0xFFFFFFF2 )
  {
    LODWORD(v5) = 2 * HIDWORD(u64);
LABEL_5:
    v6 = v5 ^ u64;
    v7 = __ROL4__(v5, 14);
    return (Node *)(t->node.ptr64 + 24i64 * (t->hmask & (((v6 - v7) ^ __ROL4__(v7, 5)) - __ROL4__(v6 - v7, 13))));
  }
  if ( (unsigned int)(v3 + 3) > 1 )
  {
    v5 = HIDWORD(u64);
    goto LABEL_5;
  }
  return (Node *)(t->node.ptr64 + 24i64 * (t->hmask & (unsigned int)(-2 - v3)));
}

/*
==============
newtab
==============
*/
GCtab *newtab(lua_State *L, unsigned int asize, unsigned int hbits)
{
  __int64 v3; 
  char *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  char *v10; 

  v3 = asize;
  if ( asize - 1 > 0xF )
  {
    v6 = (char *)j_lj_mem_newgco(L, 0x40ui64);
    *(_WORD *)(v6 + 9) = -245;
    v6[11] = 0;
    *((_QWORD *)v6 + 2) = 0i64;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_QWORD *)v6 + 6) = 0i64;
    v8 = L->glref.ptr64 + 248;
    *((_QWORD *)v6 + 5) = v8;
    *((_QWORD *)v6 + 7) = v8;
    if ( (_DWORD)v3 )
    {
      if ( (unsigned int)v3 > 0x8000001 )
        goto LABEL_10;
      *((_QWORD *)v6 + 2) = j_lj_mem_realloc(L, NULL, 0i64, 8 * v3);
      *((_DWORD *)v6 + 12) = v3;
    }
  }
  else
  {
    v6 = (char *)j_lj_mem_newgco(L, 8i64 * asize + 64);
    *(_WORD *)(v6 + 9) = -245;
    *((_QWORD *)v6 + 2) = v6 + 64;
    v6[11] = v3;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 13) = 0;
    *((_DWORD *)v6 + 12) = v3;
    v7 = L->glref.ptr64 + 248;
    *((_QWORD *)v6 + 5) = v7;
    *((_QWORD *)v6 + 7) = v7;
  }
  if ( hbits )
  {
    if ( hbits <= 0x1A )
    {
      v9 = 1 << hbits;
      v10 = (char *)j_lj_mem_realloc(L, NULL, 0i64, 24i64 * v9);
      *((_QWORD *)v6 + 5) = v10;
      *((_QWORD *)v6 + 7) = &v10[24 * v9];
      *((_DWORD *)v6 + 13) = v9 - 1;
      return (GCtab *)v6;
    }
LABEL_10:
    j_lj_err_msg(L, LJ_ERR_TABOV);
  }
  return (GCtab *)v6;
}

/*
==============
rehashtab
==============
*/
void rehashtab(lua_State *L, GCtab *t, const TValue *ek)
{
  unsigned int asize; 
  int *v5; 
  __int64 v7; 
  int v10; 
  unsigned int v11; 
  int *v12; 
  __int64 v13; 
  unsigned int v14; 
  int i; 
  int v16; 
  int v17; 
  __int64 v19; 
  unsigned int v20; 
  int v24; 
  int v25; 
  int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  int v39[28]; 

  asize = t->asize;
  v5 = v39;
  v7 = 28i64;
  _R14 = ek;
  while ( v7 )
  {
    *v5++ = 0;
    --v7;
  }
  if ( asize )
  {
    v11 = 0;
    v12 = v39;
    v13 = 0i64;
    v10 = 0;
    do
    {
      v14 = 2 << v11;
      if ( 2 << v11 >= asize )
      {
        v14 = asize - 1;
        if ( (unsigned int)v13 > asize - 1 )
          break;
      }
      for ( i = 0; (unsigned int)v13 <= v14; i = v16 )
      {
        v16 = i + 1;
        if ( *(_QWORD *)(t->array.ptr64 + 8 * v13) == -1i64 )
          v16 = i;
        v13 = (unsigned int)(v13 + 1);
      }
      *v12 += i;
      v10 += i;
      ++v12;
      ++v11;
    }
    while ( v11 < 0x1C );
  }
  else
  {
    v10 = 0;
  }
  v17 = 0;
  _RDX = (__int64 *)(t->node.ptr64 + 8);
  v19 = t->hmask + 1;
  v20 = 1;
  do
  {
    if ( *(_RDX - 1) != -1 )
    {
      if ( (unsigned int)(*_RDX >> 47) < 0xFFFFFFF2 )
      {
        __asm
        {
          vmovsd  xmm1, qword ptr [rdx]
          vcvttsd2si eax, xmm1
        }
        if ( _EAX < 0x8000001 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, eax
            vucomisd xmm1, xmm0
          }
        }
      }
      ++v17;
    }
    _RDX += 3;
    --v19;
  }
  while ( v19 );
  v24 = v10;
  v25 = v17 + v10 + 1;
  if ( (unsigned int)(_R14->it64 >> 47) < 0xFFFFFFF2 )
  {
    __asm
    {
      vmovsd  xmm1, qword ptr [r14]
      vcvttsd2si eax, xmm1
    }
    if ( _EAX < 0x8000001 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, eax
        vucomisd xmm1, xmm0
      }
    }
  }
  v30 = v10;
  v31 = 0;
  v32 = 2 * v10;
  v33 = 0;
  v34 = 0i64;
  v35 = 0;
  if ( (unsigned int)(2 * v24) > 1 )
  {
    do
    {
      if ( v35 == v30 )
        break;
      v36 = v39[v34];
      if ( v36 )
      {
        v35 += v36;
        if ( 2 * v35 > (unsigned int)(1 << v34) )
        {
          v31 = v35;
          v33 = (2 << v34) + 1;
        }
      }
      v34 = (unsigned int)(v34 + 1);
    }
    while ( v32 > 1 << v34 );
  }
  v37 = v25 - v31;
  if ( v37 )
  {
    if ( v37 != 1 )
    {
      _BitScanReverse(&v38, v37 - 1);
      v20 = v38 + 1;
    }
  }
  else
  {
    v20 = 0;
  }
  j_lj_tab_resize(L, t, v33, v20);
}

/*
==============
unbound_search
==============
*/
__int64 unbound_search(GCtab *t, unsigned int j)
{
  unsigned int asize; 
  unsigned int v4; 
  unsigned int v5; 
  int v8; 
  int i; 
  int v12; 
  __int64 v14; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  asize = t->asize;
  v4 = j + 1;
  v5 = j;
  while ( 1 )
  {
    if ( v4 >= asize )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, r8d
        vmovsd  [rsp+arg_0], xmm0
      }
      v8 = __ROL4__(2 * HIDWORD(v18), 14);
      _RDX = (_QWORD *)(t->node.ptr64 + 24i64 * (t->hmask & (((((unsigned int)v18 ^ (2 * HIDWORD(v18))) - v8) ^ __ROL4__(v8, 5)) - __ROL4__((v18 ^ (2 * HIDWORD(v18))) - v8, 13))));
      do
      {
        if ( (unsigned int)((__int64)_RDX[1] >> 47) < 0xFFFFFFF2 )
          __asm { vucomisd xmm0, qword ptr [rdx+8] }
        _RDX = (_QWORD *)_RDX[2];
      }
      while ( _RDX );
    }
    else
    {
      _RDX = (_QWORD *)(t->array.ptr64 + 8i64 * (int)v4);
    }
    if ( !_RDX || *_RDX == -1i64 )
      break;
    v5 = v4;
    v4 *= 2;
    if ( v4 > 0x7FFFFFFD )
    {
      for ( i = 1; ; ++i )
      {
        if ( i >= asize )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2sd xmm0, xmm0, r8d
            vmovsd  [rsp+arg_0], xmm0
          }
          v12 = __ROL4__(2 * HIDWORD(v19), 14);
          _RDX = (_QWORD *)(t->node.ptr64 + 24i64 * (t->hmask & (((((unsigned int)v19 ^ (2 * HIDWORD(v19))) - v12) ^ __ROL4__(v12, 5)) - __ROL4__((v19 ^ (2 * HIDWORD(v19))) - v12, 13))));
          do
          {
            if ( (unsigned int)((__int64)_RDX[1] >> 47) < 0xFFFFFFF2 )
              __asm { vucomisd xmm0, qword ptr [rdx+8] }
            _RDX = (_QWORD *)_RDX[2];
          }
          while ( _RDX );
        }
        else
        {
          _RDX = (_QWORD *)(t->array.ptr64 + 8i64 * i);
        }
        if ( !_RDX || *_RDX == -1i64 )
          break;
      }
      return (unsigned int)(i - 1);
    }
  }
  while ( v4 - v5 > 1 )
  {
    v14 = (v5 + v4) >> 1;
    if ( (unsigned int)v14 >= asize )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, r9d
        vmovsd  [rsp+arg_0], xmm0
      }
      v17 = __ROL4__(2 * HIDWORD(v20), 14);
      _RDX = (_QWORD *)(t->node.ptr64 + 24i64 * (t->hmask & (((((unsigned int)v20 ^ (2 * HIDWORD(v20))) - v17) ^ __ROL4__(v17, 5)) - __ROL4__((v20 ^ (2 * HIDWORD(v20))) - v17, 13))));
      do
      {
        if ( (unsigned int)((__int64)_RDX[1] >> 47) < 0xFFFFFFF2 )
          __asm { vucomisd xmm0, qword ptr [rdx+8] }
        _RDX = (_QWORD *)_RDX[2];
      }
      while ( _RDX );
    }
    else
    {
      _RDX = (_QWORD *)(t->array.ptr64 + 8 * v14);
    }
    if ( !_RDX || *_RDX == -1i64 )
      v4 = (v5 + v4) >> 1;
    else
      v5 = (v5 + v4) >> 1;
  }
  return v5;
}

