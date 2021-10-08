/*
==============
R_AllocMotionBlurSurfs
==============
*/

int __fastcall R_AllocMotionBlurSurfs(int byteSize)
{
  return ?R_AllocMotionBlurSurfs@@YAHH@Z(byteSize);
}

/*
==============
R_SkinSceneDObj
==============
*/

void __fastcall R_SkinSceneDObj(GfxSceneEntity *sceneEnt, GfxSceneEntity *localSceneEnt, const DObj *obj, const DObjAnimMat *boneMatrix, GfxViewDomain viewDomain)
{
  ?R_SkinSceneDObj@@YAXPEAUGfxSceneEntity@@0PEIBUDObj@@PEIBUDObjAnimMat@@W4GfxViewDomain@@@Z(sceneEnt, localSceneEnt, obj, boneMatrix, viewDomain);
}

/*
==============
R_AllocSubdivSkinnedCachedVerts
==============
*/

bool __fastcall R_AllocSubdivSkinnedCachedVerts(unsigned int cacheSize, int *cacheOffset)
{
  return ?R_AllocSubdivSkinnedCachedVerts@@YA_NIPEAH@Z(cacheSize, cacheOffset);
}

/*
==============
R_AllocMotionBlurSurfaces
==============
*/

bool __fastcall R_AllocMotionBlurSurfaces(unsigned __int8 *surfBuf, unsigned __int8 *surfBufEnd, unsigned int totalSurfaceCount, unsigned __int8 *mbSurfBuf, unsigned int mbSurfBufSize)
{
  return ?R_AllocMotionBlurSurfaces@@YA_NPEIAE0I0I@Z(surfBuf, surfBufEnd, totalSurfaceCount, mbSurfBuf, mbSurfBufSize);
}

/*
==============
R_FlagXModelAsSkinned
==============
*/

void __fastcall R_FlagXModelAsSkinned(GfxSceneEntity *sceneEnt, unsigned int surfaceCount)
{
  ?R_FlagXModelAsSkinned@@YAXPEAUGfxSceneEntity@@I@Z(sceneEnt, surfaceCount);
}

/*
==============
R_AllocDObjSurfsSkinnedCacheVerts
==============
*/
char R_AllocDObjSurfsSkinnedCacheVerts(unsigned __int8 *surfBuf, unsigned __int8 *surfBufEnd, unsigned int totalSurfaceCount, unsigned int numSkinnedVerts, GfxMotionBlurSurfBuildInfo *mbBuildInfo)
{
  __int64 v5; 
  unsigned __int8 *v7; 
  GfxVertexBufferState *skinnedCacheVb; 
  int v10; 
  unsigned int v11; 
  int skinnedCachedOffset; 
  GfxSkinCacheEntry *skinCacheEntry; 
  int v15; 
  unsigned __int8 *v16; 

  v5 = totalSurfaceCount;
  v7 = surfBufEnd;
  if ( (int)numSkinnedVerts <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 81, ASSERT_TYPE_ASSERT, "(vertCount > 0)", (const char *)&queryFormat, "vertCount > 0") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 93, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->skinnedCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 94, ASSERT_TYPE_ASSERT, "(frontEndDataOut->skinnedCacheVb)", (const char *)&queryFormat, "frontEndDataOut->skinnedCacheVb") )
    __debugbreak();
  skinnedCacheVb = frontEndDataOut->skinnedCacheVb;
  if ( ((unsigned __int8)skinnedCacheVb & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->skinnedCacheVb) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&skinnedCacheVb->used, numSkinnedVerts);
  v11 = frontEndDataOut->skinnedCacheVb->total / 16;
  if ( v10 + numSkinnedVerts <= v11 )
  {
    if ( v10 >= 0 )
    {
      skinnedCachedOffset = -1;
      if ( mbBuildInfo->useVertexCaches )
      {
        skinCacheEntry = mbBuildInfo->skinCacheEntry;
        if ( gfxBuf.skinnedCacheFrameCount - skinCacheEntry->frameCount == 1 && skinCacheEntry->numSkinnedVerts == numSkinnedVerts )
          skinnedCachedOffset = skinCacheEntry->skinnedCachedOffset;
        skinCacheEntry->numSkinnedVerts = numSkinnedVerts;
        skinCacheEntry->skinnedCachedOffset = v10;
      }
      if ( (_DWORD)v5 )
      {
        do
        {
          v15 = *(_DWORD *)surfBuf;
          v16 = surfBuf;
          if ( *(int *)surfBuf > -4 )
          {
            if ( v15 == -3 )
            {
              surfBuf += 4;
            }
            else
            {
              surfBuf += 136;
              *(_DWORD *)v16 = v10 + v15;
              if ( *((_WORD *)v16 + 26) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 798, ASSERT_TYPE_ASSERT, "(baseSurf->motionblurSurf == (0xffff))", (const char *)&queryFormat, "baseSurf->motionblurSurf == MOTIONBLUR_SURF_INDEX_NONE") )
                __debugbreak();
              if ( skinnedCachedOffset >= 0 )
                *((_WORD *)v16 + 26) = R_AllocModelMotionblurSkinnedSurface(mbBuildInfo, 0xFFFFu, v15 + skinnedCachedOffset, 0);
            }
          }
          else
          {
            surfBuf += 32 * R_GetModelRigidSurfaceChildCount((const GfxModelRigidSurface *)surfBuf) + 76;
          }
          --v5;
        }
        while ( v5 );
        v7 = surfBufEnd;
      }
      if ( surfBuf != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 804, ASSERT_TYPE_ASSERT, "(surfPos == surfBufEnd)", (const char *)&queryFormat, "surfPos == surfBufEnd") )
        __debugbreak();
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_SKINNED_CACHE_VERTICES, v11);
    return 0;
  }
}

/*
==============
R_AllocDObjSurfsSubdivSkinnedCacheVerts
==============
*/
bool R_AllocDObjSurfsSubdivSkinnedCacheVerts(unsigned __int8 *surfBuf, unsigned __int8 *surfBufEnd, unsigned int totalSurfaceCount, unsigned int cacheSize, GfxMotionBlurSurfBuildInfo *mbBuildInfo, GfxViewDomain viewDomain)
{
  char v8; 
  unsigned int v11; 
  GfxVertexBufferState *subdivCacheVb; 
  signed __int32 v13; 
  bool result; 
  GfxSkinCacheEntry *skinCacheEntry; 
  int subdivCacheOffset; 
  int v17; 
  const GfxModelSkinnedSurface *v19; 
  int v20; 
  int *p_tessFactorsCacheOffset; 
  int v22; 
  const XSurface *v24; 
  const XSurface *v25; 
  int v26; 
  unsigned int ModelRigidSurfaceChildCount; 
  int v29; 
  int subdivLodLevel; 
  XSurface *xsurf; 
  int v48; 
  int SurfaceSubdivLevel; 
  int tessFactorsCacheOffset; 
  int v51; 
  float v53; 
  char v54; 
  signed __int32 v55; 
  int v57; 
  int subdivLevel; 
  GfxSkinCacheEntry *v59; 
  GfxPlacement placement; 

  v8 = 0;
  _RBX = (const GfxModelSkinnedSurface *)surfBuf;
  v54 = 0;
  if ( !cacheSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 115, ASSERT_TYPE_ASSERT, "(cacheSize > 0)", (const char *)&queryFormat, "cacheSize > 0") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 116, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->subdivCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 117, ASSERT_TYPE_ASSERT, "(frontEndDataOut->subdivCacheVb)", (const char *)&queryFormat, "frontEndDataOut->subdivCacheVb") )
    __debugbreak();
  v11 = (cacheSize + 15) & 0xFFFFFFF0;
  subdivCacheVb = frontEndDataOut->subdivCacheVb;
  if ( ((unsigned __int8)subdivCacheVb & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->subdivCacheVb) )
    __debugbreak();
  __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
  v13 = _InterlockedExchangeAdd(&subdivCacheVb->used, v11);
  v55 = v13;
  if ( v13 + v11 > 0x200000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_SUBDIV_SKINNED_CACHE_VERTICES, 0x200000i64);
    goto LABEL_15;
  }
  skinCacheEntry = mbBuildInfo->skinCacheEntry;
  v59 = skinCacheEntry;
  if ( mbBuildInfo->useVertexCaches && gfxBuf.skinnedCacheFrameCount - skinCacheEntry->frameCount == 1 && gfxBuf.skinnedCacheFrameCount - skinCacheEntry->subdivCacheFrameCount == 1 && skinCacheEntry->subdivCacheSize == cacheSize )
    subdivCacheOffset = skinCacheEntry->subdivCacheOffset;
  else
    subdivCacheOffset = -1;
  v17 = 0;
  v57 = subdivCacheOffset;
  skinCacheEntry->subdivCacheSize = cacheSize;
  skinCacheEntry->subdivCacheOffset = v13;
  if ( !totalSurfaceCount )
  {
LABEL_45:
    if ( _RBX != (const GfxModelSkinnedSurface *)surfBufEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 940, ASSERT_TYPE_ASSERT, "(surfPos == surfBufEnd)", (const char *)&queryFormat, "surfPos == surfBufEnd") )
      __debugbreak();
    if ( v8 )
      skinCacheEntry->subdivCacheFrameCount = gfxBuf.skinnedCacheFrameCount;
    result = 1;
    goto LABEL_51;
  }
  __asm { vmovsd  xmm6, cs:__real@3f30000000000000 }
  while ( 1 )
  {
    v19 = _RBX;
    if ( _RBX->base.skinnedCachedOffset <= -4 )
      break;
    if ( _RBX->base.skinnedCachedOffset == -3 )
    {
      _RBX = (const GfxModelSkinnedSurface *)((char *)_RBX + 4);
    }
    else
    {
      subdivLodLevel = _RBX->base.subdivLodLevel;
      if ( _RBX->base.subdivLodLevel )
      {
        xsurf = _RBX->xsurf;
        if ( R_SurfaceHasSubdivision(xsurf) )
        {
          v48 = _RBX->subdivCacheOffset;
          _RBX->subdivCacheOffset = v13 + v48;
          SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(xsurf, subdivLodLevel);
          if ( !R_AddSkinnedSubdivComputeCmd(frontEndDataOut->compute.cmdList, xsurf, _RBX, SurfaceSubdivLevel, _RBX->subdivCacheOffset) )
            goto LABEL_15;
          tessFactorsCacheOffset = _RBX->tessFactorsCacheOffset;
          if ( tessFactorsCacheOffset != -5 )
          {
            v51 = _RBX->subdivCacheOffset;
            _RBX->tessFactorsCacheOffset = v13 + tessFactorsCacheOffset;
            if ( !R_AddSkinnedSubdivTessFactorsCmd(frontEndDataOut->compute.cmdList, xsurf, SurfaceSubdivLevel, v51, v13 + tessFactorsCacheOffset, viewDomain, &_RBX->rootPlacement) )
              goto LABEL_15;
          }
          v54 = 1;
          if ( subdivCacheOffset >= 0 )
            _RBX->base.motionblurSurf = R_AllocModelMotionblurSkinnedSurface(mbBuildInfo, _RBX->base.motionblurSurf, v48 + subdivCacheOffset, 1);
        }
      }
      ++_RBX;
    }
LABEL_31:
    if ( ++v17 >= totalSurfaceCount )
    {
      skinCacheEntry = v59;
      v8 = v54;
      goto LABEL_45;
    }
    subdivCacheOffset = v57;
  }
  v20 = _RBX->tessFactorsCacheOffset;
  p_tessFactorsCacheOffset = &_RBX->tessFactorsCacheOffset;
  v22 = _RBX->base.subdivLodLevel;
  _R15 = (const GfxModelRigidSurface *)_RBX;
  v24 = _RBX->xsurf;
  if ( v20 == -5 )
  {
    _RBX = (const GfxModelSkinnedSurface *)((char *)_RBX + R_GetModelRigidSurfaceSize((const GfxModelRigidSurface *)_RBX));
    goto LABEL_30;
  }
  v25 = _RBX->xsurf;
  *p_tessFactorsCacheOffset = v55 + v20;
  _RBX = (const GfxModelSkinnedSurface *)((char *)_RBX + 76);
  subdivLevel = R_GetSurfaceSubdivLevel(v25, v22);
  v26 = 0;
  ModelRigidSurfaceChildCount = R_GetModelRigidSurfaceChildCount(_R15);
  if ( !ModelRigidSurfaceChildCount )
  {
LABEL_30:
    v13 = v55;
    goto LABEL_31;
  }
  _RSI = &v19->rootPlacement.origin.v[2];
  while ( 1 )
  {
    v29 = *p_tessFactorsCacheOffset;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, dword ptr [rsi-8]
      vmulsd  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, dword ptr [rsi-4]
      vcvtsd2ss xmm2, xmm1, xmm1
      vmulsd  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsp+0E8h+var_78.origin], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmulsd  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx]
      vmovss  dword ptr [rsp+0E8h+var_78.quat], xmm0
      vmovss  xmm0, dword ptr [rsi-10h]
      vmovss  dword ptr [rsp+0E8h+var_78.origin+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  xmm1, dword ptr [rsi-14h]
      vmovss  dword ptr [rsp+0E8h+var_78.quat+8], xmm0
      vmovss  xmm0, dword ptr [r15+48h]
      vmovss  dword ptr [rsp+0E8h+var_78.quat+4], xmm1
      vmovss  xmm1, dword ptr [rsi-0Ch]
      vmovss  dword ptr [rsp+0E8h+var_B8], xmm0
      vmovss  dword ptr [rsp+0E8h+var_78.origin+8], xmm2
      vmovss  dword ptr [rsp+0E8h+var_78.quat+0Ch], xmm1
    }
    if ( !R_AddRigidSubdivTessFactorsCmd(frontEndDataOut->compute.cmdList, v24, subdivLevel, v29, v26, &placement, v53, viewDomain) )
      break;
    _RBX = (const GfxModelSkinnedSurface *)((char *)_RBX + 32);
    _RSI += 8;
    if ( ++v26 >= ModelRigidSurfaceChildCount )
      goto LABEL_30;
  }
