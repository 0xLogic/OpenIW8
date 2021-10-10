/*
==============
CL_ParseMP_ParseServerMessage
==============
*/

void __fastcall CL_ParseMP_ParseServerMessage(LocalClientNum_t localClientNum, msg_t *msg)
{
  ?CL_ParseMP_ParseServerMessage@@YAXW4LocalClientNum_t@@PEAUmsg_t@@@Z(localClientNum, msg);
}

/*
==============
CL_ParseMP_ObfuscateTrBase
==============
*/

void __fastcall CL_ParseMP_ObfuscateTrBase(entityState_t *es)
{
  ?CL_ParseMP_ObfuscateTrBase@@YAXPEAUentityState_t@@@Z(es);
}

/*
==============
CL_ParseMP_ServerIdChanged
==============
*/

void __fastcall CL_ParseMP_ServerIdChanged(LocalClientNum_t localClientNum)
{
  ?CL_ParseMP_ServerIdChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ParseMP_UnObfuscateTrBase
==============
*/

void __fastcall CL_ParseMP_UnObfuscateTrBase(entityState_t *es)
{
  ?CL_ParseMP_UnObfuscateTrBase@@YAXPEAUentityState_t@@@Z(es);
}

/*
==============
CL_ParseMP_MatchIdChanged
==============
*/

void __fastcall CL_ParseMP_MatchIdChanged(LocalClientNum_t localClientNum)
{
  ?CL_ParseMP_MatchIdChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ParseMP_ParseOverlayBits
==============
*/

void __fastcall CL_ParseMP_ParseOverlayBits(LocalClientNum_t localClientNum, msg_t *msg)
{
  ?CL_ParseMP_ParseOverlayBits@@YAXW4LocalClientNum_t@@PEAUmsg_t@@@Z(localClientNum, msg);
}

/*
==============
CL_ParseMP_ParseMapCenter
==============
*/

void __fastcall CL_ParseMP_ParseMapCenter(LocalClientNum_t localClientNum)
{
  ?CL_ParseMP_ParseMapCenter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ParseMP_SystemInfoChanged
==============
*/

void __fastcall CL_ParseMP_SystemInfoChanged(LocalClientNum_t localClientNum)
{
  ?CL_ParseMP_SystemInfoChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ParseMP_ResetTrBase
==============
*/

void __fastcall CL_ParseMP_ResetTrBase(entityState_t *es, const trType_t trTypeSet)
{
  ?CL_ParseMP_ResetTrBase@@YAXPEAUentityState_t@@W4trType_t@@@Z(es, trTypeSet);
}

/*
==============
CL_ParseMP_CheckForSnapshotValidity
==============
*/
char CL_ParseMP_CheckForSnapshotValidity(const ClActiveClientMP *cl, const ClSnapshot *old, const int deltaNum, const int snapFlags)
{
  __int16 v4; 
  ClSnapshotState state; 
  __int64 messageNum; 
  __int64 v11; 
  __int64 v12; 
  __int64 parseEntitiesIndex; 
  __int64 parseClientsIndex; 
  __int64 v15; 
  unsigned int parseAgentsCount; 
  __int64 parseAgentsIndex; 
  __int64 v18; 
  __int64 parseOmnvarsIdx; 
  __int64 parseOmnvarsCount; 
  __int64 parseUmbraGateStatesIndex; 
  __int64 parseUmbraGateStatesCount; 

  v4 = snapFlags;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1517, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !cl->parseEntitiesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1518, ASSERT_TYPE_ASSERT, "(cl->parseEntitiesCount)", (const char *)&queryFormat, "cl->parseEntitiesCount") )
    __debugbreak();
  if ( !cl->parseClientsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1519, ASSERT_TYPE_ASSERT, "(cl->parseClientsCount)", (const char *)&queryFormat, "cl->parseClientsCount") )
    __debugbreak();
  if ( !cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1520, ASSERT_TYPE_ASSERT, "(cls.maxClients)", (const char *)&queryFormat, "cls.maxClients") )
    __debugbreak();
  if ( !old && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1521, ASSERT_TYPE_ASSERT, "(old)", (const char *)&queryFormat, "old") )
    __debugbreak();
  state = old->state;
  if ( state )
  {
    if ( state == BYTE_VALUE )
    {
      messageNum = (unsigned int)old->messageNum;
      if ( (v4 & 0x100) != 0 )
        Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta (blind) from discarded full frame %d.\n", messageNum);
      else
        Com_PrintError(14, "[CL CheckForSnapshotValidity] Delta (full) from discarded full frame %d (not supposed to happen!).\n", messageNum);
      return 0;
    }
    else if ( (old->info.snapFlags & 8) != 0 )
    {
      Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta frame from baseline is not valid, server should explicitly request baseline delta.\n");
      return 0;
    }
    else
    {
      v11 = (unsigned int)old->messageNum;
      if ( (_DWORD)v11 == deltaNum )
      {
        v12 = cl->parseEntitiesCount - 600;
        parseEntitiesIndex = old->parseEntitiesIndex;
        if ( cl->parseEntitiesIndex - parseEntitiesIndex <= v12 )
        {
          parseClientsIndex = old->parseClientsIndex;
          v15 = cl->parseClientsCount - cls.maxClients;
          if ( cl->parseClientsIndex - parseClientsIndex <= v15 )
          {
            parseAgentsCount = cl->parseAgentsCount;
            if ( parseAgentsCount && (parseAgentsIndex = old->parseAgentsIndex, v18 = parseAgentsCount - cls.maxAgents, cl->parseAgentsIndex - parseAgentsIndex > v18) )
            {
              Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta parseAgentsIndex too old - %lld off the buffer\n", cl->parseAgentsIndex - v18 - parseAgentsIndex);
              return 0;
            }
            else
            {
              parseOmnvarsIdx = old->parseOmnvarsIdx;
              parseOmnvarsCount = cl->parseOmnvarsCount;
              if ( cl->parseOmnvarsIdx - parseOmnvarsIdx <= parseOmnvarsCount )
              {
                parseUmbraGateStatesIndex = old->parseUmbraGateStatesIndex;
                parseUmbraGateStatesCount = cl->parseUmbraGateStatesCount;
                if ( cl->parseUmbraGateStatesIndex - parseUmbraGateStatesIndex <= parseUmbraGateStatesCount )
                {
                  return 1;
                }
                else
                {
                  Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta parseUmbraGateStates too old - %lld off the buffer\n", cl->parseUmbraGateStatesIndex - parseUmbraGateStatesCount - parseUmbraGateStatesIndex);
                  return 0;
                }
              }
              else
              {
                Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta parseOmnvarsIdx too old - %lld off the buffer\n", cl->parseOmnvarsIdx - parseOmnvarsCount - parseOmnvarsIdx);
                return 0;
              }
            }
          }
          else
          {
            Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta parseClientsIndex too old - %lld off the buffer\n", cl->parseClientsIndex - v15 - parseClientsIndex);
            return 0;
          }
        }
        else
        {
          Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta parseEntitiesIndex too old - %lld off the buffer\n", cl->parseEntitiesIndex - v12 - parseEntitiesIndex);
          return 0;
        }
      }
      else
      {
        if ( (v4 & 0x100) != 0 )
          Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta (blind) frame was not received (%d)\n", v11);
        else
          Com_DPrintf(14, "[CL CheckForSnapshotValidity] Delta (full) frame too old\n");
        return 0;
      }
    }
  }
  else
  {
    Com_PrintError(14, "[CL CheckForSnapshotValidity] Delta from invalid frame %d (not supposed to happen!).\n", (unsigned int)old->messageNum);
    return 0;
  }
}

/*
==============
CL_ParseMP_CopyOldEntity
==============
*/
void CL_ParseMP_CopyOldEntity(ClActiveClientMP *cl, ClSnapshot *frame, entityState_t *oldES, const ClSnapshot *const oldFrame)
{
  entityState_t *v8; 
  unsigned int number; 
  unsigned __int64 v10; 
  unsigned int v11; 
  __int64 v12; 

  if ( (frame->info.snapFlags & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 383, ASSERT_TYPE_ASSERT, "(!( frame->info.snapFlags & (1<<3) ))", (const char *)&queryFormat, "!( frame->info.snapFlags & SNAPFLAG_BASELINE )") )
    __debugbreak();
  v8 = &cl->parseEntities[cl->parseEntitiesIndex % cl->parseEntitiesCount];
  *(_OWORD *)&v8->number = *(_OWORD *)&oldES->number;
  *(_OWORD *)&v8->lerp.pos.trType = *(_OWORD *)&oldES->lerp.pos.trType;
  *(_OWORD *)&v8->lerp.pos.trBase.y = *(_OWORD *)&oldES->lerp.pos.trBase.y;
  *(_OWORD *)&v8->lerp.pos.trDelta.z = *(_OWORD *)&oldES->lerp.pos.trDelta.z;
  *(_OWORD *)v8->lerp.apos.trBase.v = *(_OWORD *)oldES->lerp.apos.trBase.v;
  *(_OWORD *)&v8->lerp.apos.trDelta.y = *(_OWORD *)&oldES->lerp.apos.trDelta.y;
  *(_OWORD *)&v8->lerp.u.vehicle.bodyPitch = *(_OWORD *)&oldES->lerp.u.vehicle.bodyPitch;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&v8->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&oldES->lerp.u.infoVolumeGrapple + 24);
  *(_OWORD *)&v8->staticState.turret.carrierEntNum = *(_OWORD *)&oldES->staticState.turret.carrierEntNum;
  *(_OWORD *)&v8->clientNum = *(_OWORD *)&oldES->clientNum;
  *(_OWORD *)&v8->events[0].eventType = *(_OWORD *)&oldES->events[0].eventType;
  *(_OWORD *)&v8->events[2].eventType = *(_OWORD *)&oldES->events[2].eventType;
  *(_OWORD *)&v8->index.brushModel = *(_OWORD *)&oldES->index.brushModel;
  *(_OWORD *)&v8->animInfo.selectAnim = *(_OWORD *)&oldES->animInfo.selectAnim;
  *(_OWORD *)&v8->partBits.array[2] = *(_OWORD *)&oldES->partBits.array[2];
  *(_QWORD *)&v8->partBits.array[6] = *(_QWORD *)&oldES->partBits.array[6];
  if ( !oldFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 392, ASSERT_TYPE_ASSERT, "(oldFrame != nullptr)", (const char *)&queryFormat, "oldFrame != nullptr") )
    __debugbreak();
  number = oldES->number;
  if ( number >= 0x800 )
  {
    LODWORD(v12) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, 2048) )
      __debugbreak();
  }
  v10 = (unsigned __int64)number >> 5;
  v11 = 0x80000000 >> (number & 0x1F);
  if ( (v11 & oldFrame->entitiesLoD.array[v10]) != 0 )
  {
    if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    frame->entitiesLoD.array[v10] |= v11;
  }
  else
  {
    if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    frame->entitiesLoD.array[v10] &= ~v11;
  }
  ++cl->parseEntitiesIndex;
  ++frame->numEntities;
}

/*
==============
CL_ParseMP_DeltaAgent
==============
*/
void CL_ParseMP_DeltaAgent(ClActiveClientMP *cl, msg_t *msg, const int time, ClSnapshot *frame, int newnum, agentState_s *old, int unchanged)
{
  unsigned int v11; 
  agentState_s *v12; 
  unsigned int v13; 
  __int64 agentBits; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > newnum )
    goto LABEL_26;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( newnum > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
  {
LABEL_26:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v11 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(agentBits) = newnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 883, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( newnum ) && ( newnum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "newnum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", agentBits, ComCharacterLimits::ms_gameData.m_clientCount, v11) )
      __debugbreak();
  }
  if ( !cl->parseAgentsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 884, ASSERT_TYPE_ASSERT, "(cl->parseAgentsCount)", (const char *)&queryFormat, "cl->parseAgentsCount") )
    __debugbreak();
  v12 = &cl->parseAgents[cl->parseAgentsIndex % cl->parseAgentsCount];
  if ( unchanged )
  {
    *v12 = *old;
  }
  else
  {
    v13 = ComCharacterLimits::GetAgentBits();
    if ( MSG_ReadDeltaAgent(msg, time, old, v12, newnum, v13) )
      return;
  }
  ++cl->parseAgentsIndex;
  ++frame->numAgents;
}

/*
==============
CL_ParseMP_DeltaClient
==============
*/
void CL_ParseMP_DeltaClient(const LocalClientNum_t localClientNum, ClActiveClientMP *cl, msg_t *msg, const int time, ClSnapshot *frame, int newnum, clientState_t *old, int unchanged)
{
  __int64 v10; 
  clientState_t *v12; 
  clientState_t *v13; 
  __int64 v14; 
  __int128 v15; 
  unsigned int v16; 
  PartyData *GameParty; 
  __int64 clientBits; 

  v10 = localClientNum;
  v12 = &cl->parseClients[cl->parseClientsIndex % cl->parseClientsCount];
  if ( unchanged )
  {
    v13 = old;
    v14 = 3i64;
    do
    {
      v12 = (clientState_t *)((char *)v12 + 128);
      v15 = *(_OWORD *)&v13->clientIndex;
      v13 = (clientState_t *)((char *)v13 + 128);
      *(_OWORD *)&v12[-1].mount.normalIndex = v15;
      *(_OWORD *)&v12[-1].perkIconName = *(_OWORD *)&v13[-1].perkIconName;
      *(_OWORD *)&v12[-1].doorState[0].angle = *(_OWORD *)&v13[-1].doorState[0].angle;
      *(_OWORD *)&v12[-1].doorState[1].owner = *(_OWORD *)&v13[-1].doorState[1].owner;
      *(_OWORD *)&v12[-1].footstepActionType = *(_OWORD *)&v13[-1].footstepActionType;
      *(_OWORD *)&v12[-1].playerASM_scripted_anim_start_time = *(_OWORD *)&v13[-1].playerASM_scripted_anim_start_time;
      *(_OWORD *)&v12[-1].vehicleAnimStateSeat = *(_OWORD *)&v13[-1].vehicleAnimStateSeat;
      *(_OWORD *)&v12[-1].movingPlatform = *(_OWORD *)&v13[-1].movingPlatform;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)&v12->clientIndex = *(_OWORD *)&v13->clientIndex;
    *(_QWORD *)&v12->doNotSimulateTracers = *(_QWORD *)&v13->doNotSimulateTracers;
  }
  else
  {
    v16 = ComCharacterLimits::GetClientBits();
    if ( MSG_ReadDeltaClient(msg, time, old, v12, newnum, v16) )
      return;
    if ( (unsigned int)v10 >= 2 )
    {
      LODWORD(clientBits) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientBits, 2) )
        __debugbreak();
    }
    if ( !clientUIActives[v10].frontEndSceneState[0] && !CL_Demo_IsPlayingAny((LocalClientNum_t)v10) && (CL_Main_IsOnlineGame() || CL_Main_IsSystemLinkGame()) )
    {
      GameParty = Live_GetGameParty();
      if ( Session_IsValid(GameParty->session) && PeerMesh_IsEnabled(GameParty) )
      {
        if ( !PeerMesh_IsHostConnectivitySet(GameParty, v12->voiceConnectivityBits) )
        {
          LODWORD(clientBits) = v12->voiceConnectivityBits;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 437, ASSERT_TYPE_ASSERT, "( ( PeerMesh_IsHostConnectivitySet( party, state->voiceConnectivityBits ) ) )", "( state->voiceConnectivityBits ) = %i", clientBits) )
            __debugbreak();
        }
        if ( Party_IsHost(GameParty, newnum) && v12->voiceConnectivityBits != -1 )
        {
          LODWORD(clientBits) = v12->voiceConnectivityBits;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 438, ASSERT_TYPE_ASSERT, "( ( !Party_IsHost( party, clientNum ) || ( state->voiceConnectivityBits == (0xFFFFFFFF) ) ) )", "( state->voiceConnectivityBits ) = %i", clientBits) )
            __debugbreak();
        }
        if ( Party_IsMemberRegistered(GameParty, newnum) )
        {
          PeerMesh_SetClientConnectivity(GameParty, newnum, v12->voiceConnectivityBits);
          if ( Party_MemberHasLoopbackAddr(GameParty, newnum) )
            PeerMesh_SyncLocalConnectivity(GameParty, (const LocalClientNum_t)v10);
        }
      }
    }
  }
  ++cl->parseClientsIndex;
  ++frame->numClients;
}

