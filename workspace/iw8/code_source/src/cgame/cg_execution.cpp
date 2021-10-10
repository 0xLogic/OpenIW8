/*
==============
CG_Execution_CheckEndCamera
==============
*/

void __fastcall CG_Execution_CheckEndCamera(LocalClientNum_t localClientNum)
{
  ?CG_Execution_CheckEndCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_StartWorkers
==============
*/

void __fastcall CG_Execution_StartWorkers(LocalClientNum_t localClientNum)
{
  ?CG_Execution_StartWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_ProcessFireWeapon
==============
*/

void __fastcall CG_Execution_ProcessFireWeapon(LocalClientNum_t localClientNum)
{
  ?CG_Execution_ProcessFireWeapon@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_Debug
==============
*/

void __fastcall CG_Execution_Debug(LocalClientNum_t localClientNum)
{
  ?CG_Execution_Debug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_IsActive
==============
*/

bool __fastcall CG_Execution_IsActive(LocalClientNum_t localClientNum)
{
  return ?CG_Execution_IsActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_XCamUpdateTransform
==============
*/

void __fastcall CG_Execution_XCamUpdateTransform(LocalClientNum_t localClientNum)
{
  ?CG_Execution_XCamUpdateTransform@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_Init
==============
*/

void CG_Execution_Init(void)
{
  ?CG_Execution_Init@@YAXXZ();
}

/*
==============
CG_Execution_QueueFireWeapon
==============
*/

void __fastcall CG_Execution_QueueFireWeapon(LocalClientNum_t localClientNum, int entityNum)
{
  ?CG_Execution_QueueFireWeapon@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
CG_Execution_WaitForWorkers
==============
*/

void __fastcall CG_Execution_WaitForWorkers(LocalClientNum_t localClientNum)
{
  ?CG_Execution_WaitForWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Execution_ExecuteWorkerThread
==============
*/

void __fastcall CG_Execution_ExecuteWorkerThread(const void *const cmdInfo)
{
  ?CG_Execution_ExecuteWorkerThread@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CG_Execution_CheckShowHideEffects
==============
*/

void __fastcall CG_Execution_CheckShowHideEffects(LocalClientNum_t localClientNum, int entityNum, characterInfo_t *ci, DObj *obj, const Weapon *weapon, ExecutionShowHide showHide, bool wasUsingProp, bool isUsingProp)
{
  ?CG_Execution_CheckShowHideEffects@@YAXW4LocalClientNum_t@@HPEAUcharacterInfo_t@@PEAUDObj@@AEBUWeapon@@W4ExecutionShowHide@@_N5@Z(localClientNum, entityNum, ci, obj, weapon, showHide, wasUsingProp, isUsingProp);
}

/*
==============
CgExecutionCamWorkerResult::Set
==============
*/

void __fastcall CgExecutionCamWorkerResult::Set(CgExecutionCamWorkerResult *this, const CgExecutionCamWorkerCmd *rhs)
{
  ?Set@CgExecutionCamWorkerResult@@QEAAXAEBUCgExecutionCamWorkerCmd@@@Z(this, rhs);
}

/*
==============
CG_Execution_BeginCamSelection
==============
*/
__int64 CG_Execution_BeginCamSelection(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  __int64 v3; 
  int AttackerEntNum; 
  int VictimEntNum; 
  const XCam *StanceXCam; 
  const dvar_t *v7; 
  int integer; 
  scr_string_t cam_attacker_l; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  const CG_Execution_BeginCamSelection::__l2::ExecutionCamName *v13; 
  unsigned int v14; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  const char *name; 
  __int64 v19; 
  signed __int64 v20; 
  char v21; 
  char v22; 
  unsigned __int8 v24; 
  __int64 victimEnt; 
  __int64 v27; 
  unsigned int v28; 
  int v29; 
  int attackerEnt; 
  vec3_t worldTraceStart; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> outXCamTransform; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> outAttackerTransform; 

  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Execution_BeginCamSelection");
  if ( !CG_Execution_GetXCamSceneTransform((LocalClientNum_t)v3, ps, 0, &outXCamTransform, &outAttackerTransform) )
    goto LABEL_58;
  AttackerEntNum = BG_Execution_GetAttackerEntNum(ps);
  attackerEnt = AttackerEntNum;
  if ( AttackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 218, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  VictimEntNum = BG_Execution_GetVictimEntNum(ps);
  v29 = VictimEntNum;
  if ( VictimEntNum == 2047 )
  {
    LODWORD(v27) = 2047;
    LODWORD(victimEnt) = 2047;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 220, ASSERT_TYPE_ASSERT, "( victimEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "victimEntNum", "ENTITYNUM_NONE", victimEnt, v27) )
      __debugbreak();
  }
  if ( CG_Execution_CalcRootAbs((LocalClientNum_t)v3, AttackerEntNum, 0, 0.0, 0, &in1) )
  {
    MatrixMultiply43(&in1, &outXCamTransform, &out);
    worldTraceStart.v[0] = out.m[3].v[0];
    worldTraceStart.v[1] = out.m[3].v[1];
    worldTraceStart.v[2] = out.m[3].v[2] + 45.0;
    if ( s_executionWorkersRunning[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 236, ASSERT_TYPE_ASSERT, "(!s_executionWorkersRunning[localClientNum])", (const char *)&queryFormat, "!s_executionWorkersRunning[localClientNum]") )
      __debugbreak();
    s_executionWorkersRunning[v3] = 1;
    s_executionWorkerResultCount[v3] = 0;
    StanceXCam = CG_Execution_GetStanceXCam(ps->activeExecution, (const ExecutionVictimStance)ps->activeExecutionVictimStance);
    if ( !StanceXCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 241, ASSERT_TYPE_ASSERT, "( xCam ) != ( nullptr )", "%s != %s\n\t%p, %p", "xCam", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( StanceXCam->cameraCount != 6 )
    {
      LODWORD(v27) = 6;
      LODWORD(victimEnt) = StanceXCam->cameraCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 242, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (6) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "EXECUTION_SUBCAMERA_COUNT", victimEnt, v27) )
        __debugbreak();
    }
    if ( StanceXCam->cameraCount != 6 )
    {
      LODWORD(v27) = 6;
      LODWORD(victimEnt) = StanceXCam->cameraCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 263, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (( sizeof( *array_counter( s_camNamesAttacker ) ) + 0 ) + ( sizeof( *array_counter( s_camNamesVictim ) ) + 0 )) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "(ARRAY_COUNT( s_camNamesAttacker ) + ARRAY_COUNT( s_camNamesVictim ))", victimEnt, v27) )
        __debugbreak();
    }
    v7 = DCONST_DVARINT_execution_camera_override;
    if ( !DCONST_DVARINT_execution_camera_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_camera_override") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    if ( !integer )
      goto LABEL_37;
    switch ( integer )
    {
      case 1:
        cam_attacker_l = scr_const.cam_attacker_l;
        break;
      case 2:
        cam_attacker_l = scr_const.cam_attacker_c;
        break;
      case 3:
        cam_attacker_l = scr_const.cam_attacker_r;
        break;
      case 4:
        cam_attacker_l = scr_const.cam_victim_l;
        break;
      case 5:
        cam_attacker_l = scr_const.cam_victim_c;
        break;
      case 6:
        cam_attacker_l = scr_const.cam_victim_r;
        break;
      default:
        goto LABEL_37;
    }
    v10 = SL_ConvertToString(cam_attacker_l);
    if ( v10 && (v11 = 0, StanceXCam->cameraCount > 0) )
    {
      v12 = 0i64;
      while ( I_strcmp(v10, StanceXCam->cameras[v12].name) )
      {
        ++v11;
        ++v12;
        if ( v11 >= StanceXCam->cameraCount )
          goto LABEL_37;
      }
      CG_Execution_DispatchCamTraceWorkers((LocalClientNum_t)v3, &outXCamTransform, &worldTraceStart, StanceXCam, 0, v11, AttackerEntNum, VictimEntNum);
      v24 = 1;
    }
    else
    {
LABEL_37:
      v13 = s_camNamesAttacker;
      if ( ps->activeExecutionIsVictim )
        v13 = s_camNamesVictim;
      v14 = 0;
      v28 = 0;
      do
      {
        v15 = SL_ConvertToString((scr_string_t)*v13->name);
        v16 = 0;
        if ( StanceXCam->cameraCount > 0 )
        {
          v17 = 0i64;
          do
          {
            name = StanceXCam->cameras[v17].name;
            v19 = 0x7FFFFFFFi64;
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            v20 = v15 - name;
            do
            {
              v21 = name[v20];
              v22 = *name++;
              if ( !v19-- )
                break;
              if ( v21 != v22 )
                goto LABEL_53;
            }
            while ( v21 );
            CG_Execution_DispatchCamTraceWorkers((LocalClientNum_t)v3, &outXCamTransform, &worldTraceStart, StanceXCam, v13->isFallback, v16, attackerEnt, v29);
LABEL_53:
            ++v16;
            ++v17;
          }
          while ( v16 < StanceXCam->cameraCount );
          v14 = v28;
        }
        v28 = ++v14;
        ++v13;
      }
      while ( v14 < 3 );
      v24 = 1;
    }
  }
  else
  {
LABEL_58:
    v24 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v24;
}

/*
==============
CG_Execution_CalcRootAbs
==============
*/
char CG_Execution_CalcRootAbs(LocalClientNum_t localClientNum, int entNum, bool isVictim, const float time, bool shouldAssert, tmat43_t<vec3_t> *outLocalToAttacker)
{
  centity_t *Entity; 
  const char *fmt; 
  int v11; 
  unsigned __int32 v12; 
  unsigned int v13; 
  DObj *v14; 
  __int64 v16; 
  __int64 v17; 
  unsigned int outAnimIndex[4]; 

  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 74, ASSERT_TYPE_ASSERT, "( cent ) != ( nullptr )", "%s != %s\n\t%p, %p", "cent", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 75, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  outAnimIndex[0] = 0;
  if ( BG_Execution_GetActiveAnimIndex(&Entity->nextState, isVictim, outAnimIndex, NULL) )
  {
    if ( (unsigned int)entNum > 0x9E4 )
    {
      LODWORD(v17) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v17) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v12 = entNum + 2533 * localClientNum;
    if ( v12 >= 0x13CA )
    {
      LODWORD(v17) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
        __debugbreak();
    }
    v13 = clientObjMap[v12];
    if ( v13 )
    {
      if ( v13 >= (unsigned int)s_objCount )
      {
        LODWORD(v17) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
          __debugbreak();
      }
      v14 = (DObj *)s_objBuf[v13];
      if ( v14 )
      {
        BG_Execution_CalcRootAbs(v14, outAnimIndex[0], time, outLocalToAttacker);
        return 1;
      }
    }
    if ( shouldAssert )
    {
      fmt = "CG_Execution_CalcRootAbs: failed to retrieve obj for entity %i";
      v11 = 92;
LABEL_27:
      LODWORD(v16) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", v11, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, v16) )
        __debugbreak();
    }
  }
  else if ( shouldAssert )
  {
    fmt = "CG_Execution_CalcRootAbs: failed to retrieve animIndex for entity %i";
    v11 = 82;
    goto LABEL_27;
  }
  return 0;
}

/*
==============
CG_Execution_CheckEndCamera
==============
*/
void CG_Execution_CheckEndCamera(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  bool IsActive; 
  unsigned int activeExecution; 
  bool v6; 
  int AttackerEntNum; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  int activeExecutionStartTime; 
  int deltaTime; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v2 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      IsActive = CG_Execution_IsActive(localClientNum);
      activeExecution = LocalClientGlobals->activeExecution;
      v6 = IsActive;
      AttackerEntNum = BG_Execution_GetAttackerEntNum(&LocalClientGlobals->predictedPlayerState);
      if ( activeExecution != 255 && (!v6 || AttackerEntNum != LocalClientGlobals->activeExecutionAttacker) )
      {
        if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
        {
          deltaTime = LocalClientGlobals->predictedPlayerState.deltaTime;
          activeExecutionStartTime = LocalClientGlobals->predictedPlayerState.activeExecutionStartTime;
          v11 = LocalClientGlobals->predictedPlayerState.activeExecution;
          LODWORD(v10) = LocalClientGlobals->predictedPlayerState.activeExecutionPartnerEntNum;
          LODWORD(v9) = LocalClientGlobals->predictedPlayerState.activeExecutionIsVictim;
          LODWORD(fmt) = LocalClientGlobals->predictedPlayerState.clientNum;
          Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", (unsigned int)LocalClientGlobals->predictedPlayerState.serverTime, "EndCamera", fmt, v9, v10, v11, activeExecutionStartTime, deltaTime);
        }
        XCamData::Clear(&LocalClientGlobals->xCam);
        LocalClientGlobals->activeExecution = 255;
        LocalClientGlobals->activeExecutionAttacker = 2047;
      }
    }
  }
}

/*
==============
CG_Execution_CheckShowHideEffects
==============
*/
void CG_Execution_CheckShowHideEffects(LocalClientNum_t localClientNum, int entityNum, characterInfo_t *ci, DObj *obj, const Weapon *weapon, ExecutionShowHide showHide, bool wasUsingProp, bool isUsingProp)
{
  const dvar_t *v12; 
  centity_t *Entity; 
  bool v14; 
  bool v15; 
  bool v16; 
  const ParticleSystemDef *m_particleSystemDef; 
  cg_t *LocalClientGlobals; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 inOutIndex[8]; 
  FXRegisteredDef def; 
  int modelIndex; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 664, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)showHide >= COUNT )
  {
    LODWORD(v20) = 2;
    LODWORD(v19) = showHide;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( showHide ) ) < (unsigned)( static_cast<int>( ExecutionShowHide::COUNT ) )", "static_cast<int>( showHide ) doesn't index static_cast<int>( ExecutionShowHide::COUNT )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v12 = DVARBOOL_killswitch_execution_prop_showhide_vfx_enabled;
  if ( !DVARBOOL_killswitch_execution_prop_showhide_vfx_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_prop_showhide_vfx_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled )
    goto LABEL_41;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
    goto LABEL_41;
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( (Entity->flags & 1) == 0 || !obj )
    goto LABEL_41;
  v14 = wasUsingProp && !isUsingProp && showHide == MOVEMENT;
  v15 = !wasUsingProp && isUsingProp && showHide == DODGE;
  if ( v14 )
    v16 = !ci->executionPropHidePending;
  else
    v16 = !v15;
  if ( !v16 )
  {
    inOutIndex[0] = -2;
    if ( DObjGetBoneIndexInternal_49(obj, scr_const.j_exec_prop_smoke, inOutIndex, &modelIndex) && inOutIndex[0] != 0xFF && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
    {
      if ( weapon->weaponIdx )
      {
        def.m_particleSystemDef = BG_GetWeaponEffect(weapon, 0, 16 * !v15 + 168i64).particleSystemDef;
        if ( def.m_particleSystemDef )
          goto LABEL_39;
      }
      m_particleSystemDef = cgMedia.fxExecutionPropNinjaSmokeExit.m_particleSystemDef;
      if ( v15 )
        m_particleSystemDef = cgMedia.fxExecutionPropNinjaSmokeEnter.m_particleSystemDef;
      def.m_particleSystemDef = m_particleSystemDef;
      if ( m_particleSystemDef )
      {
LABEL_39:
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, &outOrigin, &outTagMat);
        if ( v15 )
          ci->executionPropHidePending = 1;
        return;
      }
    }
LABEL_41:
    ci->executionPropHidePending = 0;
  }
}

/*
==============
CG_Execution_Debug
==============
*/
void CG_Execution_Debug(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v4; 
  int AttackerEntNum; 
  const cpose_t *PoseExtended; 
  const vec3_t *v7; 
  int VictimEntNum; 
  const cpose_t *v9; 
  const vec3_t *v10; 
  double ScrubTime; 
  __int64 v12; 
  __int64 v13; 
  vec3_t center; 
  vec3_t direction; 
  vec3_t origin; 
  vec3_t outProjectedPoint; 
  vec4_t angles; 
  tmat43_t<vec3_t> outAttackerTransform; 
  XCamValues outValues; 
  tmat43_t<vec3_t> outXCamTransform; 
  tmat43_t<vec3_t> v22; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CG_Execution_IsDebugActive() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    BG_Camera_GetDefIndex("camera_custom_orbit_1", &LocalClientGlobals->predictedPlayerState.cameraTypeIndex);
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
        __debugbreak();
      v4 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.integer == 1 )
      {
        if ( LocalClientGlobals->predictedPlayerState.activeExecution == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 872, ASSERT_TYPE_ASSERT, "( ps->activeExecution ) != ( ((1<<8)-1) )", "%s != %s\n\t%i, %i", "ps->activeExecution", "INVALID_EXECUTION_DEF", 255, 255) )
          __debugbreak();
        CG_Execution_GetXCamSceneTransform(localClientNum, p_predictedPlayerState, 0, &outXCamTransform, &outAttackerTransform);
        center.v[0] = outXCamTransform.m[3].v[0];
        center.v[2] = outXCamTransform.m[3].v[2] + zOffset_0;
        center.v[1] = outXCamTransform.m[3].v[1];
        AxisToAngles((const tmat33_t<vec3_t> *)&outXCamTransform, (vec3_t *)&angles);
        CG_DebugSphere(&center, currentRadius, &colorBlue, 1, 0);
        CG_DebugAxis((const tmat33_t<vec3_t> *)&outXCamTransform, &center, currentRadius, 1, 0);
        AttackerEntNum = BG_Execution_GetAttackerEntNum(p_predictedPlayerState);
        if ( AttackerEntNum == 2047 )
        {
          LODWORD(v13) = 2047;
          LODWORD(v12) = 2047;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 894, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", v12, v13) )
            __debugbreak();
        }
        PoseExtended = CG_GetPoseExtended(localClientNum, AttackerEntNum, 1);
        v7 = (const vec3_t *)PoseExtended;
        if ( PoseExtended )
        {
          CG_GetPoseOrigin(PoseExtended, &center);
          center.v[2] = center.v[2] + zOffset_0;
          AnglesToAxis(v7 + 6, (tmat33_t<vec3_t> *)&outAttackerTransform);
          CG_DebugSphere(&center, currentRadius, &colorGreen, 1, 0);
          CG_DebugAxis((const tmat33_t<vec3_t> *)&outAttackerTransform, &center, currentRadius, 1, 0);
        }
        VictimEntNum = BG_Execution_GetVictimEntNum(p_predictedPlayerState);
        if ( VictimEntNum == 2047 )
        {
          LODWORD(v13) = 2047;
          LODWORD(v12) = 2047;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 911, ASSERT_TYPE_ASSERT, "( victimEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "victimEntNum", "ENTITYNUM_NONE", v12, v13) )
            __debugbreak();
        }
        v9 = CG_GetPoseExtended(localClientNum, VictimEntNum, 1);
        v10 = (const vec3_t *)v9;
        if ( v9 )
        {
          CG_GetPoseOrigin(v9, &center);
          center.v[2] = center.v[2] + zOffset_0;
          AnglesToAxis(v10 + 6, (tmat33_t<vec3_t> *)&outAttackerTransform);
          CG_DebugSphere(&center, currentRadius, &colorRed, 1, 0);
          CG_DebugAxis((const tmat33_t<vec3_t> *)&outAttackerTransform, &center, currentRadius, 1, 0);
        }
        if ( LocalClientGlobals->predictedPlayerState.activeExecution != 255 )
        {
          if ( !XCamData::IsActive(&LocalClientGlobals->executionXCamDebug) )
            CG_Execution_StartXCam(localClientNum, p_predictedPlayerState, &LocalClientGlobals->executionXCamDebug);
          if ( XCamData::IsActive(&LocalClientGlobals->executionXCamDebug) )
          {
            if ( CG_Execution_GetXCamSceneTransform(localClientNum, p_predictedPlayerState, 0, &outAttackerTransform, &v22) )
            {
              Axis43ToQuat(&outAttackerTransform, &angles);
              XCamData::SetSceneTransform(&LocalClientGlobals->executionXCamDebug, &outAttackerTransform.m[3], &angles);
            }
            ScrubTime = BG_Execution_GetScrubTime(LocalClientGlobals->predictedPlayerState.activeExecution, (const ExecutionVictimStance)LocalClientGlobals->predictedPlayerState.activeExecutionVictimStance, LocalClientGlobals->predictedPlayerState.activeExecutionStartTime, LocalClientGlobals->time, LocalClientGlobals->predictedPlayerState.deltaTime);
            XCamData::SetAnimTime(&LocalClientGlobals->executionXCamDebug, *(float *)&ScrubTime);
          }
        }
        XCamValues::XCamValues(&outValues);
        XCamData::CalcValues(&LocalClientGlobals->executionXCamDebug, LocalClientGlobals->time, 0);
        XCamData::GetValues(&LocalClientGlobals->executionXCamDebug, &outValues);
        origin.v[0] = (float)(length_0 * outValues.axis.m[0].v[0]) + outValues.origin.v[0];
        origin.v[1] = (float)(length_0 * outValues.axis.m[0].v[1]) + outValues.origin.v[1];
        LODWORD(direction.v[0]) = LODWORD(outValues.axis.m[0].v[0]) ^ _xmm;
        origin.v[2] = (float)(length_0 * outValues.axis.m[0].v[2]) + outValues.origin.v[2];
        LODWORD(direction.v[2]) = LODWORD(outValues.axis.m[0].v[2]) ^ _xmm;
        LODWORD(direction.v[1]) = LODWORD(outValues.axis.m[0].v[1]) ^ _xmm;
        CG_DebugCone(&origin, &direction, radius_1, length_0, &colorCyan, 1, 0);
        center.v[0] = 0.0;
        center.v[1] = 0.0;
        center.v[2] = FLOAT_1_0;
        ProjectPointOnPlane(&outValues.origin, &outXCamTransform.m[3], &center, &outProjectedPoint);
        CG_DebugSphere(&outProjectedPoint, currentRadius, &colorCyan, 1, 0);
        CG_DebugAxis(&outValues.axis, &outProjectedPoint, currentRadius, 1, 0);
      }
    }
    else
    {
      XCamData::Clear(&LocalClientGlobals->executionXCamDebug);
    }
  }
}

/*
==============
CG_Execution_DispatchCamTraceWorkers
==============
*/
void CG_Execution_DispatchCamTraceWorkers(LocalClientNum_t localClientNum, const tmat43_t<vec3_t> *worldToScene, const vec3_t *worldTraceStart, const XCam *xcam, const bool isFallback, const int subCamIndex, const int attackerEnt, const int victimEnt)
{
  int i; 
  __int64 v13; 
  __int64 v15; 
  int cameraCount; 
  __int64 data; 
  float v18; 
  __int64 v19; 
  float v20; 
  int v21; 
  int v22; 
  int v23; 
  LocalClientNum_t v24; 
  bool v25; 
  vec4_t out; 
  XCamValues outValues; 
  XCamData v28; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Execution_DispatchCamTraceWorkers");
  XCamData::XCamData(&v28, localClientNum);
  XCamData::Init(&v28, xcam);
  if ( (unsigned int)subCamIndex >= xcam->cameraCount )
  {
    cameraCount = xcam->cameraCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( subCamIndex ) < (unsigned)( xcam->cameraCount )", "subCamIndex doesn't index xcam->cameraCount\n\t%i not in [0, %i)", subCamIndex, cameraCount) )
      __debugbreak();
  }
  if ( (unsigned int)subCamIndex >= 6 )
  {
    LODWORD(v15) = 6;
    LODWORD(v13) = subCamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( subCamIndex ) < (unsigned)( (6) )", "subCamIndex doesn't index EXECUTION_SUBCAMERA_COUNT\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  XCamData::SetActiveSubCamera(&v28, subCamIndex);
  Axis43ToQuat(worldToScene, &out);
  XCamData::SetSceneTransform(&v28, &worldToScene->m[3], &out);
  for ( i = 0; i <= 15; ++i )
  {
    XCamData::SetAnimTime(&v28, (float)i * 0.06666667);
    XCamValues::XCamValues(&outValues);
    XCamData::CalcValues(&v28, 0, 0);
    XCamData::GetValues(&v28, &outValues);
    data = *(_QWORD *)worldTraceStart->v;
    v18 = worldTraceStart->v[2];
    v19 = *(__int64 *)outValues.origin.v;
    v20 = outValues.origin.v[2];
    v21 = attackerEnt;
    v22 = victimEnt;
    v23 = subCamIndex;
    v25 = isFallback;
    v24 = localClientNum;
    Sys_AddWorkerCmd(WRKCMD_EXECUTION_CAM, &data);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Execution_ExecuteWorkerThread
==============
*/
void CG_Execution_ExecuteWorkerThread(const void *const cmdInfo)
{
  __int64 v1; 
  volatile signed __int32 *v3; 
  unsigned __int32 v4; 
  double v5; 
  Physics_WorldId v6; 
  CgExecutionCamWorkerResult *v7; 
  char v9; 
  hknpShape *ShapeSphere; 
  float v12; 
  float v13; 
  float v14; 
  Physics_ShapecastExtendedData *extendedData; 
  Physics_ShapecastExtendedData v20; 
  PhysicsQuery_ShapecastHit hit; 

  v1 = *((int *)cmdInfo + 9);
  v3 = &s_executionWorkerResultCount[v1];
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_executionWorkerResultCount[v1]) )
    __debugbreak();
  v4 = _InterlockedExchangeAdd(v3, 1u);
  if ( v4 >= 0x60 )
  {
    LODWORD(extendedData) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 813, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ((3) * (16) * LOCAL_CLIENT_COUNT) )", "index doesn't index MAX_EXECUTION_CAM_WORKER_COUNT\n\t%i not in [0, %i)", extendedData, 96) )
      __debugbreak();
  }
  v5 = *(double *)cmdInfo;
  v6 = 3 * v1 + 2;
  v20.simplifyStart = 0;
  v20.contents = 8391313;
  v7 = &s_executionWorkerResults[v1][v4];
  v20.ignoreBodies = NULL;
  *(double *)v7->start.v = v5;
  v7->start.v[2] = *((float *)cmdInfo + 2);
  *(double *)v7->end.v = *(double *)((char *)cmdInfo + 12);
  _XMM0 = LODWORD(FLOAT_0_016000001);
  v7->end.v[2] = *((float *)cmdInfo + 5);
  v7->skipEnts[0] = *((_DWORD *)cmdInfo + 6);
  v7->skipEnts[1] = *((_DWORD *)cmdInfo + 7);
  v7->subCamIndex = *((_DWORD *)cmdInfo + 8);
  v7->localClientNum = *((_DWORD *)cmdInfo + 9);
  v9 = *((_BYTE *)cmdInfo + 40);
  v20.accuracy = FLOAT_0_016000001;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v7->isFallback = v9;
  v20.startTolerance = 0.0;
  v20.collisionBuffer = 0.0;
  v7->penetrateDist = 3.4028235e38;
  *(_OWORD *)&v20.nonBrushShape = _XMM0;
  v20.phaseSelection = All;
  v20.permitOutwardTrace = 0;
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, 10.0, NULL, 0);
  if ( !ShapeSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 825, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastClosest(v6, ShapeSphere, (const vec3_t *)cmdInfo, (const vec3_t *)cmdInfo + 1, &quat_identity, &v20, &hit);
  Physics_ReleaseShape(v6, ShapeSphere, 1);
  v12 = *((float *)cmdInfo + 3) - *(float *)cmdInfo;
  v13 = *((float *)cmdInfo + 5) - *((float *)cmdInfo + 2);
  v14 = *((float *)cmdInfo + 4) - *((float *)cmdInfo + 1);
  _XMM0 = hit.isValid;
  __asm { vpcmpeqd xmm3, xmm0, xmm2 }
  _XMM0 = LODWORD(hit.fraction);
  __asm { vblendvps xmm7, xmm0, xmm6, xmm3 }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM7, 0.0, 1.0);
  v7->penetrateDist = (float)(1.0 - *(float *)&_XMM0) * fsqrt((float)((float)(v14 * v14) + (float)(v12 * v12)) + (float)(v13 * v13));
  v7->fraction = *(float *)&_XMM7;
}