LABEL_15:
  result = 0;
LABEL_51:
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  return result;
}

/*
==============
R_AllocModelMotionblurSkinnedSurface
==============
*/
__int64 R_AllocModelMotionblurSkinnedSurface(GfxMotionBlurSurfBuildInfo *mbBuildInfo, unsigned __int16 existingSurface, int cachedOffset, int cacheOffsetType)
{
  __int64 v4; 
  __int64 surfUsed; 
  unsigned __int8 *v8; 
  unsigned int v9; 
  unsigned __int8 *v10; 

  v4 = cacheOffsetType;
  LOWORD(surfUsed) = existingSurface;
  if ( cachedOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 213, ASSERT_TYPE_ASSERT, "(cachedOffset >= 0)", (const char *)&queryFormat, "cachedOffset >= 0") )
    __debugbreak();
  if ( (_WORD)surfUsed == 0xFFFF )
  {
    surfUsed = mbBuildInfo->surfUsed;
    if ( surfUsed + 8 > (unsigned __int64)mbBuildInfo->surfCapacity )
    {
      R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_WORK_BUFFER);
      return 0xFFFFi64;
    }
    v8 = &mbBuildInfo->surfBegin[surfUsed];
    v9 = 0;
    v10 = v8;
    do
    {
      v9 += 2;
      *(_QWORD *)v10 = -1i64;
      v10 += 8;
    }
    while ( v9 < 2 );
    *(_DWORD *)&v8[4 * v4] = cachedOffset;
    if ( mbBuildInfo->surfUsed > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 228, ASSERT_TYPE_ASSERT, "(mbBuildInfo->surfUsed <= (0xffff))", (const char *)&queryFormat, "mbBuildInfo->surfUsed <= MOTIONBLUR_SURF_INDEX_MAX") )
      __debugbreak();
    mbBuildInfo->surfUsed += 8;
  }
  else
  {
    *(_DWORD *)&mbBuildInfo->surfBegin[4 * v4 + (unsigned __int16)surfUsed] = cachedOffset;
  }
  return (unsigned __int16)surfUsed;
}

/*
==============
R_AllocMotionBlurSurfaces
==============
*/
char R_AllocMotionBlurSurfaces(unsigned __int8 *surfBuf, unsigned __int8 *surfBufEnd, unsigned int totalSurfaceCount, unsigned __int8 *mbSurfBuf, unsigned int mbSurfBufSize)
{
  __int64 v5; 
  unsigned __int8 *v7; 
  volatile int *p_motionblurSurfPos; 
  int v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned __int16 v14; 
  unsigned int v15; 
  unsigned int v16; 

  v5 = totalSurfaceCount;
  v7 = surfBufEnd;
  if ( (mbSurfBufSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 166, ASSERT_TYPE_ASSERT, "(( byteSize & 3 ) == 0)", (const char *)&queryFormat, "( byteSize & 3 ) == 0") )
    __debugbreak();
  p_motionblurSurfPos = &frontEndDataOut->motionblurSurfPos;
  if ( (((_BYTE)frontEndDataOut - 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->motionblurSurfPos) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(p_motionblurSurfPos, mbSurfBufSize);
  if ( v10 + mbSurfBufSize > 0x20000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_BUFFER);
    goto LABEL_9;
  }
  if ( v10 < 0 )
  {
LABEL_9:
    if ( !(_DWORD)v5 )
      return 0;
    while ( 1 )
    {
      v11 = surfBuf;
      if ( *(int *)surfBuf <= -4 )
        break;
      if ( *(_DWORD *)surfBuf != -3 )
      {
        surfBuf += 136;
        goto LABEL_37;
      }
      surfBuf += 4;
LABEL_38:
      if ( !--v5 )
        return 0;
    }
    surfBuf += 32 * R_GetModelRigidSurfaceChildCount((const GfxModelRigidSurface *)surfBuf) + 76;
LABEL_37:
    *((_WORD *)v11 + 26) = -1;
    goto LABEL_38;
  }
  memcpy_0(&frontEndDataOut->motionblurSurfsBuffer[v10], mbSurfBuf, (int)mbSurfBufSize);
  if ( !(_DWORD)v5 )
    goto LABEL_30;
  v12 = v5;
  do
  {
    v13 = surfBuf;
    if ( *(int *)surfBuf > -4 )
    {
      if ( *(_DWORD *)surfBuf == -3 )
      {
        surfBuf += 4;
        goto LABEL_28;
      }
      surfBuf += 136;
    }
    else
    {
      surfBuf += 32 * R_GetModelRigidSurfaceChildCount((const GfxModelRigidSurface *)surfBuf) + 76;
    }
    v14 = *((_WORD *)v13 + 26);
    if ( v14 != 0xFFFF )
    {
      v15 = v10 + v14;
      if ( (((_BYTE)v10 + (_BYTE)v14) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1038, ASSERT_TYPE_ASSERT, "(( mbSurface & 3 ) == 0)", (const char *)&queryFormat, "( mbSurface & 3 ) == 0") )
        __debugbreak();
      v16 = v15 >> 2;
      if ( v16 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1039, ASSERT_TYPE_ASSERT, "(( mbSurface >> 2 ) <= (0xffff))", (const char *)&queryFormat, "( mbSurface >> 2 ) <= MOTIONBLUR_SURF_INDEX_MAX") )
        __debugbreak();
      *((_WORD *)v13 + 26) = truncate_cast<unsigned short,unsigned int>(v16);
    }
LABEL_28:
    --v12;
  }
  while ( v12 );
  v7 = surfBufEnd;
LABEL_30:
  if ( surfBuf != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1044, ASSERT_TYPE_ASSERT, "(surfPos == surfBufEnd)", (const char *)&queryFormat, "surfPos == surfBufEnd") )
    __debugbreak();
  return 1;
}

/*
==============
R_AllocMotionBlurSurfs
==============
*/
__int64 R_AllocMotionBlurSurfs(int byteSize)
{
  volatile int *p_motionblurSurfPos; 
  __int64 result; 

  if ( (byteSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 166, ASSERT_TYPE_ASSERT, "(( byteSize & 3 ) == 0)", (const char *)&queryFormat, "( byteSize & 3 ) == 0") )
    __debugbreak();
  p_motionblurSurfPos = &frontEndDataOut->motionblurSurfPos;
  if ( (((_BYTE)frontEndDataOut - 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->motionblurSurfPos) )
    __debugbreak();
  result = (unsigned int)_InterlockedExchangeAdd(p_motionblurSurfPos, byteSize);
  if ( (unsigned int)(result + byteSize) > 0x20000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_BUFFER);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
R_AllocSubdivSkinnedCachedVerts
==============
*/
bool R_AllocSubdivSkinnedCachedVerts(unsigned int cacheSize, int *cacheOffset)
{
  unsigned int v4; 
  GfxVertexBufferState *subdivCacheVb; 
  int v6; 
  bool result; 

  if ( !cacheSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 115, ASSERT_TYPE_ASSERT, "(cacheSize > 0)", (const char *)&queryFormat, "cacheSize > 0") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 116, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->subdivCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 117, ASSERT_TYPE_ASSERT, "(frontEndDataOut->subdivCacheVb)", (const char *)&queryFormat, "frontEndDataOut->subdivCacheVb") )
    __debugbreak();
  v4 = (cacheSize + 15) & 0xFFFFFFF0;
  subdivCacheVb = frontEndDataOut->subdivCacheVb;
  if ( ((unsigned __int8)subdivCacheVb & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->subdivCacheVb) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&subdivCacheVb->used, v4);
  if ( v6 + v4 <= 0x200000 )
  {
    result = 1;
    *cacheOffset = v6;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_SUBDIV_SKINNED_CACHE_VERTICES, 0x200000i64);
    return 0;
  }
  return result;
}

/*
==============
R_FlagXModelAsSkinned
==============
*/
void R_FlagXModelAsSkinned(GfxSceneEntity *sceneEnt, unsigned int surfaceCount)
{
  volatile unsigned int state; 

  if ( sceneEnt->cull.state == 3 )
  {
    sceneEnt->cull.state = surfaceCount + 4;
  }
  else
  {
    state = sceneEnt->cull.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1605, ASSERT_TYPE_ASSERT, "( ( sceneEnt->cull.state == CULL_STATE_SKINNED_PENDING ) )", "( sceneEnt->cull.state ) = %i", state) )
      __debugbreak();
    sceneEnt->cull.state = surfaceCount + 4;
  }
}

/*
==============
R_PreSkinRigidSubdivXSurface
==============
*/
int R_PreSkinRigidSubdivXSurface(const DObj *obj, XSurface *surf, const GfxModelBaseSurface *surfaceInfo, SkinningLocalContext *skinningContext, unsigned __int8 *surfPos, GfxMotionBlurSurfBuildInfo *mbBuildInfo)
{
  __int64 rigidVertListCount; 
  bool v12; 
  unsigned __int8 SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  unsigned int subdivCacheSize; 
  unsigned int numMayhemChannelVerts; 

  _R14 = surfaceInfo;
  if ( !rg.drawRigidModels )
  {
    *(_DWORD *)surfPos = -3;
    return 4;
  }
  rigidVertListCount = surf->rigidVertListCount;
  if ( !surf->rigidVertListCount )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 569, ASSERT_TYPE_ASSERT, "(childCount)", (const char *)&queryFormat, "childCount");
    goto LABEL_7;
  }
  if ( (unsigned int)rigidVertListCount > 0x80 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 570, ASSERT_TYPE_ASSERT, "( ( childCount <= ( XMODEL_MAX_RIGID_GROUPS ) ) )", "( childCount ) = %i", rigidVertListCount);
