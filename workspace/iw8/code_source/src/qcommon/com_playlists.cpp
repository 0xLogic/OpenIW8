/*
==============
Playlist_WritePlaylistConfigInfoJSON
==============
*/

bool __fastcall Playlist_WritePlaylistConfigInfoJSON(const int playlistId, const int playlistCategory, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  return ?Playlist_WritePlaylistConfigInfoJSON@@YA_NHH_NAEAVbdJSONSerializer@@@Z(playlistId, playlistCategory, isPrivateMatch, jsonSerializer);
}

/*
==============
Playlist_MigrateHost
==============
*/

void __fastcall Playlist_MigrateHost(unsigned __int8 *lastEntries, int numEntries)
{
  ?Playlist_MigrateHost@@YAXPEAEH@Z(lastEntries, numEntries);
}

/*
==============
Playlist_GetMaxHumanPlayers
==============
*/

unsigned int __fastcall Playlist_GetMaxHumanPlayers(const int playlistId)
{
  return ?Playlist_GetMaxHumanPlayers@@YAIH@Z(playlistId);
}

/*
==============
Playlist_GetName
==============
*/

const char *__fastcall Playlist_GetName()
{
  return ?Playlist_GetName@@YAPEBDXZ();
}

/*
==============
Playlist_AnyPlaylistInCategoryDoesNotMatchGameType
==============
*/

bool __fastcall Playlist_AnyPlaylistInCategoryDoesNotMatchGameType(const int playlistId, const unsigned int category, const char *gameType)
{
  return ?Playlist_AnyPlaylistInCategoryDoesNotMatchGameType@@YA_NHIPEBD@Z(playlistId, category, gameType);
}

/*
==============
Playlist_LookupItemImage
==============
*/

const char *__fastcall Playlist_LookupItemImage(LocalClientNum_t clientNum, int lookupNum)
{
  return ?Playlist_LookupItemImage@@YAPEBDW4LocalClientNum_t@@H@Z(clientNum, lookupNum);
}

/*
==============
Playlist_GetBotsReservedSlotsAxis
==============
*/

unsigned int __fastcall Playlist_GetBotsReservedSlotsAxis(const int playlistId)
{
  return ?Playlist_GetBotsReservedSlotsAxis@@YAIH@Z(playlistId);
}

/*
==============
Playlist_IsCategoryCDL
==============
*/

bool __fastcall Playlist_IsCategoryCDL(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryCDL@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_WritePlaylistTeamInfoJSON
==============
*/

bool __fastcall Playlist_WritePlaylistTeamInfoJSON(const int playlistId, const int category, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  return ?Playlist_WritePlaylistTeamInfoJSON@@YA_NHH_NAEAVbdJSONSerializer@@@Z(playlistId, category, isPrivateMatch, jsonSerializer);
}

/*
==============
Playlist_AlwaysSearch
==============
*/

bool __fastcall Playlist_AlwaysSearch(const int playlistId)
{
  return ?Playlist_AlwaysSearch@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_SetFiltered
==============
*/

void __fastcall Playlist_SetFiltered(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  ?Playlist_SetFiltered@@YAXW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetEntry
==============
*/

playlistEntry *__fastcall Playlist_GetEntry(const unsigned int playlistId, const unsigned int entryNum)
{
  return ?Playlist_GetEntry@@YAPEAUplaylistEntry@@II@Z(playlistId, entryNum);
}

/*
==============
Playlist_PartyBasedTeams
==============
*/

bool __fastcall Playlist_PartyBasedTeams(const int playlistId)
{
  return ?Playlist_PartyBasedTeams@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_FindMap
==============
*/

const char *__fastcall Playlist_FindMap(unsigned int index)
{
  return ?Playlist_FindMap@@YAPEBDI@Z(index);
}

/*
==============
Playlist_AnyPlaylistInCategoryMatchesGameType
==============
*/

bool __fastcall Playlist_AnyPlaylistInCategoryMatchesGameType(const int playlistId, const unsigned int category, const char *gameType)
{
  return ?Playlist_AnyPlaylistInCategoryMatchesGameType@@YA_NHIPEBD@Z(playlistId, category, gameType);
}

/*
==============
Playlist_GetGameType
==============
*/

playlistGametype *__fastcall Playlist_GetGameType(int index)
{
  return ?Playlist_GetGameType@@YAPEAUplaylistGametype@@H@Z(index);
}

/*
==============
Playlist_GetMaxSquadSize
==============
*/

int __fastcall Playlist_GetMaxSquadSize(const int playlistId)
{
  return ?Playlist_GetMaxSquadSize@@YAHH@Z(playlistId);
}

/*
==============
Playlist_SetFiltersForCategory
==============
*/

void __fastcall Playlist_SetFiltersForCategory(const LocalClientNum_t clientNum, const unsigned int category, const unsigned __int64 filters, const unsigned __int64 high_filters)
{
  ?Playlist_SetFiltersForCategory@@YAXW4LocalClientNum_t@@I_K1@Z(clientNum, category, filters, high_filters);
}

/*
==============
Playlist_JoinViaPresenceDisabled
==============
*/

bool __fastcall Playlist_JoinViaPresenceDisabled(const int playlistId)
{
  return ?Playlist_JoinViaPresenceDisabled@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_GetGameModeType
==============
*/

PLAYLIST_GAMEMODE_TYPE __fastcall Playlist_GetGameModeType(const int playlistId)
{
  return ?Playlist_GetGameModeType@@YA?AW4PLAYLIST_GAMEMODE_TYPE@@H@Z(playlistId);
}

/*
==============
Playlist_GetCategoryIndex
==============
*/

int __fastcall Playlist_GetCategoryIndex(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetCategoryIndex@@YAHW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetItemSmallImage
==============
*/

const char *__fastcall Playlist_GetItemSmallImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemSmallImage@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetPlaylistDescription
==============
*/

const char *__fastcall Playlist_GetPlaylistDescription(const int playlistId)
{
  return ?Playlist_GetPlaylistDescription@@YAPEBDH@Z(playlistId);
}

/*
==============
Playlist_ChooseEntry
==============
*/

int __fastcall Playlist_ChooseEntry(const int lastSelection, bool markEntryPlayed)
{
  return ?Playlist_ChooseEntry@@YAHH_N@Z(lastSelection, markEntryPlayed);
}

/*
==============
Playlist_GetItemName
==============
*/

const char *__fastcall Playlist_GetItemName(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemName@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_ClearCRC32
==============
*/

void Playlist_ClearCRC32(void)
{
  ?Playlist_ClearCRC32@@YAXXZ();
}

/*
==============
Playlist_JoinInProgressDisabled
==============
*/

bool __fastcall Playlist_JoinInProgressDisabled(const int playlistId)
{
  return ?Playlist_JoinInProgressDisabled@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_IsSurvival
==============
*/

bool __fastcall Playlist_IsSurvival(const int playlistId)
{
  return ?Playlist_IsSurvival@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_HasNewPlaylistChanged
==============
*/

bool __fastcall Playlist_HasNewPlaylistChanged()
{
  return ?Playlist_HasNewPlaylistChanged@@YA_NXZ();
}

/*
==============
Playlist_IsPulsed
==============
*/

bool __fastcall Playlist_IsPulsed(const int playlistId)
{
  return ?Playlist_IsPulsed@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_IsCategoryBR
==============
*/

bool __fastcall Playlist_IsCategoryBR(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryBR@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_GetFiltersForCategory
==============
*/

bool __fastcall Playlist_GetFiltersForCategory(LocalClientNum_t clientNum, DDLContext *buffer, DDLState *state, unsigned int category, unsigned __int64 *filter_out, DDLState *high_state, unsigned __int64 *high_filter_out)
{
  return ?Playlist_GetFiltersForCategory@@YA_NW4LocalClientNum_t@@PEAUDDLContext@@PEAUDDLState@@IAEA_K23@Z(clientNum, buffer, state, category, filter_out, high_state, high_filter_out);
}

/*
==============
Playlist_GetBattlePassXPScale
==============
*/

int __fastcall Playlist_GetBattlePassXPScale(const int playlistId)
{
  return ?Playlist_GetBattlePassXPScale@@YAHH@Z(playlistId);
}

/*
==============
Playlist_GetScoreLimit
==============
*/

int __fastcall Playlist_GetScoreLimit(const int playlistId)
{
  return ?Playlist_GetScoreLimit@@YAHH@Z(playlistId);
}

/*
==============
Playlist_IsCategoryPromoted
==============
*/

bool __fastcall Playlist_IsCategoryPromoted(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryPromoted@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_GetItemDesc
==============
*/

const char *__fastcall Playlist_GetItemDesc(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemDesc@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_FindGametypeIndex
==============
*/

int __fastcall Playlist_FindGametypeIndex(const char *gametypeInternalName)
{
  return ?Playlist_FindGametypeIndex@@YAHPEBD@Z(gametypeInternalName);
}

/*
==============
Playlist_CanRunRules
==============
*/

bool __fastcall Playlist_CanRunRules()
{
  return ?Playlist_CanRunRules@@YA_NXZ();
}

/*
==============
Playlist_HandleMapVoteSucceeded
==============
*/

void __fastcall Playlist_HandleMapVoteSucceeded(const int alternateEntry)
{
  ?Playlist_HandleMapVoteSucceeded@@YAXH@Z(alternateEntry);
}

/*
==============
Playlist_GetVersionNumber
==============
*/

unsigned int __fastcall Playlist_GetVersionNumber()
{
  return ?Playlist_GetVersionNumber@@YAIXZ();
}

/*
==============
Playlist_GetCategoryCount
==============
*/

int __fastcall Playlist_GetCategoryCount(unsigned int category)
{
  return ?Playlist_GetCategoryCount@@YAHI@Z(category);
}

/*
==============
Playlist_GetCurrentCategoryClass
==============
*/

int __fastcall Playlist_GetCurrentCategoryClass()
{
  return ?Playlist_GetCurrentCategoryClass@@YAHXZ();
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsSplitscreen
==============
*/

bool __fastcall Playlist_AnyPlaylistInCategoryRestrictsSplitscreen(const int playlistId, const unsigned int category)
{
  return ?Playlist_AnyPlaylistInCategoryRestrictsSplitscreen@@YA_NHI@Z(playlistId, category);
}

/*
==============
Playlist_ParsePlaylists
==============
*/

void __fastcall Playlist_ParsePlaylists(const char *buffer)
{
  ?Playlist_ParsePlaylists@@YAXPEBD@Z(buffer);
}

/*
==============
Playlist_GetMinPartySize
==============
*/

int __fastcall Playlist_GetMinPartySize(const int playlistId)
{
  return ?Playlist_GetMinPartySize@@YAHH@Z(playlistId);
}

/*
==============
Playlist_GetXPScale
==============
*/

int __fastcall Playlist_GetXPScale(const int playlistId)
{
  return ?Playlist_GetXPScale@@YAHH@Z(playlistId);
}

/*
==============
Playlist_WritePlaylistDedicatedServerJSON
==============
*/

bool __fastcall Playlist_WritePlaylistDedicatedServerJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  return ?Playlist_WritePlaylistDedicatedServerJSON@@YA_NH_NAEAVbdJSONSerializer@@@Z(playlistId, isPrivateMatch, jsonSerializer);
}

/*
==============
Playlist_GetBotsReservedSlotsAllies
==============
*/

unsigned int __fastcall Playlist_GetBotsReservedSlotsAllies(const int playlistId)
{
  return ?Playlist_GetBotsReservedSlotsAllies@@YAIH@Z(playlistId);
}

/*
==============
Playlist_GetPlaylistIdForNum
==============
*/

int __fastcall Playlist_GetPlaylistIdForNum(const int playlistIdx)
{
  return ?Playlist_GetPlaylistIdForNum@@YAHH@Z(playlistIdx);
}

/*
==============
Playlist_GetFiltersCRC32ForCategory
==============
*/

bool __fastcall Playlist_GetFiltersCRC32ForCategory(LocalClientNum_t clientNum, DDLContext *buffer, DDLState *state, unsigned int category, unsigned int *crc_out)
{
  return ?Playlist_GetFiltersCRC32ForCategory@@YA_NW4LocalClientNum_t@@PEAUDDLContext@@PEAUDDLState@@IAEAI@Z(clientNum, buffer, state, category, crc_out);
}

/*
==============
Playlist_RestrictsSplitscreen
==============
*/

bool __fastcall Playlist_RestrictsSplitscreen(const int playlistId)
{
  return ?Playlist_RestrictsSplitscreen@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_GetMinLobbySize
==============
*/

int __fastcall Playlist_GetMinLobbySize(const int playlistId)
{
  return ?Playlist_GetMinLobbySize@@YAHH@Z(playlistId);
}

/*
==============
Playlist_GetBotMatchMakingEnabled
==============
*/

bool __fastcall Playlist_GetBotMatchMakingEnabled(const int playlistId)
{
  return ?Playlist_GetBotMatchMakingEnabled@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_ClearFilter
==============
*/

void __fastcall Playlist_ClearFilter(LocalClientNum_t clientNum, unsigned int category, unsigned int crc32)
{
  ?Playlist_ClearFilter@@YAXW4LocalClientNum_t@@II@Z(clientNum, category, crc32);
}

/*
==============
Playlist_GetItemCategoryClass
==============
*/

int __fastcall Playlist_GetItemCategoryClass(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemCategoryClass@@YAHW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_GetMinimumMaxPartySizeForCategory
==============
*/

int __fastcall Playlist_GetMinimumMaxPartySizeForCategory(const int playlistId, const unsigned int category)
{
  return ?Playlist_GetMinimumMaxPartySizeForCategory@@YAHHI@Z(playlistId, category);
}

/*
==============
Playlist_GetFiltersForCategory
==============
*/

bool __fastcall Playlist_GetFiltersForCategory(LocalClientNum_t clientNum, unsigned int category, unsigned __int64 *filter_out, unsigned __int64 *high_filter_out)
{
  return ?Playlist_GetFiltersForCategory@@YA_NW4LocalClientNum_t@@IAEA_K1@Z(clientNum, category, filter_out, high_filter_out);
}

/*
==============
Playlist_WritePlaylistMapsJSON
==============
*/

bool __fastcall Playlist_WritePlaylistMapsJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  return ?Playlist_WritePlaylistMapsJSON@@YA_NH_NAEAVbdJSONSerializer@@@Z(playlistId, isPrivateMatch, jsonSerializer);
}

/*
==============
Playlist_IsCategoryHardcore
==============
*/

bool __fastcall Playlist_IsCategoryHardcore(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryHardcore@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_GetPlaylistCount
==============
*/

int __fastcall Playlist_GetPlaylistCount()
{
  return ?Playlist_GetPlaylistCount@@YAHXZ();
}

/*
==============
Playlist_GetMaxPartySize
==============
*/

int __fastcall Playlist_GetMaxPartySize(const int playlistId)
{
  return ?Playlist_GetMaxPartySize@@YAHH@Z(playlistId);
}

/*
==============
Playlist_GetMaxLobbySize
==============
*/

int __fastcall Playlist_GetMaxLobbySize(const int playlistId)
{
  return ?Playlist_GetMaxLobbySize@@YAHH@Z(playlistId);
}

/*
==============
Playlist_IsLimitedTime
==============
*/

bool __fastcall Playlist_IsLimitedTime(const int playlistId)
{
  return ?Playlist_IsLimitedTime@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_GetNumEntries
==============
*/

int __fastcall Playlist_GetNumEntries(const unsigned int playlistId)
{
  return ?Playlist_GetNumEntries@@YAHI@Z(playlistId);
}

/*
==============
Playlist_IsCategoryFiltered
==============
*/

bool __fastcall Playlist_IsCategoryFiltered(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryFiltered@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_GetNumRounds
==============
*/

unsigned int __fastcall Playlist_GetNumRounds(const int playlistId)
{
  return ?Playlist_GetNumRounds@@YAIH@Z(playlistId);
}

/*
==============
Playlist_GetPlaylistName
==============
*/

const char *__fastcall Playlist_GetPlaylistName(const int playlistId)
{
  return ?Playlist_GetPlaylistName@@YAPEBDH@Z(playlistId);
}

/*
==============
Playlist_ResetWeights
==============
*/

void __fastcall Playlist_ResetWeights(const int playlistId)
{
  ?Playlist_ResetWeights@@YAXH@Z(playlistId);
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsF2P
==============
*/

bool __fastcall Playlist_AnyPlaylistInCategoryRestrictsF2P(const int playlistId, const unsigned int category)
{
  return ?Playlist_AnyPlaylistInCategoryRestrictsF2P@@YA_NHI@Z(playlistId, category);
}

/*
==============
ConvertSlashNToNewline
==============
*/

void __fastcall ConvertSlashNToNewline(char *bufferPtr, const int bufferSize)
{
  ?ConvertSlashNToNewline@@YAXPEADH@Z(bufferPtr, bufferSize);
}

/*
==============
Playlist_ContainsGameType
==============
*/

bool __fastcall Playlist_ContainsGameType(const int playlistId, const char *gameType)
{
  return ?Playlist_ContainsGameType@@YA_NHPEBD@Z(playlistId, gameType);
}

/*
==============
Playlist_GetPlaylistNumForId
==============
*/

int __fastcall Playlist_GetPlaylistNumForId(const int arrayIdx)
{
  return ?Playlist_GetPlaylistNumForId@@YAHH@Z(arrayIdx);
}

/*
==============
Playlist_GetTimeLimit
==============
*/

int __fastcall Playlist_GetTimeLimit(const int playlistId)
{
  return ?Playlist_GetTimeLimit@@YAHH@Z(playlistId);
}

/*
==============
Playlist_CountEntries
==============
*/

int __fastcall Playlist_CountEntries(const int playlistNum)
{
  return ?Playlist_CountEntries@@YAHH@Z(playlistNum);
}

/*
==============
Playlist_GetExplicitMapPacksUsedByPlaylist
==============
*/

int __fastcall Playlist_GetExplicitMapPacksUsedByPlaylist(const int playlistId)
{
  return ?Playlist_GetExplicitMapPacksUsedByPlaylist@@YAHH@Z(playlistId);
}

/*
==============
Playlist_IsCategoryParty
==============
*/

bool __fastcall Playlist_IsCategoryParty(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryParty@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_ContainsOnlyGameType
==============
*/

bool __fastcall Playlist_ContainsOnlyGameType(const int playlistId, const char *gameType)
{
  return ?Playlist_ContainsOnlyGameType@@YA_NHPEBD@Z(playlistId, gameType);
}

/*
==============
Playlist_GetItemVideo
==============
*/

const char *__fastcall Playlist_GetItemVideo(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemVideo@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_UpdateFromMatchmaker
==============
*/

void __fastcall Playlist_UpdateFromMatchmaker(const int controllerIndex, const int playlist, const bool isCreating)
{
  ?Playlist_UpdateFromMatchmaker@@YAXHH_N@Z(controllerIndex, playlist, isCreating);
}

/*
==============
Playlist_GetItemContext
==============
*/

const char *__fastcall Playlist_GetItemContext(LocalClientNum_t clientNum, const int playlistId)
{
  return ?Playlist_GetItemContext@@YAPEBDW4LocalClientNum_t@@H@Z(clientNum, playlistId);
}

/*
==============
Playlist_GetItemImage
==============
*/

const char *__fastcall Playlist_GetItemImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemImage@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_WritePlaylistLobbySlotsJSON
==============
*/

bool __fastcall Playlist_WritePlaylistLobbySlotsJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  return ?Playlist_WritePlaylistLobbySlotsJSON@@YA_NH_NAEAVbdJSONSerializer@@@Z(playlistId, isPrivateMatch, jsonSerializer);
}

/*
==============
Playlist_GetMapPacksUsedByPlaylist
==============
*/

int __fastcall Playlist_GetMapPacksUsedByPlaylist(const int playlistId)
{
  return ?Playlist_GetMapPacksUsedByPlaylist@@YAHH@Z(playlistId);
}

/*
==============
Playlist_IsDMZPostTutorial
==============
*/

bool __fastcall Playlist_IsDMZPostTutorial(const int playlistId)
{
  return ?Playlist_IsDMZPostTutorial@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_GetHumansOnAlliesOnly
==============
*/

bool __fastcall Playlist_GetHumansOnAlliesOnly(const int playlistId)
{
  return ?Playlist_GetHumansOnAlliesOnly@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_UpdateFilters
==============
*/

void __fastcall Playlist_UpdateFilters(const int controllerIndex)
{
  ?Playlist_UpdateFilters@@YAXH@Z(controllerIndex);
}

/*
==============
Playlist_IsPlaylistFiltered
==============
*/

bool __fastcall Playlist_IsPlaylistFiltered(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_IsPlaylistFiltered@@YA_NW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_FindMapIndex
==============
*/

int __fastcall Playlist_FindMapIndex(const char *mapname)
{
  return ?Playlist_FindMapIndex@@YAHPEBD@Z(mapname);
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress
==============
*/

bool __fastcall Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress(const int playlistId, const unsigned int category)
{
  return ?Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress@@YA_NHI@Z(playlistId, category);
}

/*
==============
Playlist_IsBRPlunderPostTutorial
==============
*/

bool __fastcall Playlist_IsBRPlunderPostTutorial(const int playlistId)
{
  return ?Playlist_IsBRPlunderPostTutorial@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_GetItemFeaturedImage
==============
*/

const char *__fastcall Playlist_GetItemFeaturedImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  return ?Playlist_GetItemFeaturedImage@@YAPEBDW4LocalClientNum_t@@II@Z(clientNum, category, index);
}

/*
==============
Playlist_IsCategoryFeatured
==============
*/

bool __fastcall Playlist_IsCategoryFeatured(LocalClientNum_t clientNum, unsigned int category)
{
  return ?Playlist_IsCategoryFeatured@@YA_NW4LocalClientNum_t@@I@Z(clientNum, category);
}

/*
==============
Playlist_AllowsF2P
==============
*/

bool __fastcall Playlist_AllowsF2P(const int playlistId)
{
  return ?Playlist_AllowsF2P@@YA_NH@Z(playlistId);
}

/*
==============
Playlist_RunRules
==============
*/

void __fastcall Playlist_RunRules(const int localControllerIndex, const int entryNum)
{
  ?Playlist_RunRules@@YAXHH@Z(localControllerIndex, entryNum);
}

/*
==============
Playlist_GetWeaponXPScale
==============
*/

int __fastcall Playlist_GetWeaponXPScale(const int playlistId)
{
  return ?Playlist_GetWeaponXPScale@@YAHH@Z(playlistId);
}

/*
==============
Playlist_IsNew
==============
*/

bool __fastcall Playlist_IsNew(const int playlistId)
{
  return ?Playlist_IsNew@@YA_NH@Z(playlistId);
}

/*
==============
ConvertSlashNToNewline
==============
*/
void ConvertSlashNToNewline(char *bufferPtr, const int bufferSize)
{
  __int64 v2; 
  char *i; 
  _BYTE *v5; 
  _BYTE *v6; 

  v2 = bufferSize;
  if ( !bufferPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 231, ASSERT_TYPE_ASSERT, "(bufferPtr)", (const char *)&queryFormat, "bufferPtr") )
    __debugbreak();
  for ( i = strstr_0(bufferPtr, "\\n"); i; i = strstr_0(bufferPtr, "\\n") )
  {
    *i = 10;
    v5 = i + 2;
    v6 = i + 1;
    if ( i - bufferPtr + 2 >= v2 )
      *v6 = *v5;
    else
      memmove_0(v6, v5, (size_t)&bufferPtr[v2 - (_QWORD)i - 2]);
  }
}

/*
==============
PlaylistStringBuffer_GetRemainingAfterTail
==============
*/
__int64 PlaylistStringBuffer_GetRemainingAfterTail()
{
  signed __int64 v0; 

  v0 = &playlistStringBuffer.buffer[204799] - playlistStringBuffer.tail;
  if ( (unsigned __int64)(&playlistStringBuffer.buffer[204799] - playlistStringBuffer.tail + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v0, "signed", &playlistStringBuffer.buffer[204799] - playlistStringBuffer.tail) )
    __debugbreak();
  return (unsigned int)v0;
}

/*
==============
PlaylistStringBuffer_GetTail
==============
*/
StringBuffer *PlaylistStringBuffer_GetTail()
{
  char *tail; 
  StringBuffer *result; 
  __int64 v2; 

  tail = playlistStringBuffer.tail;
  if ( playlistStringBuffer.tail )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( playlistStringBuffer.tail[v2] );
    if ( (_DWORD)v2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 141, ASSERT_TYPE_ASSERT, "(I_strlen( playlistStringBuffer.tail ) == 0)", (const char *)&queryFormat, "I_strlen( playlistStringBuffer.tail ) == 0") )
        __debugbreak();
      tail = playlistStringBuffer.tail;
    }
    result = (StringBuffer *)(tail + 1);
    playlistStringBuffer.tail = (char *)result;
  }
  else
  {
    result = &playlistStringBuffer;
    playlistStringBuffer.tail = (char *)&playlistStringBuffer;
  }
  return result;
}

/*
==============
PlaylistStringBuffer_MoveTail
==============
*/
void PlaylistStringBuffer_MoveTail(int count)
{
  StringBuffer *tail; 
  __int64 v2; 
  char *v3; 

  tail = &playlistStringBuffer;
  v2 = count;
  if ( playlistStringBuffer.tail )
    tail = (StringBuffer *)playlistStringBuffer.tail;
  v3 = (char *)(&playlistStringBuffer.buffer[204799] - (char *)tail);
  playlistStringBuffer.tail = (char *)tail;
  if ( (unsigned __int64)(&playlistStringBuffer.buffer[204799] - (char *)tail + 0x80000000i64) > 0xFFFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v3, "signed", (intmax_t)v3) )
      __debugbreak();
    tail = (StringBuffer *)playlistStringBuffer.tail;
  }
  if ( (int)v2 <= (int)v3 )
  {
    playlistStringBuffer.tail = &tail->buffer[v2];
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 158, ASSERT_TYPE_ASSERT, "(count <= PlaylistStringBuffer_GetRemainingAfterTail())", (const char *)&queryFormat, "count <= PlaylistStringBuffer_GetRemainingAfterTail()") )
      __debugbreak();
    playlistStringBuffer.tail += v2;
  }
}

/*
==============
Playlist_AllowsF2P
==============
*/
bool Playlist_AllowsF2P(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2110, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return BYTE1(playlists[v1].flags) & 1;
  return result;
}

/*
==============
Playlist_AlwaysSearch
==============
*/
bool Playlist_AlwaysSearch(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2254, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x10) != 0;
  return result;
}

/*
==============
Playlist_AnyPlaylistInCategoryDoesNotMatchGameType
==============
*/
bool Playlist_AnyPlaylistInCategoryDoesNotMatchGameType(const int playlistId, const unsigned int category, const char *gameType)
{
  __int64 v4; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 numEntries; 
  __int64 v11; 
  unsigned __int8 *p_num; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned __int8 v16; 
  int high_filter_out; 
  unsigned __int64 filter_out; 
  DDLState v21; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 v24; 

  v4 = category;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    high_filter_out = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1919, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( (unsigned int)v4 >= 0x1A || (categories[v4].flags & 1) == 0 )
    return !Playlist_ContainsOnlyGameType(playlistId, gameType);
  v7 = v4;
  v8 = 0i64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  numEntries = categories[v4].numEntries;
  state.arrayIndex = -1;
  v21.isValid = 0;
  v21.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0E8h+state.member], xmm0 }
  v21.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0E8h+var_A0.member], xmm0 }
  if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v4, &filter_out, &v21, &v24) )
    return 0;
  v11 = numEntries;
  if ( !numEntries )
    return 0;
  p_num = &categories[v7].entries[0].num;
  v13 = v24;
  v14 = filter_out;
  while ( 1 )
  {
    v15 = *p_num;
    v16 = v15 >= 0x41 ? _bittest64((const __int64 *)&v13, (unsigned __int8)(v15 - 65)) : _bittest64((const __int64 *)&v14, (unsigned __int8)(v15 - 1));
    if ( v16 && !Playlist_ContainsOnlyGameType(*p_num, gameType) )
      break;
    ++v8;
    p_num += 8;
    if ( v8 >= v11 )
      return 0;
  }
  return 1;
}

/*
==============
Playlist_AnyPlaylistInCategoryMatchesGameType
==============
*/
bool Playlist_AnyPlaylistInCategoryMatchesGameType(const int playlistId, const unsigned int category, const char *gameType)
{
  __int64 v4; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 numEntries; 
  __int64 v11; 
  unsigned __int8 *p_num; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned __int8 v16; 
  int high_filter_out; 
  unsigned __int64 filter_out; 
  DDLState v21; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 v24; 

  v4 = category;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    high_filter_out = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( (unsigned int)v4 >= 0x1A || (categories[v4].flags & 1) == 0 )
    return Playlist_ContainsGameType(playlistId, gameType);
  v7 = v4;
  v8 = 0i64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  numEntries = categories[v4].numEntries;
  state.arrayIndex = -1;
  v21.isValid = 0;
  v21.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0E8h+state.member], xmm0 }
  v21.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0E8h+var_A0.member], xmm0 }
  if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v4, &filter_out, &v21, &v24) )
    return 0;
  v11 = numEntries;
  if ( !numEntries )
    return 0;
  p_num = &categories[v7].entries[0].num;
  v13 = v24;
  v14 = filter_out;
  while ( 1 )
  {
    v15 = *p_num;
    v16 = v15 >= 0x41 ? _bittest64((const __int64 *)&v13, (unsigned __int8)(v15 - 65)) : _bittest64((const __int64 *)&v14, (unsigned __int8)(v15 - 1));
    if ( v16 && Playlist_ContainsGameType(*p_num, gameType) )
      break;
    ++v8;
    p_num += 8;
    if ( v8 >= v11 )
      return 0;
  }
  return 1;
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsF2P
==============
*/
bool Playlist_AnyPlaylistInCategoryRestrictsF2P(const int playlistId, const unsigned int category)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int8 numEntries; 
  __int64 v9; 
  unsigned __int8 *p_num; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  int high_filter_out; 
  DDLState v18; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 v21; 
  unsigned __int64 filter_out; 

  v3 = category;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    high_filter_out = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1775, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( (unsigned int)v3 >= 0x1A || (categories[v3].flags & 1) == 0 )
    return !Playlist_AllowsF2P(playlistId);
  v5 = v3;
  v6 = 0i64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  numEntries = categories[v3].numEntries;
  state.arrayIndex = -1;
  v18.isValid = 0;
  v18.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+state.member], xmm0 }
  v18.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+var_98.member], xmm0 }
  if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v3, &filter_out, &v18, &v21) )
    return 0;
  v9 = numEntries;
  if ( !numEntries )
    return 0;
  p_num = &categories[v5].entries[0].num;
  v11 = v21;
  v12 = filter_out;
  while ( 1 )
  {
    v13 = *p_num;
    v14 = v13 >= 0x41 ? _bittest64((const __int64 *)&v11, (unsigned __int8)(v13 - 65)) : _bittest64((const __int64 *)&v12, (unsigned __int8)(v13 - 1));
    if ( v14 && !Playlist_AllowsF2P(*p_num) )
      break;
    ++v6;
    p_num += 8;
    if ( v6 >= v9 )
      return 0;
  }
  return 1;
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress
==============
*/
bool Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress(const int playlistId, const unsigned int category)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int8 numEntries; 
  __int64 v9; 
  unsigned __int8 *p_num; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  int high_filter_out; 
  DDLState v18; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 v21; 
  unsigned __int64 filter_out; 

  v3 = category;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    high_filter_out = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1727, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( (unsigned int)v3 >= 0x1A || (categories[v3].flags & 1) == 0 )
    return Playlist_JoinViaPresenceDisabled(playlistId);
  v5 = v3;
  v6 = 0i64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  numEntries = categories[v3].numEntries;
  state.arrayIndex = -1;
  v18.isValid = 0;
  v18.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+state.member], xmm0 }
  v18.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+var_98.member], xmm0 }
  if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v3, &filter_out, &v18, &v21) )
    return 0;
  v9 = numEntries;
  if ( !numEntries )
    return 0;
  p_num = &categories[v5].entries[0].num;
  v11 = v21;
  v12 = filter_out;
  while ( 1 )
  {
    v13 = *p_num;
    v14 = v13 >= 0x41 ? _bittest64((const __int64 *)&v11, (unsigned __int8)(v13 - 65)) : _bittest64((const __int64 *)&v12, (unsigned __int8)(v13 - 1));
    if ( v14 && Playlist_JoinViaPresenceDisabled(*p_num) )
      break;
    ++v6;
    p_num += 8;
    if ( v6 >= v9 )
      return 0;
  }
  return 1;
}

