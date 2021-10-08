/*
==============
truncate_cast<int,unsigned __int64>
==============
*/

int __fastcall truncate_cast<int,unsigned __int64>(unsigned __int64 val)
{
  return ??$truncate_cast@H_K@@YAH_K@Z(val);
}

/*
==============
truncate_cast<signed char,unsigned __int64>
==============
*/

char __fastcall truncate_cast<signed char,unsigned __int64>(unsigned __int64 val)
{
  return ??$truncate_cast@C_K@@YAC_K@Z(val);
}

/*
==============
truncate_cast<short,__int64>
==============
*/

__int16 __fastcall truncate_cast<short,__int64>(__int64 val)
{
  return ??$truncate_cast@F_J@@YAF_J@Z(val);
}

/*
==============
truncate_cast<unsigned __int64,__int64>
==============
*/

unsigned __int64 __fastcall truncate_cast<unsigned __int64,__int64>(__int64 val)
{
  return ??$truncate_cast@_K_J@@YA_K_J@Z(val);
}

/*
==============
truncate_cast<__int64,unsigned __int64>
==============
*/

__int64 __fastcall truncate_cast<__int64,unsigned __int64>(unsigned __int64 val)
{
  return ??$truncate_cast@_J_K@@YA_J_K@Z(val);
}

/*
==============
truncate_cast<short,int>
==============
*/

__int16 __fastcall truncate_cast<short,int>(int val)
{
  return ??$truncate_cast@FH@@YAFH@Z(val);
}

/*
==============
truncate_cast<int,__int64>
==============
*/

int __fastcall truncate_cast<int,__int64>(__int64 val)
{
  return ??$truncate_cast@H_J@@YAH_J@Z(val);
}

/*
==============
truncate_cast<signed char,int>
==============
*/

char __fastcall truncate_cast<signed char,int>(int val)
{
  return ??$truncate_cast@CH@@YACH@Z(val);
}

/*
==============
truncate_cast<short,unsigned __int64>
==============
*/

__int16 __fastcall truncate_cast<short,unsigned __int64>(unsigned __int64 val)
{
  return ??$truncate_cast@F_K@@YAF_K@Z(val);
}

/*
==============
truncate_cast<short,long>
==============
*/

__int16 __fastcall truncate_cast<short,long>(int val)
{
  return ??$truncate_cast@FJ@@YAFJ@Z(val);
}

/*
==============
truncate_cast<char,unsigned __int64>
==============
*/

char __fastcall truncate_cast<char,unsigned __int64>(unsigned __int64 val)
{
  return ??$truncate_cast@D_K@@YAD_K@Z(val);
}

/*
==============
float_to_integral_cast<int,float>
==============
*/

int __fastcall float_to_integral_cast<int,float>(float val)
{
  return ??$float_to_integral_cast@HM@@YAHM@Z(val);
}

/*
==============
truncate_cast<int,unsigned __int64>
==============
*/
__int64 truncate_cast<int,unsigned __int64>(unsigned __int64 val)
{
  unsigned int v1; 

  v1 = val;
  if ( (val > 0x7FFFFFFFFFFFFFFFi64 || val + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)val, "unsigned", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<short,int>
==============
*/
__int64 truncate_cast<short,int>(int val)
{
  unsigned __int16 v1; 

  v1 = val;
  if ( (unsigned int)(val + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)val, "signed", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<unsigned __int64,__int64>
==============
*/
__int64 truncate_cast<unsigned __int64,__int64>(__int64 val)
{
  if ( val < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", val, "signed", val) )
    __debugbreak();
  return val;
}

/*
==============
truncate_cast<int,__int64>
==============
*/
__int64 truncate_cast<int,__int64>(__int64 val)
{
  unsigned int v1; 

  v1 = val;
  if ( (unsigned __int64)(val + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)val, "signed", val) )
    __debugbreak();
  return v1;
}

/*
==============
float_to_integral_cast<int,float>
==============
*/

__int64 __fastcall float_to_integral_cast<int,float>(double val)
{
  double v4; 

  __asm
  {
    vcomiss xmm0, cs:__real@cb800000
    vcvttss2si ebx, xmm0
    vcomiss xmm0, cs:__real@4b800000
    vcomiss xmm0, cs:__real@cf000000
    vcomiss xmm0, cs:__real@4f000000
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_10], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", (int)_EBX, v4) )
    __debugbreak();
  return _EBX;
}

/*
==============
truncate_cast<signed char,int>
==============
*/
__int64 truncate_cast<signed char,int>(int val)
{
  unsigned __int8 v1; 

  v1 = val;
  if ( (unsigned int)(val + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)val, "signed", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<char,unsigned __int64>
==============
*/
__int64 truncate_cast<char,unsigned __int64>(unsigned __int64 val)
{
  unsigned __int8 v1; 

  v1 = val;
  if ( (val > 0x7FFFFFFFFFFFFFFFi64 || val + 128 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,unsigned __int64>(unsigned __int64)", "signed", (char)val, "unsigned", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<short,__int64>
==============
*/
__int64 truncate_cast<short,__int64>(__int64 val)
{
  unsigned __int16 v1; 

  v1 = val;
  if ( (unsigned __int64)(val + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,__int64>(__int64)", "signed", (__int16)val, "signed", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<__int64,unsigned __int64>
==============
*/
unsigned __int64 truncate_cast<__int64,unsigned __int64>(unsigned __int64 val)
{
  if ( val > 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "__int64 __cdecl truncate_cast_impl<__int64,unsigned __int64>(unsigned __int64)", "signed", val, "unsigned", val) )
    __debugbreak();
  return val;
}

/*
==============
truncate_cast<signed char,unsigned __int64>
==============
*/
__int64 truncate_cast<signed char,unsigned __int64>(unsigned __int64 val)
{
  unsigned __int8 v1; 

  v1 = val;
  if ( (val > 0x7FFFFFFFFFFFFFFFi64 || val + 128 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,unsigned __int64>(unsigned __int64)", "signed", (char)val, "unsigned", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<short,long>
==============
*/
__int64 truncate_cast<short,long>(int val)
{
  unsigned __int16 v1; 

  v1 = val;
  if ( (unsigned int)(val + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,long>(long)", "signed", (__int16)val, "signed", val) )
    __debugbreak();
  return v1;
}

/*
==============
truncate_cast<short,unsigned __int64>
==============
*/
__int64 truncate_cast<short,unsigned __int64>(unsigned __int64 val)
{
  unsigned __int16 v1; 

  v1 = val;
  if ( (val > 0x7FFFFFFFFFFFFFFFi64 || val + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned __int64>(unsigned __int64)", "signed", (__int16)val, "unsigned", val) )
    __debugbreak();
  return v1;
}

