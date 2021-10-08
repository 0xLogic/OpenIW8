/*
==============
CG_KillCam_UpdateKillCamEntityViewOffset
==============
*/

void __fastcall CG_KillCam_UpdateKillCamEntityViewOffset(const LocalClientNum_t localClientNum)
{
  ?CG_KillCam_UpdateKillCamEntityViewOffset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_KillCam_GetKillCamEntityOrgAngles
==============
*/

void __fastcall CG_KillCam_GetKillCamEntityOrgAngles(const LocalClientNum_t localClientNum, vec3_t *origin, vec3_t *angles)
{
  ?CG_KillCam_GetKillCamEntityOrgAngles@@YAXW4LocalClientNum_t@@AEATvec3_t@@1@Z(localClientNum, origin, angles);
}

/*
==============
CG_KillCam_PostUpdateKillCamEntityCache
==============
*/

void __fastcall CG_KillCam_PostUpdateKillCamEntityCache(const LocalClientNum_t localClientNum)
{
  ?CG_KillCam_PostUpdateKillCamEntityCache@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_KillCam_UpdateKillCamEntity
==============
*/

void __fastcall CG_KillCam_UpdateKillCamEntity(const LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType)
{
  ?CG_KillCam_UpdateKillCamEntity@@YAXW4LocalClientNum_t@@W4KillCamEntityType@@@Z(localClientNum, killCamEntityType);
}

/*
==============
CG_KillCam_UpdateKillCamEntityCache
==============
*/

void __fastcall CG_KillCam_UpdateKillCamEntityCache(const LocalClientNum_t localClientNum)
{
  ?CG_KillCam_UpdateKillCamEntityCache@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_KillCam_CacheKillCamEntityPose
==============
*/
void CG_KillCam_CacheKillCamEntityPose(const LocalClientNum_t localClientNum)
{
  __int64 v10; 
  centity_t *Entity; 
  bool v13; 
  CgWeaponMap *v14; 
  const Weapon *Weapon; 
  bool v16; 
  bool v17; 
  char v25; 
  __int64 skipEntity; 
  vec3_t outOrigin; 
  __int64 v90; 
  vec3_t end; 
  vec3_t up; 
  trace_t results; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  v90 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
  }
  v10 = localClientNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 30, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 31, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamLastEntityNum != 2047 )
  {
    if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 40, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
      __debugbreak();
    Entity = CG_GetEntity((const LocalClientNum_t)v10, _RBX->killCamLastEntityNum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v13 = Entity->prevState.pos.trType == TR_STATIONARY && Entity->nextState.lerp.pos.trType == TR_STATIONARY;
    if ( Entity->nextState.eType != ET_MISSILE || !v13 || !_RBX->killCamFirstFrameRan )
      goto LABEL_48;
    if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v14 = CgWeaponMap::ms_instance[v10];
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v14, Entity->nextState.weaponHandle);
    if ( BG_GetWeaponClass(Weapon, 0) != WEAPCLASS_GRENADE )
      goto LABEL_48;
    LODWORD(Weapon) = Weapon->weaponIdx;
    if ( (unsigned int)Weapon > bg_lastParsedWeaponIndex )
    {
      LODWORD(skipEntity) = (_DWORD)Weapon;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", skipEntity, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    Weapon = (const Weapon *)(unsigned __int16)Weapon;
    v16 = bg_weaponDefs[(unsigned __int16)Weapon] == NULL;
    if ( !bg_weaponDefs[(unsigned __int16)Weapon] )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]");
      v16 = !v17;
      if ( v17 )
        __debugbreak();
    }
    _RAX = bg_weaponDefs[(_QWORD)Weapon];
    __asm
    {
      vmovss  xmm6, dword ptr [rax+1098h]
      vxorps  xmm13, xmm13, xmm13
      vcomiss xmm6, xmm13
    }
    if ( v16 )
      goto LABEL_48;
    if ( _RBX->killCamFirstFrameRan )
    {
      if ( !_RBX->killCamOffsetStartTime )
        _RBX->killCamOffsetStartTime = _RBX->time;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm7, xmm0, cs:__real@3a83126f
      }
      _RDI = DVARFLT_cg_killcamOffsetBlendDelayTime;
      if ( !DVARFLT_cg_killcamOffsetBlendDelayTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamOffsetBlendDelayTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm7, dword ptr [rdi+28h] }
      if ( !v25 )
      {
        AngleVectors(&Entity->pose.angles, NULL, NULL, &up);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+up]
          vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+outOrigin]
          vmovss  dword ptr [rsp+1A0h+end], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+up+4]
          vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+outOrigin+4]
          vmovss  dword ptr [rsp+1A0h+end+4], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+up+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+outOrigin+8]
          vmovss  dword ptr [rbp+0A0h+end+8], xmm2
        }
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v10 + 2), &results, &outOrigin, &end, &bounds_origin, Entity->nextState.number, 1, 33636369, 0, NULL, All);
        if ( !results.allsolid )
        {
          __asm
          {
            vmovss  xmm4, dword ptr [rsp+1A0h+outOrigin+8]
            vmovss  xmm9, dword ptr [rsp+1A0h+outOrigin+4]
            vmovss  xmm10, dword ptr [rsp+1A0h+outOrigin]
            vmovss  xmm5, [rbp+0A0h+results.fraction]
            vcomiss xmm5, cs:__real@3f800000
            vmovss  xmm8, dword ptr [rbp+0A0h+end+8]
            vmovss  xmm7, dword ptr [rsp+1A0h+end+4]
            vmovss  xmm6, dword ptr [rsp+1A0h+end]
            vsubss  xmm2, xmm6, xmm10
            vsubss  xmm0, xmm7, xmm9
            vsubss  xmm3, xmm8, xmm4
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm14, xmm2, xmm1
            vmovss  xmm0, dword ptr [rbx+0B50FCh]
            vsubss  xmm3, xmm0, xmm10
            vmovss  xmm1, dword ptr [rbx+0B5100h]
            vsubss  xmm2, xmm1, xmm9
            vmovss  xmm0, dword ptr [rbx+0B5104h]
            vsubss  xmm4, xmm0, xmm4
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_killcamOffsetBlendSpeed, "cg_killcamOffsetBlendSpeed");
          __asm
          {
            vxorps  xmm3, xmm3, xmm3
            vcvtsi2ss xmm3, xmm3, dword ptr [rbx+65E4h]
            vmulss  xmm4, xmm3, cs:__real@3a83126f
            vmulss  xmm0, xmm0, xmm4; val
            vmovss  xmm2, cs:__real@3f800000; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovss  xmm4, dword ptr [rbx+0B50FCh]
            vmovss  xmm1, dword ptr [rsp+1A0h+end]
            vsubss  xmm2, xmm1, xmm4
            vmulss  xmm3, xmm2, xmm0
            vaddss  xmm4, xmm3, xmm4
            vmovss  dword ptr [rbx+0B50FCh], xmm4
            vmovss  xmm5, dword ptr [rbx+0B5100h]
            vmovss  xmm1, dword ptr [rsp+1A0h+end+4]
            vsubss  xmm2, xmm1, xmm5
            vmulss  xmm3, xmm2, xmm0
            vaddss  xmm4, xmm3, xmm5
            vmovss  dword ptr [rbx+0B5100h], xmm4
            vmovss  xmm3, dword ptr [rbx+0B5104h]
            vmovss  xmm0, dword ptr [rbp+0A0h+end+8]
            vsubss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, xmm3
            vmovss  dword ptr [rbx+0B5104h], xmm3
          }
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
    else
    {
LABEL_48:
      CG_GetPoseOrigin(&Entity->pose, &_RBX->killCamEntityOrg);
    }
    _RBX->killCamEntityAngles.v[0] = Entity->pose.angles.v[0];
    _RBX->killCamEntityAngles.v[1] = Entity->pose.angles.v[1];
    _RBX->killCamEntityAngles.v[2] = Entity->pose.angles.v[2];
  }
  _R11 = &v94;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_KillCam_CacheKillCamLookAtEntityOrigin
==============
*/
void CG_KillCam_CacheKillCamLookAtEntityOrigin(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int killCamLookAtEntity; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  unsigned __int8 eType; 
  char *p_z; 
  __int16 v12; 
  CgStatic *v13; 
  __int64 v14; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int64 v25; 
  __int64 v26; 
  vec3_t up; 

  v2 = localClientNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 121, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  killCamLookAtEntity = _RBX->killCamLookAtEntity;
  if ( killCamLookAtEntity != 2047 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v2, killCamLookAtEntity);
    p_pose = &Entity->pose;
    if ( (Entity->flags & 1) != 0 )
    {
      eType = Entity->pose.eType;
      __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
      if ( eType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( centTarget->pose.eType ) == ( ET_PLAYER )", "%s == %s\n\t%i, %i", "centTarget->pose.eType", "ET_PLAYER", eType, 1) )
        __debugbreak();
      _R14 = &_RBX->killCamLookAt;
      CG_GetPoseOrigin(p_pose, &_RBX->killCamLookAt);
      _RBP = DVARFLT_cg_killcamEntityLookAtOffset;
      if ( !DVARFLT_cg_killcamEntityLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamEntityLookAtOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBP);
      __asm { vmovss  xmm6, dword ptr [rbp+28h] }
      p_z = (char *)&p_pose[1].prevOrigin.prevOrigin.xyz.z;
      if ( !p_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v12 = *((_WORD *)p_z + 4);
      if ( ((v12 - 1) & 0xFFED) != 0 || v12 == 3 )
      {
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbx+0B5130h]
          vmovss  dword ptr [rbx+0B5130h], xmm0
        }
      }
      else
      {
        if ( !(_BYTE)CgStatic::ms_allocatedType )
        {
          LODWORD(v26) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v26) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= LODWORD(CgStatic::ms_allocatedCount) )
        {
          *(float *)&v26 = CgStatic::ms_allocatedCount;
          LODWORD(v25) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        if ( !CgStatic::ms_cgameStaticsArray[v2] )
        {
          LODWORD(v26) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v26) )
            __debugbreak();
        }
        v13 = CgStatic::ms_cgameStaticsArray[v2];
        v14 = _RBX->killCamLookAtEntity;
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v13->m_localClientNum);
        if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( (unsigned int)v14 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v26) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v25) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v25, v26) )
              __debugbreak();
          }
          CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v14);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v14);
        }
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        AngleVectors(&CharacterInfo->playerAnglesWorld, NULL, NULL, &up);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+up]
          vaddss  xmm2, xmm1, dword ptr [r14]
          vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+up+4]
          vmovss  dword ptr [r14], xmm2
          vaddss  xmm2, xmm1, dword ptr [r14+4]
          vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+up+8]
          vmovss  dword ptr [r14+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [r14+8]
          vmovss  dword ptr [r14+8], xmm2
        }
      }
      __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    }
  }
}

/*
==============
CG_KillCam_ComputeJavelinLookAtAxis
==============
*/
void CG_KillCam_ComputeJavelinLookAtAxis(const vec3_t *origin, const vec3_t *lookAt, const vec3_t *right, tmat33_t<vec3_t> *axis)
{
  char v62; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [r8+4]
    vmovss  xmm4, dword ptr [r8]
    vmovss  xmm5, dword ptr [r8+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = axis;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RBX = right;
  _RSI = lookAt;
  __asm
  {
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  qword ptr [rax-38h], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  qword ptr [rax-40h], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  qword ptr [rax-48h], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  qword ptr [rax-50h], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 414, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", v71, v73, v75, v77) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm6, xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rdi], xmm6
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm5, xmm0, dword ptr [rbp+4]
    vmovss  dword ptr [rdi+4], xmm5
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+8]
    vmulss  xmm0, xmm4, xmm4
  }
  _RDX = &_RDI->m[1];
  __asm
  {
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rdx+4], xmm2
    vmovss  xmm0, dword ptr [rbx+8]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdx+8], xmm1
  }
  Vec3Cross(_RDI->m, &_RDI->m[1], &_RDI->m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  xmm5, dword ptr [rdi+18h]
    vmovss  xmm3, dword ptr [rdi+20h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v62 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+1Ch]
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+78h+var_38], xmm1
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+78h+var_40], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+78h+var_48], xmm4
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+78h+var_50], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 420, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v72, v74, v76, v78) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
CG_KillCam_GetKillCamEntityOrgAngles
==============
*/
void CG_KillCam_GetKillCamEntityOrgAngles(const LocalClientNum_t localClientNum, vec3_t *origin, vec3_t *angles)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  origin->v[0] = LocalClientGlobals->killCamEntityOrg.v[0];
  origin->v[1] = LocalClientGlobals->killCamEntityOrg.v[1];
  origin->v[2] = LocalClientGlobals->killCamEntityOrg.v[2];
  angles->v[0] = LocalClientGlobals->killCamEntityAngles.v[0];
  angles->v[1] = LocalClientGlobals->killCamEntityAngles.v[1];
  angles->v[2] = LocalClientGlobals->killCamEntityAngles.v[2];
}

/*
==============
CG_KillCam_GetPlayerKillCamEntityLookAt
==============
*/
void CG_KillCam_GetPlayerKillCamEntityLookAt(LocalClientNum_t localClientNum, vec3_t *outLookAtPos)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 166, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  outLookAtPos->v[0] = LocalClientGlobals->killCamLookAt.v[0];
  outLookAtPos->v[1] = LocalClientGlobals->killCamLookAt.v[1];
  outLookAtPos->v[2] = LocalClientGlobals->killCamLookAt.v[2];
}

