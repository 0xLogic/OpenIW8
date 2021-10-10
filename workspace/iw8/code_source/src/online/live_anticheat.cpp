/*
==============
LiveAntiCheat_UpdateForController
==============
*/

void __fastcall LiveAntiCheat_UpdateForController(int controllerIndex)
{
  ?LiveAntiCheat_UpdateForController@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_Init
==============
*/

void LiveAntiCheat_Init(void)
{
  ?LiveAntiCheat_Init@@YAXXZ();
}

/*
==============
LiveAntiCheat_InfractionCheck
==============
*/

void __fastcall LiveAntiCheat_InfractionCheck(const int controllerIndex, unsigned __int8 *origStats, unsigned __int8 *newStats)
{
  ?LiveAntiCheat_InfractionCheck@@YAXHPEAE0@Z(controllerIndex, origStats, newStats);
}

/*
==============
LiveAntiCheat_StartFrame
==============
*/

void LiveAntiCheat_StartFrame(void)
{
  ?LiveAntiCheat_StartFrame@@YAXXZ();
}

/*
==============
LiveAntiCheat_ReportCACImportInfraction
==============
*/

void __fastcall LiveAntiCheat_ReportCACImportInfraction(const int controllerIndex)
{
  ?LiveAntiCheat_ReportCACImportInfraction@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_UserSignedOut
==============
*/

void __fastcall LiveAntiCheat_UserSignedOut(const int controllerindex_in)
{
  ?LiveAntiCheat_UserSignedOut@@YAXH@Z(controllerindex_in);
}

/*
==============
LiveAntiCheatQuickBuf_Init
==============
*/

void __fastcall LiveAntiCheatQuickBuf_Init(LiveAntiCheatQuickBuf *liveanticheatquickbuf_in, void *bufferptr_in, int buffersize_in)
{
  ?LiveAntiCheatQuickBuf_Init@@YAXPEAULiveAntiCheatQuickBuf@@PEAXH@Z(liveanticheatquickbuf_in, bufferptr_in, buffersize_in);
}

/*
==============
LiveAntiCheat_UserSignedInToLive
==============
*/

void __fastcall LiveAntiCheat_UserSignedInToLive(const int controllerindex_in)
{
  ?LiveAntiCheat_UserSignedInToLive@@YAXH@Z(controllerindex_in);
}

/*
==============
LiveAntiCheat_Update
==============
*/

void LiveAntiCheat_Update(void)
{
  ?LiveAntiCheat_Update@@YAXXZ();
}

/*
==============
LiveAntiCheat_OnChallengesReceived
==============
*/

void __fastcall LiveAntiCheat_OnChallengesReceived(const int controllerindex_in, bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in)
{
  ?LiveAntiCheat_OnChallengesReceived@@YAXHV?$bdReference@VbdAntiCheatChallenges@@@@@Z(controllerindex_in, bdanticheatchallengesref_in);
}

/*
==============
LiveAntiCheat_FeatureBanCheck
==============
*/

void __fastcall LiveAntiCheat_FeatureBanCheck(int feature)
{
  ?LiveAntiCheat_FeatureBanCheck@@YAXH@Z(feature);
}

/*
==============
LiveAntiCheat_MaxRateGovernor_Init
==============
*/

void __fastcall LiveAntiCheat_MaxRateGovernor_Init(LiveAntiCheatMaxRateGovernorData *dataIn, unsigned int maxFramesPerSecIn)
{
  ?LiveAntiCheat_MaxRateGovernor_Init@@YAXPEAULiveAntiCheatMaxRateGovernorData@@I@Z(dataIn, maxFramesPerSecIn);
}

/*
==============
LiveAntiCheatMemoryInfo_Init
==============
*/

bool __fastcall LiveAntiCheatMemoryInfo_Init(LiveAntiCheatMemoryInfo *liveanticheatmemoryinfo_in, unsigned __int64 scan_key_in, unsigned int scan_start_in, unsigned int scan_size_in)
{
  return ?LiveAntiCheatMemoryInfo_Init@@YA_NPEAULiveAntiCheatMemoryInfo@@_KII@Z(liveanticheatmemoryinfo_in, scan_key_in, scan_start_in, scan_size_in);
}

/*
==============
LiveAntiCheat_ReportUserAndHost
==============
*/

void __fastcall LiveAntiCheat_ReportUserAndHost(const int controllerIndex, const ReportOffense userOffense, const ReportOffense hostOffense)
{
  ?LiveAntiCheat_ReportUserAndHost@@YAXHW4ReportOffense@@0@Z(controllerIndex, userOffense, hostOffense);
}

/*
==============
LiveAntiCheat_FeatureBanClearInfo
==============
*/

void __fastcall LiveAntiCheat_FeatureBanClearInfo(const int controllerIndex)
{
  ?LiveAntiCheat_FeatureBanClearInfo@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_FeatureIsBanned
==============
*/

bool __fastcall LiveAntiCheat_FeatureIsBanned(int feature)
{
  return ?LiveAntiCheat_FeatureIsBanned@@YA_NH@Z(feature);
}

/*
==============
LiveAntiCheat_Shutdown
==============
*/

void LiveAntiCheat_Shutdown(void)
{
  ?LiveAntiCheat_Shutdown@@YAXXZ();
}

/*
==============
LiveAntiCheat_ReportMatchDataInfractions
==============
*/

void __fastcall LiveAntiCheat_ReportMatchDataInfractions(const int controllerIndex, const DDLContext *buffer)
{
  ?LiveAntiCheat_ReportMatchDataInfractions@@YAXHPEBUDDLContext@@@Z(controllerIndex, buffer);
}

/*
==============
LiveAntiCheat_DWPlayerBanned
==============
*/

void __fastcall LiveAntiCheat_DWPlayerBanned(const int controllerIndex, unsigned __int64 userID, unsigned int reputationLevel)
{
  ?LiveAntiCheat_DWPlayerBanned@@YAXH_KI@Z(controllerIndex, userID, reputationLevel);
}

/*
==============
LiveAntiCheat_Pump
==============
*/

void __fastcall LiveAntiCheat_Pump(const int controllerindex_in)
{
  ?LiveAntiCheat_Pump@@YAXH@Z(controllerindex_in);
}

/*
==============
LiveAntiCheat_CoDAccountBan
==============
*/

void __fastcall LiveAntiCheat_CoDAccountBan(const int controllerIndex)
{
  ?LiveAntiCheat_CoDAccountBan@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_ReportPlayer
==============
*/

void __fastcall LiveAntiCheat_ReportPlayer(const int controllerIndex, const ReportOffense userOffense, const unsigned __int64 player)
{
  ?LiveAntiCheat_ReportPlayer@@YAXHW4ReportOffense@@_K@Z(controllerIndex, userOffense, player);
}

/*
==============
LiveAntiCheatQuickBuf_WriteData
==============
*/

int __fastcall LiveAntiCheatQuickBuf_WriteData(LiveAntiCheatQuickBuf *liveanticheatquickbuf_in, const void *dataptr_in, int datasize_in, bool fixEndianness_in)
{
  return ?LiveAntiCheatQuickBuf_WriteData@@YAHPEAULiveAntiCheatQuickBuf@@PEBXH_N@Z(liveanticheatquickbuf_in, dataptr_in, datasize_in, fixEndianness_in);
}

/*
==============
LiveAntiCheat_MaxRateGovernor_IsOkToRun
==============
*/

int __fastcall LiveAntiCheat_MaxRateGovernor_IsOkToRun(LiveAntiCheatMaxRateGovernorData *dataIn)
{
  return ?LiveAntiCheat_MaxRateGovernor_IsOkToRun@@YAHPEAULiveAntiCheatMaxRateGovernorData@@@Z(dataIn);
}

/*
==============
LiveAntiCheat_FeatureIsBanned
==============
*/

bool __fastcall LiveAntiCheat_FeatureIsBanned(const int controllerIndex, int feature)
{
  return ?LiveAntiCheat_FeatureIsBanned@@YA_NHH@Z(controllerIndex, feature);
}

/*
==============
LiveAntiCheat_ReportServerForWriteProtectionInfraction
==============
*/

void __fastcall LiveAntiCheat_ReportServerForWriteProtectionInfraction(const int controllerIndex)
{
  ?LiveAntiCheat_ReportServerForWriteProtectionInfraction@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_InfractionCheck_Squads
==============
*/

void __fastcall LiveAntiCheat_InfractionCheck_Squads(const int controllerIndex)
{
  ?LiveAntiCheat_InfractionCheck_Squads@@YAXH@Z(controllerIndex);
}

/*
==============
LiveAntiCheat_FeatureBanCheck
==============
*/

void __fastcall LiveAntiCheat_FeatureBanCheck(const int controllerIndex, int feature)
{
  ?LiveAntiCheat_FeatureBanCheck@@YAXHH@Z(controllerIndex, feature);
}

/*
==============
LiveAntiCheat_FeatureGetBanEndTimeLocal
==============
*/

int __fastcall LiveAntiCheat_FeatureGetBanEndTimeLocal(const int controllerIndex, int feature)
{
  return ?LiveAntiCheat_FeatureGetBanEndTimeLocal@@YAHHH@Z(controllerIndex, feature);
}

/*
==============
LiveAntiCheat_FeatureBanEvent
==============
*/

void __fastcall LiveAntiCheat_FeatureBanEvent(const int controllerIndex, const bdFeatureBanInfo *ban)
{
  ?LiveAntiCheat_FeatureBanEvent@@YAXHAEBVbdFeatureBanInfo@@@Z(controllerIndex, ban);
}

/*
==============
LiveAntiCheatMemoryInfo_Init
==============
*/
char LiveAntiCheatMemoryInfo_Init(LiveAntiCheatMemoryInfo *liveanticheatmemoryinfo_in, unsigned __int64 scan_key_in, unsigned int scan_start_in, unsigned int scan_size_in)
{
  __int64 v4; 
  __int64 v6; 
  unsigned __int64 memory_text_start; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  v4 = scan_size_in;
  v6 = scan_start_in;
  if ( !liveanticheatmemoryinfo_in )
    return 0;
  if ( !Sys_GetTextSection(&liveanticheatmemoryinfo_in->memory_text_start, &liveanticheatmemoryinfo_in->memory_text_size) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 425, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to find the text session for this executable.  This shouldn't be possible.\n") )
      __debugbreak();
    return 0;
  }
  memory_text_start = liveanticheatmemoryinfo_in->memory_text_start;
  v10 = memory_text_start + v6 + v4;
  v11 = memory_text_start + liveanticheatmemoryinfo_in->memory_text_size;
  liveanticheatmemoryinfo_in->scan_key = scan_key_in;
  liveanticheatmemoryinfo_in->scan_size = v4;
  v12 = v6 + memory_text_start;
  liveanticheatmemoryinfo_in->scan_end = v10;
  liveanticheatmemoryinfo_in->scan_start = v6 + memory_text_start;
  liveanticheatmemoryinfo_in->memory_text_end = v11;
  if ( v6 + memory_text_start >= memory_text_start )
  {
    memory_text_start += v6;
    if ( v12 > v11 )
    {
      liveanticheatmemoryinfo_in->scan_start = v11;
      memory_text_start = v11;
    }
  }
  else
  {
    liveanticheatmemoryinfo_in->scan_start = memory_text_start;
  }
  if ( v10 < memory_text_start || v10 > v11 )
  {
    v10 = v11;
    liveanticheatmemoryinfo_in->scan_end = v11;
  }
  v13 = v10 - memory_text_start;
  if ( v13 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v13, "unsigned", v13) )
    __debugbreak();
  liveanticheatmemoryinfo_in->scan_size = v13;
  return 1;
}

/*
==============
LiveAntiCheatQuickBuf_Init
==============
*/
void LiveAntiCheatQuickBuf_Init(LiveAntiCheatQuickBuf *liveanticheatquickbuf_in, void *bufferptr_in, int buffersize_in)
{
  if ( !liveanticheatquickbuf_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 352, ASSERT_TYPE_ASSERT, "(liveanticheatquickbuf_in)", (const char *)&queryFormat, "liveanticheatquickbuf_in") )
    __debugbreak();
  liveanticheatquickbuf_in->bufferptr = (unsigned __int8 *)bufferptr_in;
  liveanticheatquickbuf_in->currentptr = (unsigned __int8 *)bufferptr_in;
  liveanticheatquickbuf_in->buffersize = buffersize_in;
  liveanticheatquickbuf_in->numbytesleft = buffersize_in;
  liveanticheatquickbuf_in->numbytestraversed = 0;
}

/*
==============
LiveAntiCheatQuickBuf_WriteData
==============
*/
__int64 LiveAntiCheatQuickBuf_WriteData(LiveAntiCheatQuickBuf *liveanticheatquickbuf_in, const void *dataptr_in, int datasize_in, bool fixEndianness_in)
{
  size_t v4; 
  unsigned __int8 *currentptr; 

  v4 = datasize_in;
  if ( !liveanticheatquickbuf_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 367, ASSERT_TYPE_ASSERT, "(liveanticheatquickbuf_in)", (const char *)&queryFormat, "liveanticheatquickbuf_in") )
    __debugbreak();
  currentptr = liveanticheatquickbuf_in->currentptr;
  if ( currentptr )
  {
    if ( liveanticheatquickbuf_in->numbytesleft < (int)v4 )
      return 0i64;
    memcpy_0(currentptr, dataptr_in, v4);
    liveanticheatquickbuf_in->currentptr += v4;
    liveanticheatquickbuf_in->numbytesleft -= v4;
  }
  liveanticheatquickbuf_in->numbytestraversed += v4;
  return 1i64;
}

/*
==============
LiveAntiCheat_BanCheck_f
==============
*/
void LiveAntiCheat_BanCheck_f()
{
  int v0; 
  unsigned int v1; 
  const char *v2; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = v0;
    if ( (unsigned int)(v0 - 1) > 0x17 )
    {
      v2 = Cmd_Argv(1);
      Com_PrintError(25, "The feature ban check does not exist: %d/%s.\n", v1, v2);
    }
    else
    {
      LiveAntiCheat_FeatureBanCheck(v0);
    }
  }
  else
  {
    Com_PrintError(25, "Not the correct amount of params, usage: banCheck <feature id>.\n");
  }
}

/*
==============
LiveAntiCheat_BanDisconnect
==============
*/
void LiveAntiCheat_BanDisconnect()
{
  int i; 

  Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
  Dvar_SetBool_Internal(DVARBOOL_ui_onlineRequired, 0);
  Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
  Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
  Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
  Live_CancelConnecting();
  for ( i = 0; i < 8; ++i )
    LiveStorage_DiscardStats(i, STATS_ONLINE);
}

/*
==============
LiveAntiCheat_CoDAccountBan
==============
*/
void LiveAntiCheat_CoDAccountBan(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 

  LiveAntiCheat_BanDisconnect();
  if ( Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
  }
}

/*
==============
LiveAntiCheat_DWPlayerBanned
==============
*/
void LiveAntiCheat_DWPlayerBanned(const int controllerIndex, unsigned __int64 userID, unsigned int reputationLevel)
{
  BanType v5; 
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 

  LiveAntiCheat_BanDisconnect();
  if ( controllerIndex == 8 )
  {
    v5 = BanType_MaintenanceRepBan;
  }
  else if ( reputationLevel == 1000 )
  {
    v5 = BanType_MaintenanceRepBan;
  }
  else
  {
    v5 = BanType_PermanentRepBan;
    if ( reputationLevel < 0x64 )
      v5 = BanType_TemporaryRepBan;
  }
  dwSetPlayerBannedType(controllerIndex, v5);
  if ( Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Instance = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
  }
}

/*
==============
LiveAntiCheat_FeatureBanCheck
==============
*/
void LiveAntiCheat_FeatureBanCheck(int feature)
{
  int v1; 
  __int64 v2; 
  bdFeatureBanInfo_vtbl *v3; 
  bdFeatureBanInfo_vtbl **v4; 
  int v5; 
  const char *v6; 
  __int64 v7; 
  char v8; 
  bdFeatureBanInfo_vtbl **v9; 
  int v10; 
  const char *v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  int i; 
  int j; 
  char nameBufferIn[80]; 
  char dest[512]; 

  v1 = 0;
  v2 = 0i64;
  v3 = (bdFeatureBanInfo_vtbl *)feature;
  v4 = &s_featureBanInfo[0][0].__vftable + 2;
  do
  {
    if ( !LiveAntiCheat_FeatureIsBanned(v1, (int)v3) )
      goto LABEL_37;
    if ( !Live_GetOnlineUserName(v1, nameBufferIn, 68) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to get user gamertag for ban message display") )
        __debugbreak();
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_ANTICHEAT_t)32, NULL);
      LiveAntiCheat_BanDisconnect();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441CE5D8);
      goto LABEL_37;
    }
    v5 = 0;
    v6 = (char *)&queryFormat.fmt + 3;
    v7 = 0i64;
    v8 = 1;
    v9 = v4;
    while ( *v9 != v3 )
    {
      ++v7;
      v9 += 6;
      if ( v7 >= 25 )
        goto LABEL_12;
    }
    v5 = *((_DWORD *)&s_featureBanInfo[v2][v7].__vftable + 6);
    if ( v5 == -1 )
      goto LABEL_19;
