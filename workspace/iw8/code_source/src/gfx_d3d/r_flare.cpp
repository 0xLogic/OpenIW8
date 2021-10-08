/*
==============
R_FlareSurfVertIter_Begin
==============
*/

GfxSpriteVertex *__fastcall R_FlareSurfVertIter_Begin(GfxFlareSurfGlob *flareSurfGlob, unsigned int vertIndexBegin)
{
  return ?R_FlareSurfVertIter_Begin@@YAPEAUGfxSpriteVertex@@PEAUGfxFlareSurfGlob@@I@Z(flareSurfGlob, vertIndexBegin);
}

/*
==============
R_BeginFlareSurfs
==============
*/

void __fastcall R_BeginFlareSurfs(GfxFlareSurfGlob **flareSurfGlob)
{
  ?R_BeginFlareSurfs@@YAXPEAPEAUGfxFlareSurfGlob@@@Z(flareSurfGlob);
}

/*
==============
R_AddFlareSurf
==============
*/

void __fastcall R_AddFlareSurf(GfxFlareSurfGlob *flareSurfGlob, Material *material, unsigned int baseIndex, unsigned int triCount, unsigned int vertIndexBase, unsigned int vertCount)
{
  ?R_AddFlareSurf@@YAXPEAUGfxFlareSurfGlob@@PEAUMaterial@@IIII@Z(flareSurfGlob, material, baseIndex, triCount, vertIndexBase, vertCount);
}

/*
==============
R_FlareSurfIndexStart
==============
*/

r_double_index_t *__fastcall R_FlareSurfIndexStart(GfxFlareSurfGlob *flareSurfGlob)
{
  return ?R_FlareSurfIndexStart@@YAPEAUr_double_index_t@@PEAUGfxFlareSurfGlob@@@Z(flareSurfGlob);
}

/*
==============
R_DestroyFlareDataBuffers
==============
*/

void R_DestroyFlareDataBuffers(void)
{
  ?R_DestroyFlareDataBuffers@@YAXXZ();
}

/*
==============
R_AddFlareEmitterData
==============
*/

bool __fastcall R_AddFlareEmitterData(GfxFlareSurfGlob *flareSurfGlob, const GfxSpriteEmitter *data, const GfxEffectFlare *flareData, unsigned int *outEmitterDataIndex)
{
  return ?R_AddFlareEmitterData@@YA_NPEAUGfxFlareSurfGlob@@PEBUGfxSpriteEmitter@@PEBUGfxEffectFlare@@AEAI@Z(flareSurfGlob, data, flareData, outEmitterDataIndex);
}

/*
==============
R_ReserveFlareSurfBuffers
==============
*/

bool __fastcall R_ReserveFlareSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxFlareSurfGlob *flareSurfGlob, unsigned int vertCount, unsigned int indexCount)
{
  return ?R_ReserveFlareSurfBuffers@@YA_NPEAUGfxCodeSurfBuffers@@PEAUGfxFlareSurfGlob@@II@Z(outBuffers, flareSurfGlob, vertCount, indexCount);
}

/*
==============
R_CreateFlareDataBuffers
==============
*/

void R_CreateFlareDataBuffers(void)
{
  ?R_CreateFlareDataBuffers@@YAXXZ();
}

/*
==============
R_EndFlareSurfs
==============
*/

void __fastcall R_EndFlareSurfs(GfxFlareSurfGlob **flareSurfGlob)
{
  ?R_EndFlareSurfs@@YAXPEAPEAUGfxFlareSurfGlob@@@Z(flareSurfGlob);
}

/*
==============
R_EmitFlareSurfs
==============
*/

