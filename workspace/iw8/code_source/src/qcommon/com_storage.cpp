/*
==============
LiveStorage_GettingPlaylists
==============
*/

bool __fastcall LiveStorage_GettingPlaylists()
{
  return ?LiveStorage_GettingPlaylists@@YA_NXZ();
}

/*
==============
LiveStorage_LogComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_LogComplete(const int slot)
{
  return ?LiveStorage_LogComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
LiveStorage_GetUTCOffset
==============
*/

unsigned int __fastcall LiveStorage_GetUTCOffset()
{
  return ?LiveStorage_GetUTCOffset@@YAIXZ();
}

/*
==============
LiveStorage_ValidateStatsChecksumAndVersion
==============
*/

bool __fastcall LiveStorage_ValidateStatsChecksumAndVersion(const int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_ValidateStatsChecksumAndVersion@@YA_NHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_Init
==============
*/

void LiveStorage_Init(void)
{
  ?LiveStorage_Init@@YAXXZ();
}

/*
==============
LiveStorage_ShouldReadOfflineStats
==============
*/

bool __fastcall LiveStorage_ShouldReadOfflineStats(int localControllerIndex)
{
  return ?LiveStorage_ShouldReadOfflineStats@@YA_NH@Z(localControllerIndex);
}

/*
==============
Com_DDL_ReadOnlyFromText
==============
*/

int __fastcall Com_DDL_ReadOnlyFromText(char (*arrayText)[1091], char *text, const int length)
{
  return ?Com_DDL_ReadOnlyFromText@@YAHQEAY0EED@DPEADH@Z(arrayText, text, length);
}

/*
==============
LiveStorage_StatsInitCmd
==============
*/

void LiveStorage_StatsInitCmd(void)
{
  ?LiveStorage_StatsInitCmd@@YAXXZ();
}

/*
==============
LiveStorage_FreshStart
==============
*/

void __fastcall LiveStorage_FreshStart(const int controllerIndex)
{
  ?LiveStorage_FreshStart@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorate_GetExtinctionBonusDeadline
==============
*/

unsigned int __fastcall LiveStorate_GetExtinctionBonusDeadline(const int controllerIndex)
{
  return ?LiveStorate_GetExtinctionBonusDeadline@@YAIH@Z(controllerIndex);
}

/*
==============
Com_DDL_FindAsset
==============
*/

DDLFile *__fastcall Com_DDL_FindAsset(const char *name, bool allowCreateDefault)
{
  return ?Com_DDL_FindAsset@@YAPEAUDDLFile@@PEBD_N@Z(name, allowCreateDefault);
}

/*
==============
LiveStorage_ShowResetStatsError
==============
*/

void LiveStorage_ShowResetStatsError(void)
{
  ?LiveStorage_ShowResetStatsError@@YAXXZ();
}

/*
==============
LiveStorage_GetPlayerDataBufferSize
==============
*/

unsigned int __fastcall LiveStorage_GetPlayerDataBufferSize(StatsGroup statsGroup)
{
  return ?LiveStorage_GetPlayerDataBufferSize@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
LiveStorage_GetStatsGroupBufferSize
==============
*/

unsigned int __fastcall LiveStorage_GetStatsGroupBufferSize(StatsGroup statsGroup)
{
  return ?LiveStorage_GetStatsGroupBufferSize@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
LiveStorage_IsWaitingOnStats
==============
*/

bool __fastcall LiveStorage_IsWaitingOnStats(const int localControllerIndex)
{
  return ?LiveStorage_IsWaitingOnStats@@YA_NH@Z(localControllerIndex);
}

/*
==============
Com_DDL_FlagModifiedBytes
==============
*/

bool __fastcall Com_DDL_FlagModifiedBytes(const DDLState *state, unsigned __int8 *modifiedFlags, StatsGroup statsGroup)
{
  return ?Com_DDL_FlagModifiedBytes@@YA_NPEBUDDLState@@PEAEW4StatsGroup@@@Z(state, modifiedFlags, statsGroup);
}

/*
==============
LiveStorage_SetStatsBlobFailedUpload
==============
*/

void __fastcall LiveStorage_SetStatsBlobFailedUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  ?LiveStorage_SetStatsBlobFailedUpload@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, val);
}

/*
==============
LiveStorage_DoWeHaveStats
==============
*/

bool __fastcall LiveStorage_DoWeHaveStats(const int controllerIndex)
{
  return ?LiveStorage_DoWeHaveStats@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_StatsInit
==============
*/

void __fastcall LiveStorage_StatsInit(const int controllerIndex, bool clear, bool freshStart, StatsSource statsSource)
{
  ?LiveStorage_StatsInit@@YAXH_N0W4StatsSource@@@Z(controllerIndex, clear, freshStart, statsSource);
}

/*
==============
LiveStorage_GetPersistentDataDefFormatChecksum
==============
*/

unsigned __int64 __fastcall LiveStorage_GetPersistentDataDefFormatChecksum()
{
  return ?LiveStorage_GetPersistentDataDefFormatChecksum@@YA_KXZ();
}

/*
==============
LiveStorage_GetAndResetLastPlayTime
==============
*/

unsigned int __fastcall LiveStorage_GetAndResetLastPlayTime(DDLContext *buffer)
{
  return ?LiveStorage_GetAndResetLastPlayTime@@YAIPEAUDDLContext@@@Z(buffer);
}

/*
==============
LiveStorage_GetStatsResetState
==============
*/

ResetStatsReason __fastcall LiveStorage_GetStatsResetState(int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_GetStatsResetState@@YA?AW4ResetStatsReason@@HW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_SetStatsBlobDoubleXPUsed
==============
*/

void __fastcall LiveStorage_SetStatsBlobDoubleXPUsed(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  ?LiveStorage_SetStatsBlobDoubleXPUsed@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, val);
}

/*
==============
LiveStorage_IsStatsBlobStatsReset
==============
*/

bool __fastcall LiveStorage_IsStatsBlobStatsReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobStatsReset@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer
==============
*/

void __fastcall LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer(unsigned __int8 *buf, const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  ?LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer@@YAXPEAEHHPEBEH@Z(buf, controllerIndex, startByteIndex, rangeStart, rangeSize);
}

/*
==============
LiveStorage_SetStatsBlobPrestigeReset
==============
*/

void __fastcall LiveStorage_SetStatsBlobPrestigeReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  ?LiveStorage_SetStatsBlobPrestigeReset@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, val);
}

/*
==============
LiveStorage_IsStatsBlobPrestigeReset
==============
*/

bool __fastcall LiveStorage_IsStatsBlobPrestigeReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobPrestigeReset@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_BeginGame
==============
*/

void __fastcall LiveStorage_BeginGame(const LocalClientNum_t localClientNum)
{
  ?LiveStorage_BeginGame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LiveStorage_ResetStats_SetStatsSource
==============
*/

void __fastcall LiveStorage_ResetStats_SetStatsSource(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_ResetStats_SetStatsSource@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_GetPersistentDataDefVersion
==============
*/

int __fastcall LiveStorage_GetPersistentDataDefVersion()
{
  return ?LiveStorage_GetPersistentDataDefVersion@@YAHXZ();
}

/*
==============
Com_DDL_WriteAsText
==============
*/

void __fastcall Com_DDL_WriteAsText(const DDLContext *buffer, const char *fileName, const char *dirName)
{
  ?Com_DDL_WriteAsText@@YAXPEBUDDLContext@@PEBD1@Z(buffer, fileName, dirName);
}

/*
==============
LiveStorage_UpdatePersistentDataVersion
==============
*/

bool __fastcall LiveStorage_UpdatePersistentDataVersion(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  return ?LiveStorage_UpdatePersistentDataVersion@@YA_NHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
LiveStorage_FetchPlaylists
==============
*/

bool __fastcall LiveStorage_FetchPlaylists(const int controllerIndex)
{
  return ?LiveStorage_FetchPlaylists@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetStatsBuffer
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetStatsBuffer(const int controllerIndex)
{
  return ?LiveStorage_GetStatsBuffer@@YAPEAEH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetServerTimeComplete
==============
*/

taskCompleteResults __fastcall LiveStorage_GetServerTimeComplete(const int slot)
{
  return ?LiveStorage_GetServerTimeComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
Com_DDL_GetPrintStrings
==============
*/

void __fastcall Com_DDL_GetPrintStrings(const unsigned int *navHashes, int navHashCount)
{
  ?Com_DDL_GetPrintStrings@@YAXQEBIH@Z(navHashes, navHashCount);
}

/*
==============
LiveStorage_CreateDDLContext
==============
*/

bool __fastcall LiveStorage_CreateDDLContext(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?LiveStorage_CreateDDLContext@@YA_NHW4StatsGroup@@W4StatsSource@@PEAUDDLContext@@P6AXPEBU3@IIW4DDLAccessOp@@@ZPEAX@Z(controllerIndex, statsGroup, statsSource, context, accessCB, userData);
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroup
==============
*/

void __fastcall LiveStorage_LocallyUnObfuscateStatsGroup(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  ?LiveStorage_LocallyUnObfuscateStatsGroup@@YAXHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
Com_DDL_GetLookup
==============
*/

void __fastcall Com_DDL_GetLookup(DDLState *state, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup, const unsigned int maxSize)
{
  ?Com_DDL_GetLookup@@YAXPEAUDDLState@@QEBIHW4StatsGroup@@I@Z(state, navHashes, navHashCount, statsGroup, maxSize);
}

/*
==============
LiveStorage_WaitForWriteStatsBuffer
==============
*/

void __fastcall LiveStorage_WaitForWriteStatsBuffer(const int controllerIndex)
{
  ?LiveStorage_WaitForWriteStatsBuffer@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_WriteChecksumToBuffer
==============
*/

void __fastcall LiveStorage_WriteChecksumToBuffer(unsigned __int8 *buffer, const int len)
{
  ?LiveStorage_WriteChecksumToBuffer@@YAXPEAEH@Z(buffer, len);
}

/*
==============
Fence_TimeSyncDependenciesUpdated
==============
*/

void __fastcall Fence_TimeSyncDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_TimeSyncDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
Com_LocallyUnObfuscateStatsGroup
==============
*/

void __fastcall Com_LocallyUnObfuscateStatsGroup(DDLContext *context, unsigned __int8 *statsBuffer, const StatsGroup statsGroup)
{
  ?Com_LocallyUnObfuscateStatsGroup@@YAXAEAUDDLContext@@PEAEW4StatsGroup@@@Z(context, statsBuffer, statsGroup);
}

/*
==============
LiveStorage_ShouldReadPeriodicExtinctionBonus
==============
*/

bool __fastcall LiveStorage_ShouldReadPeriodicExtinctionBonus(const int controllerIndex)
{
  return ?LiveStorage_ShouldReadPeriodicExtinctionBonus@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_MarkPeriodicChallengesOutOfDate
==============
*/

void __fastcall LiveStorage_MarkPeriodicChallengesOutOfDate(const int controllerIndex)
{
  ?LiveStorage_MarkPeriodicChallengesOutOfDate@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetStatsGroupDataSize
==============
*/

unsigned int __fastcall LiveStorage_GetStatsGroupDataSize(StatsGroup statsGroup)
{
  return ?LiveStorage_GetStatsGroupDataSize@@YAIW4StatsGroup@@@Z(statsGroup);
}

/*
==============
LiveStorage_GettingPlaylistInfo
==============
*/

bool __fastcall LiveStorage_GettingPlaylistInfo()
{
  return ?LiveStorage_GettingPlaylistInfo@@YA_NXZ();
}

/*
==============
Com_ParseNavStrings
==============
*/

bool __fastcall Com_ParseNavStrings(char *pStr, const char **navStrings, const int navStringMax, int *navStringCount)
{
  return ?Com_ParseNavStrings@@YA_NPEADQEAPEBDHPEAH@Z(pStr, navStrings, navStringMax, navStringCount);
}

/*
==============
LiveStorage_InitPeriodicChallenges
==============
*/

void __fastcall LiveStorage_InitPeriodicChallenges(const int controllerIndex)
{
  ?LiveStorage_InitPeriodicChallenges@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_SetStatsBlobDirty
==============
*/

void __fastcall LiveStorage_SetStatsBlobDirty(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool dirty)
{
  ?LiveStorage_SetStatsBlobDirty@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, dirty);
}

/*
==============
LiveStorage_FlagModifiedByteRange
==============
*/

void __fastcall LiveStorage_FlagModifiedByteRange(int startByte, int endByte, unsigned __int8 *modifiedFlags)
{
  ?LiveStorage_FlagModifiedByteRange@@YAXHHPEAE@Z(startByte, endByte, modifiedFlags);
}

/*
==============
LiveStorage_LocallyUnObfuscateStats
==============
*/

void __fastcall LiveStorage_LocallyUnObfuscateStats(const int controllerIndex, bool *out_statsGroupObfuscated)
{
  ?LiveStorage_LocallyUnObfuscateStats@@YAXHQEA_N@Z(controllerIndex, out_statsGroupObfuscated);
}

/*
==============
OnPlaylistDownloadMetadatasComplete
==============
*/

void __fastcall OnPlaylistDownloadMetadatasComplete(OnlineStorageTask *storageTask)
{
  ?OnPlaylistDownloadMetadatasComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
LiveStorage_LocallyObfuscateStatsGroup
==============
*/

void __fastcall LiveStorage_LocallyObfuscateStatsGroup(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  ?LiveStorage_LocallyObfuscateStatsGroup@@YAXHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
LiveStorage_RegisterCommands
==============
*/

void LiveStorage_RegisterCommands(void)
{
  ?LiveStorage_RegisterCommands@@YAXXZ();
}

/*
==============
LiveStorage_ClearPlayerDataObfuscated
==============
*/

void __fastcall LiveStorage_ClearPlayerDataObfuscated(const int controllerIndex, const StatsSource statsSource)
{
  ?LiveStorage_ClearPlayerDataObfuscated@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_SetDDLObfuscationData
==============
*/

void __fastcall LiveStorage_SetDDLObfuscationData(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context)
{
  ?LiveStorage_SetDDLObfuscationData@@YAXHW4StatsGroup@@W4StatsSource@@PEAUDDLContext@@@Z(controllerIndex, statsGroup, statsSource, context);
}

/*
==============
LiveStorage_RecordPlayTime
==============
*/

void __fastcall LiveStorage_RecordPlayTime(const LocalClientNum_t localClientNum)
{
  ?LiveStorage_RecordPlayTime@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Com_LocallyUnObfuscateStatsGroupRange
==============
*/

void __fastcall Com_LocallyUnObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  ?Com_LocallyUnObfuscateStatsGroupRange@@YAXHHPEBEHPEAUDDLContext@@W4StatsGroup@@W4StatsSource@@@Z(controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource);
}

/*
==============
LiveStorage_PlaylistFrame
==============
*/

void __fastcall LiveStorage_PlaylistFrame(const int controllerIndex)
{
  ?LiveStorage_PlaylistFrame@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_EnsureWeHaveStats_Offline
==============
*/

void __fastcall LiveStorage_EnsureWeHaveStats_Offline(const int controllerIndex)
{
  ?LiveStorage_EnsureWeHaveStats_Offline@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_ResetStats
==============
*/

void __fastcall LiveStorage_ResetStats(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_ResetStats@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_GetStatsGroupBuffer
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetStatsGroupBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  return ?LiveStorage_GetStatsGroupBuffer@@YAPEAEHW4StatsGroup@@@Z(controllerIndex, statsGroup);
}

/*
==============
LiveStorage_UpdatePlaylistFileInfo
==============
*/

void __fastcall LiveStorage_UpdatePlaylistFileInfo(const int controllerIndex)
{
  ?LiveStorage_UpdatePlaylistFileInfo@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_SetStatsBlobFirstUpload
==============
*/

void __fastcall LiveStorage_SetStatsBlobFirstUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  ?LiveStorage_SetStatsBlobFirstUpload@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, val);
}

/*
==============
Playlist_GetPlaylistBuffer
==============
*/

unsigned __int8 *__fastcall Playlist_GetPlaylistBuffer()
{
  return ?Playlist_GetPlaylistBuffer@@YAPEAEXZ();
}

/*
==============
LiveStorage_CheckPeriodicExtinctionBonusUpdate
==============
*/

void __fastcall LiveStorage_CheckPeriodicExtinctionBonusUpdate(const int controllerIndex)
{
  ?LiveStorage_CheckPeriodicExtinctionBonusUpdate@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_ReadStats_Common
==============
*/

void __fastcall LiveStorage_ReadStats_Common(const int controllerIndex, unsigned __int8 *fileContents, int bytesRead, StatsSource statsSource)
{
  ?LiveStorage_ReadStats_Common@@YAXHQEAEHW4StatsSource@@@Z(controllerIndex, fileContents, bytesRead, statsSource);
}

/*
==============
LiveStorage_SaveStats
==============
*/

void __fastcall LiveStorage_SaveStats(const int controllerIndex)
{
  ?LiveStorage_SaveStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_NewUser_Common
==============
*/

void __fastcall LiveStorage_NewUser_Common(const int controllerIndex)
{
  ?LiveStorage_NewUser_Common@@YAXH@Z(controllerIndex);
}

/*
==============
Playlist_MarkAsOutOfDate
==============
*/

void Playlist_MarkAsOutOfDate(void)
{
  ?Playlist_MarkAsOutOfDate@@YAXXZ();
}

/*
==============
Com_LocallyObfuscateStatsGroup
==============
*/

void __fastcall Com_LocallyObfuscateStatsGroup(DDLContext *context, unsigned __int8 *statsBuffer, const StatsGroup statsGroup, unsigned int *outRandomInt)
{
  ?Com_LocallyObfuscateStatsGroup@@YAXPEAUDDLContext@@PEAEW4StatsGroup@@AEAI@Z(context, statsBuffer, statsGroup, outRandomInt);
}

/*
==============
LiveStorage_PersistentDataEnabled
==============
*/

bool __fastcall LiveStorage_PersistentDataEnabled()
{
  return ?LiveStorage_PersistentDataEnabled@@YA_NXZ();
}

/*
==============
ResetFencePlaylistsErrorCode
==============
*/

void __fastcall ResetFencePlaylistsErrorCode(const int controllerIndex)
{
  ?ResetFencePlaylistsErrorCode@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_UnregisterCommands
==============
*/

void LiveStorage_UnregisterCommands(void)
{
  ?LiveStorage_UnregisterCommands@@YAXXZ();
}

/*
==============
LiveStorage_InitCommon
==============
*/

void LiveStorage_InitCommon(void)
{
  ?LiveStorage_InitCommon@@YAXXZ();
}

/*
==============
Com_DDL_ReadFromText
==============
*/

bool __fastcall Com_DDL_ReadFromText(DDLContext *buffer, char *text, const int length)
{
  return ?Com_DDL_ReadFromText@@YA_NPEAUDDLContext@@PEADH@Z(buffer, text, length);
}

/*
==============
LiveStorage_GetStatsGroupBufferForSource
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetStatsGroupBufferForSource(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  return ?LiveStorage_GetStatsGroupBufferForSource@@YAPEAEHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
LoadCompressedPlaylistFromBuffer
==============
*/

bool __fastcall LoadCompressedPlaylistFromBuffer(void *src, int src_len)
{
  return ?LoadCompressedPlaylistFromBuffer@@YA_NPEAXH@Z(src, src_len);
}

/*
==============
GetRecipeFromPackedPlaylist
==============
*/

int __fastcall GetRecipeFromPackedPlaylist(const char *gametype, void *dest, int dest_size)
{
  return ?GetRecipeFromPackedPlaylist@@YAHPEBDPEAXH@Z(gametype, dest, dest_size);
}

/*
==============
Com_DDL_GetByteVec2
==============
*/

void __fastcall Com_DDL_GetByteVec2(const DDLState *state, DDLContext *context, vec2_t *vec)
{
  ?Com_DDL_GetByteVec2@@YAXPEBUDDLState@@PEAUDDLContext@@AEATvec2_t@@@Z(state, context, vec);
}

/*
==============
Com_DDL_ReadFromDBText
==============
*/

bool __fastcall Com_DDL_ReadFromDBText(DDLContext *buffer, const char *fileName)
{
  return ?Com_DDL_ReadFromDBText@@YA_NPEAUDDLContext@@PEBD@Z(buffer, fileName);
}

/*
==============
LiveStorage_ErrorCleanup
==============
*/

void LiveStorage_ErrorCleanup(void)
{
  ?LiveStorage_ErrorCleanup@@YAXXZ();
}

/*
==============
LiveStorage_CheckNotResettingStats
==============
*/

void __fastcall LiveStorage_CheckNotResettingStats(const int controllerIndex)
{
  ?LiveStorage_CheckNotResettingStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_FinalizeStatsRead
==============
*/

void __fastcall LiveStorage_FinalizeStatsRead(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_FinalizeStatsRead@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_GenerateFilename
==============
*/

void __fastcall LiveStorage_GenerateFilename(char *statsFilenameBuffer, unsigned int statsFilenameBufferSize, const char *dirName)
{
  ?LiveStorage_GenerateFilename@@YAXPEADIPEBD@Z(statsFilenameBuffer, statsFilenameBufferSize, dirName);
}

/*
==============
LiveStorage_Task_FailureCallback
==============
*/

void __fastcall LiveStorage_Task_FailureCallback(overlappedTask *task, int type)
{
  ?LiveStorage_Task_FailureCallback@@YAXPEAUoverlappedTask@@H@Z(task, type);
}

/*
==============
LiveStorage_GetDemoPlayerDataBuffer
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetDemoPlayerDataBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  return ?LiveStorage_GetDemoPlayerDataBuffer@@YAPEAEHW4StatsGroup@@@Z(controllerIndex, statsGroup);
}

/*
==============
LiveStorage_Shutdown
==============
*/

void LiveStorage_Shutdown(void)
{
  ?LiveStorage_Shutdown@@YAXXZ();
}

/*
==============
Com_DDL_SetByteVec2
==============
*/

void __fastcall Com_DDL_SetByteVec2(const DDLState *state, DDLContext *context, const vec2_t *vec)
{
  ?Com_DDL_SetByteVec2@@YAXPEBUDDLState@@PEAUDDLContext@@AEBTvec2_t@@@Z(state, context, vec);
}

/*
==============
Com_DDL_SetString
==============
*/

int __fastcall Com_DDL_SetString(const unsigned int *navHashes, int navHashCount, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup, const unsigned int maxSize)
{
  return ?Com_DDL_SetString@@YAHQEBIHPEBDPEAUDDLContext@@PEAEW4StatsGroup@@I@Z(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup, maxSize);
}

/*
==============
Com_DDL_DoesAssetExist
==============
*/

bool __fastcall Com_DDL_DoesAssetExist(const char *name)
{
  return ?Com_DDL_DoesAssetExist@@YA_NPEBD@Z(name);
}

/*
==============
LiveStorage_DoWeHavePlaylists
==============
*/

bool __fastcall LiveStorage_DoWeHavePlaylists()
{
  return ?LiveStorage_DoWeHavePlaylists@@YA_NXZ();
}

/*
==============
Com_LocallyUnObfuscateStatsGroupIntoMessage
==============
*/

void __fastcall Com_LocallyUnObfuscateStatsGroupIntoMessage(msg_t *buf, const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  ?Com_LocallyUnObfuscateStatsGroupIntoMessage@@YAXPEIAUmsg_t@@HHPEBEHPEAUDDLContext@@W4StatsGroup@@W4StatsSource@@@Z(buf, controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource);
}

/*
==============
Com_DDL_SetDataFromString
==============
*/

bool __fastcall Com_DDL_SetDataFromString(DDLState *state, DDLContext *buffer, const char *value)
{
  return ?Com_DDL_SetDataFromString@@YA_NPEAUDDLState@@PEAUDDLContext@@PEBD@Z(state, buffer, value);
}

/*
==============
Com_LocallyObfuscateStatsGroupRange
==============
*/

void __fastcall Com_LocallyObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  ?Com_LocallyObfuscateStatsGroupRange@@YAXHHPEBEHPEAUDDLContext@@W4StatsGroup@@W4StatsSource@@@Z(controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource);
}

/*
==============
Com_DDL_SetShortVec3
==============
*/

void __fastcall Com_DDL_SetShortVec3(const DDLState *state, DDLContext *context, const vec3_t *vec)
{
  ?Com_DDL_SetShortVec3@@YAXPEBUDDLState@@PEAUDDLContext@@AEBTvec3_t@@@Z(state, context, vec);
}

/*
==============
LiveStorage_SetStatsBlobStatsReset
==============
*/

void __fastcall LiveStorage_SetStatsBlobStatsReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  ?LiveStorage_SetStatsBlobStatsReset@@YAXHW4StatsSource@@W4StatsBlobId@@_N@Z(controllerIndex, statsSource, statsBlob, val);
}

/*
==============
LiveStorage_EnsureMaySetPersistentData
==============
*/

void __fastcall LiveStorage_EnsureMaySetPersistentData(LocalClientNum_t localClientNum, const char *debugInfo)
{
  ?LiveStorage_EnsureMaySetPersistentData@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, debugInfo);
}

/*
==============
Com_DDL_ConvertNavStringToHash
==============
*/

unsigned int __fastcall Com_DDL_ConvertNavStringToHash(const char *navString)
{
  return ?Com_DDL_ConvertNavStringToHash@@YAIPEBD@Z(navString);
}

/*
==============
LiveStorage_HasDirtyStatsBlob
==============
*/

bool __fastcall LiveStorage_HasDirtyStatsBlob(const int localcontrollerIndex, StatsSource statsSource)
{
  return ?LiveStorage_HasDirtyStatsBlob@@YA_NHW4StatsSource@@@Z(localcontrollerIndex, statsSource);
}

/*
==============
Com_DDL_SetInt
==============
*/

int __fastcall Com_DDL_SetInt(const unsigned int *navHashes, int navHashCount, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup, const unsigned int maxSize)
{
  return ?Com_DDL_SetInt@@YAHQEBIHHPEAUDDLContext@@PEAEW4StatsGroup@@I@Z(navHashes, navHashCount, value, buffer, modifiedFlags, statsGroup, maxSize);
}

/*
==============
LiveStorage_IsWaitingOnPlaylists
==============
*/

bool __fastcall LiveStorage_IsWaitingOnPlaylists()
{
  return ?LiveStorage_IsWaitingOnPlaylists@@YA_NXZ();
}

/*
==============
LiveStorage_IsStatsBlobDoubleXPUsed
==============
*/

bool __fastcall LiveStorage_IsStatsBlobDoubleXPUsed(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobDoubleXPUsed@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_GetPlayerDataBuffer
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetPlayerDataBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  return ?LiveStorage_GetPlayerDataBuffer@@YAPEAEHW4StatsGroup@@@Z(controllerIndex, statsGroup);
}

/*
==============
LiveStorage_MarkPeriodicExtinctionBonusOutOfDate
==============
*/

void __fastcall LiveStorage_MarkPeriodicExtinctionBonusOutOfDate(const int controllerIndex)
{
  ?LiveStorage_MarkPeriodicExtinctionBonusOutOfDate@@YAXH@Z(controllerIndex);
}

/*
==============
Playlist_IsOutOfDate
==============
*/

bool __fastcall Playlist_IsOutOfDate()
{
  return ?Playlist_IsOutOfDate@@YA_NXZ();
}

/*
==============
LiveStorage_IsStatsBlobFailedUpload
==============
*/

bool __fastcall LiveStorage_IsStatsBlobFailedUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobFailedUpload@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroupRange
==============
*/

void __fastcall LiveStorage_LocallyUnObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  ?LiveStorage_LocallyUnObfuscateStatsGroupRange@@YAXHHPEBEH@Z(controllerIndex, startByteIndex, rangeStart, rangeSize);
}

/*
==============
LiveStorage_CheckPeriodicChallengeUpdate
==============
*/

void __fastcall LiveStorage_CheckPeriodicChallengeUpdate(const int controllerIndex)
{
  ?LiveStorage_CheckPeriodicChallengeUpdate@@YAXH@Z(controllerIndex);
}

/*
==============
Com_DDL_GetShortVec3
==============
*/

void __fastcall Com_DDL_GetShortVec3(const DDLState *state, DDLContext *context, vec3_t *vec)
{
  ?Com_DDL_GetShortVec3@@YAXPEBUDDLState@@PEAUDDLContext@@AEATvec3_t@@@Z(state, context, vec);
}

/*
==============
Fence_PlaylistsDependenciesUpdated
==============
*/

void __fastcall Fence_PlaylistsDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_PlaylistsDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
LiveStorage_PauseFetchingPlaylists
==============
*/

void LiveStorage_PauseFetchingPlaylists(void)
{
  ?LiveStorage_PauseFetchingPlaylists@@YAXXZ();
}

/*
==============
LiveStorage_DiscardStats
==============
*/

void __fastcall LiveStorage_DiscardStats(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_DiscardStats@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_IsStatsBlobDirty
==============
*/

bool __fastcall LiveStorage_IsStatsBlobDirty(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobDirty@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
SetFencePlaylistsStatusCode
==============
*/

void __fastcall SetFencePlaylistsStatusCode(const int controllerIndex, const FencePlaylistsStatusCode statusCode)
{
  ?SetFencePlaylistsStatusCode@@YAXHW4FencePlaylistsStatusCode@@@Z(controllerIndex, statusCode);
}

/*
==============
LiveStorage_ShouldReadOnlineStats
==============
*/

bool __fastcall LiveStorage_ShouldReadOnlineStats(int controllerIndex)
{
  return ?LiveStorage_ShouldReadOnlineStats@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_IsStatsGroupObfuscated
==============
*/

bool __fastcall LiveStorage_IsStatsGroupObfuscated(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  return ?LiveStorage_IsStatsGroupObfuscated@@YA_NHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
LiveStorage_ArePlaylistUpdatesPaused
==============
*/

bool __fastcall LiveStorage_ArePlaylistUpdatesPaused()
{
  return ?LiveStorage_ArePlaylistUpdatesPaused@@YA_NXZ();
}

/*
==============
Com_DDL_ReadOnlyFromDBText
==============
*/

int __fastcall Com_DDL_ReadOnlyFromDBText(char (*arrayText)[1091], const char *fileName)
{
  return ?Com_DDL_ReadOnlyFromDBText@@YAHQEAY0EED@DPEBD@Z(arrayText, fileName);
}

/*
==============
LiveStorage_ClearDWOverlappedTasks
==============
*/

void __fastcall LiveStorage_ClearDWOverlappedTasks(const int controllerIndex)
{
  ?LiveStorage_ClearDWOverlappedTasks@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_CheckConnection
==============
*/

bool __fastcall LiveStorage_CheckConnection(const int controllerIndex)
{
  return ?LiveStorage_CheckConnection@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_SaveStatsForSource
==============
*/

void __fastcall LiveStorage_SaveStatsForSource(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_SaveStatsForSource@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_EnsureWeHaveStats
==============
*/

void __fastcall LiveStorage_EnsureWeHaveStats(const int controllerIndex)
{
  ?LiveStorage_EnsureWeHaveStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetPlayerDataBufferForSource
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetPlayerDataBufferForSource(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  return ?LiveStorage_GetPlayerDataBufferForSource@@YAPEAEHW4StatsGroup@@W4StatsSource@@@Z(controllerIndex, statsGroup, statsSource);
}

/*
==============
LiveStorage_GetPlaylistsFenceFullStatusCode
==============
*/

int __fastcall LiveStorage_GetPlaylistsFenceFullStatusCode(const int controllerIndex)
{
  return ?LiveStorage_GetPlaylistsFenceFullStatusCode@@YAHH@Z(controllerIndex);
}

/*
==============
Com_DDL_LoadAsset
==============
*/

const DDLDef *__fastcall Com_DDL_LoadAsset(const char *fileName)
{
  return ?Com_DDL_LoadAsset@@YAPEBUDDLDef@@PEBD@Z(fileName);
}

/*
==============
SetFencePlaylistsErrorCode
==============
*/

void __fastcall SetFencePlaylistsErrorCode(const int controllerIndex, const FencePlaylistsErrorCode errorCode)
{
  ?SetFencePlaylistsErrorCode@@YAXHW4FencePlaylistsErrorCode@@@Z(controllerIndex, errorCode);
}

/*
==============
Com_DDL_GetString
==============
*/

const char *__fastcall Com_DDL_GetString(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup, const unsigned int maxSize)
{
  return ?Com_DDL_GetString@@YAPEBDQEBIHPEBUDDLContext@@W4StatsGroup@@I@Z(navHashes, navHashCount, buffer, statsGroup, maxSize);
}

/*
==============
Com_DDL_GetInt
==============
*/

int __fastcall Com_DDL_GetInt(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup, const unsigned int maxSize)
{
  return ?Com_DDL_GetInt@@YAHQEBIHPEBUDDLContext@@W4StatsGroup@@I@Z(navHashes, navHashCount, buffer, statsGroup, maxSize);
}

/*
==============
LiveStorage_IsTimeSynced
==============
*/

bool __fastcall LiveStorage_IsTimeSynced()
{
  return ?LiveStorage_IsTimeSynced@@YA_NXZ();
}

/*
==============
LiveStorage_MaySetPersistentData_ControllerIndex
==============
*/

bool __fastcall LiveStorage_MaySetPersistentData_ControllerIndex(int controllerIndex)
{
  return ?LiveStorage_MaySetPersistentData_ControllerIndex@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_LocallyObfuscateStats
==============
*/

void __fastcall LiveStorage_LocallyObfuscateStats(const int controllerIndex, const bool *statsGroupObfuscated)
{
  ?LiveStorage_LocallyObfuscateStats@@YAXHQEB_N@Z(controllerIndex, statsGroupObfuscated);
}

/*
==============
LiveStorage_LogPrestige
==============
*/

void __fastcall LiveStorage_LogPrestige(int controllerIndex, XUID xuid)
{
  ?LiveStorage_LogPrestige@@YAXHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
LiveStorage_GetStatsBlobForFile
==============
*/

StatsBlobId __fastcall LiveStorage_GetStatsBlobForFile(const char *fileName)
{
  return ?LiveStorage_GetStatsBlobForFile@@YA?AW4StatsBlobId@@PEBD@Z(fileName);
}

/*
==============
LiveStorage_NewUser
==============
*/

void __fastcall LiveStorage_NewUser(const int controllerIndex)
{
  ?LiveStorage_NewUser@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetStatsBufferSizeForSource
==============
*/

unsigned int __fastcall LiveStorage_GetStatsBufferSizeForSource(const int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_GetStatsBufferSizeForSource@@YAIHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_ResetStatsIfUnusable
==============
*/

void __fastcall LiveStorage_ResetStatsIfUnusable(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_ResetStatsIfUnusable@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_IsPaidUserReady
==============
*/

bool __fastcall LiveStorage_IsPaidUserReady(const int controllerIndex)
{
  return ?LiveStorage_IsPaidUserReady@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_SetAllStatsBlobsDirty
==============
*/

void __fastcall LiveStorage_SetAllStatsBlobsDirty(const int localcontrollerIndex, StatsSource statsSource, bool dirty)
{
  ?LiveStorage_SetAllStatsBlobsDirty@@YAXHW4StatsSource@@_N@Z(localcontrollerIndex, statsSource, dirty);
}

/*
==============
LiveStorage_ClientUsingOnlineStatsOffline
==============
*/

bool __fastcall LiveStorage_ClientUsingOnlineStatsOffline(const LocalClientNum_t localClientNum)
{
  return ?LiveStorage_ClientUsingOnlineStatsOffline@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LiveStorage_GetDailyChallengeId
==============
*/

int __fastcall LiveStorage_GetDailyChallengeId(const DDLContext *buffer, const int dailyChallengeIndex)
{
  return ?LiveStorage_GetDailyChallengeId@@YAHPEBUDDLContext@@H@Z(buffer, dailyChallengeIndex);
}

/*
==============
LiveStorage_CopySponsorStats
==============
*/

void __fastcall LiveStorage_CopySponsorStats(const int controllerIndex)
{
  ?LiveStorage_CopySponsorStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_ClearStatsBlobValidationHints
==============
*/

void __fastcall LiveStorage_ClearStatsBlobValidationHints(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  ?LiveStorage_ClearStatsBlobValidationHints@@YAXHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_EnsureWeHaveStats_Online
==============
*/

void __fastcall LiveStorage_EnsureWeHaveStats_Online(const int controllerIndex)
{
  ?LiveStorage_EnsureWeHaveStats_Online@@YAXH@Z(controllerIndex);
}

/*
==============
Fence_FilteredPlaylistsDependenciesUpdated
==============
*/

void __fastcall Fence_FilteredPlaylistsDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_FilteredPlaylistsDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
LiveStorage_ShouldReadPeriodicChallenges
==============
*/

bool __fastcall LiveStorage_ShouldReadPeriodicChallenges(const int controllerIndex)
{
  return ?LiveStorage_ShouldReadPeriodicChallenges@@YA_NH@Z(controllerIndex);
}

/*
==============
OnPlaylistDownloadComplete
==============
*/

void __fastcall OnPlaylistDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnPlaylistDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
LiveStorage_DoWeHaveStatsForSource
==============
*/

bool __fastcall LiveStorage_DoWeHaveStatsForSource(const int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_DoWeHaveStatsForSource@@YA_NHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_FinalizeStatsReadCommon
==============
*/

void __fastcall LiveStorage_FinalizeStatsReadCommon(const int controllerIndex, StatsSource statsSource)
{
  ?LiveStorage_FinalizeStatsReadCommon@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_ReadStats
==============
*/

void __fastcall LiveStorage_ReadStats(const int controllerIndex)
{
  ?LiveStorage_ReadStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_CreateDDLContext_Direct
==============
*/

bool __fastcall LiveStorage_CreateDDLContext_Direct(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?LiveStorage_CreateDDLContext_Direct@@YA_NHW4StatsGroup@@W4StatsSource@@PEAUDDLContext@@P6AXPEBU3@IIW4DDLAccessOp@@@ZPEAX@Z(controllerIndex, statsGroup, statsSource, context, accessCB, userData);
}

/*
==============
LiveStorage_GetStatsBufferSize
==============
*/

unsigned int __fastcall LiveStorage_GetStatsBufferSize(const int controllerIndex)
{
  return ?LiveStorage_GetStatsBufferSize@@YAIH@Z(controllerIndex);
}

/*
==============
LiveStorage_GetStatsBufferForSource
==============
*/

unsigned __int8 *__fastcall LiveStorage_GetStatsBufferForSource(const int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_GetStatsBufferForSource@@YAPEAEHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_GetActiveStatsSource
==============
*/

StatsSource __fastcall LiveStorage_GetActiveStatsSource(const int controllerIndex)
{
  return ?LiveStorage_GetActiveStatsSource@@YA?AW4StatsSource@@H@Z(controllerIndex);
}

/*
==============
LiveStorage_AreStatsFetched
==============
*/

bool __fastcall LiveStorage_AreStatsFetched(int controllerIndex, StatsSource statsSource)
{
  return ?LiveStorage_AreStatsFetched@@YA_NHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
InitRequiredTask
==============
*/

void __fastcall InitRequiredTask(RequiredTask *task)
{
  ?InitRequiredTask@@YAXPEAURequiredTask@@@Z(task);
}

/*
==============
LiveStorage_SyncTime
==============
*/

void __fastcall LiveStorage_SyncTime(const int controllerIndex)
{
  ?LiveStorage_SyncTime@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_IsStatsBlobFirstUpload
==============
*/

bool __fastcall LiveStorage_IsStatsBlobFirstUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  return ?LiveStorage_IsStatsBlobFirstUpload@@YA_NHW4StatsSource@@W4StatsBlobId@@@Z(controllerIndex, statsSource, statsBlob);
}

/*
==============
LiveStorage_CheckOngoingSessionTasks
==============
*/

void LiveStorage_CheckOngoingSessionTasks(void)
{
  ?LiveStorage_CheckOngoingSessionTasks@@YAXXZ();
}

/*
==============
SetDDLFromString
==============
*/

bool __fastcall SetDDLFromString(DDLContext *buffer, const char *str)
{
  return ?SetDDLFromString@@YA_NPEAUDDLContext@@PEBD@Z(buffer, str);
}

/*
==============
Com_DDL_NavigateFromCmd
==============
*/

bool __fastcall Com_DDL_NavigateFromCmd(const DDLDef *def, int (__fastcall *argc)(), const char *(__fastcall *argv)(int), DDLState *state, int ignoreArgs)
{
  return ?Com_DDL_NavigateFromCmd@@YA_NPEBUDDLDef@@P6AHXZP6APEBDH@ZPEAUDDLState@@H@Z(def, argc, argv, state, ignoreArgs);
}

/*
==============
Com_DDL_CreateContext
==============
*/

bool __fastcall Com_DDL_CreateContext(void *buffer, int len, const DDLDef *def, DDLContext *const ddlContext, void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  return ?Com_DDL_CreateContext@@YA_NPEAXHPEBUDDLDef@@QEAUDDLContext@@P6AXPEBU2@IIW4DDLAccessOp@@@Z0@Z(buffer, len, def, ddlContext, accessCB, userData);
}

/*
==============
Live_CheckPlaylistVersionUpdate
==============
*/

void Live_CheckPlaylistVersionUpdate(void)
{
  ?Live_CheckPlaylistVersionUpdate@@YAXXZ();
}

/*
==============
LiveStorage_LocallyObfuscateStatsGroupRange
==============
*/

void __fastcall LiveStorage_LocallyObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  ?LiveStorage_LocallyObfuscateStatsGroupRange@@YAXHHPEBEH@Z(controllerIndex, startByteIndex, rangeStart, rangeSize);
}

/*
==============
LiveStorage_GetUTC
==============
*/

unsigned int __fastcall LiveStorage_GetUTC()
{
  return ?LiveStorage_GetUTC@@YAIXZ();
}

/*
==============
LiveStorage_GetWeeklyChallengeId
==============
*/

int __fastcall LiveStorage_GetWeeklyChallengeId(const DDLContext *buffer, const int weeklyChallengeIndex)
{
  return ?LiveStorage_GetWeeklyChallengeId@@YAHPEBUDDLContext@@H@Z(buffer, weeklyChallengeIndex);
}

/*
==============
LiveStorage_ResetStats_ClearStatsSource
==============
*/

void __fastcall LiveStorage_ResetStats_ClearStatsSource(const int controllerIndex)
{
  ?LiveStorage_ResetStats_ClearStatsSource@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_MaySetPersistentData
==============
*/

bool __fastcall LiveStorage_MaySetPersistentData(LocalClientNum_t localClientNum)
{
  return ?LiveStorage_MaySetPersistentData@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Com_DDL_PrintState
==============
*/

void __fastcall Com_DDL_PrintState(const DDLState *state, const DDLContext *buffer)
{
  ?Com_DDL_PrintState@@YAXPEBUDDLState@@PEBUDDLContext@@@Z(state, buffer);
}

/*
==============
LiveStorage_EndGame
==============
*/

void __fastcall LiveStorage_EndGame(const LocalClientNum_t localClientNum)
{
  ?LiveStorage_EndGame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LiveStorage_ObufscateAllStatsGroups
==============
*/

void __fastcall LiveStorage_ObufscateAllStatsGroups(const int controllerIndex, const StatsSource statsSource)
{
  ?LiveStorage_ObufscateAllStatsGroups@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LiveStorage_StatsInitCmd
==============
*/
void LiveStorage_StatsInitCmd(void)
{
  int v0; 
  StatsSource ActiveStatsSource; 
  int v2; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) )
  {
    v0 = Cmd_LocalControllerIndex();
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(v0);
    v2 = Cmd_LocalControllerIndex();
    LiveStorage_StatsInit(v2, 1, 0, ActiveStatsSource);
  }
  else
  {
    Com_PrintWarning(14, "This game mode does not support player stats and so the defaultStatsInit command has been ignored.");
  }
}

/*
==============
AppendLineToFile
==============
*/
void AppendLineToFile(char *line, int len, void *userData)
{
  fileHandle_t v3; 
  int v4; 
  __int64 v6; 
  __int64 v7; 

  v3.handle.handle = *(_QWORD *)userData;
  v4 = len;
  if ( *(_QWORD *)userData != -1i64 && len > 0 )
  {
    do
    {
      v6 = FS_Write(line, v4, v3);
      v7 = v6;
      if ( !v6 )
        break;
      if ( (unsigned __int64)(v6 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v6, "signed", v6) )
        __debugbreak();
      v4 -= v7;
      line += v7;
    }
    while ( v4 > 0 );
  }
}

/*
==============
Com_DDL_ConvertNavStringToHash
==============
*/
unsigned int Com_DDL_ConvertNavStringToHash(const char *navString)
{
  const char *v1; 
  char v2; 
  unsigned int result; 

  v1 = navString;
  v2 = *navString;
  if ( (unsigned __int8)(v2 - 48) <= 9u )
    return I_atoui(v1);
  result = 0;
  if ( v2 )
  {
    do
    {
      ++v1;
      result = v2 + 31 * result;
      v2 = *v1;
    }
    while ( *v1 );
  }
  return result;
}

/*
==============
Com_DDL_CreateContext
==============
*/
bool Com_DDL_CreateContext(void *buffer, int len, const DDLDef *def, DDLContext *const ddlContext, void (*accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  bool result; 

  result = DDL_CreateContext(buffer, len, def, ddlContext, accessCB, userData);
  if ( !result )
  {
    Com_PrintWarning(28, "Unable to create context from buffer.  Resetting buffer instead.\n");
    return DDL_ResetContext(buffer, len, def, ddlContext, accessCB, userData);
  }
  return result;
}

/*
==============
Com_DDL_DoesAssetExist
==============
*/
bool Com_DDL_DoesAssetExist(const char *name)
{
  return DB_XAssetExists(ASSET_TYPE_DDL, name) != 0;
}

/*
==============
Com_DDL_FindAsset
==============
*/
DDLFile *Com_DDL_FindAsset(const char *name, bool allowCreateDefault)
{
  return DB_FindXAssetHeader(ASSET_TYPE_DDL, name, allowCreateDefault).ddlFile;
}

/*
==============
Com_DDL_FlagModifiedBytes
==============
*/
char Com_DDL_FlagModifiedBytes(const DDLState *state, unsigned __int8 *modifiedFlags, StatsGroup statsGroup)
{
  int headerBitSize; 
  unsigned int StatsGroupOffset; 
  DDLMember *member; 
  unsigned int v8; 
  int bitSize; 
  int v10; 
  int v11; 
  int i; 
  int v13; 
  char v14; 

  if ( modifiedFlags )
  {
    headerBitSize = state->ddlDef->headerBitSize;
    StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset(statsGroup);
    member = state->member;
    v8 = StatsGroupOffset + 4;
    bitSize = member->bitSize;
    if ( state->arrayIndex != -1 )
      bitSize /= member->arraySize;
    v10 = headerBitSize + state->offset;
    v11 = v8 + (v10 + bitSize) / 8;
    for ( i = v8 + v10 / 8; i <= v11; modifiedFlags[v13 >> 3] |= 1 << v14 )
    {
      v13 = i;
      v14 = i & 7;
      if ( i < 0 )
      {
        v13 = i + 7;
        v14 -= 8;
      }
      ++i;
    }
  }
  return 1;
}

/*
==============
Com_DDL_GetByteVec2
==============
*/
void Com_DDL_GetByteVec2(const DDLState *state, DDLContext *context, vec2_t *vec)
{
  int v4; 
  float Byte; 
  __int64 v10; 
  __int64 v11; 
  DDLState toState; 

  v4 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.arrayIndex = -1;
  do
  {
    DDL_MoveToIndex(state, &toState, v4);
    Byte = (float)DDL_GetByte(&toState, context);
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    vec->v[0] = Byte;
    vec = (vec2_t *)((char *)vec + 4);
    ++v4;
  }
  while ( v4 < 2 );
}

/*
==============
Com_DDL_GetInt
==============
*/
int Com_DDL_GetInt(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 
  DDLType Type; 
  DDLState state; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, statsGroup);
  if ( !DDL_MoveToPathByHash(&state, &state, navHashCount, navHashes) )
  {
    Com_DDL_GetPrintStrings(navHashes, navHashCount);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003410, 394i64);
  }
  Type = DDL_GetType(&state);
  if ( (unsigned int)Type <= DDL_INT_TYPE )
    return DDL_GetInt(&state, buffer);
  Com_DDL_GetPrintStrings(navHashes, navHashCount);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003560, 397i64, (unsigned int)Type, *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef);
  return 0;
}

/*
==============
Com_DDL_GetLookup
==============
*/
void Com_DDL_GetLookup(DDLState *state, const unsigned int *navHashes, int navHashCount, const StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 

  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, state, statsGroup);
  if ( !DDL_MoveToPathByHash(state, state, navHashCount, navHashes) )
  {
    Com_DDL_GetPrintStrings(navHashes, navHashCount);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003410, 394i64);
  }
}

/*
==============
Com_DDL_GetPrintStrings
==============
*/
void Com_DDL_GetPrintStrings(const unsigned int *navHashes, int navHashCount)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v2 = navHashCount;
  Com_Printf(16, "Tried to get data: ");
  v4 = v2;
  if ( (int)v2 > 0 )
  {
    v5 = 0i64;
    do
      Com_Printf(16, "%u ", navHashes[v5++]);
    while ( v5 < v4 );
  }
  Com_Printf(16, "\n");
}

/*
==============
Com_DDL_GetRawBufferFromText
==============
*/
RawFile *Com_DDL_GetRawBufferFromText(const char *fileName, char *rawTextBuf)
{
  const RawFile *rawfile; 

  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, fileName, 1).rawfile;
  if ( rawfile->len >= 0x18000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4536, ASSERT_TYPE_ASSERT, "(rawTextFile->len < sizeof( MaxRawTextBuf ))", "%s\n\t%s is too large for our read buffer (size = %zu)", "rawTextFile->len < sizeof( MaxRawTextBuf )", fileName, 0x18000ui64) )
    __debugbreak();
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, fileName) )
    return 0i64;
  DB_GetRawBuffer(rawfile, rawTextBuf, 98304);
  return (RawFile *)rawfile;
}

/*
==============
Com_DDL_GetShortVec3
==============
*/
void Com_DDL_GetShortVec3(const DDLState *state, DDLContext *context, vec3_t *vec)
{
  int v4; 
  float Short; 
  __int64 v10; 
  __int64 v11; 
  DDLState toState; 

  v4 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.arrayIndex = -1;
  do
  {
    DDL_MoveToIndex(state, &toState, v4);
    Short = (float)(__int16)DDL_GetShort(&toState, context);
    if ( (unsigned int)v4 >= 3 )
    {
      LODWORD(v11) = 3;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    vec->v[0] = Short;
    vec = (vec3_t *)((char *)vec + 4);
    ++v4;
  }
  while ( v4 < 3 );
}

/*
==============
Com_DDL_GetString
==============
*/
const char *Com_DDL_GetString(const unsigned int *navHashes, int navHashCount, const DDLContext *buffer, const StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 
  DDLType Type; 
  DDLState state; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, statsGroup);
  if ( !DDL_MoveToPathByHash(&state, &state, navHashCount, navHashes) )
  {
    Com_DDL_GetPrintStrings(navHashes, navHashCount);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003410, 394i64);
  }
  Type = DDL_GetType(&state);
  if ( Type == DDL_STRING_TYPE )
    return DDL_GetString(&state, buffer);
  if ( Type == DDL_ENUM_TYPE )
    return DDL_GetEnum(&state, buffer);
  Com_DDL_GetPrintStrings(navHashes, navHashCount);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003460, 395i64, (unsigned int)Type, *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef);
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Com_DDL_LoadAsset
==============
*/
DDLDef *Com_DDL_LoadAsset(const char *fileName)
{
  DDLFile *Asset; 

  Asset = DDL::DDL_GetAsset(fileName);
  if ( !Asset )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144004D38, 401i64, fileName);
  if ( !Asset->ddlDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4221, ASSERT_TYPE_ASSERT, "(ddlFile->ddlDef)", (const char *)&queryFormat, "ddlFile->ddlDef") )
    __debugbreak();
  return Asset->ddlDef;
}

/*
==============
Com_DDL_NavigateFromCmd
==============
*/
bool Com_DDL_NavigateFromCmd(const DDLDef *def, int (*argc)(), const char *(*argv)(int), DDLState *state, int ignoreArgs)
{
  int v10; 
  unsigned int *v11; 
  const char *v12; 
  char *v13; 
  char v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  DDLState result; 
  unsigned int path[16]; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4430, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4431, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( (int)(((__int64 (*)(void))argc)() - 1) <= 16 )
  {
    v10 = 1;
    if ( argc() > 1 )
    {
      v11 = path;
      do
      {
        v12 = argv(v10);
        v13 = (char *)v12;
        v14 = *v12;
        if ( (unsigned __int8)(*v12 - 48) > 9u )
        {
          v15 = 0;
          if ( v14 )
          {
            do
            {
              ++v13;
              v16 = v14;
              v14 = *v13;
              v15 = v16 + 31 * v15;
            }
            while ( *v13 );
          }
        }
        else
        {
          v15 = I_atoui(v12);
        }
        *v11 = v15;
        ++v10;
        ++v11;
      }
      while ( v10 < argc() );
    }
    *state = *DDL_GetRootState(&result, def);
    v17 = argc();
    return DDL_MoveToPathByHash(state, state, v17 - ignoreArgs - 1, path);
  }
  else
  {
    Com_Printf(16, "Too many arguments: max %zu\n", 0x10ui64);
    return 0;
  }
}

/*
==============
Com_DDL_PrintState
==============
*/
void Com_DDL_PrintState(const DDLState *state, const DDLContext *buffer)
{
  DDLType Type; 
  unsigned int Int; 
  unsigned __int64 UInt64; 
  double Float; 
  const char *String; 
  const char *Enum; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4380, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4381, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !buffer->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4382, ASSERT_TYPE_ASSERT, "(buffer->buff)", (const char *)&queryFormat, "buffer->buff") )
    __debugbreak();
  if ( DDL_StateIsLeaf(state) )
  {
    Type = DDL_GetType(state);
    switch ( Type )
    {
      case DDL_BYTE_TYPE:
      case DDL_SHORT_TYPE:
      case DDL_UINT_TYPE:
      case DDL_INT_TYPE:
        Int = DDL_GetInt(state, buffer);
        Com_Printf(16, "%d\n", Int);
        break;
      case DDL_UINT64_TYPE:
        UInt64 = DDL_GetUInt64(state, buffer);
        Com_Printf(16, "%zu\n", UInt64);
        break;
      case DDL_FLOAT_TYPE:
        Float = DDL_GetFloat(state, buffer);
        goto LABEL_16;
      case DDL_FIXEDPOINT_TYPE:
        Float = DDL_GetFixedPoint(state, buffer);
LABEL_16:
        Com_Printf(16, "%f\n", *(float *)&Float);
        break;
      case DDL_STRING_TYPE:
        String = DDL_GetString(state, buffer);
        Com_Printf(16, "%s\n", String);
        break;
      case DDL_ENUM_TYPE:
        Enum = DDL_GetEnum(state, buffer);
        Com_Printf(16, "%s\n", Enum);
        break;
      default:
        Com_Printf(16, "Unknown type (%d).\n", (unsigned int)Type);
        break;
    }
  }
  else
  {
    Com_Printf(16, "non leaf node named \"%s\"\n", state->member->name);
  }
}

/*
==============
Com_DDL_ReadFromDBText
==============
*/
_BOOL8 Com_DDL_ReadFromDBText(DDLContext *buffer, const char *fileName)
{
  char *m_ptr; 
  RawFile *RawBufferFromText; 
  bool v6; 
  Mem_LargeLocal v8; 

  Mem_LargeLocal::Mem_LargeLocal(&v8, 0x18000ui64, "MaxRawTextBuf rawTextBuf");
  m_ptr = (char *)v8.m_ptr;
  RawBufferFromText = Com_DDL_GetRawBufferFromText(fileName, (char *)v8.m_ptr);
  if ( RawBufferFromText )
    v6 = Com_DDL_ReadFromText(buffer, m_ptr, RawBufferFromText->len);
  else
    v6 = 0;
  Mem_LargeLocal::~Mem_LargeLocal(&v8);
  return v6;
}

/*
==============
Com_DDL_ReadFromText
==============
*/
char Com_DDL_ReadFromText(DDLContext *buffer, char *text, const int length)
{
  const char *m_ptr; 
  int OnlyFromText; 
  __int64 v9; 
  int v10; 
  char *v11; 
  char *v12; 
  char v13; 
  char v14; 
  DDLState fromState; 
  __int64 v17; 
  Mem_LargeLocal v18; 
  DDLState result; 
  char *path[16]; 
  char val[64]; 
  char v22; 

  v17 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v18, 0x22180ui64, "MaxArrayTextBuf arrayText");
  m_ptr = (const char *)v18.m_ptr;
  OnlyFromText = Com_DDL_ReadOnlyFromText((char (*)[1091])v18.m_ptr, text, length);
  if ( OnlyFromText <= 0 )
    goto LABEL_25;
  v9 = (unsigned int)OnlyFromText;
  do
  {
    fromState.isValid = 0;
    fromState.offset = 0;
    fromState.arrayIndex = -1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&fromState.member = _XMM0;
    if ( j_sscanf(m_ptr, "%s = %s", &v22, val) < 2 )
    {
      Com_PrintWarning(28, "SetDDLFromString: in %s bad string '%s'.\n", buffer->def->name, m_ptr);
      goto LABEL_24;
    }
    v10 = 0;
    v11 = &v22;
    v12 = NULL;
    v13 = 0;
    while ( 1 )
    {
      if ( !v12 )
      {
        if ( *v11 != 91 )
          v12 = v11;
        goto LABEL_17;
      }
      v14 = *v11;
      if ( *v11 != 93 )
        break;
      *v11 = 0;
LABEL_18:
      if ( !++v11 )
        goto LABEL_21;
    }
    if ( v14 != 46 && v14 != 32 )
    {
      if ( !v14 )
      {
        v13 = 1;
        goto LABEL_13;
      }
LABEL_17:
      if ( v13 )
        goto LABEL_21;
      goto LABEL_18;
    }
LABEL_13:
    *v11 = 0;
    if ( v10 != 16 )
    {
      path[v10] = v12;
      v12 = NULL;
      ++v10;
      goto LABEL_17;
    }
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144005078, 402i64);
LABEL_21:
    fromState = *DDL_GetRootState(&result, buffer->def);
    if ( DDL_MoveToPath(&fromState, &fromState, v10, (const char **)path) )
      DDL_SetValueStr(&fromState, buffer, val);
    else
      Com_PrintWarning(28, "SetDDLFromString: could not move to path.\n");
LABEL_24:
    m_ptr += 1091;
    --v9;
  }
  while ( v9 );
LABEL_25:
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
  return 1;
}

/*
==============
Com_DDL_ReadOnlyFromDBText
==============
*/
__int64 Com_DDL_ReadOnlyFromDBText(char (*arrayText)[1091], const char *fileName)
{
  char *m_ptr; 
  RawFile *RawBufferFromText; 
  unsigned int OnlyFromText; 
  Mem_LargeLocal v8; 

  Mem_LargeLocal::Mem_LargeLocal(&v8, 0x18000ui64, "MaxRawTextBuf rawTextBuf");
  m_ptr = (char *)v8.m_ptr;
  RawBufferFromText = Com_DDL_GetRawBufferFromText(fileName, (char *)v8.m_ptr);
  if ( RawBufferFromText )
    OnlyFromText = Com_DDL_ReadOnlyFromText(arrayText, m_ptr, RawBufferFromText->len);
  else
    OnlyFromText = 0;
  Mem_LargeLocal::~Mem_LargeLocal(&v8);
  return OnlyFromText;
}

/*
==============
Com_DDL_ReadOnlyFromText
==============
*/
__int64 Com_DDL_ReadOnlyFromText(char (*arrayText)[1091], char *text, const int length)
{
  unsigned int v3; 
  char *v4; 
  char *i; 
  char *v7; 
  char *v8; 
  char v9; 

  v3 = 0;
  v4 = &text[length];
  if ( text < v4 )
  {
    do
    {
      for ( i = text; *i != 10; ++i )
      {
        if ( i >= v4 )
          break;
      }
      *i = 0;
      v7 = i + 1;
      v8 = &(*arrayText)[1091i64 * (int)v3 - (_QWORD)text];
      do
      {
        v9 = *text;
        text[(_QWORD)v8] = *text;
        ++text;
      }
      while ( v9 );
      ++v3;
      text = v7;
    }
    while ( v7 < v4 );
  }
  return v3;
}

/*
==============
Com_DDL_SetByteVec2
==============
*/
void Com_DDL_SetByteVec2(const DDLState *state, DDLContext *context, const vec2_t *vec)
{
  int v4; 
  __int64 v11; 
  __int64 v12; 
  DDLState toState; 

  v4 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.arrayIndex = -1;
  _XMM6 = 0i64;
  do
  {
    DDL_MoveToIndex(state, &toState, v4);
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v12) = 2;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm6, xmm2, 1 }
    DDL_SetByte(&toState, context, (int)*(float *)&_XMM0);
    ++v4;
    vec = (const vec2_t *)((char *)vec + 4);
  }
  while ( v4 < 2 );
}

/*
==============
Com_DDL_SetDataFromString
==============
*/
bool Com_DDL_SetDataFromString(DDLState *state, DDLContext *buffer, const char *value)
{
  __int64 v7; 
  int v8; 
  bool result; 
  unsigned __int64 v10; 

  switch ( DDL_GetType(state) )
  {
    case DDL_BYTE_TYPE:
    case DDL_SHORT_TYPE:
    case DDL_UINT_TYPE:
    case DDL_INT_TYPE:
      v7 = I_atoi64(value);
      v8 = truncate_cast<int,__int64>(v7);
      result = DDL_SetInt(state, buffer, v8);
      break;
    case DDL_UINT64_TYPE:
      v10 = I_atoui64(value);
      result = DDL_SetUInt64(state, buffer, v10);
      break;
    case DDL_FLOAT_TYPE:
      *(double *)&_XMM0 = atof(value);
      __asm { vcvtsd2ss xmm2, xmm0, xmm0; val }
      result = DDL_SetFloat(state, buffer, *(float *)&_XMM2);
      break;
    case DDL_FIXEDPOINT_TYPE:
      *(double *)&_XMM0 = atof(value);
      __asm { vcvtsd2ss xmm2, xmm0, xmm0; val }
      result = DDL_SetFixedPoint(state, buffer, *(const float *)&_XMM2);
      break;
    case DDL_STRING_TYPE:
      result = DDL_SetString(state, buffer, value);
      break;
    case DDL_ENUM_TYPE:
      result = DDL_SetEnum(state, buffer, value);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
Com_DDL_SetInt
==============
*/
_BOOL8 Com_DDL_SetInt(const unsigned int *navHashes, int navHashCount, int value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 
  DDLType Type; 
  DDLState state; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, statsGroup);
  if ( !DDL_MoveToPathByHash(&state, &state, navHashCount, navHashes) )
  {
    Com_DDL_GetPrintStrings(navHashes, navHashCount);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003410, 394i64);
  }
  Type = DDL_GetType(&state);
  Com_DDL_FlagModifiedBytes(&state, modifiedFlags, statsGroup);
  if ( (unsigned int)Type <= DDL_INT_TYPE )
    return DDL_SetInt(&state, buffer, value);
  Com_DDL_GetPrintStrings(navHashes, navHashCount);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440034E0, 398i64, (unsigned int)Type, *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef);
  return 0i64;
}

/*
==============
Com_DDL_SetShortVec3
==============
*/
void Com_DDL_SetShortVec3(const DDLState *state, DDLContext *context, const vec3_t *vec)
{
  int v4; 
  __int64 v11; 
  __int64 v12; 
  DDLState toState; 

  v4 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.arrayIndex = -1;
  _XMM6 = 0i64;
  do
  {
    DDL_MoveToIndex(state, &toState, v4);
    if ( (unsigned int)v4 >= 3 )
    {
      LODWORD(v12) = 3;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm6, xmm2, 1 }
    DDL_SetShort(&toState, context, (int)*(float *)&_XMM0);
    ++v4;
    vec = (const vec3_t *)((char *)vec + 4);
  }
  while ( v4 < 3 );
}

/*
==============
Com_DDL_SetString
==============
*/
_BOOL8 Com_DDL_SetString(const unsigned int *navHashes, int navHashCount, const char *value, DDLContext *buffer, unsigned __int8 *modifiedFlags, const StatsGroup statsGroup)
{
  const DDLDef *DefForStatsGroup; 
  DDLType Type; 
  DDLState state; 

  state.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, statsGroup);
  if ( !DDL_MoveToPathByHash(&state, &state, navHashCount, navHashes) )
  {
    Com_DDL_GetPrintStrings(navHashes, navHashCount);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003410, 394i64);
  }
  Type = DDL_GetType(&state);
  Com_DDL_FlagModifiedBytes(&state, modifiedFlags, statsGroup);
  if ( Type == DDL_STRING_TYPE )
    return DDL_SetString(&state, buffer, value);
  if ( Type == DDL_ENUM_TYPE )
    return DDL_SetEnum(&state, buffer, value);
  Com_DDL_GetPrintStrings(navHashes, navHashCount);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440034E0, 396i64, (unsigned int)Type, *(_QWORD *)&state.isValid, *(_QWORD *)&state.arrayIndex, state.member, state.ddlDef);
  return 0i64;
}

/*
==============
Com_DDL_WriteAsText
==============
*/
void Com_DDL_WriteAsText(const DDLContext *buffer, const char *fileName, const char *dirName)
{
  fileHandle_t h; 

  h.handle.handle = (__int64)FS_FOpenFileWriteToDir((fileHandle_t *)fileName, dirName, dirName);
  if ( h.handle.handle == -1 )
  {
    Com_PrintError(28, "Could not open %s/%s for writing\n", dirName, fileName);
  }
  else
  {
    DDL_WriteAsText(buffer, AppendLineToFile, 1, " =", &h);
    FS_FCloseFile(h);
  }
}

/*
==============
Com_LocallyObfuscateStatsGroup
==============
*/
void Com_LocallyObfuscateStatsGroup(DDLContext *context, unsigned __int8 *statsBuffer, const StatsGroup statsGroup, unsigned int *outRandomInt)
{
  unsigned int StatsGroupSize; 
  bdRandom v9; 

  do
  {
    if ( !randomNumGenInit )
    {
      if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
        OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
      randomNumGenInit = 1;
    }
    if ( BCryptGenRandom_0(s_provider, (PUCHAR)outRandomInt, 4u, 0) )
    {
      if ( *outRandomInt )
        break;
      if ( outRandomInt[1] )
        continue;
    }
    bdRandom::bdRandom(&v9);
    bdRandom::nextUBytes(&v9, (unsigned __int8 *)outRandomInt, 4);
    bdRandom::~bdRandom(&v9);
  }
  while ( !*outRandomInt );
  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  DDL_LocallyObfuscate(context, statsBuffer, StatsGroupSize - 4, *outRandomInt);
  if ( !context->obfuscated )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 560, ASSERT_TYPE_ASSERT, "(context->obfuscated)", (const char *)&queryFormat, "context->obfuscated", -2i64) )
      __debugbreak();
    if ( !context->obfuscated )
      Com_PrintWarning(14, "WARNING: Com_LocallyObfuscateStatsGroup - DDL_LocallyObfuscate Could not obfuscate stats in memory: statsGroup %i\n", (unsigned int)statsGroup);
  }
}

/*
==============
Com_LocallyObfuscateStatsGroupRange
==============
*/
void Com_LocallyObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  Com_LocallyObfuscateStatsGroupRange_Internal(controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource, (unsigned __int8 *)context->buff, 1);
}

/*
==============
Com_LocallyObfuscateStatsGroupRange_Internal
==============
*/
void Com_LocallyObfuscateStatsGroupRange_Internal(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource, unsigned __int8 *statsStart, const bool obfuscate)
{
  unsigned int StatsGroupSize; 
  int v14; 
  int v15; 
  int v16; 
  signed int v17; 
  signed int v18; 
  bool v19; 
  const unsigned __int8 *v20; 
  const char *v21; 
  __int64 rangeSizea; 

  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  v14 = rangeSize;
  v15 = StatsGroupSize - startByteIndex + Com_PlayerData_GetStatsGroupOffset(statsGroup);
  if ( v15 < rangeSize )
    v14 = v15;
  v16 = 0;
  v17 = 0;
  v18 = Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
  if ( rangeStart < statsStart )
  {
    v16 = (_DWORD)statsStart - (_DWORD)rangeStart;
    if ( &rangeStart[v14] <= statsStart )
      v16 = v14;
  }
  if ( v16 > 0 && v16 < v14 || rangeStart >= statsStart && rangeStart < &statsStart[v18] )
  {
    v17 = v14;
    if ( v16 <= 0 )
    {
      v19 = v18 < v14;
    }
    else
    {
      v17 = v14 - v16;
      v19 = v18 < v14 - v16;
    }
    if ( v19 )
      v17 = v18;
  }
  if ( v16 <= 0 )
    v16 = 0;
  if ( v17 > 0 )
  {
    v20 = &rangeStart[v16];
    if ( obfuscate )
    {
      DDL_LocallyObfuscateRange(context, statsStart, v18, v20, v17);
      v21 = "Com_LocallyObfuscateStatsGroupRange - DDL_LocallyObfuscateRange: Obfuscating stats size %i at address %p: controller %i, statsGroup %i, statsSource %i\n";
    }
    else
    {
      DDL_LocallyUnObfuscateRange(context, statsStart, v18, v20, v17);
      v21 = "Com_LocallyObfuscateStatsGroupRange - DDL_LocallyUnObfuscateRange: Unobfuscating stats size %i at address %p: controller %i, statsGroup %i, statsSource %i\n";
    }
    LODWORD(rangeSizea) = controllerIndex;
    Com_Printf(14, v21, (unsigned int)v17, &rangeStart[v16], rangeSizea, statsGroup, statsSource);
    v16 += v17;
  }
  if ( v16 != rangeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 783, ASSERT_TYPE_ASSERT, "(bytesCopied == rangeSize)", (const char *)&queryFormat, "bytesCopied == rangeSize") )
    __debugbreak();
}

/*
==============
Com_LocallyUnObfuscateStatsGroup
==============
*/
void Com_LocallyUnObfuscateStatsGroup(DDLContext *context, unsigned __int8 *statsBuffer, const StatsGroup statsGroup)
{
  unsigned int StatsGroupSize; 

  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  DDL_LocallyUnObfuscate(context, statsBuffer, StatsGroupSize - 4);
  if ( context->obfuscated )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 594, ASSERT_TYPE_ASSERT, "(!context.obfuscated)", (const char *)&queryFormat, "!context.obfuscated") )
      __debugbreak();
    if ( context->obfuscated )
      Com_PrintWarning(0, "WARNING: Com_LocallyUnObfuscateStatsGroup - DDL_LocallyUnObfuscate Could not unobfuscate stats in memory: statsGroup %i\n", (unsigned int)statsGroup);
  }
}

/*
==============
Com_LocallyUnObfuscateStatsGroupIntoBuffer_Internal
==============
*/
void Com_LocallyUnObfuscateStatsGroupIntoBuffer_Internal(unsigned __int8 *buf, const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource, const unsigned __int8 *statsStart)
{
  StatsGroup StatsGroupByByteOffset; 
  int v12; 
  unsigned int StatsGroupSize; 
  int v14; 
  int v15; 
  signed int v16; 
  signed int v17; 
  int v18; 
  StatsGroup v19; 
  char *fmt; 
  char *fmta; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex + rangeSize - 1);
  if ( Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex) != StatsGroupByByteOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 680, ASSERT_TYPE_ASSERT, "(Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 ))", (const char *)&queryFormat, "Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 )") )
    __debugbreak();
  v12 = 0;
  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  v14 = rangeSize;
  v15 = StatsGroupSize - startByteIndex + Com_PlayerData_GetStatsGroupOffset(statsGroup);
  if ( v15 < rangeSize )
    v14 = v15;
  v16 = 0;
  v17 = Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
  if ( rangeStart >= statsStart )
  {
    if ( rangeStart >= &statsStart[v17] )
      goto LABEL_20;
    v16 = v14;
    if ( v17 < v14 )
      v16 = v17;
  }
  else
  {
    v18 = (_DWORD)statsStart - (_DWORD)rangeStart;
    if ( &rangeStart[v14] <= statsStart )
      v18 = v14;
    if ( v18 > 0 )
    {
      if ( v18 < v14 )
      {
        v16 = v14 - v18;
        if ( v17 < v14 - v18 )
          v16 = v17;
      }
      memcpy_0(buf, rangeStart, v18);
      v19 = statsGroup;
      LODWORD(v22) = statsGroup;
      LODWORD(fmt) = controllerIndex;
      Com_Printf(14, "Com_LocallyUnObfuscateStatsGroupIntoMessage: Copying clear text stats size %i from address %p: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v18, rangeStart, fmt, v22, statsSource);
      v12 = v18;
      goto LABEL_18;
    }
  }
  v19 = statsGroup;
LABEL_18:
  if ( v16 > 0 )
  {
    DDL_LocallyUnObfuscateRangeIntoDest(&buf[v12], context, statsStart, v17, &rangeStart[v12], v16);
    LODWORD(v24) = statsSource;
    LODWORD(v23) = v19;
    LODWORD(fmta) = controllerIndex;
    Com_Printf(14, "Com_LocallyUnObfuscateStatsGroupIntoMessage: UnObfuscating stats size %i from address %p: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v16, &rangeStart[v12], fmta, v23, v24);
    v12 += v16;
  }
LABEL_20:
  if ( v12 != rangeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 708, ASSERT_TYPE_ASSERT, "(bytesCopied == rangeSize)", (const char *)&queryFormat, "bytesCopied == rangeSize") )
    __debugbreak();
}

/*
==============
Com_LocallyUnObfuscateStatsGroupIntoMessage
==============
*/
void Com_LocallyUnObfuscateStatsGroupIntoMessage(msg_t *buf, const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  StatsGroup v13; 
  unsigned __int8 bufa[2480]; 

  if ( (unsigned int)rangeSize > 0x9AA )
  {
    v13 = 2474;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 716, ASSERT_TYPE_ASSERT, "( rangeSize ) <= ( sizeof( statsData ) )", "rangeSize not in [0, sizeof( statsData )]\n\t%u not in [0, %u]", rangeSize, v13) )
      __debugbreak();
  }
  Com_LocallyUnObfuscateStatsGroupIntoBuffer_Internal(bufa, controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource, (const unsigned __int8 *)context->buff);
  MSG_WriteData(buf, bufa, rangeSize);
  memset(bufa, 0, 0x9AAui64);
}

/*
==============
Com_LocallyUnObfuscateStatsGroupRange
==============
*/
void Com_LocallyUnObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, DDLContext *context, const StatsGroup statsGroup, const StatsSource statsSource)
{
  Com_LocallyObfuscateStatsGroupRange_Internal(controllerIndex, startByteIndex, rangeStart, rangeSize, context, statsGroup, statsSource, (unsigned __int8 *)context->buff, 0);
}

/*
==============
Com_ParseNavStrings
==============
*/
bool Com_ParseNavStrings(char *pStr, const char **navStrings, const int navStringMax, int *navStringCount)
{
  char *v7; 
  const char *v8; 
  char v9; 
  char v10; 
  __int64 v11; 

  v7 = pStr;
  if ( (!pStr || !navStrings || !navStringMax || !navStringCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4676, ASSERT_TYPE_ASSERT, "(pStr && navStrings && navStringMax && navStringCount)", (const char *)&queryFormat, "pStr && navStrings && navStringMax && navStringCount") )
    __debugbreak();
  v8 = NULL;
  *navStringCount = 0;
  v9 = 0;
  if ( !v7 )
    return *navStringCount != 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( !v8 )
    {
      if ( v10 != 91 )
        v8 = v7;
      goto LABEL_19;
    }
    if ( v10 != 93 )
      break;
    *v7 = 0;
LABEL_20:
    if ( !++v7 )
      return *navStringCount != 0;
  }
  if ( v10 != 46 && v10 != 32 )
  {
    if ( !v10 )
    {
      v9 = 1;
      goto LABEL_15;
    }
LABEL_19:
    if ( v9 )
      return *navStringCount != 0;
    goto LABEL_20;
  }
LABEL_15:
  *v7 = 0;
  v11 = *navStringCount;
  if ( (_DWORD)v11 != navStringMax )
  {
    navStrings[v11] = v8;
    v8 = NULL;
    ++*navStringCount;
    goto LABEL_19;
  }
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144005078, 402i64);
  return 0;
}

/*
==============
DecompressIntoBuffer
==============
*/
__int64 DecompressIntoBuffer(void *dest, int dest_size, const void *src, int src_len)
{
  __int64 v4; 
  void *m_ptr; 
  int v9; 
  Mem_LargeLocal v11; 
  db_z_stream_s stream; 

  v4 = src_len;
  Mem_LargeLocal::Mem_LargeLocal(&v11, 0x20000ui64, "DBZlibInflateBuf memory");
  m_ptr = v11.m_ptr;
  memset(&stream.total_in, 0, 68);
  stream.next_in = (unsigned __int8 *)src;
  stream.avail_in = v4;
  memset_0(v11.m_ptr, 0, 0x20000ui64);
  DB_Zip_InitThreadMemory(&stream, m_ptr, 0x20000);
  if ( db_inflateInit_(&stream, "1.1.4", 80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3470, ASSERT_TYPE_ASSERT, "((db_inflateInit_((&memStream), \"1.1.4\", sizeof(db_z_stream))) == (0))", (const char *)&queryFormat, "db_inflateInit( &memStream ) == DB_Z_OK", -2i64) )
    __debugbreak();
  stream.next_out = (unsigned __int8 *)dest;
  stream.avail_out = dest_size;
  if ( db_inflate(&stream, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3475, ASSERT_TYPE_ASSERT, "((db_inflate( &memStream, 2 )) == (1))", (const char *)&queryFormat, "db_inflate( &memStream, DB_Z_SYNC_FLUSH ) == DB_Z_STREAM_END") )
    __debugbreak();
  v9 = truncate_cast<int,__int64>(stream.next_out - (unsigned __int8 *)dest);
  if ( stream.next_in - (unsigned __int8 *)src != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3479, ASSERT_TYPE_ASSERT, "((char *)memStream.next_in - (const char*)src == src_len)", (const char *)&queryFormat, "(char *)memStream.next_in - (const char*)src == src_len") )
    __debugbreak();
  if ( v9 > dest_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3480, ASSERT_TYPE_ASSERT, "(dest_len <= dest_size)", (const char *)&queryFormat, "dest_len <= dest_size") )
    __debugbreak();
  if ( stream.avail_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3481, ASSERT_TYPE_ASSERT, "(!memStream.avail_in)", (const char *)&queryFormat, "!memStream.avail_in") )
    __debugbreak();
  if ( db_inflateEnd(&stream) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3483, ASSERT_TYPE_ASSERT, "((db_inflateEnd( &memStream )) == (0))", (const char *)&queryFormat, "db_inflateEnd( &memStream ) == DB_Z_OK") )
    __debugbreak();
  DB_Zip_ShutdownThreadMemory(&stream);
  Mem_LargeLocal::~Mem_LargeLocal(&v11);
  return (unsigned int)v9;
}

