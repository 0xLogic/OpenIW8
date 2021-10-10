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
  const GfxViewInfo *v5; 
  GfxDrawCallOutput *v6; 
  volatile signed __int32 *v7; 
  const char *DrawListTypeName; 
  __m256i v9; 
  const char *v10; 
  int v11; 
  R_RT_DepthHandle v12; 
  const GfxBackEndData *v13; 
  R_RT_Group *v14; 
  unsigned int v15; 
  R_RT_DepthHandle v16; 
  R_RT_Group *v17; 
  unsigned int v18; 
  R_RT_DepthHandle v19; 
  int firstCachedSunShadowPartition; 
  R_RT_DepthHandle sunshadowCacheRt; 
  int v23; 
  R_RT_DepthHandle v25; 
  __int64 v26; 
  D3D12_RESOURCE_STATES sunShadowCacheBeforeState; 
  D3D12_RESOURCE_STATES v28; 
  R_RT_DepthHandle v29; 
  __m256i v30; 
  R_RT_ColorHandle m_translucentShadowRt; 
  R_RT_DepthHandle v32; 
  R_RT_DepthHandle v33; 
  R_RT_Handle m_depthRt; 
  R_RT_Handle v35; 
  R_RT_DepthHandle spotshadowActiveCache; 
  R_RT_DepthHandle v37; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  R_RT_DepthHandle v40; 
  R_RT_DepthHandle v41; 
  R_RT_DepthHandle v42; 
  __m256i v43; 
  R_RT_DepthHandle v44; 
  R_RT_Handle v45; 
  R_RT_DepthHandle v46; 
  R_RT_Handle v47; 
  R_RT_DepthHandle v48; 
  R_RT_Group rtGroup; 

  Profile2_UpdateEntry(69);
  if ( ((unsigned __int8)&dword_14FDE80E4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E4) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80E4);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 441, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v3 = *((int *)data + 4);
  v4 = *(const GfxBackEndData **)data;
  v5 = (const GfxViewInfo *)*((_QWORD *)data + 1);
  v6 = (GfxDrawCallOutput *)(9136 * v3 + *(_QWORD *)data + 31912);
  v7 = (volatile signed __int32 *)(9136 * v3 + *(_QWORD *)data + 41036);
  if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(9136 * v3 + *(_QWORD *)data + 41036)) )
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
    if ( *((_BYTE *)data + 24) || R_RT_Handle::IsValid((R_RT_Handle *)data + 5) )
    {
      v9 = *(__m256i *)((char *)data + 152);
      v10 = (const char *)*((_QWORD *)data + 27);
      *(__m256i *)&rtGroup.m_colorRtCount = *(__m256i *)((char *)data + 24);
      *(__m256i *)&rtGroup.m_colorRts[0].m_tracking.m_location = *(__m256i *)((char *)data + 56);
      *(__m256i *)&rtGroup.m_colorRts[1].m_tracking.m_location = *(__m256i *)((char *)data + 88);
      *(__m256i *)&rtGroup.m_colorRts[2].m_tracking.m_location = *(__m256i *)((char *)data + 120);
      *(__m256i *)&rtGroup.m_colorRts[3].m_tracking.m_location = v9;
      *(__m256i *)&rtGroup.m_depthRt.m_tracking.m_location = *(__m256i *)((char *)data + 184);
      rtGroup.m_vrsRt.m_tracking.m_location = v10;
    }
    else
    {
      R_Draw_GetRtGroup(v5, (GfxDrawListType)v3, &rtGroup);
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
        R_DrawCamera(v5, v4, &rtGroup, v6, (GfxDrawListType)v3);
        break;
      case 24:
      case 25:
      case 26:
      case 28:
        if ( R_RT_Group::IsEmpty((R_RT_Group *)((char *)data + 24)) )
        {
          v11 = 0;
          if ( (_DWORD)v3 != 28 )
            v11 = v3 - 24;
          v12 = v5->sceneRtInput.m_sunShadowCascades[v11];
        }
        else
        {
          v12 = *((R_RT_DepthHandle *)data + 5);
        }
        v32 = v12;
        R_DrawSunshadow_DrawCascade(v5, (GfxDrawListType)v3, &v32, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6);
        break;
      case 27:
        if ( R_RT_Group::IsEmpty((R_RT_Group *)((char *)data + 24)) )
        {
          v13 = v5->input.data;
          m_translucentShadowRt = v5->sceneRtInput.m_translucentShadowRt;
          if ( !v13->sunShadow.opaqueCascadeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 596, ASSERT_TYPE_ASSERT, "(viewInfo->input.data->sunShadow.opaqueCascadeCount > 0)", (const char *)&queryFormat, "viewInfo->input.data->sunShadow.opaqueCascadeCount > 0") )
            __debugbreak();
          v33 = *(&v5->sceneRtInput.m_halfSceneDepthRt + v5->input.data->sunShadow.opaqueCascadeCount);
          R_RT_Group::AssignColorDepth(&rtGroup, &m_translucentShadowRt, &v33);
        }
        R_DrawSunshadow_DrawTranslucent(v5, &v5->drawList[v3], &rtGroup, v6);
        break;
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
        v14 = (R_RT_Group *)((char *)data + 24);
        v15 = v3 - 29;
        if ( R_RT_Group::IsEmpty(v14) )
        {
          v16 = v5->sceneRtInput.m_spotShadowRts[v15];
        }
        else
        {
          m_depthRt = (R_RT_Handle)rtGroup.m_depthRt;
          v35 = *R_RT_GetViewInternal(&v45, &m_depthRt, v15, -1);
          v16 = *R_RT_DepthHandle::Cast(&v46, &v35);
        }
        spotshadowActiveCache = v5->spotshadowActiveCache;
        v37 = v16;
        R_DrawSpotShadowMapStatics(v5, &v5->drawList[v3], (GfxDrawListType)v3, &v37, &spotshadowActiveCache, v3 - 29, v6, v5->spotshadowHTileMask);
        break;
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
        v17 = (R_RT_Group *)((char *)data + 24);
        v18 = v3 - 37;
        if ( R_RT_Group::IsEmpty(v17) )
        {
          v19 = v5->sceneRtInput.m_spotShadowRts[v18];
        }
        else
        {
          v38 = (R_RT_Handle)rtGroup.m_depthRt;
          v39 = *R_RT_GetViewInternal(&v47, &v38, v18, -1);
          v19 = *R_RT_DepthHandle::Cast(&v48, &v39);
        }
        v40 = v19;
        R_DrawSpotShadowMapDynamics(v5, &v5->drawList[v3], (GfxDrawListType)v3, &v40, v3 - 37, v6, v5->spotshadowHTileMask);
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
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v29.m_tracking.m_name = _XMM0;
        sunshadowCacheRt = v5->sunshadowCacheRt;
        v29.m_surfaceID = 0;
        v29.m_tracking.m_allocCounter = 0;
        sunShadowCacheBeforeState = v5->sunShadowCacheBeforeState;
        v41 = v29;
        v42 = sunshadowCacheRt;
        R_DrawSunshadow_DrawCacheForCascade(v5, &v5->drawList[v3], firstCachedSunShadowPartition, v3 - 45, v6, (GfxDrawListType)v3, &v42, &v41, sunShadowCacheBeforeState);
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
        v23 = v4->sunShadow.firstCachedSunShadowPartition + 1;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v30.m256i_u64[2] = _XMM0;
        v25 = v5->sunshadowCacheRt;
        v30.m256i_i16[0] = 0;
        v30.m256i_i32[2] = 0;
        v28 = v5->sunShadowCacheBeforeState;
        v43 = v30;
        v44 = v25;
        R_DrawSunshadow_DrawCacheForCascade(v5, &v5->drawList[v3], v23, v3 - 55, v6, (GfxDrawListType)v3, &v44, (R_RT_DepthHandle *)&v43, v28);
        break;
      default:
        LODWORD(v26) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 696, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp(696): unhandled case %d in switch statement", v26) )
          __debugbreak();
        break;
    }
    R_ShutdownConstantBufferInfoState(&v6->cmdBuf.constantBufferAllocations);
    R_ShutdownCmdBuf(&v6->cmdBuf, v4);
    R_ShutdownDescriptorHeapInfoState(&v6->cmdBuf.descState);
  }
  if ( v6->cmdCount != 1 )
  {
    LODWORD(v26) = v6->cmdCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 721, ASSERT_TYPE_ASSERT, "( ( drawOutput->cmdCount == 1 ) )", "( drawOutput->cmdCount ) = %i", v26) )
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
  GfxViewParms *v10; 
  GfxViewParms *p_viewParms; 
  __int64 v12; 
  GfxViewParms *p_prevFrameViewParms; 
  GfxViewParms *v14; 
  __int64 v15; 
  const GfxViewInfo *v16; 
  GfxViewParms *v17; 
  GfxViewStatsTarget v18; 
  R_RT_Handle *v19; 
  GfxViewport sceneEmissiveViewport; 
  R_RT_Handle *AnyRt; 
  unsigned int v22; 
  R_RT_Group *v23; 
  unsigned __int64 v24; 
  GfxCmdBufSourceState *v25; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufSourceState *v27; 
  GfxCmdBufSourceState *v28; 
  GlobalLightingFlags v29; 
  R_RT_Handle *v30; 
  unsigned int v31; 
  R_RT_Handle *v32; 
  unsigned int v33; 
  float v34; 
  GfxDepthRangeType v35; 
  char v36; 
  char v37; 
  GfxCmdBufSourceState *source[2]; 
  GfxDepthRangeType depthRangeType; 
  GfxBackEndData *dataa[2]; 
  GfxDrawCallOutput *v41; 
  GfxCmdBufContext v42; 
  R_RT_Group *v43[2]; 
  R_RT_Handle result; 
  __int64 v45; 
  GfxViewParms viewParms; 
  GfxViewport viewport; 
  GfxViewport scissorEmissiveViewport; 
  GfxViewParms v49; 
  GfxViewParms prevFrameViewParms; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v52; 

  v45 = -2i64;
  v41 = drawOutput;
  v43[0] = (R_RT_Group *)rtGroup;
  dataa[0] = (GfxBackEndData *)data;
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
      viewParms.camera = viewInfo->viewParms.camera;
      viewParms.camera.tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovX;
      viewParms.camera.tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovY;
      viewParms.subpixelOffset = viewInfo->viewParms.subpixelOffset;
      R_SetupPerspectiveViewProjectionMatrices(&viewParms, R_ZPLANES_VIEWMODEL_ZNEAR);
      v10 = &v49;
      p_viewParms = &viewParms;
      v12 = 3i64;
      do
      {
        *(__m256i *)v10->viewMatrix.m.m[0].v = *(__m256i *)p_viewParms->viewMatrix.m.m[0].v;
        *(__m256i *)v10->viewMatrix.m.row2.v = *(__m256i *)p_viewParms->viewMatrix.m.row2.v;
        *(__m256i *)v10->projectionMatrix.m.m[0].v = *(__m256i *)p_viewParms->projectionMatrix.m.m[0].v;
        v10->projectionMatrix.m.row2 = p_viewParms->projectionMatrix.m.row2;
        v10 = (GfxViewParms *)((char *)v10 + 128);
        *(vec4_t *)&v10[-1].cameraMotion = p_viewParms->projectionMatrix.m.row3;
        p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
        --v12;
      }
      while ( v12 );
      viewParms.camera = viewInfo->prevFrameViewParms.camera;
      viewParms.camera.tanHalfFovX = viewInfo->viewParmsSet.frames[1].viewParms.camera.depthHackFoV.tanHalfFovX;
      viewParms.camera.tanHalfFovY = viewInfo->viewParmsSet.frames[1].viewParms.camera.depthHackFoV.tanHalfFovY;
      viewParms.subpixelOffset = viewInfo->prevFrameViewParms.subpixelOffset;
      R_SetupPerspectiveViewProjectionMatrices(&viewParms, R_ZPLANES_VIEWMODEL_ZNEAR);
      p_prevFrameViewParms = &prevFrameViewParms;
      v14 = &viewParms;
      v15 = 3i64;
      do
      {
        *(__m256i *)p_prevFrameViewParms->viewMatrix.m.m[0].v = *(__m256i *)v14->viewMatrix.m.m[0].v;
        *(__m256i *)p_prevFrameViewParms->viewMatrix.m.row2.v = *(__m256i *)v14->viewMatrix.m.row2.v;
        *(__m256i *)p_prevFrameViewParms->projectionMatrix.m.m[0].v = *(__m256i *)v14->projectionMatrix.m.m[0].v;
        p_prevFrameViewParms->projectionMatrix.m.row2 = v14->projectionMatrix.m.row2;
        p_prevFrameViewParms = (GfxViewParms *)((char *)p_prevFrameViewParms + 128);
        *(vec4_t *)&p_prevFrameViewParms[-1].cameraMotion = v14->projectionMatrix.m.row3;
        v14 = (GfxViewParms *)((char *)v14 + 128);
        --v15;
      }
      while ( v15 );
      v16 = (const GfxViewInfo *)&v49;
      v17 = &prevFrameViewParms;
      depthRangeType = GFX_DEPTH_RANGE_VIEWMODEL;
      break;
    default:
      v16 = viewInfo;
      v17 = &viewInfo->viewParmsSet.frames[1].viewParms;
      depthRangeType = GFX_DEPTH_RANGE_SCENE;
      break;
  }
  v18 = GFX_VIEW_STATS_DECAL;
  if ( (unsigned int)(drawListType - 19) <= 1 )
  {
    if ( (rg.vrs || rg.vrsEmissiveOnly) && (AnyRt = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result), (R_RT_Handle::GetSurface(AnyRt)->m_rtFlags & 0x4000) != 0) || rg.halfResEmissive )
    {
      sceneEmissiveViewport = viewInfo->sceneEmissiveViewport;
      scissorEmissiveViewport = viewInfo->scissorEmissiveViewport;
      goto LABEL_23;
    }
  }
  else if ( rg.vrs )
  {
    v19 = R_RT_Group::GetAnyRt((R_RT_Group *)rtGroup, &result);
    if ( (R_RT_Handle::GetSurface(v19)->m_rtFlags & 0x4000) != 0 )
    {
      sceneEmissiveViewport = viewInfo->sceneGeoViewport;
      scissorEmissiveViewport = sceneEmissiveViewport;
LABEL_23:
      v22 = 2;
      goto LABEL_24;
    }
  }
  sceneEmissiveViewport = viewInfo->sceneViewport;
  scissorEmissiveViewport = viewInfo->scissorViewport;
  v22 = 1;
