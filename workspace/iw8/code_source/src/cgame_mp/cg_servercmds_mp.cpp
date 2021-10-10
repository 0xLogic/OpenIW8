/*
==============
CG_ServerCmdMP_UpdateScores
==============
*/

void __fastcall CG_ServerCmdMP_UpdateScores(CgGlobalsMP *cgameGlob, CgSnapshotMP *snap)
{
  ?CG_ServerCmdMP_UpdateScores@@YAXPEAVCgGlobalsMP@@PEAUCgSnapshotMP@@@Z(cgameGlob, snap);
}

/*
==============
CG_ServerCmdMP_ParseTimeScale
==============
*/

void __fastcall CG_ServerCmdMP_ParseTimeScale(const LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_ParseTimeScale@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_ExecuteNewServerCommands
==============
*/

void __fastcall CG_ServerCmdMP_ExecuteNewServerCommands(LocalClientNum_t localClientNum, int lastSequenceExecuted, int latestSequence)
{
  ?CG_ServerCmdMP_ExecuteNewServerCommands@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, lastSequenceExecuted, latestSequence);
}

/*
==============
CG_ServerCmdMP_ParsePlayerInfos
==============
*/

void __fastcall CG_ServerCmdMP_ParsePlayerInfos(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_ParsePlayerInfos@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_MapRestart
==============
*/

void __fastcall CG_ServerCmdMP_MapRestart(LocalClientNum_t localClientNum, int savepersist)
{
  ?CG_ServerCmdMP_MapRestart@@YAXW4LocalClientNum_t@@H@Z(localClientNum, savepersist);
}

/*
==============
CG_ServerCmdMP_SetConfigValues
==============
*/

void __fastcall CG_ServerCmdMP_SetConfigValues(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_SetConfigValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_CompareScores
==============
*/

bool __fastcall CG_ServerCmdMP_CompareScores(const int client1, const int client2, const int team1, const int team2, const int score1, const int score2, const int deaths1, const int deaths2)
{
  return ?CG_ServerCmdMP_CompareScores@@YA_NHHHHHHHH@Z(client1, client2, team1, team2, score1, score2, deaths1, deaths2);
}

/*
==============
CG_ServerCmdMP_ParseServerInfo
==============
*/

void __fastcall CG_ServerCmdMP_ParseServerInfo(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_ParseServerInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_ParseGameEndTime
==============
*/

void __fastcall CG_ServerCmdMP_ParseGameEndTime(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_ParseGameEndTime@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_ParseCodInfo
==============
*/

void __fastcall CG_ServerCmdMP_ParseCodInfo(LocalClientNum_t localClientNum)
{
  ?CG_ServerCmdMP_ParseCodInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ServerCmdMP_AddToTeamChat
==============
*/
void CG_ServerCmdMP_AddToTeamChat(LocalClientNum_t localClientNum, const char *str, int messageClient)
{
  cgs_t *LocalClientStaticGlobals; 
  int ControllerFromClient; 
  const PartyData *PartyData; 
  Online_BlockList *Instance; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  int v13; 
  char v14; 
  char *v15; 
  char *v16; 
  signed __int64 v17; 
  cg_t *LocalClientGlobals; 
  __int64 v19; 
  char *v20; 
  char v21; 
  const char *v22; 
  char v23; 
  int v24; 
  XUID result; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  PartyData = Lobby_GetPartyData();
  Party_GetXuid(&result, PartyData, messageClient);
  Instance = Online_BlockList::GetInstance();
  if ( !Online_BlockList::IsBlocked(Instance, ControllerFromClient, result) && Live_GetDoesUserHaveOnlineCommunicationsPrivilege(ControllerFromClient) )
  {
    v10 = DVARINT_cg_chatHeight;
    if ( !DVARINT_cg_chatHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    if ( !integer )
      goto LABEL_28;
    v12 = DVARINT_cg_chatTime;
    if ( !DVARINT_cg_chatTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer > 0 )
    {
      v13 = 0;
      v14 = 55;
      v15 = NULL;
      v16 = LocalClientStaticGlobals->teamChatMsgs[LocalClientStaticGlobals->teamChatPos % integer];
      for ( *v16 = 0; *str; ++v16 )
      {
        if ( v13 > 63 )
        {
          if ( v15 )
          {
            v17 = v15 - v16;
            v16 = v15;
            str += v17 + 1;
          }
          *v16 = 0;
          LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
          v13 = 0;
          LocalClientStaticGlobals->teamChatMsgTimes[LocalClientStaticGlobals->teamChatPos++ % integer] = LocalClientGlobals->time;
          v19 = LocalClientStaticGlobals->teamChatPos % integer;
          v20 = LocalClientStaticGlobals->teamChatMsgs[v19];
          *v20 = 94;
          v20[1] = v14;
          v16 = &LocalClientStaticGlobals->teamChatMsgs[v19][2];
          v15 = NULL;
        }
        if ( str && *str == 94 && (v21 = str[1], v22 = str + 1, v21) && v21 != 94 && (unsigned __int8)(v21 - 39) <= 0x17u )
        {
          *v16 = 94;
          ++str;
          v23 = *v22;
          ++v16;
          v14 = *v22;
        }
        else
        {
          v23 = *str;
          if ( *str == 32 )
            v15 = v16;
          ++v13;
        }
        *v16 = v23;
        ++str;
      }
      *v16 = 0;
      LocalClientStaticGlobals->teamChatMsgTimes[LocalClientStaticGlobals->teamChatPos % integer] = CG_GetLocalClientGlobals(localClientNum)->time;
      v24 = LocalClientStaticGlobals->teamChatPos + 1;
      LocalClientStaticGlobals->teamChatPos = v24;
      if ( v24 - LocalClientStaticGlobals->teamLastChatPos > integer )
        LocalClientStaticGlobals->teamLastChatPos = v24 - integer;
    }
    else
    {
LABEL_28:
      *(_QWORD *)&LocalClientStaticGlobals->teamChatPos = 0i64;
    }
  }
}

/*
==============
CG_ServerCmdMP_Chat
==============
*/
void CG_ServerCmdMP_Chat(const LocalClientNum_t localClientNum, const char *message, const bool isTeamChat, const int messageClient)
{
  const dvar_t *v8; 
  const char *v9; 
  const char *v10; 
  char v11; 
  int v12; 
  char *v13; 
  char *v14; 
  char dest[160]; 

  if ( isTeamChat )
    goto LABEL_6;
  v8 = DVARBOOL_cg_teamChatsOnly;
  if ( !DVARBOOL_cg_teamChatsOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_teamChatsOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
LABEL_6:
    v9 = "chat message";
    if ( isTeamChat )
      v9 = "team chat message";
    v10 = SEH_LocalizeTextMessage(message, v9, LOCMSG_SAFE);
    Core_strcpy(dest, 0x96ui64, v10);
    v11 = dest[0];
    v12 = 0;
    if ( dest[0] )
    {
      v13 = dest;
      v14 = dest;
      do
      {
        if ( v11 != 25 )
        {
          ++v12;
          *v14++ = v11;
        }
        v11 = *++v13;
      }
      while ( v11 );
    }
    dest[v12] = 0;
    CG_ServerCmdMP_AddToTeamChat(localClientNum, dest, messageClient);
    Com_Printf(14, "%s\n", dest);
  }
}

/*
==============
CG_ServerCmdMP_CompareScores
==============
*/
char CG_ServerCmdMP_CompareScores(const int client1, const int client2, const int team1, const int team2, const int score1, const int score2, const int deaths1, const int deaths2)
{
  int v8; 
  bool IsGameClientLocal; 

  v8 = client2;
  if ( team1 != 201 )
  {
    if ( team2 != 201 )
    {
      if ( team1 == 202 )
      {
        if ( team2 != 202 )
          return 0;
        return CG_ServerCmdMP_SortByClient(client1, client2);
      }
      if ( team2 != 202 )
      {
        if ( score1 < score2 )
          return 0;
        if ( score1 <= score2 )
        {
          if ( deaths1 > deaths2 )
            return 0;
          if ( deaths1 >= deaths2 )
          {
            client2 = client1;
            return CG_ServerCmdMP_SortByClient(client1, client2);
          }
        }
      }
    }
    return 1;
  }
  if ( team2 != 201 )
    return 0;
  IsGameClientLocal = CL_Main_IsGameClientLocal(client1);
  if ( IsGameClientLocal == CL_Main_IsGameClientLocal(v8) )
    return client1 < v8;
  else
    return IsGameClientLocal;
}

/*
==============
CG_ServerCmdMP_ConfigStringModified
==============
*/
void CG_ServerCmdMP_ConfigStringModified(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  const char *ConfigString; 
  unsigned int v4; 
  const char *v5; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v7; 
  unsigned int v8; 
  cgs_t *LocalClientStaticGlobals; 
  BgXModelHandle v10; 
  dvar_t *outDvar; 

  v2 = Cmd_ArgInt(1);
  if ( !CG_ServerCmd_ConfigStringModifiedInternal(localClientNum, v2) )
  {
    ConfigString = CL_GetConfigString(v2);
    if ( v2 != 528 )
    {
      if ( v2 - 537 > 0x63 )
      {
        switch ( v2 )
        {
          case 0x213u:
            LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
            LocalClientGlobals->teamScores[1] = atoi(ConfigString);
            break;
          case 0x214u:
            v7 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
            v7->teamScores[2] = atoi(ConfigString);
            break;
          case 0x216u:
            CL_ParseMP_ParseMapCenter(localClientNum);
            break;
          case 0x215u:
            CG_ServerCmdMP_ParseGameEndTime(localClientNum);
            break;
          default:
            if ( v2 )
            {
              if ( v2 - 9 <= 1 || v2 == 15 )
              {
                if ( CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_useMinimap )
                {
                  if ( v2 == 15 )
                    CG_DrawToolsMP_MiniMapCPRaidChanged(localClientNum);
                  else
                    CG_DrawTools_MiniMapChanged(localClientNum);
                }
                else
                {
                  Com_PrintWarning(14, "CS_NORTHYAW, CS_MINIMAP or CS_MINIMAP_CP_RAID_MAZE changed, but not updating since m_useMinimap is off.\n");
                }
              }
              else
              {
                switch ( v2 )
                {
                  case 0xBu:
                    CG_DrawTools_ThermalBodyMaterialChanged(localClientNum);
                    break;
                  case 0x212u:
                    Com_Printf(14, "CS_SERVERID changed for client %d: %s\n", (unsigned int)localClientNum, ConfigString);
                    break;
                  case 0xDu:
                    if ( CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_useLeaderboards && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
                      LB_SetWriteLeaderboards(ConfigString);
                    break;
                  case 0x217u:
                    CG_ServerCmdMP_ParseTimeScale(localClientNum);
                    break;
                  default:
                    v8 = v2 - 16;
                    if ( v2 - 16 > 0xFF )
                    {
                      if ( v2 - 637 > 0x7F && v2 - 272 > 0xFF )
                        Com_Printf(14, "Unknown config string index %i [value %s], failed to update from snapshot\n", v2, ConfigString);
                    }
                    else
                    {
                      if ( !NetConstStrings_IsPrecacheAllowed() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 846, ASSERT_TYPE_ASSERT, "(NetConstStrings_IsPrecacheAllowed())", (const char *)&queryFormat, "NetConstStrings_IsPrecacheAllowed()") )
                        __debugbreak();
                      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
                      v10.assetType = ASSET_TYPE_XMODEL;
                      v10.un.compositeModel = (XCompositeModelDef *)R_RegisterModel(ConfigString);
                      LocalClientStaticGlobals->gameModels[v8] = v10;
                    }
                    break;
                }
              }
            }
            else
            {
              CG_ServerCmd_ParseSunLight(localClientNum);
            }
            break;
        }
      }
      else
      {
        v4 = v2 - 537;
        if ( v2 - 537 >= 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 100 )", "index doesn't index MAX_CODINFO\n\t%i not in [0, %i)", v2 - 537, 100) )
          __debugbreak();
        if ( !CG_GetLocalClientStaticGlobals(localClientNum)->localServer )
        {
          if ( NetConstStrings_GetCodInfoDvarAtIndex(v4, (const dvar_t **)&outDvar) )
          {
            if ( !outDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 446, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
              __debugbreak();
            v5 = CL_GetConfigString(v2);
            Dvar_SetFromStringFromSource(outDvar, v5, DVAR_SOURCE_SERVERCMD);
          }
          else
          {
            Com_PrintError(14, "CG_ServerCmdMP_ParseSingleCodInfo: Empty CODINFO string for index %i\n", v4);
          }
        }
      }
    }
  }
}

/*
==============
CG_ServerCmdMP_DeployServerCommandBinary
==============
*/

void __fastcall CG_ServerCmdMP_DeployServerCommandBinary(LocalClientNum_t localClientNum, const unsigned __int8 *command, double a3)
{
  __int64 v4; 
  int v5; 
  __int64 v6; 
  const char *v7; 
  cg_t *v8; 
  CgWeaponMap *v9; 
  const playerState_s *v10; 
  int EquippedWeaponIndex; 
  __int64 v12; 
  WeaponDef **v13; 
  Weapon *v14; 
  int v15; 
  cg_t *LocalClientGlobals; 
  int v17; 
  Weapon *killcamFXWeapons; 
  __int64 v19; 
  unsigned int v20; 
  const SndAliasList *AliasFromId; 
  int SoundAliasSeed; 
  int v23; 
  unsigned int v24; 
  SndAliasList *v25; 
  playerState_s *p_predictedPlayerState; 
  unsigned __int64 SndEntHandle; 
  unsigned int v28; 
  int v29; 
  int v30; 
  int v31; 
  CgDrawSystemMP *v32; 
  const char *v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  msg_t buf; 
  double v38; 
  __int64 v39; 
  __int128 v40; 
  Weapon v41; 
  Weapon r_weapon; 
  Weapon result; 
  BG_SynchronizedPlayerInfo playerInfo; 
  char string[1032]; 

  v39 = -2i64;
  v4 = localClientNum;
  bdSecurityID::bdSecurityID(&playerInfo.partyId);
  XUID::XUID(&playerInfo.xuid);
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2382, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( *command != 89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2383, ASSERT_TYPE_ASSERT, "(command[0] == 'Y')", (const char *)&queryFormat, "command[0] == SVSCMD_BINARY_COMMAND") )
    __debugbreak();
  v5 = *((unsigned __int16 *)command + 1);
  if ( !*((_WORD *)command + 1) )
  {
    LODWORD(v35) = *((unsigned __int16 *)command + 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2386, ASSERT_TYPE_ASSERT, "( ( commandSize > 0 ) )", "( commandSize ) = %i", v35) )
      __debugbreak();
  }
  MSG_InitReadOnly(&buf, (unsigned __int8 *)command + 4, v5);
  MSG_BeginReading(&buf);
  v6 = (unsigned int)(char)MSG_ReadByte(&buf);
  v7 = j_va("DeployServerCommandBinary %c", v6);
  Sys_ProfBeginNamedEvent(0xFF008008, v7);
  switch ( (int)v6 )
  {
    case '&':
      v29 = MSG_ReadShort(&buf);
      v30 = MSG_ReadLong(&buf);
      v31 = MSG_ReadLong(&buf);
      CG_ClientAntiCheatMP_DLogRecordTargetDeltas((const LocalClientNum_t)v4, v29, v30, v31);
      break;
    case '+':
      CL_InputMP_SetCommandDurationMsg((const LocalClientNum_t)v4, &buf);
      break;
    case '1':
      CG_ServerCmdMP_EmissiveBlendCommand((const LocalClientNum_t)v4, &buf);
      break;
    case '?':
      CG_PlayerCorpseMP_ClearAllPlayerCorpses((LocalClientNum_t)v4);
      break;
    case 'A':
      CG_ServerCmdMP_PodiumDataCommand((const LocalClientNum_t)v4, &buf);
      break;
    case 'C':
      if ( buf.overflowed )
      {
        Com_PrintError(1, "SVSCMD_ANNOUNCER_SOUND recieved a message that has overflowed. Skipping sound.");
      }
      else if ( !(_DWORD)v4 )
      {
        v20 = MSG_ReadLong(&buf);
        AliasFromId = SND_FindAliasFromId(v20);
        if ( AliasFromId )
        {
          SoundAliasSeed = Com_GetSoundAliasSeed();
          v23 = Sys_Milliseconds();
          Com_SetSoundAliasSeed(v23);
          SND_PlayLocalSoundAliasAsync(LOCAL_CLIENT_0, AliasFromId, SASYS_CGAME);
          Com_SetSoundAliasSeed(SoundAliasSeed);
        }
      }
      break;
    case 'D':
      if ( buf.overflowed )
      {
        Com_PrintError(1, "SVSCMD_ANNOUNCER_SOUND_STOP recieved a message that has overflowed. Skipping stop command.");
      }
      else if ( !(_DWORD)v4 )
      {
        v24 = MSG_ReadLong(&buf);
        v25 = SND_FindAliasFromId(v24);
        if ( v25 )
        {
          p_predictedPlayerState = &CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->predictedPlayerState;
          if ( p_predictedPlayerState )
          {
            SndEntHandle = CG_GenerateSndEntHandle(LOCAL_CLIENT_0, p_predictedPlayerState->clientNum);
            SND_StopSoundAliasOnEnt(SndEntHandle, v25->aliasName);
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2012, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          {
            __debugbreak();
          }
        }
      }
      break;
    case 'G':
      CG_ServerCmdMP_ReadPlayerPersistentDataChanges((LocalClientNum_t)v4, &buf);
      break;
    case 'O':
      v14 = MSG_ReadWeapon(&v41, &buf);
      *(__m256i *)&r_weapon.weaponIdx = *(__m256i *)&v14->weaponIdx;
      *(__m256i *)&result.weaponIdx = *(__m256i *)&r_weapon.weaponIdx;
      v40 = *(_OWORD *)&v14->attachmentVariationIndices[5];
      *(_OWORD *)&result.attachmentVariationIndices[5] = v40;
      v38 = *(double *)&v14->attachmentVariationIndices[21];
      *(double *)&result.attachmentVariationIndices[21] = v38;
      v15 = *(_DWORD *)&v14->weaponCamo;
      *(_DWORD *)&result.weaponCamo = v15;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      v17 = 0;
      killcamFXWeapons = LocalClientGlobals->killcamFXWeapons;
      do
      {
        if ( !killcamFXWeapons->weaponIdx )
          break;
        if ( !memcmp_0(&LocalClientGlobals->killcamFXWeapons[v17], &result, 0x3Cui64) )
          goto LABEL_75;
        ++v17;
        ++killcamFXWeapons;
      }
      while ( v17 < 5 );
      if ( v17 == 5 )
      {
        Com_PrintError(14, "Server is trying to register too many killcamFXWeapons.  Max is %i.\n", 5i64);
      }
      else
      {
        v19 = v17;
        *(__m256i *)&LocalClientGlobals->killcamFXWeapons[v19].weaponIdx = *(__m256i *)&r_weapon.weaponIdx;
        *(_OWORD *)&LocalClientGlobals->killcamFXWeapons[v19].attachmentVariationIndices[5] = v40;
        *(double *)&LocalClientGlobals->killcamFXWeapons[v19].attachmentVariationIndices[21] = v38;
        *(_DWORD *)&LocalClientGlobals->killcamFXWeapons[v19].weaponCamo = v15;
      }
      break;
    case 'Q':
      CG_WorldStreaming_ManualStreamPosCommand((const LocalClientNum_t)v4, &buf);
      break;
    case 'V':
      v28 = MSG_ReadByte(&buf);
      if ( MSG_ReadBit(&buf) )
      {
        BG_SynchronizedPlayerInfo_Reset(&playerInfo);
        BG_SynchronizedPlayerInfo::Deserialize(&playerInfo, &buf);
        CL_PlayerInfosMP_SetPlayerInfo(v28, &playerInfo);
      }
      else
      {
        Com_Printf(14, "%s - Clearing player info for client %d\n", "CG_ServerCmdMP_DeployServerCommandBinary", v28);
        CL_PlayerInfosMP_ResetPlayerInfo(v28);
      }
      CG_ServerCmdMP_ParsePlayerInfos((LocalClientNum_t)v4);
      break;
    case '_':
      if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v4, 2, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
        __debugbreak();
      if ( (unsigned int)v4 >= CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(v36) = CgDrawSystem::ms_allocatedCount;
        LODWORD(v35) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !CgDrawSystem::ms_drawSystemArray[v4] )
      {
        LODWORD(v36) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v36) )
          __debugbreak();
      }
      v32 = (CgDrawSystemMP *)CgDrawSystem::ms_drawSystemArray[v4];
      v33 = MSG_ReadString(&buf, string, 0x400u);
      v34 = Sys_Milliseconds();
      CgDrawSystemMP::SetLastSRETime(v32, v34, v33);
      break;
    case 'a':
      r_weapon = *MSG_ReadWeapon(&result, &buf);
      v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      v9 = CgWeaponMap::ms_instance[v4];
      v10 = &v8->predictedPlayerState;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v9, v10, &r_weapon);
      if ( EquippedWeaponIndex < 0 || (v12 = EquippedWeaponIndex, (const playerState_s *)((char *)v10 + v12 * 16) == (const playerState_s *)-1540i64) )
        CG_SelectWeapon((LocalClientNum_t)v4, &r_weapon, 0);
      else
        CG_SelectWeapon((LocalClientNum_t)v4, &r_weapon, v10->weapEquippedData[v12].inAltMode);
      break;
    case 'w':
      r_weapon = *MSG_ReadWeapon(&result, &buf);
      if ( !LOWORD(a3) )
        goto LABEL_33;
      if ( LOWORD(a3) > bg_lastParsedWeaponIndex )
      {
        LODWORD(v35) = LOWORD(a3);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v35, bg_lastParsedWeaponIndex) )
          __debugbreak();
      }
      v13 = &bg_weaponDefs[LOWORD(a3)];
      if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( (*v13)->offhandClass )
LABEL_33:
        CG_SetEquippedOffHand((LocalClientNum_t)v4, &r_weapon);
      break;
    default:
      Com_Printf(14, "Unknown binary client game command: %c\n", (unsigned int)v6);
      break;
  }
LABEL_75:
  Sys_ProfEndNamedEvent();
  bdSecurityID::~bdSecurityID(&playerInfo.partyId);
}

/*
==============
CG_ServerCmdMP_DeployServerCommandString
==============
*/
void CG_ServerCmdMP_DeployServerCommandString(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *v4; 
  const char *v5; 
  int i; 
  const char *v7; 
  const char *v8; 
  unsigned int v9; 
  const dvar_t *v10; 
  dvar_t *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  int v18; 
  const char *v19; 
  int v20; 
  double v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  CgSoundSystem *v25; 
  unsigned int v26; 
  int v27; 
  CgSoundSystem *SoundSystem; 
  int v29; 
  int v30; 
  int v31; 
  const char *v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  cg_t *v37; 
  const char *ColumnValueForRow; 
  const char *v40; 
  int v41; 
  int v42; 
  int v43; 
  const char *v44; 
  unsigned int v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  int v49; 
  const char *v50; 
  unsigned int v51; 
  const char *v52; 
  const char *v53; 
  int v54; 
  bool v55; 
  PartyData *GameParty; 
  const char *v57; 
  int ControllerFromClient; 
  const char *v59; 
  int v60; 
  int v61; 
  int v62; 
  const char *v63; 
  unsigned __int64 keyByte16; 
  dvar_t *outDvar[2]; 
  __int64 v66; 
  char hudElemString[1032]; 

  v66 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2186, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  v4 = Cmd_Argv(0);
  v5 = j_va("DeployServerCommandString %c", (unsigned int)*v4);
  Sys_ProfBeginNamedEvent(0xFF008008, v5);
  if ( !CG_ServerCmd_SingleCharacterCmd(localClientNum, *v4) )
  {
    switch ( *v4 )
    {
      case 0:
        break;
      case 0x23:
        v55 = Cmd_ArgInt(1) != 0;
        GameParty = Live_GetGameParty();
        Party_SetInviteJoinsDisabledForNoJIP(GameParty, v55);
        break;
      case 0x2D:
        if ( Cmd_Argc() == 2 )
        {
          v57 = Cmd_Argv(1);
          ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
          *(GamerProfileData *)outDvar = *GamerProfile_GetDataByName((GamerProfileData *)outDvar, ControllerFromClient, v57);
          switch ( LODWORD(outDvar[0]) )
          {
            case 1:
            case 2:
              CG_ServerCmd_NotifyServer(localClientNum, "gamerprofile_request", LOBYTE(outDvar[1]));
              break;
            case 3:
              CG_ServerCmd_NotifyServer(localClientNum, "gamerprofile_request", SLOWORD(outDvar[1]));
              break;
            case 4:
            case 8:
              CG_ServerCmd_NotifyServer(localClientNum, "gamerprofile_request", (const int)outDvar[1]);
              break;
            case 5:
            case 6:
              Com_PrintError(14, "ERROR: CG_ServerCmdMP_GetProfileValue : Gamerprofile type not handled by CG_ServerCmdMP_GetProfileValue\n");
              break;
            case 7:
              Com_PrintError(14, "ERROR: CG_ServerCmdMP_GetProfileValue : Cannot get buffer from profile\n");
              break;
            default:
              Com_PrintError(14, "ERROR: CG_ServerCmdMP_GetProfileValue : Invalid profile data for CG_ServerCmdMP_GetProfileValue\n");
              break;
          }
        }
        else
        {
          Com_PrintError(14, "ERROR: CG_ServerCmdMP_GetProfileValue : bad params\n");
        }
        break;
      case 0x32:
        v32 = Cmd_Argv(1);
        v33 = CL_Mgr_GetControllerFromClient(localClientNum);
        Live_GiveAchievement(v33, v32);
        break;
      case 0x33:
        v43 = Cmd_ArgInt(2);
        v44 = Cmd_Argv(1);
        v45 = 0;
        if ( v43 )
          v45 = 16;
        R_Cinematic_StartPlayback(v44, v45, 0);
        break;
      case 0x34:
        R_Cinematic_StopPlayback(0);
        break;
      case 0x35:
        v52 = Cmd_Argv(1);
        if ( !R_Cinematic_IsStartedOrPendingStart() )
          R_Cinematic_StartPlayback(v52, 2u, 0);
        break;
      case 0x3D:
        v46 = Cmd_ArgUInt64(5);
        v47 = Cmd_ArgUInt64(4);
        v48 = Cmd_ArgUInt64(3);
        v49 = Cmd_ArgInt(2);
        v50 = Cmd_Argv(1);
        v51 = 0;
        if ( v49 )
          v51 = 16;
        R_Cinematic_StartEncryptedPlayback(v50, v51, 0, v48, v47, v46);
        break;
      case 0x46:
        CG_LatencyTestMP_DeployServerCommandString(localClientNum);
        break;
      case 0x48:
        v29 = Cmd_ArgInt(2);
        v30 = Cmd_ArgInt(1);
        PlayerCards_SetCachedPlayerData(localClientNum, v30, v29);
        break;
      case 0x49:
        v31 = CL_Mgr_GetControllerFromClient(localClientNum);
        if ( !LB_UploadPlayerData(v31) )
          Com_PrintError(22, "there was an error uploading player stats for local client %i\n", (unsigned int)localClientNum);
        break;
      case 0x54:
        v16 = Cmd_ArgInt(2);
        v17 = Cmd_Argv(1);
        CG_ServerCmdMP_Chat(localClientNum, v17, 0, v16);
        break;
      case 0x55:
        v18 = Cmd_ArgInt(2);
        v19 = Cmd_Argv(1);
        CG_ServerCmdMP_Chat(localClientNum, v19, 1, v18);
        break;
      case 0x57:
        if ( Cmd_Argc() == 3 )
        {
          v53 = Cmd_Argv(2);
          v54 = Cmd_ArgInt(1);
          CG_SeverCmdMP_ATClientDebugState(localClientNum, v54, v53);
        }
        break;
      case 0x58:
        v41 = Cmd_ArgInt(2);
        v42 = Cmd_ArgInt(1);
        CG_ServerCmdMP_ParsePartyBackoutCommand(localClientNum, v42, v41);
        break;
      case 0x63:
        v12 = Cmd_Argv(1);
        v13 = "announcement message";
        goto LABEL_28;
      case 0x64:
        CG_ServerCmdMP_ConfigStringModified(localClientNum);
        break;
      case 0x65:
        v14 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v14, "game message", hudElemString, 1024);
        CG_Utils_GameMessage(localClientNum, hudElemString, 0);
        Com_Printf(14, "Server Print: %s\n", hudElemString);
        break;
      case 0x66:
        v15 = Cmd_Argv(1);
        CG_TranslateHudElemMessage(localClientNum, v15, "game message", hudElemString, 1024);
        CG_Utils_GameMessage(localClientNum, hudElemString, 0);
        Com_Printf(14, "Server Game Message: %s\n", hudElemString);
        break;
      case 0x67:
        v12 = Cmd_Argv(1);
        v13 = "bold game message";
LABEL_28:
        CG_TranslateHudElemMessage(localClientNum, v12, v13, hudElemString, 1024);
        CG_Utils_BoldGameMessage(localClientNum, hudElemString, 0);
        break;
      case 0x68:
        if ( Cmd_Argc() == 2 )
        {
          v26 = Cmd_ArgInt(1);
          v27 = v26;
          if ( v26 - 1 > 0x7FFE )
          {
            Com_PrintError(9, "ERROR: CG_ServerCmdMP_LocalSoundStop() called with index %i (should be in range[1,%i])\n", v26, 0x7FFFi64);
          }
          else
          {
            SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
            CgSoundSystem::StopClientSoundAliasByName(SoundSystem, v27);
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: CG_ServerCmdMP_LocalSoundStop(), should be called with 2 arguments.\n");
        }
        break;
      case 0x6A:
        CG_ClearBlur(localClientNum);
        break;
      case 0x6B:
        CG_ServerCmdMP_MapRestart(localClientNum, 1);
        break;
      case 0x6C:
        if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
        {
          v20 = Cmd_ArgInt(2);
          v21 = Cmd_ArgFloat(1);
          SND_FadeAllSounds(*(float *)&v21, v20);
        }
        break;
      case 0x6E:
        v22 = Cmd_Argc();
        if ( v22 == 2 )
        {
          v23 = Cmd_ArgInt(1);
          v24 = v23;
          if ( v23 - 1 > 0x7FFE )
          {
            Com_PrintError(9, "ERROR: CG_ServerCmdMP_LocalSoundPlay() called with index %i (should be in range[1,%i])\n", v23, 0x7FFFi64);
            CG_ServerCmdMP_DumpReliableCommands(localClientNum);
          }
          else
          {
            v25 = CgSoundSystem::GetSoundSystem(localClientNum);
            CgSoundSystem::PlayClientSoundAliasByName(v25, v24);
          }
        }
        else
        {
          Com_PrintError(9, "ERROR: CG_ServerCmdMP_LocalSoundPlay() called with %i args (should be 2). Sound notify not supported in MP\n", v22);
          CG_ServerCmdMP_DumpReliableCommands(localClientNum);
        }
        break;
      case 0x71:
        for ( i = 1; i < Cmd_Argc(); i += 2 )
        {
          v7 = Cmd_Argv(i + 1);
          v8 = Cmd_Argv(i);
          v9 = atoi(v8);
          if ( NetConstStrings_GetNetworkDvarAtIndex(v9, (const dvar_t **)outDvar) )
          {
            v10 = DVARSTR_cg_objectiveText;
            if ( !DVARSTR_cg_objectiveText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
              __debugbreak();
            v11 = outDvar[0];
            if ( !outDvar[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 552, ASSERT_TYPE_ASSERT, "(left)", (const char *)&queryFormat, "left") )
              __debugbreak();
            if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 553, ASSERT_TYPE_ASSERT, "(right)", (const char *)&queryFormat, "right") )
              __debugbreak();
            if ( v11->checksum == v10->checksum )
              Core_strcpy(LocalClientGlobals->objectiveText, 0x400ui64, v7);
            else
              Dvar_SetFromStringFromSource(outDvar[0], v7, DVAR_SOURCE_SERVERCMD);
          }
          else
          {
            Com_PrintWarning(14, "CG_SetClientDvarFromServer - Unknown dvar at index %i with value '%s'\n", v9, v7);
          }
        }
        break;
      case 0x75:
        v34 = Cmd_ArgInt(3);
        v35 = Cmd_ArgInt(2);
        v36 = Cmd_ArgInt(1);
        v37 = CG_GetLocalClientGlobals(localClientNum);
        if ( (unsigned int)v36 <= 4 )
        {
          if ( (unsigned int)v36 >= 4 )
          {
            LODWORD(keyByte16) = v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1746, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( 4 )", "slotIndex doesn't index SPLASH_SLOT_COUNT\n\t%i not in [0, %i)", keyByte16, 4) )
              __debugbreak();
          }
        }
        else
        {
          Com_PrintWarning(25, "Received invalid splash index '%i' on localClientNum %i. Using slot 0.\n", (unsigned int)v36, (unsigned int)localClientNum);
          v36 = 0;
        }
        StringTable_GetAsset("mp/splashTable.csv", (const StringTable **)outDvar);
        ColumnValueForRow = StringTable_GetColumnValueForRow((const StringTable *)outDvar[0], v35, 4);
        *(double *)&_XMM0 = atof(ColumnValueForRow);
        __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
        v37->splashes[v36].splashIndex = v35;
        v37->splashes[v36].splashDuration = (int)(float)(*(float *)&_XMM2 * 1000.0);
        v37->splashes[v36].optionalNumParam = v34;
        v37->splashes[v36].splashStartTime = v37->time;
        v40 = StringTable_GetColumnValueForRow((const StringTable *)outDvar[0], v35, 0);
        LODWORD(keyByte16) = localClientNum;
        Com_Printf(25, "Received Splash '%s' in slot %i for %f sec on localClientNum %i\n", v40, (unsigned int)v36, *(float *)&_XMM2, keyByte16);
        break;
      case 0x76:
        CG_ServerCmdMP_MapRestart(localClientNum, 0);
        break;
      default:
        v59 = Cmd_Argv(0);
        Com_Printf(14, "Unknown string client game command: %s\n", v59);
        v60 = Cmd_Argc();
        v61 = v60;
        if ( v60 > 1 )
        {
          Com_Printf(14, "Arguments(%i):", (unsigned int)(v60 - 1));
          v62 = 1;
          do
          {
            v63 = Cmd_Argv(v62);
            Com_Printf(14, " %s", v63);
            ++v62;
          }
          while ( v62 < v61 );
          Com_Printf(14, "\n");
        }
        break;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ServerCmdMP_DumpReliableCommands
==============
*/
void CG_ServerCmdMP_DumpReliableCommands(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClConnectionMP *ClientConnectionMP; 
  bool v3; 
  ClConnection **v4; 
  int v5; 
  float v6; 

  v1 = localClientNum;
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP(localClientNum);
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 138, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 139, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  v3 = ClConnection::ms_connections[v1] == NULL;
  v4 = &ClConnection::ms_connections[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 140, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  ClConnection::DumpReliableCommands(ClientConnectionMP, (const ClConnectionData *)&(*v4)[1]);
}

/*
==============
CG_ServerCmdMP_EmissiveBlendCommand
==============
*/
void CG_ServerCmdMP_EmissiveBlendCommand(const LocalClientNum_t localClientNum, msg_t *msg, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int Byte; 
  centity_t *Entity; 
  float v11; 
  int UnsignedShort; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  CgGlobalsMP *v17; 
  characterInfo_t *CharacterInfo; 
  const characterInfo_t *v19; 
  double v20; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1771, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  Byte = MSG_ReadByte(msg);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( Byte >= (int)ComCharacterLimits::ms_gameData.m_characterCount || msg->overflowed )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EA280, 452i64, (unsigned int)Byte, a5, a6, a7);
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, Byte);
    if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x11u) )
    {
      v11 = (float)MSG_ReadByte(msg) * 0.0039215689;
      if ( msg->overflowed )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EA2F0, 453i64, v11);
      }
      else
      {
        UnsignedShort = MSG_ReadUnsignedShort(msg);
        v13 = truncate_cast<unsigned short,int>(UnsignedShort);
        v14 = v13;
        if ( msg->overflowed )
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EA320, 454i64, v13);
        }
        else
        {
          LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
          LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
          v17 = (CgGlobalsMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( v17->IsMP(v17) )
            CharacterInfo = CgGlobalsMP::GetCharacterInfo(v17, Byte);
          else
            CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v17, Byte);
          v19 = CharacterInfo;
          if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          v20 = CG_PlayersMP_LerpEmission(localClientNum, v19);
          v19->emissiveBlendStartStrength = *(float *)&v20;
          v19->emissiveBlendStart = LocalClientGlobals->time;
          v19->emissiveBlendDuration = v14;
          v19->emissiveBlendTargetStrength = v11;
        }
      }
    }
  }
}

