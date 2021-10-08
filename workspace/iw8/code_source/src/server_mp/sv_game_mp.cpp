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

bool __fastcall SvPersistentGlobalsMP::CheckFontScaleRange(SvPersistentGlobalsMP *this, double fontScale)
{
  char v2; 
  char v3; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v2 )
    return 0;
  __asm { vcomiss xmm1, cs:__real@40cccccd }
  return (v2 | v3) != 0;
}

/*
==============
SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds
==============
*/
__int64 SvPersistentGlobalsMP::CheckOriginIsInPlayableBounds(SvPersistentGlobalsMP *this, const vec3_t *origin)
{
  unsigned int v11; 
  unsigned __int8 v16; 
  bool v17; 
  bool v22; 
  bool v23; 
  bool v25; 
  bool v26; 
  __int64 result; 
  char *fmt; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int128 v59; 
  __int128 v60; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
  }
  v11 = 0;
  __asm
  {
    vmovss  xmm13, cs:__real@3f000000
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R14 = (char *)&this->mapCenterBoundsMax - (char *)origin;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RDI = origin;
  __asm { vmovaps xmmword ptr [rax-68h], xmm9 }
  _RSI = this;
  __asm { vmovaps xmmword ptr [rax-78h], xmm10 }
  v16 = 1;
  __asm { vmovaps [rsp+0F8h+var_88], xmm11 }
  v17 = 1;
  __asm { vxorps  xmm12, xmm12, xmm12 }
  do
  {
    if ( !v17 )
    {
      LODWORD(v54) = 3;
      LODWORD(v52) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v54) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm2, xmm13, dword ptr [rdi]
      vroundss xmm0, xmm12, xmm2, 1
      vcvttss2si ebp, xmm0
    }
    v22 = v11 < 3;
    if ( v11 >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(v52) = v11;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v54);
      v22 = 0;
      if ( v23 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, ebp
      vcomiss xmm6, dword ptr [r14+rdi-0Ch]
    }
    if ( v22 )
      goto LABEL_13;
    v25 = v11 <= 3;
    if ( v11 >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(v52) = v11;
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v54);
      v25 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, dword ptr [r14+rdi] }
    if ( !v25 )
    {
LABEL_13:
      __asm
      {
        vmovss  xmm6, dword ptr [rsi+6Ch]
        vmovss  xmm7, dword ptr [rsi+68h]
        vmovss  xmm8, dword ptr [rsi+64h]
        vmovss  xmm9, dword ptr [rsi+60h]
        vmovss  xmm10, dword ptr [rsi+5Ch]
        vmovss  xmm11, dword ptr [rsi+58h]
        vcvtss2sd xmm6, xmm6, xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vcvtss2sd xmm10, xmm10, xmm10
        vcvtss2sd xmm11, xmm11, xmm11
      }
      if ( v11 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v52) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v54) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rdi]
        vmovsd  [rsp+0F8h+var_B0], xmm6
        vmovsd  [rsp+0F8h+var_B8], xmm7
        vmovsd  [rsp+0F8h+var_C0], xmm8
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0F8h+var_C8], xmm9
        vmovsd  [rsp+0F8h+var_D0], xmm10
        vmovq   r9, xmm3
        vmovsd  [rsp+0F8h+fmt], xmm11
      }
      Com_PrintError(25, "Entity with axis '%i' coordinate of %f is too far outside the playable area of the map.  The playable area goes from ( %f, %f, %f ) to ( %f, %f, %f )\n", v11, _R9, fmt, v53, v55, v56, v57, v58, v59, v60);
      v16 = 0;
    }
    ++v11;
    _RDI = (const vec3_t *)((char *)_RDI + 4);
    v17 = v11 < 3;
  }
  while ( (int)v11 < 3 );
  __asm { vmovaps xmm11, [rsp+0F8h+var_88] }
  _R11 = &v66;
  result = v16;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm10, [rsp+0F8h+var_78]
    vmovaps xmm9, [rsp+0F8h+var_68]
    vmovaps xmm8, [rsp+0F8h+var_58]
    vmovaps xmm7, [rsp+0F8h+var_48]
  }
  return result;
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
  unsigned int v4; 
  bool v7; 
  void *retaddr; 

  _RAX = &retaddr;
  v4 = 0;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = pos;
  _RBP = this;
  v7 = 1;
  do
  {
    _RDI = (int)v4;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rdi*4+58h]
      vcomiss xmm0, dword ptr [rsi+rdi*4]
    }
    if ( v7 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rdi*4+64h]
        vcomiss xmm0, dword ptr [rsi+rdi*4]
        vmovss  xmm6, dword ptr [rbp+rdi*4+64h]
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [rbp+rdi*4+58h] }
    }
    __asm { vmovss  dword ptr [rsi+rdi*4], xmm6 }
    v7 = ++v4 <= 3;
  }
  while ( v4 < 3 );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  int v9; 
  SvClientPredictedOrigin outPredictedOrigin; 

  _RBX = outExtrapData;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( SvClientMP::GetPredictedOrigin(CommonClient, commandTime, &outPredictedOrigin) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+98h+outPredictedOrigin.extrapData.offset]
      vmovsd  xmm1, qword ptr [rsp+98h+outPredictedOrigin.extrapData.inputTime]
    }
    v9 = outPredictedOrigin.extrapData.packedBobCycle[1];
    __asm
    {
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  qword ptr [rbx+10h], xmm1
    }
  }
  else
  {
    v9 = 0;
    *(_QWORD *)_RBX->offset.v = 0i64;
    *(_QWORD *)&_RBX->offset.z = 0i64;
    *(_QWORD *)&_RBX->inputTime = 0i64;
  }
  _RBX->packedBobCycle[1] = v9;
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
  SvServerInitSettings initSettingsa; 

  _RBX = initSettings;
  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 276, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !_RBX->registerDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_mp.cpp", 277, ASSERT_TYPE_ASSERT, "(initSettings->registerDvars)", (const char *)&queryFormat, "initSettings->registerDvars") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+80h]
  }
  _RAX = &initSettingsa;
  s_gameInitializedMP = 1;
  __asm
  {
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rax+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rax+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rax+60h], ymm0
    vmovups ymmword ptr [rax+80h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0A0h]
    vmovups ymmword ptr [rax+0A0h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0C0h]
    vmovups ymmword ptr [rax+0C0h], ymm1
  }
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
  const char *v12; 

  _RDI = mapCenter;
  _RBX = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  _RBX->mapCenter = *_RDI;
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+8]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rdi]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v12 = j_va("%f %f %f", _RDX, _R8, _R9);
  SV_SetConfigstring(0x216u, v12);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm0, xmm0, cs:__real@47ffce00
    vmovss  xmm3, cs:__real@47ffcd80
    vmovss  dword ptr [rbx+58h], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm2, xmm1, cs:__real@47ffce00
    vmovss  dword ptr [rbx+5Ch], xmm2
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, cs:__real@46ff3800
    vmovss  dword ptr [rbx+60h], xmm1
    vaddss  xmm0, xmm3, dword ptr [rdi]
    vmovss  dword ptr [rbx+64h], xmm0
    vaddss  xmm2, xmm3, dword ptr [rdi+4]
    vmovss  dword ptr [rbx+68h], xmm2
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, cs:__real@46ff3600
    vmovss  dword ptr [rbx+6Ch], xmm1
  }
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

