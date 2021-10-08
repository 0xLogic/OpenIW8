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
  __asm
  {
    vmovaps xmm0, xmm1
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rcx+10h], xmm0
  }
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
const DObjAnimMat *R_UpdateSceneEntBounds(GfxSceneEntity *sceneEnt, GfxSceneEntity **pLocalSceneEnt, const DObj **pObj, int waitForCullState)
{
  signed __int64 v4; 
  void *v16; 
  GfxSceneEntityCull *p_cull; 
  volatile signed __int32 state; 
  bool v23; 
  const DObj *obj; 
  const DObjAnimMat *mat; 
  const DObjAnimMat *result; 
  const DObj *v27; 
  const char *v28; 
  DObjAnimMat *v29; 
  unsigned int v30; 
  GfxSceneEntityCull *v33; 
  int v38; 
  int v39; 
  __int64 v40; 
  __int64 v42; 
  int integer; 
  bool v97; 
  __int64 v112; 
  __int64 v113; 
  DObjAnimMat *v115; 
  int v116; 
  Float4Bounds totalBounds; 
  Bounds bounds; 
  DObjPartBits partBits; 
  DObjPartBits v125; 
  XBoneInfo *boneInfo[4095]; 
  char v137; 

  v16 = alloca(v4);
  __asm
  {
    vmovaps [rsp+8200h+var_40], xmm6
    vmovaps [rsp+8200h+var_50], xmm7
    vmovaps [rsp+8200h+var_60], xmm8
    vmovaps [rsp+8200h+var_70], xmm9
    vmovaps [rsp+8200h+var_80], xmm10
    vmovaps [rsp+8200h+var_90], xmm11
    vmovaps [rsp+8200h+var_A0], xmm12
    vmovaps [rsp+8200h+var_B0], xmm13
    vmovaps [rsp+8200h+var_C0], xmm14
    vmovaps [rsp+8200h+var_D0], xmm15
  }
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
        v23 = p_cull->state == 1;
        if ( !p_cull->state )
        {
          LODWORD(v112) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 251, ASSERT_TYPE_ASSERT, "( ( state >= CULL_STATE_BOUNDED_PENDING ) )", "( state ) = %i", v112) )
            __debugbreak();
          v23 = 0;
        }
        if ( !v23 )
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
        result = mat;
        goto LABEL_68;
      }
    }