LABEL_7:
    if ( v12 )
      __debugbreak();
  }
  if ( !surf->rigidVertLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 572, ASSERT_TYPE_ASSERT, "(surf->rigidVertLists)", (const char *)&queryFormat, "surf->rigidVertLists") )
    __debugbreak();
  _RDI = surfPos;
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups xmm1, xmmword ptr [r14+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovsd  xmm0, qword ptr [r14+30h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  *(_DWORD *)surfPos = R_GetRigidSurfaceTypeForChildCount(rigidVertListCount);
  *((_QWORD *)surfPos + 7) = surf;
  *((_DWORD *)surfPos + 18) = 1065353216;
  if ( (!R_SurfaceHasSubdivision(surf) || !_R14->subdivLodLevel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 582, ASSERT_TYPE_ASSERT, "(R_SurfaceHasSubdivision( surf ) && surfaceInfo->subdivLodLevel > 0)", (const char *)&queryFormat, "R_SurfaceHasSubdivision( surf ) && surfaceInfo->subdivLodLevel > 0") )
    __debugbreak();
  SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(surf, _R14->subdivLodLevel);
  SubdivSurfTessFactorsTotalCacheSize = R_GetSubdivSurfTessFactorsTotalCacheSize(surf, SurfaceSubdivLevel);
  if ( SubdivSurfTessFactorsTotalCacheSize )
  {
    subdivCacheSize = skinningContext->subdivCacheSize;
    skinningContext->subdivCacheSize = subdivCacheSize + SubdivSurfTessFactorsTotalCacheSize;
  }
  else
  {
    subdivCacheSize = -5;
  }
  *((_DWORD *)surfPos + 16) = subdivCacheSize;
  if ( (surf->flags & 0x100) != 0 )
  {
    numMayhemChannelVerts = skinningContext->numMayhemChannelVerts;
    skinningContext->numMayhemChannelVerts = numMayhemChannelVerts + surf->rigidVertListCount;
  }
  else
  {
    numMayhemChannelVerts = -1;
  }
  *((_DWORD *)surfPos + 1) = numMayhemChannelVerts;
  *((_DWORD *)surfPos + 2) = -1;
  R_PreSkinRigidXSurfaceChildren(obj, (GfxModelRigidSurface *)surfPos, mbBuildInfo);
  return truncate_cast<int,unsigned __int64>(32 * rigidVertListCount + 76);
}

/*
==============
R_PreSkinRigidXSurfaceChildren
==============
*/
void R_PreSkinRigidXSurfaceChildren(const DObj *obj, GfxModelRigidSurface *rigidSurf, GfxMotionBlurSurfBuildInfo *mbBuildInfo)
{
  GfxMotionBlurSurfBuildInfo *v13; 
  GfxModelRigidSurface *v14; 
  XSurface *xsurf; 
  __int64 rigidVertListCount; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned int surfUsed; 
  DObjAnimMat *prevSkinningSkel; 
  __int64 v24; 
  XRigidVertList *rigidVertLists; 
  unsigned int v26; 
  __int64 modelBoneCount; 
  int entnum; 
  const char *BoneName; 
  int v42; 
  const char *v43; 
  int v45; 
  const char *v46; 
  bool v52; 
  bool v53; 
  int v165; 
  DObjAnimMat *v166; 
  __int64 v167; 
  int v173; 
  const char *v174; 
  int v178; 
  const char *v179; 
  int v181; 
  const char *v182; 
  __int64 v276; 
  int v277; 
  int v278; 
  int v279; 
  int v280; 
  int v281; 
  int v282; 
  int v283; 
  int v284; 
  int v285; 
  int v286; 
  int v287; 
  int v288; 
  int v289; 
  int v292; 
  int v293; 
  int v294; 
  int v295; 
  int v296; 
  int v297; 
  int v298; 
  int v299; 
  bool v300; 
  DObjAnimMat *v301; 
  DObjAnimMat *v303; 
  unsigned __int8 *v304; 
  XSurface *v306; 
  const DObjAnimMat *v307; 
  unsigned int v308; 
  __int64 v309; 
  DObjAnimMat *v310; 
  DObjAnimMat *v311; 
  __int64 v312; 
  DObjSkelMat v314; 
  DObjSkelMat skelMat; 

  v13 = mbBuildInfo;
  v14 = rigidSurf;
  xsurf = rigidSurf->xsurf;
  rigidVertListCount = xsurf->rigidVertListCount;
  v306 = xsurf;
  v310 = &DObjGetRotTransArray(obj)[rigidSurf->base.modelBoneIndex];
  v311 = &DObjGetRotTransArray(obj)[v14->base.modelClientBoneIndex];
  if ( v14->base.motionblurSurf != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 285, ASSERT_TYPE_ASSERT, "(rigidSurf->base.motionblurSurf == (0xffff))", (const char *)&queryFormat, "rigidSurf->base.motionblurSurf == MOTIONBLUR_SURF_INDEX_NONE") )
    __debugbreak();
  v18 = 0;
  v19 = NULL;
  v308 = 0;
  v304 = NULL;
  v303 = NULL;
  v301 = NULL;
  v300 = 0;
  if ( v13->emitSurfs )
  {
    surfUsed = v13->surfUsed;
    if ( truncate_cast<unsigned int,unsigned __int64>(28 * rigidVertListCount + 4) + surfUsed > v13->surfCapacity )
    {
      R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_WORK_BUFFER);
      v19 = NULL;
    }
    else
    {
      prevSkinningSkel = v13->prevSkinningSkel;
      v19 = &v13->surfBegin[surfUsed];
      v304 = v19;
      *(_DWORD *)v19 = 1065353216;
      if ( prevSkinningSkel )
      {
        v303 = &prevSkinningSkel[v14->base.modelBoneIndex];
        v301 = &prevSkinningSkel[rigidSurf->base.modelClientBoneIndex];
        v14 = rigidSurf;
        v300 = v303 != NULL;
      }
      else
      {
        v301 = NULL;
        v303 = NULL;
        v14 = rigidSurf;
        v300 = 0;
      }
    }
    xsurf = v306;
  }
  if ( (_DWORD)rigidVertListCount )
  {
    __asm { vmovaps [rsp+220h+var_48+8], xmm6 }
    _R13 = v19 + 12;
    __asm { vmovaps [rsp+220h+var_58+8], xmm7 }
    _R12 = &v14->children[0].placement.preciseOrigin.xy + 1;
    __asm { vmovaps [rsp+220h+var_68+8], xmm8 }
    v24 = 0i64;
    __asm
    {
      vmovaps [rsp+220h+var_78+8], xmm9
      vmovaps [rsp+220h+var_88+8], xmm10
      vmovaps [rsp+220h+var_98+8], xmm11
      vmovaps [rsp+220h+var_A8+8], xmm12
      vmovaps [rsp+220h+var_B8+8], xmm13
      vmovaps [rsp+220h+var_C8+8], xmm14
      vmovaps [rsp+220h+var_D8+8], xmm15
    }
    v309 = 0i64;
    while ( 1 )
    {
      rigidVertLists = xsurf->rigidVertLists;
      LOWORD(_R12->y) = v18;
      v26 = *(unsigned __int16 *)((char *)&rigidVertLists->boneIndexOffset + v24);
      _RBX = *(unsigned __int16 *)((char *)&rigidVertLists->boneIndexOffset + v24);
      v312 = _RBX * 32;
      v307 = &v14->base.modelBasePoseMat[_RBX];
      LocalConvertQuatToInverseSkelMat(v307, &skelMat);
      modelBoneCount = v14->base.modelBoneCount;
      if ( v26 >= (unsigned int)modelBoneCount )
      {
        _RCX = v26 - modelBoneCount;
        _RSI = &v311[_RCX];
        if ( v300 )
        {
          _RAX = v301;
          __asm { prefetcht0 byte ptr [rcx+rax] }
        }
      }
      else
      {
        _RSI = &v310[_RBX];
        if ( v300 )
        {
          _RAX = v303;
          __asm { prefetcht0 byte ptr [rbx+rax] }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v277 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v278 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v279 & 0x7F800000) == 2139095040 )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v280 & 0x7F800000) == 2139095040 )
      {
LABEL_81:
        entnum = obj->entnum;
        BoneName = DObjGetBoneName(obj, v26);
        LODWORD(v276) = entnum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 349, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] ))", "%s\n\tBad quat for bone %s on ent %d", "!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] )", BoneName, v276) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10h]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v281 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+14h]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v282 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+18h]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v283 & 0x7F800000) == 2139095040 )
      {
LABEL_82:
        v42 = obj->entnum;
        v43 = DObjGetBoneName(obj, v26);
        LODWORD(v276) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 350, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] ))", "%s\n\tBad trans for bone %s on ent %d", "!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] )", v43, v276) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+1Ch]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v284 & 0x7F800000) == 2139095040 )
      {
        v45 = obj->entnum;
        v46 = DObjGetBoneName(obj, v26);
        LODWORD(v276) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 351, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->transWeight ))", "%s\n\tBad trans weight for bone %s on ent %d", "!IS_NAN( bone->transWeight )", v46, v276) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v285 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v286 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v287 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      if ( (v288 & 0x7F800000) == 2139095040 )
      {
LABEL_83:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1219, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+1Ch]
        vmovss  [rsp+220h+var_1E0], xmm0
      }
      v52 = (v289 & 0x7F800000) == 2139095040;
      if ( (v289 & 0x7F800000) == 2139095040 )
      {
        v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1220, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )");
        v52 = !v53;
        if ( v53 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm14, dword ptr [rsi+8]
        vmovss  xmm11, dword ptr [rsi+0Ch]
        vmovss  xmm13, dword ptr [rsi+4]
        vmovss  xmm12, dword ptr [rsi]
        vmovss  xmm0, dword ptr [rsi+1Ch]
        vmovss  xmm15, cs:__real@3f800000
      }
      _RAX = v307;
      __asm
      {
        vmulss  xmm1, xmm12, xmm0
        vmulss  xmm2, xmm13, xmm0
        vmulss  xmm3, xmm14, xmm0
        vmulss  xmm10, xmm12, xmm1
        vmulss  xmm5, xmm13, xmm1
        vmulss  xmm7, xmm14, xmm1
        vmulss  xmm8, xmm11, xmm1
        vmulss  xmm9, xmm13, xmm2
        vmulss  xmm6, xmm14, xmm2
        vmulss  xmm4, xmm14, xmm3
        vmulss  xmm1, xmm11, xmm3
        vmulss  xmm2, xmm11, xmm2
        vxorps  xmm3, xmm3, xmm3
        vaddss  xmm0, xmm4, xmm9
        vsubss  xmm0, xmm15, xmm0
        vmovss  dword ptr [rbp+120h+var_160.axis], xmm0
        vaddss  xmm0, xmm1, xmm5
        vmovss  dword ptr [rbp+120h+var_160.axis+4], xmm0
        vsubss  xmm0, xmm7, xmm2
        vmovss  dword ptr [rbp+120h+var_160.axis+8], xmm0
        vsubss  xmm0, xmm5, xmm1
        vmovss  xmm5, dword ptr [rax]
        vmovss  dword ptr [rbp+120h+var_160.axis+10h], xmm0
        vaddss  xmm0, xmm4, xmm10
        vmovss  xmm4, dword ptr [rax+4]
        vsubss  xmm0, xmm15, xmm0
        vmovss  dword ptr [rbp+120h+var_160.axis+14h], xmm0
        vaddss  xmm0, xmm6, xmm8
        vmovss  dword ptr [rbp+120h+var_160.axis+18h], xmm0
        vaddss  xmm0, xmm2, xmm7
        vmovss  xmm7, dword ptr [rax+8]
        vmovss  dword ptr [rbp+120h+var_160.axis+20h], xmm0
        vsubss  xmm0, xmm6, xmm8
        vmovss  xmm6, dword ptr [rax+0Ch]
        vmovss  dword ptr [rbp+120h+var_160.axis+24h], xmm0
        vaddss  xmm0, xmm9, xmm10
        vsubss  xmm0, xmm15, xmm0
        vmovss  dword ptr [rbp+120h+var_160.axis+28h], xmm0
        vmovss  xmm0, dword ptr [rsi+10h]
        vmovss  dword ptr [rsp+44h], xmm0
        vmovss  dword ptr [rbp+120h+var_160.origin], xmm0
        vmovss  xmm0, dword ptr [rsi+14h]
        vmovss  [rsp+220h+var_1E0], xmm0
        vmovss  dword ptr [rbp+120h+var_160.origin+4], xmm0
        vmovss  xmm0, dword ptr [rsi+18h]
        vmovss  dword ptr [rsp+220h+var_1B0], xmm0
        vmovss  dword ptr [rbp+120h+var_160.origin+8], xmm0
        vmovss  dword ptr [rbp+120h+var_160.axis+0Ch], xmm3
        vmovss  dword ptr [rbp+120h+var_160.axis+1Ch], xmm3
        vmovss  dword ptr [rbp+120h+var_160.axis+2Ch], xmm3
        vmulss  xmm0, xmm11, xmm5
        vmulss  xmm1, xmm12, xmm6
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm13, xmm7
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm14, xmm4
        vaddss  xmm8, xmm3, xmm0
        vmulss  xmm0, xmm11, xmm4
        vmulss  xmm1, xmm12, xmm7
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm13, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm14, xmm5
        vsubss  xmm9, xmm3, xmm0
        vmulss  xmm0, xmm11, xmm7
        vmulss  xmm1, xmm12, xmm4
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm13, xmm5
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm14, xmm6
        vaddss  xmm10, xmm3, xmm2
        vmovss  dword ptr [rbp+120h+var_160.origin+0Ch], xmm15
        vmulss  xmm1, xmm12, xmm5
        vmulss  xmm0, xmm11, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm13, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm14, xmm7
        vaddss  xmm4, xmm3, xmm0
        vmulss  xmm0, xmm8, xmm8
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm10
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vucomiss xmm1, cs:__real@00000000
      }
      if ( !v52 )
      {
        __asm
        {
          vdivss  xmm0, xmm15, xmm1
          vmulss  xmm8, xmm0, xmm8
          vmulss  xmm9, xmm0, xmm9
          vmulss  xmm10, xmm0, xmm10
          vmulss  xmm4, xmm0, xmm4
        }
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+120h+skelMat.origin]
        vmovss  xmm15, dword ptr [rbp+120h+skelMat.origin+4]
        vmulss  xmm0, xmm6, dword ptr [rbp+120h+var_160.axis+4]
        vmovss  xmm7, dword ptr [rbp+120h+skelMat.origin+8]
        vmulss  xmm1, xmm15, dword ptr [rbp+120h+var_160.axis+14h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rbp+120h+var_160.axis+24h]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm5, xmm0, [rsp+220h+var_1E0]
        vmulss  xmm2, xmm6, dword ptr [rbp+120h+var_160.axis+8]
        vmulss  xmm1, xmm15, dword ptr [rbp+120h+var_160.axis+18h]
        vmulss  xmm0, xmm7, dword ptr [rbp+120h+var_160.axis+28h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rbp+120h+var_160.axis]
        vmovss  xmm6, cs:__real@45800000
        vmovss  dword ptr [r12-18h], xmm8
        vmovss  dword ptr [r12-14h], xmm9
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm15, dword ptr [rbp+120h+var_160.axis+10h]
        vmovss  dword ptr [r12-10h], xmm10
        vmovss  dword ptr [r12-0Ch], xmm4
        vaddss  xmm4, xmm2, dword ptr [rsp+220h+var_1B0]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rbp+120h+var_160.axis+20h]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, dword ptr [rsp+44h]
        vmulss  xmm2, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
        vmulss  xmm3, xmm0, xmm6
        vmulss  xmm1, xmm5, xmm6
        vcvttss2si r8d, xmm1
        vmulss  xmm1, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
        vcvttss2si eax, xmm2
        vmovss  xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
        vmulss  xmm0, xmm4, xmm6
        vcvttss2si r9d, xmm0
        vmulss  xmm0, xmm2, cs:__real@c5800000
        vcvttss2si edx, xmm3
      }
      _R12[-1].v[0] = _EDX + _EAX;
      __asm { vcvttss2si ecx, xmm1 }
      _R12[-1].v[1] = _ECX + _ER8;
      __asm { vcvttss2si eax, xmm0 }
      v165 = _ER9 - _EAX;
      _R12->v[0] = v165;
      if ( v304 )
      {
        if ( v303 )
        {
          v166 = v301;
          if ( !v301 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 371, ASSERT_TYPE_ASSERT, "(clientBoneMatrixPrevFrame != 0)", (const char *)&queryFormat, "clientBoneMatrixPrevFrame != NULL") )
              __debugbreak();
            v166 = NULL;
          }
          v167 = rigidSurf->base.modelBoneCount;
          if ( v26 >= (unsigned int)v167 )
            _RDI = &v166[v26 - v167];
          else
            _RDI = (DObjAnimMat *)((char *)v303 + v312);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v292 & 0x7F800000) == 2139095040 )
            goto LABEL_84;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v293 & 0x7F800000) == 2139095040 )
            goto LABEL_84;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+8]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v294 & 0x7F800000) == 2139095040 )
            goto LABEL_84;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v295 & 0x7F800000) == 2139095040 )
          {
LABEL_84:
            v173 = obj->entnum;
            v174 = DObjGetBoneName(obj, v26);
            LODWORD(v276) = v173;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 382, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] ))", "%s\n\tBad previous frame quat for bone %s on ent %d", "!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] )", v174, v276) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+10h]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v296 & 0x7F800000) == 2139095040 )
            goto LABEL_85;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v297 & 0x7F800000) == 2139095040 )
            goto LABEL_85;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+18h]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v298 & 0x7F800000) == 2139095040 )
          {
LABEL_85:
            v178 = obj->entnum;
            v179 = DObjGetBoneName(obj, v26);
            LODWORD(v276) = v178;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 383, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] ))", "%s\n\tBad previous frame trans for bone %s on ent %d", "!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] )", v179, v276) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1Ch]
            vmovss  dword ptr [rsp+44h], xmm0
          }
          if ( (v299 & 0x7F800000) == 2139095040 )
          {
            v181 = obj->entnum;
            v182 = DObjGetBoneName(obj, v26);
            LODWORD(v276) = v181;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 384, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->transWeight ))", "%s\n\tBad previous frame trans weight for bone %s on ent %d", "!IS_NAN( bone->transWeight )", v182, v276) )
              __debugbreak();
          }
          LocalConvertQuatToSkelMat(_RDI, &v314);
          _RAX = v307;
          __asm
          {
            vmovss  xmm8, dword ptr [rdi]
            vmovss  xmm9, dword ptr [rdi+0Ch]
            vmovss  xmm6, dword ptr [rdi+4]
            vmovss  xmm4, dword ptr [rax]
            vmovss  xmm10, dword ptr [rax+0Ch]
            vmovss  xmm11, dword ptr [rax+8]
            vmovss  xmm5, dword ptr [rax+4]
            vmovss  xmm7, dword ptr [rdi+8]
            vmulss  xmm0, xmm9, xmm4
            vmulss  xmm1, xmm8, xmm10
            vsubss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm11
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm7, xmm5
            vaddss  xmm12, xmm3, xmm0
            vmulss  xmm0, xmm9, xmm5
            vmulss  xmm1, xmm8, xmm11
            vsubss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm7, xmm4
            vmulss  xmm1, xmm6, xmm10
            vaddss  xmm3, xmm2, xmm1
            vsubss  xmm13, xmm3, xmm0
            vmulss  xmm2, xmm6, xmm4
            vmulss  xmm0, xmm9, xmm11
            vmulss  xmm1, xmm8, xmm5
            vaddss  xmm1, xmm1, xmm0
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm8, xmm4
            vmulss  xmm2, xmm7, xmm10
            vaddss  xmm14, xmm3, xmm2
            vmulss  xmm0, xmm9, xmm10
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm5
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm7, xmm11
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm0, xmm12, xmm12
            vmulss  xmm1, xmm13, xmm13
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm14, xmm14
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vucomiss xmm1, cs:__real@00000000
          }
          if ( !v52 )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vdivss  xmm0, xmm0, xmm1
              vmulss  xmm12, xmm0, xmm12
              vmulss  xmm13, xmm0, xmm13
              vmulss  xmm14, xmm0, xmm14
              vmulss  xmm4, xmm0, xmm4
            }
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+120h+skelMat.origin]
            vmulss  xmm0, xmm6, dword ptr [rbp+120h+var_160.axis+4]
            vmovss  xmm7, dword ptr [rbp+120h+skelMat.origin+8]
            vmulss  xmm1, xmm15, dword ptr [rbp+120h+var_160.axis+14h]
            vmulss  xmm3, xmm15, dword ptr [rbp+120h+var_160.axis+18h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm6, dword ptr [rbp+120h+var_160.axis+8]
            vmulss  xmm1, xmm7, dword ptr [rbp+120h+var_160.axis+24h]
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm5, xmm2, dword ptr [rbp+120h+var_160.origin+4]
            vmulss  xmm1, xmm7, dword ptr [rbp+120h+var_160.axis+28h]
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm0, xmm6, dword ptr [rbp+120h+var_160.axis]
            vmovss  xmm6, cs:__real@45800000
            vmulss  xmm3, xmm15, dword ptr [rbp+120h+var_160.axis+10h]
            vmovss  dword ptr [r13-8], xmm12
            vaddss  xmm2, xmm2, xmm1
            vmulss  xmm1, xmm7, dword ptr [rbp+120h+var_160.axis+20h]
            vmovss  dword ptr [r13-4], xmm13
            vmovss  dword ptr [r13+0], xmm14
            vmovss  dword ptr [r13+4], xmm4
            vaddss  xmm4, xmm2, dword ptr [rbp+120h+var_160.origin+8]
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm2, xmm2, xmm1
            vaddss  xmm0, xmm2, dword ptr [rbp+120h+var_160.origin]
            vmulss  xmm2, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev; GfxScene scene
            vmulss  xmm3, xmm0, xmm6
            vmulss  xmm1, xmm5, xmm6
            vcvttss2si r8d, xmm1
            vmulss  xmm1, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev+4; GfxScene scene
            vcvttss2si eax, xmm2
            vmovss  xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev+8; GfxScene scene
            vmulss  xmm0, xmm4, xmm6
            vcvttss2si r9d, xmm0
            vmulss  xmm0, xmm2, cs:__real@c5800000
            vcvttss2si edx, xmm3
          }
          _R13[2] = _EDX + _EAX;
          __asm { vcvttss2si ecx, xmm1 }
          _R13[3] = _ECX + _ER8;
          __asm { vcvttss2si eax, xmm0 }
          v165 = _ER9 - _EAX;
        }
        else
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r12-18h]
            vmovsd  xmm1, qword ptr [r12-8]
            vmovups xmmword ptr [r13-8], xmm0
            vmovsd  qword ptr [r13+8], xmm1
          }
        }
        _R13[4] = v165;
      }
      _R12 += 4;
      v18 = v308 + 1;
      xsurf = v306;
      v24 = v309 + 8;
      _R13 += 7;
      v308 = v18;
      v309 += 8i64;
      if ( v18 >= v306->rigidVertListCount )
        break;
      v14 = rigidSurf;
    }
    v13 = mbBuildInfo;
    __asm
    {
      vmovaps xmm15, [rsp+220h+var_D8+8]
      vmovaps xmm14, [rsp+220h+var_C8+8]
      vmovaps xmm13, [rsp+220h+var_B8+8]
      vmovaps xmm12, [rsp+220h+var_A8+8]
      vmovaps xmm11, [rsp+220h+var_98+8]
      vmovaps xmm10, [rsp+220h+var_88+8]
      vmovaps xmm9, [rsp+220h+var_78+8]
      vmovaps xmm8, [rsp+220h+var_68+8]
      vmovaps xmm7, [rsp+220h+var_58+8]
      vmovaps xmm6, [rsp+220h+var_48+8]
    }
  }
  if ( v304 )
  {
    if ( v13->surfUsed > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 410, ASSERT_TYPE_ASSERT, "(mbBuildInfo->surfUsed <= (0xffff))", (const char *)&queryFormat, "mbBuildInfo->surfUsed <= MOTIONBLUR_SURF_INDEX_MAX") )
      __debugbreak();
    rigidSurf->base.motionblurSurf = truncate_cast<unsigned short,unsigned int>(v13->surfUsed);
    v13->surfUsed += truncate_cast<unsigned int,unsigned __int64>(28i64 * v18 + 4);
  }
}

