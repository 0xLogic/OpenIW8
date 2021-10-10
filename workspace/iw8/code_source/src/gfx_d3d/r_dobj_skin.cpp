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
char R_AllocDObjSurfsSubdivSkinnedCacheVerts(unsigned __int8 *surfBuf, unsigned __int8 *surfBufEnd, unsigned int totalSurfaceCount, unsigned int cacheSize, GfxMotionBlurSurfBuildInfo *mbBuildInfo, GfxViewDomain viewDomain)
{
  char v6; 
  unsigned int v9; 
  GfxVertexBufferState *subdivCacheVb; 
  signed __int32 v11; 
  GfxSkinCacheEntry *skinCacheEntry; 
  int subdivCacheOffset; 
  int v15; 
  unsigned __int8 *v16; 
  int v17; 
  unsigned __int8 *v18; 
  int v19; 
  unsigned __int8 *v20; 
  const XSurface *v21; 
  const XSurface *v22; 
  int v23; 
  unsigned int ModelRigidSurfaceChildCount; 
  unsigned __int8 *v25; 
  int v26; 
  __int128 v30; 
  int v40; 
  XSurface *v41; 
  int v42; 
  int SurfaceSubdivLevel; 
  int v44; 
  int v45; 
  char v46; 
  signed __int32 v47; 
  int v49; 
  int subdivLevel; 
  GfxSkinCacheEntry *v51; 
  GfxPlacement placement; 

  v6 = 0;
  v46 = 0;
  if ( !cacheSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 115, ASSERT_TYPE_ASSERT, "(cacheSize > 0)", (const char *)&queryFormat, "cacheSize > 0") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 116, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->subdivCacheVb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 117, ASSERT_TYPE_ASSERT, "(frontEndDataOut->subdivCacheVb)", (const char *)&queryFormat, "frontEndDataOut->subdivCacheVb") )
    __debugbreak();
  v9 = (cacheSize + 15) & 0xFFFFFFF0;
  subdivCacheVb = frontEndDataOut->subdivCacheVb;
  if ( ((unsigned __int8)subdivCacheVb & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->subdivCacheVb) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(&subdivCacheVb->used, v9);
  v47 = v11;
  if ( v11 + v9 > 0x200000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_SUBDIV_SKINNED_CACHE_VERTICES, 0x200000i64);
    return 0;
  }
  skinCacheEntry = mbBuildInfo->skinCacheEntry;
  v51 = skinCacheEntry;
  if ( mbBuildInfo->useVertexCaches && gfxBuf.skinnedCacheFrameCount - skinCacheEntry->frameCount == 1 && gfxBuf.skinnedCacheFrameCount - skinCacheEntry->subdivCacheFrameCount == 1 && skinCacheEntry->subdivCacheSize == cacheSize )
    subdivCacheOffset = skinCacheEntry->subdivCacheOffset;
  else
    subdivCacheOffset = -1;
  v15 = 0;
  v49 = subdivCacheOffset;
  skinCacheEntry->subdivCacheSize = cacheSize;
  skinCacheEntry->subdivCacheOffset = v11;
  if ( !totalSurfaceCount )
  {
LABEL_44:
    if ( surfBuf != surfBufEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 940, ASSERT_TYPE_ASSERT, "(surfPos == surfBufEnd)", (const char *)&queryFormat, "surfPos == surfBufEnd") )
      __debugbreak();
    if ( v6 )
      skinCacheEntry->subdivCacheFrameCount = gfxBuf.skinnedCacheFrameCount;
    return 1;
  }
  while ( 1 )
  {
    v16 = surfBuf;
    if ( *(int *)surfBuf <= -4 )
      break;
    if ( *(_DWORD *)surfBuf == -3 )
    {
      surfBuf += 4;
    }
    else
    {
      v40 = surfBuf[54];
      if ( surfBuf[54] )
      {
        v41 = (XSurface *)*((_QWORD *)surfBuf + 7);
        if ( R_SurfaceHasSubdivision(v41) )
        {
          v42 = *((_DWORD *)surfBuf + 18);
          *((_DWORD *)surfBuf + 18) = v11 + v42;
          SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(v41, v40);
          if ( !R_AddSkinnedSubdivComputeCmd(frontEndDataOut->compute.cmdList, v41, (const GfxModelSkinnedSurface *)surfBuf, SurfaceSubdivLevel, *((_DWORD *)surfBuf + 18)) )
            return 0;
          v44 = *((_DWORD *)surfBuf + 16);
          if ( v44 != -5 )
          {
            v45 = *((_DWORD *)surfBuf + 18);
            *((_DWORD *)surfBuf + 16) = v11 + v44;
            if ( !R_AddSkinnedSubdivTessFactorsCmd(frontEndDataOut->compute.cmdList, v41, SurfaceSubdivLevel, v45, v11 + v44, viewDomain, (const GfxPlacement *)(surfBuf + 76)) )
              return 0;
          }
          v46 = 1;
          if ( subdivCacheOffset >= 0 )
            *((_WORD *)surfBuf + 26) = R_AllocModelMotionblurSkinnedSurface(mbBuildInfo, *((_WORD *)surfBuf + 26), v42 + subdivCacheOffset, 1);
        }
      }
      surfBuf += 136;
    }
LABEL_30:
    if ( ++v15 >= totalSurfaceCount )
    {
      skinCacheEntry = v51;
      v6 = v46;
      goto LABEL_44;
    }
    subdivCacheOffset = v49;
  }
  v17 = *((_DWORD *)surfBuf + 16);
  v18 = surfBuf + 64;
  v19 = surfBuf[54];
  v20 = surfBuf;
  v21 = (const XSurface *)*((_QWORD *)surfBuf + 7);
  if ( v17 == -5 )
  {
    surfBuf += R_GetModelRigidSurfaceSize((const GfxModelRigidSurface *)surfBuf);
    goto LABEL_29;
  }
  v22 = (const XSurface *)*((_QWORD *)surfBuf + 7);
  *(_DWORD *)v18 = v47 + v17;
  surfBuf += 76;
  subdivLevel = R_GetSurfaceSubdivLevel(v22, v19);
  v23 = 0;
  ModelRigidSurfaceChildCount = R_GetModelRigidSurfaceChildCount((const GfxModelRigidSurface *)v20);
  if ( !ModelRigidSurfaceChildCount )
  {
LABEL_29:
    v11 = v47;
    goto LABEL_30;
  }
  v25 = v16 + 100;
  while ( 1 )
  {
    v26 = *(_DWORD *)v18;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rsi-8] }
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v30 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v30;
    _XMM0 = 0i64;
    __asm
    {
      vcvtsi2sd xmm0, xmm0, dword ptr [rsi-4]
      vcvtsd2ss xmm2, xmm1, xmm1
    }
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v30 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v30;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rsi] }
    placement.origin.v[0] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v30 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v30;
    placement.quat.v[0] = *(float *)surfBuf;
    LODWORD(_XMM0) = *((_DWORD *)v25 - 4);
    placement.origin.v[1] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    LODWORD(_XMM1) = *((_DWORD *)v25 - 5);
    placement.quat.v[2] = *(float *)&_XMM0;
    LODWORD(_XMM0) = *((_DWORD *)v20 + 18);
    placement.quat.v[1] = *(float *)&_XMM1;
    LODWORD(_XMM1) = *((_DWORD *)v25 - 3);
    placement.origin.v[2] = *(float *)&_XMM2;
    placement.quat.v[3] = *(float *)&_XMM1;
    if ( !R_AddRigidSubdivTessFactorsCmd(frontEndDataOut->compute.cmdList, v21, subdivLevel, v26, v23, &placement, *(float *)&_XMM0, viewDomain) )
      return 0;
    surfBuf += 32;
    v25 += 32;
    if ( ++v23 >= ModelRigidSurfaceChildCount )
      goto LABEL_29;
  }
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
  __int128 v13; 
  double v14; 
  unsigned __int8 SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  unsigned int subdivCacheSize; 
  unsigned int numMayhemChannelVerts; 

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
  v13 = *(_OWORD *)&surfaceInfo->modelBasePoseMat;
  *(__m256i *)surfPos = *(__m256i *)&surfaceInfo->skinnedCachedOffset;
  v14 = *(double *)&surfaceInfo->modelClientBoneCount;
  *((_OWORD *)surfPos + 2) = v13;
  *((double *)surfPos + 6) = v14;
  *(_DWORD *)surfPos = R_GetRigidSurfaceTypeForChildCount(rigidVertListCount);
  *((_QWORD *)surfPos + 7) = surf;
  *((_DWORD *)surfPos + 18) = 1065353216;
  if ( (!R_SurfaceHasSubdivision(surf) || !surfaceInfo->subdivLodLevel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 582, ASSERT_TYPE_ASSERT, "(R_SurfaceHasSubdivision( surf ) && surfaceInfo->subdivLodLevel > 0)", (const char *)&queryFormat, "R_SurfaceHasSubdivision( surf ) && surfaceInfo->subdivLodLevel > 0") )
    __debugbreak();
  SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(surf, surfaceInfo->subdivLodLevel);
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
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  GfxMotionBlurSurfBuildInfo *v13; 
  GfxModelRigidSurface *v14; 
  XSurface *xsurf; 
  __int64 rigidVertListCount; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned int surfUsed; 
  DObjAnimMat *prevSkinningSkel; 
  float *v22; 
  base_vec2_t<int> *v23; 
  __int64 v24; 
  XRigidVertList *rigidVertLists; 
  unsigned int v26; 
  __int64 modelBoneCount; 
  float *v; 
  int entnum; 
  const char *BoneName; 
  int v35; 
  const char *v36; 
  int v37; 
  const char *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  int v78; 
  DObjAnimMat *v79; 
  __int64 v80; 
  DObjAnimMat *v81; 
  int v82; 
  const char *v83; 
  int v84; 
  const char *v85; 
  int v86; 
  const char *v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  double v111; 
  __int64 v112; 
  float v113; 
  float v114; 
  bool v115; 
  DObjAnimMat *v116; 
  DObjAnimMat *v118; 
  unsigned __int8 *v119; 
  float v120; 
  XSurface *v121; 
  const DObjAnimMat *v122; 
  unsigned int v123; 
  __int64 v124; 
  DObjAnimMat *v125; 
  DObjAnimMat *v126; 
  __int64 v127; 
  DObjSkelMat v129; 
  DObjSkelMat skelMat; 
  __int128 v131; 
  __int128 v132; 
  __int128 v133; 
  __int128 v134; 
  __int128 v135; 
  __int128 v136; 
  __int128 v137; 
  __int128 v138; 
  __int128 v139; 
  __int128 v140; 

  v13 = mbBuildInfo;
  v14 = rigidSurf;
  xsurf = rigidSurf->xsurf;
  rigidVertListCount = xsurf->rigidVertListCount;
  v121 = xsurf;
  v125 = &DObjGetRotTransArray(obj)[rigidSurf->base.modelBoneIndex];
  v126 = &DObjGetRotTransArray(obj)[v14->base.modelClientBoneIndex];
  if ( v14->base.motionblurSurf != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 285, ASSERT_TYPE_ASSERT, "(rigidSurf->base.motionblurSurf == (0xffff))", (const char *)&queryFormat, "rigidSurf->base.motionblurSurf == MOTIONBLUR_SURF_INDEX_NONE") )
    __debugbreak();
  v18 = 0;
  v19 = NULL;
  v123 = 0;
  v119 = NULL;
  v118 = NULL;
  v116 = NULL;
  v115 = 0;
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
      v119 = v19;
      *(_DWORD *)v19 = 1065353216;
      if ( prevSkinningSkel )
      {
        v118 = &prevSkinningSkel[v14->base.modelBoneIndex];
        v116 = &prevSkinningSkel[rigidSurf->base.modelClientBoneIndex];
        v14 = rigidSurf;
        v115 = v118 != NULL;
      }
      else
      {
        v116 = NULL;
        v118 = NULL;
        v14 = rigidSurf;
        v115 = 0;
      }
    }
    xsurf = v121;
  }
  if ( (_DWORD)rigidVertListCount )
  {
    v140 = v3;
    v22 = (float *)(v19 + 12);
    v139 = v4;
    v23 = &v14->children[0].placement.preciseOrigin.xy + 1;
    v138 = v5;
    v24 = 0i64;
    v137 = v6;
    v136 = v7;
    v135 = v8;
    v134 = v9;
    v133 = v10;
    v132 = v11;
    v131 = v12;
    v124 = 0i64;
    while ( 1 )
    {
      rigidVertLists = xsurf->rigidVertLists;
      LOWORD(v23->y) = v18;
      v26 = *(unsigned __int16 *)((char *)&rigidVertLists->boneIndexOffset + v24);
      _RBX = *(unsigned __int16 *)((char *)&rigidVertLists->boneIndexOffset + v24);
      v127 = _RBX * 32;
      v122 = &v14->base.modelBasePoseMat[_RBX];
      LocalConvertQuatToInverseSkelMat(v122, &skelMat);
      modelBoneCount = v14->base.modelBoneCount;
      if ( v26 >= (unsigned int)modelBoneCount )
      {
        _RCX = v26 - modelBoneCount;
        v = v126[_RCX].quat.v;
        if ( v115 )
        {
          _RAX = v116;
          __asm { prefetcht0 byte ptr [rcx+rax] }
        }
      }
      else
      {
        v = v125[_RBX].quat.v;
        if ( v115 )
        {
          _RAX = v118;
          __asm { prefetcht0 byte ptr [rbx+rax] }
        }
      }
      if ( (*(_DWORD *)v & 0x7F800000) == 2139095040 || ((_DWORD)v[1] & 0x7F800000) == 2139095040 || ((_DWORD)v[2] & 0x7F800000) == 2139095040 || ((_DWORD)v[3] & 0x7F800000) == 2139095040 )
      {
        entnum = obj->entnum;
        BoneName = DObjGetBoneName(obj, v26);
        LODWORD(v112) = entnum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 349, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] ))", "%s\n\tBad quat for bone %s on ent %d", "!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] )", BoneName, v112) )
          __debugbreak();
      }
      if ( ((_DWORD)v[4] & 0x7F800000) == 2139095040 || ((_DWORD)v[5] & 0x7F800000) == 2139095040 || ((_DWORD)v[6] & 0x7F800000) == 2139095040 )
      {
        v35 = obj->entnum;
        v36 = DObjGetBoneName(obj, v26);
        LODWORD(v112) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 350, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] ))", "%s\n\tBad trans for bone %s on ent %d", "!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] )", v36, v112) )
          __debugbreak();
      }
      if ( ((_DWORD)v[7] & 0x7F800000) == 2139095040 )
      {
        v37 = obj->entnum;
        v38 = DObjGetBoneName(obj, v26);
        LODWORD(v112) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 351, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->transWeight ))", "%s\n\tBad trans weight for bone %s on ent %d", "!IS_NAN( bone->transWeight )", v38, v112) )
          __debugbreak();
      }
      if ( ((*(_DWORD *)v & 0x7F800000) == 2139095040 || ((_DWORD)v[1] & 0x7F800000) == 2139095040 || ((_DWORD)v[2] & 0x7F800000) == 2139095040 || ((_DWORD)v[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1219, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
        __debugbreak();
      if ( ((_DWORD)v[7] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1220, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      v39 = v[2];
      v40 = v[3];
      v41 = v[1];
      v42 = *v;
      v43 = v[7];
      v44 = v42 * (float)(v42 * v43);
      v45 = v41 * (float)(*v * v43);
      v46 = v39 * (float)(*v * v43);
      v47 = v40 * (float)(*v * v43);
      v48 = v41 * (float)(v41 * v43);
      v49 = v39 * (float)(v41 * v43);
      v50 = v39 * (float)(v39 * v43);
      v51 = v40 * (float)(v39 * v43);
      v52 = v40 * (float)(v41 * v43);
      v129.axis.m[0].v[0] = 1.0 - (float)(v50 + v48);
      v129.axis.m[0].v[1] = v51 + v45;
      v129.axis.m[0].v[2] = v46 - v52;
      v53 = v45 - v51;
      v54 = v122->quat.v[0];
      v129.axis.m[1].v[0] = v53;
      v55 = v50 + v44;
      v56 = v122->quat.v[1];
      v129.axis.m[1].v[1] = 1.0 - v55;
      v129.axis.m[1].v[2] = v49 + v47;
      v57 = v52 + v46;
      v58 = v122->quat.v[2];
      v129.axis.m[2].v[0] = v57;
      v59 = v49 - v47;
      v60 = v122->quat.v[3];
      v129.axis.m[2].v[1] = v59;
      v129.axis.m[2].v[2] = 1.0 - (float)(v48 + v44);
      v114 = v[4];
      v129.origin.v[0] = v114;
      v113 = v[5];
      v129.origin.v[1] = v113;
      v120 = v[6];
      v129.origin.v[2] = v120;
      v129.axis.m[0].v[3] = 0.0;
      v129.axis.m[1].v[3] = 0.0;
      v129.axis.m[2].v[3] = 0.0;
      v61 = (float)((float)((float)(v42 * v60) - (float)(v40 * v54)) - (float)(v41 * v58)) + (float)(v39 * v56);
      v62 = (float)((float)((float)(v42 * v58) - (float)(v40 * v56)) + (float)(v41 * v60)) - (float)(v39 * v54);
      v63 = (float)((float)(v41 * v54) - (float)((float)(v42 * v56) + (float)(v40 * v58))) + (float)(v39 * v60);
      v129.origin.v[3] = FLOAT_1_0;
      v64 = (float)((float)((float)(v42 * v54) + (float)(v40 * v60)) + (float)(v41 * v56)) + (float)(v39 * v58);
      v65 = fsqrt((float)((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63)) + (float)(v64 * v64));
      if ( v65 != 0.0 )
      {
        v61 = (float)(1.0 / v65) * v61;
        v62 = (float)(1.0 / v65) * v62;
        v63 = (float)(1.0 / v65) * v63;
        v64 = (float)(1.0 / v65) * v64;
      }
      v66 = skelMat.origin.v[1];
      v67 = skelMat.origin.v[2];
      v68 = (float)((float)((float)(skelMat.origin.v[1] * v129.axis.m[1].v[1]) + (float)(skelMat.origin.v[0] * v129.axis.m[0].v[1])) + (float)(skelMat.origin.v[2] * v129.axis.m[2].v[1])) + v113;
      v69 = skelMat.origin.v[2] * v129.axis.m[2].v[2];
      v70 = (float)(skelMat.origin.v[0] * v129.axis.m[0].v[2]) + (float)(skelMat.origin.v[1] * v129.axis.m[1].v[2]);
      v71 = skelMat.origin.v[0] * v129.axis.m[0].v[0];
      *(float *)v23[-3].v = v61;
      *(float *)&v23[-3].v[1] = v62;
      v72 = v70 + v69;
      v73 = v66 * v129.axis.m[1].v[0];
      *(float *)v23[-2].v = v63;
      *(float *)&v23[-2].v[1] = v64;
      v74 = v72 + v120;
      v75 = (float)((float)((float)(v71 + v73) + (float)(v67 * v129.axis.m[2].v[0])) + v114) * 4096.0;
      v76 = 4096.0 * scene.def.viewOffset.v[1];
      v77 = scene.def.viewOffset.v[2] * -4096.0;
      v23[-1].v[0] = (int)v75 + (int)(float)(4096.0 * scene.def.viewOffset.v[0]);
      v23[-1].v[1] = (int)v76 + (int)(float)(v68 * 4096.0);
      v78 = (int)(float)(v74 * 4096.0) - (int)v77;
      v23->v[0] = v78;
      if ( v119 )
      {
        if ( v118 )
        {
          v79 = v116;
          if ( !v116 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 371, ASSERT_TYPE_ASSERT, "(clientBoneMatrixPrevFrame != 0)", (const char *)&queryFormat, "clientBoneMatrixPrevFrame != NULL") )
              __debugbreak();
            v79 = NULL;
          }
          v80 = rigidSurf->base.modelBoneCount;
          if ( v26 >= (unsigned int)v80 )
            v81 = &v79[v26 - v80];
          else
            v81 = (DObjAnimMat *)((char *)v118 + v127);
          if ( (LODWORD(v81->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v81->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v81->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v81->quat.v[3]) & 0x7F800000) == 2139095040 )
          {
            v82 = obj->entnum;
            v83 = DObjGetBoneName(obj, v26);
            LODWORD(v112) = v82;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 382, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] ))", "%s\n\tBad previous frame quat for bone %s on ent %d", "!IS_NAN( bone->quat[0] ) && !IS_NAN( bone->quat[1] ) && !IS_NAN( bone->quat[2] ) && !IS_NAN( bone->quat[3] )", v83, v112) )
              __debugbreak();
          }
          if ( (LODWORD(v81->trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v81->trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v81->trans.v[2]) & 0x7F800000) == 2139095040 )
          {
            v84 = obj->entnum;
            v85 = DObjGetBoneName(obj, v26);
            LODWORD(v112) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 383, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] ))", "%s\n\tBad previous frame trans for bone %s on ent %d", "!IS_NAN( bone->trans[0] ) && !IS_NAN( bone->trans[1] ) && !IS_NAN( bone->trans[2] )", v85, v112) )
              __debugbreak();
          }
          if ( (LODWORD(v81->transWeight) & 0x7F800000) == 2139095040 )
          {
            v86 = obj->entnum;
            v87 = DObjGetBoneName(obj, v26);
            LODWORD(v112) = v86;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 384, ASSERT_TYPE_ASSERT, "(!IS_NAN( bone->transWeight ))", "%s\n\tBad previous frame trans weight for bone %s on ent %d", "!IS_NAN( bone->transWeight )", v87, v112) )
              __debugbreak();
          }
          LocalConvertQuatToSkelMat(v81, &v129);
          v88 = v81->quat.v[3];
          v89 = v81->quat.v[1];
          v90 = v122->quat.v[3];
          v91 = v122->quat.v[2];
          v92 = v122->quat.v[1];
          v93 = v81->quat.v[2];
          v94 = (float)((float)((float)(v81->quat.v[0] * v90) - (float)(v88 * v122->quat.v[0])) - (float)(v89 * v91)) + (float)(v93 * v92);
          v95 = (float)((float)((float)(v81->quat.v[0] * v91) - (float)(v88 * v92)) + (float)(v89 * v90)) - (float)(v93 * v122->quat.v[0]);
          v96 = (float)((float)(v89 * v122->quat.v[0]) - (float)((float)(v81->quat.v[0] * v92) + (float)(v88 * v91))) + (float)(v93 * v90);
          v97 = (float)((float)((float)(v81->quat.v[0] * v122->quat.v[0]) + (float)(v88 * v90)) + (float)(v89 * v92)) + (float)(v93 * v91);
          v98 = fsqrt((float)((float)((float)(v95 * v95) + (float)(v94 * v94)) + (float)(v96 * v96)) + (float)(v97 * v97));
          if ( v98 != 0.0 )
          {
            v94 = (float)(1.0 / v98) * v94;
            v95 = (float)(1.0 / v98) * v95;
            v96 = (float)(1.0 / v98) * v96;
            v97 = (float)(1.0 / v98) * v97;
          }
          v99 = skelMat.origin.v[2];
          v100 = (float)((float)((float)(v66 * v129.axis.m[1].v[1]) + (float)(skelMat.origin.v[0] * v129.axis.m[0].v[1])) + (float)(skelMat.origin.v[2] * v129.axis.m[2].v[1])) + v129.origin.v[1];
          v101 = skelMat.origin.v[2] * v129.axis.m[2].v[2];
          v102 = (float)(v66 * v129.axis.m[1].v[2]) + (float)(skelMat.origin.v[0] * v129.axis.m[0].v[2]);
          v103 = skelMat.origin.v[0] * v129.axis.m[0].v[0];
          v104 = v66 * v129.axis.m[1].v[0];
          *(v22 - 2) = v94;
          v105 = v102 + v101;
          v106 = v99 * v129.axis.m[2].v[0];
          *(v22 - 1) = v95;
          *v22 = v96;
          v22[1] = v97;
          v107 = v105 + v129.origin.v[2];
          v108 = (float)((float)((float)(v104 + v103) + v106) + v129.origin.v[0]) * 4096.0;
          v109 = 4096.0 * scene.def.viewOffsetPrev.v[1];
          v110 = scene.def.viewOffsetPrev.v[2] * -4096.0;
          *((_DWORD *)v22 + 2) = (int)v108 + (int)(float)(4096.0 * scene.def.viewOffsetPrev.v[0]);
          *((_DWORD *)v22 + 3) = (int)v109 + (int)(float)(v100 * 4096.0);
          v78 = (int)(float)(v107 * 4096.0) - (int)v110;
        }
        else
        {
          v111 = *(double *)&v23[-1];
          *(_OWORD *)(v22 - 2) = *(_OWORD *)v23[-3].v;
          *((double *)v22 + 1) = v111;
        }
        *((_DWORD *)v22 + 4) = v78;
      }
      v23 += 4;
      v18 = v123 + 1;
      xsurf = v121;
      v24 = v124 + 8;
      v22 += 7;
      v123 = v18;
      v124 += 8i64;
      if ( v18 >= v121->rigidVertListCount )
        break;
      v14 = rigidSurf;
    }
    v13 = mbBuildInfo;
  }
  if ( v119 )
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
  __int128 v12; 
  int subdivLodLevel; 
  unsigned int v14; 
  double v15; 
  unsigned int SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  unsigned int subdivCacheSize; 
  unsigned int numMayhemChannelVerts; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 627, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 628, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !surfaceInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 629, ASSERT_TYPE_ASSERT, "(surfaceInfo)", (const char *)&queryFormat, "surfaceInfo") )
    __debugbreak();
  if ( (surf->flags & 2) == 0 )
    return R_PreSkinRigidSubdivXSurface(obj, surf, surfaceInfo, skinningContext, surfPos, mbBuildInfo);
  if ( rg.drawSkinnedModels )
  {
    numSkinnedVerts = skinningContext->numSkinnedVerts;
    v12 = *(_OWORD *)&surfaceInfo->modelBasePoseMat;
    subdivLodLevel = surfaceInfo->subdivLodLevel;
    v14 = numSkinnedVerts + surf->vertCount;
    *(__m256i *)surfPos = *(__m256i *)&surfaceInfo->skinnedCachedOffset;
    v15 = *(double *)&surfaceInfo->modelClientBoneCount;
    *((_OWORD *)surfPos + 2) = v12;
    *((double *)surfPos + 6) = v15;
    *(_DWORD *)surfPos = numSkinnedVerts;
    *((_QWORD *)surfPos + 7) = surf;
    skinningContext->numSkinnedVerts = v14;
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
  __int128 v13; 
  double v14; 
  unsigned int v15; 
  unsigned int v16; 
  int result; 
  unsigned int numSkinnedVerts; 
  __int128 v19; 
  int vertCount; 
  double v21; 
  unsigned int numMayhemChannelVerts; 
  __int64 v23; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 491, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 492, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( !surfaceInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 493, ASSERT_TYPE_ASSERT, "(surfaceInfo)", (const char *)&queryFormat, "surfaceInfo") )
    __debugbreak();
  flags = surf->flags;
  if ( (surf->flags & 2) != 0 )
  {
    if ( rg.drawSkinnedModels )
    {
      numSkinnedVerts = skinningContext->numSkinnedVerts;
      v19 = *(_OWORD *)&surfaceInfo->modelBasePoseMat;
      vertCount = surf->vertCount;
      *(__m256i *)surfPos = *(__m256i *)&surfaceInfo->skinnedCachedOffset;
      v21 = *(double *)&surfaceInfo->modelClientBoneCount;
      *((_OWORD *)surfPos + 2) = v19;
      *((double *)surfPos + 6) = v21;
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
    LODWORD(v23) = surf->rigidVertListCount;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 438, ASSERT_TYPE_ASSERT, "( ( childCount <= ( XMODEL_MAX_RIGID_GROUPS ) ) )", "( childCount ) = %i", v23);
LABEL_16:
    if ( v12 )
      __debugbreak();
  }
  if ( !surf->rigidVertLists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 439, ASSERT_TYPE_ASSERT, "(surf->rigidVertLists)", (const char *)&queryFormat, "surf->rigidVertLists") )
    __debugbreak();
  v13 = *(_OWORD *)&surfaceInfo->modelBasePoseMat;
  *(__m256i *)surfPos = *(__m256i *)&surfaceInfo->skinnedCachedOffset;
  v14 = *(double *)&surfaceInfo->modelClientBoneCount;
  *((_OWORD *)surfPos + 2) = v13;
  *((double *)surfPos + 6) = v14;
  *(_DWORD *)surfPos = R_GetRigidSurfaceTypeForChildCount(rigidVertListCount);
  *((_QWORD *)surfPos + 7) = surf;
  *((_DWORD *)surfPos + 18) = 1065353216;
  *((_DWORD *)surfPos + 16) = -5;
  if ( (surf->flags & 0x100) != 0 )
  {
    v15 = skinningContext->numMayhemChannelVerts;
    skinningContext->numMayhemChannelVerts = v15 + surf->rigidVertListCount;
  }
  else
  {
    v15 = -1;
  }
  *((_DWORD *)surfPos + 1) = v15;
  if ( skinningContext->mayhemSelfVis.enable && (surf->flags & 0x200) != 0 )
    v16 = (skinningContext->mayhemSelfVis.animDataIndex << 24) | (skinningContext->surfaceVertOffset + skinningContext->mayhemSelfVis.channel->vertexOffset);
  else
    v16 = -1;
  *((_DWORD *)surfPos + 2) = v16;
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
  __int64 v11; 
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
      DObjRecordSkelOnSkinning(obj, outObjRadius);
      if ( localSceneEnt->cull.state != 3 )
      {
        LODWORD(v11) = localSceneEnt->cull.state;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1605, ASSERT_TYPE_ASSERT, "( ( sceneEnt->cull.state == CULL_STATE_SKINNED_PENDING ) )", "( sceneEnt->cull.state ) = %i", v11) )
          __debugbreak();
      }
      localSceneEnt->cull.state = v10 + 4;
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
  void *v6; 
  const DObj *v8; 
  GfxSceneEntity *v9; 
  char *Value; 
  unsigned int *v11; 
  unsigned int v12; 
  _QWORD *v13; 
  char *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  ThreadContext CurrentThreadContext; 
  unsigned __int8 *v18; 
  unsigned int v19; 
  DObjPartBits *p_surfacePartBits; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  XModel *v25; 
  unsigned int numBones; 
  XModelBlendShapeInfo *blendShapeInfo; 
  unsigned int v28; 
  unsigned __int16 gfxPackedEntityIndexBase; 
  DObjMaterialData *materialData; 
  unsigned __int8 ModelSubdivLodLevel; 
  XSurface *v33; 
  unsigned int v35; 
  __int64 v36; 
  unsigned __int8 *v37; 
  unsigned int v39; 
  char v44; 
  unsigned int v45; 
  unsigned int v46; 
  char v47; 
  char v48; 
  unsigned int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  unsigned int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  unsigned int v71; 
  __int64 v72; 
  int v73; 
  int v74; 
  __int64 v75; 
  __int64 v76; 
  unsigned int *v77; 
  __int64 v78; 
  unsigned int *v79; 
  unsigned int v80; 
  char v81; 
  char v82; 
  unsigned int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  unsigned int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  unsigned int v105; 
  __int64 v106; 
  unsigned int rigidVertListCount; 
  unsigned int v111; 
  __int64 v112; 
  unsigned int boneIndexOffset; 
  int v114; 
  unsigned int v115; 
  unsigned int *v116; 
  unsigned __int8 *v121; 
  int v122; 
  int v123; 
  const char *Name; 
  int v125; 
  const char *v126; 
  int v127; 
  unsigned int v128; 
  unsigned int v129; 
  int v130; 
  unsigned __int8 *v131; 
  unsigned __int8 *v132; 
  unsigned __int8 v133; 
  vec3_t *v134; 
  unsigned __int8 v135; 
  DObjAnimMat *v136; 
  __int64 v137; 
  __int64 v138; 
  XModel *prevSkinningSkel; 
  unsigned int v140; 
  XModel **v141; 
  unsigned __int16 dobjBlendShapeTargetCount; 
  const float *dobjBlendShapeWeights; 
  unsigned __int8 v144; 
  int objBufIndex; 
  int partBitCount; 
  unsigned int v147; 
  unsigned int v148; 
  DObjAnimMat *v149; 
  size_t v150; 
  volatile int *p_surfPos; 
  signed __int32 v152; 
  unsigned __int8 *v153; 
  GfxSceneEntity *v154; 
  unsigned int *outAnimDataIndex; 
  DObjAnimMat *skelMatArrayPrevFrame; 
  XModel **models; 
  unsigned int numModels; 
  unsigned __int8 dismembermentPointCount; 
  bool skinningEnabled; 
  GfxViewDomain v162; 
  unsigned int v163; 
  unsigned __int16 surfaceCount[2]; 
  unsigned int v165; 
  int v166; 
  unsigned int ClientBoneOffset; 
  unsigned int val; 
  int entnum; 
  unsigned __int8 *surfPos; 
  unsigned int v171; 
  int numClientBones; 
  unsigned int v173; 
  GfxSceneEntity *sceneEnta; 
  __int64 v175; 
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
  __int64 v187; 
  __int64 data[2]; 
  DObjPartBits surfacePartBits; 
  int v190; 
  __int16 v191; 
  unsigned __int16 NumBlendShapeTargetWeights; 
  vec3_t viewOffset; 
  vec3_t viewOffsetPrev; 
  DObjAnimMat *v195; 
  __int128 v196; 
  int v197; 
  unsigned int v198; 
  int v199; 
  int v200; 
  int v201; 
  int v202; 
  int v203; 
  int v204; 
  int v205; 
  vec4_t quat; 
  DObjPartBitsAligned partBits; 
  tmat33_t<vec3_t> axis; 
  unsigned __int8 dismembermentPointBoneIndices[8]; 
  unsigned __int8 surfModelIndex[128]; 
  char v211; 
  unsigned __int8 modelSurfs[65664]; 
  char v213; 
  unsigned __int8 v214[16]; 
  __int128 v215; 

  v6 = alloca(v4);
  v187 = -2i64;
  v215 = _XMM6;
  v162 = viewDomain;
  skelMatArray = (DObjAnimMat *)boneMatrix;
  v8 = obj;
  obja = (DObj *)obj;
  v9 = sceneEnt;
  sceneEnta = sceneEnt;
  memset(&skinningContext, 0, 17);
  skinningContext.mayhemSelfVis.animDataIndex = -1;
  skinningContext.mayhemSelfVis.channel = NULL;
  dismembermentPointCount = 0;
  dismembermentIndicesBuffer = NULL;
  dismembermentPointsBuffer = NULL;
  if ( sceneEnt->cull.skinnedSurfs.firstSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1113, ASSERT_TYPE_ASSERT, "(!sceneEnt->cull.skinnedSurfs.firstSurf)", (const char *)&queryFormat, "!sceneEnt->cull.skinnedSurfs.firstSurf") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !boneMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1116, ASSERT_TYPE_ASSERT, "(boneMatrix)", (const char *)&queryFormat, "boneMatrix") )
    __debugbreak();
  skinningEnabled = frontEndDataOut->compute.skinningEnabled;
  mbBuildInfo.prevSkinningSkel = DObjGetPrevSkinningSkel(v8, r_glob.curFrameSkelTimeStamp, r_glob.prevSkelTimeStampMaxDifference, &outObjRadiusa);
  mbBuildInfo.skinCacheEntry = CG_GetSkinCacheEntry(v9->info.pose);
  mbBuildInfo.surfBegin = (unsigned __int8 *)&v211;
  mbBuildInfo.surfUsed = 0;
  mbBuildInfo.surfCapacity = 0x2000;
  mbBuildInfo.emitSurfs = (*((_DWORD *)v9 + 347) & 0x200) != 0;
  mbBuildInfo.useVertexCaches = mbBuildInfo.emitSurfs;
  Value = (char *)Sys_GetValue(0);
  v11 = (unsigned int *)(Value + 4776);
  if ( (unsigned int)(*((_DWORD *)Value + 1194) + 1) >= 3 )
  {
    LODWORD(outAnimDataIndex) = *((_DWORD *)Value + 1194) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outAnimDataIndex, 3) )
      __debugbreak();
  }
  v12 = *v11 + 1;
  *v11 = v12;
  if ( v12 >= 3 )
  {
    LODWORD(skelMatArrayPrevFrame) = 3;
    LODWORD(outAnimDataIndex) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outAnimDataIndex, skelMatArrayPrevFrame) )
      __debugbreak();
  }
  v13 = Value + 2088;
  v14 = Value + 40;
  if ( *v13 < (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v13 += 8i64;
  if ( *v13 >= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v13 = v11;
  if ( *v13 <= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v15 = (int)*v11;
  v16 = __rdtsc();
  v11[v15 + 2] = v16;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 67, NULL, 0);
  v18 = modelSurfs;
  surfPos = modelSurfs;
  v163 = 0;
  v173 = 0;
  ClientBoneOffset = DObjGetClientBoneOffset(v8);
  entnum = DObjGetNumModels(v8);
  *(_DWORD *)surfaceCount = 0;
  v166 = 0;
  v19 = 0;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  p_surfacePartBits = &surfacePartBits;
  do
  {
    *(_OWORD *)p_surfacePartBits->array = _XMM6;
    ++v19;
    p_surfacePartBits = (DObjPartBits *)((char *)p_surfacePartBits + 16);
  }
  while ( v19 < 2 );
  DObjGetHidePartBits(v8, &partBits);
  GfxSceneEntity_GetPlacementOrigin(v9, &outOrigin);
  quat = v9->placement.placement.quat;
  v22 = 0;
  val = 0;
  v23 = v163;
  if ( entnum )
  {
    v24 = ClientBoneOffset;
    while ( 1 )
    {
      v25 = (XModel *)DObjGetModel(v8, v22);
      model = v25;
      if ( !v25 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1188, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      numBones = v25->numBones;
      blendShapeInfo = v25->blendShapeInfo;
      LODWORD(v175) = blendShapeInfo ? blendShapeInfo->targetCount : 0;
      numClientBones = v25->numClientBones;
      *(_QWORD *)dismembermentPointBoneIndices = v22;
      v28 = sceneEnta->lods[v22];
      if ( v28 != 6 )
      {
        v171 = XModelGetSurfaces(v25, &surfaces, v28);
        if ( v171 )
          break;
      }
LABEL_285:
      v22 = val + 1;
      val = v22;
      v23 += numBones;
      v163 = v23;
      v24 += numClientBones;
      ClientBoneOffset = v24;
      v173 += v175;
      if ( v22 >= entnum )
      {
        v18 = surfPos;
        v9 = sceneEnta;
        goto LABEL_287;
      }
    }
    _RCX = surfaces;
    __asm { prefetcht0 byte ptr [rcx+70h] }
    surfaceInfo.skinnedCachedOffset = 0;
    if ( v23 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v23, "unsigned", v23) )
      __debugbreak();
    surfaceInfo.modelBoneIndex = v23;
    if ( v173 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v173, "unsigned", v173) )
      __debugbreak();
    surfaceInfo.modelBlendShapeTargetIndex = v173;
    surfaceInfo.modelBasePoseMat = v25->baseMat;
    surfaceInfo.modelBoneCount = numBones;
    surfaceInfo.modelClientBoneCount = numClientBones;
    if ( v24 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v24, "unsigned", v24) )
      __debugbreak();
    surfaceInfo.modelClientBoneIndex = v24;
    surfaceInfo.gfxEntIndex = *((_WORD *)sceneEnta + 692) & 0x3FF;
    surfaceInfo.mapEntLookup = sceneEnta->mapEntLookup;
    surfaceInfo.lightingInfo.lgv.allocatedVolumeInfoSlot = 0;
    surfaceInfo.materialLod = sceneEnta->materialLods[*(_QWORD *)dismembermentPointBoneIndices];
    surfaceInfo.tensionDataOffset = -1;
    surfaceInfo.motionblurSurf = -1;
    gfxPackedEntityIndexBase = sceneEnta->gfxPackedEntityIndexBase;
    surfaceInfo.reIndexedEntityId = gfxPackedEntityIndexBase;
    materialData = v8->materialData;
    if ( materialData && gfxPackedEntityIndexBase )
      surfaceInfo.reIndexedEntityId = gfxPackedEntityIndexBase + materialData->modelEntityDataOffset[*(_QWORD *)dismembermentPointBoneIndices];
    if ( !R_ModelLodHasSubdivision(v25, v28) || (QuatToAxis(&quat, &axis), ModelSubdivLodLevel = R_GetModelSubdivLodLevel(v25, v28, &outOrigin, &axis, 1.0), (surfaceInfo.subdivLodLevel = ModelSubdivLodLevel) != 0) && !R_CacheRigidSubdivLod(v25, v28) )
    {
      ModelSubdivLodLevel = 0;
      surfaceInfo.subdivLodLevel = 0;
    }
    v33 = surfaces;
    if ( !surfaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1286, ASSERT_TYPE_ASSERT, "(surfaces)", (const char *)&queryFormat, "surfaces") )
      __debugbreak();
    *(_DWORD *)surfaceCount += v171;
    if ( v171 > 0x80 )
    {
      LODWORD(outAnimDataIndex) = v171;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1289, ASSERT_TYPE_ASSERT, "( ( surfaceCount <= DOBJ_MAX_SURFS ) )", "( surfaceCount ) = %i", outAnimDataIndex) )
        __debugbreak();
    }
    _ZF = (v25->flags & 0x8000000) == 0;
    skinningContext.mayhemSelfVis.enable = (v25->flags & 0x8000000) != 0;
    if ( !_ZF )
      skinningContext.mayhemSelfVis.enable = R_MayhemSelfVis_GetPerModelData(frontEndDataOut, sceneEnta, v8, v25, &skinningContext.mayhemSelfVis.channel, &skinningContext.mayhemSelfVis.animDataIndex);
    skinningContext.surfaceVertOffset = 0;
    v35 = 0;
    v165 = 0;
    v36 = 0i64;
    *(_QWORD *)dismembermentPointBoneIndices = 0i64;
    v37 = surfPos;
    while ( 1 )
    {
      _R15 = &v33[v36];
      if ( v37 > (unsigned __int8 *)&v213 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SURF_BUF);
$hide:
        *(_DWORD *)v37 = -3;
        v37 += 4;
        surfPos = v37;
        if ( v37 > v214 )
        {
          Name = XModelGetName(model);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1344, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", Name) )
            __debugbreak();
        }
        skinningContext.surfaceVertOffset += _R15->vertCount;
        surfModelIndex[v166] = truncate_cast<unsigned char,unsigned int>(val);
        goto LABEL_279;
      }
      v39 = 0;
      _RBX = 0i64;
      do
      {
        __asm { vlddqu  xmm6, xmmword ptr [rbx+r15+70h] }
        *(__int128 *)((char *)&v196 + _RBX) = _XMM6;
        ++v39;
        _RBX += 16i64;
      }
      while ( v39 < 2 );
      _RAX = 192i64 * (v165 + 1);
      _RCX = surfaces;
      __asm { prefetcht0 byte ptr [rax+rcx+70h] }
      v44 = v197;
      if ( !numBones )
      {
        if ( !numClientBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1331, ASSERT_TYPE_ASSERT, "(clientBoneCount > 0)", (const char *)&queryFormat, "clientBoneCount > 0") )
          __debugbreak();
        if ( v163 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1332, ASSERT_TYPE_ASSERT, "(boneIndex == 0)", (const char *)&queryFormat, "boneIndex == 0") )
          __debugbreak();
        v80 = ClientBoneOffset >> 5;
        v81 = ClientBoneOffset & 0x1F;
        v82 = 32 - (ClientBoneOffset & 0x1F);
        if ( (ClientBoneOffset & 0x1F) != 0 )
        {
          if ( v80 )
            v83 = 0;
          else
            v83 = (unsigned int)v196 >> v81;
          v198 = v83;
          if ( v80 )
            v84 = 0;
          else
            v84 = (_DWORD)v196 << v82;
          if ( v80 <= 1 )
            v85 = *((_DWORD *)&v196 + 1 - v80) >> v81;
          else
            v85 = 0;
          v199 = v84 | v85;
          if ( v80 <= 1 )
            v86 = *((_DWORD *)&v196 + 1 - v80) << v82;
          else
            v86 = 0;
          if ( v80 <= 2 )
            v87 = *((_DWORD *)&v196 + 2 - v80) >> v81;
          else
            v87 = 0;
          v200 = v86 | v87;
          if ( v80 <= 2 )
            v88 = *((_DWORD *)&v196 + 2 - v80) << v82;
          else
            v88 = 0;
          if ( v80 <= 3 )
            v89 = *((_DWORD *)&v196 + 3 - v80) >> v81;
          else
            v89 = 0;
          v201 = v88 | v89;
          if ( v80 <= 3 )
            v90 = *((_DWORD *)&v196 + 3 - v80) << v82;
          else
            v90 = 0;
          if ( v80 <= 4 )
            v91 = *((_DWORD *)&v196 + 4 - v80) >> v81;
          else
            v91 = 0;
          v202 = v90 | v91;
          if ( v80 <= 4 )
            v92 = *((_DWORD *)&v196 + 4 - v80) << v82;
          else
            v92 = 0;
          if ( v80 <= 5 )
            v93 = *((_DWORD *)&v196 + 5 - v80) >> v81;
          else
            v93 = 0;
          v203 = v92 | v93;
          if ( v80 <= 5 )
            v94 = *((_DWORD *)&v196 + 5 - v80) << v82;
          else
            v94 = 0;
          if ( v80 <= 6 )
            v95 = *((_DWORD *)&v196 + 6 - v80) >> v81;
          else
            v95 = 0;
          v204 = v94 | v95;
          if ( v80 <= 6 )
            v96 = *((_DWORD *)&v196 + 6 - v80) << v82;
          else
            v96 = 0;
          if ( v80 <= 7 )
            v63 = v96 | (*((_DWORD *)&v196 + 7 - v80) >> v81);
          else
            v63 = v96;
        }
        else
        {
          if ( v80 )
            v97 = 0;
          else
            v97 = v196;
          v198 = v97;
          if ( v80 <= 1 )
            v98 = *((_DWORD *)&v196 + 1 - v80);
          else
            v98 = 0;
          v199 = v98;
          if ( v80 <= 2 )
            v99 = *((_DWORD *)&v196 + 2 - v80);
          else
            v99 = 0;
          v200 = v99;
          if ( v80 <= 3 )
            v100 = *((_DWORD *)&v196 + 3 - v80);
          else
            v100 = 0;
          v201 = v100;
          if ( v80 <= 4 )
            v101 = *((_DWORD *)&v196 + 4 - v80);
          else
            v101 = 0;
          v202 = v101;
          if ( v80 <= 5 )
            v102 = *((_DWORD *)&v196 + 5 - v80);
          else
            v102 = 0;
          v203 = v102;
          if ( v80 <= 6 )
            v103 = *((_DWORD *)&v196 + 6 - v80);
          else
            v103 = 0;
          v204 = v103;
          if ( v80 <= 7 )
            v63 = *((_DWORD *)&v196 + 7 - v80);
          else
            v63 = 0;
        }
        goto LABEL_234;
      }
      v45 = v163;
      v46 = v163 >> 5;
      v47 = v163 & 0x1F;
      v48 = 32 - (v163 & 0x1F);
      if ( (v163 & 0x1F) != 0 )
      {
        if ( v46 )
          v49 = 0;
        else
          v49 = (unsigned int)v196 >> v47;
        v198 = v49;
        if ( v46 )
          v50 = 0;
        else
          v50 = (_DWORD)v196 << v48;
        if ( v46 <= 1 )
          v51 = *((_DWORD *)&v196 + 1 - v46) >> v47;
        else
          v51 = 0;
        v199 = v50 | v51;
        if ( v46 <= 1 )
          v52 = *((_DWORD *)&v196 + 1 - v46) << v48;
        else
          v52 = 0;
        if ( v46 <= 2 )
          v53 = *((_DWORD *)&v196 + 2 - v46) >> v47;
        else
          v53 = 0;
        v200 = v52 | v53;
        if ( v46 <= 2 )
          v54 = *((_DWORD *)&v196 + 2 - v46) << v48;
        else
          v54 = 0;
        if ( v46 <= 3 )
          v55 = *((_DWORD *)&v196 + 3 - v46) >> v47;
        else
          v55 = 0;
        v201 = v54 | v55;
        if ( v46 <= 3 )
          v56 = *((_DWORD *)&v196 + 3 - v46) << v48;
        else
          v56 = 0;
        if ( v46 <= 4 )
          v57 = *((_DWORD *)&v196 + 4 - v46) >> v47;
        else
          v57 = 0;
        v202 = v56 | v57;
        if ( v46 <= 4 )
          v58 = *((_DWORD *)&v196 + 4 - v46) << v48;
        else
          v58 = 0;
        if ( v46 <= 5 )
          v59 = *((_DWORD *)&v196 + 5 - v46) >> v47;
        else
          v59 = 0;
        v203 = v58 | v59;
        if ( v46 <= 5 )
          v60 = *((_DWORD *)&v196 + 5 - v46) << v48;
        else
          v60 = 0;
        if ( v46 <= 6 )
          v61 = *((_DWORD *)&v196 + 6 - v46) >> v47;
        else
          v61 = 0;
        v204 = v60 | v61;
        if ( v46 <= 6 )
          v62 = *((_DWORD *)&v196 + 6 - v46) << v48;
        else
          v62 = 0;
        if ( v46 <= 7 )
          v63 = v62 | (*((_DWORD *)&v196 + 7 - v46) >> v47);
        else
          v63 = v62;
        v45 = v163;
      }
      else
      {
        if ( v46 )
          v64 = 0;
        else
          v64 = v196;
        v198 = v64;
        if ( v46 <= 1 )
          v65 = *((_DWORD *)&v196 + 1 - v46);
        else
          v65 = 0;
        v199 = v65;
        if ( v46 <= 2 )
          v66 = *((_DWORD *)&v196 + 2 - v46);
        else
          v66 = 0;
        v200 = v66;
        if ( v46 <= 3 )
          v67 = *((_DWORD *)&v196 + 3 - v46);
        else
          v67 = 0;
        v201 = v67;
        if ( v46 <= 4 )
          v68 = *((_DWORD *)&v196 + 4 - v46);
        else
          v68 = 0;
        v202 = v68;
        if ( v46 <= 5 )
          v69 = *((_DWORD *)&v196 + 5 - v46);
        else
          v69 = 0;
        v203 = v69;
        if ( v46 <= 6 )
          v70 = *((_DWORD *)&v196 + 6 - v46);
        else
          v70 = 0;
        v204 = v70;
        if ( v46 <= 7 )
          v63 = *((_DWORD *)&v196 + 7 - v46);
        else
          v63 = 0;
      }
      v205 = v63;
      if ( (v197 & 2) != 0 )
      {
        v71 = numBones + v45;
        v72 = v71 >> 5;
        v73 = v71 & 0x1F;
        if ( v73 )
        {
          v74 = 1 << (32 - v73);
          if ( (unsigned int)v72 >= 8 )
          {
            LODWORD(skelMatArrayPrevFrame) = 8;
            LODWORD(outAnimDataIndex) = v72;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_public_db.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( indexHigh ) < (unsigned)( ( sizeof( *array_counter( super::array ) ) + 0 ) )", "indexHigh doesn't index ARRAY_COUNT( super::array )\n\t%i not in [0, %i)", outAnimDataIndex, skelMatArrayPrevFrame) )
              __debugbreak();
          }
          *(&v198 + v72) &= -v74;
          v75 = (unsigned int)(v72 + 1);
          if ( (unsigned int)v75 >= 8 )
            goto LABEL_157;
          v76 = (unsigned int)(8 - v75);
          v77 = &v198 + v75;
          while ( v76 )
          {
            *v77++ = 0;
            --v76;
          }
          v63 = v205;
        }
        else if ( (unsigned int)v72 < 8 )
        {
          v78 = (unsigned int)(8 - v72);
          v79 = &v198 + v72;
          while ( v78 )
          {
            *v79++ = 0;
            --v78;
          }
LABEL_157:
          v63 = v205;
        }
      }