/*
==============
CG_KillCam_KillcamCameraTrace
==============
*/
bool CG_KillCam_KillcamCameraTrace(LocalClientNum_t localClientNum, const vec3_t *lookAt, const vec3_t *originalBombOrigin, const vec3_t *bombAngles, const vec3_t *desiredCamPos, int passEntIndex, KillCamEntityRestState killCamEntityRestState, vec3_t *campos)
{
  const dvar_t *v17; 
  vec3_t *v19; 
  __int64 v21; 
  bool enabled; 
  Physics_WorldId v24; 
  int v26; 
  char v28; 
  char v29; 
  int v32; 
  __int64 v37; 
  __int64 hitId; 
  CgEntitySystem *v41; 
  __int64 v42; 
  __int64 v43; 
  bool v44; 
  const vec4_t *v71; 
  bool result; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  bool v87; 
  trace_t results; 
  vec3_t start; 
  vec3_t *lookAta; 
  vec3_t v92; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-0A8h], xmm12 }
  v17 = DCONST_DVARBOOL_cg_killcamdebug;
  _RSI = originalBombOrigin;
  v19 = campos;
  _R12 = lookAt;
  lookAta = (vec3_t *)lookAt;
  v21 = localClientNum;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  enabled = v17->current.enabled;
  __asm { vmovss  xmm0, dword ptr [rsi] }
  v24 = 3 * v21 + 2;
  __asm { vmovss  xmm1, dword ptr [rsi+4] }
  v26 = passEntIndex;
  __asm
  {
    vmovss  dword ptr [rbp+0E0h+start], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
  *v19 = *desiredCamPos;
  __asm
  {
    vmovss  dword ptr [rbp+0E0h+start+4], xmm1
    vmovss  dword ptr [rbp+0E0h+start+8], xmm0
  }
  PhysicsQuery_LegacyTrace(v24, &results, &start, v19, &KILLCAM_BOUNDS, v26, 0, 8390785, 0, NULL, All);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+start+8]
    vcomiss xmm0, dword ptr [r12+8]
  }
  v87 = !(v28 | v29);
  if ( results.startsolid && !(v28 | v29) && killCamEntityRestState != KC_ENT_STUCK_WALL )
  {
    CG_KillCam_TraceOutFromSolidAndBack((LocalClientNum_t)v21, &results, _R12, &start, &passEntIndex, v19);
    v26 = passEntIndex;
  }
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vmovaps [rsp+1E0h+var_48+8], xmm6
  }
  v32 = 0;
  __asm
  {
    vmovaps [rsp+1E0h+var_58+8], xmm7
    vmovaps [rsp+1E0h+var_68+8], xmm8
    vmovaps [rsp+1E0h+var_78+8], xmm9
    vmovaps [rsp+1E0h+var_88+8], xmm10
    vmovaps [rsp+1E0h+var_98+8], xmm11
  }
  if ( results.startsolid )
  {
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm10, cs:__real@42240000
      vmovss  xmm11, cs:__real@41a80000
      vmovaps [rsp+1E0h+var_B8+8], xmm13
      vmovss  xmm13, cs:__real@80000000
    }
    v37 = v21;
    while ( 1 )
    {
      if ( enabled )
      {
        __asm
        {
          vmovss  xmm5, [rbp+0E0h+results.fraction]
          vmovsd  xmm0, qword ptr [rbp+0E0h+start]
        }
        v92.v[2] = start.v[2];
        __asm
        {
          vcomiss xmm5, xmm12
          vmovsd  qword ptr [rbp+0E0h+var_D0], xmm0
        }
        CG_DebugLine(&start, v19, &colorMdRed, 0, 3000);
      }
      if ( results.hitType == TRACE_HITTYPE_ENTITY )
      {
        hitId = (int)results.hitId;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(skipChildren) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", skipChildren) )
            __debugbreak();
        }
        if ( (unsigned int)v21 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(skipChildren) = CgEntitySystem::ms_allocatedCount;
          LODWORD(skipEntity) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v37] )
        {
          LODWORD(skipChildren) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", skipChildren) )
            __debugbreak();
        }
        v41 = CgEntitySystem::ms_entitySystemArray[v37];
        if ( (unsigned int)hitId >= 0x800 )
        {
          LODWORD(skipChildren) = 2048;
          LODWORD(skipEntity) = hitId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
        v42 = hitId;
        v24 = 3 * v21 + 2;
        v43 = (__int64)&v41->m_entities[v42];
        v37 = v21;
        v44 = v43 == 0;
        if ( v43 )
        {
          v44 = *(_WORD *)(v43 + 408) == 1;
          if ( *(_WORD *)(v43 + 408) == 1 )
            v26 = results.hitId;
          passEntIndex = v26;
        }
      }
      else
      {
        v44 = 1;
        v43 = 0i64;
      }
      __asm
      {
        vmovss  xmm0, [rbp+0E0h+results.fraction]
        vucomiss xmm0, xmm12
      }
      if ( v44 || v32 < 2 )
      {
        __asm
        {
          vaddss  xmm1, xmm11, dword ptr [rbp+0E0h+start+8]
          vmovss  dword ptr [rbp+0E0h+start+8], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0E0h+start+8]
          vsubss  xmm6, xmm0, dword ptr [rbx+8]
          vmovss  xmm7, dword ptr [rbp+0E0h+start]
          vsubss  xmm4, xmm7, dword ptr [rbx]
          vmovss  xmm8, dword ptr [rbp+0E0h+start+4]
          vsubss  xmm5, xmm8, dword ptr [rbx+4]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm2, xmm5, xmm5
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm0, xmm1, xmm12, xmm0
          vdivss  xmm1, xmm12, xmm0
          vmulss  xmm2, xmm4, xmm1
          vmulss  xmm4, xmm6, xmm1
          vmulss  xmm3, xmm5, xmm1
        }
        if ( v43 && *(_WORD *)(v43 + 408) == 1 )
        {
          __asm
          {
            vxorps  xmm2, xmm2, xmm9
            vxorps  xmm3, xmm3, xmm9
            vxorps  xmm4, xmm4, xmm9
          }
        }
        __asm
        {
          vmulss  xmm0, xmm2, xmm10
          vaddss  xmm1, xmm7, xmm0
          vmulss  xmm2, xmm3, xmm10
          vaddss  xmm0, xmm8, xmm2
          vmulss  xmm3, xmm4, xmm10
          vmovss  dword ptr [rbp+0E0h+start+4], xmm0
          vaddss  xmm0, xmm3, dword ptr [rbp+0E0h+start+8]
          vmovss  dword ptr [rbp+0E0h+start+8], xmm0
          vmovss  dword ptr [rbp+0E0h+start], xmm1
        }
      }
      PhysicsQuery_LegacyTrace(v24, &results, &start, v19, &KILLCAM_BOUNDS, v26, 0, 8390785, 0, NULL, All);
      if ( enabled )
      {
        v71 = &colorLtCyan;
        switch ( v32 % 4 )
        {
          case 1:
            v71 = &colorLtOrange;
            break;
          case 2:
            v71 = &colorDkCyan;
            break;
          case 3:
            v71 = &colorDkGrey;
            break;
        }
        CG_DebugLine(&v92, &start, v71, 0, 3000);
      }
      if ( ++v32 >= 4 )
        break;
      if ( !results.startsolid )
        goto LABEL_52;
    }
    if ( results.startsolid && !v87 && killCamEntityRestState != KC_ENT_STUCK_WALL )
      CG_KillCam_TraceOutFromSolidAndBack((LocalClientNum_t)v21, &results, lookAta, &start, &passEntIndex, v19);
LABEL_52:
    _RSI = originalBombOrigin;
    __asm { vmovaps xmm13, [rsp+1E0h+var_B8+8] }
  }
  if ( enabled )
  {
    __asm
    {
      vmovss  xmm5, [rbp+0E0h+results.fraction]
      vcomiss xmm5, xmm12
    }
    CG_DebugLine(&start, v19, &colorWhite, 0, 3000);
  }
  if ( results.startsolid )
  {
    v19->v[0] = _RSI->v[0];
    v19->v[1] = _RSI->v[1];
    v19->v[2] = _RSI->v[2];
    if ( enabled )
    {
      __asm { vmovaps xmm1, xmm12; radius }
      CG_DebugSphere(v19, *(float *)&_XMM1, &colorRed, 0, 3000);
    }
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, [rbp+0E0h+results.fraction]
      vcomiss xmm6, xmm12
    }
    if ( enabled )
    {
      __asm { vmovaps xmm1, xmm12; radius }
      CG_DebugSphere(v19, *(float *)&_XMM1, &colorWhiteFaded, 0, 3000);
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm11, [rsp+1E0h+var_98+8]
    vmovaps xmm10, [rsp+1E0h+var_88+8]
    vmovaps xmm9, [rsp+1E0h+var_78+8]
    vmovaps xmm8, [rsp+1E0h+var_68+8]
    vmovaps xmm7, [rsp+1E0h+var_58+8]
    vmovaps xmm6, [rsp+1E0h+var_48+8]
    vmovaps xmm12, [rsp+1E0h+var_A8+8]
  }
  return result;
}

/*
==============
CG_KillCam_KillcamCameraTrace_Legacy
==============
*/
void CG_KillCam_KillcamCameraTrace_Legacy(LocalClientNum_t localClientNum, const vec3_t *originalBombOrigin, const vec3_t *bombAngles, const vec3_t *desiredCamPos, int passEntIndex, KillCamEntityRestState killCamEntityRestState, vec3_t *campos)
{
  __int32 v11; 
  int v16; 
  const dvar_t *v18; 
  char v22; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  vec3_t start; 
  vec3_t v41; 
  trace_t results; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm0, dword ptr [rdx]
  }
  *(float *)&_RAX = desiredCamPos->v[0];
  v11 = 3 * localClientNum + 2;
  __asm { vmovss  xmm1, dword ptr [rdx+4] }
  _RBX = campos;
  __asm
  {
    vmovss  dword ptr [rsp+1B0h+start], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
  }
  LODWORD(campos->v[0]) = (_DWORD)_RAX;
  *(_QWORD *)&campos->y = *(_QWORD *)&desiredCamPos->y;
  __asm
  {
    vmovss  dword ptr [rsp+1B0h+start+4], xmm1
    vmovss  dword ptr [rsp+1B0h+start+8], xmm0
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)v11, &results, &start, campos, &KILLCAM_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v16 = 0;
  if ( results.startsolid )
  {
    __asm { vmovss  xmm6, cs:__real@41a80000 }
    do
    {
      v18 = DCONST_DVARBOOL_cg_killcamdebug;
      if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.enabled )
      {
        __asm
        {
          vmovss  xmm4, [rbp+0B0h+results.fraction]
          vmovsd  xmm0, qword ptr [rsp+1B0h+start]
        }
        v41.v[2] = start.v[2];
        __asm
        {
          vcomiss xmm4, xmm10
          vmovsd  qword ptr [rbp+0B0h+var_120], xmm0
        }
        CG_DebugLine(&start, campos, &colorDkGrey, 0, 3000);
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v11, &results, &start, campos, &THIN_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
      __asm
      {
        vmovss  xmm0, [rbp+0B0h+results.fraction]
        vucomiss xmm0, xmm10
      }
      if ( v22 )
      {
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rsp+1B0h+start+8]
          vmovss  dword ptr [rsp+1B0h+start+8], xmm1
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm3, xmm6, dword ptr [rbp+0B0h+results.normal+4]
          vmulss  xmm2, xmm6, dword ptr [rbp+0B0h+results.normal]
          vaddss  xmm2, xmm2, dword ptr [rsp+1B0h+start]
          vmovss  dword ptr [rsp+1B0h+start], xmm2
          vaddss  xmm2, xmm3, dword ptr [rsp+1B0h+start+4]
          vmulss  xmm3, xmm6, dword ptr [rbp+0B0h+results.normal+8]
          vmovss  dword ptr [rsp+1B0h+start+4], xmm2
          vaddss  xmm2, xmm3, dword ptr [rsp+1B0h+start+8]
          vmovss  dword ptr [rsp+1B0h+start+8], xmm2
        }
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v11, &results, &start, campos, &KILLCAM_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
      v30 = DCONST_DVARBOOL_cg_killcamdebug;
      if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( v30->current.enabled )
        CG_DebugLine(&v41, &start, &colorLtCyan, 0, 3000);
      ++v16;
    }
    while ( v16 < 3 && results.startsolid );
  }
  v31 = DCONST_DVARBOOL_cg_killcamdebug;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled )
  {
    __asm
    {
      vmovss  xmm4, [rbp+0B0h+results.fraction]
      vcomiss xmm4, xmm10
    }
    CG_DebugLine(&start, campos, &colorWhite, 0, 3000);
  }
  if ( results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1B0h+start]
      vmovss  xmm1, dword ptr [rsp+1B0h+start+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+start+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, [rbp+0B0h+results.fraction]
      vcomiss xmm4, xmm10
    }
  }
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_KillCam_LookAtBothPoints
==============
*/
float CG_KillCam_LookAtBothPoints(const vec3_t *point1, const vec3_t *point2, const vec3_t *campos, tmat33_t<vec3_t> *lookaxis)
{
  bool v15; 
  char v118; 
  __int64 v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
  }
  v15 = (unsigned __int64)&v138 == _security_cookie;
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm15, cs:__real@80000000
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm4, xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm5, xmm1, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm6, xmm0, dword ptr [r8+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm14, xmm2, xmm2
    vcmpless xmm0, xmm14, xmm15
    vblendvps xmm0, xmm14, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vmulss  xmm11, xmm4, xmm1
    vsubss  xmm4, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm12, xmm5, xmm1
    vmulss  xmm13, xmm6, xmm1
    vsubss  xmm6, xmm0, dword ptr [r8+8]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm5, xmm1, dword ptr [r8+4]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm15
    vblendvps xmm0, xmm1, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm0, xmm5, xmm1
    vaddss  xmm5, xmm0, xmm12
    vmulss  xmm9, xmm4, xmm1
    vmovss  dword ptr [rsp+130h+var_E0+4], xmm0
    vmulss  xmm1, xmm6, xmm1
    vaddss  xmm6, xmm1, xmm13
    vmovss  dword ptr [rsp+130h+var_E0], xmm1
    vaddss  xmm4, xmm9, xmm11
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, cs:__real@3e800000
    vmovss  xmm1, cs:__real@3f000000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmulss  xmm7, xmm0, xmm2
    vmulss  xmm0, xmm5, xmm1
    vmulss  xmm5, xmm0, xmm2
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm4, xmm0, xmm1
    vmulss  xmm1, xmm5, xmm12
    vmulss  xmm0, xmm7, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm13
    vaddss  xmm8, xmm2, xmm1
    vcomiss xmm8, cs:__real@3f7c1c5d
    vmovss  dword ptr [rsp+130h+point], xmm11
    vmovss  dword ptr [rsp+130h+point+4], xmm12
    vmovss  dword ptr [rsp+130h+point+8], xmm13
    vmovss  dword ptr [rsp+130h+dst], xmm7
    vmovss  dword ptr [rsp+130h+dst+4], xmm5
    vmovss  dword ptr [rsp+130h+dst+8], xmm4
  }
  _RDI = lookaxis;
  __asm
  {
    vcomiss xmm4, cs:__real@bf733333
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm1, xmm5, xmm2
    vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
  }
  _RDX = &lookaxis->m[1];
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm3, xmm7, xmm2
    vmovss  dword ptr [rdi], xmm3
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm4, xmm0
    vmovss  dword ptr [rdx], xmm4
    vmovss  dword ptr [rdx+4], xmm3
  }
  lookaxis->m[1].v[2] = 0.0;
  __asm { vxorps  xmm5, xmm5, xmm5 }
  if ( v15 )
  {
    __asm { vucomiss xmm0, dword ptr [rdi+10h] }
    if ( v15 )
    {
      _RDX->v[0] = 1.0;
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+10h]
        vmovss  xmm5, dword ptr [rdi+14h]
        vmovaps xmm4, xmm10
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [rdx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [rdx+8], xmm0
  }
  Vec3Cross(lookaxis->m, _RDX, &lookaxis->m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  xmm5, dword ptr [rdi+18h]
    vmovss  xmm3, dword ptr [rdi+20h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm10
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v118 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+1Ch]
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+130h+var_F0], xmm1
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+130h+var_F8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+130h+var_100], xmm4
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+130h+var_108], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 239, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( lookaxis[2] ) )", "(%g, %g, %g) len %g", v139, v140, v141, v142) )
      __debugbreak();
  }
  __asm { vmovaps xmm0, xmm14 }
  _R11 = &vars0;
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
  return *(float *)&_XMM0;
}

