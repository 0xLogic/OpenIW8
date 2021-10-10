/*
==============
R_RT_FlipDisplayBufferGlobals
==============
*/

void R_RT_FlipDisplayBufferGlobals(void)
{
  ?R_RT_FlipDisplayBufferGlobals@@YAXXZ();
}

/*
==============
R_RT_GetGlobalColor
==============
*/

R_RT_ColorHandle *__fastcall R_RT_GetGlobalColor(R_RT_ColorHandle *result, GfxRenderTargetId rtId)
{
  return ?R_RT_GetGlobalColor@@YA?AVR_RT_ColorHandle@@W4GfxRenderTargetId@@@Z(result, rtId);
}

/*
==============
R_RT_HaveGlobal
==============
*/

bool __fastcall R_RT_HaveGlobal(GfxRenderTargetId rtId)
{
  return ?R_RT_HaveGlobal@@YA_NW4GfxRenderTargetId@@@Z(rtId);
}

/*
==============
R_RT_FlipGameDVRBufferGlobals
==============
*/

void R_RT_FlipGameDVRBufferGlobals(void)
{
  ?R_RT_FlipGameDVRBufferGlobals@@YAXXZ();
}

/*
==============
R_RT_SetGlobal
==============
*/

void __fastcall R_RT_SetGlobal(GfxRenderTargetId rtId, R_RT_Handle *rt)
{
  ?R_RT_SetGlobal@@YAXW4GfxRenderTargetId@@VR_RT_Handle@@@Z(rtId, rt);
}

/*
==============
R_RT_GetGlobal
==============
*/

R_RT_Handle *__fastcall R_RT_GetGlobal(R_RT_Handle *result, GfxRenderTargetId rtId)
{
  return ?R_RT_GetGlobal@@YA?AVR_RT_Handle@@W4GfxRenderTargetId@@@Z(result, rtId);
}

/*
==============
R_RT_GetGlobalColor
==============
*/
R_RT_ColorHandle *R_RT_GetGlobalColor(R_RT_ColorHandle *result, GfxRenderTargetId rtId)
{
  __int64 v4; 
  unsigned __int16 m_surfaceID; 
  R_RT_Handle *v6; 
  const char *LastKnownName; 
  __int64 v9; 
  R_RT_Handle v10; 

  if ( (unsigned __int8)rtId >= R_RENDERTARGET_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 72, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( rtId ) ) < (unsigned)( ( sizeof( *array_counter( g_R_RT_globals ) ) + 0 ) )", "static_cast<uint>( rtId ) doesn't index ARRAY_COUNT( g_R_RT_globals )\n\t%i not in [0, %i)", (unsigned __int8)rtId, 10) )
    __debugbreak();
  v4 = (unsigned __int8)rtId;
  m_surfaceID = g_R_RT_globals[v4].m_surfaceID;
  v6 = &g_R_RT_globals[v4];
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v4]);
  }
  else if ( v6->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID )
  {
    LastKnownName = R_RT_Handle::DebugGetLastKnownName(v6);
    LODWORD(v9) = (unsigned __int8)rtId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 73, ASSERT_TYPE_ASSERT, "(g_R_RT_globals[rtId].IsValid())", "%s\n\trtId=%u(%s), last-known name=%s", "g_R_RT_globals[rtId].IsValid()", v9, g_R_RT_globalSlotNames[(unsigned __int8)rtId], LastKnownName) )
      __debugbreak();
  }
  v10 = *v6;
  R_RT_ColorHandle::Cast(result, &v10);
  return result;
}

/*
==============
R_RT_GetGlobal
==============
*/
R_RT_Handle *R_RT_GetGlobal(R_RT_Handle *result, GfxRenderTargetId rtId)
{
  __int64 v4; 
  unsigned __int16 m_surfaceID; 
  R_RT_Handle *v6; 
  const char *LastKnownName; 
  R_RT_Handle *v8; 
  __int64 v9; 

  if ( (unsigned __int8)rtId >= R_RENDERTARGET_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 72, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( rtId ) ) < (unsigned)( ( sizeof( *array_counter( g_R_RT_globals ) ) + 0 ) )", "static_cast<uint>( rtId ) doesn't index ARRAY_COUNT( g_R_RT_globals )\n\t%i not in [0, %i)", (unsigned __int8)rtId, 10) )
    __debugbreak();
  v4 = (unsigned __int8)rtId;
  m_surfaceID = g_R_RT_globals[v4].m_surfaceID;
  v6 = &g_R_RT_globals[v4];
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v4]);
  }
  else if ( v6->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID )
  {
    LastKnownName = R_RT_Handle::DebugGetLastKnownName(v6);
    LODWORD(v9) = (unsigned __int8)rtId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 73, ASSERT_TYPE_ASSERT, "(g_R_RT_globals[rtId].IsValid())", "%s\n\trtId=%u(%s), last-known name=%s", "g_R_RT_globals[rtId].IsValid()", v9, g_R_RT_globalSlotNames[(unsigned __int8)rtId], LastKnownName) )
      __debugbreak();
  }
  v8 = result;
  *result = *v6;
  return v8;
}

