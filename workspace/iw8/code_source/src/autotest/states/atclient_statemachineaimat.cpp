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
  __int64 v3; 
  ClActiveClient *Client; 
  __int64 clientNum; 
  CgStatic *v6; 
  const characterInfo_t *CharacterInfo; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  CgEntitySystem *v13; 
  __int64 p_nextState; 
  const characterInfo_t *v15; 
  team_t team; 
  team_t v17; 
  bool v19; 
  bool v23; 
  __int64 v49; 
  __int64 v50; 
  _QWORD v51[3]; 
  __int64 v52; 
  const characterInfo_t *v53; 
  CgStatic *v54; 
  const playerState_s *v55; 
  __int64 v56; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  v56 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 25, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  s_aimAtEntNum[v3] = 2047;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v50) = 2;
    LODWORD(v49) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v49, v50) )
      __debugbreak();
  }
  if ( (int)v3 < cg_t::ms_allocatedCount )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
    v55 = Client->GetPlayerState(Client);
    clientNum = v55->clientNum;
    if ( !(_BYTE)CgStatic::ms_allocatedType )
    {
      LODWORD(v50) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v50) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v50 = CgStatic::ms_allocatedCount;
      LODWORD(v49) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v3] )
    {
      LODWORD(v50) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v50) )
        __debugbreak();
    }
    v6 = CgStatic::ms_cgameStaticsArray[v3];
    v54 = v6;
    CharacterInfo = CgStatic::GetCharacterInfo(v6, clientNum);
    v53 = CharacterInfo;
    __asm { vmovss  xmm6, cs:__real@7f7fffff }
    v9 = 0;
    v10 = clientNum;
    v52 = clientNum;
    v11 = 0i64;
    v12 = 0i64;
    do
    {
      if ( v10 != v11 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v50) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v50) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v50) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v49) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v49, v50) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v50) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v50) )
            __debugbreak();
        }
        v13 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( (unsigned int)v9 >= 0x800 )
        {
          LODWORD(v50) = 2048;
          LODWORD(v49) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v49, v50) )
            __debugbreak();
        }
        if ( (v13->m_entities[v12].flags & 1) != 0 )
        {
          p_nextState = (__int64)&v13->m_entities[v12].nextState;
          if ( *(_WORD *)(p_nextState + 8) == 1 )
          {
            if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 50, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
              __debugbreak();
            v15 = CgStatic::GetCharacterInfo(v6, *(_DWORD *)(p_nextState + 144));
            if ( v15 )
            {
              team = v15->team;
              v17 = CharacterInfo->team;
              if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
                __debugbreak();
              if ( v17 == TEAM_ZERO || v17 != team )
              {
                _RDI = (_DWORD *)(p_nextState + 16);
                if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
                  __debugbreak();
                v19 = *_RDI < 4u;
                if ( *_RDI == 4 )
                {
                  v51[2] = v51;
                  LODWORD(v51[1]) = _RDI[4] ^ _RDI[5] ^ s_trbase_aab_Z;
                  HIDWORD(v51[0]) = _RDI[3] ^ _RDI[4] ^ s_trbase_aab_Y;
                  LODWORD(v51[0]) = _RDI[3] ^ ~s_trbase_aab_X;
                  memset(&v51[2], 0, sizeof(_QWORD));
                  __asm
                  {
                    vmovss  xmm0, [rsp+0B8h+var_78]
                    vmovss  dword ptr [rsp+0B8h+var_68], xmm0
                  }
                  if ( (v51[2] & 0x7F800000) == 2139095040 )
                    goto LABEL_68;
                  __asm
                  {
                    vmovss  xmm0, [rsp+0B8h+var_74]
                    vmovss  dword ptr [rsp+0B8h+var_68], xmm0
                  }
                  if ( (v51[2] & 0x7F800000) == 2139095040 )
                    goto LABEL_68;
                  __asm
                  {
                    vmovss  xmm0, [rsp+0B8h+var_70]
                    vmovss  dword ptr [rsp+0B8h+var_68], xmm0
                  }
                  v19 = (v51[2] & 0x7F800000) < 0x7F800000;
                  if ( (v51[2] & 0x7F800000) == 2139095040 )
                  {
LABEL_68:
                    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )");
                    v19 = 0;
                    if ( v23 )
                      __debugbreak();
                  }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+0Ch]
                    vmovss  [rsp+0B8h+var_78], xmm0
                    vmovss  xmm1, dword ptr [rdi+10h]
                    vmovss  [rsp+0B8h+var_74], xmm1
                    vmovss  xmm0, dword ptr [rdi+14h]
                    vmovss  [rsp+0B8h+var_70], xmm0
                  }
                }
                __asm
                {
                  vmovss  xmm0, [rsp+0B8h+var_78]
                  vsubss  xmm3, xmm0, dword ptr [rbx+30h]
                  vmovss  xmm1, [rsp+0B8h+var_74]
                  vsubss  xmm2, xmm1, dword ptr [rbx+34h]
                  vmovss  xmm0, [rsp+0B8h+var_70]
                  vsubss  xmm4, xmm0, dword ptr [rbx+38h]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm5, xmm3, xmm0
                  vcomiss xmm5, xmm6
                }
                if ( v19 )
                {
                  s_aimAtEntNum[v3] = v9;
                  __asm { vmovaps xmm6, xmm5 }
                }
                memset(v51, 0, 0xCui64);
              }
              v6 = v54;
              CharacterInfo = v53;
            }
          }
        }
        v10 = v52;
      }
      ++v9;
      ++v11;
      ++v12;
    }
    while ( v9 < 200 );
    _RDI = DVARFLT_ATClient_AimAtTimeMinimum;
    if ( !DVARFLT_ATClient_AimAtTimeMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AimAtTimeMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DVARFLT_ATClient_AimAtTimeDurationRange;
    if ( !DVARFLT_ATClient_AimAtTimeDurationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_AimAtTimeDurationRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]
      vmulss  xmm2, xmm6, cs:__real@447a0000
      vmulss  xmm0, xmm1, cs:__real@447a0000
      vaddss  xmm1, xmm0, xmm2
      vcvttss2si edx, xmm1; max
      vcvttss2si ecx, xmm2; min
    }
    s_remainingTime[v3] = I_irand(_ECX, _EDX);
  }
  _R11 = &v57;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  __int64 v9; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *LocalClientGlobals; 
  int v14; 
  int v18; 
  centity_t *Entity; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned int number; 
  unsigned int v35; 
  unsigned int v36; 
  const DObj *v37; 
  unsigned int v38; 
  int v39; 
  bool v40; 
  int ControllerFromClient; 
  int v71; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  int v92[3]; 
  __int64 v93; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  AutomatedInput_Record records; 
  float v101; 
  char v103; 
  void *retaddr; 

  _RAX = &retaddr;
  v93 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v9 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineaimat.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v91) = 2;
    LODWORD(v89) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v89, v91) )
      __debugbreak();
  }
  if ( (int)v9 < cg_t::ms_allocatedCount )
  {
    LocalClientGlobals = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(LocalClientGlobals + 230, ACTIVE, 4u) )
    {
      if ( I_irand(0, 2) )
      {
        memset(&outTagMat.row0.y, 0, 24);
        LODWORD(outTagMat.m[0].v[0]) = 0x2000;
        bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&outTagMat, 0x13u);
        __asm
        {
          vmovss  xmm0, cs:__real@3dcccccd
          vmovss  [rbp+90h+records.holdTimeSeconds], xmm0
        }
        records.keys.keyBits.array[0] = 0x2000;
        __asm
        {
          vmovups xmmword ptr [rbp+90h+records.moveStick], xmm6
          vmovss  [rbp+90h+var_BC], xmm6
          vmovss  [rbp+90h+var_B8], xmm0
          vmovups xmm0, xmmword ptr [rsp+190h+outTagMat]
          vmovups [rbp+90h+var_B4], xmm0
          vmovsd  xmm1, qword ptr [rbp-80h]
          vmovsd  [rbp+90h+var_A4], xmm1
        }
        v101 = outTagMat.m[2].v[0];
        __asm { vmovups [rbp+90h+var_98], xmm6 }
        v14 = 2;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3dcccccd
          vmovss  [rbp+90h+records.holdTimeSeconds], xmm0
        }
        records.keys.keyBits.array[0] = 4096;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rbp+90h+records.moveStick], xmm0
        }
        v14 = 1;
      }
      __asm { vmovss  [rbp+90h+records.deferTimeSeconds], xmm6 }
      memset(&records.keys.keyBits.array[1], 0, 24);
      CL_Input_AddAutomatedSequence((LocalClientNum_t)v9, &records, v14);
    }
    v18 = s_aimAtEntNum[v9];
    if ( v18 != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v9, v18);
      if ( (Entity->flags & 1) != 0 )
      {
        memset(&records, 0, sizeof(records));
        if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
        FunctionPointer_origin(&Entity->pose.origin.origin.origin, &outOrigin);
        if ( Entity->pose.isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rsp+190h+outOrigin]
            vcvtdq2pd xmm0, xmm0
            vmovsd  xmm3, cs:__real@3f30000000000000
            vmulsd  xmm0, xmm0, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+190h+outOrigin], xmm1
            vmovd   xmm2, dword ptr [rsp+190h+outOrigin+4]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm0, xmm2, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+190h+outOrigin+4], xmm1
            vmovd   xmm2, dword ptr [rsp+190h+outOrigin+8]
            vcvtdq2pd xmm2, xmm2
            vmulsd  xmm0, xmm2, xmm3
            vcvtsd2ss xmm1, xmm0, xmm0
            vmovss  dword ptr [rsp+190h+outOrigin+8], xmm1
          }
        }
        number = Entity->nextState.number;
        if ( number > 0x9E4 )
        {
          LODWORD(v90) = Entity->nextState.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v90) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= 2 )
        {
          LODWORD(v90) = 2;
          LODWORD(v88) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v88, v90) )
            __debugbreak();
        }
        v35 = 2533 * v9 + number;
        if ( v35 >= 0x13CA )
        {
          LODWORD(v90) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v90) )
            __debugbreak();
        }
        v36 = clientObjMap[v35];
        if ( v36 )
        {
          if ( v36 >= (unsigned int)s_objCount )
          {
            LODWORD(v90) = v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v90) )
              __debugbreak();
          }
          v37 = (const DObj *)s_objBuf[v36];
          if ( v37 )
            CG_DObjGetWorldTagMatrix(&Entity->pose, v37, scr_const.j_head, &outTagMat, &outOrigin);
        }
        if ( LocalClientGlobals == (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        v38 = LocalClientGlobals[3378].m_flags[1];
        if ( LocalClientGlobals == (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v92[0] = LocalClientGlobals[3367].m_flags[0] ^ ((v38 ^ ((_DWORD)LocalClientGlobals + 26936)) * ((v38 ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
        v92[1] = LocalClientGlobals[3367].m_flags[1] ^ ((v38 ^ ((_DWORD)LocalClientGlobals + 26940)) * ((v38 ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
        v39 = v38 ^ ((_DWORD)LocalClientGlobals + 26944);
        v40 = LocalClientGlobals[3368].m_flags[0] == v39 * (v39 + 2);
        v92[2] = LocalClientGlobals[3368].m_flags[0] ^ (v39 * (v39 + 2));
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
          vsubss  xmm2, xmm0, [rsp+190h+var_150]
          vmovss  dword ptr [rsp+190h+outOrigin], xmm2
          vmovss  xmm0, dword ptr [rsp+190h+outOrigin+4]
          vsubss  xmm1, xmm0, [rsp+190h+var_14C]
          vmovss  dword ptr [rsp+190h+outOrigin+4], xmm1
          vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
          vsubss  xmm3, xmm0, [rsp+190h+var_148]
          vmovss  dword ptr [rsp+190h+outOrigin+8], xmm3
          vmulss  xmm1, xmm1, xmm1
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm7, xmm2, xmm1
          vcomiss xmm7, xmm6
        }
        if ( v40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        __asm
        {
          vmovaps xmm1, xmm7
          vrsqrtss xmm2, xmm1, xmm7
          vmulss  xmm5, xmm2, dword ptr [rsp+190h+outOrigin]
          vmovss  dword ptr [rsp+190h+outOrigin], xmm5
          vmulss  xmm3, xmm2, dword ptr [rsp+190h+outOrigin+4]
          vmovss  dword ptr [rsp+190h+outOrigin+4], xmm3
          vmulss  xmm4, xmm2, dword ptr [rsp+190h+outOrigin+8]
          vmovss  dword ptr [rsp+190h+outOrigin+8], xmm4
          vmulss  xmm1, xmm3, dword ptr [r15+6954h]
          vmulss  xmm0, xmm5, dword ptr [r15+6950h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [r15+6958h]
          vaddss  xmm6, xmm2, xmm1
          vmulss  xmm1, xmm3, dword ptr [r15+6960h]
          vmulss  xmm0, xmm5, dword ptr [r15+695Ch]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [r15+6964h]
          vaddss  xmm11, xmm2, xmm1
        }
        *(double *)&_XMM0 = CL_Input_GetClientLookInversion((LocalClientNum_t)v9);
        __asm { vmovaps xmm10, xmm0 }
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v9);
        _RAX = GamerProfile_GetProfileSettings(ControllerFromClient);
        __asm { vmovss  xmm9, dword ptr [rax+4] }
        v71 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v9);
        GamerProfile_GetProfileSettings(v71);
        __asm
        {
          vmulss  xmm1, xmm6, cs:__real@c1a00000
          vdivss  xmm0, xmm1, dword ptr [rax+8]; val
          vmovss  xmm2, cs:__real@3f666666; max
          vmovss  xmm1, cs:__real@bf666666; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rbp+90h+records.lookStick+4], xmm0
          vmulss  xmm0, xmm10, cs:__real@c1a00000
          vmulss  xmm3, xmm0, xmm11
          vdivss  xmm0, xmm3, xmm9; val
          vmovss  xmm2, cs:__real@3f666666; max
          vmovss  xmm1, cs:__real@bf666666; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  dword ptr [rbp+90h+records.lookStick], xmm0
          vmovss  xmm0, cs:__real@3c23d70a
          vmovss  [rbp+90h+records.holdTimeSeconds], xmm0
        }
        CL_Input_AddAutomatedSequence((LocalClientNum_t)v9, &records, 1);
        memset(v92, 0, sizeof(v92));
      }
      else
      {
        s_aimAtEntNum[v9] = 2047;
      }
    }
    s_remainingTime[v9] -= msec;
  }
  _R11 = &v103;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