/*
==============
CG_ServerCmdMP_ExecuteNewServerCommands
==============
*/
void CG_ServerCmdMP_ExecuteNewServerCommands(LocalClientNum_t localClientNum, int lastSequenceExecuted, int latestSequence)
{
  int nesting; 
  int v5; 
  cg_t **v7; 
  __int64 v8; 
  __int64 v9; 

  if ( lastSequenceExecuted < latestSequence )
  {
    nesting = cmd_args.nesting;
    v5 = lastSequenceExecuted;
    v7 = &cg_t::ms_cgArray[localClientNum];
    do
    {
      if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
      {
        LODWORD(v9) = cg_t::ms_allocatedCount;
        LODWORD(v8) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( !*v7 )
      {
        LODWORD(v9) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v9) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v9) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v9) )
          __debugbreak();
      }
      if ( !(*v7)->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2646, ASSERT_TYPE_ASSERT, "(CG_GetLocalClientGlobals( localClientNum )->nextSnap)", (const char *)&queryFormat, "CG_GetLocalClientGlobals( localClientNum )->nextSnap") )
        __debugbreak();
      CG_ServerCmdMP_ServerCommand(localClientNum, ++v5);
      if ( nesting != cmd_args.nesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 2652, ASSERT_TYPE_ASSERT, "(nesting == cmd_args.nesting)", (const char *)&queryFormat, "nesting == cmd_args.nesting") )
        __debugbreak();
    }
    while ( v5 < latestSequence );
  }
}

