/*
==============
R_ScaleBounds
==============
*/

void __fastcall R_ScaleBounds(Float4Bounds *bounds, float scalar)
{
  ?R_ScaleBounds@@YAXPEAUFloat4Bounds@@M@Z(bounds, scalar);
}

/*
==============
R_UpdateSceneEntBounds
==============
*/

const DObjAnimMat *__fastcall R_UpdateSceneEntBounds(GfxSceneEntity *sceneEnt, GfxSceneEntity **pLocalSceneEnt, const DObj **pObj, int waitForCullState)
{
  return ?R_UpdateSceneEntBounds@@YAPEBUDObjAnimMat@@PEAUGfxSceneEntity@@PEAPEAU2@PEAPEBUDObj@@H@Z(sceneEnt, pLocalSceneEnt, pObj, waitForCullState);
}

/*
==============
R_UpdateGfxEntityBoundsCmd
==============
*/

void __fastcall R_UpdateGfxEntityBoundsCmd(const void *const data)
{
  ?R_UpdateGfxEntityBoundsCmd@@YAXQEBX@Z(data);
}

/*
==============
R_ScaleBounds
==============
*/

void __fastcall R_ScaleBounds(Float4Bounds *bounds, double scalar)
{
  bounds->halfSize.v = _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&scalar, *(__m128 *)&scalar, 0), bounds->halfSize.v);
}

/*
==============
R_SetNoDraw
==============
*/
void R_SetNoDraw(GfxSceneEntity *sceneEnt, GfxSceneEntity *localSceneEnt)
{
  volatile unsigned int state; 

  if ( sceneEnt->cull.state == 1 )
  {
    sceneEnt->cull.state = 4;
  }
  else
  {
    state = sceneEnt->cull.state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 62, ASSERT_TYPE_ASSERT, "( ( sceneEnt->cull.state == CULL_STATE_BOUNDED_PENDING ) )", "( sceneEnt->cull.state ) = %i", state) )
      __debugbreak();
    sceneEnt->cull.state = 4;
  }
}

