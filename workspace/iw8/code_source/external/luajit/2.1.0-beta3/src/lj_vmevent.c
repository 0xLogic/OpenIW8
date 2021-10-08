/*
==============
lj_vmevent_prepare
==============
*/
__int64 lj_vmevent_prepare(lua_State *L, VMEvent ev)
{
  unsigned __int64 ptr64; 
  GCstr *v5; 
  const TValue *v6; 
  int v7; 
  const TValue *v8; 
  __int64 u64; 
  TValue *top; 
  signed __int64 v11; 

  ptr64 = L->glref.ptr64;
  v5 = j_lj_str_new(L, "_VMEVENTS", 9ui64);
  if ( (unsigned int)(*(__int64 *)(L->glref.ptr64 + 224) >> 47) != -12 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_vmevent.c", 23, "(((uint32_t)(((&(((global_State *)(void *)(L->glref).ptr64))->registrytv))->it64 >> 47)) == (~11u))") )
    __debugbreak();
  v6 = j_lj_tab_getstr((GCtab *)(*(_QWORD *)(L->glref.ptr64 + 224) & 0x7FFFFFFFFFFFi64), v5);
  if ( (unsigned int)(v6->it64 >> 47) == -12 && ((v7 = ev & 0xFFFFFFF8, (ev & 0xFFFFFFF8) >= *(_DWORD *)((v6->u64 & 0x7FFFFFFFFFFFi64) + 0x30)) ? (v8 = j_lj_tab_getinth((GCtab *)(v6->u64 & 0x7FFFFFFFFFFFi64), v7)) : (v8 = (const TValue *)(*(_QWORD *)((v6->u64 & 0x7FFFFFFFFFFFi64) + 0x10) + 8i64 * v7)), v8 && (u64 = v8->u64, (unsigned int)(v8->it64 >> 47) == -9)) )
  {
    if ( (__int64)(L->maxstack.ptr64 - (unsigned __int64)L->top) <= 160 )
    {
      j_lj_state_growstack(L, 0x14u);
      u64 = v8->u64;
    }
    if ( (unsigned int)(u64 >> 47) != -9 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_vmevent.c", 29, "(((uint32_t)((tv)->it64 >> 47)) == (~8u))") )
      __debugbreak();
    top = L->top;
    L->top = top + 1;
    v11 = v8->u64 & 0x7FFFFFFFFFFFi64 | 0xFFFB800000000000ui64;
    top->u64 = v11;
    if ( ~(unsigned int)(v11 >> 47) != *(unsigned __int8 *)((v11 & 0x7FFFFFFFFFFFi64) + 9) || (*(_BYTE *)((v11 & 0x7FFFFFFFFFFFi64) + 8) & (unsigned __int8)~*(_BYTE *)(L->glref.ptr64 + 64) & 3) != 0 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 878, "!((((uint32_t)((o)->it64 >> 47)) - ((~4u)+1)) > ((~13u) - ((~4u)+1))) || ((~((uint32_t)((o)->it64 >> 47)) == ((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1)))->gch.gct) && !((((GCobj *)((((o)->gcr).gcptr64) & (((uint64_t)1 << 47) - 1))))->gch.marked & ((((global_State *)(void *)(L->glref).ptr64))->gc.currentwhite ^ (0x01 | 0x02)) & (0x01 | 0x02)))") )
        __debugbreak();
    }
    L->top->u64 = -1i64;
    ++L->top;
    return (__int64)L->top - L->stack.ptr64;
  }
  else
  {
    *(_BYTE *)(ptr64 + 211) &= ~(1 << (ev & 7));
    return 0i64;
  }
}

/*
==============
lj_vmevent_call
==============
*/
void lj_vmevent_call(lua_State *L, __int64 argbase)
{
  unsigned __int64 ptr64; 
  char v4; 
  char v5; 
  char v6; 
  FILE *v7; 
  signed __int64 it64; 
  const char *v9; 
  FILE *v10; 
  FILE *v11; 

  ptr64 = L->glref.ptr64;
  v4 = *(_BYTE *)(ptr64 + 211);
  v5 = *(_BYTE *)(ptr64 + 209);
  *(_BYTE *)(ptr64 + 211) = 0;
  *(_BYTE *)(ptr64 + 209) = v5 | 0x30;
  v6 = v5 & 0xF0;
  if ( (unsigned int)j_lj_vm_pcall(L, L->stack.ptr64 + argbase, 1i64, 0i64) )
  {
    --L->top;
    v7 = __acrt_iob_func(2u);
    fputs("VM handler failed: ", v7);
    it64 = L->top->it64;
    if ( (unsigned int)(it64 >> 47) == -5 )
      v9 = (const char *)((it64 & 0x7FFFFFFFFFFFi64) + 24);
    else
      v9 = "?";
    v10 = __acrt_iob_func(2u);
    fputs(v9, v10);
    v11 = __acrt_iob_func(2u);
    fputc(10, v11);
  }
  *(_BYTE *)(ptr64 + 209) &= 0xFu;
  *(_BYTE *)(ptr64 + 209) |= v6;
  if ( *(_BYTE *)(ptr64 + 211) != 0xFF )
    *(_BYTE *)(ptr64 + 211) = v4;
}