/*
==============
Playlist_AnyPlaylistInCategoryRestrictsSplitscreen
==============
*/
bool Playlist_AnyPlaylistInCategoryRestrictsSplitscreen(const int playlistId, const unsigned int category)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int8 numEntries; 
  __int64 v9; 
  unsigned __int8 *p_num; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  int high_filter_out; 
  DDLState v18; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 v21; 
  unsigned __int64 filter_out; 

  v3 = category;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    high_filter_out = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1823, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  if ( (unsigned int)v3 >= 0x1A || (categories[v3].flags & 1) == 0 )
    return Playlist_RestrictsSplitscreen(playlistId);
  v5 = v3;
  v6 = 0i64;
  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  numEntries = categories[v3].numEntries;
  state.arrayIndex = -1;
  v18.isValid = 0;
  v18.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+state.member], xmm0 }
  v18.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0D8h+var_98.member], xmm0 }
  if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v3, &filter_out, &v18, &v21) )
    return 0;
  v9 = numEntries;
  if ( !numEntries )
    return 0;
  p_num = &categories[v5].entries[0].num;
  v11 = v21;
  v12 = filter_out;
  while ( 1 )
  {
    v13 = *p_num;
    v14 = v13 >= 0x41 ? _bittest64((const __int64 *)&v11, (unsigned __int8)(v13 - 65)) : _bittest64((const __int64 *)&v12, (unsigned __int8)(v13 - 1));
    if ( v14 && Playlist_RestrictsSplitscreen(*p_num) )
      break;
    ++v6;
    p_num += 8;
    if ( v6 >= v9 )
      return 0;
  }
  return 1;
}

/*
==============
Playlist_CalcTotalWeights
==============
*/
__int64 Playlist_CalcTotalWeights(const int playlistId, const int lastSelection)
{
  __int64 v2; 
  unsigned int v4; 
  playlistEntry *Entry; 
  signed int v6; 
  unsigned __int16 *p_numEntries; 
  int v8; 
  playlistEntry *v9; 
  playlistEntry *v10; 
  __int64 mapindex; 
  const char *v12; 
  PartyData *PartyData; 
  bool IsAcceptable; 
  int v16; 

  v2 = playlistId;
  v4 = 0;
  if ( (unsigned int)playlistId >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2543, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, 129) )
    __debugbreak();
  if ( lastSelection < 0 || lastSelection >= playlists[v2].numEntries )
    Entry = NULL;
  else
    Entry = Playlist_GetEntry(v2, lastSelection);
  v6 = 0;
  p_numEntries = &playlists[v2].numEntries;
  v8 = playlists[v2].flags & 8;
  v16 = v8;
  if ( *p_numEntries )
  {
    do
    {
      if ( v6 != lastSelection )
      {
        v9 = Playlist_GetEntry(v2, v6);
        v10 = v9;
        if ( v8 || !Entry || v9->mapindex != Entry->mapindex )
        {
          mapindex = v9->mapindex;
          if ( (unsigned int)mapindex >= maps.numEntries )
            v12 = NULL;
          else
            v12 = maps.name[mapindex];
          PartyData = Lobby_GetPartyData();
          IsAcceptable = PartyHost_MapIsAcceptable(PartyData, v12, v2);
          v8 = v16;
          if ( IsAcceptable )
            v4 += v10->remainingWeight;
        }
      }
      ++v6;
    }
    while ( v6 < *p_numEntries );
  }
  return v4;
}

/*
==============
Playlist_CanRunRules
==============
*/
bool Playlist_CanRunRules()
{
  unsigned __int8 ActiveGameMode; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  return BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode);
}

/*
==============
Playlist_ChooseEntry
==============
*/
__int64 Playlist_ChooseEntry(const int lastSelection, bool markEntryPlayed)
{
  const dvar_t *v4; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  __int64 integer; 
  int v10; 
  int v11; 
  int v12; 
  unsigned __int16 numEntries; 
  signed int v15; 
  __int64 v16; 
  playlistEntry *Entry; 
  char v18; 
  char v19; 
  int v20; 
  unsigned __int16 v21; 
  const dvar_t *v22; 
  int PlaylistIdForNum; 
  unsigned int v24; 
  __int64 v25; 
  __int64 result; 
  int v27; 
  int v28; 
  int flags; 
  __int64 v30; 
  playlistEntry *v31; 
  playlistEntry *v32; 
  __int64 mapindex; 
  const char *v34; 
  PartyData *PartyData; 
  char *fmt; 
  __int64 v38; 
  __int64 v39; 
  int v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  int v45; 
  playlistEntry *v46; 
  int v47[20]; 

  v4 = DVARBOOL_online_matchmaking_use_lobby_affinity;
  if ( !DVARBOOL_online_matchmaking_use_lobby_affinity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_use_lobby_affinity") )
    __debugbreak();
  __asm { vmovaps [rsp+108h+var_38], xmm6 }
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v7 = DVARINT_playlistID;
    if ( !DVARINT_playlistID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistID") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = DVARBOOL_online_matchmaking_use_map_weights;
    integer = v7->current.integer;
    v10 = -1;
    if ( !DVARBOOL_online_matchmaking_use_map_weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_use_map_weights") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
      goto LABEL_26;
    v11 = 0;
    v12 = 20;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    numEntries = playlists[integer].numEntries;
    if ( numEntries > 0x14u )
    {
      LODWORD(fmt) = 20;
      Com_PrintError(25, "Playlist Id %u contains %u entries which is more then can be handled by playlist weight calculations which has a max of %u.\n", (unsigned int)integer, numEntries, fmt);
      numEntries = playlists[integer].numEntries;
    }
    v15 = 0;
    if ( numEntries < 0x14u )
      v12 = numEntries;
    if ( !v12 )
      goto LABEL_26;
    v16 = 0i64;
    do
    {
      Entry = Playlist_GetEntry(integer, v15);
      *(double *)&_XMM0 = OnlineMatchmakerOmniscient::GetMapWeight(&OnlineMatchmakerOmniscient::ms_instance, Entry->mapindex);
      __asm { vcomiss xmm0, xmm6 }
      if ( v19 | v18 )
      {
        __asm { vucomiss xmm0, xmm6 }
        if ( v18 )
        {
          ++v11;
          v47[v16++] = v15;
        }
      }
      else
      {
        __asm { vmovaps xmm6, xmm0 }
        v47[0] = v15;
        v11 = 1;
        v16 = 1i64;
      }
      ++v15;
    }
    while ( v15 < v12 );
    if ( v11 )
    {
      s_randSeed_0 = 1103515245 * s_randSeed_0 + 12345;
      v20 = s_randSeed_0;
      v10 = v47[((s_randSeed_0 / 0x10000) & 0x7FFFi64) % v11];
      if ( v10 != -1 )
      {
LABEL_71:
        result = (unsigned int)v10;
        goto LABEL_72;
      }
    }
    else
    {
LABEL_26:
      v20 = s_randSeed_0;
    }
    v21 = playlists[integer].numEntries;
    if ( v21 )
    {
      s_randSeed_0 = 1103515245 * v20 + 12345;
      v10 = ((s_randSeed_0 / 0x10000) & 0x7FFFui64) % v21;
    }
    goto LABEL_71;
  }
  v22 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v22->current.integer);
  v24 = PlaylistIdForNum;
  v25 = PlaylistIdForNum;
  v43 = v25 * 992;
  if ( playlists[v25].numEntries )
  {
    v27 = Playlist_CalcTotalWeights(PlaylistIdForNum, lastSelection);
    if ( !v27 )
    {
      if ( (playlists[v25].flags & 4) != 0 )
      {
        if ( !markEntryPlayed )
        {
          result = (unsigned int)lastSelection;
          goto LABEL_72;
        }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE96A0, 789i64);
      }
      Playlist_ResetWeights(v24);
      v27 = Playlist_CalcTotalWeights(v24, lastSelection);
    }
    if ( v27 <= 0 )
      v27 = 1;
    v45 = v27;
    s_randSeed_0 = 1103515245 * s_randSeed_0 + 12345;
    v42 = ((s_randSeed_0 / 0x10000) & 0x7FFFi64) % v27;
    if ( v24 >= 0x81 )
    {
      LODWORD(v39) = 129;
      LODWORD(v38) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2580, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v38, v39) )
        __debugbreak();
    }
    v41 = 0;
    v28 = 0;
    if ( lastSelection < 0 || lastSelection >= playlists[v25].numEntries )
      v46 = NULL;
    else
      v46 = Playlist_GetEntry(v24, lastSelection);
    flags = playlists[v25].flags;
    v10 = 0;
    v30 = v43;
    v44 = flags & 8;
    if ( *(unsigned __int16 *)((char *)&playlists[0].numEntries + v43) )
    {
      do
      {
        if ( v10 != lastSelection )
        {
          v31 = Playlist_GetEntry(v24, v10);
          v32 = v31;
          if ( !v44 && v46 && v31->mapindex == v46->mapindex )
          {
            v28 = v41;
          }
          else
          {
            mapindex = v31->mapindex;
            if ( (unsigned int)mapindex >= maps.numEntries )
              v34 = NULL;
            else
              v34 = maps.name[mapindex];
            PartyData = Lobby_GetPartyData();
            if ( PartyHost_MapIsAcceptable(PartyData, v34, v24) )
            {
              v28 = v32->remainingWeight + v41;
              v41 = v28;
              if ( v42 < v28 )
                goto LABEL_66;
            }
            else
            {
              v28 = v41;
            }
            v30 = v43;
          }
        }
        ++v10;
      }
      while ( v10 < *(unsigned __int16 *)((char *)&playlists[0].numEntries + v30) );
    }
    if ( (unsigned int)Playlist_CalcTotalWeights(v24, lastSelection) )
    {
      LODWORD(v38) = Playlist_CalcTotalWeights(v24, lastSelection);
      LODWORD(fmt) = v24;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9430, 787i64, (unsigned int)v42, fmt, v38);
      v10 = v28;
    }
    else
    {
      v10 = 0;
    }
LABEL_66:
    if ( v10 >= *(unsigned __int16 *)((char *)&playlists[0].numEntries + v43) )
    {
      LODWORD(v38) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2740, ASSERT_TYPE_ASSERT, "( ( itemSelected < playlists[playlistId].numEntries ) )", "( itemSelected ) = %i", v38) )
        __debugbreak();
    }
    LODWORD(v38) = v45;
    LODWORD(fmt) = v24;
    Com_DPrintf(16, "Last playlist entry we played was %i, this time it's %i for playlistId %i. We choose from a pool of %i total weight.\n", (unsigned int)lastSelection, (unsigned int)v10, fmt, v38);
    if ( markEntryPlayed )
      Playlist_MarkEntryPlayed(v24, v10);
    goto LABEL_71;
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9668, 788i64, &playlists[v25]);
  result = 0xFFFFFFFFi64;
LABEL_72:
  __asm { vmovaps xmm6, [rsp+108h+var_38] }
  return result;
}

/*
==============
Playlist_ClearCRC32
==============
*/
void Playlist_ClearCRC32(void)
{
  bool *p_crc32Changed; 

  globalRules.crc32Changed = 0;
  p_crc32Changed = &playlists[0].crc32Changed;
  do
  {
    *p_crc32Changed = 0;
    p_crc32Changed += 992;
  }
  while ( (__int64)p_crc32Changed < (__int64)&categories[0].overrideDvarValue[23] );
  gametypes[0].crc32Changed = 0;
  gametypes[1].crc32Changed = 0;
  gametypes[2].crc32Changed = 0;
  gametypes[3].crc32Changed = 0;
  gametypes[4].crc32Changed = 0;
  gametypes[5].crc32Changed = 0;
  gametypes[6].crc32Changed = 0;
  gametypes[7].crc32Changed = 0;
  gametypes[8].crc32Changed = 0;
  gametypes[9].crc32Changed = 0;
  gametypes[10].crc32Changed = 0;
  gametypes[11].crc32Changed = 0;
  gametypes[12].crc32Changed = 0;
  gametypes[13].crc32Changed = 0;
  gametypes[14].crc32Changed = 0;
  gametypes[15].crc32Changed = 0;
  gametypes[16].crc32Changed = 0;
  gametypes[17].crc32Changed = 0;
  gametypes[18].crc32Changed = 0;
  gametypes[19].crc32Changed = 0;
  gametypes[20].crc32Changed = 0;
  gametypes[21].crc32Changed = 0;
  gametypes[22].crc32Changed = 0;
  gametypes[23].crc32Changed = 0;
  gametypes[24].crc32Changed = 0;
  gametypes[25].crc32Changed = 0;
  gametypes[26].crc32Changed = 0;
  gametypes[27].crc32Changed = 0;
  gametypes[28].crc32Changed = 0;
  gametypes[29].crc32Changed = 0;
  gametypes[30].crc32Changed = 0;
  gametypes[31].crc32Changed = 0;
  gametypes[32].crc32Changed = 0;
  gametypes[33].crc32Changed = 0;
  gametypes[34].crc32Changed = 0;
  gametypes[35].crc32Changed = 0;
  gametypes[36].crc32Changed = 0;
  gametypes[37].crc32Changed = 0;
  gametypes[38].crc32Changed = 0;
  gametypes[39].crc32Changed = 0;
  gametypes[40].crc32Changed = 0;
  gametypes[41].crc32Changed = 0;
  gametypes[42].crc32Changed = 0;
  gametypes[43].crc32Changed = 0;
  gametypes[44].crc32Changed = 0;
  gametypes[45].crc32Changed = 0;
  gametypes[46].crc32Changed = 0;
  gametypes[47].crc32Changed = 0;
  gametypes[48].crc32Changed = 0;
  gametypes[49].crc32Changed = 0;
  gametypes[50].crc32Changed = 0;
  gametypes[51].crc32Changed = 0;
  gametypes[52].crc32Changed = 0;
  gametypes[53].crc32Changed = 0;
  gametypes[54].crc32Changed = 0;
  gametypes[55].crc32Changed = 0;
  gametypes[56].crc32Changed = 0;
  gametypes[57].crc32Changed = 0;
  gametypes[58].crc32Changed = 0;
  gametypes[59].crc32Changed = 0;
  gametypes[60].crc32Changed = 0;
  gametypes[61].crc32Changed = 0;
  gametypes[62].crc32Changed = 0;
  gametypes[63].crc32Changed = 0;
}

/*
==============
Playlist_ClearFilter
==============
*/
void Playlist_ClearFilter(LocalClientNum_t clientNum, unsigned int category, unsigned int crc32)
{
  unsigned __int64 high_filter_out; 
  DDLState state; 
  DDLState high_state; 
  DDLContext buffer; 
  unsigned __int64 crc_out; 

  state.isValid = 0;
  state.offset = 0;
  high_state.isValid = 0;
  high_state.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.arrayIndex = -1;
  high_state.arrayIndex = -1;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+state.member], xmm0
    vmovdqu xmmword ptr [rbp+57h+var_58.member], xmm0
  }
  if ( Playlist_GetFiltersForCategory(clientNum, &buffer, &state, category, &crc_out, &high_state, &high_filter_out) )
  {
    if ( !crc_out )
      DDL_SetUInt64(&state, &buffer, 0xFFFFFFFFFFFFFFFFui64);
    if ( !high_filter_out )
      DDL_SetUInt64(&high_state, &buffer, 0xFFFFFFFFFFFFFFFFui64);
  }
  if ( Playlist_GetFiltersCRC32ForCategory(clientNum, &buffer, &state, category, (unsigned int *)&crc_out) )
    DDL_SetInt(&state, &buffer, crc32);
}

/*
==============
Playlist_ContainsGameType
==============
*/
char Playlist_ContainsGameType(const int playlistId, const char *gameType)
{
  signed int v4; 
  int NumEntries; 
  unsigned __int8 v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 

  if ( (unsigned int)playlistId >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2187, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, 129) )
    __debugbreak();
  if ( LiveStorage_DoWeHavePlaylists() )
  {
    v4 = 0;
    NumEntries = Playlist_GetNumEntries(playlistId);
    if ( NumEntries > 0 )
    {
      do
      {
        v6 = Playlist_GetEntry(playlistId, v4)->gametype;
        if ( v6 >= 0x40u )
        {
          LODWORD(v17) = 64;
          LODWORD(v16) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2201, ASSERT_TYPE_ASSERT, "(unsigned)( entryGameType ) < (unsigned)( ( sizeof( *array_counter( gametypes ) ) + 0 ) )", "entryGameType doesn't index gametypes\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v7 = 0x7FFFFFFFi64;
        v8 = v6;
        v9 = gameType;
        if ( !&gametypes[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        while ( 1 )
        {
          v10 = (unsigned __int8)v9[(_QWORD)gametypes + v8 * 136 - (_QWORD)gameType];
          v11 = v7;
          v12 = *(unsigned __int8 *)v9++;
          --v7;
          if ( !v11 )
            return 1;
          if ( v10 != v12 )
          {
            v13 = v10 + 32;
            if ( (unsigned int)(v10 - 65) > 0x19 )
              v13 = v10;
            v10 = v13;
            v14 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v14 = v12;
            if ( v10 != v14 )
              break;
          }
          if ( !v10 )
            return 1;
        }
        ++v4;
      }
      while ( v4 < NumEntries );
    }
  }
  return 0;
}

/*
==============
Playlist_ContainsOnlyGameType
==============
*/
char Playlist_ContainsOnlyGameType(const int playlistId, const char *gameType)
{
  signed int v4; 
  int NumEntries; 
  unsigned __int8 v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 

  if ( (unsigned int)playlistId >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2215, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, 129) )
    __debugbreak();
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0;
  v4 = 0;
  NumEntries = Playlist_GetNumEntries(playlistId);
  if ( NumEntries > 0 )
  {
    do
    {
      v6 = Playlist_GetEntry(playlistId, v4)->gametype;
      if ( v6 >= 0x40u )
      {
        LODWORD(v17) = 64;
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2229, ASSERT_TYPE_ASSERT, "(unsigned)( entryGameType ) < (unsigned)( ( sizeof( *array_counter( gametypes ) ) + 0 ) )", "entryGameType doesn't index gametypes\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v7 = 0x7FFFFFFFi64;
      v8 = v6;
      v9 = gameType;
      if ( !&gametypes[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v10 = (unsigned __int8)v9[(_QWORD)gametypes + v8 * 136 - (_QWORD)gameType];
        v11 = v7;
        v12 = *(unsigned __int8 *)v9++;
        --v7;
        if ( !v11 )
          break;
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            return 0;
        }
      }
      while ( v10 );
      ++v4;
    }
    while ( v4 < NumEntries );
  }
  return 1;
}

/*
==============
Playlist_CountEntries
==============
*/
__int64 Playlist_CountEntries(const int playlistNum)
{
  return playlists[Playlist_GetPlaylistIdForNum(playlistNum)].numEntries;
}

/*
==============
Playlist_FindGametypeIndex
==============
*/
__int64 Playlist_FindGametypeIndex(const char *gametypeInternalName)
{
  int i; 
  unsigned __int64 v3; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  for ( i = 0; i < numGametypes + 1; ++i )
  {
    v3 = 136i64 * i;
    v4 = 0x7FFFFFFFi64;
    v5 = gametypeInternalName;
    if ( &gametypes[v3 / 0x88] == (playlistGametype *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v3 + (unsigned int)gametypes + 17), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !gametypeInternalName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v6 = (unsigned __int8)gametypes[0].internalName[v3 - (_QWORD)gametypeInternalName + (_QWORD)v5];
      v7 = v4;
      v8 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v7 )
        return (unsigned int)i;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
          break;
      }
      if ( !v6 )
        return (unsigned int)i;
    }
  }
  Com_PrintError(16, "Unknown gametype name '%s'\n", gametypeInternalName);
  return 64i64;
}

/*
==============
Playlist_FindMap
==============
*/
char *Playlist_FindMap(unsigned int index)
{
  if ( index >= maps.numEntries )
    return 0i64;
  else
    return maps.name[index];
}

/*
==============
Playlist_FindMapIndex
==============
*/
__int64 Playlist_FindMapIndex(const char *mapname)
{
  __int64 i; 
  char *v3; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  for ( i = 0i64; (unsigned int)i < maps.numEntries; i = (unsigned int)(i + 1) )
  {
    v3 = maps.name[i];
    v4 = 0x7FFFFFFFi64;
    v5 = mapname;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = v3 - mapname;
    while ( 1 )
    {
      v7 = (unsigned __int8)v5[v6];
      v8 = v4;
      v9 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v8 )
        return (unsigned int)i;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return (unsigned int)i;
    }
  }
  return 255i64;
}

/*
==============
Playlist_GetBattlePassXPScale
==============
*/
__int64 Playlist_GetBattlePassXPScale(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2077, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].battlePassXpScale;
  else
    return 0i64;
}

/*
==============
Playlist_GetBotMatchMakingEnabled
==============
*/
bool Playlist_GetBotMatchMakingEnabled(const int playlistId)
{
  __int64 v1; 
  bool result; 
  const dvar_t *v3; 
  int v5; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v5 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2265, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v5) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
  {
    v3 = DVARBOOL_single_player_mp;
    if ( !DVARBOOL_single_player_mp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "single_player_mp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    return v3->current.enabled || (playlists[v1].flags & 0x20) != 0;
  }
  return result;
}

/*
==============
Playlist_GetBotsReservedSlotsAllies
==============
*/
__int64 Playlist_GetBotsReservedSlotsAllies(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2305, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].botMMReserveSlotsAllies;
  else
    return 0i64;
}

/*
==============
Playlist_GetBotsReservedSlotsAxis
==============
*/
__int64 Playlist_GetBotsReservedSlotsAxis(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2294, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].botMMReserveSlotsAxis;
  else
    return 0i64;
}

/*
==============
Playlist_GetCategoryCount
==============
*/
__int64 Playlist_GetCategoryCount(unsigned int category)
{
  return categories[category].numEntries;
}

/*
==============
Playlist_GetCategoryIndex
==============
*/
__int64 Playlist_GetCategoryIndex(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 

  v3 = index;
  v4 = &categories[category];
  if ( index < v4->numEntries && LiveStorage_DoWeHavePlaylists() )
    return v4->entries[v3].num;
  else
    return 0i64;
}

/*
==============
Playlist_GetCurrentCategoryClass
==============
*/
__int64 Playlist_GetCurrentCategoryClass()
{
  const dvar_t *v0; 
  char ActiveGameMode; 
  unsigned int v3; 

  v0 = DVARBOOL_ui_is_magma_gamemode;
  if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 16i64;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v3 = 4;
  if ( ActiveGameMode == 3 )
    return 8;
  return v3;
}

/*
==============
Playlist_GetEntry
==============
*/
playlistEntry *Playlist_GetEntry(const unsigned int playlistId, const unsigned int entryNum)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int16 firstEntry; 
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v2 = playlistId;
  if ( playlistId >= 0x81 )
  {
    v11 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v11) )
      __debugbreak();
  }
  v4 = v2;
  firstEntry = playlists[v4].firstEntry;
  if ( firstEntry >= s_playlistEntryCount )
  {
    LODWORD(v10) = s_playlistEntryCount;
    LODWORD(v8) = firstEntry;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( playlist->firstEntry ) < (unsigned)( s_playlistEntryCount )", "playlist->firstEntry doesn't index s_playlistEntryCount\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( entryNum >= playlists[v4].numEntries )
  {
    LODWORD(v10) = playlists[v4].numEntries;
    LODWORD(v8) = entryNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1624, ASSERT_TYPE_ASSERT, "(unsigned)( entryNum ) < (unsigned)( playlist->numEntries )", "entryNum doesn't index playlist->numEntries\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v6 = entryNum + playlists[v4].firstEntry;
  if ( (unsigned int)v6 >= s_playlistEntryCount )
  {
    LODWORD(v10) = s_playlistEntryCount;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1627, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( s_playlistEntryCount )", "entryIndex doesn't index s_playlistEntryCount\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return &s_playlistEntries[v6];
}

/*
==============
Playlist_GetExplicitMapPacksUsedByPlaylist
==============
*/
__int64 Playlist_GetExplicitMapPacksUsedByPlaylist(const int playlistId)
{
  return playlists[playlistId].requiredDLCMask;
}

/*
==============
Playlist_GetFiltersCRC32ForCategory
==============
*/
char Playlist_GetFiltersCRC32ForCategory(LocalClientNum_t clientNum, DDLContext *buffer, DDLState *state, unsigned int category, unsigned int *crc_out)
{
  __int64 v6; 
  int ControllerFromClient; 
  char *v10; 
  int v12; 
  int navStringCount; 
  DDLState result; 
  char *navStrings[16]; 

  _RDI = state;
  v6 = category;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3718, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3719, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( CL_Mgr_GetControllerFromClient(clientNum) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3722, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetControllerFromClient( clientNum ) >= 0)", (const char *)&queryFormat, "CL_Mgr_GetControllerFromClient( clientNum ) >= 0") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
  if ( !CL_PlayerData_GetDDLBuffer(buffer, ControllerFromClient, STATS_ONLINE, STATSGROUP_COMMON) )
    return 0;
  v10 = j_va("commonData.filteredPlaylists.%d.crc32", categories[v6].categoryLabel);
  Com_ParseNavStrings(v10, (const char **)navStrings, 16, &navStringCount);
  _RAX = DDL_GetRootState(&result, buffer->def);
  v12 = navStringCount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi], ymm0
  }
  if ( !DDL_MoveToPath(_RDI, _RDI, v12, (const char **)navStrings) )
    return 0;
  *crc_out = DDL_GetInt(_RDI, buffer);
  return 1;
}

