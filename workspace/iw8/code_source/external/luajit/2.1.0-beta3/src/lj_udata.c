/*
==============
lj_udata_new
==============
*/
GCudata *lj_udata_new(lua_State *L, unsigned int sz, GCtab *env)
{
  GCudata *result; 
  unsigned __int64 ptr64; 
  char v8; 

  result = (GCudata *)j_lj_mem_realloc(L, NULL, 0i64, sz + 48i64);
  ptr64 = L->glref.ptr64;
  v8 = *(_BYTE *)(ptr64 + 64);
  result->env.gcptr64 = (unsigned __int64)env;
  result->marked = v8 & 3;
  *(_WORD *)&result->gct = 12;
  result->len = sz;
  result->metatable.gcptr64 = 0i64;
  result->nextgc.gcptr64 = **(_QWORD **)(ptr64 + 216);
  **(_QWORD **)(ptr64 + 216) = result;
  return result;
}

/*
==============
lj_udata_free
==============
*/
void lj_udata_free(global_State *g, GCudata *ud)
{
  unsigned __int64 v2; 

  v2 = ud->len + 48i64;
  g->gc.total -= v2;
  g->allocf(g->allocd, ud, v2, 0i64);
}

