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
  __int64 v7; 
  bool v11; 
  float v13; 
  float v14; 
  CG_DrawHits_Filter v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char Src[4]; 
  int v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  char v33[2740]; 

  v7 = type;
  if ( (unsigned int)type >= (COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", type, 3) )
    __debugbreak();
  v11 = !s_CG_DrawHits_Contexts[v7].active;
  _RBX = &s_CG_DrawHits_Contexts[v7];
  if ( !v11 && _RBX->localClientNum == localClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 86, ASSERT_TYPE_ASSERT, "(!CG_DrawHits_IsActive( localClientIndex, type ))", (const char *)&queryFormat, "!CG_DrawHits_IsActive( localClientIndex, type )") )
    __debugbreak();
  if ( (unsigned int)filter >= (Count|0x4) )
  {
    LODWORD(v22) = 7;
    LODWORD(v21) = filter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( filter ) < (unsigned)( CG_DrawHits_Filter::COUNT )", "filter doesn't index CG_DrawHits_Filter::COUNT\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  v13 = 0.0;
  __asm { vmovaps [rsp+0B78h+var_28], xmm6 }
  v14 = 0.0;
  __asm { vmovaps [rsp+0B78h+var_38], xmm7 }
  v23 = 0i64;
  v24 = 0i64;
  if ( options == 1 )
  {
    __asm { vmovsd  xmm6, qword ptr [rbx+10h] }
    v13 = _RBX->rayStart.v[2];
    __asm { vmovsd  xmm7, qword ptr [rbx+1Ch] }
    v14 = _RBX->rayEnd.v[2];
  }
  else
  {
    __asm
    {
      vmovsd  xmm6, [rsp+0B78h+var_B38]
      vmovsd  xmm7, [rsp+0B78h+var_B28]
    }
  }
  Src[0] = 0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  __asm { vmovss  [rsp+0B78h+var_AF0], xmm0 }
  v31 = 0;
  v26 = 0;
  v27 = -1;
  memset_0(v33, 0, sizeof(v33));
  memcpy_0(_RBX, Src, sizeof(CG_DrawHits_Context));
  if ( options == 1 )
  {
    __asm
    {
      vmovsd  qword ptr [rbx+10h], xmm6
      vmovsd  qword ptr [rbx+1Ch], xmm7
    }
    _RBX->rayStart.v[2] = v13;
    _RBX->rayEnd.v[2] = v14;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0B78h+var_38]
    vmovaps xmm6, [rsp+0B78h+var_28]
  }
  if ( filter )
  {
    v20 = NormalSpace;
    _RBX->active = 1;
    _RBX->options = options;
    _RBX->localClientNum = localClientIndex;
    if ( filter < (Count|0x4) )
      v20 = filter;
    _RBX->maxLen = 1.0;
    _RBX->contentMask = s_CG_DrawHits_filterContentMasks[v20];
  }
}

/*
==============
CG_DrawHits_AddHit
==============
*/
void CG_DrawHits_AddHit(CG_DrawHits_Context *context, const CG_DrawHits_Hit *hit)
{
  unsigned int hitCount; 
  unsigned int v10; 
  CG_DrawHits_ModelType modelType; 
  __int32 v13; 
  __int32 v14; 
  __int64 v15; 
  __int64 v18; 
  char v19; 
  unsigned int v22; 
  __int64 v25; 
  unsigned int v26; 
  double v60; 

  __asm
  {
    vmovss  xmm1, dword ptr [rdx]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  _RBX = hit;
  _RDI = context;
  __asm
  {
    vcomiss xmm1, cs:__real@3f800000
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+58h+var_30], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 234, ASSERT_TYPE_ASSERT, "( ( hit.coord >= 0.0f && hit.coord <= 1.0f ) )", "( hit.coord ) = %g", v60) )
    __debugbreak();
  hitCount = _RDI->hitCount;
  v10 = 0;
  if ( hitCount )
  {
    do
    {
      _RSI = v10;
      modelType = _RDI->hits[_RSI].modelType;
      if ( modelType == _RBX->modelType )
      {
        if ( modelType )
        {
          v13 = modelType - 1;
          if ( v13 && (v14 = v13 - 1) != 0 )
          {
            if ( v14 == 1 )
            {
              if ( _RDI->hits[_RSI].modelInfo.superTerrain.surfaceIndex != _RBX->modelInfo.superTerrain.surfaceIndex )
                goto LABEL_19;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 179, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            {
              __debugbreak();
            }
          }
          else if ( _RDI->hits[_RSI].modelInfo.model.entNum != _RBX->modelInfo.model.entNum )
          {
            goto LABEL_19;
          }
        }
        else if ( _RDI->hits[_RSI].modelInfo.world.surface != _RBX->modelInfo.world.surface )
        {
          goto LABEL_19;
        }
        if ( _RDI->hits[_RSI].material == _RBX->material && _RDI->hits[_RSI].surfaceFlags == _RBX->surfaceFlags && _RDI->hits[_RSI].contentFlags == _RBX->contentFlags )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+rdi+30h]
            vmovaps [rsp+58h+var_28], xmm6
            vminss  xmm6, xmm0, dword ptr [rbx]
            vmovss  dword ptr [rsi+rdi+30h], xmm6
            vmovss  xmm0, dword ptr [rdi+1Ch]
            vsubss  xmm1, xmm0, dword ptr [rdi+10h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+10h]
            vmovss  dword ptr [rsi+rdi+34h], xmm3
            vmovss  xmm0, dword ptr [rdi+20h]
            vsubss  xmm1, xmm0, dword ptr [rdi+14h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+14h]
            vmovss  dword ptr [rsi+rdi+38h], xmm3
            vmovss  xmm0, dword ptr [rdi+24h]
            vsubss  xmm1, xmm0, dword ptr [rdi+18h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+18h]
            vmovaps xmm6, [rsp+58h+var_28]
            vmovss  dword ptr [rsi+rdi+3Ch], xmm3
          }
          return;
        }
      }