/*
==============
CG_Execution_GetStanceXCam
==============
*/
XCam *CG_Execution_GetStanceXCam(const unsigned int execution, const ExecutionVictimStance stance)
{
  const ExecutionDef *Def; 
  XCam *xcamVictimStand; 
  __int64 v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 135, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  Def = BG_Execution_GetDef(execution);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 139, ASSERT_TYPE_ASSERT, "( execDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "execDef", "nullptr", NULL, NULL) )
    __debugbreak();
  switch ( stance )
  {
    case HALF:
      xcamVictimStand = Def->xcamVictimStand;
      break;
    case HALF_HALF:
      xcamVictimStand = Def->xcamVictimProne;
      break;
    case LONG:
      xcamVictimStand = Def->xcamVictimLastStand;
      break;
    default:
      xcamVictimStand = Def->xcamVictimStand;
      LODWORD(v7) = stance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Execution_StartXCam: Unexpected ExecutionVictimStance: %i", v7) )
        __debugbreak();
      break;
  }
  if ( !xcamVictimStand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 162, ASSERT_TYPE_ASSERT, "( xCam ) != ( nullptr )", "%s != %s\n\t%p, %p", "xCam", "nullptr", NULL, NULL) )
    __debugbreak();
  return xcamVictimStand;
}