void __fastcall R_EmitFlareSurfs(GfxViewInfo *viewInfo)
{
  ?R_EmitFlareSurfs@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_AddFlareEmitterData
==============
*/
char R_AddFlareEmitterData(GfxFlareSurfGlob *flareSurfGlob, const GfxSpriteEmitter *data, const GfxEffectFlare *flareData, unsigned int *outEmitterDataIndex)
{
  unsigned int perEmitterDataLimit; 
  unsigned int perFlareDataLimit; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 

  perEmitterDataLimit = flareSurfGlob->meshState.perEmitterDataLimit;
  _RBP = flareData;
  _RDI = data;
  if ( flareSurfGlob->meshState.perEmitterDataCount < perEmitterDataLimit )
  {
    perFlareDataLimit = flareSurfGlob->meshState.perFlareDataLimit;
    if ( perEmitterDataLimit != perFlareDataLimit )
    {
      v30 = perFlareDataLimit;
      v28 = perEmitterDataLimit;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 287, ASSERT_TYPE_ASSERT, "( flareSurfGlob->meshState.perEmitterDataLimit ) == ( flareSurfGlob->meshState.perFlareDataLimit )", "%s == %s\n\t%u, %u", "flareSurfGlob->meshState.perEmitterDataLimit", "flareSurfGlob->meshState.perFlareDataLimit", v28, v30) )
        __debugbreak();
    }
    if ( flareSurfGlob->meshState.perEmitterDataCount != flareSurfGlob->meshState.perFlareDataCount )
    {
      LODWORD(v29) = flareSurfGlob->meshState.perFlareDataCount;
      LODWORD(v27) = flareSurfGlob->meshState.perEmitterDataCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 288, ASSERT_TYPE_ASSERT, "( flareSurfGlob->meshState.perEmitterDataCount ) == ( flareSurfGlob->meshState.perFlareDataCount )", "%s == %s\n\t%u, %u", "flareSurfGlob->meshState.perEmitterDataCount", "flareSurfGlob->meshState.perFlareDataCount", v27, v29) )
        __debugbreak();
    }
    *outEmitterDataIndex = flareSurfGlob->meshState.perEmitterDataCount++;
    ++flareSurfGlob->meshState.perFlareDataCount;
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    _RDX = &flareSurfGlob->meshState.perEmitterData[*outEmitterDataIndex];
    __asm
    {
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [rdi+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
      vmovups xmm0, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rdx+20h], xmm0
      vmovups xmm1, xmmword ptr [rdi+30h]
      vmovups xmmword ptr [rdx+30h], xmm1
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [rdx+40h], xmm0
      vmovups xmm1, xmmword ptr [rdi+50h]
      vmovups xmmword ptr [rdx+50h], xmm1
      vmovups xmm0, xmmword ptr [rdi+60h]
      vmovups xmmword ptr [rdx+60h], xmm0
      vmovups xmm0, xmmword ptr [rdi+70h]
      vmovups xmmword ptr [rdx+70h], xmm0
      vmovups xmm1, xmmword ptr [rdi+80h]
      vmovups xmmword ptr [rdx+80h], xmm1
      vmovups xmm0, xmmword ptr [rdi+90h]
      vmovups xmmword ptr [rdx+90h], xmm0
      vmovups xmm1, xmmword ptr [rdi+0A0h]
      vmovups xmmword ptr [rdx+0A0h], xmm1
      vmovups xmm0, xmmword ptr [rdi+0B0h]
      vmovups xmmword ptr [rdx+0B0h], xmm0
      vmovsd  xmm0, qword ptr [rbp+0]
    }
    _RCX = *outEmitterDataIndex;
    _RAX = flareSurfGlob->meshState.perFlareData;
    __asm { vmovsd  qword ptr [rax+rcx*4], xmm0 }
    _RAX[_RCX].worldPosition.v[2] = _RBP->worldPosition.v[2];
    return 1;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_FLARE_EMITTERS);
    return 0;
  }
}

/*
==============
R_AddFlareSurf
==============
*/
void R_AddFlareSurf(GfxFlareSurfGlob *flareSurfGlob, Material *material, __int64 baseIndex, __int64 triCount, unsigned int vertIndexBase, unsigned int vertCount)
{
  __int64 surfCount; 
  GfxFlareSurf *v7; 

  surfCount = flareSurfGlob->surfCount;
  if ( (unsigned int)surfCount < 0x80 )
  {
    flareSurfGlob->surfCount = surfCount + 1;
    v7 = &scene.flareSurfs[surfCount];
    v7->material = material;
    v7->args.vertexCount = vertCount;
    v7->args.vertIndexBase = vertIndexBase;
    v7->args.primCount = triCount;
    v7->args.baseIndex = baseIndex;
    v7->args.trackFrameIndex = 0;
    *(_WORD *)&v7->args.viewStatsTarget = 3071;
    v7->args.triSource = 1;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_FLARE_OVERFLOW, material, baseIndex, triCount);
  }
}

