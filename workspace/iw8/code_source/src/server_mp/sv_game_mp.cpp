/*
==============
SvPersistentGlobalsMP::HandleDevelopmentKeyEvent
==============
*/

bool __fastcall SvPersistentGlobalsMP::HandleDevelopmentKeyEvent(SvPersistentGlobalsMP *this, int key, bool isDown)
{
  return ?HandleDevelopmentKeyEvent@SvPersistentGlobalsMP@@UEAA_NH_N@Z(this, key, isDown);
}

/*
==============
SV_GameMP_GetExtrapolatedData
==============
*/

void __fastcall SV_GameMP_GetExtrapolatedData(const int clientNum, const int commandTime, ClientExtrapData *outExtrapData)
{
  ?SV_GameMP_GetExtrapolatedData@@YAXHHAEAUClientExtrapData@@@Z(clientNum, commandTime, outExtrapData);
}

/*
==============
SV_GameMP_GetHostName
==============
*/

const char *__fastcall SV_GameMP_GetHostName()
{
  return ?SV_GameMP_GetHostName@@YAPEBDXZ();
}

/*
==============
SV_GameMP_IsHardcoreMode
==============
*/

bool __fastcall SV_GameMP_IsHardcoreMode()
{
  return ?SV_GameMP_IsHardcoreMode@@YA_NXZ();
}

/*
==============
SV_GameMP_SetMapCenter
==============
*/

void __fastcall SV_GameMP_SetMapCenter(const vec3_t *mapCenter)
{
  ?SV_GameMP_SetMapCenter@@YAXAEBTvec3_t@@@Z(mapCenter);
}

/*
==============
SV_GameMP_DropClient
==============
*/

void __fastcall SV_GameMP_DropClient(int clientNum, const char *reason)
{
  ?SV_GameMP_DropClient@@YAXHPEBD@Z(clientNum, reason);
}

/*
==============
SvPersistentGlobalsMP::CheckFontScaleRange
==============
*/

bool __fastcall SvPersistentGlobalsMP::CheckFontScaleRange(SvPersistentGlobalsMP *this, const float fontScale)
{
  return ?CheckFontScaleRange@SvPersistentGlobalsMP@@UEAA_NM@Z(this, fontScale);
}

/*
==============
SvGameModeAppMP::ShutdownGameProgs
==============
*/

