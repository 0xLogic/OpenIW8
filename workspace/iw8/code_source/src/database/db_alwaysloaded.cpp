/*
==============
DB_AlwaysLoadedImages_ShouldWaitForLoading
==============
*/

bool __fastcall DB_AlwaysLoadedImages_ShouldWaitForLoading()
{
  return ?DB_AlwaysLoadedImages_ShouldWaitForLoading@@YA_NXZ();
}

/*
==============
DB_PushSkipAlwaysloadedImages
==============
*/

void DB_PushSkipAlwaysloadedImages(void)
{
  ?DB_PushSkipAlwaysloadedImages@@YAXXZ();
}

/*
==============
DB_GetAlwaysloadedFlagSetTypeForStreamingInfo
==============
*/

AlwaysloadedFlagType __fastcall DB_GetAlwaysloadedFlagSetTypeForStreamingInfo(const StreamingInfo *streamingInfo)
{
  return ?DB_GetAlwaysloadedFlagSetTypeForStreamingInfo@@YA?AW4AlwaysloadedFlagType@@AEBUStreamingInfo@@@Z(streamingInfo);
}

/*
==============
DB_GetAlwaysloadedFlagSetType
==============
*/

AlwaysloadedFlagType __fastcall DB_GetAlwaysloadedFlagSetType()
{
  return ?DB_GetAlwaysloadedFlagSetType@@YA?AW4AlwaysloadedFlagType@@XZ();
}

/*
==============
DB_PopSkipAlwaysloadedImages
==============
*/

void DB_PopSkipAlwaysloadedImages(void)
{
  ?DB_PopSkipAlwaysloadedImages@@YAXXZ();
}

/*
==============
DB_CheckSkipAlwaysLoadedImages
==============
*/

void DB_CheckSkipAlwaysLoadedImages(void)
{
  ?DB_CheckSkipAlwaysLoadedImages@@YAXXZ();
}

/*
==============
DB_AlwaysLoadedImages_ShouldWaitForLoading
==============
*/
bool DB_AlwaysLoadedImages_ShouldWaitForLoading()
{
  return s_skipReadAlwaysLoadedImages == 0;
}

/*
==============
DB_CheckSkipAlwaysLoadedImages
==============
*/
void DB_CheckSkipAlwaysLoadedImages(void)
{
  if ( s_skipReadAlwaysLoadedImages )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded.cpp", 159, ASSERT_TYPE_ASSERT, "(s_skipReadAlwaysLoadedImages == 0)", "%s\n\tUnexpected always loaded flag set", "s_skipReadAlwaysLoadedImages == 0") )
      __debugbreak();
  }
}

/*
==============
DB_GetAlwaysloadedFlagSetType
==============
*/
bool DB_GetAlwaysloadedFlagSetType()
{
  const dvar_t *v0; 

  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
    return 0;
  v0 = DVARBOOL_db_forceUHDImageFlags;
  if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return !v0->current.enabled;
}

/*
==============
DB_GetAlwaysloadedFlagSetTypeForStreamingInfo
==============
*/
__int64 DB_GetAlwaysloadedFlagSetTypeForStreamingInfo(const StreamingInfo *streamingInfo)
{
  bool v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  XB3ConsoleType XB3ConsoleType; 
  unsigned __int8 v5; 

  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    v1 = 0;
  }
  else
  {
    v2 = DVARBOOL_db_forceUHDImageFlags;
    if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    v1 = !v2->current.enabled;
  }
  if ( !CL_TransientsWorldMP_IsActive() )
    return v1;
  if ( !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging() )
  {
    v3 = DCONST_DVARBOOL_db_forceLowQualityFlags;
    if ( !DCONST_DVARBOOL_db_forceLowQualityFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceLowQualityFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
      return v1;
  }
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v5 = 2;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    return 0;
  return v5;
}

/*
==============
DB_PopSkipAlwaysloadedImages
==============
*/
void DB_PopSkipAlwaysloadedImages(void)
{
  if ( ((unsigned __int8)&s_skipReadAlwaysLoadedImages & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_skipReadAlwaysLoadedImages) )
    __debugbreak();
  if ( _InterlockedDecrement(&s_skipReadAlwaysLoadedImages) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded.cpp", 153, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &s_skipReadAlwaysLoadedImages ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_skipReadAlwaysLoadedImages ) >= 0") )
    __debugbreak();
}

/*
==============
DB_PushSkipAlwaysloadedImages
==============
*/
void DB_PushSkipAlwaysloadedImages(void)
{
  if ( ((unsigned __int8)&s_skipReadAlwaysLoadedImages & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_skipReadAlwaysLoadedImages) )
    __debugbreak();
  if ( _InterlockedIncrement(&s_skipReadAlwaysLoadedImages) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_alwaysloaded.cpp", 147, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &s_skipReadAlwaysLoadedImages ) <= 2)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_skipReadAlwaysLoadedImages ) <= 2") )
    __debugbreak();
}