/*
==============
CL_ParseMP_DeltaEntity
==============
*/
void CL_ParseMP_DeltaEntity(ClActiveClientMP *cl, msg_t *msg, const int time, const ClSnapshot *const oldFrame, ClSnapshot *newFrame, int newnum, entityState_t *oldES)
{
  ClSnapshot *v7; 
  bool v12; 
  __int64 parseEntitiesIndex; 
  entityState_t *v14; 
  entityState_t *v15; 
  int v16; 
  NetFieldLoD EntityLoD; 
  const dvar_t *v18; 
  __int64 v19; 
  __int64 nextNoDeltaEntity; 
  bool readEntityLoDBita; 
  __int64 readEntityLoDBit; 

  v7 = newFrame;
  v12 = (newFrame->info.snapFlags & 0x400) != 0;
  if ( !cl->parseEntitiesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 294, ASSERT_TYPE_ASSERT, "( cl->parseEntitiesCount )", (const char *)&queryFormat, "cl->parseEntitiesCount") )
    __debugbreak();
  if ( (v7->info.snapFlags & 8) != 0 )
  {
    parseEntitiesIndex = v7->parseEntitiesIndex;
    if ( parseEntitiesIndex != cls.noDeltaUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 299, ASSERT_TYPE_ASSERT, "( newFrame->parseEntitiesIndex ) == ( static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount) )", "%s == %s\n\t%lli, %lli", "newFrame->parseEntitiesIndex", "static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount)", parseEntitiesIndex, cls.noDeltaUseCount) )
      __debugbreak();
    v14 = &cls.noDeltaEntities[cls.nextNoDeltaEntity];
  }
  else
  {
    v14 = &cl->parseEntities[cl->parseEntitiesIndex % cl->parseEntitiesCount];
  }
  v15 = oldES;
  if ( oldES->lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    CL_ParseMP_ResetTrBase(oldES, TR_LINEAR_STOP);
  readEntityLoDBita = v12;
  v16 = newnum;
  if ( MSG_ReadDeltaEntity(msg, time, v15, v14, newnum, v7->info.snapFlags & 8, 0, readEntityLoDBita, (NetFieldLoD *const)&newFrame) )
  {
    CL_ParseMP_ObfuscateTrBase(v15);
  }
  else
  {
    if ( (_DWORD)newFrame == 1 )
      goto LABEL_29;
    if ( (v7->info.snapFlags & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 321, ASSERT_TYPE_ASSERT, "((newEntityLoD == NetFieldLoD_High) || ( (newFrame->info.snapFlags & (1<<3)) == 0 ))", (const char *)&queryFormat, "(newEntityLoD == NetFieldLoD_High) || ( (newFrame->info.snapFlags & SNAPFLAG_BASELINE) == 0 )") )
      __debugbreak();
    if ( (_DWORD)newFrame == 1 )
    {
LABEL_29:
      bitarray_base<bitarray<2048>>::setBit(&v7->entitiesLoD, v16);
    }
    else
    {
      if ( (_DWORD)newFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(newEntityLoD == NetFieldLoD_Low)", (const char *)&queryFormat, "newEntityLoD == NetFieldLoD_Low") )
        __debugbreak();
      if ( oldFrame )
        EntityLoD = GetEntityLoD(&oldFrame->entitiesLoD, v16);
      else
        EntityLoD = NetFieldLoD_High;
      if ( EntityLoD != (_DWORD)newFrame || v15->eType != v14->eType )
        MSG_ResetEntityToLowLoD(v14);
      bitarray_base<bitarray<2048>>::resetBit(&v7->entitiesLoD, v16);
    }
    CL_ParseMP_ObfuscateTrBase(v15);
    CL_ParseMP_ObfuscateTrBase(v14);
    v18 = DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled;
    if ( !DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_impulse_field_instrumentation_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled && v14->eType == ET_SCRIPTMOVER && (LOBYTE(v14->lerp.u.vehicle.bodyPitch) & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 355, ASSERT_TYPE_ASSERT, "((newES->eType != ET_SCRIPTMOVER) || !(newES->lerp.u.scriptMover.flags & (1 << 2)))", (const char *)&queryFormat, "(newES->eType != ET_SCRIPTMOVER) || !(newES->lerp.u.scriptMover.flags & SCRIPTMOVER_FLAG_IMPULSE_FIELD)") )
      __debugbreak();
    if ( (v7->info.snapFlags & 8) != 0 )
    {
      v19 = v7->parseEntitiesIndex;
      if ( v19 != cls.noDeltaUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 361, ASSERT_TYPE_ASSERT, "( newFrame->parseEntitiesIndex ) == ( static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount) )", "%s == %s\n\t%lli, %lli", "newFrame->parseEntitiesIndex", "static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount)", v19, cls.noDeltaUseCount) )
        __debugbreak();
      nextNoDeltaEntity = cls.nextNoDeltaEntity;
      if ( cls.nextNoDeltaEntity != v7->numEntities )
      {
        LODWORD(readEntityLoDBit) = v7->numEntities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 362, ASSERT_TYPE_ASSERT, "(cls.nextNoDeltaEntity == static_cast<SnapshotEntryIndex>(newFrame->numEntities))", "%s\n\t%lld != %i", "cls.nextNoDeltaEntity == static_cast<SnapshotEntryIndex>(newFrame->numEntities)", cls.nextNoDeltaEntity, readEntityLoDBit) )
          __debugbreak();
        nextNoDeltaEntity = cls.nextNoDeltaEntity;
      }
      cls.nextNoDeltaEntity = nextNoDeltaEntity + 1;
    }
    else
    {
      ++cl->parseEntitiesIndex;
    }
    ++v7->numEntities;
  }
}

/*
==============
CL_ParseMP_DeltaWeapon
==============
*/
void CL_ParseMP_DeltaWeapon(ClActiveClientMP *cl, msg_t *msg, ClSnapshot *newframe, const int weaponMapIndex, const WeaponMapEntry *from, const bool newWeaponsAreNoDelta)
{
  WeaponMapEntry *v10; 
  __int64 v11; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1096, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1097, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( newWeaponsAreNoDelta )
  {
    if ( cl->noDeltaWeaponMapEntriesUseCount >= cl->parseNoDeltaWeaponMapEntriesCount )
    {
      LODWORD(v11) = cl->noDeltaWeaponMapEntriesUseCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1102, ASSERT_TYPE_ASSERT, "(unsigned)( cl->noDeltaWeaponMapEntriesUseCount ) < (unsigned)( cl->parseNoDeltaWeaponMapEntriesCount )", "cl->noDeltaWeaponMapEntriesUseCount doesn't index cl->parseNoDeltaWeaponMapEntriesCount\n\t%i not in [0, %i)", v11, cl->parseNoDeltaWeaponMapEntriesCount) )
        __debugbreak();
    }
    v10 = &cl->parseNoDeltaWeaponMapEntries[cl->noDeltaWeaponMapEntriesUseCount];
  }
  else
  {
    if ( !newframe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1107, ASSERT_TYPE_ASSERT, "(newframe)", (const char *)&queryFormat, "newframe") )
      __debugbreak();
    v10 = &cl->parseWeaponMapEntries[cl->parseWeaponMapEntriesIdx % cl->parseWeaponMapEntriesCount];
  }
  if ( !MSG_ReadDeltaWeaponMapEntry(msg, weaponMapIndex, from, v10) )
  {
    if ( newWeaponsAreNoDelta )
    {
      ++cl->noDeltaWeaponMapEntriesUseCount;
    }
    else
    {
      ++cl->parseWeaponMapEntriesIdx;
      ++newframe->numWeaponMapEntries;
    }
  }
}

/*
==============
CL_ParseMP_DiscardBaselineSnapshots
==============
*/
__int64 CL_ParseMP_DiscardBaselineSnapshots()
{
  __int64 result; 
  unsigned int v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 i; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 

  result = LODWORD(cl_maxLocalClients);
  v12 = 0;
  v1 = 0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v2 = LODWORD(cl_maxLocalClients) != 0;
    v3 = 0i64;
    v13 = 0i64;
    do
    {
      if ( !v2 )
      {
        LODWORD(v10) = result;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
        __debugbreak();
      if ( !*(ClConnection **)((char *)ClConnection::ms_connections + v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      v4 = *(__int64 *)((char *)ClConnection::ms_connections + v3);
      if ( v1 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v10 = cl_maxLocalClients;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
        __debugbreak();
      if ( !*(ClActiveClient **)((char *)ClActiveClient::ms_activeClients + v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
        __debugbreak();
      v5 = *(__int64 *)((char *)ClActiveClient::ms_activeClients + v3);
      v6 = 0;
      for ( i = 0i64; ; i += 94856i64 )
      {
        if ( *(int *)(v4 + 595168) <= 0 )
        {
          LODWORD(v11) = *(_DWORD *)(v4 + 595168);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v11, 0i64) )
            __debugbreak();
        }
        if ( v6 >= *(_DWORD *)(v4 + 595168) )
          break;
        v8 = *(_QWORD *)(v5 + 129752);
        if ( (*(_BYTE *)(v8 + i + 94468) & 8) != 0 )
          *(_BYTE *)(v8 + i + 94464) = 2;
        ++v6;
      }
      result = LODWORD(cl_maxLocalClients);
      v1 = v12 + 1;
      v3 = v13 + 8;
      v12 = v1;
      v13 += 8i64;
      v2 = v1 < LODWORD(cl_maxLocalClients);
    }
    while ( (int)v1 < SLODWORD(cl_maxLocalClients) );
  }
  return result;
}

/*
==============
CL_ParseMP_GetEntityStateForFrame
==============
*/
entityState_t *CL_ParseMP_GetEntityStateForFrame(ClActiveClientMP *cl, const ClSnapshot *frame, const __int64 index)
{
  __int64 parseEntitiesIndex; 
  int v7; 
  int nextNoDeltaEntity; 

  if ( (frame->info.snapFlags & 8) == 0 )
    return &cl->parseEntities[(index + frame->parseEntitiesIndex) % cl->parseEntitiesCount];
  if ( (unsigned int)index >= LODWORD(cls.nextNoDeltaEntity) )
  {
    nextNoDeltaEntity = cls.nextNoDeltaEntity;
    v7 = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cls.nextNoDeltaEntity )", "index doesn't index cls.nextNoDeltaEntity\n\t%i not in [0, %i)", v7, nextNoDeltaEntity) )
      __debugbreak();
  }
  parseEntitiesIndex = frame->parseEntitiesIndex;
  if ( parseEntitiesIndex != cls.noDeltaUseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 239, ASSERT_TYPE_ASSERT, "( frame->parseEntitiesIndex ) == ( static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount) )", "%s == %s\n\t%lli, %lli", "frame->parseEntitiesIndex", "static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount)", parseEntitiesIndex, cls.noDeltaUseCount) )
    __debugbreak();
  return &cls.noDeltaEntities[index];
}

/*
==============
CL_ParseMP_GetPredictedPlayerInformationForCommandTime
==============
*/
char CL_ParseMP_GetPredictedPlayerInformationForCommandTime(const ClActiveClientMP *cl, const int commandTime, playerState_s *to)
{
  __int128 v6; 
  float v7; 
  int movementDir; 
  int outPredictedTime[3]; 
  ClPredictResultMP outPredictedData; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 133, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 134, ASSERT_TYPE_ASSERT, "(to)", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( ClActiveClientMP::FindPredictedDataForTime((ClActiveClientMP *)cl, commandTime, outPredictedTime, &outPredictedData) )
  {
    if ( outPredictedTime[0] != commandTime )
      Com_Printf(14, "CL_ParseMP_GetPredictedPlayerInformationForCommandTime() Couldn't find exact match for commandTime %i, using commandTime %i\n", (unsigned int)commandTime, (unsigned int)outPredictedTime[0]);
    v6 = *(_OWORD *)outPredictedData.origin.v;
    v7 = outPredictedData.velocity.v[1];
    to->inputTime = outPredictedData.inputTime;
    movementDir = outPredictedData.movementDir;
    *(_OWORD *)to->origin.v = v6;
    to->velocity.v[2] = outPredictedData.velocity.v[2];
    to->velocity.v[1] = v7;
    to->movementDir = movementDir;
    to->movementDirPrecise = outPredictedData.movementDirPrecise;
    to->footstepCount = outPredictedData.footstepCount;
    to->lastStandMoveStopTime = outPredictedData.lastStandMoveStopTime;
    if ( ((LODWORD(to->origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(to->origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(to->origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 152, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to->origin )[0] ) && !IS_NAN( ( to->origin )[1] ) && !IS_NAN( ( to->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to->origin )[0] ) && !IS_NAN( ( to->origin )[1] ) && !IS_NAN( ( to->origin )[2] )") )
      __debugbreak();
    if ( ((LODWORD(to->velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(to->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(to->velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 153, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to->velocity )[0] ) && !IS_NAN( ( to->velocity )[1] ) && !IS_NAN( ( to->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to->velocity )[0] ) && !IS_NAN( ( to->velocity )[1] ) && !IS_NAN( ( to->velocity )[2] )") )
      __debugbreak();
    return 1;
  }
  else
  {
    Com_PrintError(14, "CL_ParseMP_GetPredictedPlayerInformationForCommandTime() Unable to find predicted origin for server time %i.\n", (unsigned int)commandTime);
    return 0;
  }
}

/*
==============
CL_ParseMP_GetWeaponEntryForFrame
==============
*/
WeaponMapEntry *CL_ParseMP_GetWeaponEntryForFrame(ClActiveClientMP *cl, ClSnapshot *frame, const __int64 index, const bool noDeltaEntry)
{
  __int64 noDeltaWeaponMapEntriesUseCount; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1067, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( noDeltaEntry )
  {
    noDeltaWeaponMapEntriesUseCount = cl->noDeltaWeaponMapEntriesUseCount;
    if ( index < noDeltaWeaponMapEntriesUseCount )
    {
      if ( (unsigned int)index >= (unsigned int)noDeltaWeaponMapEntriesUseCount )
      {
        LODWORD(v12) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1077, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cl->noDeltaWeaponMapEntriesUseCount )", "index doesn't index cl->noDeltaWeaponMapEntriesUseCount\n\t%i not in [0, %i)", v12, noDeltaWeaponMapEntriesUseCount) )
          __debugbreak();
      }
      return &cl->parseNoDeltaWeaponMapEntries[index];
    }
    return 0i64;
  }
  if ( !frame || index >= frame->numWeaponMapEntries )
    return 0i64;
  v10 = (index + frame->parseWeaponMapEntriesIndex) % cl->parseWeaponMapEntriesCount;
  v11 = v10;
  if ( (unsigned int)v10 >= cl->parseWeaponMapEntriesCount )
  {
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1088, ASSERT_TYPE_ASSERT, "(unsigned)( bufIdx ) < (unsigned)( cl->parseWeaponMapEntriesCount )", "bufIdx doesn't index cl->parseWeaponMapEntriesCount\n\t%i not in [0, %i)", v12, cl->parseWeaponMapEntriesCount) )
      __debugbreak();
  }
  return &cl->parseWeaponMapEntries[v11];
}

/*
==============
CL_ParseMP_InitWeaponMapSize
==============
*/
char CL_ParseMP_InitWeaponMapSize()
{
  unsigned __int16 m_weaponMapMaxRuntimeEntries; 
  int maxClients; 
  char result; 
  unsigned __int16 v3; 
  int v4; 
  int v5; 
  unsigned __int16 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  unsigned __int16 outIndexBits; 

  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 381, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    m_weaponMapMaxRuntimeEntries = cls.m_weaponMapMaxRuntimeEntries;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    maxClients = cls.maxClients;
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 254, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( BgWeaponMap::ms_runtimeSize != BgWeaponMap::ComputeRuntimeSize(maxClients, cls.m_activeGameMapName, m_weaponMapMaxRuntimeEntries, &outIndexBits) )
    {
      v11 = BgWeaponMap::ComputeRuntimeSize(maxClients, cls.m_activeGameMapName, m_weaponMapMaxRuntimeEntries, &outIndexBits);
      v9 = BgWeaponMap::ms_runtimeSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 255, ASSERT_TYPE_ASSERT, "( ms_runtimeSize ) == ( ComputeRuntimeSize( clientCount, mapname, largeDynamicMaxCount, &mapIndexBits ) )", "%s == %s\n\t%i, %i", "ms_runtimeSize", "ComputeRuntimeSize( clientCount, mapname, largeDynamicMaxCount, &mapIndexBits )", v9, v11) )
        __debugbreak();
    }
    result = outIndexBits;
    if ( BgWeaponMap::ms_runtimeIndexBits != outIndexBits )
    {
      LODWORD(v10) = outIndexBits;
      LODWORD(v8) = BgWeaponMap::ms_runtimeIndexBits;
      result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 256, ASSERT_TYPE_ASSERT, "( ms_runtimeIndexBits ) == ( mapIndexBits )", "%s == %s\n\t%i, %i", "ms_runtimeIndexBits", "mapIndexBits", v8, v10);
      if ( result )
        __debugbreak();
    }
  }
  else
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 381, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    v3 = cls.m_weaponMapMaxRuntimeEntries;
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    BgWeaponMap::ms_runtimeSize = BgWeaponMap::ComputeRuntimeSize(cls.maxClients, cls.m_activeGameMapName, v3, &BgWeaponMap::ms_runtimeIndexBits);
    result = BgWeaponMap::ms_runtimeIndexBits;
    v4 = 1 << BgWeaponMap::ms_runtimeIndexBits;
    if ( 1 << BgWeaponMap::ms_runtimeIndexBits < 0 || (unsigned int)v4 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v4, "signed", v4) )
        __debugbreak();
      result = BgWeaponMap::ms_runtimeIndexBits;
    }
    if ( BgWeaponMap::ms_runtimeSize >= (unsigned __int16)v4 )
    {
      v5 = 1 << result;
      if ( (1 << result < 0 || (unsigned int)v5 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v5, "signed", v5) )
        __debugbreak();
      LODWORD(v10) = (unsigned __int16)v5;
      LODWORD(v8) = BgWeaponMap::ms_runtimeSize;
      result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 243, ASSERT_TYPE_ASSERT, "( ms_runtimeSize ) < ( truncate_cast<ushort>(1 << ms_runtimeIndexBits) )", "%s < %s\n\t%i, %i", "ms_runtimeSize", "truncate_cast<ushort>(1 << ms_runtimeIndexBits)", v8, v10);
      if ( result )
        __debugbreak();
    }
    BgWeaponMap::ms_runtimeSizeInitialized = 1;
  }
  if ( !LODWORD(cl_maxLocalClients) )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 381, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients");
    if ( result )
      __debugbreak();
  }
  v6 = cls.m_weaponMapMaxRuntimeEntries;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized");
    if ( result )
      __debugbreak();
  }
  if ( v6 != BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    v7 = BgWeaponMap::ms_runtimeSize;
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 381, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    LODWORD(v10) = v7;
    LODWORD(v8) = cls.m_weaponMapMaxRuntimeEntries;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2637, ASSERT_TYPE_ASSERT, "( cls.GetWeaponMapMaxRuntimeEntries() ) == ( BgWeaponMap::GetRuntimeSize() )", "%s == %s\n\t%u, %u", "cls.GetWeaponMapMaxRuntimeEntries()", "BgWeaponMap::GetRuntimeSize()", v8, v10);
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
CL_ParseMP_MatchIdChanged
==============
*/
void CL_ParseMP_MatchIdChanged(LocalClientNum_t localClientNum)
{
  ClConnectionDataMP *ClientConnectionData; 
  const char *ConfigString; 
  unsigned __int64 v3; 

  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  if ( !ClientConnectionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(clcData)", "%s\n\tNull connection data when matchId updated", "clcData") )
    __debugbreak();
  v3 = 0i64;
  ConfigString = CL_GetConfigString(536);
  j_sscanf(ConfigString, "%llx", &v3);
  ClientConnectionData->currentMatchId = v3;
}

/*
==============
CL_ParseMP_ObfuscateTrBase
==============
*/
void CL_ParseMP_ObfuscateTrBase(entityState_t *es)
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( es->number < (int)ComCharacterLimits::ms_gameData.m_clientCount && es->lerp.pos.trType == TR_LINEAR_STOP )
    CL_ParseMP_ResetTrBase(es, TR_LINEAR_STOP_SECURE);
}

