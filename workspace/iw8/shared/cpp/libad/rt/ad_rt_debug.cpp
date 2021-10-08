/*
==============
AD_DebugInit
==============
*/

void __fastcall AD_DebugInit(const AD_RT_Options *options)
{
  ?AD_DebugInit@@YAXPEBUAD_RT_Options@@@Z(options);
}

/*
==============
AD_GetLogBreakLevel
==============
*/

AD_LogCategory __fastcall AD_GetLogBreakLevel()
{
  return ?AD_GetLogBreakLevel@@YA?AW4AD_LogCategory@@XZ();
}

/*
==============
AD_SetLogBreakLevel
==============
*/

void __fastcall AD_SetLogBreakLevel(AD_LogCategory minCategory)
{
  ?AD_SetLogBreakLevel@@YAXW4AD_LogCategory@@@Z(minCategory);
}

/*
==============
AD_DebugDestroy
==============
*/

void AD_DebugDestroy(void)
{
  ?AD_DebugDestroy@@YAXXZ();
}

/*
==============
AD_DebugDestroy
==============
*/
void AD_DebugDestroy(void)
{
  ;
}

/*
==============
AD_DebugInit
==============
*/
void AD_DebugInit(const AD_RT_Options *options)
{
  ;
}

/*
==============
AD_GetLogBreakLevel
==============
*/
__int64 AD_GetLogBreakLevel()
{
  return (unsigned int)s_breakLevel;
}

/*
==============
AD_SetLogBreakLevel
==============
*/
void AD_SetLogBreakLevel(AD_LogCategory minCategory)
{
  if ( (unsigned int)minCategory >= (Error|0x4) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_debug.cpp", 26, ASSERT_TYPE_ASSERT, "minCategory < AD_LogCategory::Max", "minCategory < AD_LogCategory::Max") )
    __debugbreak();
  s_breakLevel = minCategory;
}

