/*
==============
XSurfaceTraceLineInternal
==============
*/

void __fastcall XSurfaceTraceLineInternal(const XSurface *surf, int vertListIndex, const vec3_t *start, const vec3_t *delta, xtrace_t *results, bool doubleSided)
{
  ?XSurfaceTraceLineInternal@@YAXPEBUXSurface@@HAEBTvec3_t@@1PEAUxtrace_t@@_N@Z(surf, vertListIndex, start, delta, results, doubleSided);
}

/*
==============
XModelClientOnlyBoneNames
==============
*/

const scr_string_t *__fastcall XModelClientOnlyBoneNames(const XModel *model)
{
  return ?XModelClientOnlyBoneNames@@YAPEBW4scr_string_t@@PEBUXModel@@@Z(model);
}

/*
==============
XSurface_IntersectRayWithMeshInternal
==============
*/

float4 *__fastcall XSurface_IntersectRayWithMeshInternal(float4 *result, const XSurface *surface, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, bool doubleSided)
{
  return ?XSurface_IntersectRayWithMeshInternal@@YA?AUfloat4@@PEBUXSurface@@U1@11_N@Z(result, surface, rayStart, rayDelta, rayCoord, doubleSided);
}

/*
==============
XModelGetRadius
==============
*/

double __fastcall XModelGetRadius(const XModel *model)
{
  double result; 

  *(float *)&result = ?XModelGetRadius@@YAMPEBUXModel@@@Z(model);
  return result;
}

/*
==============
XModelPrecache
==============
*/

XModel *__fastcall XModelPrecache(const char *name, void *(__fastcall *Alloc)(unsigned __int64), void *(__fastcall *AllocColl)(unsigned __int64))
{
  return ?XModelPrecache@@YAPEAUXModel@@PEBDP6APEAX_K@Z2@Z(name, Alloc, AllocColl);
}

/*
==============
XModelGetBounds
==============
*/

void __fastcall XModelGetBounds(const XModel *model, Bounds *bounds)
{
  ?XModelGetBounds@@YAXPEBUXModel@@PEAUBounds@@@Z(model, bounds);
}

/*
==============
XSurface_IntersectRayWithTriangles
==============
*/

float4 *__fastcall XSurface_IntersectRayWithTriangles(float4 *result, const vec3_t *verts, const unsigned __int16 *indexBegin, const unsigned __int16 *indexEnd, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, bool doubleSided)
{
  return ?XSurface_IntersectRayWithTriangles@@YA?AUfloat4@@PEBTvec3_t@@PEBG1U1@22_N@Z(result, verts, indexBegin, indexEnd, rayStart, rayDelta, rayCoord, doubleSided);
}

/*
==============
XModelTraceLineInternal
==============
*/

int __fastcall XModelTraceLineInternal(const XModel *model, trace_t *results, const vec3_t *localStart, const vec3_t *localEnd, int contentmask, bool permitDoubleSided)
{
  return ?XModelTraceLineInternal@@YAHPEBUXModel@@PEAUtrace_t@@AEBTvec3_t@@2H_N@Z(model, results, localStart, localEnd, contentmask, permitDoubleSided);
}

/*
==============
XModelBoneNames
==============
*/

const scr_string_t *__fastcall XModelBoneNames(const XModel *model)
{
  return ?XModelBoneNames@@YAPEBW4scr_string_t@@PEBUXModel@@@Z(model);
}

/*
==============
XModelBoneNames
==============
*/
scr_string_t *XModelBoneNames(const XModel *model)
{
  return model->boneNames;
}

/*
==============
XModelClientOnlyBoneNames
==============
*/
scr_string_t *XModelClientOnlyBoneNames(const XModel *model)
{
  return &model->boneNames[model->numBones];
}

/*
==============
XModelGetBounds
==============
*/
void XModelGetBounds(const XModel *model, Bounds *bounds)
{
  *bounds = model->bounds;
}

/*
==============
XModelGetRadius
==============
*/
float XModelGetRadius(const XModel *model)
{
  return model->radius;
}

/*
==============
XModelPrecache
==============
*/
XModel *XModelPrecache(const char *name, void *(*Alloc)(unsigned __int64), void *(*AllocColl)(unsigned __int64))
{
  return DB_FindXAssetHeader(ASSET_TYPE_XMODEL, name, 1).model;
}