/*
==============
Fence_FilteredPlaylistsDependenciesUpdated
==============
*/
void Fence_FilteredPlaylistsDependenciesUpdated(int controllerIndex, bool value)
{
  if ( value )
    Playlist_UpdateFilters(controllerIndex);
}

/*
==============
Fence_PlaylistsDependenciesUpdated
==============
*/
void Fence_PlaylistsDependenciesUpdated(int controllerIndex, bool value)
{
  __int64 v2; 

  if ( value )
  {
    v2 = controllerIndex;
    if ( Live_IsConnectedToDemonware(controllerIndex) )
    {
      if ( LiveStorage_FetchPlaylists(v2) )
      {
        s_fencePlaylistsStatusCode[v2] = FIRST_PARTY_AUTHED;
        s_fencePlaylistsErrorCode[v2] = NONE;
      }
      else
      {
        s_fencePlaylistsStatusCode[v2] = LOGIN_DELAY;
      }
    }
  }
}

/*
==============
Fence_TimeSyncDependenciesUpdated
==============
*/
void Fence_TimeSyncDependenciesUpdated(int controllerIndex, bool value)
{
  DWServicesAccess *Instance; 
  int v4; 
  overlappedTask *OpenTaskSlot; 

  if ( value && Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, controllerIndex) && !TaskManager_TaskIsInProgressForController(&storageTasks, 3, controllerIndex) )
    {
      v4 = Sys_Milliseconds();
      if ( s_UTCLastInterval + s_UTCLastAttempt <= v4 )
      {
        OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, controllerIndex, 3);
        dwGetServerTime(controllerIndex, OpenTaskSlot, &bdServerTime);
        if ( OpenTaskSlot->u.remoteTask.m_ptr )
        {
          if ( s_UTCLastInterval )
          {
            if ( s_UTCLastInterval < 20000 )
              s_UTCLastInterval *= 5;
            s_UTCLastAttempt = v4;
          }
          else
          {
            s_UTCLastAttempt = v4;
            s_UTCLastInterval = 500;
          }
        }
        else if ( OpenTaskSlot->active )
        {
          TaskManager_ClearTask(OpenTaskSlot);
        }
      }
    }
  }
}