/*
==============
R_BeginFlareSurfs
==============
*/
void R_BeginFlareSurfs(GfxFlareSurfGlob **flareSurfGlob)
{
  GfxMeshData *v2; 
  volatile unsigned int used; 
  int v4; 
  unsigned int vertSize; 

  if ( ((unsigned __int8)&scene.flareSurfLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.flareSurfLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&scene.flareSurfLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 245, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &scene.flareSurfLock, 1, 0 )) == (0))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &scene.flareSurfLock, 1, 0 ) == 0") )
    __debugbreak();
  v2 = &frontEndDataOut->mesh[3];
  s_flareSurfGlob.surfCount = scene.flareCount;
  s_flareSurfGlob.remoteMesh = &frontEndDataOut->mesh[3];
  if ( frontEndDataOut->mesh[3].vertSize != 48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 253, ASSERT_TYPE_ASSERT, "(meshData->vertSize == sizeof( GfxSpriteVertex ))", (const char *)&queryFormat, "meshData->vertSize == sizeof( GfxSpriteVertex )") )
    __debugbreak();
  if ( (v2->vertSize & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 78, ASSERT_TYPE_ASSERT, "(!(meshData->vertSize & 15))", (const char *)&queryFormat, "!(meshData->vertSize & 15)") )
    __debugbreak();
  s_flareSurfGlob.meshState.verts = (unsigned __int8 *)v2->vb.wrappedBuffer.data;
  used = v2->vb.used;
  if ( used % v2->vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 47, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
    __debugbreak();
  v4 = used / v2->vertSize;
  s_flareSurfGlob.meshState.vertCount = v4;
  s_flareSurfGlob.meshState.vertLimit = R_GetMeshTotalVertexCount(v2);
  vertSize = v2->vertSize;
  s_flareSurfGlob.meshState.vertIndexBase = v4;
  s_flareSurfGlob.meshState.vertStride = vertSize;
  s_flareSurfGlob.meshState.indexLimit = v2->totalIndexCount;
  s_flareSurfGlob.meshState.indexCount = v2->indexCount;
  s_flareSurfGlob.meshState.indices = v2->indices;
  s_flareSurfGlob.meshState.perEmitterDataCount = v2->perEmitterDataCount;
  s_flareSurfGlob.meshState.perEmitterDataLimit = v2->perEmitterDataLimit;
  s_flareSurfGlob.meshState.perEmitterData = v2->perEmitterBufferData;
  s_flareSurfGlob.meshState.perFlareDataCount = v2->perFlareDataCount;
  s_flareSurfGlob.meshState.perFlareDataLimit = v2->perFlareDataLimit;
  s_flareSurfGlob.meshState.perFlareData = v2->perFlareData;
  s_flareSurfGlob.meshState.vertWarning = R_WARN_MAX_FLARE_VERTS;
  s_flareSurfGlob.meshState.indexWarning = R_WARN_MAX_FLARE_INDICES;
  *flareSurfGlob = &s_flareSurfGlob;
}

/*
==============
R_CreateFlareDataBuffers
==============
*/
void R_CreateFlareDataBuffers(void)
{
  ;
}

/*
==============
R_DestroyFlareDataBuffers
==============
*/
void R_DestroyFlareDataBuffers(void)
{
  ;
}

/*
==============
R_EmitFlareSurfs
==============
*/
void R_EmitFlareSurfs(GfxViewInfo *viewInfo)
{
  unsigned int flareCount; 
  unsigned int flareSurfCount; 
  GfxFlareSurf *flareSurfs; 
  unsigned __int16 v5; 

  flareCount = scene.flareCount;
  scene.flareCount = 0;
  flareSurfCount = frontEndDataOut->flareSurfCount;
  flareSurfs = frontEndDataOut->flareSurfs;
  if ( flareSurfCount + flareCount >= 0x300 )
  {
    R_WarnOncePerFrame(R_WARN_FLARE_OVERFLOW);
    flareSurfCount = frontEndDataOut->flareSurfCount;
    flareCount = 768 - flareSurfCount;
  }
  viewInfo->firstFlare = flareSurfCount;
  v5 = R_StableSortSurfs_All<GfxSortFlareSurfsInterface,GfxFlareSurf>(scene.flareSurfs, flareCount, &flareSurfs[frontEndDataOut->flareSurfCount]);
  viewInfo->flareCount = v5;
  frontEndDataOut->flareSurfCount += v5;
}