void __fastcall SvGameModeAppMP::ShutdownGameProgs(SvGameModeAppMP *this)
{
  ?ShutdownGameProgs@SvGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
SV_GameMP_InitGameProgs
==============
*/

void __fastcall SV_GameMP_InitGameProgs(const SvServerInitSettings *initSettings)
{
  ?SV_GameMP_InitGameProgs@@YAXPEBUSvServerInitSettings@@@Z(initSettings);
}

/*
==============
SV_GameMP_GetEffectivePlayerstateForClientNum
==============
*/

playerState_s *__fastcall SV_GameMP_GetEffectivePlayerstateForClientNum(int num)
{
  return ?SV_GameMP_GetEffectivePlayerstateForClientNum@@YAPEAUplayerState_s@@H@Z(num);
}

/*
==============
SvGameModeAppMP::NotifyClientsSRE
==============
*/

void __fastcall SvGameModeAppMP::NotifyClientsSRE(SvGameModeAppMP *this, const char *message)
{
  ?NotifyClientsSRE@SvGameModeAppMP@@UEBAXPEBD@Z(this, message);
}

/*
==============
SV_GameMP_ShutdownGameProgs
==============
*/

void SV_GameMP_ShutdownGameProgs(void)
{
  ?SV_GameMP_ShutdownGameProgs@@YAXXZ();
}

/*
==============
SV_GameMP_GetMapCenter
==============
*/

const vec3_t *__fastcall SV_GameMP_GetMapCenter()
{
  return ?SV_GameMP_GetMapCenter@@YAAEBTvec3_t@@XZ();
}

/*
==============
SvGameModeAppMP::LogScriptError
==============
*/

void __fastcall SvGameModeAppMP::LogScriptError(SvGameModeAppMP *this)
{
  ?LogScriptError@SvGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
SV_GameMP_GetGameType
==============
*/

const char *__fastcall SV_GameMP_GetGameType()
{
  return ?SV_GameMP_GetGameType@@YAPEBDXZ();
}

/*
==============
SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds
==============
*/

bool __fastcall SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds(SvPersistentGlobalsMP *this, const vec3_t *origin)
{
  return ?CheckOriginIsInPlayableBounds@SvPersistentGlobalsMP@@UEAA_NAEBTvec3_t@@@Z(this, origin);
}

/*
==============
SV_GameMP_GetGuid
==============
*/

const char *__fastcall SV_GameMP_GetGuid(int entNum)
{
  return ?SV_GameMP_GetGuid@@YAPEBDH@Z(entNum);
}

/*
==============
SV_GameMP_SetGameEndTime
==============
*/

void __fastcall SV_GameMP_SetGameEndTime(int gameEndTime)
{
  ?SV_GameMP_SetGameEndTime@@YAXH@Z(gameEndTime);
}

/*
==============
SV_GameMP_GetAgentCount
==============
*/

unsigned int __fastcall SV_GameMP_GetAgentCount()
{
  return ?SV_GameMP_GetAgentCount@@YAIXZ();
}

/*
==============
SvPersistentGlobalsMP::KeepPointInPlayableBounds
==============
*/

void __fastcall SvPersistentGlobalsMP::KeepPointInPlayableBounds(SvPersistentGlobalsMP *this, vec3_t *pos)
{
  ?KeepPointInPlayableBounds@SvPersistentGlobalsMP@@UEAAXAEATvec3_t@@@Z(this, pos);
}

/*
==============
SV_GameMP_UpdatePresenceGametype
==============
*/

void __fastcall SV_GameMP_UpdatePresenceGametype(const SvServerInitSettings *initSettings)
{
  ?SV_GameMP_UpdatePresenceGametype@@YAXPEBUSvServerInitSettings@@@Z(initSettings);
}

/*
==============
SV_GameMP_UpdateCommandDuration
==============
*/

void SV_GameMP_UpdateCommandDuration(void)
{
  ?SV_GameMP_UpdateCommandDuration@@YAXXZ();
}

/*
==============
SV_GameMP_RestartGameProgs
==============
*/

void __fastcall SV_GameMP_RestartGameProgs(const SvServerInitSettings *initSettings)
{
  ?SV_GameMP_RestartGameProgs@@YAXPEBUSvServerInitSettings@@@Z(initSettings);
}

/*
==============
SvPersistentGlobalsMP::CheckFontScaleRange
==============
*/
bool SvPersistentGlobalsMP::CheckFontScaleRange(SvPersistentGlobalsMP *this, const float fontScale)
{
  return fontScale >= 0.0 && fontScale <= 6.4000001;
}

/*
==============
SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds
==============
*/
__int64 SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds(SvPersistentGlobalsMP *this, const vec3_t *origin)
{
  unsigned int v2; 
  signed __int64 v3; 
  const vec3_t *v4; 
  unsigned __int8 v6; 
  bool v7; 
  float v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  __int64 v18; 
  __int64 v19; 

  v2 = 0;
  v3 = (char *)&this->mapCenterBoundsMax - (char *)origin;
  v4 = origin;
  v6 = 1;
  v7 = 1;
  _XMM12 = 0i64;
  do
  {
    if ( !v7 )
    {
      LODWORD(v19) = 3;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm12, xmm2, 1 }
    if ( v2 >= 3 )
    {
      LODWORD(v19) = 3;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v10 = (float)(int)*(float *)&_XMM0;
    if ( v10 < *(float *)((char *)v4[-1].v + v3) )
      goto LABEL_13;
    if ( v2 >= 3 )
    {
      LODWORD(v19) = 3;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( v10 > *(float *)((char *)v4->v + v3) )
    {
LABEL_13:
      v11 = this->mapCenterBoundsMax.v[2];
      v12 = this->mapCenterBoundsMax.v[1];
      v13 = this->mapCenterBoundsMax.v[0];
      v14 = this->mapCenterBoundsMin.v[2];
      v15 = this->mapCenterBoundsMin.v[1];
      v16 = this->mapCenterBoundsMin.v[0];
      if ( v2 >= 3 )
      {
        LODWORD(v19) = 3;
        LODWORD(v18) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      Com_PrintError(25, "Entity with axis '%i' coordinate of %f is too far outside the playable area of the map.  The playable area goes from ( %f, %f, %f ) to ( %f, %f, %f )\n", v2, v4->v[0], v16, v15, v14, v13, v12, v11);
      v6 = 0;
    }
    ++v2;
    v4 = (const vec3_t *)((char *)v4 + 4);
    v7 = v2 < 3;
  }
  while ( (int)v2 < 3 );
  return v6;
}

/*
==============
SvPersistentGlobalsMP::HandleDevelopmentKeyEvent
==============
*/
bool SvPersistentGlobalsMP::HandleDevelopmentKeyEvent(SvPersistentGlobalsMP *this, int key, bool isDown)
{
  return net_showprofile->current.integer && SV_SnapshotProfileMP_KeyEvent(key, isDown);
}

/*
==============
SvPersistentGlobalsMP::KeepPointInPlayableBounds
==============
*/
void SvPersistentGlobalsMP::KeepPointInPlayableBounds(SvPersistentGlobalsMP *this, vec3_t *pos)
{
  unsigned int i; 
  float v3; 

  for ( i = 0; i < 3; ++i )
  {
    if ( this->mapCenterBoundsMin.v[i] <= pos->v[i] )
    {
      if ( this->mapCenterBoundsMax.v[i] >= pos->v[i] )
        continue;
      v3 = this->mapCenterBoundsMax.v[i];
    }
    else
    {
      v3 = this->mapCenterBoundsMin.v[i];
    }
    pos->v[i] = v3;
  }
}

/*
==============
SvGameModeAppMP::LogScriptError
==============
*/
void SvGameModeAppMP::LogScriptError(SvGameModeAppMP *this)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  SV_LogBandwidthEvent(EVENT_SRE_OCCURRED_ON_HOST, NULL, PersistentGlobalsMP->time);
}

/*
==============
SvGameModeAppMP::NotifyClientsSRE
==============
*/
void SvGameModeAppMP::NotifyClientsSRE(SvGameModeAppMP *this, const char *message)
{
  const dvar_t *v2; 
  int integer; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v2 = DVARINT_sre_notification_duration;
  if ( !DVARINT_sre_notification_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sre_notification_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer > 0 )
  {
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    if ( PersistentGlobalsMP->time - PersistentGlobalsMP->lastSRETime > integer )
    {
      MSG_Init(&buf, data, 1024);
      MSG_WriteByte(&buf, 95i64);
      MSG_WriteString(&buf, message);
      SV_Game_BroadcastServerCommandMsg(SV_CMD_CAN_IGNORE, &buf);
      PersistentGlobalsMP->lastSRETime = PersistentGlobalsMP->time;
    }
  }
}

/*
==============
SV_GameMP_DropClient
==============
*/
void SV_GameMP_DropClient(int clientNum, const char *reason)
{
  SvClientMP *MpClient; 

  if ( clientNum >= 0 && clientNum < (int)SvClient::ms_clientCount )
  {
    MpClient = SV_Client_GetMpClient(clientNum);
    SV_ClientMP_DropClient(MpClient, reason, 1);
  }
}

/*
==============
SV_GameMP_GetAgentCount
==============
*/
__int64 SV_GameMP_GetAgentCount()
{
  return (unsigned int)SvPersistentGlobalsMP::GetPersistentGlobalsMP()->agentCount;
}

/*
==============
SV_GameMP_GetEffectivePlayerstateForClientNum
==============
*/
playerState_s *SV_GameMP_GetEffectivePlayerstateForClientNum(int num)
{
  playerState_s *result; 
  __int64 v3; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( num >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v3) = num;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( num ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "num doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v3, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  result = SV_Game_GetPlayerstateForClientNum(num);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 46, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
SV_GameMP_GetExtrapolatedData
==============
*/
void SV_GameMP_GetExtrapolatedData(const int clientNum, const int commandTime, ClientExtrapData *outExtrapData)
{
  SvClientMP *CommonClient; 
  double v7; 
  int v8; 
  SvClientPredictedOrigin outPredictedOrigin; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( SvClientMP::GetPredictedOrigin(CommonClient, commandTime, &outPredictedOrigin) )
  {
    v7 = *(double *)&outPredictedOrigin.extrapData.inputTime;
    v8 = outPredictedOrigin.extrapData.packedBobCycle[1];
    *(_OWORD *)outExtrapData->offset.v = *(_OWORD *)outPredictedOrigin.extrapData.offset.v;
    *(double *)&outExtrapData->inputTime = v7;
  }
  else
  {
    v8 = 0;
    *(_QWORD *)outExtrapData->offset.v = 0i64;
    *(_QWORD *)&outExtrapData->offset.z = 0i64;
    *(_QWORD *)&outExtrapData->inputTime = 0i64;
  }
  outExtrapData->packedBobCycle[1] = v8;
}

/*
==============
SV_GameMP_GetGameType
==============
*/
const char *SV_GameMP_GetGameType()
{
  _BYTE *v0; 
  int v2; 

  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v2 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v2) )
      __debugbreak();
  }
  v0 = (char *)&SvGameGlobals::GetSvGameGlobalsCommon()[2].profile.wallClockTime + 1;
  if ( !*v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(sv->m_gametype[0])", "%s\n\tFetched the gametype before it was set", "sv->m_gametype[0]") )
    __debugbreak();
  return v0;
}

/*
==============
SV_GameMP_GetGuid
==============
*/
char *SV_GameMP_GetGuid(int entNum)
{
  __int64 v1; 
  gentity_s *v3; 

  v1 = entNum;
  if ( entNum < 0 )
    return (char *)&queryFormat.fmt + 3;
  if ( entNum < (int)SvClient::ms_clientCount )
    return SV_Client_GetMpClient(entNum)->playerGuid;
  if ( entNum >= 2048 || !SV_IsAgent(entNum) )
    return (char *)&queryFormat.fmt + 3;
  v3 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v1];
  if ( !v3->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( agentEnt->agent )", (const char *)&queryFormat, "agentEnt->agent") )
    __debugbreak();
  return v3->agent->agentGuid;
}

/*
==============
SV_GameMP_GetHostName
==============
*/
char *SV_GameMP_GetHostName()
{
  char *m_hostname; 

  m_hostname = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->m_hostname;
  if ( !*m_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 83, ASSERT_TYPE_ASSERT, "(svPers->m_hostname[0])", "%s\n\tUndefined host name", "svPers->m_hostname[0]") )
    __debugbreak();
  return m_hostname;
}

/*
==============
SV_GameMP_GetMapCenter
==============
*/
vec3_t *SV_GameMP_GetMapCenter()
{
  return &SvPersistentGlobalsMP::GetPersistentGlobalsMP()->mapCenter;
}

/*
==============
SV_GameMP_InitGameProgs
==============
*/
void SV_GameMP_InitGameProgs(const SvServerInitSettings *initSettings)
{
  __m256i v2; 
  __m256i v3; 
  SvServerInitSettings initSettingsa; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 276, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->registerDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 277, ASSERT_TYPE_ASSERT, "(initSettings->registerDvars)", (const char *)&queryFormat, "initSettings->registerDvars") )
    __debugbreak();
  v2 = *(__m256i *)initSettings->mapName;
  v3 = *(__m256i *)initSettings->serverHostName;
  s_gameInitializedMP = 1;
  *(__m256i *)initSettingsa.mapName = v2;
  *(__m256i *)&initSettingsa.mapName[32] = *(__m256i *)&initSettings->mapName[32];
  *(__m256i *)initSettingsa.gameType = *(__m256i *)initSettings->gameType;
  *(__m256i *)&initSettingsa.gameType[32] = *(__m256i *)&initSettings->gameType[32];
  *(__m256i *)initSettingsa.serverHostName = v3;
  *(__m256i *)&initSettingsa.serverHostName[32] = *(__m256i *)&initSettings->serverHostName[32];
  *(__m256i *)&initSettingsa.hardcoreMode = *(__m256i *)&initSettings->hardcoreMode;
  initSettingsa.isRestart = 0;
  SV_GameMP_InitGameVM(&initSettingsa);
}

/*
==============
SV_GameMP_InitGameVM
==============
*/
void SV_GameMP_InitGameVM(const SvServerInitSettings *initSettings)
{
  int v2; 
  const char *v3; 
  int v4; 
  signed int i; 
  SvClient *CommonClient; 
  SvGameModeAppMP *ActiveServerApplicationMP; 
  unsigned int v8; 
  int m_frameDuration; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const char *v11; 
  scrContext_t *v12; 
  __int64 v13; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( initSettings->serverThreadStartup )
  {
    v2 = g_serverThreadOwnership;
    if ( g_serverThreadOwnership == 1 )
      goto LABEL_14;
    v3 = "( ( g_serverThreadOwnership == 1 ) )";
    v4 = 125;
    goto LABEL_12;
  }
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    v2 = g_serverThreadOwnership;
    v3 = "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )";
    v4 = 129;
LABEL_12:
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", v4, ASSERT_TYPE_ASSERT, v3, "( g_serverThreadOwnership ) = %i", v13) )
      __debugbreak();
  }
LABEL_14:
  Scr_ResetEntityParsePoint();
  SV_Game_ResetSkeletonCache();
  for ( i = 0; i < (int)SvClient::ms_clientCount; CommonClient->gentity = NULL )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i++);
  }
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  ActiveServerApplicationMP->m_svLevelTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  GStatic::SetActiveStatics();
  ProfLoad_Begin("G_InitGame");
  v8 = Sys_MillisecondsRaw();
  if ( !ActiveServerApplicationMP->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = ActiveServerApplicationMP->m_frameDuration;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  G_MainMP_InitGame(initSettings, PersistentGlobalsMP->time, m_frameDuration, v8);
  ProfLoad_End();
  SV_ClientAntiCheatMP_Init();
  GStatic::ClearActiveStatics();
  ActiveServerApplicationMP->m_svLevelTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  v11 = j_va("%i", (unsigned int)sv_serverId_value);
  SV_SetConfigstring(0x212u, v11);
  Migration_Shutdown();
  if ( !SV_DemoMP_UsingDemoHistory() && (SV_IsDemoPlaying() || !initSettings->isSaveGame) )
  {
    Path_InitPaths();
    if ( !initSettings->isFrontEnd )
    {
      ProfLoad_Begin("Path_AutoDisconnectPaths");
      Path_AutoDisconnectPaths();
      ProfLoad_End();
    }
    SvGameModeAppMP::RunSettleFrames(ActiveServerApplicationMP);
    if ( script_usage_tracking )
    {
      if ( script_usage_tracking->current.integer )
      {
        v12 = ScriptContext_Server();
        Profile_ClearScriptUsageValues(v12);
      }
    }
  }
}

