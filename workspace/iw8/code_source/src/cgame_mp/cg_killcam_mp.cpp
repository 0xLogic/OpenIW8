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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  bool v4; 
  CgWeaponMap *v5; 
  const Weapon *Weapon; 
  float killcamOffset; 
  int killCamOffsetStartTime; 
  int time; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  double Float_Internal_DebugName; 
  float v16; 
  double v17; 
  __int64 skipEntity; 
  vec3_t outOrigin; 
  __int64 v20; 
  vec3_t end; 
  vec3_t up; 
  trace_t results; 

  v20 = -2i64;
  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 30, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 31, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamLastEntityNum != 2047 )
  {
    if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 40, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
      __debugbreak();
    Entity = CG_GetEntity((const LocalClientNum_t)v1, LocalClientGlobals->killCamLastEntityNum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v4 = Entity->prevState.pos.trType == TR_STATIONARY && Entity->nextState.lerp.pos.trType == TR_STATIONARY;
    if ( Entity->nextState.eType != ET_MISSILE || !v4 || !LocalClientGlobals->killCamFirstFrameRan )
      goto LABEL_54;
    if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v5 = CgWeaponMap::ms_instance[v1];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v5, Entity->nextState.weaponHandle);
    if ( BG_GetWeaponClass(Weapon, 0) != WEAPCLASS_GRENADE )
      goto LABEL_54;
    LODWORD(Weapon) = Weapon->weaponIdx;
    if ( (unsigned int)Weapon > bg_lastParsedWeaponIndex )
    {
      LODWORD(skipEntity) = (_DWORD)Weapon;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", skipEntity, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    Weapon = (const Weapon *)(unsigned __int16)Weapon;
    if ( !bg_weaponDefs[(unsigned __int16)Weapon] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    killcamOffset = bg_weaponDefs[(_QWORD)Weapon]->killcamOffset;
    if ( killcamOffset > 0.0 && LocalClientGlobals->killCamFirstFrameRan )
    {
      killCamOffsetStartTime = LocalClientGlobals->killCamOffsetStartTime;
      time = LocalClientGlobals->time;
      if ( !killCamOffsetStartTime )
      {
        LocalClientGlobals->killCamOffsetStartTime = time;
        killCamOffsetStartTime = time;
      }
      v10 = (float)(time - killCamOffsetStartTime) * 0.001;
      v11 = DVARFLT_cg_killcamOffsetBlendDelayTime;
      if ( !DVARFLT_cg_killcamOffsetBlendDelayTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamOffsetBlendDelayTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v10 >= v11->current.value )
      {
        AngleVectors(&Entity->pose.angles, NULL, NULL, &up);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        end.v[0] = (float)(killcamOffset * up.v[0]) + outOrigin.v[0];
        end.v[1] = (float)(killcamOffset * up.v[1]) + outOrigin.v[1];
        end.v[2] = (float)(killcamOffset * up.v[2]) + outOrigin.v[2];
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v1 + 2), &results, &outOrigin, &end, &bounds_origin, Entity->nextState.number, 1, 33636369, 0, NULL, All);
        if ( !results.allsolid )
        {
          if ( results.fraction >= 1.0 )
          {
            v14 = end.v[2];
            v13 = end.v[1];
            v12 = end.v[0];
          }
          else
          {
            v12 = (float)((float)(end.v[0] - outOrigin.v[0]) * results.fraction) + outOrigin.v[0];
            end.v[0] = v12;
            v13 = (float)((float)(end.v[1] - outOrigin.v[1]) * results.fraction) + outOrigin.v[1];
            end.v[1] = v13;
            v14 = (float)((float)(end.v[2] - outOrigin.v[2]) * results.fraction) + outOrigin.v[2];
            end.v[2] = v14;
          }
          if ( results.fraction >= 1.0 || (float)((float)((float)((float)(v13 - outOrigin.v[1]) * (float)(v13 - outOrigin.v[1])) + (float)((float)(v12 - outOrigin.v[0]) * (float)(v12 - outOrigin.v[0]))) + (float)((float)(v14 - outOrigin.v[2]) * (float)(v14 - outOrigin.v[2]))) >= (float)((float)((float)((float)(LocalClientGlobals->killCamEntityOrg.v[1] - outOrigin.v[1]) * (float)(LocalClientGlobals->killCamEntityOrg.v[1] - outOrigin.v[1])) + (float)((float)(LocalClientGlobals->killCamEntityOrg.v[0] - outOrigin.v[0]) * (float)(LocalClientGlobals->killCamEntityOrg.v[0] - outOrigin.v[0]))) + (float)((float)(LocalClientGlobals->killCamEntityOrg.v[2] - outOrigin.v[2]) * (float)(LocalClientGlobals->killCamEntityOrg.v[2] - outOrigin.v[2]))) )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_killcamOffsetBlendSpeed, "cg_killcamOffsetBlendSpeed");
            v16 = *(float *)&Float_Internal_DebugName * (float)((float)LocalClientGlobals->frametime * 0.001);
            v17 = I_fclamp(v16, 0.0, 1.0);
            LocalClientGlobals->killCamEntityOrg.v[0] = (float)((float)(end.v[0] - LocalClientGlobals->killCamEntityOrg.v[0]) * *(float *)&v17) + LocalClientGlobals->killCamEntityOrg.v[0];
            LocalClientGlobals->killCamEntityOrg.v[1] = (float)((float)(end.v[1] - LocalClientGlobals->killCamEntityOrg.v[1]) * *(float *)&v17) + LocalClientGlobals->killCamEntityOrg.v[1];
            LocalClientGlobals->killCamEntityOrg.v[2] = (float)((float)(end.v[2] - LocalClientGlobals->killCamEntityOrg.v[2]) * v16) + LocalClientGlobals->killCamEntityOrg.v[2];
          }
          else
          {
            LocalClientGlobals->killCamEntityOrg.v[0] = v12;
            LocalClientGlobals->killCamEntityOrg.v[1] = v13;
            LocalClientGlobals->killCamEntityOrg.v[2] = v14;
          }
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
    else
    {
LABEL_54:
      CG_GetPoseOrigin(&Entity->pose, &LocalClientGlobals->killCamEntityOrg);
    }
    LocalClientGlobals->killCamEntityAngles.v[0] = Entity->pose.angles.v[0];
    LocalClientGlobals->killCamEntityAngles.v[1] = Entity->pose.angles.v[1];
    LocalClientGlobals->killCamEntityAngles.v[2] = Entity->pose.angles.v[2];
  }
}

/*
==============
CG_KillCam_CacheKillCamLookAtEntityOrigin
==============
*/
void CG_KillCam_CacheKillCamLookAtEntityOrigin(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int killCamLookAtEntity; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  unsigned __int8 eType; 
  float *v; 
  const dvar_t *v8; 
  float value; 
  char *p_z; 
  __int16 v11; 
  CgStatic *v12; 
  __int64 v13; 
  cg_t *v14; 
  characterInfo_t *CharacterInfo; 
  float v16; 
  float v17; 
  __int64 v18; 
  __int64 v19; 
  vec3_t up; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 121, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  killCamLookAtEntity = LocalClientGlobals->killCamLookAtEntity;
  if ( killCamLookAtEntity != 2047 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v1, killCamLookAtEntity);
    p_pose = &Entity->pose;
    if ( (Entity->flags & 1) != 0 )
    {
      eType = Entity->pose.eType;
      if ( eType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( centTarget->pose.eType ) == ( ET_PLAYER )", "%s == %s\n\t%i, %i", "centTarget->pose.eType", "ET_PLAYER", eType, 1) )
        __debugbreak();
      v = LocalClientGlobals->killCamLookAt.v;
      CG_GetPoseOrigin(p_pose, &LocalClientGlobals->killCamLookAt);
      v8 = DVARFLT_cg_killcamEntityLookAtOffset;
      if ( !DVARFLT_cg_killcamEntityLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamEntityLookAtOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      value = v8->current.value;
      p_z = (char *)&p_pose[1].prevOrigin.prevOrigin.xyz.z;
      if ( !p_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v11 = *((_WORD *)p_z + 4);
      if ( ((v11 - 1) & 0xFFED) != 0 || v11 == 3 )
      {
        LocalClientGlobals->killCamLookAt.v[2] = value + LocalClientGlobals->killCamLookAt.v[2];
      }
      else
      {
        if ( !(_BYTE)CgStatic::ms_allocatedType )
        {
          LODWORD(v19) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v19) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
        {
          *(float *)&v19 = CgStatic::ms_allocatedCount;
          LODWORD(v18) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( !CgStatic::ms_cgameStaticsArray[v1] )
        {
          LODWORD(v19) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v19) )
            __debugbreak();
        }
        v12 = CgStatic::ms_cgameStaticsArray[v1];
        v13 = LocalClientGlobals->killCamLookAtEntity;
        v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12->m_localClientNum);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v14->IsMP(v14) )
        {
          if ( (unsigned int)v13 >= v14[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v19) = v14[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v18) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v14[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v13);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v14, v13);
        }
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        AngleVectors(&CharacterInfo->playerAnglesWorld, NULL, NULL, &up);
        v16 = value * up.v[1];
        *v = (float)(value * up.v[0]) + *v;
        v17 = value * up.v[2];
        v[1] = v16 + v[1];
        v[2] = v17 + v[2];
      }
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
  float v4; 
  float v5; 
  float v6; 
  float v8; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v19; 
  float v20; 
  float v21; 

  v4 = right->v[1];
  v5 = right->v[0];
  v6 = right->v[2];
  v8 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 414, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", v5, v4, v6, fsqrt(v8)) )
    __debugbreak();
  v13 = LODWORD(lookAt->v[0]);
  v12 = lookAt->v[0] - origin->v[0];
  axis->m[0].v[0] = v12;
  v14 = lookAt->v[1] - origin->v[1];
  axis->m[0].v[1] = v14;
  v15 = lookAt->v[2] - origin->v[2];
  *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v14 * v14)) + (float)(v15 * v15));
  _XMM1 = v13;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
  }
  axis->m[0].v[0] = v12 * (float)(1.0 / *(float *)&_XMM0);
  axis->m[0].v[2] = v15 * (float)(1.0 / *(float *)&_XMM0);
  axis->m[0].v[1] = v14 * (float)(1.0 / *(float *)&_XMM0);
  axis->m[1].v[0] = COERCE_FLOAT(LODWORD(right->v[0]) ^ _xmm);
  axis->m[1].v[1] = COERCE_FLOAT(LODWORD(right->v[1]) ^ _xmm);
  axis->m[1].v[2] = COERCE_FLOAT(LODWORD(right->v[2]) ^ _xmm);
  Vec3Cross(axis->m, &axis->m[1], &axis->m[2]);
  v19 = axis->m[2].v[0];
  v20 = axis->m[2].v[2];
  v21 = (float)((float)(v19 * v19) + (float)(axis->m[2].v[1] * axis->m[2].v[1])) + (float)(v20 * v20);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 420, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( axis[2] ) )", "(%g, %g, %g) len %g", v19, axis->m[2].v[1], v20, fsqrt(v21)) )
    __debugbreak();
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
char CG_KillCam_KillcamCameraTrace(LocalClientNum_t localClientNum, const vec3_t *lookAt, const vec3_t *originalBombOrigin, const vec3_t *bombAngles, const vec3_t *desiredCamPos, int passEntIndex, KillCamEntityRestState killCamEntityRestState, vec3_t *campos)
{
  const dvar_t *v8; 
  const vec3_t *v9; 
  vec3_t *v10; 
  __int64 v12; 
  bool enabled; 
  Physics_WorldId v14; 
  float v15; 
  int v16; 
  float v17; 
  int v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  const vec3_t *v22; 
  __int64 hitId; 
  CgEntitySystem *v24; 
  __int64 v25; 
  __int64 v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v34; 
  float v35; 
  float v36; 
  const vec4_t *v37; 
  float v38; 
  float v39; 
  const vec3_t *v40; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  int v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  const vec3_t *v53; 
  float fraction; 
  float v55; 
  float v56; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  bool v59; 
  trace_t results; 
  vec3_t start; 
  vec3_t lookAta; 
  float v64; 
  float v65; 
  float v66; 
  vec3_t v67; 

  v8 = DCONST_DVARBOOL_cg_killcamdebug;
  v9 = originalBombOrigin;
  v10 = campos;
  *(_QWORD *)lookAta.v = lookAt;
  v12 = localClientNum;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  enabled = v8->current.enabled;
  v14 = 3 * v12 + 2;
  v15 = v9->v[1];
  v16 = passEntIndex;
  start.v[0] = v9->v[0];
  v17 = v9->v[2];
  *v10 = *desiredCamPos;
  start.v[1] = v15;
  start.v[2] = v17;
  PhysicsQuery_LegacyTrace(v14, &results, &start, v10, &KILLCAM_BOUNDS, v16, 0, 8390785, 0, NULL, All);
  v59 = start.v[2] > lookAt->v[2];
  if ( results.startsolid && start.v[2] > lookAt->v[2] && killCamEntityRestState != KC_ENT_STUCK_WALL )
  {
    CG_KillCam_TraceOutFromSolidAndBack((LocalClientNum_t)v12, &results, lookAt, &start, &passEntIndex, v10);
    v16 = passEntIndex;
  }
  v18 = 0;
  if ( results.startsolid )
  {
    v19 = v12;
    while ( 1 )
    {
      if ( enabled )
      {
        v67 = start;
        if ( results.fraction >= 1.0 )
        {
          v22 = v10;
        }
        else
        {
          v20 = (float)(v10->v[1] - start.v[1]) * results.fraction;
          v21 = v10->v[2] - start.v[2];
          v64 = (float)((float)(v10->v[0] - start.v[0]) * results.fraction) + start.v[0];
          v65 = v20 + start.v[1];
          v66 = (float)(v21 * results.fraction) + start.v[2];
          v22 = (const vec3_t *)&v64;
        }
        CG_DebugLine(&start, v22, &colorMdRed, 0, 3000);
      }
      if ( results.hitType == TRACE_HITTYPE_ENTITY )
      {
        hitId = (int)results.hitId;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(skipChildren) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", skipChildren) )
            __debugbreak();
        }
        if ( (unsigned int)v12 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(skipChildren) = CgEntitySystem::ms_allocatedCount;
          LODWORD(skipEntity) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v19] )
        {
          LODWORD(skipChildren) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", skipChildren) )
            __debugbreak();
        }
        v24 = CgEntitySystem::ms_entitySystemArray[v19];
        if ( (unsigned int)hitId >= 0x800 )
        {
          LODWORD(skipChildren) = 2048;
          LODWORD(skipEntity) = hitId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
        v25 = hitId;
        v14 = 3 * v12 + 2;
        v26 = (__int64)&v24->m_entities[v25];
        v19 = v12;
        if ( v26 )
        {
          if ( *(_WORD *)(v26 + 408) == 1 )
            v16 = results.hitId;
          passEntIndex = v16;
        }
      }
      else
      {
        v26 = 0i64;
      }
      if ( results.fraction == 1.0 || v18 < 2 )
      {
        start.v[2] = start.v[2] + 21.0;
      }
      else
      {
        v27 = start.v[2] - v10->v[2];
        v28 = start.v[0] - v10->v[0];
        v30 = LODWORD(start.v[1]);
        v29 = start.v[1] - v10->v[1];
        *(float *)&v30 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v27 * v27));
        _XMM1 = v30;
        __asm
        {
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm0, xmm1, xmm12, xmm0
        }
        v34 = v28 * (float)(1.0 / *(float *)&_XMM0);
        v35 = v27 * (float)(1.0 / *(float *)&_XMM0);
        v36 = v29 * (float)(1.0 / *(float *)&_XMM0);
        if ( v26 && *(_WORD *)(v26 + 408) == 1 )
        {
          LODWORD(v34) ^= _xmm;
          LODWORD(v36) = COERCE_UNSIGNED_INT(v29 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
          LODWORD(v35) ^= _xmm;
        }
        start.v[1] = start.v[1] + (float)(v36 * 41.0);
        start.v[2] = (float)(v35 * 41.0) + start.v[2];
        start.v[0] = start.v[0] + (float)(v34 * 41.0);
      }
      PhysicsQuery_LegacyTrace(v14, &results, &start, v10, &KILLCAM_BOUNDS, v16, 0, 8390785, 0, NULL, All);
      if ( enabled )
      {
        v37 = &colorLtCyan;
        switch ( v18 % 4 )
        {
          case 1:
            v37 = &colorLtOrange;
            break;
          case 2:
            v37 = &colorDkCyan;
            break;
          case 3:
            v37 = &colorDkGrey;
            break;
        }
        CG_DebugLine(&v67, &start, v37, 0, 3000);
      }
      if ( ++v18 >= 4 )
        break;
      if ( !results.startsolid )
        goto LABEL_55;
    }
    if ( results.startsolid && !v59 && killCamEntityRestState != KC_ENT_STUCK_WALL )
    {
      CG_KillCam_TraceOutFromSolidAndBack((LocalClientNum_t)v12, &results, *(const vec3_t **)lookAta.v, &start, &passEntIndex, v10);
      v16 = passEntIndex;
    }
