/*
==============
CG_RumbleMP_Update
==============
*/

void __fastcall CG_RumbleMP_Update(const LocalClientNum_t localClientNum)
{
  ?CG_RumbleMP_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_RumbleMP_RemoveInactiveRumbles
==============
*/
void CG_RumbleMP_RemoveInactiveRumbles(LocalClientNum_t localClientNum, ActiveRumble *activeRumbleArray)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  ActiveRumble::<unnamed_type_source> *p_source; 
  __int64 v6; 
  __int64 entityNum; 
  CgEntitySystem *v8; 
  unsigned int *m_flags; 
  __int64 p_lerp; 
  char flags; 
  bool v12; 
  bool v13; 
  int time; 
  __int64 v15; 
  __int64 v16; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> v17; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_source = &activeRumbleArray->source;
  v6 = 32i64;
  do
  {
    if ( !*(_QWORD *)&p_source[-2].entityNum )
      goto LABEL_32;
    if ( !LODWORD(p_source[-1].pos.v[1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_rumble_mp.cpp", 56, ASSERT_TYPE_ASSERT, "(ar->sourceType != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "ar->sourceType != RUMBLESOURCE_INVALID") )
      __debugbreak();
    if ( LODWORD(p_source[-1].pos.v[1]) == 1 && p_source[-1].entityNum )
    {
      entityNum = p_source->entityNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v16) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v16) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v16) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v15) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v2] )
      {
        LODWORD(v16) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v16) )
          __debugbreak();
      }
      v8 = CgEntitySystem::ms_entitySystemArray[v2];
      if ( (unsigned int)entityNum >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      m_flags = LocalClientGlobals->predictedPlayerState.eFlags.m_flags;
      p_lerp = (__int64)&v8->m_entities[entityNum].nextState.lerp;
      flags = v8->m_entities[entityNum].flags;
      if ( p_source->entityNum != LocalClientGlobals->predictedPlayerState.clientNum )
        m_flags = (unsigned int *)p_lerp;
      v12 = (flags & 1) == 0;
      v17.m_flags[0] = *m_flags;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v13 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v17, ACTIVE, 0x17u);
      if ( v12 || p_source[-1].entityNum != 2 && v13 )
        goto LABEL_31;
    }
    time = LocalClientGlobals->time;
    if ( LODWORD(p_source[-2].pos.v[2]) + *(_DWORD *)(*(_QWORD *)&p_source[-2].entityNum + 8i64) > time )
      goto LABEL_32;
    if ( !p_source[-1].entityNum )
LABEL_31:
      CG_Rumble_InvalidateActiveRumble((ActiveRumble *)&p_source[-2]);
    else
      LODWORD(p_source[-2].pos.v[2]) = time;
LABEL_32:
    p_source = (ActiveRumble::<unnamed_type_source> *)((char *)p_source + 56);
    --v6;
  }
  while ( v6 );
}

/*
==============
CG_RumbleMP_Update
==============
*/
void CG_RumbleMP_Update(const LocalClientNum_t localClientNum)
{
  ClientRumbleGlobals *p_crData; 
  __int64 i; 
  int ControllerFromClient; 
  const dvar_t *v5; 
  __int64 v6; 
  vec3_t outDebugStrPos; 

  p_crData = &CG_GetLocalClientGlobals(localClientNum)->crData;
  if ( CG_Rumble_ShouldNotRumble(localClientNum) )
  {
    for ( i = 0i64; i < 32; ++i )
    {
      if ( p_crData->activeRumbles[0].startTime <= 0 )
        break;
      CG_Rumble_InvalidateActiveRumble(p_crData->activeRumbles);
      p_crData = (ClientRumbleGlobals *)((char *)p_crData + 56);
    }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    GPad_SetLowRumble(ControllerFromClient, 0.0);
    GPad_SetHighRumble(ControllerFromClient, 0.0);
    GPad_SetLeftTriggerRumble(ControllerFromClient, 0.0);
    GPad_SetRightTriggerRumble(ControllerFromClient, 0.0);
  }
  else
  {
    CG_RumbleMP_RemoveInactiveRumbles(localClientNum, p_crData->activeRumbles);
    CG_Rumble_CalcActiveRumbles(localClientNum, p_crData->activeRumbles, &p_crData->receiverPos, &p_crData->receiverOrientation);
    v5 = DVARBOOL_cg_drawrumbledebug;
    if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      v6 = 32i64;
      do
      {
        if ( p_crData->activeRumbles[0].rumbleInfo )
          CG_Rumble_DrawActiveRumble(localClientNum, p_crData->activeRumbles, &outDebugStrPos);
        p_crData = (ClientRumbleGlobals *)((char *)p_crData + 56);
        --v6;
      }
      while ( v6 );
    }
  }
}