/*
==============
GetRecipeFromPackedPlaylist
==============
*/
__int64 GetRecipeFromPackedPlaylist(const char *gametype, void *dest, int dest_size)
{
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  char *v9; 
  int v10; 
  int v11; 
  int v13; 
  int v14; 
  unsigned __int64 v15; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer value; 
  __int64 v19; 
  bdJSONDeserializer v20; 
  char v21[4096]; 

  v19 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v20);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::parse(&v20, (const char *)s_playlistBuffer);
  v6 = 0;
  if ( bdJSONDeserializer::getArray(&v20, "gametypes", &value) )
  {
    v7 = 0;
    if ( value.m_count )
    {
      while ( 1 )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v17);
        bdJSONDeserializer::getElementByIndex(&value, v7, &v17);
        if ( bdJSONDeserializer::hasKey(&v17, "gametype") )
        {
          bdJSONDeserializer::getString(&v17, "gametype", v21, 0x1000u);
          v8 = 0x7FFFFFFFi64;
          v9 = v21;
          if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          do
          {
            v10 = (unsigned __int8)v9[gametype - v21];
            v11 = (unsigned __int8)*v9++;
            if ( !v8-- )
              break;
            if ( v10 != v11 )
            {
              v13 = v10 + 32;
              if ( (unsigned int)(v10 - 65) > 0x19 )
                v13 = v10;
              v10 = v13;
              v14 = v11 + 32;
              if ( (unsigned int)(v11 - 65) > 0x19 )
                v14 = v11;
              if ( v10 != v14 )
                goto LABEL_16;
            }
          }
          while ( v10 );
          if ( bdJSONDeserializer::hasKey(&v17, "recipe") )
            break;
        }
LABEL_16:
        bdJSONDeserializer::~bdJSONDeserializer(&v17);
        if ( ++v7 >= value.m_count )
          goto LABEL_21;
      }
      bdJSONDeserializer::getString(&v17, "recipe", (char *const)dest, dest_size);
      v15 = -1i64;
      do
        ++v15;
      while ( *((_BYTE *)dest + v15) );
      v6 = truncate_cast<int,unsigned __int64>(v15);
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
    }
  }
LABEL_21:
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v20);
  return v6;
}

/*
==============
InitRequiredTask
==============
*/
void InitRequiredTask(RequiredTask *task)
{
  *(_QWORD *)&task->interval = 500i64;
  *(_QWORD *)&task->failures = 0i64;
}

/*
==============
LiveStorage_ArePlaylistUpdatesPaused
==============
*/
_BOOL8 LiveStorage_ArePlaylistUpdatesPaused()
{
  return s_pausedFetchingPlaylists;
}

/*
==============
LiveStorage_AreStatsFetched
==============
*/
_BOOL8 LiveStorage_AreStatsFetched(int controllerIndex, StatsSource statsSource)
{
  return controllerStatData[controllerIndex].playerStats[statsSource].statsFetched;
}

/*
==============
LiveStorage_BeginGame
==============
*/
void LiveStorage_BeginGame(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v2; 
  __int64 v3; 
  playerStorageData *v4; 
  StatsSource *p_gameStatsSource; 
  StatsSource v6; 
  __int64 v7; 
  StatsSource ActiveStatsSource; 
  StatsSource v9; 
  LocalClientNum_t ClientFromController; 
  __int64 v11; 
  __int64 v12; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  v2 = ControllerFromClient;
  v3 = ControllerFromClient;
  v4 = &controllerStorageData[ControllerFromClient];
  p_gameStatsSource = &controllerStorageData[ControllerFromClient].gameStatsSource;
  if ( v4->useGameStatsSource )
  {
    v6 = *p_gameStatsSource;
    v4->useGameStatsSource = 0;
    if ( v6 != LiveStorage_GetActiveStatsSource(ControllerFromClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2487, ASSERT_TYPE_ASSERT, "( ( controllerStorageData[controllerIndex].gameStatsSource == LiveStorage_GetActiveStatsSource( controllerIndex ) ) )", "( controllerStorageData[controllerIndex].gameStatsSource ) = %i", v6) )
      __debugbreak();
  }
  else
  {
    *p_gameStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  }
  v4->useGameStatsSource = 1;
  v7 = 220828 * v3 + 77072i64 * (int)LiveStorage_GetActiveStatsSource(v2);
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v7) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v7) )
  {
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(v2);
    v9 = ActiveStatsSource;
    if ( ActiveStatsSource )
    {
      if ( ActiveStatsSource != STATS_OFFLINE )
      {
        LODWORD(v12) = ActiveStatsSource;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1170, ASSERT_TYPE_ASSERT, "( ( statsSource == STATS_ONLINE || statsSource == STATS_OFFLINE ) )", "( statsSource ) = %i", v12) )
          __debugbreak();
      }
      ClientFromController = CL_Mgr_GetClientFromController(v2);
      if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144002390, 392i64);
      LiveStorage_ReadStats(v2);
    }
    else
    {
      CL_Mgr_GetClientFromController(v2);
      Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() blocking on stats download.\n");
      do
      {
        Durango_RESTFrame();
        DW_Frame(v2);
      }
      while ( dwGetLogOnStatus(v2) != DW_LIVE_CONNECTED );
      LiveStorage_DownloadStats(v2);
      LiveStorage_FinishDownloadingStats(v2);
      Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() done.\n");
    }
    v11 = 220828 * v3 + 77072i64 * (int)LiveStorage_GetActiveStatsSource(v2);
    if ( (!*(&controllerStatData[0].playerStats[0].statsFetched + v11) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v11)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1182, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStats( controllerIndex ))", "%s\n\tcontroller %i, stats source %i", "LiveStorage_DoWeHaveStats( controllerIndex )", v2, v9) )
      __debugbreak();
  }
}

/*
==============
LiveStorage_CheckConnection
==============
*/
char LiveStorage_CheckConnection(const int controllerIndex)
{
  if ( Live_IsUserSignedInToLive(controllerIndex) && Live_IsUserSignedInToDemonware(controllerIndex) )
    return 1;
  Com_PrintError(16, "Tried to perform a DW operation without a connection to LSP and DW.\n");
  return 0;
}

/*
==============
LiveStorage_CheckNotResettingStats
==============
*/
void LiveStorage_CheckNotResettingStats(const int controllerIndex)
{
  if ( controllerStorageData[controllerIndex].resettingStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1434, ASSERT_TYPE_ASSERT, "(!controllerStorageData[controllerIndex].resettingStats)", (const char *)&queryFormat, "!controllerStorageData[controllerIndex].resettingStats") )
    __debugbreak();
}