/*
==============
R_UpdateGfxEntityBoundsCmd
==============
*/
void R_UpdateGfxEntityBoundsCmd(const void *const data)
{
  GfxSceneEntity *pLocalSceneEnt; 
  DObj *pObj; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 449, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( R_UpdateSceneEntBounds(*(GfxSceneEntity **)data, &pLocalSceneEnt, (const DObj **)&pObj, 0) && !pLocalSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 456, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
    __debugbreak();
}

/*
==============
R_UpdateSceneEntBounds
==============
*/
DObjAnimMat *R_UpdateSceneEntBounds(GfxSceneEntity *sceneEnt, GfxSceneEntity **pLocalSceneEnt, const DObj **pObj, int waitForCullState)
{
  signed __int64 v4; 
  void *v5; 
  GfxSceneEntityCull *p_cull; 
  volatile signed __int32 state; 
  bool v12; 
  const DObj *obj; 
  DObjAnimMat *mat; 
  const DObj *v16; 
  const char *v17; 
  DObjAnimMat *v18; 
  unsigned int v19; 
  GfxSceneEntityCull *v22; 
  __m128 v23; 
  int v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v31; 
  XBoneInfo *v32; 
  __m128 quat; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v54; 
  __m128 v55; 
  int integer; 
  __m128 unsignedInt; 
  __int64 v61; 
  __int64 v62; 
  DObjAnimMat *v64; 
  int v65; 
  __m128 v; 
  __m128 v67; 
  Float4Bounds totalBounds; 
  __m128 v69; 
  __m128 v70; 
  __m128 v71; 
  Bounds bounds; 
  DObjPartBits partBits; 
  DObjPartBits v74; 
  XBoneInfo *boneInfo[4095]; 

  v5 = alloca(v4);
  p_cull = &sceneEnt->cull;
  if ( (((_BYTE)sceneEnt + 72) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &sceneEnt->cull) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)p_cull, 1, 0) )
  {
    *pLocalSceneEnt = NULL;
    if ( waitForCullState )
    {
      while ( 1 )
      {
        state = p_cull->state;
        v12 = p_cull->state == 1;
        if ( !p_cull->state )
        {
          LODWORD(v61) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 251, ASSERT_TYPE_ASSERT, "( ( state >= CULL_STATE_BOUNDED_PENDING ) )", "( state ) = %i", v61) )
            __debugbreak();
          v12 = 0;
        }
        if ( !v12 )
          break;
        Sys_Sleep(0);
      }
      if ( state != 4 )
      {
        *pLocalSceneEnt = sceneEnt;
        obj = sceneEnt->obj;
        *pObj = obj;
        if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 266, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
          __debugbreak();
        mat = obj->skel.mat;
        if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 269, ASSERT_TYPE_ASSERT, "(bone)", (const char *)&queryFormat, "bone") )
          __debugbreak();
        return mat;
      }
    }
    return 0i64;
  }
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 274, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
    __debugbreak();
  *pLocalSceneEnt = sceneEnt;
  if ( !sceneEnt->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 277, ASSERT_TYPE_ASSERT, "(localSceneEnt->obj)", (const char *)&queryFormat, "localSceneEnt->obj") )
    __debugbreak();
  v16 = sceneEnt->obj;
  *pObj = v16;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 280, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjGetSurfaces(v16, &partBits, (const unsigned __int8 (*)[254])sceneEnt->lods) <= 0 )
  {
    R_SetNoDraw(sceneEnt, sceneEnt);
    return 0i64;
  }
  if ( v16->numModels )
    v17 = **(const char ***)v16->models;
  else
    v17 = "Unknown DOBJ";
  Sys_ProfBeginNamedEvent(0xFF808080, v17);
  v18 = NULL;
  v19 = 0;
  _RSI = 0i64;
  do
  {
    __asm { vlddqu  xmm6, xmmword ptr [rbp+rsi+8100h+partBits.baseclass_0.baseclass_0.baseclass_0.array] }
    *(_OWORD *)&v74.array[_RSI] = _XMM6;
    ++v19;
    _RSI += 4i64;
  }
  while ( v19 < 2 );
  DObjLock(v16);
  Profile_Begin(424);
  v64 = CG_Pose_CalcDObjPose(sceneEnt->info.pose, v16, &v74);
  Profile_EndInternal(NULL);
  DObjUnlock(v16);
  v22 = &sceneEnt->cull;
  if ( v64 )
  {
    if ( !DObjSkelAreBonesUpToDate(v16, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 316, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &partBits ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &partBits )") )
      __debugbreak();
    Profile_Begin(425);
    v23 = *(__m128 *)scene.def.viewOffset.v;
    v67 = *(__m128 *)scene.def.viewOffset.v;
    _XMM6 = g_worldMins.v;
    v = g_worldMins.v;
    _XMM15 = _mm128_sub_ps((__m128)0i64, g_worldMins.v);
    DObjGetBoneInfoClient(v16, boneInfo);
    v26 = DObjNumBones(v16);
    v65 = v26;
    v27 = DObjTotalNumBones(v16);
    if ( (partBits.array[7] & 2) != 0 )
    {
      if ( (v16->skel.partBits.skel.array[7] & 2) == 0 && DObjHasClientOnlyBones(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 344, ASSERT_TYPE_ASSERT, "(obj->skel.partBits.skel.testClientBit() || !DObjHasClientOnlyBones( obj ))", (const char *)&queryFormat, "obj->skel.partBits.skel.testClientBit() || !DObjHasClientOnlyBones( obj )") )
        __debugbreak();
    }
    else
    {
      v27 = v26;
    }
    v28 = v27;
    if ( v27 > 0 )
    {
      v29 = 0i64;
      _XMM14 = g_negativeZero.v;
      do
      {
        if ( v29 >= v65 )
          goto LABEL_56;
        if ( (unsigned int)v18 >= 0x100 )
        {
          LODWORD(v62) = 256;
          LODWORD(v61) = (_DWORD)v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v61, v62) )
            __debugbreak();
          _XMM14 = g_negativeZero.v;
        }
        if ( ((0x80000000 >> ((unsigned __int8)v18 & 0x1F)) & partBits.array[(unsigned __int64)(unsigned int)v18 >> 5]) != 0 )
        {
LABEL_56:
          v31 = (int)v18;
          v32 = boneInfo[v29];
          quat = (__m128)v64[v31].quat;
          v34 = *(__m128 *)v32->bounds.midPoint.v;
          v35 = *(__m128 *)v32->bounds.halfSize.v;
          v36 = _mm128_add_ps(v23, *(__m128 *)v64[v31].trans.v);
          v37 = _mm128_add_ps(quat, quat);
          v38 = _mm128_mul_ps(quat, v37);
          v39 = _mm128_sub_ps((__m128)_xmm, _mm128_add_ps(_mm_shuffle_ps(v38, v38, 1), _mm_shuffle_ps(v38, v38, 26)));
          v40 = _mm_shuffle_ps(quat, quat, 255);
          v41 = _mm128_mul_ps(_mm_shuffle_ps(quat, quat, 218), _mm_shuffle_ps(v37, v37, 1));
          v42 = _mm128_mul_ps(v40, v37);
          v43 = _mm128_add_ps(v42, v41);
          v44 = _mm128_sub_ps(v41, v42);
          v69 = _mm_shuffle_ps(_mm_shuffle_ps(v39, v43, 160), v44, 88);
          v70 = _mm_shuffle_ps(_mm_shuffle_ps(v44, v39, 90), v43, 8);
          v71 = _mm_shuffle_ps(_mm_shuffle_ps(v43, v44, 5), v39, 168);
          v45 = _mm_shuffle_ps(v34, v34, 0);
          v46 = _mm_shuffle_ps(v34, v34, 85);
          v47 = _mm_shuffle_ps(v34, v34, 170);
          v48 = _mm_shuffle_ps(v35, v35, 0);
          v49 = _mm_shuffle_ps(v35, v35, 85);
          v50 = _mm_shuffle_ps(v35, v35, 170);
          __asm
          {
            vandnps xmm5, xmm14, xmm12
            vandnps xmm6, xmm14, xmm3
            vandnps xmm7, xmm14, xmm11
          }
          v54 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v36, _mm128_mul_ps(v69, v45)), _mm128_mul_ps(v70, v46)), _mm128_mul_ps(v71, v47));
          v55 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v48, _XMM5), _mm128_mul_ps(v49, _XMM6)), _mm128_mul_ps(v50, _XMM7));
          _mm128_sub_ps(v54, v55);
          _mm128_add_ps(v55, v54);
          __asm { vminps  xmm15, xmm15, xmm3 }
          _XMM6 = v;
          __asm { vmaxps  xmm6, xmm6, xmm1 }
          v = _XMM6;
          v23 = v67;
        }
        LODWORD(v18) = (_DWORD)v18 + 1;
        ++v29;
      }
      while ( v29 < v28 );
      v22 = &sceneEnt->cull;
    }
    _XMM6.v = _mm128_mul_ps(_mm128_sub_ps(_XMM6, _XMM15), g_oneHalf.v);
    totalBounds.halfSize = (float4)_XMM6.v;
    _XMM7.v = _mm128_add_ps(_XMM6.v, _XMM15);
    totalBounds.midPoint = (float4)_XMM7.v;
    integer = r_animBoundsWarn->current.integer;
    if ( integer )
      R_UpdateSceneEntBounds_CheckEstimate(sceneEnt, &totalBounds, integer == 2);
    unsignedInt = (__m128)r_animBoundsScale->current.unsignedInt;
    if ( unsignedInt.m128_f32[0] != 1.0 )
    {
      _XMM6.v = _mm128_mul_ps(_XMM6.v, _mm_shuffle_ps(unsignedInt, unsignedInt, 0));
      totalBounds.halfSize = (float4)_XMM6.v;
    }
    bounds.midPoint.v[0] = _XMM7.v.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rbp+8100h+bounds.midPoint+4], xmm7, 1
      vextractps dword ptr [rbp+8100h+bounds.midPoint+8], xmm7, 2
    }
    bounds.halfSize.v[0] = _XMM6.v.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rbp+8100h+bounds.halfSize+4], xmm6, 1
      vextractps dword ptr [rbp+8100h+bounds.halfSize+8], xmm6, 2
    }
    GfxSceneEntity_SetBounds(v22, &bounds);
    if ( v22->state != 1 )
    {
      LODWORD(v61) = v22->state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 430, ASSERT_TYPE_ASSERT, "( ( localSceneEnt->cull.state == CULL_STATE_BOUNDED_PENDING ) )", "( localSceneEnt->cull.state ) = %i", v61) )
        __debugbreak();
    }
    v22->state = 2;
    Profile_EndInternal(NULL);
    v18 = v64;
    memset(&bounds, 0, sizeof(bounds));
  }
  else
  {
    R_SetNoDraw(sceneEnt, sceneEnt);
  }
  Sys_ProfEndNamedEvent();
  return v18;
}

