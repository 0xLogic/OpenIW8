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

__int64 __fastcall CG_Execution_BeginCamSelection(LocalClientNum_t localClientNum, const playerState_s *const ps, __int64 a3, double _XMM3_8)
{
  __int64 v5; 
  int AttackerEntNum; 
  int VictimEntNum; 
  const XCam *StanceXCam; 
  const dvar_t *v14; 
  int integer; 
  scr_string_t cam_attacker_l; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  const CG_Execution_BeginCamSelection::__l2::ExecutionCamName *v20; 
  unsigned int v21; 
  const char *v22; 
  int v23; 
  __int64 v24; 
  const char *name; 
  __int64 v26; 
  signed __int64 v27; 
  char v28; 
  char v29; 
  unsigned __int8 v31; 
  __int64 victimEnt; 
  __int64 v34; 
  unsigned int v35; 
  int v36; 
  int attackerEnt; 
  vec3_t worldTraceStart; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> outXCamTransform; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> outAttackerTransform; 

  v5 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Execution_BeginCamSelection");
  if ( !CG_Execution_GetXCamSceneTransform((LocalClientNum_t)v5, ps, 0, &outXCamTransform, &outAttackerTransform) )
    goto LABEL_58;
  AttackerEntNum = BG_Execution_GetAttackerEntNum(ps);
  attackerEnt = AttackerEntNum;
  if ( AttackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 218, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  VictimEntNum = BG_Execution_GetVictimEntNum(ps);
  v36 = VictimEntNum;
  if ( VictimEntNum == 2047 )
  {
    LODWORD(v34) = 2047;
    LODWORD(victimEnt) = 2047;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 220, ASSERT_TYPE_ASSERT, "( victimEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "victimEntNum", "ENTITYNUM_NONE", victimEnt, v34) )
      __debugbreak();
  }
  __asm { vxorps  xmm3, xmm3, xmm3; time }
  if ( CG_Execution_CalcRootAbs((LocalClientNum_t)v5, AttackerEntNum, 0, *(const float *)&_XMM3, 0, &in1) )
  {
    MatrixMultiply43(&in1, &outXCamTransform, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+188h+out+24h]
      vmovss  dword ptr [rsp+188h+worldTraceStart], xmm0
      vmovss  xmm1, dword ptr [rsp+188h+out+28h]
      vmovss  dword ptr [rsp+188h+worldTraceStart+4], xmm1
      vmovss  xmm0, dword ptr [rsp+188h+out+2Ch]
      vaddss  xmm2, xmm0, cs:__real@42340000
      vmovss  dword ptr [rsp+188h+worldTraceStart+8], xmm2
    }
    if ( s_executionWorkersRunning[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 236, ASSERT_TYPE_ASSERT, "(!s_executionWorkersRunning[localClientNum])", (const char *)&queryFormat, "!s_executionWorkersRunning[localClientNum]") )
      __debugbreak();
    s_executionWorkersRunning[v5] = 1;
    s_executionWorkerResultCount[v5] = 0;
    StanceXCam = CG_Execution_GetStanceXCam(ps->activeExecution, (const ExecutionVictimStance)ps->activeExecutionVictimStance);
    if ( !StanceXCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 241, ASSERT_TYPE_ASSERT, "( xCam ) != ( nullptr )", "%s != %s\n\t%p, %p", "xCam", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( StanceXCam->cameraCount != 6 )
    {
      LODWORD(v34) = 6;
      LODWORD(victimEnt) = StanceXCam->cameraCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 242, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (6) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "EXECUTION_SUBCAMERA_COUNT", victimEnt, v34) )
        __debugbreak();
    }
    if ( StanceXCam->cameraCount != 6 )
    {
      LODWORD(v34) = 6;
      LODWORD(victimEnt) = StanceXCam->cameraCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 263, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (( sizeof( *array_counter( s_camNamesAttacker ) ) + 0 ) + ( sizeof( *array_counter( s_camNamesVictim ) ) + 0 )) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "(ARRAY_COUNT( s_camNamesAttacker ) + ARRAY_COUNT( s_camNamesVictim ))", victimEnt, v34) )
        __debugbreak();
    }
    v14 = DCONST_DVARINT_execution_camera_override;
    if ( !DCONST_DVARINT_execution_camera_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_camera_override") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    integer = v14->current.integer;
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
    v17 = SL_ConvertToString(cam_attacker_l);
    if ( v17 && (v18 = 0, StanceXCam->cameraCount > 0) )
    {
      v19 = 0i64;
      while ( I_strcmp(v17, StanceXCam->cameras[v19].name) )
      {
        ++v18;
        ++v19;
        if ( v18 >= StanceXCam->cameraCount )
          goto LABEL_37;
      }
      CG_Execution_DispatchCamTraceWorkers((LocalClientNum_t)v5, &outXCamTransform, &worldTraceStart, StanceXCam, 0, v18, AttackerEntNum, VictimEntNum);
      v31 = 1;
    }
    else
    {
LABEL_37:
      v20 = s_camNamesAttacker;
      if ( ps->activeExecutionIsVictim )
        v20 = s_camNamesVictim;
      v21 = 0;
      v35 = 0;
      do
      {
        v22 = SL_ConvertToString((scr_string_t)*v20->name);
        v23 = 0;
        if ( StanceXCam->cameraCount > 0 )
        {
          v24 = 0i64;
          do
          {
            name = StanceXCam->cameras[v24].name;
            v26 = 0x7FFFFFFFi64;
            if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            v27 = v22 - name;
            do
            {
              v28 = name[v27];
              v29 = *name++;
              if ( !v26-- )
                break;
              if ( v28 != v29 )
                goto LABEL_53;
            }
            while ( v28 );
            CG_Execution_DispatchCamTraceWorkers((LocalClientNum_t)v5, &outXCamTransform, &worldTraceStart, StanceXCam, v20->isFallback, v23, attackerEnt, v36);
LABEL_53:
            ++v23;
            ++v24;
          }
          while ( v23 < StanceXCam->cameraCount );
          v21 = v35;
        }
        v35 = ++v21;
        ++v20;
      }
      while ( v21 < 3 );
      v31 = 1;
    }
  }
  else
  {
LABEL_58:
    v31 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v31;
}