/*
==============
CG_ServerCmdMP_MapRestart
==============
*/
void CG_ServerCmdMP_MapRestart(LocalClientNum_t localClientNum, int savepersist)
{
  __int64 v2; 
  int v3; 
  cg_t *LocalClientGlobals; 
  const CgSnapshotMP *PrevSnap; 
  const CgSnapshotMP *NextSnap; 
  int v7; 
  const CgSnapshotMP *v8; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *v11; 
  CgClientSideEffectsSystemMP *v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int HaveAllClientsReceivedMapRestartCmd; 

  v2 = localClientNum;
  v3 = savepersist;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1204, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  Com_Printf(14, "CG_ServerCmdMP_MapRestart()\n");
  LocalClientGlobals->lastHealthLerpDelay = 1;
  CG_InitLocalEntities((const LocalClientNum_t)v2);
  HaveAllClientsReceivedMapRestartCmd = CL_ServerCmdMP_HaveAllClientsReceivedMapRestartCmd((LocalClientNum_t)v2);
  CG_SoundEntity_Shutdown((LocalClientNum_t)v2);
  Physics_WaitForAllCommandsToFinish();
  CG_PlayersMP_WaitUpdateClientWeaponVisibility((const LocalClientNum_t)v2);
  FX_Dismemberment_Shutdown((LocalClientNum_t)v2);
  FX_WaitKillAllEffects((LocalClientNum_t)v2, 0);
  FX_ShutdownSystem((LocalClientNum_t)v2);
  DynEntCl_Shutdown((LocalClientNum_t)v2);
  ScriptableCl_Shutdown((const LocalClientNum_t)v2);
  CG_ClientModel_ShutdownClient((const LocalClientNum_t)v2);
  if ( CG_Cloth_Legs_IsInitialized((const LocalClientNum_t)v2) )
    CG_Cloth_Legs_Shutdown((const LocalClientNum_t)v2);
  CG_Main_FreePhysics((LocalClientNum_t)v2);
  CG_Main_FreeRagdolls((LocalClientNum_t)v2);
  CG_Main_FreeCloth((LocalClientNum_t)v2);
  CG_PlayersMP_ResetClientWeaponVisibility((const LocalClientNum_t)v2);
  CG_PlayersMP_ResetPlayerBrCircleEffects();
  if ( HaveAllClientsReceivedMapRestartCmd )
    CG_Glass_Shutdown();
  CG_SoundEntity_Init((LocalClientNum_t)v2);
  CG_ClientModel_InitClient((const LocalClientNum_t)v2);
  ScriptableCl_Init((const LocalClientNum_t)v2);
  DynEntCl_InitEntities((LocalClientNum_t)v2);
  R_InitPrimaryLights();
  R_LightTweak_Init();
  CG_InitLightUpdate((LocalClientNum_t)v2);
  FX_InitSystem((LocalClientNum_t)v2, cls.maxClients > 20);
  FX_Dismemberment_Shutdown((LocalClientNum_t)v2);
  FX_Dismemberment_Init((LocalClientNum_t)v2);
  PrevSnap = CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v2);
  if ( PrevSnap != CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1132, ASSERT_TYPE_ASSERT, "(CG_SnapshotMP_GetPrevSnap( localClientNum ) == CG_SnapshotMP_GetNextSnap( localClientNum ))", (const char *)&queryFormat, "CG_SnapshotMP_GetPrevSnap( localClientNum ) == CG_SnapshotMP_GetNextSnap( localClientNum )") )
    __debugbreak();
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v2);
  v7 = 0;
  v8 = NextSnap;
  if ( NextSnap->numEntities > 0 )
  {
    entities = NextSnap->entities;
    do
    {
      number = entities->number;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v14) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v14) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v13) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v2] )
      {
        LODWORD(v14) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v14) )
          __debugbreak();
      }
      v11 = CgEntitySystem::ms_entitySystemArray[v2];
      if ( (unsigned int)number >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned __int16)(v11->m_entities[number].nextState.eType - 8) <= 1u )
        v11->m_entities[number].pose.player.control = NULL;
      ++v7;
      ++entities;
    }
    while ( v7 < v8->numEntities );
    v3 = savepersist;
  }
  if ( HaveAllClientsReceivedMapRestartCmd )
    CG_Glass_Init(0);
  Mayhem_Shutdown();
  Mayhem_Init();
  CgVehicleSystemMP::InitGlobals();
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v14, 2, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v14) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v2] )
  {
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v14) )
      __debugbreak();
  }
  CgVehicleSystemMP::Init((CgVehicleSystemMP *)CgVehicleSystem::ms_vehicleSystemArray[v2]);
  CG_ServerCmd_VisionSetAllConfigStrings((LocalClientNum_t)v2);
  LocalClientGlobals->mapRestart = 1;
  SND_StopSounds(SND_KEEP_MUSIC);
  SND_SetMusicState((const char *)&queryFormat.fmt + 3);
  *(_QWORD *)&LocalClientGlobals->v_dmg_time = 0i64;
  memset_0(LocalClientGlobals->viewDamage, 0, sizeof(LocalClientGlobals->viewDamage));
  Dvar_SetBoolByName("LQTTNORNQT", 0);
  CL_SetStance((LocalClientNum_t)v2, CL_STANCE_STAND, 0);
  CL_SetADS((LocalClientNum_t)v2, 0);
  if ( !v3 )
  {
    memset_0(LocalClientGlobals->scores, 0, sizeof(LocalClientGlobals->scores));
    memset_0(LocalClientGlobals->teamScores, 0, sizeof(LocalClientGlobals->teamScores));
  }
  LocalClientGlobals->objectiveText[0] = 0;
  CL_CGameMP_SyncTimes((LocalClientNum_t)v2);
  CG_Rumble_StopAll((LocalClientNum_t)v2);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v16) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(v15) = 2;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v14, v15, v16) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v14) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v2] )
  {
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v14) )
      __debugbreak();
  }
  v12 = (CgClientSideEffectsSystemMP *)CgClientSideEffectsSystem::ms_cseSystemArray[v2];
  CgClientSideEffectsSystem::Shutdown(v12);
  CgClientSideEffectsSystemMP::Start(v12, 1);
  CG_CreateFx_OnMapRestart();
  CG_ShutdownClientSideTriggers((LocalClientNum_t)v2);
  CG_StartClientSideTriggers((LocalClientNum_t)v2);
  CG_PlayerCorpseMP_Init((LocalClientNum_t)v2);
}