LABEL_19:
      ++v10;
    }
    while ( v10 != hitCount );
  }
  v15 = 3i64;
  if ( hitCount != 6 )
  {
    ++_RDI->hitCount;
LABEL_33:
    _RDX = (__int64)&_RDI->hits[hitCount];
    do
    {
      _RDX += 128i64;
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      _RBX = (const CG_DrawHits_Hit *)((char *)_RBX + 128);
      __asm
      {
        vmovups xmmword ptr [rdx-80h], xmm0
        vmovups xmm1, xmmword ptr [rbx-70h]
        vmovups xmmword ptr [rdx-70h], xmm1
        vmovups xmm0, xmmword ptr [rbx-60h]
        vmovups xmmword ptr [rdx-60h], xmm0
        vmovups xmm1, xmmword ptr [rbx-50h]
        vmovups xmmword ptr [rdx-50h], xmm1
        vmovups xmm0, xmmword ptr [rbx-40h]
        vmovups xmmword ptr [rdx-40h], xmm0
        vmovups xmm1, xmmword ptr [rbx-30h]
        vmovups xmmword ptr [rdx-30h], xmm1
        vmovups xmm0, xmmword ptr [rbx-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmm1, xmmword ptr [rbx-10h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v15;
    }
    while ( v15 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rdx+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rdx+30h], xmm1
    }
    *(_QWORD *)(_RDX + 64) = *(_QWORD *)&_RBX->modelInfo.superTerrain.layerMaterialCount;
    return;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vcomiss xmm0, dword ptr [rdi+1F8h]
    vmovss  xmm0, dword ptr [rdi+3C0h]
  }
  v18 = 2i64;
  hitCount = 5;
  _RCX = 0i64;
  __asm
  {
    vcomiss xmm0, dword ptr [rcx+rdi+30h]
    vmovss  xmm0, dword ptr [rdi+588h]
  }
  if ( ((456 * (unsigned __int128)0) >> 64 != 0) | v19 )
    v18 = 0i64;
  v22 = 3;
  _RAX = 456 * v18;
  __asm
  {
    vcomiss xmm0, dword ptr [rax+rdi+30h]
    vmovss  xmm0, dword ptr [rdi+750h]
  }
  if ( ((unsigned __int128)(456 * (__int128)v18) >> 64 != 0) | v19 )
    v22 = v18;
  v25 = v22;
  v26 = 4;
  _RAX = 456 * v25;
  __asm
  {
    vcomiss xmm0, dword ptr [rax+rdi+30h]
    vmovss  xmm0, dword ptr [rdi+918h]
  }
  if ( ((unsigned __int128)(456 * (__int128)v25) >> 64 != 0) | v19 )
    v26 = v25;
  _RAX = 456i64 * v26;
  __asm { vcomiss xmm0, dword ptr [rax+rdi+30h] }
  if ( ((456 * (unsigned __int128)v26) >> 64 != 0) | v19 )
    hitCount = v26;
  _RCX = 456i64 * hitCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rdi+30h]
    vcomiss xmm0, dword ptr [rbx]
  }
  if ( !(((456 * (unsigned __int128)hitCount) >> 64 != 0) | v19) )
    goto LABEL_33;
}

/*
==============
CG_DrawHits_AddNearbyWorldHits
==============
*/
__int64 CG_DrawHits_AddNearbyWorldHits(CG_DrawHits_Context *context, const vec3_t *center, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, float hitCoord, unsigned int surfaceFlags, unsigned int contentFlags)
{
  unsigned __int8 v20; 
  int v21; 
  unsigned int *v26; 
  unsigned int v27; 
  GfxBackEndData *v28; 
  GfxWorldDrawVerts *v29; 
  const vec3_t *v30; 
  const unsigned __int16 *v31; 
  __int64 v32; 
  bool v36; 
  __int64 v47; 
  __int64 v49; 
  __int64 v60; 
  unsigned int *surfCounts; 
  __int64 listCount; 
  unsigned int v68; 
  GfxSurface **surfLists; 
  int (__fastcall *allowSurf)(int, void *); 
  float4 *v71; 
  float4 *v72; 
  float4 v73; 
  float4 v74; 
  float4 v75; 
  int v76[6]; 
  __int64 v77; 
  int v78; 
  int v79; 
  unsigned int *v80; 
  char v81[416]; 
  CG_DrawHits_Hit hit; 
  float4 v83; 
  R_CollInfo collInfo; 
  __int64 v85[256]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
  }
  _RSI = rayCoord;
  v72 = rayCoord;
  _RBX = rayDelta;
  __asm
  {
    vmovss  dword ptr [rbp+4C50h+collInfo.sphere.origin], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rbp+4C50h+collInfo.sphere.origin+4], xmm1
    vmovss  xmm1, cs:__real@3f800000
  }
  _R12 = context;
  v71 = rayDelta;
  __asm
  {
    vmovss  dword ptr [rbp+4C50h+collInfo.sphere.origin+8], xmm0
    vmovss  [rbp+4C50h+collInfo.sphere.radius], xmm1
    vmovss  [rbp+4C50h+collInfo.sphere.radiusSq], xmm1
  }
  _R13 = rayStart;
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 352, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  R_SetupSphereStaticGeo(&collInfo, &frontEndDataOut->transientDrawContext);
  surfLists = (GfxSurface **)v85;
  allowSurf = CG_DrawHits_AllowAllSurfacesCallback;
  if ( R_SphereSurfaces(&collInfo, &allowSurf, NULL, &surfLists, 0x100u, &v68, 1u) )
    R_WarnOncePerFrame(R_WARN_DRAW_HIT_SURF_ARRAY_TOO_SMALL);
  v20 = 0;
  v21 = 0;
  if ( v68 )
  {
    __asm
    {
      vmovaps [rsp+4D50h+var_40], xmm6
      vmovaps [rsp+4D50h+var_50], xmm7
      vmovaps [rsp+4D50h+var_60], xmm8
      vmovaps [rsp+4D50h+var_70], xmm9
      vmovss  xmm9, [rbp+4C50h+arg_28]
    }
    do
    {
      __asm
      {
        vmovups xmm6, xmmword ptr [rsi]
        vmovups xmm7, xmmword ptr [rbx]
        vmovups xmm8, xmmword ptr [r13+0]
      }
      v26 = (unsigned int *)v85[v21];
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 302, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
        __debugbreak();
      v27 = *((unsigned __int16 *)v26 + 14);
      v28 = frontEndDataOut;
      if ( v27 >= frontEndDataOut->transientDrawContext.zoneCount )
      {
        LODWORD(listCount) = frontEndDataOut->transientDrawContext.zoneCount;
        LODWORD(surfCounts) = *((unsigned __int16 *)v26 + 14);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", surfCounts, listCount) )
          __debugbreak();
      }
      v29 = v28->transientDrawContext.drawVertsPtr[(unsigned __int16)v27];
      if ( v29 )
      {
        if ( v26[3] + 3 * *((unsigned __int16 *)v26 + 5) > v29->indexCount )
        {
          LODWORD(listCount) = v29->indexCount;
          LODWORD(surfCounts) = v26[3] + 3 * *((unsigned __int16 *)v26 + 5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 310, ASSERT_TYPE_ASSERT, "( surface->tris.baseIndex + 3 * surface->tris.triCount ) <= ( drawVerts->indexCount )", "surface->tris.baseIndex + 3 * surface->tris.triCount not in [0, drawVerts->indexCount]\n\t%u not in [0, %u]", surfCounts, listCount) )
            __debugbreak();
        }
        v30 = (const vec3_t *)&v29->posData[*v26];
        v31 = &v29->indices[v26[3]];
        v32 = *((unsigned __int16 *)v26 + 5);
        __asm
        {
          vmovdqa [rsp+4D50h+var_4CE0], xmm6
          vmovdqa [rbp+4C50h+var_4CD0], xmm7
          vmovdqa [rbp+4C50h+var_4CC0], xmm8
        }
        XSurface_IntersectRayWithTriangles(&v83, v30, v31, &v31[3 * v32], &v75, &v74, &v73, 1);
        __asm
        {
          vmovups xmm0, [rbp+4C50h+var_4910]
          vcmpltps xmm1, xmm0, xmm6
          vmovmskps eax, xmm1
        }
        v36 = (_EAX & 0xF) != 0;
      }
      else
      {
        v36 = 0;
      }
      if ( v36 )
      {
        v79 = 0;
        memset_0(v81, 0, 0x198ui64);
        _RCX = &hit;
        __asm
        {
          vmovss  xmm0, dword ptr [r12+1Ch]
          vsubss  xmm1, xmm0, dword ptr [r12+10h]
          vmovss  xmm0, dword ptr [r12+20h]
          vmulss  xmm2, xmm1, xmm9
          vaddss  xmm3, xmm2, dword ptr [r12+10h]
          vsubss  xmm1, xmm0, dword ptr [r12+14h]
          vmovss  xmm0, dword ptr [r12+24h]
          vmulss  xmm2, xmm1, xmm9
          vsubss  xmm1, xmm0, dword ptr [r12+18h]
        }
        v76[4] = surfaceFlags;
        v47 = 3i64;
        __asm
        {
          vmovss  [rbp+4C50h+var_4CAC], xmm3
          vaddss  xmm3, xmm2, dword ptr [r12+14h]
        }
        v76[5] = contentFlags;
        v49 = *((_QWORD *)v26 + 2);
        __asm
        {
          vmulss  xmm2, xmm1, xmm9
          vmovss  [rbp+4C50h+var_4CA8], xmm3
          vaddss  xmm3, xmm2, dword ptr [r12+18h]
        }
        v77 = v49;
        _RAX = v76;
        __asm
        {
          vmovss  [rbp+4C50h+var_4CA4], xmm3
          vmovss  [rbp+4C50h+var_4CB0], xmm9
        }
        v78 = 0;
        v80 = v26;
        do
        {
          _RCX = (CG_DrawHits_Hit *)((char *)_RCX + 128);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
          }
          _RAX += 32;
          __asm
          {
            vmovups ymmword ptr [rcx-80h], ymm0
            vmovups ymm0, ymmword ptr [rax-60h]
            vmovups ymmword ptr [rcx-60h], ymm0
            vmovups ymm0, ymmword ptr [rax-40h]
            vmovups ymmword ptr [rcx-40h], ymm0
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v47;
        }
        while ( v47 );
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
        }
        v60 = *((_QWORD *)_RAX + 8);
        __asm { vmovups ymmword ptr [rcx+20h], ymm0 }
        *(_QWORD *)&_RCX->modelInfo.superTerrain.layerMaterialCount = v60;
        CG_DrawHits_AddHit(_R12, &hit);
        v20 = 1;
      }
      _RBX = v71;
      _RSI = v72;
      ++v21;
    }
    while ( v21 != v68 );
    __asm
    {
      vmovaps xmm9, [rsp+4D50h+var_70]
      vmovaps xmm8, [rsp+4D50h+var_60]
      vmovaps xmm7, [rsp+4D50h+var_50]
      vmovaps xmm6, [rsp+4D50h+var_40]
    }
  }
  return v20;
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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx]
    vcomiss xmm0, xmm1
  }
  if ( v2 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm0, xmm1 }
  return 0i64;
}