/*
==============
CL_ParseMP_ParseCharacterCounts
==============
*/
void CL_ParseMP_ParseCharacterCounts(LocalClientNum_t localClientNum, msg_t *msg)
{
  __int64 v3; 
  unsigned int Byte; 
  int v5; 
  int maxAgents; 
  PartyData *PartyData; 
  char *fmt; 
  int fmta; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int maxClients; 

  v3 = localClientNum;
  Byte = MSG_ReadByte(msg);
  v5 = MSG_ReadByte(msg);
  if ( CL_Demo_IsPlayingAny((LocalClientNum_t)v3) )
  {
    if ( (int)Byte > cls.maxClients )
    {
      maxClients = cls.maxClients;
      v13 = Byte;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2593, ASSERT_TYPE_ASSERT, "( svMaxClients ) <= ( cls.maxClients )", "%s <= %s\n\t%i, %i", "svMaxClients", "cls.maxClients", v13, maxClients) )
        __debugbreak();
    }
    maxAgents = cls.maxAgents;
    if ( v5 > cls.maxAgents )
    {
      LODWORD(v14) = cls.maxAgents;
      LODWORD(v12) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2594, ASSERT_TYPE_ASSERT, "( svMaxAgents ) <= ( cls.maxAgents )", "%s <= %s\n\t%i, %i", "svMaxAgents", "cls.maxAgents", v12, v14) )
        __debugbreak();
      maxAgents = cls.maxAgents;
    }
    LODWORD(v10) = v5;
    LODWORD(fmt) = maxAgents;
    Com_Printf(14, "CL_ParseMP_ParseCharacterCounts: Clamping clients (%i -> %i) and agents (%i -> %i) for demo playback\n", (unsigned int)cls.maxClients, Byte, fmt, v10);
    cls.maxClients = Byte;
    cls.maxAgents = v5;
  }
  else
  {
    if ( Byte != cls.maxClients )
    {
      fmta = cls.maxClients;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221A20, 6145i64, Byte, fmta);
    }
    if ( v5 != cls.maxAgents )
    {
      LODWORD(fmt) = cls.maxAgents;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221A60, 6146i64, (unsigned int)v5, fmt);
    }
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !clientUIActives[v3].frontEndSceneState[0] && !CL_Demo_IsPlayingAny((LocalClientNum_t)v3) && CL_Main_IsOnlineGame() )
  {
    PartyData = Lobby_GetPartyData();
    LODWORD(fmt) = Party_GetNumGameSlots(PartyData);
    Com_Printf(14, "Modifying party [%s] in CL_ParseMP_UpdateSessionClientCounts() to have %i slots, from %i slots.\n", PartyData->partyName, Byte, fmt);
    Party_SetNumGameSlots(PartyData, Byte);
  }
  if ( Com_IsAnyLocalServerRunning() )
    ComCharacterLimits::ValidateGameLimits(cls.maxClients, cls.maxAgents, 8u, 8u);
  else
    ComCharacterLimits::UpdateGameLimits(cls.maxClients, cls.maxAgents, 8u, 8u);
}

/*
==============
CL_ParseMP_ParseCommandBuffer
==============
*/
void CL_ParseMP_ParseCommandBuffer(LocalClientNum_t localClientNum, msg_t *msg)
{
  int Long; 
  int UnsignedShort; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  int v8; 
  ClConnectionDataMP *ClientConnectionData; 
  ClConnectionDataMP *v10; 
  int cursize; 
  int v12; 
  msg_t buf; 
  char buffer[1024]; 
  unsigned __int8 data[1024]; 

  Long = MSG_ReadLong(msg);
  UnsignedShort = MSG_ReadUnsignedShort(msg);
  v6 = truncate_cast<unsigned short,int>(UnsignedShort);
  v7 = v6;
  v8 = v6;
  if ( v6 > 0x3FCu )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221BF0, 292i64, v6, 1020i64);
  if ( v7 > 0x3FCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2876, ASSERT_TYPE_ASSERT, "(commandSize <= sizeof( cmdBuf ))", (const char *)&queryFormat, "commandSize <= sizeof( cmdBuf )") )
    __debugbreak();
  MSG_ReadData(msg, v8, buffer, 1020);
  if ( msg->overflowed )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221CA0, 293i64);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  v10 = ClientConnectionData;
  if ( ClientConnectionData->serverCommandSequence < Long )
  {
    ClientConnectionData->serverCommandSequence = Long;
    MSG_Init(&buf, data, 1024);
    MSG_WriteByte(&buf, 89i64);
    MSG_WriteByte(&buf, 0i64);
    MSG_WriteShort(&buf, v8);
    if ( buf.cursize != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2897, ASSERT_TYPE_ASSERT, "(commandMsg.cursize == (2 + sizeof( ushort )))", "%s\n\tChange BINARY_RELIABLE_COMMAND_OVERHEAD if this assert hits.", "commandMsg.cursize == BINARY_RELIABLE_COMMAND_OVERHEAD") )
      __debugbreak();
    MSG_WriteData(&buf, buffer, v8);
    if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2900, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &commandMsg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &commandMsg )") )
      __debugbreak();
    cursize = buf.cursize;
    v12 = Long & 0x1FF;
    if ( buf.cursize > 1024 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2904, ASSERT_TYPE_ASSERT, "( commandMsg.cursize ) <= ( 1024 )", "%s <= %s\n\t%i, %i", "commandMsg.cursize", "MAX_RELIABLE_COMMAND_LENGTH", buf.cursize, 1024) )
        __debugbreak();
      cursize = buf.cursize;
    }
    CircularEntryBuffer<512,131072,int,0>::SetDataAndType(&v10->serverReliableCommands, v12, data, cursize, v10->serverReliableCommands.TYPE_NOT_SPECIFIED);
  }
}

/*
==============
CL_ParseMP_ParseCommandDelta
==============
*/
void CL_ParseMP_ParseCommandDelta(const LocalClientNum_t localClientNum, msg_t *msg, const ClSnapshot *const oldframe, ClSnapshot *const newSnap)
{
  msg_t *v7; 
  int Bit; 
  int svCmdTargetError; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !newSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1846, ASSERT_TYPE_ASSERT, "(newSnap)", (const char *)&queryFormat, "newSnap") )
    __debugbreak();
  v7 = msg;
  if ( !oldframe )
    goto LABEL_12;
  if ( !MSG_ReadBit(msg) )
  {
    svCmdTargetError = oldframe->svCmdTargetError;
    goto LABEL_13;
  }
  Bit = MSG_ReadBit(msg);
  v7 = msg;
  if ( !Bit )
  {
LABEL_12:
    svCmdTargetError = MSG_ReadLong(v7);
    goto LABEL_13;
  }
  svCmdTargetError = oldframe->svCmdTargetError + (char)MSG_ReadByte(msg);
LABEL_13:
  newSnap->svCmdTargetError = svCmdTargetError;
}

/*
==============
CL_ParseMP_ParseGamestate
==============
*/
void CL_ParseMP_ParseGamestate(LocalClientNum_t localClientNum, msg_t *msg)
{
  __int64 v3; 
  ClConnectionDataMP *ClientConnectionData; 
  ClActiveClientMP *ClientMP; 
  bool v6; 
  int Byte; 
  unsigned __int16 v8; 
  unsigned int DataChecksum; 
  int Long; 
  unsigned __int64 Int64; 
  int Bit; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int DvarChecksum; 
  __int64 Checksum; 
  __int64 Bits; 
  const char *v18; 
  unsigned int v19; 
  fileHandle_t *v20; 
  fileHandle_t v21; 
  int i; 
  ClConfigStringsMP *ClConfigStringsMP; 
  const char *ConfigString; 
  int v25; 
  char *v26; 
  ClActiveClientMP *v27; 
  const char *v28; 
  ClConnectionDataMP *v29; 
  const char *v30; 
  char *m_ptr; 
  char *v32; 
  char *v33; 
  char *fmt; 
  __int64 v35; 
  __int64 v36; 
  char v37; 
  char *head[3]; 
  BG_SynchronizedPlayerInfo playerInfo; 
  Mem_LargeLocal gametype; 
  Mem_LargeLocal string; 

  head[1] = (char *)-2i64;
  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v37 = clientUIActives[v3].frontEndSceneState[0];
  if ( !v37 )
    Con_Close((LocalClientNum_t)v3);
  ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
  head[0] = (char *)ClientConnectionData;
  ClientConnectionData->connectPacketCount = 0;
  CL_MainMP_ClearState((LocalClientNum_t)v3);
  MSG_ClearLastReferencedEntity(msg);
  ClientConnectionData->serverCommandSequence = MSG_ReadLong(msg);
  cls.mapCenter.v[0] = 0.0;
  cls.mapCenter.v[1] = 0.0;
  cls.mapCenter.v[2] = 0.0;
  MSG_ReadString(msg, (char *)&string, 0x24u);
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
  ClientMP->mapcrc = MSG_ReadLong(msg);
  MSG_ReadString(msg, (char *)&gametype, 0x24u);
  v6 = MSG_ReadBit(msg) != 0;
  Byte = MSG_ReadByte(msg);
  ClientMP->svCmdMaxDurationMsec = MSG_ReadByte(msg);
  LODWORD(ClientMP) = MSG_ReadShort(msg);
  cls.m_serverFrameDuration = Byte;
  ClStatic::SetGameMapName(&cls, (const char *)&string);
  ClStatic::SetActiveGameType(&cls, (const char *)&gametype);
  ClStatic::SetActiveHardcoreMode(&cls, v6);
  v8 = truncate_cast<unsigned short,int>((int)ClientMP);
  ClStatic::SetWeaponMapRuntimeMaxEntries(&cls, v8);
  DataChecksum = BG_Omnvar_GetDataChecksum();
  Long = MSG_ReadLong(msg);
  if ( DataChecksum != Long )
  {
    LODWORD(fmt) = Long;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442218C8, 6144i64, DataChecksum, fmt);
  }
  CL_ParseMP_ParseCharacterCounts((LocalClientNum_t)v3, msg);
  cls.m_scriptableNetChecksum = MSG_ReadLong(msg);
  Int64 = MSG_ReadInt64(msg);
  ScriptableCl_SetChangeQueueIndex((const LocalClientNum_t)v3, Int64);
  cls.spawnGroupLootSeed = 0;
  cls.spawnGroupLootTable[0] = 0;
  Bit = MSG_ReadBit(msg);
  cls.spawnGroupLootActive = Bit != 0;
  if ( Bit )
  {
    cls.spawnGroupLootTableChecksum = MSG_ReadLong(msg);
    cls.spawnGroupLootSeed = MSG_ReadLong(msg);
    MSG_ReadString(msg, cls.spawnGroupLootTable, 0x40u);
    MSG_ReadString(msg, cls.spawnGroupLootTableZones, 0x40u);
    MSG_ReadString(msg, cls.spawnGroupLootTableFilter, 0x400u);
  }
  v13 = MSG_ReadLong(msg);
  v14 = MSG_ReadLong(msg);
  if ( !NetConstStrings_AreStringsLoaded() )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v36) = 2;
      LODWORD(v35) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    if ( clientUIActives[v3].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2492, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tRebuilding NCS map for front-end scene", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    NetConstStrings_BuildStringMap();
    BgDynamicLimits::UpdateDynamicValues();
    BG_Omnvar_InitializeDefaultValues();
  }
  DvarChecksum = NetConstStrings_GetDvarChecksum();
  Checksum = (unsigned int)NetConstStrings_GetChecksum();
  LODWORD(v35) = v14;
  LODWORD(fmt) = v13;
  Com_Printf(14, "CL_ParseMP_ParseNetConstStrings: Comparing our checksums %x, %x against server %x, %x\n", DvarChecksum, Checksum, fmt, v35);
  if ( DvarChecksum != v13 )
  {
    Com_PrintError(16, "Our Network Dvar checkum %x does not match the server %x. Network dvars must be available on all platforms. Look for recent DVAR_FLAGS_SERVER_REPLICATION changes that impacts the client and server differently.\n", DvarChecksum, v13);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221780);
  }
  if ( (_DWORD)Checksum != v14 )
  {
    Com_PrintError(16, "Our NetConstString checkum %x does not match the server %x. Please collect both server and client logs and look for the checksum details.\n", (unsigned int)Checksum, v14);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221780);
  }
  CL_ParseMP_InitWeaponMapSize();
  while ( 1 )
  {
    Bits = MSG_ReadBits(msg, 4u);
    v19 = Bits;
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum svc_ops_e __cdecl truncate_cast_impl<enum svc_ops_e,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    if ( v19 == 1 )
      break;
    if ( v19 == 3 )
    {
      ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
      ClConfigStringsMP::ParseConfigStrings(ClConfigStringsMP, (LocalClientNum_t)v3, msg);
      ConfigString = CL_GetConfigString(534);
      j_sscanf(ConfigString, "%f %f %f", &cls.mapCenter, &cls.mapCenter.y, &cls.mapCenter.z);
    }
    else if ( v19 == 8 )
    {
      bdSecurityID::bdSecurityID(&playerInfo.partyId);
      XUID::XUID(&playerInfo.xuid);
      for ( i = 0; i < cls.maxClients; ++i )
      {
        if ( MSG_ReadBit(msg) )
        {
          BG_SynchronizedPlayerInfo_Reset(&playerInfo);
          BG_SynchronizedPlayerInfo::Deserialize(&playerInfo, msg);
          CL_PlayerInfosMP_SetPlayerInfo(i, &playerInfo);
        }
        else
        {
          Com_Printf(14, "%s - Clearing player info for client %d\n", "CL_ParseMP_ParseSynchronizedPlayerInfos", (unsigned int)i);
          CL_PlayerInfosMP_ResetPlayerInfo(i);
        }
      }
      bdSecurityID::~bdSecurityID(&playerInfo.partyId);
    }
    else
    {
      v20 = FS_FOpenFileWrite((fileHandle_t *)&stru_144018080, v18);
      v21.handle.handle = (__int64)v20;
      if ( v20 != (fileHandle_t *)-1i64 )
      {
        FS_Write(msg->data, msg->cursize, (fileHandle_t)v20);
        FS_FCloseFile(v21);
      }
      Com_PrintError(1, "CL_ParseGamestate: bad command byte %d\n", v19);
      MSG_Discard(msg);
    }
  }
  v25 = MSG_ReadLong(msg);
  v26 = head[0];
  *((_DWORD *)head[0] + 33032) = v25;
  if ( v25 < 0 || v25 >= cls.maxClients )
  {
    Com_PrintError(1, "CL_ParseGamestate: bad clientNum %i\n", (unsigned int)v25);
    *((_DWORD *)v26 + 33032) = 0;
    MSG_Discard(msg);
  }
  else
  {
    *((_DWORD *)v26 + 37512) = MSG_ReadLong(msg);
    if ( !v37 )
      DB_SyncLevelLoad();
    v27 = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v3);
    v28 = CL_GetConfigString(530);
    cls.serverId = atoi(v28);
    v27->serverId = cls.serverId;
    v29 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "(clcData)", "%s\n\tNull connection data when matchId updated", "clcData") )
      __debugbreak();
    head[0] = NULL;
    v30 = CL_GetConfigString(536);
    j_sscanf(v30, "%llx", head);
    v29->currentMatchId = (unsigned __int64)head[0];
    Mem_LargeLocal::Mem_LargeLocal(&string, 0x2000ui64, "snapshot_key_t key");
    m_ptr = (char *)string.m_ptr;
    Mem_LargeLocal::Mem_LargeLocal(&gametype, 0x2000ui64, "snapshot_value_t value");
    v32 = (char *)gametype.m_ptr;
    v33 = (char *)CL_GetConfigString(529);
    if ( !Com_IsAnyLocalServerRunning() )
    {
      head[0] = v33;
      while ( head[0] )
      {
        Info_NextPair((const char **)head, m_ptr, v32);
        if ( !*m_ptr )
          break;
        Dvar_SetFromStringByNameFromSource(m_ptr, v32, DVAR_SOURCE_INTERNAL);
      }
    }
    Mem_LargeLocal::~Mem_LargeLocal(&gametype);
    Mem_LargeLocal::~Mem_LargeLocal(&string);
    CL_MainMP_InitializeGamestate((LocalClientNum_t)v3);
    if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
      __debugbreak();
    MSG_SetupNetFieldListsForGame(cls.m_activeGameTypeName);
    CL_LoadMigrationPers((LocalClientNum_t)v3);
    CL_Pause_UnpauseGame();
    OnlineAutoTest::InGameSucceeded();
  }
}