/*
==============
CG_KillCam_PostUpdateKillCamEntityCache
==============
*/
void CG_KillCam_PostUpdateKillCamEntityCache(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  centity_t *Entity; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  if ( LocalClientGlobals->inKillCam && LocalClientGlobals->killCamLastEntityNum != 2047 )
  {
    if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1483, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
      __debugbreak();
    Entity = CG_GetEntity(localClientNum, v3->killCamLastEntityNum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1485, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v3->killCamPrevEntityAngles.v[0] = Entity->pose.angles.v[0];
    v3->killCamPrevEntityAngles.v[1] = Entity->pose.angles.v[1];
    v3->killCamPrevEntityAngles.v[2] = Entity->pose.angles.v[2];
  }
}

/*
==============
CG_KillCam_TraceOutFromSolidAndBack
==============
*/
void CG_KillCam_TraceOutFromSolidAndBack(LocalClientNum_t localClientNum, trace_t *trace, const vec3_t *lookAt, const vec3_t *bombOrigin, int *passEntIndex, vec3_t *campos)
{
  const dvar_t *v15; 
  bool v21; 
  char v44; 
  centity_t *Entity; 
  bool enabled; 
  vec3_t center; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v114; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  v15 = DCONST_DVARBOOL_cg_killcamdebug;
  _R14 = bombOrigin;
  _R13 = lookAt;
  _RSI = campos;
  _RBX = trace;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm8, dword ptr [r14]
    vsubss  xmm6, xmm8, dword ptr [rsi]
    vmovss  xmm9, dword ptr [r14+4]
    vsubss  xmm5, xmm9, dword ptr [rsi+4]
    vmovss  xmm10, dword ptr [r14+8]
    vsubss  xmm4, xmm10, dword ptr [rsi+8]
    vmovss  xmm11, cs:__real@80000000
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmaxss  xmm7, xmm3, cs:__real@42700000
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm1, xmm13, xmm0
    vmulss  xmm6, xmm6, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
    vmulss  xmm2, xmm5, xmm1
  }
  enabled = v15->current.enabled;
  __asm { vmulss  xmm5, xmm4, xmm1 }
  if ( !v21 )
    goto LABEL_8;
  __asm { vucomiss xmm2, xmm0 }
  if ( !v21 )
    goto LABEL_8;
  __asm { vucomiss xmm5, xmm0 }
  if ( v21 )
    v44 = 0;
  else
LABEL_8:
    v44 = 1;
  if ( !v44 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+0]
      vmovss  xmm1, dword ptr [r13+4]
      vsubss  xmm6, xmm0, xmm8
      vmovss  xmm0, dword ptr [r13+8]
      vsubss  xmm5, xmm1, xmm9
      vsubss  xmm4, xmm0, xmm10
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm11
      vblendvps xmm0, xmm1, xmm13, xmm0
      vdivss  xmm1, xmm13, xmm0
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm5, xmm4, xmm1
      vmulss  xmm6, xmm6, xmm1
    }
  }
  v21 = _RBX->hitType == TRACE_HITTYPE_ENTITY;
  __asm
  {
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm2, xmm7
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rsp+170h+end], xmm1
    vmulss  xmm1, xmm5, xmm7
    vaddss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rbp+70h+end+8], xmm2
    vmovss  dword ptr [rsp+170h+end+4], xmm0
  }
  if ( v21 )
  {
    Entity = CG_GetEntity(localClientNum, _RBX->hitId);
    if ( Entity )
    {
      if ( Entity->nextState.eType == ET_PLAYER )
        *passEntIndex = _RBX->hitId;
    }
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), _RBX, _R14, &end, &KILLCAM_BOUNDS, *passEntIndex, 0, 8390785, 0, NULL, All);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm5, dword ptr [r14+4]
    vmovss  xmm7, dword ptr [r14+8]
    vmovss  xmm8, dword ptr [rsp+170h+end]
    vmovss  xmm9, dword ptr [rsp+170h+end+4]
    vmovss  xmm10, dword ptr [rbp+70h+end+8]
    vmovss  xmm6, cs:__real@3f000000
    vsubss  xmm0, xmm8, xmm4
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm11, xmm1, xmm4
    vsubss  xmm0, xmm9, xmm5
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm12, xmm1, xmm5
    vsubss  xmm0, xmm10, xmm7
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+170h+center+8], xmm2
    vmovss  dword ptr [rsp+170h+center], xmm11
    vmovss  dword ptr [rsp+170h+center+4], xmm12
  }
  if ( enabled )
  {
    __asm
    {
      vsubss  xmm2, xmm7, cs:__real@3dcccccd
      vsubss  xmm1, xmm10, cs:__real@3dcccccd
      vcomiss xmm3, xmm13
      vmovss  dword ptr [rbp+70h+start], xmm4
      vmovss  dword ptr [rbp+70h+start+4], xmm5
      vmovss  dword ptr [rbp+70h+var_C8], xmm8
      vmovss  dword ptr [rbp+70h+var_C8+4], xmm9
      vmovss  dword ptr [rbp+70h+start+8], xmm2
      vmovss  dword ptr [rbp+70h+var_C8+8], xmm1
    }
    CG_DebugLine(&start, &v114, &colorBlue, 0, 3000);
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&center, *(float *)&_XMM1, &colorBlue, 0, 3000);
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), _RBX, &center, _R14, &KILLCAM_BOUNDS, *passEntIndex, 0, 8390785, 0, NULL, All);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm0, xmm0, dword ptr [rsp+170h+center]
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm1, dword ptr [rsp+170h+center]
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [r14+4]
    vsubss  xmm0, xmm0, dword ptr [rsp+170h+center+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rsp+170h+center+4]
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm0, xmm0, dword ptr [rsp+170h+center+8]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rsp+170h+center+8]
    vmovss  dword ptr [rsi+8], xmm3
  }
  if ( enabled )
  {
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(campos, *(float *)&_XMM1, &colorOrange, 0, 3000);
  }
  _R11 = &v115;
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
  }
}

/*
==============
CG_KillCam_UpdateExplosiveKillCam
==============
*/

void __fastcall CG_KillCam_UpdateExplosiveKillCam(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType, double upDist, double backDist, float groundUp, float groundBack)
{
  const dvar_t *v21; 
  const dvar_t *v27; 
  bool enabled; 
  int killCamStoppedTime; 
  char v33; 
  char v58; 
  bool v59; 
  const vec4_t *v64; 
  bool v76; 
  bool v103; 
  bool v129; 
  char v158; 
  KillCamEntityRestState v159; 
  int killCamEntity; 
  bool v196; 
  centity_t *Entity; 
  KillCamEntityRestState v219; 
  char v225; 
  char v226; 
  float fmt; 
  float sideDist; 
  double sideDista; 
  double sideDistb; 
  double sideDistc; 
  float killCamEntityRestState; 
  double killCamEntityRestStatea; 
  double killCamEntityRestStateb; 
  double killCamEntityRestStatec; 
  float campos; 
  vec3_t *camposa; 
  vec3_t *camposb; 
  vec3_t *camposc; 
  double locational; 
  double locationala; 
  double locationalb; 
  int v298; 
  int v299; 
  int v300; 
  int v301; 
  int v302; 
  int v303; 
  int v304; 
  int v305; 
  int v306; 
  int v307; 
  int v308; 
  int v309; 
  int v310; 
  int v311; 
  int v312; 
  int v313; 
  int v314; 
  int v315; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v321; 
  vec3_t center; 
  vec3_t origin; 
  vec3_t outLookAtPos; 
  vec3_t desiredCamPos; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v328; 
  void *retaddr; 

  _RAX = &retaddr;
  v321 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovaps xmm14, xmm3
    vmovss  [rsp+250h+var_1D8], xmm3
    vmovaps xmm6, xmm2
    vmovss  [rsp+250h+var_1D4], xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_KillCam_UpdateExplosiveKillCam");
  v21 = DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy;
  if ( !DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_explosiveKillCamUseLegacy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, [rbp+150h+groundBack]
      vmovss  dword ptr [rsp+250h+campos], xmm0
      vmovss  xmm1, [rbp+150h+groundUp]
      vmovss  [rsp+250h+killCamEntityRestState], xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+250h+sideDist], xmm0
      vmovss  dword ptr [rsp+250h+fmt], xmm0
      vmovaps xmm3, xmm14; backDist
      vmovaps xmm2, xmm6; upDist
    }
    CG_KillCam_UpdateExplosiveKillCam_Legacy(localClientNum, killCamEntityType, *(float *)&_XMM2, *(float *)&_XMM3, fmt, sideDist, killCamEntityRestState, campos);
    goto LABEL_111;
  }
  v27 = DCONST_DVARBOOL_cg_killcamdebug;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  enabled = v27->current.enabled;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1106, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1107, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  CG_KillCam_GetKillCamEntityOrgAngles(localClientNum, &origin, &angles);
  killCamStoppedTime = _RBX->killCamStoppedTime;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( !killCamStoppedTime )
    goto LABEL_25;
  if ( killCamStoppedTime > _RBX->time )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B5144h]
    vcomiss xmm0, xmm10
  }
  if ( (unsigned int)killCamStoppedTime > _RBX->time )
  {
    v33 = 1;
    __asm
    {
      vmovaps xmm2, xmm0; max
      vmovss  xmm0, cs:__real@bf000000
      vdivss  xmm1, xmm0, xmm2
      vmulss  xmm6, xmm1, dword ptr [rbx+0B5154h]
      vmulss  xmm7, xmm1, dword ptr [rbx+0B5158h]
      vmulss  xmm8, xmm1, dword ptr [rbx+0B515Ch]
    }
    _EAX = _RBX->time - _RBX->killCamStoppedTime;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, xmm0
      vmulss  xmm1, xmm6, xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+0B5154h]
      vmulss  xmm3, xmm2, xmm0
      vaddss  xmm4, xmm3, dword ptr [rbx+0B5148h]
      vmovss  dword ptr [rbp+150h+center], xmm4
      vmulss  xmm1, xmm7, xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+0B5158h]
      vmulss  xmm3, xmm2, xmm0
      vaddss  xmm5, xmm3, dword ptr [rbx+0B514Ch]
      vmovss  dword ptr [rbp+150h+center+4], xmm5
      vmulss  xmm1, xmm8, xmm0
      vaddss  xmm0, xmm1, dword ptr [rbx+0B515Ch]
      vmulss  xmm2, xmm0, xmm9
      vaddss  xmm3, xmm2, dword ptr [rbx+0B5150h]
      vmovss  dword ptr [rbp+150h+center+8], xmm3
      vmovss  [rsp+250h+var_1EC], xmm4
    }
    if ( (v313 & 0x7F800000) == 2139095040 )
      goto LABEL_114;
    __asm { vmovss  [rsp+250h+var_1EC], xmm5 }
    if ( (v314 & 0x7F800000) == 2139095040 )
      goto LABEL_114;
    __asm { vmovss  [rsp+250h+var_1EC], xmm3 }
    if ( (v315 & 0x7F800000) == 2139095040 )
    {
LABEL_114:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1130, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bombOrigin )[0] ) && !IS_NAN( ( bombOrigin )[1] ) && !IS_NAN( ( bombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bombOrigin )[0] ) && !IS_NAN( ( bombOrigin )[1] ) && !IS_NAN( ( bombOrigin )[2] )") )
        __debugbreak();
    }
    __asm { vmovss  xmm13, cs:__real@3f800000 }
    v58 = 0;
    v59 = !enabled;
    if ( !enabled )
      goto LABEL_28;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0B5144h]
      vcmpless xmm1, xmm0, xmm9
      vmovss  xmm0, cs:__real@40000000
      vblendvps xmm0, xmm0, xmm13, xmm1
    }
    v64 = &colorYellow;
    __asm
    {
      vmovaps xmm1, xmm0
      vmovss  [rsp+250h+var_1F0], xmm0
    }
  }
  else
  {
LABEL_25:
    v33 = 0;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+150h+origin]
      vmovsd  qword ptr [rbp+150h+center], xmm0
    }
    center.v[2] = origin.v[2];
    __asm { vmovss  xmm13, cs:__real@3f800000 }
    v58 = 0;
    v59 = !enabled;
    if ( !enabled )
      goto LABEL_28;
    v64 = &colorMagenta;
    __asm { vmovaps xmm1, xmm13; radius }
  }
  CG_DebugSphere(&center, *(float *)&_XMM1, v64, 0, 3000);
