/*
==============
lj_obj_equal
==============
*/
_BOOL8 lj_obj_equal(const TValue *o1, const TValue *o2)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  bool v10; 
  int v11; 

  _RBX = o2;
  _RDI = o1;
  v5 = o1->it64 >> 47;
  v6 = o2->it64 >> 47;
  if ( (_DWORD)v5 == (_DWORD)v6 )
  {
    if ( (unsigned int)v5 >= 0xFFFFFFFD )
      return 1i64;
    if ( (unsigned int)v5 >= 0xFFFFFFF2 )
      return o1->u64 == o2->u64;
    goto LABEL_11;
  }
  if ( (unsigned int)v5 <= 0xFFFFFFF2 && (unsigned int)v6 <= 0xFFFFFFF2 )
  {
    if ( (unsigned int)v5 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
LABEL_11:
    v8 = _RBX->it64 >> 47;
    __asm
    {
      vmovaps [rsp+38h+var_18], xmm6
      vmovsd  xmm6, qword ptr [rdi]
    }
    v10 = (_DWORD)v8 == -14;
    if ( (unsigned int)v8 >= 0xFFFFFFF2 )
    {
      v11 = j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))");
      v10 = v11 == 0;
      if ( v11 )
        __debugbreak();
    }
    __asm
    {
      vucomisd xmm6, qword ptr [rbx]
      vmovaps xmm6, [rsp+38h+var_18]
    }
    if ( v10 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
lj_obj_ptr
==============
*/
__int64 lj_obj_ptr(const TValue *o)
{
  unsigned __int64 u64; 
  __int64 v2; 

  u64 = o->u64;
  v2 = o->it64 >> 47;
  if ( (_DWORD)v2 == -13 )
    return (u64 & 0x7FFFFFFFFFFFi64) + 48;
  if ( (_DWORD)v2 == -4 )
    return u64 & 0x7FFFFFFFFFFFi64;
  if ( (unsigned int)(v2 + 4) > 0xFFFFFFF6 )
  {
    u64 = o->u64;
    return u64 & 0x7FFFFFFFFFFFi64;
  }
  return 0i64;
}