/*
==============
LiveStorage_CheckOngoingSessionTasks
==============
*/
void LiveStorage_CheckOngoingSessionTasks(void)
{
  char *Value; 
  int *v1; 
  _QWORD *v2; 
  char *v3; 
  int *v4; 
  unsigned __int64 v5; 
  ThreadContext CurrentThreadContext; 
  int v7; 
  bool *p_active; 
  int v9; 
  taskCompleteResults ServerTimeComplete; 
  int v11; 
  int v12; 
  taskCompleteResults v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 

  Value = (char *)Sys_GetValue(0);
  v1 = (int *)(Value + 34616);
  if ( (unsigned int)(*((_DWORD *)Value + 8654) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 8654) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v1 >= 3 )
  {
    LODWORD(v16) = 3;
    LODWORD(v15) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v2 = Value + 2088;
  v3 = Value + 40;
  if ( *v2 < (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v2 += 8i64;
  if ( *v2 >= (unsigned __int64)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v2 = v1;
  if ( *v2 <= (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v4 = &v1[*v1 + 2];
  v5 = __rdtsc();
  *v4 = v5;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v7 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 813, NULL, 0);
  p_active = &storageTasks.tasks[0].active;
  do
  {
    if ( *p_active )
    {
      v9 = *((_DWORD *)p_active - 1);
      switch ( v9 )
      {
        case 1:
          if ( LiveStorage_MotdFetchComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error getting motd\n");
          break;
        case 2:
          if ( v9 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 371, ASSERT_TYPE_ASSERT, "(task->type == TASK_LOGPRESTIGE)", (const char *)&queryFormat, "task->type == TASK_LOGPRESTIGE") )
            __debugbreak();
          v13 = dwRecordEventComplete((overlappedTask *const)(p_active - 28));
          if ( v13 )
          {
            if ( v13 == TASK_ERROR )
              Com_PrintWarning(16, "Unable to log challenge data\n");
            TaskManager_ClearTask((overlappedTask *)(p_active - 28));
          }
          break;
        case 3:
          if ( v9 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3319, ASSERT_TYPE_ASSERT, "(task->type == TASK_SYNCTIME)", (const char *)&queryFormat, "task->type == TASK_SYNCTIME") )
            __debugbreak();
          ServerTimeComplete = dwGetServerTimeComplete(p_active[1], (overlappedTask *const)(p_active - 28));
          if ( ServerTimeComplete == TASK_COMPLETE )
          {
            TaskManager_ClearTask((overlappedTask *)(p_active - 28));
            s_UTCOffset = *((_DWORD *)&bdServerTime.__vftable + 4) - _time64(NULL);
            v11 = Sys_Milliseconds();
            v12 = p_active[1];
            s_UTCSyncTimeMs = v11;
            s_UTCSynced = 1;
            LiveTracker_RecordRecentlyActive(v12);
          }
          else if ( ServerTimeComplete == TASK_ERROR )
          {
            if ( *p_active )
              TaskManager_ClearTask((overlappedTask *)(p_active - 28));
            Com_PrintWarning(16, "DW GetServerTime() failed!\n");
            Com_Printf(16, "Error getting server time\n");
          }
          break;
        case 4:
          if ( LiveStorage_CS_GetListingComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error getting listing of files\n");
          break;
        case 5:
          if ( LiveStorage_CS_GetDescriptorsComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error getting descriptors\n");
          break;
        case 6:
          if ( LiveStorage_CS_SearchComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error searching file share\n");
          break;
        case 7:
          if ( LiveStorage_CS_ReadFileComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error reading file\n");
          break;
        case 8:
          if ( LiveStorage_CS_RemoveFileComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error removing file\n");
          break;
        case 9:
          if ( LiveStorage_CS_WriteFileComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error writing file\n");
          break;
        case 10:
          if ( LiveStorage_CS_SetTagsComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error setting tags\n");
          break;
        case 11:
          if ( LiveStorage_CS_CopyFromOtherUserComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error copying file from another user\n");
          break;
        case 12:
          if ( LiveStorage_CS_UploadSummaryMetadataComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error uploading summary metadata.\n");
          break;
        case 13:
          if ( LiveStorage_CS_DownloadSummaryDataComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error download summary data.\n");
          break;
        case 14:
          if ( LiveStorage_CS_ListAllPublisherFilesComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error listing content server publisher files\n");
          break;
        case 15:
          if ( LiveStorage_CS_ReadPublisherFileComplete(v7) == TASK_ERROR )
            Com_Printf(16, "Error downloading content server publisher file\n");
          break;
        case 16:
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3192, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This should be unused");
          goto LABEL_66;
        default:
          LODWORD(v15) = *((_DWORD *)p_active - 1);
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3219, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown live storage task type %i\n", v15);
LABEL_66:
          if ( v14 )
            __debugbreak();
          break;
      }
    }
    ++v7;
    p_active += 40;
  }
  while ( v7 < 32 );
  Profile_EndInternal(NULL);
}

/*
==============
LiveStorage_CheckPeriodicChallengeUpdate
==============
*/
void LiveStorage_CheckPeriodicChallengeUpdate(const int controllerIndex)
{
  __int64 v2; 
  LocalClientNum_t ClientFromController; 
  connstate_t LocalClientGameConnectionState; 
  bool *p_generateChallenges; 
  StatsSource ActiveStatsSource; 
  unsigned int UTC; 
  unsigned int RowCount; 
  unsigned int RawHash; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int i; 
  int v14; 
  char v15; 
  unsigned int v16; 
  char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int j; 
  int v21; 
  char v22; 
  unsigned int v23; 
  char *v24; 
  DDLState v25; 
  StringTable *tablePtr; 
  DDLState state; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v30; 
  DDLContext context; 
  char dest[32]; 

  v2 = controllerIndex;
  if ( (live_test_onlinedataoff->current.enabled & 0x10) == 0 && s_UTCSynced )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    LocalClientGameConnectionState = CL_GetLocalClientGameConnectionState(ClientFromController);
    if ( LocalClientGameConnectionState == CA_DISCONNECTED )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      state.isValid = LocalClientGameConnectionState;
      p_generateChallenges = &controllerStorageData[v2].generateChallenges;
      state.arrayIndex = -1;
      state.offset = 0;
      *(_OWORD *)&state.member = _XMM0;
      fromState.isValid = 0;
      fromState.offset = 0;
      fromState.arrayIndex = -1;
      *(_OWORD *)&fromState.member = _XMM0;
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      *(_OWORD *)&toState.member = _XMM0;
      v30.isValid = 0;
      v30.offset = 0;
      v30.arrayIndex = -1;
      *(_OWORD *)&v30.member = _XMM0;
      v25.isValid = 0;
      v25.offset = 0;
      v25.arrayIndex = -1;
      *(_OWORD *)&v25.member = _XMM0;
      if ( !*p_generateChallenges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1853, ASSERT_TYPE_ASSERT, "(controllerStorageData[controllerIndex].generateChallenges)", (const char *)&queryFormat, "controllerStorageData[controllerIndex].generateChallenges", *(_QWORD *)&v25.isValid, *(_QWORD *)&v25.arrayIndex, v25.member, v25.ddlDef) )
        __debugbreak();
      if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "mp/dailyChallengesTable.csv") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1854, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetDefault( ASSET_TYPE_STRINGTABLE, \"mp/dailyChallengesTable.csv\" ))", "%s\n\tUnable to find daily challenges", "!DB_IsXAssetDefault( ASSET_TYPE_STRINGTABLE, DAILY_CHALLENGE_TABLE )") )
        __debugbreak();
      if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "mp/weeklyChallengesTable.csv") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1855, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetDefault( ASSET_TYPE_STRINGTABLE, \"mp/weeklyChallengesTable.csv\" ))", "%s\n\tUnable to find weekly challenges", "!DB_IsXAssetDefault( ASSET_TYPE_STRINGTABLE, WEEKLY_CHALLENGE_TABLE )") )
        __debugbreak();
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v2);
      if ( CL_PlayerData_GetDDLBuffer(&context, v2, ActiveStatsSource, STATSGROUP_RANKED) )
      {
        UTC = LiveStorage_GetUTC();
        StringTable_GetAsset("mp/dailyChallengesTable.csv", (const StringTable **)&tablePtr);
        RowCount = StringTable_GetRowCount(tablePtr);
        LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_RANKED);
        RawHash = j_SL_GetRawHash(scr_const.challengeState);
        DDL_MoveToNameByHash(&state, &toState, RawHash, NULL);
        v11 = j_SL_GetRawHash(scr_const.challengeProgress);
        DDL_MoveToNameByHash(&state, &v30, v11, NULL);
        v12 = j_SL_GetRawHash(scr_const.dailyChallengeId);
        DDL_MoveToNameByHash(&state, &fromState, v12, NULL);
        for ( i = 0; i < 3; ++i )
        {
          DDL_MoveToIndex(&fromState, &v25, i);
          v14 = (i + 3 * (UTC / 0x15180)) % RowCount;
          if ( DDL_GetInt(&v25, &context) != v14 )
          {
            DDL_SetInt(&v25, &context, v14);
            Com_sprintf(dest, 0x20ui64, "ch_daily_%d", i);
            v15 = dest[0];
            v16 = 0;
            if ( dest[0] )
            {
              v17 = dest;
              do
              {
                ++v17;
                v16 = v15 + 31 * v16;
                v15 = *v17;
              }
              while ( *v17 );
            }
            DDL_MoveToNameByHash(&toState, &v25, v16, NULL);
            DDL_SetInt(&v25, &context, 0);
            DDL_MoveToNameByHash(&v30, &v25, v16, NULL);
            DDL_SetInt(&v25, &context, 0);
          }
        }
        StringTable_GetAsset("mp/weeklyChallengesTable.csv", (const StringTable **)&tablePtr);
        v18 = StringTable_GetRowCount(tablePtr);
        v19 = j_SL_GetRawHash(scr_const.weeklyChallengeId);
        DDL_MoveToNameByHash(&state, &fromState, v19, NULL);
        for ( j = 0; j < 3; ++j )
        {
          DDL_MoveToIndex(&fromState, &v25, j);
          v21 = (j + 3 * (UTC / 0x93A80)) % v18;
          if ( DDL_GetInt(&v25, &context) != v21 )
          {
            DDL_SetInt(&v25, &context, v21);
            Com_sprintf(dest, 0x20ui64, "ch_weekly_%d", j);
            v22 = dest[0];
            v23 = 0;
            if ( dest[0] )
            {
              v24 = dest;
              do
              {
                ++v24;
                v23 = v22 + 31 * v23;
                v22 = *v24;
              }
              while ( *v24 );
            }
            DDL_MoveToNameByHash(&toState, &v25, v23, NULL);
            DDL_SetInt(&v25, &context, 0);
            DDL_MoveToNameByHash(&v30, &v25, v23, NULL);
            DDL_SetInt(&v25, &context, 0);
          }
        }
        *p_generateChallenges = 0;
      }
      else
      {
        Com_PrintError(14, "Cannot set data: we do not have player stats\n");
      }
    }
  }
}

/*
==============
LiveStorage_CheckPeriodicExtinctionBonusUpdate
==============
*/
void LiveStorage_CheckPeriodicExtinctionBonusUpdate(const int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  unsigned int UTC; 
  unsigned int RawHash; 
  LocalClientNum_t v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  StatsSource ActiveStatsSource; 

  v1 = controllerIndex;
  if ( (live_test_onlinedataoff->current.enabled & 0x10) == 0 && s_UTCSynced )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( CL_GetLocalClientGameConnectionState(ClientFromController) == CA_DISCONNECTED )
    {
      if ( !controllerStorageData[v1].generateExtinctionBonusPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2022, ASSERT_TYPE_ASSERT, "(controllerStorageData[controllerIndex].generateExtinctionBonusPool)", (const char *)&queryFormat, "controllerStorageData[controllerIndex].generateExtinctionBonusPool") )
        __debugbreak();
      if ( LiveStorage_DoWeHaveStats(v1) )
      {
        UTC = LiveStorage_GetUTC();
        RawHash = j_SL_GetRawHash(scr_const.bonus_pool_deadline);
        if ( UTC > CL_PlayerData_GetIntByName(v1, RawHash, STATSGROUP_COOP) && (live_test_onlinedataoff->current.enabled & 0x10) == 0 && s_UTCSynced )
        {
          v5 = CL_Mgr_GetClientFromController(v1);
          if ( CL_GetLocalClientGameConnectionState(v5) == CA_DISCONNECTED && LiveStorage_DoWeHaveStats(v1) )
          {
            v6 = LiveStorage_GetUTC() + extinctionBonus_period->current.integer;
            Com_Printf(14, "Setting extinction bonus deadline to %u\n", v6);
            v7 = j_SL_GetRawHash(scr_const.bonus_pool_deadline);
            CL_PlayerData_SetIntByName(v1, v7, v6, STATSGROUP_COOP);
            v8 = j_SL_GetRawHash(scr_const.bonus_pool_size);
            CL_PlayerData_SetIntByName(v1, v8, 3, STATSGROUP_COOP);
            ActiveStatsSource = LiveStorage_GetActiveStatsSource(v1);
            LiveStorage_SaveStatsForSource(v1, ActiveStatsSource);
          }
        }
        controllerStorageData[v1].generateExtinctionBonusPool = 0;
      }
    }
  }
}

/*
==============
LiveStorage_ClearDWOverlappedTasks
==============
*/
void LiveStorage_ClearDWOverlappedTasks(const int controllerIndex)
{
  unsigned __int8 *p_controllerIndex; 
  overlappedTask *tasks; 
  __int64 v4; 

  p_controllerIndex = &storageTasks.tasks[0].controllerIndex;
  tasks = storageTasks.tasks;
  v4 = 32i64;
  do
  {
    if ( *p_controllerIndex == controllerIndex )
      TaskManager_ClearTask(tasks);
    ++tasks;
    p_controllerIndex += 40;
    --v4;
  }
  while ( v4 );
}

/*
==============
LiveStorage_ClearPlayerDataObfuscated
==============
*/
void LiveStorage_ClearPlayerDataObfuscated(const int controllerIndex, const StatsSource statsSource)
{
  __int64 v2; 

  v2 = 77072i64 * (int)statsSource + 220828i64 * controllerIndex;
  *(&controllerStatData[0].playerStats[0].blobFlags[0].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[0].obfuscation.randomInt + v2) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[1].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[1].obfuscation.randomInt + v2) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[2].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[2].obfuscation.randomInt + v2) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[3].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[3].obfuscation.randomInt + v2) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[4].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[4].obfuscation.randomInt + v2) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[5].obfuscation.isObfuscated + v2) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[5].obfuscation.randomInt + v2) = 0;
}

/*
==============
LiveStorage_ClearStatsBlobValidationHints
==============
*/
void LiveStorage_ClearStatsBlobValidationHints(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2570, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  v6 = 16 * (v3 + 4817 * v4) + 220828 * v5;
  *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[0].isFirstUpload + v6) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[0].isDoubleXPUsed + v6) = 0;
}

/*
==============
LiveStorage_ClientUsingOnlineStatsOffline
==============
*/
bool LiveStorage_ClientUsingOnlineStatsOffline(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  if ( !Live_Invitation_HasAcceptedInvite() )
  {
    v1 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
  }
  return 0;
}

/*
==============
LiveStorage_CommonObfuscateStatsGroupRange
==============
*/
void LiveStorage_CommonObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize, const bool obfuscate)
{
  __int64 v5; 
  StatsGroup StatsGroupByByteOffset; 
  StatsGroup statsGroup; 
  __int64 statsSource; 
  unsigned __int8 *statsStart; 
  DDLContext context; 

  v5 = controllerIndex;
  StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex + rangeSize - 1);
  if ( Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex) != StatsGroupByByteOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 804, ASSERT_TYPE_ASSERT, "(Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 ))", (const char *)&queryFormat, "Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 )") )
    __debugbreak();
  statsGroup = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex);
  statsSource = LiveStorage_GetActiveStatsSource(v5);
  if ( controllerStatData[v5].playerStats[statsSource].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation.isObfuscated && CL_PlayerData_GetDDLBuffer(&context, v5, (StatsSource)statsSource, statsGroup) )
  {
    statsStart = LiveStorage_GetPlayerDataBufferForSource(v5, statsGroup, (StatsSource)statsSource);
    Com_LocallyObfuscateStatsGroupRange_Internal(v5, startByteIndex, rangeStart, rangeSize, &context, statsGroup, (const StatsSource)statsSource, statsStart, obfuscate);
  }
  else if ( controllerStatData[v5].playerStats[statsSource].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation.isObfuscated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 818, ASSERT_TYPE_ASSERT, "(!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ))", (const char *)&queryFormat, "!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource )") )
  {
    __debugbreak();
  }
}

/*
==============
LiveStorage_CopySponsorStats
==============
*/
void LiveStorage_CopySponsorStats(const int controllerIndex)
{
  __int64 v1; 
  int GuestUserSponsorControllerIndex; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 ActiveStatsSource; 
  bool *p_statsGroupObfuscated; 
  int v9; 
  __int64 v10; 
  bool v11; 
  unsigned __int8 *PlayerDataBufferForSource; 
  unsigned int StatsGroupSize; 
  bool obfuscated; 
  unsigned __int8 *StatsBufferForSource; 
  unsigned __int8 *v16; 
  char *fmt; 
  char *fmta; 
  __int64 v19; 
  __int64 v20; 
  StatsSource statsSource; 
  __int64 v23; 
  DDLContext context; 
  bool statsGroupObfuscated; 

  v1 = controllerIndex;
  if ( !Live_UserIsGuest(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4026, ASSERT_TYPE_ASSERT, "(Live_UserIsGuest( controllerIndex ))", (const char *)&queryFormat, "Live_UserIsGuest( controllerIndex )") )
    __debugbreak();
  GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(v1);
  v3 = GuestUserSponsorControllerIndex;
  statsSource = LiveStorage_GetActiveStatsSource(GuestUserSponsorControllerIndex);
  v4 = 77072i64 * (int)statsSource + 220828 * v1;
  v23 = v4;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v4) )
  {
    if ( ((_DWORD)v3 == (_DWORD)v1 || (int)v3 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 4038, ASSERT_TYPE_ASSERT, "((sponsorControllerIndex != controllerIndex) && (sponsorControllerIndex >= 0))", (const char *)&queryFormat, "(sponsorControllerIndex != controllerIndex) && (sponsorControllerIndex >= 0)") )
      __debugbreak();
    v5 = 220828 * v3;
    v6 = 220828 * v3 + 77072i64 * (int)LiveStorage_GetActiveStatsSource(v3);
    if ( *(&controllerStatData[0].playerStats[0].statsFetched + v6) && !*(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v6) )
    {
      *(&controllerStatData[0].playerStats[0].statsFetched + v4) = 1;
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
      p_statsGroupObfuscated = &statsGroupObfuscated;
      v9 = 0;
      v10 = ActiveStatsSource;
      do
      {
        v11 = *(&controllerStatData[0].playerStats[v10].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)v9)].obfuscation.isObfuscated + v5);
        if ( v11 )
        {
          if ( CL_PlayerData_GetDDLBuffer(&context, v3, (StatsSource)ActiveStatsSource, (StatsGroup)v9) )
          {
            PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v3, (StatsGroup)v9, (StatsSource)ActiveStatsSource);
            if ( *(&controllerStatData[0].playerStats[v10].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)v9)].obfuscation.isObfuscated + v5) )
            {
              StatsGroupSize = Com_PlayerData_GetStatsGroupSize((StatsGroup)v9);
              DDL_LocallyUnObfuscate(&context, PlayerDataBufferForSource, StatsGroupSize - 4);
              obfuscated = context.obfuscated;
              if ( context.obfuscated )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 594, ASSERT_TYPE_ASSERT, "(!context.obfuscated)", (const char *)&queryFormat, "!context.obfuscated") )
                  __debugbreak();
                obfuscated = context.obfuscated;
                if ( context.obfuscated )
                {
                  Com_PrintWarning(0, "WARNING: Com_LocallyUnObfuscateStatsGroup - DDL_LocallyUnObfuscate Could not unobfuscate stats in memory: statsGroup %i\n", (unsigned int)v9);
                  obfuscated = context.obfuscated;
                }
              }
              LiveStorage_SetPlayerDataObfuscated(v3, (const StatsGroup)v9, (const StatsSource)ActiveStatsSource, obfuscated, context.randomInt);
              LODWORD(v20) = Com_PlayerData_GetStatsGroupSize((StatsGroup)v9) - 4;
              LODWORD(v19) = context.randomInt;
              LODWORD(fmta) = ActiveStatsSource;
              Com_Printf(14, "LiveStorage_LocallyObfuscateStatsGroup UnObfuscating stats in memory: :controller %i, statsGroup %i, statsSource %i, randomVal %u, stats %p, size %i\n", (unsigned int)v3, (unsigned int)v9, fmta, v19, PlayerDataBufferForSource, v20);
            }
          }
          else
          {
            LODWORD(fmt) = ActiveStatsSource;
            Com_PrintWarning(14, "WARNING: LiveStorage_LocallyUnObfuscateStatsGroup Could not unobfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v3, (unsigned int)v9, fmt);
          }
        }
        *p_statsGroupObfuscated = v11;
        ++v9;
        ++p_statsGroupObfuscated;
      }
      while ( v9 < 6 );
      StatsBufferForSource = LiveStorage_GetStatsBufferForSource(v3, statsSource);
      v16 = LiveStorage_GetStatsBufferForSource(controllerIndex, statsSource);
      memcpy_0(v16, StatsBufferForSource, 0x10470ui64);
      *(PlayerStatsObfuscation *)((char *)&controllerStatData[0].playerStats[0].blobFlags[0].obfuscation + v23) = *(PlayerStatsObfuscation *)((char *)&controllerStatData[0].playerStats[statsSource].blobFlags[0].obfuscation + v5);
      LiveStorage_LocallyObfuscateStats(controllerIndex, &statsGroupObfuscated);
      LiveStorage_LocallyObfuscateStats(v3, &statsGroupObfuscated);
      GamerProfile_UpdateProfileFromStats(controllerIndex, statsSource);
    }
  }
}

/*
==============
LiveStorage_CreateDDLContext
==============
*/
bool LiveStorage_CreateDDLContext(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context, void (*accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  const DDLDef *DefForStatsGroup; 
  unsigned __int8 *PlayerDataBufferForSource; 
  int v12; 
  bool v13; 

  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  if ( !DefForStatsGroup )
    return 0;
  PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(controllerIndex, statsGroup, statsSource);
  if ( !PlayerDataBufferForSource )
    return 0;
  v12 = Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
  v13 = DDL_CreateContext(PlayerDataBufferForSource, v12, DefForStatsGroup, context, accessCB, userData);
  if ( v13 || (Com_PrintWarning(28, "Unable to create context from buffer.  Resetting buffer instead.\n"), v13 = DDL_ResetContext(PlayerDataBufferForSource, v12, DefForStatsGroup, context, accessCB, userData)) )
    LiveStorage_SetDDLObfuscationData(controllerIndex, statsGroup, statsSource, context);
  return v13;
}

/*
==============
LiveStorage_CreateDDLContext_Direct
==============
*/
bool LiveStorage_CreateDDLContext_Direct(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context, void (*accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp), void *userData)
{
  unsigned __int8 *PlayerDataBufferForSource; 
  const DDLDef *DefForStatsGroup; 
  unsigned int StatsGroupSize; 
  bool v13; 

  PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(controllerIndex, statsGroup, statsSource);
  if ( !PlayerDataBufferForSource )
    return 0;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  if ( !DefForStatsGroup )
    return 0;
  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  v13 = DDL_CreateContext(PlayerDataBufferForSource, StatsGroupSize - 4, DefForStatsGroup, context, accessCB, userData);
  if ( v13 )
    LiveStorage_SetDDLObfuscationData(controllerIndex, statsGroup, statsSource, context);
  return v13;
}

/*
==============
LiveStorage_DiscardStats
==============
*/
void LiveStorage_DiscardStats(const int controllerIndex, StatsSource statsSource)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  Online_GunSmith *Instance; 

  v2 = statsSource;
  v4 = 220828i64 * controllerIndex;
  *(&controllerStatData[0].playerStats[v2].blobFlags[0].isDirty + v4) = 0;
  *(&controllerStatData[0].playerStats[v2].blobFlags[1].isDirty + v4) = 0;
  *(&controllerStatData[0].playerStats[v2].blobFlags[2].isDirty + v4) = 0;
  *(&controllerStatData[0].playerStats[v2].blobFlags[3].isDirty + v4) = 0;
  v5 = v4 + 77072i64 * (int)statsSource;
  *(&controllerStatData[0].playerStats[0].blobFlags[4].isDirty + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[5].isDirty + v5) = 0;
  *(&controllerStatData[0].playerStats[0].statsFetched + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[0].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[0].obfuscation.isObfuscated + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[1].obfuscation.isObfuscated + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[1].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[2].obfuscation.isObfuscated + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[2].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[3].obfuscation.isObfuscated + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[3].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[4].obfuscation.isObfuscated + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[4].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].blobFlags[5].obfuscation.isObfuscated + v5) = 0;
  *(unsigned int *)((char *)&controllerStatData[0].playerStats[0].blobFlags[5].obfuscation.randomInt + v5) = 0;
  *(&controllerStatData[0].playerStats[0].allowSavingProgress + v5) = 0;
  if ( statsSource == STATS_ONLINE )
  {
    Instance = Online_GunSmith::GetInstance();
    Online_GunSmith::DiscardBlueprints(Instance, controllerIndex);
  }
}

/*
==============
LiveStorage_DoWeHavePlaylists
==============
*/
_BOOL8 LiveStorage_DoWeHavePlaylists()
{
  _BOOL8 result; 

  result = g_playlistsFetched;
  if ( (live_test_onlinedataoff->current.enabled & 4) != 0 )
    return 0i64;
  return result;
}

/*
==============
LiveStorage_DoWeHaveStats
==============
*/
bool LiveStorage_DoWeHaveStats(const int controllerIndex)
{
  __int64 v1; 

  v1 = 77072i64 * (int)LiveStorage_GetActiveStatsSource(controllerIndex) + 220828i64 * controllerIndex;
  return *(&controllerStatData[0].playerStats[0].statsFetched + v1) && !*(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v1);
}

/*
==============
LiveStorage_DoWeHaveStatsForSource
==============
*/
bool LiveStorage_DoWeHaveStatsForSource(const int controllerIndex, StatsSource statsSource)
{
  __int64 v2; 

  v2 = 220828i64 * controllerIndex + 77072i64 * (int)statsSource;
  return *(&controllerStatData[0].playerStats[0].statsFetched + v2) && !*(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v2);
}

/*
==============
LiveStorage_EndGame
==============
*/
void LiveStorage_EndGame(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v3; 
  StatsSource ActiveStatsSource; 
  unsigned int TimeAsSeconds; 
  unsigned int RawHash; 
  int PrestigeMP; 
  int v8; 
  float MaxRankMP; 
  DDLContext context; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( Live_UserIsGuest(ControllerFromClient) )
  {
    controllerStorageData[ControllerFromClient].useGameStatsSource = 0;
    Com_Printf(16, "LiveStorage_EndGame called on guest account.\n");
  }
  else if ( controllerStorageData[ControllerFromClient].useGameStatsSource )
  {
    if ( LiveStorage_DoWeHaveStats(ControllerFromClient) )
    {
      if ( SV_IsDemoPlaying() || SV_IsDemoPlayingNext() )
      {
        Com_PrintWarning(16, "Unable to save lastPlayedTime because persistent data is not enabled. Rest XP may not accumulate.\n");
      }
      else
      {
        v3 = CL_Mgr_GetControllerFromClient(localClientNum);
        ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
        if ( !CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_COMMON) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2374, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &buffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_COMMON ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &buffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_COMMON )") )
          __debugbreak();
        TimeAsSeconds = Sys_GetTimeAsSeconds();
        RawHash = j_SL_GetRawHash(scr_const.lastPlayedTime);
        Com_PlayerData_SetInternalIntByName(RawHash, TimeAsSeconds, &context, NULL, STATSGROUP_COMMON);
        Com_Printf(16, "Saving lastPlayedTime of %u.\n", TimeAsSeconds);
      }
      if ( LiveStorage_GetActiveStatsSource(ControllerFromClient) == STATS_ONLINE )
      {
        PrestigeMP = CL_PlayerData_GetPrestigeMP(ControllerFromClient);
        v8 = CL_PlayerData_GetRankMP(ControllerFromClient) + 1;
        MaxRankMP = (float)Com_GetMaxRankMP();
        GamerProfile_SetPercentCompleteMP(ControllerFromClient, 100 * PrestigeMP - (int)(float)((float)((float)v8 / MaxRankMP) * -100.0));
      }
    }
    else
    {
      Com_PrintWarning(16, "Unable to save lastPlayedTime because we don't have stats. Rest XP may not accumulate. This should only happen if you just signed in or out.");
    }
    controllerStorageData[ControllerFromClient].useGameStatsSource = 0;
  }
  else
  {
    Com_Printf(16, "LiveStorage_EndGame called when not in a game. Probably just signed out.\n");
  }
}

/*
==============
LiveStorage_EnsureMaySetPersistentData
==============
*/
void LiveStorage_EnsureMaySetPersistentData(LocalClientNum_t localClientNum, const char *debugInfo)
{
  __int64 LocalClientGameConnectionState; 
  LocalClientNum_t v5; 
  __int64 v6; 

  if ( CL_GetLocalClientGameConnectionState(localClientNum) )
  {
    v5 = localClientNum;
    LocalClientGameConnectionState = (unsigned int)CL_GetLocalClientGameConnectionState(localClientNum);
    Com_PrintError(16, "Trying to set persistent player data while connected to a server (%s, connState = %i, localClientNum = %i).\n", debugInfo, LocalClientGameConnectionState, v5);
    if ( !com_unattendedMode->current.enabled )
    {
      LODWORD(v6) = LocalClientGameConnectionState;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003370, 393i64, debugInfo, v6);
    }
  }
}

/*
==============
LiveStorage_EnsureWeHaveStats
==============
*/
void LiveStorage_EnsureWeHaveStats(const int controllerIndex)
{
  __int64 v2; 
  __int64 v3; 
  StatsSource ActiveStatsSource; 
  StatsSource v5; 
  LocalClientNum_t ClientFromController; 
  __int64 v7; 

  v2 = 220828i64 * controllerIndex;
  v3 = v2 + 77072i64 * (int)LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v3) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v3) )
  {
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    v5 = ActiveStatsSource;
    if ( ActiveStatsSource )
    {
      if ( ActiveStatsSource != STATS_OFFLINE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1170, ASSERT_TYPE_ASSERT, "( ( statsSource == STATS_ONLINE || statsSource == STATS_OFFLINE ) )", "( statsSource ) = %i", ActiveStatsSource) )
        __debugbreak();
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144002390, 392i64);
      LiveStorage_ReadStats(controllerIndex);
    }
    else
    {
      CL_Mgr_GetClientFromController(controllerIndex);
      Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() blocking on stats download.\n");
      do
      {
        Durango_RESTFrame();
        DW_Frame(controllerIndex);
      }
      while ( dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED );
      LiveStorage_DownloadStats(controllerIndex);
      LiveStorage_FinishDownloadingStats(controllerIndex);
      Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() done.\n");
    }
    v7 = v2 + 77072i64 * (int)LiveStorage_GetActiveStatsSource(controllerIndex);
    if ( (!*(&controllerStatData[0].playerStats[0].statsFetched + v7) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v7)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1182, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStats( controllerIndex ))", "%s\n\tcontroller %i, stats source %i", "LiveStorage_DoWeHaveStats( controllerIndex )", controllerIndex, v5) )
      __debugbreak();
  }
}

/*
==============
LiveStorage_EnsureWeHaveStats_Offline
==============
*/
void LiveStorage_EnsureWeHaveStats_Offline(const int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144002390, 392i64);
  LiveStorage_ReadStats(controllerIndex);
}

/*
==============
LiveStorage_EnsureWeHaveStats_Online
==============
*/
void LiveStorage_EnsureWeHaveStats_Online(const int controllerIndex)
{
  CL_Mgr_GetClientFromController(controllerIndex);
  Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() blocking on stats download.\n");
  do
  {
    Durango_RESTFrame();
    DW_Frame(controllerIndex);
  }
  while ( dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED );
  LiveStorage_DownloadStats(controllerIndex);
  LiveStorage_FinishDownloadingStats(controllerIndex);
  Com_Printf(16, "LiveStorage_EnsureWeHaveStats_Online() done.\n");
}

/*
==============
LiveStorage_ErrorCleanup
==============
*/
void LiveStorage_ErrorCleanup(void)
{
  controllerStorageData[0].resettingStats = 0;
  controllerStorageData[1].resettingStats = 0;
}