LABEL_31:
    result = NULL;
    goto LABEL_68;
  }
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 274, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
    __debugbreak();
  *pLocalSceneEnt = sceneEnt;
  if ( !sceneEnt->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 277, ASSERT_TYPE_ASSERT, "(localSceneEnt->obj)", (const char *)&queryFormat, "localSceneEnt->obj") )
    __debugbreak();
  v27 = sceneEnt->obj;
  *pObj = v27;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 280, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjGetSurfaces(v27, &partBits, (const unsigned __int8 (*)[254])sceneEnt->lods) <= 0 )
  {
    R_SetNoDraw(sceneEnt, sceneEnt);
    goto LABEL_31;
  }
  if ( v27->numModels )
    v28 = **(const char ***)v27->models;
  else
    v28 = "Unknown DOBJ";
  Sys_ProfBeginNamedEvent(0xFF808080, v28);
  v29 = NULL;
  v30 = 0;
  _RSI = 0i64;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rbp+rsi+8100h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
      vmovdqu xmmword ptr [rbp+rsi+8100h+var_80F8.baseclass_0.baseclass_0.baseclass_0.array], xmm6
    }
    ++v30;
    _RSI += 16i64;
  }
  while ( v30 < 2 );
  DObjLock(v27);
  Profile_Begin(424);
  v115 = CG_Pose_CalcDObjPose(sceneEnt->info.pose, v27, &v125);
  Profile_EndInternal(NULL);
  DObjUnlock(v27);
  v33 = &sceneEnt->cull;
  if ( v115 )
  {
    if ( !DObjSkelAreBonesUpToDate(v27, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 316, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &partBits ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &partBits )") )
      __debugbreak();
    Profile_Begin(425);
    __asm
    {
      vmovups xmm8, xmmword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
      vmovups [rsp+8200h+var_8190], xmm8
      vmovups xmm6, xmmword ptr cs:?g_worldMins@@3Ufloat4@@B.v; float4 const g_worldMins
      vmovups [rsp+8200h+var_81B0], xmm6
      vxorps  xmm0, xmm0, xmm0
      vsubps  xmm15, xmm0, xmm6
    }
    DObjGetBoneInfoClient(v27, boneInfo);
    v38 = DObjNumBones(v27);
    v116 = v38;
    v39 = DObjTotalNumBones(v27);
    if ( (partBits.array[7] & 2) != 0 )
    {
      if ( (v27->skel.partBits.skel.array[7] & 2) == 0 && DObjHasClientOnlyBones(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 344, ASSERT_TYPE_ASSERT, "(obj->skel.partBits.skel.testClientBit() || !DObjHasClientOnlyBones( obj ))", (const char *)&queryFormat, "obj->skel.partBits.skel.testClientBit() || !DObjHasClientOnlyBones( obj )") )
        __debugbreak();
    }
    else
    {
      v39 = v38;
    }
    v40 = v39;
    _R13 = v115;
    if ( v39 > 0 )
    {
      v42 = 0i64;
      __asm { vmovups xmm14, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
      do
      {
        if ( v42 >= v116 )
          goto LABEL_56;
        if ( (unsigned int)v29 >= 0x100 )
        {
          LODWORD(v113) = 256;
          LODWORD(v112) = (_DWORD)v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v112, v113) )
            __debugbreak();
          __asm { vmovups xmm14, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
        }
        if ( ((0x80000000 >> ((unsigned __int8)v29 & 0x1F)) & partBits.array[(unsigned __int64)(unsigned int)v29 >> 5]) != 0 )
        {
LABEL_56:
          _RAX = 32i64 * (int)v29;
          _RCX = boneInfo[v42];
          __asm
          {
            vmovups xmm3, xmmword ptr [rax+r13]
            vmovups xmm6, xmmword ptr [rcx]
            vmovups xmm7, xmmword ptr [rcx+0Ch]
            vaddps  xmm13, xmm8, xmmword ptr [rax+r13+10h]
            vmovups xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
            vaddps  xmm4, xmm3, xmm3
            vmulps  xmm0, xmm3, xmm4
            vshufps xmm1, xmm0, xmm0, 1Ah
            vshufps xmm0, xmm0, xmm0, 1
            vaddps  xmm1, xmm0, xmm1
            vsubps  xmm5, xmm2, xmm1
            vshufps xmm2, xmm4, xmm4, 1
            vshufps xmm1, xmm3, xmm3, 0FFh
            vshufps xmm0, xmm3, xmm3, 0DAh ; 'Ú'
            vmulps  xmm3, xmm0, xmm2
            vmulps  xmm1, xmm1, xmm4
            vaddps  xmm4, xmm1, xmm3
            vsubps  xmm2, xmm3, xmm1
            vshufps xmm0, xmm5, xmm4, 0A0h ; ' '
            vshufps xmm12, xmm0, xmm2, 58h ; 'X'
            vmovups [rbp+8100h+var_8160], xmm12
            vshufps xmm0, xmm2, xmm5, 5Ah ; 'Z'
            vshufps xmm3, xmm0, xmm4, 8
            vmovups [rbp+8100h+var_8150], xmm3
            vshufps xmm0, xmm4, xmm2, 5
            vshufps xmm11, xmm0, xmm5, 0A8h ; '¨'
            vmovups [rbp+8100h+var_8140], xmm11
            vshufps xmm0, xmm6, xmm6, 0
            vshufps xmm1, xmm6, xmm6, 55h ; 'U'
            vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
            vshufps xmm8, xmm7, xmm7, 0
            vshufps xmm9, xmm7, xmm7, 55h ; 'U'
            vshufps xmm10, xmm7, xmm7, 0AAh ; 'ª'
            vandnps xmm5, xmm14, xmm12
            vandnps xmm6, xmm14, xmm3
            vandnps xmm7, xmm14, xmm11
            vmulps  xmm0, xmm12, xmm0
            vaddps  xmm2, xmm13, xmm0
            vmulps  xmm1, xmm3, xmm1
            vaddps  xmm3, xmm2, xmm1
            vmulps  xmm0, xmm11, xmm4
            vaddps  xmm4, xmm3, xmm0
            vmulps  xmm1, xmm8, xmm5
            vmulps  xmm0, xmm9, xmm6
            vaddps  xmm2, xmm1, xmm0
            vmulps  xmm1, xmm10, xmm7
            vaddps  xmm0, xmm2, xmm1
            vsubps  xmm3, xmm4, xmm0
            vaddps  xmm1, xmm0, xmm4
            vminps  xmm15, xmm15, xmm3
            vmovups xmm6, [rsp+8200h+var_81B0]
            vmaxps  xmm6, xmm6, xmm1
            vmovups [rsp+8200h+var_81B0], xmm6
            vmovups xmm8, [rsp+8200h+var_8190]
          }
        }
        LODWORD(v29) = (_DWORD)v29 + 1;
        ++v42;
      }
      while ( v42 < v40 );
      v33 = &sceneEnt->cull;
    }
    __asm
    {
      vsubps  xmm0, xmm6, xmm15
      vmulps  xmm6, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
      vmovups xmmword ptr [rbp+8100h+totalBounds.halfSize.v], xmm6
      vaddps  xmm7, xmm6, xmm15
      vmovups xmmword ptr [rbp+8100h+totalBounds.midPoint.v], xmm7
    }
    integer = r_animBoundsWarn->current.integer;
    v97 = integer == 0;
    if ( integer )
      R_UpdateSceneEntBounds_CheckEstimate(sceneEnt, &totalBounds, integer == 2);
    _RAX = r_animBoundsScale;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( !v97 )
    {
      __asm
      {
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm6, xmm6, xmm0
        vmovups xmmword ptr [rbp+8100h+totalBounds.halfSize.v], xmm6
      }
    }
    __asm
    {
      vmovss  dword ptr [rbp+8100h+bounds.midPoint], xmm7
      vextractps dword ptr [rbp+8100h+bounds.midPoint+4], xmm7, 1
      vextractps dword ptr [rbp+8100h+bounds.midPoint+8], xmm7, 2
      vmovss  dword ptr [rbp+8100h+bounds.halfSize], xmm6
      vextractps dword ptr [rbp+8100h+bounds.halfSize+4], xmm6, 1
      vextractps dword ptr [rbp+8100h+bounds.halfSize+8], xmm6, 2
    }
    GfxSceneEntity_SetBounds(v33, &bounds);
    if ( v33->state != 1 )
    {
      LODWORD(v112) = v33->state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_pose.cpp", 430, ASSERT_TYPE_ASSERT, "( ( localSceneEnt->cull.state == CULL_STATE_BOUNDED_PENDING ) )", "( localSceneEnt->cull.state ) = %i", v112) )
        __debugbreak();
    }
    v33->state = 2;
    Profile_EndInternal(NULL);
    v29 = v115;
    memset(&bounds, 0, sizeof(bounds));
  }
  else
  {
    R_SetNoDraw(sceneEnt, sceneEnt);
  }
  Sys_ProfEndNamedEvent();
  result = v29;
LABEL_68:
  _R11 = &v137;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
R_UpdateSceneEntBounds_CheckEstimate
==============
*/
void R_UpdateSceneEntBounds_CheckEstimate(GfxSceneEntity *localSceneEnt, Float4Bounds *totalBounds, bool warnMultiple)
{
  const char *Name; 
  char v18; 
  char v19; 
  const char *v59; 
  const dvar_t *v77; 
  unsigned int flags; 
  const char *v79; 
  unsigned int v80; 
  unsigned int v81; 
  char *fmt; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  Bounds outBounds; 
  char buffer[1024]; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  _RBX = totalBounds;
  Name = DObjGetName(localSceneEnt->obj);
  if ( strcmp_0(Name, "tag_origin") )
  {
    if ( (*((_BYTE *)localSceneEnt + 1388) & 1) == 0 && (unsigned __int16)(localSceneEnt->obj->entnum - 2049) > 1u )
    {
      GfxSceneEntity_GetBounds(&localSceneEnt->cull, &outBounds);
      __asm
      {
        vmovss  xmm13, dword ptr [rbp+460h+outBounds.midPoint]
        vmovss  xmm6, dword ptr [rbp+460h+outBounds.midPoint+4]
        vmovss  dword ptr [rsp+560h+var_508], xmm6
        vmovss  xmm4, dword ptr [rbp+460h+outBounds.midPoint+8]
        vmovss  dword ptr [rsp+560h+var_508+4], xmm4
        vmovss  xmm15, dword ptr [rbp+460h+outBounds.halfSize]
        vmovss  xmm0, cs:__real@3f99999a
        vmulss  xmm2, xmm15, xmm0
        vmovss  xmm1, dword ptr [rbp+460h+outBounds.halfSize+4]
        vmovss  [rsp+560h+var_510], xmm1
        vmulss  xmm8, xmm1, xmm0
        vmovss  xmm1, dword ptr [rbp+460h+outBounds.halfSize+8]
        vmovss  [rsp+560h+var_50C], xmm1
        vmulss  xmm11, xmm1, xmm0
        vmovups xmm12, xmmword ptr [rbx]
        vshufps xmm7, xmm12, xmm12, 55h ; 'U'
        vshufps xmm5, xmm12, xmm12, 0AAh ; 'ª'
        vmovups xmm0, xmmword ptr [rbx+10h]
        vshufps xmm10, xmm0, xmm0, 55h ; 'U'
        vshufps xmm9, xmm0, xmm0, 0AAh ; 'ª'
        vsubss  xmm1, xmm13, xmm12
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm1, xmm1, xmm3
        vsubss  xmm0, xmm2, xmm0
        vcomiss xmm1, xmm0
      }
      if ( !(v18 | v19) )
        goto LABEL_7;
      __asm
      {
        vsubss  xmm1, xmm6, xmm7
        vandps  xmm1, xmm1, xmm3
        vsubss  xmm0, xmm8, xmm10
        vcomiss xmm1, xmm0
      }
      if ( !(v18 | v19) )
        goto LABEL_7;
      __asm
      {
        vsubss  xmm1, xmm4, xmm5
        vandps  xmm1, xmm1, xmm3
        vsubss  xmm0, xmm11, xmm9
        vcomiss xmm1, xmm0
      }
      if ( !(v18 | v19) )
      {
LABEL_7:
        __asm
        {
          vsubss  xmm14, xmm13, xmm15
          vaddss  xmm11, xmm13, xmm15
          vaddss  xmm13, xmm6, [rsp+560h+var_510]
          vaddss  xmm15, xmm4, [rsp+560h+var_50C]
          vmovups xmm1, xmmword ptr [rbx+10h]
          vsubss  xmm8, xmm12, xmm1
          vsubss  xmm10, xmm7, xmm10
          vsubss  xmm12, xmm5, xmm9
          vmovups xmm0, xmmword ptr [rbx]
          vaddss  xmm6, xmm0, xmm1
          vshufps xmm0, xmm1, xmm1, 55h ; 'U'
          vaddss  xmm7, xmm7, xmm0
          vaddss  xmm9, xmm5, xmm9
        }
        v59 = DObjGetName(localSceneEnt->obj);
        __asm
        {
          vsubss  xmm1, xmm6, xmm11
          vsubss  xmm0, xmm14, xmm8
          vmaxss  xmm2, xmm1, xmm0
          vxorps  xmm3, xmm3, xmm3
          vmaxss  xmm6, xmm2, xmm3
          vsubss  xmm1, xmm7, xmm13
          vmovss  xmm4, dword ptr [rsp+560h+var_508]
          vsubss  xmm0, xmm4, [rsp+560h+var_510]
          vsubss  xmm0, xmm0, xmm10
          vmaxss  xmm2, xmm1, xmm0
          vmaxss  xmm7, xmm2, xmm3
          vsubss  xmm1, xmm9, xmm15
          vmovss  xmm4, dword ptr [rsp+560h+var_508+4]
          vsubss  xmm0, xmm4, [rsp+560h+var_50C]
          vsubss  xmm0, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm0
          vmaxss  xmm8, xmm2, xmm3
        }
        DObjDebugGetCurrentLeafAnims(localSceneEnt->obj, buffer, 1024);
        v77 = DVARBOOL_r_printAnimTreeOnBoundsTooSmall;
        if ( !DVARBOOL_r_printAnimTreeOnBoundsTooSmall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_printAnimTreeOnBoundsTooSmall") )
          __debugbreak();
        if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
        {
          flags = v77->flags;
          if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v77->name) )
            __debugbreak();
        }
        if ( v77->current.enabled )
        {
          v79 = j_va("Ent %d Bounds too small:\n", (*((_DWORD *)localSceneEnt + 346) >> 10) & 0xFFF);
          DObjDisplayAnim(localSceneEnt->obj, v79);
        }
        if ( warnMultiple )
        {
          v80 = R_MessageStringHash(v59);
          v81 = R_MessageStringHash(buffer);
          __asm
          {
            vcvtss2sd xmm0, xmm8, xmm8
            vcvtss2sd xmm1, xmm7, xmm7
            vcvtss2sd xmm2, xmm6, xmm6
            vmovsd  [rsp+560h+var_520], xmm0
            vmovsd  [rsp+560h+var_528], xmm1
            vmovsd  [rsp+560h+var_530], xmm2
          }
          R_WarnOncePerFrameUnique(R_WARN_ESTIMATED_BOUNDS_TOO_SMALL_BEGIN, 3u, g_animBoundsWarnHashes, v81 + v80, buffer, v59, v102, v103, v104);
        }
        else
        {
          __asm
          {
            vcvtss2sd xmm0, xmm8, xmm8
            vcvtss2sd xmm1, xmm7, xmm7
            vcvtss2sd xmm3, xmm6, xmm6
            vmovsd  [rsp+560h+var_538], xmm0
            vmovsd  [rsp+560h+fmt], xmm1
            vmovq   r9, xmm3
          }
          R_WarnOncePerFrame(R_WARN_ESTIMATED_BOUNDS_TOO_SMALL_BEGIN, buffer, v59, _R9, fmt, v101);
        }
      }
    }
  }
  memset(&outBounds, 0, sizeof(outBounds));
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