LABEL_55:
    v9 = originalBombOrigin;
  }
  if ( enabled )
  {
    if ( results.fraction >= 1.0 )
    {
      v40 = v10;
    }
    else
    {
      v38 = (float)(v10->v[1] - start.v[1]) * results.fraction;
      v39 = v10->v[2] - start.v[2];
      v64 = (float)((float)(v10->v[0] - start.v[0]) * results.fraction) + start.v[0];
      v65 = v38 + start.v[1];
      v66 = (float)(v39 * results.fraction) + start.v[2];
      v40 = (const vec3_t *)&v64;
    }
    CG_DebugLine(&start, v40, &colorWhite, 0, 3000);
  }
  if ( results.startsolid )
  {
    v10->v[0] = v9->v[0];
    v10->v[1] = v9->v[1];
    v10->v[2] = v9->v[2];
    if ( enabled )
      CG_DebugSphere(v10, 1.0, &colorRed, 0, 3000);
    return 0;
  }
  else
  {
    if ( results.fraction < 1.0 )
    {
      v42 = v10->v[0];
      v43 = v10->v[1];
      v44 = v10->v[2];
      v45 = (float)((float)(v10->v[0] - start.v[0]) * results.fraction) + start.v[0];
      v46 = (float)((float)(v43 - start.v[1]) * results.fraction) + start.v[1];
      v47 = (float)((float)(v44 - start.v[2]) * results.fraction) + start.v[2];
      lookAta.v[2] = v47;
      lookAta.v[0] = v45;
      lookAta.v[1] = v46;
      v48 = 0;
      while ( 1 )
      {
        v49 = 0.1 - (float)((float)((float)((float)(v43 - v46) * results.normal.v[1]) + (float)((float)(v42 - v45) * results.normal.v[0])) + (float)((float)(v44 - v47) * results.normal.v[2]));
        v50 = (float)(v49 * results.normal.v[1]) + v43;
        v10->v[0] = (float)(v49 * results.normal.v[0]) + v42;
        v10->v[2] = (float)(v49 * results.normal.v[2]) + v44;
        v10->v[1] = v50;
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v12 + 2), &results, &lookAta, v10, &KILLCAM_BOUNDS, v16, 0, 8390785, 0, NULL, All);
        if ( enabled )
        {
          if ( results.fraction >= 1.0 )
          {
            v53 = v10;
          }
          else
          {
            v51 = (float)(v10->v[1] - lookAta.v[1]) * results.fraction;
            v52 = v10->v[2] - lookAta.v[2];
            v64 = (float)((float)(v10->v[0] - lookAta.v[0]) * results.fraction) + lookAta.v[0];
            v65 = v51 + lookAta.v[1];
            v66 = (float)(v52 * results.fraction) + lookAta.v[2];
            v53 = (const vec3_t *)&v64;
          }
          CG_DebugLine(&lookAta, v53, &colorGreen, 0, 3000);
        }
        fraction = results.fraction;
        v42 = v10->v[0];
        if ( results.fraction == 1.0 )
          break;
        v43 = v10->v[1];
        v44 = v10->v[2];
        v45 = lookAta.v[0] + (float)((float)(v42 - lookAta.v[0]) * results.fraction);
        v46 = lookAta.v[1] + (float)((float)(v43 - lookAta.v[1]) * results.fraction);
        ++v48;
        v47 = lookAta.v[2] + (float)((float)(v44 - lookAta.v[2]) * results.fraction);
        lookAta.v[2] = v47;
        lookAta.v[0] = v45;
        lookAta.v[1] = v46;
        if ( v48 >= 3 )
          goto LABEL_76;
      }
      v47 = lookAta.v[2];
      v46 = lookAta.v[1];
      v45 = lookAta.v[0];
LABEL_76:
      v55 = v10->v[1] - v46;
      v56 = v10->v[2];
      v10->v[0] = (float)((float)(v42 - v45) * results.fraction) + v45;
      v10->v[1] = (float)(v55 * fraction) + v46;
      v10->v[2] = (float)((float)(v56 - v47) * fraction) + v47;
    }
    if ( enabled )
      CG_DebugSphere(v10, 1.0, &colorWhiteFaded, 0, 3000);
    return 1;
  }
}