/*
==============
Playlist_GetFiltersForCategory
==============
*/
bool Playlist_GetFiltersForCategory(LocalClientNum_t clientNum, unsigned int category, unsigned __int64 *filter_out, unsigned __int64 *high_filter_out)
{
  DDLState high_state; 
  DDLState state; 
  DDLContext buffer; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  high_state.isValid = 0;
  high_state.offset = 0;
  state.isValid = 0;
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0B8h+state.member], xmm0 }
  high_state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0B8h+var_78.member], xmm0 }
  return Playlist_GetFiltersForCategory(clientNum, &buffer, &state, category, filter_out, &high_state, high_filter_out);
}

/*
==============
Playlist_GetFiltersForCategory
==============
*/
char Playlist_GetFiltersForCategory(LocalClientNum_t clientNum, DDLContext *buffer, DDLState *state, unsigned int category, unsigned __int64 *filter_out, DDLState *high_state, unsigned __int64 *high_filter_out)
{
  __int64 v11; 
  int ControllerFromClient; 
  unsigned __int8 *p_categoryLabel; 
  char *v17; 
  char *v18; 
  int navStringCount; 
  DDLState fromState; 
  DDLState result; 
  char *navStrings[16]; 

  v11 = category;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+158h+fromState.member], xmm0
  }
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3675, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3676, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !high_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3677, ASSERT_TYPE_ASSERT, "(high_state)", (const char *)&queryFormat, "high_state") )
    __debugbreak();
  if ( CL_Mgr_GetControllerFromClient(clientNum) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3680, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetControllerFromClient( clientNum ) >= 0)", (const char *)&queryFormat, "CL_Mgr_GetControllerFromClient( clientNum ) >= 0") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
  if ( !CL_PlayerData_GetDDLBuffer(buffer, ControllerFromClient, STATS_ONLINE, STATSGROUP_COMMON) )
    return 0;
  _RAX = DDL_GetRootState(&result, buffer->def);
  __asm { vmovups ymm0, ymmword ptr [rax] }
  p_categoryLabel = &categories[v11].categoryLabel;
  __asm { vmovups ymmword ptr [rsp+158h+fromState.isValid], ymm0 }
  v17 = j_va("commonData.filteredPlaylists.%d.filter", *p_categoryLabel);
  Com_ParseNavStrings(v17, (const char **)navStrings, 16, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, state, navStringCount, (const char **)navStrings) )
    return 0;
  *filter_out = DDL_GetUInt64(state, buffer);
  v18 = j_va("commonData.filteredPlaylists.%d.localFilter", *p_categoryLabel);
  Com_ParseNavStrings(v18, (const char **)navStrings, 16, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, high_state, navStringCount, (const char **)navStrings) )
    return 0;
  *high_filter_out = DDL_GetUInt64(high_state, buffer);
  return 1;
}

/*
==============
Playlist_GetGameModeType
==============
*/
__int64 Playlist_GetGameModeType(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2510, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return (unsigned int)playlists[v1].gamemodeType;
  else
    return 0i64;
}

/*
==============
Playlist_GetGameType
==============
*/
playlistGametype *Playlist_GetGameType(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x40 )
  {
    v4 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 64 )", "index doesn't index MAX_PLAYLIST_GAMETYPES\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return &gametypes[v1];
}

/*
==============
Playlist_GetHumansOnAlliesOnly
==============
*/
bool Playlist_GetHumansOnAlliesOnly(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2283, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x40) != 0;
  return result;
}

/*
==============
Playlist_GetItemCategoryClass
==============
*/
__int64 Playlist_GetItemCategoryClass(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 

  v3 = index;
  v4 = &categories[category];
  if ( index < v4->numEntries && LiveStorage_DoWeHavePlaylists() && v4->entries[v3].type == CATEGORY )
    return categories[v4->entries[v3].num].categoryClass;
  else
    return 0i64;
}

/*
==============
Playlist_GetItemContext
==============
*/
char *Playlist_GetItemContext(LocalClientNum_t clientNum, const int playlistId)
{
  __int64 v2; 

  v2 = playlistId;
  if ( playlistId >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2446, ASSERT_TYPE_ASSERT, "(playlistId < 129)", (const char *)&queryFormat, "playlistId < MAX_PLAYLISTS") )
    __debugbreak();
  return playlists[v2].context;
}

/*
==============
Playlist_GetItemDesc
==============
*/
char *Playlist_GetItemDesc(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 
  __int64 num; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  num = v4->entries[v3].num;
  if ( v4->entries[v3].type == CATEGORY )
    return categories[num].description;
  else
    return playlists[num].description;
}

/*
==============
Playlist_GetItemFeaturedImage
==============
*/
const char *Playlist_GetItemFeaturedImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 
  __int64 num; 
  const char *result; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  num = v4->entries[v3].num;
  if ( v4->entries[v3].type == CATEGORY )
    return categories[num].image;
  result = playlists[num].featuredImage;
  if ( !*result )
    return playlists[num].image;
  return result;
}

/*
==============
Playlist_GetItemImage
==============
*/
char *Playlist_GetItemImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 
  __int64 num; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  num = v4->entries[v3].num;
  if ( v4->entries[v3].type == CATEGORY )
    return categories[num].image;
  else
    return playlists[num].image;
}

/*
==============
Playlist_GetItemName
==============
*/
playlistInfo *Playlist_GetItemName(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 
  __int64 num; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  num = v4->entries[v3].num;
  if ( v4->entries[v3].type == CATEGORY )
    return (playlistInfo *)&categories[num];
  else
    return &playlists[num];
}

/*
==============
Playlist_GetItemSmallImage
==============
*/
const char *Playlist_GetItemSmallImage(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 
  __int64 num; 
  const char *result; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  num = v4->entries[v3].num;
  if ( v4->entries[v3].type == CATEGORY )
    return categories[num].image;
  result = playlists[num].smallImage;
  if ( !*result )
    return playlists[num].image;
  return result;
}

/*
==============
Playlist_GetItemVideo
==============
*/
char *Playlist_GetItemVideo(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v3; 
  categoryInfo *v4; 

  v3 = index;
  v4 = &categories[category];
  if ( index >= v4->numEntries || !LiveStorage_DoWeHavePlaylists() || v4->entries[v3].type == CATEGORY )
    return 0i64;
  else
    return playlists[v4->entries[v3].num].video;
}

/*
==============
Playlist_GetMapPacksUsedByPlaylist
==============
*/
__int64 Playlist_GetMapPacksUsedByPlaylist(const int playlistId)
{
  unsigned int v2; 
  signed int v3; 
  unsigned __int16 *p_numEntries; 
  __int64 mapindex; 
  const char *v6; 
  int v7; 
  __int64 v9; 
  __int64 v10; 

  v2 = 0;
  v3 = 0;
  p_numEntries = &playlists[playlistId].numEntries;
  if ( *p_numEntries )
  {
    do
    {
      mapindex = Playlist_GetEntry(playlistId, v3)->mapindex;
      if ( (unsigned int)mapindex >= maps.numEntries )
        v6 = NULL;
      else
        v6 = maps.name[mapindex];
      v7 = Live_GetMapIndex(v6);
      if ( v7 >= 0 )
      {
        if ( v7 >= (unsigned int)Live_GetMapCount() )
        {
          LODWORD(v10) = Live_GetMapCount();
          LODWORD(v9) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2497, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( Live_GetMapCount() )", "mapIndex doesn't index Live_GetMapCount()\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        v2 |= Live_GetMapSource(v7);
      }
      else
      {
        v2 |= 2u;
      }
      ++v3;
    }
    while ( v3 < *p_numEntries );
  }
  return v2;
}

/*
==============
Playlist_GetMaxHumanPlayers
==============
*/
__int64 Playlist_GetMaxHumanPlayers(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2011, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].maxHumanPlayers;
  else
    return 0i64;
}

/*
==============
Playlist_GetMaxLobbySize
==============
*/
__int64 Playlist_GetMaxLobbySize(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1978, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].maxLobbySize;
  else
    return 0i64;
}

/*
==============
Playlist_GetMaxPartySize
==============
*/
__int64 Playlist_GetMaxPartySize(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1665, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].maxPartySize;
  else
    return 0i64;
}

/*
==============
Playlist_GetMaxSquadSize
==============
*/
__int64 Playlist_GetMaxSquadSize(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2000, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].maxSquadSize;
  else
    return 0i64;
}

/*
==============
Playlist_GetMinLobbySize
==============
*/
__int64 Playlist_GetMinLobbySize(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1989, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].minLobbySize;
  else
    return 0i64;
}

/*
==============
Playlist_GetMinPartySize
==============
*/
__int64 Playlist_GetMinPartySize(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1967, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].minPartySize;
  else
    return 0i64;
}

/*
==============
Playlist_GetMinimumMaxPartySizeForCategory
==============
*/
__int64 Playlist_GetMinimumMaxPartySizeForCategory(const int playlistId, const unsigned int category)
{
  __int64 v3; 
  __int64 v4; 
  int v6; 
  unsigned __int8 numEntries; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int8 *p_num; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  int maxPartySize; 
  DDLState high_state; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 high_filter_out; 
  unsigned __int64 filter_out; 

  v3 = playlistId;
  v4 = category;
  if ( (unsigned int)playlistId >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1676, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, 129) )
    __debugbreak();
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  v6 = -1;
  if ( (unsigned int)v4 < 0x1A && (categories[v4].flags & 1) != 0 )
  {
    state.isValid = 0;
    state.offset = 0;
    high_state.isValid = 0;
    high_state.offset = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.arrayIndex = -1;
    high_state.arrayIndex = -1;
    numEntries = categories[v4].numEntries;
    __asm
    {
      vmovdqu xmmword ptr [rsp+0D8h+state.member], xmm0
      vmovdqu xmmword ptr [rsp+0D8h+var_98.member], xmm0
    }
    if ( Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v4, &filter_out, &high_state, &high_filter_out) )
    {
      v9 = numEntries;
      if ( numEntries )
      {
        v10 = high_filter_out;
        p_num = &categories[v4].entries[0].num;
        v12 = filter_out;
        do
        {
          v13 = *p_num;
          if ( (unsigned int)v13 >= 0x41 )
            v14 = _bittest64((const __int64 *)&v10, (unsigned __int8)(v13 - 65));
          else
            v14 = _bittest64((const __int64 *)&v12, (unsigned __int8)(v13 - 1));
          if ( v14 )
          {
            maxPartySize = playlists[v13].maxPartySize;
            if ( v6 != -1 && v6 < maxPartySize )
              maxPartySize = v6;
            v6 = maxPartySize;
          }
          p_num += 8;
          --v9;
        }
        while ( v9 );
      }
    }
  }
  else
  {
    return playlists[v3].maxPartySize;
  }
  return (unsigned int)v6;
}

/*
==============
Playlist_GetName
==============
*/
const char *Playlist_GetName()
{
  return playlistAggrFilename->current.string;
}

/*
==============
Playlist_GetNumEntries
==============
*/
__int64 Playlist_GetNumEntries(const unsigned int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  return playlists[v1].numEntries;
}

/*
==============
Playlist_GetNumRounds
==============
*/
__int64 Playlist_GetNumRounds(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2022, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].numRounds;
  else
    return 0i64;
}

/*
==============
Playlist_GetPlaylistCount
==============
*/
__int64 Playlist_GetPlaylistCount()
{
  unsigned int v0; 
  unsigned __int16 *p_numEntries; 
  unsigned int v2; 
  unsigned int v3; 

  v0 = 0;
  p_numEntries = &playlists[1].numEntries;
  do
  {
    v2 = v0 + 1;
    if ( !*(p_numEntries - 496) )
      v2 = v0;
    v3 = v2 + 1;
    if ( !*p_numEntries )
      v3 = v2;
    v0 = v3 + 1;
    if ( !p_numEntries[496] )
      v0 = v3;
    p_numEntries += 1488;
  }
  while ( (__int64)p_numEntries < (__int64)&categories[1].overrideDvarName[9] );
  return v0;
}

/*
==============
Playlist_GetPlaylistDescription
==============
*/
char *Playlist_GetPlaylistDescription(const int playlistId)
{
  __int64 v1; 

  v1 = playlistId;
  if ( (unsigned int)playlistId > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1654, ASSERT_TYPE_ASSERT, "( ( playlistId >= 0 && playlistId < 129 ) )", "( playlistId ) = %i", playlistId) )
    __debugbreak();
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].description;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
Playlist_GetPlaylistIdForNum
==============
*/
__int64 Playlist_GetPlaylistIdForNum(const int playlistIdx)
{
  int v2; 
  unsigned __int16 *p_numEntries; 
  unsigned int v4; 
  int v6; 
  int PlaylistCount; 

  if ( LiveStorage_DoWeHavePlaylists() )
  {
    UI_ValidatePlaylistNum();
    v2 = 0;
    p_numEntries = &playlists[0].numEntries;
    v4 = 0;
    do
    {
      if ( *p_numEntries )
      {
        if ( v2 == playlistIdx )
          return v4;
        ++v2;
      }
      ++v4;
      p_numEntries += 496;
    }
    while ( (__int64)p_numEntries < (__int64)&categories[0].overrideDvarName[49] );
    if ( Sys_IsMainThread() )
    {
      PlaylistCount = Playlist_GetPlaylistCount();
      v6 = playlistIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1565, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid playlist number %i, there are only %i playlists", v6, PlaylistCount) )
        __debugbreak();
    }
  }
  return 0i64;
}

/*
==============
Playlist_GetPlaylistName
==============
*/
playlistInfo *Playlist_GetPlaylistName(const int playlistId)
{
  __int64 v1; 

  v1 = playlistId;
  if ( (unsigned int)playlistId > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1643, ASSERT_TYPE_ASSERT, "( ( playlistId >= 0 && playlistId < 129 ) )", "( playlistId ) = %i", playlistId) )
    __debugbreak();
  if ( LiveStorage_DoWeHavePlaylists() )
    return &playlists[v1];
  else
    return 0i64;
}

/*
==============
Playlist_GetPlaylistNumForId
==============
*/
__int64 Playlist_GetPlaylistNumForId(const int arrayIdx)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  unsigned __int16 *p_numEntries; 
  bool v5; 
  int v6; 

  v1 = arrayIdx;
  if ( !LiveStorage_DoWeHavePlaylists() )
    return 0i64;
  v2 = 0;
  if ( (int)v1 >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1580, ASSERT_TYPE_ASSERT, "(arrayIdx < 129)", (const char *)&queryFormat, "arrayIdx < MAX_PLAYLISTS") )
    __debugbreak();
  v3 = v1;
  if ( (int)v1 > 0 )
  {
    p_numEntries = &playlists[0].numEntries;
    do
    {
      v5 = *p_numEntries == 0;
      v6 = v2 + 1;
      p_numEntries += 496;
      if ( v5 )
        v6 = v2;
      v2 = v6;
      --v3;
    }
    while ( v3 );
  }
  if ( v2 <= (int)v1 )
    return (unsigned int)v2;
  else
    return 0i64;
}

/*
==============
Playlist_GetScoreLimit
==============
*/
__int64 Playlist_GetScoreLimit(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2033, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].score_limit;
  else
    return 0i64;
}

/*
==============
Playlist_GetTimeLimit
==============
*/
__int64 Playlist_GetTimeLimit(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2044, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].time_limit;
  else
    return 0i64;
}

/*
==============
Playlist_GetVersionNumber
==============
*/
__int64 Playlist_GetVersionNumber()
{
  return playlist_versionNum;
}

/*
==============
Playlist_GetWeaponXPScale
==============
*/
__int64 Playlist_GetWeaponXPScale(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2066, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].weaponXpScale;
  else
    return 0i64;
}

/*
==============
Playlist_GetXPScale
==============
*/
__int64 Playlist_GetXPScale(const int playlistId)
{
  __int64 v1; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
    return playlists[v1].xpScale;
  else
    return 0i64;
}

/*
==============
Playlist_HandleMapVoteSucceeded
==============
*/
void Playlist_HandleMapVoteSucceeded(const int alternateEntry)
{
  const dvar_t *v1; 
  unsigned int PlaylistIdForNum; 
  playlistEntry *Entry; 
  unsigned __int8 remainingWeight; 
  char *fmt; 

  v1 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v1->current.integer);
  Com_Printf(16, "Updating weighting for alternate map due to vote success.\n");
  Entry = Playlist_GetEntry(PlaylistIdForNum, alternateEntry);
  remainingWeight = Entry->remainingWeight;
  if ( remainingWeight )
  {
    Entry->remainingWeight = remainingWeight - 1;
    LODWORD(fmt) = (unsigned __int8)(remainingWeight - 1);
    Com_DPrintf(16, "Marking playlistId %i, entry %i as played. Remaining weight is %i\n", PlaylistIdForNum, (unsigned int)alternateEntry, fmt);
  }
  else
  {
    Com_PrintWarning(16, "Trying to mark playlistId %i, entry %i as played but it's already reached its quota for this playlist\n", PlaylistIdForNum, (unsigned int)alternateEntry);
  }
}

/*
==============
Playlist_HasNewPlaylistChanged
==============
*/

_BOOL8 __fastcall Playlist_HasNewPlaylistChanged(double _XMM0_8)
{
  const dvar_t *v1; 
  __int64 integer; 
  bool crc32Changed; 
  __int64 v4; 
  bool v5; 
  __int64 v6; 
  unsigned __int8 v7; 
  const dvar_t *v8; 
  __int64 unsignedInt; 
  unsigned __int64 v11; 
  unsigned __int8 *partners; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  unsigned __int8 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  char *overrideDvarValue; 
  char *overrideDvarName; 
  char *v24; 
  const char *StringSafe; 
  signed __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  bool *p_crc32Changed; 
  const char *v32; 
  DDLState high_state; 
  DDLState state; 
  DDLContext buffer; 
  unsigned __int64 high_filter_out; 
  unsigned __int64 filter_out; 

  v1 = DVARINT_playlistID;
  if ( !DVARINT_playlistID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistID") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  crc32Changed = globalRules.crc32Changed;
  if ( (int)integer > 0 )
  {
    v4 = integer;
    v5 = globalRules.crc32Changed;
    v6 = 0i64;
    if ( playlists[v4].crc32Changed )
      v5 = 1;
    crc32Changed = v5;
    while ( 1 )
    {
      v7 = playlists[v4].partners[v6];
      if ( v7 )
      {
        if ( playlists[v7].crc32Changed )
          break;
      }
      if ( ++v6 >= 8 )
        goto LABEL_13;
    }
    crc32Changed = 1;
  }
LABEL_13:
  v8 = DVARINT_playlistCategory;
  if ( !DVARINT_playlistCategory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistCategory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  unsignedInt = v8->current.unsignedInt;
  if ( (unsigned int)unsignedInt < 0x1A && (categories[unsignedInt].flags & 1) != 0 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rsp+0E8h+state.member], xmm0 }
    high_state.isValid = 0;
    high_state.offset = 0;
    high_state.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rsp+0E8h+var_A8.member], xmm0 }
    if ( Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, unsignedInt, &filter_out, &high_state, &high_filter_out) )
    {
      v11 = high_filter_out;
      partners = playlists[1].partners;
      v13 = filter_out;
      v14 = 1i64;
      v15 = -64;
      do
      {
        if ( v14 >= 65 )
          v16 = _bittest64((const __int64 *)&v11, v15);
        else
          v16 = _bittest64((const __int64 *)&v13, (unsigned __int8)(v15 + 64));
        if ( v16 )
        {
          if ( *(partners - 8) )
          {
            crc32Changed = 1;
            break;
          }
          v17 = 0i64;
          while ( 1 )
          {
            v18 = partners[v17];
            if ( v18 )
            {
              if ( playlists[v18].crc32Changed )
                break;
            }
            if ( ++v17 >= 8 )
              goto LABEL_31;
          }
          crc32Changed = 1;
        }
LABEL_31:
        ++v15;
        ++v14;
        partners += 992;
      }
      while ( (__int64)partners < (__int64)&categories[0].overrideDvarValue[31] );
    }
  }
  v19 = 1;
  while ( 2 )
  {
    v20 = 0x7FFFFFFFi64;
    v21 = v19;
    overrideDvarValue = categories[v21].overrideDvarValue;
    overrideDvarName = categories[v21].overrideDvarName;
    v24 = categories[v21].overrideDvarValue;
    StringSafe = Dvar_GetStringSafe(categories[v21].overrideDvarName);
    if ( !StringSafe && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v26 = StringSafe - overrideDvarValue;
    do
    {
      v27 = (unsigned __int8)v24[v26];
      v28 = v20;
      v29 = (unsigned __int8)*v24++;
      --v20;
      if ( !v28 )
        break;
      if ( (_BYTE)v27 != (_BYTE)v29 )
      {
        v32 = Dvar_GetStringSafe(overrideDvarName);
        Core_strcpy(overrideDvarValue, 0x40ui64, v32);
        crc32Changed = 1;
LABEL_47:
        Playlist_UpdateFeatured(v27, v29);
        p_crc32Changed = &playlists[0].crc32Changed;
        globalRules.crc32Changed = 0;
        do
        {
          *p_crc32Changed = 0;
          p_crc32Changed += 992;
        }
        while ( (__int64)p_crc32Changed < (__int64)&categories[0].overrideDvarValue[23] );
        gametypes[0].crc32Changed = 0;
        gametypes[1].crc32Changed = 0;
        gametypes[2].crc32Changed = 0;
        gametypes[3].crc32Changed = 0;
        gametypes[4].crc32Changed = 0;
        gametypes[5].crc32Changed = 0;
        gametypes[6].crc32Changed = 0;
        gametypes[7].crc32Changed = 0;
        gametypes[8].crc32Changed = 0;
        gametypes[9].crc32Changed = 0;
        gametypes[10].crc32Changed = 0;
        gametypes[11].crc32Changed = 0;
        gametypes[12].crc32Changed = 0;
        gametypes[13].crc32Changed = 0;
        gametypes[14].crc32Changed = 0;
        gametypes[15].crc32Changed = 0;
        gametypes[16].crc32Changed = 0;
        gametypes[17].crc32Changed = 0;
        gametypes[18].crc32Changed = 0;
        gametypes[19].crc32Changed = 0;
        gametypes[20].crc32Changed = 0;
        gametypes[21].crc32Changed = 0;
        gametypes[22].crc32Changed = 0;
        gametypes[23].crc32Changed = 0;
        gametypes[24].crc32Changed = 0;
        gametypes[25].crc32Changed = 0;
        gametypes[26].crc32Changed = 0;
        gametypes[27].crc32Changed = 0;
        gametypes[28].crc32Changed = 0;
        gametypes[29].crc32Changed = 0;
        gametypes[30].crc32Changed = 0;
        gametypes[31].crc32Changed = 0;
        gametypes[32].crc32Changed = 0;
        gametypes[33].crc32Changed = 0;
        gametypes[34].crc32Changed = 0;
        gametypes[35].crc32Changed = 0;
        gametypes[36].crc32Changed = 0;
        gametypes[37].crc32Changed = 0;
        gametypes[38].crc32Changed = 0;
        gametypes[39].crc32Changed = 0;
        gametypes[40].crc32Changed = 0;
        gametypes[41].crc32Changed = 0;
        gametypes[42].crc32Changed = 0;
        gametypes[43].crc32Changed = 0;
        gametypes[44].crc32Changed = 0;
        gametypes[45].crc32Changed = 0;
        gametypes[46].crc32Changed = 0;
        gametypes[47].crc32Changed = 0;
        gametypes[48].crc32Changed = 0;
        gametypes[49].crc32Changed = 0;
        gametypes[50].crc32Changed = 0;
        gametypes[51].crc32Changed = 0;
        gametypes[52].crc32Changed = 0;
        gametypes[53].crc32Changed = 0;
        gametypes[54].crc32Changed = 0;
        gametypes[55].crc32Changed = 0;
        gametypes[56].crc32Changed = 0;
        gametypes[57].crc32Changed = 0;
        gametypes[58].crc32Changed = 0;
        gametypes[59].crc32Changed = 0;
        gametypes[60].crc32Changed = 0;
        gametypes[61].crc32Changed = 0;
        gametypes[62].crc32Changed = 0;
        gametypes[63].crc32Changed = 0;
        return crc32Changed;
      }
    }
    while ( (_BYTE)v27 );
    if ( ++v19 < 26 )
      continue;
    break;
  }
  if ( crc32Changed )
    goto LABEL_47;
  return crc32Changed;
}

/*
==============
Playlist_IsBRPlunderPostTutorial
==============
*/
bool Playlist_IsBRPlunderPostTutorial(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2143, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x400) != 0;
  return result;
}

/*
==============
Playlist_IsCategoryBR
==============
*/
bool Playlist_IsCategoryBR(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 0x40) != 0;
}

/*
==============
Playlist_IsCategoryCDL
==============
*/
bool Playlist_IsCategoryCDL(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 0x10) != 0;
}

/*
==============
Playlist_IsCategoryFeatured
==============
*/
bool Playlist_IsCategoryFeatured(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 4) != 0;
}

/*
==============
Playlist_IsCategoryFiltered
==============
*/
bool Playlist_IsCategoryFiltered(LocalClientNum_t clientNum, unsigned int category)
{
  if ( category < 0x1A )
    return categories[category].flags & 1;
  else
    return 0;
}

/*
==============
Playlist_IsCategoryHardcore
==============
*/
bool Playlist_IsCategoryHardcore(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 2) != 0;
}

/*
==============
Playlist_IsCategoryParty
==============
*/
bool Playlist_IsCategoryParty(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 0x20) != 0;
}

/*
==============
Playlist_IsCategoryPromoted
==============
*/
bool Playlist_IsCategoryPromoted(LocalClientNum_t clientNum, unsigned int category)
{
  return (categories[category].flags & 8) != 0;
}

/*
==============
Playlist_IsDMZPostTutorial
==============
*/
bool Playlist_IsDMZPostTutorial(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2154, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x800) != 0;
  return result;
}

/*
==============
Playlist_IsLimitedTime
==============
*/
bool Playlist_IsLimitedTime(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2176, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x2000) != 0;
  return result;
}

/*
==============
Playlist_IsNew
==============
*/
bool Playlist_IsNew(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3789, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return playlists[v1].is_new;
  return result;
}

/*
==============
Playlist_IsPlaylistFiltered
==============
*/
bool Playlist_IsPlaylistFiltered(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int num; 
  unsigned __int64 v8; 
  unsigned __int8 v9; 
  unsigned __int64 high_filter_out; 
  DDLState high_state; 
  DDLState v13; 
  DDLContext v14; 
  unsigned __int64 filter_out; 

  v4 = category;
  v5 = index;
  if ( (categories[category].flags & 1) == 0 )
    return 0;
  v13.isValid = 0;
  v13.offset = 0;
  high_state.isValid = 0;
  high_state.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v13.arrayIndex = -1;
  __asm { vmovdqu [rsp+0C8h+var_50], xmm0 }
  high_state.arrayIndex = -1;
  __asm { vmovdqu [rsp+0C8h+var_70], xmm0 }
  if ( !Playlist_GetFiltersForCategory(clientNum, &v14, &v13, category, &filter_out, &high_state, &high_filter_out) )
    return 0;
  num = categories[v4].entries[v5].num;
  if ( num >= 0x41 )
  {
    v8 = high_filter_out;
    v9 = num - 65;
  }
  else
  {
    v8 = filter_out;
    v9 = num - 1;
  }
  return _bittest64((const __int64 *)&v8, v9) != 0;
}

/*
==============
Playlist_IsPulsed
==============
*/
bool Playlist_IsPulsed(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2121, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x4000) != 0;
  return result;
}

/*
==============
Playlist_IsSurvival
==============
*/
bool Playlist_IsSurvival(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2165, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x1000) != 0;
  return result;
}

/*
==============
Playlist_JoinInProgressDisabled
==============
*/
bool Playlist_JoinInProgressDisabled(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2088, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return playlists[v1].flags & 1;
  return result;
}

/*
==============
Playlist_JoinViaPresenceDisabled
==============
*/
bool Playlist_JoinViaPresenceDisabled(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2099, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x80) != 0;
  return result;
}

/*
==============
Playlist_LookupItemImage
==============
*/
char *Playlist_LookupItemImage(LocalClientNum_t clientNum, int lookupNum)
{
  __int64 v2; 

  v2 = lookupNum;
  if ( lookupNum >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2466, ASSERT_TYPE_ASSERT, "(lookupNum < 129)", (const char *)&queryFormat, "lookupNum < MAX_PLAYLISTS") )
    __debugbreak();
  return playlists[v2].image;
}

/*
==============
Playlist_MarkEntryPlayed
==============
*/
void Playlist_MarkEntryPlayed(const int playlistId, const int entryNum)
{
  playlistEntry *Entry; 
  unsigned __int8 remainingWeight; 
  int v6; 

  Entry = Playlist_GetEntry(playlistId, entryNum);
  remainingWeight = Entry->remainingWeight;
  if ( remainingWeight )
  {
    Entry->remainingWeight = remainingWeight - 1;
    v6 = (unsigned __int8)(remainingWeight - 1);
    Com_DPrintf(16, "Marking playlistId %i, entry %i as played. Remaining weight is %i\n", (unsigned int)playlistId, (unsigned int)entryNum, v6);
  }
  else
  {
    Com_PrintWarning(16, "Trying to mark playlistId %i, entry %i as played but it's already reached its quota for this playlist\n", (unsigned int)playlistId, (unsigned int)entryNum);
  }
}

