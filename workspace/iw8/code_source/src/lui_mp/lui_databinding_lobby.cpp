/*
==============
LUI_DataBinding_UpdateFilteredPlaylistsForCategory
==============
*/

void __fastcall LUI_DataBinding_UpdateFilteredPlaylistsForCategory(const char *modelPath, bool useHardcore)
{
  ?LUI_DataBinding_UpdateFilteredPlaylistsForCategory@@YAXPEBD_N@Z(modelPath, useHardcore);
}

/*
==============
LUI_DataBindingLobby_UpdateLobby
==============
*/

void LUI_DataBindingLobby_UpdateLobby(void)
{
  ?LUI_DataBindingLobby_UpdateLobby@@YAXXZ();
}

/*
==============
LUI_DatabindingLobby_PushWeaponCustomization
==============
*/

void __fastcall LUI_DatabindingLobby_PushWeaponCustomization(const unsigned __int16 memberModel, PlayerProfileData *playerCardData)
{
  ?LUI_DatabindingLobby_PushWeaponCustomization@@YAXGUPlayerProfileData@@@Z(memberModel, playerCardData);
}

/*
==============
LUI_DataBinding_UpdatePlaylists
==============
*/

void __fastcall LUI_DataBinding_UpdatePlaylists(const char *modelPath)
{
  ?LUI_DataBinding_UpdatePlaylists@@YAXPEBD@Z(modelPath);
}

/*
==============
LUI_DataBindingLobby_PushTournamentDataToModel
==============
*/

void LUI_DataBindingLobby_PushTournamentDataToModel(void)
{
  ?LUI_DataBindingLobby_PushTournamentDataToModel@@YAXXZ();
}

/*
==============
LUI_DataBindingLobby_PushPartyMemberToModel
==============
*/

void __fastcall LUI_DataBindingLobby_PushPartyMemberToModel(const PartyData *partyData, const int memberIndex, const unsigned __int16 memberModel, const int index)
{
  ?LUI_DataBindingLobby_PushPartyMemberToModel@@YAXPEBUPartyData@@HGH@Z(partyData, memberIndex, memberModel, index);
}

/*
==============
LUI_DataBindingLobby_PushMapVoteDataToModel
==============
*/
void LUI_DataBindingLobby_PushMapVoteDataToModel(const PartyData *partyData, unsigned __int16 baseModel)
{
  const dvar_t *v4; 
  const char *StringSafe; 
  const char *v6; 
  int v7; 
  const char **p_uiGameTypeDVar; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  const char *v12; 
  const char *v13; 
  const mapInfo *MapInfoForLoadName; 
  const char *mapVoteImage; 
  unsigned __int16 v16; 
  __int64 v17; 
  const char *v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  const dvar_t *v22; 
  int MapVotePlaylistEntry; 
  const char *GameTypeDisplayName; 
  const char *Gametype; 
  const dvar_t *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  PartyData *v30; 
  int CountForVoteType; 
  __int64 v32; 
  const char *v33; 
  signed __int64 v34; 
  int v35; 
  int v36; 
  char v37; 
  signed __int64 v38; 
  int v39; 
  int v40; 
  char v41; 
  unsigned __int16 v42; 
  bool v43; 
  unsigned __int16 v44; 
  char v45; 
  char v46; 
  unsigned __int16 v47; 
  unsigned __int16 v48; 
  unsigned __int16 v49; 
  unsigned __int16 v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  unsigned __int16 ModelFromPath; 
  const char **v55; 
  StringTable *tablePtr; 
  PartyData *party; 
  const char *v58; 
  const char **v59; 
  __int64 v60[4]; 
  char dest[64]; 

  party = (PartyData *)partyData;
  if ( !CL_AllLocalClientsInactive() )
  {
    v4 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( !v4->current.enabled && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG && !Live_IsInSystemlinkLobby() && !Party_IsPrivateParty(partyData) )
    {
      StringTable_GetAsset("mp/gameTypesTable.csv", (const StringTable **)&tablePtr);
      v45 = 1;
      v46 = 1;
      StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
      v6 = Dvar_GetStringSafe(g_mapVoteInfo[0].uiGameTypeDVar);
      v60[0] = (__int64)"GAME/VOTE_PREV";
      v60[1] = (__int64)"GAME/VOTE_NEXT";
      v60[2] = (__int64)"GAME/VOTE_CLASSIFIED";
      ModelFromPath = LUI_Model_CreateModelFromPath(baseModel, "mapVoting");
      v7 = 0;
      v59 = (const char **)v60;
      p_uiGameTypeDVar = &g_mapVoteInfo[0].uiGameTypeDVar;
      v9 = ModelFromPath;
      v10 = 0i64;
      v55 = &g_mapVoteInfo[0].uiGameTypeDVar;
      do
      {
        Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v7);
        v11 = LUI_Model_CreateModelFromPath(v9, dest);
        v47 = LUI_Model_CreateModelFromPath(v11, "map.name");
        v48 = LUI_Model_CreateModelFromPath(v11, "gameType.name");
        v49 = LUI_Model_CreateModelFromPath(v11, "gameType.image");
        v50 = LUI_Model_CreateModelFromPath(v11, "votes");
        v51 = LUI_Model_CreateModelFromPath(v11, "voteLabel");
        v52 = LUI_Model_CreateModelFromPath(v11, "refIndex");
        v12 = Dvar_GetStringSafe(*(p_uiGameTypeDVar - 1));
        v13 = (char *)&queryFormat.fmt + 3;
        MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(v12);
        v58 = Dvar_GetStringSafe(*v55);
        if ( MapInfoForLoadName )
        {
          v13 = UI_SafeTranslateString(MapInfoForLoadName->mapName);
          mapVoteImage = MapInfoForLoadName->mapVoteImage;
          if ( mapVoteImage && *mapVoteImage )
          {
            v16 = LUI_Model_CreateModelFromPath(v11, "map.image");
            LUI_Model_SetString(v16, mapVoteImage);
          }
        }
        else
        {
          v17 = 0x7FFFFFFFi64;
          v18 = v12;
          if ( !s_mapVoteEntryNames[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          do
          {
            v19 = v18[(_QWORD)s_mapVoteEntryNames + v10 * 2024 - (_QWORD)v12];
            v20 = v17;
            v21 = *v18++;
            --v17;
            if ( !v20 )
              break;
            if ( v19 != v21 )
            {
              Com_PrintWarning(13, "Com_GameInfo_GetMapInfoForLoadName returned an invalid map for \"%s\"\n", v12);
              break;
            }
          }
          while ( v19 );
        }
        Core_strcpy(s_mapVoteEntryNames[v10], 0x7E8ui64, v12);
        v22 = DVARBOOL_xblive_privatematch;
        if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( v22->current.enabled )
        {
          Gametype = Party_GetGametype();
          GameTypeDisplayName = UI_GetGameTypeDisplayName(Gametype);
        }
        else
        {
          MapVotePlaylistEntry = Party_GetMapVotePlaylistEntry(party, v7);
          GameTypeDisplayName = Playlist_GetLocalizedGametypeName(MapVotePlaylistEntry);
        }
        v26 = DVARBOOL_xblive_privatematch;
        v27 = GameTypeDisplayName;
        if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled || Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") || !Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") )
          v28 = Party_GetGametype();
        else
          v28 = v58;
        v29 = StringTable_Lookup(tablePtr, 0, v28, 3);
        LUI_Model_SetString(v47, v13);
        LUI_Model_SetString(v48, v27);
        LUI_Model_SetString(v49, v29);
        v30 = party;
        CountForVoteType = Party_GetCountForVoteType(party, (VoteType)(v7 + 1));
        LUI_Model_SetInt(v50, CountForVoteType);
        v32 = (__int64)v59;
        v33 = UI_SafeTranslateString(*v59);
        LUI_Model_SetString(v51, v33);
        LUI_Model_SetInt(v52, v7);
        v34 = v12 - StringSafe;
        do
        {
          v35 = (unsigned __int8)StringSafe[v34];
          v36 = *(unsigned __int8 *)StringSafe - v35;
          if ( v36 )
            break;
          ++StringSafe;
        }
        while ( v35 );
        v37 = 0;
        if ( !v36 )
          v37 = v45;
        v45 = v37;
        v38 = v58 - v6;
        do
        {
          v39 = (unsigned __int8)v6[v38];
          v40 = *(unsigned __int8 *)v6 - v39;
          if ( v40 )
            break;
          ++v6;
        }
        while ( v39 );
        v41 = 0;
        StringSafe = v12;
        v6 = v58;
        v9 = ModelFromPath;
        if ( !v40 )
          v41 = v46;
        p_uiGameTypeDVar = v55 + 3;
        v46 = v41;
        v55 += 3;
        ++v7;
        v59 = (const char **)(v32 + 8);
        ++v10;
      }
      while ( v7 < 3 );
      v42 = LUI_Model_CreateModelFromPath(baseModel, "votingComplete");
      v43 = v30->voting.votePassed || v45 && v46;
      LUI_Model_SetBool(v42, v43);
      v44 = LUI_Model_CreateModelFromPath(baseModel, "votingTime");
      LUI_Model_SetInt(v44, v30->voting.voteEndTime);
    }
  }
}