/*
==============
SV_GameMP_IsHardcoreMode
==============
*/
__int64 SV_GameMP_IsHardcoreMode()
{
  int v1; 

  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v1 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v1) )
      __debugbreak();
  }
  return BYTE1(SvGameGlobals::GetSvGameGlobalsCommon()[2].profile.vmBuiltinTime);
}

/*
==============
SV_GameMP_RestartGameProgs
==============
*/
void SV_GameMP_RestartGameProgs(const SvServerInitSettings *initSettings)
{
  __int64 v2; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 292, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->isRestart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 293, ASSERT_TYPE_ASSERT, "(initSettings->isRestart)", (const char *)&queryFormat, "initSettings->isRestart") )
    __debugbreak();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v2) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v2) )
      __debugbreak();
  }
  SV_GameMP_ShutdownGameVM(0);
  com_fixedConsolePosition = 0;
  SV_GameMP_InitGameVM(initSettings);
}

/*
==============
SV_GameMP_SetGameEndTime
==============
*/
void SV_GameMP_SetGameEndTime(int gameEndTime)
{
  const char *v2; 
  char buffer[16]; 

  SV_GetConfigstring(0x215u, buffer, 12);
  if ( (int)abs32(atoi(buffer) - gameEndTime) > 500 )
  {
    v2 = j_va("%i", (unsigned int)gameEndTime);
    SV_SetConfigstring(0x215u, v2);
  }
}

