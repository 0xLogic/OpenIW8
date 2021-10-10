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
  *(_OWORD *)&state.member = _XMM0;
  v21.arrayIndex = -1;
  *(_OWORD *)&v21.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
  v21.arrayIndex = -1;
  *(_OWORD *)&v21.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
  v18.arrayIndex = -1;
  *(_OWORD *)&v18.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
  v18.arrayIndex = -1;
  *(_OWORD *)&v18.member = _XMM0;
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
  *(_OWORD *)&state.member = _XMM0;
  v18.arrayIndex = -1;
  *(_OWORD *)&v18.member = _XMM0;
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
unsigned __int64 Playlist_ChooseEntry(const int lastSelection, bool markEntryPlayed)
{
  const dvar_t *v2; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  __int64 integer; 
  int v8; 
  int v9; 
  int v10; 
  float v11; 
  unsigned __int16 numEntries; 
  signed int v13; 
  __int64 v14; 
  playlistEntry *Entry; 
  double MapWeight; 
  int v17; 
  unsigned __int16 v18; 
  const dvar_t *v19; 
  int PlaylistIdForNum; 
  unsigned int v21; 
  __int64 v22; 
  int v24; 
  int v25; 
  int flags; 
  __int64 v27; 
  playlistEntry *v28; 
  playlistEntry *v29; 
  __int64 mapindex; 
  const char *v31; 
  PartyData *PartyData; 
  char *fmt; 
  __int64 v34; 
  __int64 v35; 
  int v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  playlistEntry *v42; 
  int v43[20]; 

  v2 = DVARBOOL_online_matchmaking_use_lobby_affinity;
  if ( !DVARBOOL_online_matchmaking_use_lobby_affinity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_use_lobby_affinity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v5 = DVARINT_playlistID;
    if ( !DVARINT_playlistID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistID") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = DVARBOOL_online_matchmaking_use_map_weights;
    integer = v5->current.integer;
    v8 = -1;
    if ( !DVARBOOL_online_matchmaking_use_map_weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_use_map_weights") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled )
      goto LABEL_26;
    v9 = 0;
    v10 = 20;
    v11 = 0.0;
    numEntries = playlists[integer].numEntries;
    if ( numEntries > 0x14u )
    {
      LODWORD(fmt) = 20;
      Com_PrintError(25, "Playlist Id %u contains %u entries which is more then can be handled by playlist weight calculations which has a max of %u.\n", (unsigned int)integer, numEntries, fmt);
      numEntries = playlists[integer].numEntries;
    }
    v13 = 0;
    if ( numEntries < 0x14u )
      v10 = numEntries;
    if ( !v10 )
      goto LABEL_26;
    v14 = 0i64;
    do
    {
      Entry = Playlist_GetEntry(integer, v13);
      MapWeight = OnlineMatchmakerOmniscient::GetMapWeight(&OnlineMatchmakerOmniscient::ms_instance, Entry->mapindex);
      if ( *(float *)&MapWeight <= v11 )
      {
        if ( *(float *)&MapWeight == v11 )
        {
          ++v9;
          v43[v14++] = v13;
        }
      }
      else
      {
        v11 = *(float *)&MapWeight;
        v43[0] = v13;
        v9 = 1;
        v14 = 1i64;
      }
      ++v13;
    }
    while ( v13 < v10 );
    if ( !v9 )
    {
LABEL_26:
      v17 = s_randSeed_0;
      goto LABEL_27;
    }
    s_randSeed_0 = 1103515245 * s_randSeed_0 + 12345;
    v17 = s_randSeed_0;
    v8 = v43[((s_randSeed_0 / 0x10000) & 0x7FFFi64) % v9];
    if ( v8 == -1 )
    {
LABEL_27:
      v18 = playlists[integer].numEntries;
      if ( v18 )
      {
        s_randSeed_0 = 1103515245 * v17 + 12345;
        return ((s_randSeed_0 / 0x10000) & 0x7FFFui64) % v18;
      }
    }
  }
  else
  {
    v19 = DVARINT_playlist;
    if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v19->current.integer);
    v21 = PlaylistIdForNum;
    v22 = PlaylistIdForNum;
    v39 = v22 * 992;
    if ( !playlists[v22].numEntries )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9668, 788i64, &playlists[v22]);
      return 0xFFFFFFFFi64;
    }
    v24 = Playlist_CalcTotalWeights(PlaylistIdForNum, lastSelection);
    if ( !v24 )
    {
      if ( (playlists[v22].flags & 4) != 0 )
      {
        if ( !markEntryPlayed )
          return (unsigned int)lastSelection;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE96A0, 789i64);
      }
      Playlist_ResetWeights(v21);
      v24 = Playlist_CalcTotalWeights(v21, lastSelection);
    }
    if ( v24 <= 0 )
      v24 = 1;
    v41 = v24;
    s_randSeed_0 = 1103515245 * s_randSeed_0 + 12345;
    v38 = ((s_randSeed_0 / 0x10000) & 0x7FFFi64) % v24;
    if ( v21 >= 0x81 )
    {
      LODWORD(v35) = 129;
      LODWORD(v34) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2580, ASSERT_TYPE_ASSERT, "(unsigned)( playlistId ) < (unsigned)( 129 )", "playlistId doesn't index MAX_PLAYLISTS\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    v37 = 0;
    v25 = 0;
    if ( lastSelection < 0 || lastSelection >= playlists[v22].numEntries )
      v42 = NULL;
    else
      v42 = Playlist_GetEntry(v21, lastSelection);
    flags = playlists[v22].flags;
    v8 = 0;
    v27 = v39;
    v40 = flags & 8;
    if ( *(unsigned __int16 *)((char *)&playlists[0].numEntries + v39) )
    {
      do
      {
        if ( v8 != lastSelection )
        {
          v28 = Playlist_GetEntry(v21, v8);
          v29 = v28;
          if ( !v40 && v42 && v28->mapindex == v42->mapindex )
          {
            v25 = v37;
          }
          else
          {
            mapindex = v28->mapindex;
            if ( (unsigned int)mapindex >= maps.numEntries )
              v31 = NULL;
            else
              v31 = maps.name[mapindex];
            PartyData = Lobby_GetPartyData();
            if ( PartyHost_MapIsAcceptable(PartyData, v31, v21) )
            {
              v25 = v29->remainingWeight + v37;
              v37 = v25;
              if ( v38 < v25 )
                goto LABEL_66;
            }
            else
            {
              v25 = v37;
            }
            v27 = v39;
          }
        }
        ++v8;
      }
      while ( v8 < *(unsigned __int16 *)((char *)&playlists[0].numEntries + v27) );
    }
    if ( (unsigned int)Playlist_CalcTotalWeights(v21, lastSelection) )
    {
      LODWORD(v34) = Playlist_CalcTotalWeights(v21, lastSelection);
      LODWORD(fmt) = v21;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE9430, 787i64, (unsigned int)v38, fmt, v34);
      v8 = v25;
    }
    else
    {
      v8 = 0;
    }