/*
==============
CL_ParseMP_ParseMapCenter
==============
*/
void CL_ParseMP_ParseMapCenter(LocalClientNum_t localClientNum)
{
  const char *ConfigString; 

  ConfigString = CL_GetConfigString(534);
  j_sscanf(ConfigString, "%f %f %f", &cls.mapCenter, &cls.mapCenter.y, &cls.mapCenter.z);
}

/*
==============
CL_ParseMP_ParseMessage
==============
*/
void CL_ParseMP_ParseMessage(LocalClientNum_t localClientNum, msg_t *msgCompressed, msg_t *msg)
{
  __int64 Bits; 
  const dvar_t *v7; 
  const char *v8; 
  const char *v9; 
  const dvar_t *v10; 
  int Long; 
  const unsigned __int8 *v12; 
  ClConnectionDataMP *v13; 
  CircularEntryBuffer<512,131072,int,0> *p_serverReliableCommands; 
  int v15; 
  __int64 v16; 
  ClConnectionDataMP *ClientConnectionData; 
  int overflowed; 
  fileHandle_t *v20; 
  fileHandle_t v21; 
  char string[1024]; 

  if ( msgCompressed->overflowed )
  {
LABEL_38:
    MSG_Discard(msg);
    if ( (unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) )
      Com_FrontEndScene_TransmissionError();
    return;
  }
  while ( 2 )
  {
    Bits = MSG_ReadBits(msgCompressed, 4u);
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum svc_ops_e __cdecl truncate_cast_impl<enum svc_ops_e,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    if ( (_DWORD)Bits != 1 && !msgCompressed->overflowed )
    {
      v7 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.integer >= 2 )
      {
        v9 = SVC_STRINGS_MP[(int)Bits];
        if ( v9 )
        {
          v10 = DVARINT_cl_shownet;
          if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v10);
          if ( v10->current.integer >= 2 )
            Com_Printf(14, "%3i:%s\n", (unsigned int)(msgCompressed->readcount - 1), v9);
        }
        else
        {
          Com_Printf(14, "%3i:BAD CMD %i\n", (unsigned int)(msgCompressed->readcount - 1), (unsigned int)Bits);
        }
      }
      switch ( (int)Bits )
      {
        case 0:
          CL_ParseMP_ParseSnapshot(localClientNum, msgCompressed);
          ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
          ClNetperfTelemetry::TrackSnapshot(&ClientConnectionData->netperfTelemetry, msg->cursize, msgCompressed->overflowed == 0);
          goto LABEL_31;
        case 2:
          CL_ParseMP_ParseGamestate(localClientNum, msgCompressed);
          goto LABEL_31;
        case 4:
          Long = MSG_ReadLong(msgCompressed);
          v12 = (const unsigned __int8 *)MSG_ReadString(msgCompressed, string, 0x400u);
          v13 = ClConnectionMP::GetClientConnectionData(localClientNum);
          if ( v13->serverCommandSequence < Long )
          {
            v13->serverCommandSequence = Long;
            p_serverReliableCommands = &v13->serverReliableCommands;
            v15 = Long & 0x1FF;
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 169, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
              __debugbreak();
            v16 = -1i64;
            while ( v12[++v16] != 0 )
              ;
            CircularEntryBuffer<512,131072,int,0>::SetDataAndType(p_serverReliableCommands, v15, v12, v16 + 1, p_serverReliableCommands->TYPE_NOT_SPECIFIED);
          }
          goto LABEL_31;
        case 5:
          CL_ParseMP_ParseCommandBuffer(localClientNum, msgCompressed);
          goto LABEL_31;
        case 6:
          MSG_ReadString(msgCompressed, cls.matchData.def, 0x40u);
          MSG_ReadData(msgCompressed, 24000, cls.matchData.data, 24000);
          CL_Main_AddReliableCommand(localClientNum, "matchdatadone");
          Com_Printf(25, "CL_ParseMP_ParseMatchData: received client match data\n");
          goto LABEL_31;
        case 7:
          MSG_ReadString(msgCompressed, cls.codcasterClientMatchData.def, 0x40u);
          MSG_ReadData(msgCompressed, 1614, cls.codcasterClientMatchData.data, 1614);
          CL_Main_AddReliableCommand(localClientNum, "codcasterclientmatchdatadone");
          Com_Printf(25, "CL_ParseMP_ParseMatchData: received codcaster client match data\n");
LABEL_31:
          overflowed = msgCompressed->overflowed;
          if ( msgCompressed->overflowed )
            goto LABEL_37;
          continue;
        default:
          v20 = FS_FOpenFileWrite((fileHandle_t *)&stru_144018080, v8);
          v21.handle.handle = (__int64)v20;
          if ( v20 != (fileHandle_t *)-1i64 )
          {
            FS_Write(msg->data, msg->cursize, (fileHandle_t)v20);
            FS_FCloseFile(v21);
          }
          Com_PrintError(1, "CL_ParseServerMessage: Illegible server message %d\n", (unsigned int)Bits);
          MSG_Discard(msg);
          return;
      }
    }
    break;
  }
  CL_ParseMP_ShowNet(msgCompressed, "END OF MESSAGE");
  overflowed = msgCompressed->overflowed;
LABEL_37:
  if ( overflowed )
    goto LABEL_38;
}

/*
==============
CL_ParseMP_ParseOverlayBits
==============
*/
void CL_ParseMP_ParseOverlayBits(LocalClientNum_t localClientNum, msg_t *msg)
{
  __int64 Long; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  unsigned int v11; 
  float v12; 
  const char *v13; 
  __int64 v14; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned __int8 ActiveGameMode; 
  const char *v20; 
  unsigned int v21; 
  unsigned __int8 v22; 
  const char *v23; 
  unsigned int v24; 
  unsigned __int8 v25; 
  const char *v26; 
  unsigned int v27; 
  float v28; 
  const char *v29; 
  __int64 v30; 
  const char *v31; 
  __int64 v32; 
  const char *v33; 
  int Byte; 
  __int64 Bits; 
  int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  __int64 i; 
  unsigned __int8 v42; 
  int *v43; 
  int v44; 
  unsigned __int8 v45; 
  int oldestKillcamTime; 
  int val; 
  int v48; 
  int v49[10]; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1374, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( MSG_ReadBit(msg) )
  {
    Long = (unsigned int)MSG_ReadLong(msg);
    v5 = j_va("Server FPS drop - frame time %i ms", Long);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SERVERFPS, 3000, v5, Long);
  }
  if ( MSG_ReadBit(msg) )
  {
    v6 = (unsigned int)MSG_ReadLong(msg);
    v7 = j_va("Havok server world %i bytes - budget %i", v6, 7340032i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_HAVOKSERVERMEM, 3000, v7, v6);
  }
  if ( MSG_ReadBit(msg) )
  {
    v8 = (unsigned int)MSG_ReadLong(msg);
    v9 = j_va("Snapshot sent %i entities - max %i", v8, (unsigned int)cls.maxEntitiesInSnapshotForClient);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SNAPSHOTENTS, 3000, v9, v8);
  }
  v10 = 0;
  if ( MSG_ReadBit(msg) )
    StatMon_Warning(STATMON_CLASS_WARNING, STATMON_TYPE_SCRIPTERROR, 3000, "Script Error", 0);
  if ( MSG_ReadBit(msg) )
  {
    v11 = MSG_ReadLong(msg);
    v12 = (float)(Live_GetNecessaryBandwidth(cls.maxClients) / 8) * 0.80000001;
    v13 = j_va("Bandwidth Exceeded - size %i - max %i", v11, (unsigned int)(int)v12);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_BANDWIDTHEXCEEDED, 3000, v13, v11);
  }
  if ( MSG_ReadBit(msg) )
  {
    v14 = (unsigned int)MSG_ReadLong(msg);
    v15 = j_va("Gamestate Exceeded - size %i - max %i", v14, 4000i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_GAMESTATEEXCEEDED, 20000, v15, v14);
  }
  if ( MSG_ReadBit(msg) )
  {
    v16 = (unsigned int)MSG_ReadLong(msg);
    v17 = j_va("Bandwidth Limited - size %i", v16);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_BANDWIDTHLIMITED, 3000, v17, v16);
  }
  if ( MSG_ReadBit(msg) )
  {
    v18 = MSG_ReadLong(msg);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    v20 = j_va("Physics Server World Update:%i - max:%i", v18, (unsigned int)(int)(float)(g_budgetsMaxPhysicsServerWorldsAverageTimeGameplay_0[ActiveGameMode] + g_budgetsMaxPhysicsServerWorldsAverageTimeBase_0[ActiveGameMode]));
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_WORLD_SERVER_UPDATE_TIME, 3000, v20, v18);
  }
  if ( MSG_ReadBit(msg) )
  {
    v21 = MSG_ReadLong(msg);
    v22 = Com_GameMode_GetActiveGameMode();
    v23 = j_va("PMove Server Traces:%i - max:%i", v21, (unsigned int)(10 * (g_budgetsMaxPlayersPerMode_0[v22] + g_budgetsMaxAgentsPerMode_0[v22])));
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PMOVE_SERVER_TRACE_COUNT, 3000, v23, v21);
  }
  if ( MSG_ReadBit(msg) )
  {
    v24 = MSG_ReadLong(msg);
    v25 = Com_GameMode_GetActiveGameMode();
    v26 = j_va("PMove Server Time:%ius - max:%ius", v24, (unsigned int)(int)(float)((float)((float)g_budgetsMaxAgentsPerMode_0[v25] * 125.0) + (float)((float)g_budgetsMaxPlayersPerMode_0[v25] * 250.0)));
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PMOVE_SERVER_TIME, 3000, v26, v24);
  }
  if ( MSG_ReadBit(msg) )
  {
    v27 = MSG_ReadLong(msg);
    v28 = (float)g_budgetsWeaponMaxPelletsPerFrame_0[(unsigned __int8)Com_GameMode_GetActiveGameMode()] * 100.0;
    v29 = j_va("Bullet Server Time:%ius - max:%ius", v27, (unsigned int)(int)v28);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_BULLET_SERVER_TIME, 3000, v29, v27);
  }
  if ( MSG_ReadBit(msg) )
  {
    v30 = (unsigned int)MSG_ReadLong(msg);
    v31 = j_va("Scriptables changed %i server/client states this frame - budget %i", v30, 128i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_SCRIPTABLE_STATE_CHANGE_SC, 3000, v31, v30);
  }
  if ( MSG_ReadBit(msg) )
  {
    v32 = (unsigned int)MSG_ReadLong(msg);
    v33 = j_va("Changed %i propagation portals states - budget %i", v32, 10i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PROPAGATION_PORTAL_STATE_CHANGE, 3000, v33, v32);
  }
  Byte = MSG_ReadByte(msg);
  Bits = MSG_ReadBits(msg, 0xBu);
  v36 = truncate_cast<int,__int64>(Bits);
  v37 = MSG_ReadBits(msg, 0xBu);
  v38 = truncate_cast<int,__int64>(v37);
  v39 = MSG_ReadBits(msg, 0xBu);
  v40 = truncate_cast<int,__int64>(v39);
  oldestKillcamTime = MSG_ReadLong(msg);
  val = MSG_ReadByte(msg);
  for ( i = 0i64; i < 10; ++i )
    v49[i] = MSG_ReadByte(msg);
  v48 = MSG_ReadByte(msg);
  if ( msg->overflowed )
  {
    Com_PrintError(14, "CL_ParseMP_ParseOverlayBits overflowed\n");
  }
  else
  {
    CG_DrawNetMP_TrackServerBandwidth(Byte);
    CG_DrawNetMP_TrackServerEntities(v36, v38, v40);
    CG_DrawNetMP_TrackKillcamTime(oldestKillcamTime);
    v42 = truncate_cast<unsigned char,int>(val);
    CG_DrawDebugMP_UpdateSnapshotFullPercent(localClientNum, v42);
    v43 = v49;
    do
    {
      v44 = *v43;
      if ( (*v43 < 0 || (unsigned int)v44 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v44, "signed", v44) )
        __debugbreak();
      CG_DrawDebugMP_UpdateSnapshotBufferUsage(localClientNum, v10++, v44);
      ++v43;
    }
    while ( v10 < 10 );
    v45 = truncate_cast<unsigned char,int>(v48);
    CG_DrawDebugMP_UpdateHudOutlineUsage(localClientNum, v45);
  }
}