/*
==============
Playlist_MigrateHost
==============
*/
void Playlist_MigrateHost(unsigned __int8 *lastEntries, int numEntries)
{
  const dvar_t *v2; 
  __int64 v4; 
  unsigned int PlaylistIdForNum; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 v9; 
  unsigned int v10; 
  playlistEntry *Entry; 
  unsigned __int8 remainingWeight; 
  char *fmt; 

  v2 = DVARINT_playlist;
  v4 = numEntries;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v2->current.integer);
  v6 = Playlist_GetNumEntries(PlaylistIdForNum);
  Playlist_ResetWeights(PlaylistIdForNum);
  Com_DPrintf(16, "Playlists: Migrating host: copying %i states for playlistId %i.\n", (unsigned int)v4, PlaylistIdForNum);
  v7 = v4;
  if ( (int)v4 > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = lastEntries[v8];
      if ( v9 != 0xFF )
      {
        v10 = v9;
        if ( v9 < v6 )
        {
          Entry = Playlist_GetEntry(PlaylistIdForNum, v9);
          remainingWeight = Entry->remainingWeight;
          if ( remainingWeight )
          {
            Entry->remainingWeight = remainingWeight - 1;
            LODWORD(fmt) = (unsigned __int8)(remainingWeight - 1);
            Com_DPrintf(16, "Marking playlistId %i, entry %i as played. Remaining weight is %i\n", PlaylistIdForNum, v10, fmt);
          }
          else
          {
            Com_PrintWarning(16, "Trying to mark playlistId %i, entry %i as played but it's already reached its quota for this playlist\n", PlaylistIdForNum, v10);
          }
        }
      }
      ++v8;
    }
    while ( v8 < v7 );
  }
}

/*
==============
Playlist_ParsePlaylists
==============
*/
void Playlist_ParsePlaylists(const char *buffer)
{
  int v2; 
  unsigned int crc32; 
  bool crc32Changed; 
  __int64 v5; 
  const char *v6; 
  unsigned int i; 
  char *v8; 
  __int64 v9; 
  unsigned int j; 
  __int64 v11; 
  __int64 v12; 
  char v13; 
  char v14; 
  bool Array; 
  unsigned int k; 
  char *tail; 
  StringBuffer *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  char *v24; 
  int v25; 
  char *localizedName; 
  unsigned int m; 
  char v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int n; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int v40; 
  int v41; 
  unsigned int ii; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v48; 
  int v49; 
  char *v50; 
  __int64 v51; 
  __int64 v52; 
  playlistInfo *v53; 
  unsigned __int16 *p_numEntries; 
  unsigned int v55; 
  __int64 v56; 
  char *v57; 
  StringBuffer *v58; 
  __int64 v59; 
  __int64 v60; 
  unsigned int v61; 
  __int64 v62; 
  char *v63; 
  int v64; 
  playlistInfo *v65; 
  unsigned int v66; 
  char v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  __int64 v71; 
  __int64 v72; 
  const char *v73; 
  unsigned int jj; 
  const dvar_t *v78; 
  int integer; 
  int v80; 
  unsigned __int8 v81; 
  __int64 v82; 
  int v83; 
  unsigned __int8 v84; 
  char *v85; 
  const dvar_t *v86; 
  int v87; 
  int v88; 
  unsigned __int8 v89; 
  __int64 v90; 
  int v91; 
  int v92; 
  char *v93; 
  __int64 v94; 
  unsigned int kk; 
  __int64 v96; 
  __int64 v97; 
  int v98; 
  int v99; 
  int v101; 
  int v102; 
  unsigned int v103; 
  __int64 v104; 
  __int64 v105; 
  char v106; 
  char v107; 
  unsigned int mm; 
  unsigned __int16 v110; 
  __int64 v111; 
  int v112; 
  char *v113; 
  __int64 v114; 
  char *v115; 
  signed __int64 v116; 
  int v117; 
  int v118; 
  int v120; 
  int v121; 
  __int64 v122; 
  __int64 v123; 
  int v124; 
  int v125; 
  int v127; 
  int v128; 
  __int64 v129; 
  __int64 v130; 
  int v131; 
  int v132; 
  int v134; 
  int v135; 
  __int64 v136; 
  __int64 v137; 
  int v138; 
  int v139; 
  int v141; 
  int v142; 
  __int64 v143; 
  __int64 v144; 
  int v145; 
  int v146; 
  int v148; 
  int v149; 
  __int64 v150; 
  __int64 v151; 
  int v152; 
  int v153; 
  int v155; 
  int v156; 
  __int64 v157; 
  __int64 v158; 
  int v159; 
  int v160; 
  int v162; 
  int v163; 
  __int64 v164; 
  __int64 v165; 
  int v166; 
  int v167; 
  int v169; 
  int v170; 
  __int64 v171; 
  __int64 v172; 
  int v173; 
  int v174; 
  int v176; 
  int v177; 
  __int64 v178; 
  __int64 v179; 
  int v180; 
  int v181; 
  int v183; 
  int v184; 
  __int64 v185; 
  __int64 v186; 
  int v187; 
  int v188; 
  int v190; 
  int v191; 
  __int64 v192; 
  __int64 v193; 
  int v194; 
  int v195; 
  int v197; 
  int v198; 
  __int64 v199; 
  __int64 v200; 
  int v201; 
  int v202; 
  int v204; 
  int v205; 
  __int64 v206; 
  __int64 v207; 
  int v208; 
  int v209; 
  int v211; 
  int v212; 
  __int64 v213; 
  __int64 v214; 
  int v215; 
  int v216; 
  int v218; 
  int v219; 
  __int64 v220; 
  __int64 v221; 
  char v222; 
  char v223; 
  int v225; 
  __int64 v226; 
  char *v227; 
  __int64 v228; 
  int v229; 
  int v230; 
  int v232; 
  int v233; 
  __int64 v234; 
  unsigned __int16 firstEntry; 
  unsigned __int16 v236; 
  __int64 v237; 
  unsigned int v238; 
  __int64 v239; 
  __int64 v240; 
  char v241; 
  char v242; 
  int v244; 
  __int64 v245; 
  __int64 v246; 
  __int64 v247; 
  char *image; 
  unsigned int *p_requiredDLCMask; 
  __int64 v250; 
  __int64 v251; 
  int v252; 
  int v253; 
  int v255; 
  int v256; 
  int v257; 
  __int64 v258; 
  __int64 v259; 
  int v260; 
  int v261; 
  int v263; 
  int v264; 
  const char *v265; 
  __int64 v266; 
  __int64 v267; 
  int v268; 
  int v269; 
  int v271; 
  int v272; 
  __int64 v273; 
  __int64 v274; 
  int v275; 
  int v276; 
  int v278; 
  int v279; 
  __int64 v280; 
  __int64 v281; 
  int v282; 
  int v283; 
  int v285; 
  int v286; 
  __int64 v287; 
  __int64 v288; 
  int v289; 
  int v290; 
  int v292; 
  int v293; 
  __int64 v294; 
  __int64 v295; 
  int v296; 
  int v297; 
  int v299; 
  int v300; 
  __int64 v301; 
  __int64 v302; 
  int v303; 
  int v304; 
  int v306; 
  int v307; 
  __int64 v308; 
  __int64 v309; 
  int v310; 
  int v311; 
  int v313; 
  int v314; 
  const char *v315; 
  __int64 v316; 
  __int64 v317; 
  char v318; 
  char v319; 
  __int64 v321; 
  __int64 v322; 
  char v323; 
  char v324; 
  __int64 v326; 
  __int64 v327; 
  char v328; 
  char v329; 
  __int64 v331; 
  __int64 v332; 
  char v333; 
  char v334; 
  __int64 v336; 
  __int64 v337; 
  char v338; 
  char v339; 
  __int64 v341; 
  __int64 v342; 
  char v343; 
  char v344; 
  __int64 v346; 
  __int64 v347; 
  char v348; 
  char v349; 
  categoryInfo *v351; 
  unsigned int nn; 
  const char *StringSafe; 
  unsigned int v354; 
  char *v355; 
  __int64 v356; 
  __int64 v357; 
  int v358; 
  __int64 v359; 
  StringBuffer *v360; 
  const char *v361; 
  int RemainingAfterTail; 
  unsigned __int8 numEntries; 
  int v364; 
  unsigned __int8 *v365; 
  int v366; 
  unsigned __int16 *v367; 
  const char *v368; 
  const char *v369; 
  PublisherVariableManager *Instance; 
  __int64 v371; 
  __int64 v372; 
  __int64 v373; 
  int v374; 
  int v375; 
  __int64 v376; 
  __int64 v377; 
  __int64 v378; 
  __int64 v379; 
  __int64 v380; 
  __int64 v381; 
  __int64 v382; 
  __int64 v383; 
  __int64 v384; 
  __int64 v385; 
  __int64 v386; 
  char *v387; 
  __int64 v388; 
  int v389; 
  __int64 v390; 
  int v391; 
  __int64 v392; 
  int v393; 
  __int64 v394; 
  int v395; 
  __int64 v396; 
  int v397; 
  __int64 v398; 
  int v399; 
  __int64 v400; 
  int v401; 
  __int64 v402; 
  int v403; 
  __int64 v404; 
  int v405; 
  __int64 v406; 
  int v407; 
  __int64 v408; 
  int v409; 
  __int64 v410; 
  int v411; 
  __int64 v412; 
  int v413; 
  __int64 v414; 
  int v415; 
  __int64 v416; 
  int v417; 
  __int64 v418; 
  int v419; 
  __int64 v420; 
  int v421; 
  __int64 v422; 
  int v423; 
  __int64 v424; 
  int v425; 
  __int64 v426; 
  int v427; 
  __int64 v428; 
  int v429; 
  __int64 v430; 
  int v431; 
  __int64 v432; 
  int v433; 
  __int64 v434; 
  int v435; 
  __int64 v436; 
  int v437; 
  __int64 v438; 
  int v439; 
  __int64 v440; 
  int v441; 
  __int64 v442; 
  int v443; 
  __int64 v444; 
  int v445; 
  __int64 v446; 
  int v447; 
  __int64 v448; 
  unsigned int v449; 
  categoryInfo *v450; 
  __int64 v451; 
  __int64 v452; 
  int v453; 
  __int64 v454; 
  int v455; 
  __int64 v456; 
  int v457; 
  __int64 v458; 
  int v459; 
  __int64 v460; 
  int v461; 
  __int64 v462; 
  int v463; 
  __int64 v464; 
  int v465; 
  __int64 v466; 
  int v467; 
  __int64 v468; 
  int v469; 
  __int64 v470; 
  int v471; 
  __int64 v472; 
  int v473; 
  __int64 v474; 
  int v475; 
  __int64 v476; 
  int v477; 
  __int64 v478; 
  int v479; 
  __int64 v480; 
  int v481; 
  __int64 v482; 
  int v483; 
  __int64 v484; 
  int v485; 
  __int64 v486; 
  int v487; 
  __int64 v488; 
  int v489; 
  __int64 v490; 
  int v491; 
  __int64 v492; 
  int v493; 
  __int64 v494; 
  int v495; 
  __int64 v496; 
  int v497; 
  __int64 v498; 
  int v499; 
  __int64 v500; 
  unsigned int v501; 
  int v502; 
  bdJSONDeserializer *v503; 
  __int64 v504; 
  __int64 v505; 
  __int64 v506; 
  __int64 v507; 
  int v508; 
  bdJSONDeserializer v509; 
  int v510[2]; 
  unsigned int v511; 
  bdJSONDeserializer v512; 
  int v513; 
  unsigned __int64 v514; 
  bdJSONDeserializer value; 
  float v516[2]; 
  int v517[2]; 
  int v518[2]; 
  __int64 v519; 
  unsigned __int64 v520; 
  bdJSONDeserializer v521; 
  __int64 v522; 
  bdJSONDeserializer v523; 
  char v524[8]; 
  char src[64]; 
  char v526[64]; 
  char _Buffer; 
  char Src[3]; 
  char Str1[10]; 
  char v530; 
  char v531[6]; 
  char v532[2]; 
  char v533[14]; 
  char v534; 
  char key[256]; 
  char v536[512]; 
  char dest[3072]; 

  v522 = -2i64;
  v2 = 0;
  v511 = 0;
  v508 = 0;
  v513 = 0;
  numGametypes = -1;
  memset_0(&playlistStringBuffer, 0, sizeof(playlistStringBuffer));
  globalRules.rules = (char *)PlaylistStringBuffer_GetTail();
  memset_0(&maps, 0, sizeof(maps));
  memset_0(dest, 0, sizeof(dest));
  s_playlistEntryCount = 0;
  s_dedicatedServersRequired = 0;
  bdJSONDeserializer::bdJSONDeserializer(&v521);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::parse(&v521, buffer);
  if ( bdJSONDeserializer::getObject(&v521, "global_dvars", &value) )
  {
    crc32 = globalRules.crc32;
    globalRules.crc32 = 0;
    if ( bdJSONDeserializer::hasKey(&value, "crc32") )
    {
      bdJSONDeserializer::getUInt32(&value, "crc32", &globalRules.crc32);
      if ( playist_initialParse )
      {
        crc32Changed = globalRules.crc32Changed;
        if ( crc32 != globalRules.crc32 )
          crc32Changed = 1;
        globalRules.crc32Changed = crc32Changed;
      }
    }
    *(_QWORD *)&v523.m_type = "dvars";
    v523.m_ptr = "xb3_dvars";
    v523.m_end = "dev_dvars";
    *(_QWORD *)&v523.m_isFloatingPoint = 0i64;
    v5 = 0i64;
    v6 = "dvars";
    do
    {
      if ( bdJSONDeserializer::hasKey(&value, v6) )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v509);
        bdJSONDeserializer::getObject(&value, v6, &v509);
        for ( i = 0; i < v509.m_count; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v512);
          bdJSONDeserializer::getFieldByIndex(&v509, i, key, 0x100u, &v512);
          if ( bdJSONDeserializer::isString(&v512) )
          {
            if ( !bdJSONDeserializer::getString(&v512, v536, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 541, ASSERT_TYPE_ASSERT, "(ok && \"Global Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Global Dvar string too large.\"") )
              __debugbreak();
            j_sprintf(&_Buffer, "%s \"%s\";", key, v536);
          }
          else if ( bdJSONDeserializer::convertToString(&v512, v536, 0x200u) )
          {
            j_sprintf(&_Buffer, "%s %s;", key, v536);
          }
          else
          {
            Com_PrintError(25, "[Playlist] failed to convert rule to string '%s'\n", key);
          }
          v8 = globalRules.rules - 1;
          do
            ++v8;
          while ( *v8 );
          strcpy(v8, &_Buffer);
          v9 = -1i64;
          do
            ++v9;
          while ( Src[v9 - 1] );
          PlaylistStringBuffer_MoveTail(v9);
          bdJSONDeserializer::~bdJSONDeserializer(&v512);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v509);
      }
      ++v5;
      v6 = (const char *)*((_QWORD *)&v523.m_type + v5);
    }
    while ( v6 );
  }
  if ( bdJSONDeserializer::getObject(&v521, "system", &value) )
  {
    if ( bdJSONDeserializer::hasKey(&value, "version") )
      bdJSONDeserializer::getUInt32(&value, "version", &playlist_versionNum);
    if ( bdJSONDeserializer::hasKey(&value, "flags") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v512);
      bdJSONDeserializer::getArray(&value, "flags", &v512);
      for ( j = 0; j < v512.m_count; ++j )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v523);
        bdJSONDeserializer::getElementByIndex(&v512, j, &v523);
        bdJSONDeserializer::getString(&v523, v526, 0x40u);
        v11 = 0x7FFFFFFFi64;
        v12 = 0i64;
        do
        {
          v13 = v526[v12];
          v14 = aDorestart[v12++];
          if ( !v11-- )
            break;
          if ( v13 != v14 )
            goto LABEL_35;
        }
        while ( v13 );
        globalRules.crc32Changed = 1;
LABEL_35:
        bdJSONDeserializer::~bdJSONDeserializer(&v523);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v512);
    }
  }
  Array = bdJSONDeserializer::getArray(&v521, "gametypes", &value);
  v519 = 2i64;
  if ( Array )
  {
    for ( k = 0; k < value.m_count; ++k )
    {
      ++numGametypes;
      tail = playlistStringBuffer.tail;
      if ( playlistStringBuffer.tail )
      {
        v20 = -1i64;
        do
          ++v20;
        while ( playlistStringBuffer.tail[v20] );
        if ( (_DWORD)v20 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 141, ASSERT_TYPE_ASSERT, "(I_strlen( playlistStringBuffer.tail ) == 0)", (const char *)&queryFormat, "I_strlen( playlistStringBuffer.tail ) == 0") )
            __debugbreak();
          tail = playlistStringBuffer.tail;
        }
        v19 = (StringBuffer *)(tail + 1);
      }
      else
      {
        v19 = &playlistStringBuffer;
      }
      playlistStringBuffer.tail = (char *)v19;
      v21 = numGametypes;
      gametypes[v21].rules = (char *)v19;
      gametypes[v21].scriptName[0] = 0;
      gametypes[v21].hasRecipe = 0;
      gametypes[v21].localizedName[0] = 0;
      *(_QWORD *)&gametypes[v21].teamCount = 0i64;
      *(_WORD *)&gametypes[v21].hardcore = 0;
      v22 = gametypes[v21].crc32;
      gametypes[v21].crc32 = 0;
      gametypes[v21].crc32Changed = 0;
      bdJSONDeserializer::bdJSONDeserializer(&v509);
      bdJSONDeserializer::getElementByIndex(&value, k, &v509);
      if ( bdJSONDeserializer::hasKey(&v509, "crc32") )
      {
        bdJSONDeserializer::getUInt32(&v509, "crc32", &gametypes[numGametypes].crc32);
        if ( playist_initialParse )
        {
          v23 = numGametypes;
          if ( v22 != gametypes[v23].crc32 )
            gametypes[v23].crc32Changed = 1;
        }
      }
      if ( bdJSONDeserializer::hasKey(&v509, "gametype") )
        bdJSONDeserializer::getString(&v509, "gametype", gametypes[numGametypes].internalName, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v509, (const char *const)&stru_143C9A1A4) )
      {
        bdJSONDeserializer::getString(&v509, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
        if ( _Buffer == 35 )
          v24 = Src;
        else
          v24 = (char *)UI_SafeTranslateString(&_Buffer);
        v25 = 64;
        localizedName = gametypes[numGametypes].localizedName;
        for ( m = 60; ; m = v31 )
        {
          v28 = *v24;
          if ( !*v24 )
            break;
          v510[0] = 0;
          if ( v28 < 0 )
          {
            if ( (v28 & 0xE0) == 0xC0 )
            {
              if ( (v24[1] & 0x7F | ((unsigned __int8)(v28 & 0x1F) << 6)) < 0x80u )
                break;
              v510[0] = 2;
              v29 = 2;
            }
            else if ( (v28 & 0xF0) == 0xE0 )
            {
              v30 = v24[2] & 0x7F | ((v24[1] & 0x7F | ((v28 & 0xF) << 6)) << 6);
              if ( v30 - 2048 > 0xCFFF && v30 < 0xE000 )
                break;
              v510[0] = 3;
              v29 = 3;
            }
            else
            {
              if ( (v28 & 0xF8) != 0xF0 || (((v24[2] & 0x7F | ((v24[1] & 0x7F | ((v28 & 7) << 6)) << 6)) << 6) | v24[3] & 0x7Fu) - 0x10000 > 0xFFFFE )
                break;
              v510[0] = 4;
              v29 = 4;
            }
          }
          else
          {
            v29 = 1;
            v510[0] = 1;
          }
          v31 = m - v29;
          if ( (int)(m - v29) < 0 )
            break;
          v32 = v29;
          memcpy_0(localizedName, v24, v29);
          localizedName += v32;
          v24 += v32;
          if ( !--v25 && *v24 )
          {
            v33 = 0i64;
            if ( m >= 3 )
            {
              *(_WORD *)localizedName = -32542;
              localizedName[2] = -90;
              v33 = 3i64;
            }
            localizedName += v33;
            break;
          }
        }
        *localizedName = 0;
        v2 = 0;
      }
      if ( bdJSONDeserializer::hasKey(&v509, "script") )
        bdJSONDeserializer::getString(&v509, "script", gametypes[numGametypes].scriptName, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v509, "teamCount") )
        bdJSONDeserializer::getInt32(&v509, "teamCount", &gametypes[numGametypes].teamCount);
      if ( bdJSONDeserializer::hasKey(&v509, "teamSize") )
        bdJSONDeserializer::getInt32(&v509, "teamSize", &gametypes[numGametypes].teamSize);
      if ( bdJSONDeserializer::hasKey(&v509, "flags") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v512);
        bdJSONDeserializer::getArray(&v509, "flags", &v512);
        for ( n = 0; n < v512.m_count; ++n )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v523);
          bdJSONDeserializer::getElementByIndex(&v512, n, &v523);
          bdJSONDeserializer::getString(&v523, v526, 0x40u);
          v35 = 0x7FFFFFFFi64;
          v36 = 0i64;
          while ( 1 )
          {
            v37 = (unsigned __int8)v526[v36];
            v38 = (unsigned __int8)aHardcore[v36++];
            if ( !v35-- )
            {
LABEL_97:
              gametypes[numGametypes].hardcore = 1;
              goto LABEL_98;
            }
            if ( v37 != v38 )
            {
              v40 = v37 + 32;
              if ( (unsigned int)(v37 - 65) > 0x19 )
                v40 = v37;
              v37 = v40;
              v41 = v38 + 32;
              if ( (unsigned int)(v38 - 65) > 0x19 )
                v41 = v38;
              if ( v37 != v41 )
                break;
            }
            if ( !v37 )
              goto LABEL_97;
          }
          v43 = 0x7FFFFFFFi64;
          v44 = 0i64;
          do
          {
            v45 = (unsigned __int8)v526[v44];
            v46 = (unsigned __int8)aTactical[v44++];
            if ( !v43-- )
              break;
            if ( v45 != v46 )
            {
              v48 = v45 + 32;
              if ( (unsigned int)(v45 - 65) > 0x19 )
                v48 = v45;
              v45 = v48;
              v49 = v46 + 32;
              if ( (unsigned int)(v46 - 65) > 0x19 )
                v49 = v46;
              if ( v45 != v49 )
                goto LABEL_98;
            }
          }
          while ( v45 );
          gametypes[numGametypes].tactical = 1;