LABEL_66:
    if ( v8 >= *(unsigned __int16 *)((char *)&playlists[0].numEntries + v39) )
    {
      LODWORD(v34) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 2740, ASSERT_TYPE_ASSERT, "( ( itemSelected < playlists[playlistId].numEntries ) )", "( itemSelected ) = %i", v34) )
        __debugbreak();
    }
    LODWORD(v34) = v41;
    LODWORD(fmt) = v21;
    Com_DPrintf(16, "Last playlist entry we played was %i, this time it's %i for playlistId %i. We choose from a pool of %i total weight.\n", (unsigned int)lastSelection, (unsigned int)v8, fmt, v34);
    if ( markEntryPlayed )
      Playlist_MarkEntryPlayed(v21, v8);
  }
  return (unsigned int)v8;
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
  *(_OWORD *)&state.member = _XMM0;
  *(_OWORD *)&high_state.member = _XMM0;
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
  DDLState *RootState; 
  int v12; 
  int navStringCount; 
  DDLState result; 
  char *navStrings[16]; 

  v6 = category;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3718, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3719, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( CL_Mgr_GetControllerFromClient(clientNum) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 3722, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetControllerFromClient( clientNum ) >= 0)", (const char *)&queryFormat, "CL_Mgr_GetControllerFromClient( clientNum ) >= 0") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
  if ( !CL_PlayerData_GetDDLBuffer(buffer, ControllerFromClient, STATS_ONLINE, STATSGROUP_COMMON) )
    return 0;
  v10 = j_va("commonData.filteredPlaylists.%d.crc32", categories[v6].categoryLabel);
  Com_ParseNavStrings(v10, (const char **)navStrings, 16, &navStringCount);
  RootState = DDL_GetRootState(&result, buffer->def);
  v12 = navStringCount;
  *state = *RootState;
  if ( !DDL_MoveToPath(state, state, v12, (const char **)navStrings) )
    return 0;
  *crc_out = DDL_GetInt(state, buffer);
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
  *(_OWORD *)&state.member = _XMM0;
  high_state.arrayIndex = -1;
  *(_OWORD *)&high_state.member = _XMM0;
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
  char *v15; 
  char *v16; 
  int navStringCount; 
  DDLState fromState; 
  DDLState result; 
  char *navStrings[16]; 

  v11 = category;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
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
  p_categoryLabel = &categories[v11].categoryLabel;
  fromState = *DDL_GetRootState(&result, buffer->def);
  v15 = j_va("commonData.filteredPlaylists.%d.filter", *p_categoryLabel);
  Com_ParseNavStrings(v15, (const char **)navStrings, 16, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, state, navStringCount, (const char **)navStrings) )
    return 0;
  *filter_out = DDL_GetUInt64(state, buffer);
  v16 = j_va("commonData.filteredPlaylists.%d.localFilter", *p_categoryLabel);
  Com_ParseNavStrings(v16, (const char **)navStrings, 16, &navStringCount);
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
    *(_OWORD *)&state.member = _XMM0;
    *(_OWORD *)&high_state.member = _XMM0;
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
    *(_OWORD *)&state.member = _XMM0;
    high_state.isValid = 0;
    high_state.offset = 0;
    high_state.arrayIndex = -1;
    *(_OWORD *)&high_state.member = _XMM0;
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
  *(_OWORD *)&v13.member = _XMM0;
  high_state.arrayIndex = -1;
  *(_OWORD *)&high_state.member = _XMM0;
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
  const dvar_t *v75; 
  int integer; 
  int v77; 
  unsigned __int8 v78; 
  __int64 v79; 
  int v80; 
  unsigned __int8 v81; 
  char *v82; 
  const dvar_t *v83; 
  int v84; 
  int v85; 
  unsigned __int8 v86; 
  __int64 v87; 
  int v88; 
  int v89; 
  char *v90; 
  __int64 v91; 
  unsigned int kk; 
  __int64 v93; 
  __int64 v94; 
  int v95; 
  int v96; 
  int v98; 
  int v99; 
  unsigned int v100; 
  __int64 v101; 
  __int64 v102; 
  char v103; 
  char v104; 
  unsigned int mm; 
  unsigned __int16 v107; 
  __int64 v108; 
  int v109; 
  char *v110; 
  __int64 v111; 
  char *v112; 
  signed __int64 v113; 
  int v114; 
  int v115; 
  int v117; 
  int v118; 
  __int64 v119; 
  __int64 v120; 
  int v121; 
  int v122; 
  int v124; 
  int v125; 
  __int64 v126; 
  __int64 v127; 
  int v128; 
  int v129; 
  int v131; 
  int v132; 
  __int64 v133; 
  __int64 v134; 
  int v135; 
  int v136; 
  int v138; 
  int v139; 
  __int64 v140; 
  __int64 v141; 
  int v142; 
  int v143; 
  int v145; 
  int v146; 
  __int64 v147; 
  __int64 v148; 
  int v149; 
  int v150; 
  int v152; 
  int v153; 
  __int64 v154; 
  __int64 v155; 
  int v156; 
  int v157; 
  int v159; 
  int v160; 
  __int64 v161; 
  __int64 v162; 
  int v163; 
  int v164; 
  int v166; 
  int v167; 
  __int64 v168; 
  __int64 v169; 
  int v170; 
  int v171; 
  int v173; 
  int v174; 
  __int64 v175; 
  __int64 v176; 
  int v177; 
  int v178; 
  int v180; 
  int v181; 
  __int64 v182; 
  __int64 v183; 
  int v184; 
  int v185; 
  int v187; 
  int v188; 
  __int64 v189; 
  __int64 v190; 
  int v191; 
  int v192; 
  int v194; 
  int v195; 
  __int64 v196; 
  __int64 v197; 
  int v198; 
  int v199; 
  int v201; 
  int v202; 
  __int64 v203; 
  __int64 v204; 
  int v205; 
  int v206; 
  int v208; 
  int v209; 
  __int64 v210; 
  __int64 v211; 
  int v212; 
  int v213; 
  int v215; 
  int v216; 
  __int64 v217; 
  __int64 v218; 
  char v219; 
  char v220; 
  int v222; 
  __int64 v223; 
  char *v224; 
  __int64 v225; 
  int v226; 
  int v227; 
  int v229; 
  int v230; 
  __int64 v231; 
  unsigned __int16 firstEntry; 
  unsigned __int16 v233; 
  __int64 v234; 
  unsigned int v235; 
  __int64 v236; 
  __int64 v237; 
  char v238; 
  char v239; 
  int v241; 
  __int64 v242; 
  __int64 v243; 
  __int64 v244; 
  char *image; 
  unsigned int *p_requiredDLCMask; 
  __int64 v247; 
  __int64 v248; 
  int v249; 
  int v250; 
  int v252; 
  int v253; 
  int v254; 
  __int64 v255; 
  __int64 v256; 
  int v257; 
  int v258; 
  int v260; 
  int v261; 
  const char *v262; 
  __int64 v263; 
  __int64 v264; 
  int v265; 
  int v266; 
  int v268; 
  int v269; 
  __int64 v270; 
  __int64 v271; 
  int v272; 
  int v273; 
  int v275; 
  int v276; 
  __int64 v277; 
  __int64 v278; 
  int v279; 
  int v280; 
  int v282; 
  int v283; 
  __int64 v284; 
  __int64 v285; 
  int v286; 
  int v287; 
  int v289; 
  int v290; 
  __int64 v291; 
  __int64 v292; 
  int v293; 
  int v294; 
  int v296; 
  int v297; 
  __int64 v298; 
  __int64 v299; 
  int v300; 
  int v301; 
  int v303; 
  int v304; 
  __int64 v305; 
  __int64 v306; 
  int v307; 
  int v308; 
  int v310; 
  int v311; 
  const char *v312; 
  __int64 v313; 
  __int64 v314; 
  char v315; 
  char v316; 
  __int64 v318; 
  __int64 v319; 
  char v320; 
  char v321; 
  __int64 v323; 
  __int64 v324; 
  char v325; 
  char v326; 
  __int64 v328; 
  __int64 v329; 
  char v330; 
  char v331; 
  __int64 v333; 
  __int64 v334; 
  char v335; 
  char v336; 
  __int64 v338; 
  __int64 v339; 
  char v340; 
  char v341; 
  __int64 v343; 
  __int64 v344; 
  char v345; 
  char v346; 
  categoryInfo *v348; 
  unsigned int nn; 
  const char *StringSafe; 
  unsigned int v351; 
  char *v352; 
  __int64 v353; 
  __int64 v354; 
  int v355; 
  __int64 v356; 
  StringBuffer *v357; 
  const char *v358; 
  int RemainingAfterTail; 
  unsigned __int8 numEntries; 
  int v361; 
  unsigned __int8 *v362; 
  int v363; 
  unsigned __int16 *v364; 
  const char *v365; 
  const char *v366; 
  PublisherVariableManager *Instance; 
  __int64 v368; 
  __int64 v369; 
  __int64 v370; 
  int v371; 
  int v372; 
  __int64 v373; 
  __int64 v374; 
  __int64 v375; 
  __int64 v376; 
  __int64 v377; 
  __int64 v378; 
  __int64 v379; 
  __int64 v380; 
  __int64 v381; 
  __int64 v382; 
  __int64 v383; 
  char *v384; 
  __int64 v385; 
  int v386; 
  __int64 v387; 
  int v388; 
  __int64 v389; 
  int v390; 
  __int64 v391; 
  int v392; 
  __int64 v393; 
  int v394; 
  __int64 v395; 
  int v396; 
  __int64 v397; 
  int v398; 
  __int64 v399; 
  int v400; 
  __int64 v401; 
  int v402; 
  __int64 v403; 
  int v404; 
  __int64 v405; 
  int v406; 
  __int64 v407; 
  int v408; 
  __int64 v409; 
  int v410; 
  __int64 v411; 
  int v412; 
  __int64 v413; 
  int v414; 
  __int64 v415; 
  int v416; 
  __int64 v417; 
  int v418; 
  __int64 v419; 
  int v420; 
  __int64 v421; 
  int v422; 
  __int64 v423; 
  int v424; 
  __int64 v425; 
  int v426; 
  __int64 v427; 
  int v428; 
  __int64 v429; 
  int v430; 
  __int64 v431; 
  int v432; 
  __int64 v433; 
  int v434; 
  __int64 v435; 
  int v436; 
  __int64 v437; 
  int v438; 
  __int64 v439; 
  int v440; 
  __int64 v441; 
  int v442; 
  __int64 v443; 
  int v444; 
  __int64 v445; 
  unsigned int v446; 
  categoryInfo *v447; 
  __int64 v448; 
  __int64 v449; 
  int v450; 
  __int64 v451; 
  int v452; 
  __int64 v453; 
  int v454; 
  __int64 v455; 
  int v456; 
  __int64 v457; 
  int v458; 
  __int64 v459; 
  int v460; 
  __int64 v461; 
  int v462; 
  __int64 v463; 
  int v464; 
  __int64 v465; 
  int v466; 
  __int64 v467; 
  int v468; 
  __int64 v469; 
  int v470; 
  __int64 v471; 
  int v472; 
  __int64 v473; 
  int v474; 
  __int64 v475; 
  int v476; 
  __int64 v477; 
  int v478; 
  __int64 v479; 
  int v480; 
  __int64 v481; 
  int v482; 
  __int64 v483; 
  int v484; 
  __int64 v485; 
  int v486; 
  __int64 v487; 
  int v488; 
  __int64 v489; 
  int v490; 
  __int64 v491; 
  int v492; 
  __int64 v493; 
  int v494; 
  __int64 v495; 
  int v496; 
  __int64 v497; 
  unsigned int v498; 
  int v499; 
  bdJSONDeserializer *v500; 
  __int64 v501; 
  __int64 v502; 
  __int64 v503; 
  __int64 v504; 
  int v505; 
  bdJSONDeserializer v506; 
  int v507[2]; 
  unsigned int v508; 
  bdJSONDeserializer v509; 
  int v510; 
  unsigned __int64 v511; 
  bdJSONDeserializer value; 
  float v513[2]; 
  int v514[2]; 
  int v515[2]; 
  __int64 v516; 
  unsigned __int64 v517; 
  bdJSONDeserializer v518; 
  __int64 v519; 
  bdJSONDeserializer v520; 
  char v521[8]; 
  char src[64]; 
  char v523[64]; 
  char _Buffer; 
  char Src[3]; 
  char Str1[10]; 
  char v527; 
  char v528[6]; 
  char v529[2]; 
  char v530[14]; 
  char v531; 
  char key[256]; 
  char v533[512]; 
  char dest[3072]; 

  v519 = -2i64;
  v2 = 0;
  v508 = 0;
  v505 = 0;
  v510 = 0;
  numGametypes = -1;
  memset_0(&playlistStringBuffer, 0, sizeof(playlistStringBuffer));
  globalRules.rules = (char *)PlaylistStringBuffer_GetTail();
  memset_0(&maps, 0, sizeof(maps));
  memset_0(dest, 0, sizeof(dest));
  s_playlistEntryCount = 0;
  s_dedicatedServersRequired = 0;
  bdJSONDeserializer::bdJSONDeserializer(&v518);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::parse(&v518, buffer);
  if ( bdJSONDeserializer::getObject(&v518, "global_dvars", &value) )
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
    *(_QWORD *)&v520.m_type = "dvars";
    v520.m_ptr = "xb3_dvars";
    v520.m_end = "dev_dvars";
    *(_QWORD *)&v520.m_isFloatingPoint = 0i64;
    v5 = 0i64;
    v6 = "dvars";
    do
    {
      if ( bdJSONDeserializer::hasKey(&value, v6) )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v506);
        bdJSONDeserializer::getObject(&value, v6, &v506);
        for ( i = 0; i < v506.m_count; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v509);
          bdJSONDeserializer::getFieldByIndex(&v506, i, key, 0x100u, &v509);
          if ( bdJSONDeserializer::isString(&v509) )
          {
            if ( !bdJSONDeserializer::getString(&v509, v533, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 541, ASSERT_TYPE_ASSERT, "(ok && \"Global Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Global Dvar string too large.\"") )
              __debugbreak();
            j_sprintf(&_Buffer, "%s \"%s\";", key, v533);
          }
          else if ( bdJSONDeserializer::convertToString(&v509, v533, 0x200u) )
          {
            j_sprintf(&_Buffer, "%s %s;", key, v533);
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
          bdJSONDeserializer::~bdJSONDeserializer(&v509);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v506);
      }
      ++v5;
      v6 = (const char *)*((_QWORD *)&v520.m_type + v5);
    }
    while ( v6 );
  }
  if ( bdJSONDeserializer::getObject(&v518, "system", &value) )
  {
    if ( bdJSONDeserializer::hasKey(&value, "version") )
      bdJSONDeserializer::getUInt32(&value, "version", &playlist_versionNum);
    if ( bdJSONDeserializer::hasKey(&value, "flags") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v509);
      bdJSONDeserializer::getArray(&value, "flags", &v509);
      for ( j = 0; j < v509.m_count; ++j )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v520);
        bdJSONDeserializer::getElementByIndex(&v509, j, &v520);
        bdJSONDeserializer::getString(&v520, v523, 0x40u);
        v11 = 0x7FFFFFFFi64;
        v12 = 0i64;
        do
        {
          v13 = v523[v12];
          v14 = aDorestart[v12++];
          if ( !v11-- )
            break;
          if ( v13 != v14 )
            goto LABEL_35;
        }
        while ( v13 );
        globalRules.crc32Changed = 1;