LABEL_12:
    v8 = 0;
    v10 = (v5 - (unsigned int)_time64(NULL)) / 0x3C;
    if ( v10 / 60 <= 48 )
    {
      if ( v10 >= 60 )
      {
        v12 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_HOURS");
        v13 = v10 / 60;
        goto LABEL_18;
      }
      v11 = "EXE/COD_TEMP_BAN_MINUTES";
    }
    else
    {
      v11 = "EXE/COD_TEMP_BAN_DAYS";
      v10 = v10 / 60 / 24;
    }
    v12 = UI_SafeTranslateString(v11);
    v13 = v10;
LABEL_18:
    v6 = UI_ReplaceConversionInt(v12, v13);
LABEL_19:
    switch ( (int)v3 )
    {
      case 1:
      case 7:
        v14 = "EXE/COD_ONLINE_TEMP_BAN_PLAYER";
        v15 = "EXE/COD_ONLINE_PERM_BAN_PLAYER";
        goto LABEL_22;
      case 2:
      case 4:
      case 5:
      case 8:
      case 10:
      case 11:
      case 12:
      case 16:
      case 17:
      case 19:
        v14 = "EXE/COD_FEATURE_TEMP_BAN_PLAYER";
        v15 = "EXE/COD_FEATURE_PERM_BAN_PLAYER";
LABEL_22:
        if ( v8 == 1 )
          v14 = v15;
        v16 = UI_SafeTranslateString(v14);
        v17 = UI_ReplaceConversionString(v16, nameBufferIn);
        if ( v17 && *v17 )
        {
          Com_sprintf<512>((char (*)[512])dest, "%s\n\n%s", v17, v6);
          Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
          Dvar_SetBool_Internal(DVARBOOL_ui_onlineRequired, 0);
          Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
          Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
          Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
          Live_CancelConnecting();
          for ( i = 0; i < 8; ++i )
            LiveStorage_DiscardStats(i, STATS_ONLINE);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, dest);
        }
        break;
      default:
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_ANTICHEAT_t)64, NULL);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1425, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "User ban is not supported") )
          __debugbreak();
        Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
        Dvar_SetBool_Internal(DVARBOOL_ui_onlineRequired, 0);
        Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
        Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
        Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
        Live_CancelConnecting();
        for ( j = 0; j < 8; ++j )
          LiveStorage_DiscardStats(j, STATS_ONLINE);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441CE5D8);
        break;
    }