/*
==============
CG_Execution_CalcRootAbs
==============
*/

bool __fastcall CG_Execution_CalcRootAbs(LocalClientNum_t localClientNum, int entNum, bool isVictim, double time, bool shouldAssert, tmat43_t<vec3_t> *outLocalToAttacker)
{
  centity_t *Entity; 
  const char *fmt; 
  int v13; 
  unsigned __int32 v14; 
  unsigned int v15; 
  DObj *v16; 
  bool result; 
  __int64 v20; 
  __int64 v21; 
  unsigned int outAnimIndex[4]; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 74, ASSERT_TYPE_ASSERT, "( cent ) != ( nullptr )", "%s != %s\n\t%p, %p", "cent", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 75, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  outAnimIndex[0] = 0;
  if ( !BG_Execution_GetActiveAnimIndex(&Entity->nextState, isVictim, outAnimIndex, NULL) )
  {
    if ( shouldAssert )
    {
      fmt = "CG_Execution_CalcRootAbs: failed to retrieve animIndex for entity %i";
      v13 = 82;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)entNum > 0x9E4 )
  {
    LODWORD(v21) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v21) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v21) = 2;
    LODWORD(v20) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v14 = entNum + 2533 * localClientNum;
  if ( v14 >= 0x13CA )
  {
    LODWORD(v21) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v21) )
      __debugbreak();
  }
  v15 = clientObjMap[v14];
  if ( !v15 )
    goto LABEL_25;
  if ( v15 >= (unsigned int)s_objCount )
  {
    LODWORD(v21) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v21) )
      __debugbreak();
  }
  v16 = (DObj *)s_objBuf[v15];
  if ( !v16 )
  {
LABEL_25:
    if ( shouldAssert )
    {
      fmt = "CG_Execution_CalcRootAbs: failed to retrieve obj for entity %i";
      v13 = 92;
LABEL_27:
      LODWORD(v20) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", v13, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, v20) )
        __debugbreak();
    }
LABEL_29:
    result = 0;
    goto LABEL_30;
  }
  __asm { vmovaps xmm2, xmm6; time }
  BG_Execution_CalcRootAbs(v16, outAnimIndex[0], *(const float *)&_XMM2, outLocalToAttacker);
  result = 1;