/*
==============
R_EndFlareSurfs
==============
*/
void R_EndFlareSurfs(GfxFlareSurfGlob **flareSurfGlob)
{
  GfxMeshData *remoteMesh; 
  unsigned int indexCount; 
  unsigned int vertSize; 
  unsigned int vertCount; 
  unsigned int v6; 
  unsigned int total; 

  if ( *flareSurfGlob != &s_flareSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 264, ASSERT_TYPE_ASSERT, "(*flareSurfGlob == &s_flareSurfGlob)", (const char *)&queryFormat, "*flareSurfGlob == &s_flareSurfGlob") )
    __debugbreak();
  *flareSurfGlob = NULL;
  remoteMesh = s_flareSurfGlob.remoteMesh;
  indexCount = s_flareSurfGlob.meshState.indexCount;
  scene.flareCount = s_flareSurfGlob.surfCount;
  if ( s_flareSurfGlob.meshState.indexCount > s_flareSurfGlob.remoteMesh->totalIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  vertSize = remoteMesh->vertSize;
  remoteMesh->indexCount = indexCount;
  vertCount = s_flareSurfGlob.meshState.vertCount;
  if ( vertSize )
  {
    total = remoteMesh->vb.total;
    if ( total % vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
      __debugbreak();
    v6 = total / remoteMesh->vertSize;
  }
  else
  {
    v6 = 0;
  }
  if ( vertCount > v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 68, ASSERT_TYPE_ASSERT, "(vertCount <= R_GetMeshTotalVertexCount( mesh ))", (const char *)&queryFormat, "vertCount <= R_GetMeshTotalVertexCount( mesh )") )
    __debugbreak();
  remoteMesh->vb.used = vertCount * remoteMesh->vertSize;
  remoteMesh->perEmitterDataCount = s_flareSurfGlob.meshState.perEmitterDataCount;
  remoteMesh->perFlareDataCount = s_flareSurfGlob.meshState.perFlareDataCount;
  if ( ((unsigned __int8)&scene.flareSurfLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.flareSurfLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&scene.flareSurfLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 273, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &scene.flareSurfLock, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &scene.flareSurfLock, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
R_FlareSurfIndexStart
==============
*/
r_double_index_t *R_FlareSurfIndexStart(GfxFlareSurfGlob *flareSurfGlob)
{
  return (r_double_index_t *)flareSurfGlob->meshState.indices;
}

/*
==============
R_FlareSurfVertIter_Begin
==============
*/
GfxSpriteVertex *R_FlareSurfVertIter_Begin(GfxFlareSurfGlob *flareSurfGlob, unsigned int vertIndexBegin)
{
  unsigned int vertLimit; 

  if ( vertIndexBegin >= flareSurfGlob->meshState.vertLimit )
  {
    vertLimit = flareSurfGlob->meshState.vertLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( vertIndexBegin ) < (unsigned)( meshState->vertLimit )", "vertIndexBegin doesn't index meshState->vertLimit\n\t%i not in [0, %i)", vertIndexBegin, vertLimit) )
      __debugbreak();
  }
  return (GfxSpriteVertex *)&flareSurfGlob->meshState.verts[vertIndexBegin * flareSurfGlob->meshState.vertStride];
}

/*
==============
R_ReserveFlareSurfBuffers
==============
*/
bool R_ReserveFlareSurfBuffers(GfxCodeSurfBuffers *outBuffers, GfxFlareSurfGlob *flareSurfGlob, unsigned int vertCount, unsigned int indexCount)
{
  bool result; 
  unsigned int v9; 
  unsigned int vertIndexBase; 
  unsigned int v11; 
  __int64 v12; 

  if ( vertCount + flareSurfGlob->meshState.vertCount <= flareSurfGlob->meshState.vertLimit )
  {
    if ( indexCount + flareSurfGlob->meshState.indexCount <= flareSurfGlob->meshState.indexLimit )
    {
      if ( vertCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 155, ASSERT_TYPE_ASSERT, "(vertCount <= GFX_CODESURF_VERT_INDEX_MAX)", (const char *)&queryFormat, "vertCount <= GFX_CODESURF_VERT_INDEX_MAX") )
        __debugbreak();
      v9 = flareSurfGlob->meshState.vertCount;
      if ( v9 + vertCount > flareSurfGlob->meshState.vertLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 159, ASSERT_TYPE_ASSERT, "(newVertTotal <= meshState->vertLimit)", (const char *)&queryFormat, "newVertTotal <= meshState->vertLimit") )
        __debugbreak();
      vertIndexBase = flareSurfGlob->meshState.vertIndexBase;
      if ( v9 < vertIndexBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 162, ASSERT_TYPE_ASSERT, "(oldVertTotal >= vertIndexBase)", (const char *)&queryFormat, "oldVertTotal >= vertIndexBase") )
        __debugbreak();
      v11 = v9 - vertIndexBase;
      if ( v9 - vertIndexBase + vertCount > 0xFFFF )
      {
        vertIndexBase = v9;
        flareSurfGlob->meshState.vertIndexBase = v9;
        v11 = 0;
      }
      if ( v11 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v11, "unsigned", v11) )
        __debugbreak();
      outBuffers->vertIndexOffset = v11;
      v12 = flareSurfGlob->meshState.indexCount;
      flareSurfGlob->meshState.vertCount = v9 + vertCount;
      if ( (unsigned int)v12 + indexCount > flareSurfGlob->meshState.indexLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_flare.cpp", 182, ASSERT_TYPE_ASSERT, "(newIndexBase <= meshState->indexLimit)", (const char *)&queryFormat, "newIndexBase <= meshState->indexLimit") )
        __debugbreak();
      outBuffers->indices = (r_double_index_t *)&flareSurfGlob->meshState.indices[v12];
      result = 1;
      flareSurfGlob->meshState.indexCount = v12 + indexCount;
      outBuffers->vertIndexBase = vertIndexBase;
      outBuffers->argOffset = 0;
    }
    else
    {
      R_WarnOncePerFrame(flareSurfGlob->meshState.indexWarning);
      return 0;
    }
  }
  else
  {
    R_WarnOncePerFrame(flareSurfGlob->meshState.vertWarning);
    return 0;
  }
  return result;
}