/*
==============
LiveStorage_FetchPlaylists
==============
*/
char LiveStorage_FetchPlaylists(const int controllerIndex)
{
  __int64 v1; 
  PublisherVariableManager *Instance; 
  int v4; 
  const char *Name; 
  const XUID *v6; 
  OnlineStorage *v7; 
  char CurrentPlatform; 
  OnlineStorage *v9; 
  char v10; 
  XUID result; 
  OnlineStorageTask newTask; 
  bdObjectStoreObject object; 

  v1 = controllerIndex;
  if ( (live_test_onlinedataoff->current.enabled & 4) != 0 )
  {
    s_fencePlaylistsErrorCode[controllerIndex] = HALF;
    return 0;
  }
  if ( s_gettingPlaylists )
    goto LABEL_10;
  if ( g_playlistsFetched != s_gettingPlaylists && (s_pausedFetchingPlaylists != s_gettingPlaylists || s_playlistOutOfDate == s_gettingPlaylists) )
  {
    s_fencePlaylistsErrorCode[controllerIndex] = HALF_HALF;
    return 0;
  }
  if ( s_gettingPlaylists )
  {
LABEL_10:
    s_fencePlaylistsErrorCode[controllerIndex] = LONG;
    return 0;
  }
  else if ( s_unpackPlaylist )
  {
    s_fencePlaylistsErrorCode[controllerIndex] = LONG_LONG;
    return 0;
  }
  else
  {
    if ( !Live_IsUserSignedInToLive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3654, ASSERT_TYPE_ASSERT, "(Live_IsUserSignedInToLive( controllerIndex ))", (const char *)&queryFormat, "Live_IsUserSignedInToLive( controllerIndex )", -2i64) )
      __debugbreak();
    if ( dwGetLogOnStatus(v1) != DW_LIVE_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3655, ASSERT_TYPE_ASSERT, "(dwGetLogOnStatus( controllerIndex ) == DW_LIVE_CONNECTED)", (const char *)&queryFormat, "dwGetLogOnStatus( controllerIndex ) == DW_LIVE_CONNECTED") )
      __debugbreak();
    Instance = PublisherVariableManager::GetInstance();
    if ( !PublisherVariableManager::HasRetrievedVariables(Instance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3656, ASSERT_TYPE_ASSERT, "(PublisherVariableManager::GetInstance().HasRetrievedVariables())", (const char *)&queryFormat, "PublisherVariableManager::GetInstance().HasRetrievedVariables()") )
      __debugbreak();
    v4 = Sys_Milliseconds();
    if ( g_NumFetchPlaylistAttempts && !Live_GetShouldDemonwareRetry((v4 - g_LastFetchPlaylistAttemptTime) / 1000, g_NumFetchPlaylistAttempts, 0x3Cu) )
      return 0;
    OnlineStorageTask::OnlineStorageTask(&newTask);
    memset_0(&newTask, 0, sizeof(newTask));
    Playlist_SetPlaylistAvailable(0);
    ++g_NumFetchPlaylistAttempts;
    g_LastFetchPlaylistAttemptTime = v4;
    newTask.fileEntryCount = 0;
    *(_WORD *)&newTask.operation = 257;
    newTask.priority[0] = 5;
    newTask.controllerIndex = v1;
    newTask.onTaskCompleteCallback = OnPlaylistDownloadComplete;
    bdObjectStoreGetPublisherObjectsResponse::reset(&s_getPublisherObjectsResponse_0);
    newTask.getPublisherStorageResponse = &s_getPublisherObjectsResponse_0;
    if ( newTask.fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3700, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 1)", (const char *)&queryFormat, "storageTask.fileEntryCount < PLAYLIST_FILE_COUNT") )
      __debugbreak();
    Name = Playlist_GetName();
    Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, Name);
    v6 = XUID::NullXUID(&result);
    XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, v6);
    v7 = OnlineStorage::GetInstance();
    CurrentPlatform = OnlineStorage::GetCurrentPlatform(v7);
    newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
    bdObjectStoreObject::bdObjectStoreObject(&object, s_playlistAggrBuffer, 0xA000ui64);
    bdObjectStoreErrorWrappedObject::setObject(&s_responseObjects_0[newTask.fileEntryCount++], &object);
    bdMemory::deallocate(object.m_metadata.m_tags.m_data);
    object.m_metadata.m_tags.m_data = NULL;
    *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
    bdObjectStoreGetPublisherObjectsResponse::setObjectList(newTask.getPublisherStorageResponse, s_responseObjects_0, newTask.fileEntryCount);
    v9 = OnlineStorage::GetInstance();
    if ( OnlineStorage::EnqueueTask(v9, &newTask) )
    {
      s_gettingPlaylists = 1;
      v10 = 1;
    }
    else
    {
      s_fencePlaylistsErrorCode[v1] = MAX_INT;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3724, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to fetch playlist: Could not enqueue storage task!") )
        __debugbreak();
      v10 = 0;
    }
    TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
    return v10;
  }
}

/*
==============
LiveStorage_FinalizeStatsRead
==============
*/
void LiveStorage_FinalizeStatsRead(const int controllerIndex, StatsSource statsSource)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v2 = statsSource;
  v3 = controllerIndex;
  v4 = 77072i64 * (int)statsSource + 220828i64 * controllerIndex;
  if ( (!*(&controllerStatData[0].playerStats[0].statsFetched + v4) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 840, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource )") )
    __debugbreak();
  GamerProfile_UpdateProfileFromStats(v3, (StatsSource)v2);
  LiveStorage_ObufscateAllStatsGroups(v3, (const StatsSource)v2);
  OnlineMgr::OnUserStatsFetched(&g_onlineMgr, v3, (StatsSource)v2);
  LuaShared_PlayerData_OnStatsFetched(v3, (StatsSource)v2);
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "playerdata_available", LUI_luaVM) )
  {
    LUI_SetTableInt("statsSource", v2, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v3, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LiveStorage_FinalizeStatsReadCommon
==============
*/

void __fastcall LiveStorage_FinalizeStatsReadCommon(const int controllerIndex, StatsSource statsSource)
{
  GamerProfile_UpdateProfileFromStats(controllerIndex, statsSource);
}

/*
==============
LiveStorage_FlagModifiedByteRange
==============
*/
void LiveStorage_FlagModifiedByteRange(int startByte, int endByte, unsigned __int8 *modifiedFlags)
{
  int v3; 
  char v4; 

  for ( ; startByte <= endByte; modifiedFlags[v3 >> 3] |= 1 << v4 )
  {
    v3 = startByte;
    v4 = startByte & 7;
    if ( startByte < 0 )
    {
      v3 = startByte + 7;
      v4 -= 8;
    }
    ++startByte;
  }
}

/*
==============
LiveStorage_FreshStart
==============
*/
void LiveStorage_FreshStart(const int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  __int64 LocalClientGameConnectionState; 
  StatsSource ActiveStatsSource; 
  LocalClientNum_t v5; 
  __int64 v6; 

  v1 = controllerIndex;
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) )
  {
    Com_PrintError(16, "Cannot do fresh start on any stats except online.\n");
  }
  else
  {
    ClientFromController = CL_Mgr_GetClientFromController(v1);
    if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
    {
      v5 = ClientFromController;
      LocalClientGameConnectionState = (unsigned int)CL_GetLocalClientGameConnectionState(ClientFromController);
      Com_PrintError(16, "Trying to set persistent player data while connected to a server (%s, connState = %i, localClientNum = %i).\n", "LiveStorage_FreshStart", LocalClientGameConnectionState, v5);
      if ( !com_unattendedMode->current.enabled )
      {
        LODWORD(v6) = LocalClientGameConnectionState;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003370, 393i64, "LiveStorage_FreshStart", v6);
      }
    }
    if ( controllerStatData[v1].playerStats[0].statsFetched )
    {
      LiveStorage_FinishDownloadingStats(v1);
      LiveStorage_StatsInit(v1, 1, 1, STATS_ONLINE);
      GamerProfile_UpdateProfileFromStats(v1, STATS_ONLINE);
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v1);
      LiveStorage_SaveStatsForSource(v1, ActiveStatsSource);
      OnlineMgr::OnUserStatsFetched(&g_onlineMgr, v1, STATS_ONLINE);
      LuaShared_PlayerData_OnStatsFetched(v1, STATS_ONLINE);
      PlayercardCache_ClearEditPlayerCard(v1);
      PlayercardCache_RequestUpload(v1);
    }
    else
    {
      Com_PrintError(16, "Cannot do fresh start because we have not downloaded stats or read them from a save device.\n");
    }
  }
}

/*
==============
LiveStorage_GenerateFilename
==============
*/
void LiveStorage_GenerateFilename(char *statsFilenameBuffer, unsigned int statsFilenameBufferSize, const char *dirName)
{
  unsigned __int64 v4; 
  unsigned __int8 *integer64; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  char *fmt; 
  __int64 v13; 

  v4 = statsFilenameBufferSize;
  if ( !profileNameDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3234, ASSERT_TYPE_ASSERT, "(profileNameDvar)", (const char *)&queryFormat, "profileNameDvar") )
    __debugbreak();
  integer64 = (unsigned __int8 *)profileNameDvar->current.integer64;
  if ( !integer64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3237, ASSERT_TYPE_ASSERT, "(profileName)", (const char *)&queryFormat, "profileName") )
      __debugbreak();
    integer64 = (unsigned __int8 *)&queryFormat.fmt + 3;
  }
  v7 = -1;
  v8 = -1i64;
  do
    ++v8;
  while ( integer64[v8] );
  v9 = (unsigned int)(v8 + 1);
  if ( (_DWORD)v8 != -1 )
  {
    do
    {
      v10 = *integer64++;
      v7 = (v7 >> 8) ^ g_crc32Table[v10 ^ (unsigned __int8)v7];
      --v9;
    }
    while ( v9 );
  }
  v11 = ~v7;
  if ( *dirName )
  {
    LODWORD(v13) = v11;
    LODWORD(fmt) = 92;
    Com_sprintf(statsFilenameBuffer, v4, "%s%ciw8_m%08x", dirName, fmt, v13);
  }
  else
  {
    Com_sprintf(statsFilenameBuffer, v4, "iw8_m%08x", v11);
  }
}

/*
==============
LiveStorage_GetActiveStatsSource
==============
*/
__int64 LiveStorage_GetActiveStatsSource(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 
  LocalClientNum_t ClientFromController; 
  __int64 v6; 

  v1 = controllerIndex;
  if ( com_unattendedMode->current.enabled )
    return 1i64;
  v2 = DVARBOOL_online_is_devmapping;
  if ( !DVARBOOL_online_is_devmapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_is_devmapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return 1i64;
  v3 = v1;
  if ( controllerStorageData[v1].resettingStats )
    return (unsigned int)controllerStorageData[v3].resetStatsSource;
  if ( !controllerStorageData[v3].useGameStatsSource )
    return !Live_Invitation_HasAcceptedInvite() && (!DVARBOOL_onlinegame || !Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame")) && (Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") || Dvar_GetBool_Internal_DebugName(DVARBOOL_splitscreen, "splitscreen"));
  ClientFromController = CL_Mgr_GetClientFromController(v1);
  if ( CL_GetLocalClientGameConnectionState(ClientFromController) == CA_DISCONNECTED )
  {
    LODWORD(v6) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 970, ASSERT_TYPE_ASSERT, "( ( !CL_IsLocalClientDisconnectedFromGameServer( localClientNum ) ) )", "( localClientNum ) = %i", v6) )
      __debugbreak();
  }
  return (unsigned int)controllerStorageData[v3].gameStatsSource;
}

/*
==============
LiveStorage_GetAndResetLastPlayTime
==============
*/
__int64 LiveStorage_GetAndResetLastPlayTime(DDLContext *buffer)
{
  const DDLDef *def; 
  unsigned int RawHash; 
  unsigned int Int; 
  DDLState state; 

  state.isValid = 0;
  def = buffer->def;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  LiveStorage_InitializeDDLStateForStatsGroup(def, &state, STATSGROUP_COMMON);
  RawHash = j_SL_GetRawHash(scr_const.lastPlayedTime);
  DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  Int = DDL_GetInt(&state, buffer);
  DDL_SetInt(&state, buffer, 0);
  return Int;
}

/*
==============
LiveStorage_GetDailyChallengeId
==============
*/
int LiveStorage_GetDailyChallengeId(const DDLContext *buffer, const int dailyChallengeIndex)
{
  unsigned int RawHash; 
  int v9; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( (unsigned int)dailyChallengeIndex >= 3 )
  {
    v9 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1733, ASSERT_TYPE_ASSERT, "(unsigned)( dailyChallengeIndex ) < (unsigned)( 3 )", "dailyChallengeIndex doesn't index DAILY_CHALLENGE_COUNT\n\t%i not in [0, %i)", dailyChallengeIndex, v9) )
      __debugbreak();
  }
  LiveStorage_InitializeDDLStateForStatsGroup(buffer->def, &state, STATSGROUP_RANKED);
  RawHash = j_SL_GetRawHash(scr_const.dailyChallengeId);
  DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  DDL_MoveToIndex(&state, &state, dailyChallengeIndex);
  return DDL_GetInt(&state, buffer);
}

/*
==============
LiveStorage_GetDemoPlayerDataBuffer
==============
*/
unsigned __int8 *LiveStorage_GetDemoPlayerDataBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  LocalClientNum_t ClientFromController; 
  unsigned __int8 *ClientPlayerData; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( !CL_Demo_IsPlayingServer(ClientFromController) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2832, ASSERT_TYPE_ASSERT, "(CL_Demo_IsPlayingServer( localClientNum ))", (const char *)&queryFormat, "CL_Demo_IsPlayingServer( localClientNum )") )
    __debugbreak();
  ClientPlayerData = CL_DemoServerPlayback_GetClientPlayerData(ClientFromController);
  if ( !ClientPlayerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2698, ASSERT_TYPE_ASSERT, "(statsBuffer)", (const char *)&queryFormat, "statsBuffer") )
    __debugbreak();
  return &ClientPlayerData[Com_PlayerData_GetStatsGroupOffset(statsGroup) + 4];
}

/*
==============
LiveStorage_GetPersistentDataDefFormatChecksum
==============
*/
unsigned __int64 LiveStorage_GetPersistentDataDefFormatChecksum()
{
  const DDLDef *Asset; 

  Asset = Com_DDL_LoadAsset("ddl/mp/playerdata.ddl");
  if ( Asset )
    return Asset->guid;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2342, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return MEMORY[0x18];
}

/*
==============
LiveStorage_GetPersistentDataDefVersion
==============
*/
__int64 LiveStorage_GetPersistentDataDefVersion()
{
  DDLFile *Asset; 

  Asset = DDL::DDL_GetAsset("ddl/mp/playerdata.ddl");
  if ( Asset )
    return Asset->ddlDef->version;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
LiveStorage_GetPlayerDataBuffer
==============
*/
unsigned __int8 *LiveStorage_GetPlayerDataBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  return LiveStorage_GetPlayerDataBufferForSource(controllerIndex, statsGroup, ActiveStatsSource);
}

/*
==============
LiveStorage_GetPlayerDataBufferForSource
==============
*/
unsigned __int8 *LiveStorage_GetPlayerDataBufferForSource(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = controllerIndex;
  v5 = statsSource;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2733, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2734, ASSERT_TYPE_ASSERT, "(unsigned)( statsSource ) < (unsigned)( STATS_COUNT )", "statsSource doesn't index STATS_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( controllerStatData[v3].playerStats[v5].statsFetched )
    return LiveStorage_GetStatsGroupBufferForSource(v3, statsGroup, (StatsSource)v5) + 4;
  else
    return 0i64;
}

/*
==============
LiveStorage_GetPlayerDataBufferSize
==============
*/
__int64 LiveStorage_GetPlayerDataBufferSize(StatsGroup statsGroup)
{
  return Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
}

/*
==============
LiveStorage_GetPlaylistsFenceFullStatusCode
==============
*/
__int64 LiveStorage_GetPlaylistsFenceFullStatusCode(const int controllerIndex)
{
  return (unsigned int)(s_fencePlaylistsErrorCode[controllerIndex] + 100 * s_fencePlaylistsStatusCode[controllerIndex]);
}

/*
==============
LiveStorage_GetPublisherStorageFileInfo
==============
*/
_BOOL8 LiveStorage_GetPublisherStorageFileInfo(const int controllerIndex, const char *fileName)
{
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v5; 
  bool v6; 
  const XUID *v7; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v10; 
  XUID result; 
  __int64 v13; 
  OnlineStorageTask newTask; 
  bdObjectStoreObject v15; 

  v13 = -2i64;
  result.m_id = (unsigned __int64)&newTask;
  *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex = -1i64;
  memset(&newTask.taskCreateRequest.m_appData, 0, 48);
  newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  newTask.taskCreateRequest.m_timeoutInSeconds = 0;
  fileEntries = newTask.fileEntries;
  v5 = 16i64;
  do
  {
    OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
    --v5;
  }
  while ( v5 );
  if ( g_bFetchingPlaylistInfo )
  {
    v6 = 0;
  }
  else
  {
    memset_0(&newTask, 0, sizeof(newTask));
    newTask.fileEntryCount = 0;
    *(_WORD *)&newTask.operation = 258;
    newTask.priority[0] = 1;
    newTask.controllerIndex = controllerIndex;
    newTask.onTaskCompleteCallback = OnPlaylistDownloadMetadatasComplete;
    bdObjectStoreGetPublisherObjectMetadatasResponse::reset(&s_getPublisherObjectMetadatasResponse_0);
    newTask.getPublisherStorageMetadatasResponse = &s_getPublisherObjectMetadatasResponse_0;
    if ( newTask.fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3851, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 1)", (const char *)&queryFormat, "storageTask.fileEntryCount < PLAYLIST_FILE_COUNT", result.m_id, v13, *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex, newTask.taskCreateRequest.m_appData, newTask.taskCreateRequest.m_appSecondaryCallback, newTask.taskCreateRequest.m_asyncInfo, newTask.taskCreateRequest.m_remoteDemonwareTask.m_ptr, newTask.taskCreateRequest.m_onCompletionCallback, newTask.taskCreateRequest.m_onUpdateCallback, *(_QWORD *)&newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent) )
      __debugbreak();
    Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, fileName);
    v7 = XUID::NullXUID(&result);
    XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, v7);
    Instance = OnlineStorage::GetInstance();
    CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
    newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
    bdObjectStoreObject::bdObjectStoreObject(&v15, NULL, 0i64);
    ++newTask.fileEntryCount;
    bdMemory::deallocate(v15.m_metadata.m_tags.m_data);
    v15.m_metadata.m_tags.m_data = NULL;
    *(_QWORD *)&v15.m_metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&v15.m_metadata.m_acl);
    if ( newTask.fileEntryCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3861, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount <= ( sizeof( *array_counter( s_responseObjectMetadatas ) ) + 0 ))", (const char *)&queryFormat, "storageTask.fileEntryCount <= ARRAY_COUNT( s_responseObjectMetadatas )") )
      __debugbreak();
    bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList(newTask.getPublisherStorageMetadatasResponse, s_responseObjectMetadatas_0, newTask.fileEntryCount);
    v10 = OnlineStorage::GetInstance();
    if ( OnlineStorage::EnqueueTask(v10, &newTask) )
    {
      g_bHavePlaylistInfo = 0;
      v6 = 1;
      g_bFetchingPlaylistInfo = 1;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3872, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to fetch playlist: Could not enqueue storage task!") )
        __debugbreak();
      v6 = g_bFetchingPlaylistInfo;
    }
  }
  TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
  return v6;
}

/*
==============
LiveStorage_GetServerTimeComplete
==============
*/
__int64 LiveStorage_GetServerTimeComplete(const int slot)
{
  overlappedTask *v1; 
  taskCompleteResults ServerTimeComplete; 
  int v4; 
  int controllerIndex; 

  v1 = &storageTasks.tasks[slot];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3318, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3319, ASSERT_TYPE_ASSERT, "(task->type == TASK_SYNCTIME)", (const char *)&queryFormat, "task->type == TASK_SYNCTIME") )
    __debugbreak();
  ServerTimeComplete = dwGetServerTimeComplete(v1->controllerIndex, v1);
  if ( ServerTimeComplete == TASK_COMPLETE )
  {
    TaskManager_ClearTask(v1);
    s_UTCOffset = *((_DWORD *)&bdServerTime.__vftable + 4) - _time64(NULL);
    v4 = Sys_Milliseconds();
    controllerIndex = v1->controllerIndex;
    s_UTCSyncTimeMs = v4;
    s_UTCSynced = 1;
    LiveTracker_RecordRecentlyActive(controllerIndex);
    return (unsigned int)ServerTimeComplete;
  }
  if ( ServerTimeComplete != TASK_ERROR )
    return (unsigned int)ServerTimeComplete;
  if ( v1->active )
    TaskManager_ClearTask(v1);
  Com_PrintWarning(16, "DW GetServerTime() failed!\n");
  return (unsigned int)ServerTimeComplete;
}

/*
==============
LiveStorage_GetStatsBlobForFile
==============
*/
__int64 LiveStorage_GetStatsBlobForFile(const char *fileName)
{
  if ( !I_strcmp(fileName, "commondata") || !I_strcmp(fileName, "commondata_fnf") )
    return 0i64;
  if ( !I_strcmp(fileName, "mpdata") || !I_strcmp(fileName, "mpdata_fnf") )
    return 1i64;
  if ( !I_strcmp(fileName, "cpdata") || !I_strcmp(fileName, "cpdata_fnf") )
    return 2i64;
  if ( !I_strcmp(fileName, "rankedloadouts") || !I_strcmp(fileName, "rankedloadouts_fnf") )
    return 3i64;
  if ( !I_strcmp(fileName, "privateloadouts") || !I_strcmp(fileName, "privateloadouts_fnf") )
    return 4i64;
  if ( !I_strcmp(fileName, "nongamedata") || !I_strcmp(fileName, "nongamedata_fnf") )
    return 5i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2563, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown player stats file %s", fileName) )
    __debugbreak();
  return 6i64;
}

/*
==============
LiveStorage_GetStatsBuffer
==============
*/
unsigned __int8 *LiveStorage_GetStatsBuffer(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  return LiveStorage_GetStatsBufferForSource(controllerIndex, ActiveStatsSource);
}

/*
==============
LiveStorage_GetStatsBufferForSource
==============
*/
unsigned __int8 *LiveStorage_GetStatsBufferForSource(const int controllerIndex, StatsSource statsSource)
{
  __int64 v2; 

  v2 = 77072i64 * (int)statsSource + 220828i64 * controllerIndex;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2678, ASSERT_TYPE_ASSERT, "(controllerStatData[controllerIndex].playerStats[statsSource].statsFetched)", "%s\n\tcontroller: %i statsSource: %i\n", "controllerStatData[controllerIndex].playerStats[statsSource].statsFetched", controllerIndex, statsSource) )
    __debugbreak();
  return (unsigned __int8 *)controllerStatData + v2;
}

/*
==============
LiveStorage_GetStatsBufferSize
==============
*/
__int64 LiveStorage_GetStatsBufferSize(const int controllerIndex)
{
  LiveStorage_GetActiveStatsSource(controllerIndex);
  return 66672i64;
}

/*
==============
LiveStorage_GetStatsBufferSizeForSource
==============
*/
__int64 LiveStorage_GetStatsBufferSizeForSource(const int controllerIndex, StatsSource statsSource)
{
  return 66672i64;
}

/*
==============
LiveStorage_GetStatsGroupBuffer
==============
*/
unsigned __int8 *LiveStorage_GetStatsGroupBuffer(const int controllerIndex, StatsGroup statsGroup)
{
  StatsSource ActiveStatsSource; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  return LiveStorage_GetStatsGroupBufferForSource(controllerIndex, statsGroup, ActiveStatsSource);
}

/*
==============
LiveStorage_GetStatsGroupBufferForSource
==============
*/
unsigned __int8 *LiveStorage_GetStatsGroupBufferForSource(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  unsigned __int8 *StatsBufferForSource; 

  StatsBufferForSource = LiveStorage_GetStatsBufferForSource(controllerIndex, statsSource);
  if ( !StatsBufferForSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2698, ASSERT_TYPE_ASSERT, "(statsBuffer)", (const char *)&queryFormat, "statsBuffer") )
    __debugbreak();
  return &StatsBufferForSource[Com_PlayerData_GetStatsGroupOffset(statsGroup)];
}

/*
==============
LiveStorage_GetStatsGroupBufferSize
==============
*/

unsigned int __fastcall LiveStorage_GetStatsGroupBufferSize(StatsGroup statsGroup)
{
  return Com_PlayerData_GetStatsGroupSize(statsGroup);
}

/*
==============
LiveStorage_GetStatsGroupDataSize
==============
*/

unsigned int __fastcall LiveStorage_GetStatsGroupDataSize(StatsGroup statsGroup)
{
  return Com_PlayerData_GetStatsGroupDataSize(statsGroup);
}

/*
==============
LiveStorage_GetStatsResetState
==============
*/
__int64 LiveStorage_GetStatsResetState(int controllerIndex, StatsSource statsSource)
{
  __int64 v2; 

  v2 = 77072i64 * (int)statsSource + 220828i64 * controllerIndex;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2063, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
    __debugbreak();
  return *(unsigned int *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v2);
}

/*
==============
LiveStorage_GetUTC
==============
*/
__int64 LiveStorage_GetUTC()
{
  if ( !s_UTCSynced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3350, ASSERT_TYPE_ASSERT, "(s_UTCSynced)", (const char *)&queryFormat, "s_UTCSynced") )
    __debugbreak();
  return (Sys_Milliseconds() - s_UTCSyncTimeMs) / 0x3E8 + *((_DWORD *)&bdServerTime.__vftable + 4);
}

/*
==============
LiveStorage_GetUTCOffset
==============
*/
__int64 LiveStorage_GetUTCOffset()
{
  if ( !s_UTCSynced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3358, ASSERT_TYPE_ASSERT, "(s_UTCSynced)", (const char *)&queryFormat, "s_UTCSynced") )
    __debugbreak();
  return s_UTCOffset;
}

/*
==============
LiveStorage_GetWeeklyChallengeId
==============
*/
int LiveStorage_GetWeeklyChallengeId(const DDLContext *buffer, const int weeklyChallengeIndex)
{
  unsigned int RawHash; 
  int v9; 
  DDLState state; 

  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  if ( (unsigned int)weeklyChallengeIndex >= 3 )
  {
    v9 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1750, ASSERT_TYPE_ASSERT, "(unsigned)( weeklyChallengeIndex ) < (unsigned)( 3 )", "weeklyChallengeIndex doesn't index WEEKLY_CHALLENGE_COUNT\n\t%i not in [0, %i)", weeklyChallengeIndex, v9) )
      __debugbreak();
  }
  LiveStorage_InitializeDDLStateForStatsGroup(buffer->def, &state, STATSGROUP_RANKED);
  RawHash = j_SL_GetRawHash(scr_const.weeklyChallengeId);
  DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
  DDL_MoveToIndex(&state, &state, weeklyChallengeIndex);
  return DDL_GetInt(&state, buffer);
}

/*
==============
LiveStorage_GettingPlaylistInfo
==============
*/
_BOOL8 LiveStorage_GettingPlaylistInfo()
{
  return g_bFetchingPlaylistInfo;
}

/*
==============
LiveStorage_GettingPlaylists
==============
*/
_BOOL8 LiveStorage_GettingPlaylists()
{
  return s_gettingPlaylists;
}

/*
==============
LiveStorage_HasDirtyStatsBlob
==============
*/
char LiveStorage_HasDirtyStatsBlob(const int localcontrollerIndex, StatsSource statsSource)
{
  __int64 v2; 
  StatsBlobFlags *i; 

  v2 = 0i64;
  for ( i = controllerStatData[localcontrollerIndex].playerStats[statsSource].blobFlags; !i->isDirty; ++i )
  {
    if ( ++v2 >= 6 )
      return 0;
  }
  return 1;
}

/*
==============
LiveStorage_Init
==============
*/
void LiveStorage_Init(void)
{
  Dvar_BeginPermanentRegistration();
  mangleDWStats = Dvar_RegisterInt("PPQSORMPP", 0, 0, 0x7FFFFFFF, 4u, "0=do nothing, 1=pretend file doesn't exist--reset, 2=pretend file is corrupted--reset, 3=pretend you're a hacker and we reset your stats");
  profileNameDvar = Dvar_RegisterString("LLNPTQPTKR", (const char *)&queryFormat.fmt + 3, 0, "Set to the name of the profile");
  Dvar_EndPermanentRegistration();
  Cmd_AddClientCommandList(S_COM_STORAGE_CMD, 1u);
  CL_PlayerData_RegisterCommands();
  Com_PlayerData_RegisterCommands();
  Cmd_AddCommandInternal("uploadStats", LiveStorage_UploadStatsCmd, &stru_14CDC0FF0);
  Cmd_AddCommandInternal("readStats", LiveStorage_ReadStatsCmd, &stru_14CDC1020);
  Online_MatchData_Init();
  Online_Telemetry_Init();
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_DW_TIME, Fence_TimeSyncDependenciesUpdated);
  s_fencePlaylistsStatusCode[0] = FETCHING_FIRST_PARTY_TOKEN;
  *(_QWORD *)s_fencePlaylistsErrorCode = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[2] = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[4] = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[6] = 0i64;
  s_fencePlaylistsStatusCode[1] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[2] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[3] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[4] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[5] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[6] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[7] = FETCHING_FIRST_PARTY_TOKEN;
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_PLAYLISTS, Fence_PlaylistsDependenciesUpdated);
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_FILTERED_PLAYLISTS, Fence_FilteredPlaylistsDependenciesUpdated);
  TaskManager_ConstructTaskSet(&storageTasks, "LiveStorage_Init");
  LiveStorage_InitMotd();
  LiveStorage_InitWriteStatsThread();
  statsFetchTask[0].interval = 500;
  *(_QWORD *)&statsFetchTask[0].failures = 0i64;
  *(_QWORD *)&statsFetchTask[0].lastTime = 0i64;
  statsFetchTask[1].interval = 500;
  statsFetchTask[1].backoffs = 0;
  *(_QWORD *)&statsFetchTask[1].lastTime = 0i64;
  statsFetchTask[2].interval = 500;
  statsFetchTask[2].backoffs = 0;
  *(_QWORD *)&statsFetchTask[2].lastTime = 0i64;
  statsFetchTask[3].interval = 500;
  statsFetchTask[3].backoffs = 0;
  *(_QWORD *)&statsFetchTask[3].lastTime = 0i64;
  statsFetchTask[4].interval = 500;
  statsFetchTask[4].backoffs = 0;
  *(_QWORD *)&statsFetchTask[4].lastTime = 0i64;
  statsFetchTask[5].interval = 500;
  statsFetchTask[5].backoffs = 0;
  *(_QWORD *)&statsFetchTask[5].lastTime = 0i64;
  statsFetchTask[6].interval = 500;
  statsFetchTask[6].backoffs = 0;
  *(_QWORD *)&statsFetchTask[6].lastTime = 0i64;
  statsFetchTask[7].interval = 500;
  statsFetchTask[7].backoffs = 0;
  statsFetchTask[7].lastTime = 0;
  memset_0(controllerStatData, 0, sizeof(controllerStatData));
}

