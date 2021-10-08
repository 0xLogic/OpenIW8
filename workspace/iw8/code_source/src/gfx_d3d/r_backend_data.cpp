/*
==============
R_GetBackEndDataIndex
==============
*/

unsigned int __fastcall R_GetBackEndDataIndex(const GfxBackEndData *data)
{
  return ?R_GetBackEndDataIndex@@YAIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_ResetBackendDataLightUpdateCount
==============
*/

void R_ResetBackendDataLightUpdateCount(void)
{
  ?R_ResetBackendDataLightUpdateCount@@YAXXZ();
}

/*
==============
R_InitBackEndData
==============
*/

void R_InitBackEndData(void)
{
  ?R_InitBackEndData@@YAXXZ();
}

/*
==============
R_GetBackEndData
==============
*/

GfxBackEndData *__fastcall R_GetBackEndData(unsigned int index)
{
  return ?R_GetBackEndData@@YAPEAUGfxBackEndData@@I@Z(index);
}

/*
==============
R_GetBackEndData
==============
*/
GfxBackEndData *R_GetBackEndData(unsigned int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( index >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  if ( !s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 50, ASSERT_TYPE_ASSERT, "(s_backendDataPMem)", (const char *)&queryFormat, "s_backendDataPMem") )
    __debugbreak();
  return &(*s_backendDataPMem)[v1];
}

/*
==============
R_GetBackEndDataIndex
==============
*/
__int64 R_GetBackEndDataIndex(const GfxBackEndData *data)
{
  GfxBackEndData (*v2)[2]; 
  unsigned __int64 v3; 
  __int64 v4; 

  if ( !s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 50, ASSERT_TYPE_ASSERT, "(s_backendDataPMem)", (const char *)&queryFormat, "s_backendDataPMem") )
    __debugbreak();
  v2 = s_backendDataPMem;
  if ( (data < (const GfxBackEndData *)s_backendDataPMem || data >= &(*s_backendDataPMem)[2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 61, ASSERT_TYPE_ASSERT, "(data >= baseData && data < baseData + 2)", (const char *)&queryFormat, "data >= baseData && data < baseData + BACKEND_DATA_COUNT") )
    __debugbreak();
  v3 = (__int64)((unsigned __int128)(((char *)data - (char *)v2) * (__int128)0x459E9FD29585BDA1i64) >> 64) >> 21;
  v4 = (v3 >> 63) + v3;
  if ( (v4 < 0 || (unsigned __int64)v4 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v4, "signed", v4) )
    __debugbreak();
  return (unsigned int)v4;
}

/*
==============
R_InitBackEndData
==============
*/
void R_InitBackEndData(void)
{
  unsigned int v0; 
  __int64 v1; 

  if ( s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 30, ASSERT_TYPE_ASSERT, "(!s_backendDataPMem)", (const char *)&queryFormat, "!s_backendDataPMem") )
    __debugbreak();
  s_backendDataPMem = (GfxBackEndData (*)[2])PMem_Alloc(0xEB5600ui64, 0x80ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "GfxBackEndData");
  if ( !s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 32, ASSERT_TYPE_ASSERT, "(s_backendDataPMem)", (const char *)&queryFormat, "s_backendDataPMem") )
    __debugbreak();
  memset_0(s_backendDataPMem, 0, sizeof(GfxBackEndData[2]));
  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( !s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 50, ASSERT_TYPE_ASSERT, "(s_backendDataPMem)", (const char *)&queryFormat, "s_backendDataPMem") )
      __debugbreak();
    ++v0;
    (*s_backendDataPMem)[v1++].reflectionProbeRelightingData.relightingIndexToCopy = -1;
  }
  while ( v0 < 2 );
}

/*
==============
R_ResetBackendDataLightUpdateCount
==============
*/
void R_ResetBackendDataLightUpdateCount(void)
{
  unsigned int v0; 
  __int64 v1; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( !s_backendDataPMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.cpp", 50, ASSERT_TYPE_ASSERT, "(s_backendDataPMem)", (const char *)&queryFormat, "s_backendDataPMem") )
      __debugbreak();
    ++v0;
    (*s_backendDataPMem)[v1++].packedSceneLightsUpdateCount = 0;
  }
  while ( v0 < 2 );
}