LABEL_37:
    ++v1;
    v4 += 150;
    ++v2;
  }
  while ( v1 < 8 );
}

/*
==============
LiveAntiCheat_FeatureBanCheck
==============
*/
void LiveAntiCheat_FeatureBanCheck(const int controllerIndex, int feature)
{
  bdFeatureBanInfo_vtbl *v2; 
  __int64 v3; 
  const char *v4; 
  int v5; 
  char v6; 
  bdFeatureBanInfo_vtbl **v7; 
  int v8; 
  __int64 v9; 
  signed int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  char nameBufferIn[80]; 
  char dest[512]; 

  v2 = (bdFeatureBanInfo_vtbl *)feature;
  v3 = controllerIndex;
  if ( LiveAntiCheat_FeatureIsBanned(controllerIndex, feature) )
  {
    if ( Live_GetOnlineUserName(v3, nameBufferIn, 68) )
    {
      v4 = (char *)&queryFormat.fmt + 3;
      v5 = 0;
      v6 = 1;
      v7 = &s_featureBanInfo[v3][0].__vftable + 2;
      v8 = 0;
      v9 = 0i64;
      while ( *v7 != v2 )
      {
        ++v8;
        ++v9;
        v7 += 6;
        if ( v9 >= 25 )
          goto LABEL_11;
      }
      v5 = *((_DWORD *)&s_featureBanInfo[v3][v8].__vftable + 6);
      if ( v5 == -1 )
        goto LABEL_17;
LABEL_11:
      v6 = 0;
      v10 = (v5 - (unsigned int)_time64(NULL)) / 0x3C;
      if ( v10 / 60 <= 48 )
      {
        if ( v10 < 60 )
        {
          v11 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_MINUTES");
          v12 = v10;
        }
        else
        {
          v11 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_HOURS");
          v12 = v10 / 60;
        }
      }
      else
      {
        v11 = UI_SafeTranslateString("EXE/COD_TEMP_BAN_DAYS");
        v12 = v10 / 60 / 24;
      }
      v4 = UI_ReplaceConversionInt(v11, v12);
LABEL_17:
      switch ( (int)v2 )
      {
        case 1:
        case 7:
          v13 = "EXE/COD_ONLINE_PERM_BAN_PLAYER";
          v14 = "EXE/COD_ONLINE_TEMP_BAN_PLAYER";
          goto LABEL_20;
        case 2:
        case 4:
        case 5:
        case 8:
        case 10:
        case 11:
        case 12:
        case 16:
        case 17:
        case 19:
          v13 = "EXE/COD_FEATURE_PERM_BAN_PLAYER";
          v14 = "EXE/COD_FEATURE_TEMP_BAN_PLAYER";
LABEL_20:
          if ( v6 == 1 )
            v14 = v13;
          v15 = UI_SafeTranslateString(v14);
          v16 = UI_ReplaceConversionString(v15, nameBufferIn);
          if ( v16 && *v16 )
          {
            Com_sprintf<512>((char (*)[512])dest, "%s\n\n%s", v16, v4);
            LiveAntiCheat_BanDisconnect();
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, dest);
          }
          break;
        default:
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_ANTICHEAT_t)64, NULL);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1425, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "User ban is not supported") )
            __debugbreak();
          LiveAntiCheat_BanDisconnect();
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441CE5D8);
          break;
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to get user gamertag for ban message display") )
        __debugbreak();
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_ANTICHEAT_t)32, NULL);
      LiveAntiCheat_BanDisconnect();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441CE5D8);
    }
  }
}

