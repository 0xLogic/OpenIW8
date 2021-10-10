/*
==============
ATClient_StateMachineAimAtUpdate
==============
*/

void __fastcall ATClient_StateMachineAimAtUpdate(const LocalClientNum_t localClientNum, int msec)
{
  ?ATClient_StateMachineAimAtUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineAimAtEnter
==============
*/

void __fastcall ATClient_StateMachineAimAtEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineAimAtEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineAimAtTransition
==============
*/

bool __fastcall ATClient_StateMachineAimAtTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineAimAtTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineAimAtEnter
==============
*/
void ATClient_StateMachineAimAtEnter(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClient *Client; 
  __int64 clientNum; 
  CgStatic *v4; 
  const characterInfo_t *CharacterInfo; 
  float v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  CgEntitySystem *v11; 
  __int64 p_nextState; 
  const characterInfo_t *v13; 
  team_t team; 
  team_t v15; 
  _DWORD *v16; 
  float v17; 
  const dvar_t *v18; 
  float value; 
  const dvar_t *v20; 
  __int64 v21; 
  __int64 v22; 
  _QWORD v23[3]; 
  __int64 v24; 
  const characterInfo_t *v25; 
  CgStatic *v26; 
  const playerState_s *v27; 
  __int64 v28; 

  v28 = -2i64;
  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  s_aimAtEntNum[v1] = 2047;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( (int)v1 < cg_t::ms_allocatedCount )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
    v27 = Client->GetPlayerState(Client);
    clientNum = v27->clientNum;
    if ( !(_BYTE)CgStatic::ms_allocatedType )
    {
      LODWORD(v22) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v22) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v22 = CgStatic::ms_allocatedCount;
      LODWORD(v21) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v1] )
    {
      LODWORD(v22) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v22) )
        __debugbreak();
    }
    v4 = CgStatic::ms_cgameStaticsArray[v1];
    v26 = v4;
    CharacterInfo = CgStatic::GetCharacterInfo(v4, clientNum);
    v25 = CharacterInfo;
    v6 = FLOAT_3_4028235e38;
    v7 = 0;
    v8 = clientNum;
    v24 = clientNum;
    v9 = 0i64;
    v10 = 0i64;
    do
    {
      if ( v8 != v9 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v22) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v22) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v22) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v21) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v1] )
        {
          LODWORD(v22) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v22) )
            __debugbreak();
        }
        v11 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( (unsigned int)v7 >= 0x800 )
        {
          LODWORD(v22) = 2048;
          LODWORD(v21) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( (v11->m_entities[v10].flags & 1) != 0 )
        {
          p_nextState = (__int64)&v11->m_entities[v10].nextState;
          if ( *(_WORD *)(p_nextState + 8) == 1 )
          {
            if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 50, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
              __debugbreak();
            v13 = CgStatic::GetCharacterInfo(v4, *(_DWORD *)(p_nextState + 144));
            if ( v13 )
            {
              team = v13->team;
              v15 = CharacterInfo->team;
              if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v15 == TEAM_ZERO || v15 != team )
              {
                v16 = (_DWORD *)(p_nextState + 16);
                if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
                  __debugbreak();
                if ( *v16 == 4 )
                {
                  v23[2] = v23;
                  LODWORD(v23[1]) = v16[4] ^ v16[5] ^ s_trbase_aab_Z;
                  HIDWORD(v23[0]) = v16[3] ^ v16[4] ^ s_trbase_aab_Y;
                  LODWORD(v23[0]) = v16[3] ^ ~s_trbase_aab_X;
                  memset(&v23[2], 0, sizeof(_QWORD));
                  *(float *)&v23[2] = *(float *)v23;
                  if ( (v23[0] & 0x7F800000) == 2139095040 || (*(float *)&v23[2] = *((float *)v23 + 1), (HIDWORD(v23[0]) & 0x7F800000) == 2139095040) || (*(float *)&v23[2] = *(float *)&v23[1], (v23[1] & 0x7F800000) == 2139095040) )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                      __debugbreak();
                  }
                }
                else
                {
                  v23[0] = *(_QWORD *)(v16 + 3);
                  LODWORD(v23[1]) = v16[5];
                }
                v17 = (float)((float)((float)(*((float *)v23 + 1) - v27->origin.v[1]) * (float)(*((float *)v23 + 1) - v27->origin.v[1])) + (float)((float)(*(float *)v23 - v27->origin.v[0]) * (float)(*(float *)v23 - v27->origin.v[0]))) + (float)((float)(*(float *)&v23[1] - v27->origin.v[2]) * (float)(*(float *)&v23[1] - v27->origin.v[2]));
                if ( v17 < v6 )
                {
                  s_aimAtEntNum[v1] = v7;
                  v6 = v17;
                }
                memset(v23, 0, 0xCui64);
              }
              v4 = v26;
              CharacterInfo = v25;
            }
          }
        }
        v8 = v24;
      }
      ++v7;
      ++v9;
      ++v10;
    }
    while ( v7 < 200 );
    v18 = DVARFLT_ATClient_AimAtTimeMinimum;
    if ( !DVARFLT_ATClient_AimAtTimeMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AimAtTimeMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    value = v18->current.value;
    v20 = DVARFLT_ATClient_AimAtTimeDurationRange;
    if ( !DVARFLT_ATClient_AimAtTimeDurationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AimAtTimeDurationRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    s_remainingTime[v1] = I_irand((int)(float)(value * 1000.0), (int)(float)((float)(v20->current.value * 1000.0) + (float)(value * 1000.0)));
  }
}