/*
==============
LUI_DataBindingLobby_PushPartyDataToModel
==============
*/
void LUI_DataBindingLobby_PushPartyDataToModel(const PartyData *partyData, unsigned __int16 baseModel)
{
  unsigned __int16 v2; 
  int v4; 
  int v5; 
  int subpartyIndex; 
  unsigned int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int16 ModelFromPath; 
  bool v13; 
  bool IsGameBattleActive; 
  int v15; 
  __int64 i; 
  __int64 v17; 
  char *v18; 
  unsigned __int16 v19; 
  __int64 j; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  bool IsHostDedicated; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  int NumGameSlots; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  unsigned __int16 v33; 
  int team; 
  int squad; 
  int integer; 
  int teamCount[204]; 
  int outSortedMemberIndices[200]; 
  char dest[64]; 

  if ( partyData )
  {
    v2 = baseModel;
    if ( partyData->inParty )
    {
      if ( clientUIActives[0].frontEndSceneState[0] || clientUIActives[0].connectionState < CA_CONNECTED )
      {
        Profile_Begin(821);
        v4 = 0;
        team = 0;
        squad = 0;
        v5 = 0;
        subpartyIndex = 0;
        memset_0(teamCount, 0, 0x32Cui64);
        v7 = 0;
        LUI_DataBindingLobby_SortPartyMembers(partyData, outSortedMemberIndices);
        v8 = DVARBOOL_com_codcasterHighClientSupport;
        if ( !DVARBOOL_com_codcasterHighClientSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientSupport") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
        {
          v9 = DVARINT_com_codcasterHighClientCount;
          if ( !DVARINT_com_codcasterHighClientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientCount") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v9);
          integer = v9->current.integer;
        }
        else
        {
          integer = 28;
        }
        v10 = 0i64;
        while ( 1 )
        {
          v11 = outSortedMemberIndices[v10];
          if ( Party_IsMemberLocalPlayer(partyData, outSortedMemberIndices[v10]) )
            break;
          if ( ++v10 >= 200 )
            goto LABEL_19;
        }
        subpartyIndex = partyData->partyMembers[v11].subpartyIndex;
        team = partyData->partyMembers[v11].team;
        squad = partyData->partyMembers[v11].squad;
LABEL_19:
        ModelFromPath = LUI_Model_CreateModelFromPath(v2, "friendlySubPartyIndex");
        LUI_Model_SetInt(ModelFromPath, subpartyIndex);
        v13 = Live_IsInGameBattlesGame();
        IsGameBattleActive = GameBattles_IsGameBattleActive();
        if ( v13 && IsGameBattleActive )
        {
          GameBattles_PushPartyMembersToModel(partyData, v2, outSortedMemberIndices, teamCount);
        }
        else
        {
          v15 = 0;
          if ( integer > 0 )
          {
            for ( i = 0i64; i < integer; ++i )
            {
              v17 = outSortedMemberIndices[i];
              if ( Party_IsMemberUIVisible(partyData, outSortedMemberIndices[i]) )
              {
                v18 = (char *)partyData + 504 * v17;
                Com_sprintf(dest, 0x40ui64, "%i", v7);
                v19 = LUI_Model_CreateModelFromPath(baseModel, dest);
                LUI_DataBindingLobby_PushPartyMemberToModel(partyData, v17, v19, v15);
                ++v7;
                if ( *((_DWORD *)v18 + 648) > 0xCAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_lobby.cpp", 801, ASSERT_TYPE_ASSERT, "(member->team >= 0 && member->team < TEAM_MP_NUM_TEAMS)", (const char *)&queryFormat, "member->team >= 0 && member->team < TEAM_MP_NUM_TEAMS") )
                  __debugbreak();
                ++teamCount[*((int *)v18 + 648)];
                if ( !*((_DWORD *)v18 + 584) )
                  ++v5;
              }
              ++v15;
            }
            v2 = baseModel;
            v4 = 0;
          }
        }
        for ( j = 0i64; j < 200; ++j )
        {
          if ( Party_IsMemberUIVisible(partyData, outSortedMemberIndices[j]) )
            ++v4;
        }
        v21 = LUI_Model_CreateModelFromPath(v2, "friendlyTeamCount");
        LUI_Model_SetInt(v21, teamCount[team]);
        v22 = LUI_Model_CreateModelFromPath(v2, "teamAlliesCount");
        LUI_Model_SetInt(v22, teamCount[2]);
        v23 = LUI_Model_CreateModelFromPath(v2, "teamAxisCount");
        LUI_Model_SetInt(v23, teamCount[1]);
        v24 = LUI_Model_CreateModelFromPath(v2, "teamSpectatorCount");
        LUI_Model_SetInt(v24, teamCount[201]);
        v25 = LUI_Model_CreateModelFromPath(v2, "teamFollowerCount");
        LUI_Model_SetInt(v25, teamCount[202]);
        v26 = LUI_Model_CreateModelFromPath(v2, "isDedi");
        IsHostDedicated = Party_IsHostDedicated(&g_partyData);
        LUI_Model_SetBool(v26, IsHostDedicated);
        v28 = LUI_Model_CreateModelFromPath(v2, "count");
        LUI_Model_SetInt(v28, v5);
        v29 = LUI_Model_CreateModelFromPath(v2, "memberCount");
        LUI_Model_SetInt(v29, v4);
        NumGameSlots = Party_GetNumGameSlots(partyData);
        v31 = LUI_Model_CreateModelFromPath(v2, "maxCount");
        LUI_Model_SetInt(v31, NumGameSlots);
        v32 = LUI_Model_CreateModelFromPath(v2, "friendlyTeamIndex");
        LUI_Model_SetInt(v32, team);
        v33 = LUI_Model_CreateModelFromPath(v2, "friendlySquadIndex");
        LUI_Model_SetInt(v33, squad);
        Profile_EndInternal(NULL);
      }
    }
  }
}

/*
==============
LUI_DataBindingLobby_PushPartyMemberToModel
==============
*/
void LUI_DataBindingLobby_PushPartyMemberToModel(const PartyData *partyData, const int memberIndex, const unsigned __int16 memberModel, const int index)
{
  __int64 v4; 
  const PartyData *v5; 
  __int16 v6; 
  __int64 v7; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v9; 
  const char *v10; 
  unsigned __int16 v11; 
  bool IsHost; 
  unsigned __int64 PlatformId; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  int PortForLocalXUID; 
  int v17; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 v19; 
  int Int; 
  bool v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  bool v24; 
  const char *v25; 
  unsigned __int16 v26; 
  int v27; 
  int TeamForUser; 
  unsigned __int16 v29; 
  int v30; 
  int v31; 
  unsigned __int16 v32; 
  unsigned __int8 v33; 
  unsigned __int16 v34; 
  unsigned __int16 v35; 
  unsigned __int16 v36; 
  unsigned __int16 v37; 
  bool IsPlayerMuted; 
  bool IsPlayerTalking; 
  int v40; 
  bool v41; 
  __int64 v42; 
  int v43; 
  unsigned __int16 v44; 
  int v45; 
  XUID v46; 
  unsigned __int16 v47; 
  unsigned __int16 v48; 
  unsigned __int16 v49; 
  unsigned __int16 v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  unsigned __int16 v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  unsigned __int16 v56; 
  unsigned __int8 ClientPlatform; 
  __int64 CacheLocation; 
  unsigned __int16 v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  unsigned __int16 v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  unsigned __int16 v68; 
  int IsMemberLocalPlayer; 
  unsigned int v70; 
  const dvar_t *v71; 
  const dvar_t *v72; 
  int integer; 
  unsigned int v74; 
  __int64 v75; 
  unsigned int v76; 
  int *p_mlgFollowerIndex; 
  __int64 v78; 
  unsigned __int16 v79; 
  int v80; 
  __int64 v81; 
  unsigned __int16 v82; 
  unsigned __int16 v83; 
  unsigned __int16 v84; 
  unsigned __int16 v85; 
  unsigned __int16 v86; 
  unsigned __int16 v87; 
  unsigned __int16 v88; 
  unsigned __int16 v89; 
  bool selectedOperatorIndex[2]; 
  int out_memberIndex; 
  unsigned __int16 v92; 
  unsigned __int16 v93; 
  unsigned __int16 v94; 
  unsigned int memberIndexa; 
  int v96; 
  __int64 v97; 
  const PartyData *v98; 
  XUID v99; 
  PlayerProfileData v100; 
  PlayerProfileData v101; 
  PlayerProfileData profileData; 
  char outBuffer[8]; 
  int v104[2]; 
  char dest[21]; 
  char newValue[64]; 
  char out_playerName[48]; 

  v4 = memberIndex;
  v5 = partyData;
  v98 = partyData;
  v6 = memberModel;
  memberIndexa = memberIndex;
  v96 = index;
  v94 = memberModel;
  XUID::XUID(&v99);
  v7 = (__int64)v5 + 504 * v4;
  v97 = v7;
  PlayercardCache_GetPlayercard(*(XUID *)(v7 + 2608), (const char *)(v7 + 2244), &profileData);
  ModelFromPath = LUI_Model_CreateModelFromPath(v6, "memberIndex");
  LUI_Model_SetInt(ModelFromPath, v4);
  v9 = LUI_Model_CreateModelFromPath(v6, "xuid");
  v10 = XUID::ToString((XUID *)(v7 + 2608));
  LUI_Model_SetString(v9, v10);
  v11 = LUI_Model_CreateModelFromPath(v6, "isLobbyHost");
  IsHost = Party_IsHost(v5, v4);
  LUI_Model_SetBool(v11, IsHost);
  PlatformId = Party_GetPlatformId(v5, v4);
  Com_sprintf<21>((char (*)[21])dest, "%zu", PlatformId);
  v14 = LUI_Model_CreateModelFromPath(v6, "platformId");
  LUI_Model_SetString(v14, dest);
  v15 = LUI_Model_CreateModelFromPath(v6, "controllerIndex");
  PortForLocalXUID = Live_GetPortForLocalXUID(*(const XUID *)(v7 + 2608));
  LUI_Model_SetInt(v15, PortForLocalXUID);
  v17 = *(_DWORD *)(v7 + 2588);
  GlobalModel = LUI_Model_GetGlobalModel();
  v19 = LUI_Model_GetModelFromPath(GlobalModel, "alwaysLoaded.activeParty.members.friendlySubPartyIndex");
  Int = LUI_Model_GetInt(v19);
  v21 = !Live_XUIDIsLocalPlayer(*(const XUID *)(v7 + 2608)) && v17 != Int && CL_Anonymization_IsEnabled();
  v22 = LUI_Model_CreateModelFromPath(v6, "subparty");
  v23 = *(int *)(v7 + 2588);
  *(_WORD *)selectedOperatorIndex = v22;
  if ( (int)v23 < 0 || (unsigned int)v23 >= v5->subpartyCount || v5->subparties[v23].count <= 1 )
    v17 = -1;
  if ( v5 == Lobby_GetPartyData() && Party_IsJoiningAGameInProgress(v5) )
    v17 = -1;
  LUI_Model_SetInt(*(const unsigned __int16 *)selectedOperatorIndex, v17);
  v92 = LUI_Model_CreateModelFromPath(v6, "gamertag");
  v86 = LUI_Model_CreateModelFromPath(v6, "gamertagWithHash");
  v93 = LUI_Model_CreateModelFromPath(v6, "missingGamertag");
  out_memberIndex = *(_DWORD *)(v7 + 2280);
  newValue[0] = 0;
  if ( v21 )
  {
    CL_Anonymization_GetNameForIndex(v4, out_playerName);
    LUI_Model_SetString(v92, out_playerName);
    v24 = 0;
  }
  else
  {
    v25 = (const char *)(v7 + 2244);
    selectedOperatorIndex[0] = *(_BYTE *)(v7 + 2244);
    if ( !selectedOperatorIndex[0] )
      v25 = UI_SafeTranslateString("MP/MATCHEDPLAYER");
    LUI_Model_SetString(v92, v25);
    Com_sprintf(newValue, 0x40ui64, "%s#%d", v25, out_memberIndex);
    v24 = !selectedOperatorIndex[0];
  }
  LUI_Model_SetBool(v93, v24);
  LUI_Model_SetString(v86, newValue);
  v26 = LUI_Model_CreateModelFromPath(v6, "team");
  v27 = *(_DWORD *)(v7 + 2592);
  v87 = v26;
  if ( OnlineTournament_IsInTournament() )
  {
    TeamForUser = OnlineTournament_FindTeamForUser(*(XUID *)(v7 + 2608), &out_memberIndex);
    if ( TeamForUser >= 0 )
      v27 = TeamForUser;
  }
  LUI_Model_SetInt(v87, v27);
  v29 = LUI_Model_CreateModelFromPath(v6, "squad");
  LUI_Model_SetInt(v29, *(_DWORD *)(v7 + 2596));
  v88 = LUI_Model_CreateModelFromPath(v6, "desiredTeam");
  v30 = Live_GetPortForLocalXUID(*(const XUID *)(v7 + 2608));
  v31 = *(_DWORD *)(v7 + 2240);
  if ( v30 != -1 && CL_Mgr_IsControllerMappedToClient(v30, (LocalClientNum_t *)&out_memberIndex) )
    v31 = v5->desiredTeamSelection[out_memberIndex];
  LUI_Model_SetInt(v88, v31);
  v32 = LUI_Model_CreateModelFromPath(v6, "clanTag");
  if ( v21 || !*(_BYTE *)(v7 + 2284) )
  {
    dest[0] = 0;
  }
  else
  {
    v33 = *(_BYTE *)(v7 + 2290);
    *(_QWORD *)outBuffer = 0i64;
    *(_QWORD *)v104 = 0i64;
    Com_PlayerUtils_ColorizeClanTag((const char *)(v7 + 2284), v33, outBuffer, 0x10ui64, 0x37u);
    Com_sprintf(dest, 0xCui64, "[%s]", outBuffer);
  }
  LUI_Model_SetString(v32, dest);
  v34 = LUI_Model_CreateModelFromPath(v6, "rank");
  LUI_Model_SetInt(v34, profileData.rank_mp + profileData.prestige_mp);
  v35 = LUI_Model_CreateModelFromPath(v6, "baseRank");
  LUI_Model_SetInt(v35, profileData.rank_mp);
  v36 = LUI_Model_CreateModelFromPath(v6, "prestige");
  LUI_Model_SetInt(v36, profileData.prestige_mp);
  v37 = LUI_Model_CreateModelFromPath(v6, "microphoneState");
  IsPlayerMuted = CL_IsPlayerMuted(v5, v4);
  IsPlayerTalking = CL_IsPlayerTalking(v5, v4);
  if ( !*(_BYTE *)(v7 + 2292) || Voice_ChatRestricted() )
  {
    v40 = 0;
  }
  else if ( IsPlayerMuted )
  {
    v40 = 3;
  }
  else
  {
    v40 = IsPlayerTalking + 1;
  }
  LUI_Model_SetInt(v37, v40);
  v41 = 0;
  if ( !Party_IsHostDedicated(&g_partyData) )
  {
    v42 = Party_HostNum(&g_partyData);
    v43 = Party_CountAllMembersEvenIfInactive(&g_partyData);
    v41 = Party_CountLocalMembers(&g_partyData) < v43 && XUID::operator==(&g_partyData.partyMembers[v42].playerUID, (const XUID *)(v7 + 2608));
  }
  v44 = LUI_Model_CreateModelFromPath(v6, "isPrivatePartyHost");
  LUI_Model_SetBool(v44, v41);
  v45 = v96;
  if ( v96 <= 28 )
  {
    v46.m_id = *(_QWORD *)(v7 + 2608);
    *(_QWORD *)outBuffer = 0i64;
    v104[0] = 0;
    *(_QWORD *)dest = 0i64;
    *(_DWORD *)&dest[8] = 0;
    PlayercardCache_GetMPActiveCustomizationData(v46, (const char *)(v7 + 2244), selectedOperatorIndex, (CustomizationModels *)outBuffer, (CustomizationModels *)dest);
    v47 = LUI_Model_CreateModelFromPath(v6, "selectedOperatorIndex");
    LUI_Model_SetInt(v47, selectedOperatorIndex[0]);
    v48 = LUI_Model_CreateModelFromPath(v6, "headWest");
    LUI_Model_SetInt(v48, *(int *)outBuffer);
    v49 = LUI_Model_CreateModelFromPath(v6, "bodyWest");
    LUI_Model_SetInt(v49, *(int *)&outBuffer[4]);
    v50 = LUI_Model_CreateModelFromPath(v6, "execWest");
    LUI_Model_SetInt(v50, v104[0]);
    v51 = LUI_Model_CreateModelFromPath(v6, "headEast");
    LUI_Model_SetInt(v51, *(int *)dest);
    v52 = LUI_Model_CreateModelFromPath(v6, "bodyEast");
    LUI_Model_SetInt(v52, *(int *)&dest[4]);
    v53 = LUI_Model_CreateModelFromPath(v6, "execEast");
    LUI_Model_SetInt(v53, *(int *)&dest[8]);
  }
  v54 = LUI_Model_CreateModelFromPath(v6, "presencePlatform");
  LUI_Model_SetInt(v54, *(char *)(v7 + 2348));
  v55 = LUI_Model_CreateModelFromPath(v6, "usingGamepad");
  LUI_Model_SetBool(v55, *(_BYTE *)(v7 + 2293));
  v56 = LUI_Model_CreateModelFromPath(v6, "isCrossplayPlayer");
  ClientPlatform = GetClientPlatform();
  LUI_Model_SetBool(v56, *(_BYTE *)(v7 + 2348) != ClientPlatform);
  PlayercardCache_GetPlayercard(*(XUID *)(v7 + 2608), (const char *)(v7 + 2244), &v101);
  CacheLocation = PlayerCardData_GetCacheLocation();
  v59 = LUI_Model_CreateModelFromPath(v6, "customEmblemEquipped");
  LUI_Model_SetBool(v59, 0);
  v60 = LUI_Model_CreateModelFromPath(v6, "emblemIndex");
  LUI_Model_SetInt(v60, v101.customization_patch[CacheLocation]);
  v61 = LUI_Model_CreateModelFromPath(v6, "backgroundIndex");
  LUI_Model_SetInt(v61, v101.customization_background[CacheLocation]);
  if ( v45 <= 28 )
  {
    qmemcpy(&v100, &v101, sizeof(v100));
    LUI_DatabindingLobby_PushWeaponCustomization(v6, &v100);
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v62 = LUI_Model_CreateModelFromPath(v6, "zombiesConsumables.slot0Index");
    v63 = LUI_Model_CreateModelFromPath(v6, "zombiesConsumables.slot1Index");
    v64 = LUI_Model_CreateModelFromPath(v6, "zombiesConsumables.slot2Index");
    v65 = LUI_Model_CreateModelFromPath(v6, "zombiesConsumables.slot3Index");
    v66 = LUI_Model_CreateModelFromPath(v6, "zombiesConsumables.slot4Index");
    v67 = LUI_Model_CreateModelFromPath(v6, "cpFieldUpgradeRowNum");
    LUI_Model_SetInt(v62, *(_DWORD *)(v97 + 2204));
    v7 = v97;
    LUI_Model_SetInt(v63, *(_DWORD *)(v97 + 2208));
    LUI_Model_SetInt(v64, *(_DWORD *)(v7 + 2212));
    LUI_Model_SetInt(v65, *(_DWORD *)(v7 + 2216));
    LUI_Model_SetInt(v66, *(_DWORD *)(v7 + 2220));
    LUI_Model_SetInt(v67, *(_DWORD *)(v7 + 2228));
    v5 = v98;
  }
  v68 = LUI_Model_CreateModelFromPath(v6, "isMyPlayer");
  IsMemberLocalPlayer = Party_IsMemberLocalPlayer(v5, memberIndexa);
  LUI_Model_SetBool(v68, IsMemberLocalPlayer != 0);
  v89 = LUI_Model_CreateModelFromPath(v6, "followers");
  v70 = 0;
  LUI_DataBindingLobby_SortPartyMembers(v5, &v101.rank_mp);
  v71 = DVARBOOL_com_codcasterHighClientSupport;
  if ( !DVARBOOL_com_codcasterHighClientSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientSupport") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  if ( v71->current.enabled )
  {
    v72 = DVARINT_com_codcasterHighClientCount;
    if ( !DVARINT_com_codcasterHighClientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    integer = v72->current.integer;
  }
  else
  {
    integer = 28;
  }
  v74 = 0;
  v75 = integer;
  if ( integer > 0 )
  {
    v76 = memberIndexa;
    p_mlgFollowerIndex = &v5->partyMembers[0].info.mlgFollowerIndex;
    v78 = integer;
    do
    {
      if ( Party_IsMemberUIVisible(v5, v74) && *(p_mlgFollowerIndex - 1) && v76 == *p_mlgFollowerIndex )
      {
        Com_sprintf(newValue, 0x40ui64, "%i", v70);
        v79 = LUI_Model_CreateModelFromPath(v89, newValue);
        v80 = 0;
        v81 = 0i64;
        while ( v74 != *(&v101.rank_mp + v81) )
        {
          ++v80;
          if ( ++v81 >= v75 )
            goto LABEL_64;
        }
        LUI_Model_SetInt(v79, v80);
LABEL_64:
        ++v70;
      }
      ++v74;
      p_mlgFollowerIndex += 126;
      --v78;
    }
    while ( v78 );
    v6 = v94;
    v7 = v97;
  }
  v82 = LUI_Model_CreateModelFromPath(v6, "followerIndex");
  LUI_Model_SetInt(v82, *(_DWORD *)(v7 + 2340));
  v83 = LUI_Model_CreateModelFromPath(v6, "followersCount");
  LUI_Model_SetInt(v83, v70);
  v84 = LUI_Model_CreateModelFromPath(v6, "commitReady");
  LUI_Model_SetBool(v84, *(_BYTE *)(v7 + 2371));
  v85 = LUI_Model_CreateModelFromPath(v6, "isPlaceHolderPlayer");
  LUI_Model_SetBool(v85, 0);
}

/*
==============
LUI_DataBindingLobby_PushSquadDataToModel
==============
*/
void LUI_DataBindingLobby_PushSquadDataToModel(const PartyData *partyData, unsigned __int16 baseModel)
{
  unsigned __int16 v2; 
  int v4; 
  int v5; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  int Int; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  int v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  int v14; 
  bool v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  int integer; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  _DWORD *v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  __int64 v27; 
  unsigned __int16 v28; 
  __int64 i; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  char v32; 
  char v33; 
  bool v34; 
  bool v35; 
  unsigned int v37; 
  int v38; 
  int v39; 
  int v40; 
  int outSortedMemberIndices[200]; 
  char dest[64]; 

  if ( partyData )
  {
    v2 = baseModel;
    if ( partyData->inParty )
    {
      if ( clientUIActives[0].frontEndSceneState[0] || clientUIActives[0].connectionState < CA_CONNECTED )
      {
        v4 = 0;
        v5 = 0;
        v37 = 0;
        GlobalModel = LUI_Model_GetGlobalModel();
        ModelFromPath = LUI_Model_GetModelFromPath(GlobalModel, "alwaysLoaded.activeParty.members.friendlySquadIndex");
        Int = LUI_Model_GetInt(ModelFromPath);
        v40 = Int;
        v9 = LUI_Model_GetGlobalModel();
        v10 = LUI_Model_GetModelFromPath(v9, "alwaysLoaded.activeParty.members.friendlyTeamIndex");
        v11 = LUI_Model_GetInt(v10);
        v39 = v11;
        v12 = LUI_Model_GetGlobalModel();
        v13 = LUI_Model_GetModelFromPath(v12, "alwaysLoaded.activeParty.members.friendlySubPartyIndex");
        v38 = LUI_Model_GetInt(v13);
        v14 = Party_UsingTeams(partyData);
        v34 = v14 != 0;
        v15 = Party_UsingSquads(partyData);
        v35 = v15;
        if ( !v14 || (v33 = 1, !v11) )
          v33 = 0;
        if ( !v15 || (v32 = 1, Int == -1) )
          v32 = 0;
        LUI_DataBindingLobby_SortPartyMembers(partyData, outSortedMemberIndices);
        v16 = DVARBOOL_com_codcasterHighClientSupport;
        if ( !DVARBOOL_com_codcasterHighClientSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientSupport") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          v17 = DVARINT_com_codcasterHighClientCount;
          if ( !DVARINT_com_codcasterHighClientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_codcasterHighClientCount") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          integer = v17->current.integer;
        }
        else
        {
          integer = 28;
        }
        v19 = integer;
        v20 = 0;
        if ( integer > 0 )
        {
          v21 = 0i64;
          do
          {
            v22 = outSortedMemberIndices[v21];
            if ( Party_IsMemberUIVisible(partyData, outSortedMemberIndices[v21]) )
            {
              v23 = (_DWORD *)((char *)partyData + 504 * v22);
              v24 = Party_IsMemberLocalPlayer(partyData, v22) != 0;
              v25 = !v34 || v33 && v23[648] == v39;
              v26 = !v35 || v32 && v23[649] == v40;
              if ( v24 || v23[647] == v38 || v25 && v26 )
              {
                v27 = v37++;
                Com_sprintf(dest, 0x40ui64, "%i", v27);
                v28 = LUI_Model_CreateModelFromPath(baseModel, dest);
                LUI_DataBindingLobby_PushPartyMemberToModel(partyData, v22, v28, v20);
                if ( !v23[584] )
                {
                  if ( v23[648] > 0xCAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_lobby.cpp", 928, ASSERT_TYPE_ASSERT, "(member->team >= 0 && member->team < TEAM_MP_NUM_TEAMS)", (const char *)&queryFormat, "member->team >= 0 && member->team < TEAM_MP_NUM_TEAMS") )
                    __debugbreak();
                  ++v5;
                }
              }
            }
            ++v20;
            ++v21;
          }
          while ( v21 < v19 );
          v2 = baseModel;
          v4 = 0;
        }
        for ( i = 0i64; i < 200; ++i )
        {
          if ( Party_IsMemberUIVisible(partyData, outSortedMemberIndices[i]) )
            ++v4;
        }
        v30 = LUI_Model_CreateModelFromPath(v2, "count");
        LUI_Model_SetInt(v30, v5);
        v31 = LUI_Model_CreateModelFromPath(v2, "memberCount");
        LUI_Model_SetInt(v31, v4);
      }
    }
  }
}

/*
==============
LUI_DataBindingLobby_PushTournamentDataToModel
==============
*/
void LUI_DataBindingLobby_PushTournamentDataToModel(void)
{
  int TeamSize; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  unsigned __int16 MyCurrentRound; 
  unsigned __int16 MyCurrentMatch; 
  team_t TeamIdForBracket; 
  team_t v7; 
  int v8; 
  int v9; 
  int *v10; 
  int v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  PartyData *PartyData; 
  int v17; 
  int v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  char *name; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  const char *v33; 
  unsigned __int16 v34; 
  signed int MemberByXUID; 
  unsigned int v36; 
  char *v37; 
  int IsMemberUIVisible; 
  unsigned __int16 v39; 
  unsigned __int16 v40; 
  int PortForLocalXUID; 
  unsigned __int16 v42; 
  unsigned __int16 v43; 
  char ClientPlatform; 
  unsigned __int16 v45; 
  bool IsPlayerMuted; 
  bool IsPlayerTalking; 
  int v48; 
  bool selectedOperatorIndex; 
  unsigned __int16 v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  unsigned __int16 v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  unsigned __int16 v56; 
  unsigned __int16 v57; 
  unsigned __int16 v58; 
  unsigned __int16 v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  unsigned __int16 v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  unsigned __int16 v68; 
  unsigned __int16 ModelFromPath; 
  int v70; 
  XUID result; 
  int v72; 
  int v73[2]; 
  int *v74; 
  PlayerProfileData v75; 
  CustomizationModels customizationWest; 
  CustomizationModels customizationEast; 
  PlayerProfileData profileData; 
  char outBuffer[8]; 
  int v80; 
  char path[64]; 
  char v82[47]; 
  char dest[64]; 

  TeamSize = OnlineTournament_GetTeamSize();
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.tournaments.teams");
  v2 = ModelFromPath;
  v3 = LUI_Model_CreateModelFromPath(ModelFromPath, "count");
  LUI_Model_SetInt(v3, 2);
  MyCurrentRound = OnlineTournament_GetMyCurrentRound();
  MyCurrentMatch = OnlineTournament_GetMyCurrentMatch();
  TeamIdForBracket = OnlineTournament_GetTeamIdForBracket(MyCurrentRound, MyCurrentMatch, TEAM_0);
  v7 = OnlineTournament_GetTeamIdForBracket(MyCurrentRound, MyCurrentMatch, TEAM_1);
  v8 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(TeamIdForBracket);
  v9 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(v7);
  if ( v8 >= 0 && v9 >= 0 )
  {
    if ( v8 == 2 )
    {
      v8 = v9;
      v9 = 2;
    }
    v73[0] = v8;
    v10 = v73;
    v73[1] = v9;
    v11 = 0;
    v70 = 0;
    v74 = v73;
    do
    {
      Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v11);
      v12 = LUI_Model_CreateModelFromPath(v2, dest);
      v51 = LUI_Model_CreateModelFromPath(v12, "member.selectedOperatorIndex");
      v53 = LUI_Model_CreateModelFromPath(v12, "member.headWest");
      v54 = LUI_Model_CreateModelFromPath(v12, "member.bodyWest");
      v55 = LUI_Model_CreateModelFromPath(v12, "member.execWest");
      v56 = LUI_Model_CreateModelFromPath(v12, "member.headEast");
      v57 = LUI_Model_CreateModelFromPath(v12, "member.bodyEast");
      v58 = LUI_Model_CreateModelFromPath(v12, "member.execEast");
      v59 = LUI_Model_CreateModelFromPath(v12, "member.name");
      v52 = LUI_Model_CreateModelFromPath(v12, "member.index");
      v50 = LUI_Model_CreateModelFromPath(v12, "member.rank");
      v13 = v50;
      v60 = LUI_Model_CreateModelFromPath(v12, "member.baseRank");
      v61 = LUI_Model_CreateModelFromPath(v12, "member.prestige");
      v68 = LUI_Model_CreateModelFromPath(v12, "member.localPlayerIndex");
      v14 = v68;
      v67 = LUI_Model_CreateModelFromPath(v12, "member.microphoneState");
      v65 = LUI_Model_CreateModelFromPath(v12, "member.presencePlatform");
      v66 = LUI_Model_CreateModelFromPath(v12, "member.isCrossplayPlayer");
      v64 = LUI_Model_CreateModelFromPath(v12, "member.isInParty");
      v62 = LUI_Model_CreateModelFromPath(v12, "member.xuid");
      v63 = LUI_Model_CreateModelFromPath(v12, "member");
      v15 = LUI_Model_CreateModelFromPath(v12, "member.count");
      LUI_Model_SetInt(v15, TeamSize);
      if ( Lobby_IsInLobby() )
        PartyData = Lobby_GetPartyData();
      else
        PartyData = &g_partyData;
      v17 = 0;
      if ( TeamSize > 0 )
      {
        v18 = *v10;
        v72 = *v10;
        do
        {
          Com_sprintf(path, 0x40ui64, "%i", (unsigned int)v17);
          OnlineTournament_GetParticipantByTeam(&result, v18, v17);
          *(_QWORD *)&customizationWest.headModelIndex = 0i64;
          customizationWest.executionId = 0;
          *(_QWORD *)&customizationEast.headModelIndex = 0i64;
          customizationEast.executionId = 0;
          PlayercardCache_GetMPActiveCustomizationData(result, "<unknown>", &selectedOperatorIndex, &customizationWest, &customizationEast);
          v19 = LUI_Model_CreateModelFromPath(v51, path);
          LUI_Model_SetInt(v19, selectedOperatorIndex);
          v20 = LUI_Model_CreateModelFromPath(v52, path);
          LUI_Model_SetInt(v20, v17);
          v21 = LUI_Model_CreateModelFromPath(v53, path);
          LUI_Model_SetInt(v21, customizationWest.headModelIndex);
          v22 = LUI_Model_CreateModelFromPath(v54, path);
          LUI_Model_SetInt(v22, customizationWest.bodyModelIndex);
          v23 = LUI_Model_CreateModelFromPath(v55, path);
          LUI_Model_SetInt(v23, customizationWest.executionId);
          v24 = LUI_Model_CreateModelFromPath(v56, path);
          LUI_Model_SetInt(v24, customizationEast.headModelIndex);
          v25 = LUI_Model_CreateModelFromPath(v57, path);
          LUI_Model_SetInt(v25, customizationEast.bodyModelIndex);
          v26 = LUI_Model_CreateModelFromPath(v58, path);
          LUI_Model_SetInt(v26, customizationEast.executionId);
          PlayercardCache_GetPlayercard(result, "<unknown>", &profileData);
          v27 = LUI_Model_CreateModelFromPath(v59, path);
          memset(v82, 0, sizeof(v82));
          if ( profileData.clanAbbrev[0] )
          {
            *(_QWORD *)outBuffer = 0i64;
            v80 = 0;
            Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0xCui64, 0x37u);
            Com_sprintf<47>((char (*)[47])v82, "[%s]%s", outBuffer, profileData.name);
            name = v82;
          }
          else
          {
            name = profileData.name;
          }
          LUI_Model_SetString(v27, name);
          v29 = LUI_Model_CreateModelFromPath(v13, path);
          LUI_Model_SetInt(v29, profileData.prestige_mp + profileData.rank_mp);
          v30 = LUI_Model_CreateModelFromPath(v60, path);
          LUI_Model_SetInt(v30, profileData.rank_mp);
          v31 = LUI_Model_CreateModelFromPath(v61, path);
          LUI_Model_SetInt(v31, profileData.prestige_mp);
          v32 = LUI_Model_CreateModelFromPath(v62, path);
          v33 = XUID::ToString(&result);
          LUI_Model_SetString(v32, v33);
          v34 = LUI_Model_CreateModelFromPath(v63, path);
          qmemcpy(&v75, &profileData, sizeof(v75));
          LUI_DatabindingLobby_PushWeaponCustomization(v34, &v75);
          if ( PartyData )
          {
            if ( PartyData->inParty )
            {
              MemberByXUID = Party_FindMemberByXUID(PartyData, result);
              v36 = MemberByXUID;
              if ( MemberByXUID >= 0 )
              {
                v37 = (char *)PartyData + 504 * MemberByXUID;
                IsMemberUIVisible = Party_IsMemberUIVisible(PartyData, MemberByXUID);
                v39 = LUI_Model_CreateModelFromPath(v64, path);
                LUI_Model_SetBool(v39, IsMemberUIVisible != 0);
                if ( IsMemberUIVisible )
                {
                  v40 = LUI_Model_CreateModelFromPath(v14, path);
                  if ( Party_IsMemberLocalPlayer(PartyData, v36) )
                  {
                    PortForLocalXUID = Live_GetPortForLocalXUID(result);
                    LUI_Model_SetInt(v40, PortForLocalXUID);
                  }
                  v42 = LUI_Model_CreateModelFromPath(v65, path);
                  LUI_Model_SetInt(v42, v37[2348]);
                  v43 = LUI_Model_CreateModelFromPath(v66, path);
                  ClientPlatform = GetClientPlatform();
                  LUI_Model_SetBool(v43, v37[2348] != ClientPlatform);
                  v45 = LUI_Model_CreateModelFromPath(v67, path);
                  IsPlayerMuted = CL_IsPlayerMuted(PartyData, v36);
                  IsPlayerTalking = CL_IsPlayerTalking(PartyData, v36);
                  if ( !v37[2292] || Voice_ChatRestricted() )
                  {
                    v48 = 0;
                  }
                  else if ( IsPlayerMuted )
                  {
                    v48 = 3;
                  }
                  else
                  {
                    v48 = IsPlayerTalking + 1;
                  }
                  LUI_Model_SetInt(v45, v48);
                  v14 = v68;
                }
                v13 = v50;
              }
            }
          }
          v18 = v72;
          ++v17;
        }
        while ( v17 < TeamSize );
        v10 = v74;
      }
      ++v10;
      v2 = ModelFromPath;
      v11 = v70 + 1;
      v70 = v11;
      v74 = v10;
    }
    while ( v11 < 2 );
  }
}

/*
==============
LUI_DataBindingLobby_SortPartyMembers
==============
*/
void LUI_DataBindingLobby_SortPartyMembers(const PartyData *partyData, int *outSortedMemberIndices)
{
  int team; 
  signed int v4; 
  __int64 v5; 
  int *v6; 
  int subpartyIndex; 
  int IsMemberLocalPlayer; 
  std::_Ref_fn<<lambda_1fd09c6bf6df872d885441eadb177ac9> > v10; 
  __int128 v11; 
  const PartyData *v13; 
  LUI_DataBindingLobby_SortPartyMembers::__l2::<lambda_1fd09c6bf6df872d885441eadb177ac9> _Val; 

  v13 = partyData;
  team = 0;
  v4 = 0;
  v5 = 0i64;
  v6 = outSortedMemberIndices;
  subpartyIndex = -1;
  do
  {
    *v6 = v4;
    IsMemberLocalPlayer = Party_IsMemberLocalPlayer(partyData, v4);
    partyData = v13;
    if ( IsMemberLocalPlayer )
    {
      team = v13->partyMembers[v5].team;
      subpartyIndex = v13->partyMembers[v5].subpartyIndex;
    }
    ++v4;
    ++v6;
    ++v5;
  }
  while ( v4 < 200 );
  *((_QWORD *)&v11 + 1) = __PAIR64__(subpartyIndex, team);
  *(_QWORD *)&v11 = &v13;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_38]
    vmovdqa [rsp+58h+var_38], xmm0
  }
  v10._Fn = std::_Pass_fn__lambda_1fd09c6bf6df872d885441eadb177ac9__0_(&_Val)._Fn;
  std::_Sort_unchecked_int___std::_Ref_fn__lambda_1fd09c6bf6df872d885441eadb177ac9_____(outSortedMemberIndices, outSortedMemberIndices + 199, 199i64, (std::_Ref_fn<<lambda_1fd09c6bf6df872d885441eadb177ac9> >)v10._Fn->partyData);
}

/*
==============
LUI_DataBindingLobby_UpdateLobby
==============
*/
void LUI_DataBindingLobby_UpdateLobby(void)
{
  const dvar_t *v0; 
  bool enabled; 
  unsigned __int8 ActiveGameMode; 
  bool v3; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  PartyData *PartyData; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  int v9; 
  unsigned __int16 v10; 
  int NumGameSlots; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  PartyUIRoot UIRoot; 
  char v17; 
  int v18; 
  unsigned __int16 v19; 
  const dvar_t *v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  int PartyMemberCount; 
  const dvar_t *v24; 
  int v25; 
  int integer; 
  int v27; 
  unsigned __int16 v28; 
  int LocalClientActiveCount; 
  unsigned __int16 v30; 
  char *fmt; 
  char outBuf[1024]; 

  v0 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  enabled = v0->current.enabled;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( enabled )
    v3 = ActiveGameMode == 1;
  else
    v3 = !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode);
  if ( !v3 )
  {
    Profile_Begin(820);
    GlobalModel = LUI_Model_GetGlobalModel();
    ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "alwaysLoaded.activeParty.members");
    if ( Lobby_IsInLobby() )
      PartyData = Lobby_GetPartyData();
    else
      PartyData = &g_partyData;
    LUI_DataBindingLobby_PushPartyDataToModel(PartyData, ModelFromPath);
    v7 = LUI_Model_CreateModelFromPath(GlobalModel, "alwaysLoaded.activeParty.squadMembers");
    LUI_DataBindingLobby_PushSquadDataToModel(PartyData, v7);
    v8 = LUI_Model_CreateModelFromPath(GlobalModel, "alwaysLoaded.privateParty");
    v9 = Party_CountUIVisibleMembers(&g_partyData);
    v10 = LUI_Model_CreateModelFromPath(v8, "count");
    LUI_Model_SetInt(v10, v9);
    NumGameSlots = Party_GetNumGameSlots(&g_partyData);
    v12 = LUI_Model_CreateModelFromPath(v8, "maxCount");
    LUI_Model_SetInt(v12, NumGameSlots);
    v13 = LUI_Model_CreateModelFromPath(v8, "joinableState");
    LUI_Model_SetString(v13, "Public");
    if ( LUI_CoD_InFrontend() )
    {
      v14 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.lobby");
      v15 = LUI_Model_CreateModelFromPath(v14, "partyUIRoot");
      if ( !PartyData->inParty || PartyData->areWeHost )
      {
        if ( byte_154C3E4D9 )
        {
          Com_Printf(25, "LUI_DataBindingLobby_UpdateUIRoot party [%s] setting party root PartyUIRoot::FREE from %d\n", PartyData->partyName, (unsigned __int8)byte_154C3E4D9);
          byte_154C3E4D9 = 0;
        }
        v18 = 0;
      }
      else
      {
        UIRoot = Party_GetUIRoot(PartyData);
        v17 = UIRoot;
        v18 = (unsigned __int8)UIRoot;
        if ( byte_154C3E4D9 != UIRoot )
        {
          LODWORD(fmt) = (unsigned __int8)byte_154C3E4D9;
          Com_Printf(25, "LUI_DataBindingLobby_UpdateUIRoot party [%s] setting party root %d from %d\n", PartyData->partyName, (unsigned __int8)UIRoot, fmt);
          byte_154C3E4D9 = v17;
        }
      }
      LUI_Model_SetInt(v15, v18);
      v19 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.lobby.teamsVisible");
      v20 = DVARBOOL_party_teamsVisible;
      v21 = v19;
      if ( !DVARBOOL_party_teamsVisible && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamsVisible") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      LUI_Model_SetBool(v21, v20->current.enabled);
      if ( PartyData->inParty )
      {
        v22 = LUI_Model_CreateModelFromPath(v14, "splitscreenPromptText");
        if ( CL_Mgr_CanSignInMorePlayers() && LUI_IsTopSignInMenu() )
        {
          PartyMemberCount = GetPartyMemberCount();
          v24 = DVARINT_party_maxplayers;
          v25 = PartyMemberCount;
          if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v24);
          integer = v24->current.integer;
          v27 = 1;
          if ( v25 < integer )
            integer = v25;
          if ( integer > 1 )
            v27 = integer;
          UI_FeederItemText_NonPlayingLocalClients(LOCAL_CLIENT_0, v27, v27, outBuf, 0x400ui64);
        }
        else
        {
          outBuf[0] = 0;
        }
        LUI_Model_SetString(v22, outBuf);
        v28 = LUI_Model_CreateModelFromPath(v14, "inSplitScreen");
        LocalClientActiveCount = CL_GetLocalClientActiveCount();
        LUI_Model_SetBool(v28, LocalClientActiveCount > 1);
      }
    }
    if ( PartyData->inParty )
    {
      v30 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.lobby");
      LUI_DataBinding_PushLobbyDataToModel(PartyData, v30);
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
LUI_DataBinding_PushLobbyDataToModel
==============
*/
void LUI_DataBinding_PushLobbyDataToModel(const PartyData *partyData, unsigned __int16 baseModel)
{
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v7; 
  int NumGameSlots; 
  unsigned __int16 v9; 
  bool IsPrivateParty; 
  unsigned __int16 v11; 
  bool v12; 
  const char *MapName; 
  int MapIndex; 
  int MapSource; 
  unsigned __int16 v16; 
  bool HaveMapPack; 
  int IsWaitingForMembers; 
  unsigned __int16 v19; 
  bool v20; 
  unsigned __int16 v21; 
  const char *CurrentMapName; 
  unsigned __int16 v23; 
  const char *CurrentMapReference; 
  unsigned __int16 v25; 
  const char *CurrentMapImage; 
  unsigned __int16 v27; 
  const dvar_t *v28; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  const char *Gametype; 
  const char *GameTypeDisplayName; 
  unsigned __int16 v33; 
  const char *v34; 
  unsigned __int16 v35; 
  const dvar_t *v36; 
  unsigned __int16 v37; 
  unsigned __int16 v38; 
  const dvar_t *v39; 
  unsigned __int16 v40; 
  unsigned __int16 v41; 
  bool IsGameStartRequested; 
  unsigned __int16 v43; 
  bool IsMatchmaking; 
  unsigned __int16 v45; 
  const char *v46; 
  int IsWaitingFor; 
  const char *v49; 
  unsigned __int16 v50; 
  unsigned __int16 v51; 
  int ControllerFromClient; 
  bool v53; 
  bool LobbyCommitReadyStatus; 
  bool v55; 
  bool v56; 
  bool v57; 
  unsigned __int16 v58; 
  unsigned __int16 v59; 
  bool v60; 
  unsigned __int16 v61; 
  int v62; 
  int v63; 
  const dvar_t *v64; 
  const dvar_t *v69; 
  bool enabled; 
  bool v71; 
  int v72; 
  int v73; 
  int DraftLoadoutTimer; 
  int DraftWeaponTimer; 
  int DraftRigTimer; 
  unsigned __int16 v77; 
  unsigned __int16 v78; 
  unsigned __int16 v79; 
  unsigned __int16 v80; 
  unsigned __int16 v81; 
  unsigned __int16 v82; 
  ConversionArguments arguments; 
  char dest[1024]; 

  if ( !partyData->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_lobby.cpp", 1275, ASSERT_TYPE_ASSERT, "(partyData->inParty)", (const char *)&queryFormat, "partyData->inParty") )
    __debugbreak();
  ModelFromPath = LUI_Model_CreateModelFromPath(baseModel, "areWeGameHost");
  LUI_Model_SetBool(ModelFromPath, partyData->areWeHost != 0);
  v7 = LUI_Model_CreateModelFromPath(baseModel, "maxClientCount");
  NumGameSlots = Party_GetNumGameSlots(partyData);
  LUI_Model_SetInt(v7, NumGameSlots);
  v9 = LUI_Model_CreateModelFromPath(baseModel, "isPrivateParty");
  IsPrivateParty = Party_IsPrivateParty(partyData);
  LUI_Model_SetBool(v9, IsPrivateParty);
  v11 = LUI_Model_CreateModelFromPath(baseModel, "isPrivatePartyHost");
  v12 = Party_IsPrivateParty(partyData) && partyData->areWeHost;
  LUI_Model_SetBool(v11, v12);
  MapName = Party_GetMapName();
  MapIndex = Live_GetMapIndex(MapName);
  MapSource = Live_GetMapSource(MapIndex);
  v16 = LUI_Model_CreateModelFromPath(baseModel, "everyoneHasMap");
  HaveMapPack = Party_PartyMembersHaveMapPack(partyData, MapSource);
  LUI_Model_SetBool(v16, HaveMapPack);
  LOWORD(MapSource) = LUI_Model_CreateModelFromPath(baseModel, "isHostWaitingOnMembers");
  IsWaitingForMembers = Party_IsWaitingForMembers(partyData);
  LUI_Model_SetBool(MapSource, IsWaitingForMembers != 0);
  v19 = LUI_Model_CreateModelFromPath(baseModel, "partyClientsUpToDate");
  v20 = Lobby_AreWeHost() && PartyHost_ArePresentClientsUpToDate(partyData);
  LUI_Model_SetBool(v19, v20);
  v21 = LUI_Model_CreateModelFromPath(baseModel, "mapName");
  CurrentMapName = UI_GetCurrentMapName();
  LUI_Model_SetString(v21, CurrentMapName);
  v23 = LUI_Model_CreateModelFromPath(baseModel, "mapRef");
  CurrentMapReference = UI_GetCurrentMapReference();
  LUI_Model_SetString(v23, CurrentMapReference);
  v25 = LUI_Model_CreateModelFromPath(baseModel, "mapImage");
  CurrentMapImage = UI_GetCurrentMapImage();
  if ( CurrentMapImage && *CurrentMapImage )
    LUI_Model_SetString(v25, CurrentMapImage);
  v27 = LUI_Model_CreateModelFromPath(baseModel, "missionName");
  v28 = DVARSTR_ui_cpmission;
  v29 = v27;
  if ( !DVARSTR_ui_cpmission && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_cpmission") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  LUI_Model_SetString(v29, v28->current.string);
  v30 = LUI_Model_CreateModelFromPath(baseModel, "gameTypeName");
  Gametype = Party_GetGametype();
  GameTypeDisplayName = UI_GetGameTypeDisplayName(Gametype);
  LUI_Model_SetString(v30, GameTypeDisplayName);
  v33 = LUI_Model_CreateModelFromPath(baseModel, "gameType");
  v34 = Party_GetGametype();
  LUI_Model_SetString(v33, v34);
  v35 = LUI_Model_CreateModelFromPath(baseModel, "isHardcoreGameType");
  v36 = DVARBOOL_ui_hardcore;
  v37 = v35;
  if ( !DVARBOOL_ui_hardcore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_hardcore") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  LUI_Model_SetBool(v37, v36->current.enabled);
  v38 = LUI_Model_CreateModelFromPath(baseModel, "isRealismGameType");
  v39 = DVARBOOL_ui_tactical;
  v40 = v38;
  if ( !DVARBOOL_ui_tactical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_tactical") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  LUI_Model_SetBool(v40, v39->current.enabled);
  v41 = LUI_Model_CreateModelFromPath(baseModel, "isGameStartRequested");
  IsGameStartRequested = PartyHost_IsGameStartRequested(partyData);
  LUI_Model_SetBool(v41, IsGameStartRequested);
  v43 = LUI_Model_CreateModelFromPath(baseModel, "isMatchmaking");
  IsMatchmaking = OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
  LUI_Model_SetBool(v43, IsMatchmaking);
  v45 = LUI_Model_CreateModelFromPath(baseModel, "findMatchButtonWaitStatus");
  memset_0(dest, 0, sizeof(dest));
  if ( Party_IsPrivateParty(partyData) )
  {
    if ( partyData->areWeHost )
    {
      IsWaitingFor = Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor(partyData);
      if ( IsWaitingFor >= 0 )
      {
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vpxor   xmm1, xmm1, xmm1
        }
        *(_QWORD *)&arguments.argCount = 1i64;
        __asm { vmovdqu xmmword ptr [rsp+4E8h+arguments.args+8], xmm0 }
        arguments.args[0] = partyData->partyMembers[IsWaitingFor].info.gamertag;
        __asm
        {
          vmovdqu xmmword ptr [rsp+4E8h+arguments.args+18h], xmm1
          vmovdqu xmmword ptr [rsp+4E8h+arguments.args+28h], xmm0
          vmovdqu xmmword ptr [rsp+4E8h+arguments.args+38h], xmm1
        }
        v49 = UI_SafeTranslateString("MENU/WAITING_FOR_PARTY_MEMBER");
        UI_ReplaceConversions(v49, &arguments, dest, 0x400ui64);
      }
    }
    else
    {
      v46 = SEH_SafeTranslateString("MENU/WAITING_FOR_HOST");
      Core_strcpy(dest, 0x400ui64, v46);
    }
  }
  LUI_Model_SetString(v45, dest);
  v50 = LUI_Model_CreateModelFromPath(baseModel, "areTeamsRostersComplete");
  v51 = LUI_Model_CreateModelFromPath(baseModel, "areAllPlayersCommitReady");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v53 = Live_IsInGameBattlesGame();
  LobbyCommitReadyStatus = GameBattles_GetLobbyCommitReadyStatus();
  v55 = GameBattles_AreTeamsRostersComplete(ControllerFromClient);
  v56 = v53 && v55;
  LUI_Model_SetBool(v50, v56);
  v57 = v53 && LobbyCommitReadyStatus;
  LUI_Model_SetBool(v51, v57);
  v77 = LUI_Model_CreateModelFromPath(baseModel, "isCodCastingEnabled");
  v58 = v77;
  v78 = LUI_Model_CreateModelFromPath(baseModel, "areMLGRulesEnabled");
  v79 = LUI_Model_CreateModelFromPath(baseModel, "isTeamAssignmentEnabled");
  v80 = LUI_Model_CreateModelFromPath(baseModel, "draftLoadoutTimer");
  v81 = LUI_Model_CreateModelFromPath(baseModel, "draftWeaponTimer");
  v82 = LUI_Model_CreateModelFromPath(baseModel, "draftRigTimer");
  v59 = LUI_Model_CreateModelFromPath(baseModel, "isUIFadingOut");
  v60 = 0;
  v61 = LUI_Model_CreateModelFromPath(baseModel, "timeRemaining");
  if ( PartyUI_IsMatchStart(partyData) )
  {
    v62 = Sys_Milliseconds();
    v63 = Party_GetGameStartTime(partyData) - v62;
    if ( v63 > 0 )
    {
      v64 = DCONST_DVARINT_lui_uiFadeOutThreshold;
      if ( !DCONST_DVARINT_lui_uiFadeOutThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_uiFadeOutThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      v60 = v63 < v64->current.integer;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
    }
    v58 = v77;
    __asm { vcvttss2si edx, xmm1 }
  }
  else
  {
    _EDX = -1;
  }
  LUI_Model_SetInt(v61, _EDX);
  LUI_Model_SetBool(v59, v60);
  v69 = DVARBOOL_com_devCodcasterEnabled;
  if ( !DVARBOOL_com_devCodcasterEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_devCodcasterEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  enabled = v69->current.enabled;
  v71 = Party_CheckCodcastingEnabled(partyData) == 1 || enabled;
  LUI_Model_SetBool(v58, v71);
  v72 = Party_CheckUsesMLGRules(partyData);
  LUI_Model_SetBool(v78, v72 == 1);
  v73 = Party_CheckTeamAssignmentEnabled(partyData);
  LUI_Model_SetBool(v79, v73 == 1);
  DraftLoadoutTimer = Party_GetDraftLoadoutTimer(partyData);
  LUI_Model_SetInt(v80, DraftLoadoutTimer);
  DraftWeaponTimer = Party_GetDraftWeaponTimer(partyData);
  LUI_Model_SetInt(v81, DraftWeaponTimer);
  DraftRigTimer = Party_GetDraftRigTimer(partyData);
  LUI_Model_SetInt(v82, DraftRigTimer);
  if ( !v53 )
    LUI_DataBindingLobby_PushMapVoteDataToModel(partyData, baseModel);
}

/*
==============
LUI_DataBinding_UpdateFilteredPlaylistsForCategory
==============
*/
void LUI_DataBinding_UpdateFilteredPlaylistsForCategory(const char *modelPath, bool useHardcore)
{
  bool v2; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  int v6; 
  unsigned int v7; 
  signed int i; 
  unsigned int CategoryIndex; 
  int ItemCategoryClass; 
  bool IsCategoryFiltered; 
  bool IsCategoryHardcore; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  int v15; 
  unsigned __int16 v16; 
  const char *ItemSmallImage; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  int CurrentCategoryClass; 
  char dest[64]; 

  v2 = useHardcore;
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, modelPath);
  CurrentCategoryClass = Playlist_GetCurrentCategoryClass();
  v6 = CurrentCategoryClass;
  v7 = 0;
  for ( i = 0; i < Playlist_GetCategoryCount(0); ++i )
  {
    CategoryIndex = Playlist_GetCategoryIndex(LOCAL_CLIENT_0, 0, i);
    ItemCategoryClass = Playlist_GetItemCategoryClass(LOCAL_CLIENT_0, 0, i);
    if ( ItemCategoryClass != 2 && (ItemCategoryClass & v6) == 0 || !Playlist_CanShowItem(LOCAL_CLIENT_0, 0, CategoryIndex) )
      continue;
    IsCategoryFiltered = Playlist_IsCategoryFiltered(LOCAL_CLIENT_0, i);
    IsCategoryHardcore = Playlist_IsCategoryHardcore(LOCAL_CLIENT_0, i);
    if ( v2 )
    {
      if ( IsCategoryHardcore )
        goto LABEL_10;
    }
    else if ( IsCategoryFiltered && !IsCategoryHardcore )
    {
LABEL_10:
      v13 = LUI_Model_CreateModelFromPath(ModelFromPath, "image");
      v14 = LUI_Model_CreateModelFromPath(ModelFromPath, "playlistIndex");
      v15 = 0;
      if ( Playlist_GetCategoryCount(CategoryIndex) > 0 )
      {
        do
        {
          if ( Playlist_CanShowItem(LOCAL_CLIENT_0, CategoryIndex, v15) && Playlist_IsPlaylistFiltered(LOCAL_CLIENT_0, CategoryIndex, v15) )
          {
            Com_sprintf(dest, 0x40ui64, "%i", v7);
            v16 = LUI_Model_CreateModelFromPath(v13, dest);
            ItemSmallImage = Playlist_GetItemSmallImage(LOCAL_CLIENT_0, CategoryIndex, v15);
            LUI_Model_SetString(v16, ItemSmallImage);
            v18 = LUI_Model_CreateModelFromPath(v14, dest);
            LUI_Model_SetInt(v18, v15);
            ++v7;
          }
          ++v15;
        }
        while ( v15 < Playlist_GetCategoryCount(CategoryIndex) );
        v2 = useHardcore;
      }
    }
    v6 = CurrentCategoryClass;
  }
  v19 = LUI_Model_CreateModelFromPath(ModelFromPath, "count");
  LUI_Model_SetInt(v19, v7);
}

/*
==============
LUI_DataBinding_UpdatePlaylists
==============
*/
void LUI_DataBinding_UpdatePlaylists(const char *modelPath)
{
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  unsigned int v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  signed int v7; 
  int i; 
  int CategoryIndex; 
  int ItemCategoryClass; 
  int v11; 
  unsigned __int16 v12; 
  const char *ItemName; 
  unsigned __int16 v14; 
  PlaylistLockState LockState; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  const char *ItemDesc; 
  unsigned __int16 v20; 
  const char *ItemImage; 
  unsigned __int16 v22; 
  int v23; 
  unsigned int v24; 
  int ItemPlaylistId; 
  unsigned __int16 v26; 
  const char *v27; 
  unsigned __int16 v28; 
  const char *v29; 
  unsigned __int16 v30; 
  const char *v31; 
  unsigned __int16 v32; 
  const char *ItemSmallImage; 
  unsigned __int16 v34; 
  unsigned __int16 v35; 
  int MaxLobbySize; 
  unsigned __int16 v37; 
  int MinLobbySize; 
  unsigned __int16 v39; 
  int MaxPartySize; 
  unsigned __int16 v41; 
  int MinPartySize; 
  unsigned __int16 v43; 
  int TimeLimit; 
  unsigned __int16 v45; 
  int ScoreLimit; 
  unsigned __int16 v47; 
  int NumRounds; 
  unsigned __int16 v49; 
  bool IsNew; 
  unsigned __int16 v51; 
  int XPScale; 
  unsigned __int16 v53; 
  int WeaponXPScale; 
  unsigned __int16 v55; 
  int BattlePassXPScale; 
  unsigned __int16 v57; 
  bool IsLimitedTime; 
  unsigned __int16 v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  unsigned __int16 v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  unsigned __int16 v68; 
  unsigned __int16 v69; 
  unsigned __int16 v70; 
  unsigned __int16 v71; 
  unsigned __int16 v72; 
  unsigned __int16 v73; 
  unsigned __int16 v74; 
  unsigned __int16 v75; 
  unsigned __int16 v76; 
  unsigned __int16 v77; 
  unsigned __int16 v78; 
  unsigned __int16 v79; 
  unsigned __int16 v80; 
  unsigned __int16 v81; 
  unsigned __int16 v82; 
  unsigned __int16 v83; 
  unsigned __int16 v84; 
  unsigned __int16 v85; 
  unsigned __int16 v86; 
  unsigned __int16 v87; 
  int v88; 
  signed int v89; 
  int CurrentCategoryClass; 
  char path[64]; 
  char dest[64]; 

  if ( CL_GetLocalClientActiveCount() <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_lobby.cpp", 1450, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientActiveCount() > 0)", (const char *)&queryFormat, "CL_GetLocalClientActiveCount() > 0") )
    __debugbreak();
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, modelPath);
  v4 = 0;
  v86 = ModelFromPath;
  v88 = 0;
  v5 = ModelFromPath;
  v87 = LUI_Model_CreateModelFromPath(ModelFromPath, (const char *)&stru_143C9A1A4);
  v6 = v87;
  v62 = LUI_Model_CreateModelFromPath(v5, "disabled");
  v63 = LUI_Model_CreateModelFromPath(v5, "index");
  v64 = LUI_Model_CreateModelFromPath(v5, "type");
  v65 = LUI_Model_CreateModelFromPath(v5, "desc");
  v66 = LUI_Model_CreateModelFromPath(v5, "image");
  v7 = 0;
  CurrentCategoryClass = Playlist_GetCurrentCategoryClass();
  v89 = 0;
  for ( i = CurrentCategoryClass; v7 < Playlist_GetCategoryCount(0); v89 = v7 )
  {
    CategoryIndex = Playlist_GetCategoryIndex(LOCAL_CLIENT_0, 0, v7);
    ItemCategoryClass = Playlist_GetItemCategoryClass(LOCAL_CLIENT_0, 0, v7);
    v11 = ItemCategoryClass;
    if ( (ItemCategoryClass == 2 || (ItemCategoryClass & i) != 0) && Playlist_CanShowItem(LOCAL_CLIENT_0, 0, CategoryIndex) )
    {
      Com_sprintf(dest, 0x40ui64, "%i", v4);
      v12 = LUI_Model_CreateModelFromPath(v6, dest);
      ItemName = Playlist_GetItemName(LOCAL_CLIENT_0, 0, v7);
      LUI_Model_SetString(v12, ItemName);
      v14 = LUI_Model_CreateModelFromPath(v62, dest);
      LockState = Playlist_GetLockState(LOCAL_CLIENT_0, 0, v7);
      LUI_Model_SetBool(v14, LockState != UNLOCKED);
      v16 = LUI_Model_CreateModelFromPath(v63, dest);
      LUI_Model_SetInt(v16, CategoryIndex);
      v17 = LUI_Model_CreateModelFromPath(v64, dest);
      LUI_Model_SetInt(v17, v11);
      v18 = LUI_Model_CreateModelFromPath(v65, dest);
      ItemDesc = Playlist_GetItemDesc(LOCAL_CLIENT_0, 0, v7);
      LUI_Model_SetString(v18, ItemDesc);
      v20 = LUI_Model_CreateModelFromPath(v66, dest);
      ItemImage = Playlist_GetItemImage(LOCAL_CLIENT_0, 0, v7);
      LUI_Model_SetString(v20, ItemImage);
      v85 = LUI_Model_CreateModelFromPath(v5, dest);
      v22 = v85;
      v67 = LUI_Model_CreateModelFromPath(v85, "playlist.name");
      v68 = LUI_Model_CreateModelFromPath(v85, "playlist.index");
      v69 = LUI_Model_CreateModelFromPath(v85, "playlist.desc");
      v70 = LUI_Model_CreateModelFromPath(v85, "playlist.image");
      v71 = LUI_Model_CreateModelFromPath(v85, "playlist.smallImage");
      v72 = LUI_Model_CreateModelFromPath(v85, "playlist.maxPlayerSize");
      v73 = LUI_Model_CreateModelFromPath(v85, "playlist.minPlayerSize");
      v74 = LUI_Model_CreateModelFromPath(v85, "playlist.maxPartySize");
      v75 = LUI_Model_CreateModelFromPath(v85, "playlist.minPartySize");
      v76 = LUI_Model_CreateModelFromPath(v85, "playlist.timeLimit");
      v77 = LUI_Model_CreateModelFromPath(v85, "playlist.scoreLimit");
      v78 = LUI_Model_CreateModelFromPath(v85, "playlist.numRounds");
      v79 = LUI_Model_CreateModelFromPath(v85, "playlist.isNew");
      v80 = LUI_Model_CreateModelFromPath(v85, "playlist.xpScale");
      v81 = LUI_Model_CreateModelFromPath(v85, "playlist.weaponXpScale");
      v82 = LUI_Model_CreateModelFromPath(v85, "playlist.battlePassXpScale");
      v83 = LUI_Model_CreateModelFromPath(v85, "playlist.isLimitedTime");
      v84 = LUI_Model_CreateModelFromPath(v85, "playlist.ID");
      v23 = 0;
      v24 = 0;
      if ( Playlist_GetCategoryCount(CategoryIndex) > 0 )
      {
        do
        {
          if ( Playlist_CanShowItem(LOCAL_CLIENT_0, CategoryIndex, v23) )
          {
            ItemPlaylistId = Playlist_GetItemPlaylistId(LOCAL_CLIENT_0, CategoryIndex, v23);
            Com_sprintf(path, 0x40ui64, "%i", v24);
            v26 = LUI_Model_CreateModelFromPath(v67, path);
            v27 = Playlist_GetItemName(LOCAL_CLIENT_0, CategoryIndex, v23);
            LUI_Model_SetString(v26, v27);
            v28 = LUI_Model_CreateModelFromPath(v69, path);
            v29 = Playlist_GetItemDesc(LOCAL_CLIENT_0, CategoryIndex, v23);
            LUI_Model_SetString(v28, v29);
            v30 = LUI_Model_CreateModelFromPath(v70, path);
            v31 = Playlist_GetItemImage(LOCAL_CLIENT_0, CategoryIndex, v23);
            LUI_Model_SetString(v30, v31);
            v32 = LUI_Model_CreateModelFromPath(v71, path);
            ItemSmallImage = Playlist_GetItemSmallImage(LOCAL_CLIENT_0, CategoryIndex, v23);
            LUI_Model_SetString(v32, ItemSmallImage);
            v34 = LUI_Model_CreateModelFromPath(v68, path);
            LUI_Model_SetInt(v34, v23);
            v35 = LUI_Model_CreateModelFromPath(v72, path);
            MaxLobbySize = Playlist_GetMaxLobbySize(ItemPlaylistId);
            LUI_Model_SetInt(v35, MaxLobbySize);
            v37 = LUI_Model_CreateModelFromPath(v73, path);
            MinLobbySize = Playlist_GetMinLobbySize(ItemPlaylistId);
            LUI_Model_SetInt(v37, MinLobbySize);
            v39 = LUI_Model_CreateModelFromPath(v74, path);
            MaxPartySize = Playlist_GetMaxPartySize(ItemPlaylistId);
            LUI_Model_SetInt(v39, MaxPartySize);
            v41 = LUI_Model_CreateModelFromPath(v75, path);
            MinPartySize = Playlist_GetMinPartySize(ItemPlaylistId);
            LUI_Model_SetInt(v41, MinPartySize);
            v43 = LUI_Model_CreateModelFromPath(v76, path);
            TimeLimit = Playlist_GetTimeLimit(ItemPlaylistId);
            LUI_Model_SetInt(v43, TimeLimit);
            v45 = LUI_Model_CreateModelFromPath(v77, path);
            ScoreLimit = Playlist_GetScoreLimit(ItemPlaylistId);
            LUI_Model_SetInt(v45, ScoreLimit);
            v47 = LUI_Model_CreateModelFromPath(v78, path);
            NumRounds = Playlist_GetNumRounds(ItemPlaylistId);
            LUI_Model_SetInt(v47, NumRounds);
            v49 = LUI_Model_CreateModelFromPath(v79, path);
            IsNew = Playlist_IsNew(ItemPlaylistId);
            LUI_Model_SetInt(v49, IsNew);
            v51 = LUI_Model_CreateModelFromPath(v80, path);
            XPScale = Playlist_GetXPScale(ItemPlaylistId);
            LUI_Model_SetInt(v51, XPScale);
            v53 = LUI_Model_CreateModelFromPath(v81, path);
            WeaponXPScale = Playlist_GetWeaponXPScale(ItemPlaylistId);
            LUI_Model_SetInt(v53, WeaponXPScale);
            v55 = LUI_Model_CreateModelFromPath(v82, path);
            BattlePassXPScale = Playlist_GetBattlePassXPScale(ItemPlaylistId);
            LUI_Model_SetInt(v55, BattlePassXPScale);
            v57 = LUI_Model_CreateModelFromPath(v83, path);
            IsLimitedTime = Playlist_IsLimitedTime(ItemPlaylistId);
            LUI_Model_SetBool(v57, IsLimitedTime);
            v59 = LUI_Model_CreateModelFromPath(v84, path);
            LUI_Model_SetInt(v59, ItemPlaylistId);
            ++v24;
          }
          ++v23;
        }
        while ( v23 < Playlist_GetCategoryCount(CategoryIndex) );
        v7 = v89;
        v22 = v85;
        v5 = v86;
      }
      v60 = LUI_Model_CreateModelFromPath(v22, "playlist.count");
      LUI_Model_SetInt(v60, v24);
      i = CurrentCategoryClass;
      v4 = v88 + 1;
      v6 = v87;
      ++v88;
    }
    ++v7;
  }
  v61 = LUI_Model_CreateModelFromPath(v5, "count");
  LUI_Model_SetInt(v61, v4);
}

/*
==============
LUI_DatabindingLobby_PushWeaponCustomization
==============
*/
void LUI_DatabindingLobby_PushWeaponCustomization(const unsigned __int16 memberModel, PlayerProfileData *playerCardData)
{
  WeaponCustomizationSet *weaponCustomizationPublic; 
  unsigned __int16 ModelFromPath; 
  int v6; 
  const char *weaponCamo; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  const char *v12; 
  unsigned int i; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  unsigned __int8 *p_variantID; 
  unsigned int v18; 
  const char *v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  char path[64]; 
  char dest[64]; 

  weaponCustomizationPublic = playerCardData->weaponCustomizationPublic;
  if ( Com_PlayerData_GetLoadoutStatsGroupForGameMode() == STATSGROUP_PRIVATELOADOUTS )
    weaponCustomizationPublic = playerCardData->weaponCustomizationPrivate;
  ModelFromPath = LUI_Model_CreateModelFromPath(memberModel, "weaponSetup");
  v26 = ModelFromPath;
  v6 = 0;
  weaponCamo = weaponCustomizationPublic->weaponCamo;
  do
  {
    Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v6);
    v25 = LUI_Model_CreateModelFromPath(ModelFromPath, dest);
    v8 = LUI_Model_CreateModelFromPath(v25, "weaponLootID");
    LUI_Model_SetInt(v8, weaponCustomizationPublic->weapon);
    v9 = LUI_Model_CreateModelFromPath(v25, "cosmeticAttachment");
    LUI_Model_SetString(v9, weaponCamo + 10245);
    v10 = LUI_Model_CreateModelFromPath(v25, "weaponCamo");
    LUI_Model_SetString(v10, weaponCamo);
    v11 = LUI_Model_CreateModelFromPath(v25, "sticker");
    v12 = weaponCamo + 6149;
    for ( i = 0; i < 4; ++i )
    {
      Com_sprintf(path, 0x40ui64, "%i", i);
      v14 = LUI_Model_CreateModelFromPath(v11, path);
      LUI_Model_SetString(v14, v12);
      v12 += 1024;
    }
    v15 = LUI_Model_CreateModelFromPath(v25, "stickerCount");
    LUI_Model_SetInt(v15, 4);
    v16 = LUI_Model_CreateModelFromPath(v25, "attachment");
    p_variantID = &weaponCustomizationPublic->attachmentSetup[0].variantID;
    v18 = 0;
    v19 = weaponCamo + 1024;
    do
    {
      Com_sprintf(path, 0x40ui64, "%i", v18);
      v20 = LUI_Model_CreateModelFromPath(v16, path);
      v21 = LUI_Model_CreateModelFromPath(v20, "variant");
      LUI_Model_SetInt(v21, *p_variantID);
      v22 = LUI_Model_CreateModelFromPath(v20, "attachment");
      LUI_Model_SetString(v22, v19);
      ++v18;
      v19 += 1025;
      p_variantID += 1025;
    }
    while ( v18 < 5 );
    v23 = LUI_Model_CreateModelFromPath(v25, "attachmentCount");
    LUI_Model_SetInt(v23, 5);
    ModelFromPath = v26;
    ++v6;
    weaponCamo += 11276;
    ++weaponCustomizationPublic;
  }
  while ( v6 < 2 );
  v24 = LUI_Model_CreateModelFromPath(memberModel, "weaponCount");
  LUI_Model_SetInt(v24, 2);
}