/*
==============
CG_ServerCmdMP_ParseCodInfo
==============
*/
void CG_ServerCmdMP_ParseCodInfo(LocalClientNum_t localClientNum)
{
  unsigned int i; 
  const char *ConfigString; 
  dvar_t *outDvar; 

  if ( !CG_GetLocalClientStaticGlobals(localClientNum)->localServer )
  {
    for ( i = 0; i < 0x64; ++i )
    {
      if ( !NetConstStrings_GetCodInfoDvarAtIndex(i, (const dvar_t **)&outDvar) )
        break;
      ConfigString = CL_GetConfigString(i + 537);
      Dvar_SetFromStringFromSource(outDvar, ConfigString, DVAR_SOURCE_SERVERCMD);
    }
  }
}

/*
==============
CG_ServerCmdMP_ParseGameEndTime
==============
*/
void CG_ServerCmdMP_ParseGameEndTime(LocalClientNum_t localClientNum)
{
  cgs_t *LocalClientStaticGlobals; 
  const char *ConfigString; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  ConfigString = CL_GetConfigString(533);
  LocalClientStaticGlobals->gameEndTime = atoi(ConfigString);
}

/*
==============
CG_ServerCmdMP_ParsePartyBackoutCommand
==============
*/
void CG_ServerCmdMP_ParsePartyBackoutCommand(const LocalClientNum_t localClientNum, const int clientNum, const int playAgain)
{
  __int64 v3; 
  __int64 v6; 
  const PartyData *GameParty; 
  const XUID *Xuid; 
  CmdText *v9; 
  int v10; 
  __int64 cmdsize; 
  int v12; 
  scrContext_t *v13; 
  int ControllerFromClient; 
  const PartyData *PartyData; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  XUID result; 
  XUID playerXuid; 

  v3 = localClientNum;
  if ( (unsigned int)clientNum >= cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1885, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, cls.maxClients) )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  v6 = v3;
  if ( clientUIActives[v3].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1886, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  Com_Printf(14, "Received PartyBackoutCommand from game host for client %i\n", (unsigned int)clientNum);
  if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->clientNum != clientNum )
  {
    XUID::XUID(&playerXuid);
    if ( (unsigned int)clientNum >= cls.maxClients )
    {
      LODWORD(v18) = cls.maxClients;
      LODWORD(v16) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1868, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v16, v18) )
        __debugbreak();
    }
    GameParty = Live_GetGameParty();
    if ( Session_IsValid(GameParty->session) && Party_IsMemberRegistered(GameParty, clientNum) )
    {
      Xuid = Party_GetXuid(&result, GameParty, clientNum);
      XUID::operator=(&playerXuid, Xuid);
      if ( Party_IsPlayerOurPrivatePartyHost(playerXuid) )
      {
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v18) = 2;
          LODWORD(v16) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v18) )
            __debugbreak();
          LODWORD(v19) = 2;
          LODWORD(v17) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v19) )
            __debugbreak();
        }
        if ( clientUIActives[v6].frontEndSceneState[0] )
          goto LABEL_40;
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v18) = 2;
          LODWORD(v16) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v18) )
            __debugbreak();
        }
        if ( clientUIActives[v6].connectionState < CA_CONNECTED )
        {
LABEL_40:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1900, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectedToGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectedToGameServer( localClientNum )") )
            __debugbreak();
        }
        if ( playAgain )
        {
          v9 = &s_cmd_textArray[v3];
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
            __debugbreak();
          Sys_EnterCriticalSection(CRITSECT_CBUF);
          v10 = strlen_noncrt("playagain 1");
          cmdsize = v9->cmdsize;
          v12 = v10;
          if ( (int)cmdsize + v10 < v9->maxsize )
          {
            memcpy_noncrt(&v9->data[cmdsize], "playagain 1", v10 + 1);
            v9->cmdsize += v12;
            v13 = ScriptContext_Server();
            Scr_MonitorCommand(v13, "playagain 1");
          }
          else
          {
            Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "playagain 1");
          }
          Sys_LeaveCriticalSection(CRITSECT_CBUF);
        }
        else
        {
          Com_Printf(14, "Backing out of the game with our party host.\n");
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
          PartyData = Lobby_GetPartyData();
          playerXuid.m_id = (unsigned __int64)Party_GetMainActiveClient(PartyData, ControllerFromClient);
          Party_Backout((const PartyActiveClient *)&playerXuid);
        }
      }
    }
  }
}