LABEL_28:
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+150h+outLookAtPos]
    vsubss  xmm8, xmm0, dword ptr [rbp+150h+center]
    vmovss  xmm0, dword ptr [rbp+150h+outLookAtPos+4]
    vsubss  xmm7, xmm0, dword ptr [rbp+150h+center+4]
    vmovss  xmm0, dword ptr [rbp+150h+outLookAtPos+8]
    vsubss  xmm2, xmm0, dword ptr [rbp+150h+center+8]
    vmovss  xmm1, cs:__real@bf800000
    vcmpltss xmm0, xmm1, xmm2
    vblendvps xmm6, xmm2, xmm1, xmm0
    vmovss  [rsp+250h+var_1F0], xmm6
    vucomiss xmm8, xmm10
  }
  if ( v59 )
  {
    __asm { vucomiss xmm7, xmm10 }
    if ( v59 )
    {
      __asm { vucomiss xmm6, xmm10 }
      if ( v59 )
      {
        v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1158, ASSERT_TYPE_ASSERT, "(Vec3NotZero( delta ))", (const char *)&queryFormat, "Vec3NotZero( delta )");
        v58 = 0;
        v59 = !v76;
        if ( v76 )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm13, xmm0
    vmovss  [rsp+250h+var_1F0], xmm1
    vdivss  xmm0, xmm13, xmm1
    vmulss  xmm9, xmm0, xmm8
    vmulss  xmm8, xmm7, xmm0
    vmulss  xmm15, xmm0, xmm6
    vmovss  [rsp+250h+var_1EC], xmm15
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm5, xmm9, xmm9
    vmulss  xmm1, xmm15, xmm15
    vaddss  xmm0, xmm5, xmm0
    vaddss  xmm3, xmm1, xmm0
    vsubss  xmm2, xmm3, xmm13
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm2, xmm2, xmm4
    vmovss  xmm11, cs:__real@3b03126f
    vcomiss xmm2, xmm11
  }
  if ( !v58 )
  {
    __asm
    {
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm15, xmm15
      vcvtss2sd xmm3, xmm8, xmm8
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  qword ptr [rsp+250h+locational], xmm1
      vmovsd  [rsp+250h+campos], xmm2
      vmovsd  qword ptr [rsp+250h+killCamEntityRestState], xmm3
      vmovsd  qword ptr [rsp+250h+sideDist], xmm0
    }
    v103 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1161, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( delta ) )", "(%g, %g, %g) len %g", sideDista, killCamEntityRestStatea, *(double *)&camposa, locational);
    v58 = 0;
    v59 = !v103;
    if ( v103 )
      __debugbreak();
    __asm
    {
      vmulss  xmm5, xmm9, xmm9
      vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
  }
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm3, xmm8, xmm12
    vmovss  xmm6, cs:__real@80000000
    vucomiss xmm8, xmm6
  }
  if ( v59 )
  {
    __asm
    {
      vcmpeqss xmm0, xmm9, xmm10
      vblendvps xmm0, xmm3, xmm13, xmm0
      vmovaps xmm3, xmm0
      vmovss  [rsp+250h+var_1F0], xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm0, xmm5
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm1, xmm2, xmm13, xmm0
    vmovss  [rsp+250h+var_1F0], xmm1
    vdivss  xmm0, xmm13, xmm1
    vmulss  xmm6, xmm3, xmm0
    vmulss  xmm7, xmm0, xmm9
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm1, xmm0
    vsubss  xmm2, xmm3, xmm13
    vandps  xmm2, xmm2, xmm4
    vcomiss xmm2, xmm11
  }
  if ( !v58 )
  {
    __asm
    {
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm7, xmm7
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  qword ptr [rsp+250h+locational], xmm1
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+250h+campos], xmm0
      vmovsd  qword ptr [rsp+250h+killCamEntityRestState], xmm2
      vmovsd  qword ptr [rsp+250h+sideDist], xmm3
    }
    v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( left ) )", "(%g, %g, %g) len %g", sideDistb, killCamEntityRestStateb, *(double *)&camposb, locationala);
    v58 = 0;
    if ( v129 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm15
    vxorps  xmm13, xmm0, xmm12
    vmulss  xmm15, xmm6, xmm15
    vmulss  xmm1, xmm7, xmm9
    vmulss  xmm0, xmm6, xmm8
    vsubss  xmm11, xmm1, xmm0
    vmovss  [rsp+250h+var_1F0], xmm11
    vmulss  xmm2, xmm13, xmm13
    vmulss  xmm0, xmm15, xmm15
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm4, xmm3, xmm1
    vsubss  xmm0, xmm4, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v58 )
  {
    __asm
    {
      vsqrtss xmm0, xmm4, xmm4
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm11, xmm11
      vcvtss2sd xmm3, xmm15, xmm15
      vcvtss2sd xmm0, xmm13, xmm13
      vmovsd  qword ptr [rsp+250h+locational], xmm1
      vmovsd  [rsp+250h+campos], xmm2
      vmovsd  qword ptr [rsp+250h+killCamEntityRestState], xmm3
      vmovsd  qword ptr [rsp+250h+sideDist], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1173, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", sideDistc, killCamEntityRestStatec, *(double *)&camposc, locationalb) )
      __debugbreak();
  }
  _RDI = DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist;
  if ( !DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_explosiveKillCamPredictStickDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+28h]
    vmovss  xmm5, dword ptr [rbp+150h+center+4]
    vmovss  xmm6, dword ptr [rbp+150h+center]
  }
  if ( (_RBX->killCamServerFlags & 1) == 0 )
    goto LABEL_51;
  __asm
  {
    vsubss  xmm1, xmm6, dword ptr [rbp+150h+outLookAtPos]
    vsubss  xmm0, xmm5, dword ptr [rbp+150h+outLookAtPos+4]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vcomiss xmm3, xmm0
  }
  if ( (_RBX->killCamServerFlags & 1) != 0 )
LABEL_51:
    v158 = 0;
  else
    v158 = 1;
  v159 = _RBX->killCamEntityRestState;
  if ( v159 == KC_ENT_STUCK_PERSON || v158 || (_RBX->killCamClientFlags & 1) != 0 )
    v158 = 1;
  if ( v159 == KC_ENT_STUCK_GROUND )
  {
    __asm
    {
      vmovss  xmm2, [rbp+150h+groundUp]
      vmulss  xmm0, xmm13, xmm2
      vaddss  xmm3, xmm0, xmm6
      vmulss  xmm1, xmm15, xmm2
      vaddss  xmm4, xmm1, xmm5
      vmulss  xmm0, xmm11, xmm2
      vaddss  xmm5, xmm0, dword ptr [rbp+150h+center+8]
      vmovss  xmm1, [rbp+150h+groundBack]
      vxorps  xmm2, xmm1, xmm12
      vmulss  xmm0, xmm2, xmm9
      vaddss  xmm3, xmm0, xmm3
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm1, xmm1, xmm4
      vmovss  xmm6, [rsp+250h+var_1EC]
      vmulss  xmm0, xmm2, xmm6
      vaddss  xmm4, xmm0, xmm5
    }
  }
  else if ( v158 && !v33 && _RBX->killCamFirstFrameRan )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0B5190h]
      vmovss  xmm1, dword ptr [rbx+0B5194h]
      vmovss  xmm4, dword ptr [rbx+0B5198h]
    }
    _RBX->killCamClientFlags |= 1u;
    __asm { vmovss  xmm6, [rsp+250h+var_1EC] }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, [rsp+250h+var_1D4]
      vmulss  xmm0, xmm13, xmm2
      vaddss  xmm4, xmm0, xmm6
      vmulss  xmm1, xmm15, xmm2
      vaddss  xmm7, xmm1, xmm5
      vmulss  xmm0, xmm11, xmm2
      vaddss  xmm11, xmm0, dword ptr [rbp+150h+center+8]
      vsubss  xmm3, xmm6, dword ptr [rbp+150h+outLookAtPos]
      vsubss  xmm2, xmm5, dword ptr [rbp+150h+outLookAtPos+4]
      vcmpeqss xmm1, xmm14, xmm10
      vmovss  xmm0, cs:__real@42be0000
      vblendvps xmm0, xmm14, xmm0, xmm1
      vmovss  [rbp+150h+arg_18], xmm0
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, cs:__real@43800000
      vmovss  xmm14, [rbp+150h+arg_18]
      vmovss  xmm6, [rsp+250h+var_1EC]
      vmovss  [rsp+250h+var_1D8], xmm14
      vxorps  xmm2, xmm14, xmm12
      vmulss  xmm0, xmm2, xmm9
      vaddss  xmm3, xmm0, xmm4
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm1, xmm1, xmm7
      vmulss  xmm0, xmm2, xmm6
      vaddss  xmm4, xmm0, xmm11
      vmovss  xmm11, [rsp+250h+var_1F0]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+150h+desiredCamPos], xmm3
    vmovss  dword ptr [rbp+150h+desiredCamPos+4], xmm1
    vmovss  dword ptr [rbp+150h+desiredCamPos+8], xmm4
    vmovss  [rsp+250h+var_1F0], xmm3
  }
  if ( (v298 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm { vmovss  [rsp+250h+var_1F0], xmm1 }
  if ( (v299 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm { vmovss  [rsp+250h+var_1F0], xmm4 }
  if ( (v300 & 0x7F800000) == 2139095040 )
  {
LABEL_115:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1215, ASSERT_TYPE_SANITY, "( !IS_NAN( ( campos )[0] ) && !IS_NAN( ( campos )[1] ) && !IS_NAN( ( campos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( campos )[0] ) && !IS_NAN( ( campos )[1] ) && !IS_NAN( ( campos )[2] )") )
      __debugbreak();
  }
  killCamEntity = _RBX->killCamEntity;
  if ( killCamEntity == 2047 )
  {
    if ( _RBX->killCamEntityRestState != KC_ENT_STUCK_PERSON || (killCamEntity = _RBX->invalidKillCamEntity, killCamEntity == 2047) )
    {
      killCamEntity = 2047;
      if ( _RBX->predictedPlayerState.clientNum < cls.maxClients )
        killCamEntity = _RBX->predictedPlayerState.clientNum;
    }
  }
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  v196 = CG_KillCam_KillcamCameraTrace(localClientNum, &outLookAtPos, &center, &angles, &desiredCamPos, killCamEntity, _RBX->killCamEntityRestState, &outOrg);
  Entity = CG_GetEntity(localClientNum, _RBX->clientNum);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+250h+outOrg]
    vsubss  xmm4, xmm0, dword ptr [rbp+150h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+250h+outOrg+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+150h+outOrigin+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vmovss  xmm14, cs:__real@41a00000
  }
  if ( v196 )
  {
    __asm { vcomiss xmm1, cs:__real@44a20000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, [rsp+250h+var_1D4]
      vmulss  xmm0, xmm13, xmm4
      vaddss  xmm2, xmm0, dword ptr [rbp+150h+center]
      vmulss  xmm1, xmm15, xmm4
      vaddss  xmm3, xmm1, dword ptr [rbp+150h+center+4]
      vmulss  xmm0, xmm11, xmm4
      vaddss  xmm4, xmm0, dword ptr [rbp+150h+center+8]
      vmovss  xmm5, [rsp+250h+var_1D8]
      vmulss  xmm1, xmm9, xmm5
      vaddss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbp+150h+desiredCamPos], xmm2
      vmulss  xmm0, xmm8, xmm5
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+150h+desiredCamPos+4], xmm1
      vmulss  xmm2, xmm6, xmm5
      vaddss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbp+150h+desiredCamPos+8], xmm0
    }
    if ( !CG_KillCam_KillcamCameraTrace(localClientNum, &outLookAtPos, &center, &angles, &desiredCamPos, killCamEntity, _RBX->killCamEntityRestState, &outOrg) )
    {
      v219 = _RBX->killCamEntityRestState;
      if ( v219 == KC_ENT_STUCK_GROUND )
      {
        __asm
        {
          vmulss  xmm0, xmm13, xmm14
          vaddss  xmm1, xmm0, dword ptr [rbp+150h+center]
          vmovss  dword ptr [rsp+250h+outOrg], xmm1
          vmulss  xmm2, xmm15, xmm14
          vaddss  xmm0, xmm2, dword ptr [rbp+150h+center+4]
          vmovss  dword ptr [rsp+250h+outOrg+4], xmm0
          vmulss  xmm1, xmm11, xmm14
          vaddss  xmm2, xmm1, dword ptr [rbp+150h+center+8]
          vmovss  dword ptr [rsp+250h+outOrg+8], xmm2
        }
      }
      else if ( v219 == KC_ENT_STUCK_WALL )
      {
        AnglesToAxis(&angles, &axis);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+150h+axis+1Ch]
          vmovss  xmm4, dword ptr [rbp+150h+axis+20h]
          vmovss  xmm6, dword ptr [rbp+150h+center+8]
          vsubss  xmm0, xmm6, dword ptr [rbp+150h+outOrigin+8]
          vcomiss xmm0, cs:__real@42480000
        }
        if ( !(v225 | v226) )
        {
          __asm { vcomiss xmm4, cs:__real@3f4ccccd }
          if ( !(v225 | v226) )
          {
            __asm
            {
              vxorps  xmm4, xmm4, xmm12
              vxorps  xmm5, xmm5, xmm12
            }
          }
        }
        __asm
        {
          vmovss  xmm3, cs:__real@40a00000
          vmulss  xmm1, xmm3, dword ptr [rbp+150h+axis+18h]
          vaddss  xmm2, xmm1, dword ptr [rbp+150h+center]
          vmovss  dword ptr [rsp+250h+outOrg], xmm2
          vmulss  xmm0, xmm5, xmm3
          vaddss  xmm1, xmm0, dword ptr [rbp+150h+center+4]
          vmovss  dword ptr [rsp+250h+outOrg+4], xmm1
          vmulss  xmm2, xmm4, xmm3
          vaddss  xmm0, xmm2, xmm6
          vmovss  dword ptr [rsp+250h+outOrg+8], xmm0
        }
      }
    }
  }
  CG_KillCam_LookAtBothPoints(&outLookAtPos, &origin, &outOrg, &_RBX->refdef.view.axis);
  RefdefView_SetOrg(&_RBX->refdef.view, &outOrg);
  if ( ((killCamEntityType - 5) & 0xFFFFFFFA) != 0 || killCamEntityType == KC_VEHICLE )
  {
    _RBX->killCamStoppedTime = 0;
  }
  else
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist");
    __asm { vmovaps xmm13, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist, "cg_explosiveKillCamStopDecelDist");
    __asm
    {
      vaddss  xmm6, xmm0, xmm13
      vmovss  xmm1, dword ptr [rbp+150h+origin]
      vsubss  xmm5, xmm1, dword ptr [rbp+150h+outLookAtPos]
      vmovss  xmm2, dword ptr [rbp+150h+origin+4]
      vsubss  xmm3, xmm2, dword ptr [rbp+150h+outLookAtPos+4]
      vmovss  xmm1, dword ptr [rbp+150h+origin+8]
      vsubss  xmm4, xmm1, dword ptr [rbp+150h+outLookAtPos+8]
      vmulss  xmm3, xmm3, xmm3
      vmulss  xmm2, xmm5, xmm5
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm11, xmm1, xmm0
    }
    if ( _RBX->killCamFirstFrameRan && !_RBX->killCamStoppedTime )
    {
      __asm
      {
        vmulss  xmm0, xmm13, xmm13
        vcomiss xmm0, xmm11
      }
    }
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+250h+outOrg]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v301 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+250h+outOrg+4]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v302 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+250h+outOrg+8]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v303 & 0x7F800000) == 2139095040 )
  {
LABEL_116:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1374, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6944h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v304 & 0x7F800000) == 2139095040 )
    goto LABEL_117;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6948h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v305 & 0x7F800000) == 2139095040 )
    goto LABEL_117;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+694Ch]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v306 & 0x7F800000) == 2139095040 )
  {
LABEL_117:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1375, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6950h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v307 & 0x7F800000) == 2139095040 )
    goto LABEL_118;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6954h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v308 & 0x7F800000) == 2139095040 )
    goto LABEL_118;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6958h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v309 & 0x7F800000) == 2139095040 )
  {
LABEL_118:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1376, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+695Ch]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v310 & 0x7F800000) == 2139095040 )
    goto LABEL_119;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6960h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v311 & 0x7F800000) == 2139095040 )
    goto LABEL_119;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6964h]
    vmovss  [rsp+250h+var_1F0], xmm0
  }
  if ( (v312 & 0x7F800000) == 2139095040 )
  {
LABEL_119:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1377, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] )") )
      __debugbreak();
  }
  AxisToAngles(&_RBX->refdef.view.axis, &_RBX->refdefViewAngles);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(_RBX);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_airstrikeKillCamFov, "cg_airstrikeKillCamFov");
  __asm { vmovaps xmm1, xmm0; fov_x }
  CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&outOrg, 0, sizeof(outOrg));