/*
==============
CL_ParseMP_ParsePacketAgents
==============
*/
char CL_ParseMP_ParsePacketAgents(ClActiveClientMP *cl, msg_t *msg, const int time, ClSnapshot *oldframe, ClSnapshot *newframe)
{
  ClSnapshot *v5; 
  int v7; 
  __int64 v10; 
  agentState_s *old; 
  int entityNum; 
  int EntityIndex; 
  int v14; 
  bool v15; 
  bool v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v22; 
  int fmt; 
  int fmta; 
  unsigned int indexBits; 
  agentState_s v27; 

  v5 = newframe;
  v7 = time;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 913, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 914, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v10 = 0i64;
  old = NULL;
  newframe->parseAgentsIndex = cl->parseAgentsIndex;
  newframe->numAgents = 0;
  if ( oldframe )
  {
    if ( oldframe->numAgents )
    {
      if ( !cl->parseAgentsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 934, ASSERT_TYPE_ASSERT, "(cl->parseAgentsCount)", (const char *)&queryFormat, "cl->parseAgentsCount") )
        __debugbreak();
      old = &cl->parseAgents[oldframe->parseAgentsIndex % cl->parseAgentsCount];
      entityNum = old->entityNum;
    }
    else
    {
      entityNum = 99999;
    }
  }
  else
  {
    entityNum = 99999;
  }
  indexBits = ComCharacterLimits::GetAgentBits();
  if ( !msg->overflowed )
  {
    while ( MSG_ReadBit(msg) )
    {
      if ( !cl->parseAgentsCount )
        return 0;
      EntityIndex = MSG_ReadEntityIndex(msg, indexBits);
      v14 = EntityIndex;
      if ( msg->readcount > msg->cursize )
        return 0;
      v15 = entityNum == EntityIndex;
      v16 = entityNum <= EntityIndex;
      if ( entityNum < EntityIndex )
      {
        do
        {
          v17 = DVARINT_cl_shownet;
          if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          if ( v17->current.integer == 4 )
            Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)entityNum);
          v5 = newframe;
          CL_ParseMP_DeltaAgent(cl, msg, time, newframe, entityNum, old, 1);
          if ( ++v10 < oldframe->numAgents )
          {
            if ( !cl->parseAgentsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 982, ASSERT_TYPE_ASSERT, "(cl->parseAgentsCount)", (const char *)&queryFormat, "cl->parseAgentsCount") )
              __debugbreak();
            old = &cl->parseAgents[(v10 + oldframe->parseAgentsIndex) % cl->parseAgentsCount];
            entityNum = old->entityNum;
          }
          else
          {
            entityNum = 99999;
          }
          v15 = entityNum == v14;
          v16 = entityNum <= v14;
        }
        while ( entityNum < v14 );
      }
      if ( v15 )
      {
        v18 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        if ( v18->current.integer == 4 )
          Com_Printf(14, "%3i:  delta: %i\n", (unsigned int)msg->readcount, (unsigned int)v14);
        fmt = v14;
        v7 = time;
        CL_ParseMP_DeltaAgent(cl, msg, time, v5, fmt, old, 0);
        if ( ++v10 < oldframe->numAgents )
        {
          if ( !cl->parseAgentsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1005, ASSERT_TYPE_ASSERT, "(cl->parseAgentsCount)", (const char *)&queryFormat, "cl->parseAgentsCount") )
            __debugbreak();
          old = &cl->parseAgents[(v10 + oldframe->parseAgentsIndex) % cl->parseAgentsCount];
          entityNum = old->entityNum;
        }
        else
        {
          entityNum = 99999;
        }
      }
      else
      {
        if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1012, ASSERT_TYPE_ASSERT, "(oldnum > newnum)", (const char *)&queryFormat, "oldnum > newnum") )
          __debugbreak();
        v19 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( v19->current.integer == 4 )
          Com_Printf(14, "%3i:  baseline: %i\n", (unsigned int)msg->readcount, (unsigned int)v14);
        memset_0(&v27, 0, sizeof(v27));
        v5 = newframe;
        fmta = v14;
        v7 = time;
        CL_ParseMP_DeltaAgent(cl, msg, time, newframe, fmta, &v27, 0);
      }
      if ( msg->overflowed )
        break;
    }
  }
  if ( entityNum != 99999 )
  {
    while ( !msg->overflowed )
    {
      if ( !cl->parseAgentsCount )
        return 0;
      v20 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.integer == 4 )
        Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)entityNum);
      v5 = newframe;
      CL_ParseMP_DeltaAgent(cl, msg, v7, newframe, entityNum, old, 1);
      if ( ++v10 >= oldframe->numAgents )
        break;
      if ( !cl->parseAgentsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1050, ASSERT_TYPE_ASSERT, "(cl->parseAgentsCount)", (const char *)&queryFormat, "cl->parseAgentsCount") )
        __debugbreak();
      old = &cl->parseAgents[(v10 + oldframe->parseAgentsIndex) % cl->parseAgentsCount];
      entityNum = old->entityNum;
    }
  }
  v22 = DVARBOOL_cl_shownuments;
  if ( !DVARBOOL_cl_shownuments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownuments") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
    Com_Printf(14, "Agents in packet: %i\n", v5->numAgents);
  return 1;
}

/*
==============
CL_ParseMP_ParsePacketClients
==============
*/
char CL_ParseMP_ParsePacketClients(const LocalClientNum_t localClientNum, ClActiveClientMP *cl, msg_t *msg, const int time, ClSnapshot *oldframe, ClSnapshot *newframe)
{
  ClSnapshot *v6; 
  __int64 v7; 
  clientState_t *old; 
  int clientIndex; 
  int ClientBits; 
  int EntityIndex; 
  int newnum; 
  bool v15; 
  bool v16; 
  const dvar_t *v17; 
  clientState_t *v18; 
  __int64 v19; 
  clientState_t *v20; 
  __int128 v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  clientState_t *v25; 
  __int64 v26; 
  __int128 v27; 
  const dvar_t *v28; 
  int v32; 
  clientState_t v33; 

  v6 = newframe;
  v7 = 0i64;
  old = NULL;
  newframe->parseClientsIndex = cl->parseClientsIndex;
  newframe->numClients = 0;
  if ( oldframe )
  {
    if ( oldframe->numClients )
    {
      old = &cl->parseClients[oldframe->parseClientsIndex % cl->parseClientsCount];
      clientIndex = old->clientIndex;
    }
    else
    {
      clientIndex = 99999;
    }
  }
  else
  {
    clientIndex = 99999;
  }
  ClientBits = ComCharacterLimits::GetClientBits();
  v32 = ClientBits;
  if ( !msg->overflowed )
  {
    while ( MSG_ReadBit(msg) )
    {
      EntityIndex = MSG_ReadEntityIndex(msg, ClientBits);
      newnum = EntityIndex;
      if ( msg->readcount > msg->cursize )
        return 0;
      v15 = clientIndex == EntityIndex;
      v16 = clientIndex <= EntityIndex;
      if ( clientIndex < EntityIndex )
      {
        do
        {
          v17 = DVARINT_cl_shownet;
          if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          if ( v17->current.integer == 3 )
            Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)clientIndex);
          v18 = old;
          v19 = 3i64;
          v20 = &cl->parseClients[cl->parseClientsIndex % cl->parseClientsCount];
          do
          {
            v20 = (clientState_t *)((char *)v20 + 128);
            v21 = *(_OWORD *)&v18->clientIndex;
            v18 = (clientState_t *)((char *)v18 + 128);
            *(_OWORD *)&v20[-1].mount.normalIndex = v21;
            *(_OWORD *)&v20[-1].perkIconName = *(_OWORD *)&v18[-1].perkIconName;
            *(_OWORD *)&v20[-1].doorState[0].angle = *(_OWORD *)&v18[-1].doorState[0].angle;
            *(_OWORD *)&v20[-1].doorState[1].owner = *(_OWORD *)&v18[-1].doorState[1].owner;
            *(_OWORD *)&v20[-1].footstepActionType = *(_OWORD *)&v18[-1].footstepActionType;
            *(_OWORD *)&v20[-1].playerASM_scripted_anim_start_time = *(_OWORD *)&v18[-1].playerASM_scripted_anim_start_time;
            *(_OWORD *)&v20[-1].vehicleAnimStateSeat = *(_OWORD *)&v18[-1].vehicleAnimStateSeat;
            *(_OWORD *)&v20[-1].movingPlatform = *(_OWORD *)&v18[-1].movingPlatform;
            --v19;
          }
          while ( v19 );
          v6 = newframe;
          ++v7;
          *(_OWORD *)&v20->clientIndex = *(_OWORD *)&v18->clientIndex;
          *(_QWORD *)&v20->doNotSimulateTracers = *(_QWORD *)&v18->doNotSimulateTracers;
          ++cl->parseClientsIndex;
          ++newframe->numClients;
          if ( v7 < oldframe->numClients )
          {
            old = &cl->parseClients[(v7 + oldframe->parseClientsIndex) % cl->parseClientsCount];
            clientIndex = old->clientIndex;
          }
          else
          {
            clientIndex = 99999;
          }
          v15 = clientIndex == newnum;
          v16 = clientIndex <= newnum;
        }
        while ( clientIndex < newnum );
      }
      if ( v15 )
      {
        v22 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( v22->current.integer == 3 )
          Com_Printf(14, "%3i:  delta: %i\n", (unsigned int)msg->readcount, (unsigned int)newnum);
        CL_ParseMP_DeltaClient(localClientNum, cl, msg, time, v6, newnum, old, 0);
        if ( ++v7 < oldframe->numClients )
        {
          old = &cl->parseClients[(v7 + oldframe->parseClientsIndex) % cl->parseClientsCount];
          clientIndex = old->clientIndex;
        }
        else
        {
          clientIndex = 99999;
        }
      }
      else
      {
        if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 824, ASSERT_TYPE_ASSERT, "(oldnum > newnum)", (const char *)&queryFormat, "oldnum > newnum") )
          __debugbreak();
        v23 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        if ( v23->current.integer == 3 )
          Com_Printf(14, "%3i:  baseline: %i\n", (unsigned int)msg->readcount, (unsigned int)newnum);
        memset_0(&v33, 0, sizeof(v33));
        v6 = newframe;
        CL_ParseMP_DeltaClient(localClientNum, cl, msg, time, newframe, newnum, &v33, 0);
      }
      ClientBits = v32;
      if ( msg->overflowed )
        break;
    }
  }
  if ( clientIndex != 99999 )
  {
    do
    {
      if ( msg->overflowed )
        break;
      v24 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.integer == 3 )
        Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)clientIndex);
      v25 = &cl->parseClients[cl->parseClientsIndex % cl->parseClientsCount];
      v26 = 3i64;
      do
      {
        v25 = (clientState_t *)((char *)v25 + 128);
        v27 = *(_OWORD *)&old->clientIndex;
        old = (clientState_t *)((char *)old + 128);
        *(_OWORD *)&v25[-1].mount.normalIndex = v27;
        *(_OWORD *)&v25[-1].perkIconName = *(_OWORD *)&old[-1].perkIconName;
        *(_OWORD *)&v25[-1].doorState[0].angle = *(_OWORD *)&old[-1].doorState[0].angle;
        *(_OWORD *)&v25[-1].doorState[1].owner = *(_OWORD *)&old[-1].doorState[1].owner;
        *(_OWORD *)&v25[-1].footstepActionType = *(_OWORD *)&old[-1].footstepActionType;
        *(_OWORD *)&v25[-1].playerASM_scripted_anim_start_time = *(_OWORD *)&old[-1].playerASM_scripted_anim_start_time;
        *(_OWORD *)&v25[-1].vehicleAnimStateSeat = *(_OWORD *)&old[-1].vehicleAnimStateSeat;
        *(_OWORD *)&v25[-1].movingPlatform = *(_OWORD *)&old[-1].movingPlatform;
        --v26;
      }
      while ( v26 );
      v6 = newframe;
      ++v7;
      *(_OWORD *)&v25->clientIndex = *(_OWORD *)&old->clientIndex;
      *(_QWORD *)&v25->doNotSimulateTracers = *(_QWORD *)&old->doNotSimulateTracers;
      ++cl->parseClientsIndex;
      ++newframe->numClients;
      if ( v7 >= oldframe->numClients )
        break;
      old = &cl->parseClients[(v7 + oldframe->parseClientsIndex) % cl->parseClientsCount];
      clientIndex = old->clientIndex;
    }
    while ( old->clientIndex != 99999 );
  }
  v28 = DVARBOOL_cl_shownuments;
  if ( !DVARBOOL_cl_shownuments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownuments") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
    Com_Printf(14, "Clients in packet: %i\n", v6->numClients);
  return 1;
}

/*
==============
CL_ParseMP_ParsePacketEntities
==============
*/
void CL_ParseMP_ParsePacketEntities(ClActiveClientMP *cl, msg_t *msg, __int64 time, ClSnapshot *oldframe, ClSnapshot *newframe)
{
  __int64 noDeltaUseCount; 
  int v9; 
  int serverTime; 
  __int64 v11; 
  entityState_t *EntityStateForFrame; 
  int number; 
  int EntityIndex; 
  __int64 v15; 
  bool v16; 
  bool v17; 
  const dvar_t *v18; 
  const char *EntityTypeName; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  __int16 v22; 
  entityState_t *Entity; 
  const dvar_t *v24; 
  ClActiveClientMP *v25; 
  float v26; 
  double v27; 
  double v28; 
  double v29; 
  const char *v30; 
  const dvar_t *v31; 
  __int64 numEntities; 
  char *fmt; 
  __int64 newnum; 
  entityState_t *oldES; 
  __int64 v36; 
  int timea[2]; 
  int v38[4]; 
  ClActiveClientMP *v39; 
  __int64 v40; 
  __int64 v41; 
  entityState_t v42; 

  v41 = -2i64;
  timea[0] = time;
  v39 = cl;
  if ( !newframe )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 511, ASSERT_TYPE_ASSERT, "(newframe)", (const char *)&queryFormat, "newframe") )
      __debugbreak();
    time = (unsigned int)timea[0];
  }
  noDeltaUseCount = cls.noDeltaUseCount;
  if ( (newframe->info.snapFlags & 8) == 0 )
    noDeltaUseCount = cl->parseEntitiesIndex;
  newframe->parseEntitiesIndex = noDeltaUseCount;
  v9 = 0;
  v40 = 0i64;
  newframe->numEntities = 0;
  *(_QWORD *)newframe->entitiesLoD.array = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[2] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[4] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[6] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[8] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[10] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[12] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[14] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[16] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[18] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[20] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[22] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[24] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[26] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[28] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[30] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[32] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[34] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[36] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[38] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[40] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[42] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[44] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[46] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[48] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[50] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[52] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[54] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[56] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[58] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[60] = -1i64;
  *(_QWORD *)&newframe->entitiesLoD.array[62] = -1i64;
  if ( msg_dumpEnts->current.enabled )
  {
    if ( oldframe )
      serverTime = oldframe->info.serverTime;
    else
      serverTime = 0;
    LODWORD(fmt) = serverTime;
    Com_Printf(14, "New snapshot time %i, serverTime %i, oldframe time is %i\n", time, (unsigned int)newframe->info.serverTime, fmt);
  }
  v11 = 0i64;
  EntityStateForFrame = NULL;
  if ( oldframe )
  {
    if ( oldframe->numEntities )
    {
      EntityStateForFrame = CL_ParseMP_GetEntityStateForFrame(cl, oldframe, 0i64);
      number = EntityStateForFrame->number;
    }
    else
    {
      number = 99999;
    }
  }
  else
  {
    number = 99999;
  }
  if ( !msg->overflowed )
  {
    while ( 1 )
    {
      memset_0(&v42, 0, sizeof(v42));
      EntityIndex = MSG_ReadEntityIndex(msg, 11);
      v15 = EntityIndex;
      if ( (unsigned int)EntityIndex > 0x7FF )
      {
        LODWORD(newnum) = EntityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 567, ASSERT_TYPE_ASSERT, "( ( newnum >= 0 && newnum < ( 2048 ) ) )", "( newnum ) = %i", newnum) )
          __debugbreak();
      }
      if ( msg->overflowed || (_DWORD)v15 == 2047 )
        break;
      if ( msg->readcount > msg->cursize )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14421F9D8, 291i64);
      v16 = number == (_DWORD)v15;
      v17 = number <= (int)v15;
      if ( number < (int)v15 )
      {
        do
        {
          if ( msg->overflowed )
            break;
          v18 = DVARINT_cl_shownet;
          if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v18);
          if ( v18->current.integer == 3 )
            Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)number);
          CL_ParseMP_CopyOldEntity(v39, newframe, EntityStateForFrame, oldframe);
          if ( msg_dumpEnts->current.enabled )
          {
            EntityTypeName = BG_GetEntityTypeName((const entityType_s)EntityStateForFrame->eType);
            Com_Printf(14, "%3i: unchanged ent, eType %s\n", (unsigned int)number, EntityTypeName);
          }
          if ( ++v11 < oldframe->numEntities )
          {
            EntityStateForFrame = CL_ParseMP_GetEntityStateForFrame(v39, oldframe, v11);
            if ( number >= EntityStateForFrame->number )
            {
              LODWORD(v36) = EntityStateForFrame->number;
              LODWORD(oldES) = number;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 606, ASSERT_TYPE_ASSERT, "(oldnum < oldstate->number)", "%s\n\toldnum is going from %i to %i on index %lld in frame at %p", "oldnum < oldstate->number", oldES, v36, v11, oldframe) )
                __debugbreak();
            }
            number = EntityStateForFrame->number;
          }
          else
          {
            number = 99999;
          }
        }
        while ( number < (int)v15 );
        v16 = number == (_DWORD)v15;
        v17 = number <= (int)v15;
      }
      if ( v16 )
      {
        v20 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( v20->current.integer == 3 )
          Com_Printf(14, "%3i:  delta: %i\n", (unsigned int)msg->readcount, (unsigned int)v15);
        CL_ParseMP_DeltaEntity(v39, msg, timea[0], oldframe, newframe, v15, EntityStateForFrame);
        if ( ++v11 < oldframe->numEntities )
        {
          EntityStateForFrame = CL_ParseMP_GetEntityStateForFrame(v39, oldframe, v11);
          number = EntityStateForFrame->number;
        }
        else
        {
          number = 99999;
        }
      }
      else
      {
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 640, ASSERT_TYPE_ASSERT, "(oldnum > newnum)", (const char *)&queryFormat, "oldnum > newnum") )
          __debugbreak();
        v21 = DVARINT_cl_shownet;
        if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.integer == 3 )
          Com_Printf(14, "%3i:  baseline: %i\n", (unsigned int)msg->readcount, (unsigned int)v15);
        if ( (newframe->info.snapFlags & 0x10) != 0 )
        {
          v22 = truncate_cast<short,int>(v15);
          Entity = (entityState_t *)NetConstBaselines_GetEntity(v22);
          if ( Entity )
            v42 = *Entity;
          else
            memset_0(&v42, 0, sizeof(v42));
        }
        if ( (unsigned int)(v15 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v15, "signed", v15) )
          __debugbreak();
        v42.number = v15;
        CL_ParseMP_DeltaEntity(v39, msg, timea[0], oldframe, newframe, v15, &v42);
      }
      v9 = v40 + 1;
      v40 = (unsigned int)(v40 + 1);
      if ( msg->overflowed )
        goto LABEL_70;
    }
    v9 = v40;
  }