/*
==============
CG_ServerCmdMP_ParsePlayerInfos
==============
*/
void CG_ServerCmdMP_ParsePlayerInfos(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  XUID *p_playerList; 
  __int64 v3; 
  PartyData *GameParty; 
  int RegisteredPlayerList; 
  unsigned int ControllerFromClient; 
  unsigned int v7; 
  int maxClients; 
  BG_SynchronizedPlayerInfo *PlayerInfo; 
  BG_SynchronizedPlayerInfo *v10; 
  int natType; 
  int MemberByXUID; 
  unsigned int v13; 
  unsigned __int64 v14; 
  int v15; 
  const char *v16; 
  const char *v17; 
  unsigned __int64 platformId; 
  int v19; 
  const char *String; 
  const char *v21; 
  const BG_SynchronizedPlayerInfo *v22; 
  PartyMember *Member; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const PartyData *PartyData; 
  XUID *v28; 
  __int64 v29; 
  unsigned int v30; 
  BG_SynchronizedPlayerInfo *v31; 
  const XUID *p_xuid; 
  int MemberByXUID_AllowNotPresent; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  int localControllerIndex; 
  int v38; 
  bdSecurityID outKid; 
  bdSecurityID v40; 
  bdSecurityID v41; 
  XUID playerList; 
  char str[24]; 
  char v44[24]; 

  v1 = localClientNum;
  p_playerList = &playerList;
  v3 = 200i64;
  do
  {
    XUID::XUID(p_playerList++);
    --v3;
  }
  while ( v3 );
  bdSecurityID::bdSecurityID(&v41);
  if ( !CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1)->localServer )
  {
    if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
      __debugbreak();
    if ( clientUIActives[v1].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 538, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tAccessing server session, must not be in frontend state", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
      __debugbreak();
    GameParty = Live_GetGameParty();
    if ( CL_MainMP_InParty(GameParty, (const LocalClientNum_t)v1) )
    {
      RegisteredPlayerList = Voice_GetRegisteredPlayerList(GameParty, &playerList);
      v38 = RegisteredPlayerList;
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
      localControllerIndex = ControllerFromClient;
      Com_Printf(14, "Parsing player infos from player infos for %i (%i).\n", (unsigned int)v1, ControllerFromClient);
      v7 = 0;
      maxClients = cls.maxClients;
      if ( cls.maxClients )
      {
        while ( 1 )
        {
          PlayerInfo = CL_PlayerInfosMP_GetPlayerInfo(v7);
          v10 = PlayerInfo;
          if ( PlayerInfo )
          {
            if ( XUID::IsValid(&PlayerInfo->xuid) )
            {
              if ( v10->localNetId >= 2u )
              {
                LODWORD(v36) = 2;
                LODWORD(v35) = v10->localNetId;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( playerInfo->localNetId ) < (unsigned)( NS_MAXCLIENTS )", "playerInfo->localNetId doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v35, v36) )
                  __debugbreak();
              }
              natType = v10->natType;
              if ( natType >= 1 )
              {
                if ( (unsigned int)(natType - 1) > 2 )
                {
                  LODWORD(v35) = v10->natType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 581, ASSERT_TYPE_ASSERT, "( ( playerInfo->natType > 0 && playerInfo->natType <= XONLINE_NAT_STRICT ) )", "( playerInfo->natType ) = %i", v35) )
                    __debugbreak();
                }
              }
              else
              {
                Com_Printf(14, "Received 0 natType from client %i. Setting to strict.\n", v7);
                if ( CL_Main_IsOnlineGame() )
                {
                  LODWORD(v36) = v10->natType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 578, ASSERT_TYPE_ASSERT, "(!CL_Main_IsOnlineGame( ))", "%s\n\t%i natType. Should not be unknown in online games", "!CL_Main_IsOnlineGame( )", v36) )
                    __debugbreak();
                }
                v10->natType = 3;
              }
              if ( CL_Main_IsOnlineGame() && PeerMesh_IsEnabled(GameParty) && XNADDR::IsNull(&v10->xnaddr) )
              {
                LODWORD(v36) = v7;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 586, ASSERT_TYPE_ASSERT, "(!playerInfo->xnaddr.IsNull())", "%s\n\tclientNum %i has a null xnaddr", "!playerInfo->xnaddr.IsNull()", v36) )
                  __debugbreak();
              }
              MemberByXUID = Party_FindMemberByXUID(GameParty, v10->xuid);
              v13 = MemberByXUID;
              if ( v7 != MemberByXUID )
              {
                if ( MemberByXUID == -1 || !Lobby_IsInLobby() )
                {
                  platformId = v10->platformId;
                  v19 = v10->natType;
                  String = XNADDR::GetString(&v10->xnaddr);
                  v21 = XUID::ToDevString(&v10->xuid);
                  LODWORD(v35) = v19;
                  Com_DPrintf(14, "Adding client %i with xuid %s, xnaddr %s, nat type %d, platformId %lli\n", v7, v21, String, v35, platformId);
                }
                else
                {
                  v14 = v10->platformId;
                  v15 = v10->natType;
                  v16 = XNADDR::GetString(&v10->xnaddr);
                  v17 = XUID::ToDevString(&v10->xuid);
                  LODWORD(v36) = v15;
                  Com_DPrintf(14, "Moving client %i to %i with xuid %s, xnaddr %s, nat type %d, platformId %lli\n", v13, v7, v17, v16, v36, v14);
                  if ( v13 >= cls.maxClients )
                  {
                    LODWORD(v36) = cls.maxClients;
                    LODWORD(v35) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 599, ASSERT_TYPE_ASSERT, "(unsigned)( foundClientNum ) < (unsigned)( cls.maxClients )", "foundClientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v35, v36) )
                      __debugbreak();
                  }
                  PartyClient_RemovePartyMember(GameParty, v13);
                }
                v22 = v10;
                ControllerFromClient = localControllerIndex;
                Party_RegisterPlayerJip(GameParty, localControllerIndex, v7, v22);
                goto LABEL_62;
              }
              if ( Lobby_IsInLobby() )
              {
                Member = Lobby_GetMember(v7);
                if ( Member->status != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 618, ASSERT_TYPE_ASSERT, "(member->status == PARTYSTATUS_PRESENT)", (const char *)&queryFormat, "member->status == PARTYSTATUS_PRESENT") )
                  __debugbreak();
                if ( !XUID::operator==(&Member->playerUID, &v10->xuid) )
                {
                  v24 = XUID::ToDevString(&v10->xuid);
                  v25 = XUID::ToDevString(&Member->playerUID);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 619, ASSERT_TYPE_ASSERT, "(member->playerUID == playerInfo->xuid)", "%s\n\t%s != %s", "member->playerUID == playerInfo->xuid", v25, v24) )
                    __debugbreak();
                }
                Member->natType = v10->natType;
                if ( *(_QWORD *)&Member->info.privatePartyId != *(_QWORD *)&v10->partyId )
                {
                  bdSecurityID::bdSecurityID(&outKid);
                  Party_GetOurPrivatePartyId(&outKid);
                  if ( Live_XUIDIsLocalPlayer(v10->xuid) && bdSecurityID::operator!=(&outKid, &v10->partyId) )
                  {
                    XNKIDToString(&v10->partyId, str, 21);
                    XNKIDToString(&outKid, v44, 21);
                    v26 = XUID::ToDevString(&v10->xuid);
                    Com_Printf(25, "Local player (%u, %s) private party id differs from the host's view: ours %s, host's %s\n", v7, v26, v44, str);
                  }
                  if ( Live_XUIDIsLocalPlayer(v10->xuid) && !bdSecurityID::operator==(&outKid, &v10->partyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 638, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( playerInfo->xuid ) || ( privatePartyId == playerInfo->partyId ))", "%s\n\tHost has the wrong information about our private party Id", "!Live_XUIDIsLocalPlayer( playerInfo->xuid ) || ( privatePartyId == playerInfo->partyId )") )
                    __debugbreak();
                  Member->info.privatePartyId = v10->partyId;
                  PartyData = Lobby_GetPartyData();
                  ControllerFromClient = localControllerIndex;
                  Party_CheckUpdatedPartyMemberPartyId(PartyData, localControllerIndex, v7);
                  bdSecurityID::~bdSecurityID(&outKid);
                  goto LABEL_62;
                }
                if ( Live_XUIDIsLocalPlayer(v10->xuid) )
                {
                  bdSecurityID::bdSecurityID(&v40);
                  Party_GetOurPrivatePartyId(&v40);
                  if ( bdSecurityID::operator==(&v40, &v10->partyId) )
                    Com_Printf(25, "Host has out of date information about our private party Id. He may not be up to date with our migration. This is normal if the party host just dropped.\n");
                  bdSecurityID::~bdSecurityID(&v40);
                }
              }
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 567, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
          {
            __debugbreak();
          }
          ControllerFromClient = localControllerIndex;