LABEL_111:
  Sys_ProfEndNamedEvent();
  _R11 = &v328;
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

/*
==============
CG_KillCam_UpdateExplosiveKillCam_Legacy
==============
*/

void __fastcall CG_KillCam_UpdateExplosiveKillCam_Legacy(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType, double upDist, double backDist, float outDist, float sideDist, float groundUp, float groundBack)
{
  unsigned int killCamStoppedTime; 
  bool v31; 
  bool v32; 
  unsigned int time; 
  bool v34; 
  bool v38; 
  bool v45; 
  bool v69; 
  bool v98; 
  KillCamEntityRestState v128; 
  bool v178; 
  double killCamEntityRestState; 
  double killCamEntityRestStatea; 
  double killCamEntityRestStateb; 
  double killCamEntityRestStatec; 
  vec3_t *campos; 
  vec3_t *camposa; 
  double contentMask; 
  double contentMaska; 
  double locational; 
  double locationala; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  vec3_t outOrg; 
  __int64 v265; 
  vec3_t point2; 
  vec3_t originalBombOrigin; 
  vec3_t desiredCamPos; 
  vec3_t outLookAtPos; 
  vec3_t bombAngles; 
  trace_t results; 
  char v272; 
  void *retaddr; 

  _RAX = &retaddr;
  v265 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  [rsp+210h+var_1B0], xmm3
    vmovss  dword ptr [rsp+210h+var_1A8], xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_KillCam_UpdateExplosiveKillCam_Legacy");
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 707, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 708, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RDI->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [rdi+0B50FCh]
    vmovss  dword ptr [rbp+110h+point2], xmm9
    vmovss  xmm10, dword ptr [rdi+0B5100h]
    vmovss  dword ptr [rbp+110h+point2+4], xmm10
    vmovss  xmm6, dword ptr [rdi+0B5104h]
    vmovss  dword ptr [rbp+110h+point2+8], xmm6
    vmovss  xmm0, dword ptr [rdi+0B5108h]
    vmovss  dword ptr [rbp+110h+bombAngles], xmm0
    vmovss  xmm1, dword ptr [rdi+0B510Ch]
    vmovss  dword ptr [rbp+110h+bombAngles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+0B5110h]
    vmovss  dword ptr [rbp+110h+bombAngles+8], xmm0
  }
  killCamStoppedTime = _RBX->killCamStoppedTime;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v31 = 0;
  v32 = killCamStoppedTime == 0;
  if ( killCamStoppedTime )
  {
    time = _RBX->time;
    v31 = time < killCamStoppedTime;
    v32 = time == killCamStoppedTime;
    if ( (int)time > (int)killCamStoppedTime )
    {
      v31 = time < killCamStoppedTime;
      v32 = time == killCamStoppedTime;
      v34 = time <= killCamStoppedTime;
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vcvtsi2ss xmm8, xmm8, eax
        vcomiss xmm8, xmm7
      }
      if ( time <= killCamStoppedTime )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm8, xmm8
          vmovsd  qword ptr [rsp+210h+killCamEntityRestState], xmm0
        }
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 722, ASSERT_TYPE_ASSERT, "( ( time > 0.0f ) )", "( time ) = %g", killCamEntityRestState);
        v31 = 0;
        v32 = !v38;
        v34 = !v38;
        if ( v38 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0B5144h]
        vcomiss xmm8, xmm0
      }
      if ( v31 )
      {
        __asm { vcomiss xmm0, xmm7 }
        if ( v34 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  qword ptr [rsp+210h+killCamEntityRestState], xmm0
          }
          v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 730, ASSERT_TYPE_ASSERT, "( ( cgameGlob->killCamStoppedDecelTime > 0.0f ) )", "( cgameGlob->killCamStoppedDecelTime ) = %g", killCamEntityRestStatea);
          v31 = 0;
          v32 = !v45;
          if ( v45 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, cs:__real@bf000000
          vdivss  xmm1, xmm0, dword ptr [rbx+0B5144h]
          vmovss  xmm2, dword ptr [rbx+0B5154h]
          vmulss  xmm0, xmm2, xmm1
          vmovss  xmm4, dword ptr [rbx+0B5158h]
          vmulss  xmm3, xmm4, xmm1
          vmovss  xmm6, dword ptr [rbx+0B515Ch]
          vmulss  xmm5, xmm6, xmm1
          vmulss  xmm0, xmm0, xmm8
          vaddss  xmm1, xmm0, xmm2
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm9, xmm2, dword ptr [rbx+0B5148h]
          vmulss  xmm0, xmm3, xmm8
          vaddss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm10, xmm2, dword ptr [rbx+0B514Ch]
          vmulss  xmm0, xmm5, xmm8
          vaddss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm6, xmm2, dword ptr [rbx+0B5150h]
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vmulss  xmm0, xmm1, dword ptr [rbx+0B5154h]
          vaddss  xmm9, xmm0, dword ptr [rbx+0B5148h]
          vmulss  xmm0, xmm1, dword ptr [rbx+0B5158h]
          vaddss  xmm10, xmm0, dword ptr [rbx+0B514Ch]
          vmulss  xmm0, xmm1, dword ptr [rbx+0B515Ch]
          vaddss  xmm6, xmm0, dword ptr [rbx+0B5150h]
        }
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+110h+originalBombOrigin], xmm9
    vmovss  dword ptr [rbp+110h+originalBombOrigin+4], xmm10
    vmovss  dword ptr [rbp+110h+originalBombOrigin+8], xmm6
    vmovss  xmm0, dword ptr [rbp+110h+outLookAtPos]
    vsubss  xmm11, xmm0, xmm9
    vmovss  xmm0, dword ptr [rbp+110h+outLookAtPos+4]
    vsubss  xmm8, xmm0, xmm10
    vmovss  xmm0, dword ptr [rbp+110h+outLookAtPos+8]
    vsubss  xmm12, xmm0, xmm6
    vucomiss xmm11, xmm7
  }
  if ( v32 )
  {
    __asm { vucomiss xmm8, xmm7 }
    if ( v32 )
    {
      __asm { vucomiss xmm12, xmm7 }
      if ( v32 )
      {
        v69 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 744, ASSERT_TYPE_ASSERT, "(Vec3NotZero( delta ))", (const char *)&queryFormat, "Vec3NotZero( delta )");
        v31 = 0;
        if ( v69 )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vcmpltss xmm0, xmm7, xmm12
    vblendvps xmm12, xmm12, xmm7, xmm0
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmovss  [rsp+210h+var_1AC], xmm12
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm1, xmm2, xmm0
    vcomiss xmm1, cs:__real@358637be
    vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm13, cs:__real@3f800000
  }
  if ( v31 )
  {
    __asm
    {
      vxorps  xmm14, xmm14, xmm14
      vxorps  xmm15, xmm15, xmm15
      vmovaps xmm5, xmm13
      vmovss  [rsp+210h+var_1AC], xmm5
    }
  }
  else
  {
    __asm
    {
      vsqrtss xmm1, xmm1, xmm1
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm13, xmm0
      vmovss  [rsp+210h+var_1AC], xmm1
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm11, xmm11, xmm0
      vmulss  xmm8, xmm8, xmm0
      vmulss  xmm12, xmm12, xmm0
      vmulss  xmm15, xmm11, xmm11
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm0, xmm15
      vmulss  xmm1, xmm12, xmm12
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm3, xmm13
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
      vsqrtss xmm0, xmm3, xmm3
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm12, xmm12
      vcvtss2sd xmm3, xmm8, xmm8
      vcvtss2sd xmm0, xmm11, xmm11
      vmovsd  qword ptr [rsp+210h+locational], xmm1
      vmovsd  qword ptr [rsp+210h+contentMask], xmm2
      vmovsd  [rsp+210h+campos], xmm3
      vmovsd  qword ptr [rsp+210h+killCamEntityRestState], xmm0
    }
    v98 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 759, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( delta ) )", "(%g, %g, %g) len %g", killCamEntityRestStateb, *(double *)&campos, contentMask, locational);
    if ( v98 )
      __debugbreak();
    __asm
    {
      vxorps  xmm3, xmm8, xmm14
      vmovss  xmm4, cs:__real@80000000
      vucomiss xmm8, xmm4
    }
    if ( !v98 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm11, xmm7
        vblendvps xmm0, xmm3, xmm13, xmm0
        vmovaps xmm3, xmm0
        vmovss  [rsp+210h+var_1AC], xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm0, xmm15
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm4
      vblendvps xmm1, xmm2, xmm13, xmm0
      vmovss  [rsp+210h+var_1AC], xmm1
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm3, xmm3, xmm0
      vmulss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm2, xmm12
      vxorps  xmm14, xmm0, xmm14
      vmulss  xmm15, xmm12, xmm3
      vmulss  xmm1, xmm2, xmm11
      vmulss  xmm0, xmm8, xmm3
      vsubss  xmm5, xmm1, xmm0
      vmovss  [rsp+210h+var_1AC], xmm5
      vmulss  xmm2, xmm15, xmm15
      vmulss  xmm0, xmm14, xmm14
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm4, xmm3, xmm1
      vsubss  xmm0, xmm4, xmm13
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
      vsqrtss xmm0, xmm4, xmm4
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm15, xmm15
      vcvtss2sd xmm0, xmm14, xmm14
      vmovsd  qword ptr [rsp+210h+locational], xmm1
      vmovsd  qword ptr [rsp+210h+contentMask], xmm2
      vmovsd  [rsp+210h+campos], xmm3
      vmovsd  qword ptr [rsp+210h+killCamEntityRestState], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 766, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", killCamEntityRestStatec, *(double *)&camposa, contentMaska, locationala) )
      __debugbreak();
    __asm { vmovss  xmm5, [rsp+210h+var_1AC] }
  }
  v128 = _RBX->killCamEntityRestState;
  if ( v128 == KC_ENT_STUCK_WALL )
  {
    __asm
    {
      vunpcklps xmm0, xmm9, xmm10
      vmovsd  qword ptr [rbp+110h+originalBombOrigin], xmm0
      vmovsd  qword ptr [rbp+110h+desiredCamPos], xmm0
    }
    desiredCamPos.v[2] = originalBombOrigin.v[2];
    __asm
    {
      vmovss  xmm3, cs:__real@40a00000
      vmulss  xmm0, xmm11, xmm3
      vaddss  xmm1, xmm9, xmm0
      vmovss  dword ptr [rbp+110h+originalBombOrigin], xmm1
      vmulss  xmm2, xmm8, xmm3
      vaddss  xmm0, xmm10, xmm2
      vmovss  dword ptr [rbp+110h+originalBombOrigin+4], xmm0
      vmulss  xmm1, xmm12, xmm3
      vaddss  xmm2, xmm6, xmm1
      vmovss  dword ptr [rbp+110h+originalBombOrigin+8], xmm2
    }
  }
  else if ( v128 == KC_ENT_STUCK_GROUND )
  {
    __asm
    {
      vmovss  xmm2, [rbp+110h+groundUp]
      vmulss  xmm0, xmm14, xmm2
      vaddss  xmm4, xmm0, xmm9
      vmulss  xmm1, xmm15, xmm2
      vaddss  xmm5, xmm1, xmm10
      vmulss  xmm0, xmm2, [rsp+210h+var_1AC]
      vaddss  xmm6, xmm0, xmm6
      vmovss  xmm1, [rbp+110h+groundBack]
      vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, xmm11
      vaddss  xmm2, xmm0, xmm4
      vmovss  dword ptr [rbp+110h+desiredCamPos], xmm2
      vmulss  xmm1, xmm3, xmm8
      vaddss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rbp+110h+desiredCamPos+4], xmm0
      vmulss  xmm2, xmm12, xmm3
      vaddss  xmm1, xmm2, xmm6
      vmovss  dword ptr [rbp+110h+desiredCamPos+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+210h+var_1A8]
      vmulss  xmm0, xmm14, xmm3
      vaddss  xmm2, xmm0, xmm9
      vmulss  xmm1, xmm15, xmm3
      vaddss  xmm4, xmm1, xmm10
      vmulss  xmm0, xmm5, xmm3
      vaddss  xmm5, xmm0, xmm6
      vmovss  xmm1, [rsp+210h+var_1B0]
      vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, xmm11
      vaddss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbp+110h+desiredCamPos], xmm0
      vmulss  xmm2, xmm3, xmm8
      vaddss  xmm1, xmm2, xmm4
      vmovss  dword ptr [rbp+110h+desiredCamPos+4], xmm1
      vmulss  xmm0, xmm12, xmm3
      vaddss  xmm2, xmm0, xmm5
      vmovss  dword ptr [rbp+110h+desiredCamPos+8], xmm2
    }
  }
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  CG_KillCam_KillcamCameraTrace_Legacy(localClientNum, &originalBombOrigin, &bombAngles, &desiredCamPos, _RBX->predictedPlayerState.clientNum, _RBX->killCamEntityRestState, &outOrg);
  CG_KillCam_LookAtBothPoints(&outLookAtPos, &point2, &outOrg, &_RBX->refdef.view.axis);
  RefdefView_SetOrg(&_RBX->refdef.view, &outOrg);
  if ( ((killCamEntityType - 5) & 0xFFFFFFFA) == 0 && killCamEntityType != KC_VEHICLE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+110h+point2]
      vsubss  xmm3, xmm0, dword ptr [rbp+110h+outLookAtPos]
      vmovss  xmm1, dword ptr [rbp+110h+point2+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+110h+outLookAtPos+4]
      vmovss  xmm0, dword ptr [rbp+110h+point2+8]
      vmovss  xmm8, dword ptr [rbp+110h+outLookAtPos+8]
      vsubss  xmm4, xmm0, xmm8
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm6, xmm3, xmm0
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist");
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm6
    }
    v178 = !v31 && !v32;
    if ( killCamEntityType == KC_REMOTE_MISSILE )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+110h+point2+8]
        vsubss  xmm6, xmm0, xmm8
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist");
      __asm { vcomiss xmm6, xmm0 }
      if ( v31 )
        goto LABEL_82;
    }
    if ( v178 )
    {
LABEL_82:
      if ( !_RBX->killCamStoppedTime && _RBX->killCamFirstFrameRan )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0B5160h]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v246 & 0x7F800000) == 2139095040 )
          goto LABEL_78;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0B5164h]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v247 & 0x7F800000) == 2139095040 )
          goto LABEL_78;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0B5168h]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v248 & 0x7F800000) == 2139095040 )
        {
LABEL_78:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 810, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+point2]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v249 & 0x7F800000) == 2139095040 )
          goto LABEL_79;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+point2+4]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v250 & 0x7F800000) == 2139095040 )
          goto LABEL_79;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+point2+8]
          vmovss  [rsp+210h+var_1B0], xmm0
        }
        if ( (v251 & 0x7F800000) == 2139095040 )
        {
LABEL_79:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 811, ASSERT_TYPE_SANITY, "( !IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] )") )
            __debugbreak();
        }
        _RBX->killCamStoppedTime = _RBX->time;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+point2]
          vmovss  dword ptr [rbx+0B5148h], xmm0
          vmovss  xmm1, dword ptr [rbp+110h+point2+4]
          vmovss  dword ptr [rbx+0B514Ch], xmm1
          vmovss  xmm0, dword ptr [rbp+110h+point2+8]
          vmovss  dword ptr [rbx+0B5150h], xmm0
        }
        if ( _RBX->frametime <= 0 )
        {
          *(_QWORD *)_RBX->killCamStoppedVel.v = 0i64;
          _RBX->killCamStoppedVel.v[2] = 0.0;
          __asm
          {
            vxorps  xmm11, xmm11, xmm11
            vxorps  xmm9, xmm9, xmm9
            vxorps  xmm10, xmm10, xmm10
            vxorps  xmm6, xmm6, xmm6
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+110h+point2]
            vsubss  xmm3, xmm0, dword ptr [rbx+0B5160h]
            vmovss  dword ptr [rbx+0B5154h], xmm3
            vmovss  xmm1, dword ptr [rbp+110h+point2+4]
            vsubss  xmm0, xmm1, dword ptr [rbx+0B5164h]
            vmovss  dword ptr [rbx+0B5158h], xmm0
            vmovss  xmm2, dword ptr [rbp+110h+point2+8]
            vsubss  xmm1, xmm2, dword ptr [rbx+0B5168h]
            vmovss  dword ptr [rbx+0B515Ch], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
            vdivss  xmm1, xmm13, xmm0
            vmulss  xmm2, xmm3, xmm1
            vmovss  dword ptr [rbx+0B5154h], xmm2
            vmulss  xmm0, xmm1, dword ptr [rbx+0B5158h]
            vmovss  dword ptr [rbx+0B5158h], xmm0
            vmulss  xmm3, xmm1, dword ptr [rbx+0B515Ch]
            vmovss  dword ptr [rbx+0B515Ch], xmm3
            vmovss  [rsp+210h+var_1B0], xmm2
          }
          if ( (v252 & 0x7F800000) == 2139095040 )
            goto LABEL_80;
          __asm { vmovss  [rsp+210h+var_1B0], xmm0 }
          if ( (v253 & 0x7F800000) == 2139095040 )
            goto LABEL_80;
          __asm { vmovss  [rsp+210h+var_1B0], xmm3 }
          if ( (v254 & 0x7F800000) == 2139095040 )
          {
LABEL_80:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 819, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamStoppedVel )[0] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[1] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamStoppedVel )[0] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[1] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[2] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm5, dword ptr [rbx+0B5158h]
            vmovss  xmm3, dword ptr [rbx+0B5154h]
            vmovss  xmm4, dword ptr [rbx+0B515Ch]
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm5, xmm5
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
            vcmpless xmm0, xmm6, cs:__real@80000000
            vblendvps xmm1, xmm6, xmm13, xmm0
            vmovss  [rsp+210h+var_1B0], xmm1
            vdivss  xmm0, xmm13, xmm1
            vmulss  xmm11, xmm0, xmm3
            vmulss  xmm9, xmm0, xmm5
            vmulss  xmm10, xmm0, xmm4
            vmovss  [rsp+210h+var_1B0], xmm11
          }
          if ( (v255 & 0x7F800000) == 2139095040 )
            goto LABEL_81;
          __asm { vmovss  [rsp+210h+var_1B0], xmm9 }
          if ( (v256 & 0x7F800000) == 2139095040 )
            goto LABEL_81;
          __asm { vmovss  [rsp+210h+var_1B0], xmm10 }
          if ( (v257 & 0x7F800000) == 2139095040 )
          {
LABEL_81:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 822, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
              __debugbreak();
          }
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist, "cg_explosiveKillCamStopDecelDist");
        __asm
        {
          vmovaps xmm8, xmm0
          vcomiss xmm6, xmm7
        }
        if ( v31 || v32 )
        {
          _RBX->killCamStoppedDecelTime = 0.0;
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm11, xmm8
            vaddss  xmm1, xmm0, dword ptr [rbp+110h+point2]
            vmovss  dword ptr [rbp+110h+bombAngles], xmm1
            vmulss  xmm2, xmm9, xmm8
            vaddss  xmm0, xmm2, dword ptr [rbp+110h+point2+4]
            vmovss  dword ptr [rbp+110h+bombAngles+4], xmm0
            vmulss  xmm1, xmm10, xmm8
            vaddss  xmm2, xmm1, dword ptr [rbp+110h+point2+8]
            vmovss  dword ptr [rbp+110h+bombAngles+8], xmm2
          }
          PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &point2, &bombAngles, &bounds_origin, _RBX->predictedPlayerState.clientNum, 0, 2065, 0, NULL, All);
          __asm
          {
            vmulss  xmm0, xmm8, [rbp+110h+results.fraction]
            vmulss  xmm1, xmm0, cs:__real@40000000
            vdivss  xmm2, xmm1, xmm6
            vmovss  dword ptr [rbx+0B5144h], xmm2
          }
        }
      }
    }
  }
  AxisToAngles(&_RBX->refdef.view.axis, &_RBX->refdefViewAngles);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(_RBX);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_airstrikeKillCamFov, "cg_airstrikeKillCamFov");
  __asm { vmovaps xmm1, xmm0; fov_x }
  CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
  memset(&outOrg, 0, sizeof(outOrg));
  Sys_ProfEndNamedEvent();
  _R11 = &v272;
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