/*
==============
R_PreSkinSubdivXSurface
==============
*/
int R_PreSkinSubdivXSurface(const DObj *obj, XSurface *surf, const GfxModelBaseSurface *surfaceInfo, SkinningLocalContext *skinningContext, unsigned __int8 *surfPos, GfxMotionBlurSurfBuildInfo *mbBuildInfo)
{
  int result; 
  unsigned int numSkinnedVerts; 
  int subdivLodLevel; 
  unsigned int v16; 
  unsigned int SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  unsigned int subdivCacheSize; 
  unsigned int numMayhemChannelVerts; 

  _RBX = surfaceInfo;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 627, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 628, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 629, ASSERT_TYPE_ASSERT, "(surfaceInfo)", (const char *)&queryFormat, "surfaceInfo") )
    __debugbreak();
  if ( (surf->flags & 2) == 0 )
    return R_PreSkinRigidSubdivXSurface(obj, surf, _RBX, skinningContext, surfPos, mbBuildInfo);
  if ( rg.drawSkinnedModels )
  {
    _R14 = surfPos;
    numSkinnedVerts = skinningContext->numSkinnedVerts;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups xmm1, xmmword ptr [rbx+20h]
    }
    subdivLodLevel = _RBX->subdivLodLevel;
    v16 = numSkinnedVerts + surf->vertCount;
    __asm
    {
      vmovups ymmword ptr [r14], ymm0
      vmovsd  xmm0, qword ptr [rbx+30h]
      vmovups xmmword ptr [r14+20h], xmm1
      vmovsd  qword ptr [r14+30h], xmm0
    }
    *(_DWORD *)surfPos = numSkinnedVerts;
    *((_QWORD *)surfPos + 7) = surf;
    skinningContext->numSkinnedVerts = v16;
    SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(surf, subdivLodLevel);
    *((_DWORD *)surfPos + 18) = skinningContext->subdivCacheSize;
    skinningContext->subdivCacheSize += R_GetSubdivSurfVertsTotalCacheSize(surf, SurfaceSubdivLevel);
    SubdivSurfTessFactorsTotalCacheSize = R_GetSubdivSurfTessFactorsTotalCacheSize(surf, SurfaceSubdivLevel);
    if ( SubdivSurfTessFactorsTotalCacheSize )
    {
      subdivCacheSize = skinningContext->subdivCacheSize;
      skinningContext->subdivCacheSize = subdivCacheSize + SubdivSurfTessFactorsTotalCacheSize;
    }
    else
    {
      subdivCacheSize = -5;
    }
    *((_DWORD *)surfPos + 16) = subdivCacheSize;
    if ( (surf->flags & 0x100) != 0 )
    {
      numMayhemChannelVerts = skinningContext->numMayhemChannelVerts;
      skinningContext->numMayhemChannelVerts = numMayhemChannelVerts + surf->vertCount;
    }
    else
    {
      numMayhemChannelVerts = -1;
    }
    *((_DWORD *)surfPos + 1) = numMayhemChannelVerts;
    result = 136;
    *((_DWORD *)surfPos + 2) = -1;
  }
  else
  {
    *(_DWORD *)surfPos = -3;
    return 4;
  }
  return result;
}

