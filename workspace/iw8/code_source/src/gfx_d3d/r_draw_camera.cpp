/*
==============
R_DrawCallCmd
==============
*/

void __fastcall R_DrawCallCmd(const void *const data)
{
  ?R_DrawCallCmd@@YAXQEBX@Z(data);
}

/*
==============
R_Draw_GetRtGroup
==============
*/

void __fastcall R_Draw_GetRtGroup(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_Group *rtGroup)
{
  ?R_Draw_GetRtGroup@@YAXPEBUGfxViewInfo@@W4GfxDrawListType@@PEAUR_RT_Group@@@Z(viewInfo, drawListType, rtGroup);
}

/*
==============
R_GetDepthHackViewParms
==============
*/

GfxViewParms *__fastcall R_GetDepthHackViewParms(GfxViewParms *result, const GfxViewParms *sceneViewParms)
{
  return ?R_GetDepthHackViewParms@@YA?AUGfxViewParms@@PEBU1@@Z(result, sceneViewParms);
}

/*
==============
R_DrawCamera
==============
*/

void __fastcall R_DrawCamera(const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType)
{
  ?R_DrawCamera@@YAXPEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUR_RT_Group@@PEAUGfxDrawCallOutput@@W4GfxDrawListType@@@Z(viewInfo, data, rtGroup, drawOutput, drawListType);
}