/*
==============
LiveStorage_InitCommon
==============
*/
void LiveStorage_InitCommon(void)
{
  Dvar_BeginPermanentRegistration();
  mangleDWStats = Dvar_RegisterInt("PPQSORMPP", 0, 0, 0x7FFFFFFF, 4u, "0=do nothing, 1=pretend file doesn't exist--reset, 2=pretend file is corrupted--reset, 3=pretend you're a hacker and we reset your stats");
  profileNameDvar = Dvar_RegisterString("LLNPTQPTKR", (const char *)&queryFormat.fmt + 3, 0, "Set to the name of the profile");
  Dvar_EndPermanentRegistration();
  Cmd_AddClientCommandList(S_COM_STORAGE_CMD, 1u);
  CL_PlayerData_RegisterCommands();
  Com_PlayerData_RegisterCommands();
  Cmd_AddCommandInternal("uploadStats", LiveStorage_UploadStatsCmd, &stru_14CDC0FF0);
  Cmd_AddCommandInternal("readStats", LiveStorage_ReadStatsCmd, &stru_14CDC1020);
  Online_MatchData_Init();
  Online_Telemetry_Init();
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_DW_TIME, Fence_TimeSyncDependenciesUpdated);
  s_fencePlaylistsStatusCode[0] = FETCHING_FIRST_PARTY_TOKEN;
  *(_QWORD *)s_fencePlaylistsErrorCode = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[2] = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[4] = 0i64;
  *(_QWORD *)&s_fencePlaylistsErrorCode[6] = 0i64;
  s_fencePlaylistsStatusCode[1] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[2] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[3] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[4] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[5] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[6] = FETCHING_FIRST_PARTY_TOKEN;
  s_fencePlaylistsStatusCode[7] = FETCHING_FIRST_PARTY_TOKEN;
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_PLAYLISTS, Fence_PlaylistsDependenciesUpdated);
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_FILTERED_PLAYLISTS, Fence_FilteredPlaylistsDependenciesUpdated);
}

/*
==============
LiveStorage_InitPeriodicChallenges
==============
*/
void LiveStorage_InitPeriodicChallenges(const int controllerIndex)
{
  __int64 v2; 
  LocalClientNum_t ClientFromController; 
  connstate_t LocalClientGameConnectionState; 
  unsigned int v6; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int i; 
  unsigned int v10; 
  DDLState toState; 
  DDLState v12; 
  DDLState state; 
  DDLContext context; 

  v2 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  LocalClientGameConnectionState = CL_GetLocalClientGameConnectionState(ClientFromController);
  if ( LocalClientGameConnectionState == CA_DISCONNECTED )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v6 = 0;
    state.isValid = LocalClientGameConnectionState;
    state.offset = 0;
    toState.isValid = 0;
    toState.offset = 0;
    v12.isValid = 0;
    v12.offset = 0;
    state.arrayIndex = -1;
    *(_OWORD *)&state.member = _XMM0;
    toState.arrayIndex = -1;
    *(_OWORD *)&toState.member = _XMM0;
    v12.arrayIndex = -1;
    *(_OWORD *)&v12.member = _XMM0;
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(v2);
    if ( CL_PlayerData_GetDDLBuffer(&context, v2, ActiveStatsSource, STATSGROUP_RANKED) )
    {
      LiveStorage_InitializeDDLStateForStatsGroup(context.def, &state, STATSGROUP_RANKED);
      RawHash = j_SL_GetRawHash(scr_const.dailyChallengeId);
      DDL_MoveToNameByHash(&state, &toState, RawHash, NULL);
      for ( i = 0; i < 3; ++i )
      {
        DDL_MoveToIndex(&toState, &v12, i);
        DDL_SetInt(&v12, &context, -1);
      }
      v10 = j_SL_GetRawHash(scr_const.weeklyChallengeId);
      DDL_MoveToNameByHash(&state, &toState, v10, NULL);
      do
      {
        DDL_MoveToIndex(&toState, &v12, v6);
        DDL_SetInt(&v12, &context, -1);
        ++v6;
      }
      while ( v6 < 3 );
      controllerStorageData[v2].generateChallenges = 1;
    }
    else
    {
      Com_PrintError(14, "Cannot set data: we do not have player stats\n");
    }
  }
}

/*
==============
LiveStorage_IsPaidUserReady
==============
*/
bool LiveStorage_IsPaidUserReady(const int controllerIndex)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  Online_Commerce *Instance; 
  Online_Commerce *v5; 
  bool v6; 
  Online_Commerce *v7; 
  bool HavePaidEntitlement; 

  v1 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1;
  v3 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    return 1;
  Instance = Online_Commerce::GetInstance();
  v6 = 1;
  if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, controllerIndex) != ENTITLEMENT_STATE_COMPLETE )
  {
    v5 = Online_Commerce::GetInstance();
    if ( Online_Commerce::GetPaidEntitlementTaskState(v5, controllerIndex) != ENTITLEMENT_STATE_ERROR )
      v6 = 0;
  }
  v7 = Online_Commerce::GetInstance();
  HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v7, controllerIndex);
  if ( Live_IsUserSignedInToLive(controllerIndex) && v6 && HavePaidEntitlement )
    return 1;
  return Content_IsEnumerationDone() && v6;
}

/*
==============
LiveStorage_IsStatsBlobDirty
==============
*/
_BOOL8 LiveStorage_IsStatsBlobDirty(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2670, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isDirty;
}

/*
==============
LiveStorage_IsStatsBlobDoubleXPUsed
==============
*/
_BOOL8 LiveStorage_IsStatsBlobDoubleXPUsed(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2654, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isDoubleXPUsed;
}

/*
==============
LiveStorage_IsStatsBlobFailedUpload
==============
*/
_BOOL8 LiveStorage_IsStatsBlobFailedUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2638, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isFailedUpload;
}

/*
==============
LiveStorage_IsStatsBlobFirstUpload
==============
*/
_BOOL8 LiveStorage_IsStatsBlobFirstUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2590, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isFirstUpload;
}

/*
==============
LiveStorage_IsStatsBlobPrestigeReset
==============
*/
_BOOL8 LiveStorage_IsStatsBlobPrestigeReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2622, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isPrestigeReset;
}

/*
==============
LiveStorage_IsStatsBlobStatsReset
==============
*/
_BOOL8 LiveStorage_IsStatsBlobStatsReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v8; 

  v3 = statsBlob;
  v4 = statsSource;
  v5 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2606, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v8) )
      __debugbreak();
  }
  return controllerStatData[v5].playerStats[v4].blobFlags[v3].isStatsReset;
}

/*
==============
LiveStorage_IsStatsGroupObfuscated
==============
*/
_BOOL8 LiveStorage_IsStatsGroupObfuscated(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  return controllerStatData[controllerIndex].playerStats[statsSource].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation.isObfuscated;
}

/*
==============
LiveStorage_IsTimeSynced
==============
*/
_BOOL8 LiveStorage_IsTimeSynced()
{
  _BOOL8 result; 

  result = s_UTCSynced;
  if ( (live_test_onlinedataoff->current.enabled & 0x10) != 0 )
    return 0i64;
  return result;
}

/*
==============
LiveStorage_IsWaitingOnPlaylists
==============
*/
bool LiveStorage_IsWaitingOnPlaylists()
{
  return s_gettingPlaylists || (live_test_onlinedataoff->current.enabled & 4) != 0 || !g_playlistsFetched || !s_pausedFetchingPlaylists && s_playlistOutOfDate;
}

/*
==============
LiveStorage_IsWaitingOnStats
==============
*/
bool LiveStorage_IsWaitingOnStats(const int localControllerIndex)
{
  bool result; 

  if ( (live_test_onlinedataoff->current.enabled & 0x20) != 0 )
    return 1;
  if ( !controllerStatData[localControllerIndex].playerStats[0].statsFetched )
    return 1;
  result = LiveStorage_GettingStats(localControllerIndex);
  if ( result )
    return 1;
  return result;
}

/*
==============
LiveStorage_LocallyObfuscateStats
==============
*/
void LiveStorage_LocallyObfuscateStats(const int controllerIndex, const bool *statsGroupObfuscated)
{
  __int64 v2; 
  StatsSource ActiveStatsSource; 
  int i; 

  v2 = controllerIndex;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  for ( i = 0; i < 6; ++i )
  {
    if ( *statsGroupObfuscated )
    {
      if ( controllerStatData[v2].playerStats[ActiveStatsSource].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)i)].obfuscation.isObfuscated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 652, ASSERT_TYPE_ASSERT, "(!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ))", (const char *)&queryFormat, "!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource )") )
        __debugbreak();
      LiveStorage_LocallyObfuscateStatsGroup(v2, (const StatsGroup)i, ActiveStatsSource);
    }
    ++statsGroupObfuscated;
  }
}

/*
==============
LiveStorage_LocallyObfuscateStatsGroup
==============
*/
void LiveStorage_LocallyObfuscateStatsGroup(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  __int64 v3; 
  __int64 v5; 
  unsigned __int8 *PlayerDataBufferForSource; 
  unsigned int StatsGroupSize; 
  bool obfuscated; 
  char *fmt; 
  __int64 v10; 
  unsigned int v11; 
  unsigned __int8 pbBuffer[4]; 
  int v13; 
  __int64 v14; 
  DDLContext ddlContext; 
  bdRandom v16; 

  v14 = -2i64;
  v3 = statsSource;
  v5 = controllerIndex;
  if ( CL_PlayerData_GetDDLBuffer(&ddlContext, controllerIndex, statsSource, statsGroup) )
  {
    PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v5, statsGroup, (StatsSource)v3);
    if ( !controllerStatData[v5].playerStats[v3].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation.isObfuscated )
    {
      do
      {
        do
        {
          if ( !randomNumGenInit )
          {
            if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
              OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
            randomNumGenInit = 1;
          }
          if ( !BCryptGenRandom_0(s_provider, pbBuffer, 4u, 0) )
            break;
          if ( *(_DWORD *)pbBuffer )
            goto LABEL_11;
        }
        while ( v13 );
        bdRandom::bdRandom(&v16);
        bdRandom::nextUBytes(&v16, pbBuffer, 4);
        bdRandom::~bdRandom(&v16);
      }
      while ( !*(_DWORD *)pbBuffer );
LABEL_11:
      StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
      DDL_LocallyObfuscate(&ddlContext, PlayerDataBufferForSource, StatsGroupSize - 4, *(const unsigned int *)pbBuffer);
      obfuscated = ddlContext.obfuscated;
      if ( !ddlContext.obfuscated )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 560, ASSERT_TYPE_ASSERT, "(context->obfuscated)", (const char *)&queryFormat, "context->obfuscated") )
          __debugbreak();
        obfuscated = ddlContext.obfuscated;
        if ( !ddlContext.obfuscated )
        {
          Com_PrintWarning(14, "WARNING: Com_LocallyObfuscateStatsGroup - DDL_LocallyObfuscate Could not obfuscate stats in memory: statsGroup %i\n", (unsigned int)statsGroup);
          obfuscated = ddlContext.obfuscated;
        }
      }
      LiveStorage_SetPlayerDataObfuscated(v5, statsGroup, (const StatsSource)v3, obfuscated, ddlContext.randomInt);
      v11 = Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
      LODWORD(v10) = *(_DWORD *)pbBuffer;
      LODWORD(fmt) = v3;
      Com_Printf(14, "LiveStorage_LocallyObfuscateStatsGroup Obfuscating stats in memory: controller %i, statsGroup %i, statsSource %i, randomVal %i, stats %p, size %i\n", (unsigned int)v5, (unsigned int)statsGroup, fmt, v10, PlayerDataBufferForSource, v11);
    }
  }
  else
  {
    Com_PrintWarning(14, "WARNING: LiveStorage_LocallyObfuscateStatsGroup Could not obfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v5, (unsigned int)statsGroup, v3);
  }
}

/*
==============
LiveStorage_LocallyObfuscateStatsGroupRange
==============
*/
void LiveStorage_LocallyObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  LiveStorage_CommonObfuscateStatsGroupRange(controllerIndex, startByteIndex, rangeStart, rangeSize, 1);
}

/*
==============
LiveStorage_LocallyUnObfuscateStats
==============
*/
void LiveStorage_LocallyUnObfuscateStats(const int controllerIndex, bool *out_statsGroupObfuscated)
{
  __int64 v2; 
  __int64 ActiveStatsSource; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  bool v8; 
  unsigned __int8 *PlayerDataBufferForSource; 
  unsigned int StatsGroupSize; 
  bool obfuscated; 
  char *fmt; 
  char *fmta; 
  __int64 v14; 
  __int64 v15; 
  DDLContext context; 

  v2 = controllerIndex;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  v5 = ActiveStatsSource;
  v6 = 0;
  v7 = 220828 * v2;
  do
  {
    v8 = *(&controllerStatData[0].playerStats[v5].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)v6)].obfuscation.isObfuscated + v7);
    if ( v8 )
    {
      if ( CL_PlayerData_GetDDLBuffer(&context, v2, (StatsSource)ActiveStatsSource, (StatsGroup)v6) )
      {
        PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v2, (StatsGroup)v6, (StatsSource)ActiveStatsSource);
        if ( *(&controllerStatData[0].playerStats[v5].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)v6)].obfuscation.isObfuscated + v7) )
        {
          StatsGroupSize = Com_PlayerData_GetStatsGroupSize((StatsGroup)v6);
          DDL_LocallyUnObfuscate(&context, PlayerDataBufferForSource, StatsGroupSize - 4);
          obfuscated = context.obfuscated;
          if ( context.obfuscated )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 594, ASSERT_TYPE_ASSERT, "(!context.obfuscated)", (const char *)&queryFormat, "!context.obfuscated") )
              __debugbreak();
            obfuscated = context.obfuscated;
            if ( context.obfuscated )
            {
              Com_PrintWarning(0, "WARNING: Com_LocallyUnObfuscateStatsGroup - DDL_LocallyUnObfuscate Could not unobfuscate stats in memory: statsGroup %i\n", (unsigned int)v6);
              obfuscated = context.obfuscated;
            }
          }
          LiveStorage_SetPlayerDataObfuscated(v2, (const StatsGroup)v6, (const StatsSource)ActiveStatsSource, obfuscated, context.randomInt);
          LODWORD(v15) = Com_PlayerData_GetStatsGroupSize((StatsGroup)v6) - 4;
          LODWORD(v14) = context.randomInt;
          LODWORD(fmta) = ActiveStatsSource;
          Com_Printf(14, "LiveStorage_LocallyObfuscateStatsGroup UnObfuscating stats in memory: :controller %i, statsGroup %i, statsSource %i, randomVal %u, stats %p, size %i\n", (unsigned int)v2, (unsigned int)v6, fmta, v14, PlayerDataBufferForSource, v15);
        }
      }
      else
      {
        LODWORD(fmt) = ActiveStatsSource;
        Com_PrintWarning(14, "WARNING: LiveStorage_LocallyUnObfuscateStatsGroup Could not unobfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v2, (unsigned int)v6, fmt);
      }
    }
    *out_statsGroupObfuscated = v8;
    ++v6;
    ++out_statsGroupObfuscated;
  }
  while ( v6 < 6 );
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroup
==============
*/
void LiveStorage_LocallyUnObfuscateStatsGroup(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource)
{
  __int64 v3; 
  __int64 v5; 
  unsigned __int8 *PlayerDataBufferForSource; 
  unsigned int StatsGroupSize; 
  bool obfuscated; 
  char *fmt; 
  int fmta; 
  __int64 v11; 
  unsigned int v12; 
  DDLContext context; 

  v3 = controllerIndex;
  v5 = statsSource;
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, statsSource, statsGroup) )
  {
    PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v3, statsGroup, (StatsSource)v5);
    if ( controllerStatData[v3].playerStats[v5].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation.isObfuscated )
    {
      StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
      DDL_LocallyUnObfuscate(&context, PlayerDataBufferForSource, StatsGroupSize - 4);
      obfuscated = context.obfuscated;
      if ( context.obfuscated )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 594, ASSERT_TYPE_ASSERT, "(!context.obfuscated)", (const char *)&queryFormat, "!context.obfuscated") )
          __debugbreak();
        obfuscated = context.obfuscated;
        if ( context.obfuscated )
        {
          Com_PrintWarning(0, "WARNING: Com_LocallyUnObfuscateStatsGroup - DDL_LocallyUnObfuscate Could not unobfuscate stats in memory: statsGroup %i\n", (unsigned int)statsGroup);
          obfuscated = context.obfuscated;
        }
      }
      LiveStorage_SetPlayerDataObfuscated(v3, statsGroup, (const StatsSource)v5, obfuscated, context.randomInt);
      v12 = Com_PlayerData_GetStatsGroupSize(statsGroup) - 4;
      LODWORD(v11) = context.randomInt;
      LODWORD(fmt) = v5;
      Com_Printf(14, "LiveStorage_LocallyObfuscateStatsGroup UnObfuscating stats in memory: :controller %i, statsGroup %i, statsSource %i, randomVal %u, stats %p, size %i\n", (unsigned int)v3, (unsigned int)statsGroup, fmt, v11, PlayerDataBufferForSource, v12);
    }
  }
  else
  {
    fmta = v5;
    Com_PrintWarning(14, "WARNING: LiveStorage_LocallyUnObfuscateStatsGroup Could not unobfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v3, (unsigned int)statsGroup, fmta);
  }
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer
==============
*/
void LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer(unsigned __int8 *buf, const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  __int64 v7; 
  StatsGroup StatsGroupByByteOffset; 
  StatsGroup v10; 
  StatsSource ActiveStatsSource; 
  __int64 statsSource; 
  bool DDLBuffer; 
  const unsigned __int8 *statsStart; 
  char *fmt; 
  DDLContext *v16; 
  StatsGroup statsGroup; 
  DDLContext context; 

  v7 = controllerIndex;
  StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex + rangeSize - 1);
  if ( Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex) != StatsGroupByByteOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 730, ASSERT_TYPE_ASSERT, "(Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 ))", (const char *)&queryFormat, "Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex ) == Com_PlayerData_FindStatsGroupByByteOffset( startByteIndex + rangeSize - 1 )") )
    __debugbreak();
  v10 = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v7);
  statsSource = ActiveStatsSource;
  DDLBuffer = CL_PlayerData_GetDDLBuffer(&context, v7, ActiveStatsSource, v10);
  if ( controllerStatData[v7].playerStats[statsSource].blobFlags[Com_PlayerData_GetStatsBlob(v10)].obfuscation.isObfuscated && DDLBuffer )
  {
    statsStart = LiveStorage_GetPlayerDataBufferForSource(v7, v10, (StatsSource)statsSource);
    Com_LocallyUnObfuscateStatsGroupIntoBuffer_Internal(buf, v7, startByteIndex, rangeStart, rangeSize, &context, v10, (const StatsSource)statsSource, statsStart);
  }
  else
  {
    if ( controllerStatData[v7].playerStats[statsSource].blobFlags[Com_PlayerData_GetStatsBlob(v10)].obfuscation.isObfuscated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 743, ASSERT_TYPE_ASSERT, "(!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ))", (const char *)&queryFormat, "!LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource )") )
      __debugbreak();
    memcpy_0(buf, rangeStart, rangeSize);
    statsGroup = (int)statsSource;
    LODWORD(v16) = v10;
    LODWORD(fmt) = v7;
    Com_Printf(14, "LiveStorage_LocallyUnObfuscateStatsGroupIntoMessage: Copying clear text stats size %i from address %p: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)rangeSize, rangeStart, fmt, v16, statsGroup);
  }
}

/*
==============
LiveStorage_LocallyUnObfuscateStatsGroupRange
==============
*/
void LiveStorage_LocallyUnObfuscateStatsGroupRange(const int controllerIndex, const int startByteIndex, const unsigned __int8 *rangeStart, const int rangeSize)
{
  LiveStorage_CommonObfuscateStatsGroupRange(controllerIndex, startByteIndex, rangeStart, rangeSize, 0);
}

/*
==============
LiveStorage_LogComplete
==============
*/
taskCompleteResults LiveStorage_LogComplete(const int slot)
{
  overlappedTask *v1; 
  taskCompleteResults result; 
  taskCompleteResults v3; 

  v1 = &storageTasks.tasks[slot];
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 370, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  if ( v1->type != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 371, ASSERT_TYPE_ASSERT, "(task->type == TASK_LOGPRESTIGE)", (const char *)&queryFormat, "task->type == TASK_LOGPRESTIGE") )
    __debugbreak();
  result = dwRecordEventComplete(v1);
  v3 = result;
  if ( result )
  {
    if ( result == TASK_ERROR )
      Com_PrintWarning(16, "Unable to log challenge data\n");
    TaskManager_ClearTask(v1);
    return v3;
  }
  return result;
}

/*
==============
LiveStorage_LogPrestige
==============
*/
void LiveStorage_LogPrestige(int controllerIndex, XUID xuid)
{
  unsigned int PrestigeMP; 
  overlappedTask *OpenTaskSlot; 
  char dest[256]; 

  PrestigeMP = CL_PlayerData_GetPrestigeMP(controllerIndex);
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) == STATS_ONLINE )
  {
    OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, controllerIndex, 2);
    if ( OpenTaskSlot )
    {
      memset_0(dest, 0, sizeof(dest));
      Com_sprintf<256>((char (*)[256])dest, "%llu %d", xuid.m_id, PrestigeMP);
      if ( !dwRecordStringEvent(OpenTaskSlot, dest, DW_EVENT_LOGPRESTIGE) )
        TaskManager_ClearTask(OpenTaskSlot);
    }
    else
    {
      Com_PrintWarning(16, "Couldn't allocate task for storage upload");
    }
  }
}

/*
==============
LiveStorage_MarkPeriodicChallengesOutOfDate
==============
*/
void LiveStorage_MarkPeriodicChallengesOutOfDate(const int controllerIndex)
{
  controllerStorageData[controllerIndex].generateChallenges = 1;
}

/*
==============
LiveStorage_MarkPeriodicExtinctionBonusOutOfDate
==============
*/
void LiveStorage_MarkPeriodicExtinctionBonusOutOfDate(const int controllerIndex)
{
  controllerStorageData[controllerIndex].generateExtinctionBonusPool = 1;
}

/*
==============
LiveStorage_MaySetPersistentData
==============
*/
bool LiveStorage_MaySetPersistentData(LocalClientNum_t localClientNum)
{
  return CL_GetLocalClientGameConnectionState(localClientNum) == CA_DISCONNECTED;
}

/*
==============
LiveStorage_MaySetPersistentData_ControllerIndex
==============
*/
bool LiveStorage_MaySetPersistentData_ControllerIndex(int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  return CL_GetLocalClientGameConnectionState(ClientFromController) == CA_DISCONNECTED;
}

/*
==============
LiveStorage_NewUser
==============
*/
void LiveStorage_NewUser(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  OnlineStorage *Instance; 
  TaskManager *v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2890, ASSERT_TYPE_ASSERT, "( ( controllerIndex >= 0 && controllerIndex < 8 ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  v2 = v1;
  if ( controllerStatData[v1].writeStatsBufferInUse )
  {
    if ( !R_IsInRemoteScreenUpdate() )
      Com_PrintWarning(13, "No remote screen update for possibly lengthy blocking call\n");
    while ( controllerStatData[v2].writeStatsBufferInUse )
    {
      Sys_Sleep(1);
      Instance = OnlineStorage::GetInstance();
      Instance->Frame(Instance);
      DW_Frame(v1);
      v4 = TaskManager::GetInstance();
      TaskManager::Update(v4);
      LiveStorage_CheckOngoingSessionTasks();
    }
  }
  memset_0(&controllerStatData[v2], 0, 0x25A20ui64);
  Com_Printf(16, "LiveStorage_NewUser called for controller %i\n", (unsigned int)v1);
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2351, ASSERT_TYPE_ASSERT, "( ( controllerIndex >= 0 && controllerIndex < static_cast<int>( ( sizeof( *array_counter( controllerStorageData ) ) + 0 ) ) ) )", "( controllerIndex ) = %i", v6) )
      __debugbreak();
  }
  v5 = v1;
  *(_QWORD *)&controllerStorageData[v5].useGameStatsSource = 0i64;
  *(_QWORD *)&controllerStorageData[v5].resettingStats = 0i64;
  *(_DWORD *)&controllerStorageData[v5].generateChallenges = 0;
}

/*
==============
LiveStorage_NewUser_Common
==============
*/
void LiveStorage_NewUser_Common(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 

  v1 = controllerIndex;
  Com_Printf(16, "LiveStorage_NewUser called for controller %i\n", (unsigned int)controllerIndex);
  if ( (unsigned int)v1 > 7 )
  {
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2351, ASSERT_TYPE_ASSERT, "( ( controllerIndex >= 0 && controllerIndex < static_cast<int>( ( sizeof( *array_counter( controllerStorageData ) ) + 0 ) ) ) )", "( controllerIndex ) = %i", v3) )
      __debugbreak();
  }
  v2 = v1;
  *(_QWORD *)&controllerStorageData[v2].useGameStatsSource = 0i64;
  *(_QWORD *)&controllerStorageData[v2].resettingStats = 0i64;
  *(_DWORD *)&controllerStorageData[v2].generateChallenges = 0;
}

/*
==============
LiveStorage_ObufscateAllStatsGroups
==============
*/
void LiveStorage_ObufscateAllStatsGroups(const int controllerIndex, const StatsSource statsSource)
{
  __int64 v2; 
  __int64 v3; 
  int i; 
  unsigned __int8 *PlayerDataBufferForSource; 
  unsigned int StatsGroupSize; 
  bool obfuscated; 
  char *fmt; 
  char *fmta; 
  __int64 v10; 
  __int64 v11; 
  DDLContext context; 
  bdRandom v13; 
  unsigned int pbBuffer; 
  int v15; 

  v2 = statsSource;
  v3 = controllerIndex;
  for ( i = 0; i < 6; ++i )
  {
    if ( CL_PlayerData_GetDDLBuffer(&context, v3, (StatsSource)v2, (StatsGroup)i) )
    {
      PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v3, (StatsGroup)i, (StatsSource)v2);
      if ( !controllerStatData[v3].playerStats[v2].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)i)].obfuscation.isObfuscated )
      {
        do
        {
          do
          {
            if ( !randomNumGenInit )
            {
              if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
                OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
              randomNumGenInit = 1;
            }
            if ( !BCryptGenRandom_0(s_provider, (PUCHAR)&pbBuffer, 4u, 0) )
              break;
            if ( pbBuffer )
              goto LABEL_12;
          }
          while ( v15 );
          bdRandom::bdRandom(&v13);
          bdRandom::nextUBytes(&v13, (unsigned __int8 *)&pbBuffer, 4);
          bdRandom::~bdRandom(&v13);
        }
        while ( !pbBuffer );
LABEL_12:
        StatsGroupSize = Com_PlayerData_GetStatsGroupSize((StatsGroup)i);
        DDL_LocallyObfuscate(&context, PlayerDataBufferForSource, StatsGroupSize - 4, pbBuffer);
        obfuscated = context.obfuscated;
        if ( !context.obfuscated )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 560, ASSERT_TYPE_ASSERT, "(context->obfuscated)", (const char *)&queryFormat, "context->obfuscated") )
            __debugbreak();
          obfuscated = context.obfuscated;
          if ( !context.obfuscated )
          {
            Com_PrintWarning(14, "WARNING: Com_LocallyObfuscateStatsGroup - DDL_LocallyObfuscate Could not obfuscate stats in memory: statsGroup %i\n", (unsigned int)i);
            obfuscated = context.obfuscated;
          }
        }
        LiveStorage_SetPlayerDataObfuscated(v3, (const StatsGroup)i, (const StatsSource)v2, obfuscated, context.randomInt);
        LODWORD(v11) = Com_PlayerData_GetStatsGroupSize((StatsGroup)i) - 4;
        LODWORD(v10) = pbBuffer;
        LODWORD(fmta) = v2;
        Com_Printf(14, "LiveStorage_LocallyObfuscateStatsGroup Obfuscating stats in memory: controller %i, statsGroup %i, statsSource %i, randomVal %i, stats %p, size %i\n", (unsigned int)v3, (unsigned int)i, fmta, v10, PlayerDataBufferForSource, v11);
      }
    }
    else
    {
      LODWORD(fmt) = v2;
      Com_PrintWarning(14, "WARNING: LiveStorage_LocallyObfuscateStatsGroup Could not obfuscate stats in memory: controller %i, statsGroup %i, statsSource %i\n", (unsigned int)v3, (unsigned int)i, fmt);
    }
  }
}

/*
==============
LiveStorage_PauseFetchingPlaylists
==============
*/
void LiveStorage_PauseFetchingPlaylists(void)
{
  Com_PrintError(16, "Attempts to fetch playlists have been suspended for this game session.\n");
  s_pausedFetchingPlaylists = 1;
}

/*
==============
LiveStorage_PersistentDataEnabled
==============
*/
bool LiveStorage_PersistentDataEnabled()
{
  return !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext();
}

