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
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+2Ch]
    vmovups xmmword ptr [rdx], xmm0
    vmovsd  xmm1, qword ptr [rcx+3Ch]
    vmovsd  qword ptr [rdx+10h], xmm1
  }
}

/*
==============
XModelGetRadius
==============
*/
float XModelGetRadius(const XModel *model)
{
  __asm { vmovss  xmm0, dword ptr [rcx+28h] }
  return *(float *)&_XMM0;
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
  unsigned int v8; 
  const XModel *v12; 
  unsigned int v13; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *v16; 
  unsigned __int16 surfIndex; 
  __int64 v18; 
  Material **materialHandles; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  const XSurface *v36; 
  unsigned __int8 rigidVertListCount; 
  Material *v39; 
  bool doubleSided; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  XRigidVertList *rigidVertLists; 
  char v46; 
  int boneIndexOffset; 
  __int64 v49; 
  bool v54; 
  unsigned int numBones; 
  int v56; 
  int v57; 
  __int64 v58; 
  __int64 v60; 
  XSurface *surfaces; 
  Material **v62; 
  Material *v63; 
  xtrace_t resultsa; 
  vec3_t delta; 
  TraceExtents extents; 

  collLod = model->collLod;
  v8 = -1;
  _RDI = localEnd;
  v57 = -1;
  _R14 = localStart;
  _RSI = results;
  v12 = model;
  if ( collLod < 6u && XModelIsLodUsable(model, collLod) )
  {
    v13 = v12->collLod;
  }
  else
  {
    if ( !XModelIsLodUsable(v12, v12->numLods - 1) )
      return v8;
    v13 = v12->numLods - 1;
  }
  if ( v13 != 6 )
  {
    numBones = v12->numBones;
    __asm { vmovaps [rsp+160h+var_40], xmm6 }
    v56 = XModelGetSurfaces(v12, &surfaces, v13);
    LodInfo = XModelGetLodInfo(v12, v13);
    numsurfs = v12->numsurfs;
    v16 = LodInfo;
    surfIndex = LodInfo->surfIndex;
    if ( surfIndex >= numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", surfIndex, numsurfs) )
      __debugbreak();
    v18 = v16->surfIndex;
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+4]
    }
    materialHandles = v12->materialHandles;
    __asm
    {
      vmovss  dword ptr [rbp+60h+extents.start], xmm0
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rbp+60h+extents.start+4], xmm1
      vmovss  xmm1, dword ptr [rdi]
      vmovss  dword ptr [rbp+60h+extents.start+8], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+60h+extents.end], xmm1
      vmovss  xmm1, dword ptr [rdi+8]
    }
    v62 = &materialHandles[v18];
    __asm
    {
      vmovss  dword ptr [rbp+60h+extents.end+4], xmm0
      vmovss  dword ptr [rbp+60h+extents.end+8], xmm1
    }
    CM_CalcTraceExtents(&extents);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+60h+extents.end]
      vsubss  xmm1, xmm0, dword ptr [rbp+60h+extents.start]
      vmovss  xmm2, dword ptr [rbp+60h+extents.end+4]
      vsubss  xmm0, xmm2, dword ptr [rbp+60h+extents.start+4]
      vmovss  xmm6, dword ptr [rsi]
      vmovss  dword ptr [rbp+60h+delta], xmm1
      vmovss  xmm1, dword ptr [rbp+60h+extents.end+8]
      vsubss  xmm2, xmm1, dword ptr [rbp+60h+extents.start+8]
    }
    v33 = 0;
    __asm
    {
      vmovss  dword ptr [rbp+60h+delta+8], xmm2
      vmovss  dword ptr [rbp+60h+delta+4], xmm0
      vmovss  [rbp+60h+results.fraction], xmm6
    }
    if ( v56 > 0 )
    {
      v34 = 0i64;
      v35 = 0i64;
      v58 = 0i64;
      v60 = 0i64;
      do
      {
        v36 = (XSurface *)((char *)surfaces + v35);
        __asm { vmovaps xmm2, xmm6; fraction }
        if ( !CM_TraceBox(&extents, (const Bounds *)((char *)&surfaces->surfBounds + v35), *(float *)&_XMM2) )
        {
          v63 = v12->materialHandles[v34];
          if ( (contentmask & v63->contents) != 0 )
          {
            rigidVertListCount = v36->rigidVertListCount;
            if ( !permitDoubleSided )
              goto LABEL_29;
            v39 = v62[v34];
            if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
              __debugbreak();
            if ( !v39->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
              __debugbreak();
            if ( !*v39->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
              __debugbreak();
            if ( !v39->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            if ( (v39->techniqueSet->flags & 1) != 0 )
              doubleSided = 1;
            else
LABEL_29:
              doubleSided = 0;
            v41 = 0;
            v54 = doubleSided;
            v42 = 0i64;
            v43 = rigidVertListCount;
            if ( rigidVertListCount )
            {
              v44 = numBones;
              do
              {
                rigidVertLists = v36->rigidVertLists;
                if ( rigidVertLists[v42].boneIndexOffset < v44 )
                {
                  XSurfaceTraceLineVerts(v36, v41, &extents.start, &delta, &resultsa, doubleSided);
                  __asm
                  {
                    vmovss  xmm6, [rbp+60h+results.fraction]
                    vucomiss xmm6, dword ptr [rsi]
                  }
                  if ( !v46 )
                  {
                    boneIndexOffset = rigidVertLists[v42].boneIndexOffset;
                    __asm { vmovss  xmm0, dword ptr [rbp+60h+results.normal] }
                    v49 = (__int64)v63;
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rbp+60h+results.normal+4]
                      vmovss  dword ptr [rsi], xmm6
                      vmovss  dword ptr [rsi+10h], xmm0
                      vmovss  xmm0, dword ptr [rbp+60h+results.normal+8]
                      vmovss  dword ptr [rsi+18h], xmm0
                      vmovss  dword ptr [rsi+14h], xmm1
                    }
                    v57 = boneIndexOffset;
                    *(_WORD *)&_RSI->allsolid = 0;
                    _RSI->surfaceFlags = *(_DWORD *)(v49 + 12);
                    _RSI->contents = *(_DWORD *)(v49 + 8);
                    _RSI->debugHitName = model->name;
                    if ( (unsigned int)(v33 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v33, "signed", v58) )
                      __debugbreak();
                    _RSI->surfaceIndex = v33;
                  }
                  v44 = numBones;
                }
                doubleSided = v54;
                ++v41;
                ++v42;
              }
              while ( v42 < v43 );
            }
            v34 = v58;
            v12 = model;
          }
        }
        ++v34;
        v35 = v60 + 192;
        v58 = v34;
        ++v33;
        v60 += 192i64;
      }
      while ( v33 < v56 );
      v8 = v57;
    }
    __asm { vmovaps xmm6, [rsp+160h+var_40] }
  }
  return v8;
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
  bool v18; 
  __int64 v26; 
  XRigidVertList *rigidVertLists; 
  __int64 v29; 
  __int64 triCount; 
  GfxVertexUnion v44; 
  GfxPackedVertex *packedVerts; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  __int64 v50; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  bool v54; 
  bool v55; 
  Bounds *p_surfBounds; 
  __int64 v60; 
  __int64 v63; 
  __int64 v64; 
  __int64 v146; 
  double v147; 
  xtrace_t *v148; 
  __int128 v151; 
  float4 result; 
  float4 v153; 
  float4 v154; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
  v18 = (unsigned __int64)&v146 == _security_cookie;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  _R12 = start;
  _R13 = delta;
  _R14 = results;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm7
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovss  xmm0, dword ptr [r14+0Ch]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmmword ptr [r11-98h], xmm10
    vmovaps xmmword ptr [r11-0B8h], xmm12
  }
  v26 = vertListIndex;
  v148 = results;
  __asm { vcomiss xmm0, xmm6 }
  if ( !v18 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+198h+var_170], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 862, ASSERT_TYPE_ASSERT, "( ( results->fraction >= 0 && results->fraction <= 1.0f ) )", "( results->fraction ) = %g", v147) )
      __debugbreak();
  }
  if ( (surf->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 863, ASSERT_TYPE_ASSERT, "(!( surf->flags & SURF_FLAG_SKINNED ))", (const char *)&queryFormat, "!( surf->flags & SURF_FLAG_SKINNED )") )
    __debugbreak();
  rigidVertLists = surf->rigidVertLists;
  v29 = v26;
  triCount = rigidVertLists[v26].triCount;
  _RSI = &XSurfaceGetIndices(surf)[3 * rigidVertLists[v29].triOffset];
  if ( !(_DWORD)triCount )
  {
    LODWORD(v147) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 870, ASSERT_TYPE_ASSERT, "( ( triCount > 0 ) )", "( triCount ) = %i", v147) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vbroadcastss xmm7, dword ptr [r14+0Ch]
    vmovups xmm10, cs:__xmm@3f8000003f8000003f8000003f800000
  }
  HIDWORD(v151) = 0;
  __asm
  {
    vmovups xmm12, xmmword ptr [rsp+60h]
    vmovss  xmm12, xmm12, xmm0
    vinsertps xmm12, xmm12, dword ptr [r12+4], 10h
    vinsertps xmm12, xmm12, dword ptr [r12+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r13+0]
    vmovups xmmword ptr [rsp+60h], xmm12
  }
  HIDWORD(v151) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+60h]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [r13+4], 10h
    vinsertps xmm9, xmm9, dword ptr [r13+8], 20h ; ' '
    vmovups xmmword ptr [rsp+60h], xmm9
    vmovups [rsp+198h+var_148], xmm7
  }
  v44.packedVerts = XSurfaceGetVerts(surf).packedVerts;
  packedVerts = v44.packedVerts;
  v46 = 6i64 * (int)triCount;
  v47 = v46;
  if ( v46 > 0x200 )
    v47 = 512i64;
  _RDX = 0i64;
  for ( _RCX = 0i64; _RCX < v47; _RCX += 64i64 )
    __asm { prefetcht0 byte ptr [rcx+rsi] }
  v50 = 512i64;
  _R8 = &v44.packedVerts[*_RSI];
  v52 = 20i64 * rigidVertLists[v29].vertCount;
  v53 = v52;
  if ( v52 > 0x200 )
    v53 = 512i64;
  if ( v52 <= 0x200 )
    v50 = 0i64;
  if ( v53 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rdx+r8] }
      _RDX += 64i64;
    }
    while ( _RDX < v53 );
  }
  v54 = 0;
  v55 = (_DWORD)triCount == 0;
  if ( (_DWORD)triCount )
  {
    __asm { vmovaps [rsp+198h+var_78], xmm8 }
    _R14 = (char *)packedVerts + v50;
    __asm { vmovaps [rsp+198h+var_A8], xmm11 }
    p_surfBounds = &surf->surfBounds;
    __asm { vmovaps [rsp+198h+var_C8], xmm13 }
    _RSI = (unsigned __int16 *)(_RSI + 1);
    __asm
    {
      vmovaps [rsp+198h+var_D8], xmm14
      vmovaps [rsp+198h+var_E8], xmm15
    }
    _R15 = 510i64;
    v60 = triCount;
    if ( v46 <= 0x200 )
      _R15 = -2i64;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      __asm { prefetcht0 byte ptr [rsi+r15] }
      _RCX = 5i64 * *(_RSI - 1);
      __asm { prefetcht0 byte ptr [r14+rcx*4] }
      v63 = *_RSI;
      v64 = _RSI[1];
      XSurfaceUnpackPositionToFloat4(packedVerts[*(_RSI - 1)].xyz, p_surfBounds, &result);
      XSurfaceUnpackPositionToFloat4(packedVerts[v63].xyz, p_surfBounds, &v153);
      XSurfaceUnpackPositionToFloat4(packedVerts[v64].xyz, p_surfBounds, &v154);
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+198h+result.v]
        vsubps  xmm5, xmm4, xmmword ptr [rsp+198h+var_118.v]
        vsubps  xmm6, xmm4, xmmword ptr [rsp+198h+var_108.v]
        vsubps  xmm4, xmm4, xmm12
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm13, xmm0, xmm3
        vmulps  xmm1, xmm9, xmm13
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm14, xmm2, xmm2
        vrcpps  xmm1, xmm14
        vmulps  xmm0, xmm1, xmm1
        vmulps  xmm2, xmm0, xmm14
        vaddps  xmm1, xmm1, xmm1
        vsubps  xmm3, xmm1, xmm2
        vmulps  xmm0, xmm13, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm11, xmm2, xmm2
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm15, xmm11, xmm3
        vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm1
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
        vmulps  xmm2, xmm1, xmm0
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm5, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
        vmulps  xmm0, xmm6, xmm4
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm6, xmm2, xmm2
        vsubps  xmm0, xmm3, xmm6
        vcmpltps xmm2, xmm0, xmm14
        vmovups xmmword ptr [rsp+60h], xmm0
        vcmpltps xmm1, xmm8, xmm3
        vcmpltps xmm0, xmm6, xmm8
        vorps   xmm0, xmm2, xmm0
        vmovups [rsp+198h+var_158], xmm3
        vorps   xmm3, xmm0, xmm1
        vmulps  xmm4, xmm14, xmm7
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
          vmovups xmm0, [rsp+198h+var_158]
          vcmpltps xmm1, xmm0, xmm8
          vorps   xmm1, xmm3, xmm1
          vcmpltps xmm2, xmm8, xmm6
          vorps   xmm2, xmm1, xmm2
          vandnps xmm3, xmm2, xmm4
          vorps   xmm5, xmm3, xmm5
        }
      }
      __asm { vmovups xmm0, xmm5 }
      _RSI += 3;
      __asm
      {
        vblendvps xmm10, xmm10, xmm13, xmm0
        vblendvps xmm7, xmm7, xmm15, xmm0
      }
      v54 = v60-- == 0;
      v55 = v54 || v60 == 0;
    }
    while ( v60 );
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    _R14 = v148;
    __asm
    {
      vmovaps xmm15, [rsp+198h+var_E8]
      vmovaps xmm14, [rsp+198h+var_D8]
      vmovaps xmm13, [rsp+198h+var_C8]
      vmovaps xmm11, [rsp+198h+var_A8]
      vmovaps xmm8, [rsp+198h+var_78]
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+198h+var_B8]
    vmovaps xmm9, [rsp+198h+var_88]
    vmulps  xmm0, xmm10, xmm10
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vminps  xmm0, xmm7, [rsp+198h+var_148]
    vmovaps xmm7, [rsp+198h+var_68]
    vmulps  xmm3, xmm1, xmm10
    vmovaps xmm10, [rsp+198h+var_98]
    vmovss  dword ptr [r14], xmm3
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovss  dword ptr [r14+0Ch], xmm0
  }
  if ( v54 )
    goto LABEL_30;
  __asm { vcomiss xmm0, xmm6 }
  if ( !v55 )
  {
LABEL_30:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+198h+var_170], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel.cpp", 914, ASSERT_TYPE_SANITY, "( ( results->fraction >= 0 && results->fraction <= 1.0f ) )", "( results->fraction ) = %g", v147) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+198h+var_58] }
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
  float4 *v23; 
  unsigned int v24; 
  unsigned int dataSize; 
  float4 v26; 
  float4 v27; 
  float4 v28; 
  float4 v29; 

  _R15 = rayDelta;
  sharedIndexDataOffset = surface->sharedIndexDataOffset;
  _R12 = rayStart;
  _R14 = result;
  shared = surface->shared;
  if ( sharedIndexDataOffset >= shared->dataSize )
  {
    dataSize = shared->dataSize;
    v24 = sharedIndexDataOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedIndexDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedIndexDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", v24, dataSize) )
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
  __asm { vmovups xmm1, xmmword ptr [r15] }
  _RSI = rayCoord;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0A8h+var_58], xmm0
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+0A8h+var_48], xmm1
    vmovups [rsp+0A8h+var_38], xmm0
  }
  _RAX = XSurface_IntersectRayWithPackedTrianglesT_GfxPackedVertex_(&v29, v16.packedVerts, &surface->surfBounds, Indices, &Indices[3 * triCount], &v28, &v27, &v26, doubleSided);
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v23 = _R14;
  __asm { vmovups xmmword ptr [r14], xmm0 }
  return v23;
}

/*
==============
XSurface_IntersectRayWithTriangles
==============
*/
float4 *XSurface_IntersectRayWithTriangles(float4 *result, const vec3_t *verts, const unsigned __int16 *indexBegin, const unsigned __int16 *indexEnd, float4 *rayStart, float4 *rayDelta, float4 *rayCoord, bool doubleSided)
{
  float4 v16; 
  float4 v17; 
  float4 v18; 

  _RAX = rayCoord;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  _RAX = rayDelta;
  __asm
  {
    vmovups [rsp+78h+var_38], xmm0
    vmovups xmm1, xmmword ptr [rax]
  }
  _RAX = rayStart;
  __asm
  {
    vmovups [rsp+78h+var_28], xmm1
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+78h+var_18.v], xmm0
  }
  XSurface_IntersectRayWithTrianglesT__XSurface_IntersectRayWithTriangles_::_2_::PosVertT_(result, (const XSurface_IntersectRayWithTriangles::__l2::PosVertT *)verts, indexBegin, indexEnd, &v18, &v17, &v16, doubleSided);
  return result;
}