/*
==============
R_PreSkinXSurface
==============
*/
int R_PreSkinXSurface(const DObj *obj, XSurface *surf, const GfxModelBaseSurface *surfaceInfo, SkinningLocalContext *skinningContext, unsigned __int8 *surfPos, GfxMotionBlurSurfBuildInfo *mbBuildInfo)
{
  unsigned __int16 flags; 
  __int64 rigidVertListCount; 
  bool v12; 
  unsigned int v17; 
  unsigned int v18; 
  int result; 
  unsigned int numSkinnedVerts; 
  int vertCount; 
  unsigned int numMayhemChannelVerts; 
  __int64 v27; 

  _R14 = surfaceInfo;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 491, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 492, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 493, ASSERT_TYPE_ASSERT, "(surfaceInfo)", (const char *)&queryFormat, "surfaceInfo") )
    __debugbreak();
  flags = surf->flags;
  if ( (surf->flags & 2) != 0 )
  {
    if ( rg.drawSkinnedModels )
    {
      _RDX = surfPos;
      numSkinnedVerts = skinningContext->numSkinnedVerts;
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups xmm1, xmmword ptr [r14+20h]
      }
      vertCount = surf->vertCount;
      __asm
      {
        vmovups ymmword ptr [rdx], ymm0
        vmovsd  xmm0, qword ptr [r14+30h]
        vmovups xmmword ptr [rdx+20h], xmm1
        vmovsd  qword ptr [rdx+30h], xmm0
      }
      *(_DWORD *)surfPos = numSkinnedVerts;
      skinningContext->numSkinnedVerts = vertCount + numSkinnedVerts;
      *((_QWORD *)surfPos + 7) = surf;
      if ( (flags & 0x100) != 0 )
      {
        numMayhemChannelVerts = skinningContext->numMayhemChannelVerts;
        skinningContext->numMayhemChannelVerts = vertCount + numMayhemChannelVerts;
      }
      else
      {
        numMayhemChannelVerts = -1;
      }
      *((_DWORD *)surfPos + 1) = numMayhemChannelVerts;
      result = 136;
      *((_DWORD *)surfPos + 2) = -1;
      return result;
    }
LABEL_30:
    *(_DWORD *)surfPos = -3;
    return 4;
  }
  if ( !rg.drawRigidModels )
    goto LABEL_30;
  rigidVertListCount = surf->rigidVertListCount;
  if ( !surf->rigidVertListCount )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 437, ASSERT_TYPE_ASSERT, "(childCount)", (const char *)&queryFormat, "childCount");
    goto LABEL_16;
  }
  if ( (unsigned int)rigidVertListCount > 0x80 )
  {
    LODWORD(v27) = surf->rigidVertListCount;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 438, ASSERT_TYPE_ASSERT, "( ( childCount <= ( XMODEL_MAX_RIGID_GROUPS ) ) )", "( childCount ) = %i", v27);
LABEL_16:
    if ( v12 )
      __debugbreak();
  }
  if ( !surf->rigidVertLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 439, ASSERT_TYPE_ASSERT, "(surf->rigidVertLists)", (const char *)&queryFormat, "surf->rigidVertLists") )
    __debugbreak();
  _RSI = surfPos;
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups xmm1, xmmword ptr [r14+20h]
    vmovups ymmword ptr [rsi], ymm0
    vmovsd  xmm0, qword ptr [r14+30h]
    vmovups xmmword ptr [rsi+20h], xmm1
    vmovsd  qword ptr [rsi+30h], xmm0
  }
  *(_DWORD *)surfPos = R_GetRigidSurfaceTypeForChildCount(rigidVertListCount);
  *((_QWORD *)surfPos + 7) = surf;
  *((_DWORD *)surfPos + 18) = 1065353216;
  *((_DWORD *)surfPos + 16) = -5;
  if ( (surf->flags & 0x100) != 0 )
  {
    v17 = skinningContext->numMayhemChannelVerts;
    skinningContext->numMayhemChannelVerts = v17 + surf->rigidVertListCount;
  }
  else
  {
    v17 = -1;
  }
  *((_DWORD *)surfPos + 1) = v17;
  if ( skinningContext->mayhemSelfVis.enable && (surf->flags & 0x200) != 0 )
    v18 = (skinningContext->mayhemSelfVis.animDataIndex << 24) | (skinningContext->surfaceVertOffset + skinningContext->mayhemSelfVis.channel->vertexOffset);
  else
    v18 = -1;
  *((_DWORD *)surfPos + 2) = v18;
  R_PreSkinRigidXSurfaceChildren(obj, (GfxModelRigidSurface *)surfPos, mbBuildInfo);
  return truncate_cast<int,unsigned __int64>(32 * rigidVertListCount + 76);
}