/*
==============
R_DrawCallCmd
==============
*/
void R_DrawCallCmd(const void *const data)
{
  __int64 v3; 
  const GfxBackEndData *v4; 
  GfxDrawCallOutput *v6; 
  volatile signed __int32 *v7; 
  const char *DrawListTypeName; 
  const char *v12; 
  unsigned int v18; 
  const GfxBackEndData *v21; 
  const GfxBackEndData *v23; 
  R_RT_Group *v27; 
  unsigned int v28; 
  R_RT_Group *v36; 
  unsigned int v37; 
  int firstCachedSunShadowPartition; 
  int v48; 
  __int64 v52; 
  D3D12_RESOURCE_STATES sunShadowCacheBeforeState; 
  D3D12_RESOURCE_STATES v54; 
  __m256i v55; 
  __m256i v56; 
  R_RT_ColorHandle v57; 
  R_RT_DepthHandle v58; 
  R_RT_DepthHandle v59; 
  R_RT_Handle v60; 
  R_RT_Handle v61; 
  R_RT_DepthHandle v62; 
  R_RT_DepthHandle v63; 
  R_RT_Handle v64; 
  R_RT_Handle v65; 
  R_RT_DepthHandle v66; 
  R_RT_DepthHandle v67; 
  R_RT_DepthHandle v68; 
  R_RT_DepthHandle v69; 
  R_RT_DepthHandle v70; 
  R_RT_Handle v71; 
  R_RT_DepthHandle v72; 
  R_RT_Handle v73; 
  R_RT_DepthHandle v74; 
  R_RT_Group rtGroup; 

  _R14 = (int *)data;
  Profile2_UpdateEntry(69);
  if ( ((unsigned __int8)&dword_14FDE80E4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E4) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80E4);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 441, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v3 = _R14[4];
  v4 = *(const GfxBackEndData **)_R14;
  _RBX = (const GfxViewInfo *)*((_QWORD *)_R14 + 1);
  v6 = (GfxDrawCallOutput *)(9136 * v3 + *(_QWORD *)_R14 + 31912);
  v7 = (volatile signed __int32 *)(9136 * v3 + *(_QWORD *)_R14 + 41036);
  if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(9136 * v3 + *(_QWORD *)_R14 + 41036)) )
    __debugbreak();
  if ( _InterlockedCompareExchange(v7, 0, 1) )
  {
    DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)v3);
    R_InitCmdBuf(&v6->cmdBuf, v4, DrawListTypeName);
    if ( !v6->cmdBuf.device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 456, ASSERT_TYPE_ASSERT, "(drawOutput->cmdBuf.device)", (const char *)&queryFormat, "drawOutput->cmdBuf.device") )
      __debugbreak();
    v6->cmdBuf.useImmediateContext = 0;
    R_InitDescriptorState(&v6->cmdBuf.descState);
    R_InitDescriptorHeapInfoState(&v6->cmdBuf.descState, &v4->drawDescHeapInfo);
    v6->empty = 0;
    R_InitConstantBufferInfoState(&v6->cmdBuf.constantBufferAllocations, &v4->constantBufferInfo, 0x8030u);
    _R15 = (char *)(_R14 + 6);
    if ( *((_BYTE *)_R14 + 24) || R_RT_Handle::IsValid((R_RT_Handle *)_R14 + 5) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r15]
        vmovups ymm1, ymmword ptr [r15+80h]
      }
      v12 = (const char *)*((_QWORD *)_R14 + 27);
      _RCX = &rtGroup;
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [r15+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [r15+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [r15+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymmword ptr [rcx+80h], ymm1
        vmovups ymm1, ymmword ptr [r15+0A0h]
        vmovups ymmword ptr [rcx+0A0h], ymm1
      }
      rtGroup.m_vrsRt.m_tracking.m_location = v12;
    }
    else
    {
      R_Draw_GetRtGroup(_RBX, (GfxDrawListType)v3, &rtGroup);
    }
    switch ( (int)v3 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
        R_DrawCamera(_RBX, v4, &rtGroup, v6, (GfxDrawListType)v3);
        break;
      case 24:
      case 25:
      case 26:
      case 28:
        if ( R_RT_Group::IsEmpty((R_RT_Group *)(_R14 + 6)) )
        {
          v18 = 0;
          if ( (_DWORD)v3 != 28 )
            v18 = v3 - 24;
          _RAX = 32 * (v18 + 404i64);
          __asm { vmovups ymm0, ymmword ptr [rax+rbx] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [r14+0A0h] }
        }
        __asm { vmovups [rbp+2E0h+var_320], ymm0 }
        R_DrawSunshadow_DrawCascade(_RBX, (GfxDrawListType)v3, &v58, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6);
        break;
      case 27:
        if ( R_RT_Group::IsEmpty((R_RT_Group *)(_R14 + 6)) )
        {
          v21 = _RBX->input.data;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+3300h]
            vmovups [rbp+2E0h+var_340], ymm0
          }
          if ( !v21->sunShadow.opaqueCascadeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 596, ASSERT_TYPE_ASSERT, "(viewInfo->input.data->sunShadow.opaqueCascadeCount > 0)", (const char *)&queryFormat, "viewInfo->input.data->sunShadow.opaqueCascadeCount > 0") )
            __debugbreak();
          v23 = _RBX->input.data;
          __asm
          {
            vmovups ymm1, [rbp+2E0h+var_340]
            vmovups [rbp+2E0h+var_340], ymm1
          }
          _RCX = 32 * (v23->sunShadow.opaqueCascadeCount + 403i64);
          __asm
          {
            vmovups ymm0, ymmword ptr [rcx+rbx]
            vmovups [rbp+2E0h+var_300], ymm0
          }
          R_RT_Group::AssignColorDepth(&rtGroup, &v57, &v59);
        }
        R_DrawSunshadow_DrawTranslucent(_RBX, &_RBX->drawList[v3], &rtGroup, v6);
        break;
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
        v27 = (R_RT_Group *)(_R14 + 6);
        v28 = v3 - 29;
        if ( R_RT_Group::IsEmpty(v27) )
        {
          _RAX = 32 * (v28 + 382i64);
          __asm { vmovups ymm1, ymmword ptr [rax+rbx] }
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+2E0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID]
            vmovups [rbp+2E0h+var_2E0], ymm0
          }
          _RAX = R_RT_GetViewInternal(&v71, &v60, v28, -1);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+2E0h+var_2C0], ymm0
          }
          _RAX = R_RT_DepthHandle::Cast(&v72, &v61);
          __asm { vmovups ymm1, ymmword ptr [rax] }
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+6420h]
          vmovups [rbp+2E0h+var_2A0], ymm0
          vmovups [rbp+2E0h+var_280], ymm1
        }
        R_DrawSpotShadowMapStatics(_RBX, &_RBX->drawList[v3], (GfxDrawListType)v3, &v63, &v62, v3 - 29, v6, _RBX->spotshadowHTileMask);
        break;
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
        v36 = (R_RT_Group *)(_R14 + 6);
        v37 = v3 - 37;
        if ( R_RT_Group::IsEmpty(v36) )
        {
          _RAX = 32 * (v37 + 382i64);
          __asm { vmovups ymm0, ymmword ptr [rax+rbx] }
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+2E0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID]
            vmovups [rbp+2E0h+var_260], ymm0
          }
          _RAX = R_RT_GetViewInternal(&v73, &v64, v37, -1);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rbp+2E0h+var_240], ymm0
          }
          _RAX = R_RT_DepthHandle::Cast(&v74, &v65);
          __asm { vmovups ymm0, ymmword ptr [rax] }
        }
        __asm { vmovups [rbp+2E0h+var_220], ymm0 }
        R_DrawSpotShadowMapDynamics(_RBX, &_RBX->drawList[v3], (GfxDrawListType)v3, &v66, v3 - 37, v6, _RBX->spotshadowHTileMask);
        break;
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
        firstCachedSunShadowPartition = v4->sunShadow.firstCachedSunShadowPartition;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+3E0h+var_388+10h], xmm0
          vmovups ymm0, ymmword ptr [rbx+6450h]
        }
        v55.m256i_i16[0] = 0;
        v55.m256i_i32[2] = 0;
        __asm { vmovups ymm1, [rsp+3E0h+var_388] }
        sunShadowCacheBeforeState = _RBX->sunShadowCacheBeforeState;
        __asm
        {
          vmovups [rbp+2E0h+var_200], ymm1
          vmovups [rbp+2E0h+var_1E0], ymm0
        }
        R_DrawSunshadow_DrawCacheForCascade(_RBX, &_RBX->drawList[v3], firstCachedSunShadowPartition, v3 - 45, v6, (GfxDrawListType)v3, &v68, &v67, sunShadowCacheBeforeState);
        break;
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
        v48 = v4->sunShadow.firstCachedSunShadowPartition + 1;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+2E0h+var_368+10h], xmm0
          vmovups ymm0, ymmword ptr [rbx+6450h]
        }
        v56.m256i_i16[0] = 0;
        v56.m256i_i32[2] = 0;
        __asm { vmovups ymm1, ymmword ptr [rsp+3E0h+var_368] }
        v54 = _RBX->sunShadowCacheBeforeState;
        __asm
        {
          vmovups [rbp+2E0h+var_1C0], ymm1
          vmovups [rbp+2E0h+var_1A0], ymm0
        }
        R_DrawSunshadow_DrawCacheForCascade(_RBX, &_RBX->drawList[v3], v48, v3 - 55, v6, (GfxDrawListType)v3, &v70, &v69, v54);
        break;
      default:
        LODWORD(v52) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 696, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp(696): unhandled case %d in switch statement", v52) )
          __debugbreak();
        break;
    }
    R_ShutdownConstantBufferInfoState(&v6->cmdBuf.constantBufferAllocations);
    R_ShutdownCmdBuf(&v6->cmdBuf, v4);
    R_ShutdownDescriptorHeapInfoState(&v6->cmdBuf.descState);
  }
  if ( v6->cmdCount != 1 )
  {
    LODWORD(v52) = v6->cmdCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 721, ASSERT_TYPE_ASSERT, "( ( drawOutput->cmdCount == 1 ) )", "( drawOutput->cmdCount ) = %i", v52) )
      __debugbreak();
  }
  v6->cmdCount = 0;
  Profile2_UpdateEntry(69);
  if ( ((unsigned __int64)&dword_14FDE80E4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E4) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80E4);
}