LABEL_98:
          bdJSONDeserializer::~bdJSONDeserializer(&v523);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v512);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "dvars") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v523);
        if ( bdJSONDeserializer::getObject(&v509, "dvars", &v523) )
        {
          for ( ii = 0; ii < v523.m_count; ++ii )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v512);
            bdJSONDeserializer::getFieldByIndex(&v523, ii, key, 0x100u, &v512);
            if ( bdJSONDeserializer::isString(&v512) )
            {
              if ( !bdJSONDeserializer::getString(&v512, v536, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 688, ASSERT_TYPE_ASSERT, "(ok && \"Gametypes Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Gametypes Dvar string too large.\"") )
                __debugbreak();
              j_sprintf(&_Buffer, "%s \"%s\";", key, v536);
            }
            else if ( bdJSONDeserializer::convertToString(&v512, v536, 0x200u) )
            {
              j_sprintf(&_Buffer, "%s %s;", key, v536);
            }
            else
            {
              Com_PrintError(25, "[Playlist] failed to convert rule to string '%s'\n", key);
            }
            v50 = gametypes[numGametypes].rules - 1;
            do
              ++v50;
            while ( *v50 );
            strcpy(v50, &_Buffer);
            v51 = -1i64;
            do
              ++v51;
            while ( Src[v51 - 1] );
            PlaylistStringBuffer_MoveTail(v51);
            bdJSONDeserializer::~bdJSONDeserializer(&v512);
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v523);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "recipe") )
      {
        gametypes[numGametypes].hasRecipe = 1;
        if ( bdJSONDeserializer::hasKey(&v509, "recipestart") )
          bdJSONDeserializer::getInt32(&v509, "recipestart", &gametypes[numGametypes].recipe_offset);
        if ( bdJSONDeserializer::hasKey(&v509, "recipesize") )
          bdJSONDeserializer::getInt32(&v509, "recipesize", &gametypes[numGametypes].recipe_size);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v509);
    }
  }
  v53 = playlists;
  if ( bdJSONDeserializer::getArray(&v521, "playlists", &value) )
  {
    p_numEntries = &playlists[0].numEntries;
    do
    {
      p_numEntries[1] = *p_numEntries;
      *p_numEntries = 0;
      p_numEntries[497] = p_numEntries[496];
      p_numEntries[496] = 0;
      p_numEntries[993] = p_numEntries[992];
      p_numEntries[992] = 0;
      p_numEntries += 1488;
    }
    while ( (__int64)p_numEntries < (__int64)&categories[0].overrideDvarName[49] );
    v55 = 0;
    for ( LODWORD(v514) = 0; v55 < value.m_count; LODWORD(v514) = v55 )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v509);
      bdJSONDeserializer::getElementByIndex(&value, v55, &v509);
      bdJSONDeserializer::getInt32(&v509, "playlist", &v508);
      if ( (unsigned int)v508 >= 0x81 )
      {
        LODWORD(v505) = 129;
        LODWORD(v504) = v508;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 741, ASSERT_TYPE_ASSERT, "(unsigned)( playlistNum ) < (unsigned)( ( sizeof( *array_counter( playlists ) ) + 0 ) )", "playlistNum doesn't index ARRAY_COUNT( playlists )\n\t%i not in [0, %i)", v504, v505) )
          __debugbreak();
      }
      v56 = v508;
      playlists[v56].name[0] = 0;
      playlists[v56].description[0] = 0;
      playlists[v56].image[0] = 0;
      playlists[v56].smallImage[0] = 0;
      playlists[v56].featuredImage[0] = 0;
      playlists[v56].video[0] = 0;
      playlists[v56].context[0] = 0;
      playlists[v56].dc_restrict[0] = 0;
      v57 = playlistStringBuffer.tail;
      if ( playlistStringBuffer.tail )
      {
        v59 = -1i64;
        do
          ++v59;
        while ( playlistStringBuffer.tail[v59] );
        if ( (_DWORD)v59 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 141, ASSERT_TYPE_ASSERT, "(I_strlen( playlistStringBuffer.tail ) == 0)", (const char *)&queryFormat, "I_strlen( playlistStringBuffer.tail ) == 0") )
            __debugbreak();
          v57 = playlistStringBuffer.tail;
        }
        v58 = (StringBuffer *)(v57 + 1);
      }
      else
      {
        v58 = &playlistStringBuffer;
      }
      playlistStringBuffer.tail = (char *)v58;
      v60 = v508;
      playlists[v60].rules = (char *)v58;
      *(_QWORD *)&playlists[v60].requiredDLCMask = 0i64;
      *(_DWORD *)&playlists[v60].firstEntry = 0;
      *(_DWORD *)&playlists[v60].maxPartySize = 16843009;
      playlists[v60].maxSquadSize = 0;
      playlists[v60].numRounds = 0;
      playlists[v60].maxHumanPlayers = 0;
      *(_QWORD *)&playlists[v60].time_limit = 0i64;
      *(_DWORD *)&playlists[v60].ranked = -16777216;
      *(_WORD *)&playlists[v60].botMMReserveSlotsAxis = 0;
      playlists[v60].dedicatedServerRequired = 0;
      playlists[v60].gamemodeType = PLAYLIST_GAMEMODE_TYPE_NONE;
      playlists[v60].is_new = 0;
      *(_QWORD *)playlists[v60].partners = 0i64;
      v61 = playlists[v60].crc32;
      playlists[v60].crc32 = 0;
      playlists[v60].crc32Changed = 0;
      if ( bdJSONDeserializer::hasKey(&v509, "crc32") )
      {
        bdJSONDeserializer::getUInt32(&v509, "crc32", &playlists[v508].crc32);
        if ( playist_initialParse )
        {
          v62 = v508;
          if ( v61 != playlists[v62].crc32 )
            playlists[v62].crc32Changed = 1;
        }
      }
      if ( bdJSONDeserializer::hasKey(&v509, (const char *const)&stru_143C9A1A4) )
      {
        bdJSONDeserializer::getString(&v509, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
        if ( _Buffer == 35 )
          v63 = Src;
        else
          v63 = (char *)UI_SafeTranslateString(&_Buffer);
        v64 = 128;
        v65 = &playlists[v508];
        v66 = 124;
        while ( 1 )
        {
          v67 = *v63;
          if ( !*v63 )
            break;
          v510[0] = 0;
          if ( v67 < 0 )
          {
            if ( (v67 & 0xE0) == 0xC0 )
            {
              if ( (((v67 & 0x1F) << 6) | v63[1] & 0x7Fu) < 0x80 )
                break;
              v68 = 2;
              v510[0] = 2;
            }
            else if ( (v67 & 0xF0) == 0xE0 )
            {
              v69 = v63[2] & 0x7F | ((((v67 & 0xF) << 6) | v63[1] & 0x7F) << 6);
              if ( v69 - 2048 > 0xCFFF && v69 < 0xE000 )
                break;
              v510[0] = 3;
              v68 = 3;
            }
            else
            {
              if ( (v67 & 0xF8) != 0xF0 || (((v63[2] & 0x7F | ((((v67 & 7) << 6) | v63[1] & 0x7F) << 6)) << 6) | v63[3] & 0x7Fu) - 0x10000 > 0xFFFFE )
                break;
              v510[0] = 4;
              v68 = 4;
            }
          }
          else
          {
            v68 = 1;
            v510[0] = 1;
          }
          v70 = v66 - v68;
          if ( (int)(v66 - v68) < 0 )
          {
            v2 = 0;
            break;
          }
          v71 = v68;
          memcpy_0(v65, v63, v68);
          v65 = (playlistInfo *)((char *)v65 + v71);
          v63 += v71;
          if ( !--v64 && *v63 )
          {
            v2 = 0;
            v72 = 0i64;
            if ( v66 >= 3 )
            {
              *(_WORD *)v65->name = -32542;
              v65->name[2] = -90;
              v72 = 3i64;
            }
            v65 = (playlistInfo *)((char *)v65 + v72);
            break;
          }
          v66 = v70;
          v2 = 0;
        }
        v65->name[0] = 0;
      }
      if ( bdJSONDeserializer::hasKey(&v509, "description") )
      {
        bdJSONDeserializer::getString(&v509, "description", &_Buffer, 0x400u);
        if ( _Buffer == 35 )
          v73 = Src;
        else
          v73 = UI_SafeTranslateString(&_Buffer);
        Core_strcpy(playlists[v508].description, 0x200ui64, v73);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "image") )
        bdJSONDeserializer::getString(&v509, "image", playlists[v508].image, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v509, "smallImage") )
        bdJSONDeserializer::getString(&v509, "smallImage", playlists[v508].smallImage, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v509, "featuredImage") )
        bdJSONDeserializer::getString(&v509, "featuredImage", playlists[v508].featuredImage, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v509, "video") )
        bdJSONDeserializer::getString(&v509, "video", playlists[v508].video, 0x20u);
      if ( bdJSONDeserializer::hasKey(&v509, "context") )
        bdJSONDeserializer::getString(&v509, "context", playlists[v508].context, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v509, "dc_restrict") )
        bdJSONDeserializer::getString(&v509, "dc_restrict", playlists[v508].dc_restrict, 0x20u);
      if ( bdJSONDeserializer::hasKey(&v509, "dvars") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v523);
        if ( bdJSONDeserializer::getObject(&v509, "dvars", &v523) )
        {
          for ( jj = 0; jj < v523.m_count; ++jj )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v512);
            bdJSONDeserializer::getFieldByIndex(&v523, jj, key, 0x100u, &v512);
            if ( !bdJSONDeserializer::isNumber(&v512) )
            {
              if ( bdJSONDeserializer::isString(&v512) )
              {
                if ( !bdJSONDeserializer::getString(&v512, v536, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 961, ASSERT_TYPE_ASSERT, "(ok && \"Playlist Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Playlist Dvar string too large.\"") )
                  __debugbreak();
                j_sprintf(&_Buffer, "%s \"%s\";", key, v536);
              }
              goto LABEL_276;
            }
            if ( bdJSONDeserializer::isFloatingPoint(&v512) )
            {
              bdJSONDeserializer::getFloat32(&v512, v516);
              __asm
              {
                vmovss  xmm3, [rbp+1400h+var_1428]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovq   r9, xmm3
              }
              j_sprintf(&_Buffer, "%s %f;", key, *(double *)&_XMM3);
              goto LABEL_276;
            }
            bdJSONDeserializer::getInt32(&v512, v517);
            j_sprintf(&_Buffer, "%s %d;", key, (unsigned int)v517[0]);
            if ( !strncmp(&_Buffer, "set ", 4ui64) )
            {
              if ( !strncmp(Str1, "LLNLRTQRPO", 0xAui64) )
              {
                v78 = DCONST_DVARINT_online_force_min_lobby_size;
                if ( !DCONST_DVARINT_online_force_min_lobby_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_force_min_lobby_size") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v78);
                integer = v78->current.integer;
                if ( integer )
                {
                  if ( integer < 0 || (unsigned int)integer > 0xFF )
                    goto LABEL_211;
                }
                else
                {
                  if ( (unsigned __int8)(v531[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 886, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                    __debugbreak();
                  integer = atoi(v531);
                  if ( integer < 0 || (unsigned int)integer > 0xFF )
                  {
LABEL_211:
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
                      __debugbreak();
                  }
                }
                playlists[v508].minLobbySize = integer;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "OOTQKOTRM", 9ui64) )
              {
                if ( (unsigned __int8)(v530 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 893, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v80 = atoi(&v530);
                v81 = v80;
                if ( (v80 < 0 || (unsigned int)v80 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v80, "signed", v80) )
                  __debugbreak();
                v82 = v508;
                playlists[v82].maxLobbySize = v81;
                if ( (v81 & 1) != 0 )
                  playlists[v82].maxLobbySize = v81 + 1;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "RRNTNNKNP", 9ui64) )
              {
                if ( (unsigned __int8)(v530 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 903, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v83 = atoi(&v530);
                v84 = v83;
                if ( (v83 < 0 || (unsigned int)v83 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v83, "signed", v83) )
                  __debugbreak();
                playlists[v508].maxSquadSize = v84;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "LRSSMMRMLM", 0xAui64) )
              {
                if ( (unsigned __int8)(v531[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 909, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v85 = v531;
LABEL_270:
                v92 = atoi(v85);
                playlists[v508].dedicatedServerRequired = v92 != 0;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_minplayers", 0x10ui64) )
              {
                v86 = DCONST_DVARINT_online_force_min_lobby_size;
                if ( !DCONST_DVARINT_online_force_min_lobby_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_force_min_lobby_size") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v86);
                v87 = v86->current.integer;
                if ( !v87 )
                {
                  if ( (unsigned __int8)(v532[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 926, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                    __debugbreak();
                  v87 = atoi(v532);
                }
                playlists[v508].minLobbySize = truncate_cast<unsigned char,int>(v87);
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_maxplayers", 0x10ui64) )
              {
                if ( (unsigned __int8)(v532[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 933, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v88 = atoi(v532);
                v89 = truncate_cast<unsigned char,int>(v88);
                v90 = v508;
                playlists[v90].maxLobbySize = v89;
                if ( (v89 & 1) != 0 )
                  playlists[v90].maxLobbySize = v89 + 1;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_maxSquadSize", 0x12ui64) )
              {
                if ( (unsigned __int8)(v533[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 943, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v91 = atoi(v533);
                playlists[v508].maxSquadSize = truncate_cast<unsigned char,int>(v91);
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "online_matchmaking_dedi_required", 0x20ui64) )
              {
                if ( (unsigned __int8)(v534 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 949, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v85 = &v534;
                goto LABEL_270;
              }
            }
LABEL_276:
            v93 = playlists[v508].rules - 1;
            do
              ++v93;
            while ( *v93 );
            strcpy(v93, &_Buffer);
            v94 = -1i64;
            do
              ++v94;
            while ( Src[v94 - 1] );
            PlaylistStringBuffer_MoveTail(v94);
            bdJSONDeserializer::~bdJSONDeserializer(&v512);
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v523);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "dlc") )
        bdJSONDeserializer::getUInt32(&v509, "dlc", &playlists[v508].requiredDLCMask);
      if ( bdJSONDeserializer::hasKey(&v509, "flags") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v523);
        bdJSONDeserializer::getArray(&v509, "flags", &v523);
        for ( kk = 0; kk < v523.m_count; ++kk )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v512);
          bdJSONDeserializer::getElementByIndex(&v523, kk, &v512);
          bdJSONDeserializer::getString(&v512, src, 0x40u);
          v96 = 0x7FFFFFFFi64;
          v97 = 0i64;
          while ( 1 )
          {
            v98 = (unsigned __int8)src[v97];
            v99 = (unsigned __int8)aNojip[v97++];
            if ( !v96-- )
            {
LABEL_295:
              playlists[v508].flags |= 1u;
              goto LABEL_296;
            }
            if ( v98 != v99 )
            {
              v101 = v98 + 32;
              if ( (unsigned int)(v98 - 65) > 0x19 )
                v101 = v98;
              v98 = v101;
              v102 = v99 + 32;
              if ( (unsigned int)(v99 - 65) > 0x19 )
                v102 = v99;
              if ( v98 != v102 )
                break;
            }
            if ( !v98 )
              goto LABEL_295;
          }
          v122 = 0x7FFFFFFFi64;
          v123 = 0i64;
          while ( 1 )
          {
            v124 = (unsigned __int8)src[v123];
            v125 = (unsigned __int8)aNolooping[v123++];
            if ( !v122-- )
            {
LABEL_363:
              playlists[v508].flags |= 4u;
              goto LABEL_296;
            }
            if ( v124 != v125 )
            {
              v127 = v124 + 32;
              if ( (unsigned int)(v124 - 65) > 0x19 )
                v127 = v124;
              v124 = v127;
              v128 = v125 + 32;
              if ( (unsigned int)(v125 - 65) > 0x19 )
                v128 = v125;
              if ( v124 != v128 )
                break;
            }
            if ( !v124 )
              goto LABEL_363;
          }
          v129 = 0x7FFFFFFFi64;
          v130 = 0i64;
          while ( 1 )
          {
            v131 = (unsigned __int8)src[v130];
            v132 = (unsigned __int8)aAllowdupes[v130++];
            if ( !v129-- )
            {
LABEL_373:
              playlists[v508].flags |= 8u;
              goto LABEL_296;
            }
            if ( v131 != v132 )
            {
              v134 = v131 + 32;
              if ( (unsigned int)(v131 - 65) > 0x19 )
                v134 = v131;
              v131 = v134;
              v135 = v132 + 32;
              if ( (unsigned int)(v132 - 65) > 0x19 )
                v135 = v132;
              if ( v131 != v135 )
                break;
            }
            if ( !v131 )
              goto LABEL_373;
          }
          v136 = 0x7FFFFFFFi64;
          v137 = 0i64;
          while ( 1 )
          {
            v138 = (unsigned __int8)src[v137];
            v139 = (unsigned __int8)aPartyteams[v137++];
            if ( !v136-- )
            {
LABEL_383:
              playlists[v508].flags |= 2u;
              goto LABEL_296;
            }
            if ( v138 != v139 )
            {
              v141 = v138 + 32;
              if ( (unsigned int)(v138 - 65) > 0x19 )
                v141 = v138;
              v138 = v141;
              v142 = v139 + 32;
              if ( (unsigned int)(v139 - 65) > 0x19 )
                v142 = v139;
              if ( v138 != v142 )
                break;
            }
            if ( !v138 )
              goto LABEL_383;
          }
          v143 = 0x7FFFFFFFi64;
          v144 = 0i64;
          while ( 1 )
          {
            v145 = (unsigned __int8)src[v144];
            v146 = (unsigned __int8)aAlwayssearch[v144++];
            if ( !v143-- )
            {
LABEL_393:
              playlists[v508].flags |= 0x10u;
              goto LABEL_296;
            }
            if ( v145 != v146 )
            {
              v148 = v145 + 32;
              if ( (unsigned int)(v145 - 65) > 0x19 )
                v148 = v145;
              v145 = v148;
              v149 = v146 + 32;
              if ( (unsigned int)(v146 - 65) > 0x19 )
                v149 = v146;
              if ( v145 != v149 )
                break;
            }
            if ( !v145 )
              goto LABEL_393;
          }
          v150 = 0x7FFFFFFFi64;
          v151 = 0i64;
          while ( 1 )
          {
            v152 = (unsigned __int8)src[v151];
            v153 = (unsigned __int8)aBotMatchmaking[v151++];
            if ( !v150-- )
            {
LABEL_403:
              playlists[v508].flags |= 0x20u;
              goto LABEL_296;
            }
            if ( v152 != v153 )
            {
              v155 = v152 + 32;
              if ( (unsigned int)(v152 - 65) > 0x19 )
                v155 = v152;
              v152 = v155;
              v156 = v153 + 32;
              if ( (unsigned int)(v153 - 65) > 0x19 )
                v156 = v153;
              if ( v152 != v156 )
                break;
            }
            if ( !v152 )
              goto LABEL_403;
          }
          v157 = 0x7FFFFFFFi64;
          v158 = 0i64;
          while ( 1 )
          {
            v159 = (unsigned __int8)src[v158];
            v160 = (unsigned __int8)aHumansOnTeamAl[v158++];
            if ( !v157-- )
            {
LABEL_413:
              playlists[v508].flags |= 0x40u;
              goto LABEL_296;
            }
            if ( v159 != v160 )
            {
              v162 = v159 + 32;
              if ( (unsigned int)(v159 - 65) > 0x19 )
                v162 = v159;
              v159 = v162;
              v163 = v160 + 32;
              if ( (unsigned int)(v160 - 65) > 0x19 )
                v163 = v160;
              if ( v159 != v163 )
                break;
            }
            if ( !v159 )
              goto LABEL_413;
          }
          v164 = 0x7FFFFFFFi64;
          v165 = 0i64;
          while ( 1 )
          {
            v166 = (unsigned __int8)src[v165];
            v167 = (unsigned __int8)aNoJoinViaPrese[v165++];
            if ( !v164-- )
            {
LABEL_423:
              playlists[v508].flags |= 0x80u;
              goto LABEL_296;
            }
            if ( v166 != v167 )
            {
              v169 = v166 + 32;
              if ( (unsigned int)(v166 - 65) > 0x19 )
                v169 = v166;
              v166 = v169;
              v170 = v167 + 32;
              if ( (unsigned int)(v167 - 65) > 0x19 )
                v170 = v167;
              if ( v166 != v170 )
                break;
            }
            if ( !v166 )
              goto LABEL_423;
          }
          v171 = 0x7FFFFFFFi64;
          v172 = 0i64;
          while ( 1 )
          {
            v173 = (unsigned __int8)src[v172];
            v174 = (unsigned __int8)aAllowF2p[v172++];
            if ( !v171-- )
            {
LABEL_433:
              playlists[v508].flags |= 0x100u;
              goto LABEL_296;
            }
            if ( v173 != v174 )
            {
              v176 = v173 + 32;
              if ( (unsigned int)(v173 - 65) > 0x19 )
                v176 = v173;
              v173 = v176;
              v177 = v174 + 32;
              if ( (unsigned int)(v174 - 65) > 0x19 )
                v177 = v174;
              if ( v173 != v177 )
                break;
            }
            if ( !v173 )
              goto LABEL_433;
          }
          v178 = 0x7FFFFFFFi64;
          v179 = 0i64;
          while ( 1 )
          {
            v180 = (unsigned __int8)src[v179];
            v181 = (unsigned __int8)aSplitscreenRes[v179++];
            if ( !v178-- )
            {
LABEL_443:
              playlists[v508].flags |= 0x200u;
              goto LABEL_296;
            }
            if ( v180 != v181 )
            {
              v183 = v180 + 32;
              if ( (unsigned int)(v180 - 65) > 0x19 )
                v183 = v180;
              v180 = v183;
              v184 = v181 + 32;
              if ( (unsigned int)(v181 - 65) > 0x19 )
                v184 = v181;
              if ( v180 != v184 )
                break;
            }
            if ( !v180 )
              goto LABEL_443;
          }
          v185 = 0x7FFFFFFFi64;
          v186 = 0i64;
          while ( 1 )
          {
            v187 = (unsigned __int8)src[v186];
            v188 = (unsigned __int8)aBrPlunderPostT[v186++];
            if ( !v185-- )
            {
LABEL_453:
              playlists[v508].flags |= 0x400u;
              goto LABEL_296;
            }
            if ( v187 != v188 )
            {
              v190 = v187 + 32;
              if ( (unsigned int)(v187 - 65) > 0x19 )
                v190 = v187;
              v187 = v190;
              v191 = v188 + 32;
              if ( (unsigned int)(v188 - 65) > 0x19 )
                v191 = v188;
              if ( v187 != v191 )
                break;
            }
            if ( !v187 )
              goto LABEL_453;
          }
          v192 = 0x7FFFFFFFi64;
          v193 = 0i64;
          while ( 1 )
          {
            v194 = (unsigned __int8)src[v193];
            v195 = (unsigned __int8)aDmzPostTutoria[v193++];
            if ( !v192-- )
            {
LABEL_463:
              playlists[v508].flags |= 0x800u;
              goto LABEL_296;
            }
            if ( v194 != v195 )
            {
              v197 = v194 + 32;
              if ( (unsigned int)(v194 - 65) > 0x19 )
                v197 = v194;
              v194 = v197;
              v198 = v195 + 32;
              if ( (unsigned int)(v195 - 65) > 0x19 )
                v198 = v195;
              if ( v194 != v198 )
                break;
            }
            if ( !v194 )
              goto LABEL_463;
          }
          v199 = 0x7FFFFFFFi64;
          v200 = 0i64;
          while ( 1 )
          {
            v201 = (unsigned __int8)src[v200];
            v202 = (unsigned __int8)aSurvivalPlayli[v200++];
            if ( !v199-- )
            {
LABEL_473:
              playlists[v508].flags |= 0x1000u;
              goto LABEL_296;
            }
            if ( v201 != v202 )
            {
              v204 = v201 + 32;
              if ( (unsigned int)(v201 - 65) > 0x19 )
                v204 = v201;
              v201 = v204;
              v205 = v202 + 32;
              if ( (unsigned int)(v202 - 65) > 0x19 )
                v205 = v202;
              if ( v201 != v205 )
                break;
            }
            if ( !v201 )
              goto LABEL_473;
          }
          v206 = 0x7FFFFFFFi64;
          v207 = 0i64;
          while ( 1 )
          {
            v208 = (unsigned __int8)src[v207];
            v209 = (unsigned __int8)aLimitedTime[v207++];
            if ( !v206-- )
            {
LABEL_483:
              playlists[v508].flags |= 0x2000u;
              goto LABEL_296;
            }
            if ( v208 != v209 )
            {
              v211 = v208 + 32;
              if ( (unsigned int)(v208 - 65) > 0x19 )
                v211 = v208;
              v208 = v211;
              v212 = v209 + 32;
              if ( (unsigned int)(v209 - 65) > 0x19 )
                v212 = v209;
              if ( v208 != v212 )
                break;
            }
            if ( !v208 )
              goto LABEL_483;
          }
          v213 = 0x7FFFFFFFi64;
          v214 = 0i64;
          do
          {
            v215 = (unsigned __int8)src[v214];
            v216 = (unsigned __int8)aPulse[v214++];
            if ( !v213-- )
              break;
            if ( v215 != v216 )
            {
              v218 = v215 + 32;
              if ( (unsigned int)(v215 - 65) > 0x19 )
                v218 = v215;
              v215 = v218;
              v219 = v216 + 32;
              if ( (unsigned int)(v216 - 65) > 0x19 )
                v219 = v216;
              if ( v215 != v219 )
                goto LABEL_296;
            }
          }
          while ( v215 );
          playlists[v508].flags |= 0x4000u;
LABEL_296:
          bdJSONDeserializer::~bdJSONDeserializer(&v512);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v523);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "partners") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v523);
        bdJSONDeserializer::getArray(&v509, "partners", &v523);
        v103 = 0;
        if ( v523.m_count )
        {
          do
          {
            if ( v103 >= 8 )
              break;
            bdJSONDeserializer::bdJSONDeserializer(&v512);
            bdJSONDeserializer::getElementByIndex(&v523, v103, &v512);
            bdJSONDeserializer::getUByte8(&v512, &playlists[v508].partners[v103]);
            bdJSONDeserializer::~bdJSONDeserializer(&v512);
            ++v103;
          }
          while ( v103 < v523.m_count );
          v53 = playlists;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v523);
      }
      if ( bdJSONDeserializer::hasKey(&v509, "maxparty") )
        bdJSONDeserializer::getUByte8(&v509, "maxparty", &playlists[v508].maxPartySize);
      if ( bdJSONDeserializer::hasKey(&v509, "minparty") )
        bdJSONDeserializer::getUByte8(&v509, "minparty", &playlists[v508].minPartySize);
      if ( bdJSONDeserializer::hasKey(&v509, "maxhumanplayers") )
        bdJSONDeserializer::getUByte8(&v509, "maxhumanplayers", &playlists[v508].maxHumanPlayers);
      if ( bdJSONDeserializer::hasKey(&v509, "numrounds") )
        bdJSONDeserializer::getUInt32(&v509, "numrounds", &playlists[v508].numRounds);
      if ( bdJSONDeserializer::hasKey(&v509, "score_limit") )
        bdJSONDeserializer::getUInt32(&v509, "score_limit", &playlists[v508].score_limit);
      if ( bdJSONDeserializer::hasKey(&v509, "time_limit") )
        bdJSONDeserializer::getUInt32(&v509, "time_limit", &playlists[v508].time_limit);
      if ( bdJSONDeserializer::hasKey(&v509, "user_generated") )
        playlists[v508].user_generated = 1;
      if ( bdJSONDeserializer::hasKey(&v509, "showonlywhenhavemaps") )
        playlists[v508].show_only_when_have_maps = 1;
      if ( bdJSONDeserializer::hasKey(&v509, "showonlywhenhaveentitlement") )
        bdJSONDeserializer::getByte8(&v509, "showonlywhenhaveentitlement", &playlists[v508].show_only_when_have_entitlement);
      if ( bdJSONDeserializer::hasKey(&v509, "bots_reserved_slots_axis") )
        bdJSONDeserializer::getUByte8(&v509, "bots_reserved_slots_axis", &playlists[v508].botMMReserveSlotsAxis);
      if ( bdJSONDeserializer::hasKey(&v509, "bots_reserved_slots_allies") )
        bdJSONDeserializer::getUByte8(&v509, "bots_reserved_slots_allies", &playlists[v508].botMMReserveSlotsAllies);
      if ( bdJSONDeserializer::hasKey(&v509, "is_new") )
        playlists[v508].is_new = 1;
      if ( bdJSONDeserializer::hasKey(&v509, "type") )
      {
        bdJSONDeserializer::getString(&v509, "type", v524, 8u);
        v104 = 0x7FFFFFFFi64;
        v105 = 0i64;
        while ( 1 )
        {
          v106 = v524[v105];
          v107 = aMp_2[v105++];
          if ( !v104-- )
          {
LABEL_333:
            playlists[v508].gamemodeType = PLAYLIST_GAMEMODE_TYPE_MP;
            goto LABEL_334;
          }
          if ( v106 != v107 )
            break;
          if ( !v106 )
            goto LABEL_333;
        }
        v220 = 0x7FFFFFFFi64;
        v221 = 0i64;
        while ( 1 )
        {
          v222 = v524[v221];
          v223 = aCp_3[v221++];
          if ( !v220-- )
          {
LABEL_498:
            playlists[v508].gamemodeType = PLAYLIST_GAMEMODE_TYPE_CP;
            goto LABEL_334;
          }
          if ( v222 != v223 )
            break;
          if ( !v222 )
            goto LABEL_498;
        }
        Com_PrintError(25, "Unknown playlist game mode type %s.\n", v524);
      }
LABEL_334:
      if ( bdJSONDeserializer::hasKey(&v509, "maps") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v512);
        bdJSONDeserializer::getArray(&v509, "maps", &v512);
        for ( mm = 0; mm < v512.m_count; v2 = 0 )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v523);
          bdJSONDeserializer::getObject(&v512, mm, &v523);
          bdJSONDeserializer::getString(&v523, "map", src, 0x40u);
          bdJSONDeserializer::getString(&v523, "gametype", v526, 0x40u);
          bdJSONDeserializer::getInt32(&v523, "weight", v518);
          v110 = s_playlistEntryCount;
          if ( s_playlistEntryCount >= 0x800u )
          {
            LODWORD(v505) = 2048;
            LODWORD(v504) = s_playlistEntryCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( s_playlistEntryCount ) < (unsigned)( 2048 )", "s_playlistEntryCount doesn't index MAX_PLAYLIST_ENTRIES\n\t%i not in [0, %i)", v504, v505) )
              __debugbreak();
            v110 = s_playlistEntryCount;
          }
          v111 = v110;
          v112 = 0;
          if ( maps.numEntries )
          {
LABEL_341:
            v113 = maps.name[v112];
            v114 = 0x7FFFFFFFi64;
            v115 = src;
            if ( !v113 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v116 = v113 - src;
            do
            {
              v117 = (unsigned __int8)v115[v116];
              v118 = (unsigned __int8)*v115++;
              if ( !v114-- )
                break;
              if ( v117 != v118 )
              {
                v120 = v117 + 32;
                if ( (unsigned int)(v117 - 65) > 0x19 )
                  v120 = v117;
                v117 = v120;
                v121 = v118 + 32;
                if ( (unsigned int)(v118 - 65) > 0x19 )
                  v121 = v118;
                if ( v117 != v121 )
                {
                  if ( ++v112 < (unsigned int)maps.numEntries )
                    goto LABEL_341;
                  goto LABEL_501;
                }
              }
            }
            while ( v117 );
          }
          else
          {
LABEL_501:
            v112 = 255;
          }
          if ( v112 == 255 )
          {
            Core_strcpy(&dest[24 * maps.numEntries], 0x18ui64, src);
            maps.name[maps.numEntries] = &dest[24 * maps.numEntries];
            LOBYTE(v112) = maps.numEntries++;
          }
          s_playlistEntries[v111].mapindex = v112;
          v225 = 0;
          if ( numGametypes + 1 <= 0 )
          {
LABEL_518:
            Com_PrintError(16, "Unknown gametype name '%s'\n", v526);
            LOBYTE(v225) = 64;
          }
          else
          {
LABEL_505:
            v226 = 0x7FFFFFFFi64;
            v227 = v526;
            v228 = v225;
            if ( &gametypes[v228] == (playlistGametype *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            do
            {
              v229 = (unsigned __int8)gametypes[0].internalName[v228 * 136 - (_QWORD)v526 + (_QWORD)v227];
              v230 = (unsigned __int8)*v227++;
              if ( !v226-- )
                break;
              if ( v229 != v230 )
              {
                v232 = v229 + 32;
                if ( (unsigned int)(v229 - 65) > 0x19 )
                  v232 = v229;
                v229 = v232;
                v233 = v230 + 32;
                if ( (unsigned int)(v230 - 65) > 0x19 )
                  v233 = v230;
                if ( v229 != v233 )
                {
                  if ( ++v225 < numGametypes + 1 )
                    goto LABEL_505;
                  goto LABEL_518;
                }
              }
            }
            while ( v229 );
          }
          s_playlistEntries[v111].gametype = v225;
          s_playlistEntries[v111].fullWeight = v518[0];
          v234 = v508;
          if ( playlists[v234].numEntries )
          {
            v236 = s_playlistEntryCount;
          }
          else
          {
            firstEntry = playlists[v234].firstEntry;
            if ( firstEntry )
            {
              LODWORD(v504) = firstEntry;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1140, ASSERT_TYPE_ASSERT, "( ( playlists[playlistNum].firstEntry == 0 ) )", "( playlists[playlistNum].firstEntry ) = %i", v504) )
                __debugbreak();
            }
            v234 = v508;
            v236 = s_playlistEntryCount;
            playlists[v234].firstEntry = s_playlistEntryCount;
          }
          s_playlistEntryCount = v236 + 1;
          ++playlists[v234].numEntries;
          bdJSONDeserializer::~bdJSONDeserializer(&v523);
          ++mm;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v512);
      }
      if ( playist_initialParse )
      {
        v237 = v508;
        if ( playlists[v237].previousNumEntries )
        {
          if ( !playlists[v237].numEntries )
            playlists[v237].crc32Changed = 1;
        }
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v509);
      v55 = v514 + 1;
    }
    if ( bdJSONDeserializer::getArray(&v521, "categories", &value) )
    {
      memset_0(categories, 0, sizeof(categories));
      v238 = 0;
      for ( LODWORD(v514) = 0; v238 < value.m_count; LODWORD(v514) = v238 )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v509);
        bdJSONDeserializer::getElementByIndex(&value, v238, &v509);
        bdJSONDeserializer::getString(&v509, "category", &_Buffer, 0x400u);
        v239 = 0x7FFFFFFFi64;
        v240 = 0i64;
        while ( 1 )
        {
          v241 = Src[v240 - 1];
          v242 = aTop_0[v240++];
          if ( !v239-- )
          {
LABEL_538:
            v244 = 0;
            v513 = 0;
            goto LABEL_544;
          }
          if ( v241 != v242 )
            break;
          if ( !v241 )
            goto LABEL_538;
        }
        v245 = -1i64;
        do
          ++v245;
        while ( Src[v245 - 1] );
        if ( (_DWORD)v245 == 1 )
        {
          v244 = _Buffer - 64;
          v513 = v244;
        }
        else
        {
          v244 = v513;
        }
LABEL_544:
        v246 = v244;
        v247 = v244;
        image = categories[v247].image;
        *image = 0;
        categories[v247].numEntries = 0;
        p_requiredDLCMask = &categories[v247].requiredDLCMask;
        *p_requiredDLCMask = 0;
        categories[v247].categoryLabel = 0;
        categories[v247].categoryClass = 2;
        *(_WORD *)&categories[v247].override = 0;
        categories[v247].overrideDvarValue[0] = 0;
        categories[v247].flags = 0;
        categories[v247].start_utc = 0;
        categories[v247].end_utc = 0;
        categories[v247].crc32 = 0;
        categories[v247].rules = (char *)PlaylistStringBuffer_GetTail();
        if ( bdJSONDeserializer::hasKey(&v509, "xb3_crc32") )
          bdJSONDeserializer::getUInt32(&v509, "xb3_crc32", &categories[v247].crc32);
        if ( bdJSONDeserializer::hasKey(&v509, "category") )
        {
          bdJSONDeserializer::getString(&v509, "category", &_Buffer, 0x400u);
          v250 = 0x7FFFFFFFi64;
          v251 = 0i64;
          while ( 1 )
          {
            v252 = (unsigned __int8)Src[v251 - 1];
            v253 = (unsigned __int8)aTop_0[v251++];
            if ( !v250-- )
            {
LABEL_556:
              categories[v247].categoryLabel = -1;
              goto LABEL_558;
            }
            if ( v252 != v253 )
            {
              v255 = v252 + 32;
              if ( (unsigned int)(v252 - 65) > 0x19 )
                v255 = v252;
              v252 = v255;
              v256 = v253 + 32;
              if ( (unsigned int)(v253 - 65) > 0x19 )
                v256 = v253;
              if ( v252 != v256 )
                break;
            }
            if ( !v252 )
              goto LABEL_556;
          }
          categories[v247].categoryLabel = _Buffer - 65;
        }
LABEL_558:
        if ( bdJSONDeserializer::hasKey(&v509, "categoryclass") )
        {
          bdJSONDeserializer::getString(&v509, "categoryclass", &_Buffer, 0x400u);
          v257 = atoi(&_Buffer);
          if ( v257 )
          {
LABEL_570:
            categories[v247].categoryClass = v257;
          }
          else
          {
            v258 = 0x7FFFFFFFi64;
            v259 = 0i64;
            while ( 1 )
            {
              v260 = (unsigned __int8)Src[v259 - 1];
              v261 = (unsigned __int8)serv[v259++];
              if ( !v258-- )
              {
LABEL_569:
                v257 = atoi(&_Buffer);
                goto LABEL_570;
              }
              if ( v260 != v261 )
              {
                v263 = v260 + 32;
                if ( (unsigned int)(v260 - 65) > 0x19 )
                  v263 = v260;
                v260 = v263;
                v264 = v261 + 32;
                if ( (unsigned int)(v261 - 65) > 0x19 )
                  v264 = v261;
                if ( v260 != v264 )
                  break;
              }
              if ( !v260 )
                goto LABEL_569;
            }
            v266 = 0x7FFFFFFFi64;
            v267 = 0i64;
            do
            {
              v268 = (unsigned __int8)Src[v267 - 1];
              v269 = (unsigned __int8)aNone_9[v267++];
              if ( !v266-- )
                break;
              if ( v268 != v269 )
              {
                v271 = v268 + 32;
                if ( (unsigned int)(v268 - 65) > 0x19 )
                  v271 = v268;
                v268 = v271;
                v272 = v269 + 32;
                if ( (unsigned int)(v269 - 65) > 0x19 )
                  v272 = v269;
                if ( v268 != v272 )
                {
                  v273 = 0x7FFFFFFFi64;
                  v274 = 0i64;
                  while ( 1 )
                  {
                    v275 = (unsigned __int8)Src[v274 - 1];
                    v276 = (unsigned __int8)aOff_1[v274++];
                    if ( !v273-- )
                      goto LABEL_583;
                    if ( v275 != v276 )
                    {
                      v278 = v275 + 32;
                      if ( (unsigned int)(v275 - 65) > 0x19 )
                        v278 = v275;
                      v275 = v278;
                      v279 = v276 + 32;
                      if ( (unsigned int)(v276 - 65) > 0x19 )
                        v279 = v276;
                      if ( v275 != v279 )
                      {
                        v280 = 0x7FFFFFFFi64;
                        v281 = 0i64;
                        do
                        {
                          v282 = (unsigned __int8)Src[v281 - 1];
                          v283 = (unsigned __int8)aDefault_3[v281++];
                          if ( !v280-- )
                            break;
                          if ( v282 != v283 )
                          {
                            v285 = v282 + 32;
                            if ( (unsigned int)(v282 - 65) > 0x19 )
                              v285 = v282;
                            v282 = v285;
                            v286 = v283 + 32;
                            if ( (unsigned int)(v283 - 65) > 0x19 )
                              v286 = v283;
                            if ( v282 != v286 )
                            {
                              v287 = 0x7FFFFFFFi64;
                              v288 = 0i64;
                              while ( 1 )
                              {
                                v289 = (unsigned __int8)Src[v288 - 1];
                                v290 = (unsigned __int8)aAny_0[v288++];
                                if ( !v287-- )
                                  goto LABEL_603;
                                if ( v289 != v290 )
                                {
                                  v292 = v289 + 32;
                                  if ( (unsigned int)(v289 - 65) > 0x19 )
                                    v292 = v289;
                                  v289 = v292;
                                  v293 = v290 + 32;
                                  if ( (unsigned int)(v290 - 65) > 0x19 )
                                    v293 = v290;
                                  if ( v289 != v293 )
                                  {
                                    v294 = 0x7FFFFFFFi64;
                                    v295 = 0i64;
                                    while ( 1 )
                                    {
                                      v296 = (unsigned __int8)Src[v295 - 1];
                                      v297 = (unsigned __int8)aAll_3[v295++];
                                      if ( !v294-- )
                                        goto LABEL_603;
                                      if ( v296 != v297 )
                                      {
                                        v299 = v296 + 32;
                                        if ( (unsigned int)(v296 - 65) > 0x19 )
                                          v299 = v296;
                                        v296 = v299;
                                        v300 = v297 + 32;
                                        if ( (unsigned int)(v297 - 65) > 0x19 )
                                          v300 = v297;
                                        if ( v296 != v300 )
                                        {
                                          v301 = 0x7FFFFFFFi64;
                                          v302 = 0i64;
                                          while ( 1 )
                                          {
                                            v303 = (unsigned __int8)Src[v302 - 1];
                                            v304 = (unsigned __int8)aOn_0[v302++];
                                            if ( !v301-- )
                                              goto LABEL_603;
                                            if ( v303 != v304 )
                                            {
                                              v306 = v303 + 32;
                                              if ( (unsigned int)(v303 - 65) > 0x19 )
                                                v306 = v303;
                                              v303 = v306;
                                              v307 = v304 + 32;
                                              if ( (unsigned int)(v304 - 65) > 0x19 )
                                                v307 = v304;
                                              if ( v303 != v307 )
                                              {
                                                v308 = 0x7FFFFFFFi64;
                                                v309 = 0i64;
                                                while ( 1 )
                                                {
                                                  v310 = (unsigned __int8)Src[v309 - 1];
                                                  v311 = (unsigned __int8)aCore_0[v309++];
                                                  if ( !v308-- )
                                                    goto LABEL_643;
                                                  if ( v310 != v311 )
                                                  {
                                                    v313 = v310 + 32;
                                                    if ( (unsigned int)(v310 - 65) > 0x19 )
                                                      v313 = v310;
                                                    v310 = v313;
                                                    v314 = v311 + 32;
                                                    if ( (unsigned int)(v311 - 65) > 0x19 )
                                                      v314 = v311;
                                                    if ( v310 != v314 )
                                                      break;
                                                  }
                                                  if ( !v310 )
                                                    goto LABEL_643;
                                                }
                                                if ( !I_stricmp(&_Buffer, "MP") || !I_stricmp(&_Buffer, "MPCORE") )
                                                {
LABEL_643:
                                                  categories[v247].categoryClass = 4;
                                                  goto LABEL_571;
                                                }
                                                if ( I_stricmp(&_Buffer, "ALIENS") && I_stricmp(&_Buffer, "ALIEN") )
                                                {
                                                  if ( !I_stricmp(&_Buffer, "MAGMA") )
                                                    categories[v247].categoryClass = 16;
                                                }
                                                else
                                                {
                                                  categories[v247].categoryClass = 8;
                                                }
                                                goto LABEL_571;
                                              }
                                            }
                                            if ( !v303 )
                                              goto LABEL_603;
                                          }
                                        }
                                      }
                                      if ( !v296 )
                                        goto LABEL_603;
                                    }
                                  }
                                }
                                if ( !v289 )
                                  goto LABEL_603;
                              }
                            }
                          }
                        }
                        while ( v282 );
LABEL_603:
                        categories[v247].categoryClass = 2;
                        goto LABEL_571;
                      }
                    }
                    if ( !v275 )
                      goto LABEL_583;
                  }
                }
              }
            }
            while ( v268 );
LABEL_583:
            categories[v247].categoryClass = 1;
          }
        }
LABEL_571:
        if ( bdJSONDeserializer::hasKey(&v509, (const char *const)&stru_143C9A1A4) )
        {
          bdJSONDeserializer::getString(&v509, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
          if ( _Buffer == 35 )
            v265 = Src;
          else
            v265 = UI_SafeTranslateString(&_Buffer);
          Com_UTF8_TruncateToGlyphCount(v265, categories[v247].name, 128, 128, NULL);
        }
        if ( bdJSONDeserializer::hasKey(&v509, "description") )
        {
          bdJSONDeserializer::getString(&v509, "description", &_Buffer, 0x400u);
          if ( _Buffer == 35 )
            v315 = Src;
          else
            v315 = UI_SafeTranslateString(&_Buffer);
          Core_strcpy(categories[v247].description, 0x200ui64, v315);
        }
        if ( bdJSONDeserializer::hasKey(&v509, "image") )
          bdJSONDeserializer::getString(&v509, "image", image, 0x40u);
        if ( bdJSONDeserializer::hasKey(&v509, "dlc") )
          bdJSONDeserializer::getUInt32(&v509, "dlc", p_requiredDLCMask);
        if ( bdJSONDeserializer::hasKey(&v509, "filtered") )
        {
          bdJSONDeserializer::getString(&v509, "filtered", &_Buffer, 0x400u);
          v316 = 0x7FFFFFFFi64;
          v2 = 0;
          v317 = 0i64;
          do
          {
            v318 = Src[v317 - 1];
            v319 = aYes_1[v317++];
            if ( !v316-- )
              break;
            if ( v318 != v319 )
              goto LABEL_669;
          }
          while ( v318 );
          categories[v247].flags |= 1u;
        }
        else
        {
          v2 = 0;
        }
LABEL_669:
        if ( bdJSONDeserializer::hasKey(&v509, "featured") )
        {
          bdJSONDeserializer::getString(&v509, "featured", &_Buffer, 0x400u);
          v321 = 0x7FFFFFFFi64;
          v322 = 0i64;
          do
          {
            v323 = Src[v322 - 1];
            v324 = aYes_1[v322++];
            if ( !v321-- )
              break;
            if ( v323 != v324 )
              goto LABEL_675;
          }
          while ( v323 );
          categories[v247].flags |= 4u;
        }
LABEL_675:
        if ( bdJSONDeserializer::hasKey(&v509, "hardcore") )
        {
          bdJSONDeserializer::getString(&v509, "hardcore", &_Buffer, 0x400u);
          v326 = 0x7FFFFFFFi64;
          v327 = 0i64;
          do
          {
            v328 = Src[v327 - 1];
            v329 = aYes_1[v327++];
            if ( !v326-- )
              break;
            if ( v328 != v329 )
              goto LABEL_681;
          }
          while ( v328 );
          categories[v247].flags |= 2u;
        }
LABEL_681:
        if ( bdJSONDeserializer::hasKey(&v509, "promoted") )
        {
          bdJSONDeserializer::getString(&v509, "promoted", &_Buffer, 0x400u);
          v331 = 0x7FFFFFFFi64;
          v332 = 0i64;
          do
          {
            v333 = Src[v332 - 1];
            v334 = aYes_1[v332++];
            if ( !v331-- )
              break;
            if ( v333 != v334 )
              goto LABEL_687;
          }
          while ( v333 );
          categories[v247].flags |= 8u;
        }
LABEL_687:
        if ( bdJSONDeserializer::hasKey(&v509, "cdl") )
        {
          bdJSONDeserializer::getString(&v509, "cdl", &_Buffer, 0x400u);
          v336 = 0x7FFFFFFFi64;
          v337 = 0i64;
          do
          {
            v338 = Src[v337 - 1];
            v339 = aYes_1[v337++];
            if ( !v336-- )
              break;
            if ( v338 != v339 )
              goto LABEL_693;
          }
          while ( v338 );
          categories[v247].flags |= 0x10u;
        }
LABEL_693:
        if ( bdJSONDeserializer::hasKey(&v509, "party") )
        {
          bdJSONDeserializer::getString(&v509, "party", &_Buffer, 0x400u);
          v341 = 0x7FFFFFFFi64;
          v342 = 0i64;
          do
          {
            v343 = Src[v342 - 1];
            v344 = aYes_1[v342++];
            if ( !v341-- )
              break;
            if ( v343 != v344 )
              goto LABEL_699;
          }
          while ( v343 );
          categories[v247].flags |= 0x20u;
        }
LABEL_699:
        if ( bdJSONDeserializer::hasKey(&v509, "br") )
        {
          bdJSONDeserializer::getString(&v509, "br", &_Buffer, 0x400u);
          v346 = 0x7FFFFFFFi64;
          v347 = 0i64;
          do
          {
            v348 = Src[v347 - 1];
            v349 = aYes_1[v347++];
            if ( !v346-- )
              break;
            if ( v348 != v349 )
              goto LABEL_705;
          }
          while ( v348 );
          categories[v247].flags |= 0x40u;
        }
LABEL_705:
        if ( bdJSONDeserializer::hasKey(&v509, "start_utc") )
          bdJSONDeserializer::getUInt32(&v509, "start_utc", &categories[v247].start_utc);
        if ( bdJSONDeserializer::hasKey(&v509, "end_utc") )
          bdJSONDeserializer::getUInt32(&v509, "end_utc", &categories[v246].end_utc);
        if ( bdJSONDeserializer::hasKey(&v509, "xb3_include") )
        {
          v351 = &categories[v246];
          bdJSONDeserializer::bdJSONDeserializer(&v512);
          bdJSONDeserializer::getArray(&v509, "xb3_include", &v512);
          for ( nn = 0; nn < v512.m_count; ++nn )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v523);
            bdJSONDeserializer::getElementByIndex(&v512, nn, &v523);
            if ( bdJSONDeserializer::isString(&v523) )
            {
              bdJSONDeserializer::getString(&v523, &_Buffer, 0x400u);
              v510[0] = _Buffer - 64;
              v351->entries[v351->numEntries].type = CATEGORY;
            }
            else
            {
              bdJSONDeserializer::getInt32(&v523, v510);
              v351->entries[v351->numEntries].type = PLAYLIST;
            }
            v351->entries[v351->numEntries++].num = v510[0];
            bdJSONDeserializer::~bdJSONDeserializer(&v523);
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v512);
        }
        if ( bdJSONDeserializer::hasKey(&v509, "override") )
        {
          categories[v246].override = 1;
          bdJSONDeserializer::getString(&v509, "override", categories[v246].overrideDvarName, 0x40u);
          StringSafe = Dvar_GetStringSafe(categories[v246].overrideDvarName);
          Core_strcpy(categories[v246].overrideDvarValue, 0x40ui64, StringSafe);
        }
        if ( bdJSONDeserializer::hasKey(&v509, "dvars") )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v512);
          if ( bdJSONDeserializer::getObject(&v509, "dvars", &v512) )
          {
            v354 = 0;
            if ( v512.m_count )
            {
              do
              {
                bdJSONDeserializer::bdJSONDeserializer(&v523);
                bdJSONDeserializer::getFieldByIndex(&v512, v354, v536, 0x100u, &v523);
                if ( bdJSONDeserializer::isString(&v523) )
                {
                  if ( !bdJSONDeserializer::getString(&v523, key, 0x100u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1393, ASSERT_TYPE_ASSERT, "(ok && \"Category Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Category Dvar string too large.\"") )
                    __debugbreak();
                  j_sprintf(&_Buffer, "%s \"%s\";", v536, key);
                }
                else if ( bdJSONDeserializer::convertToString(&v523, key, 0x100u) )
                {
                  j_sprintf(&_Buffer, "%s %s;", v536, key);
                }
                else
                {
                  Com_PrintError(25, "[Playlist] failed to convert rule to string '%s'\n", v536);
                }
                v355 = categories[v246].rules - 1;
                do
                  ++v355;
                while ( *v355 );
                strcpy(v355, &_Buffer);
                v356 = -1i64;
                do
                  ++v356;
                while ( Src[v356 - 1] );
                PlaylistStringBuffer_MoveTail(v356);
                bdJSONDeserializer::~bdJSONDeserializer(&v523);
                ++v354;
              }
              while ( v354 < v512.m_count );
              v238 = v514;
            }
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v512);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v509);
        ++v238;
      }
      v53 = playlists;
    }
  }
  v357 = playist_initialParse;
  if ( !playist_initialParse )
    v357 = 1i64;
  playist_initialParse = v357;
  v358 = 0;
  if ( maps.numEntries )
  {
    while ( 1 )
    {
      v359 = -1i64;
      do
        ++v359;
      while ( maps.name[v358][v359] );
      if ( (int)v359 >= (int)PlaylistStringBuffer_GetRemainingAfterTail() )
        break;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && Live_GetMapIndex(maps.name[v358]) < 0 )
        Com_PrintWarning(16, "Playlist_ParsePlaylists: Map %s is not in presence data\n", maps.name[v358]);
      v360 = PlaylistStringBuffer_GetTail();
      v361 = maps.name[v358];
      RemainingAfterTail = PlaylistStringBuffer_GetRemainingAfterTail();
      Core_strcpy(v360->buffer, RemainingAfterTail, v361);
      maps.name[v358] = (char *)v360;
      PlaylistStringBuffer_MoveTail(v359);
      if ( ++v358 >= (unsigned int)maps.numEntries )
        goto LABEL_750;
    }
    Com_PrintError(16, "Not enough room in string buffer for map names after adding rules\n");
    v511 = 1;
LABEL_750:
    v2 = 0;
  }
  numEntries = categories[0].numEntries;
  if ( !categories[0].numEntries )
  {
    v364 = 1;
    v365 = &categories[1].numEntries;
    do
    {
      if ( *v365 )
      {
        categories[0].entries[numEntries].type = CATEGORY;
        categories[0].entries[categories[0].numEntries].num = v364;
        numEntries = ++categories[0].numEntries;
      }
      ++v364;
      v365 += 1032;
    }
    while ( v364 < 26 );
    if ( !numEntries )
    {
      v366 = 1;
      v367 = &playlists[1].numEntries;
      do
      {
        if ( *v367 )
        {
          categories[0].entries[numEntries].type = PLAYLIST;
          categories[0].entries[categories[0].numEntries].num = v366;
          numEntries = ++categories[0].numEntries;
        }
        ++v366;
        v367 += 496;
      }
      while ( v366 < 129 );
      if ( !numEntries )
      {
        Com_PrintError(16, "Playlist Error: No entries in the root category\n", v367);
        ++v511;
      }
    }
    v368 = "MENU/PLAYERMATCH_PLAYLISTS";
    v369 = SEH_LocalizeTextMessage("MENU/PLAYERMATCH_PLAYLISTS", "playlist title", LOCMSG_NOERR);
    if ( v369 )
      v368 = v369;
    Core_strcpy(categories[0].name, 0x80ui64, v368);
  }
  Playlist_UpdateFeatured(v357, v52);
  Playlist_UpdateXPScales();
  if ( !s_setPubVarCallback )
  {
    Instance = PublisherVariableManager::GetInstance();
    PublisherVariableManager::AddRetrievedCallback(Instance, Playlist_UpdateXPScales);
    s_setPubVarCallback = 1;
  }
  v371 = 129i64;
  do
  {
    v372 = -1i64;
    do
      ++v372;
    while ( v53->description[v372] );
    v373 = -1i64;
    do
      ++v373;
    while ( v53->name[v373] );
    v374 = v2 + v372;
    v2 = v374 + v373 + 2;
    ++v53;
    --v371;
  }
  while ( v371 );
  *(_QWORD *)v524 = (unsigned int)(v374 + v373 + 2);
  v375 = 2;
  do
  {
    v376 = v375 - 2;
    v520 = 136i64 * (v375 - 1);
    v377 = v375;
    *(_QWORD *)v510 = 136i64 * (v375 + 1);
    v514 = 136i64 * (v375 + 2);
    *(_QWORD *)v516 = 136i64 * (v375 + 3);
    *(_QWORD *)v517 = 136i64 * (v375 + 4);
    v378 = v375 + 5;
    v379 = v375 + 6;
    v380 = v375 + 7;
    v381 = v375 + 8;
    *(_QWORD *)v518 = 136i64 * (v375 + 9);
    v382 = v375 + 10;
    v383 = v375 + 11;
    v384 = v375 + 12;
    v385 = v375 + 13;
    v386 = -1i64;
    do
      ++v386;
    while ( gametypes[v376].internalName[v386] );
    v387 = gametypes[v376].localizedName;
    v388 = -1i64;
    do
      ++v388;
    while ( v387[v388] );
    v389 = *(_DWORD *)v524 + v386;
    v390 = -1i64;
    do
      ++v390;
    while ( gametypes[v377].internalName[v390] );
    v391 = v388 + v389;
    v392 = -1i64;
    do
      ++v392;
    while ( gametypes[v377].localizedName[v392] );
    v393 = v391 + v390;
    v394 = -1i64;
    do
      ++v394;
    while ( gametypes[v385].internalName[v394] );
    v395 = v392 + v393;
    v396 = -1i64;
    do
      ++v396;
    while ( gametypes[v385].localizedName[v396] );
    v397 = v395 + v394;
    v398 = -1i64;
    do
      ++v398;
    while ( gametypes[v384].internalName[v398] );
    v399 = v396 + v397;
    v400 = -1i64;
    do
      ++v400;
    while ( gametypes[v384].localizedName[v400] );
    v401 = v399 + v398;
    v402 = -1i64;
    do
      ++v402;
    while ( gametypes[v383].internalName[v402] );
    v403 = v400 + v401;
    v404 = -1i64;
    do
      ++v404;
    while ( gametypes[v383].localizedName[v404] );
    v405 = v403 + v402;
    v406 = -1i64;
    do
      ++v406;
    while ( gametypes[v381].internalName[v406] );
    v407 = v404 + v405;
    v408 = -1i64;
    do
      ++v408;
    while ( gametypes[v381].localizedName[v408] );
    v409 = v407 + v406;
    v410 = -1i64;
    do
      ++v410;
    while ( gametypes[v380].internalName[v410] );
    v411 = v408 + v409;
    v412 = -1i64;
    do
      ++v412;
    while ( gametypes[v380].localizedName[v412] );
    v413 = v411 + v410;
    v414 = -1i64;
    do
      ++v414;
    while ( gametypes[v382].internalName[v414] );
    v415 = v412 + v413;
    v416 = -1i64;
    do
      ++v416;
    while ( gametypes[v382].localizedName[v416] );
    v417 = v415 + v414;
    v418 = -1i64;
    do
      ++v418;
    while ( gametypes[v379].internalName[v418] );
    v419 = v416 + v417;
    v420 = -1i64;
    do
      ++v420;
    while ( gametypes[v379].localizedName[v420] );
    v421 = v419 + v418;
    v422 = -1i64;
    do
      ++v422;
    while ( gametypes[v378].internalName[v422] );
    v423 = v420 + v421;
    v424 = -1i64;
    do
      ++v424;
    while ( gametypes[v378].localizedName[v424] );
    v425 = v423 + v422;
    v426 = -1i64;
    do
      ++v426;
    while ( gametypes[0].internalName[*(_QWORD *)v518 + v426] );
    v427 = v424 + v425;
    v428 = -1i64;
    do
      ++v428;
    while ( gametypes[0].localizedName[*(_QWORD *)v518 + v428] );
    v429 = v427 + v426;
    v430 = -1i64;
    do
      ++v430;
    while ( gametypes[0].internalName[*(_QWORD *)v517 + v430] );
    v431 = v428 + v429;
    v432 = -1i64;
    do
      ++v432;
    while ( gametypes[0].localizedName[*(_QWORD *)v517 + v432] );
    v433 = v431 + v430;
    v434 = -1i64;
    do
      ++v434;
    while ( gametypes[0].internalName[*(_QWORD *)v516 + v434] );
    v435 = v432 + v433;
    v436 = -1i64;
    do
      ++v436;
    while ( gametypes[0].localizedName[*(_QWORD *)v516 + v436] );
    v437 = v435 + v434;
    v438 = -1i64;
    do
      ++v438;
    while ( gametypes[v514 / 0x88].internalName[v438] );
    v439 = v436 + v437;
    v440 = -1i64;
    do
      ++v440;
    while ( gametypes[v514 / 0x88].localizedName[v440] );
    v441 = v439 + v438;
    v442 = -1i64;
    do
      ++v442;
    while ( gametypes[0].internalName[*(_QWORD *)v510 + v442] );
    v443 = v440 + v441;
    v444 = -1i64;
    do
      ++v444;
    while ( gametypes[0].localizedName[*(_QWORD *)v510 + v444] );
    v445 = v443 + v442;
    v446 = -1i64;
    do
      ++v446;
    while ( gametypes[v520 / 0x88].internalName[v446] );
    v447 = v444 + v445;
    v448 = -1i64;
    do
      ++v448;
    while ( gametypes[v520 / 0x88].localizedName[v448] );
    v449 = v447 + v446 + v448 + 32;
    *(_QWORD *)v524 = v449;
    v375 += 16;
  }
  while ( v375 - 2 < 64 );
  v450 = &categories[1];
  do
  {
    v451 = -1i64;
    do
      ++v451;
    while ( v450[2].description[v451] );
    v452 = -1i64;
    do
      ++v452;
    while ( v450[2].name[v452] );
    v453 = v449 + v451;
    v454 = -1i64;
    do
      ++v454;
    while ( v450[1].description[v454] );
    v455 = v452 + v453;
    v456 = -1i64;
    do
      ++v456;
    while ( v450[-1].name[v456] );
    v457 = v455 + v454;
    v458 = -1i64;
    do
      ++v458;
    while ( v450[1].name[v458] );
    v459 = v456 + v457;
    v460 = -1i64;
    do
      ++v460;
    while ( v450->name[v460 - 904] );
    v461 = v459 + v458;
    v462 = -1i64;
    do
      ++v462;
    while ( v450->description[v462] );
    v463 = v460 + v461;
    v464 = -1i64;
    do
      ++v464;
    while ( v450[11].description[v464] );
    v465 = v463 + v462;
    v466 = -1i64;
    do
      ++v466;
    while ( v450[11].name[v466] );
    v467 = v464 + v465;
    v468 = -1i64;
    do
      ++v468;
    while ( v450[10].description[v468] );
    v469 = v467 + v466;
    v470 = -1i64;
    do
      ++v470;
    while ( v450[10].name[v470] );
    v471 = v468 + v469;
    v472 = -1i64;
    do
      ++v472;
    while ( v450[9].description[v472] );
    v473 = v471 + v470;
    v474 = -1i64;
    do
      ++v474;
    while ( v450[9].name[v474] );
    v475 = v472 + v473;
    v476 = -1i64;
    do
      ++v476;
    while ( v450[8].description[v476] );
    v477 = v475 + v474;
    v478 = -1i64;
    do
      ++v478;
    while ( v450[8].name[v478] );
    v479 = v476 + v477;
    v480 = -1i64;
    do
      ++v480;
    while ( v450[7].description[v480] );
    v481 = v479 + v478;
    v482 = -1i64;
    do
      ++v482;
    while ( v450[7].name[v482] );
    v483 = v480 + v481;
    v484 = -1i64;
    do
      ++v484;
    while ( v450[6].description[v484] );
    v485 = v483 + v482;
    v486 = -1i64;
    do
      ++v486;
    while ( v450[6].name[v486] );
    v487 = v484 + v485;
    v488 = -1i64;
    do
      ++v488;
    while ( v450[5].description[v488] );
    v489 = v487 + v486;
    v490 = -1i64;
    do
      ++v490;
    while ( v450[5].name[v490] );
    v491 = v488 + v489;
    v492 = -1i64;
    do
      ++v492;
    while ( v450[4].description[v492] );
    v493 = v491 + v490;
    v494 = -1i64;
    do
      ++v494;
    while ( v450[4].name[v494] );
    v495 = v492 + v493;
    v496 = -1i64;
    do
      ++v496;
    while ( v450[3].description[v496] );
    v497 = v495 + v494;
    v498 = -1i64;
    do
      ++v498;
    while ( v450[3].name[v498] );
    v499 = v496 + v497;
    v500 = -1i64;
    do
      ++v500;
    while ( v450->name[v500] );
    v449 = v499 + v498 + v500 + 26;
    v450 += 13;
    --v519;
  }
  while ( v519 );
  Com_Printf(131086, "Playlist: Version %d\n", playlist_versionNum);
  v501 = v511;
  LODWORD(v507) = v511;
  LODWORD(v506) = 26;
  LODWORD(v505) = v513;
  LODWORD(v504) = 129;
  LODWORD(v503) = v508;
  Com_Printf(131086, "Playlist: %d/%d gametypes, %d/%d playlists, %d/%d categories (%d parse errors)\n", (unsigned int)numGametypes, 64i64, v503, v504, v505, v506, v507);
  v502 = PlaylistStringBuffer_GetRemainingAfterTail();
  Com_Printf(131086, "Playlist: There are %i/%i bytes of the playlist string buffer used\n", (unsigned int)(204800 - v502), 204800i64);
  Com_Printf(131086, "Playlist: There are %d/%d bytes of static char arrays being used\n", v449, 104320i64);
  Com_Printf(131086, "Playlist: Total memory footprint of data is approximately %zu bytes\n", 0x5A2C0ui64);
  if ( v501 )
  {
    LiveStorage_PauseFetchingPlaylists();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE8E88, 786i64, v501);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v521);
}

/*
==============
Playlist_PartyBasedTeams
==============
*/
bool Playlist_PartyBasedTeams(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2243, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 2) != 0;
  return result;
}

/*
==============
Playlist_PrintRules
==============
*/
void Playlist_PrintRules(const LocalClientNum_t localClientNum, const int playlistId, const int playlistNum, const int entryNum)
{
  __int64 v4; 
  __int64 v6; 
  playlistEntry *Entry; 
  unsigned __int8 gametype; 
  playlistGametype *v9; 
  __int64 mapindex; 
  char *v11; 
  const dvar_t *v12; 
  const char *string; 
  __int64 v14; 
  const char *v15; 
  const char *rules; 
  char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  char *v20; 
  const dvar_t *v21; 
  unsigned int unsignedInt; 
  int MaxLobbySize; 
  int teamSize; 
  __int64 v25; 
  __int64 v26; 
  char *fmt; 
  char *fmta; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 

  v4 = playlistId;
  v6 = playlistId;
  Com_Printf(131088, "** Playlist Rules --  name:%s  id:%d  num:%d  entry:%d\n", playlists[v4].name, (unsigned int)v4, playlistNum, entryNum);
  Entry = Playlist_GetEntry(v4, entryNum);
  gametype = Entry->gametype;
  if ( gametype != 64 )
  {
    LODWORD(v29) = Entry->remainingWeight;
    LODWORD(fmt) = Entry->fullWeight;
    Com_Printf(131088, "**** Entry --  gametype:%d  mapindex:%d  fullweight:%d  remainingweight:%d\n", gametype, Entry->mapindex, fmt, v29);
    v9 = Playlist_GetGameType(Entry->gametype);
    mapindex = Entry->mapindex;
    if ( (unsigned int)mapindex >= maps.numEntries )
      v11 = NULL;
    else
      v11 = maps.name[mapindex];
    v12 = DVARSTR_online_matchmaking_mapname;
    if ( !DVARSTR_online_matchmaking_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    string = v12->current.string;
    v14 = -1i64;
    do
      ++v14;
    while ( string[v14] );
    v15 = "<null>";
    if ( (_DWORD)v14 )
    {
      if ( v11 )
        v15 = v11;
      Com_Printf(131088, "**** Gametype --  map:%s  overridemap:%s  name:%s  localized:%s  script:%s  recipe:%d\n", v15, string, v9->internalName, v9->localizedName, v9->scriptName, v9->hasRecipe);
    }
    else
    {
      if ( v11 )
        v15 = v11;
      LODWORD(v31) = v9->hasRecipe;
      Com_Printf(131088, "**** Gametype --  map:%s  name:%s  localized:%s  script:%s  recipe:%d\n", v15, v9->internalName, v9->localizedName, v9, v31);
    }
    if ( globalRules.rules && *globalRules.rules )
      Com_Printf(131088, "****** Global Rules --  %s\n", globalRules.rules);
    rules = v9->rules;
    if ( rules && *rules )
      Com_Printf(131088, "****** Gametype Rules --  %s\n", rules);
    v17 = playlists[v6].rules;
    if ( v17 && *v17 )
    {
      Com_Printf(131088, "****** Playlist Rules --  %s\n", v17);
    }
    else
    {
      v18 = DVARINT_playlist;
      if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      Com_PrintError(16, "Playlist_RunRules - no rules - we think there should be some for playlistId = %d playlistnum = %d!\n", (unsigned int)v4, v18->current.unsignedInt);
    }
    v19 = DVARINT_playlistCategory;
    if ( !DVARINT_playlistCategory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistCategory") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = categories[v19->current.integer].rules;
    if ( *v20 )
      Com_Printf(131088, "****** Category Rules --  %s\n", v20);
    v21 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    unsignedInt = v21->current.unsignedInt;
    if ( v9->teamSize <= 0 )
    {
      v26 = unsignedInt + 1;
      if ( (unsignedInt & 1) == 0 )
        v26 = unsignedInt;
      Com_Printf(131088, "****** Teams -- players:%d  teamcount:%d\n", v26, (unsigned int)v9->teamCount);
    }
    else
    {
      MaxLobbySize = Playlist_GetMaxLobbySize(v4);
      if ( v9->teamCount )
        Com_PrintWarning(16, "Playlists: ignoring teamCount setting because teamSize is set to %d.\n", (unsigned int)v9->teamSize);
      teamSize = v9->teamSize;
      if ( MaxLobbySize % teamSize )
      {
        Com_PrintError(16, "Playlists: max lobby size is %d and cannot be divided evenly by team size %d.\n", (unsigned int)MaxLobbySize, (unsigned int)teamSize);
        teamSize = v9->teamSize;
      }
      v25 = unsignedInt + 1;
      LODWORD(fmta) = teamSize;
      if ( (unsignedInt & 1) == 0 )
        v25 = unsignedInt;
      LODWORD(v30) = MaxLobbySize / teamSize;
      Com_Printf(131088, "****** Teams -- players:%d  lobbysize:%d  teamsize:%d  teamcount:%d\n", v25, (unsigned int)MaxLobbySize, fmta, v30);
    }
  }
}

/*
==============
Playlist_ResetWeights
==============
*/
void Playlist_ResetWeights(const int playlistId)
{
  __int64 v1; 
  int v2; 
  unsigned __int16 *p_numEntries; 
  unsigned __int16 *v4; 
  unsigned __int16 *p_firstEntry; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = (unsigned int)playlistId;
  Com_DPrintf(16, "Playlists: Resetting all weights to their default.\n");
  v2 = 0;
  p_numEntries = &playlists[(int)v1].numEntries;
  if ( *p_numEntries )
  {
    v4 = &playlists[v1].numEntries;
    p_firstEntry = &playlists[v1].firstEntry;
    do
    {
      if ( (unsigned int)v1 >= 0x81 )
      {
        LODWORD(v8) = 129;
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( *p_firstEntry >= s_playlistEntryCount )
      {
        LODWORD(v8) = s_playlistEntryCount;
        LODWORD(v7) = *p_firstEntry;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( playlist->firstEntry ) < (unsigned)( s_playlistEntryCount )", "playlist->firstEntry doesn't index s_playlistEntryCount\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( v2 >= (unsigned int)*v4 )
      {
        LODWORD(v8) = *v4;
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1624, ASSERT_TYPE_ASSERT, "(unsigned)( entryNum ) < (unsigned)( playlist->numEntries )", "entryNum doesn't index playlist->numEntries\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v6 = v2 + (unsigned int)*p_firstEntry;
      if ( (unsigned int)v6 >= s_playlistEntryCount )
      {
        LODWORD(v8) = s_playlistEntryCount;
        LODWORD(v7) = v2 + *p_firstEntry;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1627, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( s_playlistEntryCount )", "entryIndex doesn't index s_playlistEntryCount\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      ++v2;
      s_playlistEntries[v6].remainingWeight = s_playlistEntries[v6].fullWeight;
    }
    while ( v2 < *p_numEntries );
  }
}

/*
==============
Playlist_RestrictsSplitscreen
==============
*/
bool Playlist_RestrictsSplitscreen(const int playlistId)
{
  __int64 v1; 
  bool result; 
  int v4; 

  v1 = playlistId;
  if ( (unsigned int)playlistId >= 0x81 )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2132, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", playlistId, v4) )
      __debugbreak();
  }
  result = LiveStorage_DoWeHavePlaylists();
  if ( result )
    return (playlists[v1].flags & 0x200) != 0;
  return result;
}

/*
==============
Playlist_RunRules
==============
*/
void Playlist_RunRules(const int localControllerIndex, const int entryNum)
{
  LocalClientNum_t ClientFromController; 
  const dvar_t *v5; 
  LocalClientNum_t v6; 
  __int64 PlaylistIdForNum; 
  const dvar_t *v8; 
  playlistEntry *Entry; 
  unsigned __int8 gametype; 
  playlistGametype *v11; 
  __int64 mapindex; 
  char *v13; 
  unsigned __int64 TournamentID; 
  unsigned __int16 CurrentTournamentRound; 
  const dvar_t *v16; 
  unsigned __int16 v17; 
  const char *string; 
  __int64 v19; 
  const dvar_t *v20; 
  const char *MapNameForRound; 
  const dvar_t *v22; 
  const char *MapName; 
  GameStateInfo *v24; 
  GameStateInfo *v25; 
  const char *v26; 
  bool HardcoreMode; 
  bool TacticalMode; 
  char v29; 
  unsigned __int8 ActiveGameMode; 
  const char *rules; 
  __int64 v32; 
  char *v33; 
  const dvar_t *v34; 
  char *v35; 
  int teamCount; 
  const dvar_t *v37; 
  const dvar_t *v38; 

  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v5 = DVARINT_playlist;
  v6 = ClientFromController;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v5->current.integer);
  if ( GameBattles_IsGameBattleActive() && GameBattles_IsInGameBattleGameMode() )
  {
    GameBattles_LoadGameRules(localControllerIndex);
  }
  else
  {
    v8 = DVARINT_playlist;
    if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    Playlist_PrintRules(v6, PlaylistIdForNum, v8->current.integer, entryNum);
    Entry = Playlist_GetEntry(PlaylistIdForNum, entryNum);
    gametype = Entry->gametype;
    if ( gametype == 64 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9C10, 790i64, (unsigned int)PlaylistIdForNum);
      gametype = Entry->gametype;
    }
    v11 = Playlist_GetGameType(gametype);
    mapindex = Entry->mapindex;
    if ( (unsigned int)mapindex >= maps.numEntries )
      v13 = NULL;
    else
      v13 = maps.name[mapindex];
    TournamentID = OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance);
    CurrentTournamentRound = OnlineMatchmakerOmniscient::GetCurrentTournamentRound(&OnlineMatchmakerOmniscient::ms_instance);
    v16 = DVARSTR_online_matchmaking_mapname;
    v17 = CurrentTournamentRound;
    if ( !DVARSTR_online_matchmaking_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    string = v16->current.string;
    v19 = -1i64;
    do
      ++v19;
    while ( string[v19] );
    if ( !(_DWORD)v19 )
    {
      if ( !TournamentID )
        goto LABEL_29;
      v20 = DVARBOOL_online_tournament_should_user_random_maps;
      if ( !DVARBOOL_online_tournament_should_user_random_maps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_should_user_random_maps") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
      {
        MapNameForRound = OnlineTournament_GetMapNameForRound(v17);
        string = v13;
        if ( *MapNameForRound )
          string = MapNameForRound;
      }
      else
      {
LABEL_29:
        string = v13;
      }
    }
    v22 = DVARSTR_ui_oldmapname;
    if ( !DVARSTR_ui_oldmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_oldmapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !*(_BYTE *)v22->current.integer64 )
    {
      MapName = Party_GetMapName();
      Dvar_SetString_Internal(DVARSTR_ui_oldmapname, MapName);
    }
    Dvar_SetString_Internal(DVARSTR_ui_mapname, string);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2918, ASSERT_TYPE_ASSERT, "(gametypeEntry)", (const char *)&queryFormat, "gametypeEntry") )
      __debugbreak();
    v24 = GameStateInfo_Get();
    v25 = v24;
    if ( v11->hasRecipe )
    {
      if ( !v24->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2923, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
        __debugbreak();
      if ( !LoadMatchRulesFromPlaylists(v25->matchRules, v11->internalName, localControllerIndex) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9C98, 791i64);
      v26 = BG_MatchRulesData_GetGameType(v25->matchRules);
      Dvar_SetString_Internal(DVARSTR_ui_gametype, v26);
      HardcoreMode = BG_MatchRulesData_GetHardcoreMode(v25->matchRules);
      Dvar_SetBool_Internal(DVARBOOL_ui_hardcore, HardcoreMode);
      TacticalMode = BG_MatchRulesData_GetTacticalMode(v25->matchRules);
      Dvar_SetBool_Internal(DVARBOOL_ui_tactical, TacticalMode);
      v29 = 1;
    }
    else
    {
      Dvar_SetString_Internal(DVARSTR_ui_gametype, v11->scriptName);
      Dvar_SetBool_Internal(DVARBOOL_ui_hardcore, v11->hardcore);
      Dvar_SetBool_Internal(DVARBOOL_ui_tactical, v11->tactical);
      v29 = 0;
    }
    v25->usingRecipe = v29;
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    Com_ExecLobbyDefaultConfigs(v6, localControllerIndex, (GameModeType)ActiveGameMode);
    if ( *globalRules.rules )
      Cbuf_ExecuteBufferInternal(v6, localControllerIndex, globalRules.rules, 0, 0);
    rules = v11->rules;
    if ( *rules )
      Cbuf_ExecuteBufferInternal(v6, localControllerIndex, rules, 0, 0);
    v32 = PlaylistIdForNum;
    v33 = playlists[PlaylistIdForNum].rules;
    if ( v33 )
      Cbuf_ExecuteBufferInternal(v6, localControllerIndex, v33, 0, 0);
    v34 = DVARINT_playlistCategory;
    if ( !DVARINT_playlistCategory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistCategory") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = categories[v34->current.integer].rules;
    if ( *v35 )
      Cbuf_ExecuteBufferInternal(v6, localControllerIndex, v35, 0, 0);
    if ( s_hasPlaylistPlayerXPScale )
    {
      Com_Printf(131088, "The playlist double player xp dvar is active, so setting to 1\n");
      Dvar_SetInt_Internal(DVARINT_online_mp_xpscale, 1);
    }
    if ( playlists[v32].xpScale > 1u )
    {
      Com_Printf(131088, "Playlist has double player xp active\n");
      Dvar_SetInt_Internal(DVARINT_online_mp_xpscale, 2);
    }
    if ( s_hasPlaylistWeaponXPScale )
    {
      Com_Printf(131088, "The playlist double weapon xp dvar is active, so setting to 1\n");
      Dvar_SetInt_Internal(DVARINT_online_mp_weapon_xpscale, 1);
    }
    if ( playlists[v32].weaponXpScale > 1u )
    {
      Com_Printf(131088, "Playlist has double weapon xp active\n");
      Dvar_SetInt_Internal(DVARINT_online_mp_weapon_xpscale, 2);
    }
    if ( s_hasPlaylistBattlepassXPScale )
    {
      Com_Printf(131088, "The playlist double battlepass xp dvar is active, so setting to 1\n");
      Dvar_SetInt_Internal(DVARINT_online_battle_xpscale, 1);
    }
    if ( playlists[v32].battlePassXpScale > 1u )
    {
      Com_Printf(131088, "Playlist has double battlepass xp active\n");
      Dvar_SetInt_Internal(DVARINT_online_battle_xpscale, 2);
    }
    teamCount = v11->teamCount;
    if ( v11->teamSize > 0 )
      teamCount = Playlist_GetMaxLobbySize(PlaylistIdForNum) / v11->teamSize;
    Dvar_SetInt_Internal(DVARINT_party_teamCount, teamCount);
    Dvar_SetStringByName("NOQRRQMOON", playlists[v32].name);
    Dvar_SetStringByName("LOMNMLRNRP", playlists[v32].image);
    v37 = DVARBOOL_single_player_mp;
    if ( !DVARBOOL_single_player_mp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "single_player_mp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
      Dvar_SetInt_Internal(DVARINT_party_minplayers, 1);
    v38 = DVARBOOL_two_player_mp;
    if ( !DVARBOOL_two_player_mp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "two_player_mp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( v38->current.enabled )
      Dvar_SetInt_Internal(DVARINT_party_minplayers, 2);
    BG_GameStateInfo_ClearBotData();
    if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
      BG_Bots_SelectBotsForMPMatch();
    OnlineMatchmakerOmniscient::ApplyDvarOverrides(&OnlineMatchmakerOmniscient::ms_instance);
    Com_Printf(131088, "** Playlist Rules Complete\n");
  }
}

/*
==============
Playlist_SetFiltered
==============
*/
void Playlist_SetFiltered(LocalClientNum_t clientNum, unsigned int category, unsigned int index)
{
  __int64 v4; 
  __int64 v5; 
  unsigned __int8 num; 
  unsigned __int64 v9; 
  DDLState *p_state; 
  char v11; 
  int high_filter_out; 
  unsigned __int64 v14; 
  DDLState state; 
  DDLState v16; 
  DDLContext buffer; 
  unsigned __int64 filter_out; 

  v4 = index;
  v5 = category;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v16.isValid = 0;
  v16.offset = 0;
  v16.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0D8h+state.member], xmm0
    vmovdqu xmmword ptr [rsp+0D8h+var_70.member], xmm0
  }
  if ( index >= 0x800 )
  {
    high_filter_out = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3569, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2048 )", "index doesn't index MAX_PLAYLIST_ENTRIES\n\t%i not in [0, %i)", index, high_filter_out) )
      __debugbreak();
  }
  if ( (categories[v5].flags & 1) != 0 && Playlist_GetFiltersForCategory(clientNum, &buffer, &state, v5, &filter_out, &v16, &v14) )
  {
    num = categories[v5].entries[v4].num;
    if ( num >= 0x41u )
    {
      v9 = v14;
      p_state = &v16;
      v11 = num - 65;
    }
    else
    {
      v9 = filter_out;
      p_state = &state;
      v11 = num - 1;
    }
    DDL_SetUInt64(p_state, &buffer, v9 ^ (1i64 << v11));
  }
}

/*
==============
Playlist_SetFiltersForCategory
==============
*/
void Playlist_SetFiltersForCategory(const LocalClientNum_t clientNum, const unsigned int category, const unsigned __int64 filters, const unsigned __int64 high_filters)
{
  unsigned __int64 high_filter_out; 
  unsigned __int64 filter_out; 
  DDLState state; 
  DDLState high_state; 
  DDLContext ddlContext; 
  void *retaddr; 

  if ( category < 0x1A )
  {
    _R11 = &retaddr;
    if ( (categories[category].flags & 1) != 0 )
    {
      high_state.arrayIndex = -1;
      high_state.isValid = 0;
      high_state.offset = 0;
      state.offset = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      state.isValid = 0;
      state.arrayIndex = -1;
      __asm
      {
        vmovdqu xmmword ptr [rsp+0C8h+state.member], xmm0
        vmovdqu xmmword ptr [r11-48h], xmm0
      }
      if ( Playlist_GetFiltersForCategory(clientNum, &ddlContext, &state, category, &filter_out, &high_state, &high_filter_out) )
      {
        Com_Printf(25, "[playlist] Updating filters for category %i from %zu %zu to %zu %zu\n", category, filter_out, high_filter_out, filters, high_filters);
        DDL_SetUInt64(&state, &ddlContext, filters);
        DDL_SetUInt64(&high_state, &ddlContext, high_filters);
      }
    }
  }
}

/*
==============
Playlist_UpdateFeatured
==============
*/
void Playlist_UpdateFeatured()
{
  __int64 v0; 
  unsigned __int8 *p_numEntries; 
  char *overrideDvarName; 
  __int64 v3; 
  const char *StringSafe; 
  __int64 v5; 
  char *i; 
  char dest[64]; 

  v0 = 1i64;
  p_numEntries = &categories[1].numEntries;
  overrideDvarName = categories[1].overrideDvarName;
  v3 = 25i64;
  do
  {
    if ( p_numEntries[16] )
    {
      StringSafe = Dvar_GetStringSafe(overrideDvarName);
      Core_strcpy(dest, 0x40ui64, StringSafe);
      v5 = -1i64;
      do
        ++v5;
      while ( dest[v5] );
      if ( (_DWORD)v5 )
      {
        Com_Printf(25, "Updating Featured Playlists using %s\n", dest);
        *p_numEntries = 0;
        for ( i = strtok(dest, ","); i; ++*p_numEntries )
        {
          categories[v0].entries[*p_numEntries].num = atoi(i);
          i = strtok(NULL, ",");
        }
      }
    }
    overrideDvarName += 1032;
    ++v0;
    p_numEntries += 1032;
    --v3;
  }
  while ( v3 );
}

/*
==============
Playlist_UpdateFilters
==============
*/
void Playlist_UpdateFilters(const int controllerIndex)
{
  __int64 ClientFromController; 
  unsigned int *p_crc32; 
  char v5; 
  signed int i; 
  int v7; 
  CmdText *v8; 
  int v9; 
  __int64 cmdsize; 
  int v11; 
  scrContext_t *v12; 
  unsigned __int64 high_filter_out; 
  DDLState v14; 
  DDLState high_state; 
  DDLState state; 
  DDLContext ddlContext; 
  DDLContext buffer; 
  unsigned int crc_out; 
  unsigned int v20; 
  unsigned __int64 filter_out; 

  if ( !Live_UserIsGuest(controllerIndex) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( LiveStorage_DoWeHaveStatsForSource(controllerIndex, STATS_ONLINE) )
    {
      p_crc32 = &categories[0].crc32;
      v5 = 0;
      for ( i = 0; i < 26; ++i )
      {
        if ( (*(_BYTE *)(p_crc32 - 36) & 0x1C) != 0 )
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          state.isValid = 0;
          state.offset = 0;
          state.arrayIndex = -1;
          __asm { vmovdqu xmmword ptr [rbp+40h+state.member], xmm0 }
          if ( Playlist_GetFiltersCRC32ForCategory((LocalClientNum_t)ClientFromController, &buffer, &state, i, &crc_out) )
          {
            v7 = *p_crc32;
            if ( crc_out != *p_crc32 )
            {
              __asm { vpxor   xmm0, xmm0, xmm0 }
              v14.isValid = 0;
              v14.offset = 0;
              v14.arrayIndex = -1;
              high_state.isValid = 0;
              __asm { vmovdqu xmmword ptr [rsp+140h+var_F8.member], xmm0 }
              high_state.offset = 0;
              high_state.arrayIndex = -1;
              __asm { vmovdqu xmmword ptr [rsp+140h+var_D8.member], xmm0 }
              if ( Playlist_GetFiltersForCategory((LocalClientNum_t)ClientFromController, &ddlContext, &v14, i, &filter_out, &high_state, &high_filter_out) )
              {
                if ( !filter_out )
                  DDL_SetUInt64(&v14, &ddlContext, 0xFFFFFFFFFFFFFFFFui64);
                if ( !high_filter_out )
                  DDL_SetUInt64(&high_state, &ddlContext, 0xFFFFFFFFFFFFFFFFui64);
              }
              if ( Playlist_GetFiltersCRC32ForCategory((LocalClientNum_t)ClientFromController, &ddlContext, &v14, i, &v20) )
                DDL_SetInt(&v14, &ddlContext, v7);
              v5 = 1;
            }
          }
        }
        p_crc32 += 258;
      }
      if ( v5 )
      {
        v8 = &s_cmd_textArray[ClientFromController];
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
          __debugbreak();
        Sys_EnterCriticalSection(CRITSECT_CBUF);
        v9 = strlen_noncrt("uploadStats\n");
        cmdsize = v8->cmdsize;
        v11 = v9;
        if ( (int)cmdsize + v9 < v8->maxsize )
        {
          memcpy_noncrt(&v8->data[cmdsize], "uploadStats\n", v9 + 1);
          v8->cmdsize += v11;
          v12 = ScriptContext_Server();
          Scr_MonitorCommand(v12, "uploadStats\n");
        }
        else
        {
          Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "uploadStats\n");
        }
        Sys_LeaveCriticalSection(CRITSECT_CBUF);
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3663, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to update playlist filters without a player stats.") )
    {
      __debugbreak();
    }
  }
}

/*
==============
Playlist_UpdateFromMatchmaker
==============
*/
void Playlist_UpdateFromMatchmaker(const int controllerIndex, const int playlist, const bool isCreating)
{
  __int64 v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  unsigned __int16 *p_numEntries; 
  bool v10; 
  int v11; 
  PartyData *PartyData; 
  int PlaylistEntry; 
  const dvar_t *v14; 
  int integer; 
  PartyData *v16; 

  v5 = playlist;
  v6 = 0;
  if ( LiveStorage_DoWeHavePlaylists() )
  {
    v7 = 0;
    if ( (int)v5 >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1580, ASSERT_TYPE_ASSERT, "(arrayIdx < 129)", (const char *)&queryFormat, "arrayIdx < MAX_PLAYLISTS") )
      __debugbreak();
    v8 = v5;
    if ( (int)v5 > 0 )
    {
      p_numEntries = &playlists[0].numEntries;
      do
      {
        v10 = *p_numEntries == 0;
        v11 = v7 + 1;
        p_numEntries += 496;
        if ( v10 )
          v11 = v7;
        v7 = v11;
        --v8;
      }
      while ( v8 );
    }
    if ( v7 <= (int)v5 )
      v6 = v7;
  }
  Dvar_SetInt_Internal(DVARINT_playlist, v6);
  Dvar_SetInt_Internal(DVARINT_playlistID, v5);
  Live_SetPlaylistNum(controllerIndex, v6);
  GamerProfile_SetPlaylistNum(controllerIndex, v6);
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
  {
    Com_Printf(25, "Playlist_UpdateFromMatchmaker not running the rules now since we are accepting an invite\n");
  }
  else if ( isCreating )
  {
    Playlist_RunRules(controllerIndex, 0);
    Party_ChooseNextPlaylist(controllerIndex);
    PartyData = Lobby_GetPartyData();
    PlaylistEntry = Party_GetPlaylistEntry(PartyData);
    Playlist_RunRules(controllerIndex, PlaylistEntry);
    v14 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    integer = v14->current.integer;
    v16 = Lobby_GetPartyData();
    Party_SetNumGameSlots(v16, integer);
  }
}

/*
==============
Playlist_UpdateXPScales
==============
*/
void Playlist_UpdateXPScales()
{
  const char *StringSafe; 
  const char *v1; 
  const char *v2; 
  unsigned __int8 *p_weaponXpScale; 
  __int64 v4; 
  __int64 v5; 
  char *i; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  char *j; 
  int v11; 
  __int64 v12; 
  char *k; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  char dest[64]; 
  char v19[64]; 
  char v20[64]; 

  StringSafe = Dvar_GetStringSafe("NPTKRKLNTQ");
  Core_strcpy(dest, 0x40ui64, StringSafe);
  v1 = Dvar_GetStringSafe("LPSROQRSNN");
  Core_strcpy(v19, 0x40ui64, v1);
  v2 = Dvar_GetStringSafe("SSSTKSQN");
  Core_strcpy(v20, 0x40ui64, v2);
  p_weaponXpScale = &playlists[0].weaponXpScale;
  s_hasPlaylistPlayerXPScale = 0;
  s_hasPlaylistWeaponXPScale = 0;
  s_hasPlaylistBattlepassXPScale = 0;
  do
  {
    *(_WORD *)(p_weaponXpScale - 1) = 257;
    p_weaponXpScale[1] = 1;
    p_weaponXpScale += 992;
  }
  while ( (__int64)p_weaponXpScale < (__int64)&categories[0].overrideDvarValue[40] );
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( dest[v5] );
  if ( (_DWORD)v5 )
  {
    s_hasPlaylistPlayerXPScale = 1;
    Com_Printf(25, "Updating Player XP Playlists using %s\n", dest);
    for ( i = strtok(dest, ","); i; i = strtok(NULL, ",") )
    {
      v7 = atoi(i);
      v8 = v7;
      if ( (unsigned int)v7 >= 0x81 )
      {
        LODWORD(v17) = 129;
        LODWORD(v16) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( 129 )", "id doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      playlists[v8].xpScale = 2;
    }
  }
  v9 = -1i64;
  do
    ++v9;
  while ( v19[v9] );
  if ( (_DWORD)v9 )
  {
    s_hasPlaylistWeaponXPScale = 1;
    Com_Printf(25, "Updating Player XP Playlists using %s\n", v19);
    for ( j = strtok(v19, ","); j; j = strtok(NULL, ",") )
    {
      v11 = atoi(j);
      v12 = v11;
      if ( (unsigned int)v11 >= 0x81 )
      {
        LODWORD(v17) = 129;
        LODWORD(v16) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( 129 )", "id doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      playlists[v12].weaponXpScale = 2;
    }
  }
  do
    ++v4;
  while ( v20[v4] );
  if ( (_DWORD)v4 )
  {
    s_hasPlaylistBattlepassXPScale = 1;
    Com_Printf(25, "Updating Player XP Playlists using %s\n", v20);
    for ( k = strtok(v20, ","); k; k = strtok(NULL, ",") )
    {
      v14 = atoi(k);
      v15 = v14;
      if ( (unsigned int)v14 >= 0x81 )
      {
        LODWORD(v17) = 129;
        LODWORD(v16) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( 129 )", "id doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      playlists[v15].battlePassXpScale = 2;
    }
  }
}

/*
==============
Playlist_WritePlaylistConfigInfoJSON
==============
*/
bool Playlist_WritePlaylistConfigInfoJSON(const int playlistId, const int playlistCategory, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  bdJSONSerializer *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 numEntries; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int8 *p_num; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 *v19; 
  unsigned __int8 v20; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int8 v37; 
  unsigned __int8 *v38; 
  unsigned __int8 *v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  unsigned __int8 *v43; 
  unsigned __int8 v44; 
  int v45; 
  __int64 v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  playlistGametype *v49; 
  unsigned int v50; 
  int maxLobbySize; 
  const dvar_t *v52; 
  int integer; 
  const dvar_t *v54; 
  int ControllerFromClient; 
  int teamCount; 
  bool v57; 
  const dvar_t *v58; 
  __int64 gametype; 
  __int64 v60; 
  const dvar_t *v61; 
  const dvar_t *v62; 
  const char *v63; 
  int v64; 
  const dvar_t *v65; 
  __int64 v66; 
  unsigned int maxSquadSize; 
  const dvar_t *v68; 
  const char *v69; 
  __int64 v70; 
  signed __int64 v71; 
  int v72; 
  __int64 v73; 
  int v74; 
  int v75; 
  int v76; 
  int *v77; 
  __int64 i; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  char *context; 
  unsigned __int64 v83; 
  bool v84; 
  __int64 v85; 
  int *v86; 
  bool v87; 
  char v88; 
  int v89; 
  const int *v90; 
  __int64 v91; 
  char v92; 
  char v93; 
  char v94; 
  char v95; 
  bool v96; 
  int v97; 
  char v98; 
  DDLState *high_state; 
  unsigned __int64 *high_filter_out; 
  int minLobbySize; 
  int v104; 
  int v105; 
  unsigned __int64 v106; 
  unsigned __int64 filter_out; 
  bdJSONSerializer *v108; 
  DDLState v109; 
  DDLState state; 
  DDLContext buffer; 
  unsigned int playlistIda[132]; 
  int v113[22]; 
  int v114[202]; 

  v108 = jsonSerializer;
  v5 = jsonSerializer;
  v6 = playlistId;
  LODWORD(v7) = 0;
  if ( (unsigned int)playlistCategory < 0x1A && (categories[playlistCategory].flags & 1) != 0 )
  {
    v8 = playlistCategory;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    state.offset = 0;
    numEntries = categories[v8].numEntries;
    state.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rbp+5B0h+state.member], xmm0 }
    v109.isValid = 0;
    v109.offset = 0;
    v109.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rbp+5B0h+var_640.member], xmm0 }
    if ( Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, playlistCategory, &filter_out, &v109, &v106) )
    {
      v11 = numEntries;
      if ( numEntries )
      {
        v12 = v106;
        p_num = &categories[v8].entries[0].num;
        v14 = filter_out;
        do
        {
          v15 = *p_num;
          if ( (unsigned int)v15 >= 0x41 )
            v16 = _bittest64((const __int64 *)&v12, (unsigned __int8)(v15 - 65));
          else
            v16 = _bittest64((const __int64 *)&v14, (unsigned __int8)(v15 - 1));
          if ( v16 )
          {
            v17 = v15;
            v18 = (int)v7;
            LODWORD(v7) = v7 + 1;
            playlistIda[v18] = v15;
            v19 = &playlists[v15].partners[2];
            v20 = playlists[v15].partners[0];
            v21 = &playlists[v15].partners[1];
            v22 = &playlists[v17].partners[3];
            v23 = &playlists[v17].partners[4];
            v24 = &playlists[v17].partners[5];
            v25 = &playlists[v17].partners[6];
            v26 = &playlists[v17].partners[7];
            if ( v20 )
            {
              v27 = v20;
              v28 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v28] = v27;
            }
            if ( *v21 )
            {
              v29 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v29] = *v21;
            }
            if ( *v19 )
            {
              v30 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v30] = *v19;
            }
            if ( *v22 )
            {
              v31 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v31] = *v22;
            }
            if ( *v23 )
            {
              v32 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v32] = *v23;
            }
            if ( *v24 )
            {
              v33 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v33] = *v24;
            }
            if ( *v25 )
            {
              v34 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v34] = *v25;
            }
            if ( *v26 )
            {
              v35 = (int)v7;
              LODWORD(v7) = v7 + 1;
              playlistIda[v35] = *v26;
            }
          }
          p_num += 8;
          --v11;
        }
        while ( v11 );
        v5 = v108;
      }
    }
  }
  else
  {
    v36 = playlistId;
    playlistIda[0] = v6;
    v37 = playlists[v6].partners[0];
    v38 = &playlists[v6].partners[2];
    v39 = &playlists[v6].partners[3];
    v40 = &playlists[v36].partners[4];
    v41 = &playlists[v36].partners[5];
    v42 = &playlists[v36].partners[6];
    v43 = &playlists[v36].partners[7];
    if ( v37 )
      playlistIda[1] = v37;
    v44 = playlists[v36].partners[1];
    LOBYTE(v7) = v37 != 0;
    v7 = (unsigned int)(v7 + 1);
    if ( v44 )
    {
      playlistIda[v7] = v44;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v38 )
    {
      playlistIda[v7] = *v38;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v39 )
    {
      playlistIda[v7] = *v39;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v40 )
    {
      playlistIda[v7] = *v40;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v41 )
    {
      playlistIda[v7] = *v41;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v42 )
    {
      playlistIda[v7] = *v42;
      v7 = (unsigned int)(v7 + 1);
    }
    if ( *v43 )
    {
      playlistIda[v7] = *v43;
      LODWORD(v7) = v7 + 1;
    }
  }
  v105 = 0;
  v45 = 0;
  memset_0(v113, 0, 0x380ui64);
  LODWORD(filter_out) = 0;
  if ( (int)v7 > 0 )
  {
    v46 = 0i64;
    v106 = 0i64;
    v47 = 0i64;
    while ( 1 )
    {
      v48 = (int)playlistIda[v47];
      v104 = 0;
      v49 = (playlistGametype *)((char *)&queryFormat.fmt + 3);
      v50 = v48;
      if ( (unsigned int)v48 >= 0x81 )
      {
        LODWORD(high_filter_out) = 129;
        LODWORD(high_state) = playlistIda[v47];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1989, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
        {
          __debugbreak();
          v50 = playlistIda[v47];
        }
      }
      if ( LiveStorage_DoWeHavePlaylists() )
        minLobbySize = playlists[v48].minLobbySize;
      else
        minLobbySize = 0;
      if ( v50 >= 0x81 )
      {
        LODWORD(high_filter_out) = 129;
        LODWORD(high_state) = v50;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1978, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
          __debugbreak();
      }
      if ( LiveStorage_DoWeHavePlaylists() )
        maxLobbySize = playlists[v50].maxLobbySize;
      else
        maxLobbySize = 0;
      if ( OnlineTournament_RequestedMatchmakingBracket() )
      {
        v52 = DVARINT_party_minplayers;
        if ( !DVARINT_party_minplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minplayers") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v52);
        integer = v52->current.integer;
        v54 = DVARINT_party_maxplayers;
        minLobbySize = integer;
        if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v54);
        maxLobbySize = v54->current.integer;
      }
      if ( Live_IsInGameBattlesGame() )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        maxLobbySize = GameBattles_GetCurrentPlayerCount(ControllerFromClient);
        minLobbySize = maxLobbySize / 2 + 1;
        teamCount = 2;
        v104 = 2;
      }
      else
      {
        teamCount = 0;
      }
      v57 = isPrivateMatch;
      if ( isPrivateMatch )
      {
        v58 = DVARINT_party_maxplayers;
        minLobbySize = 1;
        if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v58);
        maxLobbySize = v58->current.integer;
        v57 = isPrivateMatch;
      }
      if ( !Live_IsInGameBattlesGame() && !v57 )
      {
        gametype = Playlist_GetEntry(playlistIda[v47], 0)->gametype;
        if ( (unsigned int)gametype >= 0x40 )
        {
          LODWORD(high_filter_out) = 64;
          LODWORD(high_state) = gametype;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 64 )", "index doesn't index MAX_PLAYLIST_GAMETYPES\n\t%i not in [0, %i)", high_state, high_filter_out) )
            __debugbreak();
        }
        v49 = &gametypes[gametype];
        teamCount = v49->teamCount;
        v104 = teamCount;
      }
      v60 = (int)playlistIda[v47];
      if ( (unsigned int)v60 >= 0x81 )
      {
        LODWORD(high_filter_out) = 129;
        LODWORD(high_state) = playlistIda[v47];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2510, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
          __debugbreak();
      }
      if ( LiveStorage_DoWeHavePlaylists() && playlists[v60].gamemodeType == PLAYLIST_GAMEMODE_TYPE_CP )
        break;