/*
==============
SV_GameMP_SetMapCenter
==============
*/
void SV_GameMP_SetMapCenter(const vec3_t *mapCenter)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const char *v3; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  PersistentGlobalsMP->mapCenter = *mapCenter;
  v3 = j_va("%f %f %f", mapCenter->v[0], mapCenter->v[1], mapCenter->v[2]);
  SV_SetConfigstring(0x216u, v3);
  PersistentGlobalsMP->mapCenterBoundsMin.v[0] = mapCenter->v[0] - 130972.0;
  PersistentGlobalsMP->mapCenterBoundsMin.v[1] = mapCenter->v[1] - 130972.0;
  PersistentGlobalsMP->mapCenterBoundsMin.v[2] = mapCenter->v[2] - 32668.0;
  PersistentGlobalsMP->mapCenterBoundsMax.v[0] = mapCenter->v[0] + 130971.0;
  PersistentGlobalsMP->mapCenterBoundsMax.v[1] = mapCenter->v[1] + 130971.0;
  PersistentGlobalsMP->mapCenterBoundsMax.v[2] = mapCenter->v[2] + 32667.0;
}

/*
==============
SV_GameMP_ShutdownGameProgs
==============
*/
void SV_GameMP_ShutdownGameProgs(void)
{
  __int64 v0; 

  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v0) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 312, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v0) )
      __debugbreak();
  }
  if ( s_gameInitializedMP )
  {
    SV_DemoMP_AutoSaveEndDemo();
    SvStaticGlobals::ms_svStaticGlobals.state = SS_DEAD;
    SV_GameMP_ShutdownGameVM(1);
    s_gameInitializedMP = 0;
  }
  else
  {
    SvStaticGlobals::ms_svStaticGlobals.state = SS_DEAD;
  }
}

