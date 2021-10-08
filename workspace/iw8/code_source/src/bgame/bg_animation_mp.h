/*
==============
BG_CheckAnyOn
==============
*/

int __fastcall BG_CheckAnyOn(const unsigned int *array)
{
  return ?BG_CheckAnyOn@@YAHQEBI@Z(array);
}

/*
==============
BG_CheckAnyBits
==============
*/

int __fastcall BG_CheckAnyBits(const unsigned int *array, const unsigned int *array2)
{
  return ?BG_CheckAnyBits@@YAHQEBI0@Z(array, array2);
}

/*
==============
BG_CheckEqualBits
==============
*/

int __fastcall BG_CheckEqualBits(const unsigned int *array, const unsigned int *array2)
{
  return ?BG_CheckEqualBits@@YAHQEBI0@Z(array, array2);
}

/*
==============
BG_CheckAnyBits
==============
*/
__int64 BG_CheckAnyBits(const unsigned int *array, const unsigned int *array2)
{
  unsigned int v4; 
  signed __int64 v5; 

  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1041, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( !array2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1042, ASSERT_TYPE_ASSERT, "(array2)", (const char *)&queryFormat, "array2") )
    __debugbreak();
  v4 = 0;
  v5 = (char *)array - (char *)array2;
  while ( (*(const unsigned int *)((char *)array2 + v5) & *array2) == 0 )
  {
    ++v4;
    ++array2;
    if ( v4 >= 8 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
BG_CheckAnyOn
==============
*/
__int64 BG_CheckAnyOn(const unsigned int *array)
{
  const unsigned int *v1; 
  unsigned int v2; 

  v1 = array;
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 994, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  v2 = 0;
  while ( !*v1 )
  {
    ++v2;
    ++v1;
    if ( v2 >= 8 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
BG_CheckEqualBits
==============
*/
__int64 BG_CheckEqualBits(const unsigned int *array, const unsigned int *array2)
{
  unsigned int v4; 
  signed __int64 v5; 

  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1057, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( !array2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1058, ASSERT_TYPE_ASSERT, "(array2)", (const char *)&queryFormat, "array2") )
    __debugbreak();
  v4 = 0;
  v5 = (char *)array - (char *)array2;
  while ( *(const unsigned int *)((char *)array2 + v5) == *array2 )
  {
    ++v4;
    ++array2;
    if ( v4 >= 8 )
      return 1i64;
  }
  return 0i64;
}