LABEL_30:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
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
  const dvar_t *v5; 
  bool v6; 
  int AttackerEntNum; 
  const cpose_t *PoseExtended; 
  const vec3_t *v15; 
  int VictimEntNum; 
  const cpose_t *v20; 
  const vec3_t *v21; 
  __int64 v46; 
  __int64 v47; 
  vec3_t center; 
  vec3_t direction; 
  vec3_t origin; 
  vec3_t outProjectedPoint; 
  vec4_t angles; 
  tmat43_t<vec3_t> outAttackerTransform; 
  XCamValues outValues; 
  tmat43_t<vec3_t> outXCamTransform; 
  tmat43_t<vec3_t> v56; 

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
      v5 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.integer == 1 )
      {
        v6 = LocalClientGlobals->predictedPlayerState.activeExecution == 255;
        __asm { vmovaps [rsp+1C0h+var_30], xmm6 }
        if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 872, ASSERT_TYPE_ASSERT, "( ps->activeExecution ) != ( ((1<<8)-1) )", "%s != %s\n\t%i, %i", "ps->activeExecution", "INVALID_EXECUTION_DEF", 255, 255) )
          __debugbreak();
        CG_Execution_GetXCamSceneTransform(localClientNum, p_predictedPlayerState, 0, &outXCamTransform, &outAttackerTransform);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0C0h+outXCamTransform+24h]
          vmovss  xmm1, dword ptr [rbp+0C0h+outXCamTransform+28h]
          vmovss  dword ptr [rsp+1C0h+center], xmm0
          vmovss  xmm0, dword ptr [rbp+0C0h+outXCamTransform+2Ch]
          vaddss  xmm2, xmm0, cs:zOffset_0
          vmovss  dword ptr [rsp+1C0h+center+8], xmm2
          vmovss  dword ptr [rsp+1C0h+center+4], xmm1
        }
        AxisToAngles((const tmat33_t<vec3_t> *)&outXCamTransform, (vec3_t *)&angles);
        __asm { vmovss  xmm1, cs:currentRadius; radius }
        CG_DebugSphere(&center, *(float *)&_XMM1, &colorBlue, 1, 0);
        __asm { vmovss  xmm2, cs:currentRadius; length }
        CG_DebugAxis((const tmat33_t<vec3_t> *)&outXCamTransform, &center, *(float *)&_XMM2, 1, 0);
        AttackerEntNum = BG_Execution_GetAttackerEntNum(p_predictedPlayerState);
        if ( AttackerEntNum == 2047 )
        {
          LODWORD(v47) = 2047;
          LODWORD(v46) = 2047;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 894, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", v46, v47) )
            __debugbreak();
        }
        PoseExtended = CG_GetPoseExtended(localClientNum, AttackerEntNum, 1);
        v15 = (const vec3_t *)PoseExtended;
        if ( PoseExtended )
        {
          CG_GetPoseOrigin(PoseExtended, &center);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1C0h+center+8]
            vaddss  xmm1, xmm0, cs:zOffset_0
            vmovss  dword ptr [rsp+1C0h+center+8], xmm1
          }
          AnglesToAxis(v15 + 6, (tmat33_t<vec3_t> *)&outAttackerTransform);
          __asm { vmovss  xmm1, cs:currentRadius; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 1, 0);
          __asm { vmovss  xmm2, cs:currentRadius; length }
          CG_DebugAxis((const tmat33_t<vec3_t> *)&outAttackerTransform, &center, *(float *)&_XMM2, 1, 0);
        }
        VictimEntNum = BG_Execution_GetVictimEntNum(p_predictedPlayerState);
        if ( VictimEntNum == 2047 )
        {
          LODWORD(v47) = 2047;
          LODWORD(v46) = 2047;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 911, ASSERT_TYPE_ASSERT, "( victimEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "victimEntNum", "ENTITYNUM_NONE", v46, v47) )
            __debugbreak();
        }
        v20 = CG_GetPoseExtended(localClientNum, VictimEntNum, 1);
        v21 = (const vec3_t *)v20;
        if ( v20 )
        {
          CG_GetPoseOrigin(v20, &center);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1C0h+center+8]
            vaddss  xmm1, xmm0, cs:zOffset_0
            vmovss  dword ptr [rsp+1C0h+center+8], xmm1
          }
          AnglesToAxis(v21 + 6, (tmat33_t<vec3_t> *)&outAttackerTransform);
          __asm { vmovss  xmm1, cs:currentRadius; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorRed, 1, 0);
          __asm { vmovss  xmm2, cs:currentRadius; length }
          CG_DebugAxis((const tmat33_t<vec3_t> *)&outAttackerTransform, &center, *(float *)&_XMM2, 1, 0);
        }
        if ( LocalClientGlobals->predictedPlayerState.activeExecution != 255 )
        {
          if ( !XCamData::IsActive(&LocalClientGlobals->executionXCamDebug) )
            CG_Execution_StartXCam(localClientNum, p_predictedPlayerState, &LocalClientGlobals->executionXCamDebug);
          if ( XCamData::IsActive(&LocalClientGlobals->executionXCamDebug) )
          {
            if ( CG_Execution_GetXCamSceneTransform(localClientNum, p_predictedPlayerState, 0, &outAttackerTransform, &v56) )
            {
              Axis43ToQuat(&outAttackerTransform, &angles);
              XCamData::SetSceneTransform(&LocalClientGlobals->executionXCamDebug, &outAttackerTransform.m[3], &angles);
            }
            *(double *)&_XMM0 = BG_Execution_GetScrubTime(LocalClientGlobals->predictedPlayerState.activeExecution, (const ExecutionVictimStance)LocalClientGlobals->predictedPlayerState.activeExecutionVictimStance, LocalClientGlobals->predictedPlayerState.activeExecutionStartTime, LocalClientGlobals->time, LocalClientGlobals->predictedPlayerState.deltaTime);
            __asm { vmovaps xmm1, xmm0; animTime }
            XCamData::SetAnimTime(&LocalClientGlobals->executionXCamDebug, *(float *)&_XMM1);
          }
        }
        XCamValues::XCamValues(&outValues);
        XCamData::CalcValues(&LocalClientGlobals->executionXCamDebug, LocalClientGlobals->time, 0);
        XCamData::GetValues(&LocalClientGlobals->executionXCamDebug, &outValues);
        __asm
        {
          vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovss  xmm3, cs:length_0; length
          vmovss  xmm6, dword ptr [rbp+0C0h+outValues.axis]
          vmovss  xmm5, dword ptr [rbp+0C0h+outValues.axis+4]
          vmovss  xmm4, dword ptr [rbp+0C0h+outValues.axis+8]
          vmulss  xmm0, xmm3, xmm6
          vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+outValues.origin]
          vmovss  dword ptr [rsp+1C0h+origin], xmm1
          vmulss  xmm0, xmm3, xmm5
          vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+outValues.origin+4]
          vmulss  xmm0, xmm3, xmm4
          vmovss  dword ptr [rsp+1C0h+origin+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rbp+0C0h+outValues.origin+8]
          vxorps  xmm0, xmm6, xmm2
          vmovss  dword ptr [rsp+1C0h+direction], xmm0
          vxorps  xmm0, xmm4, xmm2
          vmovss  dword ptr [rsp+1C0h+origin+8], xmm1
          vxorps  xmm1, xmm5, xmm2
          vmovss  xmm2, cs:radius_1; radius
          vmovss  dword ptr [rsp+1C0h+direction+8], xmm0
          vmovss  dword ptr [rsp+1C0h+direction+4], xmm1
        }
        CG_DebugCone(&origin, &direction, *(float *)&_XMM2, *(float *)&_XMM3, &colorCyan, 1, 0);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+1C0h+center], xmm0
          vmovss  dword ptr [rsp+1C0h+center+4], xmm0
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rsp+1C0h+center+8], xmm0
        }
        ProjectPointOnPlane(&outValues.origin, &outXCamTransform.m[3], &center, &outProjectedPoint);
        __asm { vmovss  xmm1, cs:currentRadius; radius }
        CG_DebugSphere(&outProjectedPoint, *(float *)&_XMM1, &colorCyan, 1, 0);
        __asm { vmovss  xmm2, cs:currentRadius; length }
        CG_DebugAxis(&outValues.axis, &outProjectedPoint, *(float *)&_XMM2, 1, 0);
        __asm { vmovaps xmm6, [rsp+1C0h+var_30] }
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
  int v14; 
  __int64 v21; 
  __int64 v23; 
  int cameraCount; 
  __int64 data; 
  float v26; 
  float v28; 
  int v29; 
  int v30; 
  int v31; 
  LocalClientNum_t v32; 
  bool v33; 
  vec4_t out; 
  XCamValues outValues; 
  XCamData v36; 

  __asm { vmovaps [rsp+210h+var_50], xmm6 }
  _RSI = worldTraceStart;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_Execution_DispatchCamTraceWorkers");
  XCamData::XCamData(&v36, localClientNum);
  XCamData::Init(&v36, xcam);
  if ( (unsigned int)subCamIndex >= xcam->cameraCount )
  {
    cameraCount = xcam->cameraCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( subCamIndex ) < (unsigned)( xcam->cameraCount )", "subCamIndex doesn't index xcam->cameraCount\n\t%i not in [0, %i)", subCamIndex, cameraCount) )
      __debugbreak();
  }
  if ( (unsigned int)subCamIndex >= 6 )
  {
    LODWORD(v23) = 6;
    LODWORD(v21) = subCamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( subCamIndex ) < (unsigned)( (6) )", "subCamIndex doesn't index EXECUTION_SUBCAMERA_COUNT\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  XCamData::SetActiveSubCamera(&v36, subCamIndex);
  Axis43ToQuat(worldToScene, &out);
  XCamData::SetSceneTransform(&v36, &worldToScene->m[3], &out);
  v14 = 0;
  __asm { vmovss  xmm6, cs:__real@3d888889 }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, xmm6; animTime
    }
    XCamData::SetAnimTime(&v36, *(float *)&_XMM1);
    XCamValues::XCamValues(&outValues);
    XCamData::CalcValues(&v36, 0, 0);
    XCamData::GetValues(&v36, &outValues);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi]
      vmovsd  [rsp+210h+data], xmm0
    }
    v26 = _RSI->v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+110h+outValues.origin]
      vmovsd  [rsp+210h+var_1BC], xmm0
    }
    v28 = outValues.origin.v[2];
    v29 = attackerEnt;
    v30 = victimEnt;
    v31 = subCamIndex;
    v33 = isFallback;
    v32 = localClientNum;
    Sys_AddWorkerCmd(WRKCMD_EXECUTION_CAM, &data);
    ++v14;
  }
  while ( v14 <= 15 );
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+210h+var_50] }
}