LABEL_234:
      if ( (v44 & 2) != 0 )
        v104 = v63 | 2;
      else
        v104 = v63 & 0xFFFFFFFD;
      v205 = v104;
      v105 = 0;
      v106 = 0i64;
      do
      {
        _XMM6 = *(_OWORD *)((char *)&v198 + v106);
        __asm
        {
          vpand   xmm1, xmm6, xmmword ptr [rbp+rbx+13550h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
          vptest  xmm1, xmm1
        }
        if ( !_ZF )
          goto LABEL_274;
        ++v105;
        v106 += 16i64;
      }
      while ( v105 < 2 );
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
      v111 = 0;
      if ( rigidVertListCount )
      {
        v112 = 0i64;
        while ( 1 )
        {
          boneIndexOffset = _R15->rigidVertLists[v112].boneIndexOffset;
          v114 = boneIndexOffset >= numBones ? ClientBoneOffset + boneIndexOffset - numBones : v163 + boneIndexOffset;
          if ( FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)frontEndDataOut->localClientNum, obja, v114, 0) )
            break;
          ++v111;
          ++v112;
          if ( v111 >= rigidVertListCount )
            goto LABEL_258;
        }
LABEL_274:
        v37 = surfPos;
        v35 = v165;
        goto $hide;
      }