/*
==============
CG_Execution_GetXCamSceneTransform
==============
*/
char CG_Execution_GetXCamSceneTransform(LocalClientNum_t localClientNum, const playerState_s *const ps, bool shouldAssert, tmat43_t<vec3_t> *outXCamTransform, tmat43_t<vec3_t> *outAttackerTransform)
{
  cg_t *LocalClientGlobals; 
  double ScrubTime; 
  int AttackerEntNum; 
  char result; 
  const cpose_t *PoseExtended; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> in; 
  tmat43_t<vec3_t> out; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ScrubTime = BG_Execution_GetScrubTime(ps->activeExecution, (const ExecutionVictimStance)ps->activeExecutionVictimStance, ps->activeExecutionStartTime, LocalClientGlobals->time, ps->deltaTime);
  AttackerEntNum = BG_Execution_GetAttackerEntNum(ps);
  if ( AttackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 111, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  result = CG_Execution_CalcRootAbs(localClientNum, AttackerEntNum, 0, *(const float *)&ScrubTime, shouldAssert, &in);
  if ( result )
  {
    MatrixInverseOrthogonal43(&in, &out);
    PoseExtended = CG_GetPoseExtended(localClientNum, AttackerEntNum, 1);
    if ( !PoseExtended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 122, ASSERT_TYPE_ASSERT, "( attackerPose ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPose", "nullptr", NULL, NULL) )
      __debugbreak();
    CG_GetPoseOrigin(PoseExtended, &outOrigin);
    AnglesAndOriginToMatrix43(&PoseExtended->angles, &outOrigin, outAttackerTransform);
    MatrixMultiply43(&out, outAttackerTransform, outXCamTransform);
    return 1;
  }
  return result;
}

