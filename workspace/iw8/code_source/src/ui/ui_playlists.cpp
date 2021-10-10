/*
==============
PlaylistFeeder_GetPreselectedPlaylistIndexInCategory
==============
*/

int __fastcall PlaylistFeeder_GetPreselectedPlaylistIndexInCategory()
{
  return ?PlaylistFeeder_GetPreselectedPlaylistIndexInCategory@@YAHXZ();
}

/*
==============
PlaylistFeeder_GetPreselectedPlaylistCategory
==============
*/

int __fastcall PlaylistFeeder_GetPreselectedPlaylistCategory()
{
  return ?PlaylistFeeder_GetPreselectedPlaylistCategory@@YAHXZ();
}

/*
==============
Playlist_CanShowItem
==============
*/

bool __fastcall Playlist_CanShowItem(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_CanShowItem@@YA_NW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
PlaylistFeeder_MissingMapError
==============
*/

void __fastcall PlaylistFeeder_MissingMapError(bool isElite, unsigned int missingPacks)
{
  ?PlaylistFeeder_MissingMapError@@YAX_NI@Z(isElite, missingPacks);
}

/*
==============
UI_UpdatePulsePlaylistActive
==============
*/

void UI_UpdatePulsePlaylistActive(void)
{
  ?UI_UpdatePulsePlaylistActive@@YAXXZ();
}

/*
==============
UI_ValidatePlaylistNum
==============
*/

void UI_ValidatePlaylistNum(void)
{
  ?UI_ValidatePlaylistNum@@YAXXZ();
}

/*
==============
Playlist_DoPlaylistId
==============
*/

bool __fastcall Playlist_DoPlaylistId(LocalClientNum_t clientNum, unsigned int category, unsigned int playlistId)
{
  return ?Playlist_DoPlaylistId@@YA_NW4LocalClientNum_t@@II@Z(clientNum, category, playlistId);
}

/*
==============
Playlist_GetLockState
==============
*/

PlaylistLockState __fastcall Playlist_GetLockState(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetLockState@@YA?AW4PlaylistLockState@@W4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetItemPlaylistId
==============
*/

int __fastcall Playlist_GetItemPlaylistId(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemPlaylistId@@YAHW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
PlayList_StartLobby
==============
*/

void __fastcall PlayList_StartLobby(const int localcontrollerIndex)
{
  ?PlayList_StartLobby@@YAXH@Z(localcontrollerIndex);
}

/*
==============
PlaylistFeeder_IsLocked
==============
*/

PlaylistLockState __fastcall PlaylistFeeder_IsLocked(unsigned int category, unsigned int index, const int partyCount)
{
  return ?PlaylistFeeder_IsLocked@@YA?AW4PlaylistLockState@@IIH@Z(category, index, partyCount);
}

/*
==============
Playlist_DoAction
==============
*/

bool __fastcall Playlist_DoAction(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_DoAction@@YA_NW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetLocalizedGametypeName
==============
*/

const char *__fastcall Playlist_GetLocalizedGametypeName(const int entryNum)
{
  return ?Playlist_GetLocalizedGametypeName@@YAPEBDH@Z(entryNum);
}

/*
==============
PlaylistFeeder_GetFirstPlaylistNum
==============
*/

int __fastcall PlaylistFeeder_GetFirstPlaylistNum()
{
  return ?PlaylistFeeder_GetFirstPlaylistNum@@YAHXZ();
}

/*
==============
UI_SetDVarsForVoteEntry
==============
*/

void __fastcall UI_SetDVarsForVoteEntry(const int entryNum, const int index)
{
  ?UI_SetDVarsForVoteEntry@@YAXHH@Z(entryNum, index);
}

/*
==============
PlayList_StartLobby
==============
*/
void PlayList_StartLobby(const int localcontrollerIndex)
{
  LocalClientNum_t localClientNum; 
  __int64 v2; 
  CmdText *v3; 
  int v4; 
  int cmdsize; 
  int *p_cmdsize; 
  int *p_maxsize; 
  int v8; 
  __int64 i; 
  int v10; 
  int v11; 
  int v12; 
  __int64 j; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  PartyActiveClient outPartyActiveClient; 

  localClientNum = Party_GetMainActiveClient(&g_partyData, localcontrollerIndex).localClientNum;
  v2 = localClientNum;
  v3 = &s_cmd_textArray[localClientNum];
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v4 = truncate_cast<int,unsigned __int64>(0xBui64);
  cmdsize = s_cmd_textArray[v2].cmdsize;
  p_cmdsize = &s_cmd_textArray[v2].cmdsize;
  p_maxsize = &s_cmd_textArray[v2].maxsize;
  v8 = v4 + 1;
  if ( cmdsize + v4 + 1 <= *p_maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      v3->data[v8 + i] = v3->data[i];
    memcpy_0(v3->data, "xstartlobby", v4);
    v3->data[v8 - 1] = 10;
    *p_cmdsize += v8;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v10 = truncate_cast<int,unsigned __int64>(0x12ui64);
  v11 = *p_cmdsize;
  v12 = v10 + 1;
  if ( *p_cmdsize + v10 + 1 <= *p_maxsize )
  {
    for ( j = v11 - 1; j >= 0; --j )
      v3->data[v12 + j] = v3->data[j];
    memcpy_0(v3->data, "updategamerprofile", v10);
    v3->data[v12 - 1] = 10;
    *p_cmdsize += v12;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  if ( Party_GetSecondaryActiveClient(&g_partyData, &outPartyActiveClient) )
  {
    v14 = outPartyActiveClient.localClientNum;
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v15 = truncate_cast<int,unsigned __int64>(0x12ui64);
    v16 = s_cmd_textArray[v14].cmdsize;
    v17 = v15 + 1;
    if ( v16 + v15 + 1 <= s_cmd_textArray[v14].maxsize )
    {
      v18 = v16 - 1;
      v19 = v16 - 1;
      if ( v18 >= 0 )
      {
        do
        {
          s_cmd_textArray[v14].data[v17 + v19] = s_cmd_textArray[v14].data[v19];
          --v19;
        }
        while ( v19 >= 0 );
      }
      memcpy_0(s_cmd_textArray[v14].data, "updategamerprofile", v17 - 1);
      s_cmd_textArray[v14].data[v17 - 1] = 10;
      s_cmd_textArray[v14].cmdsize += v17;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
}

/*
==============
PlaylistFeeder_GetFirstPlaylistNum
==============
*/
int PlaylistFeeder_GetFirstPlaylistNum()
{
  __int64 num; 
  __int64 v2; 
  __int64 v3; 
  int numEntries; 

  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( !categories[0].numEntries )
  {
    numEntries = categories[0].numEntries;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( 0 ) < (unsigned)( categories[0].numEntries )", "0 doesn't index categories[0].numEntries\n\t%i not in [0, %i)", 0i64, numEntries) )
      __debugbreak();
  }
  if ( categories[0].entries[0].type == PLAYLIST )
    return Playlist_GetPlaylistNumForId(categories[0].entries[0].num);
  if ( categories[0].entries[0].num >= 0x1Au )
  {
    LODWORD(v3) = 26;
    LODWORD(v2) = categories[0].entries[0].num;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( entry->num ) < (unsigned)( 26 )", "entry->num doesn't index MAX_PLAYLIST_CATEGORIES\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  num = categories[0].entries[0].num;
  if ( categories[num].entries[0].type )
    return 0;
  else
    return Playlist_GetPlaylistNumForId(categories[num].entries[0].num);
}

/*
==============
PlaylistFeeder_GetPreselectedPlaylistCategory
==============
*/
__int64 PlaylistFeeder_GetPreselectedPlaylistCategory()
{
  const dvar_t *v0; 
  int PlaylistIdForNum; 
  categoryEntry *entries; 
  unsigned int i; 
  __int64 v4; 
  categoryEntry *v5; 

  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  UI_ValidatePlaylistNum();
  v0 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v0->current.integer);
  entries = categories[0].entries;
  for ( i = 0; ; ++i )
  {
    v4 = 0i64;
    if ( LOBYTE(entries[20].type) )
      break;
LABEL_11:
    entries += 129;
    if ( (__int64)entries >= (__int64)&playlistStringBuffer.buffer[672] )
      return 0i64;
  }
  v5 = entries;
  while ( v5->type || v5->num != PlaylistIdForNum )
  {
    ++v4;
    ++v5;
    if ( v4 >= LOBYTE(entries[20].type) )
      goto LABEL_11;
  }
  return i;
}

/*
==============
PlaylistFeeder_GetPreselectedPlaylistIndexInCategory
==============
*/
__int64 PlaylistFeeder_GetPreselectedPlaylistIndexInCategory()
{
  const dvar_t *v0; 
  int PlaylistIdForNum; 
  categoryEntry *entries; 
  unsigned int v3; 
  __int64 v4; 
  categoryEntry *v5; 

  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  UI_ValidatePlaylistNum();
  v0 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v0->current.integer);
  entries = categories[0].entries;
  while ( 1 )
  {
    v3 = 0;
    v4 = 0i64;
    if ( LOBYTE(entries[20].type) )
      break;
LABEL_11:
    entries += 129;
    if ( (__int64)entries >= (__int64)&playlistStringBuffer.buffer[672] )
      return 0i64;
  }
  v5 = entries;
  while ( v5->type || v5->num != PlaylistIdForNum )
  {
    ++v3;
    ++v4;
    ++v5;
    if ( v4 >= LOBYTE(entries[20].type) )
      goto LABEL_11;
  }
  return v3;
}

/*
==============
PlaylistFeeder_IsLocked
==============
*/
char PlaylistFeeder_IsLocked(unsigned int category, unsigned int index, const int partyCount)
{
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 *p_numEntries; 
  unsigned int requiredDLCMask; 
  __int64 v8; 
  categoryEntry *v9; 
  __int64 num; 
  const dvar_t *v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  int v19; 
  int v20; 

  v3 = index;
  v4 = category;
  if ( (unsigned int)(partyCount - 1) > 0xC7 )
  {
    v20 = 200;
    v19 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 648, ASSERT_TYPE_ASSERT, "( 1 ) <= ( partyCount ) && ( partyCount ) <= ( 200 )", "partyCount not in [1, MAX_PARTY_MEMBERS]\n\t%i not in [%i, %i]", partyCount, v19, v20) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 651, ASSERT_TYPE_ASSERT, "(HavePlaylists())", (const char *)&queryFormat, "HavePlaylists()") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x1A )
  {
    LODWORD(v18) = 26;
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 652, ASSERT_TYPE_ASSERT, "(unsigned)( category ) < (unsigned)( 26 )", "category doesn't index MAX_PLAYLIST_CATEGORIES\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x14 )
  {
    LODWORD(v18) = 20;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 653, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 20 )", "index doesn't index MAX_CATEGORY_ENTRIES\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  p_numEntries = &categories[v4].numEntries;
  if ( (unsigned int)v3 >= *p_numEntries )
  {
    LODWORD(v18) = *p_numEntries;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 654, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( categories[category].numEntries )", "index doesn't index categories[category].numEntries\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  requiredDLCMask = 2;
  v8 = v3 + 129 * v4;
  v9 = &categories[0].entries[v8];
  if ( v9->type )
    goto LABEL_53;
  num = categories[0].entries[v8].num;
  if ( partyCount > playlists[num].maxPartySize )
    return 3;
  if ( partyCount < playlists[num].minPartySize )
    return 4;
  v12 = DVARBOOL_online_matchmaking_user_dc_required_gate;
  if ( !DVARBOOL_online_matchmaking_user_dc_required_gate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_user_dc_required_gate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled && playlists[num].dedicatedServerRequired && Online_DcQos_IsResultValid(DCQOS_RESULT_DATACENTERS) && Online_DcQos_GetDatacenterCount() > 0 )
    return 5;
LABEL_53:
  if ( !LiveStorage_DoWeHavePlaylists() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 558, ASSERT_TYPE_ASSERT, "(HavePlaylists())", (const char *)&queryFormat, "HavePlaylists()") )
    __debugbreak();
  if ( (unsigned int)v3 >= *p_numEntries )
    return 1;
  if ( disableDLC->current.enabled )
  {
    v13 = 2;
  }
  else
  {
    v14 = v9->num;
    v13 = v9->type ? categories[v14].requiredDLCMask : playlists[v14].requiredDLCMask;
  }
  if ( (~Content_GetAvailableContentPacks() & v13) != 0 )
    return 1;
  if ( !LiveStorage_DoWeHavePlaylists() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 600, ASSERT_TYPE_ASSERT, "(HavePlaylists())", (const char *)&queryFormat, "HavePlaylists()") )
    __debugbreak();
  if ( (unsigned int)v3 >= *p_numEntries )
    return 2;
  if ( !disableDLC->current.enabled )
  {
    v15 = v9->num;
    if ( v9->type )
      requiredDLCMask = categories[v15].requiredDLCMask;
    else
      requiredDLCMask = playlists[v15].requiredDLCMask;
  }
  if ( (~Live_CurrentFullPartyMapPackFlags(&g_partyData) & requiredDLCMask) != 0 )
    return 2;
  else
    return 0;
}

/*
==============
PlaylistFeeder_MissingMapError
==============
*/
void PlaylistFeeder_MissingMapError(bool isElite, unsigned int missingPacks)
{
  unsigned int i; 
  char ActiveGameMode; 
  const char *FirstMapForSource; 

  if ( !missingPacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 718, ASSERT_TYPE_ASSERT, "(missingPacks != 0)", (const char *)&queryFormat, "missingPacks != 0") )
    __debugbreak();
  for ( i = 64; i <= 0x400; i *= 2 )
  {
    if ( (missingPacks & i) == i )
      break;
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  FirstMapForSource = Live_GetFirstMapForSource(i, ActiveGameMode == 3);
  Dvar_SetString_Internal(ui_missingMapName, FirstMapForSource);
}

/*
==============
Playlist_CanShowItem
==============
*/
char Playlist_CanShowItem(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int8 *p_numEntries; 
  __int64 v7; 
  categoryEntry *v8; 
  __int64 v9; 
  char show_only_when_have_entitlement; 
  char *v12; 
  __int64 v13; 
  char *dc_restrict; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  __int64 num; 
  int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int MapPacksUsedByPlaylist; 
  char destString[32]; 

  v3 = category;
  v4 = Playlist_ClampIndex(category, index);
  v5 = v4;
  p_numEntries = &categories[v3].numEntries;
  if ( v4 >= *p_numEntries )
    return 0;
  v7 = 129i64 * (unsigned int)v3 + v4;
  v8 = &categories[0].entries[v7];
  if ( v8->type )
  {
    if ( v8->type != CATEGORY )
      return 0;
    num = categories[0].entries[v7].num;
    if ( !categories[num].numEntries )
      return 0;
    v24 = 0;
    v25 = 0;
    v26 = 0i64;
    do
    {
      v27 = v26 + 129i64 * (unsigned __int8)num;
      if ( categories[0].entries[v27].type == PLAYLIST )
      {
        v28 = categories[0].entries[v27].num;
        if ( !playlists[v28].show_only_when_have_maps || (MapPacksUsedByPlaylist = Playlist_GetMapPacksUsedByPlaylist(v28), (MapPacksUsedByPlaylist & Live_CurrentFullPartyMapPackFlags(&g_partyData)) == MapPacksUsedByPlaylist) )
          ++v24;
      }
      ++v25;
      LOBYTE(num) = v8->num;
      ++v26;
    }
    while ( v25 < categories[(unsigned __int8)num].numEntries );
    return v24 != 0;
  }
  v9 = categories[0].entries[v7].num;
  if ( !playlists[v9].numEntries )
    return 0;
  show_only_when_have_entitlement = playlists[v9].show_only_when_have_entitlement;
  if ( show_only_when_have_entitlement != -1 )
    return !show_only_when_have_entitlement && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_terminal_for_everyone, "online_terminal_for_everyone");
  if ( Online_DcQos_GetBestDatacenterName(destString, 32) )
  {
    v12 = destString;
    v13 = 0x7FFFFFFFi64;
    dc_restrict = playlists[v8->num].dc_restrict;
    if ( !dc_restrict && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v15 = dc_restrict - destString;
    do
    {
      v16 = v12[v15];
      v17 = v13;
      v18 = *v12++;
      --v13;
      if ( !v17 )
        break;
      if ( v16 != v18 )
        goto LABEL_17;
    }
    while ( v16 );
    return 0;
  }
LABEL_17:
  if ( !playlists[v8->num].show_only_when_have_maps )
    return 1;
  if ( !LiveStorage_DoWeHavePlaylists() || (v19 = Playlist_ClampIndex(v3, v5), v19 >= *p_numEntries) || (v20 = 129i64 * (unsigned int)v3 + v19, categories[0].entries[v20].type) )
    v21 = 0;
  else
    v21 = categories[0].entries[v20].num;
  v22 = Playlist_GetMapPacksUsedByPlaylist(v21);
  return (v22 & Live_CurrentFullPartyMapPackFlags(&g_partyData)) == v22;
}

/*
==============
Playlist_ClampIndex
==============
*/
__int64 Playlist_ClampIndex(unsigned int category, unsigned int index)
{
  __int64 v2; 
  unsigned __int8 numEntries; 
  int v7; 

  v2 = category;
  if ( category >= 0x1A )
  {
    v7 = 26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( category ) < (unsigned)( 26 )", "category doesn't index MAX_PLAYLIST_CATEGORIES\n\t%i not in [0, %i)", category, v7) )
      __debugbreak();
  }
  numEntries = categories[v2].numEntries;
  if ( !numEntries )
    return 0i64;
  if ( numEntries > index )
    return index;
  return (unsigned int)numEntries - 1;
}

/*
==============
Playlist_DoAction
==============
*/
bool Playlist_DoAction(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v4; 
  __int64 v6; 
  unsigned int v8; 
  __int64 v9; 

  v4 = category;
  OnlineMatchmakerOmniscient::SetFirstTime(&OnlineMatchmakerOmniscient::ms_instance);
  v6 = v4;
  if ( index == 200 )
  {
    if ( categories[v6].entries[0].type == PLAYLIST )
      return Playlist_DoPlaylistId(clientNum, v4, categories[v6].entries[0].num);
  }
  else
  {
    v8 = Playlist_ClampIndex(v4, index);
    if ( v8 < categories[v6].numEntries )
    {
      v9 = v8 + 129i64 * (unsigned int)v4;
      if ( categories[0].entries[v9].type == PLAYLIST )
        return Playlist_DoPlaylistId(clientNum, v4, categories[0].entries[v9].num);
    }
  }
  return 0;
}

/*
==============
Playlist_DoPlaylistId
==============
*/
char Playlist_DoPlaylistId(LocalClientNum_t clientNum, unsigned int category, unsigned int playlistId)
{
  __int64 v4; 
  int PlaylistNumForId; 
  int ControllerFromClient; 
  int v8; 

  v4 = playlistId;
  Dvar_SetInt_Internal(DVARINT_playlist, 0);
  Dvar_SetInt_Internal(DVARINT_playlistID, 0);
  Dvar_SetInt_Internal(DVARINT_playlistCategory, 0);
  if ( playlists[v4].numEntries )
  {
    PlaylistNumForId = Playlist_GetPlaylistNumForId(v4);
    Dvar_SetInt_Internal(DVARINT_playlist, PlaylistNumForId);
    Dvar_SetInt_Internal(DVARINT_playlistID, v4);
    Dvar_SetInt_Internal(DVARINT_playlistCategory, category);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
    Live_SetPlaylistNum(ControllerFromClient, PlaylistNumForId);
  }
  v8 = CL_Mgr_GetControllerFromClient(clientNum);
  PlayList_StartLobby(v8);
  return 1;
}

/*
==============
Playlist_GetItemPlaylistId
==============
*/
__int64 Playlist_GetItemPlaylistId(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 

  v4 = category;
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  v5 = Playlist_ClampIndex(v4, index);
  if ( v5 >= categories[v4].numEntries )
    return 0i64;
  v6 = v5 + 129i64 * (unsigned int)v4;
  if ( categories[0].entries[v6].type )
    return 0i64;
  else
    return categories[0].entries[v6].num;
}

/*
==============
Playlist_GetLocalizedGametypeName
==============
*/
char *Playlist_GetLocalizedGametypeName(const int entryNum)
{
  const dvar_t *v1; 
  int PlaylistIdForNum; 
  __int64 v4; 
  playlistEntry *Entry; 
  playlistGametype *GameType; 
  __int64 v8; 
  __int64 v9; 

  v1 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v1->current.integer);
  v4 = PlaylistIdForNum;
  if ( (unsigned int)PlaylistIdForNum >= 0x81 )
  {
    LODWORD(v9) = 129;
    LODWORD(v8) = PlaylistIdForNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 745, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (unsigned int)entryNum >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = entryNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 746, ASSERT_TYPE_ASSERT, "(unsigned)( entryNum ) < (unsigned)( 2048 )", "entryNum doesn't index MAX_PLAYLIST_ENTRIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( entryNum >= playlists[v4].numEntries )
    return (char *)&queryFormat.fmt + 3;
  Entry = Playlist_GetEntry(v4, entryNum);
  GameType = Playlist_GetGameType(Entry->gametype);
  if ( !GameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 754, ASSERT_TYPE_ASSERT, "(gametypeEntry)", (const char *)&queryFormat, "gametypeEntry") )
    __debugbreak();
  return GameType->localizedName;
}

/*
==============
Playlist_GetLockState
==============
*/
char Playlist_GetLockState(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  categoryEntry *v10; 
  int ControllerFromClient; 
  int PartyMemberCount; 
  PlaylistLockState v13; 
  int i; 
  unsigned __int64 v15[5]; 
  unsigned __int64 v16; 

  v4 = category;
  v5 = index;
  v7 = category;
  if ( index == 200 )
  {
    if ( (categories[v4].flags & 1) == 0 || !Playlist_GetFiltersForCategory(clientNum, category, &v16, v15) || v16 || v15[0] )
      return 0;
    else
      return 6;
  }
  else
  {
    if ( index >= categories[v4].numEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 205, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( categories[category].numEntries )", "index doesn't index categories[category].numEntries\n\t%i not in [0, %i)", index, categories[v4].numEntries) )
      __debugbreak();
    v9 = v5 + 129 * v7;
    v10 = &categories[0].entries[v9];
    if ( v10->type == PLAYLIST && !playlists[categories[0].entries[v9].num].numEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 209, ASSERT_TYPE_ASSERT, "(entry->type != categoryEntry::PLAYLIST || playlists[entry->num].numEntries)", (const char *)&queryFormat, "entry->type != categoryEntry::PLAYLIST || playlists[entry->num].numEntries") )
      __debugbreak();
    if ( v10->type == CATEGORY && !categories[v10->num].numEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 210, ASSERT_TYPE_ASSERT, "(entry->type != categoryEntry::CATEGORY || categories[entry->num].numEntries)", (const char *)&queryFormat, "entry->type != categoryEntry::CATEGORY || categories[entry->num].numEntries") )
      __debugbreak();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
    PartyMemberCount = GetPartyMemberCount();
    if ( PartyMemberCount < 1 )
      PartyMemberCount = 1;
    v13 = PlaylistFeeder_IsLocked(category, v5, PartyMemberCount);
    for ( i = 0; i < 8; ++i )
    {
      if ( v13 == UNLOCKED )
        break;
      if ( ControllerFromClient != i && CL_Mgr_IsControllerMappedToClient(i, NULL) && !Live_UserIsGuest(i) )
        v13 = PlaylistFeeder_IsLocked(category, v5, PartyMemberCount);
    }
    return v13;
  }
}

/*
==============
UI_SetDVarsForVoteEntry
==============
*/
void UI_SetDVarsForVoteEntry(const int entryNum, const int index)
{
  __int64 v2; 
  const dvar_t *v4; 
  unsigned int PlaylistIdForNum; 
  playlistEntry *Entry; 
  playlistGametype *GameType; 
  const char *Map; 
  __int64 v9; 
  __int64 v10; 

  v2 = index;
  if ( (unsigned int)entryNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 698, ASSERT_TYPE_ASSERT, "(unsigned)( entryNum ) < (unsigned)( 2048 )", "entryNum doesn't index MAX_PLAYLIST_ENTRIES\n\t%i not in [0, %i)", entryNum, 2048) )
    __debugbreak();
  v4 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v4->current.integer);
  Entry = Playlist_GetEntry(PlaylistIdForNum, entryNum);
  GameType = Playlist_GetGameType(Entry->gametype);
  if ( !GameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 704, ASSERT_TYPE_ASSERT, "(gametypeEntry)", (const char *)&queryFormat, "gametypeEntry") )
    __debugbreak();
  Map = Playlist_FindMap(Entry->mapindex);
  Dvar_SetStringByName(g_mapVoteInfo[v2].uiMapnameDVar, Map);
  Com_DPrintf(16, "Playlists: Setting up mapvote %d =[%s,%s] gametype '%s' (running script '%s')\n", (unsigned int)v2, Map, g_mapVoteInfo[v2].uiGameTypeDVar, GameType->localizedName, GameType->scriptName);
  if ( (unsigned int)v2 >= 3 )
  {
    LODWORD(v10) = 3;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 711, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( NUM_MAP_VOTE_ENTRIES )", "index doesn't index NUM_MAP_VOTE_ENTRIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  Dvar_SetStringByName(g_mapVoteInfo[v2].uiGameTypeDVar, GameType->scriptName);
}

/*
==============
UI_UpdatePulsePlaylistActive
==============
*/
void UI_UpdatePulsePlaylistActive(void)
{
  char v0; 
  int v1; 
  unsigned int i; 
  char *v3; 
  bool v4; 
  bool v5; 
  bool Bool; 
  const dvar_t *v7; 
  bool enabled; 
  char *v9; 
  int Int; 
  const dvar_t *v11; 
  int navStringCount; 
  DDLState result; 
  DDLContext context; 
  DDLState v15; 
  char *navStrings[16]; 

  v0 = 0;
  v1 = 1;
  while ( !Playlist_IsPulsed(v1) )
  {
    if ( ++v1 >= 129 )
      goto LABEL_6;
  }
  v0 = 1;
LABEL_6:
  for ( i = 0; (int)i < 8; ++i )
  {
    if ( !CL_PlayerData_GetDDLBuffer(&context, i, STATS_ONLINE, STATSGROUP_RANKED) )
      continue;
    v3 = j_va("rankedMatchData.pulsedPlaylistActive");
    Com_ParseNavStrings(v3, (const char **)navStrings, 16, &navStringCount);
    v4 = 0;
    v5 = 0;
    DDL_GetRootState(&result, context.def);
    if ( DDL_MoveToPath(&result, &result, navStringCount, (const char **)navStrings) && DDL_GetType(&result) == DDL_UINT_TYPE )
    {
      Bool = DDL_GetBool(&result, &context);
      v4 = Bool;
      if ( v0 )
      {
        if ( Bool )
          continue;
        DDL_SetBool(&result, &context, 1);
        Com_Printf(16, "Playlists: Set rankedMatchData.pulsedPlaylistActive true for controller %d\n", i);
      }
      else if ( Bool )
      {
        v7 = DVARBOOL_lui_show_upsell_pulsed;
        if ( !DVARBOOL_lui_show_upsell_pulsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_show_upsell_pulsed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        enabled = v7->current.enabled;
        DDL_SetBool(&result, &context, 0);
        Com_Printf(16, "Playlists: Set rankedMatchData.pulsedPlaylistActive false for controller %d\n", i);
        v5 = !enabled;
      }
    }
    result = *DDL_GetRootState(&v15, context.def);
    v9 = j_va("rankedMatchData.pulsedMatchesPlayed");
    Com_ParseNavStrings(v9, (const char **)navStrings, 16, &navStringCount);
    if ( DDL_MoveToPath(&result, &result, navStringCount, (const char **)navStrings) && DDL_GetType(&result) == DDL_SHORT_TYPE )
    {
      if ( (Int = DDL_GetInt(&result, &context), !v4) && Int > 0 || v5 )
      {
        v11 = DVARBOOL_lui_show_upsell_pulsed;
        if ( !DVARBOOL_lui_show_upsell_pulsed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_show_upsell_pulsed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled && LUI_BeginEvent(LOCAL_CLIENT_0, "open_magma_upsell_pulsed", LUI_luaVM) )
          LUI_EndEvent(LUI_luaVM);
        DDL_SetInt(&result, &context, 0);
        Com_Printf(16, "Playlists: Reset rankedMatchData.pulsedMatchesPlayed for controller %d\n", i);
      }
    }
  }
}

/*
==============
UI_ValidatePlaylistNum
==============
*/
void UI_ValidatePlaylistNum(void)
{
  int PlaylistCount; 
  int v1; 
  int PlaylistNumForId; 
  __int64 num; 
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v6; 
  int numEntries; 

  PlaylistCount = Playlist_GetPlaylistCount();
  v1 = 0;
  if ( !LiveStorage_DoWeHavePlaylists() )
    goto LABEL_12;
  if ( !categories[0].numEntries )
  {
    numEntries = categories[0].numEntries;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( 0 ) < (unsigned)( categories[0].numEntries )", "0 doesn't index categories[0].numEntries\n\t%i not in [0, %i)", 0i64, numEntries) )
      __debugbreak();
  }
  if ( categories[0].entries[0].type )
  {
    if ( categories[0].entries[0].num >= 0x1Au )
    {
      LODWORD(v6) = 26;
      LODWORD(v5) = categories[0].entries[0].num;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_playlists.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( entry->num ) < (unsigned)( 26 )", "entry->num doesn't index MAX_PLAYLIST_CATEGORIES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    num = categories[0].entries[0].num;
    if ( categories[num].entries[0].type == PLAYLIST )
    {
      PlaylistNumForId = Playlist_GetPlaylistNumForId(categories[num].entries[0].num);
      goto LABEL_13;
    }
LABEL_12:
    PlaylistNumForId = 0;
    goto LABEL_13;
  }
  PlaylistNumForId = Playlist_GetPlaylistNumForId(categories[0].entries[0].num);
  do
  {
LABEL_13:
    if ( PlaylistCount <= GamerProfile_GetPlaylistNum(v1) || GamerProfile_GetPlaylistNum(v1) < 0 )
      GamerProfile_SetPlaylistNum(v1, PlaylistNumForId);
    ++v1;
  }
  while ( v1 < 8 );
  v4 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer >= PlaylistCount )
  {
    Dvar_SetInt_Internal(DVARINT_playlist, PlaylistNumForId);
    selectedPlaylist = PlaylistNumForId;
  }
}