LABEL_70:
  if ( number != 99999 )
  {
    while ( !msg->overflowed )
    {
      v24 = DVARINT_cl_shownet;
      if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.integer == 3 )
        Com_Printf(14, "%3i:  unchanged: %i\n", (unsigned int)msg->readcount, (unsigned int)number);
      v25 = v39;
      CL_ParseMP_CopyOldEntity(v39, newframe, EntityStateForFrame, oldframe);
      ++v11;
      if ( msg_dumpEnts->current.enabled )
      {
        if ( EntityStateForFrame == (entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( EntityStateForFrame->lerp.pos.trType == TR_LINEAR_STOP_SECURE )
        {
          *(_QWORD *)timea = v38;
          v26 = EntityStateForFrame->lerp.pos.trBase.v[1];
          v38[2] = s_trbase_aab_Z ^ LODWORD(v26) ^ LODWORD(EntityStateForFrame->lerp.pos.trBase.v[2]);
          v38[1] = s_trbase_aab_Y ^ LODWORD(EntityStateForFrame->lerp.pos.trBase.v[0]) ^ LODWORD(v26);
          v38[0] = LODWORD(EntityStateForFrame->lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
          memset(timea, 0, sizeof(timea));
          timea[0] = v38[0];
          if ( (v38[0] & 0x7F800000) == 2139095040 || (timea[0] = v38[1], (v38[1] & 0x7F800000) == 2139095040) || (timea[0] = v38[2], (v38[2] & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          v38[0] = LODWORD(EntityStateForFrame->lerp.pos.trBase.v[0]);
          v38[1] = LODWORD(EntityStateForFrame->lerp.pos.trBase.v[1]);
          v38[2] = LODWORD(EntityStateForFrame->lerp.pos.trBase.v[2]);
        }
        v27 = *(float *)&v38[2];
        v28 = *(float *)&v38[1];
        v29 = *(float *)v38;
        v30 = BG_GetEntityTypeName((const entityType_s)EntityStateForFrame->eType);
        Com_Printf(14, "%3i: unchanged ent, eType %s at %f, %f, %f\n", (unsigned int)number, v30, v29, v28, v27);
        memset(v38, 0, 0xCui64);
        v25 = v39;
      }
      if ( v11 >= oldframe->numEntities )
        break;
      EntityStateForFrame = CL_ParseMP_GetEntityStateForFrame(v25, oldframe, v11);
      number = EntityStateForFrame->number;
    }
    v9 = v40;
  }
  v31 = DVARBOOL_cl_shownuments;
  if ( !DVARBOOL_cl_shownuments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownuments") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled || msg_dumpEnts->current.enabled )
    Com_Printf(14, "Entities in packet for serverTime %i: %i\n", (unsigned int)newframe->info.serverTime, newframe->numEntities);
  if ( (newframe->info.snapFlags & 8) != 0 )
  {
    numEntities = newframe->numEntities;
    if ( numEntities != cls.nextNoDeltaEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 719, ASSERT_TYPE_ASSERT, "( static_cast<SnapshotEntryIndex>(newframe->numEntities) ) == ( cls.nextNoDeltaEntity )", "%s == %s\n\t%lli, %lli", "static_cast<SnapshotEntryIndex>(newframe->numEntities)", "cls.nextNoDeltaEntity", numEntities, cls.nextNoDeltaEntity) )
      __debugbreak();
  }
  CG_DrawNetMP_TrackClientEntities(v9);
}

/*
==============
CL_ParseMP_ParsePacketWeapons
==============
*/
void CL_ParseMP_ParsePacketWeapons(ClActiveClientMP *cl, msg_t *msg, ClSnapshot *oldframe, ClSnapshot *newframe, const bool oldWeaponsAreNoDelta, const bool newWeaponsAreNoDelta)
{
  msg_t *v8; 
  __int64 v10; 
  WeaponMapEntry *WeaponEntryForFrame; 
  WeaponMapEntry *v12; 
  int index; 
  int WeaponMapEntry_Index; 
  WeaponMapEntry *v15; 
  WeaponMapEntry *v16; 
  int v17; 
  int v18; 
  WeaponMapEntry *v19; 

  v8 = msg;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1136, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( newWeaponsAreNoDelta )
  {
    if ( oldframe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1140, ASSERT_TYPE_ASSERT, "(oldframe == nullptr)", (const char *)&queryFormat, "oldframe == nullptr") )
      __debugbreak();
    if ( oldWeaponsAreNoDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1141, ASSERT_TYPE_ASSERT, "(oldWeaponsAreNoDelta == false)", (const char *)&queryFormat, "oldWeaponsAreNoDelta == false") )
      __debugbreak();
    cl->noDeltaWeaponMapEntriesUseCount = 0;
  }
  else
  {
    newframe->parseWeaponMapEntriesIndex = cl->parseWeaponMapEntriesIdx;
    newframe->numWeaponMapEntries = 0;
  }
  MSG_ClearLastReferencedEntity(v8);
  v10 = 0i64;
  WeaponEntryForFrame = CL_ParseMP_GetWeaponEntryForFrame(cl, oldframe, 0i64, oldWeaponsAreNoDelta);
  v12 = WeaponEntryForFrame;
  if ( !WeaponEntryForFrame )
    goto LABEL_15;
  index = WeaponEntryForFrame->index;
  while ( 1 )
  {
    WeaponMapEntry_Index = MSG_ReadWeaponMapEntry_Index(v8);
    while ( index < WeaponMapEntry_Index )
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1165, ASSERT_TYPE_ASSERT, "(oldWeaponMapEntry)", (const char *)&queryFormat, "oldWeaponMapEntry") )
        __debugbreak();
      if ( newWeaponsAreNoDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1166, ASSERT_TYPE_ASSERT, "(!newWeaponsAreNoDelta)", (const char *)&queryFormat, "!newWeaponsAreNoDelta") )
        __debugbreak();
      ++v10;
      v15 = &cl->parseWeaponMapEntries[cl->parseWeaponMapEntriesIdx % cl->parseWeaponMapEntriesCount];
      *(__m256i *)&v15->index = *(__m256i *)&v12->index;
      *(_OWORD *)&v15->weapon.attachmentVariationIndices[3] = *(_OWORD *)&v12->weapon.attachmentVariationIndices[3];
      *(double *)&v15->weapon.attachmentVariationIndices[19] = *(double *)&v12->weapon.attachmentVariationIndices[19];
      *(_DWORD *)&v15->weapon.attachmentVariationIndices[27] = *(_DWORD *)&v12->weapon.attachmentVariationIndices[27];
      *(_WORD *)&v15->weapon.scopeVariation = *(_WORD *)&v12->weapon.scopeVariation;
      ++cl->parseWeaponMapEntriesIdx;
      ++newframe->numWeaponMapEntries;
      v16 = CL_ParseMP_GetWeaponEntryForFrame(cl, oldframe, v10, oldWeaponsAreNoDelta);
      v12 = v16;
      if ( v16 )
      {
        if ( v16->index <= index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1177, ASSERT_TYPE_ASSERT, "(!oldWeaponMapEntry || oldWeaponMapEntry->index > oldWeaponMapIndex)", "%s\n\tWeapons entries must be monotonically increasing within a snapshot.", "!oldWeaponMapEntry || oldWeaponMapEntry->index > oldWeaponMapIndex") )
          __debugbreak();
        index = v12->index;
      }
      else
      {
        index = 2147483646;
      }
    }
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( WeaponMapEntry_Index >= BgWeaponMap::ms_runtimeSize )
      break;
    if ( index <= WeaponMapEntry_Index )
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1192, ASSERT_TYPE_ASSERT, "(oldWeaponMapEntry)", (const char *)&queryFormat, "oldWeaponMapEntry") )
        __debugbreak();
      if ( index != WeaponMapEntry_Index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1193, ASSERT_TYPE_ASSERT, "(oldWeaponMapIndex == newWeaponMapIndex)", (const char *)&queryFormat, "oldWeaponMapIndex == newWeaponMapIndex") )
        __debugbreak();
      v18 = WeaponMapEntry_Index;
      v8 = msg;
      CL_ParseMP_DeltaWeapon(cl, msg, newframe, v18, v12, newWeaponsAreNoDelta);
      v19 = CL_ParseMP_GetWeaponEntryForFrame(cl, oldframe, ++v10, oldWeaponsAreNoDelta);
      v12 = v19;
      if ( v19 )
      {
        if ( v19->index <= index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1201, ASSERT_TYPE_ASSERT, "(!oldWeaponMapEntry || oldWeaponMapEntry->index > oldWeaponMapIndex)", "%s\n\tWeapons entries must be monotonically increasing within a snapshot.", "!oldWeaponMapEntry || oldWeaponMapEntry->index > oldWeaponMapIndex") )
          __debugbreak();
        index = v12->index;
      }
      else
      {
LABEL_15:
        index = 2147483646;
      }
    }
    else
    {
      v17 = WeaponMapEntry_Index;
      v8 = msg;
      CL_ParseMP_DeltaWeapon(cl, msg, newframe, v17, NULL, newWeaponsAreNoDelta);
    }
  }
}

/*
==============
CL_ParseMP_ParsePlayerstate
==============
*/
void CL_ParseMP_ParsePlayerstate(LocalClientNum_t localClientNum, msg_t *msg, ClActiveClientMP *cl, ClConnectionDataMP *clcData, ClSnapshot *newSnap)
{
  playerState_s ps; 

  if ( !cl->parseNoDeltaPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1804, ASSERT_TYPE_ASSERT, "(cl->parseNoDeltaPlayerState)", (const char *)&queryFormat, "cl->parseNoDeltaPlayerState") )
    __debugbreak();
  if ( (newSnap->info.snapFlags & 8) != 0 )
  {
    memset_0(&ps, 0, sizeof(ps));
    BG_InitPlayerState_PrepareForUseAsDelta(&ps, clcData->clientNum, 0);
    CL_ParseMP_ReadDeltaPlayerState(localClientNum, msg, newSnap->info.serverTime, &ps, cl->parseNoDeltaPlayerState);
  }
  CL_ParseMP_ReadDeltaPlayerState(localClientNum, msg, newSnap->info.serverTime, cl->parseNoDeltaPlayerState, &newSnap->ps);
}

/*
==============
CL_ParseMP_ParseServerMessage
==============
*/
void CL_ParseMP_ParseServerMessage(LocalClientNum_t localClientNum, msg_t *msg)
{
  const dvar_t *v2; 
  __int64 v3; 
  const dvar_t *v5; 
  unsigned int v6; 
  int compressionFlags; 
  bool BitsCompress; 
  __int128 v9; 
  char *fmt; 
  __int64 v11; 
  __int64 v12; 
  msg_t buf; 
  unsigned __int8 data[148448]; 

  v2 = DVARINT_cl_shownet;
  v3 = localClientNum;
  if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer == 1 )
  {
    Com_Printf(14, "%i ", (unsigned int)msg->cursize);
  }
  else
  {
    v5 = DVARINT_cl_shownet;
    if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer >= 2 )
      Com_Printf(14, "------------------\n");
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( clientUIActives[v3].connectionState == CA_DISCONNECTED )
  {
    Com_Printf(25, "Throwing out server message since our connection state is disconnected\n");
    MSG_Discard(msg);
    return;
  }
  v6 = msg->cursize - msg->readcount;
  if ( v6 > 0x243D8 )
  {
    LODWORD(fmt) = msg->cursize - msg->readcount;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144221F38, 294i64, 148440i64, fmt);
  }
  MSG_Init(&buf, data, 148440);
  compressionFlags = msg->compressionFlags;
  buf.compressionFlags = compressionFlags;
  if ( compressionFlags >= 0 )
  {
    if ( (compressionFlags & 0x40000000) == 0 )
    {
      if ( (compressionFlags & 0xC0000000) != 0 )
      {
        LODWORD(v12) = compressionFlags;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2981, ASSERT_TYPE_ASSERT, "(( msg->compressionFlags & 0xc0000000u ) == 0)", "%s\n\tInvalid compression flags 0x%x", "( msg->compressionFlags & USE_COMPRESSION_MASK ) == 0", v12) )
          __debugbreak();
      }
      v9 = *(_OWORD *)&msg->splitSize;
      *(__m256i *)&buf.overflowed = *(__m256i *)&msg->overflowed;
      *(_QWORD *)&buf.targetLocalNetID = *(_QWORD *)&msg->targetLocalNetID;
      *(_OWORD *)&buf.splitSize = v9;
      goto LABEL_28;
    }
    BitsCompress = MSG_ReadBitsCompress(&msg->data[msg->readcount], buf.data, v6, buf.maxsize, &buf.cursize);
  }
  else
  {
    buf.cursize = j_LZ4_decompress_safe((const char *)&msg->data[msg->readcount], (char *)buf.data, v6, buf.maxsize);
    BitsCompress = buf.cursize > 0;
  }
  if ( !BitsCompress )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144222028, 295i64);
LABEL_28:
  CL_ParseMP_ParseMessage((LocalClientNum_t)v3, &buf, msg);
}