/*
==============
LiveAntiCheat_FeatureBanClearInfo
==============
*/
void LiveAntiCheat_FeatureBanClearInfo(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  v1 = 25i64 * controllerIndex;
  v2 = v1;
  *((_QWORD *)&s_featureBanInfo[0][v2].__vftable + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][v2].__vftable + 6) = 0;
  v3 = 2 * (3 * v1 + 3);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v3 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v3 + 6) = 0;
  v4 = 2 * (3 * v1 + 6);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v4 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v4 + 6) = 0;
  v5 = 2 * (3 * v1 + 9);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v5 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v5 + 6) = 0;
  v6 = 2 * (3 * v1 + 12);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v6 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v6 + 6) = 0;
  v7 = 2 * (3 * v1 + 15);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v7 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v7 + 6) = 0;
  v8 = 2 * (3 * v1 + 18);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v8 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v8 + 6) = 0;
  v9 = 2 * (3 * v1 + 21);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v9 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v9 + 6) = 0;
  v10 = 2 * (3 * v1 + 24);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v10 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v10 + 6) = 0;
  v11 = 2 * (3 * v1 + 27);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v11 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v11 + 6) = 0;
  v12 = 2 * (3 * v1 + 30);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v12 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v12 + 6) = 0;
  v13 = 2 * (3 * v1 + 33);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v13 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v13 + 6) = 0;
  v14 = 2 * (3 * v1 + 36);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v14 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v14 + 6) = 0;
  v15 = 2 * (3 * v1 + 39);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v15 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v15 + 6) = 0;
  v16 = 2 * (3 * v1 + 42);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v16 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v16 + 6) = 0;
  v17 = 2 * (3 * v1 + 45);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v17 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v17 + 6) = 0;
  v18 = 2 * (3 * v1 + 48);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v18 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v18 + 6) = 0;
  v19 = 2 * (3 * v1 + 51);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v19 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v19 + 6) = 0;
  v20 = 2 * (3 * v1 + 54);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v20 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v20 + 6) = 0;
  v21 = 2 * (3 * v1 + 57);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v21 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v21 + 6) = 0;
  v22 = 2 * (3 * v1 + 60);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v22 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v22 + 6) = 0;
  v23 = 2 * (3 * v1 + 63);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v23 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v23 + 6) = 0;
  v24 = 2 * (3 * v1 + 66);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v24 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v24 + 6) = 0;
  v25 = 2 * (3 * v1 + 69);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v25 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v25 + 6) = 0;
  v26 = 2 * (3 * v1 + 72);
  *((_QWORD *)&s_featureBanInfo[0][0].__vftable + v26 + 2) = 0i64;
  *((_DWORD *)&s_featureBanInfo[0][0].__vftable + 2 * v26 + 6) = 0;
}