LABEL_24:
  viewport = sceneEmissiveViewport;
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v52);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  if ( !viewInfo->input.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 231, ASSERT_TYPE_ASSERT, "(viewInfo->input.data)", (const char *)&queryFormat, "viewInfo->input.data") )
    __debugbreak();
  v42.source = (GfxCmdBufSourceState *)&viewInfo->input.data->drawListIter[drawListType];
  if ( LODWORD(v42.source->matrices.matrix[3].m.m[2].v[1]) )
  {
    if ( R_DrawListStart(&state, &v52, viewInfo, (const GfxViewParms *)v16, v17, v41) )
    {
      source[0] = &v52;
      source[1] = (GfxCmdBufSourceState *)&state;
      v23 = v43[0];
      result = (R_RT_Handle)v43[0]->m_vrsRt;
      *(_OWORD *)v43 = *(_OWORD *)source;
      R_VRS_ApplyVariableRateShading(viewInfo, (GfxCmdBufContext *)v43, (R_RT_ColorHandle *)&result, drawListType);
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
            v24 = 1328i64;
            break;
          default:
            v24 = 1264i64;
            break;
        }
        v25 = source[0];
        source[0]->input.consts[7] = viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[v24 / 0x10];
        ++v25->constVersions[7];
        v26 = source[0];
        source[0]->input.consts[8] = *(vec4_t *)((char *)&viewInfo->viewParms.viewMatrix.m.row1 + v24);
        ++v26->constVersions[8];
        v27 = source[0];
        source[0]->input.consts[9] = *(vec4_t *)((char *)&viewInfo->viewParms.viewMatrix.m.row2 + v24);
        ++v27->constVersions[9];
        v28 = source[0];
        source[0]->input.consts[10] = *(vec4_t *)((char *)&viewInfo->viewParms.viewMatrix.m.row3 + v24);
        ++v28->constVersions[10];
      }
      R_GP_SetScenePassIndex(source[0], viewInfo->input.data, 0);
      R_SetPersistentTables((GfxCmdBufContext *)source, dataa[0], PERSISTENT_TABLE_SCENE);
      if ( drawListType < DRAWLIST_FRONTEND_COUNT )
      {
        if ( (unsigned int)(drawListType - 19) > 4 )
        {
          if ( (unsigned int)(drawListType - 24) <= 0x28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp", 83, ASSERT_TYPE_ASSERT, "(R_IsCameraDrawListType( drawListType ))", (const char *)&queryFormat, "R_IsCameraDrawListType( drawListType )") )
            __debugbreak();
          if ( drawListType != DRAWLIST_LIT_DECAL )
          {
            v18 = GFX_VIEW_STATS_OPAQUE;
            if ( (unsigned int)(drawListType - 12) <= 1 )
              v18 = GFX_VIEW_STATS_TRANS;
          }
        }
        else
        {
          v18 = GFX_VIEW_STATS_EMISSIVE;
        }
      }
      else
      {
        v18 = GFX_VIEW_STATS_DEPTH;
      }
      source[0]->viewStatsTarget = v18;
      v29 = 0;
      if ( drawListType < DRAWLIST_FRONTEND_COUNT )
      {
        if ( (unsigned int)(drawListType - 12) <= 1 || drawListType == DRAWLIST_DEPTH_HACK_TRANS )
        {
          v29 = GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
        }
        else
        {
          v29 = GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SSAO|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_DEFERRED|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
          if ( (unsigned int)(drawListType - 19) <= 4 )
            v29 = GLOBAL_LIGHTING_FLAG_EFFECT_LIGHTING|GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_VOLUMETRICS|GLOBAL_LIGHTING_FLAG_SPOT_SHADOW|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA;
        }
      }
      R_MaskSourceState(source[0], viewInfo, v29);
      *(_OWORD *)dataa = *(_OWORD *)source;
      R_SetRenderTargetsInternal((GfxCmdBufContext *)dataa, v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_camera.cpp(273)");
      v30 = R_RT_Group::GetAnyRt(v23, &result);
      v31 = v22 * R_RT_Handle::GetSurface(v30)->m_image.m_base.width;
      v32 = R_RT_Group::GetAnyRt(v23, &result);
      v33 = v22 * R_RT_Handle::GetSurface(v32)->m_image.m_base.height;
      v34 = (float)v22;
      R_SetViewportMSParams(source[0], v34);
      R_SetRenderTargetSize(source[0], v31, v33, GFX_USE_VIEWPORT_FOR_VIEW);
      R_SetViewportStruct(source[0], &viewport);
      R_Set3D(source[0]);
      *(_OWORD *)dataa = *(_OWORD *)source;
      R_HW_EnableScissor((GfxCmdBufContext *)dataa, &scissorEmissiveViewport);
      v35 = depthRangeType;
      if ( depthRangeType != LODWORD(source[1]->input.consts[47].v[0]) )
        R_ChangeDepthRange((GfxCmdBufState *)source[1], depthRangeType);
      if ( v35 == GFX_DEPTH_RANGE_VIEWMODEL )
        R_ChangeDepthHackNearClip(source[0], 1u);
      v36 = 0;
      if ( drawListType == DRAWLIST_PREPASS_EID_ONLY )
        v36 = 16;
      *((_BYTE *)source[0] + 11668) = *((_BYTE *)source[0] + 11668) & 0xEF | v36;
      v37 = 0;
      if ( v22 != 1 )
        v37 = 32;
      *((_BYTE *)source[0] + 11668) = *((_BYTE *)source[0] + 11668) & 0xDF | v37;
      if ( (*((_BYTE *)source[0] + 11668) & 0x20) != 0 )
      {
        *(_OWORD *)dataa = *(_OWORD *)source;
        R_HW_EnableMultiSample((GfxCmdBufContext *)dataa, viewInfo->input.data->frameCount);
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
      *(_OWORD *)dataa = *(_OWORD *)source;
      R_DrawSurfs_Sorted((GfxCmdBufContext *)dataa, (GfxDrawListIter *)v42.source, v9, drawListType);
      R_HW_DisableScissor((GfxCmdBufState *)source[1]);
      result = (R_RT_Handle)v23->m_vrsRt;
      v42 = *(GfxCmdBufContext *)source;
      R_VRS_DisabledVariableRateShading(viewInfo, &v42, (R_RT_ColorHandle *)&result);
      v42 = *(GfxCmdBufContext *)source;
      R_DrawListEnd(&v42, v41);
    }
  }
  else
  {
    v41->empty = 1;
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v52);
}

