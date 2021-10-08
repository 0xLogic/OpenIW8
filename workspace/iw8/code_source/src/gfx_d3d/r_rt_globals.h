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
  const char *LastKnownName; 
  __int64 v10; 
  R_RT_Handle v11; 

  if ( (unsigned __int8)rtId >= R_RENDERTARGET_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 72, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( rtId ) ) < (unsigned)( ( sizeof( *array_counter( g_R_RT_globals ) ) + 0 ) )", "static_cast<uint>( rtId ) doesn't index ARRAY_COUNT( g_R_RT_globals )\n\t%i not in [0, %i)", (unsigned __int8)rtId, 10) )
    __debugbreak();
  v4 = (unsigned __int8)rtId;
  m_surfaceID = g_R_RT_globals[v4].m_surfaceID;
  _RBX = &g_R_RT_globals[v4];
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v4]);
  }
  else if ( _RBX->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID )
  {
    LastKnownName = R_RT_Handle::DebugGetLastKnownName(_RBX);
    LODWORD(v10) = (unsigned __int8)rtId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 73, ASSERT_TYPE_ASSERT, "(g_R_RT_globals[rtId].IsValid())", "%s\n\trtId=%u(%s), last-known name=%s", "g_R_RT_globals[rtId].IsValid()", v10, g_R_RT_globalSlotNames[(unsigned __int8)rtId], LastKnownName) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+88h+var_38], ymm0
  }
  R_RT_ColorHandle::Cast(result, &v11);
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
  const char *LastKnownName; 
  R_RT_Handle *v9; 
  __int64 v10; 

  _RSI = result;
  if ( (unsigned __int8)rtId >= R_RENDERTARGET_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 72, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( rtId ) ) < (unsigned)( ( sizeof( *array_counter( g_R_RT_globals ) ) + 0 ) )", "static_cast<uint>( rtId ) doesn't index ARRAY_COUNT( g_R_RT_globals )\n\t%i not in [0, %i)", (unsigned __int8)rtId, 10) )
    __debugbreak();
  v4 = (unsigned __int8)rtId;
  m_surfaceID = g_R_RT_globals[v4].m_surfaceID;
  _RBX = &g_R_RT_globals[v4];
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v4]);
  }
  else if ( _RBX->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID )
  {
    LastKnownName = R_RT_Handle::DebugGetLastKnownName(_RBX);
    LODWORD(v10) = (unsigned __int8)rtId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 73, ASSERT_TYPE_ASSERT, "(g_R_RT_globals[rtId].IsValid())", "%s\n\trtId=%u(%s), last-known name=%s", "g_R_RT_globals[rtId].IsValid()", v10, g_R_RT_globalSlotNames[(unsigned __int8)rtId], LastKnownName) )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr [rbx] }
  v9 = _RSI;
  __asm { vmovups ymmword ptr [rsi], ymm0 }
  return v9;
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
  unsigned __int16 m_surfaceID; 
  __int16 v6; 
  __int16 v7; 
  __m256i v11; 

  v2 = (unsigned __int8)rtId;
  _RBX = &g_R_RT_globals[v2];
  _RDI = rt;
  m_surfaceID = g_R_RT_globals[v2].m_surfaceID;
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&g_R_RT_globals[v2]);
  }
  else if ( _RBX->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_globals.h", 46, ASSERT_TYPE_ASSERT, "(!g_R_RT_globals[rtId].IsValid())", (const char *)&queryFormat, "!g_R_RT_globals[rtId].IsValid()") )
    __debugbreak();
  v6 = _RDI->m_surfaceID & 0x7FFF;
  if ( v6 )
    v7 = v6 | 0x8000;
  else
    v7 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+8]
    vmovsd  xmm1, qword ptr [rdi+18h]
    vmovups xmmword ptr [rsp+58h+var_28+8], xmm0
    vmovsd  qword ptr [rsp+58h+var_28+18h], xmm1
  }
  v11.m256i_i16[0] = v7;
  __asm
  {
    vmovups ymm0, [rsp+58h+var_28]
    vmovups ymmword ptr [rbx], ymm0
  }
}