/*
==============
LiveAntiCheat_FeatureBanEvent
==============
*/
void LiveAntiCheat_FeatureBanEvent(const int controllerIndex, const bdFeatureBanInfo *ban)
{
  __int64 v2; 
  bdFeatureBanInfo *v4; 
  int v5; 
  _QWORD *v6; 
  int v7; 
  __int64 v8; 
  _QWORD *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 

  v2 = *((_QWORD *)&ban->__vftable + 2);
  v4 = s_featureBanInfo[controllerIndex];
  if ( v2 == 21 )
  {
    Dvar_SetBool_Internal(DVARBOOL_lui_showDebugLayer, *((_DWORD *)&ban->__vftable + 6) != 0);
    v2 = *((_QWORD *)&ban->__vftable + 2);
  }
  v5 = 0;
  v6 = &v4->__vftable + 2;
  v7 = 0;
  v8 = 0i64;
  v9 = &v4->__vftable + 2;
  do
  {
    if ( *v9 == v2 )
    {
      v15 = *((_DWORD *)&ban->__vftable + 6);
      v16 = -1;
      if ( v15 < 0x5A39A80 )
        v16 = v15 + _time64(NULL);
      *((_DWORD *)&v4[v7].__vftable + 6) = v16;
      return;
    }
    ++v7;
    ++v8;
    v9 += 6;
  }
  while ( v8 < 25 );
  v10 = 0i64;
  while ( *v6 )
  {
    ++v5;
    ++v10;
    v6 += 6;
    if ( v10 >= 25 )
      return;
  }
  v11 = v5;
  v12 = -1;
  v13 = v11;
  *((_QWORD *)&v4[v11].__vftable + 2) = v2;
  v14 = *((_DWORD *)&ban->__vftable + 6);
  if ( v14 < 0x5A39A80 )
    v12 = v14 + _time64(NULL);
  *((_DWORD *)&v4[v13].__vftable + 6) = v12;
}

/*
==============
LiveAntiCheat_FeatureGetBanEndTimeLocal
==============
*/
__int64 LiveAntiCheat_FeatureGetBanEndTimeLocal(const int controllerIndex, int feature)
{
  bdFeatureBanInfo_vtbl *v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  bdFeatureBanInfo_vtbl **i; 

  v2 = (bdFeatureBanInfo_vtbl *)feature;
  v3 = controllerIndex;
  if ( !LiveAntiCheat_FeatureIsBanned(controllerIndex, feature) )
    return 0i64;
  v4 = 0;
  v5 = 0i64;
  for ( i = &s_featureBanInfo[v3][0].__vftable + 2; *i != v2; i += 6 )
  {
    ++v4;
    if ( ++v5 >= 25 )
      return 0i64;
  }
  return *((unsigned int *)&s_featureBanInfo[v3][v4].__vftable + 6);
}

/*
==============
LiveAntiCheat_FeatureIsBanned
==============
*/
char LiveAntiCheat_FeatureIsBanned(int feature)
{
  int v1; 
  bdFeatureBanInfo_vtbl *v2; 
  __int64 v3; 
  bool v4; 
  bdFeatureBanInfo_vtbl **v5; 
  __int64 v6; 
  bdFeatureBanInfo_vtbl **v7; 
  int v8; 
  __int64 v10; 
  __int64 v11; 

  v1 = 0;
  v2 = (bdFeatureBanInfo_vtbl *)feature;
  v3 = 0i64;
  v4 = 1;
  v5 = &s_featureBanInfo[0][0].__vftable + 2;
  while ( 2 )
  {
    if ( !v4 )
    {
      LODWORD(v11) = 8;
      LODWORD(v10) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1304, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v6 = 0i64;
    v7 = v5;
    while ( *v7 != v2 )
    {
      ++v6;
      v7 += 6;
      if ( v6 >= 25 )
        goto LABEL_10;
    }
    v8 = *((_DWORD *)&s_featureBanInfo[v3][v6].__vftable + 6);
    if ( (int)(v8 - _time64(NULL)) >= 0 )
      return 1;
LABEL_10:
    ++v1;
    v5 += 150;
    ++v3;
    v4 = (unsigned int)v1 < 8;
    if ( v1 < 8 )
      continue;
    return 0;
  }
}

/*
==============
LiveAntiCheat_FeatureIsBanned
==============
*/
bool LiveAntiCheat_FeatureIsBanned(const int controllerIndex, int feature)
{
  __int64 v2; 
  bdFeatureBanInfo_vtbl *v3; 
  int v4; 
  __int64 v5; 
  bdFeatureBanInfo_vtbl **i; 
  int v8; 
  int v10; 

  v2 = controllerIndex;
  v3 = (bdFeatureBanInfo_vtbl *)feature;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1304, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  v4 = 0;
  v5 = 0i64;
  for ( i = &s_featureBanInfo[v2][0].__vftable + 2; *i != v3; i += 6 )
  {
    ++v4;
    if ( ++v5 >= 25 )
      return 0;
  }
  v8 = *((_DWORD *)&s_featureBanInfo[v2][v4].__vftable + 6);
  return (int)(v8 - _time64(NULL)) >= 0;
}

/*
==============
LiveAntiCheat_InfractionCheck
==============
*/
void LiveAntiCheat_InfractionCheck(const int controllerIndex, unsigned __int8 *origStats, unsigned __int8 *newStats)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_playerInfractionsNum = 0;
  *(_OWORD *)s_playerInfractions = _XMM0;
  *(_QWORD *)&s_playerInfractions[4] = 0i64;
}

/*
==============
LiveAntiCheat_InfractionCheck_Squads
==============
*/
void LiveAntiCheat_InfractionCheck_Squads(const int controllerIndex)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_playerInfractionsNum = 0;
  *(_OWORD *)s_playerInfractions = _XMM0;
  *(_QWORD *)&s_playerInfractions[4] = 0i64;
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) == STATS_ONLINE )
    LiveStorage_GetPlayerDataBuffer(controllerIndex, STATSGROUP_RANKED);
}

/*
==============
LiveAntiCheat_Init
==============
*/
void LiveAntiCheat_Init(void)
{
  int v0; 
  ChallengeResponseHSM_default *v1; 
  int i; 

  v0 = 0;
  v1 = g_challengeResponseHSMs;
  for ( i = 0; i < 8; ++i )
    ChallengeResponseHSM_default::Init(v1++, i);
  do
    LiveAntiCheat_FeatureBanClearInfo(v0++);
  while ( v0 < 8 );
  Cmd_AddCommandInternal("banCheck", LiveAntiCheat_BanCheck_f, &LiveAntiCheat_BanCheck_f_VAR);
  Cmd_AddCommandInternal("printConsoleInfo", LiveAntiCheat_PrintConsoleInfo_f, &LiveAntiCheat_PrintConsoleInfo_f_VAR);
  Cmd_AddCommandInternal("reportPlayer", LiveAntiCheat_ReportPlayer_f, &LiveAntiCheat_ReportPlayer_f_VAR);
}