/*
==============
CG_DrawHits_DrawText
==============
*/

void __fastcall CG_DrawHits_DrawText(const ScreenPlacement *scrPlace, const char *text, GfxFont *font, double x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color)
{
  const char *m_ptr; 
  int v18; 
  const char *v19; 
  _BYTE *i; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  Mem_LargeLocal texta[3]; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm3
  }
  Mem_LargeLocal::Mem_LargeLocal(texta, 0x1000ui64, "TextBuffer strippedText");
  m_ptr = (const char *)texta[0].m_ptr;
  v18 = *text;
  v19 = text + 1;
  for ( i = texta[0].m_ptr; v18; v18 = *v19++ )
  {
    if ( v18 == 94 && (unsigned int)(*v19 - 48) < 0xA )
      ++v19;
    else
      *i++ = v18;
  }
  *i = 0;
  __asm
  {
    vmovss  xmm7, [rsp+0B8h+y]
    vaddss  xmm1, xmm7, cs:__real@3f800000
    vaddss  xmm2, xmm8, cs:__real@3f800000
    vmovss  xmm6, [rsp+0B8h+scale]
    vmovss  [rsp+0B8h+var_78], xmm6
    vmovss  [rsp+0B8h+var_90], xmm1
    vmovss  [rsp+0B8h+var_98], xmm2
  }
  UI_DrawText(scrPlace, m_ptr, 0x7FFFFFFF, font, v29, v31, horzAlign, vertAlign, v33, &s_CG_DrawHits_text_shadowColor, 0);
  __asm
  {
    vmovss  [rsp+0B8h+var_78], xmm6
    vmovss  [rsp+0B8h+var_90], xmm7
    vmovss  [rsp+0B8h+var_98], xmm8
  }
  UI_DrawText(scrPlace, text, 0x7FFFFFFF, font, v30, v32, horzAlign, vertAlign, v34, color, 0);
  Mem_LargeLocal::~Mem_LargeLocal(texta);
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  unsigned int v13; 
  Material *const *Skins; 
  int v15; 
  char v16; 
  char v17; 
  __int64 surfaceIndex; 
  const Material *material; 
  __int64 v24; 
  const Material *v25; 
  __int64 v28; 
  CG_DrawHits_ModelType v35; 
  __int64 v46; 
  __int64 v48; 
  double permitDoubleSided; 
  XSurface *surfaces; 
  CG_DrawHits_Hit hit; 
  CG_DrawHits_Hit result; 
  trace_t mem; 

  _RBX = modelInfo;
  _R14 = context;
  if ( !context->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 766, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  surface = (const XModel *)_RBX->world.surface;
  lod = _RBX->model.lod;
  if ( !_RBX->world.surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 770, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  __asm { vmovss  xmm2, cs:__real@3f800000; fraction }
  if ( !CM_TraceBox(localRay, &surface->bounds, *(float *)&_XMM2) )
  {
    if ( !surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LodInfo = XModelGetLodInfo(surface, lod);
    if ( LodInfo->surfs )
    {
      if ( Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
      {
        v13 = XModelGetSurfaces(surface, &surfaces, lod);
        Skins = XModelGetSkins(surface, lod);
        v15 = _R14->contentMask & 0x813;
        if ( !v15 )
          goto LABEL_29;
        DebugWipe(&mem, 0x58ui64);
        __asm
        {
          vmovss  xmm1, dword ptr [r14+28h]
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm1, xmm0
        }
        if ( v16 )
          goto LABEL_16;
        __asm { vcomiss xmm1, cs:__real@3f800000 }
        if ( !(v16 | v17) )
        {
LABEL_16:
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vmovsd  qword ptr [rsp+4A8h+permitDoubleSided], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 798, ASSERT_TYPE_ASSERT, "( ( context.maxLen >= 0.0f && context.maxLen <= 1.0f ) )", "( context.maxLen ) = %g", permitDoubleSided) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [r14+28h] }
        mem.surfaceIndex = -1;
        __asm { vmovss  [rsp+4A8h+mem], xmm0 }
        if ( XModelTraceLineInternal(surface, &mem, &localRay->start, &localRay->end, v15, 1) >= 0 )
        {
          surfaceIndex = (unsigned int)mem.surfaceIndex;
          material = NULL;
          v24 = 3i64;
          if ( (unsigned int)surfaceIndex < v13 )
          {
            v25 = Material_FromHandle(Skins[surfaceIndex]);
            _RBX->model.surfIndex = surfaceIndex;
            material = v25;
            if ( v25 )
            {
              v35 = modelType;
LABEL_26:
              __asm { vmovss  xmm2, [rsp+4A8h+mem]; hitCoord }
              _RAX = CG_DrawHits_MakeModelHit(&result, _R14, *(float *)&_XMM2, mem.surfaceFlags, mem.contents, v35, _RBX, material);
              _RDX = &hit;
              do
              {
                _RDX = (CG_DrawHits_Hit *)((char *)_RDX + 128);
                __asm
                {
                  vmovups ymm0, ymmword ptr [rax]
                  vmovups xmm1, xmmword ptr [rax+70h]
                }
                _RAX = (CG_DrawHits_Hit *)((char *)_RAX + 128);
                __asm
                {
                  vmovups ymmword ptr [rdx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rax-60h]
                  vmovups ymmword ptr [rdx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rax-40h]
                  vmovups ymmword ptr [rdx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rax-20h]
                  vmovups xmmword ptr [rdx-20h], xmm0
                  vmovups xmmword ptr [rdx-10h], xmm1
                }
                --v24;
              }
              while ( v24 );
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rdx], ymm0
                vmovups ymm0, ymmword ptr [rax+20h]
              }
              v46 = *(_QWORD *)&_RAX->modelInfo.superTerrain.layerMaterialCount;
              __asm { vmovups ymmword ptr [rdx+20h], ymm0 }
              *(_QWORD *)&_RDX->modelInfo.superTerrain.layerMaterialCount = v46;
              Sys_EnterCriticalSection((CriticalSection)((unsigned __int8)v24 + 6));
              CG_DrawHits_AddHit(_R14, &hit);
              Sys_LeaveCriticalSection((CriticalSection)((unsigned __int8)v24 + 6));
              return;
            }
          }
          _RCX = _RBX;
          _R8 = &hit;
          v28 = 3i64;
          do
          {
            _R8 = (CG_DrawHits_Hit *)((char *)_R8 + 128);
            __asm
            {
              vmovups ymm0, ymmword ptr [rcx]
              vmovups xmm1, xmmword ptr [rcx+70h]
            }
            _RCX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RCX + 128);
            __asm
            {
              vmovups ymmword ptr [r8-80h], ymm0
              vmovups ymm0, ymmword ptr [rcx-60h]
              vmovups ymmword ptr [r8-60h], ymm0
              vmovups ymm0, ymmword ptr [rcx-40h]
              vmovups ymmword ptr [r8-40h], ymm0
              vmovups xmm0, xmmword ptr [rcx-20h]
              vmovups xmmword ptr [r8-20h], xmm0
              vmovups xmmword ptr [r8-10h], xmm1
            }
            --v28;
          }
          while ( v28 );
          __asm { vmovups ymm0, ymmword ptr [rcx] }
          v35 = modelType;
          __asm { vmovups ymmword ptr [r8], ymm0 }
          if ( !CG_DrawHits_HitRenderSurfaces(_R14, localRay, modelType, (CG_DrawHits_Hit::ModelInfo *)&hit) )
            goto LABEL_26;
        }
        else
        {
LABEL_29:
          _RAX = &hit;
          v48 = 3i64;
          do
          {
            _RAX = (CG_DrawHits_Hit *)((char *)_RAX + 128);
            __asm
            {
              vmovups ymm0, ymmword ptr [rbx]
              vmovups xmm1, xmmword ptr [rbx+70h]
            }
            _RBX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RBX + 128);
            __asm
            {
              vmovups ymmword ptr [rax-80h], ymm0
              vmovups ymm0, ymmword ptr [rbx-60h]
              vmovups ymmword ptr [rax-60h], ymm0
              vmovups ymm0, ymmword ptr [rbx-40h]
              vmovups ymmword ptr [rax-40h], ymm0
              vmovups xmm0, xmmword ptr [rbx-20h]
              vmovups xmmword ptr [rax-20h], xmm0
              vmovups xmmword ptr [rax-10h], xmm1
            }
            --v48;
          }
          while ( v48 );
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rax], ymm0
          }
          CG_DrawHits_HitRenderSurfaces(_R14, localRay, modelType, (CG_DrawHits_Hit::ModelInfo *)&hit);
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
  const XModel *surface; 
  unsigned int lod; 
  int v22; 
  Material *const *Skins; 
  unsigned __int8 v24; 
  __int64 v25; 
  Material *v26; 
  const XSurface *v27; 
  MaterialTechniqueSet *techniqueSet; 
  CG_DrawHits_Context *v32; 
  CG_DrawHits_Context *v34; 
  unsigned int surfaceFlags; 
  __int64 v38; 
  __int64 v46; 
  __int64 v47; 
  bool modelTypea; 
  const CG_DrawHits_Hit::ModelInfo *modelInfoa; 
  Material *material; 
  XSurface *surfaces; 
  CG_DrawHits_Hit::ModelInfo *v57; 
  CG_DrawHits_Context *contexta; 
  float4 context_8; 
  float4 v60; 
  float4 v61; 
  CG_DrawHits_Hit hit; 
  CG_DrawHits_Hit result; 
  __int128 v64; 
  float4 v65; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovss  xmm0, dword ptr [rdx+40h]
  }
  surface = (const XModel *)modelInfo->world.surface;
  lod = modelInfo->model.lod;
  HIDWORD(v64) = 0;
  contexta = context;
  v57 = modelInfo;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+330h]
    vbroadcastss xmm7, dword ptr [rcx+28h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rdx+44h], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+48h], 20h ; ' '
    vmovss  xmm0, dword ptr [rdx+50h]
    vmovups xmmword ptr [rbp+330h], xmm6
  }
  HIDWORD(v64) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+330h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdx+54h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+58h], 20h ; ' '
    vmovups xmmword ptr [rbp+330h], xmm3
    vsubps  xmm8, xmm3, xmm6
  }
  if ( !surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 723, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v22 = XModelGetSurfaces(surface, &surfaces, lod);
  Skins = XModelGetSkins(surface, lod);
  v24 = 0;
  *(_QWORD *)&v64 = Skins;
  v25 = 0i64;
  if ( v22 )
  {
    do
    {
      v26 = Skins[v25];
      v27 = &surfaces[v25];
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
        __debugbreak();
      if ( !v26->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
        __debugbreak();
      if ( !*v26->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
        __debugbreak();
      if ( !v26->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
        __debugbreak();
      techniqueSet = v26->techniqueSet;
      __asm
      {
        vmovdqa xmmword ptr [rsp+4D0h+context+8], xmm7
        vmovdqa xmmword ptr [rsp+4D0h+var_468+8], xmm8
      }
      modelTypea = techniqueSet->flags & 1;
      __asm { vmovdqa [rbp+3D0h+var_450], xmm6 }
      XSurface_IntersectRayWithMeshInternal(&v65, v27, &v61, &v60, &context_8, modelTypea);
      __asm
      {
        vmovups xmm1, [rbp+3D0h+var_90]
        vcmpltps xmm0, xmm1, xmm7
        vmovmskps eax, xmm0
      }
      if ( (_EAX & 0xF) != 0 )
      {
        material = v26;
        v32 = contexta;
        __asm { vmovaps xmm2, xmm1; hitCoord }
        v34 = contexta;
        modelInfoa = v57;
        surfaceFlags = surface->materialHandles[v25]->surfaceFlags;
        v57->model.surfIndex = v25;
        _RAX = CG_DrawHits_MakeModelHit(&result, v34, *(float *)&_XMM2, surfaceFlags, surface->contents, modelType, modelInfoa, material);
        _RCX = &hit;
        v38 = 3i64;
        do
        {
          _RCX = (CG_DrawHits_Hit *)((char *)_RCX + 128);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
          }
          _RAX = (CG_DrawHits_Hit *)((char *)_RAX + 128);
          __asm
          {
            vmovups ymmword ptr [rcx-80h], ymm0
            vmovups ymm0, ymmword ptr [rax-60h]
            vmovups ymmword ptr [rcx-60h], ymm0
            vmovups ymm0, ymmword ptr [rax-40h]
            vmovups ymmword ptr [rcx-40h], ymm0
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v38;
        }
        while ( v38 );
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
        }
        v46 = *(_QWORD *)&_RAX->modelInfo.superTerrain.layerMaterialCount;
        __asm { vmovups ymmword ptr [rcx+20h], ymm0 }
        *(_QWORD *)&_RCX->modelInfo.superTerrain.layerMaterialCount = v46;
        Sys_EnterCriticalSection((CriticalSection)((unsigned __int8)v38 + 6));
        CG_DrawHits_AddHit(v32, &hit);
        Sys_LeaveCriticalSection(CRITSECT_DRAW_HITS);
        v24 = 1;
      }
      Skins = (Material *const *)v64;
      v25 = (unsigned int)(v25 + 1);
    }
    while ( (_DWORD)v25 != v22 );
  }
  v47 = v24;
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
  }
  return v47;
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

CG_DrawHits_Hit *__fastcall CG_DrawHits_MakeModelHit(CG_DrawHits_Hit *result, CG_DrawHits_Context *context, double hitCoord, unsigned int surfaceFlags, unsigned int contentFlags, CG_DrawHits_ModelType modelType, const CG_DrawHits_Hit::ModelInfo *modelInfo, const Material *material)
{
  __int64 v13; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = context;
  _RBX = result;
  __asm { vmovaps xmm6, xmm2 }
  if ( modelType == World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 216, ASSERT_TYPE_ASSERT, "(modelType != CG_DrawHits_ModelType::World)", (const char *)&queryFormat, "modelType != CG_DrawHits_ModelType::World") )
    __debugbreak();
  memset_0(&_RBX->hitPosition, 0, 0x1C4ui64);
  v13 = 3i64;
  _RCX = modelInfo;
  __asm
  {
    vmovss  dword ptr [rbx], xmm6
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+10h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+10h]
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  xmm0, dword ptr [rsi+20h]
    vsubss  xmm1, xmm0, dword ptr [rsi+14h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+14h]
    vmovss  dword ptr [rbx+8], xmm3
    vmovss  xmm0, dword ptr [rsi+24h]
    vsubss  xmm1, xmm0, dword ptr [rsi+18h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+18h]
    vmovss  dword ptr [rbx+0Ch], xmm3
  }
  _RBX->contentFlags = contentFlags;
  _RBX->material = material;
  _RAX = &_RBX->modelInfo;
  _RBX->surfaceFlags = surfaceFlags;
  _RBX->modelType = modelType;
  do
  {
    _RAX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = (const CG_DrawHits_Hit::ModelInfo *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v13;
  }
  while ( v13 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rax+10h], xmm1
  }
  return _RBX;
}