/*
==============
R_SkinSceneDObj
==============
*/
void R_SkinSceneDObj(GfxSceneEntity *sceneEnt, GfxSceneEntity *localSceneEnt, const DObj *obj, const DObjAnimMat *boneMatrix, GfxViewDomain viewDomain)
{
  GfxSceneEntityCull *p_cull; 
  unsigned int v10; 
  unsigned int v12; 
  __int64 v13; 
  float outObjRadius; 

  if ( !localSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1620, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
    __debugbreak();
  if ( !boneMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1621, ASSERT_TYPE_ASSERT, "(boneMatrix)", (const char *)&queryFormat, "boneMatrix") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1622, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( localSceneEnt->cull.state < 4 )
  {
    p_cull = &sceneEnt->cull;
    if ( ((unsigned __int8)p_cull & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", p_cull) )
      __debugbreak();
    if ( _InterlockedCompareExchange((volatile signed __int32 *)p_cull, 3, 2) == 2 )
    {
      v10 = R_SkinSceneDObjModels(localSceneEnt, obj, boneMatrix, viewDomain, &outObjRadius);
      __asm { vmovss  xmm1, [rsp+48h+outObjRadius]; radius }
      v12 = v10;
      DObjRecordSkelOnSkinning(obj, *(float *)&_XMM1);
      if ( localSceneEnt->cull.state != 3 )
      {
        LODWORD(v13) = localSceneEnt->cull.state;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1605, ASSERT_TYPE_ASSERT, "( ( sceneEnt->cull.state == CULL_STATE_SKINNED_PENDING ) )", "( sceneEnt->cull.state ) = %i", v13) )
          __debugbreak();
      }
      localSceneEnt->cull.state = v12 + 4;
    }
  }
}

/*
==============
R_SkinSceneDObjModels
==============
*/
__int64 R_SkinSceneDObjModels(GfxSceneEntity *sceneEnt, const DObj *obj, const DObjAnimMat *boneMatrix, GfxViewDomain viewDomain)
{
  signed __int64 v4; 
  void *v7; 
  const DObj *v9; 
  char *Value; 
  unsigned int *v12; 
  unsigned int v13; 
  _QWORD *v14; 
  char *v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  ThreadContext CurrentThreadContext; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v27; 
  XModel *v28; 
  unsigned int numBones; 
  XModelBlendShapeInfo *blendShapeInfo; 
  unsigned int v31; 
  unsigned __int16 gfxPackedEntityIndexBase; 
  DObjMaterialData *materialData; 
  unsigned __int8 ModelSubdivLodLevel; 
  XSurface *v39; 
  unsigned int v41; 
  __int64 v42; 
  unsigned __int8 *v43; 
  unsigned int v45; 
  char v50; 
  unsigned int v51; 
  unsigned int v52; 
  char v53; 
  char v54; 
  unsigned int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  unsigned int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  unsigned int v77; 
  __int64 v78; 
  int v79; 
  int v80; 
  __int64 v81; 
  __int64 v82; 
  unsigned int *v83; 
  __int64 v84; 
  unsigned int *v85; 
  unsigned int v86; 
  char v87; 
  char v88; 
  unsigned int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  unsigned int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  unsigned int v111; 
  unsigned int rigidVertListCount; 
  unsigned int v117; 
  __int64 v118; 
  unsigned int boneIndexOffset; 
  int v120; 
  unsigned int v121; 
  unsigned __int8 *v127; 
  int v128; 
  int v129; 
  const char *Name; 
  int v131; 
  const char *v132; 
  int v133; 
  unsigned int v134; 
  unsigned int v135; 
  int v136; 
  unsigned __int8 *v137; 
  unsigned __int8 *v138; 
  unsigned __int8 v139; 
  unsigned __int8 v141; 
  XModel *prevSkinningSkel; 
  unsigned int v148; 
  XModel **v149; 
  unsigned __int16 dobjBlendShapeTargetCount; 
  const float *dobjBlendShapeWeights; 
  unsigned __int8 v152; 
  int objBufIndex; 
  int partBitCount; 
  unsigned int v155; 
  unsigned int v156; 
  DObjAnimMat *v157; 
  size_t v158; 
  volatile int *p_surfPos; 
  signed __int32 v160; 
  unsigned __int8 *v161; 
  GfxSceneEntity *v162; 
  __int64 result; 
  float fmt; 
  unsigned int *outAnimDataIndex; 
  DObjAnimMat *skelMatArrayPrevFrame; 
  XModel **models; 
  unsigned int numModels; 
  unsigned __int8 dismembermentPointCount; 
  bool skinningEnabled; 
  GfxViewDomain v176; 
  unsigned int v177; 
  unsigned __int16 surfaceCount[2]; 
  unsigned int v179; 
  int v180; 
  unsigned int ClientBoneOffset; 
  unsigned int val; 
  int entnum; 
  unsigned __int8 *surfPos; 
  unsigned int v185; 
  int numClientBones; 
  unsigned int v187; 
  GfxSceneEntity *sceneEnta; 
  __int64 v189; 
  DObj *obja; 
  SkinningLocalContext skinningContext; 
  XSurface *surfaces; 
  DObjAnimMat *skelMatArray; 
  XModel *model; 
  unsigned __int8 *dismembermentIndicesBuffer; 
  GfxMotionBlurSurfBuildInfo mbBuildInfo; 
  vec3_t *dismembermentPointsBuffer; 
  GfxModelBaseSurface surfaceInfo; 
  vec3_t outOrigin; 
  float outObjRadiusa; 
  __int64 v201; 
  __int64 data[2]; 
  DObjPartBits surfacePartBits; 
  int v204; 
  __int16 v205; 
  unsigned __int16 NumBlendShapeTargetWeights; 
  float v208; 
  float v210; 
  DObjAnimMat *v211; 
  __int128 v212; 
  int v213; 
  unsigned int v214; 
  int v215; 
  int v216; 
  int v217; 
  int v218; 
  int v219; 
  int v220; 
  int v221; 
  vec4_t quat; 
  DObjPartBitsAligned partBits; 
  tmat33_t<vec3_t> axis; 
  unsigned __int8 dismembermentPointBoneIndices[8]; 
  unsigned __int8 surfModelIndex[128]; 
  char v227; 
  unsigned __int8 modelSurfs[65664]; 
  char v229; 
  unsigned __int8 v230[16]; 
  char v233; 

  v7 = alloca(v4);
  v201 = -2i64;
  __asm
  {
    vmovaps [rsp+13670h+var_40], xmm6
    vmovaps [rsp+13670h+var_50], xmm7
  }
  v176 = viewDomain;
  skelMatArray = (DObjAnimMat *)boneMatrix;
  v9 = obj;
  obja = (DObj *)obj;
  _R13 = sceneEnt;
  sceneEnta = sceneEnt;
  memset(&skinningContext, 0, 17);
  skinningContext.mayhemSelfVis.animDataIndex = -1;
  skinningContext.mayhemSelfVis.channel = NULL;
  dismembermentPointCount = 0;
  dismembermentIndicesBuffer = NULL;
  dismembermentPointsBuffer = NULL;
  if ( sceneEnt->cull.skinnedSurfs.firstSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1113, ASSERT_TYPE_ASSERT, "(!sceneEnt->cull.skinnedSurfs.firstSurf)", (const char *)&queryFormat, "!sceneEnt->cull.skinnedSurfs.firstSurf") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !boneMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1116, ASSERT_TYPE_ASSERT, "(boneMatrix)", (const char *)&queryFormat, "boneMatrix") )
    __debugbreak();
  skinningEnabled = frontEndDataOut->compute.skinningEnabled;
  mbBuildInfo.prevSkinningSkel = DObjGetPrevSkinningSkel(v9, r_glob.curFrameSkelTimeStamp, r_glob.prevSkelTimeStampMaxDifference, &outObjRadiusa);
  mbBuildInfo.skinCacheEntry = CG_GetSkinCacheEntry(_R13->info.pose);
  mbBuildInfo.surfBegin = (unsigned __int8 *)&v227;
  mbBuildInfo.surfUsed = 0;
  mbBuildInfo.surfCapacity = 0x2000;
  mbBuildInfo.emitSurfs = (*((_DWORD *)_R13 + 347) & 0x200) != 0;
  mbBuildInfo.useVertexCaches = mbBuildInfo.emitSurfs;
  Value = (char *)Sys_GetValue(0);
  v12 = (unsigned int *)(Value + 4776);
  if ( (unsigned int)(*((_DWORD *)Value + 1194) + 1) >= 3 )
  {
    LODWORD(outAnimDataIndex) = *((_DWORD *)Value + 1194) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outAnimDataIndex, 3) )
      __debugbreak();
  }
  v13 = *v12 + 1;
  *v12 = v13;
  if ( v13 >= 3 )
  {
    LODWORD(skelMatArrayPrevFrame) = 3;
    LODWORD(outAnimDataIndex) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outAnimDataIndex, skelMatArrayPrevFrame) )
      __debugbreak();
  }
  v14 = Value + 2088;
  v15 = Value + 40;
  if ( *v14 < (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v14 += 8i64;
  if ( *v14 >= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v14 = v12;
  if ( *v14 <= (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v16 = (int)*v12;
  v17 = __rdtsc();
  v12[v16 + 2] = v17;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 67, NULL, 0);
  v19 = modelSurfs;
  surfPos = modelSurfs;
  v177 = 0;
  v187 = 0;
  ClientBoneOffset = DObjGetClientBoneOffset(v9);
  entnum = DObjGetNumModels(v9);
  *(_DWORD *)surfaceCount = 0;
  v180 = 0;
  v20 = 0;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  _RBX = &surfacePartBits;
  do
  {
    __asm { vmovdqu xmmword ptr [rbx], xmm6 }
    ++v20;
    _RBX = (DObjPartBits *)((char *)_RBX + 16);
  }
  while ( v20 < 2 );
  DObjGetHidePartBits(v9, &partBits);
  GfxSceneEntity_GetPlacementOrigin(_R13, &outOrigin);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0Ch]
    vmovups xmmword ptr [rbp+13550h+quat], xmm0
  }
  v24 = 0;
  val = 0;
  v25 = v177;
  if ( entnum )
  {
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    v27 = ClientBoneOffset;
    while ( 1 )
    {
      v28 = (XModel *)DObjGetModel(v9, v24);
      model = v28;
      if ( !v28 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1188, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      numBones = v28->numBones;
      blendShapeInfo = v28->blendShapeInfo;
      LODWORD(v189) = blendShapeInfo ? blendShapeInfo->targetCount : 0;
      numClientBones = v28->numClientBones;
      *(_QWORD *)dismembermentPointBoneIndices = v24;
      v31 = sceneEnta->lods[v24];
      if ( v31 != 6 )
      {
        v185 = XModelGetSurfaces(v28, &surfaces, v31);
        if ( v185 )
          break;
      }
LABEL_285:
      v24 = val + 1;
      val = v24;
      v25 += numBones;
      v177 = v25;
      v27 += numClientBones;
      ClientBoneOffset = v27;
      v187 += v189;
      if ( v24 >= entnum )
      {
        v19 = surfPos;
        _R13 = sceneEnta;
        goto LABEL_287;
      }
    }
    _RCX = surfaces;
    __asm { prefetcht0 byte ptr [rcx+70h] }
    surfaceInfo.skinnedCachedOffset = 0;
    if ( v25 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v25, "unsigned", v25) )
      __debugbreak();
    surfaceInfo.modelBoneIndex = v25;
    if ( v187 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v187, "unsigned", v187) )
      __debugbreak();
    surfaceInfo.modelBlendShapeTargetIndex = v187;
    surfaceInfo.modelBasePoseMat = v28->baseMat;
    surfaceInfo.modelBoneCount = numBones;
    surfaceInfo.modelClientBoneCount = numClientBones;
    if ( v27 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v27, "unsigned", v27) )
      __debugbreak();
    surfaceInfo.modelClientBoneIndex = v27;
    _RCX = sceneEnta;
    surfaceInfo.gfxEntIndex = *((_WORD *)sceneEnta + 692) & 0x3FF;
    surfaceInfo.mapEntLookup = sceneEnta->mapEntLookup;
    surfaceInfo.lightingInfo.lgv.allocatedVolumeInfoSlot = 0;
    _R8 = *(_QWORD *)dismembermentPointBoneIndices;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+r8*4+170h]
      vmovss  [rbp+13550h+surfaceInfo.materialLod], xmm0
    }
    surfaceInfo.tensionDataOffset = -1;
    surfaceInfo.motionblurSurf = -1;
    gfxPackedEntityIndexBase = sceneEnta->gfxPackedEntityIndexBase;
    surfaceInfo.reIndexedEntityId = gfxPackedEntityIndexBase;
    materialData = v9->materialData;
    if ( materialData && gfxPackedEntityIndexBase )
      surfaceInfo.reIndexedEntityId = gfxPackedEntityIndexBase + materialData->modelEntityDataOffset[*(_QWORD *)dismembermentPointBoneIndices];
    if ( !R_ModelLodHasSubdivision(v28, v31) )
      goto LABEL_57;
    QuatToAxis(&quat, &axis);
    __asm { vmovss  dword ptr [rsp+13670h+fmt], xmm7 }
    ModelSubdivLodLevel = R_GetModelSubdivLodLevel(v28, v31, &outOrigin, &axis, fmt);
    surfaceInfo.subdivLodLevel = ModelSubdivLodLevel;
    if ( ModelSubdivLodLevel )
    {
      if ( !R_CacheRigidSubdivLod(v28, v31) )
      {
LABEL_57:
        ModelSubdivLodLevel = 0;
        surfaceInfo.subdivLodLevel = 0;
      }
    }
    v39 = surfaces;
    if ( !surfaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1286, ASSERT_TYPE_ASSERT, "(surfaces)", (const char *)&queryFormat, "surfaces") )
      __debugbreak();
    *(_DWORD *)surfaceCount += v185;
    if ( v185 > 0x80 )
    {
      LODWORD(outAnimDataIndex) = v185;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1289, ASSERT_TYPE_ASSERT, "( ( surfaceCount <= DOBJ_MAX_SURFS ) )", "( surfaceCount ) = %i", outAnimDataIndex) )
        __debugbreak();
    }
    _ZF = (v28->flags & 0x8000000) == 0;
    skinningContext.mayhemSelfVis.enable = (v28->flags & 0x8000000) != 0;
    if ( !_ZF )
      skinningContext.mayhemSelfVis.enable = R_MayhemSelfVis_GetPerModelData(frontEndDataOut, sceneEnta, v9, v28, &skinningContext.mayhemSelfVis.channel, &skinningContext.mayhemSelfVis.animDataIndex);
    skinningContext.surfaceVertOffset = 0;
    v41 = 0;
    v179 = 0;
    v42 = 0i64;
    *(_QWORD *)dismembermentPointBoneIndices = 0i64;
    v43 = surfPos;
    while ( 1 )
    {
      _R15 = &v39[v42];
      if ( v43 > (unsigned __int8 *)&v229 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SURF_BUF);
$hide:
        *(_DWORD *)v43 = -3;
        v43 += 4;
        surfPos = v43;
        if ( v43 > v230 )
        {
          Name = XModelGetName(model);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1344, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", Name) )
            __debugbreak();
        }
        skinningContext.surfaceVertOffset += _R15->vertCount;
        surfModelIndex[v180] = truncate_cast<unsigned char,unsigned int>(val);
        goto LABEL_279;
      }
      v45 = 0;
      _RBX = 0i64;
      do
      {
        __asm
        {
          vlddqu  xmm6, xmmword ptr [rbx+r15+70h]
          vmovdqu [rbp+rbx+13550h+var_13450], xmm6
        }
        ++v45;
        _RBX += 16i64;
      }
      while ( v45 < 2 );
      _RAX = 192i64 * (v179 + 1);
      _RCX = surfaces;
      __asm { prefetcht0 byte ptr [rax+rcx+70h] }
      v50 = v213;
      if ( !numBones )
      {
        if ( !numClientBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1331, ASSERT_TYPE_ASSERT, "(clientBoneCount > 0)", (const char *)&queryFormat, "clientBoneCount > 0") )
          __debugbreak();
        if ( v177 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1332, ASSERT_TYPE_ASSERT, "(boneIndex == 0)", (const char *)&queryFormat, "boneIndex == 0") )
          __debugbreak();
        v86 = ClientBoneOffset >> 5;
        v87 = ClientBoneOffset & 0x1F;
        v88 = 32 - (ClientBoneOffset & 0x1F);
        if ( (ClientBoneOffset & 0x1F) != 0 )
        {
          if ( v86 )
            v89 = 0;
          else
            v89 = (unsigned int)v212 >> v87;
          v214 = v89;
          if ( v86 )
            v90 = 0;
          else
            v90 = (_DWORD)v212 << v88;
          if ( v86 <= 1 )
            v91 = *((_DWORD *)&v212 + 1 - v86) >> v87;
          else
            v91 = 0;
          v215 = v90 | v91;
          if ( v86 <= 1 )
            v92 = *((_DWORD *)&v212 + 1 - v86) << v88;
          else
            v92 = 0;
          if ( v86 <= 2 )
            v93 = *((_DWORD *)&v212 + 2 - v86) >> v87;
          else
            v93 = 0;
          v216 = v92 | v93;
          if ( v86 <= 2 )
            v94 = *((_DWORD *)&v212 + 2 - v86) << v88;
          else
            v94 = 0;
          if ( v86 <= 3 )
            v95 = *((_DWORD *)&v212 + 3 - v86) >> v87;
          else
            v95 = 0;
          v217 = v94 | v95;
          if ( v86 <= 3 )
            v96 = *((_DWORD *)&v212 + 3 - v86) << v88;
          else
            v96 = 0;
          if ( v86 <= 4 )
            v97 = *((_DWORD *)&v212 + 4 - v86) >> v87;
          else
            v97 = 0;
          v218 = v96 | v97;
          if ( v86 <= 4 )
            v98 = *((_DWORD *)&v212 + 4 - v86) << v88;
          else
            v98 = 0;
          if ( v86 <= 5 )
            v99 = *((_DWORD *)&v212 + 5 - v86) >> v87;
          else
            v99 = 0;
          v219 = v98 | v99;
          if ( v86 <= 5 )
            v100 = *((_DWORD *)&v212 + 5 - v86) << v88;
          else
            v100 = 0;
          if ( v86 <= 6 )
            v101 = *((_DWORD *)&v212 + 6 - v86) >> v87;
          else
            v101 = 0;
          v220 = v100 | v101;
          if ( v86 <= 6 )
            v102 = *((_DWORD *)&v212 + 6 - v86) << v88;
          else
            v102 = 0;
          if ( v86 <= 7 )
            v69 = v102 | (*((_DWORD *)&v212 + 7 - v86) >> v87);
          else
            v69 = v102;
        }
        else
        {
          if ( v86 )
            v103 = 0;
          else
            v103 = v212;
          v214 = v103;
          if ( v86 <= 1 )
            v104 = *((_DWORD *)&v212 + 1 - v86);
          else
            v104 = 0;
          v215 = v104;
          if ( v86 <= 2 )
            v105 = *((_DWORD *)&v212 + 2 - v86);
          else
            v105 = 0;
          v216 = v105;
          if ( v86 <= 3 )
            v106 = *((_DWORD *)&v212 + 3 - v86);
          else
            v106 = 0;
          v217 = v106;
          if ( v86 <= 4 )
            v107 = *((_DWORD *)&v212 + 4 - v86);
          else
            v107 = 0;
          v218 = v107;
          if ( v86 <= 5 )
            v108 = *((_DWORD *)&v212 + 5 - v86);
          else
            v108 = 0;
          v219 = v108;
          if ( v86 <= 6 )
            v109 = *((_DWORD *)&v212 + 6 - v86);
          else
            v109 = 0;
          v220 = v109;
          if ( v86 <= 7 )
            v69 = *((_DWORD *)&v212 + 7 - v86);
          else
            v69 = 0;
        }
        goto LABEL_234;
      }
      v51 = v177;
      v52 = v177 >> 5;
      v53 = v177 & 0x1F;
      v54 = 32 - (v177 & 0x1F);
      if ( (v177 & 0x1F) != 0 )
      {
        if ( v52 )
          v55 = 0;
        else
          v55 = (unsigned int)v212 >> v53;
        v214 = v55;
        if ( v52 )
          v56 = 0;
        else
          v56 = (_DWORD)v212 << v54;
        if ( v52 <= 1 )
          v57 = *((_DWORD *)&v212 + 1 - v52) >> v53;
        else
          v57 = 0;
        v215 = v56 | v57;
        if ( v52 <= 1 )
          v58 = *((_DWORD *)&v212 + 1 - v52) << v54;
        else
          v58 = 0;
        if ( v52 <= 2 )
          v59 = *((_DWORD *)&v212 + 2 - v52) >> v53;
        else
          v59 = 0;
        v216 = v58 | v59;
        if ( v52 <= 2 )
          v60 = *((_DWORD *)&v212 + 2 - v52) << v54;
        else
          v60 = 0;
        if ( v52 <= 3 )
          v61 = *((_DWORD *)&v212 + 3 - v52) >> v53;
        else
          v61 = 0;
        v217 = v60 | v61;
        if ( v52 <= 3 )
          v62 = *((_DWORD *)&v212 + 3 - v52) << v54;
        else
          v62 = 0;
        if ( v52 <= 4 )
          v63 = *((_DWORD *)&v212 + 4 - v52) >> v53;
        else
          v63 = 0;
        v218 = v62 | v63;
        if ( v52 <= 4 )
          v64 = *((_DWORD *)&v212 + 4 - v52) << v54;
        else
          v64 = 0;
        if ( v52 <= 5 )
          v65 = *((_DWORD *)&v212 + 5 - v52) >> v53;
        else
          v65 = 0;
        v219 = v64 | v65;
        if ( v52 <= 5 )
          v66 = *((_DWORD *)&v212 + 5 - v52) << v54;
        else
          v66 = 0;
        if ( v52 <= 6 )
          v67 = *((_DWORD *)&v212 + 6 - v52) >> v53;
        else
          v67 = 0;
        v220 = v66 | v67;
        if ( v52 <= 6 )
          v68 = *((_DWORD *)&v212 + 6 - v52) << v54;
        else
          v68 = 0;
        if ( v52 <= 7 )
          v69 = v68 | (*((_DWORD *)&v212 + 7 - v52) >> v53);
        else
          v69 = v68;
        v51 = v177;
      }
      else
      {
        if ( v52 )
          v70 = 0;
        else
          v70 = v212;
        v214 = v70;
        if ( v52 <= 1 )
          v71 = *((_DWORD *)&v212 + 1 - v52);
        else
          v71 = 0;
        v215 = v71;
        if ( v52 <= 2 )
          v72 = *((_DWORD *)&v212 + 2 - v52);
        else
          v72 = 0;
        v216 = v72;
        if ( v52 <= 3 )
          v73 = *((_DWORD *)&v212 + 3 - v52);
        else
          v73 = 0;
        v217 = v73;
        if ( v52 <= 4 )
          v74 = *((_DWORD *)&v212 + 4 - v52);
        else
          v74 = 0;
        v218 = v74;
        if ( v52 <= 5 )
          v75 = *((_DWORD *)&v212 + 5 - v52);
        else
          v75 = 0;
        v219 = v75;
        if ( v52 <= 6 )
          v76 = *((_DWORD *)&v212 + 6 - v52);
        else
          v76 = 0;
        v220 = v76;
        if ( v52 <= 7 )
          v69 = *((_DWORD *)&v212 + 7 - v52);
        else
          v69 = 0;
      }
      v221 = v69;
      if ( (v213 & 2) != 0 )
      {
        v77 = numBones + v51;
        v78 = v77 >> 5;
        v79 = v77 & 0x1F;
        if ( v79 )
        {
          v80 = 1 << (32 - v79);
          if ( (unsigned int)v78 >= 8 )
          {
            LODWORD(skelMatArrayPrevFrame) = 8;
            LODWORD(outAnimDataIndex) = v78;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_public_db.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( indexHigh ) < (unsigned)( ( sizeof( *array_counter( super::array ) ) + 0 ) )", "indexHigh doesn't index ARRAY_COUNT( super::array )\n\t%i not in [0, %i)", outAnimDataIndex, skelMatArrayPrevFrame) )
              __debugbreak();
          }
          *(&v214 + v78) &= -v80;
          v81 = (unsigned int)(v78 + 1);
          if ( (unsigned int)v81 >= 8 )
            goto LABEL_157;
          v82 = (unsigned int)(8 - v81);
          v83 = &v214 + v81;
          while ( v82 )
          {
            *v83++ = 0;
            --v82;
          }
          v69 = v221;
        }
        else if ( (unsigned int)v78 < 8 )
        {
          v84 = (unsigned int)(8 - v78);
          v85 = &v214 + v78;
          while ( v84 )
          {
            *v85++ = 0;
            --v84;
          }
LABEL_157:
          v69 = v221;
        }
      }