/*
==============
ATClient_StateMachineAimAtTransition
==============
*/
char ATClient_StateMachineAimAtTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( s_remainingTime[localClientNum] > 0 && s_aimAtEntNum[localClientNum] != 2047 )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineAimAtUpdate
==============
*/
void ATClient_StateMachineAimAtUpdate(const LocalClientNum_t localClientNum, int msec)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  int v5; 
  int v6; 
  centity_t *Entity; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v12; 
  unsigned int number; 
  unsigned int v23; 
  unsigned int v24; 
  const DObj *v25; 
  unsigned int refdefViewOrg_aab; 
  __int128 v27; 
  float v30; 
  float v31; 
  double ClientLookInversion; 
  float v33; 
  int ControllerFromClient; 
  float viewVertSensitivity; 
  int v36; 
  const GamerSettingState *ProfileSettings; 
  double v38; 
  double v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  int v44[3]; 
  __int64 v45; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  AutomatedInput_Record records; 
  float v49; 
  float v50; 
  __int128 v51; 
  __int64 v52; 
  float v53; 
  __int128 v54; 

  v45 = -2i64;
  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v43) = 2;
    LODWORD(v41) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v41, v43) )
      __debugbreak();
  }
  if ( (int)v3 < cg_t::ms_allocatedCount )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u) )
    {
      if ( I_irand(0, 2) )
      {
        memset(&outTagMat.row0.y, 0, 24);
        LODWORD(outTagMat.m[0].v[0]) = 0x2000;
        bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&outTagMat, 0x13u);
        records.holdTimeSeconds = FLOAT_0_1;
        records.keys.keyBits.array[0] = 0x2000;
        *(_OWORD *)records.moveStick.v = 0i64;
        v49 = 0.0;
        v50 = FLOAT_0_1;
        v51 = *(_OWORD *)outTagMat.m[0].v;
        v52 = *(__int64 *)&outTagMat.row1.y;
        v53 = outTagMat.m[2].v[0];
        v54 = 0i64;
        v5 = 2;
      }
      else
      {
        records.holdTimeSeconds = FLOAT_0_1;
        records.keys.keyBits.array[0] = 4096;
        *(_OWORD *)records.moveStick.v = 0i64;
        v5 = 1;
      }
      records.deferTimeSeconds = 0.0;
      memset(&records.keys.keyBits.array[1], 0, 24);
      CL_Input_AddAutomatedSequence((LocalClientNum_t)v3, &records, v5);
    }
    v6 = s_aimAtEntNum[v3];
    if ( v6 != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v3, v6);
      if ( (Entity->flags & 1) != 0 )
      {
        memset(&records, 0, sizeof(records));
        if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
        FunctionPointer_origin(&Entity->pose.origin.origin.origin, &outOrigin);
        if ( Entity->pose.isPosePrecise )
        {
          _XMM0 = LODWORD(outOrigin.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          outOrigin.v[0] = *(float *)&_XMM1;
          _XMM2 = LODWORD(outOrigin.v[1]);
          __asm { vcvtdq2pd xmm2, xmm2 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM2 + 1);
          *(double *)&v12 = *(double *)&_XMM2 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          outOrigin.v[1] = *(float *)&_XMM1;
          _XMM2 = LODWORD(outOrigin.v[2]);
          __asm { vcvtdq2pd xmm2, xmm2 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM2 + 1);
          *(double *)&v12 = *(double *)&_XMM2 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
          outOrigin.v[2] = *(float *)&_XMM1;
        }
        number = Entity->nextState.number;
        if ( number > 0x9E4 )
        {
          LODWORD(v42) = Entity->nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v42) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v42) = 2;
          LODWORD(v40) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v40, v42) )
            __debugbreak();
        }
        v23 = 2533 * v3 + number;
        if ( v23 >= 0x13CA )
        {
          LODWORD(v42) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v42) )
            __debugbreak();
        }
        v24 = clientObjMap[v23];
        if ( v24 )
        {
          if ( v24 >= (unsigned int)s_objCount )
          {
            LODWORD(v42) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v42) )
              __debugbreak();
          }
          v25 = (const DObj *)s_objBuf[v24];
          if ( v25 )
            CG_DObjGetWorldTagMatrix(&Entity->pose, v25, scr_const.j_head, &outTagMat, &outOrigin);
        }
        if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
        if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v44[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
        v44[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
        v44[2] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2));
        outOrigin.v[0] = outOrigin.v[0] - *(float *)v44;
        v27 = LODWORD(outOrigin.v[1]);
        outOrigin.v[1] = outOrigin.v[1] - *(float *)&v44[1];
        outOrigin.v[2] = outOrigin.v[2] - *(float *)&v44[2];
        *(float *)&v27 = (float)((float)(outOrigin.v[1] * outOrigin.v[1]) + (float)(outOrigin.v[0] * outOrigin.v[0])) + (float)(outOrigin.v[2] * outOrigin.v[2]);
        if ( *(float *)&v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        _XMM1 = v27;
        __asm { vrsqrtss xmm2, xmm1, xmm7 }
        outOrigin.v[0] = *(float *)&_XMM2 * outOrigin.v[0];
        outOrigin.v[1] = *(float *)&_XMM2 * outOrigin.v[1];
        outOrigin.v[2] = *(float *)&_XMM2 * outOrigin.v[2];
        v30 = (float)((float)(outOrigin.v[1] * LocalClientGlobals->refdef.view.axis.m[1].v[1]) + (float)(outOrigin.v[0] * LocalClientGlobals->refdef.view.axis.m[1].v[0])) + (float)(outOrigin.v[2] * LocalClientGlobals->refdef.view.axis.m[1].v[2]);
        v31 = (float)((float)(outOrigin.v[1] * LocalClientGlobals->refdef.view.axis.m[2].v[1]) + (float)(outOrigin.v[0] * LocalClientGlobals->refdef.view.axis.m[2].v[0])) + (float)(outOrigin.v[2] * LocalClientGlobals->refdef.view.axis.m[2].v[2]);
        ClientLookInversion = CL_Input_GetClientLookInversion((LocalClientNum_t)v3);
        v33 = *(float *)&ClientLookInversion;
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
        viewVertSensitivity = GamerProfile_GetProfileSettings(ControllerFromClient)->config.viewVertSensitivity;
        v36 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
        ProfileSettings = GamerProfile_GetProfileSettings(v36);
        v38 = I_fclamp((float)(v30 * -20.0) / ProfileSettings->config.viewHorzSensitivity, -0.89999998, 0.89999998);
        records.lookStick.v[1] = *(float *)&v38;
        v39 = I_fclamp((float)((float)(v33 * -20.0) * v31) / viewVertSensitivity, -0.89999998, 0.89999998);
        records.lookStick.v[0] = *(float *)&v39;
        records.holdTimeSeconds = FLOAT_0_0099999998;
        CL_Input_AddAutomatedSequence((LocalClientNum_t)v3, &records, 1);
        memset(v44, 0, sizeof(v44));
      }
      else
      {
        s_aimAtEntNum[v3] = 2047;
      }
    }
    s_remainingTime[v3] -= msec;
  }
}