LABEL_258:
      v115 = 0;
      v116 = &v198;
      _RBX = &surfacePartBits;
      do
      {
        _XMM6 = *(_OWORD *)v116;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rbx]
          vpor    xmm6, xmm6, xmm0
        }
        *(_OWORD *)_RBX->array = _XMM6;
        ++v115;
        _RBX = (DObjPartBits *)((char *)_RBX + 16);
        v116 += 4;
      }
      while ( v115 < 2 );
      if ( ModelSubdivLodLevel && R_SurfaceHasSubdivision(_R15) )
      {
        v121 = surfPos;
        v122 = R_PreSkinSubdivXSurface(obja, _R15, &surfaceInfo, &skinningContext, surfPos, &mbBuildInfo);
      }
      else
      {
        v121 = surfPos;
        v122 = R_PreSkinXSurface(obja, _R15, &surfaceInfo, &skinningContext, surfPos, &mbBuildInfo);
      }
      v123 = v122;
      if ( val > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)val, "unsigned", val) )
        __debugbreak();
      surfModelIndex[v166] = val;
      if ( !v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1400, ASSERT_TYPE_ASSERT, "(surfBufSize)", (const char *)&queryFormat, "surfBufSize") )
        __debugbreak();
      v37 = &v121[v123];
      surfPos = v37;
      skinningContext.surfaceVertOffset += _R15->vertCount;
      if ( v37 > v214 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1403, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", model->name) )
        __debugbreak();
      ModelSubdivLodLevel = surfaceInfo.subdivLodLevel;
      v35 = v165;
LABEL_279:
      v125 = ++v166;
      v165 = ++v35;
      v36 = ++*(_QWORD *)dismembermentPointBoneIndices;
      v33 = surfaces;
      if ( v35 >= v171 )
      {
        v166 = v125;
        v8 = obja;
        v24 = ClientBoneOffset;
        if ( skinningContext.mayhemSelfVis.enable && skinningContext.surfaceVertOffset != skinningContext.mayhemSelfVis.channel->numVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1407, ASSERT_TYPE_ASSERT, "(!skinningContext.mayhemSelfVis.enable || ( skinningContext.surfaceVertOffset == skinningContext.mayhemSelfVis.channel->numVerts ))", (const char *)&queryFormat, "!skinningContext.mayhemSelfVis.enable || ( skinningContext.surfaceVertOffset == skinningContext.mayhemSelfVis.channel->numVerts )") )
          __debugbreak();
        v23 = v163;
        goto LABEL_285;
      }
    }
  }
