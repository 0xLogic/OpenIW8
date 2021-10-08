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
  XAnimCalcAnimInfo *v19; 
  int v21; 
  Ragdoll *Ragdoll; 
  const char ***models; 
  __int64 numBones; 
  __int64 v35; 
  bool v36; 
  int v37; 
  bool v38; 
  BoneOrientation *v42; 
  scr_string_t *boneNames; 
  unsigned __int16 *p_animBone; 
  unsigned int v46; 
  const char *v47; 
  int v86; 
  const BoneOrientation *PhysicsPoseBoneOrientations; 
  unsigned __int16 *v89; 
  int v91; 
  const dvar_t *v92; 
  const dvar_t *v95; 
  __int64 localClientNum; 
  const float4 *fmt; 
  char *fmta; 
  float4 *outModelTranslation; 
  float4 *outModelTranslationa; 
  __int64 v140; 
  float v141; 
  double calcMode; 
  double v143; 
  __int64 v144; 
  double v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v154; 
  int v155; 
  int entityNum; 
  __int64 v157; 
  int v159; 
  __int64 v160; 
  DObjPartBits *partBits; 
  __int128 v163; 
  float4 v164; 
  float4 outModelQuat; 
  vec4_t rotation; 
  float4 v167; 
  float4 v168; 

  v19 = animCalcInfo;
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
  v21 = *(_DWORD *)nodeData;
  partBits = &v19->ignorePartBits;
  if ( *(_DWORD *)nodeData )
  {
    if ( (unsigned int)(v21 - 1) >= 0x40 )
    {
      LODWORD(outModelTranslation) = v21 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", outModelTranslation, 64) )
        __debugbreak();
    }
    Ragdoll = Ragdoll_GetRagdoll(v21);
    if ( !Ragdoll )
    {
      outModelTranslation = (float4 *)"ragdoll";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
        __debugbreak();
    }
    if ( Ragdoll->allocated )
    {
      Profile_Begin(541);
      _RDI = Ragdoll_GetRagdoll(*(_DWORD *)nodeData);
      if ( !_RDI )
      {
        outModelTranslation = (float4 *)"ragdoll";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 90, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
          __debugbreak();
      }
      if ( Ragdoll_PoseValid(_RDI) )
      {
        models = (const char ***)obj->models;
        __asm { vmovaps [rsp+1F0h+var_40], xmm6 }
        if ( strncmp(_RDI->xmodelAtCreate, **models, 0x100ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 105, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tRagdoll has detected a change in model from %s to %s at running time %ims - this is not allowed", "false", _RDI->xmodelAtCreate, **(const char ***)obj->models, _RDI->state.msec) )
          __debugbreak();
        _RAX = g_activeRefDef;
        __asm { vmovaps [rsp+1F0h+var_90], xmm11 }
        if ( g_activeRefDef )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+7Ch]
            vmovss  xmm1, dword ptr [rax+80h]
            vmovss  xmm2, dword ptr [rax+84h]
          }
          HIDWORD(v163) = 0;
          __asm
          {
            vmovups xmm11, xmmword ptr [rbp-50h]
            vmovss  xmm11, xmm11, xmm0
            vinsertps xmm11, xmm11, xmm1, 10h
            vinsertps xmm11, xmm11, xmm2, 20h ; ' '
            vmovups xmmword ptr [rbp-50h], xmm11
          }
        }
        else
        {
          __asm { vxorps  xmm11, xmm11, xmm11 }
        }
        if ( !_RDI )
        {
          outModelTranslation = (float4 *)"ragdoll";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat) )
            __debugbreak();
        }
        numBones = _RDI->state.numBones;
        v155 = _RDI->state.numBones;
        if ( _RDI == (Ragdoll *)-4016i64 )
        {
          outModelTranslation = (float4 *)"bones";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 124, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat) )
            __debugbreak();
        }
        _RAX = ragdoll_animNodeOverrideWeight;
        __asm
        {
          vmovss  xmm6, dword ptr [rax+28h]
          vcomiss xmm6, cs:__real@3f800000
          vmovss  [rsp+1F0h+var_19C], xmm6
        }
        ++destBuffer->refCount;
        __asm
        {
          vmovaps [rsp+1F0h+var_50], xmm7
          vmovaps [rsp+1F0h+var_60], xmm8
          vmovaps [rsp+1F0h+var_70], xmm9
          vmovaps [rsp+1F0h+var_80], xmm10
          vmovaps [rsp+1F0h+var_A0], xmm12
        }
        XAnimClearCalcBufferIfEmpty(v19, obj, destBuffer);
        v35 = numBones;
        v157 = numBones;
        v36 = Ragdoll_RequiresAnimationPose(*(_DWORD *)nodeData);
        v37 = 0;
        v159 = 0;
        v38 = !v36;
        if ( v36 )
        {
          if ( DObjGetRootBoneCount(obj) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 162, ASSERT_TYPE_ASSERT, "(DObjGetRootBoneCount( obj ) == 1)", (const char *)&queryFormat, "DObjGetRootBoneCount( obj ) == 1") )
            __debugbreak();
          XAnimGetLocalBoneTransform(v19, obj, destBuffer, 0, &outModelQuat, &v164);
          __asm
          {
            vaddps  xmm1, xmm11, xmmword ptr [rbp+0F0h+var_130.v]
            vmovups xmm2, xmmword ptr [rbp+0F0h+outModelQuat.v]
            vmulps  xmm12, xmm2, cs:__xmm@3f800000bf800000bf800000bf800000
            vmovss  dword ptr [rbp+0F0h+var_140], xmm1
            vextractps dword ptr [rbp+0F0h+var_140+4], xmm1, 1
            vextractps dword ptr [rbp+0F0h+var_140+8], xmm1, 2
            vmovups xmmword ptr [rbp+0F0h+rotation], xmm2
          }
          Ragdoll_SetAnimPoseRootOrientation(_RDI, &rotation, (const vec3_t *)&v163);
          v42 = Ragdoll_GetAnimPoseBoneOrientationsForWrite(_RDI);
          if ( !v42 )
          {
            outModelTranslation = (float4 *)"animBoneOrientations";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 181, ASSERT_TYPE_ASSERT, "(animBoneOrientations)", (const char *)&queryFormat) )
              __debugbreak();
          }
          v154 = 0;
          if ( v35 > 0 )
          {
            boneNames = _RDI->boneNames;
            v160 = v157;
            p_animBone = &_RDI->state.bones[0].animBone;
            _RBX = &v42->orientation;
            do
            {
              v46 = *p_animBone;
              if ( v46 >= obj->numBones )
              {
                v47 = SL_ConvertToString(*boneNames);
                LODWORD(v144) = v46;
                LODWORD(v140) = *(_DWORD *)nodeData;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 196, ASSERT_TYPE_ASSERT, "(boneIdx < obj->numBones)", "%s\n\tRagdoll %i using model %s used to have bone %s as %i, but this is out of range now", "boneIdx < obj->numBones", v140, _RDI->xmodelAtCreate, v47, v144) )
                  __debugbreak();
              }
              if ( XAnimTestPartBit(partBits, v46) )
              {
                v86 = v154;
              }
              else
              {
                XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v46, &v168, &v167);
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbp+0F0h+var_100.v]
                  vsubps  xmm5, xmm0, xmmword ptr [rbp+0F0h+var_130.v]
                  vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
                  vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
                  vshufps xmm6, xmm12, xmm12, 0C9h ; 'É'
                  vmulps  xmm3, xmm0, xmm6
                  vshufps xmm8, xmm12, xmm12, 0D2h ; 'Ò'
                  vmulps  xmm2, xmm1, xmm8
                  vsubps  xmm0, xmm3, xmm2
                  vaddps  xmm4, xmm0, xmm0
                  vshufps xmm10, xmm12, xmm12, 0FFh
                  vmulps  xmm0, xmm10, xmm4
                  vaddps  xmm5, xmm0, xmm5
                  vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                  vmulps  xmm2, xmm0, xmm8
                  vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm1, xmm6
                  vsubps  xmm1, xmm3, xmm2
                  vaddps  xmm9, xmm1, xmm5
                  vmovups xmm5, xmmword ptr [rbp+0F0h+var_F0.v]
                  vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm0, xmm6
                  vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
                  vmulps  xmm2, xmm1, xmm8
                  vsubps  xmm6, xmm3, xmm2
                  vmulps  xmm0, xmm5, xmm12
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vshufps xmm7, xmm5, xmm5, 0FFh
                  vmulps  xmm0, xmm7, xmm10
                  vmulps  xmm1, xmm5, xmm10
                  vmulps  xmm4, xmm12, xmm7
                  vaddps  xmm1, xmm4, xmm1
                  vhaddps xmm3, xmm2, xmm2
                  vsubps  xmm2, xmm0, xmm3
                  vaddps  xmm0, xmm6, xmm1
                  vmovss  [rsp+1F0h+var_1A0], xmm9
                  vblendps xmm6, xmm2, xmm0, 7
                  vshufps xmm0, xmm9, xmm9, 55h ; 'U'
                  vshufps xmm1, xmm9, xmm9, 0AAh ; 'ª'
                  vmovss  dword ptr [rbx-8], xmm0
                  vmovss  dword ptr [rbx-0Ch], xmm9
                  vmovss  dword ptr [rbx-4], xmm1
                }
                if ( (v146 & 0x7F800000) == 2139095040 )
                  goto LABEL_103;
                __asm { vmovss  [rsp+1F0h+var_1A0], xmm0 }
                if ( (v147 & 0x7F800000) == 2139095040 )
                  goto LABEL_103;
                __asm { vmovss  [rsp+1F0h+var_1A0], xmm1 }
                if ( (v148 & 0x7F800000) == 2139095040 )
                {
LABEL_103:
                  outModelTranslation = (float4 *)"!IS_NAN( ( animBoneOrientation->origin )[0] ) && !IS_NAN( ( animBoneOrientation->origin )[1] ) && !IS_NAN( ( animBoneOrientation->origin )[2] )";
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 213, ASSERT_TYPE_SANITY, "( !IS_NAN( ( animBoneOrientation->origin )[0] ) && !IS_NAN( ( animBoneOrientation->origin )[1] ) && !IS_NAN( ( animBoneOrientation->origin )[2] ) )", (const char *)&queryFormat) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  [rsp+1F0h+var_1A0], xmm6
                  vmovups xmmword ptr [rbx], xmm6
                }
                if ( (v149 & 0x7F800000) == 2139095040 )
                  goto LABEL_104;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+4]
                  vmovss  [rsp+1F0h+var_1A0], xmm0
                }
                if ( (v150 & 0x7F800000) == 2139095040 )
                  goto LABEL_104;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+8]
                  vmovss  [rsp+1F0h+var_1A0], xmm0
                }
                if ( (v151 & 0x7F800000) == 2139095040 )
                  goto LABEL_104;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+0Ch]
                  vmovss  [rsp+1F0h+var_1A0], xmm0
                }
                if ( (v152 & 0x7F800000) == 2139095040 )
                {
LABEL_104:
                  outModelTranslation = (float4 *)"!IS_NAN( ( animBoneOrientation->orientation )[0] ) && !IS_NAN( ( animBoneOrientation->orientation )[1] ) && !IS_NAN( ( animBoneOrientation->orientation )[2] ) && !IS_NAN( ( animBoneOrientation->orientation )[3] )";
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 215, ASSERT_TYPE_SANITY, "( !IS_NAN( ( animBoneOrientation->orientation )[0] ) && !IS_NAN( ( animBoneOrientation->orientation )[1] ) && !IS_NAN( ( animBoneOrientation->orientation )[2] ) && !IS_NAN( ( animBoneOrientation->orientation )[3] ) )", (const char *)&queryFormat) )
                    __debugbreak();
                }
                Ragdoll_SetDebugAnimationPoseBone(_RDI, (const BoneOrientation *)&_RBX[-1].xyz.y, v37);
                v86 = ++v154;
              }
              ++v37;
              ++boneNames;
              _RBX = (vec4_t *)((char *)_RBX + 28);
              p_animBone += 24;
              --v160;
            }
            while ( v160 );
            if ( v86 )
            {
              if ( v86 != v155 )
              {
                outModelTranslation = (float4 *)"numCalculatedBones == 0 || numCalculatedBones == numBones";
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_xanimnode.cpp", 224, ASSERT_TYPE_ASSERT, "(numCalculatedBones == 0 || numCalculatedBones == numBones)", (const char *)&queryFormat) )
                  __debugbreak();
              }
            }
            v19 = animCalcInfo;
            v35 = v157;
            __asm { vmovss  xmm6, [rsp+1F0h+var_19C] }
          }
          v38 = 1;
          v37 = 0;
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        if ( !v38 )
        {
          PhysicsPoseBoneOrientations = Ragdoll_GetPhysicsPoseBoneOrientations(_RDI);
          if ( !Ragdoll_PoseValid(_RDI) )
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
          if ( v35 > 0 )
          {
            __asm { vmovaps [rsp+1F0h+var_B0], xmm13 }
            v89 = &_RDI->state.bones[0].animBone;
            __asm { vmovaps [rsp+1F0h+var_C0], xmm14 }
            _RBX = &PhysicsPoseBoneOrientations->origin.v[2];
            __asm { vmovaps [rsp+1F0h+var_D0], xmm15 }
            do
            {
              v91 = *v89;
              if ( !XAnimTestPartBit(partBits, v91) )
              {
                if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) )
                  goto LABEL_95;
                v92 = DVARBOOL_physics_killswitchEnableRagdollFrameDelayFixOnMovers;
                if ( !DVARBOOL_physics_killswitchEnableRagdollFrameDelayFixOnMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableRagdollFrameDelayFixOnMovers") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v92);
                if ( v92->current.enabled )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+1Ch]
                    vaddss  xmm6, xmm0, dword ptr [rbx-8]
                  }
                  v95 = DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+24h]
                    vmovss  xmm1, dword ptr [rdi+20h]
                    vaddss  xmm8, xmm0, dword ptr [rbx]
                    vaddss  xmm7, xmm1, dword ptr [rbx-4]
                  }
                  if ( !DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ragdoll_debugRagdollMoverOffset") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v95);
                  if ( v95->current.enabled && !v37 )
                  {
                    localClientNum = _RDI->localClientNum;
                    __asm
                    {
                      vmovss  xmm9, dword ptr [rbx]
                      vmovss  xmm10, dword ptr [rbx-4]
                      vmovss  xmm12, dword ptr [rbx-8]
                      vmovss  xmm13, dword ptr [rdi+24h]
                      vmovss  xmm14, dword ptr [rdi+20h]
                      vmovss  xmm15, dword ptr [rdi+1Ch]
                    }
                    entityNum = _RDI->entityNum;
                    __asm
                    {
                      vcvtss2sd xmm9, xmm9, xmm9
                      vcvtss2sd xmm10, xmm10, xmm10
                      vcvtss2sd xmm12, xmm12, xmm12
                      vcvtss2sd xmm13, xmm13, xmm13
                      vcvtss2sd xmm14, xmm14, xmm14
                      vcvtss2sd xmm15, xmm15, xmm15
                    }
                    if ( (unsigned int)localClientNum >= cg_t::ms_allocatedCount )
                    {
                      LODWORD(v140) = cg_t::ms_allocatedCount;
                      LODWORD(outModelTranslation) = _RDI->localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", outModelTranslation, v140) )
                        __debugbreak();
                    }
                    if ( !cg_t::ms_cgArray[localClientNum] )
                    {
                      LODWORD(v140) = localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v140) )
                        __debugbreak();
                    }
                    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
                    {
                      LODWORD(v140) = localClientNum;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v140) )
                        __debugbreak();
                    }
                    __asm
                    {
                      vmovsd  [rsp+1F0h+var_1A8], xmm9
                      vmovsd  [rsp+1F0h+var_1B0], xmm10
                      vmovsd  qword ptr [rsp+1F0h+calcMode], xmm12
                    }
                    LODWORD(v140) = entityNum;
                    __asm
                    {
                      vmovaps xmm3, xmm15
                      vmovsd  [rsp+1F0h+outModelTranslation], xmm13
                      vmovq   r9, xmm3
                      vmovsd  [rsp+1F0h+fmt], xmm14
                    }
                    Com_Printf(20, "[%d] RAGDOLL ANIM NODE: Mover offset [%6.2f %6.2f %6.2f] applied to ragdoll %d. Ragdoll Root Bone [%6.2f %6.2f %6.2f] \n", (unsigned int)cg_t::ms_cgArray[localClientNum]->time, *(double *)&_XMM3, *(double *)&fmta, *(double *)&outModelTranslationa, v140, calcMode, v143, v145);
                  }
                }
                else
                {
LABEL_95:
                  __asm
                  {
                    vmovss  xmm6, dword ptr [rbx-8]
                    vmovss  xmm7, dword ptr [rbx-4]
                    vmovss  xmm8, dword ptr [rbx]
                  }
                }
                __asm
                {
                  vmovss  xmm2, [rbp+0F0h+weightScale]
                  vmovups xmm0, xmmword ptr [rbx+4]
                }
                HIDWORD(v163) = 0;
                __asm
                {
                  vmovups xmm1, [rbp+0F0h+var_140]
                  vmovss  xmm1, xmm1, xmm6
                  vinsertps xmm1, xmm1, xmm7, 10h
                  vinsertps xmm1, xmm1, xmm8, 20h ; ' '
                  vmovups [rbp+0F0h+var_140], xmm1
                  vsubps  xmm1, xmm1, xmm11
                  vmovss  dword ptr [rsp+1F0h+var_1C0], xmm2
                }
                XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v91, fmt, outModelTranslation, v141);
                v37 = v159;
              }
              ++v37;
              _RBX += 7;
              v89 += 24;
              v159 = v37;
              --v157;
            }
            while ( v157 );
            __asm { vmovss  xmm6, [rsp+1F0h+var_19C] }
            v19 = animCalcInfo;
            __asm
            {
              vmovaps xmm15, [rsp+1F0h+var_D0]
              vmovaps xmm14, [rsp+1F0h+var_C0]
              vmovaps xmm13, [rsp+1F0h+var_B0]
            }
          }
          __asm { vmovaps xmm2, xmm6; weightScale }
          XAnimCalcFinalizeBuffer(v19, obj, *(float *)&_XMM2, destBuffer, destBuffer, bNormQuat, 1, EASE_IN_QUAD);
        }
        XAnimFreeCalcBuffer(v19, obj, destBuffer);
        Profile_EndInternal(NULL);
        __asm
        {
          vmovaps xmm12, [rsp+1F0h+var_A0]
          vmovaps xmm11, [rsp+1F0h+var_90]
          vmovaps xmm10, [rsp+1F0h+var_80]
          vmovaps xmm9, [rsp+1F0h+var_70]
          vmovaps xmm8, [rsp+1F0h+var_60]
          vmovaps xmm7, [rsp+1F0h+var_50]
          vmovaps xmm6, [rsp+1F0h+var_40]
        }
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