/*
==============
CG_Execution_Init
==============
*/
void CG_Execution_Init(void)
{
  *(_QWORD *)s_fireWeaponCount = 0i64;
}

/*
==============
CG_Execution_IsActive
==============
*/
bool CG_Execution_IsActive(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  int AttackerEntNum; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.activeExecution == 255 )
    return 0;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  Handler = CgHandler::getHandler(localClientNum);
  if ( BG_GetRemoteControlledVehicleEntityNum(p_predictedPlayerState, Handler) != 2047 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 1u) || (p_predictedPlayerState->linkFlags.m_flags[0] & 4) != 0 || CG_View_IsKillCamEntityView(localClientNum) )
    return 0;
  AttackerEntNum = BG_Execution_GetAttackerEntNum(&LocalClientGlobals->predictedPlayerState);
  if ( AttackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 475, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  return CG_GetPoseExtended(localClientNum, AttackerEntNum, 1) != NULL;
}

/*
==============
CG_Execution_IsDebugActive
==============
*/
bool CG_Execution_IsDebugActive()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
    return 0;
  v0 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  v1 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (unsigned int)(v1->current.integer - 1) <= 1;
}

/*
==============
CG_Execution_ProcessFireWeapon
==============
*/
void CG_Execution_ProcessFireWeapon(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  int *v4; 
  ExecFireWeapon *v5; 
  __int64 entityNum; 
  const characterInfo_t *CharacterInfo; 
  __int64 v8; 
  CgEntitySystem *v9; 
  __int64 v10; 
  const TagPair *v11; 
  Weapon *weapon; 
  __int64 isAlternate; 
  TagPair v14; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 635, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_fireWeaponCount ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_fireWeaponCount )\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v3 = 0;
  v4 = &s_fireWeaponCount[v1];
  if ( *v4 <= 0 )
  {
    *v4 = 0;
  }
  else
  {
    v5 = s_fireWeaponQueue[v1];
    do
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(isAlternate) = 2;
        LODWORD(weapon) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 638, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_fireWeaponQueue ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_fireWeaponQueue )\n\t%i not in [0, %i)", weapon, isAlternate) )
          __debugbreak();
      }
      if ( v3 >= 8 )
      {
        LODWORD(isAlternate) = 8;
        LODWORD(weapon) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 639, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_fireWeaponQueue[localClientNum] ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_fireWeaponQueue[localClientNum] )\n\t%i not in [0, %i)", weapon, isAlternate) )
          __debugbreak();
      }
      entityNum = v5->entityNum;
      if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5->entityNum) )
      {
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( (unsigned int)entityNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(isAlternate) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(weapon) = entityNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", weapon, isAlternate) )
              __debugbreak();
          }
          CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * entityNum);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, entityNum);
        }
        if ( CharacterInfo && CharacterInfo->execution != 255 )
        {
          v8 = v5->entityNum;
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(isAlternate) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isAlternate) )
              __debugbreak();
          }
          if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(isAlternate) = CgEntitySystem::ms_allocatedCount;
            LODWORD(weapon) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", weapon, isAlternate) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v1] )
          {
            LODWORD(isAlternate) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isAlternate) )
              __debugbreak();
          }
          v9 = CgEntitySystem::ms_entitySystemArray[v1];
          if ( (unsigned int)v8 >= 0x800 )
          {
            LODWORD(isAlternate) = 2048;
            LODWORD(weapon) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", weapon, isAlternate) )
              __debugbreak();
          }
          v10 = (__int64)&v9->m_entities[v8];
          if ( (*(_BYTE *)(v10 + 648) & 1) != 0 )
          {
            TagPair::TagPair(&v14, scr_const.tag_flash, (scr_string_t)0);
            CG_FireWeapon((LocalClientNum_t)v1, (centity_t *)v10, 41, -1, *v11, &CharacterInfo->dobjExecutionWeapon, 0, WEAPON_HAND_DEFAULT, 0, 0, 0);
          }
        }
      }
      ++v3;
      ++v5;
    }
    while ( (int)v3 < *v4 );
    *v4 = 0;
  }
}