/*
==============
LiveAntiCheat_MaxRateGovernor_Init
==============
*/
void LiveAntiCheat_MaxRateGovernor_Init(LiveAntiCheatMaxRateGovernorData *dataIn, unsigned int maxFramesPerSecIn)
{
  if ( !dataIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2600, ASSERT_TYPE_ASSERT, "(dataIn)", (const char *)&queryFormat, "dataIn") )
    __debugbreak();
  if ( !maxFramesPerSecIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2601, ASSERT_TYPE_ASSERT, "(maxFramesPerSecIn > 0)", (const char *)&queryFormat, "maxFramesPerSecIn > 0") )
    __debugbreak();
  dataIn->maxFramesPerSec = maxFramesPerSecIn;
  dataIn->timeStamp = Sys_Milliseconds();
  dataIn->counter = 0;
}

/*
==============
LiveAntiCheat_MaxRateGovernor_IsOkToRun
==============
*/
bool LiveAntiCheat_MaxRateGovernor_IsOkToRun(LiveAntiCheatMaxRateGovernorData *dataIn)
{
  int v2; 
  unsigned int v3; 
  bool v4; 
  bool v5; 

  if ( !dataIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2612, ASSERT_TYPE_ASSERT, "(dataIn)", (const char *)&queryFormat, "dataIn") )
    __debugbreak();
  v2 = Sys_Milliseconds();
  if ( v2 - dataIn->timeStamp <= 1000 )
  {
    v3 = dataIn->counter + 1;
  }
  else
  {
    dataIn->timeStamp = v2;
    v3 = 1;
  }
  v4 = v3 < dataIn->maxFramesPerSec;
  v5 = v3 == dataIn->maxFramesPerSec;
  dataIn->counter = v3;
  return v4 || v5;
}

/*
==============
LiveAntiCheat_OnChallengesReceived
==============
*/
void LiveAntiCheat_OnChallengesReceived(const int controllerindex_in, bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in)
{
  __int64 v3; 
  signed int NumChallenges; 
  signed int i; 
  const bdAntiCheatChallenge *ChallengeByIndex; 

  v3 = controllerindex_in;
  if ( (unsigned int)controllerindex_in <= 7 )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1859, ASSERT_TYPE_ASSERT, "((controllerindex_in >= 0) && (controllerindex_in < 8))", (const char *)&queryFormat, "(controllerindex_in >= 0) && (controllerindex_in < MAX_GPAD_COUNT)", -2i64) )
    __debugbreak();
  if ( (unsigned int)v3 <= 7 )
  {
LABEL_5:
    NumChallenges = bdAntiCheatChallenges::getNumChallenges((bdAntiCheatChallenges *)bdanticheatchallengesref_in.m_ptr->__vftable);
    for ( i = 0; i < NumChallenges; ++i )
    {
      ChallengeByIndex = bdAntiCheatChallenges::getChallengeByIndex((bdAntiCheatChallenges *)bdanticheatchallengesref_in.m_ptr->__vftable, i);
      ChallengeResponseHSM_default::AddNewChallenge(&g_challengeResponseHSMs[v3], v3, ChallengeByIndex);
    }
  }
  if ( bdanticheatchallengesref_in.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&bdanticheatchallengesref_in.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( bdanticheatchallengesref_in.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))bdanticheatchallengesref_in.m_ptr->~bdReferencable)(bdanticheatchallengesref_in.m_ptr->__vftable, 1i64);
    bdanticheatchallengesref_in.m_ptr->__vftable = NULL;
  }
}

/*
==============
LiveAntiCheat_PrintConsoleInfo_f
==============
*/
void LiveAntiCheat_PrintConsoleInfo_f()
{
  const char *v0; 
  const char *v1; 
  unsigned __int64 v2[3]; 
  int v3; 
  int v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  v6 = 0i64;
  v5 = 0i64;
  v4 = 0;
  v3 = 0;
  v2[0] = 0i64;
  if ( Live_GetConsoleDetails(1, (unsigned __int8 *)&v4, (unsigned __int8 *)&v3, &v6, &v5, v2) )
  {
    v0 = j_va("%zu %zu", v6, v5);
    Com_Printf(0, "CONSOLE ID: [%s]\n", v0);
    v1 = j_va("%zu", v2[0]);
    Com_Printf(0, "MAC ADDRESS: [%s]\n", v1);
  }
  else
  {
    Com_PrintError(0, "printConsoleInfo failed.\n");
  }
}

/*
==============
LiveAntiCheat_Pump
==============
*/
void LiveAntiCheat_Pump(const int controllerindex_in)
{
  __int64 v1; 

  v1 = controllerindex_in;
  if ( (unsigned int)controllerindex_in <= 7 )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1758, ASSERT_TYPE_ASSERT, "(( controllerindex_in >= 0 ) && ( controllerindex_in < 8 ))", (const char *)&queryFormat, "( controllerindex_in >= 0 ) && ( controllerindex_in < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (unsigned int)v1 <= 7 )
  {
LABEL_5:
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "LiveAntiCheat_Pump");
    Profile2_UpdateEntry(5);
    if ( ((unsigned __int8)&dword_14FDE7FE4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FE4) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE7FE4);
    ChallengeResponseHSM_default::Update(&g_challengeResponseHSMs[v1], -1);
    Profile2_UpdateEntry(5);
    if ( ((unsigned __int64)&dword_14FDE7FE4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FE4) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE7FE4);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
LiveAntiCheat_ReportCACImportInfraction
==============
*/
void LiveAntiCheat_ReportCACImportInfraction(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  XUID *Xuid; 
  __int64 v4; 
  int v6; 
  XUID result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2488, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  if ( Sys_IsMainThread() )
  {
    if ( (_DWORD)v1 != -1 )
    {
      v2 = v1;
      s_playerInfractionsUserStats[v1].m_leaderBoardEntries[0].m_rating = s_playerInfractionsNum;
      Xuid = Live_GetXuid(&result, v1);
      *(_QWORD *)&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0]._bytes_20[8] = XUID::GetUniversalId(Xuid);
      *(_QWORD *)(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 1) = 0i64;
      *(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 3) = 0;
      v4 = v1;
      *(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 4) = 1;
      *(_QWORD *)s_playerInfractionsUserStats[v4].m_leaderBoardEntries[0].m_columns = 0i64;
      *(_QWORD *)&s_playerInfractionsUserStats[v4].m_leaderBoardEntries[0].m_columns[8] = 0i64;
      LB_WriteRowForUser(v1, 0x1389u, 6, s_playerInfractionsUserStats, 1, STAT_WRITE_ADD);
    }
    Com_Printf(0, "CAC Import Infraction\n");
  }
  else
  {
    g_threadReportControllerCACImportInfraction = v1;
    Com_Printf(0, "Queueing CAC Import infraction report for main thread from another thread.\n");
  }
}