/*
==============
CG_KillCam_KillcamCameraTrace_Legacy
==============
*/
void CG_KillCam_KillcamCameraTrace_Legacy(LocalClientNum_t localClientNum, const vec3_t *originalBombOrigin, const vec3_t *bombAngles, const vec3_t *desiredCamPos, int passEntIndex, KillCamEntityRestState killCamEntityRestState, vec3_t *campos)
{
  float v7; 
  __int32 v8; 
  float v9; 
  float v10; 
  int v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  vec3_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  vec3_t *v20; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  const dvar_t *v31; 
  float v32; 
  float v33; 
  vec3_t *v34; 
  float fraction; 
  float v36; 
  float v37; 
  vec3_t start; 
  vec3_t v39; 
  int v40[4]; 
  vec3_t v41; 
  trace_t results; 

  v7 = desiredCamPos->v[0];
  v8 = 3 * localClientNum + 2;
  v9 = originalBombOrigin->v[1];
  start.v[0] = originalBombOrigin->v[0];
  v10 = originalBombOrigin->v[2];
  campos->v[0] = v7;
  *(_QWORD *)&campos->y = *(_QWORD *)&desiredCamPos->y;
  start.v[1] = v9;
  start.v[2] = v10;
  PhysicsQuery_LegacyTrace((Physics_WorldId)v8, &results, &start, campos, &KILLCAM_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
  v11 = 0;
  if ( results.startsolid )
  {
    do
    {
      v12 = DCONST_DVARBOOL_cg_killcamdebug;
      if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
      {
        v41 = start;
        if ( results.fraction >= 1.0 )
        {
          v15 = campos;
        }
        else
        {
          v13 = (float)(campos->v[1] - start.v[1]) * results.fraction;
          v14 = campos->v[2] - start.v[2];
          v39.v[0] = (float)((float)(campos->v[0] - start.v[0]) * results.fraction) + start.v[0];
          v39.v[1] = v13 + start.v[1];
          v39.v[2] = (float)(v14 * results.fraction) + start.v[2];
          v15 = &v39;
        }
        CG_DebugLine(&start, v15, &colorDkGrey, 0, 3000);
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v8, &results, &start, campos, &THIN_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
      if ( results.fraction == 1.0 )
      {
        start.v[2] = start.v[2] + 21.0;
      }
      else
      {
        start.v[0] = (float)(21.0 * results.normal.v[0]) + start.v[0];
        start.v[1] = (float)(21.0 * results.normal.v[1]) + start.v[1];
        start.v[2] = (float)(21.0 * results.normal.v[2]) + start.v[2];
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v8, &results, &start, campos, &KILLCAM_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
      v16 = DCONST_DVARBOOL_cg_killcamdebug;
      if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled )
        CG_DebugLine(&v41, &start, &colorLtCyan, 0, 3000);
      ++v11;
    }
    while ( v11 < 3 && results.startsolid );
  }
  v17 = DCONST_DVARBOOL_cg_killcamdebug;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    if ( results.fraction >= 1.0 )
    {
      v20 = campos;
    }
    else
    {
      v18 = (float)(campos->v[1] - start.v[1]) * results.fraction;
      v19 = campos->v[2] - start.v[2];
      v39.v[0] = (float)((float)(campos->v[0] - start.v[0]) * results.fraction) + start.v[0];
      v39.v[1] = v18 + start.v[1];
      v39.v[2] = (float)(v19 * results.fraction) + start.v[2];
      v20 = &v39;
    }
    CG_DebugLine(&start, v20, &colorWhite, 0, 3000);
  }
  if ( results.startsolid )
  {
    v21 = start.v[1];
    campos->v[0] = start.v[0];
    campos->v[2] = start.v[2];
    campos->v[1] = v21;
  }
  else if ( results.fraction < 1.0 )
  {
    v22 = 0;
    v23 = campos->v[0];
    v24 = (float)((float)(campos->v[0] - start.v[0]) * results.fraction) + start.v[0];
    v25 = campos->v[1];
    v26 = (float)((float)(v25 - start.v[1]) * results.fraction) + start.v[1];
    v27 = campos->v[2];
    v28 = (float)((float)(v27 - start.v[2]) * results.fraction) + start.v[2];
    v39.v[2] = v28;
    v39.v[0] = v24;
    v39.v[1] = v26;
    while ( 1 )
    {
      v29 = 0.1 - (float)((float)((float)((float)(v23 - v24) * results.normal.v[0]) + (float)((float)(v25 - v26) * results.normal.v[1])) + (float)((float)(v27 - v28) * results.normal.v[2]));
      v30 = (float)(v29 * results.normal.v[1]) + v25;
      campos->v[0] = (float)(v29 * results.normal.v[0]) + v23;
      campos->v[2] = (float)(v29 * results.normal.v[2]) + v27;
      campos->v[1] = v30;
      PhysicsQuery_LegacyTrace((Physics_WorldId)v8, &results, &v39, campos, &KILLCAM_BOUNDS, passEntIndex, 0, 2065, 0, NULL, All);
      v31 = DCONST_DVARBOOL_cg_killcamdebug;
      if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
      {
        if ( results.fraction >= 1.0 )
        {
          v34 = campos;
        }
        else
        {
          v32 = (float)(campos->v[1] - v39.v[1]) * results.fraction;
          v33 = campos->v[2] - v39.v[2];
          *(float *)v40 = (float)((float)(campos->v[0] - v39.v[0]) * results.fraction) + v39.v[0];
          *(float *)&v40[1] = v32 + v39.v[1];
          *(float *)&v40[2] = (float)(v33 * results.fraction) + v39.v[2];
          v34 = (vec3_t *)v40;
        }
        CG_DebugLine(&v39, v34, &colorMdGrey, 0, 3000);
      }
      fraction = results.fraction;
      v23 = campos->v[0];
      if ( results.fraction == 1.0 )
        break;
      v25 = campos->v[1];
      v27 = campos->v[2];
      v24 = v39.v[0] + (float)((float)(v23 - v39.v[0]) * results.fraction);
      v26 = v39.v[1] + (float)((float)(v25 - v39.v[1]) * results.fraction);
      ++v22;
      v28 = v39.v[2] + (float)((float)(v27 - v39.v[2]) * results.fraction);
      v39.v[2] = v28;
      v39.v[0] = v24;
      v39.v[1] = v26;
      if ( v22 >= 3 )
        goto LABEL_44;
    }
    v28 = v39.v[2];
    v26 = v39.v[1];
    v24 = v39.v[0];
LABEL_44:
    v36 = campos->v[1] - v26;
    v37 = campos->v[2];
    campos->v[0] = (float)((float)(v23 - v24) * results.fraction) + v24;
    campos->v[1] = (float)(v36 * fraction) + v26;
    campos->v[2] = (float)((float)(v37 - v28) * fraction) + v28;
  }
}

/*
==============
CG_KillCam_LookAtBothPoints
==============
*/
float CG_KillCam_LookAtBothPoints(const vec3_t *point1, const vec3_t *point2, const vec3_t *campos, tmat33_t<vec3_t> *lookaxis)
{
  __int128 v4; 
  __int128 v5; 
  __m128 v6; 
  __m128 v7; 
  float v8; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __m128 v16; 
  __m128 v17; 
  float v18; 
  float v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v25; 
  __m128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __m128 v30; 
  __int128 v34; 
  __int128 v35; 
  __m128 v36; 
  __m128 v37; 
  float v38; 
  float v39; 
  float v40; 
  float v42; 
  __int128 v43; 
  float v44; 
  float v45; 
  float v49; 
  __int128 v50; 
  __m128 v51; 
  float v52; 
  __int128 v53; 
  __int128 v54; 
  __m128 v55; 
  __m128 v56; 
  __int128 v57; 
  __int128 v58; 
  __m128 v59; 
  __int128 v60; 
  __m128 v61; 
  float v65; 
  vec3_t *v66; 
  __int128 v67; 
  __int128 v68; 
  float v69; 
  __int128 v70; 
  float v74; 
  float v75; 
  float v76; 
  float v78; 
  float v79; 
  vec3_t dst; 
  vec3_t point; 
  vec3_t dir; 

  v5 = LODWORD(point1->v[0]);
  *(float *)&v5 = point1->v[0] - campos->v[0];
  v4 = v5;
  v7 = (__m128)LODWORD(point1->v[1]);
  v7.m128_f32[0] = point1->v[1] - campos->v[1];
  v6 = v7;
  v8 = point1->v[2] - campos->v[2];
  v7.m128_f32[0] = fsqrt((float)((float)(v7.m128_f32[0] * v7.m128_f32[0]) + (float)(*(float *)&v4 * *(float *)&v4)) + (float)(v8 * v8));
  _XMM14 = v7;
  __asm
  {
    vcmpless xmm0, xmm14, xmm15
    vblendvps xmm0, xmm14, xmm10, xmm0
  }
  v13 = v4;
  *(float *)&v13 = *(float *)&v4 * (float)(1.0 / *(float *)&_XMM0);
  v12 = v13;
  v15 = LODWORD(point2->v[0]);
  *(float *)&v15 = point2->v[0] - campos->v[0];
  v14 = v15;
  v17 = v6;
  v17.m128_f32[0] = v6.m128_f32[0] * (float)(1.0 / *(float *)&_XMM0);
  v16 = v17;
  v18 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v19 = point2->v[2] - campos->v[2];
  v21 = (__m128)LODWORD(point2->v[1]);
  v21.m128_f32[0] = point2->v[1] - campos->v[1];
  v20 = v21;
  v21.m128_f32[0] = fsqrt((float)((float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(*(float *)&v14 * *(float *)&v14)) + (float)(v19 * v19));
  _XMM1 = v21;
  __asm
  {
    vcmpless xmm0, xmm1, xmm15
    vblendvps xmm0, xmm1, xmm10, xmm0
  }
  _XMM1.m128_f32[0] = 1.0 / *(float *)&_XMM0;
  v25 = v20;
  *(float *)&_XMM0 = v20.m128_f32[0] * (float)(1.0 / *(float *)&_XMM0);
  v25.m128_f32[0] = *(float *)&_XMM0 + v16.m128_f32[0];
  v26 = v25;
  v28 = v14;
  *(float *)&v28 = *(float *)&v14 * _XMM1.m128_f32[0];
  v27 = v28;
  v79 = *(float *)&_XMM0;
  v78 = v19 * _XMM1.m128_f32[0];
  *(float *)&v28 = (float)(*(float *)&v14 * _XMM1.m128_f32[0]) + *(float *)&v12;
  v29 = v28;
  v30 = v26;
  v30.m128_f32[0] = fsqrt((float)((float)((float)(v26.m128_f32[0] * v26.m128_f32[0]) + (float)(*(float *)&v29 * *(float *)&v29)) + (float)((float)(v78 + v18) * (float)(v78 + v18))) * 0.25);
  _XMM3 = v30;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  v34 = v29;
  *(float *)&v34 = (float)(*(float *)&v29 * 0.5) * (float)(1.0 / *(float *)&_XMM0);
  v35 = v34;
  v36 = v26;
  v36.m128_f32[0] = (float)(v26.m128_f32[0] * 0.5) * (float)(1.0 / *(float *)&_XMM0);
  v37 = v36;
  v38 = (float)((float)(1.0 / *(float *)&_XMM0) * (float)((float)(v19 * _XMM1.m128_f32[0]) + v18)) * 0.5;
  v40 = (float)((float)(v36.m128_f32[0] * v16.m128_f32[0]) + (float)(*(float *)&v35 * *(float *)&v12)) + (float)(v38 * v18);
  v39 = v40;
  point.v[0] = *(float *)&v12;
  point.v[1] = v16.m128_f32[0];
  point.v[2] = v18;
  dst.v[0] = *(float *)&v35;
  dst.v[1] = v37.m128_f32[0];
  dst.v[2] = v38;
  if ( v40 < 0.98480779 )
  {
    if ( v40 >= 0.86602539 )
    {
      v42 = (float)(v16.m128_f32[0] * v78) - (float)(v18 * v79);
      v43 = v27;
      v44 = (float)(*(float *)&v27 * v18) - (float)(*(float *)&v12 * v78);
      v45 = (float)(*(float *)&v12 * v79) - (float)(*(float *)&v27 * v16.m128_f32[0]);
      *(float *)&v43 = fsqrt((float)((float)(v44 * v44) + (float)(v42 * v42)) + (float)(v45 * v45));
      _XMM1 = v43;
      __asm
      {
        vcmpless xmm0, xmm1, xmm15
        vblendvps xmm0, xmm1, xmm10, xmm0
      }
      dir.v[0] = v42 * (float)(1.0 / *(float *)&_XMM0);
      dir.v[2] = v45 * (float)(1.0 / *(float *)&_XMM0);
      dir.v[1] = v44 * (float)(1.0 / *(float *)&_XMM0);
      RotatePointAroundVector(&dst, &dir, &point, 10.0);
      v49 = (float)(v39 - 0.98480779) * -8.4187555;
      *(float *)&v12 = point.v[0];
      v16.m128_i32[0] = LODWORD(point.v[1]);
      v18 = point.v[2];
      v50 = LODWORD(dst.v[0]);
      *(float *)&v50 = dst.v[0] + (float)((float)(point.v[0] - dst.v[0]) * v49);
      v35 = v50;
      v51 = (__m128)LODWORD(dst.v[1]);
      v51.m128_f32[0] = dst.v[1] + (float)((float)(point.v[1] - dst.v[1]) * v49);
      v37 = v51;
      v38 = dst.v[2] + (float)((float)(point.v[2] - dst.v[2]) * v49);
    }
    else
    {
      v35 = v12;
      v37 = v16;
      v38 = v18;
    }
    dst.v[2] = v38;
    dst.v[1] = v37.m128_f32[0];
    dst.v[0] = *(float *)&v35;
  }
  if ( v38 < -0.94999999 )
  {
    if ( v38 >= -0.98000002 )
    {
      v52 = (float)(v38 - -0.98000002) * 33.333298;
      v54 = v35;
      *(float *)&v54 = *(float *)&v35 - *(float *)&v12;
      v53 = v54;
      v56 = v37;
      v56.m128_f32[0] = v37.m128_f32[0] - v16.m128_f32[0];
      v55 = v56;
      v58 = v53;
      *(float *)&v58 = *(float *)&v53 * v52;
      v57 = v58;
      v59 = v55;
      v59.m128_f32[0] = (float)(v55.m128_f32[0] * v52) + v16.m128_f32[0];
      v37 = v59;
      v38 = (float)((float)(v38 - v18) * v52) + v18;
      v60 = v57;
      *(float *)&v60 = *(float *)&v57 + *(float *)&v12;
      v35 = v60;
      dst.v[2] = v38;
      dst.v[0] = *(float *)&v57 + *(float *)&v12;
      dst.v[1] = v37.m128_f32[0];
    }
    else
    {
      dst = point;
      v35 = LODWORD(dst.v[0]);
      v38 = point.v[2];
      v37 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)point.v, (__m128)*(unsigned __int64 *)point.v, 85);
    }
  }
  v61 = v37;
  v61.m128_f32[0] = fsqrt((float)((float)(v37.m128_f32[0] * v37.m128_f32[0]) + (float)(*(float *)&v35 * *(float *)&v35)) + (float)(v38 * v38));
  _XMM3 = v61;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  lookaxis->m[0].v[2] = v38 * (float)(1.0 / *(float *)&_XMM0);
  LODWORD(v65) = COERCE_UNSIGNED_INT(v37.m128_f32[0] * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
  v66 = &lookaxis->m[1];
  lookaxis->m[0].v[1] = v37.m128_f32[0] * (float)(1.0 / *(float *)&_XMM0);
  v68 = v35;
  *(float *)&v68 = *(float *)&v35 * (float)(1.0 / *(float *)&_XMM0);
  v67 = v68;
  lookaxis->m[0].v[0] = *(float *)&v68;
  lookaxis->m[1].v[0] = v65;
  lookaxis->m[1].v[1] = *(float *)&v68;
  lookaxis->m[1].v[2] = 0.0;
  v69 = 0.0;
  if ( v65 == 0.0 && lookaxis->m[1].v[1] == 0.0 )
  {
    v66->v[0] = 1.0;
    v67 = LODWORD(lookaxis->m[1].v[1]);
    v69 = lookaxis->m[1].v[2];
    v65 = FLOAT_1_0;
  }
  v70 = v67;
  *(float *)&v70 = fsqrt((float)((float)(*(float *)&v67 * *(float *)&v67) + (float)(v65 * v65)) + (float)(v69 * v69));
  _XMM3 = v70;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  v66->v[0] = (float)(1.0 / *(float *)&_XMM0) * v65;
  lookaxis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * lookaxis->m[1].v[1];
  lookaxis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * lookaxis->m[1].v[2];
  Vec3Cross(lookaxis->m, v66, &lookaxis->m[2]);
  v74 = lookaxis->m[2].v[0];
  v75 = lookaxis->m[2].v[2];
  v76 = (float)((float)(v74 * v74) + (float)(lookaxis->m[2].v[1] * lookaxis->m[2].v[1])) + (float)(v75 * v75);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v76 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 239, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( lookaxis[2] ) )", "(%g, %g, %g) len %g", v74, lookaxis->m[2].v[1], v75, fsqrt(v76)) )
    __debugbreak();
  return _XMM14.m128_f32[0];
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
  const dvar_t *v6; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v22; 
  float v23; 
  float v24; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  bool v33; 
  centity_t *Entity; 
  float fraction; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  vec3_t *v41; 
  float v42; 
  bool enabled; 
  vec3_t center; 
  vec3_t end; 
  vec3_t start; 
  int v47[4]; 
  vec3_t v48; 

  v6 = DCONST_DVARBOOL_cg_killcamdebug;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v11 = bombOrigin->v[0];
  v12 = bombOrigin->v[0] - campos->v[0];
  v13 = LODWORD(bombOrigin->v[1]);
  v15 = v13;
  v14 = *(float *)&v13 - campos->v[1];
  v16 = bombOrigin->v[2];
  v17 = v16 - campos->v[2];
  *(float *)&v15 = fsqrt((float)((float)(v14 * v14) + (float)(v12 * v12)) + (float)(v17 * v17));
  _XMM3 = v15;
  __asm
  {
    vmaxss  xmm7, xmm3, cs:__real@42700000
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  v22 = v12 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v14 * (float)(1.0 / *(float *)&_XMM0);
  enabled = v6->current.enabled;
  v24 = v17 * (float)(1.0 / *(float *)&_XMM0);
  if ( v22 == 0.0 && v23 == 0.0 && (float)(v17 * (float)(1.0 / *(float *)&_XMM0)) == 0.0 )
  {
    v26 = lookAt->v[0] - v11;
    v28 = LODWORD(lookAt->v[1]);
    v27 = lookAt->v[1] - *(float *)&v13;
    v29 = lookAt->v[2] - v16;
    *(float *)&v28 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v29 * v29));
    _XMM1 = v28;
    __asm
    {
      vcmpless xmm0, xmm1, xmm11
      vblendvps xmm0, xmm1, xmm13, xmm0
    }
    v23 = v27 * (float)(1.0 / *(float *)&_XMM0);
    v24 = v29 * (float)(1.0 / *(float *)&_XMM0);
    v22 = v26 * (float)(1.0 / *(float *)&_XMM0);
  }
  v33 = trace->hitType == TRACE_HITTYPE_ENTITY;
  end.v[0] = (float)(v22 * *(float *)&_XMM7) + v11;
  end.v[2] = (float)(v24 * *(float *)&_XMM7) + v16;
  end.v[1] = (float)(v23 * *(float *)&_XMM7) + *(float *)&v13;
  if ( v33 )
  {
    Entity = CG_GetEntity(localClientNum, trace->hitId);
    if ( Entity )
    {
      if ( Entity->nextState.eType == ET_PLAYER )
        *passEntIndex = trace->hitId;
    }
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), trace, bombOrigin, &end, &KILLCAM_BOUNDS, *passEntIndex, 0, 8390785, 0, NULL, All);
  fraction = trace->fraction;
  v36 = bombOrigin->v[0];
  v37 = bombOrigin->v[1];
  v38 = bombOrigin->v[2];
  v39 = (float)((float)(end.v[0] - v36) * trace->fraction) + v36;
  v40 = (float)((float)(end.v[1] - v37) * trace->fraction) + v37;
  center.v[2] = (float)((float)(end.v[2] - v38) * trace->fraction) + v38;
  center.v[0] = v39;
  center.v[1] = v40;
  if ( enabled )
  {
    start.v[0] = v36;
    start.v[1] = v37;
    v48.v[0] = end.v[0];
    v48.v[1] = end.v[1];
    start.v[2] = v38 - 0.1;
    v48.v[2] = end.v[2] - 0.1;
    if ( fraction >= 1.0 )
    {
      v41 = &v48;
    }
    else
    {
      *(float *)&v47[2] = (float)((float)((float)(end.v[2] - 0.1) - (float)(v38 - 0.1)) * fraction) + (float)(v38 - 0.1);
      *(float *)v47 = v39;
      *(float *)&v47[1] = v40;
      v41 = (vec3_t *)v47;
    }
    CG_DebugLine(&start, v41, &colorBlue, 0, 3000);
    CG_DebugSphere(&center, 0.5, &colorBlue, 0, 3000);
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), trace, &center, bombOrigin, &KILLCAM_BOUNDS, *passEntIndex, 0, 8390785, 0, NULL, All);
  v42 = trace->fraction;
  campos->v[0] = (float)((float)(bombOrigin->v[0] - center.v[0]) * trace->fraction) + center.v[0];
  campos->v[1] = (float)((float)(bombOrigin->v[1] - center.v[1]) * v42) + center.v[1];
  campos->v[2] = (float)((float)(bombOrigin->v[2] - center.v[2]) * v42) + center.v[2];
  if ( enabled )
    CG_DebugSphere(campos, 0.5, &colorOrange, 0, 3000);
}