/*
==============
XModelTraceLineInternal
==============
*/
__int64 XModelTraceLineInternal(const XModel *model, trace_t *results, const vec3_t *localStart, const vec3_t *localEnd, int contentmask, bool permitDoubleSided)
{
  unsigned __int8 collLod; 
  unsigned int v7; 
  const XModel *v11; 
  unsigned int v12; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *v15; 
  unsigned __int16 surfIndex; 
  __int64 v17; 
  float v18; 
  Material **materialHandles; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float fraction; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  const XSurface *v28; 
  unsigned __int8 rigidVertListCount; 
  Material *v30; 
  bool doubleSided; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v35; 
  XRigidVertList *rigidVertLists; 
  unsigned int boneIndexOffset; 
  float v38; 
  __int64 v39; 
  float v40; 
  bool v42; 
  unsigned int numBones; 
  int v44; 
  unsigned int v45; 
  __int64 v46; 
  __int64 v48; 
  XSurface *surfaces; 
  Material **v50; 
  Material *v51; 
  xtrace_t resultsa; 
  vec3_t delta; 
  TraceExtents extents; 

  collLod = model->collLod;
  v7 = -1;
  v45 = -1;
  v11 = model;
  if ( collLod < 6u && XModelIsLodUsable(model, collLod) )
  {
    v12 = v11->collLod;
  }
  else
  {
    if ( !XModelIsLodUsable(v11, v11->numLods - 1) )
      return v7;
    v12 = v11->numLods - 1;
  }
  if ( v12 != 6 )
  {
    numBones = v11->numBones;
    v44 = XModelGetSurfaces(v11, &surfaces, v12);
    LodInfo = XModelGetLodInfo(v11, v12);
    numsurfs = v11->numsurfs;
    v15 = LodInfo;
    surfIndex = LodInfo->surfIndex;
    if ( surfIndex >= numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfIndex, numsurfs) )
      __debugbreak();
    v17 = v15->surfIndex;
    v18 = localStart->v[1];
    materialHandles = v11->materialHandles;
    extents.start.v[0] = localStart->v[0];
    v20 = localStart->v[2];
    extents.start.v[1] = v18;
    v21 = localEnd->v[0];
    extents.start.v[2] = v20;
    v22 = localEnd->v[1];
    extents.end.v[0] = v21;
    v23 = localEnd->v[2];
    v50 = &materialHandles[v17];
    extents.end.v[1] = v22;
    extents.end.v[2] = v23;
    CM_CalcTraceExtents(&extents);
    fraction = results->fraction;
    delta.v[0] = extents.end.v[0] - extents.start.v[0];
    v25 = 0;
    delta.v[2] = extents.end.v[2] - extents.start.v[2];
    delta.v[1] = extents.end.v[1] - extents.start.v[1];
    resultsa.fraction = fraction;
    if ( v44 > 0 )
    {
      v26 = 0i64;
      v27 = 0i64;
      v46 = 0i64;
      v48 = 0i64;
      do
      {
        v28 = (XSurface *)((char *)surfaces + v27);
        if ( !CM_TraceBox(&extents, (const Bounds *)((char *)&surfaces->surfBounds + v27), fraction) )
        {
          v51 = v11->materialHandles[v26];
          if ( (contentmask & v51->contents) != 0 )
          {
            rigidVertListCount = v28->rigidVertListCount;
            if ( !permitDoubleSided )
              goto LABEL_29;
            v30 = v50[v26];
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
              __debugbreak();
            if ( !v30->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
              __debugbreak();
            if ( !*v30->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
              __debugbreak();
            if ( !v30->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            if ( (v30->techniqueSet->flags & 1) != 0 )
              doubleSided = 1;
            else
LABEL_29:
              doubleSided = 0;
            v32 = 0;
            v42 = doubleSided;
            v33 = 0i64;
            v34 = rigidVertListCount;
            if ( rigidVertListCount )
            {
              v35 = numBones;
              do
              {
                rigidVertLists = v28->rigidVertLists;
                if ( rigidVertLists[v33].boneIndexOffset < v35 )
                {
                  XSurfaceTraceLineVerts(v28, v32, &extents.start, &delta, &resultsa, doubleSided);
                  fraction = resultsa.fraction;
                  if ( resultsa.fraction != results->fraction )
                  {
                    boneIndexOffset = rigidVertLists[v33].boneIndexOffset;
                    v38 = resultsa.normal.v[0];
                    v39 = (__int64)v51;
                    v40 = resultsa.normal.v[1];
                    results->fraction = resultsa.fraction;
                    results->normal.v[0] = v38;
                    results->normal.v[2] = resultsa.normal.v[2];
                    results->normal.v[1] = v40;
                    v45 = boneIndexOffset;
                    *(_WORD *)&results->allsolid = 0;
                    results->surfaceFlags = *(_DWORD *)(v39 + 12);
                    results->contents = *(_DWORD *)(v39 + 8);
                    results->debugHitName = model->name;
                    if ( (unsigned int)(v25 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v25, "signed", v46) )
                      __debugbreak();
                    results->surfaceIndex = v25;
                  }
                  v35 = numBones;
                }
                doubleSided = v42;
                ++v32;
                ++v33;
              }
              while ( v33 < v34 );
            }
            v26 = v46;
            v11 = model;
          }
        }
        ++v26;
        v27 = v48 + 192;
        v46 = v26;
        ++v25;
        v48 += 192i64;
      }
      while ( v25 < v44 );
      return v45;
    }
  }
  return v7;
}

/*
==============
XSurfaceTraceLineInternal
==============
*/
void XSurfaceTraceLineInternal(const XSurface *surf, int vertListIndex, const vec3_t *start, const vec3_t *delta, xtrace_t *results, bool doubleSided)
{
  XSurfaceTraceLineVerts(surf, vertListIndex, start, delta, results, doubleSided);
}

/*
==============
XSurfaceTraceLineVerts
==============
*/
void XSurfaceTraceLineVerts(const XSurface *surf, int vertListIndex, const vec3_t *start, const vec3_t *delta, xtrace_t *results, bool doubleSided)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  float v15; 
  float fraction; 
  __int64 v21; 
  XRigidVertList *rigidVertLists; 
  __int64 v23; 
  __int64 triCount; 
  __int128 v29; 
  __m128 v33; 
  GfxVertexUnion v36; 
  GfxPackedVertex *packedVerts; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  __int64 v42; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  Bounds *p_surfBounds; 
  __int64 v50; 
  __int64 v53; 
  __int64 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v64; 
  __m128 v69; 
  __int64 v104; 
  __m128 v105; 
  __int128 v106; 
  __m128 v107; 
  float4 result; 
  float4 v109; 
  float4 v110; 
  __int128 v111; 
  __int128 v112; 
  __int128 v113; 
  __int128 v114; 
  __int128 v115; 
  __int128 v116; 
  __int128 v117; 
  __int128 v118; 
  __int128 v119; 

  v15 = FLOAT_1_0;
  _R14 = results;
  v119 = v6;
  v117 = v8;
  fraction = results->fraction;
  v116 = v9;
  v114 = v11;
  v21 = vertListIndex;
  if ( (fraction < 0.0 || fraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 862, ASSERT_TYPE_ASSERT, "( ( results->fraction >= 0 && results->fraction <= 1.0f ) )", "( results->fraction ) = %g", fraction) )
    __debugbreak();
  if ( (surf->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 863, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_SKINNED ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_SKINNED )") )
    __debugbreak();
  rigidVertLists = surf->rigidVertLists;
  v23 = v21;
  triCount = rigidVertLists[v21].triCount;
  _RSI = &XSurfaceGetIndices(surf)[3 * rigidVertLists[v23].triOffset];
  if ( !(_DWORD)triCount )
  {
    LODWORD(v104) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 870, ASSERT_TYPE_ASSERT, "( ( triCount > 0 ) )", "( triCount ) = %i", v104) )
      __debugbreak();
  }
  __asm { vbroadcastss xmm7, dword ptr [r14+0Ch] }
  _XMM10 = (__m128)_xmm;
  HIDWORD(v106) = 0;
  v29 = v106;
  *(float *)&v29 = start->v[0];
  _XMM12 = v29;
  __asm
  {
    vinsertps xmm12, xmm12, dword ptr [r12+4], 10h
    vinsertps xmm12, xmm12, dword ptr [r12+8], 20h ; ' '
  }
  v107 = _XMM12;
  v107.m128_i32[3] = 0;
  v33 = v107;
  v33.m128_f32[0] = delta->v[0];
  _XMM9 = v33;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [r13+4], 10h
    vinsertps xmm9, xmm9, dword ptr [r13+8], 20h ; ' '
  }
  v36.packedVerts = XSurfaceGetVerts(surf).packedVerts;
  packedVerts = v36.packedVerts;
  v38 = 6i64 * (int)triCount;
  v39 = v38;
  if ( v38 > 0x200 )
    v39 = 512i64;
  _RDX = 0i64;
  for ( _RCX = 0i64; _RCX < v39; _RCX += 64i64 )
    __asm { prefetcht0 byte ptr [rcx+rsi] }
  v42 = 512i64;
  _R8 = &v36.packedVerts[*_RSI];
  v44 = 20i64 * rigidVertLists[v23].vertCount;
  v45 = v44;
  if ( v44 > 0x200 )
    v45 = 512i64;
  if ( v44 <= 0x200 )
    v42 = 0i64;
  if ( v45 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rdx+r8] }
      _RDX += 64i64;
    }
    while ( _RDX < v45 );
  }
  if ( (_DWORD)triCount )
  {
    v118 = v7;
    _R14 = (char *)packedVerts + v42;
    v115 = v10;
    p_surfBounds = &surf->surfBounds;
    v113 = v12;
    _RSI = (unsigned __int16 *)(_RSI + 1);
    v112 = v13;
    v111 = v14;
    _R15 = 510i64;
    v50 = triCount;
    if ( v38 <= 0x200 )
      _R15 = -2i64;
    _XMM8 = 0i64;
    do
    {
      __asm { prefetcht0 byte ptr [rsi+r15] }
      _RCX = 5i64 * *(_RSI - 1);
      __asm { prefetcht0 byte ptr [r14+rcx*4] }
      v53 = *_RSI;
      v54 = _RSI[1];
      XSurfaceUnpackPositionToFloat4(packedVerts[*(_RSI - 1)].xyz, p_surfBounds, &result);
      XSurfaceUnpackPositionToFloat4(packedVerts[v53].xyz, p_surfBounds, &v109);
      XSurfaceUnpackPositionToFloat4(packedVerts[v54].xyz, p_surfBounds, &v110);
      v55 = _mm128_sub_ps(result.v, v109.v);
      v56 = _mm128_sub_ps(result.v, v110.v);
      v57 = _mm128_sub_ps(result.v, _XMM12);
      v58 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v55, v55, 210), _mm_shuffle_ps(v56, v56, 201)), _mm128_mul_ps(_mm_shuffle_ps(v55, v55, 201), _mm_shuffle_ps(v56, v56, 210)));
      _XMM1 = _mm128_mul_ps(_XMM9, v58);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm14, xmm2, xmm2
        vrcpps  xmm1, xmm14
      }
      v64 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM14));
      _XMM0 = _mm128_mul_ps(v58, v57);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm11, xmm2, xmm2
      }
      _mm128_mul_ps(_XMM11, v64);
      v69 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v57, v57, 210), _mm_shuffle_ps(_XMM9, _XMM9, 201)), _mm128_mul_ps(_mm_shuffle_ps(v57, v57, 201), _mm_shuffle_ps(_XMM9, _XMM9, 210)));
      _XMM0 = _mm128_mul_ps(v55, v69);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
      }
      _XMM0 = _mm128_mul_ps(v56, v69);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm6, xmm2, xmm2
      }
      _XMM0 = _mm128_sub_ps(_XMM3, _XMM6);
      __asm
      {
        vcmpltps xmm2, xmm0, xmm14
        vcmpltps xmm1, xmm8, xmm3
        vcmpltps xmm0, xmm6, xmm8
      }
      v105 = _XMM3;
      _XMM3 = _XMM2 | _XMM0 | _XMM1;
      _XMM4 = _mm128_mul_ps(_XMM14, _XMM7);
      __asm
      {
        vcmpltps xmm0, xmm8, xmm11
        vcmpltps xmm2, xmm4, xmm11
        vandnps xmm1, xmm0, xmm2
        vandnps xmm5, xmm3, xmm1
      }
      if ( doubleSided )
      {
        __asm
        {
          vcmpltps xmm3, xmm14, xmmword ptr [rsp+60h]
          vcmpltps xmm1, xmm11, xmm4
          vcmpltps xmm0, xmm11, xmm8
          vandnps xmm4, xmm0, xmm1
        }
        _XMM0 = v105;
        __asm
        {
          vcmpltps xmm1, xmm0, xmm8
          vcmpltps xmm2, xmm8, xmm6
        }
        _XMM2 = _XMM3 | _XMM1 | _XMM2;
        __asm { vandnps xmm3, xmm2, xmm4 }
      }
      _RSI += 3;
      __asm
      {
        vblendvps xmm10, xmm10, xmm13, xmm0
        vblendvps xmm7, xmm7, xmm15, xmm0
      }
      --v50;
    }
    while ( v50 );
    v15 = FLOAT_1_0;
    _R14 = results;
  }
  _XMM0 = _mm128_mul_ps(_XMM10, _XMM10);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vminps  xmm0, xmm7, [rsp+198h+var_148]
  }
  _XMM3 = _mm128_mul_ps(_XMM1, _XMM10);
  _R14->normal.v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
  }
  _R14->fraction = *(float *)&_XMM0;
  if ( (*(float *)&_XMM0 < 0.0 || *(float *)&_XMM0 > v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 914, ASSERT_TYPE_SANITY, "( ( results->fraction >= 0 && results->fraction <= 1.0f ) )", "( results->fraction ) = %g", *(float *)&_XMM0) )
    __debugbreak();
}