/*
==============
R_RT_FlipDisplayBufferGlobals
==============
*/

void __fastcall R_RT_FlipDisplayBufferGlobals(double _XMM0_8)
{
  bool v4; 
  __int16 v8; 
  R_RT_Handle v15; 
  R_RT_Handle result; 
  __m256i v17; 

  _RAX = R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+57h+var_20], ymm0
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+57h+var_20] }
      if ( v4 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+57h+var_20], ymm0 }
  _RAX = R_RT_GetGlobal(&result, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LOWORD(_EBX) = v15.m_surfaceID;
      __debugbreak();
    }
    else
    {
      LOWORD(_EBX) = v15.m_surfaceID;
    }
  }
  else if ( v15.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  v8 = _EBX & 0x7FFF;
  if ( v8 )
    result.m_surfaceID = v8 | 0x8000;
  else
    result.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+57h+var_60.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+57h+var_60.m_tracking.m_location]
    vmovups xmmword ptr [rbp+57h+result.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+57h+result.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+57h+result.m_surfaceID]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID, ymm0; R_RT_Handle near * g_R_RT_globals
  }
  if ( (v17.m256i_i16[0] & 0x7FFF) != 0 )
    result.m_surfaceID = v17.m256i_i16[0] & 0x7FFF | 0x8000;
  else
    result.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+57h+var_20+8]
    vmovsd  xmm1, qword ptr [rbp+57h+var_20+18h]
    vmovups xmmword ptr [rbp+57h+result.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+57h+result.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+57h+result.m_surfaceID]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+20h, ymm0; R_RT_Handle near * g_R_RT_globals
  }
}

/*
==============
R_RT_FlipGameDVRBufferGlobals
==============
*/

void __fastcall R_RT_FlipGameDVRBufferGlobals(double _XMM0_8)
{
  bool v4; 
  __int16 v8; 
  R_RT_Handle v15; 
  R_RT_Handle result; 
  __m256i v17; 

  if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    _RAX = R_RT_GetGlobal(&result, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+57h+var_20], ymm0
      vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v15);
      if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+57h+var_20] }
        if ( v4 )
          __debugbreak();
      }
    }
    __asm { vmovups [rbp+57h+var_20], ymm0 }
    _RAX = R_RT_GetGlobal(&result, R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   ebx, xmm0
      vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
    }
    if ( (_WORD)_EBX )
    {
      R_RT_Handle::GetSurface(&v15);
      if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        LOWORD(_EBX) = v15.m_surfaceID;
        __debugbreak();
      }
      else
      {
        LOWORD(_EBX) = v15.m_surfaceID;
      }
    }
    else if ( v15.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    v8 = _EBX & 0x7FFF;
    if ( v8 )
      result.m_surfaceID = v8 | 0x8000;
    else
      result.m_surfaceID = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+57h+var_60.m_tracking.m_allocCounter]
      vmovsd  xmm1, [rbp+57h+var_60.m_tracking.m_location]
      vmovups xmmword ptr [rbp+57h+result.m_tracking.m_allocCounter], xmm0
      vmovsd  [rbp+57h+result.m_tracking.m_location], xmm1
      vmovups ymm0, ymmword ptr [rbp+57h+result.m_surfaceID]
      vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+40h, ymm0; R_RT_Handle near * g_R_RT_globals
    }
    if ( (v17.m256i_i16[0] & 0x7FFF) != 0 )
      result.m_surfaceID = v17.m256i_i16[0] & 0x7FFF | 0x8000;
    else
      result.m_surfaceID = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+57h+var_20+8]
      vmovsd  xmm1, qword ptr [rbp+57h+var_20+18h]
      vmovups xmmword ptr [rbp+57h+result.m_tracking.m_allocCounter], xmm0
      vmovsd  [rbp+57h+result.m_tracking.m_location], xmm1
      vmovups ymm0, ymmword ptr [rbp+57h+result.m_surfaceID]
      vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+60h, ymm0; R_RT_Handle near * g_R_RT_globals
    }
  }
}