LABEL_234:
      if ( (v50 & 2) != 0 )
        v110 = v69 | 2;
      else
        v110 = v69 & 0xFFFFFFFD;
      v221 = v110;
      v111 = 0;
      _RBX = 0i64;
      do
      {
        __asm
        {
          vmovdqu xmm6, [rbp+rbx+13550h+var_13430]
          vpand   xmm1, xmm6, xmmword ptr [rbp+rbx+13550h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
          vptest  xmm1, xmm1
        }
        if ( !_ZF )
          goto LABEL_274;
        ++v111;
        _RBX += 16i64;
      }
      while ( v111 < 2 );
      if ( *((char *)sceneEnta + 1388) >= 0 || (_R15->flags & 2) != 0 )
        goto LABEL_258;
      rigidVertListCount = _R15->rigidVertListCount;
      if ( _R15->rigidVertListCount )
      {
        if ( rigidVertListCount > 0x80 )
        {
          LODWORD(outAnimDataIndex) = _R15->rigidVertListCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1368, ASSERT_TYPE_ASSERT, "( ( childCount <= ( XMODEL_MAX_RIGID_GROUPS ) ) )", "( childCount ) = %i", outAnimDataIndex) )
LABEL_247:
            __debugbreak();
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1367, ASSERT_TYPE_ASSERT, "(childCount)", (const char *)&queryFormat, "childCount") )
      {
        goto LABEL_247;
      }
      if ( !_R15->rigidVertLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1369, ASSERT_TYPE_ASSERT, "(xsurf->rigidVertLists)", (const char *)&queryFormat, "xsurf->rigidVertLists") )
        __debugbreak();
      v117 = 0;
      if ( rigidVertListCount )
      {
        v118 = 0i64;
        while ( 1 )
        {
          boneIndexOffset = _R15->rigidVertLists[v118].boneIndexOffset;
          v120 = boneIndexOffset >= numBones ? ClientBoneOffset + boneIndexOffset - numBones : v177 + boneIndexOffset;
          if ( FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)frontEndDataOut->localClientNum, obja, v120, 0) )
            break;
          ++v117;
          ++v118;
          if ( v117 >= rigidVertListCount )
            goto LABEL_258;
        }