/*
==============
LiveStorage_PlaylistFrame
==============
*/
void LiveStorage_PlaylistFrame(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int ControllerFromClient; 
  DWServicesAccess *Instance; 
  const char *Name; 
  bool v6; 
  char v7; 
  const dvar_t *v8; 
  bool enabled; 

  v1 = controllerIndex;
  if ( !OnlineTournament_IsInTournament() )
  {
    LiveStorage_UnpackPlaylist(v1);
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      v2 = DVARBOOL_test_playlist_update;
      if ( !DVARBOOL_test_playlist_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "test_playlist_update") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( v2->current.enabled )
      {
        Playlist_SetPlaylistAvailable(1);
        Dvar_SetBool_Internal(DVARBOOL_test_playlist_update, 0);
      }
      else if ( Playlist_IsNewPlaylistAvailable() )
      {
        v6 = Live_AreWeAcceptingInvite();
        v7 = s_playlistOutOfDate;
        if ( !v6 )
          v7 = 1;
        s_playlistOutOfDate = v7;
      }
      else
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        Instance = DWServicesAccess::GetInstance();
        if ( DWServicesAccess::isReady(Instance, ControllerFromClient) && g_playlistsFetched && !g_bFetchingPlaylistInfo )
        {
          Name = Playlist_GetName();
          if ( s_time_to_check != -1 && s_time_to_check - Sys_Milliseconds() < 0 )
          {
            LiveStorage_GetPublisherStorageFileInfo(ControllerFromClient, Name);
            if ( playListUpdateCheckMinutes->current.integer <= 0 )
              s_time_to_check = -1;
            else
              s_time_to_check = 60000 * playListUpdateCheckMinutes->current.integer + Sys_Milliseconds();
          }
        }
      }
    }
    v8 = DVARBOOL_playlist_update_wait_on_dependencies;
    if ( DVARBOOL_playlist_update_wait_on_dependencies )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_playlist_update_wait_on_dependencies);
      enabled = v8->current.enabled;
    }
    else
    {
      enabled = 0;
    }
    if ( (live_test_onlinedataoff->current.enabled & 4) == 0 && g_playlistsFetched && !s_pausedFetchingPlaylists && s_playlistOutOfDate && (!enabled || FenceManager_AreDependenciesMet(v1, FENCE_PLAYLISTS)) )
    {
      if ( LiveStorage_FetchPlaylists(v1) )
      {
        s_fencePlaylistsStatusCode[v1] = AUTHENTICATING;
        s_fencePlaylistsErrorCode[v1] = NONE;
      }
      else
      {
        s_fencePlaylistsStatusCode[v1] = AUTHENTICATED;
      }
    }
  }
}

/*
==============
LiveStorage_ReadStats
==============
*/
void LiveStorage_ReadStats(const int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t v3; 
  __int64 v4; 
  ResetStatsReason resetStatus; 

  v1 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) )
  {
    v3 = CL_Mgr_GetClientFromController(v1);
    if ( CL_GetLocalClientGameConnectionState(v3) == CA_DISCONNECTED )
    {
      v4 = v1;
      controllerStatData[v4].playerStats[1].blobFlags[0].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[0].obfuscation.randomInt = 0;
      controllerStatData[v4].playerStats[1].blobFlags[1].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[1].obfuscation.randomInt = 0;
      controllerStatData[v4].playerStats[1].blobFlags[2].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[2].obfuscation.randomInt = 0;
      controllerStatData[v4].playerStats[1].blobFlags[3].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[3].obfuscation.randomInt = 0;
      controllerStatData[v4].playerStats[1].blobFlags[4].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[4].obfuscation.randomInt = 0;
      controllerStatData[v4].playerStats[1].blobFlags[5].obfuscation.isObfuscated = 0;
      controllerStatData[v4].playerStats[1].blobFlags[5].obfuscation.randomInt = 0;
      UI_BeginReadingDeviceUI(ClientFromController);
      LiveStorage_ReadStats_Platform(v1);
      UI_EndReadingSaveDeviceUI(ClientFromController);
      LiveStorage_ValidateStatsChecksumAndVersion(v1, STATS_OFFLINE);
      if ( !controllerStatData[v1].playerStats[1].statsFetched && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 489, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
        __debugbreak();
      resetStatus = controllerStatData[v4].playerStats[1].resetStatus;
      if ( (unsigned int)(resetStatus - 1) <= 2 || com_unattendedMode->current.enabled || resetStatus == RESET_STATS_REASON_CORRUPT || Dvar_GetBool_Internal_DebugName(DVARBOOL_online_is_devmapping, "online_is_devmapping") && resetStatus )
        LiveStorage_ResetStats(v1, STATS_OFFLINE);
      if ( controllerStatData[v4].playerStats[1].statsFetched && controllerStatData[v4].playerStats[1].resetStatus == RESET_STATS_NO_RESET )
      {
        CL_PlayerData_InitializeNewLoadoutSlots(v1);
        CL_PlayerData_ResetCustomClanTagIfInvalid(v1);
        if ( (!controllerStatData[v4].playerStats[1].statsFetched || controllerStatData[v4].playerStats[1].resetStatus) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 840, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource )") )
          __debugbreak();
        GamerProfile_UpdateProfileFromStats(v1, STATS_OFFLINE);
        LiveStorage_ObufscateAllStatsGroups(v1, STATS_OFFLINE);
        OnlineMgr::OnUserStatsFetched(&g_onlineMgr, v1, STATS_OFFLINE);
        LuaShared_PlayerData_OnStatsFetched(v1, STATS_OFFLINE);
        if ( LUI_BeginEvent(LOCAL_CLIENT_0, "playerdata_available", LUI_luaVM) )
        {
          LUI_SetTableInt("statsSource", 1i64, LUI_luaVM);
          LUI_SetTableInt("controllerIndex", v1, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
      }
    }
  }
}

/*
==============
LiveStorage_ReadStatsCmd
==============
*/
void LiveStorage_ReadStatsCmd()
{
  int v0; 
  __int64 v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( LiveStorage_GetActiveStatsSource(v0) == STATS_ONLINE )
  {
    Live_Invitation_HasAcceptedInvite();
    if ( !controllerStatData[v1].playerStats[0].statsFetched )
      LiveStorage_DownloadStats(v1);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) && LiveStorage_GetActiveStatsSource(v1) == STATS_OFFLINE )
  {
    v2 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      goto LABEL_18;
    v3 = DVARBOOL_splitscreen;
    if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
LABEL_18:
      if ( CL_Mgr_IsControllerMappedToClient(v1, NULL) )
        LiveStorage_ReadStats(v1);
    }
  }
}

/*
==============
LiveStorage_ReadStats_Common
==============
*/
void LiveStorage_ReadStats_Common(const int controllerIndex, unsigned __int8 *fileContents, int bytesRead, StatsSource statsSource)
{
  __int64 v4; 
  size_t v5; 
  __int64 v7; 
  unsigned __int8 *m_ptr; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  StatsGroup v13; 
  unsigned __int8 *PlayerDataBufferForSource; 
  int v15; 
  int v16; 
  char *v17; 
  DDLDef *Def; 
  __int64 v21; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  void *userData; 
  unsigned int v24; 
  char *v26; 
  DDLDef *ddlDef; 
  Mem_LargeLocal v28; 
  DDLHeader result; 
  DDLContext ddlContext; 
  StatsGroup statsGroup[4]; 
  int v32; 
  int v33; 

  v4 = statsSource;
  v5 = bytesRead;
  v7 = controllerIndex;
  Mem_LargeLocal::Mem_LargeLocal(&v28, 0x10474ui64, "decompressBufferSize decompressBuffer");
  m_ptr = (unsigned __int8 *)v28.m_ptr;
  v26 = (char *)v28.m_ptr;
  if ( v5 >= 4 )
  {
    v9 = *(_DWORD *)fileContents;
    if ( *(int *)fileContents > 2 )
    {
      if ( v9 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1322, ASSERT_TYPE_ASSERT, "(fileVersion == 3)", (const char *)&queryFormat, "fileVersion == OFFLINE_STATS_FILE_VERSION") )
        __debugbreak();
      LODWORD(v5) = MemFile_DecompressWithZLib(fileContents + 4, v5 - 4, m_ptr + 4, 66672);
      if ( !(_DWORD)v5 )
      {
        Com_Printf(16, "Offline stats file could not be zlib decompressed for controller %i\n", (unsigned int)v7);
        v21 = v4;
        goto LABEL_27;
      }
    }
    else
    {
      Com_Printf(16, "Offline stats file version of %i does not require zlib decompression for controller %i\n", v9, (unsigned int)v7);
      memcpy_0(m_ptr, fileContents, v5);
    }
    *(_OWORD *)statsGroup = _xmm;
    v32 = 1;
    v33 = 5;
    v10 = 0;
    v24 = 0;
    v11 = 4;
    Com_Printf(16, "LiveStorage_ReadStats_Platform - searching for ddl blobs in the save file.  you will see a lot of ddl errors.  no need to be alarmed!\n");
    if ( (int)v5 <= 4 )
      goto LABEL_26;
    v12 = 0i64;
    while ( 1 )
    {
      v13 = statsGroup[v12];
      ddlDef = (DDLDef *)Com_PlayerData_GetDefForStatsGroup(v13);
      PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v7, v13, (StatsSource)v4);
      v15 = Com_PlayerData_GetStatsGroupSize(v13) - 4;
      v16 = v15;
      if ( (int)v5 - (v11 + 4) < v15 )
        v16 = v5 - (v11 + 4);
      v17 = &v26[v11 + 4];
      memcpy_0(PlayerDataBufferForSource, v17, v16);
      if ( DDL_CreateContext(PlayerDataBufferForSource, v15, ddlDef, &ddlContext, NULL, NULL) )
      {
        Com_Printf(16, "LiveStorage_ReadStats_Platform - found valid stat buffer for stat group %d\n", (unsigned int)statsGroup[v12]);
        _YMM0 = *(__m256i *)DDL_GetHeader(&result, v17, 0);
        __asm { vextractf128 xmm0, ymm0, 1 }
        Def = DDL_GetDef(ddlDef->name, (unsigned __int16)_XMM0);
        if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1382, ASSERT_TYPE_ASSERT, "(oldDef)", (const char *)&queryFormat, "oldDef") )
          __debugbreak();
        v11 += 1224 * ((Def->byteSize + 3) / 1224);
        v10 = ++v24;
        if ( ++v12 >= 6 )
        {
          Com_Printf(16, "LiveStorage_ReadStats_Platform - finished reading all stats groups\n");
LABEL_15:
          if ( v10 == 6 )
          {
            LODWORD(accessCB) = v7;
            Com_Printf(16, "Read %i bytes of stats data from file \"%s\" for controller %i.\n", (unsigned int)v5, "mpdata", accessCB);
            controllerStatData[v7].playerStats[statsSource].statsFetched = 1;
            goto LABEL_28;
          }
          LODWORD(v4) = statsSource;
LABEL_26:
          LODWORD(userData) = v7;
          Com_PrintWarning(16, "only read %d/%d stats blobs in file \"%s\" for controller %i; clearing stats\n", v10, 6i64, "mpdata", userData);
          v21 = (int)v4;
LABEL_27:
          controllerStatData[v7].playerStats[v21].resetStatus = RESET_STATS_REASON_CORRUPT;
          goto LABEL_28;
        }
      }
      else
      {
        Com_PrintWarning(16, "Attempting to load old offline stats file, but found a wasted stat packet in the file.  Continuing.\n");
        v10 = v24;
      }
      v11 += 1224;
      if ( v11 >= (int)v5 )
        goto LABEL_15;
      LODWORD(v4) = statsSource;
    }
  }
  Com_Printf(16, "Offline stats file not large enough to process for controller %i\n", (unsigned int)v7);
  controllerStatData[v7].playerStats[v4].resetStatus = RESET_STATS_REASON_BAD_FILE_VERSION;
LABEL_28:
  Mem_LargeLocal::~Mem_LargeLocal(&v28);
}

/*
==============
LiveStorage_RecordPlayTime
==============
*/
void LiveStorage_RecordPlayTime(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  StatsSource ActiveStatsSource; 
  unsigned int TimeAsSeconds; 
  unsigned int RawHash; 
  DDLContext context; 

  if ( SV_IsDemoPlaying() || SV_IsDemoPlayingNext() )
  {
    Com_PrintWarning(16, "Unable to save lastPlayedTime because persistent data is not enabled. Rest XP may not accumulate.\n");
  }
  else
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
    if ( !CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_COMMON) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2374, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &buffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_COMMON ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &buffer, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), STATSGROUP_COMMON )") )
      __debugbreak();
    TimeAsSeconds = Sys_GetTimeAsSeconds();
    RawHash = j_SL_GetRawHash(scr_const.lastPlayedTime);
    Com_PlayerData_SetInternalIntByName(RawHash, TimeAsSeconds, &context, NULL, STATSGROUP_COMMON);
    Com_Printf(16, "Saving lastPlayedTime of %u.\n", TimeAsSeconds);
  }
}

/*
==============
LiveStorage_RegisterCommands
==============
*/
void LiveStorage_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_COM_STORAGE_CMD, 1u);
  CL_PlayerData_RegisterCommands();
  Com_PlayerData_RegisterCommands();
  Cmd_AddCommandInternal("uploadStats", LiveStorage_UploadStatsCmd, &stru_14CDC0FF0);
  Cmd_AddCommandInternal("readStats", LiveStorage_ReadStatsCmd, &stru_14CDC1020);
}

/*
==============
LiveStorage_ResetStats
==============
*/
void LiveStorage_ResetStats(const int controllerIndex, StatsSource statsSource)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  Online_Loot *Instance; 
  Online_Loot *v8; 
  OnlineChallengesManager *v9; 
  Online_Friends *v10; 
  Online_Friends *v11; 
  __int64 v12; 
  const dvar_t *v13; 

  v3 = statsSource;
  v4 = controllerIndex;
  v5 = controllerIndex;
  if ( controllerStorageData[v5].resettingStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1419, ASSERT_TYPE_ASSERT, "(!controllerStorageData[controllerIndex].resettingStats)", (const char *)&queryFormat, "!controllerStorageData[controllerIndex].resettingStats") )
    __debugbreak();
  controllerStorageData[v5].resetStatsSource = v3;
  controllerStorageData[v5].resettingStats = 1;
  if ( !(_DWORD)v3 )
    LiveStorage_FinishDownloadingStats(controllerIndex);
  v6 = 220828 * v4;
  if ( !*(&controllerStatData[0].playerStats[v3].statsFetched + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1488, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", "%s\n\tcontroller %i, stats source %i", "LiveStorage_AreStatsFetched( controllerIndex, statsSource )", controllerIndex, v3) )
    __debugbreak();
  LiveStorage_StatsInit(controllerIndex, 1, 0, (StatsSource)v3);
  if ( !(_DWORD)v3 )
  {
    Instance = Online_Loot::GetInstance();
    Online_Loot::DeleteInventory(Instance, controllerIndex);
    v8 = Online_Loot::GetInstance();
    Online_Loot::DeleteBalances(v8, controllerIndex);
    v9 = OnlineChallengesManager::GetInstance();
    OnlineChallengesManager::ResetUser(v9, controllerIndex);
    v10 = Online_Friends::GetInstance();
    if ( Online_Friends::FavoriteFriends_IsEnabled(v10) )
    {
      v11 = Online_Friends::GetInstance();
      Online_Friends::FavoriteFriends_ResetStats(v11, controllerIndex);
    }
  }
  GamerProfile_UpdateProfileFromStats(controllerIndex, (StatsSource)v3);
  *(&controllerStatData[0].playerStats[v3].blobFlags[0].isDirty + v6) = 1;
  *(&controllerStatData[0].playerStats[v3].blobFlags[1].isDirty + v6) = 1;
  *(&controllerStatData[0].playerStats[v3].blobFlags[2].isDirty + v6) = 1;
  *(&controllerStatData[0].playerStats[v3].blobFlags[3].isDirty + v6) = 1;
  v12 = v6 + 77072 * v3;
  v13 = DCONST_DVARINT_developer;
  *(&controllerStatData[0].playerStats[0].blobFlags[4].isDirty + v12) = 1;
  *(&controllerStatData[0].playerStats[0].blobFlags[5].isDirty + v12) = 1;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
    LiveStorage_SaveStatsForSource(controllerIndex, (StatsSource)v3);
  if ( !controllerStorageData[v5].resettingStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1427, ASSERT_TYPE_ASSERT, "(controllerStorageData[controllerIndex].resettingStats)", (const char *)&queryFormat, "controllerStorageData[controllerIndex].resettingStats") )
    __debugbreak();
  controllerStorageData[v5].resettingStats = 0;
  OnlineMgr::OnUserStatsFetched(&g_onlineMgr, controllerIndex, (StatsSource)v3);
  LuaShared_PlayerData_OnStatsFetched(controllerIndex, (StatsSource)v3);
}

/*
==============
LiveStorage_ResetStatsIfUnusable
==============
*/
void LiveStorage_ResetStatsIfUnusable(const int controllerIndex, StatsSource statsSource)
{
  __int64 v4; 
  int v5; 

  v4 = 77072i64 * (int)statsSource + 220828i64 * controllerIndex;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 489, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
    __debugbreak();
  v5 = *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v4);
  if ( (unsigned int)(v5 - 1) <= 2 || com_unattendedMode->current.enabled || v5 == 4 || Dvar_GetBool_Internal_DebugName(DVARBOOL_online_is_devmapping, "online_is_devmapping") && v5 )
    LiveStorage_ResetStats(controllerIndex, statsSource);
}

/*
==============
LiveStorage_ResetStats_ClearStatsSource
==============
*/
void LiveStorage_ResetStats_ClearStatsSource(const int controllerIndex)
{
  bool *p_resettingStats; 

  p_resettingStats = &controllerStorageData[controllerIndex].resettingStats;
  if ( !*p_resettingStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1427, ASSERT_TYPE_ASSERT, "(controllerStorageData[controllerIndex].resettingStats)", (const char *)&queryFormat, "controllerStorageData[controllerIndex].resettingStats") )
    __debugbreak();
  *p_resettingStats = 0;
}

/*
==============
LiveStorage_ResetStats_SetStatsSource
==============
*/
void LiveStorage_ResetStats_SetStatsSource(const int controllerIndex, StatsSource statsSource)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( controllerStorageData[v3].resettingStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1419, ASSERT_TYPE_ASSERT, "(!controllerStorageData[controllerIndex].resettingStats)", (const char *)&queryFormat, "!controllerStorageData[controllerIndex].resettingStats") )
    __debugbreak();
  controllerStorageData[v3].resetStatsSource = statsSource;
  controllerStorageData[v3].resettingStats = 1;
}

/*
==============
LiveStorage_SaveStats
==============
*/
void LiveStorage_SaveStats(const int controllerIndex)
{
  StatsSource ActiveStatsSource; 

  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  LiveStorage_SaveStatsForSource(controllerIndex, ActiveStatsSource);
}

/*
==============
LiveStorage_SaveStatsForSource
==============
*/
void LiveStorage_SaveStatsForSource(const int controllerIndex, StatsSource statsSource)
{
  __int64 v3; 

  v3 = 220828i64 * controllerIndex + 77072i64 * (int)statsSource;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v3) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v3) )
  {
    Com_Printf(16, "Not saving stats: they're in a bad state (cont %i)\n", (unsigned int)controllerIndex);
  }
  else if ( statsSource )
  {
    if ( statsSource != STATS_OFFLINE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1576, ASSERT_TYPE_ASSERT, "( ( statsSource == STATS_OFFLINE ) )", "( statsSource ) = %i", statsSource) )
      __debugbreak();
    LiveStorage_WriteStats(controllerIndex);
  }
  else
  {
    LiveStorage_RequestOnlineStatsUpload(controllerIndex);
  }
}

/*
==============
LiveStorage_SetAllStatsBlobsDirty
==============
*/
void LiveStorage_SetAllStatsBlobsDirty(const int localcontrollerIndex, StatsSource statsSource, bool dirty)
{
  unsigned __int64 v3; 
  __int64 v4; 
  unsigned __int64 v5; 

  v3 = 4817i64 * (int)statsSource;
  v4 = 220828i64 * localcontrollerIndex;
  *(&controllerStatData[0].playerStats[v3 / 0x12D1].blobFlags[0].isDirty + v4) = dirty;
  *(&controllerStatData[0].playerStats[v3 / 0x12D1].blobFlags[1].isDirty + v4) = dirty;
  *(&controllerStatData[0].playerStats[v3 / 0x12D1].blobFlags[2].isDirty + v4) = dirty;
  *(&controllerStatData[0].playerStats[v3 / 0x12D1].blobFlags[3].isDirty + v4) = dirty;
  v5 = v4 + 16 * v3;
  *(&controllerStatData[0].playerStats[0].blobFlags[4].isDirty + v5) = dirty;
  *(&controllerStatData[0].playerStats[0].blobFlags[5].isDirty + v5) = dirty;
}

/*
==============
LiveStorage_SetDDLObfuscationData
==============
*/
void LiveStorage_SetDDLObfuscationData(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, DDLContext *context)
{
  __int64 v4; 
  __int64 v6; 
  PlayerStatsObfuscation *p_obfuscation; 

  v4 = statsSource;
  v6 = controllerIndex;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2759, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  p_obfuscation = &controllerStatData[v6].playerStats[v4].blobFlags[Com_PlayerData_GetStatsBlob(statsGroup)].obfuscation;
  context->obfuscated = p_obfuscation->isObfuscated;
  context->randomInt = p_obfuscation->randomInt;
}

/*
==============
LiveStorage_SetPlayerDataObfuscated
==============
*/
void LiveStorage_SetPlayerDataObfuscated(const int controllerIndex, const StatsGroup statsGroup, const StatsSource statsSource, const bool isObfuscated, const unsigned int randomInt)
{
  PlayerStats *v9; 
  StatsBlobId StatsBlob; 

  v9 = &controllerStatData[controllerIndex].playerStats[statsSource];
  StatsBlob = Com_PlayerData_GetStatsBlob(statsGroup);
  v9->blobFlags[StatsBlob].obfuscation.isObfuscated = isObfuscated;
  v9->blobFlags[StatsBlob].obfuscation.randomInt = randomInt;
  LuaShared_PlayerData_UpdateContext(controllerIndex, statsSource, statsGroup);
}

/*
==============
LiveStorage_SetStatsBlobDirty
==============
*/
void LiveStorage_SetStatsBlobDirty(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool dirty)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2662, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isDirty = dirty;
}

/*
==============
LiveStorage_SetStatsBlobDoubleXPUsed
==============
*/
void LiveStorage_SetStatsBlobDoubleXPUsed(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2646, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isDoubleXPUsed = val;
}

/*
==============
LiveStorage_SetStatsBlobFailedUpload
==============
*/
void LiveStorage_SetStatsBlobFailedUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2630, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isFailedUpload = val;
}

/*
==============
LiveStorage_SetStatsBlobFirstUpload
==============
*/
void LiveStorage_SetStatsBlobFirstUpload(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2582, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isFirstUpload = val;
}

/*
==============
LiveStorage_SetStatsBlobPrestigeReset
==============
*/
void LiveStorage_SetStatsBlobPrestigeReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2614, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isPrestigeReset = val;
}

/*
==============
LiveStorage_SetStatsBlobStatsReset
==============
*/
void LiveStorage_SetStatsBlobStatsReset(int controllerIndex, StatsSource statsSource, StatsBlobId statsBlob, bool val)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v9; 

  v4 = statsBlob;
  v6 = statsSource;
  v7 = controllerIndex;
  if ( (unsigned int)statsBlob >= STATS_BLOB_COUNT )
  {
    v9 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2598, ASSERT_TYPE_ASSERT, "(unsigned)( statsBlob ) < (unsigned)( STATS_BLOB_COUNT )", "statsBlob doesn't index STATS_BLOB_COUNT\n\t%i not in [0, %i)", statsBlob, v9) )
      __debugbreak();
  }
  controllerStatData[v7].playerStats[v6].blobFlags[v4].isStatsReset = val;
}

/*
==============
LiveStorage_ShouldReadOfflineStats
==============
*/
bool LiveStorage_ShouldReadOfflineStats(int localControllerIndex)
{
  const dvar_t *v2; 
  const dvar_t *v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) || LiveStorage_GetActiveStatsSource(localControllerIndex) != STATS_OFFLINE )
    return 0;
  v2 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    v3 = DVARBOOL_splitscreen;
    if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
      return 0;
  }
  return CL_Mgr_IsControllerMappedToClient(localControllerIndex, NULL);
}

/*
==============
LiveStorage_ShouldReadOnlineStats
==============
*/
char LiveStorage_ShouldReadOnlineStats(int controllerIndex)
{
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) )
    return 0;
  Live_Invitation_HasAcceptedInvite();
  return 1;
}

/*
==============
LiveStorage_ShouldReadPeriodicChallenges
==============
*/
bool LiveStorage_ShouldReadPeriodicChallenges(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  return live_test_onlinedataoff->current.enabled < 0 || !Live_UserIsGuest(controllerIndex) && controllerStorageData[v1].generateChallenges && controllerStatData[v1].playerStats[0].statsFetched && controllerStatData[v1].playerStats[0].resetStatus == RESET_STATS_NO_RESET;
}

/*
==============
LiveStorage_ShouldReadPeriodicExtinctionBonus
==============
*/
bool LiveStorage_ShouldReadPeriodicExtinctionBonus(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  return !Live_UserIsGuest(controllerIndex) && controllerStorageData[v1].generateExtinctionBonusPool && controllerStatData[v1].playerStats[0].statsFetched && controllerStatData[v1].playerStats[0].resetStatus == RESET_STATS_NO_RESET;
}

/*
==============
LiveStorage_ShowResetStatsError
==============
*/
void LiveStorage_ShowResetStatsError(void)
{
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144001268);
}

/*
==============
LiveStorage_Shutdown
==============
*/
void LiveStorage_Shutdown(void)
{
  Cmd_RemoveCommand("uploadStats");
  Cmd_RemoveCommand("readStats");
  Com_PlayerData_UnregisterCommands();
  CL_PlayerData_UnregisterCommands();
  Cmd_RemoveClientCommandList(S_COM_STORAGE_CMD, 1u);
}

/*
==============
LiveStorage_StatsInit
==============
*/
void LiveStorage_StatsInit(const int controllerIndex, bool clear, bool freshStart, StatsSource statsSource)
{
  __int64 v5; 
  StatsSource v6; 
  const DDLDef *v9; 
  const DDLDef *v10; 
  unsigned int v11; 
  StatsSource ActiveStatsSource; 
  StatsSource v13; 
  StatsSource v14; 
  StatsSource v15; 
  StatsSource v16; 
  unsigned __int8 *v17; 
  StatsSource v18; 
  unsigned __int8 *v19; 
  unsigned int StatsGroupSize; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  LocalClientNum_t ClientFromController; 
  StatsSource v32; 
  unsigned int RawHash; 
  unsigned int i; 
  unsigned int v35; 
  DDLDef *ddlDef; 
  DDLDef *v37; 
  unsigned __int8 *buff; 
  DDLDef *v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  DDLDef *Asset; 
  unsigned __int8 *PlayerDataBufferForSource; 
  DDLDef *v44; 
  DDLContext v45; 
  DDLContext v46; 
  DDLContext v47; 
  DDLContext ddlContext; 
  DDLContext v49; 
  DDLContext v50; 

  v5 = controllerIndex;
  v6 = statsSource;
  ddlDef = (DDLDef *)Com_DDL_LoadAsset("ddl/mp/playerdata.ddl");
  Asset = (DDLDef *)Com_DDL_LoadAsset("ddl/mp/cpdata.ddl");
  v39 = (DDLDef *)Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  v37 = (DDLDef *)Com_DDL_LoadAsset("ddl/mp/rankedloadouts.ddl");
  v9 = Com_DDL_LoadAsset("ddl/mp/privateloadouts.ddl");
  v10 = Com_DDL_LoadAsset("ddl/mp/nongamedata.ddl");
  v44 = (DDLDef *)v10;
  if ( ddlDef && Asset && v39 && v37 && v9 && v10 )
  {
    v11 = 0;
    if ( clear )
    {
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v5);
      buff = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_RANKED, ActiveStatsSource);
      if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1628, ASSERT_TYPE_ASSERT, "(mpDataBuf)", (const char *)&queryFormat, "mpDataBuf") )
        __debugbreak();
      v13 = LiveStorage_GetActiveStatsSource(v5);
      PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_COOP, v13);
      if ( !PlayerDataBufferForSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1630, ASSERT_TYPE_ASSERT, "(cpDataBuf)", (const char *)&queryFormat, "cpDataBuf") )
        __debugbreak();
      v14 = LiveStorage_GetActiveStatsSource(v5);
      v40 = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_COMMON, v14);
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1632, ASSERT_TYPE_ASSERT, "(commonDataBuf)", (const char *)&queryFormat, "commonDataBuf") )
        __debugbreak();
      v15 = LiveStorage_GetActiveStatsSource(v5);
      v41 = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_RANKEDLOADOUTS, v15);
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1634, ASSERT_TYPE_ASSERT, "(rankedLoadoutsBuf)", (const char *)&queryFormat, "rankedLoadoutsBuf") )
        __debugbreak();
      v16 = LiveStorage_GetActiveStatsSource(v5);
      v17 = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_PRIVATELOADOUTS, v16);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1636, ASSERT_TYPE_ASSERT, "(privateLoadoutsBuf)", (const char *)&queryFormat, "privateLoadoutsBuf") )
        __debugbreak();
      v18 = LiveStorage_GetActiveStatsSource(v5);
      v19 = LiveStorage_GetPlayerDataBufferForSource(v5, STATSGROUP_NONGAME, v18);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1638, ASSERT_TYPE_ASSERT, "(nonGameDataBuf)", (const char *)&queryFormat, "nonGameDataBuf") )
        __debugbreak();
      LiveStorage_ClearPlayerDataObfuscated(v5, statsSource);
      StatsGroupSize = Com_PlayerData_GetStatsGroupSize(STATSGROUP_RANKED);
      DDL_ResetContext(buff, StatsGroupSize - 4, ddlDef, &ddlContext, NULL, NULL);
      v21 = 220828 * v5 + 77072i64 * (int)statsSource;
      *(&controllerStatData[0].playerStats[0].blobFlags[1].isDirty + v21) = 1;
      *(&controllerStatData[0].playerStats[0].blobFlags[1].isStatsReset + v21) = 1;
      v22 = Com_PlayerData_GetStatsGroupSize(STATSGROUP_COMMON);
      DDL_ResetContext(v40, v22 - 4, v39, &v47, NULL, NULL);
      *(&controllerStatData[0].playerStats[0].blobFlags[0].isDirty + v21) = 1;
      *(&controllerStatData[0].playerStats[0].blobFlags[0].isStatsReset + v21) = 1;
      v23 = Com_PlayerData_GetStatsGroupSize(STATSGROUP_RANKEDLOADOUTS);
      DDL_ResetContext(v41, v23 - 4, v37, &v46, NULL, NULL);
      *(&controllerStatData[0].playerStats[0].blobFlags[3].isDirty + v21) = 1;
      *(&controllerStatData[0].playerStats[0].blobFlags[3].isStatsReset + v21) = 1;
      v24 = Com_PlayerData_GetStatsGroupSize(STATSGROUP_COOP);
      DDL_ResetContext(PlayerDataBufferForSource, v24 - 4, Asset, &v45, NULL, NULL);
      *(&controllerStatData[0].playerStats[0].blobFlags[2].isDirty + v21) = 1;
      *(&controllerStatData[0].playerStats[0].blobFlags[2].isStatsReset + v21) = 1;
      if ( !freshStart )
      {
        v25 = Com_PlayerData_GetStatsGroupSize(STATSGROUP_PRIVATELOADOUTS);
        DDL_ResetContext(v17, v25 - 4, v9, &v49, NULL, NULL);
        *(&controllerStatData[0].playerStats[0].blobFlags[4].isDirty + v21) = 1;
        *(&controllerStatData[0].playerStats[0].blobFlags[4].isStatsReset + v21) = 1;
      }
      v26 = Com_PlayerData_GetStatsGroupSize(STATSGROUP_NONGAME);
      DDL_ResetContext(v19, v26 - 4, v44, &v50, NULL, NULL);
      v6 = statsSource;
      *(&controllerStatData[0].playerStats[0].blobFlags[5].isDirty + v21) = 1;
      *(&controllerStatData[0].playerStats[0].blobFlags[5].isStatsReset + v21) = 1;
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Cmd_TokenizeString("exec mp/stats_init.cfg");
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = v5;
      v27 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v27, "exec mp/stats_init.cfg", &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, "exec mp/stats_init.cfg");
    }
    Cmd_EndTokenizedString();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Cmd_TokenizeString("exec mp/stats_init_coop.cfg");
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = v5;
      v28 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v28, "exec mp/stats_init_coop.cfg", &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, "exec mp/stats_init_coop.cfg");
    }
    Cmd_EndTokenizedString();
    if ( !freshStart )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      Cmd_TokenizeString("exec mp/stats_init_privatematch.cfg");
      if ( Cmd_Argc() )
      {
        cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
        cmd_args.controllerIndex[cmd_args.nesting] = v5;
        v29 = Cmd_Argv(0);
        if ( !Cmd_ExecuteCommandFunctions(v29, "exec mp/stats_init_privatematch.cfg", &s_cmd_functions) && !Dvar_Command(0) )
          CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, "exec mp/stats_init_privatematch.cfg");
      }
      Cmd_EndTokenizedString();
    }
    controllerStatData[v5].playerStats[v6].resetStatus = RESET_STATS_NO_RESET;
    if ( Live_IsSignedIn(v5) )
      GamerProfile_UpdateSystemVarsFromProfile(v5);
    CL_PlayerData_CloneLoadouts(v5, !freshStart);
    if ( Live_IsSignedIn(v5) )
      GamerProfile_UpdateProfileAndSaveIfNeeded(v5);
    ClientFromController = CL_Mgr_GetClientFromController(v5);
    if ( CL_GetLocalClientGameConnectionState(ClientFromController) == CA_DISCONNECTED )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      LOBYTE(v47.buff) = 0;
      *(_OWORD *)&v47.def = _XMM0;
      *(_OWORD *)&v45.def = _XMM0;
      *(_OWORD *)&v46.def = _XMM0;
      HIDWORD(v47.buff) = 0;
      v47.len = -1;
      LOBYTE(v45.buff) = 0;
      HIDWORD(v45.buff) = 0;
      v45.len = -1;
      LOBYTE(v46.buff) = 0;
      HIDWORD(v46.buff) = 0;
      v46.len = -1;
      v32 = LiveStorage_GetActiveStatsSource(v5);
      if ( CL_PlayerData_GetDDLBuffer(&ddlContext, v5, v32, STATSGROUP_RANKED) )
      {
        LiveStorage_InitializeDDLStateForStatsGroup(ddlContext.def, (DDLState *)&v47, STATSGROUP_RANKED);
        RawHash = j_SL_GetRawHash(scr_const.dailyChallengeId);
        DDL_MoveToNameByHash((const DDLState *)&v47, (DDLState *)&v45, RawHash, NULL);
        for ( i = 0; i < 3; ++i )
        {
          DDL_MoveToIndex((const DDLState *)&v45, (DDLState *)&v46, i);
          DDL_SetInt((const DDLState *)&v46, &ddlContext, -1);
        }
        v35 = j_SL_GetRawHash(scr_const.weeklyChallengeId);
        DDL_MoveToNameByHash((const DDLState *)&v47, (DDLState *)&v45, v35, NULL);
        do
        {
          DDL_MoveToIndex((const DDLState *)&v45, (DDLState *)&v46, v11);
          DDL_SetInt((const DDLState *)&v46, &ddlContext, -1);
          ++v11;
        }
        while ( v11 < 3 );
        controllerStorageData[v5].generateChallenges = 1;
      }
      else
      {
        Com_PrintError(14, "Cannot set data: we do not have player stats\n");
      }
    }
    LiveStorage_CheckPeriodicChallengeUpdate(v5);
    LiveStorage_ObufscateAllStatsGroups(v5, v6);
  }
}

