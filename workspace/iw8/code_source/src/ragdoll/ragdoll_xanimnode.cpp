/*
==============
Ragdoll_XAnimNode_Register
==============
*/

void Ragdoll_XAnimNode_Register(void)
{
  ?Ragdoll_XAnimNode_Register@@YAXXZ();
}

/*
==============
Ragdoll_XAnimNode_Init
==============
*/
void Ragdoll_XAnimNode_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_DWORD *)nodeData = 0;
}

/*
==============
Ragdoll_XAnimNode_PostParse
==============
*/
char Ragdoll_XAnimNode_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  if ( anims->entries[animIndex].numAnims == 1 )
    return 1;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 45, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ragdoll xanim node must not have any children") )
    __debugbreak();
  return 0;
}

/*
==============
Ragdoll_XAnimNode_Calc
==============
*/
void Ragdoll_XAnimNode_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  XAnimCalcAnimInfo *v8; 
  int v10; 
  Ragdoll *Ragdoll; 
  Ragdoll *v12; 
  float v13; 
  __int128 v15; 
  __int64 numBones; 
  float value; 
  XAnimCalcBuffer *v20; 
  __int64 v21; 
  int v22; 
  __m128 v24; 
  BoneOrientation *v25; 
  scr_string_t *boneNames; 
  unsigned __int16 *p_animBone; 
  vec4_t *p_orientation; 
  unsigned int v29; 
  const char *v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v; 
  __m128 v42; 
  float v46; 
  float v47; 
  int v48; 
  const BoneOrientation *PhysicsPoseBoneOrientations; 
  unsigned __int16 *v50; 
  float *v51; 
  int v52; 
  const dvar_t *v53; 
  float v54; 
  const dvar_t *v55; 
  __int64 localClientNum; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  __int128 v64; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  __int64 v69; 
  __int64 v70; 
  float v71; 
  int v72; 
  int v73; 
  int entityNum; 
  __int64 v75; 
  int v77; 
  XAnimCalcBuffer *calcBuffer; 
  __int64 v79; 
  DObjPartBits *partBits; 
  XAnimCalcBuffer outTempCalcBuffer; 
  __int128 v83; 
  float4 v84; 
  float4 outModelQuat; 
  vec4_t rotation; 
  float4 v87; 
  float4 v88; 

  v8 = animCalcInfo;
  if ( !obj )
  {
    outModelTranslation = (float4 *)"obj";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 68, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !obj->numModels )
  {
    outModelTranslation = (float4 *)"obj->numModels > 0";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 69, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat) )
      __debugbreak();
  }
  v10 = *(_DWORD *)nodeData;
  partBits = &v8->ignorePartBits;
  if ( *(_DWORD *)nodeData )
  {
    if ( (unsigned int)(v10 - 1) >= 0x40 )
    {
      LODWORD(outModelTranslation) = v10 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", outModelTranslation, 64) )
        __debugbreak();
    }
    Ragdoll = Ragdoll_GetRagdoll(v10);
    if ( !Ragdoll )
    {
      outModelTranslation = (float4 *)"ragdoll";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
        __debugbreak();
    }
    if ( Ragdoll->allocated )
    {
      Profile_Begin(541);
      v12 = Ragdoll_GetRagdoll(*(_DWORD *)nodeData);
      if ( !v12 )
      {
        outModelTranslation = (float4 *)"ragdoll";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 90, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
          __debugbreak();
      }
      if ( Ragdoll_PoseValid(v12) )
      {
        if ( strncmp(v12->xmodelAtCreate, **(const char ***)obj->models, 0x100ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 105, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tRagdoll has detected a change in model from %s to %s at running time %ims - this is not allowed", "false", v12->xmodelAtCreate, **(const char ***)obj->models, v12->state.msec) )
          __debugbreak();
        if ( g_activeRefDef )
        {
          v13 = g_activeRefDef->viewOffset.v[0];
          HIDWORD(v83) = 0;
          v15 = v83;
          *(float *)&v15 = v13;
          _XMM11 = v15;
          __asm
          {
            vinsertps xmm11, xmm11, xmm1, 10h
            vinsertps xmm11, xmm11, xmm2, 20h ; ' '
          }
          v83 = (__int128)_XMM11;
        }
        else
        {
          _XMM11 = 0i64;
        }
        if ( !v12 )
        {
          outModelTranslation = (float4 *)"ragdoll";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
            __debugbreak();
        }
        numBones = v12->state.numBones;
        v73 = v12->state.numBones;
        if ( v12 == (Ragdoll *)-4016i64 )
        {
          outModelTranslation = (float4 *)"bones";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 124, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat) )
            __debugbreak();
        }
        value = ragdoll_animNodeOverrideWeight->current.value;
        v71 = value;
        if ( value >= 1.0 )
        {
          ++destBuffer->refCount;
          v20 = destBuffer;
        }
        else
        {
          v20 = XAnimAllocOrReuseCalcBuffer(v8, obj, destBuffer, &outTempCalcBuffer);
        }
        calcBuffer = v20;
        XAnimClearCalcBufferIfEmpty(v8, obj, v20);
        v21 = numBones;
        v75 = numBones;
        v22 = 0;
        v77 = 0;
        if ( Ragdoll_RequiresAnimationPose(*(_DWORD *)nodeData) )
        {
          if ( DObjGetRootBoneCount(obj) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 162, ASSERT_TYPE_ASSERT, "(DObjGetRootBoneCount( obj ) == 1)", (const char *)&queryFormat, "DObjGetRootBoneCount( obj ) == 1") )
            __debugbreak();
          XAnimGetLocalBoneTransform(v8, obj, destBuffer, 0, &outModelQuat, &v84);
          _XMM1 = _mm128_add_ps(_XMM11, v84.v);
          v24 = _mm128_mul_ps(outModelQuat.v, (__m128)_xmm);
          *(float *)&v83 = _XMM1.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rbp+0F0h+var_140+4], xmm1, 1
            vextractps dword ptr [rbp+0F0h+var_140+8], xmm1, 2
          }
          rotation = (vec4_t)outModelQuat.v;
          Ragdoll_SetAnimPoseRootOrientation(v12, &rotation, (const vec3_t *)&v83);
          v25 = Ragdoll_GetAnimPoseBoneOrientationsForWrite(v12);
          if ( !v25 )
          {
            outModelTranslation = (float4 *)"animBoneOrientations";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 181, ASSERT_TYPE_ASSERT, "(animBoneOrientations)", (const char *)&queryFormat) )
              __debugbreak();
          }
          v72 = 0;
          if ( v21 > 0 )
          {
            boneNames = v12->boneNames;
            v79 = v75;
            p_animBone = &v12->state.bones[0].animBone;
            p_orientation = &v25->orientation;
            do
            {
              v29 = *p_animBone;
              if ( v29 >= obj->numBones )
              {
                v30 = SL_ConvertToString(*boneNames);
                LODWORD(v70) = v29;
                LODWORD(v69) = *(_DWORD *)nodeData;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 196, ASSERT_TYPE_ASSERT, "(boneIdx < obj->numBones)", "%s\n\tRagdoll %i using model %s used to have bone %s as %i, but this is out of range now", "boneIdx < obj->numBones", v69, v12->xmodelAtCreate, v30, v70) )
                  __debugbreak();
              }
              if ( XAnimTestPartBit(partBits, v29) )
              {
                v48 = v72;
              }
              else
              {
                XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v29, &v88, &v87);
                v31 = _mm128_sub_ps(v87.v, v84.v);
                v32 = _mm_shuffle_ps(v24, v24, 201);
                v33 = _mm_shuffle_ps(v24, v24, 210);
                v34 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 210), v32), _mm128_mul_ps(_mm_shuffle_ps(v31, v31, 201), v33));
                v35 = _mm128_add_ps(v34, v34);
                v36 = _mm_shuffle_ps(v24, v24, 255);
                v37 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v35, v35, 210), v32), _mm128_mul_ps(_mm_shuffle_ps(v35, v35, 201), v33)), _mm128_add_ps(_mm128_mul_ps(v36, v35), v31));
                v = v88.v;
                _XMM0 = _mm128_mul_ps(v88.v, v24);
                __asm
                {
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                }
                v42 = _mm_shuffle_ps(v, v, 255);
                __asm { vhaddps xmm3, xmm2, xmm2 }
                _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v42, v36), _XMM3);
                _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 210), v32), _mm128_mul_ps(_mm_shuffle_ps(v, v, 201), v33)), _mm128_add_ps(_mm128_mul_ps(v24, v42), _mm128_mul_ps(v88.v, v36)));
                __asm { vblendps xmm6, xmm2, xmm0, 7 }
                LODWORD(v46) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
                LODWORD(v47) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
                p_orientation[-1].v[2] = v46;
                p_orientation[-1].v[1] = v37.m128_f32[0];
                p_orientation[-1].v[3] = v47;
                if ( (v37.m128_i32[0] & 0x7F800000) == 2139095040 || (LODWORD(v46) & 0x7F800000) == 2139095040 || (LODWORD(v47) & 0x7F800000) == 2139095040 )
                {
                  outModelTranslation = (float4 *)"!IS_NAN( ( animBoneOrientation->origin )[0] ) && !IS_NAN( ( animBoneOrientation->origin )[1] ) && !IS_NAN( ( animBoneOrientation->origin )[2] )";
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 213, ASSERT_TYPE_SANITY, "( !IS_NAN( ( animBoneOrientation->origin )[0] ) && !IS_NAN( ( animBoneOrientation->origin )[1] ) && !IS_NAN( ( animBoneOrientation->origin )[2] ) )", (const char *)&queryFormat) )
                    __debugbreak();
                }
                *p_orientation = _XMM6;
                if ( (LODWORD(_XMM6.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(p_orientation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(p_orientation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(p_orientation->v[3]) & 0x7F800000) == 2139095040 )
                {
                  outModelTranslation = (float4 *)"!IS_NAN( ( animBoneOrientation->orientation )[0] ) && !IS_NAN( ( animBoneOrientation->orientation )[1] ) && !IS_NAN( ( animBoneOrientation->orientation )[2] ) && !IS_NAN( ( animBoneOrientation->orientation )[3] )";
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 215, ASSERT_TYPE_SANITY, "( !IS_NAN( ( animBoneOrientation->orientation )[0] ) && !IS_NAN( ( animBoneOrientation->orientation )[1] ) && !IS_NAN( ( animBoneOrientation->orientation )[2] ) && !IS_NAN( ( animBoneOrientation->orientation )[3] ) )", (const char *)&queryFormat) )
                    __debugbreak();
                }
                Ragdoll_SetDebugAnimationPoseBone(v12, (const BoneOrientation *)&p_orientation[-1].xyz.y, v22);
                v48 = ++v72;
              }
              ++v22;
              ++boneNames;
              p_orientation = (vec4_t *)((char *)p_orientation + 28);
              p_animBone += 24;
              --v79;
            }
            while ( v79 );
            if ( v48 )
            {
              if ( v48 != v73 )
              {
                outModelTranslation = (float4 *)"numCalculatedBones == 0 || numCalculatedBones == numBones";
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 224, ASSERT_TYPE_ASSERT, "(numCalculatedBones == 0 || numCalculatedBones == numBones)", (const char *)&queryFormat) )
                  __debugbreak();
              }
            }
            v8 = animCalcInfo;
            v21 = v75;
            value = v71;
          }
          v22 = 0;
        }
        if ( value > 0.0 )
        {
          PhysicsPoseBoneOrientations = Ragdoll_GetPhysicsPoseBoneOrientations(v12);
          if ( !Ragdoll_PoseValid(v12) )
          {
            outModelTranslation = (float4 *)"Ragdoll_PoseValid( ragdoll )";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 231, ASSERT_TYPE_ASSERT, "(Ragdoll_PoseValid( ragdoll ))", (const char *)&queryFormat) )
              __debugbreak();
          }
          if ( !PhysicsPoseBoneOrientations )
          {
            outModelTranslation = (float4 *)"boneOrientations";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 232, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat) )
              __debugbreak();
          }
          if ( v21 > 0 )
          {
            v50 = &v12->state.bones[0].animBone;
            v51 = &PhysicsPoseBoneOrientations->origin.v[2];
            do
            {
              v52 = *v50;
              if ( !XAnimTestPartBit(partBits, v52) )
              {
                if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) )
                  goto LABEL_98;
                v53 = DVARBOOL_physics_killswitchEnableRagdollFrameDelayFixOnMovers;
                if ( !DVARBOOL_physics_killswitchEnableRagdollFrameDelayFixOnMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableRagdollFrameDelayFixOnMovers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v53);
                if ( v53->current.enabled )
                {
                  v54 = v12->associatedMoverOffset.v[0] + *(v51 - 2);
                  v55 = DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset;
                  if ( !DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ragdoll_debugRagdollMoverOffset") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v55);
                  if ( v55->current.enabled && !v22 )
                  {
                    localClientNum = v12->localClientNum;
                    entityNum = v12->entityNum;
                    v57 = *v51;
                    v58 = *(v51 - 1);
                    v59 = *(v51 - 2);
                    v60 = v12->associatedMoverOffset.v[2];
                    v61 = v12->associatedMoverOffset.v[1];
                    v62 = v12->associatedMoverOffset.v[0];
                    if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount )
                    {
                      LODWORD(v69) = cg_t::ms_allocatedCount;
                      LODWORD(outModelTranslation) = v12->localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", outModelTranslation, v69) )
                        __debugbreak();
                    }
                    if ( !cg_t::ms_cgArray[localClientNum] )
                    {
                      LODWORD(v69) = localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v69) )
                        __debugbreak();
                    }
                    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
                    {
                      LODWORD(v69) = localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v69) )
                        __debugbreak();
                    }
                    LODWORD(v69) = entityNum;
                    Com_Printf(20, "[%d] RAGDOLL ANIM NODE: Mover offset [%6.2f %6.2f %6.2f] applied to ragdoll %d. Ragdoll Root Bone [%6.2f %6.2f %6.2f] \n", (unsigned int)cg_t::ms_cgArray[localClientNum]->time, v62, v61, v60, v69, v59, v58, v57);
                  }
                }
                else
                {
LABEL_98:
                  v54 = *(v51 - 2);
                }
                HIDWORD(v83) = 0;
                v64 = v83;
                *(float *)&v64 = v54;
                _XMM1 = v64;
                __asm
                {
                  vinsertps xmm1, xmm1, xmm7, 10h
                  vinsertps xmm1, xmm1, xmm8, 20h ; ' '
                }
                v83 = (__int128)_XMM1;
                _mm128_sub_ps(_XMM1, _XMM11);
                XAnimSetLocalBoneTransform(animCalcInfo, obj, calcBuffer, v52, fmt, outModelTranslation, weightScale);
                v22 = v77;
              }
              ++v22;
              v51 += 7;
              v50 += 24;
              v77 = v22;
              --v75;
            }
            while ( v75 );
            value = v71;
            v8 = animCalcInfo;
          }
          XAnimCalcFinalizeBuffer(v8, obj, value, calcBuffer, destBuffer, bNormQuat, 1, EASE_IN_QUAD);
        }
        XAnimFreeCalcBuffer(v8, obj, calcBuffer);
        Profile_EndInternal(NULL);
      }
      else
      {
        Profile_EndInternal(NULL);
      }
    }
  }
}

/*
==============
Ragdoll_XAnimNode_Read
==============
*/
void Ragdoll_XAnimNode_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  *(_DWORD *)nodeData = p;
}

/*
==============
Ragdoll_XAnimNode_Write
==============
*/
void Ragdoll_XAnimNode_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  p = *(_DWORD *)nodeData;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
Ragdoll_XAnimNode_Register
==============
*/
void Ragdoll_XAnimNode_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimRagdollNode>::ms_typeInfo);
}

