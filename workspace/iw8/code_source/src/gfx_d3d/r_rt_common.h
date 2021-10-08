/*
==============
R_RT_SurfaceIndexToID
==============
*/

unsigned __int16 __fastcall R_RT_SurfaceIndexToID(unsigned __int64 surfaceIndex, unsigned __int16 readOnlyFlag)
{
  return ?R_RT_SurfaceIndexToID@@YAG_KG@Z(surfaceIndex, readOnlyFlag);
}

/*
==============
R_RT_MatchPasses
==============
*/

bool __fastcall R_RT_MatchPasses(unsigned __int16 pass0, unsigned __int16 pass1)
{
  return ?R_RT_MatchPasses@@YA_NGG@Z(pass0, pass1);
}

/*
==============
R_RT_WritableSurfaceIDToIndex
==============
*/

unsigned __int16 __fastcall R_RT_WritableSurfaceIDToIndex(unsigned __int16 surfaceID)
{
  return ?R_RT_WritableSurfaceIDToIndex@@YAGG@Z(surfaceID);
}

/*
==============
R_RT_SurfaceIDToIndex
==============
*/

unsigned __int16 __fastcall R_RT_SurfaceIDToIndex(unsigned __int16 surfaceID)
{
  return ?R_RT_SurfaceIDToIndex@@YAGG@Z(surfaceID);
}

/*
==============
R_RT_MatchPasses
==============
*/
bool R_RT_MatchPasses(unsigned __int16 pass0, unsigned __int16 pass1)
{
  __int16 v3; 

  if ( (pass0 & 0xFFF) == 4095 || (v3 = -1, (pass1 & 0xFFF) == 4095) )
    v3 = -4096;
  return (unsigned __int16)(v3 & pass0) == (unsigned __int16)(v3 & pass1);
}

/*
==============
R_RT_SurfaceIDToIndex
==============
*/
unsigned __int16 R_RT_SurfaceIDToIndex(unsigned __int16 surfaceID)
{
  if ( !surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  return (surfaceID & 0x7FFF) - 1;
}

/*
==============
R_RT_SurfaceIndexToID
==============
*/
unsigned __int16 R_RT_SurfaceIndexToID(unsigned __int64 surfaceIndex, unsigned __int16 readOnlyFlag)
{
  __int16 v3; 

  v3 = surfaceIndex;
  if ( surfaceIndex >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 161, ASSERT_TYPE_ASSERT, "(surfaceIndex < g_R_RT_surfaceMax)", (const char *)&queryFormat, "surfaceIndex < g_R_RT_surfaceMax") )
    __debugbreak();
  if ( (readOnlyFlag & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 162, ASSERT_TYPE_ASSERT, "(readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag)", (const char *)&queryFormat, "readOnlyFlag == 0 || readOnlyFlag == g_R_RT_surfaceIDReadOnlyFlag") )
    __debugbreak();
  return readOnlyFlag | (v3 + 1);
}

/*
==============
R_RT_WritableSurfaceIDToIndex
==============
*/
unsigned __int16 R_RT_WritableSurfaceIDToIndex(unsigned __int16 surfaceID)
{
  if ( (surfaceID & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 156, ASSERT_TYPE_ASSERT, "(!R_RT_IsReadOnlySurfaceID( surfaceID ))", (const char *)&queryFormat, "!R_RT_IsReadOnlySurfaceID( surfaceID )") )
    __debugbreak();
  if ( !surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common.h", 151, ASSERT_TYPE_ASSERT, "(surfaceID)", (const char *)&queryFormat, "surfaceID") )
    __debugbreak();
  return (surfaceID & 0x7FFF) - 1;
}