/*
==============
R_DrawCamera
==============
*/
void R_DrawCamera(const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType)
{
  int v7; 
  const char *DrawListTypeName; 
  MaterialTechniqueType v9; 
  __int64 v20; 
  __int64 v36; 
  GfxViewParms *v42; 
  GfxViewParms *p_prevFrameViewParms; 
  GfxViewStatsTarget v44; 
  R_RT_Handle *v45; 
  R_RT_Handle *AnyRt; 
  int v49; 
  GlobalLightingFlags v70; 
  R_RT_Handle *v72; 
  unsigned int v73; 
  R_RT_Handle *v74; 
  unsigned int v75; 
  GfxDepthRangeType v79; 
  char v80; 
  char v81; 
  GfxCmdBufSourceState *source[2]; 
  GfxDepthRangeType depthRangeType; 
  GfxBackEndData *dataa[2]; 
  GfxDrawCallOutput *v90; 
  GfxCmdBufContext v91; 
  R_RT_Group *v92[2]; 
  R_RT_Handle result; 
  __int64 v94; 
  GfxViewParms viewParms; 
  GfxViewport viewport; 
  GfxViewport v97; 
  GfxViewParms v98; 
  GfxViewParms prevFrameViewParms; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v101; 

  v94 = -2i64;
  v90 = drawOutput;
  v92[0] = (R_RT_Group *)rtGroup;
  dataa[0] = (GfxBackEndData *)data;
  _RSI = viewInfo;
  if ( (unsigned int)drawListType >= DRAWLIST_BACKEND_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_BACKEND_COUNT )", "drawListType doesn't index DRAWLIST_BACKEND_COUNT\n\t%i not in [0, %i)", drawListType, 89) )
    __debugbreak();
  v7 = 87;
  if ( drawListType < DRAWLIST_FRONTEND_COUNT )
    v7 = 88;
  Profile_Begin(v7);
  DrawListTypeName = R_GetDrawListTypeName(drawListType);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  v9 = TECHNIQUE_FIRST;
  switch ( drawListType )
  {
    case DRAWLIST_FIRST:
    case DRAWLIST_DEPTH_HACK_SSS:
    case DRAWLIST_DEPTH_HACK_TRANS:
    case DRAWLIST_HUD_OUTLINE_FIRST:
    case DRAWLIST_PRE_DEPTH_HACK_SSS:
    case DRAWLIST_DEPTH_HACK_EMISSIVE:
    case DRAWLIST_POST_BLUR_DEPTH_HACK_EMISSIVE:
    case DRAWLIST_FRONTEND_COUNT:
    case DRAWLIST_PREPASS_DEPTH_HACK_SSS:
    case DRAWLIST_PREPASS_DEPTH_HACK_TRANS:
    case DRAWLIST_PREPASS_HUD_OUTLINE_FIRST:
    case DRAWLIST_PREPASS_PRE_DEPTH_HACK_SSS:
    case DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_FIRST:
    case DRAWLIST_PREPASS_PRE_DEPTH_HACK_SSS_STENCIL:
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+100h]; jumptable 0000000142251A6A cases 0-2,14,15,20,22,65-67,79,80,84,85
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.origin], ymm0
        vmovups ymm1, ymmword ptr [rsi+120h]
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.axis+14h], ymm1
        vmovups ymm0, ymmword ptr [rsi+140h]
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.zPlanes], ymm0
        vmovsd  xmm1, qword ptr [rsi+160h]
        vmovsd  qword ptr [rbp+54E0h+viewParms.camera.visibilityQueryDistance], xmm1
        vmovss  xmm0, dword ptr [rsi+138h]
        vmovss  dword ptr [rbp+54E0h+viewParms.camera.___u2], xmm0
        vmovss  xmm1, dword ptr [rsi+13Ch]
        vmovss  dword ptr [rbp+54E0h+viewParms.camera.___u3], xmm1
        vmovss  xmm0, dword ptr [rsi+168h]
        vmovss  dword ptr [rbp+54E0h+viewParms.subpixelOffset], xmm0
        vmovss  xmm1, dword ptr [rsi+16Ch]
        vmovss  dword ptr [rbp+54E0h+viewParms.subpixelOffset+4], xmm1
      }
      R_SetupPerspectiveViewProjectionMatrices(&viewParms, R_ZPLANES_VIEWMODEL_ZNEAR);
      _RAX = &v98;
      _RCX = &viewParms;
      v20 = 3i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rax+60h], xmm0
        }
        _RAX = (GfxViewParms *)((char *)_RAX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rcx+70h]
          vmovups xmmword ptr [rax-10h], xmm1
        }
        _RCX = (GfxViewParms *)((char *)_RCX + 128);
        --v20;
      }
      while ( v20 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+280h]
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.origin], ymm0
        vmovups ymm1, ymmword ptr [rsi+2A0h]
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.axis+14h], ymm1
        vmovups ymm0, ymmword ptr [rsi+2C0h]
        vmovups ymmword ptr [rbp+54E0h+viewParms.camera.zPlanes], ymm0
        vmovsd  xmm1, qword ptr [rsi+2E0h]
        vmovsd  qword ptr [rbp+54E0h+viewParms.camera.visibilityQueryDistance], xmm1
        vmovss  xmm0, dword ptr [rsi+2B8h]
        vmovss  dword ptr [rbp+54E0h+viewParms.camera.___u2], xmm0
        vmovss  xmm1, dword ptr [rsi+2BCh]
        vmovss  dword ptr [rbp+54E0h+viewParms.camera.___u3], xmm1
        vmovss  xmm0, dword ptr [rsi+2E8h]
        vmovss  dword ptr [rbp+54E0h+viewParms.subpixelOffset], xmm0
        vmovss  xmm1, dword ptr [rsi+2ECh]
        vmovss  dword ptr [rbp+54E0h+viewParms.subpixelOffset+4], xmm1
      }
      R_SetupPerspectiveViewProjectionMatrices(&viewParms, (R_ZPLANES)(unsigned __int8)v20);
      _RAX = &prevFrameViewParms;
      _RCX = &viewParms;
      v36 = 3i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rax+60h], xmm0
        }
        _RAX = (GfxViewParms *)((char *)_RAX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rcx+70h]
          vmovups xmmword ptr [rax-10h], xmm1
        }
        _RCX = (GfxViewParms *)((char *)_RCX + 128);
        --v36;
      }
      while ( v36 );
      v42 = &v98;
      p_prevFrameViewParms = &prevFrameViewParms;
      depthRangeType = GFX_DEPTH_RANGE_VIEWMODEL;
      break;
    default:
      v42 = (GfxViewParms *)_RSI;
      p_prevFrameViewParms = &_RSI->viewParmsSet.frames[1].viewParms;
      depthRangeType = GFX_DEPTH_RANGE_SCENE;
      break;
  }
  v44 = GFX_VIEW_STATS_DECAL;
  if ( (unsigned int)(drawListType - 19) <= 1 )
  {
    if ( (rg.vrs || rg.vrsEmissiveOnly) && (AnyRt = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result), (R_RT_Handle::GetSurface(AnyRt)->m_rtFlags & 0x4000) != 0) || rg.halfResEmissive )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+4A0h]
        vmovups xmm1, xmmword ptr [rsi+4E0h]
        vmovups [rbp+54E0h+var_5380], xmm1
      }
      goto LABEL_23;
    }
  }
  else if ( rg.vrs )
  {
    v45 = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result);
    if ( (R_RT_Handle::GetSurface(v45)->m_rtFlags & 0x4000) != 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+490h]
        vmovups [rbp+54E0h+var_5380], xmm0
      }