/*
==============
CG_DrawHits_MakeWorldHit
==============
*/

CG_DrawHits_Hit *__fastcall CG_DrawHits_MakeWorldHit(CG_DrawHits_Hit *result, CG_DrawHits_Context *context, double hitCoord, unsigned int surfaceFlags, unsigned int contentFlags, const GfxSurface *surface)
{
  Material *material; 
  CG_DrawHits_Hit *v25; 

  _RBX = context;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RSI = result;
  __asm { vmovaps xmm6, xmm2 }
  memset_0(&result->hitPosition, 0, 0x1C4ui64);
  __asm
  {
    vmovss  dword ptr [rsi], xmm6
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vsubss  xmm1, xmm0, dword ptr [rbx+10h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbx+10h]
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  xmm0, dword ptr [rbx+20h]
    vsubss  xmm1, xmm0, dword ptr [rbx+14h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rsi+8], xmm3
    vmovss  xmm0, dword ptr [rbx+24h]
    vsubss  xmm1, xmm0, dword ptr [rbx+18h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbx+18h]
    vmovss  dword ptr [rsi+0Ch], xmm3
  }
  _RSI->surfaceFlags = surfaceFlags;
  _RSI->contentFlags = contentFlags;
  if ( surface )
    material = surface->material;
  else
    material = NULL;
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  _RSI->material = material;
  v25 = _RSI;
  _RSI->modelType = World;
  _RSI->modelInfo.world.surface = surface;
  return v25;
}