/*
==============
R_Draw_GetRtGroup
==============
*/
void R_Draw_GetRtGroup(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_Group *rtGroup)
{
  int v5; 
  __m256i m_mainSceneSSSAlbedoRt; 
  bool v7; 
  __m256i m_mainSceneSSSDiffuseRt; 
  __m256i m_mainSceneDepthRt; 
  unsigned int v10; 
  R_RT_ColorHandle v11; 
  __m256i v12; 
  __m256i v13; 
  R_RT_ColorHandle *v14; 
  signed __int64 v15; 
  __int64 v16; 
  __m256i m_mainSceneTangentFrameRt; 
  __m256i v19; 
  R_RT_ColorHandle *v20; 
  signed __int64 v21; 
  __int64 v22; 
  __m256i v24; 
  __m256i m_msaaSceneAlphaRt; 
  __m256i m_msaaSceneDepthRt; 
  R_RT_ColorHandle *p_m_mainSceneColorRt; 
  signed __int64 v28; 
  __int64 v29; 
  __m256i m_halfSceneAlphaRt; 
  __m256i m_halfSceneDepthRt; 
  R_RT_ColorHandle *v33; 
  signed __int64 v34; 
  __int64 v35; 
  __m256i m_mainSceneOverdrawRt; 
  __m256i m_mainSceneAlphaRt; 
  __m256i v39; 
  R_RT_ColorHandle *v40; 
  signed __int64 v41; 
  __int64 v42; 
  R_RT_ColorHandle v44; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle m_mainSceneColorRt; 
  __m256i v47; 
  __m256i v48; 

  if ( (unsigned int)drawListType <= DRAWLIST_PRE_SSS )
  {
    v5 = 164354;
    if ( _bittest(&v5, drawListType) )
    {
      m_mainSceneSSSAlbedoRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt;
      v7 = !viewInfo->sss.enabled;
      m_mainSceneColorRt = viewInfo->sceneRtInput.m_mainSceneColorRt;
      m_mainSceneSSSDiffuseRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt;
      v47 = m_mainSceneSSSAlbedoRt;
      m_mainSceneDepthRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
      v10 = 1;
      if ( !v7 )
        v10 = 3;
      v48 = m_mainSceneSSSDiffuseRt;
      v44 = (R_RT_ColorHandle)m_mainSceneDepthRt;
      R_RT_Group::Assign(rtGroup, v10, &m_mainSceneColorRt, (R_RT_DepthHandle *)&v44);
      rtGroup->m_vrsRt = *R_VRS_GetVrsTexture(&result);
      return;
    }
  }
  if ( (unsigned int)(drawListType - 19) <= 1 )
  {
    if ( rg.vrsEmissiveOnly )
    {
      m_msaaSceneAlphaRt = (__m256i)viewInfo->sceneRtInput.m_msaaSceneAlphaRt;
      m_mainSceneColorRt = viewInfo->sceneRtInput.m_msaaSceneColorRt;
      m_msaaSceneDepthRt = (__m256i)viewInfo->sceneRtInput.m_msaaSceneDepthRt;
      rtGroup->m_colorRtCount = 2;
      p_m_mainSceneColorRt = &m_mainSceneColorRt;
      v28 = (char *)rtGroup - (char *)&m_mainSceneColorRt;
      v47 = m_msaaSceneAlphaRt;
      v44 = (R_RT_ColorHandle)m_msaaSceneDepthRt;
      v29 = 2i64;
      do
      {
        result = *p_m_mainSceneColorRt;
        if ( (_WORD)_XMM0 )
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
        *(R_RT_ColorHandle *)((char *)&p_m_mainSceneColorRt->m_tracking.m_allocCounter + v28) = *p_m_mainSceneColorRt;
        ++p_m_mainSceneColorRt;
        --v29;
      }
      while ( v29 );
    }
    else if ( rg.halfResEmissive )
    {
      m_halfSceneAlphaRt = (__m256i)viewInfo->sceneRtInput.m_halfSceneAlphaRt;
      m_mainSceneColorRt = viewInfo->sceneRtInput.m_halfSceneColorRt;
      m_halfSceneDepthRt = (__m256i)viewInfo->sceneRtInput.m_halfSceneDepthRt;
      rtGroup->m_colorRtCount = 2;
      v33 = &m_mainSceneColorRt;
      v34 = (char *)rtGroup - (char *)&m_mainSceneColorRt;
      v47 = m_halfSceneAlphaRt;
      v44 = (R_RT_ColorHandle)m_halfSceneDepthRt;
      v35 = 2i64;
      do
      {
        result = *v33;
        if ( (_WORD)_XMM0 )
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
        *(R_RT_ColorHandle *)((char *)&v33->m_tracking.m_allocCounter + v34) = *v33;
        ++v33;
        --v35;
      }
      while ( v35 );
    }
    else
    {
      if ( rg.debugOverdrawOverlay )
      {
        m_mainSceneOverdrawRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneOverdrawRt;
        result = (R_RT_ColorHandle)viewInfo->sceneRtInput.m_mainSceneDepthRt;
        v44 = (R_RT_ColorHandle)m_mainSceneOverdrawRt;
        R_RT_Group::AssignColorDepth(rtGroup, &v44, (R_RT_DepthHandle *)&result);
        return;
      }
      m_mainSceneAlphaRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneAlphaRt;
      m_mainSceneColorRt = viewInfo->sceneRtInput.m_mainSceneColorRt;
      v39 = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
      rtGroup->m_colorRtCount = 2;
      v40 = &m_mainSceneColorRt;
      v41 = (char *)rtGroup - (char *)&m_mainSceneColorRt;
      v47 = m_mainSceneAlphaRt;
      v44 = (R_RT_ColorHandle)v39;
      v42 = 2i64;
      do
      {
        result = *v40;
        if ( (_WORD)_XMM0 )
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
        *(R_RT_ColorHandle *)((char *)&v40->m_tracking.m_allocCounter + v41) = *v40;
        ++v40;
        --v42;
      }
      while ( v42 );
    }
    goto LABEL_66;
  }
  if ( drawListType == DRAWLIST_DISTORT_EMISSIVE )
  {
    if ( rg.debugOverdrawOverlay )
    {
      v11 = viewInfo->sceneRtInput.m_mainSceneOverdrawRt;
      v44 = (R_RT_ColorHandle)viewInfo->sceneRtInput.m_mainSceneDepthRt;
      result = v11;
      R_RT_Group::AssignColorDepth(rtGroup, &result, (R_RT_DepthHandle *)&v44);
      return;
    }
    v12 = (__m256i)viewInfo->sceneRtInput.m_mainSceneAlphaRt;
    m_mainSceneColorRt = viewInfo->sceneRtInput.m_mainSceneColorRt;
    v13 = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
    rtGroup->m_colorRtCount = 2;
    v14 = &m_mainSceneColorRt;
    v15 = (char *)rtGroup - (char *)&m_mainSceneColorRt;
    v47 = v12;
    v44 = (R_RT_ColorHandle)v13;
    v16 = 2i64;
    do
    {
      result = *v14;
      if ( (_WORD)_XMM0 )
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
      *(R_RT_ColorHandle *)((char *)&v14->m_tracking.m_allocCounter + v15) = *v14;
      ++v14;
      --v16;
    }
    while ( v16 );
    goto LABEL_66;
  }
  if ( drawListType >= DRAWLIST_FRONTEND_COUNT )
  {
    m_mainSceneTangentFrameRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
    m_mainSceneColorRt = viewInfo->sceneRtInput.m_mainSceneEntityIDVelocityRt;
    v19 = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
    rtGroup->m_colorRtCount = 2;
    v20 = &m_mainSceneColorRt;
    v21 = (char *)rtGroup - (char *)&m_mainSceneColorRt;
    v47 = m_mainSceneTangentFrameRt;
    v44 = (R_RT_ColorHandle)v19;
    v22 = 2i64;
    do
    {
      result = *v20;
      if ( (_WORD)_XMM0 )
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
      *(R_RT_ColorHandle *)((char *)&v20->m_tracking.m_allocCounter + v21) = *v20;
      ++v20;
      --v22;
    }
    while ( v22 );
LABEL_66:
    rtGroup->m_depthRt = (R_RT_DepthHandle)v44;
    return;
  }
  if ( (unsigned int)(drawListType - 45) > 0x13 )
  {
    v24 = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
    result = (R_RT_ColorHandle)viewInfo->sceneRtInput.m_mainSceneDepthRt;
    v44 = (R_RT_ColorHandle)v24;
    R_RT_Group::AssignColorDepth(rtGroup, &v44, (R_RT_DepthHandle *)&result);
    rtGroup->m_vrsRt = *R_VRS_GetVrsTexture(&result);
  }
}

/*
==============
R_GetDepthHackViewParms
==============
*/
GfxViewParms *R_GetDepthHackViewParms(GfxViewParms *result, const GfxViewParms *sceneViewParms)
{
  result->camera = sceneViewParms->camera;
  result->camera.tanHalfFovX = sceneViewParms->camera.depthHackFoV.tanHalfFovX;
  result->camera.tanHalfFovY = sceneViewParms->camera.depthHackFoV.tanHalfFovY;
  result->subpixelOffset = sceneViewParms->subpixelOffset;
  R_SetupPerspectiveViewProjectionMatrices(result, R_ZPLANES_VIEWMODEL_ZNEAR);
  return result;
}