/*
==============
CG_Execution_ExecuteWorkerThread
==============
*/
void CG_Execution_ExecuteWorkerThread(const void *const cmdInfo)
{
  __int64 v8; 
  volatile signed __int32 *v10; 
  unsigned __int32 v11; 
  Physics_WorldId v14; 
  char v20; 
  hknpShape *ShapeSphere; 
  Physics_ShapecastExtendedData *extendedData; 
  Physics_ShapecastExtendedData v55; 
  PhysicsQuery_ShapecastHit hit; 
  char v57; 
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
  }
  v8 = *((int *)cmdInfo + 9);
  _RSI = cmdInfo;
  v10 = &s_executionWorkerResultCount[v8];
  if ( ((unsigned __int8)v10 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_executionWorkerResultCount[v8]) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(v10, 1u);
  if ( v11 >= 0x60 )
  {
    LODWORD(extendedData) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 813, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ((3) * (16) * LOCAL_CLIENT_COUNT) )", "index doesn't index MAX_EXECUTION_CAM_WORKER_COUNT\n\t%i not in [0, %i)", extendedData, 96) )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vmovss  xmm1, cs:__real@41200000; radius
  }
  v14 = 3 * v8 + 2;
  v55.simplifyStart = 0;
  v55.contents = 8391313;
  _RBX = &s_executionWorkerResults[v8][v11];
  _ER15 = 0;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  v55.ignoreBodies = NULL;
  __asm { vmovsd  qword ptr [rbx], xmm0 }
  _RBX->start.v[2] = *((float *)_RSI + 2);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+0Ch]
    vmovsd  qword ptr [rbx+0Ch], xmm0
    vmovss  xmm0, cs:__real@3c83126f
  }
  _RBX->end.v[2] = *((float *)_RSI + 5);
  _RBX->skipEnts[0] = *((_DWORD *)_RSI + 6);
  _RBX->skipEnts[1] = *((_DWORD *)_RSI + 7);
  _RBX->subCamIndex = *((_DWORD *)_RSI + 8);
  _RBX->localClientNum = *((_DWORD *)_RSI + 9);
  v20 = *((_BYTE *)_RSI + 40);
  __asm
  {
    vmovss  [rsp+168h+var_110.accuracy], xmm0
    vpxor   xmm0, xmm0, xmm0
  }
  _RBX->isFallback = v20;
  __asm
  {
    vmovss  [rsp+168h+var_110.startTolerance], xmm11
    vmovss  [rsp+168h+var_110.collisionBuffer], xmm11
  }
  _RBX->penetrateDist = 3.4028235e38;
  __asm { vmovdqu xmmword ptr [rsp+168h+var_110.nonBrushShape], xmm0 }
  v55.phaseSelection = All;
  v55.permitOutwardTrace = 0;
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, NULL, 0);
  if ( !ShapeSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 825, ASSERT_TYPE_ASSERT, "( shape ) != ( nullptr )", "%s != %s\n\t%p, %p", "shape", "nullptr", NULL, NULL) )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastClosest(v14, ShapeSphere, (const vec3_t *)_RSI, (const vec3_t *)_RSI + 1, &quat_identity, &v55, &hit);
  Physics_ReleaseShape(v14, ShapeSphere, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vsubss  xmm10, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+14h]
    vsubss  xmm9, xmm0, dword ptr [rsi+8]
    vmovss  xmm2, dword ptr [rsi+10h]
    vsubss  xmm8, xmm2, dword ptr [rsi+4]
  }
  _EAX = hit.isValid;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovd   xmm0, eax
    vmovd   xmm2, r15d
    vpcmpeqd xmm3, xmm0, xmm2
    vmovss  xmm0, [rsp+168h+var_D8.fraction]
    vblendvps xmm7, xmm0, xmm6, xmm3
    vmovaps xmm0, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm3, xmm6, xmm0
    vmulss  xmm0, xmm10, xmm10
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm3, xmm3, xmm0
    vmovss  dword ptr [rbx+2Ch], xmm3
    vmovss  dword ptr [rbx+30h], xmm7
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
bool CG_Execution_GetXCamSceneTransform(LocalClientNum_t localClientNum, const playerState_s *const ps, bool shouldAssert, tmat43_t<vec3_t> *outXCamTransform, tmat43_t<vec3_t> *outAttackerTransform)
{
  cg_t *LocalClientGlobals; 
  int AttackerEntNum; 
  bool result; 
  const cpose_t *PoseExtended; 
  vec3_t outOrigin; 
  tmat43_t<vec3_t> in; 
  tmat43_t<vec3_t> out; 

  __asm { vmovaps [rsp+108h+var_38], xmm6 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  *(double *)&_XMM0 = BG_Execution_GetScrubTime(ps->activeExecution, (const ExecutionVictimStance)ps->activeExecutionVictimStance, ps->activeExecutionStartTime, LocalClientGlobals->time, ps->deltaTime);
  __asm { vmovaps xmm6, xmm0 }
  AttackerEntNum = BG_Execution_GetAttackerEntNum(ps);
  if ( AttackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 111, ASSERT_TYPE_ASSERT, "( attackerEntNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "attackerEntNum", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  __asm { vmovaps xmm3, xmm6; time }
  result = CG_Execution_CalcRootAbs(localClientNum, AttackerEntNum, 0, *(double *)&_XMM3, shouldAssert, &in);
  if ( result )
  {
    MatrixInverseOrthogonal43(&in, &out);
    PoseExtended = CG_GetPoseExtended(localClientNum, AttackerEntNum, 1);
    if ( !PoseExtended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 122, ASSERT_TYPE_ASSERT, "( attackerPose ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPose", "nullptr", NULL, NULL) )
      __debugbreak();
    CG_GetPoseOrigin(PoseExtended, &outOrigin);
    AnglesAndOriginToMatrix43(&PoseExtended->angles, &outOrigin, outAttackerTransform);
    MatrixMultiply43(&out, outAttackerTransform, outXCamTransform);
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+108h+var_38] }
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
void CG_Execution_StartWorkers(LocalClientNum_t localClientNum, __int64 a2, __int64 a3, double a4)
{
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  bool IsActive; 
  __int64 v8; 

  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v5 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      IsActive = CG_Execution_IsActive(localClientNum);
      if ( LocalClientGlobals->activeExecution == 255 && IsActive )
      {
        if ( (unsigned __int8)CG_Execution_BeginCamSelection(localClientNum, &LocalClientGlobals->predictedPlayerState, v8, a4) )
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
  const dvar_t *v6; 
  XCamData *v7; 
  const playerState_s *v8; 
  unsigned __int64 v9; 
  const dvar_t *v10; 
  __int64 v11; 
  int v13; 
  volatile int v14; 
  unsigned int v18; 
  bool v19; 
  bool v20; 
  const dvar_t *v22; 
  const dvar_t *v25; 
  int v43; 
  bool v44; 
  bool v45; 
  int v47; 
  __int64 v48; 
  int v51; 
  __int64 v52; 
  int v53; 
  XCam *StanceXCam; 
  char *fmt; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  vec3_t end; 
  __int128 v63; 
  int subCamera[2]; 
  __int64 v67; 
  __int64 v68; 

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
    LODWORD(v57) = v8->activeExecutionPartnerEntNum;
    LODWORD(v56) = v8->activeExecutionIsVictim;
    LODWORD(fmt) = v8->clientNum;
    Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", (unsigned int)v8->serverTime, "StartXCam", fmt, v56, v57, v8->activeExecution, v8->activeExecutionStartTime, v8->deltaTime);
  }
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_EXECUTION_CAM);
  if ( v9 >= 2 )
  {
    j___report_rangecheckfailure(v11);
    JUMPOUT(0x141CC698Ei64);
  }
  __asm { vmovups xmm0, cs:__xmm@7f7fffff7f7fffff7f7fffff7f7fffff }
  s_executionWorkersRunning[v9] = 0;
  v13 = s_executionWorkerResultCount[v9];
  __asm { vmovaps [rsp+118h+var_58], xmm7 }
  v14 = 0;
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  [rsp+118h+var_98], xmm7
    vmovss  [rsp+118h+var_94], xmm7
    vmovups [rsp+118h+var_A8], xmm0
  }
  if ( v13 > 0 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_68], xmm8
      vmovss  xmm8, cs:__real@41800000
      vmovaps [rsp+118h+var_48], xmm6
    }
    _RDI = &s_executionWorkerResults[0][0].end.v[1248 * v9 + 2];
    do
    {
      v18 = *((_DWORD *)_RDI + 4);
      v19 = v18 <= (unsigned int)v9;
      if ( v18 != (_DWORD)v9 )
      {
        LODWORD(v59) = v9;
        *(float *)&v58 = _RDI[4];
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 347, ASSERT_TYPE_ASSERT, "( result->localClientNum ) == ( localClientNum )", "%s == %s\n\t%i, %i", "result->localClientNum", "localClientNum", v58, v59);
        v19 = !v20;
        if ( v20 )
          __debugbreak();
      }
      _RCX = *((int *)_RDI + 3);
      __asm { vcomiss xmm7, dword ptr [rsp+rcx*4+118h+var_A8] }
      if ( v19 )
      {
        *((_DWORD *)&v63 + _RCX) = 0;
        if ( *((_BYTE *)_RDI + 20) )
        {
          v22 = DVARFLT_execution_camera_fallback_bias;
          if ( !DVARFLT_execution_camera_fallback_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_camera_fallback_bias") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          _RCX = *((int *)_RDI + 3);
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rbx+28h]
            vmovss  dword ptr [rsp+rcx*4+118h+var_A8], xmm1
          }
        }
      }
      __asm { vmovss  xmm0, dword ptr [rdi+18h] }
      v25 = DCONST_DVARINT_execution_debug;
      _RAX = (int)_RCX;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rsp+rax*4+118h+var_A8]
        vmovss  dword ptr [rsp+rax*4+118h+var_A8], xmm1
      }
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.integer == 1 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+1Ch]
          vmovss  xmm0, dword ptr [rdi-8]
          vsubss  xmm1, xmm0, dword ptr [rcx]
          vmovss  xmm0, dword ptr [rdi-4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rcx]
          vsubss  xmm1, xmm0, dword ptr [rdi-10h]
          vmovss  xmm0, dword ptr [rdi]
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm1, xmm0, dword ptr [rdi-0Ch]
          vmovss  dword ptr [rsp+118h+end], xmm3
          vaddss  xmm3, xmm2, dword ptr [rdi-10h]
          vmulss  xmm2, xmm1, xmm6
          vmovss  dword ptr [rsp+118h+end+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rdi-0Ch]
          vmovss  dword ptr [rsp+118h+end+8], xmm3
        }
        CG_DebugLine((const vec3_t *)(_RDI - 5), &end, &colorCyan, 0, 120);
        CG_DebugLine(&end, (const vec3_t *)(_RDI - 2), &colorRed, 0, 120);
      }
      ++v14;
      _RDI += 13;
    }
    while ( v14 < s_executionWorkerResultCount[v9] );
    v8 = ps;
    v7 = outXCamData;
    __asm
    {
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
  v43 = 0;
  s_executionWorkerResultCount[v9] = 0;
  v44 = 0;
  v45 = 1;
  _RBP = &v63;
  *(_QWORD *)subCamera = 0i64;
  v47 = 0;
  v67 = 0i64;
  v48 = 0i64;
  v68 = 0i64;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vcomiss xmm0, xmm7
    }
    if ( v44 )
    {
      v43 = 1;
      subCamera[0] = v47;
      v48 = 1i64;
      __asm { vmovaps xmm7, xmm0 }
    }
    else
    {
      __asm { vucomiss xmm0, xmm7 }
      if ( v45 )
      {
        if ( (unsigned int)v43 >= 6 )
        {
          LODWORD(v57) = 6;
          LODWORD(v56) = v43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( bestSubCamIndexCount ) < (unsigned)( ( sizeof( *array_counter( bestSubCamIndex ) ) + 0 ) )", "bestSubCamIndexCount doesn't index ARRAY_COUNT( bestSubCamIndex )\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        ++v43;
        subCamera[v48++] = v47;
      }
    }
    ++v47;
    _RBP = (__int128 *)((char *)_RBP + 4);
    v44 = (unsigned int)v47 < 6;
    v45 = v47 == 6;
  }
  while ( v47 < 6 );
  __asm { vmovaps xmm7, [rsp+118h+var_58] }
  if ( v43 <= 0 )
  {
    v53 = I_irand(0, 6);
  }
  else
  {
    v51 = I_irand(0, v43);
    v52 = v51;
    if ( (unsigned int)v51 >= 6 )
    {
      LODWORD(v57) = 6;
      LODWORD(v56) = v51;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 400, ASSERT_TYPE_ASSERT, "(unsigned)( camIndexIndex ) < (unsigned)( ( sizeof( *array_counter( bestSubCamIndex ) ) + 0 ) )", "camIndexIndex doesn't index ARRAY_COUNT( bestSubCamIndex )\n\t%i not in [0, %i)", v56, v57) )
        __debugbreak();
    }
    v53 = subCamera[v52];
  }
  StanceXCam = CG_Execution_GetStanceXCam(v8->activeExecution, (const ExecutionVictimStance)v8->activeExecutionVictimStance);
  if ( !StanceXCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 410, ASSERT_TYPE_ASSERT, "( xCam ) != ( nullptr )", "%s != %s\n\t%p, %p", "xCam", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( StanceXCam->cameraCount != 6 )
  {
    LODWORD(v59) = 6;
    LODWORD(v58) = StanceXCam->cameraCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_execution.cpp", 411, ASSERT_TYPE_ASSERT, "( xCam->cameraCount ) == ( (6) )", "%s == %s\n\t%i, %i", "xCam->cameraCount", "EXECUTION_SUBCAMERA_COUNT", v58, v59) )
      __debugbreak();
  }
  XCamData::Init(v7, StanceXCam);
  XCamData::SetActiveSubCamera(v7, v53);
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
  __int64 v3; 
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  XCamData *p_xCam; 
  int AttackerEntNum; 
  __int16 v12; 
  int deltaTime; 
  int activeExecutionStartTime; 
  unsigned int activeExecution; 
  int activeExecutionPartnerEntNum; 
  unsigned int serverTime; 
  BOOL activeExecutionIsVictim; 
  int clientNum; 
  const char *v24; 
  char *fmt; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  vec3_t worldOrigin; 
  vec4_t out; 
  tmat43_t<vec3_t> outAttackerTransform; 
  tmat43_t<vec3_t> outXCamTransform; 

  v3 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v4 = DVARBOOL_execution_enabled;
    if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      if ( !CG_Execution_IsDebugActive() && LocalClientGlobals->activeExecution != 255 )
      {
        if ( s_executionWorkerResultCount[v3] > 0 && LocalClientGlobals->activeExecutionAttacker == BG_Execution_GetAttackerEntNum(p_predictedPlayerState) )
        {
          p_xCam = &LocalClientGlobals->xCam;
          CG_Execution_StartXCam((LocalClientNum_t)v3, p_predictedPlayerState, &LocalClientGlobals->xCam);
        }
        else
        {
          p_xCam = &LocalClientGlobals->xCam;
        }
        if ( XCamData::IsActive(p_xCam) )
        {
          __asm { vmovaps [rsp+118h+var_38], xmm6 }
          if ( CG_Execution_GetXCamSceneTransform((LocalClientNum_t)v3, p_predictedPlayerState, 0, &outXCamTransform, &outAttackerTransform) )
          {
            Axis43ToQuat(&outXCamTransform, &out);
            XCamData::SetSceneTransform(p_xCam, &outXCamTransform.m[3], &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+118h+outAttackerTransform+24h]
              vmovss  xmm1, dword ptr [rsp+118h+outAttackerTransform+28h]
              vmovss  dword ptr [rsp+118h+worldOrigin], xmm0
              vmovss  xmm0, dword ptr [rsp+118h+outAttackerTransform+2Ch]
              vaddss  xmm2, xmm0, cs:__real@42340000
              vmovss  dword ptr [rsp+118h+worldOrigin+8], xmm2
              vmovss  dword ptr [rsp+118h+worldOrigin+4], xmm1
            }
            AttackerEntNum = BG_Execution_GetAttackerEntNum(p_predictedPlayerState);
            v12 = truncate_cast<short,int>(AttackerEntNum);
            XCamData::SetTraceInfo(p_xCam, &worldOrigin, v12);
          }
          *(double *)&_XMM0 = BG_Execution_GetScrubTime(LocalClientGlobals->predictedPlayerState.activeExecution, (const ExecutionVictimStance)LocalClientGlobals->predictedPlayerState.activeExecutionVictimStance, LocalClientGlobals->predictedPlayerState.activeExecutionStartTime, LocalClientGlobals->time, LocalClientGlobals->predictedPlayerState.deltaTime);
          __asm
          {
            vmovaps xmm1, xmm0; animTime
            vmovaps xmm6, xmm0
          }
          XCamData::SetAnimTime(p_xCam, *(float *)&_XMM1);
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
          {
            deltaTime = LocalClientGlobals->predictedPlayerState.deltaTime;
            activeExecutionStartTime = p_predictedPlayerState->activeExecutionStartTime;
            activeExecution = p_predictedPlayerState->activeExecution;
            activeExecutionPartnerEntNum = p_predictedPlayerState->activeExecutionPartnerEntNum;
            serverTime = p_predictedPlayerState->serverTime;
            __asm { vcvtss2sd xmm1, xmm6, xmm6 }
            activeExecutionIsVictim = p_predictedPlayerState->activeExecutionIsVictim;
            clientNum = p_predictedPlayerState->clientNum;
            __asm { vmovq   rdx, xmm1 }
            v24 = j_va("UpdateTransform, time %.3f", _RDX);
            v31 = deltaTime;
            v30 = activeExecutionStartTime;
            v29 = activeExecution;
            LODWORD(v28) = activeExecutionPartnerEntNum;
            LODWORD(v27) = activeExecutionIsVictim;
            LODWORD(fmt) = clientNum;
            Com_Printf(15, "[execution cli] %i %s - player %i, isVictim %i, partner %i, exec %i, startTime %i, deltaTime %i\n", serverTime, v24, fmt, v27, v28, v29, v30, v31);
          }
          __asm { vmovaps xmm6, [rsp+118h+var_38] }
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
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx]
    vmovsd  qword ptr [rcx], xmm0
  }
  this->start.v[2] = rhs->start.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+0Ch]
    vmovsd  qword ptr [rcx+0Ch], xmm0
  }
  this->end.v[2] = rhs->end.v[2];
  *(_QWORD *)this->skipEnts = *(_QWORD *)rhs->skipEnts;
  this->subCamIndex = rhs->subCamIndex;
  this->localClientNum = rhs->localClientNum;
  this->isFallback = rhs->isFallback;
}