LABEL_287:
  if ( !DObjSkelAreBonesUpToDate(v8, &surfacePartBits) )
  {
    v126 = DObjGetName(v8);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1411, ASSERT_TYPE_ASSERT, "( ( DObjSkelAreBonesUpToDate( obj, &skinCmd.surfacePartBits ) ) )", "( DObjGetName( obj ) ) = %s", v126) )
      __debugbreak();
  }
  if ( !*(_DWORD *)surfaceCount )
    goto LABEL_326;
  if ( skinningContext.numMayhemChannelVerts )
  {
    v127 = Com_GetObjBufIndex(v8);
    v175 = v18 - modelSurfs;
    v128 = truncate_cast<unsigned int,__int64>(v18 - modelSurfs);
    if ( !R_AddMayhemChannelsComputeCmds(frontEndDataOut->compute.cmdList, skinningContext.numMayhemChannelVerts, modelSurfs, v128, surfaceCount[0], v127) )
    {
      Profile_EndInternal(NULL);
      v129 = 0;
      goto LABEL_342;
    }
  }
  else
  {
    v175 = v18 - modelSurfs;
  }
  if ( !skinningContext.numSkinnedVerts )
    goto LABEL_313;
  if ( !R_AllocDObjSurfsSkinnedCacheVerts(modelSurfs, v18, *(unsigned int *)surfaceCount, skinningContext.numSkinnedVerts, &mbBuildInfo) )
  {
LABEL_326:
    Profile_EndInternal(NULL);
    v129 = 0;
    goto LABEL_342;
  }
  if ( *((char *)v9 + 1388) >= 0 )
    goto LABEL_308;
  v130 = DObjTotalNumBones(v8);
  v131 = (unsigned __int8 *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, v130);
  v132 = v131;
  dismembermentIndicesBuffer = v131;
  if ( !v131 || !FX_Dismemberment_GetIndices((LocalClientNum_t)frontEndDataOut->localClientNum, v8, v130, v131, &dismembermentPointCount, dismembermentPointBoneIndices) )
    goto LABEL_306;
  v133 = dismembermentPointCount;
  if ( !dismembermentPointCount )
  {
LABEL_307:
    R_WarnOncePerFrame(R_WARN_FAILED_SKINNING_DISMEMBERMENT_SETUP, v132 != NULL, v133);
    dismembermentPointCount = 0;
    dismembermentIndicesBuffer = NULL;
    goto LABEL_308;
  }
  v134 = (vec3_t *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, 12 * (unsigned int)dismembermentPointCount);
  dismembermentPointsBuffer = v134;
  if ( !v134 )
  {
LABEL_306:
    v133 = dismembermentPointCount;
    goto LABEL_307;
  }
  memset_0(v134, 0, 12i64 * dismembermentPointCount);
  v135 = 0;
  if ( dismembermentPointCount )
  {
    v136 = skelMatArray;
    do
    {
      v137 = v135;
      v138 = dismembermentPointBoneIndices[v135];
      v134[v137].v[0] = v136[v138].trans.v[0];
      v134[v137].v[1] = v136[v138].trans.v[1];
      v134[v137].v[2] = v136[v138].trans.v[2];
      ++v135;
    }
    while ( v135 < dismembermentPointCount );
  }