/*
==============
XSurface_IntersectRayWithMeshInternal
==============
*/
float4 *XSurface_IntersectRayWithMeshInternal(float4 *result, const XSurface *surface, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, bool doubleSided)
{
  unsigned int sharedIndexDataOffset; 
  XSurfaceShared *shared; 
  XSurfaceShared *v12; 
  unsigned __int64 data; 
  __int64 triCount; 
  const unsigned __int16 *Indices; 
  GfxVertexUnion v16; 
  __m128 v; 
  __m128 v18; 
  __m128 v19; 
  float4 *v20; 
  unsigned int v21; 
  unsigned int dataSize; 
  float4 v23; 
  float4 v24; 
  float4 v25; 
  float4 v26; 

  sharedIndexDataOffset = surface->sharedIndexDataOffset;
  shared = surface->shared;
  if ( sharedIndexDataOffset >= shared->dataSize )
  {
    dataSize = shared->dataSize;
    v21 = sharedIndexDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedIndexDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedIndexDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v21, dataSize) )
      __debugbreak();
  }
  v12 = surface->shared;
  if ( (v12->flags & 1) != 0 )
    LOBYTE(data) = (unsigned __int8)Stream_AddressSpace_ResolveHandle(&surface->shared->data.streamedDataHandle);
  else
    data = v12->data.streamedDataHandle.data;
  if ( (((_BYTE)data + LOBYTE(surface->sharedIndexDataOffset)) & 0xF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 48, ASSERT_TYPE_ASSERT, "(IsAligned( indices, 16 ))", (const char *)&queryFormat, "IsAligned( indices, 16 )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 823, ASSERT_TYPE_ASSERT, "(IsAligned( XSurfaceGetIndices( surface ), 16 ))", (const char *)&queryFormat, "IsAligned( XSurfaceGetIndices( surface ), 16 )") )
      __debugbreak();
  }
  if ( (surface->triCount & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 824, ASSERT_TYPE_ASSERT, "((surface->triCount & 1) == 0)", (const char *)&queryFormat, "(surface->triCount & 1) == 0") )
    __debugbreak();
  triCount = surface->triCount;
  Indices = XSurfaceGetIndices(surface);
  v16.packedVerts = XSurfaceGetVerts(surface).packedVerts;
  v = rayDelta->v;
  v23.v = rayCoord->v;
  v18 = rayStart->v;
  v24.v = v;
  v25.v = v18;
  v19 = XSurface_IntersectRayWithPackedTrianglesT_GfxPackedVertex_(&v26, v16.packedVerts, &surface->surfBounds, Indices, &Indices[3 * triCount], &v25, &v24, &v23, doubleSided)->v;
  v20 = result;
  *result = (float4)v19;
  return v20;
}

/*
==============
XSurface_IntersectRayWithTriangles
==============
*/
float4 *XSurface_IntersectRayWithTriangles(float4 *result, const vec3_t *verts, const unsigned __int16 *indexBegin, const unsigned __int16 *indexEnd, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, bool doubleSided)
{
  float4 v10; 
  float4 v11; 
  float4 v12; 

  v10.v = rayCoord->v;
  v11.v = rayDelta->v;
  v12.v = rayStart->v;
  XSurface_IntersectRayWithTrianglesT__XSurface_IntersectRayWithTriangles_::_2_::PosVertT_(result, (const XSurface_IntersectRayWithTriangles::__l2::PosVertT *)verts, indexBegin, indexEnd, &v12, &v11, &v10, doubleSided);
  return result;
}