/*
==============
LiveStorage_SyncTime
==============
*/
void LiveStorage_SyncTime(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  int v3; 
  overlappedTask *OpenTaskSlot; 

  if ( Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, controllerIndex) && !TaskManager_TaskIsInProgressForController(&storageTasks, 3, controllerIndex) )
    {
      v3 = Sys_Milliseconds();
      if ( s_UTCLastInterval + s_UTCLastAttempt <= v3 )
      {
        OpenTaskSlot = TaskManager_GetOpenTaskSlot(&storageTasks, controllerIndex, 3);
        dwGetServerTime(controllerIndex, OpenTaskSlot, &bdServerTime);
        if ( OpenTaskSlot->u.remoteTask.m_ptr )
        {
          if ( s_UTCLastInterval )
          {
            if ( s_UTCLastInterval < 20000 )
              s_UTCLastInterval *= 5;
            s_UTCLastAttempt = v3;
          }
          else
          {
            s_UTCLastAttempt = v3;
            s_UTCLastInterval = 500;
          }
        }
        else if ( OpenTaskSlot->active )
        {
          TaskManager_ClearTask(OpenTaskSlot);
        }
      }
    }
  }
}

/*
==============
LiveStorage_Task_FailureCallback
==============
*/
void LiveStorage_Task_FailureCallback(overlappedTask *task, int type)
{
  int v4; 
  void (__fastcall *v5)(_QWORD, _QWORD); 
  _QWORD *data; 
  void (__fastcall *v7)(_QWORD, _QWORD, _QWORD); 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 1441, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  v4 = type - 14;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)task->data + 13);
      if ( v5 )
        v5(task->controllerIndex, 0i64);
    }
  }
  else
  {
    data = task->data;
    v7 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))data[8];
    if ( v7 )
      v7(task->controllerIndex, *((unsigned __int16 *)data + 2), 0i64);
  }
}

/*
==============
LiveStorage_UnpackPlaylist
==============
*/
void LiveStorage_UnpackPlaylist(const int controllerIndex)
{
  __int64 v1; 
  const char *Name; 
  bdObjectStoreObject *ObjectAtIndex; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  signed __int64 v7; 
  int v8; 
  int v9; 
  bdObjectStoreObject *v10; 
  bdObjectStoreMetadata *v11; 
  unsigned __int64 ContentLength; 
  int v13; 
  bdObjectStoreObject *v14; 
  bdObjectStoreMetadata *v15; 
  bdObjectStoreObject *v16; 
  bdObjectStoreMetadata *v17; 

  v1 = controllerIndex;
  if ( s_unpackPlaylist && Com_FrontEnd_IsInFrontEnd() )
  {
    if ( bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(&s_getPublisherObjectsResponse_0) )
    {
      if ( bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(&s_getPublisherObjectsResponse_0) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3894, ASSERT_TYPE_ASSERT, "(s_getPublisherObjectsResponse.getObjectListSize() == 1)", (const char *)&queryFormat, "s_getPublisherObjectsResponse.getObjectListSize() == 1") )
        __debugbreak();
      Name = Playlist_GetName();
      ObjectAtIndex = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(&s_getPublisherObjectsResponse_0, 0);
      Metadata = bdObjectStoreObject::getMetadata(ObjectAtIndex);
      ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
      ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
      v7 = Name - ObjectName;
      do
      {
        v8 = (unsigned __int8)ObjectName[v7];
        v9 = *(unsigned __int8 *)ObjectName - v8;
        if ( v9 )
          break;
        ++ObjectName;
      }
      while ( v8 );
      if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3895, ASSERT_TYPE_ASSERT, "(strcmp( s_getPublisherObjectsResponse.getObjectAtIndex( 0 ).getMetadata().getObjectID().getObjectName(), Playlist_GetName() ) == 0)", (const char *)&queryFormat, "strcmp( s_getPublisherObjectsResponse.getObjectAtIndex( 0 ).getMetadata().getObjectID().getObjectName(), Playlist_GetName() ) == 0") )
        __debugbreak();
      v10 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(&s_getPublisherObjectsResponse_0, 0);
      v11 = bdObjectStoreObject::getMetadata(v10);
      ContentLength = bdObjectStoreMetadata::getContentLength(v11);
      if ( ContentLength > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)ContentLength, "unsigned", ContentLength) )
        __debugbreak();
      s_unpackPlaylist = 0;
      if ( playListUpdateCheckMinutes->current.integer <= 0 )
        v13 = -1;
      else
        v13 = 60000 * playListUpdateCheckMinutes->current.integer + Sys_Milliseconds();
      s_time_to_check = v13;
      if ( (_DWORD)ContentLength )
      {
        memset_0(s_playlistBuffer, 0, sizeof(s_playlistBuffer));
        DecompressIntoBuffer(s_playlistBuffer, 409600, s_playlistAggrBuffer, ContentLength);
        Com_Printf(16, "Playlist was %i bytes\n", (unsigned int)ContentLength);
        Playlist_ParsePlaylists((const char *)s_playlistBuffer);
        g_playlistsFetched = 1;
        s_playlistOutOfDate = 0;
        UI_ValidatePlaylistNum();
        UI_UpdatePulsePlaylistActive();
        g_NumFetchPlaylistAttempts = 0;
        v14 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(&s_getPublisherObjectsResponse_0, 0);
        v15 = bdObjectStoreObject::getMetadata(v14);
        s_playlistModifiedTime = bdObjectStoreMetadata::getModified(v15);
        v16 = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(&s_getPublisherObjectsResponse_0, 0);
        v17 = bdObjectStoreObject::getMetadata(v16);
        s_playlistCreatedTime = bdObjectStoreMetadata::getCreated(v17);
        s_fencePlaylistsErrorCode[v1] = NONE;
        s_fencePlaylistsStatusCode[v1] = READY;
      }
      else
      {
        s_fencePlaylistsErrorCode[v1] = LONG_DOUBLE|HALF;
      }
    }
    else
    {
      s_fencePlaylistsErrorCode[v1] = LONG_DOUBLE;
    }
  }
}

/*
==============
LiveStorage_UnregisterCommands
==============
*/
void LiveStorage_UnregisterCommands(void)
{
  Cmd_RemoveCommand("uploadStats");
  Cmd_RemoveCommand("readStats");
  Com_PlayerData_UnregisterCommands();
  CL_PlayerData_UnregisterCommands();
  Cmd_RemoveClientCommandList(S_COM_STORAGE_CMD, 1u);
}

/*
==============
LiveStorage_UpdatePersistentDataVersion
==============
*/
bool LiveStorage_UpdatePersistentDataVersion(const int controllerIndex, StatsGroup statsGroup, StatsSource statsSource)
{
  LocalClientNum_t ClientFromController; 
  __int64 LocalClientGameConnectionState; 
  unsigned __int8 *PlayerDataBufferForSource; 
  const DDLDef *DefForStatsGroup; 
  unsigned int StatsGroupSize; 
  bool v12; 
  LocalClientNum_t accessCBa; 
  void (__fastcall *accessCB)(const DDLContext *, unsigned int, unsigned int, DDLAccessOp); 
  DDLContext ddlContext; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
  {
    accessCBa = ClientFromController;
    LocalClientGameConnectionState = (unsigned int)CL_GetLocalClientGameConnectionState(ClientFromController);
    Com_PrintError(16, "Trying to set persistent player data while connected to a server (%s, connState = %i, localClientNum = %i).\n", "LiveStorage_CheckPersistentDataVersion", LocalClientGameConnectionState, accessCBa);
    if ( !com_unattendedMode->current.enabled )
    {
      LODWORD(accessCB) = LocalClientGameConnectionState;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003370, 393i64, "LiveStorage_CheckPersistentDataVersion", accessCB);
    }
  }
  PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(controllerIndex, statsGroup, statsSource);
  if ( !PlayerDataBufferForSource )
    return 0;
  DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(statsGroup);
  if ( !DefForStatsGroup )
    return 0;
  StatsGroupSize = Com_PlayerData_GetStatsGroupSize(statsGroup);
  v12 = DDL_CreateContext(PlayerDataBufferForSource, StatsGroupSize - 4, DefForStatsGroup, &ddlContext, NULL, NULL);
  if ( v12 )
    Com_PlayerData_GetStatsBlob(statsGroup);
  return v12;
}

/*
==============
LiveStorage_UpdatePlaylistFileInfo
==============
*/
void LiveStorage_UpdatePlaylistFileInfo(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  const char *Name; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) && g_playlistsFetched && !g_bFetchingPlaylistInfo )
  {
    Name = Playlist_GetName();
    if ( s_time_to_check != -1 && s_time_to_check - Sys_Milliseconds() < 0 )
    {
      LiveStorage_GetPublisherStorageFileInfo(controllerIndex, Name);
      if ( playListUpdateCheckMinutes->current.integer <= 0 )
        s_time_to_check = -1;
      else
        s_time_to_check = 60000 * playListUpdateCheckMinutes->current.integer + Sys_Milliseconds();
    }
  }
}

/*
==============
LiveStorage_UploadStatsCmd
==============
*/
void LiveStorage_UploadStatsCmd()
{
  int v0; 
  StatsSource ActiveStatsSource; 

  v0 = Cmd_LocalControllerIndex();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v0);
  LiveStorage_SaveStatsForSource(v0, ActiveStatsSource);
}

/*
==============
LiveStorage_ValidateStatsChecksumAndVersion
==============
*/
char LiveStorage_ValidateStatsChecksumAndVersion(const int controllerIndex, StatsSource statsSource)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  bool *v7; 
  __int64 v8; 
  int v10; 
  __int64 v11; 
  unsigned __int8 *StatsBufferForSource; 
  __int64 StatsGroupOffset; 
  const DDLDef *DefForStatsGroup; 
  LocalClientNum_t ClientFromController; 
  __int64 LocalClientGameConnectionState; 
  unsigned __int8 *PlayerDataBufferForSource; 
  const DDLDef *v18; 
  unsigned int StatsGroupSize; 
  StatsBlobId StatsBlob; 
  char *v21; 
  char *fmt; 
  char *fmta; 
  DDLContext ddlContext; 

  v4 = 220828i64 * controllerIndex;
  v5 = statsSource;
  v6 = 77072i64 * (int)statsSource + v4;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 445, ASSERT_TYPE_ASSERT, "(LiveStorage_AreStatsFetched( controllerIndex, statsSource ))", (const char *)&queryFormat, "LiveStorage_AreStatsFetched( controllerIndex, statsSource )") )
    __debugbreak();
  v7 = &controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v6;
  v8 = *(unsigned int *)v7;
  if ( (_DWORD)v8 )
  {
    Com_PrintError(16, "Skipping stats checksum and version validation because stats are already going to be reset due to reason %d\n", v8);
    return 0;
  }
  else
  {
    v10 = 0;
    v11 = v5;
    while ( 1 )
    {
      if ( (int)Com_PlayerData_GetStatsGroupDataSize((StatsGroup)v10) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 460, ASSERT_TYPE_ASSERT, "(statsSize > 0)", "%s\n\tUnable to access stats due to stats group data not being loaded.  Most likely, one of your DDL files failed to build correctly.", "statsSize > 0") )
        __debugbreak();
      StatsBufferForSource = LiveStorage_GetStatsBufferForSource(controllerIndex, statsSource);
      if ( !StatsBufferForSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 2698, ASSERT_TYPE_ASSERT, "(statsBuffer)", (const char *)&queryFormat, "statsBuffer") )
        __debugbreak();
      StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset((StatsGroup)v10);
      if ( *(&controllerStatData[0].playerStats[v11].blobFlags[Com_PlayerData_GetStatsBlob((StatsGroup)v10)].obfuscation.isObfuscated + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 466, ASSERT_TYPE_ASSERT, "(LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ) == false)", (const char *)&queryFormat, "LiveStorage_IsStatsGroupObfuscated( controllerIndex, statsGroup, statsSource ) == false") )
        __debugbreak();
      DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup((StatsGroup)v10);
      if ( !DDL_IsChecksumValid(&StatsBufferForSource[StatsGroupOffset + 4], DefForStatsGroup) )
        break;
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
      {
        LODWORD(fmt) = ClientFromController;
        LocalClientGameConnectionState = (unsigned int)CL_GetLocalClientGameConnectionState(ClientFromController);
        Com_PrintError(16, "Trying to set persistent player data while connected to a server (%s, connState = %i, localClientNum = %i).\n", "LiveStorage_CheckPersistentDataVersion", LocalClientGameConnectionState, fmt);
        if ( !com_unattendedMode->current.enabled )
        {
          LODWORD(fmta) = LocalClientGameConnectionState;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144003370, 393i64, "LiveStorage_CheckPersistentDataVersion", fmta);
        }
      }
      PlayerDataBufferForSource = LiveStorage_GetPlayerDataBufferForSource(controllerIndex, (StatsGroup)v10, statsSource);
      if ( !PlayerDataBufferForSource || (v18 = Com_PlayerData_GetDefForStatsGroup((StatsGroup)v10)) == NULL || (StatsGroupSize = Com_PlayerData_GetStatsGroupSize((StatsGroup)v10), !DDL_CreateContext(PlayerDataBufferForSource, StatsGroupSize - 4, v18, &ddlContext, NULL, NULL)) )
      {
        *(_DWORD *)v7 = 6;
        return 0;
      }
      StatsBlob = Com_PlayerData_GetStatsBlob((StatsGroup)v10++);
      v21 = (char *)&controllerStatData[0].playerStats[v11].blobFlags[StatsBlob].obfuscation + v4;
      ddlContext.obfuscated = *v21;
      ddlContext.randomInt = *((_DWORD *)v21 + 1);
      if ( v10 >= 6 )
        return 1;
    }
    Com_PrintError(16, "DDL: detected bad checksum; resetting stats\n");
    *(_DWORD *)v7 = 4;
    return 0;
  }
}

/*
==============
LiveStorage_WaitForWriteStatsBuffer
==============
*/
void LiveStorage_WaitForWriteStatsBuffer(const int controllerIndex)
{
  volatile bool *p_writeStatsBufferInUse; 
  OnlineStorage *Instance; 
  TaskManager *v4; 

  p_writeStatsBufferInUse = &controllerStatData[controllerIndex].writeStatsBufferInUse;
  if ( *p_writeStatsBufferInUse )
  {
    if ( !R_IsInRemoteScreenUpdate() )
      Com_PrintWarning(13, "No remote screen update for possibly lengthy blocking call\n");
    while ( *p_writeStatsBufferInUse )
    {
      Sys_Sleep(1);
      Instance = OnlineStorage::GetInstance();
      Instance->Frame(Instance);
      DW_Frame(controllerIndex);
      v4 = TaskManager::GetInstance();
      TaskManager::Update(v4);
      LiveStorage_CheckOngoingSessionTasks();
    }
  }
}

/*
==============
LiveStorage_WriteChecksumToBuffer
==============
*/
void LiveStorage_WriteChecksumToBuffer(unsigned __int8 *buffer, const int len)
{
  unsigned __int8 *v2; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = buffer + 4;
  v4 = -1;
  v5 = len - 4i64;
  if ( len != 4i64 )
  {
    do
    {
      v6 = *v2++;
      v4 = (v4 >> 8) ^ g_crc32Table[v6 ^ (unsigned __int8)v4];
      --v5;
    }
    while ( v5 );
  }
  *(_DWORD *)buffer = ~v4;
}

/*
==============
LiveStorate_GetExtinctionBonusDeadline
==============
*/
int LiveStorate_GetExtinctionBonusDeadline(const int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  __int64 v3; 
  unsigned int RawHash; 

  v1 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
    return 0;
  v3 = 77072i64 * (int)LiveStorage_GetActiveStatsSource(v1) + 220828 * v1;
  if ( !*(&controllerStatData[0].playerStats[0].statsFetched + v3) || *(_DWORD *)(&controllerStatData[0].playerStats[0].blobFlags[6].isDirty + v3) )
    return 0;
  RawHash = j_SL_GetRawHash(scr_const.bonus_pool_deadline);
  return CL_PlayerData_GetIntByName(v1, RawHash, STATSGROUP_COOP);
}

/*
==============
Live_CheckPlaylistVersionUpdate
==============
*/
void Live_CheckPlaylistVersionUpdate(void)
{
  const dvar_t *v0; 
  int ControllerFromClient; 
  DWServicesAccess *Instance; 
  const char *Name; 
  bool v4; 
  char v5; 

  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    v0 = DVARBOOL_test_playlist_update;
    if ( !DVARBOOL_test_playlist_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "test_playlist_update") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      Playlist_SetPlaylistAvailable(1);
      Dvar_SetBool_Internal(DVARBOOL_test_playlist_update, 0);
    }
    else if ( Playlist_IsNewPlaylistAvailable() )
    {
      v4 = Live_AreWeAcceptingInvite();
      v5 = s_playlistOutOfDate;
      if ( !v4 )
        v5 = 1;
      s_playlistOutOfDate = v5;
    }
    else
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, ControllerFromClient) && g_playlistsFetched && !g_bFetchingPlaylistInfo )
      {
        Name = Playlist_GetName();
        if ( s_time_to_check != -1 && s_time_to_check - Sys_Milliseconds() < 0 )
        {
          LiveStorage_GetPublisherStorageFileInfo(ControllerFromClient, Name);
          if ( playListUpdateCheckMinutes->current.integer <= 0 )
            s_time_to_check = -1;
          else
            s_time_to_check = 60000 * playListUpdateCheckMinutes->current.integer + Sys_Milliseconds();
        }
      }
    }
  }
}

/*
==============
LoadCompressedPlaylistFromBuffer
==============
*/
char LoadCompressedPlaylistFromBuffer(void *src, int src_len)
{
  size_t v2; 

  v2 = src_len;
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3501, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( (int)v2 > 40960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3502, ASSERT_TYPE_ASSERT, "( src_len ) <= ( ( 40 * 1024 ) )", "%s <= %s\n\t%i, %i", "src_len", "MAX_AGGREGATE_PLAYLIST_SIZE", v2, 40960) )
    __debugbreak();
  memcpy_0(s_playlistAggrBuffer, src, v2);
  memset_0(s_playlistBuffer, 0, sizeof(s_playlistBuffer));
  DecompressIntoBuffer(s_playlistBuffer, 409600, s_playlistAggrBuffer, v2);
  Playlist_ParsePlaylists((const char *)s_playlistBuffer);
  return 1;
}

/*
==============
OnPlaylistDownloadComplete
==============
*/
void OnPlaylistDownloadComplete(OnlineStorageTask *storageTask)
{
  bdObjectStoreErrorWrappedObject *ObjectList; 
  __int64 controllerIndex; 
  __int64 v4; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3555, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3556, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(&s_getPublisherObjectsResponse_0);
    if ( bdObjectStoreErrorWrappedObject::hasError(ObjectList) )
    {
      s_fencePlaylistsErrorCode[storageTask->controllerIndex] = PTRDIFF;
      Com_Printf(25, "Playlists download succeeded, but file had errors.\n");
    }
    else
    {
      Com_Printf(25, "Playlists download successful.\n");
      controllerIndex = storageTask->controllerIndex;
      s_unpackPlaylist = 1;
      s_fencePlaylistsErrorCode[controllerIndex] = NONE;
    }
  }
  else
  {
    s_fencePlaylistsErrorCode[storageTask->controllerIndex] = SIZE_T;
    Com_Printf(25, "Playlists download failed.\n");
  }
  v4 = storageTask->controllerIndex;
  s_gettingPlaylists = 0;
  s_fencePlaylistsStatusCode[v4] = CROSSPLAY_LOG_IN;
  if ( !storageTask->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3442, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageResponse") )
    __debugbreak();
  storageTask->getPublisherStorageResponse = NULL;
}

/*
==============
OnPlaylistDownloadMetadatasComplete
==============
*/
void OnPlaylistDownloadMetadatasComplete(OnlineStorageTask *storageTask)
{
  const char *Name; 
  bdObjectStoreObject *ObjectAtIndex; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  signed __int64 v7; 
  int v8; 
  int v9; 
  bdObjectStoreErrorWrappedMetadata *MetadataList; 
  bdObjectStoreMetadata *v11; 
  bool v12; 
  bdObjectStoreErrorWrappedMetadata *v13; 
  bdObjectStoreMetadata *v14; 
  bool v15; 
  bool v16; 
  bool v17; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3587, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3588, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    Com_Printf(25, "Playlists info download successful.\n");
    Name = Playlist_GetName();
    ObjectAtIndex = bdObjectStoreGetPublisherObjectsResponse::getObjectAtIndex(&s_getPublisherObjectsResponse_0, 0);
    Metadata = bdObjectStoreObject::getMetadata(ObjectAtIndex);
    ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
    ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
    v7 = Name - ObjectName;
    do
    {
      v8 = (unsigned __int8)ObjectName[v7];
      v9 = *(unsigned __int8 *)ObjectName - v8;
      if ( v9 )
        break;
      ++ObjectName;
    }
    while ( v8 );
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3598, ASSERT_TYPE_ASSERT, "(strcmp( s_getPublisherObjectsResponse.getObjectAtIndex( 0 ).getMetadata().getObjectID().getObjectName(), Playlist_GetName() ) == 0)", (const char *)&queryFormat, "strcmp( s_getPublisherObjectsResponse.getObjectAtIndex( 0 ).getMetadata().getObjectID().getObjectName(), Playlist_GetName() ) == 0") )
      __debugbreak();
    g_bHavePlaylistInfo = 1;
    MetadataList = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse_0);
    v11 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(MetadataList);
    v12 = s_playlistModifiedTime != bdObjectStoreMetadata::getModified(v11);
    v13 = bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(&s_getPublisherObjectMetadatasResponse_0);
    v14 = (bdObjectStoreMetadata *)bdObjectStoreErrorWrappedMetadata::getMetadata(v13);
    v15 = s_playlistCreatedTime != bdObjectStoreMetadata::getCreated(v14);
    v16 = v12 || v15;
    Playlist_SetPlaylistAvailable(v16);
    if ( playListUpdateCheckMinutes->current.integer <= 0 )
      s_time_to_check = -1;
    else
      s_time_to_check = 60000 * playListUpdateCheckMinutes->current.integer + Sys_Milliseconds();
  }
  else
  {
    Com_Printf(25, "Playlists info download failed.\n");
  }
  v17 = storageTask->getPublisherStorageMetadatasResponse == NULL;
  g_bFetchingPlaylistInfo = 0;
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage.cpp", 3450, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageMetadatasResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageMetadatasResponse") )
    __debugbreak();
  storageTask->getPublisherStorageMetadatasResponse = NULL;
}

/*
==============
Playlist_GetPlaylistBuffer
==============
*/
unsigned __int8 *Playlist_GetPlaylistBuffer()
{
  return s_playlistBuffer;
}

/*
==============
Playlist_IsOutOfDate
==============
*/
_BOOL8 Playlist_IsOutOfDate()
{
  _BOOL8 result; 

  result = s_playlistOutOfDate;
  if ( s_pausedFetchingPlaylists )
    return 0i64;
  return result;
}

/*
==============
Playlist_MarkAsOutOfDate
==============
*/
void Playlist_MarkAsOutOfDate(void)
{
  s_playlistOutOfDate = 1;
}

/*
==============
ResetFencePlaylistsErrorCode
==============
*/
void ResetFencePlaylistsErrorCode(const int controllerIndex)
{
  s_fencePlaylistsErrorCode[controllerIndex] = NONE;
}

/*
==============
SetDDLFromString
==============
*/
char SetDDLFromString(DDLContext *buffer, const char *str)
{
  int v7; 
  char *v8; 
  char *v9; 
  char v10; 
  char v11; 
  DDLState fromState; 
  DDLState result; 
  char *path[16]; 
  char val[64]; 
  char v16; 

  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.arrayIndex = -1;
  *(_OWORD *)&fromState.member = _XMM0;
  if ( j_sscanf(str, "%s = %s", &v16, val) < 2 )
  {
    Com_PrintWarning(28, "SetDDLFromString: in %s bad string '%s'.\n", buffer->def->name, str);
    return 0;
  }
  v7 = 0;
  v8 = &v16;
  v9 = NULL;
  v10 = 0;
  while ( 1 )
  {
    v11 = *v8;
    if ( !v9 )
    {
      if ( v11 != 91 )
        v9 = v8;
      goto LABEL_15;
    }
    if ( v11 != 93 )
      break;
    *v8 = 0;
LABEL_16:
    if ( !++v8 )
      goto LABEL_19;
  }
  if ( v11 != 46 && v11 != 32 )
  {
    if ( !v11 )
    {
      v10 = 1;
      goto LABEL_11;
    }
LABEL_15:
    if ( v10 )
      goto LABEL_19;
    goto LABEL_16;
  }
LABEL_11:
  *v8 = 0;
  if ( v7 != 16 )
  {
    path[v7] = v9;
    v9 = NULL;
    ++v7;
    goto LABEL_15;
  }
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144005078, 402i64);
LABEL_19:
  fromState = *DDL_GetRootState(&result, buffer->def);
  if ( DDL_MoveToPath(&fromState, &fromState, v7, (const char **)path) )
    DDL_SetValueStr(&fromState, buffer, val);
  else
    Com_PrintWarning(28, "SetDDLFromString: could not move to path.\n");
  return 1;
}

/*
==============
SetFencePlaylistsErrorCode
==============
*/
void SetFencePlaylistsErrorCode(const int controllerIndex, const FencePlaylistsErrorCode errorCode)
{
  s_fencePlaylistsErrorCode[controllerIndex] = errorCode;
}

/*
==============
SetFencePlaylistsStatusCode
==============
*/
void SetFencePlaylistsStatusCode(const int controllerIndex, const FencePlaylistsStatusCode statusCode)
{
  s_fencePlaylistsStatusCode[controllerIndex] = statusCode;
}