LABEL_35:
        bdJSONDeserializer::~bdJSONDeserializer(&v520);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v509);
    }
  }
  Array = bdJSONDeserializer::getArray(&v518, "gametypes", &value);
  v516 = 2i64;
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
      bdJSONDeserializer::bdJSONDeserializer(&v506);
      bdJSONDeserializer::getElementByIndex(&value, k, &v506);
      if ( bdJSONDeserializer::hasKey(&v506, "crc32") )
      {
        bdJSONDeserializer::getUInt32(&v506, "crc32", &gametypes[numGametypes].crc32);
        if ( playist_initialParse )
        {
          v23 = numGametypes;
          if ( v22 != gametypes[v23].crc32 )
            gametypes[v23].crc32Changed = 1;
        }
      }
      if ( bdJSONDeserializer::hasKey(&v506, "gametype") )
        bdJSONDeserializer::getString(&v506, "gametype", gametypes[numGametypes].internalName, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v506, (const char *const)&stru_143C9A1A4) )
      {
        bdJSONDeserializer::getString(&v506, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
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
          v507[0] = 0;
          if ( v28 < 0 )
          {
            if ( (v28 & 0xE0) == 0xC0 )
            {
              if ( (v24[1] & 0x7F | ((unsigned __int8)(v28 & 0x1F) << 6)) < 0x80u )
                break;
              v507[0] = 2;
              v29 = 2;
            }
            else if ( (v28 & 0xF0) == 0xE0 )
            {
              v30 = v24[2] & 0x7F | ((v24[1] & 0x7F | ((v28 & 0xF) << 6)) << 6);
              if ( v30 - 2048 > 0xCFFF && v30 < 0xE000 )
                break;
              v507[0] = 3;
              v29 = 3;
            }
            else
            {
              if ( (v28 & 0xF8) != 0xF0 || (((v24[2] & 0x7F | ((v24[1] & 0x7F | ((v28 & 7) << 6)) << 6)) << 6) | v24[3] & 0x7Fu) - 0x10000 > 0xFFFFE )
                break;
              v507[0] = 4;
              v29 = 4;
            }
          }
          else
          {
            v29 = 1;
            v507[0] = 1;
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
      if ( bdJSONDeserializer::hasKey(&v506, "script") )
        bdJSONDeserializer::getString(&v506, "script", gametypes[numGametypes].scriptName, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v506, "teamCount") )
        bdJSONDeserializer::getInt32(&v506, "teamCount", &gametypes[numGametypes].teamCount);
      if ( bdJSONDeserializer::hasKey(&v506, "teamSize") )
        bdJSONDeserializer::getInt32(&v506, "teamSize", &gametypes[numGametypes].teamSize);
      if ( bdJSONDeserializer::hasKey(&v506, "flags") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v509);
        bdJSONDeserializer::getArray(&v506, "flags", &v509);
        for ( n = 0; n < v509.m_count; ++n )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v520);
          bdJSONDeserializer::getElementByIndex(&v509, n, &v520);
          bdJSONDeserializer::getString(&v520, v523, 0x40u);
          v35 = 0x7FFFFFFFi64;
          v36 = 0i64;
          while ( 1 )
          {
            v37 = (unsigned __int8)v523[v36];
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
            v45 = (unsigned __int8)v523[v44];
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
          bdJSONDeserializer::~bdJSONDeserializer(&v520);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v509);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "dvars") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v520);
        if ( bdJSONDeserializer::getObject(&v506, "dvars", &v520) )
        {
          for ( ii = 0; ii < v520.m_count; ++ii )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v509);
            bdJSONDeserializer::getFieldByIndex(&v520, ii, key, 0x100u, &v509);
            if ( bdJSONDeserializer::isString(&v509) )
            {
              if ( !bdJSONDeserializer::getString(&v509, v533, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 688, ASSERT_TYPE_ASSERT, "(ok && \"Gametypes Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Gametypes Dvar string too large.\"") )
                __debugbreak();
              j_sprintf(&_Buffer, "%s \"%s\";", key, v533);
            }
            else if ( bdJSONDeserializer::convertToString(&v509, v533, 0x200u) )
            {
              j_sprintf(&_Buffer, "%s %s;", key, v533);
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
            bdJSONDeserializer::~bdJSONDeserializer(&v509);
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v520);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "recipe") )
      {
        gametypes[numGametypes].hasRecipe = 1;
        if ( bdJSONDeserializer::hasKey(&v506, "recipestart") )
          bdJSONDeserializer::getInt32(&v506, "recipestart", &gametypes[numGametypes].recipe_offset);
        if ( bdJSONDeserializer::hasKey(&v506, "recipesize") )
          bdJSONDeserializer::getInt32(&v506, "recipesize", &gametypes[numGametypes].recipe_size);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v506);
    }
  }
  v53 = playlists;
  if ( bdJSONDeserializer::getArray(&v518, "playlists", &value) )
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
    for ( LODWORD(v511) = 0; v55 < value.m_count; LODWORD(v511) = v55 )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v506);
      bdJSONDeserializer::getElementByIndex(&value, v55, &v506);
      bdJSONDeserializer::getInt32(&v506, "playlist", &v505);
      if ( (unsigned int)v505 >= 0x81 )
      {
        LODWORD(v502) = 129;
        LODWORD(v501) = v505;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 741, ASSERT_TYPE_ASSERT, "(unsigned)( playlistNum ) < (unsigned)( ( sizeof( *array_counter( playlists ) ) + 0 ) )", "playlistNum doesn't index ARRAY_COUNT( playlists )\n\t%i not in [0, %i)", v501, v502) )
          __debugbreak();
      }
      v56 = v505;
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
      v60 = v505;
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
      if ( bdJSONDeserializer::hasKey(&v506, "crc32") )
      {
        bdJSONDeserializer::getUInt32(&v506, "crc32", &playlists[v505].crc32);
        if ( playist_initialParse )
        {
          v62 = v505;
          if ( v61 != playlists[v62].crc32 )
            playlists[v62].crc32Changed = 1;
        }
      }
      if ( bdJSONDeserializer::hasKey(&v506, (const char *const)&stru_143C9A1A4) )
      {
        bdJSONDeserializer::getString(&v506, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
        if ( _Buffer == 35 )
          v63 = Src;
        else
          v63 = (char *)UI_SafeTranslateString(&_Buffer);
        v64 = 128;
        v65 = &playlists[v505];
        v66 = 124;
        while ( 1 )
        {
          v67 = *v63;
          if ( !*v63 )
            break;
          v507[0] = 0;
          if ( v67 < 0 )
          {
            if ( (v67 & 0xE0) == 0xC0 )
            {
              if ( (((v67 & 0x1F) << 6) | v63[1] & 0x7Fu) < 0x80 )
                break;
              v68 = 2;
              v507[0] = 2;
            }
            else if ( (v67 & 0xF0) == 0xE0 )
            {
              v69 = v63[2] & 0x7F | ((((v67 & 0xF) << 6) | v63[1] & 0x7F) << 6);
              if ( v69 - 2048 > 0xCFFF && v69 < 0xE000 )
                break;
              v507[0] = 3;
              v68 = 3;
            }
            else
            {
              if ( (v67 & 0xF8) != 0xF0 || (((v63[2] & 0x7F | ((((v67 & 7) << 6) | v63[1] & 0x7F) << 6)) << 6) | v63[3] & 0x7Fu) - 0x10000 > 0xFFFFE )
                break;
              v507[0] = 4;
              v68 = 4;
            }
          }
          else
          {
            v68 = 1;
            v507[0] = 1;
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
      if ( bdJSONDeserializer::hasKey(&v506, "description") )
      {
        bdJSONDeserializer::getString(&v506, "description", &_Buffer, 0x400u);
        if ( _Buffer == 35 )
          v73 = Src;
        else
          v73 = UI_SafeTranslateString(&_Buffer);
        Core_strcpy(playlists[v505].description, 0x200ui64, v73);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "image") )
        bdJSONDeserializer::getString(&v506, "image", playlists[v505].image, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v506, "smallImage") )
        bdJSONDeserializer::getString(&v506, "smallImage", playlists[v505].smallImage, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v506, "featuredImage") )
        bdJSONDeserializer::getString(&v506, "featuredImage", playlists[v505].featuredImage, 0x40u);
      if ( bdJSONDeserializer::hasKey(&v506, "video") )
        bdJSONDeserializer::getString(&v506, "video", playlists[v505].video, 0x20u);
      if ( bdJSONDeserializer::hasKey(&v506, "context") )
        bdJSONDeserializer::getString(&v506, "context", playlists[v505].context, 0x10u);
      if ( bdJSONDeserializer::hasKey(&v506, "dc_restrict") )
        bdJSONDeserializer::getString(&v506, "dc_restrict", playlists[v505].dc_restrict, 0x20u);
      if ( bdJSONDeserializer::hasKey(&v506, "dvars") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v520);
        if ( bdJSONDeserializer::getObject(&v506, "dvars", &v520) )
        {
          for ( jj = 0; jj < v520.m_count; ++jj )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v509);
            bdJSONDeserializer::getFieldByIndex(&v520, jj, key, 0x100u, &v509);
            if ( !bdJSONDeserializer::isNumber(&v509) )
            {
              if ( bdJSONDeserializer::isString(&v509) )
              {
                if ( !bdJSONDeserializer::getString(&v509, v533, 0x200u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 961, ASSERT_TYPE_ASSERT, "(ok && \"Playlist Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Playlist Dvar string too large.\"") )
                  __debugbreak();
                j_sprintf(&_Buffer, "%s \"%s\";", key, v533);
              }
              goto LABEL_276;
            }
            if ( bdJSONDeserializer::isFloatingPoint(&v509) )
            {
              bdJSONDeserializer::getFloat32(&v509, v513);
              j_sprintf(&_Buffer, "%s %f;", key, v513[0]);
              goto LABEL_276;
            }
            bdJSONDeserializer::getInt32(&v509, v514);
            j_sprintf(&_Buffer, "%s %d;", key, (unsigned int)v514[0]);
            if ( !strncmp(&_Buffer, "set ", 4ui64) )
            {
              if ( !strncmp(Str1, "LLNLRTQRPO", 0xAui64) )
              {
                v75 = DCONST_DVARINT_online_force_min_lobby_size;
                if ( !DCONST_DVARINT_online_force_min_lobby_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_force_min_lobby_size") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v75);
                integer = v75->current.integer;
                if ( integer )
                {
                  if ( integer < 0 || (unsigned int)integer > 0xFF )
                    goto LABEL_211;
                }
                else
                {
                  if ( (unsigned __int8)(v528[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 886, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                    __debugbreak();
                  integer = atoi(v528);
                  if ( integer < 0 || (unsigned int)integer > 0xFF )
                  {
LABEL_211:
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
                      __debugbreak();
                  }
                }
                playlists[v505].minLobbySize = integer;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "OOTQKOTRM", 9ui64) )
              {
                if ( (unsigned __int8)(v527 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 893, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v77 = atoi(&v527);
                v78 = v77;
                if ( (v77 < 0 || (unsigned int)v77 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v77, "signed", v77) )
                  __debugbreak();
                v79 = v505;
                playlists[v79].maxLobbySize = v78;
                if ( (v78 & 1) != 0 )
                  playlists[v79].maxLobbySize = v78 + 1;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "RRNTNNKNP", 9ui64) )
              {
                if ( (unsigned __int8)(v527 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 903, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v80 = atoi(&v527);
                v81 = v80;
                if ( (v80 < 0 || (unsigned int)v80 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v80, "signed", v80) )
                  __debugbreak();
                playlists[v505].maxSquadSize = v81;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "LRSSMMRMLM", 0xAui64) )
              {
                if ( (unsigned __int8)(v528[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 909, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v82 = v528;
LABEL_270:
                v89 = atoi(v82);
                playlists[v505].dedicatedServerRequired = v89 != 0;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_minplayers", 0x10ui64) )
              {
                v83 = DCONST_DVARINT_online_force_min_lobby_size;
                if ( !DCONST_DVARINT_online_force_min_lobby_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_force_min_lobby_size") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v83);
                v84 = v83->current.integer;
                if ( !v84 )
                {
                  if ( (unsigned __int8)(v529[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 926, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                    __debugbreak();
                  v84 = atoi(v529);
                }
                playlists[v505].minLobbySize = truncate_cast<unsigned char,int>(v84);
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_maxplayers", 0x10ui64) )
              {
                if ( (unsigned __int8)(v529[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 933, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v85 = atoi(v529);
                v86 = truncate_cast<unsigned char,int>(v85);
                v87 = v505;
                playlists[v87].maxLobbySize = v86;
                if ( (v86 & 1) != 0 )
                  playlists[v87].maxLobbySize = v86 + 1;
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "party_maxSquadSize", 0x12ui64) )
              {
                if ( (unsigned __int8)(v530[0] - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 943, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v88 = atoi(v530);
                playlists[v505].maxSquadSize = truncate_cast<unsigned char,int>(v88);
                goto LABEL_276;
              }
              if ( !strncmp(Str1, "online_matchmaking_dedi_required", 0x20ui64) )
              {
                if ( (unsigned __int8)(v531 - 48) > 9u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 949, ASSERT_TYPE_ASSERT, "(*rule_value >= '0' && *rule_value <= '9')", (const char *)&queryFormat, "*rule_value >= '0' && *rule_value <= '9'") )
                  __debugbreak();
                v82 = &v531;
                goto LABEL_270;
              }
            }
LABEL_276:
            v90 = playlists[v505].rules - 1;
            do
              ++v90;
            while ( *v90 );
            strcpy(v90, &_Buffer);
            v91 = -1i64;
            do
              ++v91;
            while ( Src[v91 - 1] );
            PlaylistStringBuffer_MoveTail(v91);
            bdJSONDeserializer::~bdJSONDeserializer(&v509);
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v520);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "dlc") )
        bdJSONDeserializer::getUInt32(&v506, "dlc", &playlists[v505].requiredDLCMask);
      if ( bdJSONDeserializer::hasKey(&v506, "flags") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v520);
        bdJSONDeserializer::getArray(&v506, "flags", &v520);
        for ( kk = 0; kk < v520.m_count; ++kk )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v509);
          bdJSONDeserializer::getElementByIndex(&v520, kk, &v509);
          bdJSONDeserializer::getString(&v509, src, 0x40u);
          v93 = 0x7FFFFFFFi64;
          v94 = 0i64;
          while ( 1 )
          {
            v95 = (unsigned __int8)src[v94];
            v96 = (unsigned __int8)aNojip[v94++];
            if ( !v93-- )
            {
LABEL_295:
              playlists[v505].flags |= 1u;
              goto LABEL_296;
            }
            if ( v95 != v96 )
            {
              v98 = v95 + 32;
              if ( (unsigned int)(v95 - 65) > 0x19 )
                v98 = v95;
              v95 = v98;
              v99 = v96 + 32;
              if ( (unsigned int)(v96 - 65) > 0x19 )
                v99 = v96;
              if ( v95 != v99 )
                break;
            }
            if ( !v95 )
              goto LABEL_295;
          }
          v119 = 0x7FFFFFFFi64;
          v120 = 0i64;
          while ( 1 )
          {
            v121 = (unsigned __int8)src[v120];
            v122 = (unsigned __int8)aNolooping[v120++];
            if ( !v119-- )
            {
LABEL_363:
              playlists[v505].flags |= 4u;
              goto LABEL_296;
            }
            if ( v121 != v122 )
            {
              v124 = v121 + 32;
              if ( (unsigned int)(v121 - 65) > 0x19 )
                v124 = v121;
              v121 = v124;
              v125 = v122 + 32;
              if ( (unsigned int)(v122 - 65) > 0x19 )
                v125 = v122;
              if ( v121 != v125 )
                break;
            }
            if ( !v121 )
              goto LABEL_363;
          }
          v126 = 0x7FFFFFFFi64;
          v127 = 0i64;
          while ( 1 )
          {
            v128 = (unsigned __int8)src[v127];
            v129 = (unsigned __int8)aAllowdupes[v127++];
            if ( !v126-- )
            {
LABEL_373:
              playlists[v505].flags |= 8u;
              goto LABEL_296;
            }
            if ( v128 != v129 )
            {
              v131 = v128 + 32;
              if ( (unsigned int)(v128 - 65) > 0x19 )
                v131 = v128;
              v128 = v131;
              v132 = v129 + 32;
              if ( (unsigned int)(v129 - 65) > 0x19 )
                v132 = v129;
              if ( v128 != v132 )
                break;
            }
            if ( !v128 )
              goto LABEL_373;
          }
          v133 = 0x7FFFFFFFi64;
          v134 = 0i64;
          while ( 1 )
          {
            v135 = (unsigned __int8)src[v134];
            v136 = (unsigned __int8)aPartyteams[v134++];
            if ( !v133-- )
            {
LABEL_383:
              playlists[v505].flags |= 2u;
              goto LABEL_296;
            }
            if ( v135 != v136 )
            {
              v138 = v135 + 32;
              if ( (unsigned int)(v135 - 65) > 0x19 )
                v138 = v135;
              v135 = v138;
              v139 = v136 + 32;
              if ( (unsigned int)(v136 - 65) > 0x19 )
                v139 = v136;
              if ( v135 != v139 )
                break;
            }
            if ( !v135 )
              goto LABEL_383;
          }
          v140 = 0x7FFFFFFFi64;
          v141 = 0i64;
          while ( 1 )
          {
            v142 = (unsigned __int8)src[v141];
            v143 = (unsigned __int8)aAlwayssearch[v141++];
            if ( !v140-- )
            {
LABEL_393:
              playlists[v505].flags |= 0x10u;
              goto LABEL_296;
            }
            if ( v142 != v143 )
            {
              v145 = v142 + 32;
              if ( (unsigned int)(v142 - 65) > 0x19 )
                v145 = v142;
              v142 = v145;
              v146 = v143 + 32;
              if ( (unsigned int)(v143 - 65) > 0x19 )
                v146 = v143;
              if ( v142 != v146 )
                break;
            }
            if ( !v142 )
              goto LABEL_393;
          }
          v147 = 0x7FFFFFFFi64;
          v148 = 0i64;
          while ( 1 )
          {
            v149 = (unsigned __int8)src[v148];
            v150 = (unsigned __int8)aBotMatchmaking[v148++];
            if ( !v147-- )
            {
LABEL_403:
              playlists[v505].flags |= 0x20u;
              goto LABEL_296;
            }
            if ( v149 != v150 )
            {
              v152 = v149 + 32;
              if ( (unsigned int)(v149 - 65) > 0x19 )
                v152 = v149;
              v149 = v152;
              v153 = v150 + 32;
              if ( (unsigned int)(v150 - 65) > 0x19 )
                v153 = v150;
              if ( v149 != v153 )
                break;
            }
            if ( !v149 )
              goto LABEL_403;
          }
          v154 = 0x7FFFFFFFi64;
          v155 = 0i64;
          while ( 1 )
          {
            v156 = (unsigned __int8)src[v155];
            v157 = (unsigned __int8)aHumansOnTeamAl[v155++];
            if ( !v154-- )
            {
LABEL_413:
              playlists[v505].flags |= 0x40u;
              goto LABEL_296;
            }
            if ( v156 != v157 )
            {
              v159 = v156 + 32;
              if ( (unsigned int)(v156 - 65) > 0x19 )
                v159 = v156;
              v156 = v159;
              v160 = v157 + 32;
              if ( (unsigned int)(v157 - 65) > 0x19 )
                v160 = v157;
              if ( v156 != v160 )
                break;
            }
            if ( !v156 )
              goto LABEL_413;
          }
          v161 = 0x7FFFFFFFi64;
          v162 = 0i64;
          while ( 1 )
          {
            v163 = (unsigned __int8)src[v162];
            v164 = (unsigned __int8)aNoJoinViaPrese[v162++];
            if ( !v161-- )
            {
LABEL_423:
              playlists[v505].flags |= 0x80u;
              goto LABEL_296;
            }
            if ( v163 != v164 )
            {
              v166 = v163 + 32;
              if ( (unsigned int)(v163 - 65) > 0x19 )
                v166 = v163;
              v163 = v166;
              v167 = v164 + 32;
              if ( (unsigned int)(v164 - 65) > 0x19 )
                v167 = v164;
              if ( v163 != v167 )
                break;
            }
            if ( !v163 )
              goto LABEL_423;
          }
          v168 = 0x7FFFFFFFi64;
          v169 = 0i64;
          while ( 1 )
          {
            v170 = (unsigned __int8)src[v169];
            v171 = (unsigned __int8)aAllowF2p[v169++];
            if ( !v168-- )
            {
LABEL_433:
              playlists[v505].flags |= 0x100u;
              goto LABEL_296;
            }
            if ( v170 != v171 )
            {
              v173 = v170 + 32;
              if ( (unsigned int)(v170 - 65) > 0x19 )
                v173 = v170;
              v170 = v173;
              v174 = v171 + 32;
              if ( (unsigned int)(v171 - 65) > 0x19 )
                v174 = v171;
              if ( v170 != v174 )
                break;
            }
            if ( !v170 )
              goto LABEL_433;
          }
          v175 = 0x7FFFFFFFi64;
          v176 = 0i64;
          while ( 1 )
          {
            v177 = (unsigned __int8)src[v176];
            v178 = (unsigned __int8)aSplitscreenRes[v176++];
            if ( !v175-- )
            {
LABEL_443:
              playlists[v505].flags |= 0x200u;
              goto LABEL_296;
            }
            if ( v177 != v178 )
            {
              v180 = v177 + 32;
              if ( (unsigned int)(v177 - 65) > 0x19 )
                v180 = v177;
              v177 = v180;
              v181 = v178 + 32;
              if ( (unsigned int)(v178 - 65) > 0x19 )
                v181 = v178;
              if ( v177 != v181 )
                break;
            }
            if ( !v177 )
              goto LABEL_443;
          }
          v182 = 0x7FFFFFFFi64;
          v183 = 0i64;
          while ( 1 )
          {
            v184 = (unsigned __int8)src[v183];
            v185 = (unsigned __int8)aBrPlunderPostT[v183++];
            if ( !v182-- )
            {
LABEL_453:
              playlists[v505].flags |= 0x400u;
              goto LABEL_296;
            }
            if ( v184 != v185 )
            {
              v187 = v184 + 32;
              if ( (unsigned int)(v184 - 65) > 0x19 )
                v187 = v184;
              v184 = v187;
              v188 = v185 + 32;
              if ( (unsigned int)(v185 - 65) > 0x19 )
                v188 = v185;
              if ( v184 != v188 )
                break;
            }
            if ( !v184 )
              goto LABEL_453;
          }
          v189 = 0x7FFFFFFFi64;
          v190 = 0i64;
          while ( 1 )
          {
            v191 = (unsigned __int8)src[v190];
            v192 = (unsigned __int8)aDmzPostTutoria[v190++];
            if ( !v189-- )
            {
LABEL_463:
              playlists[v505].flags |= 0x800u;
              goto LABEL_296;
            }
            if ( v191 != v192 )
            {
              v194 = v191 + 32;
              if ( (unsigned int)(v191 - 65) > 0x19 )
                v194 = v191;
              v191 = v194;
              v195 = v192 + 32;
              if ( (unsigned int)(v192 - 65) > 0x19 )
                v195 = v192;
              if ( v191 != v195 )
                break;
            }
            if ( !v191 )
              goto LABEL_463;
          }
          v196 = 0x7FFFFFFFi64;
          v197 = 0i64;
          while ( 1 )
          {
            v198 = (unsigned __int8)src[v197];
            v199 = (unsigned __int8)aSurvivalPlayli[v197++];
            if ( !v196-- )
            {
LABEL_473:
              playlists[v505].flags |= 0x1000u;
              goto LABEL_296;
            }
            if ( v198 != v199 )
            {
              v201 = v198 + 32;
              if ( (unsigned int)(v198 - 65) > 0x19 )
                v201 = v198;
              v198 = v201;
              v202 = v199 + 32;
              if ( (unsigned int)(v199 - 65) > 0x19 )
                v202 = v199;
              if ( v198 != v202 )
                break;
            }
            if ( !v198 )
              goto LABEL_473;
          }
          v203 = 0x7FFFFFFFi64;
          v204 = 0i64;
          while ( 1 )
          {
            v205 = (unsigned __int8)src[v204];
            v206 = (unsigned __int8)aLimitedTime[v204++];
            if ( !v203-- )
            {
LABEL_483:
              playlists[v505].flags |= 0x2000u;
              goto LABEL_296;
            }
            if ( v205 != v206 )
            {
              v208 = v205 + 32;
              if ( (unsigned int)(v205 - 65) > 0x19 )
                v208 = v205;
              v205 = v208;
              v209 = v206 + 32;
              if ( (unsigned int)(v206 - 65) > 0x19 )
                v209 = v206;
              if ( v205 != v209 )
                break;
            }
            if ( !v205 )
              goto LABEL_483;
          }
          v210 = 0x7FFFFFFFi64;
          v211 = 0i64;
          do
          {
            v212 = (unsigned __int8)src[v211];
            v213 = (unsigned __int8)aPulse[v211++];
            if ( !v210-- )
              break;
            if ( v212 != v213 )
            {
              v215 = v212 + 32;
              if ( (unsigned int)(v212 - 65) > 0x19 )
                v215 = v212;
              v212 = v215;
              v216 = v213 + 32;
              if ( (unsigned int)(v213 - 65) > 0x19 )
                v216 = v213;
              if ( v212 != v216 )
                goto LABEL_296;
            }
          }
          while ( v212 );
          playlists[v505].flags |= 0x4000u;
LABEL_296:
          bdJSONDeserializer::~bdJSONDeserializer(&v509);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v520);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "partners") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v520);
        bdJSONDeserializer::getArray(&v506, "partners", &v520);
        v100 = 0;
        if ( v520.m_count )
        {
          do
          {
            if ( v100 >= 8 )
              break;
            bdJSONDeserializer::bdJSONDeserializer(&v509);
            bdJSONDeserializer::getElementByIndex(&v520, v100, &v509);
            bdJSONDeserializer::getUByte8(&v509, &playlists[v505].partners[v100]);
            bdJSONDeserializer::~bdJSONDeserializer(&v509);
            ++v100;
          }
          while ( v100 < v520.m_count );
          v53 = playlists;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v520);
      }
      if ( bdJSONDeserializer::hasKey(&v506, "maxparty") )
        bdJSONDeserializer::getUByte8(&v506, "maxparty", &playlists[v505].maxPartySize);
      if ( bdJSONDeserializer::hasKey(&v506, "minparty") )
        bdJSONDeserializer::getUByte8(&v506, "minparty", &playlists[v505].minPartySize);
      if ( bdJSONDeserializer::hasKey(&v506, "maxhumanplayers") )
        bdJSONDeserializer::getUByte8(&v506, "maxhumanplayers", &playlists[v505].maxHumanPlayers);
      if ( bdJSONDeserializer::hasKey(&v506, "numrounds") )
        bdJSONDeserializer::getUInt32(&v506, "numrounds", &playlists[v505].numRounds);
      if ( bdJSONDeserializer::hasKey(&v506, "score_limit") )
        bdJSONDeserializer::getUInt32(&v506, "score_limit", &playlists[v505].score_limit);
      if ( bdJSONDeserializer::hasKey(&v506, "time_limit") )
        bdJSONDeserializer::getUInt32(&v506, "time_limit", &playlists[v505].time_limit);
      if ( bdJSONDeserializer::hasKey(&v506, "user_generated") )
        playlists[v505].user_generated = 1;
      if ( bdJSONDeserializer::hasKey(&v506, "showonlywhenhavemaps") )
        playlists[v505].show_only_when_have_maps = 1;
      if ( bdJSONDeserializer::hasKey(&v506, "showonlywhenhaveentitlement") )
        bdJSONDeserializer::getByte8(&v506, "showonlywhenhaveentitlement", &playlists[v505].show_only_when_have_entitlement);
      if ( bdJSONDeserializer::hasKey(&v506, "bots_reserved_slots_axis") )
        bdJSONDeserializer::getUByte8(&v506, "bots_reserved_slots_axis", &playlists[v505].botMMReserveSlotsAxis);
      if ( bdJSONDeserializer::hasKey(&v506, "bots_reserved_slots_allies") )
        bdJSONDeserializer::getUByte8(&v506, "bots_reserved_slots_allies", &playlists[v505].botMMReserveSlotsAllies);
      if ( bdJSONDeserializer::hasKey(&v506, "is_new") )
        playlists[v505].is_new = 1;
      if ( bdJSONDeserializer::hasKey(&v506, "type") )
      {
        bdJSONDeserializer::getString(&v506, "type", v521, 8u);
        v101 = 0x7FFFFFFFi64;
        v102 = 0i64;
        while ( 1 )
        {
          v103 = v521[v102];
          v104 = aMp_2[v102++];
          if ( !v101-- )
          {
LABEL_333:
            playlists[v505].gamemodeType = PLAYLIST_GAMEMODE_TYPE_MP;
            goto LABEL_334;
          }
          if ( v103 != v104 )
            break;
          if ( !v103 )
            goto LABEL_333;
        }
        v217 = 0x7FFFFFFFi64;
        v218 = 0i64;
        while ( 1 )
        {
          v219 = v521[v218];
          v220 = aCp_3[v218++];
          if ( !v217-- )
          {
LABEL_498:
            playlists[v505].gamemodeType = PLAYLIST_GAMEMODE_TYPE_CP;
            goto LABEL_334;
          }
          if ( v219 != v220 )
            break;
          if ( !v219 )
            goto LABEL_498;
        }
        Com_PrintError(25, "Unknown playlist game mode type %s.\n", v521);
      }
LABEL_334:
      if ( bdJSONDeserializer::hasKey(&v506, "maps") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v509);
        bdJSONDeserializer::getArray(&v506, "maps", &v509);
        for ( mm = 0; mm < v509.m_count; v2 = 0 )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v520);
          bdJSONDeserializer::getObject(&v509, mm, &v520);
          bdJSONDeserializer::getString(&v520, "map", src, 0x40u);
          bdJSONDeserializer::getString(&v520, "gametype", v523, 0x40u);
          bdJSONDeserializer::getInt32(&v520, "weight", v515);
          v107 = s_playlistEntryCount;
          if ( s_playlistEntryCount >= 0x800u )
          {
            LODWORD(v502) = 2048;
            LODWORD(v501) = s_playlistEntryCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( s_playlistEntryCount ) < (unsigned)( 2048 )", "s_playlistEntryCount doesn't index MAX_PLAYLIST_ENTRIES\n\t%i not in [0, %i)", v501, v502) )
              __debugbreak();
            v107 = s_playlistEntryCount;
          }
          v108 = v107;
          v109 = 0;
          if ( maps.numEntries )
          {
LABEL_341:
            v110 = maps.name[v109];
            v111 = 0x7FFFFFFFi64;
            v112 = src;
            if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v113 = v110 - src;
            do
            {
              v114 = (unsigned __int8)v112[v113];
              v115 = (unsigned __int8)*v112++;
              if ( !v111-- )
                break;
              if ( v114 != v115 )
              {
                v117 = v114 + 32;
                if ( (unsigned int)(v114 - 65) > 0x19 )
                  v117 = v114;
                v114 = v117;
                v118 = v115 + 32;
                if ( (unsigned int)(v115 - 65) > 0x19 )
                  v118 = v115;
                if ( v114 != v118 )
                {
                  if ( ++v109 < (unsigned int)maps.numEntries )
                    goto LABEL_341;
                  goto LABEL_501;
                }
              }
            }
            while ( v114 );
          }
          else
          {
LABEL_501:
            v109 = 255;
          }
          if ( v109 == 255 )
          {
            Core_strcpy(&dest[24 * maps.numEntries], 0x18ui64, src);
            maps.name[maps.numEntries] = &dest[24 * maps.numEntries];
            LOBYTE(v109) = maps.numEntries++;
          }
          s_playlistEntries[v108].mapindex = v109;
          v222 = 0;
          if ( numGametypes + 1 <= 0 )
          {
LABEL_518:
            Com_PrintError(16, "Unknown gametype name '%s'\n", v523);
            LOBYTE(v222) = 64;
          }
          else
          {
LABEL_505:
            v223 = 0x7FFFFFFFi64;
            v224 = v523;
            v225 = v222;
            if ( &gametypes[v225] == (playlistGametype *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            do
            {
              v226 = (unsigned __int8)gametypes[0].internalName[v225 * 136 - (_QWORD)v523 + (_QWORD)v224];
              v227 = (unsigned __int8)*v224++;
              if ( !v223-- )
                break;
              if ( v226 != v227 )
              {
                v229 = v226 + 32;
                if ( (unsigned int)(v226 - 65) > 0x19 )
                  v229 = v226;
                v226 = v229;
                v230 = v227 + 32;
                if ( (unsigned int)(v227 - 65) > 0x19 )
                  v230 = v227;
                if ( v226 != v230 )
                {
                  if ( ++v222 < numGametypes + 1 )
                    goto LABEL_505;
                  goto LABEL_518;
                }
              }
            }
            while ( v226 );
          }
          s_playlistEntries[v108].gametype = v222;
          s_playlistEntries[v108].fullWeight = v515[0];
          v231 = v505;
          if ( playlists[v231].numEntries )
          {
            v233 = s_playlistEntryCount;
          }
          else
          {
            firstEntry = playlists[v231].firstEntry;
            if ( firstEntry )
            {
              LODWORD(v501) = firstEntry;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1140, ASSERT_TYPE_ASSERT, "( ( playlists[playlistNum].firstEntry == 0 ) )", "( playlists[playlistNum].firstEntry ) = %i", v501) )
                __debugbreak();
            }
            v231 = v505;
            v233 = s_playlistEntryCount;
            playlists[v231].firstEntry = s_playlistEntryCount;
          }
          s_playlistEntryCount = v233 + 1;
          ++playlists[v231].numEntries;
          bdJSONDeserializer::~bdJSONDeserializer(&v520);
          ++mm;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v509);
      }
      if ( playist_initialParse )
      {
        v234 = v505;
        if ( playlists[v234].previousNumEntries )
        {
          if ( !playlists[v234].numEntries )
            playlists[v234].crc32Changed = 1;
        }
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v506);
      v55 = v511 + 1;
    }
    if ( bdJSONDeserializer::getArray(&v518, "categories", &value) )
    {
      memset_0(categories, 0, sizeof(categories));
      v235 = 0;
      for ( LODWORD(v511) = 0; v235 < value.m_count; LODWORD(v511) = v235 )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v506);
        bdJSONDeserializer::getElementByIndex(&value, v235, &v506);
        bdJSONDeserializer::getString(&v506, "category", &_Buffer, 0x400u);
        v236 = 0x7FFFFFFFi64;
        v237 = 0i64;
        while ( 1 )
        {
          v238 = Src[v237 - 1];
          v239 = aTop_0[v237++];
          if ( !v236-- )
          {
LABEL_538:
            v241 = 0;
            v510 = 0;
            goto LABEL_544;
          }
          if ( v238 != v239 )
            break;
          if ( !v238 )
            goto LABEL_538;
        }
        v242 = -1i64;
        do
          ++v242;
        while ( Src[v242 - 1] );
        if ( (_DWORD)v242 == 1 )
        {
          v241 = _Buffer - 64;
          v510 = v241;
        }
        else
        {
          v241 = v510;
        }
LABEL_544:
        v243 = v241;
        v244 = v241;
        image = categories[v244].image;
        *image = 0;
        categories[v244].numEntries = 0;
        p_requiredDLCMask = &categories[v244].requiredDLCMask;
        *p_requiredDLCMask = 0;
        categories[v244].categoryLabel = 0;
        categories[v244].categoryClass = 2;
        *(_WORD *)&categories[v244].override = 0;
        categories[v244].overrideDvarValue[0] = 0;
        categories[v244].flags = 0;
        categories[v244].start_utc = 0;
        categories[v244].end_utc = 0;
        categories[v244].crc32 = 0;
        categories[v244].rules = (char *)PlaylistStringBuffer_GetTail();
        if ( bdJSONDeserializer::hasKey(&v506, "xb3_crc32") )
          bdJSONDeserializer::getUInt32(&v506, "xb3_crc32", &categories[v244].crc32);
        if ( bdJSONDeserializer::hasKey(&v506, "category") )
        {
          bdJSONDeserializer::getString(&v506, "category", &_Buffer, 0x400u);
          v247 = 0x7FFFFFFFi64;
          v248 = 0i64;
          while ( 1 )
          {
            v249 = (unsigned __int8)Src[v248 - 1];
            v250 = (unsigned __int8)aTop_0[v248++];
            if ( !v247-- )
            {
LABEL_556:
              categories[v244].categoryLabel = -1;
              goto LABEL_558;
            }
            if ( v249 != v250 )
            {
              v252 = v249 + 32;
              if ( (unsigned int)(v249 - 65) > 0x19 )
                v252 = v249;
              v249 = v252;
              v253 = v250 + 32;
              if ( (unsigned int)(v250 - 65) > 0x19 )
                v253 = v250;
              if ( v249 != v253 )
                break;
            }
            if ( !v249 )
              goto LABEL_556;
          }
          categories[v244].categoryLabel = _Buffer - 65;
        }
LABEL_558:
        if ( bdJSONDeserializer::hasKey(&v506, "categoryclass") )
        {
          bdJSONDeserializer::getString(&v506, "categoryclass", &_Buffer, 0x400u);
          v254 = atoi(&_Buffer);
          if ( v254 )
          {
LABEL_570:
            categories[v244].categoryClass = v254;
          }
          else
          {
            v255 = 0x7FFFFFFFi64;
            v256 = 0i64;
            while ( 1 )
            {
              v257 = (unsigned __int8)Src[v256 - 1];
              v258 = (unsigned __int8)serv[v256++];
              if ( !v255-- )
              {
LABEL_569:
                v254 = atoi(&_Buffer);
                goto LABEL_570;
              }
              if ( v257 != v258 )
              {
                v260 = v257 + 32;
                if ( (unsigned int)(v257 - 65) > 0x19 )
                  v260 = v257;
                v257 = v260;
                v261 = v258 + 32;
                if ( (unsigned int)(v258 - 65) > 0x19 )
                  v261 = v258;
                if ( v257 != v261 )
                  break;
              }
              if ( !v257 )
                goto LABEL_569;
            }
            v263 = 0x7FFFFFFFi64;
            v264 = 0i64;
            do
            {
              v265 = (unsigned __int8)Src[v264 - 1];
              v266 = (unsigned __int8)aNone_9[v264++];
              if ( !v263-- )
                break;
              if ( v265 != v266 )
              {
                v268 = v265 + 32;
                if ( (unsigned int)(v265 - 65) > 0x19 )
                  v268 = v265;
                v265 = v268;
                v269 = v266 + 32;
                if ( (unsigned int)(v266 - 65) > 0x19 )
                  v269 = v266;
                if ( v265 != v269 )
                {
                  v270 = 0x7FFFFFFFi64;
                  v271 = 0i64;
                  while ( 1 )
                  {
                    v272 = (unsigned __int8)Src[v271 - 1];
                    v273 = (unsigned __int8)aOff_1[v271++];
                    if ( !v270-- )
                      goto LABEL_583;
                    if ( v272 != v273 )
                    {
                      v275 = v272 + 32;
                      if ( (unsigned int)(v272 - 65) > 0x19 )
                        v275 = v272;
                      v272 = v275;
                      v276 = v273 + 32;
                      if ( (unsigned int)(v273 - 65) > 0x19 )
                        v276 = v273;
                      if ( v272 != v276 )
                      {
                        v277 = 0x7FFFFFFFi64;
                        v278 = 0i64;
                        do
                        {
                          v279 = (unsigned __int8)Src[v278 - 1];
                          v280 = (unsigned __int8)aDefault_3[v278++];
                          if ( !v277-- )
                            break;
                          if ( v279 != v280 )
                          {
                            v282 = v279 + 32;
                            if ( (unsigned int)(v279 - 65) > 0x19 )
                              v282 = v279;
                            v279 = v282;
                            v283 = v280 + 32;
                            if ( (unsigned int)(v280 - 65) > 0x19 )
                              v283 = v280;
                            if ( v279 != v283 )
                            {
                              v284 = 0x7FFFFFFFi64;
                              v285 = 0i64;
                              while ( 1 )
                              {
                                v286 = (unsigned __int8)Src[v285 - 1];
                                v287 = (unsigned __int8)aAny_0[v285++];
                                if ( !v284-- )
                                  goto LABEL_603;
                                if ( v286 != v287 )
                                {
                                  v289 = v286 + 32;
                                  if ( (unsigned int)(v286 - 65) > 0x19 )
                                    v289 = v286;
                                  v286 = v289;
                                  v290 = v287 + 32;
                                  if ( (unsigned int)(v287 - 65) > 0x19 )
                                    v290 = v287;
                                  if ( v286 != v290 )
                                  {
                                    v291 = 0x7FFFFFFFi64;
                                    v292 = 0i64;
                                    while ( 1 )
                                    {
                                      v293 = (unsigned __int8)Src[v292 - 1];
                                      v294 = (unsigned __int8)aAll_3[v292++];
                                      if ( !v291-- )
                                        goto LABEL_603;
                                      if ( v293 != v294 )
                                      {
                                        v296 = v293 + 32;
                                        if ( (unsigned int)(v293 - 65) > 0x19 )
                                          v296 = v293;
                                        v293 = v296;
                                        v297 = v294 + 32;
                                        if ( (unsigned int)(v294 - 65) > 0x19 )
                                          v297 = v294;
                                        if ( v293 != v297 )
                                        {
                                          v298 = 0x7FFFFFFFi64;
                                          v299 = 0i64;
                                          while ( 1 )
                                          {
                                            v300 = (unsigned __int8)Src[v299 - 1];
                                            v301 = (unsigned __int8)aOn_0[v299++];
                                            if ( !v298-- )
                                              goto LABEL_603;
                                            if ( v300 != v301 )
                                            {
                                              v303 = v300 + 32;
                                              if ( (unsigned int)(v300 - 65) > 0x19 )
                                                v303 = v300;
                                              v300 = v303;
                                              v304 = v301 + 32;
                                              if ( (unsigned int)(v301 - 65) > 0x19 )
                                                v304 = v301;
                                              if ( v300 != v304 )
                                              {
                                                v305 = 0x7FFFFFFFi64;
                                                v306 = 0i64;
                                                while ( 1 )
                                                {
                                                  v307 = (unsigned __int8)Src[v306 - 1];
                                                  v308 = (unsigned __int8)aCore_0[v306++];
                                                  if ( !v305-- )
                                                    goto LABEL_643;
                                                  if ( v307 != v308 )
                                                  {
                                                    v310 = v307 + 32;
                                                    if ( (unsigned int)(v307 - 65) > 0x19 )
                                                      v310 = v307;
                                                    v307 = v310;
                                                    v311 = v308 + 32;
                                                    if ( (unsigned int)(v308 - 65) > 0x19 )
                                                      v311 = v308;
                                                    if ( v307 != v311 )
                                                      break;
                                                  }
                                                  if ( !v307 )
                                                    goto LABEL_643;
                                                }
                                                if ( !I_stricmp(&_Buffer, "MP") || !I_stricmp(&_Buffer, "MPCORE") )
                                                {
LABEL_643:
                                                  categories[v244].categoryClass = 4;
                                                  goto LABEL_571;
                                                }
                                                if ( I_stricmp(&_Buffer, "ALIENS") && I_stricmp(&_Buffer, "ALIEN") )
                                                {
                                                  if ( !I_stricmp(&_Buffer, "MAGMA") )
                                                    categories[v244].categoryClass = 16;
                                                }
                                                else
                                                {
                                                  categories[v244].categoryClass = 8;
                                                }
                                                goto LABEL_571;
                                              }
                                            }
                                            if ( !v300 )
                                              goto LABEL_603;
                                          }
                                        }
                                      }
                                      if ( !v293 )
                                        goto LABEL_603;
                                    }
                                  }
                                }
                                if ( !v286 )
                                  goto LABEL_603;
                              }
                            }
                          }
                        }
                        while ( v279 );
LABEL_603:
                        categories[v244].categoryClass = 2;
                        goto LABEL_571;
                      }
                    }
                    if ( !v272 )
                      goto LABEL_583;
                  }
                }
              }
            }
            while ( v265 );
LABEL_583:
            categories[v244].categoryClass = 1;
          }
        }
LABEL_571:
        if ( bdJSONDeserializer::hasKey(&v506, (const char *const)&stru_143C9A1A4) )
        {
          bdJSONDeserializer::getString(&v506, (const char *const)&stru_143C9A1A4, &_Buffer, 0x400u);
          if ( _Buffer == 35 )
            v262 = Src;
          else
            v262 = UI_SafeTranslateString(&_Buffer);
          Com_UTF8_TruncateToGlyphCount(v262, categories[v244].name, 128, 128, NULL);
        }
        if ( bdJSONDeserializer::hasKey(&v506, "description") )
        {
          bdJSONDeserializer::getString(&v506, "description", &_Buffer, 0x400u);
          if ( _Buffer == 35 )
            v312 = Src;
          else
            v312 = UI_SafeTranslateString(&_Buffer);
          Core_strcpy(categories[v244].description, 0x200ui64, v312);
        }
        if ( bdJSONDeserializer::hasKey(&v506, "image") )
          bdJSONDeserializer::getString(&v506, "image", image, 0x40u);
        if ( bdJSONDeserializer::hasKey(&v506, "dlc") )
          bdJSONDeserializer::getUInt32(&v506, "dlc", p_requiredDLCMask);
        if ( bdJSONDeserializer::hasKey(&v506, "filtered") )
        {
          bdJSONDeserializer::getString(&v506, "filtered", &_Buffer, 0x400u);
          v313 = 0x7FFFFFFFi64;
          v2 = 0;
          v314 = 0i64;
          do
          {
            v315 = Src[v314 - 1];
            v316 = aYes_1[v314++];
            if ( !v313-- )
              break;
            if ( v315 != v316 )
              goto LABEL_669;
          }
          while ( v315 );
          categories[v244].flags |= 1u;
        }
        else
        {
          v2 = 0;
        }
LABEL_669:
        if ( bdJSONDeserializer::hasKey(&v506, "featured") )
        {
          bdJSONDeserializer::getString(&v506, "featured", &_Buffer, 0x400u);
          v318 = 0x7FFFFFFFi64;
          v319 = 0i64;
          do
          {
            v320 = Src[v319 - 1];
            v321 = aYes_1[v319++];
            if ( !v318-- )
              break;
            if ( v320 != v321 )
              goto LABEL_675;
          }
          while ( v320 );
          categories[v244].flags |= 4u;
        }
LABEL_675:
        if ( bdJSONDeserializer::hasKey(&v506, "hardcore") )
        {
          bdJSONDeserializer::getString(&v506, "hardcore", &_Buffer, 0x400u);
          v323 = 0x7FFFFFFFi64;
          v324 = 0i64;
          do
          {
            v325 = Src[v324 - 1];
            v326 = aYes_1[v324++];
            if ( !v323-- )
              break;
            if ( v325 != v326 )
              goto LABEL_681;
          }
          while ( v325 );
          categories[v244].flags |= 2u;
        }
LABEL_681:
        if ( bdJSONDeserializer::hasKey(&v506, "promoted") )
        {
          bdJSONDeserializer::getString(&v506, "promoted", &_Buffer, 0x400u);
          v328 = 0x7FFFFFFFi64;
          v329 = 0i64;
          do
          {
            v330 = Src[v329 - 1];
            v331 = aYes_1[v329++];
            if ( !v328-- )
              break;
            if ( v330 != v331 )
              goto LABEL_687;
          }
          while ( v330 );
          categories[v244].flags |= 8u;
        }
LABEL_687:
        if ( bdJSONDeserializer::hasKey(&v506, "cdl") )
        {
          bdJSONDeserializer::getString(&v506, "cdl", &_Buffer, 0x400u);
          v333 = 0x7FFFFFFFi64;
          v334 = 0i64;
          do
          {
            v335 = Src[v334 - 1];
            v336 = aYes_1[v334++];
            if ( !v333-- )
              break;
            if ( v335 != v336 )
              goto LABEL_693;
          }
          while ( v335 );
          categories[v244].flags |= 0x10u;
        }
LABEL_693:
        if ( bdJSONDeserializer::hasKey(&v506, "party") )
        {
          bdJSONDeserializer::getString(&v506, "party", &_Buffer, 0x400u);
          v338 = 0x7FFFFFFFi64;
          v339 = 0i64;
          do
          {
            v340 = Src[v339 - 1];
            v341 = aYes_1[v339++];
            if ( !v338-- )
              break;
            if ( v340 != v341 )
              goto LABEL_699;
          }
          while ( v340 );
          categories[v244].flags |= 0x20u;
        }
LABEL_699:
        if ( bdJSONDeserializer::hasKey(&v506, "br") )
        {
          bdJSONDeserializer::getString(&v506, "br", &_Buffer, 0x400u);
          v343 = 0x7FFFFFFFi64;
          v344 = 0i64;
          do
          {
            v345 = Src[v344 - 1];
            v346 = aYes_1[v344++];
            if ( !v343-- )
              break;
            if ( v345 != v346 )
              goto LABEL_705;
          }
          while ( v345 );
          categories[v244].flags |= 0x40u;
        }
LABEL_705:
        if ( bdJSONDeserializer::hasKey(&v506, "start_utc") )
          bdJSONDeserializer::getUInt32(&v506, "start_utc", &categories[v244].start_utc);
        if ( bdJSONDeserializer::hasKey(&v506, "end_utc") )
          bdJSONDeserializer::getUInt32(&v506, "end_utc", &categories[v243].end_utc);
        if ( bdJSONDeserializer::hasKey(&v506, "xb3_include") )
        {
          v348 = &categories[v243];
          bdJSONDeserializer::bdJSONDeserializer(&v509);
          bdJSONDeserializer::getArray(&v506, "xb3_include", &v509);
          for ( nn = 0; nn < v509.m_count; ++nn )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v520);
            bdJSONDeserializer::getElementByIndex(&v509, nn, &v520);
            if ( bdJSONDeserializer::isString(&v520) )
            {
              bdJSONDeserializer::getString(&v520, &_Buffer, 0x400u);
              v507[0] = _Buffer - 64;
              v348->entries[v348->numEntries].type = CATEGORY;
            }
            else
            {
              bdJSONDeserializer::getInt32(&v520, v507);
              v348->entries[v348->numEntries].type = PLAYLIST;
            }
            v348->entries[v348->numEntries++].num = v507[0];
            bdJSONDeserializer::~bdJSONDeserializer(&v520);
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v509);
        }
        if ( bdJSONDeserializer::hasKey(&v506, "override") )
        {
          categories[v243].override = 1;
          bdJSONDeserializer::getString(&v506, "override", categories[v243].overrideDvarName, 0x40u);
          StringSafe = Dvar_GetStringSafe(categories[v243].overrideDvarName);
          Core_strcpy(categories[v243].overrideDvarValue, 0x40ui64, StringSafe);
        }
        if ( bdJSONDeserializer::hasKey(&v506, "dvars") )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v509);
          if ( bdJSONDeserializer::getObject(&v506, "dvars", &v509) )
          {
            v351 = 0;
            if ( v509.m_count )
            {
              do
              {
                bdJSONDeserializer::bdJSONDeserializer(&v520);
                bdJSONDeserializer::getFieldByIndex(&v509, v351, v533, 0x100u, &v520);
                if ( bdJSONDeserializer::isString(&v520) )
                {
                  if ( !bdJSONDeserializer::getString(&v520, key, 0x100u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_playlists.cpp", 1393, ASSERT_TYPE_ASSERT, "(ok && \"Category Dvar string too large.\")", (const char *)&queryFormat, "ok && \"Category Dvar string too large.\"") )
                    __debugbreak();
                  j_sprintf(&_Buffer, "%s \"%s\";", v533, key);
                }
                else if ( bdJSONDeserializer::convertToString(&v520, key, 0x100u) )
                {
                  j_sprintf(&_Buffer, "%s %s;", v533, key);
                }
                else
                {
                  Com_PrintError(25, "[Playlist] failed to convert rule to string '%s'\n", v533);
                }
                v352 = categories[v243].rules - 1;
                do
                  ++v352;
                while ( *v352 );
                strcpy(v352, &_Buffer);
                v353 = -1i64;
                do
                  ++v353;
                while ( Src[v353 - 1] );
                PlaylistStringBuffer_MoveTail(v353);
                bdJSONDeserializer::~bdJSONDeserializer(&v520);
                ++v351;
              }
              while ( v351 < v509.m_count );
              v235 = v511;
            }
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v509);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v506);
        ++v235;
      }
      v53 = playlists;
    }
  }
  v354 = playist_initialParse;
  if ( !playist_initialParse )
    v354 = 1i64;
  playist_initialParse = v354;
  v355 = 0;
  if ( maps.numEntries )
  {
    while ( 1 )
    {
      v356 = -1i64;
      do
        ++v356;
      while ( maps.name[v355][v356] );
      if ( (int)v356 >= (int)PlaylistStringBuffer_GetRemainingAfterTail() )
        break;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING|0x80) && Live_GetMapIndex(maps.name[v355]) < 0 )
        Com_PrintWarning(16, "Playlist_ParsePlaylists: Map %s is not in presence data\n", maps.name[v355]);
      v357 = PlaylistStringBuffer_GetTail();
      v358 = maps.name[v355];
      RemainingAfterTail = PlaylistStringBuffer_GetRemainingAfterTail();
      Core_strcpy(v357->buffer, RemainingAfterTail, v358);
      maps.name[v355] = (char *)v357;
      PlaylistStringBuffer_MoveTail(v356);
      if ( ++v355 >= (unsigned int)maps.numEntries )
        goto LABEL_750;
    }
    Com_PrintError(16, "Not enough room in string buffer for map names after adding rules\n");
    v508 = 1;