/*
==============
CG_DrawHits_OnDrawModel
==============
*/
void CG_DrawHits_OnDrawModel(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxPlacement *placement, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v11; 
  int v15; 
  vec3_t *p_rayStart; 
  bool v19; 
  __int64 v48; 
  __int64 v61; 
  __int64 v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  __int64 v67; 
  double v68; 
  double v69; 
  double v70; 
  const XModel *v71; 
  unsigned int v72; 
  unsigned int v74; 
  CG_DrawHits_Hit::ModelInfo v75; 
  tmat43_t<vec3_t> outMat; 
  TraceExtents extents; 
  char v80; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  v11 = s_CG_DrawHits_Contexts;
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm10, cs:__real@3b03126f
  }
  v15 = 0;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  v19 = 1;
  _RBP = placement;
  do
  {
    if ( !v19 )
    {
      LODWORD(v62) = 3;
      LODWORD(v61) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    if ( v11->active && v11->localClientNum == localClientIndex )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+4]
        vmovss  xmm6, dword ptr [rbp+0]
        vmovss  xmm4, dword ptr [rbp+8]
        vmovss  xmm7, dword ptr [rbp+0Ch]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm0
        vsubss  xmm1, xmm2, xmm8
        vandps  xmm1, xmm1, xmm9
        vcomiss xmm1, xmm10
        vmovss  xmm0, dword ptr [rbp+18h]
        vmovss  xmm1, dword ptr [rbp+14h]
        vmovss  xmm2, dword ptr [rbp+10h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+4E8h+var_478], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+4E8h+var_480], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+4E8h+var_488], xmm2
      }
      LODWORD(v67) = lod;
      __asm
      {
        vcvtss2sd xmm3, xmm7, xmm7
        vmovsd  [rsp+4E8h+var_4A0], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+4E8h+var_4A8], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+4E8h+var_4B0], xmm5
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+4E8h+var_4B8], xmm6
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 878, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement->quat ))", "%s\n\tBad placement quat (%f %f %f %f ) for material drawing on model '%s' LOD%d at (%f %f %f).", "Vec4IsNormalized( placement->quat )", v63, v64, v65, v66, model->name, v67, v68, v69, v70) )
        __debugbreak();
      CG_DrawHits_UnpackPlacement(&outMat, _RBP);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      CM_CalcTraceExtents(&extents);
      _RAX = &v75;
      v71 = model;
      _RCX = &v71;
      v72 = lod;
      v48 = 3i64;
      v74 = entNum;
      __asm { vmovss  [rsp+4E8h+var_458], xmm8 }
      do
      {
        _RAX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX += 16;
        __asm
        {
          vmovups ymmword ptr [rax-80h], ymm0
          vmovups ymm0, ymmword ptr [rcx-60h]
          vmovups ymmword ptr [rax-60h], ymm0
          vmovups ymm0, ymmword ptr [rcx-40h]
          vmovups ymmword ptr [rax-40h], ymm0
          vmovups xmm0, xmmword ptr [rcx-20h]
          vmovups xmmword ptr [rax-20h], xmm0
          vmovups xmmword ptr [rax-10h], xmm1
        }
        --v48;
      }
      while ( v48 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rax], ymm0
      }
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, (CG_DrawHits_ModelType)((unsigned __int8)v48 + 2), &v75);
    }
    ++v15;
    p_rayStart += 232;
    ++v11;
    v19 = (unsigned int)v15 < 3;
  }
  while ( v15 < 3 );
  __asm
  {
    vmovaps xmm7, [rsp+4E8h+var_58]
    vmovaps xmm6, [rsp+4E8h+var_48]
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DrawHits_OnDrawModelScaled
==============
*/
void CG_DrawHits_OnDrawModelScaled(LocalClientNum_t localClientIndex, unsigned int entNum, const GfxScaledPlacement *placement, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v11; 
  int v15; 
  bool v17; 
  vec3_t *p_rayStart; 
  __int64 v54; 
  __int64 v68; 
  __int64 v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  __int64 v74; 
  double v75; 
  double v76; 
  double v77; 
  const XModel *v79; 
  unsigned int v80; 
  unsigned int v82; 
  CG_DrawHits_Hit::ModelInfo v83; 
  TraceExtents extents; 
  tmat43_t<vec3_t> outMat; 
  char v87; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  v11 = s_CG_DrawHits_Contexts;
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm10, cs:__real@3b03126f
  }
  v15 = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v17 = 1;
  __asm { vmovaps xmmword ptr [r11-58h], xmm7 }
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  _RDI = placement;
  do
  {
    if ( !v17 )
    {
      LODWORD(v69) = 3;
      LODWORD(v68) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v68, v69) )
        __debugbreak();
    }
    if ( v11->active && v11->localClientNum == localClientIndex )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+4]
        vmovss  xmm6, dword ptr [rdi]
        vmovss  xmm4, dword ptr [rdi+8]
        vmovss  xmm7, dword ptr [rdi+0Ch]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm0
        vsubss  xmm1, xmm2, xmm8
        vandps  xmm1, xmm1, xmm9
        vcomiss xmm1, xmm10
        vmovss  xmm0, dword ptr [rdi+18h]
        vmovss  xmm1, dword ptr [rdi+14h]
        vmovss  xmm2, dword ptr [rdi+10h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+4F0h+var_480], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+4F0h+var_488], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+4F0h+var_490], xmm2
      }
      LODWORD(v74) = lod;
      __asm
      {
        vcvtss2sd xmm3, xmm7, xmm7
        vmovsd  [rsp+4F0h+var_4A8], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+4F0h+var_4B0], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+4F0h+var_4B8], xmm5
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+4F0h+var_4C0], xmm6
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 900, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement->base.quat ))", "%s\n\tBad placement quat (%f %f %f %f ) for material drawing on scaled model '%s' LOD%d at (%f %f %f).", "Vec4IsNormalized( placement->base.quat )", v70, v71, v72, v73, model->name, v74, v75, v76, v77) )
        __debugbreak();
      __asm { vdivss  xmm6, xmm8, dword ptr [rdi+1Ch] }
      CG_DrawHits_UnpackPlacement(&outMat, &_RDI->base);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+3F0h+extents.start]
        vmulss  xmm0, xmm6, dword ptr [rbp+3F0h+extents.start+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+3F0h+extents.start+8]
        vmovss  dword ptr [rbp+3F0h+extents.start], xmm1
        vmovss  dword ptr [rbp+3F0h+extents.start+4], xmm0
        vmovss  dword ptr [rbp+3F0h+extents.start+8], xmm2
      }
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+3F0h+extents.end]
        vmulss  xmm0, xmm6, dword ptr [rbp+3F0h+extents.end+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+3F0h+extents.end+8]
        vmovss  dword ptr [rbp+3F0h+extents.end], xmm1
        vmovss  dword ptr [rbp+3F0h+extents.end+4], xmm0
        vmovss  dword ptr [rbp+3F0h+extents.end+8], xmm2
      }
      CM_CalcTraceExtents(&extents);
      _RCX = &v79;
      __asm { vmovss  xmm0, dword ptr [rdi+1Ch] }
      v82 = entNum;
      v54 = 3i64;
      __asm { vmovss  [rbp+3F0h+var_450], xmm0 }
      _RAX = &v83;
      v79 = model;
      v80 = lod;
      do
      {
        _RAX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX += 16;
        __asm
        {
          vmovups ymmword ptr [rax-80h], ymm0
          vmovups ymm0, ymmword ptr [rcx-60h]
          vmovups ymmword ptr [rax-60h], ymm0
          vmovups ymm0, ymmword ptr [rcx-40h]
          vmovups ymmword ptr [rax-40h], ymm0
          vmovups xmm0, xmmword ptr [rcx-20h]
          vmovups xmmword ptr [rax-20h], xmm0
          vmovups xmmword ptr [rax-10h], xmm1
        }
        --v54;
      }
      while ( v54 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rax], ymm0
      }
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, (CG_DrawHits_ModelType)((unsigned __int8)v54 + 2), &v83);
    }
    ++v15;
    p_rayStart += 232;
    ++v11;
    v17 = (unsigned int)v15 < 3;
  }
  while ( v15 < 3 );
  __asm
  {
    vmovaps xmm7, [rsp+4F0h+var_58+8]
    vmovaps xmm6, xmmword ptr [rsp+4F0h+var_48+8]
  }
  _R11 = &v87;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DrawHits_OnDrawSModel