/*
==============
CG_KillCam_UpdateExplosiveKillCam
==============
*/

void __fastcall CG_KillCam_UpdateExplosiveKillCam(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType, float upDist, double backDist, float groundUp, float groundBack)
{
  const dvar_t *v9; 
  const dvar_t *v10; 
  bool enabled; 
  cg_t *LocalClientGlobals; 
  int killCamStoppedTime; 
  float killCamStoppedDecelTime; 
  char v15; 
  float v16; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  const vec4_t *v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v33; 
  __int128 v37; 
  __int128 v41; 
  __int128 v43; 
  __int128 v44; 
  float v45; 
  float v46; 
  float v47; 
  int v48; 
  __int128 v52; 
  float v56; 
  float v57; 
  __int128 v58; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  const dvar_t *v65; 
  bool v66; 
  KillCamEntityRestState killCamEntityRestState; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  __int128 v75; 
  float v79; 
  int killCamEntity; 
  char v81; 
  centity_t *Entity; 
  KillCamEntityRestState v83; 
  float v84; 
  float v85; 
  double Float_Internal_DebugName; 
  float v87; 
  double v88; 
  float v89; 
  float v90; 
  bool v91; 
  __int128 v92; 
  float v93; 
  float v94; 
  int frametime; 
  float v96; 
  __int128 v97; 
  float v98; 
  double v99; 
  __int128 v100; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  double v109; 
  float v110; 
  float v111; 
  vec3_t outOrg; 
  float v113; 
  float v114; 
  vec3_t outOrigin; 
  __int64 v116; 
  vec3_t center; 
  vec3_t origin; 
  vec3_t outLookAtPos; 
  vec3_t desiredCamPos; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  v116 = -2i64;
  _XMM14 = *(_OWORD *)&backDist;
  v113 = *(float *)&backDist;
  v114 = upDist;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_KillCam_UpdateExplosiveKillCam");
  v9 = DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy;
  if ( !DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_explosiveKillCamUseLegacy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    CG_KillCam_UpdateExplosiveKillCam_Legacy(localClientNum, killCamEntityType, upDist, *(float *)&backDist, 0.0, 0.0, groundUp, groundBack);
    goto LABEL_148;
  }
  v10 = DCONST_DVARBOOL_cg_killcamdebug;
  if ( !DCONST_DVARBOOL_cg_killcamdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_killcamdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1106, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1107, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  CG_KillCam_GetKillCamEntityOrgAngles(localClientNum, &origin, &angles);
  killCamStoppedTime = LocalClientGlobals->killCamStoppedTime;
  if ( killCamStoppedTime && killCamStoppedTime <= LocalClientGlobals->time && (killCamStoppedDecelTime = LocalClientGlobals->killCamStoppedDecelTime, killCamStoppedDecelTime > 0.0) )
  {
    v15 = 1;
    v16 = (float)(-0.5 / killCamStoppedDecelTime) * LocalClientGlobals->killCamStoppedVel.v[0];
    v17 = (float)(-0.5 / killCamStoppedDecelTime) * LocalClientGlobals->killCamStoppedVel.v[1];
    v18 = (float)(-0.5 / killCamStoppedDecelTime) * LocalClientGlobals->killCamStoppedVel.v[2];
    v19 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)(LocalClientGlobals->time - LocalClientGlobals->killCamStoppedTime)).m128_f32[0], 0.0, killCamStoppedDecelTime);
    center.v[0] = (float)((float)((float)(v16 * *(float *)&v19) + LocalClientGlobals->killCamStoppedVel.v[0]) * *(float *)&v19) + LocalClientGlobals->killCamStoppedPos.v[0];
    v20 = (float)((float)((float)(v17 * *(float *)&v19) + LocalClientGlobals->killCamStoppedVel.v[1]) * *(float *)&v19) + LocalClientGlobals->killCamStoppedPos.v[1];
    center.v[1] = v20;
    v21 = (float)((float)((float)(v18 * *(float *)&v19) + LocalClientGlobals->killCamStoppedVel.v[2]) * *(float *)&v19) + LocalClientGlobals->killCamStoppedPos.v[2];
    center.v[2] = v21;
    if ( ((LODWORD(center.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v20) & 0x7F800000) == 2139095040 || (LODWORD(v21) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1130, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bombOrigin )[0] ) && !IS_NAN( ( bombOrigin )[1] ) && !IS_NAN( ( bombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bombOrigin )[0] ) && !IS_NAN( ( bombOrigin )[1] ) && !IS_NAN( ( bombOrigin )[2] )") )
      __debugbreak();
    v22 = LODWORD(FLOAT_1_0);
    if ( !enabled )
      goto LABEL_28;
    _XMM0 = LODWORD(LocalClientGlobals->killCamStoppedDecelTime);
    __asm { vcmpless xmm1, xmm0, xmm9 }
    _XMM0 = LODWORD(FLOAT_2_0);
    __asm { vblendvps xmm0, xmm0, xmm13, xmm1 }
    v27 = &colorYellow;
    v28 = *(float *)&_XMM0;
  }
  else
  {
    v15 = 0;
    center = origin;
    v22 = LODWORD(FLOAT_1_0);
    if ( !enabled )
      goto LABEL_28;
    v27 = &colorMagenta;
    v28 = FLOAT_1_0;
  }
  CG_DebugSphere(&center, v28, v27, 0, 3000);