LABEL_99:
      v66 = (int)playlistIda[v47];
      if ( (unsigned int)v66 >= 0x81 )
      {
        LODWORD(high_filter_out) = 129;
        LODWORD(high_state) = playlistIda[v47];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2000, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
          __debugbreak();
      }
      if ( LiveStorage_DoWeHavePlaylists() )
        maxSquadSize = playlists[v66].maxSquadSize;
      else
        maxSquadSize = 0;
      v68 = DVARBOOL_mming_allow_br_solo_squad;
      if ( !DVARBOOL_mming_allow_br_solo_squad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mming_allow_br_solo_squad") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v68);
      if ( !v68->current.enabled )
        goto LABEL_149;
      v69 = "br";
      v70 = 0x7FFFFFFFi64;
      if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v71 = (char *)v49 - "br";
      do
      {
        v72 = (unsigned __int8)v69[v71];
        v73 = v70;
        v74 = *(unsigned __int8 *)v69++;
        --v70;
        if ( !v73 )
          break;
        if ( v72 != v74 )
        {
          v75 = v72 + 32;
          if ( (unsigned int)(v72 - 65) > 0x19 )
            v75 = v72;
          v72 = v75;
          v76 = v74 + 32;
          if ( (unsigned int)(v74 - 65) > 0x19 )
            v76 = v74;
          if ( v72 != v76 )
          {
            teamCount = v104;
            goto LABEL_149;
          }
        }
      }
      while ( v72 );
      teamCount = v104;
      if ( v104 || maxSquadSize != 1 )
      {
LABEL_149:
        if ( maxSquadSize <= 1 )
          maxSquadSize = 0;
      }
      v77 = v114;
      for ( i = 0i64; i < 8; ++i )
      {
        if ( *(v77 - 1) == minLobbySize && *v77 == maxLobbySize && v77[1] == teamCount && v77[2] == maxSquadSize )
        {
          v83 = v106;
          v45 = v105;
          v113[28 * i + v113[28 * i + 20]++] = playlistIda[v106];
          goto LABEL_137;
        }
        v77 += 28;
      }
      v79 = 28 * v46;
      v80 = (int)playlistIda[v106];
      v113[28 * v46 + v113[28 * v46 + 20]] = v80;
      ++v113[v79 + 20];
      v114[v79] = maxLobbySize;
      v113[v79 + 21] = minLobbySize;
      v114[v79 + 1] = v104;
      v114[v79 + 2] = maxSquadSize;
      if ( (int)v80 >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2446, ASSERT_TYPE_ASSERT, "(playlistId < 129)", (const char *)&queryFormat, "playlistId < MAX_PLAYLISTS") )
        __debugbreak();
      v81 = -1i64;
      context = playlists[v80].context;
      *(_QWORD *)&v114[28 * v46 + 4] = context;
      do
        ++v81;
      while ( context[v81] );
      if ( !(_DWORD)v81 )
        *(_QWORD *)&v114[28 * v46 + 4] = Com_GameMode_GetActiveGameModeStr();
      v83 = v106;
      v45 = ++v105;
      ++v46;