==============
*/
void CG_DrawHits_OnDrawSModel(LocalClientNum_t localClientIndex, unsigned int smodelInstanceIndex, unsigned int smodelCollectionIndex, const GfxPlacement *placement, float scale, const XModel *model, unsigned int lod)
{
  CG_DrawHits_Context *v11; 
  int v14; 
  vec3_t *p_rayStart; 
  bool v20; 
  __int64 v30; 
  __int64 v42; 
  __int64 v43; 
  const XModel *v44; 
  unsigned int v45; 
  unsigned int v47; 
  unsigned int v48; 
  CG_DrawHits_Hit::ModelInfo v49; 
  TraceExtents extents; 
  tmat43_t<vec3_t> outMat; 
  char v53; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  v11 = s_CG_DrawHits_Contexts;
  __asm
  {
    vmovss  xmm8, [rbp+390h+scale]
    vmovss  xmm7, cs:__real@3f800000
  }
  v14 = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  p_rayStart = &s_CG_DrawHits_Contexts[0].rayStart;
  v20 = 1;
  do
  {
    if ( !v20 )
    {
      LODWORD(v43) = 3;
      LODWORD(v42) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    if ( v11->active && v11->localClientNum == localClientIndex )
    {
      __asm { vdivss  xmm6, xmm7, xmm8 }
      CG_DrawHits_UnpackPlacement(&outMat, placement);
      MatrixTransposeTransformVector43(p_rayStart, &outMat, &extents.start);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+390h+extents.start]
        vmulss  xmm0, xmm6, dword ptr [rbp+390h+extents.start+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+390h+extents.start+8]
        vmovss  dword ptr [rbp+390h+extents.start], xmm1
        vmovss  dword ptr [rbp+390h+extents.start+4], xmm0
        vmovss  dword ptr [rbp+390h+extents.start+8], xmm2
      }
      MatrixTransposeTransformVector43(p_rayStart + 1, &outMat, &extents.end);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+390h+extents.end]
        vmulss  xmm0, xmm6, dword ptr [rbp+390h+extents.end+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+390h+extents.end+8]
        vmovss  dword ptr [rbp+390h+extents.end], xmm1
        vmovss  dword ptr [rbp+390h+extents.end+4], xmm0
        vmovss  dword ptr [rbp+390h+extents.end+8], xmm2
      }
      CM_CalcTraceExtents(&extents);
      _RCX = &v44;
      v44 = model;
      v30 = 3i64;
      v45 = lod;
      _RAX = &v49;
      __asm { vmovss  [rsp+490h+var_430], xmm7 }
      v47 = smodelInstanceIndex;
      v48 = smodelCollectionIndex;
      do
      {
        _RAX = (CG_DrawHits_Hit::ModelInfo *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX += 16;
        __asm
        {
          vmovups ymmword ptr [rax-80h], ymm0
          vmovups ymm0, ymmword ptr [rcx-60h]
          vmovups ymmword ptr [rax-60h], ymm0
          vmovups ymm0, ymmword ptr [rcx-40h]
          vmovups ymmword ptr [rax-40h], ymm0
          vmovups xmm0, xmmword ptr [rcx-20h]
          vmovups xmmword ptr [rax-20h], xmm0
          vmovups xmmword ptr [rax-10h], xmm1
        }
        --v30;
      }
      while ( v30 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rax], ymm0
      }
      CG_DrawHits_HitModel((CG_DrawHits_Context *)&p_rayStart[-2].z, &extents, (CG_DrawHits_ModelType)((unsigned __int8)v30 + 1), &v49);
    }
    ++v14;
    p_rayStart += 232;
    ++v11;
    v20 = (unsigned int)v14 < 3;
  }
  while ( v14 < 3 );
  __asm { vmovaps xmm6, xmmword ptr [rsp+490h+var_48+8] }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_DrawHits_PostWork