LABEL_23:
      v49 = 2;
      goto LABEL_24;
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+480h]
    vmovups xmm1, xmmword ptr [rsi+4C0h]
    vmovups [rbp+54E0h+var_5380], xmm1
  }
  v49 = 1;
LABEL_24:
  __asm { vmovups xmmword ptr [rbp+54E0h+viewport.x], xmm0 }
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v101);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  if ( !_RSI->input.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 231, ASSERT_TYPE_ASSERT, "(viewInfo->input.data)", (const char *)&queryFormat, "viewInfo->input.data") )
    __debugbreak();
  v91.source = (GfxCmdBufSourceState *)&_RSI->input.data->drawListIter[drawListType];
  if ( LODWORD(v91.source->matrices.matrix[3].m.m[2].v[1]) )
  {
    if ( R_DrawListStart(&state, &v101, _RSI, v42, p_prevFrameViewParms, v90) )
    {
      source[0] = &v101;
      source[1] = (GfxCmdBufSourceState *)&state;
      _R13 = v92[0];
      __asm
      {
        vmovups ymm0, ymmword ptr [r13+0A8h]
        vmovups ymmword ptr [rbp+54E0h+result.m_surfaceID], ymm0
        vmovups xmm1, xmmword ptr [rsp+55E0h+source]
        vmovdqa xmmword ptr [rbp+54E0h+var_5550], xmm1
      }
      R_VRS_ApplyVariableRateShading(_RSI, (GfxCmdBufContext *)v92, (R_RT_ColorHandle *)&result, drawListType);
      if ( drawListType >= DRAWLIST_FRONTEND_COUNT )
      {
        switch ( drawListType )
        {
          case DRAWLIST_FIRST:
          case DRAWLIST_DEPTH_HACK_SSS:
          case DRAWLIST_DEPTH_HACK_TRANS:
          case DRAWLIST_HUD_OUTLINE_FIRST:
          case DRAWLIST_PRE_DEPTH_HACK_SSS:
          case DRAWLIST_DEPTH_HACK_EMISSIVE:
          case DRAWLIST_POST_BLUR_DEPTH_HACK_EMISSIVE:
          case DRAWLIST_FRONTEND_COUNT:
          case DRAWLIST_PREPASS_DEPTH_HACK_SSS:
          case DRAWLIST_PREPASS_DEPTH_HACK_TRANS:
          case DRAWLIST_PREPASS_HUD_OUTLINE_FIRST:
          case DRAWLIST_PREPASS_PRE_DEPTH_HACK_SSS:
          case DRAWLIST_PREPASS_HUD_OUTLINE_STENCIL_FIRST:
          case DRAWLIST_PREPASS_PRE_DEPTH_HACK_SSS_STENCIL:
            _RDX = 83i64;
            break;
          default:
            _RDX = 79i64;
            break;
        }
        _RCX = source[0];
        source[0]->input.consts[7].v[0] = _RSI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX].v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rsi+4]
          vmovss  dword ptr [rcx+774h], xmm0
          vmovss  xmm1, dword ptr [rdx+rsi+8]
          vmovss  dword ptr [rcx+778h], xmm1
          vmovss  xmm0, dword ptr [rdx+rsi+0Ch]
          vmovss  dword ptr [rcx+77Ch], xmm0
        }
        ++_RCX->constVersions[7];
        _RCX = source[0];
        source[0]->input.consts[8].v[0] = _RSI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX + 1].v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rsi+14h]
          vmovss  dword ptr [rcx+784h], xmm0
          vmovss  xmm1, dword ptr [rdx+rsi+18h]
          vmovss  dword ptr [rcx+788h], xmm1
          vmovss  xmm0, dword ptr [rdx+rsi+1Ch]
          vmovss  dword ptr [rcx+78Ch], xmm0
        }
        ++_RCX->constVersions[8];
        _RCX = source[0];
        source[0]->input.consts[9].v[0] = _RSI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX + 2].v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rsi+24h]
          vmovss  dword ptr [rcx+794h], xmm0
          vmovss  xmm1, dword ptr [rdx+rsi+28h]
          vmovss  dword ptr [rcx+798h], xmm1
          vmovss  xmm0, dword ptr [rdx+rsi+2Ch]
          vmovss  dword ptr [rcx+79Ch], xmm0
        }
        ++_RCX->constVersions[9];
        _RCX = source[0];
        source[0]->input.consts[10].v[0] = _RSI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX + 3].v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rsi+34h]
          vmovss  dword ptr [rcx+7A4h], xmm0
          vmovss  xmm1, dword ptr [rdx+rsi+38h]
          vmovss  dword ptr [rcx+7A8h], xmm1
          vmovss  xmm0, dword ptr [rdx+rsi+3Ch]
          vmovss  dword ptr [rcx+7ACh], xmm0
        }
        ++_RCX->constVersions[10];
      }
      R_GP_SetScenePassIndex(source[0], _RSI->input.data, 0);
      R_SetPersistentTables((GfxCmdBufContext *)source, dataa[0], PERSISTENT_TABLE_SCENE);
      if ( drawListType < DRAWLIST_FRONTEND_COUNT )
      {
        if ( (unsigned int)(drawListType - 19) > 4 )
        {
          if ( (unsigned int)(drawListType - 24) <= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 83, ASSERT_TYPE_ASSERT, "(R_IsCameraDrawListType( drawListType ))", (const char *)&queryFormat, "R_IsCameraDrawListType( drawListType )") )
            __debugbreak();
          if ( drawListType != DRAWLIST_LIT_DECAL )
          {
            v44 = GFX_VIEW_STATS_OPAQUE;
            if ( (unsigned int)(drawListType - 12) <= 1 )
              v44 = GFX_VIEW_STATS_TRANS;
          }
        }
        else
        {
          v44 = GFX_VIEW_STATS_EMISSIVE;
        }
      }
      else
      {
        v44 = GFX_VIEW_STATS_DEPTH;
      }
      source[0]->viewStatsTarget = v44;
      v70 = 0;
      if ( drawListType < DRAWLIST_FRONTEND_COUNT )
      {
        if ( (unsigned int)(drawListType - 12) <= 1 || drawListType == DRAWLIST_DEPTH_HACK_TRANS )
        {
          v70 = GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
        }
        else
        {
          v70 = GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SSAO|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_DEFERRED|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
          if ( (unsigned int)(drawListType - 19) <= 4 )
            v70 = GLOBAL_LIGHTING_FLAG_EFFECT_LIGHTING|GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
        }
      }
      R_MaskSourceState(source[0], _RSI, v70);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+source]
        vmovdqa xmmword ptr [rsp+55E0h+data], xmm0
      }
      R_SetRenderTargetsInternal((GfxCmdBufContext *)dataa, _R13, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp(273)");
      v72 = R_RT_Group::GetAnyRt(_R13, &result);
      v73 = v49 * R_RT_Handle::GetSurface(v72)->m_image.m_base.width;
      v74 = R_RT_Group::GetAnyRt(_R13, &result);
      v75 = v49 * R_RT_Handle::GetSurface(v74)->m_image.m_base.height;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax; msScale
      }
      R_SetViewportMSParams(source[0], *(float *)&_XMM1);
      R_SetRenderTargetSize(source[0], v73, v75, GFX_USE_VIEWPORT_FOR_VIEW);
      R_SetViewportStruct(source[0], &viewport);
      R_Set3D(source[0]);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+source]
        vmovdqa xmmword ptr [rsp+55E0h+data], xmm0
      }
      R_HW_EnableScissor((GfxCmdBufContext *)dataa, &v97);
      v79 = depthRangeType;
      if ( depthRangeType != LODWORD(source[1]->input.consts[47].v[0]) )
        R_ChangeDepthRange((GfxCmdBufState *)source[1], depthRangeType);
      if ( v79 == GFX_DEPTH_RANGE_VIEWMODEL )
        R_ChangeDepthHackNearClip(source[0], 1u);
      v80 = 0;
      if ( drawListType == DRAWLIST_PREPASS_EID_ONLY )
        v80 = 16;
      *((_BYTE *)source[0] + 11668) = *((_BYTE *)source[0] + 11668) & 0xEF | v80;
      v81 = 0;
      if ( v49 != 1 )
        v81 = 32;
      *((_BYTE *)source[0] + 11668) = *((_BYTE *)source[0] + 11668) & 0xDF | v81;
      if ( (*((_BYTE *)source[0] + 11668) & 0x20) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+55E0h+source]
          vmovdqa xmmword ptr [rsp+55E0h+data], xmm0
        }
        R_HW_EnableMultiSample((GfxCmdBufContext *)dataa, _RSI->input.data->frameCount);
      }
      if ( drawListType < DRAWLIST_FRONTEND_COUNT )
      {
        if ( (unsigned int)(drawListType - 19) > 4 )
        {
          if ( (unsigned int)(drawListType - 24) <= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 119, ASSERT_TYPE_ASSERT, "(R_IsCameraDrawListType( drawListType ))", (const char *)&queryFormat, "R_IsCameraDrawListType( drawListType )") )
            __debugbreak();
          v9 = TECHNIQUE_LIT_FORWARDPLUS_BITMASK;
        }
        else
        {
          v9 = TECHNIQUE_EMISSIVE;
        }
      }
      else if ( (unsigned int)(drawListType - 79) > 4 )
      {
        if ( (unsigned int)(drawListType - 84) <= 4 )
          v9 = TECHNIQUE_DEPTH_PREPASS_STENCIL;
      }
      else
      {
        v9 = TECHNIQUE_DEPTH_PREPASS_OBJECTID;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+source]
        vmovdqa xmmword ptr [rsp+55E0h+data], xmm0
      }
      R_DrawSurfs_Sorted((GfxCmdBufContext *)dataa, (GfxDrawListIter *)v91.source, v9, drawListType);
      R_HW_DisableScissor((GfxCmdBufState *)source[1]);
      __asm
      {
        vmovups ymm0, ymmword ptr [r13+0A8h]
        vmovups ymmword ptr [rbp+54E0h+result.m_surfaceID], ymm0
        vmovups xmm1, xmmword ptr [rsp+55E0h+source]
        vmovdqa [rbp+54E0h+var_5560], xmm1
      }
      R_VRS_DisabledVariableRateShading(_RSI, &v91, (R_RT_ColorHandle *)&result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+55E0h+source]
        vmovdqa [rbp+54E0h+var_5560], xmm0
      }
      R_DrawListEnd(&v91, v90);
    }
  }
  else
  {
    v90->empty = 1;
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v101);
}