/*
==============
SV_GameMP_ShutdownGameVM
==============
*/
void SV_GameMP_ShutdownGameVM(bool fullClear)
{
  __int64 v2; 

  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v2) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 241, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v2) )
      __debugbreak();
  }
  SV_DemoMP_AutoSaveEndDemo();
  SV_ClientAntiCheatMP_Shutdown();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  GStatic::SetActiveStatics();
  if ( fullClear )
  {
    BG_TransientsInfilMP_Shutdown();
    BG_Omnvar_ClearTables();
  }
  G_MainMP_ShutdownGame(fullClear);
  GStatic::ClearActiveStatics();
}

/*
==============
SV_GameMP_UpdateCommandDuration
==============
*/
void SV_GameMP_UpdateCommandDuration(void)
{
  SvGameModeAppMP *ActiveServerApplicationMP; 
  const dvar_t *v1; 
  unsigned int v2; 
  unsigned int unsignedInt; 
  unsigned int v4; 
  int v5; 
  int v6; 
  signed int v7; 
  __int64 v8; 
  gclient_s *client; 
  const dvar_t *v10; 
  unsigned int v11; 
  char *fmt; 
  __int64 v13; 
  unsigned int m_svCurCmdDuration; 
  __int64 v15; 
  int UserCommandConstantMsec; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  if ( (signed int)ActiveServerApplicationMP->m_svCurCmdDuration < Com_GetUserCommandConstantMsec() )
  {
    UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
    m_svCurCmdDuration = ActiveServerApplicationMP->m_svCurCmdDuration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_gamemode_app_mp.h", 189, ASSERT_TYPE_ASSERT, "( static_cast<int>(m_svCurCmdDuration) ) >= ( Com_GetUserCommandConstantMsec() )", "static_cast<int>(m_svCurCmdDuration) >= Com_GetUserCommandConstantMsec()\n\t%i, %i", m_svCurCmdDuration, UserCommandConstantMsec) )
      __debugbreak();
  }
  v1 = DVARINT_sv_cmdMaxCommandTime;
  v2 = ActiveServerApplicationMP->m_svCurCmdDuration;
  if ( !DVARINT_sv_cmdMaxCommandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxCommandTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  unsignedInt = v1->current.unsignedInt;
  v4 = Com_GetUserCommandConstantMsec();
  v5 = v4;
  if ( unsignedInt > v4 || v2 > v4 )
  {
    v6 = 0;
    v7 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v8 = 0i64;
      do
      {
        if ( SvClient::GetCommonClient(v7)->state == CS_ACTIVE )
        {
          client = SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v8].client;
          if ( client )
          {
            if ( client->sess.sessionState == SESS_STATE_PLAYING )
              ++v6;
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < (int)SvClient::ms_clientCount );
    }
    v10 = DVARINT_sv_cmdMinCommandTimeClientCutoff;
    if ( !DVARINT_sv_cmdMinCommandTimeClientCutoff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMinCommandTimeClientCutoff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v6 > v10->current.integer )
      v5 = unsignedInt;
    if ( v5 != v2 )
    {
      LODWORD(fmt) = v6;
      Com_Printf(131087, "Transitioning command duration from %d to %d with %d playing clients\n", v2, (unsigned int)v5, fmt);
      if ( v5 < Com_GetUserCommandConstantMsec() )
      {
        LODWORD(v15) = Com_GetUserCommandConstantMsec();
        LODWORD(v13) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_gamemode_app_mp.h", 196, ASSERT_TYPE_ASSERT, "( static_cast<int>(cmdDuration) ) >= ( Com_GetUserCommandConstantMsec() )", "static_cast<int>(cmdDuration) >= Com_GetUserCommandConstantMsec()\n\t%i, %i", v13, v15) )
          __debugbreak();
      }
      ActiveServerApplicationMP->m_svCurCmdDuration = v5;
      MSG_Init(&buf, data, 1024);
      MSG_WriteByte(&buf, 43i64);
      if ( (signed int)ActiveServerApplicationMP->m_svCurCmdDuration < Com_GetUserCommandConstantMsec() )
      {
        LODWORD(v15) = Com_GetUserCommandConstantMsec();
        LODWORD(v13) = ActiveServerApplicationMP->m_svCurCmdDuration;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_gamemode_app_mp.h", 189, ASSERT_TYPE_ASSERT, "( static_cast<int>(m_svCurCmdDuration) ) >= ( Com_GetUserCommandConstantMsec() )", "static_cast<int>(m_svCurCmdDuration) >= Com_GetUserCommandConstantMsec()\n\t%i, %i", v13, v15) )
          __debugbreak();
      }
      v11 = ActiveServerApplicationMP->m_svCurCmdDuration;
      if ( v11 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v11, "unsigned", ActiveServerApplicationMP->m_svCurCmdDuration) )
        __debugbreak();
      MSG_WriteByte(&buf, (unsigned __int8)v11);
      SV_Game_BroadcastServerCommandMsg(SV_CMD_RELIABLE, &buf);
    }
  }
}