/*
==============
CL_ParseMP_ParseSnapshot
==============
*/
void CL_ParseMP_ParseSnapshot(LocalClientNum_t localClientNum, msg_t *msg)
{
  LocalClientNum_t v3; 
  char *m_ptr; 
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *ClientConnectionMP; 
  ClConnectionDataMP *ConnectionDataMP; 
  const bitarray<384> *v8; 
  int Byte; 
  int Short; 
  ClSnapshot *p_noDeltaSnapshot; 
  int v12; 
  int Bit; 
  const ScoreboardInfo *p_scores; 
  const ComSnapshotStreamSync *p_streamSync; 
  OmnvarData *parseOmnvars; 
  const OmnvarData *Defaults; 
  OmnvarData *v18; 
  unsigned int v19; 
  unsigned int ClientBits; 
  __int64 Bits; 
  CgGlobalsMP *v22; 
  unsigned int v23; 
  MLGSpectatorClientInfo *v24; 
  const MLGSpectatorClientInfo *v25; 
  unsigned int Changes; 
  ScriptableReadChangeQueue *v27; 
  unsigned __int64 scriptableChangeEndSequence; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  bool SnapshotChanges; 
  bitarray<384> *v31; 
  __m256i v32; 
  __int128 v33; 
  __int64 v34; 
  bitarray<384> *parseUmbraGateStates; 
  int overflowed; 
  int parseScriptedCameraIndex; 
  BgScriptedCameraState *v38; 
  int v39; 
  int v40; 
  ClConnectionMP *v41; 
  __int64 v42; 
  unsigned int v43; 
  int v44; 
  __int64 v45; 
  ClSnapshot *snapshots; 
  int PacketBackupCount; 
  __int64 v48; 
  int v49; 
  ClConnectionMP *v50; 
  int messageAcknowledge; 
  int v52; 
  int m_serverFrameDuration; 
  __int64 svCmdTargetErrorUsec; 
  __int64 svCmdCurrentErrorUsec; 
  char *fmt; 
  __int64 newWeaponsAreNoDelta; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  int serverTime; 
  unsigned int ChangesBufferSize; 
  CG_GlassPieceChangeWithIndex *pieceChangeArray; 
  ClConnectionDataMP *v66; 
  ClOutPacketMP outPacket; 
  CgGlobalsMP *v68; 
  __int64 v69; 
  Mem_LargeLocal v70; 
  ClientLatencyProfileMetrics metrics; 
  bitarray<384> result; 

  v69 = -2i64;
  v3 = localClientNum;
  Mem_LargeLocal::Mem_LargeLocal(&v70, 0x17288ui64, "ClSnapshot newSnap");
  m_ptr = (char *)v70.m_ptr;
  ClientMP = ClActiveClientMP::GetClientMP(v3);
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1967, ASSERT_TYPE_ASSERT, "(cl != nullptr)", (const char *)&queryFormat, "cl != nullptr") )
    __debugbreak();
  if ( !ClActiveClientMP::IsSnapshotDataAllocated(ClientMP) )
  {
    Com_PrintError(14, "CL_ParseMP_ParseSnapshot: We received a snapshot before the memory was allocated to store them.  Discarding packet\n");
LABEL_23:
    MSG_Discard(msg);
    goto LABEL_153;
  }
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(v3);
  *(_QWORD *)&outPacket.p_packetSeq = ClientConnectionMP;
  ConnectionDataMP = ClConnectionMP::GetConnectionDataMP(ClientConnectionMP);
  v66 = ConnectionDataMP;
  v8 = NULL;
  if ( ClientConnectionMP->m_packetBackupCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", ClientConnectionMP->m_packetBackupCount, 0i64) )
    __debugbreak();
  if ( ClientConnectionMP->m_packetBackupCount <= 0 )
  {
    LODWORD(v59) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v59, 0i64) )
      __debugbreak();
    LODWORD(v60) = ClientConnectionMP->m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1978, ASSERT_TYPE_ASSERT, "( clc->GetPacketBackupCount() ) > ( 0 )", "%s > %s\n\t%i, %i", "clc->GetPacketBackupCount()", "0", v60, 0i64) )
      __debugbreak();
  }
  memset_0(m_ptr, 0, 0x17288ui64);
  *((_DWORD *)m_ptr + 23622) = cls.realtime;
  *((_DWORD *)m_ptr + 23648) = ConnectionDataMP->serverCommandSequence;
  *((_DWORD *)m_ptr + 23618) = MSG_ReadLong(msg);
  *((_DWORD *)m_ptr + 23619) = ConnectionDataMP->serverMessageSequence;
  Byte = MSG_ReadByte(msg);
  if ( Byte )
    *((_DWORD *)m_ptr + 23620) = *((_DWORD *)m_ptr + 23619) - Byte;
  else
    *((_DWORD *)m_ptr + 23620) = -1;
  Short = MSG_ReadShort(msg);
  *((_DWORD *)m_ptr + 23617) = Short;
  if ( (Short & 8) != 0 )
  {
    ++cls.noDeltaUseCount;
    cls.nextNoDeltaEntity = 0i64;
    CL_ParseMP_DiscardBaselineSnapshots();
    Com_Printf(14, "CL_ParseMP_ParseSnapshot: Receiving baseline snapshot (%i)\n", cls.noDeltaUseCount);
  }
  if ( *((int *)m_ptr + 23620) > 0 )
  {
    v12 = *((_DWORD *)m_ptr + 23620);
    p_noDeltaSnapshot = &ClientMP->snapshots[v12 % ClConnectionMP::GetPacketBackupCount(ClientConnectionMP)];
    if ( !CL_ParseMP_CheckForSnapshotValidity(ClientMP, p_noDeltaSnapshot, v12, *((_DWORD *)m_ptr + 23617)) )
      goto LABEL_23;
    m_ptr[94464] = 1;
    ConnectionDataMP = v66;
  }
  else
  {
    m_ptr[94464] = 1;
    if ( (m_ptr[94468] & 8) != 0 )
    {
      p_noDeltaSnapshot = NULL;
    }
    else
    {
      if ( !cls.nextNoDeltaEntity )
      {
        Com_PrintError(14, "We got a non-SNAPFLAG_BASELINE snap when nextNoDeltaEntity is still 0.  Discarding packet\n");
        goto LABEL_23;
      }
      p_noDeltaSnapshot = &cls.noDeltaSnapshot;
    }
  }
  serverTime = ClientMP->serverTime;
  Bit = MSG_ReadBit(msg);
  if ( Bit <= 0 )
  {
    if ( !p_noDeltaSnapshot )
      goto LABEL_37;
  }
  else if ( !p_noDeltaSnapshot )
  {
    Com_PrintWarning(14, "CL_ParseMP_ParseSnapshot: Server sent us a delta playerstate, but we don't have a frame to delta off of\n");
    CL_ParseMP_ParseSnapshotFailed(msg, (ClSnapshot *)m_ptr);
    goto LABEL_153;
  }
  if ( Bit <= 0 )
  {
LABEL_37:
    if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    *((_DWORD *)m_ptr + 23623) = MSG_ReadLong(msg);
    if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1211, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    if ( (m_ptr[94468] & 8) != 0 )
      CL_ParseMP_ParsePacketWeapons(ClientMP, msg, NULL, NULL, 0, 1);
    CL_ParseMP_ParsePacketWeapons(ClientMP, msg, NULL, (ClSnapshot *)m_ptr, 1, 0);
    if ( msg->overflowed )
    {
      Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing weapons (no delta).\n");
      goto LABEL_113;
    }
    CL_ParseMP_ShowNet(msg, "playerstate");
    CL_ParseMP_ParsePlayerstate(v3, msg, ClientMP, ConnectionDataMP, (ClSnapshot *)m_ptr);
    if ( msg->overflowed )
    {
      Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing playerstate (no delta).\n");
      goto LABEL_113;
    }
    goto LABEL_49;
  }
  CL_ParseMP_ParseCommandDelta(v3, msg, p_noDeltaSnapshot, (ClSnapshot *const)m_ptr);
  CL_ParseMP_ParsePacketWeapons(ClientMP, msg, p_noDeltaSnapshot, (ClSnapshot *)m_ptr, 0, 0);
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing weapons (delta).\n");
LABEL_113:
    CL_ParseMP_ParseSnapshotFailed(msg, (ClSnapshot *)m_ptr);
    goto LABEL_153;
  }
  CL_ParseMP_ShowNet(msg, "playerstate");
  CL_ParseMP_ReadDeltaPlayerState(v3, msg, *((_DWORD *)m_ptr + 23618), &p_noDeltaSnapshot->ps, (playerState_s *)m_ptr);
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing playerstate (delta).\n");
    goto LABEL_113;
  }
LABEL_49:
  bitarray_base<bitarray<2048>>::setBit((bitarray_base<bitarray<2048> > *)m_ptr + 94600, *((_DWORD *)m_ptr + 115));
  if ( !p_noDeltaSnapshot || (p_noDeltaSnapshot->info.snapFlags & 8) != 0 )
    p_scores = NULL;
  else
    p_scores = &p_noDeltaSnapshot->scores;
  MSG_ReadDeltaScoreboard(msg, *((_DWORD *)m_ptr + 23618), p_scores, (ScoreboardInfo *)(m_ptr + 21412), cls.maxClients);
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing scoreboard.\n");
    goto LABEL_113;
  }
  if ( !p_noDeltaSnapshot || (p_noDeltaSnapshot->info.snapFlags & 8) != 0 )
    p_streamSync = NULL;
  else
    p_streamSync = &p_noDeltaSnapshot->streamSync;
  CL_StreamSync_ParseSnapshot(v3, msg, p_streamSync, (ComSnapshotStreamSync *)(m_ptr + 27432));
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing stream sync.\n");
    goto LABEL_113;
  }
  if ( !p_noDeltaSnapshot || (p_noDeltaSnapshot->info.snapFlags & 8) != 0 )
  {
    Defaults = BG_Omnvar_GetDefaults();
  }
  else
  {
    parseOmnvars = ClientMP->parseOmnvars;
    Defaults = &parseOmnvars[BG_Omnvar_PerSnapCount() * (p_noDeltaSnapshot->parseOmnvarsIdx % ClientMP->parseOmnvarsCount)];
  }
  *((_QWORD *)m_ptr + 11818) = ClientMP->parseOmnvarsIdx;
  v18 = ClientMP->parseOmnvars;
  v19 = BG_Omnvar_PerSnapCount();
  MSG_ReadDeltaOmnvars(msg, *((_DWORD *)m_ptr + 23618), Defaults, &v18[ClientMP->parseOmnvarsIdx % ClientMP->parseOmnvarsCount * v19]);
  ++ClientMP->parseOmnvarsIdx;
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing omnvars.\n");
    goto LABEL_113;
  }
  if ( MSG_ReadBit(msg) )
  {
    ClientBits = ComCharacterLimits::GetClientBits();
    Bits = MSG_ReadBits(msg, ClientBits + 1);
    if ( (Bits < 0 || (unsigned __int64)Bits > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)Bits, "signed", Bits) )
      __debugbreak();
    if ( (unsigned int)Bits <= cls.maxClients )
    {
      if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
      {
        LODWORD(v58) = cg_t::ms_allocatedCount;
        LODWORD(newWeaponsAreNoDelta) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", newWeaponsAreNoDelta, v58) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
      {
        LODWORD(v58) = cg_t::ms_allocatedType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v58) )
          __debugbreak();
      }
      v22 = (CgGlobalsMP *)cg_t::ms_cgArray[localClientNum];
      v68 = v22;
      v23 = 0;
      if ( (_DWORD)Bits )
      {
        v24 = (MLGSpectatorClientInfo *)(m_ptr + 51264);
        do
        {
          if ( !p_noDeltaSnapshot || (v25 = (MLGSpectatorClientInfo *)((char *)v24 + (char *)p_noDeltaSnapshot - m_ptr), (p_noDeltaSnapshot->info.snapFlags & 8) != 0) )
            v25 = NULL;
          MSG_ReadDeltaMLGSpectatorInfo(msg, *((_DWORD *)m_ptr + 23618), v25, v24++, v22, v23++);
          v22 = v68;
        }
        while ( v23 < (unsigned int)Bits );
      }
    }
    else
    {
      MSG_Discard(msg);
      Com_PrintError(25, "CL_ParseMP_ParseMLGSpectatorInfo: Received too many clients: %u > %u\n", (unsigned int)Bits, (unsigned int)cls.maxClients);
    }
    v3 = localClientNum;
  }
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing MLG spectators.\n");
    goto LABEL_113;
  }
  if ( serverTime != ClientMP->serverTime )
  {
    LODWORD(v59) = ClientMP->serverTime;
    LODWORD(v58) = serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2188, ASSERT_TYPE_ASSERT, "(serverTimeBackup == cl->serverTime)", "%s\n\tcl->info.serverTime changed from %i to %i in MSG_ReadDeltaPlayerstate()\n", "serverTimeBackup == cl->serverTime", v58, v59) )
      __debugbreak();
  }
  MSG_ClearLastReferencedEntity(msg);
  CL_ParseMP_ShowNet(msg, "packet entities");
  CL_ParseMP_ParsePacketEntities(ClientMP, msg, *((unsigned int *)m_ptr + 23618), p_noDeltaSnapshot, (ClSnapshot *)m_ptr);
  MSG_ClearLastReferencedEntity(msg);
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing entities.\n");
    goto LABEL_113;
  }
  CL_ParseMP_ShowNet(msg, "packet clients");
  if ( !CL_ParseMP_ParsePacketClients(v3, ClientMP, msg, *((_DWORD *)m_ptr + 23618), p_noDeltaSnapshot, (ClSnapshot *)m_ptr) )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing clients.\n");
    goto LABEL_113;
  }
  MSG_ClearLastReferencedEntity(msg);
  CL_ParseMP_ShowNet(msg, "packet agents");
  if ( !CL_ParseMP_ParsePacketAgents(ClientMP, msg, *((_DWORD *)m_ptr + 23618), p_noDeltaSnapshot, (ClSnapshot *)m_ptr) )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing agents.\n");
    goto LABEL_113;
  }
  pieceChangeArray = CL_Glass_GetChangesBuffer(v3);
  ChangesBufferSize = CL_Glass_GetChangesBufferSize();
  Changes = BG_Glass_ReadChanges(msg, pieceChangeArray, ChangesBufferSize);
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing glass.\n");
    goto LABEL_113;
  }
  v27 = ScriptableCl_GetChangeQueue(localClientNum);
  *((_QWORD *)m_ptr + 11821) = v27->writeIndex;
  if ( MSG_ReadBit(msg) )
  {
    if ( !p_noDeltaSnapshot || (p_noDeltaSnapshot->info.snapFlags & 8) != 0 )
      scriptableChangeEndSequence = 0i64;
    else
      scriptableChangeEndSequence = p_noDeltaSnapshot->scriptableChangeEndSequence;
    ReplicatedLimits = ScriptableCl_GetReplicatedLimits();
    SnapshotChanges = ScriptableMsg_ReadSnapshotChanges(msg, ReplicatedLimits, scriptableChangeEndSequence, v27);
  }
  else
  {
    SnapshotChanges = 1;
  }
  ScriptableMsg_ReadBaselineChecksum(msg, (unsigned int *)m_ptr + 23647, (unsigned int *)m_ptr + 23646);
  *((_QWORD *)m_ptr + 11822) = v27->writeIndex;
  if ( !SnapshotChanges )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing scriptables.\n");
    goto LABEL_113;
  }
  *((_QWORD *)m_ptr + 11820) = ClientMP->parseUmbraGateStatesIndex;
  if ( p_noDeltaSnapshot )
    v8 = &ClientMP->parseUmbraGateStates[p_noDeltaSnapshot->parseUmbraGateStatesIndex % ClientMP->parseUmbraGateStatesCount];
  v31 = MSG_ReadDeltaUmbraGateState(&result, msg, v8);
  v32 = *(__m256i *)v31->array;
  v33 = *(_OWORD *)&v31->array[8];
  v34 = *((_QWORD *)m_ptr + 11820) % (__int64)ClientMP->parseUmbraGateStatesCount;
  parseUmbraGateStates = ClientMP->parseUmbraGateStates;
  *(__m256i *)parseUmbraGateStates[v34].array = v32;
  *(_OWORD *)&parseUmbraGateStates[v34].array[8] = v33;
  ++ClientMP->parseUmbraGateStatesIndex;
  overflowed = msg->overflowed;
  if ( msg->overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing umbra gate states.\n");
    goto LABEL_113;
  }
  if ( ClientMP->parseScriptedCameraCount )
  {
    parseScriptedCameraIndex = ClientMP->parseScriptedCameraIndex;
    *((_DWORD *)m_ptr + 23649) = parseScriptedCameraIndex;
    v38 = &ClientMP->parseScriptedCameras[(__int64)(parseScriptedCameraIndex % ClientMP->parseScriptedCameraCount)];
    if ( MSG_ReadBit(msg) )
      MSG_ReadData(msg, 128, v38, 128);
    else
      memset_0(v38, 0, sizeof(BgScriptedCameraState));
    ++ClientMP->parseScriptedCameraIndex;
    overflowed = msg->overflowed;
  }
  if ( overflowed )
  {
    Com_PrintError(25, "CL_ParseMP_ParseSnapshot: Malformed packet detected when parsing script cameras.\n");
    goto LABEL_113;
  }
  if ( m_ptr[94464] == 1 )
  {
    if ( Changes > ChangesBufferSize )
    {
      LODWORD(v61) = ChangesBufferSize;
      LODWORD(v59) = Changes;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2316, ASSERT_TYPE_ASSERT, "( glassPieceChangeCount ) <= ( glassPieceChangesSize )", "%s <= %s\n\t%i, %i", "glassPieceChangeCount", "glassPieceChangesSize", v59, v61) )
        __debugbreak();
    }
    BG_Glass_RecordChanges(pieceChangeArray, Changes);
    v39 = ClientMP->snap.messageNum + 1;
    v40 = *((_DWORD *)m_ptr + 23619);
    v41 = *(ClConnectionMP **)&outPacket.p_packetSeq;
    if ( v40 - v39 >= ClConnectionMP::GetPacketBackupCount(*(ClConnectionMP **)&outPacket.p_packetSeq) )
    {
      v40 = *((_DWORD *)m_ptr + 23619);
      v39 = v40 - ClConnectionMP::GetPacketBackupCount(*(ClConnectionMP **)&outPacket.p_packetSeq);
    }
    if ( v39 < v40 )
    {
      do
      {
        v42 = v39 % ClConnectionMP::GetPacketBackupCount(v41);
        v43 = *((_DWORD *)m_ptr + 23619);
        v44 = (int)v43 % ClConnectionMP::GetPacketBackupCount(v41);
        v45 = v42;
        snapshots = ClientMP->snapshots;
        if ( (_DWORD)v42 == v44 )
        {
          if ( snapshots[v45].state )
            Com_PrintWarning(25, "oldMessageNum is %i, newSnap.messageNum is %i - not clearing it because they overlap\n", (unsigned int)v39, v43);
        }
        else
        {
          snapshots[v45].state = BYTE_VALUE;
        }
        ++v39;
      }
      while ( v39 < *((_DWORD *)m_ptr + 23619) );
    }
    if ( (m_ptr[94468] & 8) != 0 )
    {
      if ( cls.noDeltaUseCount != *((_QWORD *)m_ptr + 11815) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 2350, ASSERT_TYPE_ASSERT, "( static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount) ) == ( newSnap.parseEntitiesIndex )", "%s == %s\n\t%lli, %lli", "static_cast<SnapshotEntryIndex>(cls.noDeltaUseCount)", "newSnap.parseEntitiesIndex", cls.noDeltaUseCount, *((_QWORD *)m_ptr + 11815)) )
        __debugbreak();
      memcpy_0(&cls.noDeltaSnapshot, m_ptr, sizeof(cls.noDeltaSnapshot));
    }
    ClientMP->oldSnapServerTime = ClientMP->snap.info.serverTime;
    memcpy_0(&ClientMP->snap, m_ptr, sizeof(ClientMP->snap));
    ClientMP->snap.ping = 999;
    ATClient_OnSnapshotApplied(localClientNum);
    if ( ClConnectionMP::GetPacketBackup(v41, v66->messageAcknowledge, &outPacket) )
      ClientMP->snap.ping = cls.realtime - outPacket.p_realtime;
    PacketBackupCount = ClConnectionMP::GetPacketBackupCount(v41);
    memcpy_0(&ClientMP->snapshots[ClientMP->snap.messageNum % PacketBackupCount], &ClientMP->snap, sizeof(ClientMP->snapshots[ClientMP->snap.messageNum % PacketBackupCount]));
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_cl_shownet, "cl_shownet") == 3 )
    {
      LODWORD(fmt) = ClientMP->snap.ping;
      Com_Printf(14, "   snapshot:%i  delta:%i  ping:%i\n", (unsigned int)ClientMP->snap.messageNum, (unsigned int)ClientMP->snap.deltaNum, fmt);
    }
    v48 = *((int *)m_ptr + 23623);
    v49 = v48 - truncate_cast<int,__int64>(ClientMP->svCmdTargetErrorUsec / 1000);
    ClientMP->svCmdTargetErrorUsec = 1000 * v48;
    v50 = ClConnectionMP::GetClientConnectionMP(localClientNum);
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 157, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    messageAcknowledge = v50->m_connectionData.messageAcknowledge;
    if ( messageAcknowledge && ClConnectionMP::GetPacketBackup(v50, messageAcknowledge, &outPacket) )
    {
      v52 = cls.realtime - outPacket.p_realtime;
    }
    else
    {
      if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
        __debugbreak();
      m_serverFrameDuration = cls.m_serverFrameDuration;
      v52 = m_serverFrameDuration * ClConnectionMP::GetPacketBackupCount(v50);
    }
    metrics.value[0] = v52;
    metrics.value[1] = v49;
    svCmdTargetErrorUsec = ClientMP->svCmdTargetErrorUsec;
    metrics.value[2] = (int)svCmdTargetErrorUsec / 1000;
    svCmdCurrentErrorUsec = ClientMP->svCmdCurrentErrorUsec;
    metrics.value[3] = (int)svCmdCurrentErrorUsec / 1000;
    metrics.value[4] = ((int)svCmdTargetErrorUsec - (int)svCmdCurrentErrorUsec) / 1000;
    CL_LatencyProfileMP_RecordLatencyEvent(localClientNum, &metrics);
    CL_LatencyProfileMP_UpdateClientLatencyHistogram(metrics.value[0]);
    ClNetperfTelemetry::TrackPing(&v50->m_connectionData.netperfTelemetry, v52);
    ClientMP->newSnapshots = 1;
  }