LABEL_274:
        v43 = surfPos;
        v41 = v179;
        goto $hide;
      }
LABEL_258:
      v121 = 0;
      _RSI = &v214;
      _RBX = &surfacePartBits;
      do
      {
        __asm
        {
          vmovdqu xmm6, xmmword ptr [rsi]
          vlddqu  xmm0, xmmword ptr [rbx]
          vpor    xmm6, xmm6, xmm0
          vmovdqu xmmword ptr [rbx], xmm6
        }
        ++v121;
        _RBX = (DObjPartBits *)((char *)_RBX + 16);
        _RSI += 4;
      }
      while ( v121 < 2 );
      if ( ModelSubdivLodLevel && R_SurfaceHasSubdivision(_R15) )
      {
        v127 = surfPos;
        v128 = R_PreSkinSubdivXSurface(obja, _R15, &surfaceInfo, &skinningContext, surfPos, &mbBuildInfo);
      }
      else
      {
        v127 = surfPos;
        v128 = R_PreSkinXSurface(obja, _R15, &surfaceInfo, &skinningContext, surfPos, &mbBuildInfo);
      }
      v129 = v128;
      if ( val > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)val, "unsigned", val) )
        __debugbreak();
      surfModelIndex[v180] = val;
      if ( !v129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1400, ASSERT_TYPE_ASSERT, "(surfBufSize)", (const char *)&queryFormat, "surfBufSize") )
        __debugbreak();
      v43 = &v127[v129];
      surfPos = v43;
      skinningContext.surfaceVertOffset += _R15->vertCount;
      if ( v43 > v230 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1403, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", model->name) )
        __debugbreak();
      ModelSubdivLodLevel = surfaceInfo.subdivLodLevel;
      v41 = v179;
LABEL_279:
      v131 = ++v180;
      v179 = ++v41;
      v42 = ++*(_QWORD *)dismembermentPointBoneIndices;
      v39 = surfaces;
      if ( v41 >= v185 )
      {
        v180 = v131;
        v9 = obja;
        v27 = ClientBoneOffset;
        if ( skinningContext.mayhemSelfVis.enable && skinningContext.surfaceVertOffset != skinningContext.mayhemSelfVis.channel->numVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1407, ASSERT_TYPE_ASSERT, "(!skinningContext.mayhemSelfVis.enable || ( skinningContext.surfaceVertOffset == skinningContext.mayhemSelfVis.channel->numVerts ))", (const char *)&queryFormat, "!skinningContext.mayhemSelfVis.enable || ( skinningContext.surfaceVertOffset == skinningContext.mayhemSelfVis.channel->numVerts )") )
          __debugbreak();
        v25 = v177;
        goto LABEL_285;
      }
    }
  }
LABEL_287:
  if ( !DObjSkelAreBonesUpToDate(v9, &surfacePartBits) )
  {
    v132 = DObjGetName(v9);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1411, ASSERT_TYPE_ASSERT, "( ( DObjSkelAreBonesUpToDate( obj, &skinCmd.surfacePartBits ) ) )", "( DObjGetName( obj ) ) = %s", v132) )
      __debugbreak();
  }
  if ( !*(_DWORD *)surfaceCount )
    goto LABEL_326;
  if ( skinningContext.numMayhemChannelVerts )
  {
    v133 = Com_GetObjBufIndex(v9);
    v189 = v19 - modelSurfs;
    v134 = truncate_cast<unsigned int,__int64>(v19 - modelSurfs);
    if ( !R_AddMayhemChannelsComputeCmds(frontEndDataOut->compute.cmdList, skinningContext.numMayhemChannelVerts, modelSurfs, v134, surfaceCount[0], v133) )
    {
      Profile_EndInternal(NULL);
      v135 = 0;
      goto LABEL_342;
    }
  }
  else
  {
    v189 = v19 - modelSurfs;
  }
  if ( !skinningContext.numSkinnedVerts )
    goto LABEL_313;
  if ( !R_AllocDObjSurfsSkinnedCacheVerts(modelSurfs, v19, *(unsigned int *)surfaceCount, skinningContext.numSkinnedVerts, &mbBuildInfo) )
  {
LABEL_326:
    Profile_EndInternal(NULL);
    v135 = 0;
    goto LABEL_342;
  }
  if ( *((char *)_R13 + 1388) >= 0 )
    goto LABEL_308;
  v136 = DObjTotalNumBones(v9);
  v137 = (unsigned __int8 *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, v136);
  v138 = v137;
  dismembermentIndicesBuffer = v137;
  if ( !v137 || !FX_Dismemberment_GetIndices((LocalClientNum_t)frontEndDataOut->localClientNum, v9, v136, v137, &dismembermentPointCount, dismembermentPointBoneIndices) )
    goto LABEL_306;
  v139 = dismembermentPointCount;
  if ( !dismembermentPointCount )
  {
LABEL_307:
    R_WarnOncePerFrame(R_WARN_FAILED_SKINNING_DISMEMBERMENT_SETUP, v138 != NULL, v139);
    dismembermentPointCount = 0;
    dismembermentIndicesBuffer = NULL;
    goto LABEL_308;
  }
  _RBX = (vec3_t *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, 12 * (unsigned int)dismembermentPointCount);
  dismembermentPointsBuffer = _RBX;
  if ( !_RBX )
  {
LABEL_306:
    v139 = dismembermentPointCount;
    goto LABEL_307;
  }
  memset_0(_RBX, 0, 12i64 * dismembermentPointCount);
  v141 = 0;
  if ( dismembermentPointCount )
  {
    _R8 = skelMatArray;
    do
    {
      _RDX = v141;
      _RCX = dismembermentPointBoneIndices[v141];
      _RBX[_RDX].v[0] = _R8[_RCX].trans.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+r8+14h]
        vmovss  dword ptr [rbx+rdx*4+4], xmm0
        vmovss  xmm1, dword ptr [rcx+r8+18h]
        vmovss  dword ptr [rbx+rdx*4+8], xmm1
      }
      ++v141;
    }
    while ( v141 < dismembermentPointCount );
  }
LABEL_308:
  if ( !skinningEnabled )
  {
LABEL_313:
    v156 = *(_DWORD *)surfaceCount;
    v157 = skelMatArray;
    goto LABEL_314;
  }
  prevSkinningSkel = NULL;
  if ( mbBuildInfo.emitSurfs )
    prevSkinningSkel = (XModel *)mbBuildInfo.prevSkinningSkel;
  model = prevSkinningSkel;
  v148 = v9->numModels;
  v149 = (XModel **)v9->models;
  entnum = (*((_DWORD *)sceneEnta + 346) >> 10) & 0xFFF;
  dobjBlendShapeTargetCount = DObjGetNumBlendShapeTargetWeights(v9);
  dobjBlendShapeWeights = DObjGetBlendShapeTargetWeights(v9);
  v152 = dismembermentPointCount;
  objBufIndex = Com_GetObjBufIndex(obja);
  partBitCount = DObjNumBones(obja);
  v155 = truncate_cast<unsigned int,__int64>(v189);
  numModels = v148;
  models = v149;
  v156 = *(_DWORD *)surfaceCount;
  v157 = skelMatArray;
  if ( !R_AddSkinningComputeCmds(frontEndDataOut->compute.cmdList, &scene.def.viewOffset, &scene.def.viewOffsetPrev, modelSurfs, v155, skelMatArray, (const DObjAnimMat *)model, &surfacePartBits, partBitCount, surfaceCount[0], objBufIndex, v152, dismembermentPointsBuffer, dismembermentIndicesBuffer, dobjBlendShapeWeights, dobjBlendShapeTargetCount, entnum, (const XModel *const *)models, numModels, surfModelIndex) )
    goto LABEL_326;
  v9 = obja;
  v19 = surfPos;
LABEL_314:
  if ( skinningContext.subdivCacheSize && !R_AllocDObjSurfsSubdivSkinnedCacheVerts(modelSurfs, v19, v156, skinningContext.subdivCacheSize, &mbBuildInfo, v176) )
    goto LABEL_326;
  mbBuildInfo.skinCacheEntry->frameCount = gfxBuf.skinnedCacheFrameCount;
  if ( mbBuildInfo.surfUsed )
    R_AllocMotionBlurSurfaces(modelSurfs, v19, v156, mbBuildInfo.surfBegin, mbBuildInfo.surfUsed);
  v158 = truncate_cast<unsigned int,__int64>(v189);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1536, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v160 = _InterlockedExchangeAdd(p_surfPos, v158);
  if ( (unsigned int)(v160 + v158) > 0x40000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_SCENE_SURFS_SIZE);
    goto LABEL_326;
  }
  if ( (v160 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1546, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1548, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v161 = &frontEndDataOut->surfsBuffer[v160];
  v162 = sceneEnta;
  sceneEnta->cull.skinnedSurfs.firstSurf = v161;
  v162->surfBufSize = truncate_cast<unsigned short,unsigned int>(v158);
  memcpy_0(v161, modelSurfs, v158);
  Profile_EndInternal(NULL);
  if ( r_xdebug->current.integer )
    R_XModelDebug(v9, &surfacePartBits);
  if ( skinningContext.numSkinnedVerts && !skinningEnabled )
  {
    data[0] = (__int64)v161;
    v205 = v156;
    data[1] = (__int64)v157;
    v204 = DObjNumBones(v9);
    NumBlendShapeTargetWeights = DObjGetNumBlendShapeTargetWeights(v9);
    __asm
    {
      vmovsd  xmm0, qword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
      vmovsd  [rbp+13550h+var_13478], xmm0
    }
    v208 = scene.def.viewOffset.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev; GfxScene scene
      vmovsd  [rbp+13550h+var_1346C], xmm0
    }
    v210 = scene.def.viewOffsetPrev.v[2];
    if ( !mbBuildInfo.emitSurfs || (v211 = mbBuildInfo.prevSkinningSkel) == NULL )
      v211 = NULL;
    Sys_AddWorkerCmd(WRKCMD_SKIN_XMODEL, data);
  }
  v135 = v156;
LABEL_342:
  memset(&outOrigin, 0, sizeof(outOrigin));
  result = v135;
  _R11 = &v233;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