/*
==============
CG_Execution_QueueFireWeapon
==============
*/
void CG_Execution_QueueFireWeapon(LocalClientNum_t localClientNum, int entityNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v6; 
  const char *WeaponNameComplete; 
  __int64 v8; 
  __int16 v9; 
  int fmt; 
  BOOL activeExecutionIsVictim; 
  int activeExecutionPartnerEntNum; 
  unsigned int activeExecution; 
  int activeExecutionStartTime; 
  int deltaTime; 
  char output[256]; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CharacterInfo = cg_t::TryGetCharacterInfo(LocalClientGlobals, entityNum);
  v6 = CharacterInfo;
  if ( CharacterInfo && CharacterInfo->execution != 255 && (CG_GetEntity((const LocalClientNum_t)v2, entityNum)->flags & 1) != 0 && v6->dobjExecutionWeapon.weaponIdx )
  {
    if ( CG_Weapons_IsBulletWeapon(&v6->dobjExecutionWeapon, 0) )
    {
      if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
      {
        deltaTime = LocalClientGlobals->predictedPlayerState.deltaTime;
        activeExecutionStartTime = LocalClientGlobals->predictedPlayerState.activeExecutionStartTime;
        activeExecution = LocalClientGlobals->predictedPlayerState.activeExecution;
        activeExecutionPartnerEntNum = LocalClientGlobals->predictedPlayerState.activeExecutionPartnerEntNum;
        activeExecutionIsVictim = LocalClientGlobals->predictedPlayerState.activeExecutionIsVictim;
        fmt = LocalClientGlobals->predictedPlayerState.clientNum;
        Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", (unsigned int)LocalClientGlobals->predictedPlayerState.serverTime, "FireWeapon", fmt, activeExecutionIsVictim, activeExecutionPartnerEntNum, activeExecution, activeExecutionStartTime, deltaTime);
      }
      v8 = s_fireWeaponCount[v2];
      if ( (int)v8 < 8 )
      {
        v9 = truncate_cast<short,int>(entityNum);
        ++s_fireWeaponCount[v2];
        s_fireWeaponQueue[v2][v8].entityNum = v9;
      }
    }
    else
    {
      WeaponNameComplete = BG_GetWeaponNameComplete(&v6->dobjExecutionWeapon, 0, output, 0x100u);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 610, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Weapon '%s' was fired via an execution 'exec_fire' notetrack, but is not of type WEAPTYPE_BULLET.", WeaponNameComplete) )
        __debugbreak();
    }
  }
}