LABEL_153:
  Mem_LargeLocal::~Mem_LargeLocal(&v70);
}

/*
==============
CL_ParseMP_ParseSnapshotFailed
==============
*/
void CL_ParseMP_ParseSnapshotFailed(msg_t *msg, ClSnapshot *snap)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1900, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 1901, ASSERT_TYPE_ASSERT, "(snap)", (const char *)&queryFormat, "snap") )
    __debugbreak();
  RaiseException(0xC0000005, 0, 0, NULL);
  MSG_Discard(msg);
  snap->state = INVALID;
}

/*
==============
CL_ParseMP_ReadDeltaPlayerState
==============
*/
void CL_ParseMP_ReadDeltaPlayerState(const LocalClientNum_t localClientNum, msg_t *msg, const int time, const playerState_s *from, playerState_s *to)
{
  __int128 v5; 
  const ClActiveClientMP *v8; 
  ClActiveClientMP *ClientMP; 
  __int64 commandTime; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  ClActiveClientMP *v15; 
  unsigned int v16; 
  ClActiveClientMP *v17; 
  __m256i v18; 
  float v19; 
  int v20; 
  ClActiveClientMP *v21; 
  float v22; 
  float v23; 
  bool outRecvOriginAndVelocity; 
  bool outRecvVehicleState; 
  int outPredictedTime[3]; 
  ClPredictResultMP outPredictedData; 
  __int128 v28; 

  MSG_ReadDeltaPlayerstate(msg, time, from, to, 0, &outRecvOriginAndVelocity, &outRecvVehicleState);
  if ( outRecvOriginAndVelocity )
  {
    if ( msg_logPredictionPositionErrors->current.value > 0.0 )
    {
      ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
      if ( ClActiveClientMP::FindPredictedDataForTime(ClientMP, to->commandTime, outPredictedTime, &outPredictedData) )
      {
        commandTime = (unsigned int)to->commandTime;
        if ( outPredictedTime[0] == (_DWORD)commandTime )
        {
          v11 = (float)(to->origin.v[1] - outPredictedData.origin.v[1]) * (float)(to->origin.v[1] - outPredictedData.origin.v[1]);
          v12 = (float)(to->origin.v[2] - outPredictedData.origin.v[2]) * (float)(to->origin.v[2] - outPredictedData.origin.v[2]);
          v28 = v5;
          v13 = to->origin.v[0];
          v14 = (float)((float)((float)(v13 - outPredictedData.origin.v[0]) * (float)(v13 - outPredictedData.origin.v[0])) + v11) + v12;
          if ( v14 < (float)(msg_logPredictionPositionErrors->current.value * msg_logPredictionPositionErrors->current.value) && v14 > 0.0099999998 )
            Com_Printf(14, "Origin corrected by server. Time ( %i ) from (%.2f,%.2f,%.2f) to (%.2f,%.2f,%.2f) (%.2f away)\n", commandTime, outPredictedData.origin.v[0], outPredictedData.origin.v[1], outPredictedData.origin.v[2], v13, to->origin.v[1], to->origin.v[2], fsqrt(v14));
        }
      }
    }
  }
  else
  {
    v8 = ClActiveClientMP::GetClientMP(localClientNum);
    if ( !CL_ParseMP_GetPredictedPlayerInformationForCommandTime(v8, to->commandTime, to) )
    {
      Com_PrintError(25, "Unable to find the origin we sent, delta is not going to work\n");
      to->origin = from->origin;
      to->velocity = from->velocity;
      to->movementDir = from->movementDir;
      to->movementDirPrecise = from->movementDirPrecise;
    }
  }
  if ( !outRecvVehicleState && to->vehicleState.entity != 2047 )
  {
    v15 = ClActiveClientMP::GetClientMP(localClientNum);
    v16 = to->commandTime;
    v17 = v15;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 172, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
      __debugbreak();
    if ( to == (playerState_s *)-288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_parse_mp.cpp", 173, ASSERT_TYPE_ASSERT, "(predictedPlayerVehState)", (const char *)&queryFormat, "predictedPlayerVehState") )
      __debugbreak();
    if ( ClActiveClientMP::FindPredictedDataForTime(v17, v16, outPredictedTime, &outPredictedData) )
    {
      if ( outPredictedTime[0] != v16 )
        Com_Printf(14, "CL_ParseMP_GetPredictedVehicleForCommandTime() Couldn't find exact match for commandTime %i, using commandTime %i\n", v16, (unsigned int)outPredictedTime[0]);
      v18 = *(__m256i *)outPredictedData.vehicle.origin.v;
      v19 = outPredictedData.vehicle.gunAngles.v[1];
      to->vehicleState.flags = outPredictedData.vehicle.flags;
      to->vehicleState.targetEntity = outPredictedData.vehicle.targetEntity;
      *(__m256i *)to->vehicleState.origin.v = v18;
      *(__m256i *)&to->vehicleState.velocity.z = *(__m256i *)&outPredictedData.vehicle.velocity.z;
      to->vehicleState.gunAngles.v[0] = outPredictedData.vehicle.gunAngles.v[0];
      to->vehicleState.gunAngles.v[1] = v19;
    }
    else
    {
      to->vehicleState.flags = from->vehicleState.flags;
      to->vehicleState.origin = from->vehicleState.origin;
      to->vehicleState.angles = from->vehicleState.angles;
      to->vehicleState.velocity = from->vehicleState.velocity;
      to->vehicleState.angVelocity = from->vehicleState.angVelocity;
      to->vehicleState.tilt = from->vehicleState.tilt;
      to->vehicleState.tiltVelocity = from->vehicleState.tiltVelocity;
      to->vehicleState.gunAngles = from->vehicleState.gunAngles;
      to->vehicleState.targetEntity = from->vehicleState.targetEntity;
    }
  }
  if ( CL_Demo_IsPlayingAny(localClientNum) )
  {
    v20 = to->commandTime;
    v21 = ClActiveClientMP::GetClientMP(localClientNum);
    if ( ClActiveClientMP::FindPredictedDataForTime(v21, v20, outPredictedTime, &outPredictedData) )
    {
      v22 = outPredictedData.viewangles.v[0];
      v23 = outPredictedData.viewangles.v[1];
      to->inputTime = outPredictedData.inputTime;
      to->viewangles.v[0] = v22;
      to->viewangles.v[2] = outPredictedData.viewangles.v[2];
      to->viewangles.v[1] = v23;
    }
    else
    {
      to->viewangles = from->viewangles;
    }
  }
}

/*
==============
CL_ParseMP_ResetTrBase
==============
*/
void CL_ParseMP_ResetTrBase(entityState_t *es, const trType_t trTypeSet)
{
  trajectory_t_secure *p_pos; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  vec3_t trBase; 
  __int64 v8; 
  float v9; 

  p_pos = &es->lerp.pos;
  Trajectory_GetTrBase(&es->lerp.pos, &trBase);
  p_pos->trType = trTypeSet;
  if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj", -2i64) )
    __debugbreak();
  if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
  {
    v9 = trBase.v[0];
    if ( (LODWORD(trBase.v[0]) & 0x7F800000) == 2139095040 || (v9 = trBase.v[1], (LODWORD(trBase.v[1]) & 0x7F800000) == 2139095040) || (v9 = trBase.v[2], (LODWORD(trBase.v[2]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v4 = LODWORD(trBase.v[0]) ^ ~s_trbase_aab_X;
    v5 = v4 ^ LODWORD(trBase.v[1]) ^ s_trbase_aab_Y;
    v6 = v5 ^ LODWORD(trBase.v[2]) ^ s_trbase_aab_Z;
    LODWORD(p_pos->trBase.v[0]) = v4;
    LODWORD(p_pos->trBase.v[1]) = v5;
    LODWORD(p_pos->trBase.v[2]) = v6;
    memset(&v8, 0, sizeof(v8));
  }
  else
  {
    p_pos->trBase = trBase;
  }
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
CL_ParseMP_ServerIdChanged
==============
*/
void CL_ParseMP_ServerIdChanged(LocalClientNum_t localClientNum)
{
  ClActiveClientMP *ClientMP; 
  const char *ConfigString; 

  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ConfigString = CL_GetConfigString(530);
  cls.serverId = atoi(ConfigString);
  ClientMP->serverId = cls.serverId;
}

/*
==============
CL_ParseMP_ShowNet
==============
*/
void CL_ParseMP_ShowNet(msg_t *msg, const char *s)
{
  const dvar_t *v2; 

  v2 = DVARINT_cl_shownet;
  if ( !DVARINT_cl_shownet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_shownet") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer >= 2 )
    Com_Printf(14, "%3i:%s\n", (unsigned int)(msg->readcount - 1), s);
}

/*
==============
CL_ParseMP_SystemInfoChanged
==============
*/
void CL_ParseMP_SystemInfoChanged(LocalClientNum_t localClientNum)
{
  char *m_ptr; 
  char *v2; 
  char *ConfigString; 
  Mem_LargeLocal v4; 
  Mem_LargeLocal key; 
  char *head; 

  Mem_LargeLocal::Mem_LargeLocal(&key, 0x2000ui64, "snapshot_key_t key");
  m_ptr = (char *)key.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v4, 0x2000ui64, "snapshot_value_t value");
  v2 = (char *)v4.m_ptr;
  ConfigString = (char *)CL_GetConfigString(529);
  if ( !Com_IsAnyLocalServerRunning() )
  {
    head = ConfigString;
    while ( head )
    {
      Info_NextPair((const char **)&head, m_ptr, v2);
      if ( !*m_ptr )
        break;
      Dvar_SetFromStringByNameFromSource(m_ptr, v2, DVAR_SOURCE_INTERNAL);
    }
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v4);
  Mem_LargeLocal::~Mem_LargeLocal(&key);
}

/*
==============
CL_ParseMP_UnObfuscateTrBase
==============
*/
void CL_ParseMP_UnObfuscateTrBase(entityState_t *es)
{
  if ( es->lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    CL_ParseMP_ResetTrBase(es, TR_LINEAR_STOP);
}