/*
==============
CG_KillCam_UpdateHelicopterKillCam
==============
*/
void CG_KillCam_UpdateHelicopterKillCam(KillCamEntityType killCamEntityType, LocalClientNum_t localClientNum)
{
  char v73; 
  char v93; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  vec3_t inOrg; 
  vec3_t cross; 
  vec3_t outLookAtPos; 
  vec3_t v1; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RSI->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RSI->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rsi+0B50FCh]
    vmovss  xmm8, dword ptr [rsi+0B5100h]
    vmovss  xmm6, dword ptr [rsi+0B5104h]
  }
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+outLookAtPos+8]
    vaddss  xmm3, xmm0, cs:__real@c2c80000
    vmovss  xmm1, dword ptr [rsp+150h+outLookAtPos+4]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  dword ptr [rsp+150h+outLookAtPos+8], xmm3
    vmovss  xmm0, dword ptr [rbx+0B5134h]
    vmovss  xmm14, dword ptr [rbx+0B5138h]
    vmovss  xmm10, dword ptr [rbx+0B513Ch]
    vaddss  xmm2, xmm0, xmm6
    vmovss  xmm0, dword ptr [rsp+150h+outLookAtPos]
    vsubss  xmm5, xmm0, xmm7
    vsubss  xmm6, xmm1, xmm8
    vmovss  dword ptr [rsp+150h+inOrg+8], xmm2
    vmulss  xmm0, xmm5, xmm5
    vmovss  dword ptr [rsp+150h+inOrg], xmm7
    vsubss  xmm7, xmm3, xmm2
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm11, xmm5, xmm1
    vmulss  xmm12, xmm6, xmm1
    vmulss  xmm13, xmm7, xmm1
    vmovss  dword ptr [rbp+50h+v1], xmm11
    vmovss  dword ptr [rbp+50h+v1+4], xmm12
    vmovss  dword ptr [rbp+50h+v1+8], xmm13
    vmovss  dword ptr [rsp+150h+inOrg+4], xmm8
  }
  Vec3Cross(&orIdentity.axis.m[2], &v1, &cross);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+150h+cross]
    vmovss  xmm6, dword ptr [rsp+150h+cross+8]
    vmovss  xmm5, dword ptr [rsp+150h+cross+4]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm3, xmm6, xmm1
    vmulss  xmm4, xmm5, xmm1
    vmulss  xmm0, xmm13, xmm4
    vmulss  xmm1, xmm3, xmm12
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm0, xmm11, xmm3
    vmulss  xmm2, xmm13, xmm7
    vsubss  xmm8, xmm2, xmm0
    vmulss  xmm1, xmm11, xmm4
    vmulss  xmm0, xmm7, xmm12
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm4, xmm3, xmm1
    vsubss  xmm0, xmm4, xmm9
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v73 )
  {
    __asm
    {
      vsqrtss xmm0, xmm4, xmm4
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+150h+var_110], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+150h+var_118], xmm2
      vcvtss2sd xmm3, xmm8, xmm8
      vmovsd  [rsp+150h+var_120], xmm3
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+150h+var_128], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 281, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v106, v107, v108, v109) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm4, xmm14, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm2, xmm0, dword ptr [rsp+150h+inOrg]
    vmulss  xmm1, xmm6, xmm10
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm4
    vaddss  xmm3, xmm0, dword ptr [rsp+150h+inOrg+4]
    vmulss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rsp+150h+inOrg], xmm2
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm13, xmm4
    vaddss  xmm3, xmm0, dword ptr [rsp+150h+inOrg+8]
    vmulss  xmm1, xmm7, xmm10
    vmovss  dword ptr [rsp+150h+inOrg+4], xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rsp+150h+inOrg+8], xmm2
  }
  RefdefView_SetOrg(&_RBX->refdef.view, &inOrg);
  *(double *)&_XMM0 = LookAtAxisAndDistance(&inOrg, &outLookAtPos, &_RBX->refdef.view.axis);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v73 | v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(distance > 0.0f)", (const char *)&queryFormat, "distance > 0.0f") )
    __debugbreak();
  AxisToAngles(&_RBX->refdef.view.axis, &_RBX->refdefViewAngles);
  _RBX = DVARFLT_cg_heliKillCamFov;
  if ( !DVARFLT_cg_heliKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_heliKillCamFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm1, dword ptr [rbx+28h]; fov_x }
  CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
  _R11 = &v114;
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
  }
}