/*
==============
R_RT_HaveGlobal
==============
*/
bool R_RT_HaveGlobal(GfxRenderTargetId rtId)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)rtId >= R_RENDERTARGET_COUNT )
  {
    v4 = 10;
    v3 = (unsigned __int8)rtId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( rtId ) ) < (unsigned)( ( sizeof( *array_counter( g_R_RT_globals ) ) + 0 ) )", "static_cast<uint>( rtId ) doesn't index ARRAY_COUNT( g_R_RT_globals )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return R_RT_Handle::IsValid(&g_R_RT_globals[(unsigned __int8)rtId]);
}

/*
==============
R_RT_SetGlobal
==============
*/
void R_RT_SetGlobal(GfxRenderTargetId rtId, R_RT_Handle *rt)
{
  __int64 v2; 
  __m256i *v3; 
  unsigned __int16 m_surfaceID; 
  __int16 v6; 
  __int16 v7; 
  __m256i v8; 

  v2 = (unsigned __int8)rtId;
  v3 = (__m256i *)&g_R_RT_globals[v2];
  m_surfaceID = g_R_RT_globals[v2].m_surfaceID;
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v2]);
  }
  else if ( v3->m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 46, ASSERT_TYPE_ASSERT, "(!g_R_RT_globals[rtId].IsValid())", (const char *)&queryFormat, "!g_R_RT_globals[rtId].IsValid()") )
    __debugbreak();
  v6 = rt->m_surfaceID & 0x7FFF;
  if ( v6 )
    v7 = v6 | 0x8000;
  else
    v7 = 0;
  *(_OWORD *)&v8.m256i_u64[1] = *(_OWORD *)&rt->m_tracking.m_allocCounter;
  v8.m256i_i64[3] = (__int64)rt->m_tracking.m_location;
  v8.m256i_i16[0] = v7;
  *v3 = v8;
}

/*
==============
R_RT_FlipDisplayBufferGlobals
==============
*/

void __fastcall R_RT_FlipDisplayBufferGlobals(double _XMM0_8)
{
  R_RT_Handle v1; 
  bool v3; 
  unsigned __int16 m_surfaceID; 
  __int16 v5; 
  R_RT_Handle v6; 
  R_RT_Handle result; 
  R_RT_Handle v8; 

  v1 = *R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  v8 = v1;
  v6 = v1;
  if ( LOWORD(_XMM0_8) )
  {
    R_RT_Handle::GetSurface(&v6);
    if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v1 = v6;
      __debugbreak();
    }
    else
    {
      v1 = v6;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v1 = v8;
      if ( v3 )
        __debugbreak();
    }
  }
  v8 = v1;
  m_surfaceID = LOWORD(_XMM0_8);
  v6 = *R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  if ( LOWORD(_XMM0_8) )
  {
    R_RT_Handle::GetSurface(&v6);
    if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      m_surfaceID = v6.m_surfaceID;
      __debugbreak();
    }
    else
    {
      m_surfaceID = v6.m_surfaceID;
    }
  }
  else if ( v6.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  v5 = m_surfaceID & 0x7FFF;
  if ( v5 )
    result.m_surfaceID = v5 | 0x8000;
  else
    result.m_surfaceID = 0;
  result.m_tracking = v6.m_tracking;
  g_R_RT_globals[0] = result;
  if ( (v8.m_surfaceID & 0x7FFF) != 0 )
    result.m_surfaceID = v8.m_surfaceID & 0x7FFF | 0x8000;
  else
    result.m_surfaceID = 0;
  result.m_tracking = v8.m_tracking;
  g_R_RT_globals[1] = result;
}

/*
==============
R_RT_FlipGameDVRBufferGlobals
==============
*/

void __fastcall R_RT_FlipGameDVRBufferGlobals(double _XMM0_8)
{
  R_RT_Handle v1; 
  bool v3; 
  unsigned __int16 m_surfaceID; 
  __int16 v5; 
  R_RT_Handle v6; 
  R_RT_Handle result; 
  R_RT_Handle v8; 

  if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    v1 = *R_RT_GetGlobal(&result, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    v8 = v1;
    v6 = v1;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v6);
      if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v1 = v6;
        __debugbreak();
      }
      else
      {
        v1 = v6;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v1 = v8;
        if ( v3 )
          __debugbreak();
      }
    }
    v8 = v1;
    m_surfaceID = LOWORD(_XMM0_8);
    v6 = *R_RT_GetGlobal(&result, R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v6);
      if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        m_surfaceID = v6.m_surfaceID;
        __debugbreak();
      }
      else
      {
        m_surfaceID = v6.m_surfaceID;
      }
    }
    else if ( v6.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    v5 = m_surfaceID & 0x7FFF;
    if ( v5 )
      result.m_surfaceID = v5 | 0x8000;
    else
      result.m_surfaceID = 0;
    result.m_tracking = v6.m_tracking;
    g_R_RT_globals[2] = result;
    if ( (v8.m_surfaceID & 0x7FFF) != 0 )
      result.m_surfaceID = v8.m_surfaceID & 0x7FFF | 0x8000;
    else
      result.m_surfaceID = 0;
    result.m_tracking = v8.m_tracking;
    g_R_RT_globals[3] = result;
  }
}