/*
==============
R_UpdateSceneEntBounds_CheckEstimate
==============
*/
void R_UpdateSceneEntBounds_CheckEstimate(GfxSceneEntity *localSceneEnt, Float4Bounds *totalBounds, bool warnMultiple)
{
  const char *Name; 
  float4 v7; 
  __m128 v8; 
  __m128 v9; 
  float4 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float4 v16; 
  __m128 v; 
  float4 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  const char *v23; 
  __m128 v25; 
  __m128 v29; 
  __m128 v33; 
  const dvar_t *v36; 
  unsigned int flags; 
  const char *v38; 
  unsigned int v39; 
  unsigned int v40; 
  Bounds outBounds; 
  char buffer[1024]; 

  Name = DObjGetName(localSceneEnt->obj);
  if ( strcmp_0(Name, "tag_origin") )
  {
    if ( (*((_BYTE *)localSceneEnt + 1388) & 1) == 0 && (unsigned __int16)(localSceneEnt->obj->entnum - 2049) > 1u )
    {
      GfxSceneEntity_GetBounds(&localSceneEnt->cull, &outBounds);
      v7.v = (__m128)totalBounds->midPoint;
      v8 = _mm_shuffle_ps(v7.v, v7.v, 85);
      v9 = _mm_shuffle_ps(v7.v, v7.v, 170);
      v10.v = (__m128)totalBounds->halfSize;
      LODWORD(v11) = _mm_shuffle_ps(v10.v, v10.v, 85).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps(v10.v, v10.v, 170).m128_u32[0];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(outBounds.midPoint.v[0] - COERCE_FLOAT(*(_OWORD *)&totalBounds->midPoint)) & _xmm) > (float)((float)(outBounds.halfSize.v[0] * 1.2) - v10.v.m128_f32[0]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(outBounds.midPoint.v[1] - v8.m128_f32[0]) & _xmm) > (float)((float)(outBounds.halfSize.v[1] * 1.2) - v11) || COERCE_FLOAT(COERCE_UNSIGNED_INT(outBounds.midPoint.v[2] - v9.m128_f32[0]) & _xmm) > (float)((float)(outBounds.halfSize.v[2] * 1.2) - v12) )
      {
        v13 = outBounds.midPoint.v[0] + outBounds.halfSize.v[0];
        v14 = outBounds.midPoint.v[1] + outBounds.halfSize.v[1];
        v15 = outBounds.midPoint.v[2] + outBounds.halfSize.v[2];
        v16.v = (__m128)totalBounds->halfSize;
        v18.v = (__m128)totalBounds->midPoint;
        v18.v.m128_f32[0] = COERCE_FLOAT(*(_OWORD *)&totalBounds->midPoint) + v16.v.m128_f32[0];
        v = v18.v;
        v20 = v8;
        v20.m128_f32[0] = v8.m128_f32[0] + _mm_shuffle_ps(v16.v, v16.v, 85).m128_f32[0];
        v19 = v20;
        v22 = v9;
        v22.m128_f32[0] = v9.m128_f32[0] + v12;
        v21 = v22;
        v23 = DObjGetName(localSceneEnt->obj);
        v25 = v;
        v25.m128_f32[0] = v.m128_f32[0] - v13;
        _XMM1 = v25;
        __asm
        {
          vmaxss  xmm2, xmm1, xmm0
          vmaxss  xmm6, xmm2, xmm3
        }
        v29 = v19;
        v29.m128_f32[0] = v19.m128_f32[0] - v14;
        _XMM1 = v29;
        __asm
        {
          vmaxss  xmm2, xmm1, xmm0
          vmaxss  xmm7, xmm2, xmm3
        }
        v33 = v21;
        v33.m128_f32[0] = v21.m128_f32[0] - v15;
        _XMM1 = v33;
        __asm
        {
          vmaxss  xmm2, xmm1, xmm0
          vmaxss  xmm8, xmm2, xmm3
        }
        DObjDebugGetCurrentLeafAnims(localSceneEnt->obj, buffer, 1024);
        v36 = DVARBOOL_r_printAnimTreeOnBoundsTooSmall;
        if ( !DVARBOOL_r_printAnimTreeOnBoundsTooSmall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_printAnimTreeOnBoundsTooSmall") )
          __debugbreak();
        if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
        {
          flags = v36->flags;
          if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v36->name) )
            __debugbreak();
        }
        if ( v36->current.enabled )
        {
          v38 = j_va("Ent %d Bounds too small:\n", (*((_DWORD *)localSceneEnt + 346) >> 10) & 0xFFF);
          DObjDisplayAnim(localSceneEnt->obj, v38);
        }
        if ( warnMultiple )
        {
          v39 = R_MessageStringHash(v23);
          v40 = R_MessageStringHash(buffer);
          R_WarnOncePerFrameUnique(R_WARN_ESTIMATED_BOUNDS_TOO_SMALL_BEGIN, 3u, g_animBoundsWarnHashes, v40 + v39, buffer, v23, *(float *)&_XMM6, *(float *)&_XMM7, *(float *)&_XMM8);
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_ESTIMATED_BOUNDS_TOO_SMALL_BEGIN, buffer, v23, *(float *)&_XMM6, *(float *)&_XMM7, *(float *)&_XMM8);
        }
      }
    }
  }
  memset(&outBounds, 0, sizeof(outBounds));
}