==============
*/
void CG_DrawHits_PostWork(LocalClientNum_t localClientIndex)
{
  CG_DrawHits_Hit *hits; 
  int v7; 
  bool v8; 
  unsigned int v10; 
  LocalClientNum_t v11; 
  int v12; 
  tmat33_t<vec3_t> *p_axis; 
  __int64 depthTest; 
  __int64 duration; 
  vec3_t maxs; 
  vec3_t mins; 
  char v22; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm6, cs:__real@bf800000
    vmovss  xmm7, cs:__real@3f800000
  }
  hits = s_CG_DrawHits_Contexts[0].hits;
  v7 = 0;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(duration) = 3;
      LODWORD(depthTest) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CG_DrawHits_Type::COUNT )", "type doesn't index CG_DrawHits_Type::COUNT\n\t%i not in [0, %i)", depthTest, duration) )
        __debugbreak();
    }
    if ( LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) && LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[22]) == localClientIndex )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 560, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( !LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 561, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
        __debugbreak();
      v10 = LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[31]);
      if ( v10 )
      {
        if ( v10 > 1 )
          qsort(hits, v10, 0x1C8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_DrawHits_CompareHits);
        v11 = LODWORD(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[22]);
        __asm
        {
          vmovss  dword ptr [rsp+0B8h+mins], xmm6
          vmovss  dword ptr [rsp+0B8h+mins+4], xmm6
          vmovss  dword ptr [rsp+0B8h+mins+8], xmm6
          vmovss  dword ptr [rsp+0B8h+maxs], xmm7
          vmovss  dword ptr [rsp+0B8h+maxs+4], xmm7
          vmovss  dword ptr [rsp+0B8h+maxs+8], xmm7
        }
        v12 = 0;
        p_axis = &CG_GetLocalClientGlobals(v11)->refdef.view.axis;
        do
        {
          CL_AddDebugBox(p_axis, &hits[v12].hitPosition, &mins, &maxs, &s_CG_DrawHits_hitColors[v12], 1, 0, 0);
          ++v12;
        }
        while ( v12 != v10 );
      }
      LOBYTE(hits[-1].modelInfo.superTerrain.layerMaterialsHimipRadiusInvSq[20]) = 0;
    }
    ++v7;
    hits = (CG_DrawHits_Hit *)((char *)hits + 2784);
    v8 = (unsigned int)v7 < 3;
  }
  while ( v7 < 3 );
  _R11 = &v22;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
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
  int v13; 
  float v47; 
  char *fmt; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  __int64 contentMask; 
  __int64 locational; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  __int128 start; 
  vec3_t end; 
  trace_t mem; 

  _RBX = context;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !_RBX->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 447, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  CG_DrawHits_SetupContextTraceRay(_RBX);
  v13 = _RBX->contentMask & 0xFDFFBFFF;
  if ( v13 )
  {
    __asm
    {
      vmovaps [rsp+770h+var_30], xmm6
      vmovaps [rsp+770h+var_40], xmm7
      vmovaps [rsp+770h+var_50], xmm8
      vmovaps [rsp+770h+var_60], xmm9
      vmovaps [rsp+770h+var_70], xmm10
      vmovaps [rsp+770h+var_80], xmm11
      vmovaps [rsp+770h+var_90], xmm12
      vmovaps [rsp+770h+var_A0], xmm13
      vmovaps [rsp+770h+var_B0], xmm14
    }
    Physics_WaitForAllCommandsToFinish();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vsubss  xmm4, xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rbx+20h]
      vsubss  xmm5, xmm1, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rbx+24h]
      vsubss  xmm6, xmm0, dword ptr [rbx+18h]
      vmovss  xmm9, cs:__real@3f800000
      vmovups xmm13, cs:__xmm@3f8000003f8000003f8000003f800000
      vmovups xmm14, cs:__xmm@bf000000bf000000bf000000bf000000
      vmovss  xmm10, cs:__real@39a00000
      vmovss  xmm11, cs:__real@3f7fec00
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vmovss  xmm2, cs:__real@40800000
      vblendvps xmm0, xmm1, xmm9, xmm0
      vdivss  xmm3, xmm9, xmm0
      vmulss  xmm1, xmm4, xmm3
    }
    HIDWORD(start) = 0;
    __asm
    {
      vmovups xmm12, xmmword ptr [rbp+340h]
      vmulss  xmm4, xmm1, xmm2
      vmulss  xmm0, xmm5, xmm3
      vmovss  xmm12, xmm12, xmm4
      vmulss  xmm5, xmm0, xmm2
      vmulss  xmm1, xmm6, xmm3
      vinsertps xmm12, xmm12, xmm5, 10h
      vmulss  xmm0, xmm1, xmm2
      vinsertps xmm12, xmm12, xmm0, 20h ; ' '
      vmovups xmmword ptr [rbp+340h], xmm12
      vxorps  xmm6, xmm6, xmm6
      vmovsd  xmm0, qword ptr [rbx+1Ch]
    }
    v47 = _RBX->rayEnd.v[2];
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+1Ch]
      vmovsd  qword ptr [rbp+670h+end], xmm0
      vsubss  xmm0, xmm4, dword ptr [rbx+10h]
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm8, xmm1, dword ptr [rbx+10h]
      vmovss  xmm0, dword ptr [rbx+20h]
      vsubss  xmm1, xmm0, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rbx+24h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm7, xmm2, dword ptr [rbx+14h]
      vsubss  xmm1, xmm0, dword ptr [rbx+18h]
    }
    end.v[2] = v47;
    __asm
    {
      vmovss  [rsp+770h+var_710], xmm8
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm2, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [rbp+670h+start+8], xmm2
      vmovss  dword ptr [rbp+670h+start], xmm8
      vmovss  dword ptr [rbp+670h+start+4], xmm7
    }
    if ( (v92 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+770h+var_710], xmm7 }
    if ( (v93 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+770h+var_710], xmm2 }
    if ( (v94 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+770h+var_710], xmm4 }
    if ( (v95 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  [rsp+770h+var_710], xmm0
    }
    if ( (v96 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vmovss  [rsp+770h+var_710], xmm0
    }
    if ( (v97 & 0x7F800000) == 2139095040 )
    {
LABEL_16:
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+670h+end+8]
        vmovss  xmm4, dword ptr [rbp+670h+end+4]
        vmovss  xmm5, dword ptr [rbp+670h+end]
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  qword ptr [rsp+770h+locational], xmm0
        vcvtss2sd xmm6, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+770h+contentMask], xmm1
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  qword ptr [rsp+770h+skipChildren], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vcvtss2sd xmm3, xmm7, xmm7
        vcvtss2sd xmm2, xmm8, xmm8
        vmovsd  qword ptr [rsp+770h+skipEntity], xmm5
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+770h+fmt], xmm6
      }
      Com_PrintWarning(0, "CG_DrawHits_PreWork NAN detected. Aborting trace. rayStart ( %f, %f, %f ), rayEnd ( %f, %f, %f ), rayStartCoord %f", _R8, _R9, fmt, skipEntity, skipChildren, contentMask, locational);
    }
    else
    {
      DebugWipe(&mem, 0x58ui64);
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * _RBX->localClientNum + (s_CG_DrawHits_typeUsesDetailedPhysicsWorld[type] != 0) + 3), &mem, (const vec3_t *)&start, &end, &bounds_origin, v13, 0, v13, 1, NULL, All);
      if ( !mem.allsolid )
      {
        __asm
        {
          vmovss  xmm0, [rbp+670h+mem]
          vsubss  xmm1, xmm9, xmm6
          vdivss  xmm1, xmm0, xmm1
          vaddss  xmm7, xmm1, xmm6
          vcomiss xmm7, xmm9
        }
      }
    }
    __asm
    {
      vmovaps xmm13, [rsp+770h+var_A0]
      vmovaps xmm12, [rsp+770h+var_90]
      vmovaps xmm11, [rsp+770h+var_80]
      vmovaps xmm10, [rsp+770h+var_70]
      vmovaps xmm9, [rsp+770h+var_60]
      vmovaps xmm8, [rsp+770h+var_50]
      vmovaps xmm7, [rsp+770h+var_40]
      vmovaps xmm6, [rsp+770h+var_30]
      vmovaps xmm14, [rsp+770h+var_B0]
    }
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
  int v19[3]; 
  __int64 v20; 
  void *retaddr; 

  _RAX = &retaddr;
  v20 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RDI = context;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 423, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !_RDI->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawhits.cpp", 424, ASSERT_TYPE_ASSERT, "(context.active)", (const char *)&queryFormat, "context.active") )
    __debugbreak();
  if ( _RDI->options != 1 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RDI->localClientNum);
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v19[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v19[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    v19[2] = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    __asm
    {
      vmovss  xmm4, cs:__real@47000000
      vmulss  xmm1, xmm4, dword ptr [rsi+6944h]
      vmovss  xmm5, [rsp+88h+var_58]
      vaddss  xmm7, xmm1, xmm5
      vmulss  xmm2, xmm4, dword ptr [rsi+6948h]
      vmovss  xmm3, [rsp+88h+var_54]
      vaddss  xmm6, xmm2, xmm3
      vmulss  xmm1, xmm4, dword ptr [rsi+694Ch]
      vmovss  xmm2, [rsp+88h+var_50]
      vaddss  xmm4, xmm1, xmm2
      vmovss  dword ptr [rdi+10h], xmm5
      vmovss  dword ptr [rdi+14h], xmm3
      vmovss  dword ptr [rdi+18h], xmm2
      vmovss  dword ptr [rdi+1Ch], xmm7
      vmovss  dword ptr [rdi+20h], xmm6
      vmovss  dword ptr [rdi+24h], xmm4
    }
    memset(v19, 0, sizeof(v19));
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
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
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = placement;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = outMat;
  __asm
  {
    vmovss  xmm7, dword ptr [rdx+0Ch]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmulss  xmm0, xmm7, xmm7
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm13
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0D8h+var_90], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm7, xmm7
    vmovsd  [rsp+0D8h+var_98], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+0D8h+var_A0], xmm3
    vmovsd  [rsp+0D8h+var_A8], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  [rsp+0D8h+var_B0], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v70, v71, v72, v73, v74) )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx+0Ch]
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm5, dword ptr [rbx]
    vmulss  xmm12, xmm1, dword ptr [rbx]
  }
  _R11 = &v76;
  __asm
  {
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm3, xmm0
    vmulss  xmm10, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm5, xmm4, xmm0
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm0, xmm13, xmm1
    vmovss  dword ptr [rdi], xmm0
    vsubss  xmm0, xmm9, xmm7
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm0
    vsubss  xmm1, xmm6, xmm2
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vaddss  xmm0, xmm5, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  dword ptr [rdi+14h], xmm1
    vaddss  xmm0, xmm7, xmm9
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vsubss  xmm1, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vsubss  xmm0, xmm13, xmm0
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rdi+20h], xmm0
  }
  _RDI->m[3].v[0] = _RBX->origin.v[0];
  _RDI->m[3].v[1] = _RBX->origin.v[1];
  _RDI->m[3].v[2] = _RBX->origin.v[2];
}

