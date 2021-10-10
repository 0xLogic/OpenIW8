/*
==============
CG_DrawHits_DrawText
==============
*/

void __fastcall CG_DrawHits_DrawText(const ScreenPlacement *scrPlace, const char *text, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color)
{
  ?CG_DrawHits_DrawText@@YAXPEBUScreenPlacement@@PEBDPEAUGfxFont@@MMHHMAEBTvec4_t@@@Z(scrPlace, text, font, x, y, horzAlign, vertAlign, scale, color);
}

/*
==============
CG_DrawHits_AnyActive
==============
*/

bool __fastcall CG_DrawHits_AnyActive(LocalClientNum_t localClientIndex)
{
  return ?CG_DrawHits_AnyActive@@YA_NW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawHits_OnDrawModel
==============
*/

void __fastcall CG_DrawHits_OnDrawModel(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxPlacement *placement, const XModel *model, unsigned int lod)
{
  ?CG_DrawHits_OnDrawModel@@YAXW4LocalClientNum_t@@IPEBUGfxPlacement@@PEBUXModel@@I@Z(localClientIndex, entNum, placement, model, lod);
}

/*
==============
CG_DrawHits_PreWork
==============
*/

void __fastcall CG_DrawHits_PreWork(LocalClientNum_t localClientIndex)
{
  ?CG_DrawHits_PreWork@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawHits_OnDrawSModel
==============
*/

void __fastcall CG_DrawHits_OnDrawSModel(LocalClientNum_t localClientIndex, unsigned int smodelInstanceIndex, unsigned int smodelCollectionIndex, const GfxPlacement *placement, float scale, const XModel *model, unsigned int lod)
{
  ?CG_DrawHits_OnDrawSModel@@YAXW4LocalClientNum_t@@IIPEBUGfxPlacement@@MPEBUXModel@@I@Z(localClientIndex, smodelInstanceIndex, smodelCollectionIndex, placement, scale, model, lod);
}

/*
==============
CG_DrawHits_OnDrawModelScaled
==============
*/

void __fastcall CG_DrawHits_OnDrawModelScaled(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxScaledPlacement *placement, const XModel *model, unsigned int lod)
{
  ?CG_DrawHits_OnDrawModelScaled@@YAXW4LocalClientNum_t@@IPEBUGfxScaledPlacement@@PEBUXModel@@I@Z(localClientIndex, entNum, placement, model, lod);
}

/*
==============
CG_DrawHits_GetHitColor
==============
*/

const vec4_t *__fastcall CG_DrawHits_GetHitColor(unsigned int hitIndex)
{
  return ?CG_DrawHits_GetHitColor@@YAAEBTvec4_t@@I@Z(hitIndex);
}

/*
==============
CG_DrawHits_IsActiveForAnyType
==============
*/

bool __fastcall CG_DrawHits_IsActiveForAnyType(LocalClientNum_t localClientIndex)
{
  return ?CG_DrawHits_IsActiveForAnyType@@YA_NW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawHits_SubmitText
==============
*/

void __fastcall CG_DrawHits_SubmitText(LocalClientNum_t localClientIndex)
{
  ?CG_DrawHits_SubmitText@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawHits_Activate
==============
*/

void __fastcall CG_DrawHits_Activate(LocalClientNum_t localClientIndex, CG_DrawHits_Type type, CG_DrawHits_Filter filter, CG_DrawHits_Options options)
{
  ?CG_DrawHits_Activate@@YAXW4LocalClientNum_t@@W4CG_DrawHits_Type@@W4CG_DrawHits_Filter@@W4CG_DrawHits_Options@@@Z(localClientIndex, type, filter, options);
}

/*
==============
CG_DrawHits_IsActive
==============
*/

bool __fastcall CG_DrawHits_IsActive(LocalClientNum_t localClientIndex, CG_DrawHits_Type type)
{
  return ?CG_DrawHits_IsActive@@YA_NW4LocalClientNum_t@@W4CG_DrawHits_Type@@@Z(localClientIndex, type);
}

/*
==============
CG_DrawHits_PostWork
==============
*/

void __fastcall CG_DrawHits_PostWork(LocalClientNum_t localClientIndex)
{
  ?CG_DrawHits_PostWork@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawHits_Activate
==============
*/
void CG_DrawHits_Activate(LocalClientNum_t localClientIndex, CG_DrawHits_Type type, CG_DrawHits_Filter filter, CG_DrawHits_Options options)
{
  __int64 v4; 
  bool v8; 
  CG_DrawHits_Context *v9; 
  float v10; 
  float v11; 
  double v12; 
  double v13; 
  CG_DrawHits_Filter v14; 
  __int64 v15; 
  __int64 v16; 
  char Src[4]; 
  int v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  float v24; 
  char v25[2740]; 

  v4 = type;
  if ( (unsigned int)type >= (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", type, 3) )
    __debugbreak();
  v8 = !s_CG_DrawHits_Contexts[v4].active;
  v9 = &s_CG_DrawHits_Contexts[v4];
  if ( !v8 && v9->localClientNum == localClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 86, ASSERT_TYPE_ASSERT, "(!CG_DrawHits_IsActive( localClientIndex, type ))", (const char *)&queryFormat, "!CG_DrawHits_IsActive( localClientIndex, type )") )
    __debugbreak();
  if ( (unsigned int)filter >= (Count|0x4) )
  {
    LODWORD(v16) = 7;
    LODWORD(v15) = filter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( filter ) < (unsigned)( CG_DrawHits_Filter::COUNT )", "filter doesn't index CG_DrawHits_Filter::COUNT\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v10 = 0.0;
  v11 = 0.0;
  if ( options == 1 )
  {
    v12 = *(double *)v9->rayStart.v;
    v10 = v9->rayStart.v[2];
    v13 = *(double *)v9->rayEnd.v;
    v11 = v9->rayEnd.v[2];
  }
  else
  {
    v12 = 0.0;
    v13 = 0.0;
  }
  Src[0] = 0;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v24 = 0.0;
  v23 = 0;
  v18 = 0;
  v19 = -1;
  memset_0(v25, 0, sizeof(v25));
  memcpy_0(v9, Src, sizeof(CG_DrawHits_Context));
  if ( options == 1 )
  {
    *(double *)v9->rayStart.v = v12;
    *(double *)v9->rayEnd.v = v13;
    v9->rayStart.v[2] = v10;
    v9->rayEnd.v[2] = v11;
  }
  if ( filter )
  {
    v14 = NormalSpace;
    v9->active = 1;
    v9->options = options;
    v9->localClientNum = localClientIndex;
    if ( filter < (Count|0x4) )
      v14 = filter;
    v9->maxLen = 1.0;
    v9->contentMask = s_CG_DrawHits_filterContentMasks[v14];
  }
}

/*
==============
CG_DrawHits_AddHit
==============
*/
void CG_DrawHits_AddHit(CG_DrawHits_Context *context, const CG_DrawHits_Hit *hit)
{
  float coord; 
  const CG_DrawHits_Hit *v3; 
  unsigned int hitCount; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  CG_DrawHits_ModelType modelType; 
  __int32 v10; 
  __int32 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  int v16; 
  CG_DrawHits_Hit *v19; 
  __int128 v20; 

  coord = hit->coord;
  v3 = hit;
  if ( (hit->coord < 0.0 || coord > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 234, ASSERT_TYPE_ASSERT, "( ( hit.coord >= 0.0f && hit.coord <= 1.0f ) )", "( hit.coord ) = %g", coord) )
    __debugbreak();
  hitCount = context->hitCount;
  v6 = 0;
  v7 = 0;
  if ( hitCount )
  {
    do
    {
      v8 = v7;
      modelType = context->hits[v8].modelType;
      if ( modelType == v3->modelType )
      {
        if ( modelType )
        {
          v10 = modelType - 1;
          if ( v10 && (v11 = v10 - 1) != 0 )
          {
            if ( v11 == 1 )
            {
              if ( context->hits[v8].modelInfo.superTerrain.surfaceIndex != v3->modelInfo.superTerrain.surfaceIndex )
                goto LABEL_21;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 179, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            {
              __debugbreak();
            }
          }
          else if ( context->hits[v8].modelInfo.model.entNum != v3->modelInfo.model.entNum )
          {
            goto LABEL_21;
          }
        }
        else if ( context->hits[v8].modelInfo.world.surface != v3->modelInfo.world.surface )
        {
          goto LABEL_21;
        }
        if ( context->hits[v8].material == v3->material && context->hits[v8].surfaceFlags == v3->surfaceFlags && context->hits[v8].contentFlags == v3->contentFlags )
        {
          _XMM0 = LODWORD(context->hits[v8].coord);
          __asm { vminss  xmm6, xmm0, dword ptr [rbx] }
          context->hits[v8].coord = *(float *)&_XMM6;
          context->hits[v8].hitPosition.v[0] = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * *(float *)&_XMM6) + context->rayStart.v[0];
          context->hits[v8].hitPosition.v[1] = (float)((float)(context->rayEnd.v[1] - context->rayStart.v[1]) * *(float *)&_XMM6) + context->rayStart.v[1];
          context->hits[v8].hitPosition.v[2] = (float)((float)(context->rayEnd.v[2] - context->rayStart.v[2]) * *(float *)&_XMM6) + context->rayStart.v[2];
          return;
        }
      }
LABEL_21:
      ++v7;
    }
    while ( v7 != hitCount );
  }
  v12 = 3i64;
  if ( hitCount != 6 )
  {
    ++context->hitCount;
LABEL_37:
    v19 = &context->hits[hitCount];
    do
    {
      v19 = (CG_DrawHits_Hit *)((char *)v19 + 128);
      v20 = *(_OWORD *)&v3->coord;
      v3 = (const CG_DrawHits_Hit *)((char *)v3 + 128);
      *(_OWORD *)v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq = v20;
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[4] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[4];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[12] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[12];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
      *(_OWORD *)&v19[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28] = *(_OWORD *)&v3[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28];
      --v12;
    }
    while ( v12 );
    *(_OWORD *)&v19->coord = *(_OWORD *)&v3->coord;
    *(_OWORD *)&v19->surfaceFlags = *(_OWORD *)&v3->surfaceFlags;
    *(_OWORD *)&v19->modelType = *(_OWORD *)&v3->modelType;
    *(_OWORD *)&v19->modelInfo.superTerrain.combinedAlbedoMap = *(_OWORD *)&v3->modelInfo.superTerrain.combinedAlbedoMap;
    *(_QWORD *)&v19->modelInfo.superTerrain.layerMaterialCount = *(_QWORD *)&v3->modelInfo.superTerrain.layerMaterialCount;
    return;
  }
  v13 = 2i64;
  if ( context->hits[0].coord < context->hits[1].coord )
    v6 = 1;
  hitCount = 5;
  if ( context->hits[2].coord <= context->hits[v6].coord )
    v13 = v6;
  v14 = 3;
  if ( context->hits[3].coord <= context->hits[v13].coord )
    v14 = v13;
  v15 = v14;
  v16 = 4;
  if ( context->hits[4].coord <= context->hits[v15].coord )
    v16 = v15;
  if ( context->hits[5].coord <= context->hits[v16].coord )
    hitCount = v16;
  if ( context->hits[hitCount].coord > v3->coord )
    goto LABEL_37;
}

/*
==============
CG_DrawHits_AddNearbyWorldHits
==============
*/
__int64 CG_DrawHits_AddNearbyWorldHits(CG_DrawHits_Context *context, const vec3_t *center, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, float hitCoord, unsigned int surfaceFlags, unsigned int contentFlags)
{
  float v8; 
  float v9; 
  float4 *v10; 
  float4 *v11; 
  float v12; 
  unsigned __int8 v15; 
  int v16; 
  __m128 v; 
  __m128 v18; 
  __m128 v19; 
  unsigned int *v20; 
  unsigned int v21; 
  GfxBackEndData *v22; 
  GfxWorldDrawVerts *v23; 
  const vec3_t *v24; 
  const unsigned __int16 *v25; 
  __int64 v26; 
  bool v30; 
  __m256i *p_hit; 
  int v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  int *v39; 
  __m256i v40; 
  __int128 v41; 
  __m256i v42; 
  __int64 v43; 
  unsigned int *surfCounts; 
  __int64 listCount; 
  unsigned int v47; 
  GfxSurface **surfLists; 
  int (__fastcall *allowSurf)(int, void *); 
  float4 *v50; 
  float4 *v51; 
  float4 v52; 
  float4 v53; 
  float4 v54; 
  int v55[6]; 
  __int64 v56; 
  int v57; 
  int v58; 
  unsigned int *v59; 
  char v60[416]; 
  CG_DrawHits_Hit hit; 
  float4 v62; 
  R_CollInfo collInfo; 
  __int64 v64[256]; 

  v8 = center->v[0];
  v9 = center->v[1];
  v10 = rayCoord;
  v51 = rayCoord;
  v11 = rayDelta;
  collInfo.sphere.origin.v[0] = v8;
  v12 = center->v[2];
  collInfo.sphere.origin.v[1] = v9;
  v50 = rayDelta;
  collInfo.sphere.origin.v[2] = v12;
  collInfo.sphere.radius = FLOAT_1_0;
  collInfo.sphere.radiusSq = FLOAT_1_0;
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 352, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  R_SetupSphereStaticGeo(&collInfo, &frontEndDataOut->transientDrawContext);
  surfLists = (GfxSurface **)v64;
  allowSurf = CG_DrawHits_AllowAllSurfacesCallback;
  if ( R_SphereSurfaces(&collInfo, &allowSurf, NULL, &surfLists, 0x100u, &v47, 1u) )
    R_WarnOncePerFrame(R_WARN_DRAW_HIT_SURF_ARRAY_TOO_SMALL);
  v15 = 0;
  v16 = 0;
  if ( v47 )
  {
    do
    {
      v = v10->v;
      v18 = v11->v;
      v19 = rayStart->v;
      v20 = (unsigned int *)v64[v16];
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 302, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
        __debugbreak();
      v21 = *((unsigned __int16 *)v20 + 14);
      v22 = frontEndDataOut;
      if ( v21 >= frontEndDataOut->transientDrawContext.zoneCount )
      {
        LODWORD(listCount) = frontEndDataOut->transientDrawContext.zoneCount;
        LODWORD(surfCounts) = *((unsigned __int16 *)v20 + 14);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", surfCounts, listCount) )
          __debugbreak();
      }
      v23 = v22->transientDrawContext.drawVertsPtr[(unsigned __int16)v21];
      if ( v23 )
      {
        if ( v20[3] + 3 * *((unsigned __int16 *)v20 + 5) > v23->indexCount )
        {
          LODWORD(listCount) = v23->indexCount;
          LODWORD(surfCounts) = v20[3] + 3 * *((unsigned __int16 *)v20 + 5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 310, ASSERT_TYPE_ASSERT, "( surface->tris.baseIndex + 3 * surface->tris.triCount ) <= ( drawVerts->indexCount )", "surface->tris.baseIndex + 3 * surface->tris.triCount not in [0, drawVerts->indexCount]\n\t%u not in [0, %u]", surfCounts, listCount) )
            __debugbreak();
        }
        v24 = (const vec3_t *)&v23->posData[*v20];
        v25 = &v23->indices[v20[3]];
        v26 = *((unsigned __int16 *)v20 + 5);
        v52.v = v;
        v53.v = v18;
        v54.v = v19;
        XSurface_IntersectRayWithTriangles(&v62, v24, v25, &v25[3 * v26], &v54, &v53, &v52, 1);
        _XMM0 = v62.v;
        __asm
        {
          vcmpltps xmm1, xmm0, xmm6
          vmovmskps eax, xmm1
        }
        v30 = (_EAX & 0xF) != 0;
      }
      else
      {
        v30 = 0;
      }
      if ( v30 )
      {
        v58 = 0;
        memset_0(v60, 0, 0x198ui64);
        p_hit = (__m256i *)&hit;
        *(float *)&v32 = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * hitCoord) + context->rayStart.v[0];
        v33 = (float)(context->rayEnd.v[1] - context->rayStart.v[1]) * hitCoord;
        v34 = context->rayEnd.v[2] - context->rayStart.v[2];
        v55[4] = surfaceFlags;
        v35 = 3i64;
        v55[1] = v32;
        *(float *)&v36 = v33 + context->rayStart.v[1];
        v55[5] = contentFlags;
        v37 = *((_QWORD *)v20 + 2);
        v55[2] = v36;
        *(float *)&v38 = (float)(v34 * hitCoord) + context->rayStart.v[2];
        v56 = v37;
        v39 = v55;
        v55[3] = v38;
        *(float *)v55 = hitCoord;
        v57 = 0;
        v59 = v20;
        do
        {
          p_hit += 4;
          v40 = *(__m256i *)v39;
          v41 = *((_OWORD *)v39 + 7);
          v39 += 32;
          p_hit[-4] = v40;
          p_hit[-3] = *((__m256i *)v39 - 3);
          p_hit[-2] = *((__m256i *)v39 - 2);
          *(_OWORD *)p_hit[-1].m256i_i8 = *((_OWORD *)v39 - 2);
          *(_OWORD *)&p_hit[-1].m256i_u64[2] = v41;
          --v35;
        }
        while ( v35 );
        *p_hit = *(__m256i *)v39;
        v42 = *((__m256i *)v39 + 1);
        v43 = *((_QWORD *)v39 + 8);
        p_hit[1] = v42;
        p_hit[2].m256i_i64[0] = v43;
        CG_DrawHits_AddHit(context, &hit);
        v15 = 1;
      }
      v11 = v50;
      v10 = v51;
      ++v16;
    }
    while ( v16 != v47 );
  }
  return v15;
}

/*
==============
CG_DrawHits_AllowAllSurfacesCallback
==============
*/
__int64 CG_DrawHits_AllowAllSurfacesCallback(int surfIndex, void *context)
{
  return 1i64;
}

/*
==============
CG_DrawHits_AnyActive
==============
*/
char CG_DrawHits_AnyActive(LocalClientNum_t localClientIndex)
{
  int v1; 
  CG_DrawHits_Context *v2; 
  bool v3; 
  __int64 v6; 
  __int64 v7; 

  v1 = 0;
  v2 = s_CG_DrawHits_Contexts;
  v3 = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      LODWORD(v7) = 3;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( v2->active && v2->localClientNum == localClientIndex )
      break;
    ++v1;
    ++v2;
    v3 = (unsigned int)v1 < 3;
    if ( v1 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
CG_DrawHits_CompareHits
==============
*/
__int64 CG_DrawHits_CompareHits(const void *e0, const void *e1)
{
  if ( *(float *)e0 >= *(float *)e1 )
    return *(float *)e0 > *(float *)e1;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
CG_DrawHits_DrawText
==============
*/
void CG_DrawHits_DrawText(const ScreenPlacement *scrPlace, const char *text, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color)
{
  const char *m_ptr; 
  int v13; 
  const char *v14; 
  _BYTE *i; 
  Mem_LargeLocal texta[3]; 

  Mem_LargeLocal::Mem_LargeLocal(texta, 0x1000ui64, "TextBuffer strippedText");
  m_ptr = (const char *)texta[0].m_ptr;
  v13 = *text;
  v14 = text + 1;
  for ( i = texta[0].m_ptr; v13; v13 = *v14++ )
  {
    if ( v13 == 94 && (unsigned int)(*v14 - 48) < 0xA )
      ++v14;
    else
      *i++ = v13;
  }
  *i = 0;
  UI_DrawText(scrPlace, m_ptr, 0x7FFFFFFF, font, x + 1.0, y + 1.0, horzAlign, vertAlign, scale, &s_CG_DrawHits_text_shadowColor, 0);
  UI_DrawText(scrPlace, text, 0x7FFFFFFF, font, x, y, horzAlign, vertAlign, scale, color, 0);
  Mem_LargeLocal::~Mem_LargeLocal(texta);
}

/*
==============
CG_DrawHits_GetHitColor
==============
*/
const vec4_t *CG_DrawHits_GetHitColor(unsigned int hitIndex)
{
  __int64 v1; 
  int v4; 

  v1 = hitIndex;
  if ( hitIndex >= 6 )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( hitIndex ) < (unsigned)( ( sizeof( *array_counter( s_CG_DrawHits_hitColors ) ) + 0 ) )", "hitIndex doesn't index ARRAY_COUNT( s_CG_DrawHits_hitColors )\n\t%i not in [0, %i)", hitIndex, v4) )
      __debugbreak();
  }
  return &s_CG_DrawHits_hitColors[v1];
}

/*
==============
CG_DrawHits_HitModel
==============
*/
void CG_DrawHits_HitModel(CG_DrawHits_Context *context, const TraceExtents *localRay, CG_DrawHits_ModelType modelType, CG_DrawHits_Hit::ModelInfo *modelInfo)
{
  const XModel *surface; 
  unsigned int lod; 
  const XModelLodInfo *LodInfo; 
  unsigned int v11; 
  Material *const *Skins; 
  int v13; 
  float maxLen; 
  float v15; 
  __int64 surfaceIndex; 
  const Material *material; 
  __int64 v18; 
  const Material *v19; 
  CG_DrawHits_Hit::ModelInfo *v20; 
  CG_DrawHits_Hit *v21; 
  __int64 v22; 
  __m256i v23; 
  __int128 v24; 
  CG_DrawHits_ModelType v25; 
  CG_DrawHits_Hit *ModelHit; 
  __m256i *p_hit; 
  __m256i v28; 
  __int128 v29; 
  __m256i v30; 
  __int64 v31; 
  CG_DrawHits_Hit *v32; 
  __int64 v33; 
  __m256i v34; 
  __int128 v35; 
  XSurface *surfaces; 
  CG_DrawHits_Hit hit; 
  CG_DrawHits_Hit result; 
  trace_t mem; 

  if ( !context->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 766, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  surface = (const XModel *)modelInfo->world.surface;
  lod = modelInfo->model.lod;
  if ( !modelInfo->world.surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 770, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !CM_TraceBox(localRay, &surface->bounds, 1.0) )
  {
    if ( !surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LodInfo = XModelGetLodInfo(surface, lod);
    if ( LodInfo->surfs )
    {
      if ( Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
      {
        v11 = XModelGetSurfaces(surface, &surfaces, lod);
        Skins = XModelGetSkins(surface, lod);
        v13 = context->contentMask & 0x813;
        if ( !v13 )
          goto LABEL_29;
        DebugWipe(&mem, 0x58ui64);
        maxLen = context->maxLen;
        if ( (maxLen < 0.0 || maxLen > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 798, ASSERT_TYPE_ASSERT, "( ( context.maxLen >= 0.0f && context.maxLen <= 1.0f ) )", "( context.maxLen ) = %g", maxLen) )
          __debugbreak();
        v15 = context->maxLen;
        mem.surfaceIndex = -1;
        mem.fraction = v15;
        if ( XModelTraceLineInternal(surface, &mem, &localRay->start, &localRay->end, v13, 1) >= 0 )
        {
          surfaceIndex = (unsigned int)mem.surfaceIndex;
          material = NULL;
          v18 = 3i64;
          if ( (unsigned int)surfaceIndex < v11 )
          {
            v19 = Material_FromHandle(Skins[surfaceIndex]);
            modelInfo->model.surfIndex = surfaceIndex;
            material = v19;
            if ( v19 )
            {
              v25 = modelType;
LABEL_26:
              ModelHit = CG_DrawHits_MakeModelHit(&result, context, mem.fraction, mem.surfaceFlags, mem.contents, v25, modelInfo, material);
              p_hit = (__m256i *)&hit;
              do
              {
                p_hit += 4;
                v28 = *(__m256i *)&ModelHit->coord;
                v29 = *(_OWORD *)&ModelHit->modelInfo.superTerrain.layerMaterials[5];
                ModelHit = (CG_DrawHits_Hit *)((char *)ModelHit + 128);
                p_hit[-4] = v28;
                p_hit[-3] = *(__m256i *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
                p_hit[-2] = *(__m256i *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
                *(_OWORD *)p_hit[-1].m256i_i8 = *(_OWORD *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
                *(_OWORD *)&p_hit[-1].m256i_u64[2] = v29;
                --v18;
              }
              while ( v18 );
              *p_hit = *(__m256i *)&ModelHit->coord;
              v30 = *(__m256i *)&ModelHit->modelType;
              v31 = *(_QWORD *)&ModelHit->modelInfo.superTerrain.layerMaterialCount;
              p_hit[1] = v30;
              p_hit[2].m256i_i64[0] = v31;
              Sys_EnterCriticalSection(CRITSECT_DRAW_HITS);
              CG_DrawHits_AddHit(context, &hit);
              Sys_LeaveCriticalSection(CRITSECT_DRAW_HITS);
              return;
            }
          }
          v20 = modelInfo;
          v21 = &hit;
          v22 = 3i64;
          do
          {
            v21 = (CG_DrawHits_Hit *)((char *)v21 + 128);
            v23 = *(__m256i *)&v20->world.surface;
            v24 = *(_OWORD *)&v20->superTerrain.layerMaterials[10];
            v20 = (CG_DrawHits_Hit::ModelInfo *)((char *)v20 + 128);
            *(__m256i *)v21[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq = v23;
            *(__m256i *)&v21[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(__m256i *)&v20[-1].superTerrain.layerMaterialsHimipRadiusInvSq[8];
            *(__m256i *)&v21[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(__m256i *)&v20[-1].superTerrain.layerMaterialsHimipRadiusInvSq[16];
            *(_OWORD *)&v21[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&v20[-1].superTerrain.layerMaterialsHimipRadiusInvSq[24];
            *(_OWORD *)&v21[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28] = v24;
            --v22;
          }
          while ( v22 );
          v25 = modelType;
          *(__m256i *)&v21->coord = *(__m256i *)&v20->world.surface;
          if ( !CG_DrawHits_HitRenderSurfaces(context, localRay, modelType, (CG_DrawHits_Hit::ModelInfo *)&hit) )
            goto LABEL_26;
        }
        else
        {
LABEL_29:
          v32 = &hit;
          v33 = 3i64;
          do
          {
            v32 = (CG_DrawHits_Hit *)((char *)v32 + 128);
            v34 = *(__m256i *)&modelInfo->world.surface;
            v35 = *(_OWORD *)&modelInfo->superTerrain.layerMaterials[10];
            modelInfo = (CG_DrawHits_Hit::ModelInfo *)((char *)modelInfo + 128);
            *(__m256i *)v32[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq = v34;
            *(__m256i *)&v32[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(__m256i *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[8];
            *(__m256i *)&v32[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(__m256i *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[16];
            *(_OWORD *)&v32[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[24];
            *(_OWORD *)&v32[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[28] = v35;
            --v33;
          }
          while ( v33 );
          *(__m256i *)&v32->coord = *(__m256i *)&modelInfo->world.surface;
          CG_DrawHits_HitRenderSurfaces(context, localRay, modelType, (CG_DrawHits_Hit::ModelInfo *)&hit);
        }
      }
    }
  }
}

/*
==============
CG_DrawHits_HitRenderSurfaces
==============
*/
__int64 CG_DrawHits_HitRenderSurfaces(CG_DrawHits_Context *context, const TraceExtents *localRay, CG_DrawHits_ModelType modelType, CG_DrawHits_Hit::ModelInfo *modelInfo)
{
  float v4; 
  const XModel *surface; 
  unsigned int lod; 
  __m128 v9; 
  float v12; 
  __m128 v14; 
  __m128 v17; 
  int v18; 
  Material *const *Skins; 
  unsigned __int8 v20; 
  __int64 v21; 
  Material *v22; 
  const XSurface *v23; 
  MaterialTechniqueSet *techniqueSet; 
  CG_DrawHits_Context *v28; 
  float v29; 
  CG_DrawHits_Context *v30; 
  unsigned int surfaceFlags; 
  CG_DrawHits_Hit *ModelHit; 
  __m256i *p_hit; 
  __int64 v34; 
  __m256i v35; 
  __int128 v36; 
  __m256i v37; 
  __int64 v38; 
  bool modelTypea; 
  const CG_DrawHits_Hit::ModelInfo *modelInfoa; 
  Material *material; 
  XSurface *surfaces; 
  CG_DrawHits_Hit::ModelInfo *v45; 
  CG_DrawHits_Context *contexta; 
  float4 context_8; 
  float4 v48; 
  float4 v49; 
  CG_DrawHits_Hit hit; 
  CG_DrawHits_Hit result; 
  __m128 v52; 
  float4 v53; 

  v4 = localRay->start.v[0];
  surface = (const XModel *)modelInfo->world.surface;
  lod = modelInfo->model.lod;
  v52.m128_i32[3] = 0;
  contexta = context;
  v45 = modelInfo;
  __asm { vbroadcastss xmm7, dword ptr [rcx+28h] }
  v9 = v52;
  v9.m128_f32[0] = v4;
  _XMM6 = v9;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rdx+44h], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+48h], 20h ; ' '
  }
  v12 = localRay->end.v[0];
  v52 = _XMM6;
  v52.m128_i32[3] = 0;
  v14 = v52;
  v14.m128_f32[0] = v12;
  _XMM3 = v14;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdx+54h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+58h], 20h ; ' '
  }
  v52 = _XMM3;
  v17 = _mm128_sub_ps(_XMM3, _XMM6);
  if ( !surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 723, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v18 = XModelGetSurfaces(surface, &surfaces, lod);
  Skins = XModelGetSkins(surface, lod);
  v20 = 0;
  v52.m128_u64[0] = (unsigned __int64)Skins;
  v21 = 0i64;
  if ( v18 )
  {
    do
    {
      v22 = Skins[v21];
      v23 = &surfaces[v21];
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
        __debugbreak();
      if ( !v22->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
        __debugbreak();
      if ( !*v22->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
        __debugbreak();
      if ( !v22->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
        __debugbreak();
      techniqueSet = v22->techniqueSet;
      context_8.v = _XMM7;
      v48.v = v17;
      modelTypea = techniqueSet->flags & 1;
      v49.v = _XMM6;
      XSurface_IntersectRayWithMeshInternal(&v53, v23, &v49, &v48, &context_8, modelTypea);
      _XMM1 = v53.v;
      __asm
      {
        vcmpltps xmm0, xmm1, xmm7
        vmovmskps eax, xmm0
      }
      if ( (_EAX & 0xF) != 0 )
      {
        material = v22;
        v28 = contexta;
        v29 = v53.v.m128_f32[0];
        v30 = contexta;
        modelInfoa = v45;
        surfaceFlags = surface->materialHandles[v21]->surfaceFlags;
        v45->model.surfIndex = v21;
        ModelHit = CG_DrawHits_MakeModelHit(&result, v30, v29, surfaceFlags, surface->contents, modelType, modelInfoa, material);
        p_hit = (__m256i *)&hit;
        v34 = 3i64;
        do
        {
          p_hit += 4;
          v35 = *(__m256i *)&ModelHit->coord;
          v36 = *(_OWORD *)&ModelHit->modelInfo.superTerrain.layerMaterials[5];
          ModelHit = (CG_DrawHits_Hit *)((char *)ModelHit + 128);
          p_hit[-4] = v35;
          p_hit[-3] = *(__m256i *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
          p_hit[-2] = *(__m256i *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
          *(_OWORD *)p_hit[-1].m256i_i8 = *(_OWORD *)&ModelHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
          *(_OWORD *)&p_hit[-1].m256i_u64[2] = v36;
          --v34;
        }
        while ( v34 );
        *p_hit = *(__m256i *)&ModelHit->coord;
        v37 = *(__m256i *)&ModelHit->modelType;
        v38 = *(_QWORD *)&ModelHit->modelInfo.superTerrain.layerMaterialCount;
        p_hit[1] = v37;
        p_hit[2].m256i_i64[0] = v38;
        Sys_EnterCriticalSection(CRITSECT_DRAW_HITS);
        CG_DrawHits_AddHit(v28, &hit);
        Sys_LeaveCriticalSection(CRITSECT_DRAW_HITS);
        v20 = 1;
      }
      Skins = (Material *const *)v52.m128_u64[0];
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (_DWORD)v21 != v18 );
  }
  return v20;
}

/*
==============
CG_DrawHits_IsActive
==============
*/
bool CG_DrawHits_IsActive(LocalClientNum_t localClientIndex, CG_DrawHits_Type type)
{
  __int64 v2; 
  int v6; 

  v2 = type;
  if ( (unsigned int)type >= (COUNT|DODGE) )
  {
    v6 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", type, v6) )
      __debugbreak();
  }
  return s_CG_DrawHits_Contexts[v2].active && s_CG_DrawHits_Contexts[v2].localClientNum == localClientIndex;
}

/*
==============
CG_DrawHits_IsActiveForAnyType
==============
*/
char CG_DrawHits_IsActiveForAnyType(LocalClientNum_t localClientIndex)
{
  int v1; 
  CG_DrawHits_Context *v2; 
  bool v3; 
  __int64 v6; 
  __int64 v7; 

  v1 = 0;
  v2 = s_CG_DrawHits_Contexts;
  v3 = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      LODWORD(v7) = 3;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( v2->active && v2->localClientNum == localClientIndex )
      break;
    ++v1;
    ++v2;
    v3 = (unsigned int)v1 < 3;
    if ( v1 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
CG_DrawHits_IsClearSolidSurface
==============
*/
bool CG_DrawHits_IsClearSolidSurface(unsigned int surfaceFlags)
{
  unsigned int v1; 
  infoParm_t *v3; 

  v1 = (surfaceFlags >> 19) & 0x3F;
  if ( v1 >= infoParms_length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 289, ASSERT_TYPE_ASSERT, "(surfaceTypeIndex < infoParms_length)", (const char *)&queryFormat, "surfaceTypeIndex < infoParms_length") )
    __debugbreak();
  if ( !v1 )
    return 0;
  v3 = &infoParms[v1];
  if ( !v3->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 293, ASSERT_TYPE_ASSERT, "(surfaceInfo->name)", (const char *)&queryFormat, "surfaceInfo->name") )
    __debugbreak();
  if ( ((v3->surfaceFlags >> 19) & 0x3F) != v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 294, ASSERT_TYPE_ASSERT, "(((byte) (((surfaceInfo->surfaceFlags) & (((1 << 6) - 1) << 19)) >> 19)) == surfaceTypeIndex)", (const char *)&queryFormat, "SURF_TYPEINDEX( surfaceInfo->surfaceFlags ) == surfaceTypeIndex") )
    __debugbreak();
  return v3->clearSolid != 0;
}

/*
==============
CG_DrawHits_MakeModelHit
==============
*/
CG_DrawHits_Hit *CG_DrawHits_MakeModelHit(CG_DrawHits_Hit *result, CG_DrawHits_Context *context, float hitCoord, unsigned int surfaceFlags, unsigned int contentFlags, CG_DrawHits_ModelType modelType, const CG_DrawHits_Hit::ModelInfo *modelInfo, const Material *material)
{
  __int64 v11; 
  CG_DrawHits_Hit::ModelInfo *p_modelInfo; 
  __int128 v14; 

  if ( modelType == World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 216, ASSERT_TYPE_ASSERT, "(modelType != CG_DrawHits_ModelType::World)", (const char *)&queryFormat, "modelType != CG_DrawHits_ModelType::World") )
    __debugbreak();
  memset_0(&result->hitPosition, 0, 0x1C4ui64);
  v11 = 3i64;
  result->coord = hitCoord;
  result->hitPosition.v[0] = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * hitCoord) + context->rayStart.v[0];
  result->hitPosition.v[1] = (float)((float)(context->rayEnd.v[1] - context->rayStart.v[1]) * hitCoord) + context->rayStart.v[1];
  result->hitPosition.v[2] = (float)((float)(context->rayEnd.v[2] - context->rayStart.v[2]) * hitCoord) + context->rayStart.v[2];
  result->contentFlags = contentFlags;
  result->material = material;
  p_modelInfo = &result->modelInfo;
  result->surfaceFlags = surfaceFlags;
  result->modelType = modelType;
  do
  {
    p_modelInfo = (CG_DrawHits_Hit::ModelInfo *)((char *)p_modelInfo + 128);
    v14 = *(_OWORD *)&modelInfo->world.surface;
    modelInfo = (const CG_DrawHits_Hit::ModelInfo *)((char *)modelInfo + 128);
    *(_OWORD *)p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq = v14;
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[4] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[4];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[8];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[12] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[12];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[16];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[20] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[20];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[24];
    *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[28] = *(_OWORD *)&modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[28];
    --v11;
  }
  while ( v11 );
  *(_OWORD *)&p_modelInfo->world.surface = *(_OWORD *)&modelInfo->world.surface;
  *(_OWORD *)&p_modelInfo->superTerrain.combinedNogMap = *(_OWORD *)&modelInfo->superTerrain.combinedNogMap;
  return result;
}

/*
==============
CG_DrawHits_MakeWorldHit
==============
*/
CG_DrawHits_Hit *CG_DrawHits_MakeWorldHit(CG_DrawHits_Hit *result, CG_DrawHits_Context *context, float hitCoord, unsigned int surfaceFlags, unsigned int contentFlags, const GfxSurface *surface)
{
  Material *material; 
  CG_DrawHits_Hit *v10; 

  memset_0(&result->hitPosition, 0, 0x1C4ui64);
  result->coord = hitCoord;
  result->hitPosition.v[0] = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * hitCoord) + context->rayStart.v[0];
  result->hitPosition.v[1] = (float)((float)(context->rayEnd.v[1] - context->rayStart.v[1]) * hitCoord) + context->rayStart.v[1];
  result->hitPosition.v[2] = (float)((float)(context->rayEnd.v[2] - context->rayStart.v[2]) * hitCoord) + context->rayStart.v[2];
  result->surfaceFlags = surfaceFlags;
  result->contentFlags = contentFlags;
  if ( surface )
    material = surface->material;
  else
    material = NULL;
  result->material = material;
  v10 = result;
  result->modelType = World;
  result->modelInfo.world.surface = surface;
  return v10;
}

/*
==============
CG_DrawHits_OnDrawModel
==============
*/
void CG_DrawHits_OnDrawModel(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxPlacement *placement, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v5; 
  int v6; 
  vec3_t *p_rayStart; 
  bool v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __m256i *v18; 
  const XModel **v19; 
  __int64 v20; 
  __m256i v21; 
  __int128 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const XModel *v26; 
  unsigned int v27; 
  float v28; 
  unsigned int v29; 
  CG_DrawHits_Hit::ModelInfo v30; 
  tmat43_t<vec3_t> outMat; 
  TraceExtents extents; 

  v5 = s_CG_DrawHits_Contexts;
  v6 = 0;
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  v10 = 1;
  do
  {
    if ( !v10 )
    {
      LODWORD(v24) = 3;
      LODWORD(v23) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( v5->active && v5->localClientNum == localClientIndex )
    {
      v14 = placement->quat.v[1];
      v15 = placement->quat.v[0];
      v16 = placement->quat.v[2];
      v17 = placement->quat.v[3];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) + (float)(v17 * v17)) - 1.0) & _xmm) >= 0.0020000001 )
      {
        LODWORD(v25) = lod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 878, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement->quat ))", "%s\n\tBad placement quat (%f %f %f %f ) for material drawing on model '%s' LOD%d at (%f %f %f).", "Vec4IsNormalized( placement->quat )", v15, v14, v16, v17, model->name, v25, placement->origin.v[0], placement->origin.v[1], placement->origin.v[2]) )
          __debugbreak();
      }
      CG_DrawHits_UnpackPlacement(&outMat, placement);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      CM_CalcTraceExtents(&extents);
      v18 = (__m256i *)&v30;
      v26 = model;
      v19 = &v26;
      v27 = lod;
      v20 = 3i64;
      v29 = entNum;
      v28 = FLOAT_1_0;
      do
      {
        v18 += 4;
        v21 = *(__m256i *)v19;
        v22 = *((_OWORD *)v19 + 7);
        v19 += 16;
        v18[-4] = v21;
        v18[-3] = *((__m256i *)v19 - 3);
        v18[-2] = *((__m256i *)v19 - 2);
        *(_OWORD *)v18[-1].m256i_i8 = *((_OWORD *)v19 - 2);
        *(_OWORD *)&v18[-1].m256i_u64[2] = v22;
        --v20;
      }
      while ( v20 );
      *v18 = *(__m256i *)v19;
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, DynamicModel, &v30);
    }
    ++v6;
    p_rayStart += 232;
    ++v5;
    v10 = (unsigned int)v6 < 3;
  }
  while ( v6 < 3 );
}

/*
==============
CG_DrawHits_OnDrawModelScaled
==============
*/
void CG_DrawHits_OnDrawModelScaled(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxScaledPlacement *placement, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v5; 
  int v6; 
  bool v8; 
  vec3_t *p_rayStart; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  const XModel **v18; 
  float scale; 
  __int64 v20; 
  __m256i *v21; 
  __m256i v22; 
  __int128 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  const XModel *v28; 
  unsigned int v29; 
  float v30; 
  unsigned int v31; 
  CG_DrawHits_Hit::ModelInfo v32; 
  TraceExtents extents; 
  tmat43_t<vec3_t> outMat; 

  v5 = s_CG_DrawHits_Contexts;
  v6 = 0;
  v8 = 1;
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  do
  {
    if ( !v8 )
    {
      LODWORD(v25) = 3;
      LODWORD(v24) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( v5->active && v5->localClientNum == localClientIndex )
    {
      v13 = placement->base.quat.v[1];
      v14 = placement->base.quat.v[0];
      v15 = placement->base.quat.v[2];
      v16 = placement->base.quat.v[3];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) + (float)(v16 * v16)) - 1.0) & _xmm) >= 0.0020000001 )
      {
        LODWORD(v26) = lod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 900, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement->base.quat ))", "%s\n\tBad placement quat (%f %f %f %f ) for material drawing on scaled model '%s' LOD%d at (%f %f %f).", "Vec4IsNormalized( placement->base.quat )", v14, v13, v15, v16, model->name, v26, placement->base.origin.v[0], placement->base.origin.v[1], placement->base.origin.v[2]) )
          __debugbreak();
      }
      v17 = 1.0 / placement->scale;
      CG_DrawHits_UnpackPlacement(&outMat, &placement->base);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      extents.start.v[0] = v17 * extents.start.v[0];
      extents.start.v[1] = v17 * extents.start.v[1];
      extents.start.v[2] = v17 * extents.start.v[2];
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      extents.end.v[0] = v17 * extents.end.v[0];
      extents.end.v[1] = v17 * extents.end.v[1];
      extents.end.v[2] = v17 * extents.end.v[2];
      CM_CalcTraceExtents(&extents);
      v18 = &v28;
      scale = placement->scale;
      v31 = entNum;
      v20 = 3i64;
      v30 = scale;
      v21 = (__m256i *)&v32;
      v28 = model;
      v29 = lod;
      do
      {
        v21 += 4;
        v22 = *(__m256i *)v18;
        v23 = *((_OWORD *)v18 + 7);
        v18 += 16;
        v21[-4] = v22;
        v21[-3] = *((__m256i *)v18 - 3);
        v21[-2] = *((__m256i *)v18 - 2);
        *(_OWORD *)v21[-1].m256i_i8 = *((_OWORD *)v18 - 2);
        *(_OWORD *)&v21[-1].m256i_u64[2] = v23;
        --v20;
      }
      while ( v20 );
      *v21 = *(__m256i *)v18;
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, DynamicModel, &v32);
    }
    ++v6;
    p_rayStart += 232;
    ++v5;
    v8 = (unsigned int)v6 < 3;
  }
  while ( v6 < 3 );
}

/*
==============
CG_DrawHits_OnDrawSModel
==============
*/
void CG_DrawHits_OnDrawSModel(LocalClientNum_t localClientIndex, unsigned int smodelInstanceIndex, unsigned int smodelCollectionIndex, const GfxPlacement *placement, float scale, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v7; 
  int v8; 
  vec3_t *p_rayStart; 
  bool v14; 
  const XModel **v16; 
  __int64 v17; 
  __m256i *v18; 
  __m256i v19; 
  __int128 v20; 
  __int64 v21; 
  __int64 v22; 
  const XModel *v23; 
  unsigned int v24; 
  float v25; 
  unsigned int v26; 
  unsigned int v27; 
  CG_DrawHits_Hit::ModelInfo v28; 
  TraceExtents extents; 
  tmat43_t<vec3_t> outMat; 

  v7 = s_CG_DrawHits_Contexts;
  v8 = 0;
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  v14 = 1;
  do
  {
    if ( !v14 )
    {
      LODWORD(v22) = 3;
      LODWORD(v21) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v7->active && v7->localClientNum == localClientIndex )
    {
      CG_DrawHits_UnpackPlacement(&outMat, placement);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      extents.start.v[0] = (float)(1.0 / scale) * extents.start.v[0];
      extents.start.v[1] = (float)(1.0 / scale) * extents.start.v[1];
      extents.start.v[2] = (float)(1.0 / scale) * extents.start.v[2];
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      extents.end.v[0] = (float)(1.0 / scale) * extents.end.v[0];
      extents.end.v[1] = (float)(1.0 / scale) * extents.end.v[1];
      extents.end.v[2] = (float)(1.0 / scale) * extents.end.v[2];
      CM_CalcTraceExtents(&extents);
      v16 = &v23;
      v23 = model;
      v17 = 3i64;
      v24 = lod;
      v18 = (__m256i *)&v28;
      v25 = FLOAT_1_0;
      v26 = smodelInstanceIndex;
      v27 = smodelCollectionIndex;
      do
      {
        v18 += 4;
        v19 = *(__m256i *)v16;
        v20 = *((_OWORD *)v16 + 7);
        v16 += 16;
        v18[-4] = v19;
        v18[-3] = *((__m256i *)v16 - 3);
        v18[-2] = *((__m256i *)v16 - 2);
        *(_OWORD *)v18[-1].m256i_i8 = *((_OWORD *)v16 - 2);
        *(_OWORD *)&v18[-1].m256i_u64[2] = v20;
        --v17;
      }
      while ( v17 );
      *v18 = *(__m256i *)v16;
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, StaticModel, &v28);
    }
    ++v8;
    p_rayStart += 232;
    ++v7;
    v14 = (unsigned int)v8 < 3;
  }
  while ( v8 < 3 );
}

/*
==============
CG_DrawHits_PostWork
==============
*/
void CG_DrawHits_PostWork(LocalClientNum_t localClientIndex)
{
  CG_DrawHits_Hit *hits; 
  int v2; 
  bool v3; 
  unsigned int v5; 
  LocalClientNum_t v6; 
  int v7; 
  tmat33_t<vec3_t> *p_axis; 
  __int64 depthTest; 
  __int64 duration; 
  vec3_t maxs; 
  vec3_t mins; 

  hits = s_CG_DrawHits_Contexts[0].hits;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(duration) = 3;
      LODWORD(depthTest) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", depthTest, duration) )
        __debugbreak();
    }
    if ( LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) && LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[22]) == localClientIndex )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 560, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 561, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
        __debugbreak();
      v5 = LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[31]);
      if ( v5 )
      {
        if ( v5 > 1 )
          qsort(hits, v5, 0x1C8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_DrawHits_CompareHits);
        v6 = LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[22]);
        mins.v[0] = FLOAT_N1_0;
        mins.v[1] = FLOAT_N1_0;
        mins.v[2] = FLOAT_N1_0;
        maxs.v[0] = FLOAT_1_0;
        maxs.v[1] = FLOAT_1_0;
        maxs.v[2] = FLOAT_1_0;
        v7 = 0;
        p_axis = &CG_GetLocalClientGlobals(v6)->refdef.view.axis;
        do
        {
          CL_AddDebugBox(p_axis, &hits[v7].hitPosition, &mins, &maxs, &s_CG_DrawHits_hitColors[v7], 1, 0, 0);
          ++v7;
        }
        while ( v7 != v5 );
      }
      LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) = 0;
    }
    ++v2;
    hits = (CG_DrawHits_Hit *)((char *)hits + 2784);
    v3 = (unsigned int)v2 < 3;
  }
  while ( v2 < 3 );
}