/*
==============
SV_GameMP_UpdatePresenceGametype
==============
*/
void SV_GameMP_UpdatePresenceGametype(const SvServerInitSettings *initSettings)
{
  const PartyData *ServerLobby; 
  int StartingControllerIndex; 
  PartyActiveClient outPartyActiveClient; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 92, ASSERT_TYPE_ASSERT, "( initSettings )", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->isRestart && !initSettings->isSaveGame )
  {
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( Session_IsValid(ServerLobby->session) )
    {
      StartingControllerIndex = Party_GetStartingControllerIndex(ServerLobby);
      Live_SetGametype(StartingControllerIndex, initSettings->gameType);
    }
    if ( Party_GetSecondaryActiveClient(ServerLobby, &outPartyActiveClient) )
      Live_SetGametype(outPartyActiveClient.localControllerIndex, initSettings->gameType);
  }
}

/*
==============
SvGameModeAppMP::ShutdownGameProgs
==============
*/
void SvGameModeAppMP::ShutdownGameProgs(SvGameModeAppMP *this)
{
  __int64 v1; 

  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v1) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 312, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v1) )
      __debugbreak();
  }
  if ( s_gameInitializedMP )
  {
    SV_DemoMP_AutoSaveEndDemo();
    SvStaticGlobals::ms_svStaticGlobals.state = SS_DEAD;
    SV_GameMP_ShutdownGameVM(1);
    s_gameInitializedMP = 0;
  }
  else
  {
    SvStaticGlobals::ms_svStaticGlobals.state = SS_DEAD;
  }
}