/*
==============
CG_Execution_StartWorkers
==============
*/
void CG_Execution_StartWorkers(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  bool IsActive; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v2 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      IsActive = CG_Execution_IsActive(localClientNum);
      if ( LocalClientGlobals->activeExecution == 255 && IsActive )
      {
        if ( (unsigned __int8)CG_Execution_BeginCamSelection(localClientNum, &LocalClientGlobals->predictedPlayerState) )
        {
          LocalClientGlobals->activeExecution = LocalClientGlobals->predictedPlayerState.activeExecution;
          LocalClientGlobals->activeExecutionAttacker = BG_Execution_GetAttackerEntNum(&LocalClientGlobals->predictedPlayerState);
        }
      }
    }
  }
}

/*
==============
CG_Execution_StartXCam
==============
*/
void CG_Execution_StartXCam(LocalClientNum_t localClientNum, const playerState_s *const ps, XCamData *outXCamData)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  XCamData *v7; 
  const playerState_s *v8; 
  unsigned __int64 v9; 
  const dvar_t *v10; 
  __int64 v11; 
  int v12; 
  volatile int v13; 
  float v14; 
  float *v15; 
  __int64 v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  int v22; 
  float *v23; 
  int v24; 
  __int64 v25; 
  float v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  XCam *StanceXCam; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  vec3_t end; 
  __int128 v39; 
  float v40; 
  float v41; 
  int subCamera[2]; 
  __int64 v43; 
  __int64 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  v6 = DCONST_DVARINT_execution_debug;
  v7 = outXCamData;
  v8 = ps;
  v9 = localClientNum;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 3 )
    goto LABEL_9;
  v10 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == 4 )
  {
LABEL_9:
    LODWORD(v33) = v8->activeExecutionPartnerEntNum;
    LODWORD(v32) = v8->activeExecutionIsVictim;
    LODWORD(fmt) = v8->clientNum;
    Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", (unsigned int)v8->serverTime, "StartXCam", fmt, v32, v33, v8->activeExecution, v8->activeExecutionStartTime, v8->deltaTime);
  }
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_EXECUTION_CAM);
  if ( v9 >= 2 )
  {
    j___report_rangecheckfailure(v11);
    JUMPOUT(0x141CC698Ei64);
  }
  s_executionWorkersRunning[v9] = 0;
  v12 = s_executionWorkerResultCount[v9];
  v46 = v4;
  v13 = 0;
  v14 = FLOAT_3_4028235e38;
  v40 = FLOAT_3_4028235e38;
  v41 = FLOAT_3_4028235e38;
  v39 = _xmm;
  if ( v12 > 0 )
  {
    v45 = v5;
    v47 = v3;
    v15 = &s_executionWorkerResults[0][0].end.v[1248 * v9 + 2];
    do
    {
      if ( *((_DWORD *)v15 + 4) != (_DWORD)v9 )
      {
        LODWORD(v35) = v9;
        *(float *)&v34 = v15[4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 347, ASSERT_TYPE_ASSERT, "( result->localClientNum ) == ( localClientNum )", "%s == %s\n\t%i, %i", "result->localClientNum", "localClientNum", v34, v35) )
          __debugbreak();
      }
      v16 = *((int *)v15 + 3);
      if ( *((float *)&v39 + v16) >= 3.4028235e38 )
      {
        *((_DWORD *)&v39 + v16) = 0;
        if ( *((_BYTE *)v15 + 20) )
        {
          v17 = DVARFLT_execution_camera_fallback_bias;
          if ( !DVARFLT_execution_camera_fallback_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_camera_fallback_bias") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          v16 = *((int *)v15 + 3);
          *((float *)&v39 + v16) = 16.0 * v17->current.value;
        }
      }
      v18 = DCONST_DVARINT_execution_debug;
      *((float *)&v39 + (int)v16) = v15[6] + *((float *)&v39 + (int)v16);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.integer == 1 )
      {
        v19 = v15[7];
        v20 = (float)(*(v15 - 1) - *(v15 - 4)) * v19;
        v21 = *v15 - *(v15 - 3);
        end.v[0] = (float)((float)(*(v15 - 2) - *(v15 - 5)) * v19) + *(v15 - 5);
        end.v[1] = v20 + *(v15 - 4);
        end.v[2] = (float)(v21 * v19) + *(v15 - 3);
        CG_DebugLine((const vec3_t *)(v15 - 5), &end, &colorCyan, 0, 120);
        CG_DebugLine(&end, (const vec3_t *)(v15 - 2), &colorRed, 0, 120);
      }
      ++v13;
      v15 += 13;
    }
    while ( v13 < s_executionWorkerResultCount[v9] );
    v8 = ps;
    v7 = outXCamData;
  }
  v22 = 0;
  s_executionWorkerResultCount[v9] = 0;
  v23 = (float *)&v39;
  *(_QWORD *)subCamera = 0i64;
  v24 = 0;
  v43 = 0i64;
  v25 = 0i64;
  v44 = 0i64;
  do
  {
    v26 = *v23;
    if ( *v23 >= v14 )
    {
      if ( v26 == v14 )
      {
        if ( (unsigned int)v22 >= 6 )
        {
          LODWORD(v33) = 6;
          LODWORD(v32) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( bestSubCamIndexCount ) < (unsigned)( ( sizeof( *array_counter( bestSubCamIndex ) ) + 0 ) )", "bestSubCamIndexCount doesn't index ARRAY_COUNT( bestSubCamIndex )\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        ++v22;
        subCamera[v25++] = v24;
      }
    }
    else
    {
      v22 = 1;
      subCamera[0] = v24;
      v25 = 1i64;
      v14 = v26;
    }
    ++v24;
    ++v23;
  }
  while ( v24 < 6 );
  if ( v22 <= 0 )
  {
    v29 = I_irand(0, 6);
  }
  else
  {
    v27 = I_irand(0, v22);
    v28 = v27;
    if ( (unsigned int)v27 >= 6 )
    {
      LODWORD(v33) = 6;
      LODWORD(v32) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 400, ASSERT_TYPE_ASSERT, "(unsigned)( camIndexIndex ) < (unsigned)( ( sizeof( *array_counter( bestSubCamIndex ) ) + 0 ) )", "camIndexIndex doesn't index ARRAY_COUNT( bestSubCamIndex )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    v29 = subCamera[v28];
  }
  StanceXCam = CG_Execution_GetStanceXCam(v8->activeExecution, (const ExecutionVictimStance)v8->activeExecutionVictimStance);
  if ( !StanceXCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 410, ASSERT_TYPE_ASSERT, "( xCam ) != ( nullptr )", "%s != %s\n\t%p, %p", "xCam", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( StanceXCam->cameraCount != 6 )
  {
    LODWORD(v35) = 6;
    LODWORD(v34) = StanceXCam->cameraCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 411, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (6) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "EXECUTION_SUBCAMERA_COUNT", v34, v35) )
      __debugbreak();
  }
  XCamData::Init(v7, StanceXCam);
  XCamData::SetActiveSubCamera(v7, v29);
}