LABEL_62:
          ++v7;
          maxClients = cls.maxClients;
          if ( v7 >= cls.maxClients )
          {
            RegisteredPlayerList = v38;
            break;
          }
        }
      }
      if ( RegisteredPlayerList > 0 )
      {
        v28 = &playerList;
        v29 = (unsigned int)RegisteredPlayerList;
        while ( 1 )
        {
          v30 = 0;
          if ( maxClients )
          {
            do
            {
              v31 = CL_PlayerInfosMP_GetPlayerInfo(v30);
              if ( v31 )
              {
                p_xuid = &v31->xuid;
                if ( XUID::IsValid(&v31->xuid) && XUID::operator==(v28, p_xuid) )
                  goto LABEL_84;
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 668, ASSERT_TYPE_ASSERT, "(playerInfo)", (const char *)&queryFormat, "playerInfo") )
              {
                __debugbreak();
              }
              ++v30;
            }
            while ( v30 < cls.maxClients );
          }
          if ( !XUID::IsValid(v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 682, ASSERT_TYPE_ASSERT, "(currentXuids[playerIndex].IsValid())", (const char *)&queryFormat, "currentXuids[playerIndex].IsValid()") )
            __debugbreak();
          MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(GameParty, (const XUID)v28->m_id);
          v34 = MemberByXUID_AllowNotPresent;
          if ( MemberByXUID_AllowNotPresent >= 0 )
          {
            Com_Printf(14, "Removing client %i from lobby because they no longer exist in our playerinfos\n", (unsigned int)MemberByXUID_AllowNotPresent);
            PartyClient_RemovePartyMember(GameParty, v34);
          }
          if ( Party_IsGameLobby(GameParty) )
          {
            if ( Live_XUIDIsLocalPlayer((const XUID)v28->m_id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 694, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( currentXuids[playerIndex] ))", (const char *)&queryFormat, "!Live_XUIDIsLocalPlayer( currentXuids[playerIndex] )") )
              __debugbreak();
            if ( !Live_XUIDIsLocalPlayer((const XUID)v28->m_id) )
              Party_LostPrivatePartyPlayer(ControllerFromClient, (XUID)v28->m_id, 0, 1);
          }
LABEL_84:
          ++v28;
          if ( !--v29 )
            break;
          maxClients = cls.maxClients;
        }
      }
    }
  }
  bdSecurityID::~bdSecurityID(&v41);
}

/*
==============
CG_ServerCmdMP_ParseServerInfo
==============
*/
void CG_ServerCmdMP_ParseServerInfo(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_ServerCmdMP_ParseTimeScale
==============
*/
void CG_ServerCmdMP_ParseTimeScale(const LocalClientNum_t localClientNum)
{
  const char *ConfigString; 
  float v3; 
  float v4; 
  float v5; 
  int time; 
  int v7; 
  float v8; 
  float v9; 
  unsigned int v10; 
  float v11; 
  unsigned int v12; 
  float v13; 

  ConfigString = CL_GetConfigString(535);
  j_sscanf(ConfigString, "%i %i %g %g", &v10, &v12, &v11, &v13);
  Com_Printf(16, "CS_TIMESCALE: %s\n", ConfigString);
  v3 = (float)(int)v12;
  if ( v3 <= 0.0 )
  {
    Com_SetSlowMotion(v11, v13, 0);
    return;
  }
  v4 = (float)(v13 - v11) / v3;
  v5 = (float)((float)((float)(v4 * 0.5) * v3) * v3) + (float)((float)(v3 * v11) + _mm_cvtepi32_ps((__m128i)v10).m128_f32[0]);
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( time > (int)v10 )
  {
    if ( (float)time >= v5 )
    {
      v7 = v12;
    }
    else
    {
      v8 = (float)(v11 * v11) - (float)((float)((float)(int)(v10 - time) * v4) * 2.0);
      if ( v8 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 752, ASSERT_TYPE_ASSERT, "(dSq >= 0)", (const char *)&queryFormat, "dSq >= 0") )
        __debugbreak();
      v7 = (int)(float)((float)(fsqrt(v8) - v11) / v4);
    }
    if ( v7 < 0 )
      goto LABEL_13;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 > (int)v12 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 759, ASSERT_TYPE_ASSERT, "(t >= 0 && t <= duration)", (const char *)&queryFormat, "t >= 0 && t <= duration") )
      __debugbreak();
  }
  v9 = _mm_cvtepi32_ps((__m128i)(unsigned int)v7).m128_f32[0] / _mm_cvtepi32_ps((__m128i)v12).m128_f32[0];
  v11 = (float)((float)(1.0 - v9) * v11) + (float)(v9 * v13);
  Com_SetSlowMotion(v11, v13, v12 - v7);
}

/*
==============
CG_ServerCmdMP_PodiumDataCommand
==============
*/
void CG_ServerCmdMP_PodiumDataCommand(const LocalClientNum_t localClientNum, msg_t *msg)
{
  LocalClientNum_t v3; 
  PodiumData *p_data; 
  __int64 v5; 
  int Byte; 
  __int64 v7; 
  __int64 v8; 
  int *p_headIndex; 
  __int64 Bits; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  Weapon *v14; 
  __int128 v15; 
  double v16; 
  int v17; 
  int v18; 
  Weapon result; 
  PodiumData data; 

  v3 = localClientNum;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1821, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  p_data = &data;
  v5 = 6i64;
  do
  {
    PodiumData::PodiumData(p_data++);
    --v5;
  }
  while ( v5 );
  memset_0(&data, 0, 0x300ui64);
  Byte = MSG_ReadByte(msg);
  v7 = Byte;
  v18 = Byte;
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1828, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
    __debugbreak();
  if ( (int)v7 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1829, ASSERT_TYPE_ASSERT, "(count <= 6)", (const char *)&queryFormat, "count <= MAX_PODIUM_CLIENTS") )
    __debugbreak();
  v8 = v7;
  if ( (int)v7 > 0 )
  {
    p_headIndex = &data.headIndex;
    do
    {
      Bits = MSG_ReadBits(msg, 9u);
      if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
        __debugbreak();
      v11 = msg->overflowed == 0;
      *(p_headIndex - 1) = Bits;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1836, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      v12 = MSG_ReadBits(msg, 9u);
      if ( (unsigned __int64)(v12 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v12, "signed", v12) )
        __debugbreak();
      v11 = msg->overflowed == 0;
      *p_headIndex = v12;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1839, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      v13 = MSG_ReadBits(msg, 9u);
      if ( (unsigned __int64)(v13 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v13, "signed", v13) )
        __debugbreak();
      v11 = msg->overflowed == 0;
      p_headIndex[1] = v13;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1842, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      v14 = MSG_ReadWeapon(&result, msg);
      v11 = msg->overflowed == 0;
      v15 = *(_OWORD *)&v14->attachmentVariationIndices[5];
      v16 = *(double *)&v14->attachmentVariationIndices[21];
      v17 = *(_DWORD *)&v14->weaponCamo;
      *(__m256i *)(p_headIndex + 2) = *(__m256i *)&v14->weaponIdx;
      *(_OWORD *)(p_headIndex + 10) = v15;
      *((double *)p_headIndex + 7) = v16;
      p_headIndex[16] = v17;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      MSG_ReadString(msg, (char *)p_headIndex + 68, 0xCu);
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1848, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      MSG_ReadString(msg, (char *)p_headIndex + 80, 0x24u);
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1851, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      XUID::Deserialize((XUID *)(p_headIndex - 3), msg);
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1854, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
        __debugbreak();
      p_headIndex += 32;
      --v8;
    }
    while ( v8 );
    LODWORD(v7) = v18;
    v3 = localClientNum;
  }
  LUI_DataBindingMP_PushBroshotData(v3, &data, v7);
}

/*
==============
CG_ServerCmdMP_PrintStatsCommand
==============
*/
void CG_ServerCmdMP_PrintStatsCommand(msg_t *msg)
{
  unsigned int Short; 
  __int64 Byte; 
  __int64 v4; 
  unsigned int v5; 

  MSG_BeginReading(msg);
  MSG_ReadByte(msg);
  while ( !msg->overflowed )
  {
    if ( msg->readcount == msg->cursize + msg->splitSize )
      break;
    Short = MSG_ReadShort(msg);
    Byte = (unsigned int)MSG_ReadByte(msg);
    Com_Printf(14, "[%i %i ", Short, Byte);
    if ( (int)Byte > 0 )
    {
      v4 = (unsigned int)Byte;
      do
      {
        v5 = MSG_ReadByte(msg);
        Com_Printf(14, "%x ", v5);
        --v4;
      }
      while ( v4 );
    }
    Com_Printf(14, "] ");
  }
  Com_Printf(14, "CL STATS\n");
}

/*
==============
CG_ServerCmdMP_ReadPlayerPersistentDataChanges
==============
*/
void CG_ServerCmdMP_ReadPlayerPersistentDataChanges(LocalClientNum_t localClientNum, msg_t *msg)
{
  __int64 v2; 
  unsigned int v4; 
  int v5; 
  unsigned int RankForXpMP; 
  char ServerWriteableGroupBitmask; 
  int Byte; 
  char v9; 
  int v10; 
  unsigned int Long; 
  __int64 v12; 
  int v13; 
  size_t v14; 
  int v15; 
  unsigned int StatsGroupByByteOffset; 
  int v17; 
  StatsGroup v18; 
  const unsigned __int8 *Buffer; 
  DDLContext *DDLContext; 
  StatsSource v21; 
  int v22; 
  const unsigned __int8 *v23; 
  int v24; 
  int v25; 
  int v26; 
  StatsSource ActiveStatsSource; 
  char *fmt; 
  __int64 statsGroup; 
  __int64 statsSource; 
  StatsSource statsSourcea; 
  int i; 
  int XpMP; 
  unsigned int v34; 
  unsigned __int8 *StatsBuffer; 
  size_t Size; 
  bool v38; 
  int controllerIndex; 

  v2 = localClientNum;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1534, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(statsGroup) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", statsGroup, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v2].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1535, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tShould not send this packet for the frontend", "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( LiveStorage_PersistentDataEnabled() )
  {
    if ( CL_Demo_IsPlayingServer((LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1541, ASSERT_TYPE_ASSERT, "(!CL_Demo_IsPlayingServer( localClientNum ))", "%s\n\tLiveStorage_PersistentDataEnabled should be false when there is a demo playing", "!CL_Demo_IsPlayingServer( localClientNum )") )
      __debugbreak();
    controllerIndex = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    v4 = controllerIndex;
    StatsBuffer = LiveStorage_GetStatsBuffer(controllerIndex);
    if ( !StatsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1547, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
      __debugbreak();
    Size = LiveStorage_GetStatsBufferSize(controllerIndex);
    memcpy_0(g_statsBackup, StatsBuffer, Size);
    XpMP = CL_PlayerData_GetXpMP(controllerIndex);
    v5 = XpMP;
    RankForXpMP = Com_GetRankForXpMP(XpMP);
    v34 = RankForXpMP;
    ServerWriteableGroupBitmask = Com_PlayerData_GetServerWriteableGroupBitmask();
    Byte = MSG_ReadByte(msg);
    v9 = Byte;
    if ( (Byte < 0 || (unsigned int)Byte > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)Byte, "signed", Byte) )
      __debugbreak();
    v38 = v9 == (char)CG_EditablePlayerData_GetCurrentVersion((const LocalClientNum_t)v2);
    if ( msg->readcount == msg->splitSize + msg->cursize )
    {
LABEL_42:
      if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1693, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
        __debugbreak();
      v24 = Com_GetMaxXPMP() - 1;
      v25 = CL_PlayerData_GetXpMP(v4);
      v26 = Com_GetRankForXpMP(v25);
      if ( v5 <= v24 )
        v24 = v5;
      if ( v26 != RankForXpMP )
      {
        LODWORD(statsSource) = v25;
        LODWORD(statsGroup) = v24;
        LODWORD(fmt) = v26;
        Com_Printf(14, "Controller %i rank changed from %i to %i. XP changed from %i to %i.\n", v4, RankForXpMP, fmt, statsGroup, statsSource);
        CG_ServerCmdMP_PrintStatsCommand(msg);
      }
      if ( v25 < v24 && Dvar_GetBool_Internal_DebugName(DVARBOOL_xp_dec_dc, "xp_dec_dc") )
      {
        ActiveStatsSource = LiveStorage_GetActiveStatsSource(v4);
        LiveStorage_DiscardStats(v4, ActiveStatsSource);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_ANTICHEAT_t)128, NULL);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144009380);
      }
    }
    else
    {
      v10 = ServerWriteableGroupBitmask;
      for ( i = ServerWriteableGroupBitmask; ; v10 = i )
      {
        Long = MSG_ReadLong(msg);
        v12 = Long;
        if ( Long >= 0x1046C || msg->overflowed )
        {
          CG_ServerCmdMP_PrintStatsCommand(msg);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441E9ED0, 449i64, (unsigned int)v12);
        }
        v13 = MSG_ReadByte(msg);
        v14 = v13;
        v15 = v13 + v12;
        if ( (unsigned int)(v13 + v12) > 0x1046C || msg->overflowed )
        {
          CG_ServerCmdMP_PrintStatsCommand(msg);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441E9F40, 450i64, (unsigned int)v14);
        }
        StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(v12);
        if ( ((((1 << Com_PlayerData_FindStatsGroupByByteOffset(v15 - 1)) & v10) != 0) & _bittest(&v10, StatsGroupByByteOffset)) == 0 )
          break;
        v17 = 66668 - v12;
        MSG_ReadData(msg, v14, &StatsBuffer[v12], 66668 - v12);
        CL_PlayerData_SetStatsBlobDirty(v4, v12, v14);
        if ( msg->overflowed )
        {
          CG_ServerCmdMP_PrintStatsCommand(msg);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EA020, 451i64, (unsigned int)v14);
        }
        if ( v38 )
        {
          v18 = Com_PlayerData_FindStatsGroupByByteOffset(v12);
          if ( v18 == Com_PlayerData_GetLoadoutStatsGroupForGameMode() )
          {
            Buffer = CG_EditablePlayerdata_GetBuffer((const LocalClientNum_t)v2);
            DDLContext = CG_EditablePlayerData_GetDDLContext((const LocalClientNum_t)v2, v18);
            v21 = LiveStorage_GetActiveStatsSource(v4);
            Com_LocallyUnObfuscateStatsGroupRange(controllerIndex, v12, &Buffer[v12], v14, DDLContext, v18, v21);
            v22 = memcmp_0(&Buffer[v12], &StatsBuffer[v12], v14);
            statsSourcea = v21;
            v4 = controllerIndex;
            v23 = &Buffer[v12];
            LOBYTE(Buffer) = v22 == 0;
            Com_LocallyObfuscateStatsGroupRange(controllerIndex, v12, v23, v14, DDLContext, v18, statsSourcea);
            if ( !(_BYTE)Buffer )
            {
              memcpy_0(StatsBuffer, g_statsBackup, Size);
              LiveAntiCheat_ReportServerForWriteProtectionInfraction(controllerIndex);
              Com_PrintError(14, "Server attempting to write unexpected data to persistent stats\n");
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)"PLATFORM/DISCONNECTED_FROM_SERVER");
              return;
            }
            LODWORD(v2) = localClientNum;
          }
        }
        if ( (int)v14 < v17 )
          v17 = v14;
        LiveStorage_LocallyObfuscateStatsGroupRange(v4, v12, &StatsBuffer[v12], v17);
        LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite(v4, v12, v14);
        if ( msg->readcount == msg->splitSize + msg->cursize )
        {
          v5 = XpMP;
          RankForXpMP = v34;
          goto LABEL_42;
        }
      }
      Com_Printf(14, "Server tried to perform an illegal player stats modification.  Ignoring request.\n");
      LiveAntiCheat_ReportServerForWriteProtectionInfraction(v4);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)"PLATFORM/DISCONNECTED_FROM_SERVER");
    }
  }
}