LABEL_308:
  if ( !skinningEnabled )
  {
LABEL_313:
    v148 = *(_DWORD *)surfaceCount;
    v149 = skelMatArray;
    goto LABEL_314;
  }
  prevSkinningSkel = NULL;
  if ( mbBuildInfo.emitSurfs )
    prevSkinningSkel = (XModel *)mbBuildInfo.prevSkinningSkel;
  model = prevSkinningSkel;
  v140 = v8->numModels;
  v141 = (XModel **)v8->models;
  entnum = (*((_DWORD *)sceneEnta + 346) >> 10) & 0xFFF;
  dobjBlendShapeTargetCount = DObjGetNumBlendShapeTargetWeights(v8);
  dobjBlendShapeWeights = DObjGetBlendShapeTargetWeights(v8);
  v144 = dismembermentPointCount;
  objBufIndex = Com_GetObjBufIndex(obja);
  partBitCount = DObjNumBones(obja);
  v147 = truncate_cast<unsigned int,__int64>(v175);
  numModels = v140;
  models = v141;
  v148 = *(_DWORD *)surfaceCount;
  v149 = skelMatArray;
  if ( !R_AddSkinningComputeCmds(frontEndDataOut->compute.cmdList, &scene.def.viewOffset, &scene.def.viewOffsetPrev, modelSurfs, v147, skelMatArray, (const DObjAnimMat *)model, &surfacePartBits, partBitCount, surfaceCount[0], objBufIndex, v144, dismembermentPointsBuffer, dismembermentIndicesBuffer, dobjBlendShapeWeights, dobjBlendShapeTargetCount, entnum, (const XModel *const *)models, numModels, surfModelIndex) )
    goto LABEL_326;
  v8 = obja;
  v18 = surfPos;