/*
==============
CG_Execution_WaitForWorkers
==============
*/
void CG_Execution_WaitForWorkers(LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 

  v1 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v2 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_EXECUTION_CAM);
      if ( v1 >= 2 )
      {
        j___report_rangecheckfailure(v3);
        JUMPOUT(0x141CC6BC9i64);
      }
      s_executionWorkersRunning[v1] = 0;
    }
  }
}

/*
==============
CG_Execution_XCamUpdateTransform
==============
*/
void CG_Execution_XCamUpdateTransform(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  XCamData *p_xCam; 
  int AttackerEntNum; 
  __int16 v7; 
  double ScrubTime; 
  int deltaTime; 
  int activeExecutionStartTime; 
  unsigned int activeExecution; 
  int activeExecutionPartnerEntNum; 
  unsigned int serverTime; 
  BOOL activeExecutionIsVictim; 
  int clientNum; 
  const char *v16; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  vec3_t worldOrigin; 
  vec4_t out; 
  tmat43_t<vec3_t> outAttackerTransform; 
  tmat43_t<vec3_t> outXCamTransform; 

  v1 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v2 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      if ( !CG_Execution_IsDebugActive() && LocalClientGlobals->activeExecution != 255 )
      {
        if ( s_executionWorkerResultCount[v1] > 0 && LocalClientGlobals->activeExecutionAttacker == BG_Execution_GetAttackerEntNum(p_predictedPlayerState) )
        {
          p_xCam = &LocalClientGlobals->xCam;
          CG_Execution_StartXCam((LocalClientNum_t)v1, p_predictedPlayerState, &LocalClientGlobals->xCam);
        }
        else
        {
          p_xCam = &LocalClientGlobals->xCam;
        }
        if ( XCamData::IsActive(p_xCam) )
        {
          if ( CG_Execution_GetXCamSceneTransform((LocalClientNum_t)v1, p_predictedPlayerState, 0, &outXCamTransform, &outAttackerTransform) )
          {
            Axis43ToQuat(&outXCamTransform, &out);
            XCamData::SetSceneTransform(p_xCam, &outXCamTransform.m[3], &out);
            worldOrigin.v[0] = outAttackerTransform.m[3].v[0];
            worldOrigin.v[2] = outAttackerTransform.m[3].v[2] + 45.0;
            worldOrigin.v[1] = outAttackerTransform.m[3].v[1];
            AttackerEntNum = BG_Execution_GetAttackerEntNum(p_predictedPlayerState);
            v7 = truncate_cast<short,int>(AttackerEntNum);
            XCamData::SetTraceInfo(p_xCam, &worldOrigin, v7);
          }
          ScrubTime = BG_Execution_GetScrubTime(LocalClientGlobals->predictedPlayerState.activeExecution, (const ExecutionVictimStance)LocalClientGlobals->predictedPlayerState.activeExecutionVictimStance, LocalClientGlobals->predictedPlayerState.activeExecutionStartTime, LocalClientGlobals->time, LocalClientGlobals->predictedPlayerState.deltaTime);
          XCamData::SetAnimTime(p_xCam, *(float *)&ScrubTime);
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
          {
            deltaTime = LocalClientGlobals->predictedPlayerState.deltaTime;
            activeExecutionStartTime = p_predictedPlayerState->activeExecutionStartTime;
            activeExecution = p_predictedPlayerState->activeExecution;
            activeExecutionPartnerEntNum = p_predictedPlayerState->activeExecutionPartnerEntNum;
            serverTime = p_predictedPlayerState->serverTime;
            activeExecutionIsVictim = p_predictedPlayerState->activeExecutionIsVictim;
            clientNum = p_predictedPlayerState->clientNum;
            v16 = j_va("UpdateTransform, time %.3f", *(float *)&ScrubTime);
            v22 = deltaTime;
            v21 = activeExecutionStartTime;
            v20 = activeExecution;
            LODWORD(v19) = activeExecutionPartnerEntNum;
            LODWORD(v18) = activeExecutionIsVictim;
            LODWORD(fmt) = clientNum;
            Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", serverTime, v16, fmt, v18, v19, v20, v21, v22);
          }
        }
      }
    }
  }
}

/*
==============
CgExecutionCamWorkerResult::Set
==============
*/
void CgExecutionCamWorkerResult::Set(CgExecutionCamWorkerResult *this, const CgExecutionCamWorkerCmd *rhs)
{
  this->CgExecutionCamWorkerCmd = *rhs;
}

