/*
==============
R_RTT_UseDirtyCheck
==============
*/

bool __fastcall R_RTT_UseDirtyCheck(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  return ?R_RTT_UseDirtyCheck@@YA_NW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
R_RTT_GetChecksum
==============
*/

void __fastcall R_RTT_GetChecksum(LocalClientNum_t clientIndex, unsigned int rttHandle, unsigned __int64 *drawListChecksum, unsigned int *drawListBufferSize)
{
  ?R_RTT_GetChecksum@@YAXW4LocalClientNum_t@@IPEA_KPEAI@Z(clientIndex, rttHandle, drawListChecksum, drawListBufferSize);
}

/*
==============
R_RTT_NotifyUpdated
==============
*/

void __fastcall R_RTT_NotifyUpdated(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  ?R_RTT_NotifyUpdated@@YAXW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
R_RTT_ActivateDirtyCheck
==============
*/

void __fastcall R_RTT_ActivateDirtyCheck(LocalClientNum_t clientIndex, unsigned int rttHandle, bool dirtyCheck)
{
  ?R_RTT_ActivateDirtyCheck@@YAXW4LocalClientNum_t@@I_N@Z(clientIndex, rttHandle, dirtyCheck);
}

/*
==============
RB_RTT_GetSurface
==============
*/

R_RT_ColorHandle *__fastcall RB_RTT_GetSurface(R_RT_ColorHandle *result, LocalClientNum_t clientIndex, const GfxRTTContext *context, unsigned int rttHandle)
{
  return ?RB_RTT_GetSurface@@YA?AVR_RT_ColorHandle@@W4LocalClientNum_t@@PEBUGfxRTTContext@@I@Z(result, clientIndex, context, rttHandle);
}

/*
==============
R_RTT_SetChecksum
==============
*/

void __fastcall R_RTT_SetChecksum(LocalClientNum_t clientIndex, unsigned int rttHandle, unsigned __int64 drawListChecksum, unsigned int drawListBufferSize)
{
  ?R_RTT_SetChecksum@@YAXW4LocalClientNum_t@@I_KI@Z(clientIndex, rttHandle, drawListChecksum, drawListBufferSize);
}

/*
==============
RB_RTT_NotifyUpdated
==============
*/

void __fastcall RB_RTT_NotifyUpdated(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  ?RB_RTT_NotifyUpdated@@YAXW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
R_RTT_Create
==============
*/

unsigned int __fastcall R_RTT_Create(LocalClientNum_t clientIndex, const char *name, int width, int height, int mipCount, vec4_t *clearColor)
{
  return ?R_RTT_Create@@YAIW4LocalClientNum_t@@PEBDHHHTvec4_t@@@Z(clientIndex, name, width, height, mipCount, clearColor);
}

/*
==============
R_RTT_Delete
==============
*/

void __fastcall R_RTT_Delete(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  ?R_RTT_Delete@@YAXW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
R_RTT_GetSize
==============
*/

void __fastcall R_RTT_GetSize(LocalClientNum_t clientIndex, unsigned int rttHandle, int *widthOut, int *heightOut)
{
  ?R_RTT_GetSize@@YAXW4LocalClientNum_t@@IPEAH1@Z(clientIndex, rttHandle, widthOut, heightOut);
}

/*
==============
R_RTT_CopyContext
==============
*/

void __fastcall R_RTT_CopyContext(LocalClientNum_t clientIndex, GfxRTTContext *contextOut)
{
  ?R_RTT_CopyContext@@YAXW4LocalClientNum_t@@PEAUGfxRTTContext@@@Z(clientIndex, contextOut);
}

/*
==============
RB_RTT_GetUpdateCount
==============
*/

unsigned int __fastcall RB_RTT_GetUpdateCount(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  return ?RB_RTT_GetUpdateCount@@YAIW4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
RB_RTT_UpdateInputCodeImages
==============
*/

void __fastcall RB_RTT_UpdateInputCodeImages(LocalClientNum_t clientIndex, GfxCmdBufSourceState *source)
{
  ?RB_RTT_UpdateInputCodeImages@@YAXW4LocalClientNum_t@@PEAUGfxCmdBufSourceState@@@Z(clientIndex, source);
}

/*
==============
R_RTT_GetName
==============
*/

const char *__fastcall R_RTT_GetName(unsigned int rttHandle)
{
  return ?R_RTT_GetName@@YAPEBDI@Z(rttHandle);
}

/*
==============
RB_RTT_DeleteSlots
==============
*/

void __fastcall RB_RTT_DeleteSlots(LocalClientNum_t clientIndex, const GfxRTTContext *context)
{
  ?RB_RTT_DeleteSlots@@YAXW4LocalClientNum_t@@PEBUGfxRTTContext@@@Z(clientIndex, context);
}

/*
==============
R_RTT_DeleteAllSlots
==============
*/

void __fastcall R_RTT_DeleteAllSlots(LocalClientNum_t clientIndex)
{
  ?R_RTT_DeleteAllSlots@@YAXW4LocalClientNum_t@@@Z(clientIndex);
}

/*
==============
RB_RTT_GetImage
==============
*/

const GfxImage *__fastcall RB_RTT_GetImage(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  return ?RB_RTT_GetImage@@YAPEBUGfxImage@@W4LocalClientNum_t@@I@Z(clientIndex, rttHandle);
}

/*
==============
RB_RTT_CreateRt
==============
*/
R_RT_ColorHandle *RB_RTT_CreateRt(R_RT_ColorHandle *result, LocalClientNum_t clientIndex, const GfxRTTContext *context, const unsigned int rttHandle)
{
  __int64 v5; 
  unsigned __int64 v9; 
  bool v10; 
  const char **v11; 
  GfxRTTSlotBackend *Slot; 
  R_RT_Handle v13; 
  unsigned __int16 m_surfaceID; 
  const R_RT_Surface *Surface; 
  char *fmt; 
  __int64 depth; 
  __int64 arraySliceCount; 
  R_RT_Handle v22; 
  __m256i v23; 
  R_RT_Handle resulta; 

  v5 = clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 299, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v9 = (unsigned __int64)(rttHandle - 1) << 6;
  v10 = *(GfxRTTStatus *)((char *)&context->slots[0].status + v9) == RTT_UNUSED;
  v11 = (const char **)((char *)&context->slots[0].name + v9);
  if ( v10 )
  {
    result->m_surfaceID = 0;
    result->m_tracking.m_allocCounter = 0;
    result->m_tracking.m_name = NULL;
    result->m_tracking.m_location = NULL;
  }
  else
  {
    if ( (!*((_DWORD *)v11 + 2) || !*((_DWORD *)v11 + 3) || !*v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 320, ASSERT_TYPE_ASSERT, "(rtt && rtt->width && rtt->height && rtt->name)", (const char *)&queryFormat, "rtt && rtt->width && rtt->height && rtt->name") )
      __debugbreak();
    if ( *((int *)v11 + 14) < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 321, ASSERT_TYPE_ASSERT, "(rtt->status >= RTT_ALLOCATED)", (const char *)&queryFormat, "rtt->status >= RTT_ALLOCATED") )
      __debugbreak();
    Slot = RB_RTT_GetSlot(&s_rttContextBackend[v5], rttHandle);
    v13 = *R_RT_CreateInternal(&resulta, *((_DWORD *)v11 + 2), *((_DWORD *)v11 + 3), *((_DWORD *)v11 + 2), *((_DWORD *)v11 + 3), 1u, 1u, *((_DWORD *)v11 + 4), g_R_RT_renderTargetFmts[43], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, (const vec4_t *)((char *)v11 + 20), D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v11, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp(331)");
    m_surfaceID = _XMM0;
    v23 = (__m256i)v13;
    v22 = v13;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v22);
      if ( (R_RT_Handle::GetSurface(&v22)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v13 = v22;
        m_surfaceID = v22.m_surfaceID;
        v23 = (__m256i)v22;
        __debugbreak();
      }
      else
      {
        v13 = v22;
        m_surfaceID = v22.m_surfaceID;
        v23 = (__m256i)v22;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v13 = (R_RT_Handle)v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    v22 = v13;
    if ( (m_surfaceID & 0x7FFF) != 0 )
    {
      LODWORD(arraySliceCount) = *((_DWORD *)v11 + 4);
      LODWORD(depth) = *((_DWORD *)v11 + 3);
      LODWORD(fmt) = *((_DWORD *)v11 + 2);
      Com_Printf(13, "UI RTT(%d): RB_RTT_CreateRt allocate RTT surface %s %dx%d mipCount %d\n", (unsigned int)v5, *v11, fmt, depth, arraySliceCount);
      Slot->colorRt = (R_RT_ColorHandle)v23;
      Surface = R_RT_Handle::GetSurface(&v22);
      *(_QWORD *)&Slot->status = 1i64;
      Slot->image = &Surface->m_image.m_base;
    }
    else
    {
      Slot->image = NULL;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v23.m256i_u64[2] = _XMM0;
      v23.m256i_i16[0] = 0;
      v23.m256i_i32[2] = 0;
      Slot->colorRt = (R_RT_ColorHandle)v23;
      LODWORD(arraySliceCount) = *((_DWORD *)v11 + 4);
      LODWORD(depth) = *((_DWORD *)v11 + 3);
      LODWORD(fmt) = *((_DWORD *)v11 + 2);
      Com_Printf(13, "UI RTT(%d): RB_RTT_CreateRt failed to allocate RTT surface %s %dx%d mipCount %d\n", (unsigned int)v5, *v11, fmt, depth, arraySliceCount);
    }
    *result = Slot->colorRt;
  }
  return result;
}

/*
==============
RB_RTT_DeleteRt
==============
*/
void RB_RTT_DeleteRt(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  __int64 v3; 
  GfxRTTSlotBackend *Slot; 
  const char *Name; 
  R_RT_Handle colorRt; 

  v3 = clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 370, ASSERT_TYPE_ASSERT, "(rttHandle > 0 && rttHandle <= 8)", (const char *)&queryFormat, "rttHandle > 0 && rttHandle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  Slot = RB_RTT_GetSlot(&s_rttContextBackend[v3], rttHandle);
  if ( Slot->status <= RTT_UNUSED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 372, ASSERT_TYPE_ASSERT, "(rttBackend->status > RTT_UNUSED)", (const char *)&queryFormat, "rttBackend->status > RTT_UNUSED") )
    __debugbreak();
  Name = R_RTT_GetName(rttHandle);
  Com_Printf(13, "UI RTT(%d): RB_RTT_DeleteRt RTT %s\n", (unsigned int)v3, Name);
  colorRt = (R_RT_Handle)Slot->colorRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&colorRt);
    if ( (R_RT_Handle::GetSurface(&colorRt)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame", *(_QWORD *)&colorRt.m_surfaceID) )
      __debugbreak();
    R_RT_DestroyInternal(&colorRt);
  }
  else if ( colorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&colorRt.m_surfaceID) )
  {
    __debugbreak();
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  colorRt.m_surfaceID = 0;
  colorRt.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&colorRt.m_tracking.m_name = _XMM0;
  Slot->colorRt = (R_RT_ColorHandle)colorRt;
  *(_QWORD *)&Slot->status = 0i64;
  Slot->image = NULL;
}

/*
==============
RB_RTT_DeleteSlots
==============
*/
void RB_RTT_DeleteSlots(LocalClientNum_t clientIndex, const GfxRTTContext *context)
{
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  GfxRTTStatus *p_status; 
  R_RT_ColorHandle *p_colorRt; 

  v2 = clientIndex;
  v3 = 1;
  v4 = 8i64;
  if ( context )
  {
    v5 = 0i64;
    p_status = &context->slots[0].status;
    do
    {
      if ( v3 - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 299, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
        __debugbreak();
      if ( v3 - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 307, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
        __debugbreak();
      if ( *p_status == RTT_UNUSED && (*(_DWORD *)&s_rttContextBackend[v2].slots[v5].colorRt.m_surfaceID & 0x7FFF) != 0 )
        RB_RTT_DeleteRt((LocalClientNum_t)v2, v3);
      ++v3;
      ++v5;
      p_status += 16;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    p_colorRt = &s_rttContextBackend[clientIndex].slots[0].colorRt;
    do
    {
      if ( v3 - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 307, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
        __debugbreak();
      if ( (*(_DWORD *)&p_colorRt->m_surfaceID & 0x7FFF) != 0 )
        RB_RTT_DeleteRt((LocalClientNum_t)v2, v3);
      ++v3;
      p_colorRt = (R_RT_ColorHandle *)((char *)p_colorRt + 48);
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
RB_RTT_GetImage
==============
*/
const GfxImage *RB_RTT_GetImage(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  GfxRTTSlotBackend *Slot; 

  Slot = RB_RTT_GetSlot(&s_rttContextBackend[clientIndex], rttHandle);
  if ( !Slot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 462, ASSERT_TYPE_ASSERT, "(rttBackend)", (const char *)&queryFormat, "rttBackend") )
    __debugbreak();
  if ( Slot->status == RTT_UPDATED )
    return Slot->image;
  else
    return 0i64;
}

/*
==============
RB_RTT_GetSlot
==============
*/
GfxRTTSlotBackend *RB_RTT_GetSlot(GfxRTTConextBackend *context, unsigned int handle)
{
  if ( handle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 307, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  return (GfxRTTSlotBackend *)((char *)context + 48 * handle - 48);
}

/*
==============
RB_RTT_GetSurface
==============
*/
R_RT_ColorHandle *RB_RTT_GetSurface(R_RT_ColorHandle *result, LocalClientNum_t clientIndex, const GfxRTTContext *context, unsigned int rttHandle)
{
  int *Slot; 
  const GfxRTTSlot *Only; 
  int v10; 
  R_RT_ColorHandle *v11; 

  Slot = (int *)RB_RTT_GetSlot(&s_rttContextBackend[clientIndex], rttHandle);
  if ( *Slot < 1 )
    goto LABEL_13;
  Only = R_RTT_GetSlotReadOnly(context, rttHandle);
  if ( !Only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 396, ASSERT_TYPE_ASSERT, "(rtt)", (const char *)&queryFormat, "rtt") )
    __debugbreak();
  v10 = Slot[2];
  v11 = (R_RT_ColorHandle *)(Slot + 2);
  if ( (v10 & 0x7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 397, ASSERT_TYPE_ASSERT, "(rttBackend->colorRt != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "rttBackend->colorRt != R_RT_ColorHandle::Null()") )
    __debugbreak();
  if ( R_RT_Handle::GetSurface(v11)->m_image.m_base.width != Only->width || R_RT_Handle::GetSurface(v11)->m_image.m_base.height != Only->height || R_RT_Handle::GetSurface(v11)->m_image.m_base.levelCount != Only->mipCount )
  {
    RB_RTT_DeleteRt(clientIndex, rttHandle);
LABEL_13:
    RB_RTT_CreateRt(result, clientIndex, context, rttHandle);
    return result;
  }
  *result = *v11;
  return result;
}

/*
==============
RB_RTT_GetUpdateCount
==============
*/
__int64 RB_RTT_GetUpdateCount(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  GfxRTTSlotBackend *Slot; 

  Slot = RB_RTT_GetSlot(&s_rttContextBackend[clientIndex], rttHandle);
  if ( Slot )
    return Slot->updateCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 479, ASSERT_TYPE_ASSERT, "(rttBackend)", (const char *)&queryFormat, "rttBackend") )
    __debugbreak();
  return MEMORY[4];
}

/*
==============
RB_RTT_NotifyUpdated
==============
*/
void RB_RTT_NotifyUpdated(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  __int64 v2; 
  int *Slot; 
  int *v5; 

  v2 = clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 417, ASSERT_TYPE_ASSERT, "(rttHandle > 0 && rttHandle <= 8)", (const char *)&queryFormat, "rttHandle > 0 && rttHandle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  Slot = (int *)RB_RTT_GetSlot(&s_rttContextBackend[v2], rttHandle);
  v5 = Slot;
  if ( (!Slot || *Slot <= 0 || (Slot[2] & 0x7FFF) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 419, ASSERT_TYPE_ASSERT, "(rttBackend && rttBackend->status > RTT_UNUSED && rttBackend->colorRt != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "rttBackend && rttBackend->status > RTT_UNUSED && rttBackend->colorRt != R_RT_ColorHandle::Null()") )
    __debugbreak();
  ++v5[1];
  *v5 = 2;
}

/*
==============
RB_RTT_UpdateInputCodeImages
==============
*/
void RB_RTT_UpdateInputCodeImages(LocalClientNum_t clientIndex, GfxCmdBufSourceState *source)
{
  GfxCmdBufInput *p_input; 
  unsigned int v3; 
  __int64 v5; 
  GfxRTTConextBackend *v6; 
  __int64 v7; 
  GfxImage *image; 
  GfxImage *blackImage; 
  __int64 v10; 
  __int64 v11; 

  p_input = &source->input;
  v3 = 59;
  v5 = 1654i64;
  v6 = &s_rttContextBackend[clientIndex];
  v7 = 8i64;
  do
  {
    if ( v3 - 59 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 307, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
      __debugbreak();
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 462, ASSERT_TYPE_ASSERT, "(rttBackend)", (const char *)&queryFormat, "rttBackend") )
      __debugbreak();
    if ( v6->slots[0].status == RTT_UPDATED )
      image = (GfxImage *)v6->slots[0].image;
    else
      image = NULL;
    blackImage = rgp.blackImage;
    if ( image )
      blackImage = image;
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    if ( v3 >= 0x56 )
    {
      LODWORD(v11) = 86;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( codeTexture ) < (unsigned)( TEXTURE_SRC_CODE_COUNT )", "codeTexture doesn't index TEXTURE_SRC_CODE_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    *(_QWORD *)&p_input->consts[0].v[v5] = blackImage;
    v5 += 2i64;
    ++v3;
    v6 = (GfxRTTConextBackend *)((char *)v6 + 48);
    --v7;
  }
  while ( v7 );
}

/*
==============
R_RTT_ActivateDirtyCheck
==============
*/
void R_RTT_ActivateDirtyCheck(LocalClientNum_t clientIndex, unsigned int rttHandle, bool dirtyCheck)
{
  __int64 v4; 

  v4 = 520i64 * (int)clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  *(&s_rttContext[0].slots[(unsigned __int64)(rttHandle - 1)].useDirtyCheck + v4) = dirtyCheck;
}

/*
==============
R_RTT_CopyContext
==============
*/
void R_RTT_CopyContext(LocalClientNum_t clientIndex, GfxRTTContext *contextOut)
{
  GfxRTTContext *v2; 
  __int64 v3; 
  __int128 v4; 

  v2 = &s_rttContext[clientIndex];
  v3 = 4i64;
  do
  {
    contextOut = (GfxRTTContext *)((char *)contextOut + 128);
    v4 = *(_OWORD *)&v2->allocSlotCount;
    v2 = (GfxRTTContext *)((char *)v2 + 128);
    *(_OWORD *)&contextOut[-1].slots[6].name = v4;
    *(_OWORD *)&contextOut[-1].slots[6].mipCount = *(_OWORD *)&v2[-1].slots[6].mipCount;
    *(vec4_t *)((char *)&contextOut[-1].slots[6].clearColor + 12) = *(vec4_t *)((char *)&v2[-1].slots[6].clearColor + 12);
    *(_OWORD *)&contextOut[-1].slots[6].drawListChecksum = *(_OWORD *)&v2[-1].slots[6].drawListChecksum;
    contextOut[-1].slots[7] = v2[-1].slots[7];
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&contextOut->allocSlotCount = *(_QWORD *)&v2->allocSlotCount;
}

/*
==============
R_RTT_Create
==============
*/
__int64 R_RTT_Create(LocalClientNum_t clientIndex, const char *name, int width, int height, int mipCount, vec4_t *clearColor)
{
  GfxRTTContext *v9; 
  __int64 result; 
  GfxRTTSlot *Slot; 
  const char *v13; 
  unsigned int v14; 
  vec4_t v15; 
  char *fmt; 
  __int64 v17; 
  unsigned int Handle; 

  v9 = &s_rttContext[clientIndex];
  Handle = R_RTT_FindHandle(v9, name);
  if ( Handle )
  {
    Slot = R_RTT_GetSlot(v9, Handle);
    if ( !Slot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 118, ASSERT_TYPE_ASSERT, "(rtt)", (const char *)&queryFormat, "rtt") )
      __debugbreak();
    if ( Slot->status < RTT_ALLOCATED )
    {
      v14 = v9->allocPixelCount + height * width;
      LODWORD(v17) = height;
      LODWORD(fmt) = width;
      if ( v14 <= 0x200000 )
      {
        Com_Printf(13, "UI RTT(%d): R_RTT_Create RTT %s %dx%d mipCount %d.\n", (unsigned int)clientIndex, name, fmt, v17, mipCount);
        Slot->name = R_RTT_GetRTTAlias(Handle - 1);
        Slot->width = width;
        Slot->height = height;
        Slot->mipCount = mipCount;
        v15 = *clearColor;
        Slot->status = RTT_ALLOCATED;
        Slot->drawListChecksum = 0i64;
        Slot->drawListBufferSize = 0;
        result = Handle;
        Slot->clearColor = v15;
        ++v9->allocSlotCount;
        v9->allocPixelCount = v14;
      }
      else
      {
        Com_Printf(13, "UI RTT(%d): R_RTT_Create can't allocate RTT %s %dx%d. Out of RTT system budget.\n", (unsigned int)clientIndex, name, fmt, v17);
        return 0i64;
      }
    }
    else
    {
      if ( Slot->width != width || Slot->height != height || (v13 = "UI RTT(%d): RTT %s %dx%d mipCount %d is already created\n", Slot->mipCount != mipCount) )
        v13 = "UI RTT(%d): Warning - RTT %s is already created with different setting %dx%d mipCount %d\n";
      LODWORD(v17) = height;
      LODWORD(fmt) = width;
      Com_Printf(13, v13, (unsigned int)clientIndex, name, fmt, v17, mipCount);
      return Handle;
    }
  }
  else
  {
    Com_Printf(13, "UI RTT(%d): R_RTT_Create %s is not a valid RTT resource\n", (unsigned int)clientIndex, name);
    return 0i64;
  }
  return result;
}

/*
==============
R_RTT_Delete
==============
*/
void R_RTT_Delete(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  __int64 v2; 
  GfxRTTContext *v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  int v7; 
  const char *Name; 

  v2 = clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 162, ASSERT_TYPE_ASSERT, "(rttHandle > 0 && rttHandle <= 8)", (const char *)&queryFormat, "rttHandle > 0 && rttHandle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v4 = &s_rttContext[v2];
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v5 = (unsigned __int64)(rttHandle - 1) << 6;
  v6 = (__int64)v4->slots + v5;
  if ( (GfxRTTContext *)((char *)v4 + v5) == (GfxRTTContext *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 165, ASSERT_TYPE_ASSERT, "(rtt)", (const char *)&queryFormat, "rtt") )
    __debugbreak();
  if ( *(int *)(v6 + 56) <= 0 )
  {
    if ( (*(_DWORD *)(v6 + 8) || *(_DWORD *)(v6 + 12)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 189, ASSERT_TYPE_ASSERT, "(rtt->width == 0 && rtt->height == 0)", (const char *)&queryFormat, "rtt->width == 0 && rtt->height == 0") )
      __debugbreak();
    Name = R_RTT_GetName(rttHandle);
    Com_Printf(13, "UI RTT(%d): RTT %s is already deleted\n", (unsigned int)v2, Name);
  }
  else
  {
    Com_Printf(13, "UI RTT(%d): R_RTT_Delete RTT %s\n", (unsigned int)v2, *(const char **)v6);
    v7 = *(_DWORD *)(v6 + 12) * *(_DWORD *)(v6 + 8);
    if ( v4->allocPixelCount < v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 173, ASSERT_TYPE_ASSERT, "(context->allocPixelCount >= pixelCount)", (const char *)&queryFormat, "context->allocPixelCount >= pixelCount") )
      __debugbreak();
    v4->allocPixelCount -= v7;
    if ( v4->allocSlotCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 175, ASSERT_TYPE_ASSERT, "(context->allocSlotCount > 0)", (const char *)&queryFormat, "context->allocSlotCount > 0") )
      __debugbreak();
    --v4->allocSlotCount;
    *(_QWORD *)v6 = 0i64;
    *(_QWORD *)(v6 + 8) = 0i64;
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 48) = 0i64;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 56) = 0;
  }
}

/*
==============
R_RTT_DeleteAllSlots
==============
*/
void R_RTT_DeleteAllSlots(LocalClientNum_t clientIndex)
{
  unsigned int v2; 
  GfxRTTContext *v3; 
  __int64 v4; 
  int *p_status; 

  v2 = 1;
  v3 = &s_rttContext[clientIndex];
  v4 = 8i64;
  p_status = (int *)&v3->slots[0].status;
  do
  {
    if ( v2 - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
      __debugbreak();
    if ( *p_status > 0 )
      R_RTT_Delete(clientIndex, v2);
    ++v2;
    p_status += 16;
    --v4;
  }
  while ( v4 );
  if ( v3->allocSlotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 208, ASSERT_TYPE_ASSERT, "(context->allocSlotCount == 0)", (const char *)&queryFormat, "context->allocSlotCount == 0") )
    __debugbreak();
  if ( v3->allocPixelCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 209, ASSERT_TYPE_ASSERT, "(context->allocPixelCount == 0)", (const char *)&queryFormat, "context->allocPixelCount == 0") )
      __debugbreak();
  }
}

/*
==============
R_RTT_FindHandle
==============
*/
__int64 R_RTT_FindHandle(const GfxRTTContext *context, const char *name)
{
  __int64 v2; 
  unsigned int *v3; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int *v7; 
  const char **v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  const char *v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  int v18; 
  __int64 v20; 
  const char *v21; 
  const char *v22; 
  char v23; 
  __int64 v24; 
  char v25; 

  v2 = 0i64;
  v3 = s_aliasChecksum;
  v5 = -1i64;
  if ( !s_aliasChecksum[0] )
  {
    v6 = 0;
    v7 = s_aliasChecksum;
    v8 = s_rttAlias;
    do
    {
      v9 = *v8;
      v10 = -1i64;
      do
        ++v10;
      while ( v9[v10] );
      v11 = (unsigned int)v10;
      v12 = ~*v9;
      if ( (_DWORD)v10 )
      {
        do
        {
          v13 = *(unsigned __int8 *)v9++;
          v12 = (v12 >> 8) ^ g_crc32Table[v13 ^ (unsigned __int8)v12];
          --v11;
        }
        while ( v11 );
      }
      ++v6;
      *v7 = ~v12;
      ++v8;
      ++v7;
    }
    while ( v6 < 8 );
    v3 = s_aliasChecksum;
    v2 = 0i64;
  }
  do
    ++v5;
  while ( name[v5] );
  v14 = name;
  v15 = (unsigned int)v5;
  v16 = ~*name;
  if ( (_DWORD)v5 )
  {
    do
    {
      v17 = *(unsigned __int8 *)v14++;
      v16 = (v16 >> 8) ^ g_crc32Table[v17 ^ (unsigned __int8)v16];
      --v15;
    }
    while ( v15 );
  }
  v18 = ~v16;
  while ( v18 != *v3 )
  {
    v2 = (unsigned int)(v2 + 1);
    ++v3;
    if ( (unsigned int)v2 >= 8 )
      return 0i64;
  }
  v20 = 0x7FFFFFFFi64;
  v21 = s_rttAlias[v2];
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v22 = (const char *)(name - v21);
  do
  {
    v23 = v21[(_QWORD)v22];
    v24 = v20;
    v25 = *v21++;
    --v20;
    if ( !v24 )
      break;
    if ( v23 != v25 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 88, ASSERT_TYPE_ASSERT, "(I_strcmp( name, R_RTT_GetRTTAlias( i ) ) == 0)", (const char *)&queryFormat, "I_strcmp( name, R_RTT_GetRTTAlias( i ) ) == 0") )
        __debugbreak();
      return (unsigned int)(v2 + 1);
    }
  }
  while ( v23 );
  return (unsigned int)(v2 + 1);
}

/*
==============
R_RTT_GetChecksum
==============
*/
void R_RTT_GetChecksum(LocalClientNum_t clientIndex, unsigned int rttHandle, unsigned __int64 *drawListChecksum, unsigned int *drawListBufferSize)
{
  __int64 v5; 
  unsigned __int64 v8; 

  v5 = 520i64 * (int)clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v8 = (unsigned __int64)(rttHandle - 1) << 6;
  *drawListChecksum = *(unsigned __int64 *)((char *)&s_rttContext[0].slots[0].drawListChecksum + v8 + v5);
  *drawListBufferSize = *(unsigned int *)((char *)&s_rttContext[0].slots[0].drawListBufferSize + v8 + v5);
}

/*
==============
R_RTT_GetName
==============
*/
const char *R_RTT_GetName(unsigned int rttHandle)
{
  __int64 v2; 

  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 63, ASSERT_TYPE_ASSERT, "(rttHandle > 0 && rttHandle <= 8)", (const char *)&queryFormat, "rttHandle > 0 && rttHandle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v2 = rttHandle - 1;
  if ( (unsigned int)v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 55, ASSERT_TYPE_ASSERT, "(slot < ( sizeof( *array_counter( s_rttAlias ) ) + 0 ))", (const char *)&queryFormat, "slot < ARRAY_COUNT( s_rttAlias )") )
    __debugbreak();
  return s_rttAlias[v2];
}

/*
==============
R_RTT_GetRTTAlias
==============
*/
const char *R_RTT_GetRTTAlias(unsigned int slot)
{
  __int64 v1; 

  v1 = slot;
  if ( slot >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 55, ASSERT_TYPE_ASSERT, "(slot < ( sizeof( *array_counter( s_rttAlias ) ) + 0 ))", (const char *)&queryFormat, "slot < ARRAY_COUNT( s_rttAlias )") )
    __debugbreak();
  return s_rttAlias[v1];
}

/*
==============
R_RTT_GetSize
==============
*/
void R_RTT_GetSize(LocalClientNum_t clientIndex, unsigned int rttHandle, int *widthOut, int *heightOut)
{
  __int64 v4; 
  int *v8; 
  int v9; 

  v4 = 520i64 * (int)clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v8 = (int *)((char *)&s_rttContext[0].slots[(unsigned __int64)(rttHandle - 1)] + v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 218, ASSERT_TYPE_ASSERT, "(rtt)", (const char *)&queryFormat, "rtt") )
    __debugbreak();
  if ( v8[14] <= 0 )
  {
    v9 = 0;
    *widthOut = 0;
  }
  else
  {
    *widthOut = v8[2];
    v9 = v8[3];
  }
  *heightOut = v9;
}

/*
==============
R_RTT_GetSlot
==============
*/
GfxRTTSlot *R_RTT_GetSlot(GfxRTTContext *context, unsigned int handle)
{
  if ( handle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  return &context->slots[(unsigned __int64)(handle - 1)];
}

/*
==============
R_RTT_GetSlotReadOnly
==============
*/
GfxRTTSlot *R_RTT_GetSlotReadOnly(const GfxRTTContext *context, unsigned int handle)
{
  if ( handle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 299, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  return &context->slots[(unsigned __int64)(handle - 1)];
}

/*
==============
R_RTT_NotifyUpdated
==============
*/
void R_RTT_NotifyUpdated(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  __int64 v2; 
  GfxRTTSlot *v4; 
  const char *Name; 

  v2 = clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 242, ASSERT_TYPE_ASSERT, "(rttHandle > 0 && rttHandle <= 8)", (const char *)&queryFormat, "rttHandle > 0 && rttHandle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v4 = &s_rttContext[v2].slots[(unsigned __int64)(rttHandle - 1)];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 245, ASSERT_TYPE_ASSERT, "(rtt)", (const char *)&queryFormat, "rtt") )
    __debugbreak();
  if ( v4->status <= RTT_UNUSED )
  {
    Name = R_RTT_GetName(rttHandle);
    Com_Printf(13, "UI RTT(%d): RTT %s is not allocated\n", (unsigned int)v2, Name);
  }
  else
  {
    if ( (!v4->name || !v4->width || !v4->height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 248, ASSERT_TYPE_ASSERT, "(rtt->name && rtt->width && rtt->height)", (const char *)&queryFormat, "rtt->name && rtt->width && rtt->height") )
      __debugbreak();
    v4->status = RTT_UPDATED;
  }
}

/*
==============
R_RTT_SetChecksum
==============
*/
void R_RTT_SetChecksum(LocalClientNum_t clientIndex, unsigned int rttHandle, unsigned __int64 drawListChecksum, unsigned int drawListBufferSize)
{
  __int64 v5; 
  unsigned __int64 v8; 

  v5 = 520i64 * (int)clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  v8 = (unsigned __int64)(rttHandle - 1) << 6;
  *(unsigned __int64 *)((char *)&s_rttContext[0].slots[0].drawListChecksum + v8 + v5) = drawListChecksum;
  *(unsigned int *)((char *)&s_rttContext[0].slots[0].drawListBufferSize + v8 + v5) = drawListBufferSize;
}

/*
==============
R_RTT_UseDirtyCheck
==============
*/
bool R_RTT_UseDirtyCheck(LocalClientNum_t clientIndex, unsigned int rttHandle)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 

  v3 = 520i64 * (int)clientIndex;
  if ( rttHandle - 1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_render_to_texture.cpp", 100, ASSERT_TYPE_ASSERT, "(handle > 0 && handle <= 8)", (const char *)&queryFormat, "handle > 0 && handle <= MAX_RENDER_TO_TEXTURE_COUNT") )
    __debugbreak();
  if ( !*(&s_rttContext[0].slots[(unsigned __int64)(rttHandle - 1)].useDirtyCheck + v3) )
    return 0;
  v4 = DVARBOOL_r_rtt_dirtycheck;
  if ( !DVARBOOL_r_rtt_dirtycheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_rtt_dirtycheck") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  return v4->current.enabled;
}