/*
==============
CG_KillCam_UpdateJavelinKillCam
==============
*/
void CG_KillCam_UpdateJavelinKillCam(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType)
{
  int killCamEntity; 
  centity_t *Entity; 
  const dvar_t *v38; 
  const dvar_t *v47; 
  const dvar_t *v50; 
  char v67; 
  const dvar_t *v82; 
  const dvar_t *v93; 
  const dvar_t *v99; 
  char v125; 
  bool v126; 
  bool v130; 
  double v181; 
  double v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  vec3_t inOrg; 
  vec3_t origin; 
  vec4_t lookAt; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outLookAtPos; 
  vec3_t up; 
  vec3_t v202; 
  vec3_t right; 
  vec4_t out; 
  vec4_t from; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v209; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RDI->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 441, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B5108h]
    vmovss  xmm8, dword ptr [rbx+0B50FCh]
    vmovss  xmm9, dword ptr [rbx+0B5100h]
    vmovss  xmm10, dword ptr [rbx+0B5104h]
    vmovss  dword ptr [rbp+170h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+0B510Ch]
    vmovss  dword ptr [rbp+170h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+0B5110h]
    vmovss  dword ptr [rbp+170h+angles+8], xmm0
  }
  killCamEntity = _RDI->killCamEntity;
  __asm
  {
    vmovss  dword ptr [rsp+270h+lookAt], xmm8
    vmovss  dword ptr [rsp+270h+lookAt+4], xmm9
    vmovss  dword ptr [rbp+170h+lookAt+8], xmm10
    vmovaps [rsp+270h+var_48+8], xmm6
  }
  Entity = CG_GetEntity(localClientNum, killCamEntity);
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  if ( Entity->nextState.lerp.pos.trType == TR_GRAVITY )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+270h+lookAt]
      vmovsd  qword ptr [rsp+270h+inOrg], xmm0
      vmovss  xmm0, dword ptr [rbp+170h+angles]
    }
    inOrg.v[2] = lookAt.v[2];
    __asm
    {
      vmovss  dword ptr [rdi+178C0h], xmm0
      vmovss  xmm1, dword ptr [rbp+170h+angles+4]
      vmovss  dword ptr [rdi+178C4h], xmm1
      vmovss  xmm0, dword ptr [rbp+170h+angles+8]
      vmovss  dword ptr [rdi+178C8h], xmm0
    }
    *(double *)&_XMM0 = I_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@40a00000
      vaddss  xmm0, xmm1, dword ptr [rdi+178C0h]
      vmovss  dword ptr [rdi+178C0h], xmm0
    }
    *(double *)&_XMM0 = I_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@40a00000
      vaddss  xmm1, xmm1, dword ptr [rdi+178C4h]
      vmovss  dword ptr [rdi+178C4h], xmm1
    }
    AnglesToAxis(&_RDI->refdefViewAngles, &_RDI->refdef.view.axis);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+270h+var_58+8], xmm7
      vmovaps [rsp+270h+var_98+8], xmm11
      vmovaps [rsp+270h+var_A8+8], xmm12
      vmovaps [rsp+270h+var_B8+8], xmm13
      vmovaps [rsp+270h+var_C8+8], xmm14
      vmovaps [rsp+270h+var_D8+8], xmm15
    }
    AngleVectors(&angles, &forward, &right, &up);
    AngleVectors(&_RDI->killCamPrevEntityAngles, &v202, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+170h+forward]
      vmovss  xmm1, dword ptr [rbp+170h+forward+4]
      vmulss  xmm3, xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
      vmulss  xmm2, xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
      vmovss  xmm0, dword ptr [rbp+170h+forward+8]
    }
    v38 = DVARFLT_cg_javelinKillCamPassTime;
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
      vaddss  xmm4, xmm3, xmm2
      vxorps  xmm6, xmm6, xmm6
      vaddss  xmm14, xmm4, xmm1
      vcvtsi2ss xmm6, xmm6, eax
    }
    if ( !DVARFLT_cg_javelinKillCamPassTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPassTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3bcde32e
      vdivss  xmm1, xmm0, dword ptr [rbx+28h]
      vminss  xmm0, xmm1, cs:__real@4096cbe4; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    v47 = DVARFLT_cg_javelinKillCamUpDist;
    __asm { vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000 }
    if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    __asm { vmulss  xmm3, xmm6, dword ptr [rbx+28h] }
    v50 = DVARFLT_cg_javelinKillCamPassDist;
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rbp+170h+forward]
      vmulss  xmm0, xmm3, dword ptr [rbp+170h+forward+4]
      vmulss  xmm2, xmm3, dword ptr [rbp+170h+forward+8]
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@3f800000
      vaddss  xmm11, xmm1, xmm8
      vaddss  xmm12, xmm0, xmm9
      vaddss  xmm13, xmm2, xmm10
      vsubss  xmm6, xmm7, xmm6
    }
    if ( !DVARFLT_cg_javelinKillCamPassDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPassDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm
    {
      vmulss  xmm2, xmm6, dword ptr [rbx+28h]
      vmulss  xmm1, xmm2, dword ptr [rbp+170h+up]
      vaddss  xmm15, xmm11, xmm1
      vmulss  xmm1, xmm2, dword ptr [rbp+170h+up+4]
      vaddss  xmm12, xmm12, xmm1
      vmulss  xmm1, xmm2, dword ptr [rbp+170h+up+8]
      vaddss  xmm13, xmm13, xmm1
      vmovss  dword ptr [rsp+270h+origin+8], xmm13
      vmovss  dword ptr [rsp+270h+origin], xmm15
      vmovss  dword ptr [rsp+270h+origin+4], xmm12
    }
    CG_KillCam_ComputeJavelinLookAtAxis(&origin, (const vec3_t *)&lookAt, &right, &axis);
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcomiss xmm14, xmm11
    }
    if ( v67 | v126 )
      goto LABEL_27;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+170h+var_1A8]
      vmovss  xmm1, dword ptr [rbp+170h+var_1A8+4]
      vmulss  xmm2, xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
      vmulss  xmm3, xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
      vmovss  xmm0, dword ptr [rbp+170h+var_1A8+8]
      vmulss  xmm1, xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm14, xmm2
    }
    if ( v67 )
    {
LABEL_27:
      if ( killCamEntityType == KC_REMOTE_MISSILE )
      {
        _RBX = DVARFLT_cg_javelinKillCamUpDist;
        if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+28h]
          vmulss  xmm1, xmm3, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
        }
        v82 = DVARFLT_cg_javelinKillCamCloseZDist;
        __asm
        {
          vaddss  xmm2, xmm1, xmm8
          vmulss  xmm1, xmm3, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
          vmovss  dword ptr [rsp+270h+inOrg], xmm2
          vaddss  xmm2, xmm1, xmm9
          vmulss  xmm1, xmm3, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
          vmovss  dword ptr [rsp+270h+inOrg+4], xmm2
          vaddss  xmm2, xmm1, xmm10
          vmovss  dword ptr [rsp+270h+inOrg+8], xmm2
        }
        if ( !DVARFLT_cg_javelinKillCamCloseZDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamCloseZDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v82);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+170h+outLookAtPos+8]
          vaddss  xmm1, xmm0, dword ptr [rbx+28h]
          vmaxss  xmm2, xmm1, dword ptr [rsp+270h+inOrg+8]
        }
        _RBX = &_RDI->refdef.view.axis;
        __asm { vmovss  dword ptr [rsp+270h+inOrg+8], xmm2 }
        CG_KillCam_ComputeJavelinLookAtAxis(&inOrg, (const vec3_t *)&lookAt, &right, &_RDI->refdef.view.axis);
        LookAtAxisAndDistance(&inOrg, &outLookAtPos, &_RDI->refdef.view.axis);
      }
      else
      {
        if ( killCamEntityType != KC_JAVELIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 496, ASSERT_TYPE_ASSERT, "( killCamEntityType ) == ( KC_JAVELIN )", "%s == %s\n\t%i, %i", "killCamEntityType", "KC_JAVELIN", killCamEntityType, 8) )
          __debugbreak();
        _RBX = DVARFLT_cg_javelinKillCamUpDist;
        if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        v93 = DVARFLT_cg_javelinKillCamDownDist;
        if ( !DVARFLT_cg_javelinKillCamDownDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamDownDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v93);
        __asm
        {
          vaddss  xmm0, xmm14, xmm7
          vmulss  xmm3, xmm0, cs:__real@3f000000
          vmulss  xmm0, xmm3, xmm6
          vsubss  xmm1, xmm7, xmm3
          vmulss  xmm2, xmm1, dword ptr [rbx+28h]
        }
        v99 = DVARFLT_cg_javelinKillCamCloseZDist;
        __asm
        {
          vaddss  xmm4, xmm2, xmm0
          vmulss  xmm2, xmm4, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
          vaddss  xmm0, xmm2, xmm8
          vmulss  xmm2, xmm4, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
          vmovss  dword ptr [rsp+270h+origin], xmm0
          vaddss  xmm0, xmm2, xmm9
          vmulss  xmm2, xmm4, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
          vmovss  dword ptr [rsp+270h+origin+4], xmm0
          vaddss  xmm0, xmm2, xmm10
          vmovss  dword ptr [rsp+270h+origin+8], xmm0
        }
        if ( !DVARFLT_cg_javelinKillCamCloseZDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamCloseZDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v99);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+170h+outLookAtPos+8]
          vaddss  xmm1, xmm0, dword ptr [rbx+28h]
          vmaxss  xmm2, xmm1, dword ptr [rsp+270h+origin+8]
          vmovss  dword ptr [rsp+270h+origin+8], xmm2
        }
        CG_KillCam_ComputeJavelinLookAtAxis(&origin, (const vec3_t *)&lookAt, &right, &mat);
        _RBX = DVARFLT_cg_javelinKillCamLookLerpDist;
        if ( !DVARFLT_cg_javelinKillCamLookLerpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamLookLerpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+28h]
          vcomiss xmm1, xmm11
        }
        if ( !(v67 | v126) )
        {
          __asm
          {
            vsubss  xmm0, xmm10, dword ptr [rbp+170h+outLookAtPos+8]
            vdivss  xmm1, xmm0, xmm1
            vsubss  xmm0, xmm7, xmm1; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm7; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm6, xmm0 }
          AxisToQuat(&mat, &out);
          LookAtAxisAndDistance(&origin, &outLookAtPos, &v209);
          AxisToQuat(&v209, &lookAt);
          __asm { vmovaps xmm2, xmm6; frac }
          QuatLerp(&out, &lookAt, *(float *)&_XMM2, &out);
        }
        _RBX = DVARFLT_cg_javelinKillCamPitchDownBlendFinish;
        if ( !DVARFLT_cg_javelinKillCamPitchDownBlendFinish && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPitchDownBlendFinish") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmulss  xmm1, xmm0, cs:__real@3c8efa35
          vaddss  xmm0, xmm1, cs:__real@3fc90fdb; X
        }
        *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
        __asm
        {
          vmovss  xmm1, cs:__real@bf800000; min
          vmovaps xmm2, xmm7; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcomiss xmm0, xmm7
          vmovaps xmm6, xmm0
        }
        if ( !v125 )
        {
          __asm
          {
            vmovsd  xmm1, cs:__real@3ff0000000000000
            vmovsd  qword ptr [rsp+40h], xmm1
            vcvtss2sd xmm2, xmm6, xmm0
            vmovsd  [rsp+270h+var_238], xmm2
          }
          v130 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 530, ASSERT_TYPE_ASSERT, "( finishDownDot ) < ( 1.0f )", "%s < %s\n\t%g, %g", "finishDownDot", "1.0f", v181, v182);
          v125 = 0;
          v126 = !v130;
          if ( v130 )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm1, xmm7, xmm6
          vcvtss2sd xmm0, xmm1, xmm1
          vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
        }
        if ( !(v125 | v126) )
        {
          __asm
          {
            vsubss  xmm0, xmm7, xmm14
            vdivss  xmm0, xmm0, xmm1; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm7; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm7, xmm0 }
        }
        __asm
        {
          vmulss  xmm1, xmm7, cs:__real@40c00000
          vsubss  xmm2, xmm1, cs:__real@41700000
          vmulss  xmm3, xmm2, xmm7
          vaddss  xmm4, xmm3, cs:__real@41200000
          vmovss  xmm2, dword ptr [rsp+270h+origin]
          vmulss  xmm1, xmm7, xmm7
          vmulss  xmm0, xmm1, xmm7
          vmulss  xmm6, xmm4, xmm0
          vsubss  xmm1, xmm2, xmm15
          vmulss  xmm0, xmm1, xmm6
          vmovss  xmm1, dword ptr [rsp+270h+origin+4]
          vaddss  xmm3, xmm0, xmm15
          vsubss  xmm0, xmm1, xmm12
          vmovss  dword ptr [rsp+270h+inOrg], xmm3
          vmulss  xmm3, xmm0, xmm6
          vmovss  xmm0, dword ptr [rsp+270h+origin+8]
          vaddss  xmm4, xmm3, xmm12
          vsubss  xmm1, xmm0, xmm13
          vmulss  xmm3, xmm1, xmm6
          vmovss  dword ptr [rsp+270h+inOrg+4], xmm4
          vaddss  xmm4, xmm3, xmm13
          vmovss  dword ptr [rsp+270h+inOrg+8], xmm4
        }
        AxisToQuat(&axis, &from);
        __asm { vmovaps xmm2, xmm6; frac }
        QuatSlerp(&from, &out, *(float *)&_XMM2, &result);
        _RBX = &_RDI->refdef.view.axis;
        QuatToAxis(&result, &_RDI->refdef.view.axis);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+270h+inOrg]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v183 & 0x7F800000) == 2139095040 )
          goto LABEL_87;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+270h+inOrg+4]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v184 & 0x7F800000) == 2139095040 )
          goto LABEL_87;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+270h+inOrg+8]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v185 & 0x7F800000) == 2139095040 )
        {
LABEL_87:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 540, ASSERT_TYPE_SANITY, "( !IS_NAN( ( camOrigin )[0] ) && !IS_NAN( ( camOrigin )[1] ) && !IS_NAN( ( camOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( camOrigin )[0] ) && !IS_NAN( ( camOrigin )[1] ) && !IS_NAN( ( camOrigin )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v186 & 0x7F800000) == 2139095040 )
          goto LABEL_88;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6948h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v187 & 0x7F800000) == 2139095040 )
          goto LABEL_88;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+694Ch]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v188 & 0x7F800000) == 2139095040 )
        {
LABEL_88:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 541, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6950h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v189 & 0x7F800000) == 2139095040 )
          goto LABEL_89;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6954h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v190 & 0x7F800000) == 2139095040 )
          goto LABEL_89;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6958h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v191 & 0x7F800000) == 2139095040 )
        {
LABEL_89:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 542, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+695Ch]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v192 & 0x7F800000) == 2139095040 )
          goto LABEL_90;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6960h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v193 & 0x7F800000) == 2139095040 )
          goto LABEL_90;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+6964h]
          vmovss  dword ptr [rsp+270h+var_220], xmm0
        }
        if ( (v194 & 0x7F800000) == 2139095040 )
        {
LABEL_90:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 543, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] )") )
            __debugbreak();
        }
      }
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [rsp+270h+origin] }
      _RBX = &_RDI->refdef.view.axis;
      inOrg.v[2] = origin.v[2];
      __asm { vmovsd  qword ptr [rsp+270h+inOrg], xmm0 }
      MatrixCopy33(&axis, &_RDI->refdef.view.axis);
    }
    AxisToAngles(_RBX, &_RDI->refdefViewAngles);
    __asm
    {
      vmovaps xmm15, [rsp+270h+var_D8+8]
      vmovaps xmm14, [rsp+270h+var_C8+8]
      vmovaps xmm13, [rsp+270h+var_B8+8]
      vmovaps xmm12, [rsp+270h+var_A8+8]
      vmovaps xmm11, [rsp+270h+var_98+8]
      vmovaps xmm7, [rsp+270h+var_58+8]
    }
  }
  RefdefView_SetOrg(&_RDI->refdef.view, &inOrg);
  _RBX = DVARFLT_cg_javelinKillCamFov;
  __asm
  {
    vmovaps xmm10, [rsp+270h+var_88+8]
    vmovaps xmm9, [rsp+270h+var_78+8]
    vmovaps xmm8, [rsp+270h+var_68+8]
    vmovaps xmm6, [rsp+270h+var_48+8]
  }
  if ( !DVARFLT_cg_javelinKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm1, dword ptr [rbx+28h]; fov_x }
  CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(_RDI);
}