LABEL_137:
      v47 = v83 + 1;
      v106 = v47;
      LODWORD(filter_out) = filter_out + 1;
      if ( (int)filter_out >= (int)v7 )
      {
        v5 = v108;
        goto LABEL_139;
      }
    }
    v61 = DVARINT_mming_minplayers_to_lobby;
    if ( !DVARINT_mming_minplayers_to_lobby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mming_minplayers_to_lobby") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    if ( v61->current.integer == -1 )
    {
      v62 = DVARINT_party_minplayers;
      if ( !DVARINT_party_minplayers )
      {
        v63 = "party_minplayers";
        goto LABEL_93;
      }
    }
    else
    {
      v62 = DVARINT_mming_minplayers_to_lobby;
      if ( !DVARINT_mming_minplayers_to_lobby )
      {
        v63 = "mming_minplayers_to_lobby";
LABEL_93:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v63) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v62);
    v64 = v62->current.integer;
    v65 = DVARINT_party_maxplayers;
    minLobbySize = v64;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    maxLobbySize = v65->current.integer;
    goto LABEL_99;
  }
LABEL_139:
  v84 = bdJSONSerializer::writeBeginArray(v5, "playlist_config");
  v85 = v45;
  if ( v45 > 0 )
  {
    v86 = v113;
    do
    {
      v87 = bdJSONSerializer::writeBeginObject(v5) && v84;
      v88 = bdJSONSerializer::writeBeginArray(v5, "playlist_ids") && v87;
      v89 = v86[20];
      if ( v89 > 0 )
      {
        v90 = v86;
        v91 = (unsigned int)v89;
        do
        {
          v88 &= bdJSONSerializer::writeInt32(v5, *v90++, 0);
          --v91;
        }
        while ( v91 );
      }
      v92 = bdJSONSerializer::writeEndArray(v5) & v88;
      v93 = bdJSONSerializer::writeInt32(v5, "min_slots", v86[21], 0) & v92;
      v94 = bdJSONSerializer::writeInt32(v5, "max_slots", v86[22], 0) & v93;
      v95 = bdJSONSerializer::writeInt32(v5, "num_teams", v86[23], 0) & v94;
      v96 = bdJSONSerializer::writeString(v5, "build_name_context", *((const char **)v86 + 13));
      v97 = v86[24];
      v98 = v96 & v95;
      if ( v97 > 0 )
        v98 &= bdJSONSerializer::writeInt32(v5, "squad_size", v97, 0);
      v84 = bdJSONSerializer::writeEndObject(v5) & v98;
      v86 += 28;
      --v85;
    }
    while ( v85 );
  }
  return v84 & bdJSONSerializer::writeEndArray(v5);
}

