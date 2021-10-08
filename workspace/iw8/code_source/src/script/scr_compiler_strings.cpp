/*
==============
Scr_GetOpaqueStringAtIndex
==============
*/

const char *__fastcall Scr_GetOpaqueStringAtIndex(const unsigned int canonicalString)
{
  return ?Scr_GetOpaqueStringAtIndex@@YAPEBDI@Z(canonicalString);
}

/*
==============
Scr_GetCanonicalStringAtIndex
==============
*/

const char *__fastcall Scr_GetCanonicalStringAtIndex(const unsigned int index)
{
  return ?Scr_GetCanonicalStringAtIndex@@YAPEBDI@Z(index);
}

/*
==============
Scr_GetCanonicalStringAtIndex
==============
*/
const char *Scr_GetCanonicalStringAtIndex(const unsigned int index)
{
  unsigned int opaqueStringCount; 
  unsigned int v3; 
  __int64 v5; 
  __int64 v6; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 130, ASSERT_TYPE_ASSERT, "( index ) > ( 0 )", "index > 0\n\t%i, %i", 0, 0i64) )
    __debugbreak();
  opaqueStringCount = g_scrCanonicalStringPub.opaqueStringCount;
  v3 = index - 1;
  if ( !g_scrCanonicalStringPub.opaqueStringCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 133, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.opaqueStringCount > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.opaqueStringCount > 0") )
      __debugbreak();
    opaqueStringCount = g_scrCanonicalStringPub.opaqueStringCount;
  }
  if ( v3 >= opaqueStringCount )
  {
    LODWORD(v6) = opaqueStringCount;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( indexMinusOne ) < (unsigned)( g_scrCanonicalStringPub.opaqueStringCount )", "indexMinusOne doesn't index g_scrCanonicalStringPub.opaqueStringCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return Scr_OpaqueStrings_GetCompileString(v3);
}

/*
==============
Scr_GetOpaqueStringAtIndex
==============
*/
const char *Scr_GetOpaqueStringAtIndex(const unsigned int canonicalString)
{
  CanonicalStringData *canonicalStringData; 
  unsigned int v3; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 144, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 145, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.opaqueStringCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 146, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.opaqueStringCount > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.opaqueStringCount > 0") )
    __debugbreak();
  if ( canonicalString <= g_scrCanonicalStringPub.opaqueStringCount )
  {
    if ( !canonicalString )
    {
      LODWORD(v6) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 130, ASSERT_TYPE_ASSERT, "( index ) > ( 0 )", "index > 0\n\t%i, %i", v6, 0i64) )
        __debugbreak();
    }
    v5 = canonicalString - 1;
    if ( !g_scrCanonicalStringPub.opaqueStringCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 133, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.opaqueStringCount > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.opaqueStringCount > 0") )
      __debugbreak();
    if ( v5 >= g_scrCanonicalStringPub.opaqueStringCount )
    {
      LODWORD(v7) = g_scrCanonicalStringPub.opaqueStringCount;
      LODWORD(v6) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( indexMinusOne ) < (unsigned)( g_scrCanonicalStringPub.opaqueStringCount )", "indexMinusOne doesn't index g_scrCanonicalStringPub.opaqueStringCount\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    return Scr_OpaqueStrings_GetCompileString(v5);
  }
  else
  {
    canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
    v3 = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[canonicalString - g_scrCanonicalStringPub.opaqueStringCount];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler_strings.cpp", 153, ASSERT_TYPE_ASSERT, "( offset )", (const char *)&queryFormat, "offset") )
      __debugbreak();
    return (char *)&canonicalStringData->stringOffsets[28671] + v3 + 3;
  }
}