/*
==============
R_Draw_GetRtGroup
==============
*/
void R_Draw_GetRtGroup(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_Group *rtGroup)
{
  int v5; 
  bool v8; 
  unsigned int v11; 
  __int64 v21; 
  __int64 v31; 
  __int64 v45; 
  __int64 v55; 
  __int64 v67; 
  R_RT_ColorHandle v73; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v75; 

  _R15 = rtGroup;
  if ( (unsigned int)drawListType <= DRAWLIST_PRE_SSS )
  {
    v5 = 164354;
    if ( _bittest(&v5, drawListType) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+30C0h]
        vmovups ymm1, ymmword ptr [rcx+3100h]
      }
      v8 = !viewInfo->sss.enabled;
      __asm
      {
        vmovups [rsp+110h+var_A0], ymm0
        vmovups ymm0, ymmword ptr [rcx+3120h]
        vmovups [rbp+10h+var_80], ymm1
        vmovups ymm1, ymmword ptr [rcx+31A0h]
      }
      v11 = 1;
      if ( !v8 )
        v11 = 3;
      __asm
      {
        vmovups [rbp+10h+var_60], ymm0
        vmovups [rsp+110h+var_E0], ymm1
      }
      R_RT_Group::Assign(rtGroup, v11, &v75, (R_RT_DepthHandle *)&v73);
      _RAX = R_VRS_GetVrsTexture(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+0A8h], ymm0
      }
      return;
    }
  }
  if ( (unsigned int)(drawListType - 19) <= 1 )
  {
    if ( rg.vrsEmissiveOnly )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+31C0h]
        vmovups ymm1, ymmword ptr [rcx+31E0h]
        vmovups [rsp+110h+var_A0], ymm0
        vmovups ymm0, ymmword ptr [rcx+3200h]
      }
      rtGroup->m_colorRtCount = 2;
      _RDI = &v75;
      _R14 = (char *)rtGroup - (char *)&v75;
      __asm
      {
        vmovups [rbp+10h+var_80], ymm1
        vmovups [rsp+110h+var_E0], ymm0
      }
      v45 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
        }
        if ( (_WORD)_EAX )
        {
          R_RT_Handle::GetSurface(&result);
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
            __debugbreak();
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r14+rdi+8], ymm0
        }
        ++_RDI;
        --v45;
      }
      while ( v45 );
    }
    else if ( rg.halfResEmissive )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+3220h]
        vmovups ymm1, ymmword ptr [rcx+3240h]
        vmovups [rsp+110h+var_A0], ymm0
        vmovups ymm0, ymmword ptr [rcx+3260h]
      }
      rtGroup->m_colorRtCount = 2;
      _RDI = &v75;
      _R14 = (char *)rtGroup - (char *)&v75;
      __asm
      {
        vmovups [rbp+10h+var_80], ymm1
        vmovups [rsp+110h+var_E0], ymm0
      }
      v55 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
        }
        if ( (_WORD)_EAX )
        {
          R_RT_Handle::GetSurface(&result);
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
            __debugbreak();
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r14+rdi+8], ymm0
        }
        ++_RDI;
        --v55;
      }
      while ( v55 );
    }
    else
    {
      if ( rg.debugOverdrawOverlay )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+31A0h]
          vmovups ymm1, ymmword ptr [rcx+3180h]
          vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
          vmovups [rsp+110h+var_E0], ymm1
        }
        R_RT_Group::AssignColorDepth(rtGroup, &v73, (R_RT_DepthHandle *)&result);
        return;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+30C0h]
        vmovups ymm1, ymmword ptr [rcx+30E0h]
        vmovups [rsp+110h+var_A0], ymm0
        vmovups ymm0, ymmword ptr [rcx+31A0h]
      }
      rtGroup->m_colorRtCount = 2;
      _RDI = &v75;
      _R14 = (char *)rtGroup - (char *)&v75;
      __asm
      {
        vmovups [rbp+10h+var_80], ymm1
        vmovups [rsp+110h+var_E0], ymm0
      }
      v67 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
        }
        if ( (_WORD)_EAX )
        {
          R_RT_Handle::GetSurface(&result);
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
            __debugbreak();
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r14+rdi+8], ymm0
        }
        ++_RDI;
        --v67;
      }
      while ( v67 );
    }
    goto LABEL_66;
  }
  if ( drawListType == DRAWLIST_DISTORT_EMISSIVE )
  {
    if ( rg.debugOverdrawOverlay )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+31A0h]
        vmovups ymm1, ymmword ptr [rcx+3180h]
        vmovups [rsp+110h+var_E0], ymm0
        vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm1
      }
      R_RT_Group::AssignColorDepth(rtGroup, &result, (R_RT_DepthHandle *)&v73);
      return;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+30C0h]
      vmovups ymm1, ymmword ptr [rcx+30E0h]
      vmovups [rsp+110h+var_A0], ymm0
      vmovups ymm0, ymmword ptr [rcx+31A0h]
    }
    rtGroup->m_colorRtCount = 2;
    _RDI = &v75;
    _R14 = (char *)rtGroup - (char *)&v75;
    __asm
    {
      vmovups [rbp+10h+var_80], ymm1
      vmovups [rsp+110h+var_E0], ymm0
    }
    v21 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&result);
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [r14+rdi+8], ymm0
      }
      ++_RDI;
      --v21;
    }
    while ( v21 );
    goto LABEL_66;
  }
  if ( drawListType >= DRAWLIST_FRONTEND_COUNT )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+3140h]
      vmovups ymm1, ymmword ptr [rcx+3160h]
      vmovups [rsp+110h+var_A0], ymm0
      vmovups ymm0, ymmword ptr [rcx+31A0h]
    }
    rtGroup->m_colorRtCount = 2;
    _RDI = &v75;
    _R14 = (char *)rtGroup - (char *)&v75;
    __asm
    {
      vmovups [rbp+10h+var_80], ymm1
      vmovups [rsp+110h+var_E0], ymm0
    }
    v31 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&result);
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [r14+rdi+8], ymm0
      }
      ++_RDI;
      --v31;
    }
    while ( v31 );