/*
==============
Playlist_WritePlaylistDedicatedServerJSON
==============
*/
bool Playlist_WritePlaylistDedicatedServerJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  __int64 v4; 
  bool v6; 
  const dvar_t *v7; 
  const char *v8; 
  bool Bool_Internal_DebugName; 
  bdJSONSerializer *v10; 
  bool v11; 
  char *context; 
  __int64 v13; 
  bool v14; 

  v4 = playlistId;
  v6 = bdJSONSerializer::writeBeginObject(jsonSerializer, "dedicated_server");
  if ( isPrivateMatch || OnlineTournament_RequestedMatchmakingBracket() || Live_IsInGameBattlesGame() )
  {
    v8 = "required";
    goto LABEL_13;
  }
  v7 = DVARBOOL_online_matchmaking_no_dedi_search;
  if ( !DVARBOOL_online_matchmaking_no_dedi_search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_no_dedi_search") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = "not_needed";
LABEL_13:
    v10 = jsonSerializer;
    goto LABEL_14;
  }
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_dedi_required, "online_matchmaking_dedi_required");
  v10 = jsonSerializer;
  if ( Bool_Internal_DebugName )
    v8 = "required";
  else
    v8 = "best_effort";
LABEL_14:
  v11 = bdJSONSerializer::writeString(v10, "request_level", v8) && v6;
  if ( (int)v4 >= 129 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2446, ASSERT_TYPE_ASSERT, "(playlistId < 129)", (const char *)&queryFormat, "playlistId < MAX_PLAYLISTS") )
    __debugbreak();
  context = playlists[v4].context;
  v13 = -1i64;
  do
    ++v13;
  while ( context[v13] );
  if ( !(_DWORD)v13 )
    context = (char *)Com_GameMode_GetActiveGameModeStr();
  v14 = bdJSONSerializer::writeString(jsonSerializer, "build_name_context", context) && v11;
  return v14 & bdJSONSerializer::writeEndObject(jsonSerializer);
}

/*
==============
Playlist_WritePlaylistLobbySlotsJSON
==============
*/
bool Playlist_WritePlaylistLobbySlotsJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  bool v5; 
  int ControllerFromClient; 
  unsigned int CurrentPlayerCount; 
  bool v8; 
  bool v9; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  unsigned int unsignedInt; 
  bool v14; 
  const dvar_t *v15; 
  bool v16; 
  bool v17; 

  v5 = bdJSONSerializer::writeBeginObject(jsonSerializer, "lobby_slots");
  if ( Live_IsInGameBattlesGame() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    CurrentPlayerCount = GameBattles_GetCurrentPlayerCount(ControllerFromClient);
    v8 = bdJSONSerializer::writeUInt32(jsonSerializer, "min", 1u, 0) && v5;
    v9 = bdJSONSerializer::writeUInt32(jsonSerializer, "max", CurrentPlayerCount, 0) && v8;
    return v9 & bdJSONSerializer::writeEndObject(jsonSerializer);
  }
  else
  {
    if ( isPrivateMatch )
    {
      unsignedInt = 1;
    }
    else
    {
      v11 = DVARINT_mming_minplayers_to_lobby;
      if ( !DVARINT_mming_minplayers_to_lobby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mming_minplayers_to_lobby") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.integer == -1 )
      {
        v12 = DVARINT_party_minplayers;
        if ( !DVARINT_party_minplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minplayers") )
          __debugbreak();
      }
      else
      {
        v12 = DVARINT_mming_minplayers_to_lobby;
        if ( !DVARINT_mming_minplayers_to_lobby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mming_minplayers_to_lobby") )
          __debugbreak();
      }
      Dvar_CheckFrontendServerThread(v12);
      unsignedInt = v12->current.unsignedInt;
    }
    v14 = bdJSONSerializer::writeUInt32(jsonSerializer, "min", unsignedInt, 0);
    v15 = DVARINT_party_maxplayers;
    v16 = v14 && v5;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v17 = bdJSONSerializer::writeUInt32(jsonSerializer, "max", v15->current.unsignedInt, 0) && v16;
    return v17 & bdJSONSerializer::writeEndObject(jsonSerializer);
  }
}

/*
==============
Playlist_WritePlaylistMapsJSON
==============
*/
bool Playlist_WritePlaylistMapsJSON(const int playlistId, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  __int64 v4; 
  char v6; 
  playlistInfo *v7; 
  unsigned __int16 numEntries; 
  int v9; 
  signed int v10; 
  playlistEntry *Entry; 
  __int64 mapindex; 
  const char *v13; 
  const mapInfo *MapInfoForLoadName; 
  const mapInfo *v15; 
  unsigned int mapPack; 
  const char *ContentPackName; 
  const char *v18; 
  char *fmt; 
  __int64 v21; 
  char _Buffer[256]; 

  v4 = playlistId;
  v6 = bdJSONSerializer::writeBeginArray(jsonSerializer, "playlist_map_packs");
  if ( isPrivateMatch )
    goto LABEL_17;
  v7 = &playlists[v4];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3429, ASSERT_TYPE_ASSERT, "(playlist)", (const char *)&queryFormat, "playlist") )
    __debugbreak();
  numEntries = v7->numEntries;
  if ( !numEntries )
  {
    Com_PrintError(25, "We're attempting to matchmaking on a playlist with no entries playlistId = %d. Performing a com_error.\n", (unsigned int)v4);
    LODWORD(v21) = v7->numEntries;
    LODWORD(fmt) = playlist_versionNum;
    j_sprintf_s(_Buffer, 0x100ui64, "Playlistid %d Playlistversion %d num entries: %d", (unsigned int)v4, fmt, v21);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, _Buffer);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/LIVEERROR");
    numEntries = v7->numEntries;
  }
  v9 = 0;
  v10 = 0;
  if ( !numEntries )
    goto LABEL_17;
  do
  {
    Entry = Playlist_GetEntry(v4, v10);
    if ( Entry )
    {
      mapindex = Entry->mapindex;
      if ( (unsigned int)mapindex >= maps.numEntries )
        v13 = NULL;
      else
        v13 = maps.name[mapindex];
      MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(v13);
      v15 = MapInfoForLoadName;
      if ( MapInfoForLoadName )
      {
        mapPack = MapInfoForLoadName->mapPack;
        if ( !_bittest(&v9, mapPack) )
        {
          ContentPackName = OnlineMatchmakerOmniscient::GetContentPackName(2 << mapPack);
          v6 &= bdJSONSerializer::writeString(jsonSerializer, ContentPackName);
          v9 |= 1 << v15->mapPack;
        }
      }
    }
    ++v10;
  }
  while ( v10 < v7->numEntries );
  if ( !v9 )
  {
LABEL_17:
    v18 = OnlineMatchmakerOmniscient::GetContentPackName(2);
    v6 &= bdJSONSerializer::writeString(jsonSerializer, v18);
  }
  return v6 & bdJSONSerializer::writeEndArray(jsonSerializer);
}

/*
==============
Playlist_WritePlaylistTeamInfoJSON
==============
*/
bool Playlist_WritePlaylistTeamInfoJSON(const int playlistId, const int category, const bool isPrivateMatch, bdJSONSerializer *jsonSerializer)
{
  __int64 v5; 
  bdJSONSerializer *v6; 
  unsigned int v8; 
  signed int v9; 
  playlistInfo *v10; 
  unsigned __int16 numEntries; 
  signed int v12; 
  __int64 gametype; 
  playlistGametype *v14; 
  int teamCount; 
  bool v16; 
  unsigned __int8 v17; 
  __int64 v18; 
  unsigned __int8 *p_num; 
  __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned int v23; 
  unsigned __int8 v24; 
  bool v25; 
  char v26; 
  __int64 v28; 
  unsigned __int8 v30; 
  __int64 v31; 
  unsigned __int8 *v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  unsigned __int8 v36; 
  char *fmt; 
  DDLState *high_state; 
  unsigned __int64 *high_filter_out; 
  char v40; 
  unsigned __int64 v42; 
  unsigned __int64 filter_out; 
  bdJSONSerializer *v44; 
  DDLState v45; 
  DDLState state; 
  DDLContext buffer; 
  char _Buffer[256]; 

  v5 = 0i64;
  v44 = jsonSerializer;
  v6 = jsonSerializer;
  v8 = category;
  v9 = 1;
  if ( !isPrivateMatch )
  {
    v10 = &playlists[playlistId];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3366, ASSERT_TYPE_ASSERT, "(playlist)", (const char *)&queryFormat, "playlist") )
      __debugbreak();
    numEntries = v10->numEntries;
    if ( !numEntries )
    {
      Com_PrintError(25, "We're attempting to matchmaking on a playlist with no entries playlistId = %d. Performing a com_error.\n", (unsigned int)playlistId);
      LODWORD(high_state) = v10->numEntries;
      LODWORD(fmt) = playlist_versionNum;
      j_sprintf_s(_Buffer, 0x100ui64, "Playlistid %d Playlistversion %d num entries: %d", (unsigned int)playlistId, fmt, high_state);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, _Buffer);
      Live_ThrowError(ERR_DROP, "XBOXLIVE/LIVEERROR");
      numEntries = v10->numEntries;
    }
    v12 = 0;
    if ( numEntries )
    {
      do
      {
        gametype = Playlist_GetEntry(playlistId, v12)->gametype;
        if ( (unsigned int)gametype >= 0x40 )
        {
          LODWORD(high_filter_out) = 64;
          LODWORD(high_state) = gametype;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 64 )", "index doesn't index MAX_PLAYLIST_GAMETYPES\n\t%i not in [0, %i)", high_state, high_filter_out) )
            __debugbreak();
        }
        v14 = &gametypes[gametype];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3383, ASSERT_TYPE_ASSERT, "(gametypeEntry)", (const char *)&queryFormat, "gametypeEntry") )
          __debugbreak();
        if ( v14->teamSize <= 2 )
        {
          teamCount = v14->teamCount;
          if ( v9 > teamCount )
            teamCount = v9;
          v9 = teamCount;
        }
        else
        {
          v9 = 1;
        }
        ++v12;
      }
      while ( v12 < v10->numEntries );
      v6 = v44;
      v5 = 0i64;
    }
    v8 = category;
  }
  v16 = bdJSONSerializer::writeBeginObject(v6, "team_balance");
  v40 = v16 & bdJSONSerializer::writeUInt32(v6, "num_teams", v9, 0);
  if ( (unsigned int)playlistId >= 0x81 )
  {
    LODWORD(high_filter_out) = 129;
    LODWORD(high_state) = playlistId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
      __debugbreak();
  }
  if ( !LiveStorage_DoWeHavePlaylists() )
    goto LABEL_37;
  if ( v8 < 0x1A && (categories[v8].flags & 1) != 0 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    state.offset = 0;
    v17 = categories[v8].numEntries;
    state.arrayIndex = -1;
    v45.isValid = 0;
    v45.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+110h+state.member], xmm0 }
    v45.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rsp+210h+var_1B0.member], xmm0 }
    if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &state, v8, &filter_out, &v45, &v42) )
      goto LABEL_37;
    v18 = v17;
    if ( !v17 )
      goto LABEL_37;
    p_num = &categories[v8].entries[0].num;
    v20 = 0i64;
    v21 = v42;
    v22 = filter_out;
    while ( 1 )
    {
      v23 = *p_num;
      v24 = v23 >= 0x41 ? _bittest64((const __int64 *)&v21, (unsigned __int8)(v23 - 65)) : _bittest64((const __int64 *)&v22, (unsigned __int8)(v23 - 1));
      if ( v24 && Playlist_ContainsGameType(*p_num, "br") )
        break;
      ++v20;
      p_num += 8;
      if ( v20 >= v18 )
        goto LABEL_37;
    }
    v8 = category;
  }
  else if ( !Playlist_ContainsGameType(playlistId, "br") )
  {
    goto LABEL_37;
  }
  if ( (unsigned int)playlistId >= 0x81 )
  {
    LODWORD(high_filter_out) = 129;
    LODWORD(high_state) = playlistId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1919, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", high_state, high_filter_out) )
      __debugbreak();
  }
  if ( LiveStorage_DoWeHavePlaylists() )
  {
    if ( v8 < 0x1A && (categories[v8].flags & 1) != 0 )
    {
      v28 = v8;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v45.isValid = 0;
      v45.offset = 0;
      v30 = categories[v28].numEntries;
      v45.arrayIndex = -1;
      state.isValid = 0;
      __asm { vmovdqu xmmword ptr [rsp+210h+var_1B0.member], xmm0 }
      state.offset = 0;
      state.arrayIndex = -1;
      __asm { vmovdqu xmmword ptr [rbp+110h+state.member], xmm0 }
      if ( !Playlist_GetFiltersForCategory(LOCAL_CLIENT_0, &buffer, &v45, v8, &v42, &state, &filter_out) )
        goto LABEL_61;
      v31 = v30;
      if ( !v30 )
        goto LABEL_61;
      v32 = &categories[v28].entries[0].num;
      v33 = filter_out;
      v34 = v42;
      while ( 1 )
      {
        v35 = *v32;
        v36 = v35 >= 0x41 ? _bittest64((const __int64 *)&v33, (unsigned __int8)(v35 - 65)) : _bittest64((const __int64 *)&v34, (unsigned __int8)(v35 - 1));
        if ( v36 && !Playlist_ContainsOnlyGameType(*v32, "br") )
          break;
        ++v5;
        v32 += 8;
        if ( v5 >= v31 )
          goto LABEL_61;
      }
    }
    else if ( Playlist_ContainsOnlyGameType(playlistId, "br") )
    {
      goto LABEL_61;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3407, ASSERT_TYPE_ASSERT, "(!(searchContainsBR && Playlist_AnyPlaylistInCategoryDoesNotMatchGameType( playlistId, category, \"br\" )))", "%s\n\tDemonWare currently does not support searches with mixed 'lock_squad' settings, so a search must be all BR or no BR", "!(searchContainsBR && Playlist_AnyPlaylistInCategoryDoesNotMatchGameType( playlistId, category, \"br\" ))") )
      __debugbreak();
  }
LABEL_61:
  if ( !Party_GetSquadAutofill() )
  {
    v25 = 1;
    goto LABEL_38;
  }
LABEL_37:
  v25 = 0;
LABEL_38:
  v26 = v40 & bdJSONSerializer::writeBoolean(v44, "lock_squad", v25);
  return v26 & bdJSONSerializer::writeEndObject(v44);
}

