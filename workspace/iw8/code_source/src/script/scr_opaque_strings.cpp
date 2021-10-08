/*
==============
Scr_OpaqueStrings_GetCompileString
==============
*/

const char *__fastcall Scr_OpaqueStrings_GetCompileString(const unsigned int stringIndex)
{
  return ?Scr_OpaqueStrings_GetCompileString@@YAPEBDI@Z(stringIndex);
}

/*
==============
Scr_OpaqueStrings_GetCompileString
==============
*/
const char *Scr_OpaqueStrings_GetCompileString(const unsigned int stringIndex)
{
  __int64 v1; 
  int v4; 

  v1 = stringIndex;
  if ( stringIndex >= 0x1194D )
  {
    v4 = 72013;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_opaque_strings.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( stringIndex ) < (unsigned)( ( sizeof( *array_counter( s_scrCompile_opaqueStringNames ) ) + 0 ) )", "stringIndex doesn't index ARRAY_COUNT( s_scrCompile_opaqueStringNames )\n\t%i not in [0, %i)", stringIndex, v4) )
      __debugbreak();
  }
  return s_scrCompile_opaqueStringNames[v1];
}