LABEL_28:
  v29 = outLookAtPos.v[0] - center.v[0];
  v31 = LODWORD(outLookAtPos.v[1]);
  *(float *)&v31 = outLookAtPos.v[1] - center.v[1];
  v30 = v31;
  v33 = LODWORD(outLookAtPos.v[2]);
  *(float *)&v33 = outLookAtPos.v[2] - center.v[2];
  _XMM2 = v33;
  _XMM1 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpltss xmm0, xmm1, xmm2
    vblendvps xmm6, xmm2, xmm1, xmm0
  }
  if ( (float)(outLookAtPos.v[0] - center.v[0]) == 0.0 && *(float *)&v30 == 0.0 && *(float *)&_XMM6 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1158, ASSERT_TYPE_ASSERT, "(Vec3NotZero( delta ))", (const char *)&queryFormat, "Vec3NotZero( delta )") )
    __debugbreak();
  v37 = v30;
  *(float *)&v37 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(v29 * v29)) + (float)(*(float *)&_XMM6 * *(float *)&_XMM6));
  _XMM3 = v37;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm13, xmm0
  }
  v41 = v22;
  *(float *)&v41 = (float)(*(float *)&v22 / *(float *)&_XMM1) * v29;
  _XMM9 = v41;
  v44 = v30;
  *(float *)&v44 = *(float *)&v30 * (float)(*(float *)&v22 / *(float *)&_XMM1);
  v43 = v44;
  v45 = (float)(*(float *)&v22 / *(float *)&_XMM1) * *(float *)&_XMM6;
  v111 = v45;
  v46 = *(float *)&_XMM9 * *(float *)&_XMM9;
  v47 = (float)(v45 * v45) + (float)((float)(*(float *)&_XMM9 * *(float *)&_XMM9) + (float)(*(float *)&v43 * *(float *)&v43));
  v48 = _xmm;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v47 - *(float *)&v22) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1161, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( delta ) )", "(%g, %g, %g) len %g", *(float *)&_XMM9, *(float *)&v43, v45, fsqrt(v47)) )
      __debugbreak();
    v46 = *(float *)&_XMM9 * *(float *)&_XMM9;
    v48 = _xmm;
  }
  _XMM3 = v43 ^ (unsigned int)_xmm;
  if ( *(float *)&v43 == -0.0 )
  {
    __asm
    {
      vcmpeqss xmm0, xmm9, xmm10
      vblendvps xmm0, xmm3, xmm13, xmm0
    }
    _XMM3 = _XMM0;
  }
  v52 = _XMM3;
  *(float *)&v52 = fsqrt((float)(*(float *)&_XMM3 * *(float *)&_XMM3) + v46);
  _XMM2 = v52;
  __asm
  {
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm1, xmm2, xmm13, xmm0
  }
  v58 = v22;
  v56 = *(float *)&_XMM3 * (float)(*(float *)&v22 / *(float *)&_XMM1);
  v57 = (float)(*(float *)&v22 / *(float *)&_XMM1) * *(float *)&_XMM9;
  *(float *)&v58 = (float)(v57 * v57) + (float)(v56 * v56);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v58 - *(float *)&v22) & v48) >= 0.0020000001 )
  {
    *(float *)&v58 = fsqrt(*(float *)&v58);
    _XMM0 = v58;
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( left ) )", "(%g, %g, %g) len %g", v56, v57, *(double *)&_XMM0, *(float *)&v58) )
      __debugbreak();
  }
  LODWORD(v61) = COERCE_UNSIGNED_INT(v57 * v45) ^ _xmm;
  v62 = v56 * v45;
  v63 = (float)(v57 * *(float *)&_XMM9) - (float)(v56 * *(float *)&v43);
  v110 = v63;
  v64 = (float)((float)(v61 * v61) + (float)(v62 * v62)) + (float)(v63 * v63);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v64 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1173, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v61, v62, v63, fsqrt(v64)) )
    __debugbreak();
  v65 = DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist;
  if ( !DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_explosiveKillCamPredictStickDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  v66 = (LocalClientGlobals->killCamServerFlags & 1) != 0 && (float)((float)((float)(center.v[1] - outLookAtPos.v[1]) * (float)(center.v[1] - outLookAtPos.v[1])) + (float)((float)(center.v[0] - outLookAtPos.v[0]) * (float)(center.v[0] - outLookAtPos.v[0]))) <= (float)(v65->current.value * v65->current.value);
  killCamEntityRestState = LocalClientGlobals->killCamEntityRestState;
  if ( killCamEntityRestState == KC_ENT_STUCK_PERSON || v66 || (LocalClientGlobals->killCamClientFlags & 1) != 0 )
    v66 = 1;
  if ( killCamEntityRestState == KC_ENT_STUCK_GROUND )
  {
    v68 = (float)(COERCE_FLOAT(LODWORD(groundBack) ^ _xmm) * *(float *)&_XMM9) + (float)((float)(v61 * groundUp) + center.v[0]);
    v69 = (float)(*(float *)&v43 * COERCE_FLOAT(LODWORD(groundBack) ^ _xmm)) + (float)((float)(v62 * groundUp) + center.v[1]);
    v70 = v111;
    v71 = (float)(COERCE_FLOAT(LODWORD(groundBack) ^ _xmm) * v111) + (float)((float)(v63 * groundUp) + center.v[2]);
  }
  else if ( v66 && !v15 && LocalClientGlobals->killCamFirstFrameRan )
  {
    v68 = LocalClientGlobals->killCamOldViewOrg.v[0];
    v69 = LocalClientGlobals->killCamOldViewOrg.v[1];
    v71 = LocalClientGlobals->killCamOldViewOrg.v[2];
    LocalClientGlobals->killCamClientFlags |= 1u;
    v70 = v111;
  }
  else
  {
    v72 = (float)(v63 * v114) + center.v[2];
    __asm
    {
      vcmpeqss xmm1, xmm14, xmm10
      vblendvps xmm0, xmm14, xmm0, xmm1
    }
    if ( (float)((float)((float)(center.v[1] - outLookAtPos.v[1]) * (float)(center.v[1] - outLookAtPos.v[1])) + (float)((float)(center.v[0] - outLookAtPos.v[0]) * (float)(center.v[0] - outLookAtPos.v[0]))) >= 256.0 )
    {
      v79 = *(float *)&_XMM0;
      v70 = v111;
    }
    else
    {
      v75 = _XMM9;
      *(float *)&v75 = fsqrt((float)((float)(*(float *)&_XMM9 * *(float *)&_XMM9) + (float)(*(float *)&v43 * *(float *)&v43)) + 0.010000001);
      _XMM2 = v75;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm3, xmm0
      }
      v113 = *(float *)&_XMM1;
      *(float *)&_XMM9 = *(float *)&_XMM9 * (float)(1.0 / *(float *)&_XMM1);
      *(float *)&v43 = *(float *)&v43 * (float)(1.0 / *(float *)&_XMM1);
      v70 = (float)(1.0 / *(float *)&_XMM1) * 0.1;
      v79 = FLOAT_60_0;
    }
    v113 = v79;
    v68 = (float)(COERCE_FLOAT(LODWORD(v79) ^ _xmm) * *(float *)&_XMM9) + (float)((float)(v61 * v114) + center.v[0]);
    v69 = (float)(*(float *)&v43 * COERCE_FLOAT(LODWORD(v79) ^ _xmm)) + (float)((float)(v62 * v114) + center.v[1]);
    v71 = (float)(COERCE_FLOAT(LODWORD(v79) ^ _xmm) * v70) + v72;
    v63 = v110;
  }
  desiredCamPos.v[0] = v68;
  desiredCamPos.v[1] = v69;
  desiredCamPos.v[2] = v71;
  if ( ((LODWORD(v68) & 0x7F800000) == 2139095040 || (LODWORD(v69) & 0x7F800000) == 2139095040 || (LODWORD(v71) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1215, ASSERT_TYPE_SANITY, "( !IS_NAN( ( campos )[0] ) && !IS_NAN( ( campos )[1] ) && !IS_NAN( ( campos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( campos )[0] ) && !IS_NAN( ( campos )[1] ) && !IS_NAN( ( campos )[2] )") )
    __debugbreak();
  killCamEntity = LocalClientGlobals->killCamEntity;
  if ( killCamEntity == 2047 )
  {
    if ( LocalClientGlobals->killCamEntityRestState != KC_ENT_STUCK_PERSON || (killCamEntity = LocalClientGlobals->invalidKillCamEntity, killCamEntity == 2047) )
    {
      killCamEntity = 2047;
      if ( LocalClientGlobals->predictedPlayerState.clientNum < cls.maxClients )
        killCamEntity = LocalClientGlobals->predictedPlayerState.clientNum;
    }
  }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v81 = CG_KillCam_KillcamCameraTrace(localClientNum, &outLookAtPos, &center, &angles, &desiredCamPos, killCamEntity, LocalClientGlobals->killCamEntityRestState, &outOrg);
  Entity = CG_GetEntity(localClientNum, LocalClientGlobals->clientNum);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  if ( !v81 || (float)((float)((float)(outOrg.v[1] - outOrigin.v[1]) * (float)(outOrg.v[1] - outOrigin.v[1])) + (float)((float)(outOrg.v[0] - outOrigin.v[0]) * (float)(outOrg.v[0] - outOrigin.v[0]))) < 1296.0 )
  {
    desiredCamPos.v[0] = (float)(*(float *)&_XMM9 * v113) + (float)((float)(v61 * v114) + center.v[0]);
    desiredCamPos.v[1] = (float)(*(float *)&v43 * v113) + (float)((float)(v62 * v114) + center.v[1]);
    desiredCamPos.v[2] = (float)(v70 * v113) + (float)((float)(v63 * v114) + center.v[2]);
    if ( !CG_KillCam_KillcamCameraTrace(localClientNum, &outLookAtPos, &center, &angles, &desiredCamPos, killCamEntity, LocalClientGlobals->killCamEntityRestState, &outOrg) )
    {
      v83 = LocalClientGlobals->killCamEntityRestState;
      if ( v83 == KC_ENT_STUCK_GROUND )
      {
        outOrg.v[0] = (float)(v61 * 20.0) + center.v[0];
        outOrg.v[1] = (float)(v62 * 20.0) + center.v[1];
        outOrg.v[2] = (float)(v63 * 20.0) + center.v[2];
      }
      else if ( v83 == KC_ENT_STUCK_WALL )
      {
        AnglesToAxis(&angles, &axis);
        v84 = axis.m[2].v[1];
        v85 = axis.m[2].v[2];
        if ( (float)(center.v[2] - outOrigin.v[2]) > 50.0 && axis.m[2].v[2] > 0.80000001 )
        {
          LODWORD(v85) = LODWORD(axis.m[2].v[2]) ^ _xmm;
          LODWORD(v84) = LODWORD(axis.m[2].v[1]) ^ _xmm;
        }
        outOrg.v[0] = (float)(5.0 * axis.m[2].v[0]) + center.v[0];
        outOrg.v[1] = (float)(v84 * 5.0) + center.v[1];
        outOrg.v[2] = (float)(v85 * 5.0) + center.v[2];
      }
    }
  }
  CG_KillCam_LookAtBothPoints(&outLookAtPos, &origin, &outOrg, &LocalClientGlobals->refdef.view.axis);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( ((killCamEntityType - 5) & 0xFFFFFFFA) != 0 || killCamEntityType == KC_VEHICLE )
  {
    LocalClientGlobals->killCamStoppedTime = 0;
  }
  else
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist");
    v87 = *(float *)&Float_Internal_DebugName;
    v88 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist, "cg_explosiveKillCamStopDecelDist");
    v90 = (float)((float)((float)(origin.v[1] - outLookAtPos.v[1]) * (float)(origin.v[1] - outLookAtPos.v[1])) + (float)((float)(origin.v[0] - outLookAtPos.v[0]) * (float)(origin.v[0] - outLookAtPos.v[0]))) + (float)((float)(origin.v[2] - outLookAtPos.v[2]) * (float)(origin.v[2] - outLookAtPos.v[2]));
    v89 = v90;
    v91 = LocalClientGlobals->killCamFirstFrameRan && !LocalClientGlobals->killCamStoppedTime && (float)(v87 * v87) < v90 && v90 <= (float)((float)(*(float *)&v88 + v87) * (float)(*(float *)&v88 + v87));
    v92 = 0i64;
    v93 = 0.0;
    v94 = 0.0;
    if ( v91 )
    {
      frametime = LocalClientGlobals->frametime;
      if ( frametime <= 0 )
        goto LABEL_151;
      v97 = LODWORD(FLOAT_1_0);
      v96 = 1.0 / (float)frametime;
      *(float *)&v97 = v96 * (float)(origin.v[0] - LocalClientGlobals->killCamPrevBombOrigin.v[0]);
      v92 = v97;
      v93 = v96 * (float)(origin.v[1] - LocalClientGlobals->killCamPrevBombOrigin.v[1]);
      v98 = v96 * (float)(origin.v[2] - LocalClientGlobals->killCamPrevBombOrigin.v[2]);
      v94 = v98;
      if ( ((v92 & 0x7F800000) == 2139095040 || (LODWORD(v93) & 0x7F800000) == 2139095040 || (LODWORD(v98) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1306, ASSERT_TYPE_SANITY, "( !IS_NAN( ( bombVel )[0] ) && !IS_NAN( ( bombVel )[1] ) && !IS_NAN( ( bombVel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( bombVel )[0] ) && !IS_NAN( ( bombVel )[1] ) && !IS_NAN( ( bombVel )[2] )") )
        __debugbreak();
      v99 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopSpeedThreshold, "cg_explosiveKillCamStopSpeedThreshold");
      if ( *(float *)&v99 <= (float)(fsqrt((float)((float)(*(float *)&v92 * *(float *)&v92) + (float)(v93 * v93)) + (float)(v98 * v98)) * 1000.0) )
      {
LABEL_151:
        if ( ((LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1321, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] )") )
          __debugbreak();
        if ( ((LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1322, ASSERT_TYPE_SANITY, "( !IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] )") )
          __debugbreak();
        LocalClientGlobals->killCamStoppedTime = LocalClientGlobals->time;
        LocalClientGlobals->killCamStoppedPos = origin;
        LocalClientGlobals->killCamStoppedVel.v[0] = *(float *)&v92;
        LocalClientGlobals->killCamStoppedVel.v[1] = v93;
        LocalClientGlobals->killCamStoppedVel.v[2] = v94;
        v100 = v92;
        *(float *)&v100 = fsqrt((float)((float)(*(float *)&v92 * *(float *)&v92) + (float)(v93 * v93)) + (float)(v94 * v94));
        _XMM12 = v100;
        __asm
        {
          vcmpless xmm0, xmm12, cs:__real@80000000
          vblendvps xmm1, xmm12, xmm15, xmm0
        }
        v104 = *(float *)&v92 * (float)(1.0 / *(float *)&_XMM1);
        v105 = v93 * (float)(1.0 / *(float *)&_XMM1);
        v107 = (float)(1.0 / *(float *)&_XMM1) * v94;
        v106 = v107;
        if ( ((LODWORD(v104) & 0x7F800000) == 2139095040 || (LODWORD(v105) & 0x7F800000) == 2139095040 || (LODWORD(v107) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
          __debugbreak();
        if ( v89 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1337, ASSERT_TYPE_ASSERT, "(bombDistFromTargetSq >= 0.0f)", (const char *)&queryFormat, "bombDistFromTargetSq >= 0.0f") )
          __debugbreak();
        v108 = fsqrt(v89) - v87;
        if ( *(float *)&_XMM12 <= 0.0 || v108 <= 0.0 )
        {
          LocalClientGlobals->killCamStoppedDecelTime = 0.0;
          if ( enabled )
            CG_DebugSphere(&origin, 20.0, &colorYellow, 0, 3000);
        }
        else
        {
          outLookAtPos.v[0] = (float)(v104 * v108) + origin.v[0];
          outLookAtPos.v[1] = (float)(v105 * v108) + origin.v[1];
          outLookAtPos.v[2] = (float)(v106 * v108) + origin.v[2];
          PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &origin, &outLookAtPos, &KILLCAM_BOUNDS, killCamEntity, 0, 8390785, 0, NULL, All);
          LocalClientGlobals->killCamStoppedDecelTime = (float)((float)(v108 * results.fraction) * 2.0) / *(float *)&_XMM12;
          if ( enabled )
            CG_DebugSphere(&outLookAtPos, 20.0, &colorYellow, 0, 3000);
        }
      }
    }
  }
  if ( ((LODWORD(outOrg.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outOrg.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outOrg.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1374, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] )") )
    __debugbreak();
  if ( ((LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1375, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1376, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1377, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] )") )
    __debugbreak();
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(LocalClientGlobals);
  v109 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_airstrikeKillCamFov, "cg_airstrikeKillCamFov");
  CG_View_UpdateFov(localClientNum, *(const float *)&v109);
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&outOrg, 0, sizeof(outOrg));
LABEL_148:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_KillCam_UpdateExplosiveKillCam_Legacy
==============
*/
void CG_KillCam_UpdateExplosiveKillCam_Legacy(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType, float upDist, float backDist, float outDist, float sideDist, float groundUp, float groundBack)
{
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  float v13; 
  float v14; 
  int killCamStoppedTime; 
  int time; 
  float v18; 
  float killCamStoppedDecelTime; 
  __int128 killCamStoppedDecelTime_low; 
  float v21; 
  __int128 v22; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v28; 
  __int128 v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v38; 
  __int128 v39; 
  float v40; 
  __int128 v44; 
  float v48; 
  float v49; 
  float v50; 
  KillCamEntityRestState killCamEntityRestState; 
  float v53; 
  float v54; 
  double v55; 
  bool v56; 
  float v57; 
  double v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __int128 v64; 
  float v65; 
  __int128 v66; 
  float v70; 
  float v71; 
  float v72; 
  double Float_Internal_DebugName; 
  double v74; 
  float v76; 
  vec3_t outOrg; 
  __int64 v79; 
  vec3_t point2; 
  vec3_t originalBombOrigin; 
  vec3_t desiredCamPos; 
  vec3_t outLookAtPos; 
  vec3_t bombAngles; 
  trace_t results; 

  v79 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_KillCam_UpdateExplosiveKillCam_Legacy");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 707, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 708, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  v11 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v11->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( v11->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  _XMM9 = LODWORD(v11->killCamEntityOrg.v[0]);
  point2.v[0] = v11->killCamEntityOrg.v[0];
  v13 = v11->killCamEntityOrg.v[1];
  point2.v[1] = v13;
  v14 = v11->killCamEntityOrg.v[2];
  point2.v[2] = v14;
  bombAngles = v11->killCamEntityAngles;
  killCamStoppedTime = LocalClientGlobals->killCamStoppedTime;
  _XMM7 = 0i64;
  if ( killCamStoppedTime )
  {
    time = LocalClientGlobals->time;
    if ( time > killCamStoppedTime )
    {
      v18 = (float)(time - killCamStoppedTime);
      if ( v18 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 722, ASSERT_TYPE_ASSERT, "( ( time > 0.0f ) )", "( time ) = %g", v18) )
        __debugbreak();
      killCamStoppedDecelTime = LocalClientGlobals->killCamStoppedDecelTime;
      if ( v18 < killCamStoppedDecelTime )
      {
        if ( killCamStoppedDecelTime <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 730, ASSERT_TYPE_ASSERT, "( ( cgameGlob->killCamStoppedDecelTime > 0.0f ) )", "( cgameGlob->killCamStoppedDecelTime ) = %g", killCamStoppedDecelTime) )
          __debugbreak();
        v21 = -0.5 / LocalClientGlobals->killCamStoppedDecelTime;
        v22 = LODWORD(LocalClientGlobals->killCamStoppedVel.v[0]);
        *(float *)&v22 = (float)((float)((float)((float)(*(float *)&v22 * v21) * v18) + *(float *)&v22) * v18) + LocalClientGlobals->killCamStoppedPos.v[0];
        _XMM9 = v22;
        v13 = (float)((float)((float)((float)(LocalClientGlobals->killCamStoppedVel.v[1] * v21) * v18) + LocalClientGlobals->killCamStoppedVel.v[1]) * v18) + LocalClientGlobals->killCamStoppedPos.v[1];
        v14 = (float)((float)((float)((float)(LocalClientGlobals->killCamStoppedVel.v[2] * v21) * v18) + LocalClientGlobals->killCamStoppedVel.v[2]) * v18) + LocalClientGlobals->killCamStoppedPos.v[2];
      }
      else
      {
        killCamStoppedDecelTime_low = LODWORD(LocalClientGlobals->killCamStoppedDecelTime);
        *(float *)&killCamStoppedDecelTime_low = (float)((float)(killCamStoppedDecelTime * 0.5) * LocalClientGlobals->killCamStoppedVel.v[0]) + LocalClientGlobals->killCamStoppedPos.v[0];
        _XMM9 = killCamStoppedDecelTime_low;
        v13 = (float)((float)(killCamStoppedDecelTime * 0.5) * LocalClientGlobals->killCamStoppedVel.v[1]) + LocalClientGlobals->killCamStoppedPos.v[1];
        v14 = (float)((float)(killCamStoppedDecelTime * 0.5) * LocalClientGlobals->killCamStoppedVel.v[2]) + LocalClientGlobals->killCamStoppedPos.v[2];
      }
    }
  }
  originalBombOrigin.v[0] = *(float *)&_XMM9;
  originalBombOrigin.v[1] = v13;
  originalBombOrigin.v[2] = v14;
  v24 = LODWORD(outLookAtPos.v[0]);
  *(float *)&v24 = outLookAtPos.v[0] - *(float *)&_XMM9;
  _XMM11 = v24;
  v26 = LODWORD(outLookAtPos.v[1]);
  *(float *)&v26 = outLookAtPos.v[1] - v13;
  v25 = v26;
  v28 = LODWORD(outLookAtPos.v[2]);
  *(float *)&v28 = outLookAtPos.v[2] - v14;
  _XMM12 = v28;
  if ( *(float *)&_XMM11 == 0.0 && *(float *)&v25 == 0.0 && *(float *)&v28 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 744, ASSERT_TYPE_ASSERT, "(Vec3NotZero( delta ))", (const char *)&queryFormat, "Vec3NotZero( delta )") )
    __debugbreak();
  __asm
  {
    vcmpltss xmm0, xmm7, xmm12
    vblendvps xmm12, xmm12, xmm7, xmm0
  }
  v31 = _XMM11;
  *(float *)&v31 = (float)((float)(*(float *)&_XMM11 * *(float *)&_XMM11) + (float)(*(float *)&v25 * *(float *)&v25)) + (float)(*(float *)&_XMM12 * *(float *)&_XMM12);
  if ( *(float *)&v31 >= 0.0000010000001 )
  {
    *(float *)&v31 = fsqrt(*(float *)&v31);
    _XMM1 = v31;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm13, xmm0
    }
    v38 = _XMM11;
    *(float *)&v38 = *(float *)&_XMM11 * (float)(1.0 / *(float *)&_XMM1);
    _XMM11 = v38;
    v39 = v25;
    *(float *)&v39 = *(float *)&v25 * (float)(1.0 / *(float *)&_XMM1);
    v25 = v39;
    *(float *)&_XMM12 = *(float *)&_XMM12 * (float)(1.0 / *(float *)&_XMM1);
    v40 = (float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(*(float *)&_XMM11 * *(float *)&_XMM11)) + (float)(*(float *)&_XMM12 * *(float *)&_XMM12);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v40 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 759, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( delta ) )", "(%g, %g, %g) len %g", *(float *)&_XMM11, *(float *)&v25, *(float *)&_XMM12, fsqrt(v40)) )
      __debugbreak();
    _XMM3 = v25 ^ (unsigned int)_xmm;
    if ( *(float *)&v25 == -0.0 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm11, xmm7
        vblendvps xmm0, xmm3, xmm13, xmm0
      }
      _XMM3 = _XMM0;
    }
    v44 = _XMM3;
    *(float *)&v44 = fsqrt((float)(*(float *)&_XMM3 * *(float *)&_XMM3) + (float)(*(float *)&_XMM11 * *(float *)&_XMM11));
    _XMM2 = v44;
    __asm
    {
      vcmpless xmm0, xmm2, xmm4
      vblendvps xmm1, xmm2, xmm13, xmm0
    }
    v48 = *(float *)&_XMM3 * (float)(1.0 / *(float *)&_XMM1);
    v49 = *(float *)&_XMM11 * (float)(1.0 / *(float *)&_XMM1);
    LODWORD(v32) = COERCE_UNSIGNED_INT(v49 * *(float *)&_XMM12) ^ _xmm;
    v33 = *(float *)&_XMM12 * v48;
    v34 = (float)(v49 * *(float *)&_XMM11) - (float)(*(float *)&v25 * v48);
    v76 = v34;
    v50 = (float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 - 1.0) & _xmm) >= 0.0020000001 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 766, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v32, v33, v34, fsqrt(v50)) )
        __debugbreak();
      v34 = (float)(v49 * *(float *)&_XMM11) - (float)(*(float *)&v25 * v48);
    }
  }
  else
  {
    v32 = 0.0;
    v33 = 0.0;
    v34 = FLOAT_1_0;
    v76 = FLOAT_1_0;
  }
  killCamEntityRestState = LocalClientGlobals->killCamEntityRestState;
  if ( killCamEntityRestState == KC_ENT_STUCK_WALL )
  {
    __asm { vunpcklps xmm0, xmm9, xmm10 }
    *(double *)desiredCamPos.v = *(double *)&_XMM0;
    desiredCamPos.v[2] = originalBombOrigin.v[2];
    originalBombOrigin.v[0] = *(float *)&_XMM9 + (float)(*(float *)&_XMM11 * 5.0);
    originalBombOrigin.v[1] = v13 + (float)(*(float *)&v25 * 5.0);
    originalBombOrigin.v[2] = v14 + (float)(*(float *)&_XMM12 * 5.0);
  }
  else if ( killCamEntityRestState == KC_ENT_STUCK_GROUND )
  {
    desiredCamPos.v[0] = (float)(COERCE_FLOAT(LODWORD(groundBack) ^ _xmm) * *(float *)&_XMM11) + (float)((float)(v32 * groundUp) + *(float *)&_XMM9);
    desiredCamPos.v[1] = (float)(COERCE_FLOAT(LODWORD(groundBack) ^ _xmm) * *(float *)&v25) + (float)((float)(v33 * groundUp) + v13);
    desiredCamPos.v[2] = (float)(*(float *)&_XMM12 * COERCE_FLOAT(LODWORD(groundBack) ^ _xmm)) + (float)((float)(groundUp * v76) + v14);
  }
  else
  {
    desiredCamPos.v[0] = (float)(COERCE_FLOAT(LODWORD(backDist) ^ _xmm) * *(float *)&_XMM11) + (float)((float)(v32 * upDist) + *(float *)&_XMM9);
    desiredCamPos.v[1] = (float)(COERCE_FLOAT(LODWORD(backDist) ^ _xmm) * *(float *)&v25) + (float)((float)(v33 * upDist) + v13);
    desiredCamPos.v[2] = (float)(*(float *)&_XMM12 * COERCE_FLOAT(LODWORD(backDist) ^ _xmm)) + (float)((float)(v34 * upDist) + v14);
  }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  CG_KillCam_KillcamCameraTrace_Legacy(localClientNum, &originalBombOrigin, &bombAngles, &desiredCamPos, LocalClientGlobals->predictedPlayerState.clientNum, LocalClientGlobals->killCamEntityRestState, &outOrg);
  CG_KillCam_LookAtBothPoints(&outLookAtPos, &point2, &outOrg, &LocalClientGlobals->refdef.view.axis);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( ((killCamEntityType - 5) & 0xFFFFFFFA) == 0 && killCamEntityType != KC_VEHICLE )
  {
    if ( (v53 = outLookAtPos.v[2], v54 = (float)((float)((float)(point2.v[1] - outLookAtPos.v[1]) * (float)(point2.v[1] - outLookAtPos.v[1])) + (float)((float)(point2.v[0] - outLookAtPos.v[0]) * (float)(point2.v[0] - outLookAtPos.v[0]))) + (float)((float)(point2.v[2] - outLookAtPos.v[2]) * (float)(point2.v[2] - outLookAtPos.v[2])), v55 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist"), v56 = (float)(*(float *)&v55 * *(float *)&v55) > v54, killCamEntityType == KC_REMOTE_MISSILE) && (v57 = point2.v[2] - v53, v58 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDist, "cg_explosiveKillCamStopDist"), v57 < *(float *)&v58) || v56 )
    {
      if ( !LocalClientGlobals->killCamStoppedTime && LocalClientGlobals->killCamFirstFrameRan )
      {
        if ( ((LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 810, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] )") )
          __debugbreak();
        if ( ((LODWORD(point2.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point2.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point2.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 811, ASSERT_TYPE_SANITY, "( !IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( realBombOrigin )[0] ) && !IS_NAN( ( realBombOrigin )[1] ) && !IS_NAN( ( realBombOrigin )[2] )") )
          __debugbreak();
        LocalClientGlobals->killCamStoppedTime = LocalClientGlobals->time;
        LocalClientGlobals->killCamStoppedPos = point2;
        if ( LocalClientGlobals->frametime <= 0 )
        {
          *(_QWORD *)LocalClientGlobals->killCamStoppedVel.v = 0i64;
          LocalClientGlobals->killCamStoppedVel.v[2] = 0.0;
          v70 = 0.0;
          v71 = 0.0;
          v72 = 0.0;
          LODWORD(_XMM6) = 0;
        }
        else
        {
          v59 = point2.v[0] - LocalClientGlobals->killCamPrevBombOrigin.v[0];
          LocalClientGlobals->killCamStoppedVel.v[0] = v59;
          LocalClientGlobals->killCamStoppedVel.v[1] = point2.v[1] - LocalClientGlobals->killCamPrevBombOrigin.v[1];
          LocalClientGlobals->killCamStoppedVel.v[2] = point2.v[2] - LocalClientGlobals->killCamPrevBombOrigin.v[2];
          v60 = 1.0 / (float)LocalClientGlobals->frametime;
          LocalClientGlobals->killCamStoppedVel.v[0] = v59 * v60;
          v61 = v60 * LocalClientGlobals->killCamStoppedVel.v[1];
          LocalClientGlobals->killCamStoppedVel.v[1] = v61;
          v62 = v60 * LocalClientGlobals->killCamStoppedVel.v[2];
          LocalClientGlobals->killCamStoppedVel.v[2] = v62;
          if ( ((COERCE_UNSIGNED_INT(v59 * v60) & 0x7F800000) == 2139095040 || (LODWORD(v61) & 0x7F800000) == 2139095040 || (LODWORD(v62) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 819, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamStoppedVel )[0] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[1] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamStoppedVel )[0] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[1] ) && !IS_NAN( ( cgameGlob->killCamStoppedVel )[2] )") )
            __debugbreak();
          v63 = LocalClientGlobals->killCamStoppedVel.v[1];
          v64 = LODWORD(LocalClientGlobals->killCamStoppedVel.v[0]);
          v65 = LocalClientGlobals->killCamStoppedVel.v[2];
          v66 = v64;
          *(float *)&v66 = fsqrt((float)((float)(*(float *)&v64 * *(float *)&v64) + (float)(v63 * v63)) + (float)(v65 * v65));
          _XMM6 = v66;
          __asm
          {
            vcmpless xmm0, xmm6, cs:__real@80000000
            vblendvps xmm1, xmm6, xmm13, xmm0
          }
          v70 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v64;
          v71 = (float)(1.0 / *(float *)&_XMM1) * v63;
          v72 = (float)(1.0 / *(float *)&_XMM1) * v65;
          if ( ((LODWORD(v70) & 0x7F800000) == 2139095040 || (LODWORD(v71) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * v65) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 822, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
            __debugbreak();
        }
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist, "cg_explosiveKillCamStopDecelDist");
        if ( *(float *)&_XMM6 > 0.0 )
        {
          bombAngles.v[0] = (float)(v70 * *(float *)&Float_Internal_DebugName) + point2.v[0];
          bombAngles.v[1] = (float)(v71 * *(float *)&Float_Internal_DebugName) + point2.v[1];
          bombAngles.v[2] = (float)(v72 * *(float *)&Float_Internal_DebugName) + point2.v[2];
          PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &point2, &bombAngles, &bounds_origin, LocalClientGlobals->predictedPlayerState.clientNum, 0, 2065, 0, NULL, All);
          LocalClientGlobals->killCamStoppedDecelTime = (float)((float)(*(float *)&Float_Internal_DebugName * results.fraction) * 2.0) / *(float *)&_XMM6;
        }
        else
        {
          LocalClientGlobals->killCamStoppedDecelTime = 0.0;
        }
      }
    }
  }
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(LocalClientGlobals);
  v74 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_airstrikeKillCamFov, "cg_airstrikeKillCamFov");
  CG_View_UpdateFov(localClientNum, *(const float *)&v74);
  memset(&outOrg, 0, sizeof(outOrg));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_KillCam_UpdateHelicopterKillCam
==============
*/
void CG_KillCam_UpdateHelicopterKillCam(KillCamEntityType killCamEntityType, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  double v27; 
  const dvar_t *v28; 
  vec3_t inOrg; 
  vec3_t cross; 
  vec3_t outLookAtPos; 
  vec3_t v1; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  v4 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v4->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( v4->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  v5 = v4->killCamEntityOrg.v[0];
  v6 = v4->killCamEntityOrg.v[1];
  v7 = v4->killCamEntityOrg.v[2];
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  outLookAtPos.v[2] = outLookAtPos.v[2] + -100.0;
  v8 = LocalClientGlobals->killCamHelicopterOffset.v[1];
  v9 = LocalClientGlobals->killCamHelicopterOffset.v[2];
  v10 = LODWORD(outLookAtPos.v[1]);
  inOrg.v[2] = LocalClientGlobals->killCamHelicopterOffset.v[0] + v7;
  inOrg.v[0] = v5;
  *(float *)&v10 = fsqrt((float)((float)((float)(outLookAtPos.v[1] - v6) * (float)(outLookAtPos.v[1] - v6)) + (float)((float)(outLookAtPos.v[0] - v5) * (float)(outLookAtPos.v[0] - v5))) + (float)((float)(outLookAtPos.v[2] - inOrg.v[2]) * (float)(outLookAtPos.v[2] - inOrg.v[2])));
  _XMM4 = v10;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
  }
  v14 = (float)(outLookAtPos.v[0] - v5) * (float)(1.0 / *(float *)&_XMM0);
  v15 = (float)(outLookAtPos.v[1] - v6) * (float)(1.0 / *(float *)&_XMM0);
  v16 = (float)(outLookAtPos.v[2] - inOrg.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  v1.v[0] = v14;
  v1.v[1] = v15;
  v1.v[2] = v16;
  inOrg.v[1] = v6;
  Vec3Cross(&orIdentity.axis.m[2], &v1, &cross);
  v17 = LODWORD(cross.v[0]);
  *(float *)&v17 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v17;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v21 = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM3 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v22 = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v23 = (float)(*(float *)&_XMM3 * v15) - (float)(v16 * v22);
  v24 = (float)(v16 * v21) - (float)(v14 * *(float *)&_XMM3);
  v25 = (float)(v14 * v22) - (float)(v21 * v15);
  v26 = (float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 281, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v23, v24, v25, fsqrt(v26)) )
    __debugbreak();
  inOrg.v[0] = (float)((float)(v14 * COERCE_FLOAT(LODWORD(v8) ^ _xmm)) + inOrg.v[0]) + (float)(v23 * v9);
  inOrg.v[1] = (float)((float)(v15 * COERCE_FLOAT(LODWORD(v8) ^ _xmm)) + inOrg.v[1]) + (float)(v24 * v9);
  inOrg.v[2] = (float)((float)(v16 * COERCE_FLOAT(LODWORD(v8) ^ _xmm)) + inOrg.v[2]) + (float)(v25 * v9);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &inOrg);
  v27 = LookAtAxisAndDistance(&inOrg, &outLookAtPos, &LocalClientGlobals->refdef.view.axis);
  if ( *(float *)&v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(distance > 0.0f)", (const char *)&queryFormat, "distance > 0.0f") )
    __debugbreak();
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
  v28 = DVARFLT_cg_heliKillCamFov;
  if ( !DVARFLT_cg_heliKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_heliKillCamFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  CG_View_UpdateFov(localClientNum, v28->current.value);
}

/*
==============
CG_KillCam_UpdateJavelinKillCam
==============
*/
void CG_KillCam_UpdateJavelinKillCam(LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  cg_t *LocalClientGlobals; 
  cg_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  int killCamEntity; 
  centity_t *Entity; 
  double v21; 
  double v22; 
  int v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  const dvar_t *v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  const tmat33_t<vec3_t> *p_axis; 
  const dvar_t *v43; 
  float value; 
  const dvar_t *v45; 
  __int128 v47; 
  const dvar_t *v49; 
  float v50; 
  const dvar_t *v51; 
  float v52; 
  float v53; 
  const dvar_t *v54; 
  float v55; 
  __int128 v57; 
  const dvar_t *v59; 
  float v60; 
  float v61; 
  const dvar_t *v62; 
  float v63; 
  double v64; 
  float v65; 
  float v66; 
  const dvar_t *v67; 
  vec3_t inOrg; 
  vec3_t origin; 
  vec4_t lookAt; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outLookAtPos; 
  vec3_t up; 
  vec3_t v75; 
  vec3_t right; 
  vec4_t out; 
  vec4_t from; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 

  v90 = v4;
  v89 = v5;
  v88 = v6;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 441, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  v15 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v15->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( v15->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  v16 = v15->killCamEntityOrg.v[0];
  v17 = v15->killCamEntityOrg.v[1];
  v18 = v15->killCamEntityOrg.v[2];
  angles = v15->killCamEntityAngles;
  killCamEntity = LocalClientGlobals->killCamEntity;
  lookAt.v[0] = v16;
  lookAt.v[1] = v17;
  lookAt.v[2] = v18;
  v92 = v2;
  Entity = CG_GetEntity(localClientNum, killCamEntity);
  CG_KillCam_GetPlayerKillCamEntityLookAt(localClientNum, &outLookAtPos);
  if ( Entity->nextState.lerp.pos.trType == TR_GRAVITY )
  {
    inOrg = lookAt.xyz;
    LocalClientGlobals->refdefViewAngles = angles;
    v21 = I_crandom();
    LocalClientGlobals->refdefViewAngles.v[0] = (float)(*(float *)&v21 * 5.0) + LocalClientGlobals->refdefViewAngles.v[0];
    v22 = I_crandom();
    LocalClientGlobals->refdefViewAngles.v[1] = (float)(*(float *)&v22 * 5.0) + LocalClientGlobals->refdefViewAngles.v[1];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
  }
  else
  {
    v91 = v3;
    v87 = v7;
    v86 = v8;
    v85 = v9;
    v84 = v10;
    v83 = v11;
    AngleVectors(&angles, &forward, &right, &up);
    AngleVectors(&LocalClientGlobals->killCamPrevEntityAngles, &v75, NULL, NULL);
    v23 = LocalClientGlobals->time - Entity->nextState.lerp.u.anonymous.data[2];
    v24 = DVARFLT_cg_javelinKillCamPassTime;
    v25 = (float)((float)(forward.v[0] * 0.0) + (float)(forward.v[1] * 0.0)) + (float)(forward.v[2] * 1.0);
    v27 = 0i64;
    v26 = (float)v23;
    if ( !DVARFLT_cg_javelinKillCamPassTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPassTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    *(float *)&v27 = (float)(v26 * 0.0062831854) / v24->current.value;
    _XMM1 = v27;
    __asm { vminss  xmm0, xmm1, cs:__real@4096cbe4; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    v30 = DVARFLT_cg_javelinKillCamUpDist;
    LODWORD(v31) = _XMM0 ^ _xmm;
    if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v32 = v31 * v30->current.value;
    v33 = DVARFLT_cg_javelinKillCamPassDist;
    v34 = FLOAT_1_0;
    v35 = (float)(v32 * forward.v[0]) + v16;
    v36 = (float)(v32 * forward.v[1]) + v17;
    v37 = (float)(v32 * forward.v[2]) + v18;
    if ( !DVARFLT_cg_javelinKillCamPassDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPassDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v38 = (float)(1.0 - COERCE_FLOAT(LODWORD(v31) & _xmm)) * v33->current.value;
    v39 = v35 + (float)(v38 * up.v[0]);
    v40 = v36 + (float)(v38 * up.v[1]);
    v41 = v37 + (float)(v38 * up.v[2]);
    origin.v[2] = v41;
    origin.v[0] = v39;
    origin.v[1] = v40;
    CG_KillCam_ComputeJavelinLookAtAxis(&origin, (const vec3_t *)&lookAt, &right, &axis);
    if ( v25 <= 0.0 || v25 < (float)((float)((float)(v75.v[0] * 0.0) + (float)(v75.v[1] * 0.0)) + (float)(v75.v[2] * 1.0)) )
    {
      if ( killCamEntityType == KC_REMOTE_MISSILE )
      {
        v43 = DVARFLT_cg_javelinKillCamUpDist;
        if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        value = v43->current.value;
        v45 = DVARFLT_cg_javelinKillCamCloseZDist;
        inOrg.v[0] = (float)(value * 0.0) + v16;
        inOrg.v[1] = (float)(value * 0.0) + v17;
        inOrg.v[2] = (float)(value * 1.0) + v18;
        if ( !DVARFLT_cg_javelinKillCamCloseZDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamCloseZDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        v47 = LODWORD(outLookAtPos.v[2]);
        *(float *)&v47 = outLookAtPos.v[2] + v45->current.value;
        _XMM1 = v47;
        __asm { vmaxss  xmm2, xmm1, dword ptr [rsp+270h+inOrg+8] }
        p_axis = &LocalClientGlobals->refdef.view.axis;
        inOrg.v[2] = *(float *)&_XMM2;
        CG_KillCam_ComputeJavelinLookAtAxis(&inOrg, (const vec3_t *)&lookAt, &right, &LocalClientGlobals->refdef.view.axis);
        LookAtAxisAndDistance(&inOrg, &outLookAtPos, &LocalClientGlobals->refdef.view.axis);
      }
      else
      {
        if ( killCamEntityType != KC_JAVELIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 496, ASSERT_TYPE_ASSERT, "( killCamEntityType ) == ( KC_JAVELIN )", "%s == %s\n\t%i, %i", "killCamEntityType", "KC_JAVELIN", killCamEntityType, 8) )
          __debugbreak();
        v49 = DVARFLT_cg_javelinKillCamUpDist;
        if ( !DVARFLT_cg_javelinKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamUpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v49);
        v50 = v49->current.value;
        v51 = DVARFLT_cg_javelinKillCamDownDist;
        if ( !DVARFLT_cg_javelinKillCamDownDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamDownDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v51);
        v52 = (float)(v25 + 1.0) * 0.5;
        v53 = (float)(1.0 - v52) * v51->current.value;
        v54 = DVARFLT_cg_javelinKillCamCloseZDist;
        v55 = v53 + (float)(v52 * v50);
        origin.v[0] = (float)(v55 * 0.0) + v16;
        origin.v[1] = (float)(v55 * 0.0) + v17;
        origin.v[2] = (float)(v55 * 1.0) + v18;
        if ( !DVARFLT_cg_javelinKillCamCloseZDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamCloseZDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v54);
        v57 = LODWORD(outLookAtPos.v[2]);
        *(float *)&v57 = outLookAtPos.v[2] + v54->current.value;
        _XMM1 = v57;
        __asm { vmaxss  xmm2, xmm1, dword ptr [rsp+270h+origin+8] }
        origin.v[2] = *(float *)&_XMM2;
        CG_KillCam_ComputeJavelinLookAtAxis(&origin, (const vec3_t *)&lookAt, &right, &mat);
        v59 = DVARFLT_cg_javelinKillCamLookLerpDist;
        if ( !DVARFLT_cg_javelinKillCamLookLerpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamLookLerpDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v59);
        v60 = v59->current.value;
        if ( v60 > 0.0 )
        {
          v61 = 1.0 - (float)((float)(v18 - outLookAtPos.v[2]) / v60);
          I_fclamp(v61, 0.0, 1.0);
          AxisToQuat(&mat, &out);
          LookAtAxisAndDistance(&origin, &outLookAtPos, &v82);
          AxisToQuat(&v82, &lookAt);
          QuatLerp(&out, &lookAt, v61, &out);
        }
        v62 = DVARFLT_cg_javelinKillCamPitchDownBlendFinish;
        if ( !DVARFLT_cg_javelinKillCamPitchDownBlendFinish && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamPitchDownBlendFinish") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v62);
        v63 = cosf_0((float)(v62->current.value * 0.017453292) + 1.5707964);
        v64 = I_fclamp(v63, -1.0, 1.0);
        if ( *(float *)&v64 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 530, ASSERT_TYPE_ASSERT, "( finishDownDot ) < ( 1.0f )", "%s < %s\n\t%g, %g", "finishDownDot", "1.0f", *(float *)&v64, DOUBLE_1_0) )
          __debugbreak();
        if ( (float)(1.0 - *(float *)&v64) > 0.000001 )
        {
          v65 = (float)(1.0 - v25) / (float)(1.0 - *(float *)&v64);
          I_fclamp(v65, 0.0, 1.0);
          v34 = v65;
        }
        v66 = (float)((float)((float)((float)(v34 * 6.0) - 15.0) * v34) + 10.0) * (float)((float)(v34 * v34) * v34);
        inOrg.v[0] = (float)((float)(origin.v[0] - v39) * v66) + v39;
        inOrg.v[1] = (float)((float)(origin.v[1] - v40) * v66) + v40;
        inOrg.v[2] = (float)((float)(origin.v[2] - v41) * v66) + v41;
        AxisToQuat(&axis, &from);
        QuatSlerp(&from, &out, v66, &result);
        p_axis = &LocalClientGlobals->refdef.view.axis;
        QuatToAxis(&result, &LocalClientGlobals->refdef.view.axis);
        if ( ((LODWORD(inOrg.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inOrg.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inOrg.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 540, ASSERT_TYPE_SANITY, "( !IS_NAN( ( camOrigin )[0] ) && !IS_NAN( ( camOrigin )[1] ) && !IS_NAN( ( camOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( camOrigin )[0] ) && !IS_NAN( ( camOrigin )[1] ) && !IS_NAN( ( camOrigin )[2] )") )
          __debugbreak();
        if ( ((LODWORD(p_axis->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 541, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[0] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[0] )[2] )") )
          __debugbreak();
        if ( ((LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 542, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[1] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[1] )[2] )") )
          __debugbreak();
        if ( ((LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 543, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->refdef.view.axis[2] )[0] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[1] ) && !IS_NAN( ( cgameGlob->refdef.view.axis[2] )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      p_axis = &LocalClientGlobals->refdef.view.axis;
      inOrg = origin;
      MatrixCopy33(&axis, &LocalClientGlobals->refdef.view.axis);
    }
    AxisToAngles(p_axis, &LocalClientGlobals->refdefViewAngles);
  }
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &inOrg);
  v67 = DVARFLT_cg_javelinKillCamFov;
  if ( !DVARFLT_cg_javelinKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_javelinKillCamFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  CG_View_UpdateFov(localClientNum, v67->current.value);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(LocalClientGlobals);
}

/*
==============
CG_KillCam_UpdateKillCamEntity
==============
*/
void CG_KillCam_UpdateKillCamEntity(const LocalClientNum_t localClientNum, KillCamEntityType killCamEntityType)
{
  double Float_Internal_DebugName; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  double v9; 
  double v10; 
  const dvar_t *v11; 
  const char *v12; 
  double v13; 
  double v14; 
  cg_t *v15; 
  cg_t *LocalClientGlobals; 
  cg_t *v17; 
  const dvar_t *v18; 
  cg_t *v19; 
  vec3_t origin; 
  vec3_t outLookAtPos; 

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
      v17 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v17->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
        __debugbreak();
      if ( v17->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
        __debugbreak();
      origin = v17->killCamEntityOrg;
      LookAtAxisAndDistance(&origin, &outLookAtPos, &LocalClientGlobals->refdef.view.axis);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &origin);
      AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
      CG_ShakeCamera(localClientNum);
      CG_PerturbCamera(LocalClientGlobals);
      v18 = DVARFLT_cg_airstrikeKillCamFov;
      if ( !DVARFLT_cg_airstrikeKillCamFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_airstrikeKillCamFov") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      CG_View_UpdateFov(localClientNum, v18->current.value);
      break;
    case KC_EXPLOSIVE:
    case KC_FAST_EXPLOSIVE:
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist, "cg_explosiveKillCamGroundBackDist");
      v5 = *(float *)&Float_Internal_DebugName;
      v6 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist, "cg_explosiveKillCamGroundUpDist");
      v7 = *(float *)&v6;
      v8 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamBackDist, "cg_explosiveKillCamBackDist");
      v9 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_explosiveKillCamUpDist, "cg_explosiveKillCamUpDist");
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, *(float *)&v9, v8, v7, v5);
      break;
    case KC_OFFSET_EXPLOSIVE:
      v15 = CG_GetLocalClientGlobals(localClientNum);
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, v15->killCamScriptmoverOffset.v[2], COERCE_DOUBLE((unsigned __int64)LODWORD(v15->killCamScriptmoverOffset.v[1])), v15->killCamScriptmoverOffset.v[2], v15->killCamScriptmoverOffset.v[1]);
      break;
    case KC_ROCKET:
      v10 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_rocketKillCamBackDist, "cg_rocketKillCamBackDist");
      v11 = DCONST_DVARFLT_cg_rocketKillCamUpDist;
      v12 = "cg_rocketKillCamUpDist";
      goto LABEL_5;
    case KC_TURRET:
      CG_KillCam_UpdateTurretKillCam(localClientNum);
      break;
    case KC_JAVELIN:
      CG_KillCam_UpdateJavelinKillCam(localClientNum, killCamEntityType);
      break;
    case KC_REMOTE_MISSILE:
      v10 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_remoteMissileKillCamBackDist, "cg_remoteMissileKillCamBackDist");
      v11 = DCONST_DVARFLT_cg_remoteMissileKillCamUpDist;
      v12 = "cg_remoteMissileKillCamUpDist";
LABEL_5:
      v13 = v10;
      v14 = Dvar_GetFloat_Internal_DebugName(v11, v12);
      CG_KillCam_UpdateExplosiveKillCam(localClientNum, killCamEntityType, *(float *)&v14, v13, 0.0, 0.0);
      break;
    case KC_VEHICLE:
      v19 = CG_GetLocalClientGlobals(localClientNum);
      if ( !v19->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
        __debugbreak();
      if ( v19->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 299, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
        __debugbreak();
      CG_Camera_KillCam_Update(localClientNum, &v19->refdef.view);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
        __debugbreak();
      break;
  }
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
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  centity_t *Entity; 
  centity_t *v5; 
  float pitch; 
  unsigned int number; 
  unsigned int v8; 
  unsigned int v9; 
  const DObj *v10; 
  scr_string_t tag_weapon; 
  DObjAnimMat *LocalBoneMatrix; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float value; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  const dvar_t *v23; 
  const char *v24; 
  __int64 skipEntity; 
  int skipEntitya; 
  __int64 skipChildren; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t up; 
  trace_t results; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 344, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( LocalClientGlobals->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  v3 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v3->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  if ( v3->killCamEntityType == KC_NO_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamEntityType != KC_NO_ENTITY)", (const char *)&queryFormat, "cgameGlob->killCamEntityType != KC_NO_ENTITY") )
    __debugbreak();
  start = v3->killCamEntityOrg;
  angles = v3->killCamEntityAngles;
  Entity = CG_GetEntity(localClientNum, LocalClientGlobals->killCamEntity);
  v5 = Entity;
  if ( (Entity->flags & 1) != 0 )
  {
    if ( CG_IsRemoteTurret(Entity) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      pitch = v5->pose.actor.pitch;
      LODWORD(angles.v[1]) = v5->pose.coverWall.coverGrid[1];
      angles.v[2] = 0.0;
      angles.v[0] = pitch;
    }
    else
    {
      angles.v[0] = angles.v[0] + v5->pose.actor.pitch;
      angles.v[1] = angles.v[1] + v5->pose.actor.roll;
    }
    number = v5->nextState.number;
    if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v5->nextState.number) )
      __debugbreak();
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(skipChildren) = 2;
      LODWORD(skipEntity) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    v8 = 2533 * localClientNum + number;
    if ( v8 >= 0x13CA )
    {
      LODWORD(skipChildren) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", skipChildren) )
        __debugbreak();
    }
    v9 = clientObjMap[v8];
    if ( !v9 )
      goto LABEL_40;
    if ( v9 >= (unsigned int)s_objCount )
    {
      LODWORD(skipChildren) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", skipChildren) )
        __debugbreak();
    }
    v10 = (const DObj *)s_objBuf[v9];
    if ( !v10 )
      goto LABEL_40;
    tag_weapon = scr_const.tag_weapon;
    if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
      __debugbreak();
    inOutIndex[0] = -2;
    if ( DObjGetBoneIndexInternal_74(v10, tag_weapon, inOutIndex, &modelIndex) && (LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&v5->pose, v10, inOutIndex[0])) != NULL )
    {
      v13 = LocalBoneMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
      v14 = LocalBoneMatrix->trans.v[1] + g_activeRefDef->viewOffset.v[1];
      start.v[2] = LocalBoneMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
      start.v[0] = v13;
      start.v[1] = v14;
    }
    else
    {
LABEL_40:
      Com_PrintWarning(14, "Couldn't get dobj of turret killcam entity (#%i) for client #%i.\n", (unsigned int)LocalClientGlobals->killCamEntity, (unsigned int)localClientNum);
    }
  }
  AngleVectors(&angles, &forward, NULL, &up);
  if ( (v5->flags & 1) != 0 && CG_IsRemoteTurret(v5) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 377, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    v15 = DVARFLT_cg_turretRemoteKillCamBackDist;
    if ( !DVARFLT_cg_turretRemoteKillCamBackDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretRemoteKillCamBackDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    LODWORD(v16) = v15->current.integer ^ _xmm;
    v17 = DVARFLT_cg_turretRemoteKillCamUpDist;
    end.v[0] = (float)(v16 * forward.v[0]) + start.v[0];
    end.v[2] = (float)(v16 * forward.v[2]) + start.v[2];
    end.v[1] = (float)(v16 * forward.v[1]) + start.v[1];
    if ( !DVARFLT_cg_turretRemoteKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretRemoteKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    value = v17->current.value;
    end.v[0] = (float)(value * up.v[0]) + end.v[0];
    skipEntitya = LocalClientGlobals->killCamEntity;
    end.v[1] = (float)(value * up.v[1]) + end.v[1];
    end.v[2] = (float)(value * up.v[2]) + end.v[2];
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &start, &end, &bounds_origin, skipEntitya, 0, 49, 0, NULL, All);
    start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    start.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  }
  else
  {
    v19 = DVARFLT_cg_turretKillCamBackDist;
    if ( !DVARFLT_cg_turretKillCamBackDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretKillCamBackDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    LODWORD(v20) = v19->current.integer ^ _xmm;
    v21 = DVARFLT_cg_turretKillCamUpDist;
    start.v[0] = (float)(v20 * forward.v[0]) + start.v[0];
    start.v[1] = (float)(v20 * forward.v[1]) + start.v[1];
    start.v[2] = (float)(v20 * forward.v[2]) + start.v[2];
    if ( !DVARFLT_cg_turretKillCamUpDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_turretKillCamUpDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = v21->current.value;
    start.v[0] = (float)(v22 * up.v[0]) + start.v[0];
    start.v[1] = (float)(v22 * up.v[1]) + start.v[1];
    start.v[2] = (float)(v22 * up.v[2]) + start.v[2];
  }
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &start);
  LocalClientGlobals->refdefViewAngles = angles;
  AnglesToAxis(&angles, &LocalClientGlobals->refdef.view.axis);
  CG_ShakeCamera(localClientNum);
  CG_PerturbCamera(LocalClientGlobals);
  if ( (v5->flags & 1) == 0 || !CG_IsRemoteTurret(v5) )
  {
    v23 = DVARFLT_cg_turretKillCamFov;
    if ( DVARFLT_cg_turretKillCamFov )
      goto LABEL_71;
    v24 = "cg_turretKillCamFov";
    goto LABEL_69;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_killcam_mp.cpp", 401, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  v23 = DVARFLT_cg_turretRemoteKillCamFov;
  if ( !DVARFLT_cg_turretRemoteKillCamFov )
  {
    v24 = "cg_turretRemoteKillCamFov";
LABEL_69:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
      __debugbreak();
  }
LABEL_71:
  Dvar_CheckFrontendServerThread(v23);
  CG_View_UpdateFov(localClientNum, v23->current.value);
}