/*
==============
CG_ServerCmdMP_ServerCommand
==============
*/
void CG_ServerCmdMP_ServerCommand(LocalClientNum_t localClientNum, int serverCommandNumber, double a3)
{
  __int64 v4; 
  bool IsPlayingAny; 
  ClConnectionMP *ClientConnectionMP; 
  __int64 v7; 
  __int64 serverCommandSequence; 
  unsigned int offset; 
  unsigned __int16 size; 
  __int64 v11; 
  const char *v12; 
  const dvar_t *v13; 
  char v14; 
  const char *v15; 
  ClActiveClient **v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  const char *v20; 
  ClConfigStringsMP *ClConfigStringsMP; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  v4 = localClientNum;
  IsPlayingAny = CL_Demo_IsPlayingAny(localClientNum);
  ClientConnectionMP = ClConnectionMP::GetClientConnectionMP((const LocalClientNum_t)v4);
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 157, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  v7 = serverCommandNumber & 0x1FF;
  serverCommandSequence = (unsigned int)ClientConnectionMP->m_connectionData.serverCommandSequence;
  if ( serverCommandNumber <= (int)serverCommandSequence - 512 )
  {
    if ( IsPlayingAny )
      return;
    LODWORD(fmt) = 512;
    Com_Printf(14, "CG Server Commands: Overflowed sequence: %i <= %i - %i\n", (unsigned int)serverCommandNumber, serverCommandSequence, fmt);
    Com_Printf(14, "serverCommandNumber: %d\n", serverCommandNumber & 0x1FF);
    CG_ServerCmdMP_DumpReliableCommands((LocalClientNum_t)v4);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EAA50);
  }
  offset = ClientConnectionMP->m_connectionData.serverReliableCommands.m_entries[v7].offset;
  if ( ClientConnectionMP->m_connectionData.serverReliableCommands.m_bufferNextIndex - offset <= 0x20000 && (size = ClientConnectionMP->m_connectionData.serverReliableCommands.m_entries[v7].size) != 0 )
  {
    v11 = offset & 0x1FFFF;
    if ( (unsigned int)v11 + size > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v11 + size, 0x20000) )
      __debugbreak();
    v12 = (const char *)&ClientConnectionMP->m_connectionData.serverReliableCommands.m_buffer[v11];
  }
  else
  {
    v12 = NULL;
    if ( IsPlayingAny )
      return;
    Com_Printf(14, "CG Server Commands: Overflowed buffer\n");
    Com_Printf(14, "serverCommandNumber: %d\n", serverCommandNumber & 0x1FF);
    CG_ServerCmdMP_DumpReliableCommands((LocalClientNum_t)v4);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EAAA8);
  }
  if ( serverCommandNumber > ClientConnectionMP->m_connectionData.serverCommandSequence )
  {
    if ( IsPlayingAny )
      return;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EAAD0);
  }
  ClientConnectionMP->m_connectionData.lastExecutedServerCommand = serverCommandNumber;
  v13 = DVARBOOL_cl_showServerCommands;
  if ( !DVARBOOL_cl_showServerCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showServerCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    Com_DPrintf(14, "serverCommand: %i : %s\n", (unsigned int)serverCommandNumber, v12);
  v14 = *v12;
  v15 = j_va("CG_ServerCmdMP_ServerCommand %c", (unsigned int)*v12);
  Sys_ProfBeginNamedEvent(0xFF556B2F, v15);
  if ( v14 == 89 )
  {
    CG_ServerCmdMP_DeployServerCommandBinary((LocalClientNum_t)v4, (const unsigned __int8 *)v12, a3);
  }
  else
  {
    Cmd_TokenizeString(v12);
    switch ( v14 )
    {
      case 'd':
        Cmd_EndTokenizedString();
        Cmd_TokenizeStringWithLimit(v12, 3);
        v18 = Cmd_ArgInt(1);
        v19 = v18;
        if ( v18 >= 0x2FE )
        {
          Com_PrintError(14, "Updating ConfigString index %i is out of bounds.\n", v18);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EABA0, 455i64, v19);
        }
        v20 = Cmd_Argv(2);
        ClConfigStringsMP = ClConfigStringsMP::GetClConfigStringsMP();
        ClConfigStringsMP::ConfigStringModified(ClConfigStringsMP, (LocalClientNum_t)v4, v19, v20);
        break;
      case 'k':
        goto LABEL_28;
      case 'r':
        if ( !IsPlayingAny )
        {
          if ( Cmd_Argc() >= 2 )
          {
            v17 = Cmd_Argv(1);
            CL_MainMP_DisconnectError((const LocalClientNum_t)v4, v17, "EXE/SERVER_DISCONNECTED_UNKNOWN");
          }
          else
          {
            OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GAME_t)4, NULL);
            Com_Error_impl(ERR_SERVERDISCONNECT, (const ObfuscateErrorText)&stru_144009360);
          }
        }
        break;
      case 'v':
LABEL_28:
        Con_ClearNotify((LocalClientNum_t)v4);
        if ( (unsigned int)v4 >= LODWORD(cl_maxLocalClients) )
        {
          *(float *)&v24 = cl_maxLocalClients;
          LODWORD(v23) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
          __debugbreak();
        v16 = &ClActiveClient::ms_activeClients[v4];
        if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
          __debugbreak();
        memset_0((*v16)->cmds, 0, sizeof((*v16)->cmds));
        if ( ClientConnectionMP->m_packetBackupCount <= 0 )
        {
          LODWORD(v25) = ClientConnectionMP->m_packetBackupCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 207, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", v25, 0i64) )
            __debugbreak();
        }
        if ( !ClientConnectionMP->m_packetBackupData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 208, ASSERT_TYPE_ASSERT, "(m_packetBackupData != nullptr)", (const char *)&queryFormat, "m_packetBackupData != nullptr") )
          __debugbreak();
        memset_0(ClientConnectionMP->m_packetBackupData, 0, 16i64 * ClientConnectionMP->m_packetBackupCount);
        CG_ServerCmdMP_DeployServerCommandString((LocalClientNum_t)v4);
        Cmd_EndTokenizedString();
        goto LABEL_54;
    }
    CG_ServerCmdMP_DeployServerCommandString((LocalClientNum_t)v4);
    Cmd_EndTokenizedString();
  }
LABEL_54:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ServerCmdMP_SetConfigValues
==============
*/
void CG_ServerCmdMP_SetConfigValues(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  const char *ConfigString; 
  const char *v4; 
  cgs_t *LocalClientStaticGlobals; 
  const char *v6; 
  const char *v7; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  CL_ParseMP_ParseMapCenter(localClientNum);
  ConfigString = CL_GetConfigString(531);
  LocalClientGlobals->teamScores[1] = atoi(ConfigString);
  v4 = CL_GetConfigString(532);
  LocalClientGlobals->teamScores[2] = atoi(v4);
  memset_0(LocalClientGlobals->statusIconCache, 0, sizeof(LocalClientGlobals->statusIconCache));
  s_initializingLocalClientNum = localClientNum;
  NetConstStrings_CallForAllOfType(NETCONSTSTRINGTYPE_STATUSICON, 1u, CG_ServerCmdsMP_RegisterStatusIconlCallback);
  NetConstStrings_CallForAllOfType(NETCONSTSTRINGTYPE_MATERIAL, 1u, CG_ServerCmdsMP_RegisterServerMaterialCallback);
  NetConstStrings_CallForAllOfType(NETCONSTSTRINGTYPE_STICKER, 1u, CG_ServerCmdsMP_RegisterServerStickerMaterialCallback);
  s_initializingLocalClientNum = LOCAL_CLIENT_INVALID;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  v6 = CL_GetConfigString(533);
  LocalClientStaticGlobals->gameEndTime = atoi(v6);
  CG_ServerCmd_VisionSetAllConfigStrings(localClientNum);
  if ( LocalClientGlobals->m_useLeaderboards && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    v7 = CL_GetConfigString(13);
    LB_SetWriteLeaderboards(v7);
  }
  else
  {
    LB_ClearWriteLeaderboards();
  }
  CG_ServerCmdMP_ParseTimeScale(localClientNum);
}