LABEL_314:
  if ( skinningContext.subdivCacheSize && !R_AllocDObjSurfsSubdivSkinnedCacheVerts(modelSurfs, v18, v148, skinningContext.subdivCacheSize, &mbBuildInfo, v162) )
    goto LABEL_326;
  mbBuildInfo.skinCacheEntry->frameCount = gfxBuf.skinnedCacheFrameCount;
  if ( mbBuildInfo.surfUsed )
    R_AllocMotionBlurSurfaces(modelSurfs, v18, v148, mbBuildInfo.surfBegin, mbBuildInfo.surfUsed);
  v150 = truncate_cast<unsigned int,__int64>(v175);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1536, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v152 = _InterlockedExchangeAdd(p_surfPos, v150);
  if ( (unsigned int)(v152 + v150) > 0x40000 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_SCENE_SURFS_SIZE);
    goto LABEL_326;
  }
  if ( (v152 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1546, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dobj_skin.cpp", 1548, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v153 = &frontEndDataOut->surfsBuffer[v152];
  v154 = sceneEnta;
  sceneEnta->cull.skinnedSurfs.firstSurf = v153;
  v154->surfBufSize = truncate_cast<unsigned short,unsigned int>(v150);
  memcpy_0(v153, modelSurfs, v150);
  Profile_EndInternal(NULL);
  if ( r_xdebug->current.integer )
    R_XModelDebug(v8, &surfacePartBits);
  if ( skinningContext.numSkinnedVerts && !skinningEnabled )
  {
    data[0] = (__int64)v153;
    v191 = v148;
    data[1] = (__int64)v149;
    v190 = DObjNumBones(v8);
    NumBlendShapeTargetWeights = DObjGetNumBlendShapeTargetWeights(v8);
    viewOffset = scene.def.viewOffset;
    viewOffsetPrev = scene.def.viewOffsetPrev;
    if ( !mbBuildInfo.emitSurfs || (v195 = mbBuildInfo.prevSkinningSkel) == NULL )
      v195 = NULL;
    Sys_AddWorkerCmd(WRKCMD_SKIN_XMODEL, data);
  }
  v129 = v148;
LABEL_342:
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v129;
}

