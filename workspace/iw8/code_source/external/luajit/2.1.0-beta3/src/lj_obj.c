/*
==============
lj_obj_equal
==============
*/
_BOOL8 lj_obj_equal(const TValue *o1, const TValue *o2)
{
  __int64 v4; 
  __int64 v5; 
  double n; 

  v4 = o1->it64 >> 47;
  v5 = o2->it64 >> 47;
  if ( (_DWORD)v4 == (_DWORD)v5 )
  {
    if ( (unsigned int)v4 >= 0xFFFFFFFD )
      return 1i64;
    if ( (unsigned int)v4 >= 0xFFFFFFF2 )
      return o1->u64 == o2->u64;
    goto LABEL_11;
  }
  if ( (unsigned int)v4 <= 0xFFFFFFF2 && (unsigned int)v5 <= 0xFFFFFFF2 )
  {
    if ( (unsigned int)v4 >= 0xFFFFFFF2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
      __debugbreak();
LABEL_11:
    n = o1->n;
    if ( (unsigned int)(o2->it64 >> 47) >= 0xFFFFFFF2 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\external\\luajit\\2.1.0-beta3\\src\\lj_obj.h", 970, "(((uint32_t)((o)->it64 >> 47)) < (~13u))") )
        __debugbreak();
    }
    if ( n == o2->n )
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