/*
==============
CG_ServerCmdMP_SortByClient
==============
*/
bool CG_ServerCmdMP_SortByClient(const int client1, const int client2)
{
  bool IsGameClientLocal; 

  IsGameClientLocal = CL_Main_IsGameClientLocal(client1);
  if ( IsGameClientLocal == CL_Main_IsGameClientLocal(client2) )
    return client1 < client2;
  else
    return IsGameClientLocal;
}

/*
==============
CG_ServerCmdMP_UpdateScores
==============
*/
void CG_ServerCmdMP_UpdateScores(CgGlobalsMP *cgameGlob, CgSnapshotMP *snap)
{
  bool enabled; 
  unsigned int IndexByName; 
  unsigned int v6; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  CgStatic *LocalClientStatics; 
  __int64 numClients; 
  int v11; 
  __int64 v12; 
  clientState_t *clients; 
  std::_Ref_fn<CgClientScoreCompare> v14; 
  int *teamPlacement; 
  int *teamPlacements; 
  __int64 v17; 
  int *v18; 
  __int64 v19; 
  characterInfo_t *v20; 
  __int64 v21; 
  score_t *v22; 
  ScoreInfo *v23; 
  LastKnownClientInfo *v24; 
  __int64 status; 
  __int64 v26; 
  __int64 v27; 
  CgClientScoreCompare _Val; 
  ScoreboardInfo *p_scores; 
  CgSnapshotMP *v30; 
  CgStatic *v31; 
  __int64 v32; 
  CgClientScoreCompare v33; 
  int _First[202]; 

  v32 = -2i64;
  v30 = snap;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(snap)", (const char *)&queryFormat, "snap") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF1493, "Scoreboard");
  p_scores = &snap->scores;
  cgameGlob->teamScores[1] = snap->scores.teamScores[0];
  cgameGlob->teamScores[2] = snap->scores.teamScores[1];
  enabled = 0;
  IndexByName = BG_Omnvar_GetIndexByName("ui_scoreboard_freeze");
  v6 = IndexByName;
  if ( IndexByName != -1 )
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 316, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    Data = CG_Omnvar_GetData(cgameGlob->localClientNum, v6);
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 318, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type == OMNVAR_TYPE_BOOL )
      goto LABEL_24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      enabled = 0;
    else
LABEL_24:
      enabled = Data->current.enabled;
  }
  if ( !enabled || !cgameGlob->numScores )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)cgameGlob->localClientNum);
    v31 = LocalClientStatics;
    numClients = snap->numClients;
    v11 = 0;
    if ( numClients > 0 )
    {
      v12 = 0i64;
      clients = snap->clients;
      do
      {
        _First[v12++] = clients->clientIndex;
        ++clients;
      }
      while ( v12 < numClients );
    }
    if ( !cgameGlob->m_isMLGSpectator )
    {
      _Val.cgameGlob = cgameGlob;
      _Val.scoreboard = &snap->scores;
      v33 = _Val;
      v14._Fn = std::_Pass_fn<CgClientScoreCompare,0>(&_Val)._Fn;
      std::_Sort_unchecked<int *,std::_Ref_fn<CgClientScoreCompare>>(_First, &_First[numClients], numClients, (std::_Ref_fn<CgClientScoreCompare>)v14._Fn->cgameGlob);
    }
    memset_0(cgameGlob->scores, 0, sizeof(cgameGlob->scores));
    memset_0(cgameGlob->teamPlayers, 0, sizeof(cgameGlob->teamPlayers));
    teamPlacement = snap->scores.teamPlacement;
    teamPlacements = cgameGlob->teamPlacements;
    v17 = 6i64;
    do
    {
      *(_OWORD *)teamPlacements = *(_OWORD *)teamPlacement;
      *((_OWORD *)teamPlacements + 1) = *((_OWORD *)teamPlacement + 1);
      *((_OWORD *)teamPlacements + 2) = *((_OWORD *)teamPlacement + 2);
      *((_OWORD *)teamPlacements + 3) = *((_OWORD *)teamPlacement + 3);
      *((_OWORD *)teamPlacements + 4) = *((_OWORD *)teamPlacement + 4);
      *((_OWORD *)teamPlacements + 5) = *((_OWORD *)teamPlacement + 5);
      *((_OWORD *)teamPlacements + 6) = *((_OWORD *)teamPlacement + 6);
      teamPlacements += 32;
      *((_OWORD *)teamPlacements - 1) = *((_OWORD *)teamPlacement + 7);
      teamPlacement += 32;
      --v17;
    }
    while ( v17 );
    *(_OWORD *)teamPlacements = *(_OWORD *)teamPlacement;
    *((_OWORD *)teamPlacements + 1) = *((_OWORD *)teamPlacement + 1);
    *((_QWORD *)teamPlacements + 4) = *((_QWORD *)teamPlacement + 4);
    teamPlacements[10] = teamPlacement[10];
    cgameGlob->numScores = 0;
    if ( snap->numClients > 0 )
    {
      v18 = _First;
      _Val.cgameGlob = (const CgGlobalsMP *)_First;
      do
      {
        v19 = *v18;
        if ( (unsigned int)v19 >= cls.maxClients )
        {
          LODWORD(v27) = cls.maxClients;
          LODWORD(v26) = *v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( clientIdx ) < (unsigned)( cls.maxClients )", "clientIdx doesn't index cls.maxClients\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( (unsigned int)v19 >= cgameGlob->m_characterInfoCount )
        {
          LODWORD(v27) = cgameGlob->m_characterInfoCount;
          LODWORD(v26) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v20 = &cgameGlob->m_characterInfo[v19];
        if ( (!v20 || !v20->infoValid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(characterinfo && characterinfo->infoValid)", (const char *)&queryFormat, "characterinfo && characterinfo->infoValid") )
          __debugbreak();
        v21 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, v19);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        v22 = &cgameGlob->scores[cgameGlob->numScores];
        v23 = &p_scores->clientScores[v19];
        v22->client = v19;
        v22->score = v23->score;
        v22->deaths = v23->deaths;
        v22->kills = v23->kills;
        v22->assists = v23->assists;
        v22->extrascore0 = v23->extrascore0;
        v22->extrascore1 = v23->extrascore1;
        v22->extrascore2 = v23->extrascore2;
        v22->extrascore3 = v23->extrascore3;
        v22->status = v23->status;
        v22->ping = v23->ping;
        v22->hRankIcon = *(const GfxImage **)(v21 + 192);
        v22->rankDisplayLevel = *(const char **)(v21 + 200);
        v22->isBot = *(_BYTE *)(v21 + 188);
        v22->adrenaline = v23->adrenaline;
        v22->deathTimerLength = v23->deathTimerLength;
        v22->team = v20->team;
        v24 = &cgameGlob->lastKnownClientInfo[v19];
        v24->team = v20->team;
        Core_strcpy(v24->name, 0x24ui64, (const char *)(v21 + 4));
        Core_strcpy(v24->clanAbbrev, 6ui64, (const char *)(v21 + 124));
        status = v23->status;
        if ( (unsigned int)(status - 1) <= 0x1F )
          v22->hStatusIcon = cgameGlob->statusIconCache[status];
        v22->rank_mp = *(_DWORD *)(v21 + 104);
        v22->prestige_mp = *(_DWORD *)(v21 + 108);
        ++cgameGlob->numScores;
        ++cgameGlob->teamPlayers[v20->team];
        ++v11;
        v18 = (int *)&_Val.cgameGlob->__vftable + 1;
        _Val.cgameGlob = (const CgGlobalsMP *)((char *)_Val.cgameGlob + 4);
        LocalClientStatics = v31;
      }
      while ( v11 < v30->numClients );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ServerCmdsMP_RegisterServerMaterialCallback
==============
*/
void CG_ServerCmdsMP_RegisterServerMaterialCallback(const unsigned int materialIndex, const char *materialName)
{
  if ( !materialIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 770, ASSERT_TYPE_ASSERT, "(materialIndex != 0)", "%s\n\tMaterial index 0 is reserved for the 'empty' material", "materialIndex != 0") )
    __debugbreak();
  if ( s_initializingLocalClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 771, ASSERT_TYPE_ASSERT, "(s_initializingLocalClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "s_initializingLocalClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  CG_ServerCmd_RegisterServerMaterial(s_initializingLocalClientNum, materialIndex, materialName);
}

/*
==============
CG_ServerCmdsMP_RegisterServerStickerMaterialCallback
==============
*/
void CG_ServerCmdsMP_RegisterServerStickerMaterialCallback(const unsigned int stickerMaterialIndex, const char *stickerMaterialName)
{
  if ( !stickerMaterialIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 781, ASSERT_TYPE_ASSERT, "(stickerMaterialIndex != 0)", "%s\n\tSticker material index 0 is reserved for the 'empty' sticker material", "stickerMaterialIndex != 0") )
    __debugbreak();
  if ( s_initializingLocalClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 782, ASSERT_TYPE_ASSERT, "(s_initializingLocalClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "s_initializingLocalClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  CG_ServerCmd_RegisterServerStickerMaterial(s_initializingLocalClientNum, stickerMaterialIndex, stickerMaterialName);
}

/*
==============
CG_ServerCmdsMP_RegisterStatusIconlCallback
==============
*/
void CG_ServerCmdsMP_RegisterStatusIconlCallback(const unsigned int iconIndex, const char *materialName)
{
  __int64 v2; 
  CgGlobalsMP *LocalClientGlobals; 
  __int64 v5; 
  int v6; 

  v2 = iconIndex;
  if ( !iconIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 792, ASSERT_TYPE_ASSERT, "(iconIndex != 0)", "%s\n\tIcon index 0 is reserved for the 'empty' icon material", "iconIndex != 0") )
    __debugbreak();
  if ( s_initializingLocalClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 793, ASSERT_TYPE_ASSERT, "(s_initializingLocalClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "s_initializingLocalClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(s_initializingLocalClientNum);
  if ( (unsigned int)v2 >= 0x20 )
  {
    v6 = 32;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 797, ASSERT_TYPE_ASSERT, "(unsigned)( iconIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->statusIconCache ) ) + 0 ) )", "iconIndex doesn't index ARRAY_COUNT( cgameGlob->statusIconCache )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  LocalClientGlobals->statusIconCache[v2] = Material_RegisterHandle(materialName, IMAGE_TRACK_HUD);
}

/*
==============
CL_ServerCmdMP_HaveAllClientsReceivedMapRestartCmd
==============
*/
__int64 CL_ServerCmdMP_HaveAllClientsReceivedMapRestartCmd(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  cg_t **v4; 
  connstate_t *i; 
  const snapshot_t *nextSnap; 
  __int64 v8; 
  __int64 v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1162, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  v3 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    return 1i64;
  v4 = cg_t::ms_cgArray;
  for ( i = &clientUIActives[0].connectionState; ; i += 110 )
  {
    if ( v3 != localClientNum )
    {
      if ( v3 >= 2 )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( *i == CA_ACTIVE )
      {
        if ( !CL_Main_IsSplitscreenGame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_servercmds_mp.cpp", 1172, ASSERT_TYPE_ASSERT, "(CL_Main_IsSplitscreenGame())", "%s\n\tShould not have multiple clients active when not playing splitscreen!", "CL_Main_IsSplitscreenGame()") )
          __debugbreak();
        if ( v3 >= cg_t::ms_allocatedCount )
        {
          LODWORD(v9) = cg_t::ms_allocatedCount;
          LODWORD(v8) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        if ( !*v4 )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v9) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v9) )
            __debugbreak();
        }
        nextSnap = (*v4)->nextSnap;
        if ( !nextSnap || ((LOBYTE(LocalClientGlobals->nextSnap->snapFlags) ^ LOBYTE(nextSnap->snapFlags)) & 4) != 0 )
          break;
      }
    }
    ++v3;
    ++v4;
    if ( (int)v3 >= SLODWORD(cl_maxLocalClients) )
      return 1i64;
  }
  return 0i64;
}