LABEL_66:
    __asm
    {
      vmovups ymm0, [rsp+110h+var_E0]
      vmovups ymmword ptr [r15+88h], ymm0
    }
    return;
  }
  if ( (unsigned int)(drawListType - 45) > 0x13 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+31A0h]
      vmovups ymm1, ymmword ptr [rcx+30C0h]
      vmovups ymmword ptr [rsp+110h+result.baseclass_0.m_surfaceID], ymm0
      vmovups [rsp+110h+var_E0], ymm1
    }
    R_RT_Group::AssignColorDepth(rtGroup, &v73, (R_RT_DepthHandle *)&result);
    _RAX = R_VRS_GetVrsTexture(&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [r15+0A8h], ymm0
    }
  }
}

/*
==============
R_GetDepthHackViewParms
==============
*/
GfxViewParms *R_GetDepthHackViewParms(GfxViewParms *result, const GfxViewParms *sceneViewParms)
{
  GfxViewParms *v6; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+100h]
    vmovups ymmword ptr [rcx+100h], ymm0
    vmovups ymm1, ymmword ptr [rdx+120h]
    vmovups ymmword ptr [rcx+120h], ymm1
    vmovups ymm0, ymmword ptr [rdx+140h]
    vmovups ymmword ptr [rcx+140h], ymm0
    vmovsd  xmm1, qword ptr [rdx+160h]
    vmovsd  qword ptr [rcx+160h], xmm1
  }
  v6 = result;
  result->camera.tanHalfFovX = sceneViewParms->camera.depthHackFoV.tanHalfFovX;
  result->camera.tanHalfFovY = sceneViewParms->camera.depthHackFoV.tanHalfFovY;
  result->subpixelOffset = sceneViewParms->subpixelOffset;
  R_SetupPerspectiveViewProjectionMatrices(result, R_ZPLANES_VIEWMODEL_ZNEAR);
  return v6;
}