LABEL_750:
    v2 = 0;
  }
  numEntries = categories[0].numEntries;
  if ( !categories[0].numEntries )
  {
    v361 = 1;
    v362 = &categories[1].numEntries;
    do
    {
      if ( *v362 )
      {
        categories[0].entries[numEntries].type = CATEGORY;
        categories[0].entries[categories[0].numEntries].num = v361;
        numEntries = ++categories[0].numEntries;
      }
      ++v361;
      v362 += 1032;
    }
    while ( v361 < 26 );
    if ( !numEntries )
    {
      v363 = 1;
      v364 = &playlists[1].numEntries;
      do
      {
        if ( *v364 )
        {
          categories[0].entries[numEntries].type = PLAYLIST;
          categories[0].entries[categories[0].numEntries].num = v363;
          numEntries = ++categories[0].numEntries;
        }
        ++v363;
        v364 += 496;
      }
      while ( v363 < 129 );
      if ( !numEntries )
      {
        Com_PrintError(16, "Playlist Error: No entries in the root category\n", v364);
        ++v508;
      }
    }
    v365 = "MENU/PLAYERMATCH_PLAYLISTS";
    v366 = SEH_LocalizeTextMessage("MENU/PLAYERMATCH_PLAYLISTS", "playlist title", LOCMSG_NOERR);
    if ( v366 )
      v365 = v366;
    Core_strcpy(categories[0].name, 0x80ui64, v365);
  }
  Playlist_UpdateFeatured(v354, v52);
  Playlist_UpdateXPScales();
  if ( !s_setPubVarCallback )
  {
    Instance = PublisherVariableManager::GetInstance();
    PublisherVariableManager::AddRetrievedCallback(Instance, Playlist_UpdateXPScales);
    s_setPubVarCallback = 1;
  }
  v368 = 129i64;
  do
  {
    v369 = -1i64;
    do
      ++v369;
    while ( v53->description[v369] );
    v370 = -1i64;
    do
      ++v370;
    while ( v53->name[v370] );
    v371 = v2 + v369;
    v2 = v371 + v370 + 2;
    ++v53;
    --v368;
  }
  while ( v368 );
  *(_QWORD *)v521 = (unsigned int)(v371 + v370 + 2);
  v372 = 2;
  do
  {
    v373 = v372 - 2;
    v517 = 136i64 * (v372 - 1);
    v374 = v372;
    *(_QWORD *)v507 = 136i64 * (v372 + 1);
    v511 = 136i64 * (v372 + 2);
    *(_QWORD *)v513 = 136i64 * (v372 + 3);
    *(_QWORD *)v514 = 136i64 * (v372 + 4);
    v375 = v372 + 5;
    v376 = v372 + 6;
    v377 = v372 + 7;
    v378 = v372 + 8;
    *(_QWORD *)v515 = 136i64 * (v372 + 9);
    v379 = v372 + 10;
    v380 = v372 + 11;
    v381 = v372 + 12;
    v382 = v372 + 13;
    v383 = -1i64;
    do
      ++v383;
    while ( gametypes[v373].internalName[v383] );
    v384 = gametypes[v373].localizedName;
    v385 = -1i64;
    do
      ++v385;
    while ( v384[v385] );
    v386 = *(_DWORD *)v521 + v383;
    v387 = -1i64;
    do
      ++v387;
    while ( gametypes[v374].internalName[v387] );
    v388 = v385 + v386;
    v389 = -1i64;
    do
      ++v389;
    while ( gametypes[v374].localizedName[v389] );
    v390 = v388 + v387;
    v391 = -1i64;
    do
      ++v391;
    while ( gametypes[v382].internalName[v391] );
    v392 = v389 + v390;
    v393 = -1i64;
    do
      ++v393;
    while ( gametypes[v382].localizedName[v393] );
    v394 = v392 + v391;
    v395 = -1i64;
    do
      ++v395;
    while ( gametypes[v381].internalName[v395] );
    v396 = v393 + v394;
    v397 = -1i64;
    do
      ++v397;
    while ( gametypes[v381].localizedName[v397] );
    v398 = v396 + v395;
    v399 = -1i64;
    do
      ++v399;
    while ( gametypes[v380].internalName[v399] );
    v400 = v397 + v398;
    v401 = -1i64;
    do
      ++v401;
    while ( gametypes[v380].localizedName[v401] );
    v402 = v400 + v399;
    v403 = -1i64;
    do
      ++v403;
    while ( gametypes[v378].internalName[v403] );
    v404 = v401 + v402;
    v405 = -1i64;
    do
      ++v405;
    while ( gametypes[v378].localizedName[v405] );
    v406 = v404 + v403;
    v407 = -1i64;
    do
      ++v407;
    while ( gametypes[v377].internalName[v407] );
    v408 = v405 + v406;
    v409 = -1i64;
    do
      ++v409;
    while ( gametypes[v377].localizedName[v409] );
    v410 = v408 + v407;
    v411 = -1i64;
    do
      ++v411;
    while ( gametypes[v379].internalName[v411] );
    v412 = v409 + v410;
    v413 = -1i64;
    do
      ++v413;
    while ( gametypes[v379].localizedName[v413] );
    v414 = v412 + v411;
    v415 = -1i64;
    do
      ++v415;
    while ( gametypes[v376].internalName[v415] );
    v416 = v413 + v414;
    v417 = -1i64;
    do
      ++v417;
    while ( gametypes[v376].localizedName[v417] );
    v418 = v416 + v415;
    v419 = -1i64;
    do
      ++v419;
    while ( gametypes[v375].internalName[v419] );
    v420 = v417 + v418;
    v421 = -1i64;
    do
      ++v421;
    while ( gametypes[v375].localizedName[v421] );
    v422 = v420 + v419;
    v423 = -1i64;
    do
      ++v423;
    while ( gametypes[0].internalName[*(_QWORD *)v515 + v423] );
    v424 = v421 + v422;
    v425 = -1i64;
    do
      ++v425;
    while ( gametypes[0].localizedName[*(_QWORD *)v515 + v425] );
    v426 = v424 + v423;
    v427 = -1i64;
    do
      ++v427;
    while ( gametypes[0].internalName[*(_QWORD *)v514 + v427] );
    v428 = v425 + v426;
    v429 = -1i64;
    do
      ++v429;
    while ( gametypes[0].localizedName[*(_QWORD *)v514 + v429] );
    v430 = v428 + v427;
    v431 = -1i64;
    do
      ++v431;
    while ( gametypes[0].internalName[*(_QWORD *)v513 + v431] );
    v432 = v429 + v430;
    v433 = -1i64;
    do
      ++v433;
    while ( gametypes[0].localizedName[*(_QWORD *)v513 + v433] );
    v434 = v432 + v431;
    v435 = -1i64;
    do
      ++v435;
    while ( gametypes[v511 / 0x88].internalName[v435] );
    v436 = v433 + v434;
    v437 = -1i64;
    do
      ++v437;
    while ( gametypes[v511 / 0x88].localizedName[v437] );
    v438 = v436 + v435;
    v439 = -1i64;
    do
      ++v439;
    while ( gametypes[0].internalName[*(_QWORD *)v507 + v439] );
    v440 = v437 + v438;
    v441 = -1i64;
    do
      ++v441;
    while ( gametypes[0].localizedName[*(_QWORD *)v507 + v441] );
    v442 = v440 + v439;
    v443 = -1i64;
    do
      ++v443;
    while ( gametypes[v517 / 0x88].internalName[v443] );
    v444 = v441 + v442;
    v445 = -1i64;
    do
      ++v445;
    while ( gametypes[v517 / 0x88].localizedName[v445] );
    v446 = v444 + v443 + v445 + 32;
    *(_QWORD *)v521 = v446;
    v372 += 16;
  }
  while ( v372 - 2 < 64 );
  v447 = &categories[1];
  do
  {
    v448 = -1i64;
    do
      ++v448;
    while ( v447[2].description[v448] );
    v449 = -1i64;
    do
      ++v449;
    while ( v447[2].name[v449] );
    v450 = v446 + v448;
    v451 = -1i64;
    do
      ++v451;
    while ( v447[1].description[v451] );
    v452 = v449 + v450;
    v453 = -1i64;
    do
      ++v453;
    while ( v447[-1].name[v453] );
    v454 = v452 + v451;
    v455 = -1i64;
    do
      ++v455;
    while ( v447[1].name[v455] );
    v456 = v453 + v454;
    v457 = -1i64;
    do
      ++v457;
    while ( v447->name[v457 - 904] );
    v458 = v456 + v455;
    v459 = -1i64;
    do
      ++v459;
    while ( v447->description[v459] );
    v460 = v457 + v458;
    v461 = -1i64;
    do
      ++v461;
    while ( v447[11].description[v461] );
    v462 = v460 + v459;
    v463 = -1i64;
    do
      ++v463;
    while ( v447[11].name[v463] );
    v464 = v461 + v462;
    v465 = -1i64;
    do
      ++v465;
    while ( v447[10].description[v465] );
    v466 = v464 + v463;
    v467 = -1i64;
    do
      ++v467;
    while ( v447[10].name[v467] );
    v468 = v465 + v466;
    v469 = -1i64;
    do
      ++v469;
    while ( v447[9].description[v469] );
    v470 = v468 + v467;
    v471 = -1i64;
    do
      ++v471;
    while ( v447[9].name[v471] );
    v472 = v469 + v470;
    v473 = -1i64;
    do
      ++v473;
    while ( v447[8].description[v473] );
    v474 = v472 + v471;
    v475 = -1i64;
    do
      ++v475;
    while ( v447[8].name[v475] );
    v476 = v473 + v474;
    v477 = -1i64;
    do
      ++v477;
    while ( v447[7].description[v477] );
    v478 = v476 + v475;
    v479 = -1i64;
    do
      ++v479;
    while ( v447[7].name[v479] );
    v480 = v477 + v478;
    v481 = -1i64;
    do
      ++v481;
    while ( v447[6].description[v481] );
    v482 = v480 + v479;
    v483 = -1i64;
    do
      ++v483;
    while ( v447[6].name[v483] );
    v484 = v481 + v482;
    v485 = -1i64;
    do
      ++v485;
    while ( v447[5].description[v485] );
    v486 = v484 + v483;
    v487 = -1i64;
    do
      ++v487;
    while ( v447[5].name[v487] );
    v488 = v485 + v486;
    v489 = -1i64;
    do
      ++v489;
    while ( v447[4].description[v489] );
    v490 = v488 + v487;
    v491 = -1i64;
    do
      ++v491;
    while ( v447[4].name[v491] );
    v492 = v489 + v490;
    v493 = -1i64;
    do
      ++v493;
    while ( v447[3].description[v493] );
    v494 = v492 + v491;
    v495 = -1i64;
    do
      ++v495;
    while ( v447[3].name[v495] );
    v496 = v493 + v494;
    v497 = -1i64;
    do
      ++v497;
    while ( v447->name[v497] );
    v446 = v496 + v495 + v497 + 26;
    v447 += 13;
    --v516;
  }
  while ( v516 );
  Com_Printf(131086, "Playlist: Version %d\n", playlist_versionNum);
  v498 = v508;
  LODWORD(v504) = v508;
  LODWORD(v503) = 26;
  LODWORD(v502) = v510;
  LODWORD(v501) = 129;
  LODWORD(v500) = v505;
  Com_Printf(131086, "Playlist: %d/%d gametypes, %d/%d playlists, %d/%d categories (%d parse errors)\n", (unsigned int)numGametypes, 64i64, v500, v501, v502, v503, v504);
  v499 = PlaylistStringBuffer_GetRemainingAfterTail();
  Com_Printf(131086, "Playlist: There are %i/%i bytes of the playlist string buffer used\n", (unsigned int)(204800 - v499), 204800i64);
  Com_Printf(131086, "Playlist: There are %d/%d bytes of static char arrays being used\n", v446, 104320i64);
  Com_Printf(131086, "Playlist: Total memory footprint of data is approximately %zu bytes\n", 0x5A2C0ui64);
  if ( v498 )
  {
    LiveStorage_PauseFetchingPlaylists();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EE8E88, 786i64, v498);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v518);
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
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  *(_OWORD *)&v16.member = _XMM0;
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

  if ( category < 0x1A && (categories[category].flags & 1) != 0 )
  {
    high_state.arrayIndex = -1;
    high_state.isValid = 0;
    high_state.offset = 0;
    state.offset = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    state.arrayIndex = -1;
    *(_OWORD *)&state.member = _XMM0;
    *(_OWORD *)&high_state.member = _XMM0;
    if ( Playlist_GetFiltersForCategory(clientNum, &ddlContext, &state, category, &filter_out, &high_state, &high_filter_out) )
    {
      Com_Printf(25, "[playlist] Updating filters for category %i from %zu %zu to %zu %zu\n", category, filter_out, high_filter_out, filters, high_filters);
      DDL_SetUInt64(&state, &ddlContext, filters);
      DDL_SetUInt64(&high_state, &ddlContext, high_filters);
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
          *(_OWORD *)&state.member = _XMM0;
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
              *(_OWORD *)&v14.member = _XMM0;
              high_state.offset = 0;
              high_state.arrayIndex = -1;
              *(_OWORD *)&high_state.member = _XMM0;
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
    *(_OWORD *)&state.member = _XMM0;
    v109.isValid = 0;
    v109.offset = 0;
    v109.arrayIndex = -1;
    *(_OWORD *)&v109.member = _XMM0;
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
    *(_OWORD *)&state.member = _XMM0;
    v45.arrayIndex = -1;
    *(_OWORD *)&v45.member = _XMM0;
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
      *(_OWORD *)&v45.member = _XMM0;
      state.offset = 0;
      state.arrayIndex = -1;
      *(_OWORD *)&state.member = _XMM0;
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