/*
==============
CG_DrawHits_PreWork
==============
*/
void CG_DrawHits_PreWork(LocalClientNum_t localClientIndex)
{
  int v1; 
  CG_DrawHits_Context *v2; 
  CG_DrawHits_Context *v3; 
  bool v4; 
  __int64 v6; 
  __int64 v7; 

  v1 = 0;
  v2 = s_CG_DrawHits_Contexts;
  v3 = s_CG_DrawHits_Contexts;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v7) = 3;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( v2->active && v2->localClientNum == localClientIndex )
      CG_DrawHits_PreWorkInternal((CG_DrawHits_Type)v1, v3);
    ++v1;
    ++v3;
    ++v2;
    v4 = (unsigned int)v1 < 3;
  }
  while ( v1 < 3 );
}

/*
==============
CG_DrawHits_PreWorkInternal
==============
*/
void CG_DrawHits_PreWorkInternal(CG_DrawHits_Type type, CG_DrawHits_Context *context)
{
  CG_DrawHits_Type v3; 
  int skipEntity; 
  float v5; 
  __int128 v6; 
  float v7; 
  __m128 v12; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int surfaceFlags; 
  int contents; 
  float v25; 
  float v26; 
  float v27; 
  __m128 v29; 
  char v32; 
  unsigned int v33; 
  unsigned int SurfaceCount; 
  float v35; 
  float v36; 
  float v37; 
  const Material *v38; 
  CG_DrawHits_Hit *p_hitModelInfoOut; 
  float v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  CG_DrawHits_Hit::ModelInfo *p_modelInfo; 
  __m256i v45; 
  __int128 v46; 
  CG_DrawHits_Hit *WorldHit; 
  __m256i *v48; 
  __int64 v49; 
  __m256i v50; 
  __int128 v51; 
  __m256i v52; 
  __int64 v53; 
  float4 v55; 
  float4 v56; 
  float4 v57; 
  CG_DrawHits_Hit v58; 
  CG_DrawHits_Hit hit; 
  __m128 start; 
  vec3_t end; 
  vec3_t hitPosition; 
  __m128 v63; 
  trace_t mem; 
  CG_DrawHits_Hit hitModelInfoOut; 

  v3 = type;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !context->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 447, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  CG_DrawHits_SetupContextTraceRay(context);
  skipEntity = context->contentMask & 0xFDFFBFFF;
  if ( skipEntity )
  {
    Physics_WaitForAllCommandsToFinish();
    v5 = context->rayEnd.v[0] - context->rayStart.v[0];
    v6 = LODWORD(context->rayEnd.v[1]);
    *(float *)&v6 = context->rayEnd.v[1] - context->rayStart.v[1];
    v7 = context->rayEnd.v[2] - context->rayStart.v[2];
    *(float *)&v6 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v5 * v5)) + (float)(v7 * v7));
    _XMM1 = v6;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    start.m128_i32[3] = 0;
    v12 = start;
    v12.m128_f32[0] = (float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * 4.0;
    _XMM12 = v12;
    __asm
    {
      vinsertps xmm12, xmm12, xmm5, 10h
      vinsertps xmm12, xmm12, xmm0, 20h ; ' '
    }
    start = _XMM12;
    v15 = 0.0;
    while ( 1 )
    {
      v16 = context->rayEnd.v[2];
      *(_QWORD *)end.v = *(_QWORD *)context->rayEnd.v;
      v17 = (float)((float)(end.v[0] - context->rayStart.v[0]) * v15) + context->rayStart.v[0];
      v18 = (float)((float)(context->rayEnd.v[1] - context->rayStart.v[1]) * v15) + context->rayStart.v[1];
      v19 = context->rayEnd.v[2] - context->rayStart.v[2];
      end.v[2] = v16;
      v20 = (float)(v19 * v15) + context->rayStart.v[2];
      start.m128_f32[2] = v20;
      start.m128_f32[0] = v17;
      start.m128_f32[1] = v18;
      if ( (LODWORD(v17) & 0x7F800000) == 2139095040 || (LODWORD(v18) & 0x7F800000) == 2139095040 || (LODWORD(v20) & 0x7F800000) == 2139095040 || (LODWORD(end.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(context->rayEnd.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(context->rayEnd.v[2]) & 0x7F800000) == 2139095040 )
        break;
      DebugWipe(&mem, 0x58ui64);
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * context->localClientNum + (s_CG_DrawHits_typeUsesDetailedPhysicsWorld[v3] != 0) + 3), &mem, (const vec3_t *)&start, &end, &bounds_origin, skipEntity, 0, skipEntity, 1, NULL, All);
      if ( mem.allsolid )
        return;
      v22 = (float)(mem.fraction / (float)(1.0 - v15)) + v15;
      v21 = v22;
      if ( v22 >= 1.0 )
        return;
      surfaceFlags = mem.surfaceFlags;
      if ( SLOBYTE(mem.surfaceFlags) >= 0 )
      {
        contents = mem.contents;
        v25 = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * v22) + context->rayStart.v[0];
        v26 = (float)((float)(context->rayEnd.v[1] - context->rayStart.v[1]) * v22) + context->rayStart.v[1];
        v27 = (float)((float)(context->rayEnd.v[2] - context->rayStart.v[2]) * v22) + context->rayStart.v[2];
        v63.m128_i32[3] = 0;
        v29 = v63;
        v29.m128_f32[0] = v25;
        _XMM1 = v29;
        __asm
        {
          vinsertps xmm1, xmm1, xmm5, 10h
          vinsertps xmm1, xmm1, xmm4, 20h ; ' '
        }
        v63 = _XMM1;
        v57.v = _mm128_add_ps(_mm128_mul_ps(_XMM12, (__m128)_xmm_bf000000bf000000bf000000bf000000), _XMM1);
        hitPosition.v[0] = v25;
        hitPosition.v[1] = v26;
        hitPosition.v[2] = v27;
        v55.v = (__m128)_xmm;
        v56.v = _XMM12;
        v32 = CG_DrawHits_AddNearbyWorldHits(context, &hitPosition, &v57, &v56, &v55, v21, mem.surfaceFlags, mem.contents);
        if ( !v32 && mem.hitType == TRACE_HITTYPE_ENTITY && mem.hitSubType == TRACE_HITSUBTYPE_NONE && mem.hitId == 2046 && !mem.modelIndex && !mem.surfaceIndex && (mem.contents & 1) != 0 && !CG_DrawHits_IsClearSolidSurface(mem.surfaceFlags) )
        {
          v33 = 0;
          SurfaceCount = R_ST_GetSurfaceCount();
          if ( SurfaceCount )
          {
            do
            {
              if ( R_ST_DrawHitIntersectsSurface(v33, &hitPosition, (CG_DrawHits_StModelInfo *)&hitModelInfoOut) )
              {
                v35 = (float)((float)(context->rayEnd.v[0] - context->rayStart.v[0]) * v21) + context->rayStart.v[0];
                v36 = context->rayEnd.v[1] - context->rayStart.v[1];
                v37 = context->rayEnd.v[2];
                v38 = NULL;
                *(_QWORD *)&hit.modelType = 3i64;
                p_hitModelInfoOut = &hitModelInfoOut;
                v40 = v36 * v21;
                if ( LODWORD(hitModelInfoOut.material) )
                  v38 = *(const Material **)&hitModelInfoOut.modelType;
                v41 = 3i64;
                v42 = v37 - context->rayStart.v[2];
                hit.hitPosition.v[0] = v35;
                hit.hitPosition.v[1] = v40 + context->rayStart.v[1];
                v43 = (float)(v42 * v21) + context->rayStart.v[2];
                hit.material = v38;
                p_modelInfo = &hit.modelInfo;
                hit.hitPosition.v[2] = v43;
                hit.coord = v21;
                hit.surfaceFlags = surfaceFlags;
                hit.contentFlags = contents;
                do
                {
                  p_modelInfo = (CG_DrawHits_Hit::ModelInfo *)((char *)p_modelInfo + 128);
                  v45 = *(__m256i *)&p_hitModelInfoOut->coord;
                  v46 = *(_OWORD *)&p_hitModelInfoOut->modelInfo.superTerrain.layerMaterials[5];
                  p_hitModelInfoOut = (CG_DrawHits_Hit *)((char *)p_hitModelInfoOut + 128);
                  *(__m256i *)p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq = v45;
                  *(__m256i *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[8] = *(__m256i *)&p_hitModelInfoOut[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
                  *(__m256i *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[16] = *(__m256i *)&p_hitModelInfoOut[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
                  *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[24] = *(_OWORD *)&p_hitModelInfoOut[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
                  *(_OWORD *)&p_modelInfo[-1].superTerrain.layerMaterialsHimipRadiusInvSq[28] = v46;
                  --v41;
                }
                while ( v41 );
                *(__m256i *)&p_modelInfo->world.surface = *(__m256i *)&p_hitModelInfoOut->coord;
                CG_DrawHits_AddHit(context, &hit);
                v32 = 1;
              }
              ++v33;
            }
            while ( v33 < SurfaceCount );
          }
          v3 = type;
        }
        if ( !v32 )
        {
          WorldHit = CG_DrawHits_MakeWorldHit(&hitModelInfoOut, context, v21, surfaceFlags, contents, NULL);
          v48 = (__m256i *)&v58;
          v49 = 3i64;
          do
          {
            v48 += 4;
            v50 = *(__m256i *)&WorldHit->coord;
            v51 = *(_OWORD *)&WorldHit->modelInfo.superTerrain.layerMaterials[5];
            WorldHit = (CG_DrawHits_Hit *)((char *)WorldHit + 128);
            v48[-4] = v50;
            v48[-3] = *(__m256i *)&WorldHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[8];
            v48[-2] = *(__m256i *)&WorldHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[16];
            *(_OWORD *)v48[-1].m256i_i8 = *(_OWORD *)&WorldHit[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[24];
            *(_OWORD *)&v48[-1].m256i_u64[2] = v51;
            --v49;
          }
          while ( v49 );
          *v48 = *(__m256i *)&WorldHit->coord;
          v52 = *(__m256i *)&WorldHit->modelType;
          v53 = *(_QWORD *)&WorldHit->modelInfo.superTerrain.layerMaterialCount;
          v48[1] = v52;
          v48[2].m256i_i64[0] = v53;
          CG_DrawHits_AddHit(context, &v58);
        }
        if ( (contents & 1) != 0 && !CG_DrawHits_IsClearSolidSurface(surfaceFlags) )
        {
          context->maxLen = v21;
          return;
        }
      }
      v15 = v21 + 0.00030517578;
      if ( (float)(v21 + 0.00030517578) > 0.99969482 )
        return;
    }
    Com_PrintWarning(0, "CG_DrawHits_PreWork NAN detected. Aborting trace. rayStart ( %f, %f, %f ), rayEnd ( %f, %f, %f ), rayStartCoord %f", v17, v18, v20, end.v[0], end.v[1], end.v[2], v15);
  }
}

/*
==============
CG_DrawHits_SetupContextTraceRay
==============
*/
void CG_DrawHits_SetupContextTraceRay(CG_DrawHits_Context *context)
{
  cg_t *LocalClientGlobals; 
  unsigned int refdefViewOrg_aab; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9[3]; 
  __int64 v10; 

  v10 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 423, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !context->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 424, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  if ( context->options != 1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)context->localClientNum);
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v9[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v9[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    v9[2] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    v4 = (float)(32768.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + *(float *)v9;
    v5 = *(float *)&v9[1];
    v6 = (float)(32768.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + *(float *)&v9[1];
    v7 = *(float *)&v9[2];
    v8 = (float)(32768.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + *(float *)&v9[2];
    context->rayStart.v[0] = *(float *)v9;
    context->rayStart.v[1] = v5;
    context->rayStart.v[2] = v7;
    context->rayEnd.v[0] = v4;
    context->rayEnd.v[1] = v6;
    context->rayEnd.v[2] = v8;
    memset(v9, 0, sizeof(v9));
  }
}

/*
==============
CG_DrawHits_SubmitText
==============
*/
void CG_DrawHits_SubmitText(LocalClientNum_t localClientIndex)
{
  int v2; 
  unsigned int *p_hitCount; 
  bool v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 643, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  p_hitCount = &s_CG_DrawHits_Contexts[0].hitCount;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v6) = 3;
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( *((_BYTE *)p_hitCount - 44) && *(p_hitCount - 9) == localClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 647, ASSERT_TYPE_ASSERT, "(!CG_DrawHits_IsActive( localClientIndex, static_cast<CG_DrawHits_Type>( type ) ))", (const char *)&queryFormat, "!CG_DrawHits_IsActive( localClientIndex, static_cast<CG_DrawHits_Type>( type ) )") )
      __debugbreak();
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        CG_DrawRange_DrawHitTable(localClientIndex, (const CG_DrawHits_Hit *)(p_hitCount + 1), *p_hitCount);
      }
      else if ( v2 == 2 )
      {
        Stream_Debug_DrawMetricsHitTable(localClientIndex, (const CG_DrawHits_Hit *)(p_hitCount + 1), *p_hitCount);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 666, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      {
        __debugbreak();
      }
    }
    else
    {
      CG_DrawMaterial_DrawHitTable(localClientIndex, (const CG_DrawHits_Hit *)(p_hitCount + 1), *p_hitCount);
    }
    ++v2;
    p_hitCount += 696;
    v4 = (unsigned int)v2 < 3;
  }
  while ( v2 < 3 );
}

/*
==============
CG_DrawHits_UnpackPlacement
==============
*/
void CG_DrawHits_UnpackPlacement(tmat43_t<vec3_t> *outMat, const GfxPlacement *placement)
{
  float v2; 
  float v3; 
  float v5; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 

  v2 = placement->quat.v[1];
  v3 = placement->quat.v[0];
  v5 = placement->quat.v[2];
  v7 = placement->quat.v[3];
  v8 = (float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v3, v2, v5, v7, fsqrt(v8)) )
    __debugbreak();
  v9 = placement->quat.v[1];
  v10 = placement->quat.v[2];
  v11 = placement->quat.v[3];
  v12 = 2.0 * placement->quat.v[0];
  v13 = v12 * placement->quat.v[0];
  v14 = v9 * v12;
  v15 = v9 * (float)(v9 * 2.0);
  v16 = v10 * (float)(v9 * 2.0);
  v17 = v11 * (float)(v9 * 2.0);
  v18 = v11 * (float)(v10 * 2.0);
  v19 = v10 * (float)(v10 * 2.0);
  outMat->m[0].v[0] = 1.0 - (float)(v19 + v15);
  outMat->m[0].v[1] = v18 + v14;
  outMat->m[0].v[2] = (float)(v10 * v12) - v17;
  outMat->m[1].v[0] = v14 - v18;
  outMat->m[1].v[1] = 1.0 - (float)(v19 + v13);
  outMat->m[1].v[2] = v16 + (float)(v11 * v12);
  outMat->m[2].v[0] = v17 + (float)(v10 * v12);
  outMat->m[2].v[1] = v16 - (float)(v11 * v12);
  outMat->m[2].v[2] = 1.0 - (float)(v15 + v13);
  outMat->m[3].v[0] = placement->origin.v[0];
  outMat->m[3].v[1] = placement->origin.v[1];
  outMat->m[3].v[2] = placement->origin.v[2];
}