/*
==============
LiveAntiCheat_ReportMatchDataInfractions
==============
*/
void LiveAntiCheat_ReportMatchDataInfractions(const int controllerIndex, const DDLContext *buffer)
{
  ;
}

/*
==============
LiveAntiCheat_ReportPlayer
==============
*/
void LiveAntiCheat_ReportPlayer(const int controllerIndex, const ReportOffense userOffense, const unsigned __int64 player)
{
  __int64 v3; 
  const dvar_t *v6; 
  int integer; 
  int v8; 
  trackerColumn_e v9; 
  char *m_activeGameMapName; 
  unsigned __int64 v11; 
  unsigned __int64 MatchId; 
  __int64 v13; 
  const char *Gametype; 
  bool v15; 
  unsigned __int64 UserId; 
  bool v17; 
  unsigned int UTC; 
  XUID result; 
  DLogContext _Buffer; 
  char buffer[4096]; 

  v3 = userOffense;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2079, ASSERT_TYPE_ASSERT, "(player != 0)", (const char *)&queryFormat, "player != 0") )
    __debugbreak();
  if ( Sys_Milliseconds() >= s_timeTillNextVote )
  {
    v6 = DCONST_DVARINT_reportUserVoteInterval;
    if ( !DCONST_DVARINT_reportUserVoteInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reportUserVoteInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    v8 = Sys_Milliseconds();
    v9 = ReportTrackerColumn[v3];
    s_timeTillNextVote = 60000 * integer + v8;
    LiveTracker_WriteByID(v9, player, 1);
    if ( (_DWORD)v3 == 6 )
    {
      Live_GetXuid(&result, controllerIndex);
      m_activeGameMapName = cls.m_activeGameMapName;
      if ( !cls.m_activeGameMapName[0] )
        m_activeGameMapName = "-";
      v11 = XUID::ToUint64(&result);
      MatchId = OnlineMatchId::GetMatchId();
      UTC = LiveStorage_GetUTC();
      j_snprintf((char *const)&_Buffer, 0x100ui64, "{\n\t\"%s\" :\n\t{\n\t\t\"%s\": %llu,\n\t\t\"%s\": %llu,\n\t\t\"%s\": \"%s\",\n\t\t\"%s\": %lu,\n\t\t\"%s\": \"%llu\"\n\t}\n}\n", "h9bc", "dxf8", v11, "j4vj", player, "bi42", m_activeGameMapName, "kw8v", UTC, "u9k6", MatchId);
      v13 = -1i64;
      do
        ++v13;
      while ( *((_BYTE *)&_Buffer.position + v13) );
      dwRecordEventFF((unsigned __int8 *)&_Buffer, v13, DW_EVENT_CTGS_09);
    }
    Gametype = Party_GetGametype();
    v15 = Com_FrontEnd_IsInFrontEnd();
    UserId = DLog_GetUserId(controllerIndex);
    if ( DLog_IsActive() && DLog_CreateContext(&_Buffer, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v17 = DLog_BeginEvent(&_Buffer, "dlog_event_player_reporting");
      _Buffer.autoEndEvent = 1;
      if ( v17 && DLog_Bool(&_Buffer, "frontend", v15) && DLog_String(&_Buffer, "game_type", Gametype, 0) && DLog_UInt64(&_Buffer, "reported_player", player) && DLog_Int32(&_Buffer, "reason", v3) )
        DLog_RecordContext(&_Buffer);
    }
  }
}

/*
==============
LiveAntiCheat_ReportPlayer_f
==============
*/
void LiveAntiCheat_ReportPlayer_f()
{
  unsigned __int64 v0; 
  ReportOffense v1; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_ArgInt64(1);
    v1 = Cmd_ArgInt(2);
    if ( (unsigned int)v1 > REPORT_OFFENSIVE_CLANTAG )
      Com_PrintError(25, "The report player offence: %d does not exist for player: %lu.\n", (unsigned int)v1, v0);
    else
      LiveAntiCheat_ReportPlayer(0, v1, v0);
  }
  else
  {
    Com_PrintError(25, "Not the correct amount of params, usage: reportPlayer <userID> <offence>.\n");
  }
}

/*
==============
LiveAntiCheat_ReportServerForWriteProtectionInfraction
==============
*/
void LiveAntiCheat_ReportServerForWriteProtectionInfraction(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  bdStats::bdWriteType writeType; 
  int v4; 
  XUID outHostXuid; 

  v1 = controllerIndex;
  XUID::XUID(&outHostXuid);
  if ( (unsigned int)v1 >= 8 )
  {
    v4 = 8;
    writeType = (int)v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2525, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", writeType, v4) )
      __debugbreak();
  }
  if ( Sys_IsMainThread() )
  {
    if ( !hasReportedThisSession && Lobby_GetHostXuid(&outHostXuid) )
    {
      if ( (_DWORD)v1 != -1 )
      {
        v2 = v1;
        s_playerInfractionsUserStats[v1].m_leaderBoardEntries[0].m_rating = s_playerInfractionsNum;
        *(_QWORD *)&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0]._bytes_20[8] = XUID::GetUniversalId(&outHostXuid);
        *(_QWORD *)(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 1) = 0i64;
        *(_QWORD *)(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 3) = 0i64;
        *(_QWORD *)s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_columns = 0i64;
        *(_QWORD *)&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_columns[8] = 1i64;
        LB_WriteRowForUser(v1, 0x1389u, 6, s_playerInfractionsUserStats, 1, STAT_WRITE_ADD);
      }
      Com_Printf(0, "Server Write Protection Infraction\n");
      hasReportedThisSession = 1;
    }
  }
  else
  {
    g_threadReportControllerServerWriteProtectionInfraction = v1;
    Com_Printf(0, "Queueing Server Write Protection infraction report for main thread from another thread.\n");
  }
}

/*
==============
LiveAntiCheat_ReportUserAndHost
==============
*/
void LiveAntiCheat_ReportUserAndHost(const int controllerIndex, const ReportOffense userOffense, const ReportOffense hostOffense)
{
  LiveTracker_WriteForUserAndHost(controllerIndex, ReportTrackerColumn[userOffense], ReportTrackerColumn[hostOffense], 1);
}