/*
==============
CG_KillCam_UpdateKillCamEntity
==============
*/
void CG_KillCam_UpdateKillCamEntity(const LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType)
{
  const dvar_t *v16; 
  const char *v17; 
  cg_t *LocalClientGlobals; 
  cg_t *v32; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float v37; 
  float v38; 
  float v39; 
  vec3_t origin; 
  vec3_t outLookAtPos; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  switch ( killCamEntityType )
  {
    case KC_HELICOPTER:
      CG_KillCam_UpdateHelicopterKillCam(killCamEntityType, localClientNum);
      break;
    case KC_AIRSTRIKE:
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 313, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
        __debugbreak();
      if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 314, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
        __debugbreak();
      CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
      _RBP = CG_GetLocalClientGlobals(localClientNum);
      if ( !_RBP->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
        __debugbreak();
      if ( _RBP->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0B50FCh]
        vmovss  dword ptr [rsp+0C8h+origin], xmm0
        vmovss  xmm1, dword ptr [rbp+0B5100h]
        vmovss  dword ptr [rsp+0C8h+origin+4], xmm1
        vmovss  xmm0, dword ptr [rbp+0B5104h]
        vmovss  dword ptr [rsp+0C8h+origin+8], xmm0
      }
      LookAtAxisAndDistance(&origin, &outLookAtPos, &LocalClientGlobals->refdef.view.axis);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &origin);
      AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
      CG_ShakeCamera(localClientNum);
      CG_PerturbCamera(LocalClientGlobals);
      _RBX = DVARFLT_cg_airstrikeKillCamFov;
      if ( !DVARFLT_cg_airstrikeKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_airstrikeKillCamFov") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm1, dword ptr [rbx+28h]; fov_x }
      CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
      break;
    case KC_EXPLOSIVE:
    case KC_FAST_EXPLOSIVE:
      __asm
      {
        vmovaps [rsp+0C8h+var_48], xmm7
        vmovaps [rsp+0C8h+var_58], xmm8
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist, "cg_explosiveKillCamGroundBackDist");
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist, "cg_explosiveKillCamGroundUpDist");
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamBackDist, "cg_explosiveKillCamBackDist");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamUpDist, "cg_explosiveKillCamUpDist");
      __asm
      {
        vmovaps xmm3, xmm6; backDist
        vmovaps xmm2, xmm0; upDist
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm8
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
      }
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, *(double *)&_XMM2, *(double *)&_XMM3, fmt, v37);
      __asm
      {
        vmovaps xmm8, [rsp+0C8h+var_58]
        vmovaps xmm7, [rsp+0C8h+var_48]
      }
      break;
    case KC_OFFSET_EXPLOSIVE:
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr [rax+0B5170h]; backDist
        vmovss  xmm2, dword ptr [rax+0B5174h]; upDist
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm3
        vmovss  dword ptr [rsp+0C8h+fmt], xmm2
      }
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, *(double *)&_XMM2, *(double *)&_XMM3, fmtb, v39);
      break;
    case KC_ROCKET:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_rocketKillCamBackDist, "cg_rocketKillCamBackDist");
      v16 = DCONST_DVARFLT_cg_rocketKillCamUpDist;
      v17 = "cg_rocketKillCamUpDist";
      goto LABEL_5;
    case KC_TURRET:
      CG_KillCam_UpdateTurretKillCam(localClientNum);
      break;
    case KC_JAVELIN:
      CG_KillCam_UpdateJavelinKillCam(localClientNum, killCamEntityType);
      break;
    case KC_REMOTE_MISSILE:
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_remoteMissileKillCamBackDist, "cg_remoteMissileKillCamBackDist");
      v16 = DCONST_DVARFLT_cg_remoteMissileKillCamUpDist;
      v17 = "cg_remoteMissileKillCamUpDist";
LABEL_5:
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v16, v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm1
        vmovaps xmm3, xmm6; backDist
        vmovaps xmm2, xmm0; upDist
        vmovss  dword ptr [rsp+0C8h+fmt], xmm1
      }
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, *(double *)&_XMM2, *(double *)&_XMM3, fmta, v38);
      break;
    case KC_VEHICLE:
      v32 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v32->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
        __debugbreak();
      if ( v32->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 299, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
        __debugbreak();
      CG_Camera_KillCam_Update(localClientNum, &v32->refdef.view);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
        __debugbreak();
      break;
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
}

/*
==============
CG_KillCam_UpdateKillCamEntityCache
==============
*/
void CG_KillCam_UpdateKillCamEntityCache(const LocalClientNum_t localClientNum)
{
  if ( CG_GetLocalClientGlobals(localClientNum)->inKillCam )
  {
    CG_KillCam_CacheKillCamEntityPose(localClientNum);
    CG_KillCam_CacheKillCamLookAtEntityOrigin(localClientNum);
  }
}

/*
==============
CG_KillCam_UpdateKillCamEntityViewOffset
==============
*/
void CG_KillCam_UpdateKillCamEntityViewOffset(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1496, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1497, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  LocalClientGlobals->refdef.viewOffset.v[0] = LocalClientGlobals->killCamEntityOrg.v[0];
  LocalClientGlobals->refdef.viewOffset.v[1] = LocalClientGlobals->killCamEntityOrg.v[1];
  LocalClientGlobals->refdef.viewOffset.v[2] = LocalClientGlobals->killCamEntityOrg.v[2];
}

/*
==============
CG_KillCam_UpdateTurretKillCam
==============
*/
void CG_KillCam_UpdateTurretKillCam(LocalClientNum_t localClientNum)
{
  centity_t *Entity; 
  unsigned int number; 
  unsigned int v20; 
  unsigned int v21; 
  const DObj *v22; 
  scr_string_t tag_weapon; 
  const char *v82; 
  __int64 skipEntity; 
  int skipEntitya; 
  __int64 skipChildren; 
  int skipChildrena; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t up; 
  trace_t results; 

  _R14 = CG_GetLocalClientGlobals(localClientNum);
  if ( !_R14->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 344, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _R14->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( _RBX->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B50FCh]
    vmovss  dword ptr [rsp+150h+start], xmm0
    vmovss  xmm1, dword ptr [rbx+0B5100h]
    vmovss  dword ptr [rsp+150h+start+4], xmm1
    vmovss  xmm0, dword ptr [rbx+0B5104h]
    vmovss  dword ptr [rsp+150h+start+8], xmm0
    vmovss  xmm1, dword ptr [rbx+0B5108h]
    vmovss  dword ptr [rsp+150h+angles], xmm1
    vmovss  xmm0, dword ptr [rbx+0B510Ch]
    vmovss  dword ptr [rsp+150h+angles+4], xmm0
    vmovss  xmm1, dword ptr [rbx+0B5110h]
    vmovss  dword ptr [rbp+50h+angles+8], xmm1
  }
  Entity = CG_GetEntity(localClientNum, _R14->killCamEntity);
  _RBX = Entity;
  if ( (Entity->flags & 1) != 0 )
  {
    if ( CG_IsRemoteTurret(Entity) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+0A4h]
        vmovss  xmm0, dword ptr [rbx+0A0h]
        vmovss  dword ptr [rsp+150h+angles+4], xmm1
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rbp+50h+angles+8], xmm1
        vmovss  dword ptr [rsp+150h+angles], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+150h+angles]
        vaddss  xmm1, xmm0, dword ptr [rbx+0A0h]
        vmovss  xmm2, dword ptr [rsp+150h+angles+4]
        vmovss  dword ptr [rsp+150h+angles], xmm1
        vaddss  xmm0, xmm2, dword ptr [rbx+0A4h]
        vmovss  dword ptr [rsp+150h+angles+4], xmm0
      }
    }
    number = _RBX->nextState.number;
    if ( number > 0x9E4 )
    {
      skipChildrena = _RBX->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", skipChildrena) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(skipChildren) = 2;
      LODWORD(skipEntity) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    v20 = 2533 * localClientNum + number;
    if ( v20 >= 0x13CA )
    {
      LODWORD(skipChildren) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", skipChildren) )
        __debugbreak();
    }
    v21 = clientObjMap[v20];
    if ( !v21 )
      goto LABEL_40;
    if ( v21 >= (unsigned int)s_objCount )
    {
      LODWORD(skipChildren) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", skipChildren) )
        __debugbreak();
    }
    v22 = (const DObj *)s_objBuf[v21];
    if ( !v22 )
      goto LABEL_40;
    tag_weapon = scr_const.tag_weapon;
    if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
      __debugbreak();
    inOutIndex[0] = -2;
    if ( DObjGetBoneIndexInternal_74(v22, tag_weapon, inOutIndex, &modelIndex) && (_RAX = CG_DObjGetLocalBoneMatrix(&_RBX->pose, v22, inOutIndex[0])) != NULL )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+10h]
        vmovss  xmm1, dword ptr [rax+14h]
        vaddss  xmm4, xmm0, dword ptr [rcx+7Ch]
        vmovss  xmm0, dword ptr [rax+18h]
        vaddss  xmm2, xmm0, dword ptr [rcx+84h]
        vaddss  xmm3, xmm1, dword ptr [rcx+80h]
        vmovss  dword ptr [rsp+150h+start+8], xmm2
        vmovss  dword ptr [rsp+150h+start], xmm4
        vmovss  dword ptr [rsp+150h+start+4], xmm3
      }
    }
    else
    {
LABEL_40:
      Com_PrintWarning(14, "Couldn't get dobj of turret killcam entity (#%i) for client #%i.\n", (unsigned int)_R14->killCamEntity, (unsigned int)localClientNum);
    }
  }
  AngleVectors(&angles, &forward, NULL, &up);
  if ( (_RBX->flags & 1) != 0 && CG_IsRemoteTurret(_RBX) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 377, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    _R12 = DVARFLT_cg_turretRemoteKillCamBackDist;
    if ( !DVARFLT_cg_turretRemoteKillCamBackDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretRemoteKillCamBackDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+28h]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, dword ptr [rbp+50h+forward]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+start]
      vmulss  xmm0, xmm3, dword ptr [rbp+50h+forward+4]
      vaddss  xmm1, xmm0, dword ptr [rsp+150h+start+4]
    }
    _R12 = DVARFLT_cg_turretRemoteKillCamUpDist;
    __asm
    {
      vmovss  dword ptr [rbp+50h+end], xmm2
      vmulss  xmm2, xmm3, dword ptr [rbp+50h+forward+8]
      vaddss  xmm0, xmm2, dword ptr [rsp+150h+start+8]
      vmovss  dword ptr [rbp+50h+end+8], xmm0
      vmovss  dword ptr [rbp+50h+end+4], xmm1
    }
    if ( !DVARFLT_cg_turretRemoteKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretRemoteKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm
    {
      vmovss  xmm3, dword ptr [r12+28h]
      vmulss  xmm1, xmm3, dword ptr [rbp+50h+up]
      vaddss  xmm1, xmm1, dword ptr [rbp+50h+end]
      vmulss  xmm2, xmm3, dword ptr [rbp+50h+up+4]
      vmulss  xmm3, xmm3, dword ptr [rbp+50h+up+8]
      vmovss  dword ptr [rbp+50h+end], xmm1
      vaddss  xmm1, xmm2, dword ptr [rbp+50h+end+4]
    }
    skipEntitya = _R14->killCamEntity;
    __asm
    {
      vmovss  dword ptr [rbp+50h+end+4], xmm1
      vaddss  xmm1, xmm3, dword ptr [rbp+50h+end+8]
      vmovss  dword ptr [rbp+50h+end+8], xmm1
    }
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, skipEntitya, 0, 49, 0, NULL, All);
    __asm
    {
      vmovss  xmm5, [rbp+50h+results.fraction]
      vmovss  xmm0, dword ptr [rbp+50h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+150h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+150h+start]
      vmovss  xmm1, dword ptr [rbp+50h+end+4]
      vmovss  dword ptr [rsp+150h+start], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+150h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+150h+start+4]
      vmovss  xmm0, dword ptr [rbp+50h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+150h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+150h+start+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+150h+start+8]
      vmovss  dword ptr [rsp+150h+start+8], xmm3
    }
  }
  else
  {
    _R12 = DVARFLT_cg_turretKillCamBackDist;
    if ( !DVARFLT_cg_turretKillCamBackDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretKillCamBackDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+28h]
      vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm4, dword ptr [rbp+50h+forward]
      vaddss  xmm0, xmm2, dword ptr [rsp+150h+start]
      vmulss  xmm3, xmm4, dword ptr [rbp+50h+forward+4]
      vmulss  xmm2, xmm4, dword ptr [rbp+50h+forward+8]
    }
    _R12 = DVARFLT_cg_turretKillCamUpDist;
    __asm
    {
      vmovss  dword ptr [rsp+150h+start], xmm0
      vaddss  xmm0, xmm3, dword ptr [rsp+150h+start+4]
      vmovss  dword ptr [rsp+150h+start+4], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsp+150h+start+8]
      vmovss  dword ptr [rsp+150h+start+8], xmm0
    }
    if ( !DVARFLT_cg_turretKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm
    {
      vmovss  xmm3, dword ptr [r12+28h]
      vmulss  xmm1, xmm3, dword ptr [rbp+50h+up]
      vaddss  xmm1, xmm1, dword ptr [rsp+150h+start]
      vmulss  xmm2, xmm3, dword ptr [rbp+50h+up+4]
      vmulss  xmm3, xmm3, dword ptr [rbp+50h+up+8]
      vmovss  dword ptr [rsp+150h+start], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+150h+start+4]
      vmovss  dword ptr [rsp+150h+start+4], xmm1
      vaddss  xmm1, xmm3, dword ptr [rsp+150h+start+8]
      vmovss  dword ptr [rsp+150h+start+8], xmm1
    }
  }
  RefdefView_SetOrg(&_R14->refdef.view, &start);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+angles]
    vmovss  dword ptr [r14+178C0h], xmm0
    vmovss  xmm1, dword ptr [rsp+150h+angles+4]
    vmovss  dword ptr [r14+178C4h], xmm1
    vmovss  xmm0, dword ptr [rbp+50h+angles+8]
    vmovss  dword ptr [r14+178C8h], xmm0
  }
  AnglesToAxis(&angles, &_R14->refdef.view.axis);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(_R14);
  if ( (_RBX->flags & 1) == 0 || !CG_IsRemoteTurret(_RBX) )
  {
    _RBX = DVARFLT_cg_turretKillCamFov;
    if ( DVARFLT_cg_turretKillCamFov )
      goto LABEL_71;
    v82 = "cg_turretKillCamFov";
    goto LABEL_69;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 401, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  _RBX = DVARFLT_cg_turretRemoteKillCamFov;
  if ( !DVARFLT_cg_turretRemoteKillCamFov )
  {
    v82 = "cg_turretRemoteKillCamFov";
LABEL_69:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v82) )
      __debugbreak();
  }
LABEL_71:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm1, dword ptr [rbx+28h]; fov_x }
  CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
}