/*
==============
LiveAntiCheat_Shutdown
==============
*/
void LiveAntiCheat_Shutdown(void)
{
  ChallengeResponseHSM_default *v0; 
  __int64 v1; 

  v0 = g_challengeResponseHSMs;
  v1 = 8i64;
  do
  {
    ChallengeResponseHSM_default::ResetAllChallenges(v0++);
    --v1;
  }
  while ( v1 );
}

/*
==============
LiveAntiCheat_StartFrame
==============
*/
void LiveAntiCheat_StartFrame(void)
{
  MemoryHashInfo::StartFrame();
  ChallengeResponseHSM_default::StartUpdateFrame();
}

/*
==============
LiveAntiCheat_Update
==============
*/
void LiveAntiCheat_Update(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  char ActiveGameMode; 
  int v3; 

  if ( LiveStorage_IsTimeSynced() )
  {
    v0 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      v1 = DVARBOOL_online_anticheat_should_com_error_if_mp_or_cp_banned;
      if ( !DVARBOOL_online_anticheat_should_com_error_if_mp_or_cp_banned && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_anticheat_should_com_error_if_mp_or_cp_banned") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      if ( v1->current.enabled )
      {
        ActiveGameMode = Com_GameMode_GetActiveGameMode();
        v3 = 7;
        if ( ActiveGameMode != 3 )
          v3 = 1;
        LiveAntiCheat_FeatureBanCheck(v3);
      }
    }
  }
}

/*
==============
LiveAntiCheat_UpdateForController
==============
*/
void LiveAntiCheat_UpdateForController(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  XUID *Xuid; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 writeType; 
  __int64 v8; 
  XUID result; 

  v1 = g_threadReportControllerCACImportInfraction;
  if ( g_threadReportControllerCACImportInfraction != -1 )
  {
    if ( (unsigned int)g_threadReportControllerCACImportInfraction >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2488, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", g_threadReportControllerCACImportInfraction, 8) )
      __debugbreak();
    if ( Sys_IsMainThread() )
    {
      if ( (_DWORD)v1 != -1 )
      {
        v2 = v1;
        s_playerInfractionsUserStats[v1].m_leaderBoardEntries[0].m_rating = s_playerInfractionsNum;
        Xuid = Live_GetXuid(&result, v1);
        *(_QWORD *)&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0]._bytes_20[8] = XUID::GetUniversalId(Xuid);
        v4 = v1;
        *(_QWORD *)(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 1) = 0i64;
        *(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 3) = 0;
        *(&s_playerInfractionsUserStats[v2].m_leaderBoardEntries[0].m_secondsSinceUpdate + 4) = 1;
        *(_QWORD *)s_playerInfractionsUserStats[v4].m_leaderBoardEntries[0].m_columns = 0i64;
        *(_QWORD *)&s_playerInfractionsUserStats[v4].m_leaderBoardEntries[0].m_columns[8] = 0i64;
        LB_WriteRowForUser(v1, 0x1389u, 6, s_playerInfractionsUserStats, 1, STAT_WRITE_ADD);
      }
      Com_Printf(0, "CAC Import Infraction\n");
    }
    else
    {
      g_threadReportControllerCACImportInfraction = v1;
      Com_Printf(0, "Queueing CAC Import infraction report for main thread from another thread.\n");
    }
    g_threadReportControllerCACImportInfraction = -1;
  }
  v5 = g_threadReportControllerServerWriteProtectionInfraction;
  if ( g_threadReportControllerServerWriteProtectionInfraction != -1 )
  {
    XUID::XUID(&result);
    if ( (unsigned int)v5 >= 8 )
    {
      LODWORD(v8) = 8;
      LODWORD(writeType) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 2525, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", writeType, v8) )
        __debugbreak();
    }
    if ( Sys_IsMainThread() )
    {
      if ( !hasReportedThisSession && Lobby_GetHostXuid(&result) )
      {
        if ( (_DWORD)v5 != -1 )
        {
          v6 = v5;
          s_playerInfractionsUserStats[v5].m_leaderBoardEntries[0].m_rating = s_playerInfractionsNum;
          *(_QWORD *)&s_playerInfractionsUserStats[v6].m_leaderBoardEntries[0]._bytes_20[8] = XUID::GetUniversalId(&result);
          *(_QWORD *)(&s_playerInfractionsUserStats[v6].m_leaderBoardEntries[0].m_secondsSinceUpdate + 1) = 0i64;
          *(_QWORD *)(&s_playerInfractionsUserStats[v6].m_leaderBoardEntries[0].m_secondsSinceUpdate + 3) = 0i64;
          *(_QWORD *)s_playerInfractionsUserStats[v6].m_leaderBoardEntries[0].m_columns = 0i64;
          *(_QWORD *)&s_playerInfractionsUserStats[v6].m_leaderBoardEntries[0].m_columns[8] = 1i64;
          LB_WriteRowForUser(v5, 0x1389u, 6, s_playerInfractionsUserStats, 1, STAT_WRITE_ADD);
        }
        Com_Printf(0, "Server Write Protection Infraction\n");
        hasReportedThisSession = 1;
      }
    }
    else
    {
      g_threadReportControllerServerWriteProtectionInfraction = v5;
      Com_Printf(0, "Queueing Server Write Protection infraction report for main thread from another thread.\n");
    }
    g_threadReportControllerServerWriteProtectionInfraction = -1;
  }
}

/*
==============
LiveAntiCheat_UserSignedInToLive
==============
*/
void LiveAntiCheat_UserSignedInToLive(const int controllerindex_in)
{
  __int64 v1; 
  int v3; 

  v1 = controllerindex_in;
  if ( (unsigned int)controllerindex_in >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1894, ASSERT_TYPE_ASSERT, "(unsigned)( controllerindex_in ) < (unsigned)( 8 )", "controllerindex_in doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerindex_in, v3) )
      __debugbreak();
  }
  ChallengeResponseHSM_default::Init(&g_challengeResponseHSMs[v1], v1);
}

/*
==============
LiveAntiCheat_UserSignedOut
==============
*/
void LiveAntiCheat_UserSignedOut(const int controllerindex_in)
{
  __int64 v1; 
  int v3; 

  v1 = controllerindex_in;
  if ( (unsigned int)controllerindex_in >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_anticheat.cpp", 1911, ASSERT_TYPE_ASSERT, "(unsigned)( controllerindex_in ) < (unsigned)( 8 )", "controllerindex_in doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerindex_in, v3) )
      __debugbreak();
  }
  ChallengeResponseHSM_default::Init(&g_challengeResponseHSMs[v1], v1);
}

