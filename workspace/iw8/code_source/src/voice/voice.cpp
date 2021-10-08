/*
==============
Voice_ClearXB3MuteList
==============
*/

void Voice_ClearXB3MuteList(void)
{
  ?Voice_ClearXB3MuteList@@YAXXZ();
}

/*
==============
Voice_IsMemberMuted
==============
*/

bool __fastcall Voice_IsMemberMuted(const PartyData *party, const int localControllerIndex, const int memberIndex)
{
  return ?Voice_IsMemberMuted@@YA_NPEBUPartyData@@HH@Z(party, localControllerIndex, memberIndex);
}

/*
==============
Voice_CheckXHVSync
==============
*/

void __fastcall Voice_CheckXHVSync(const PartyData *party)
{
  ?Voice_CheckXHVSync@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
Voice_GetTalkingCount
==============
*/

int __fastcall Voice_GetTalkingCount(const PartyData *party, const int localControllerIndex)
{
  return ?Voice_GetTalkingCount@@YAHPEBUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Voice_MuteMember
==============
*/

void __fastcall Voice_MuteMember(PartyData *party, const int clientNum)
{
  ?Voice_MuteMember@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Voice_RegisterRemotePlayer
==============
*/

bool __fastcall Voice_RegisterRemotePlayer(PartyData *party, const int localControllerIndex, const int clientNum)
{
  return ?Voice_RegisterRemotePlayer@@YA_NPEAUPartyData@@HH@Z(party, localControllerIndex, clientNum);
}

/*
==============
Voice_IsXuidTalking
==============
*/

bool __fastcall Voice_IsXuidTalking(const PartyData *party, const XUID xuid)
{
  return ?Voice_IsXuidTalking@@YA_NPEBUPartyData@@UXUID@@@Z(party, xuid);
}

/*
==============
Voice_CleanupOnUserSignout
==============
*/

void __fastcall Voice_CleanupOnUserSignout(const int controllerIndex)
{
  ?Voice_CleanupOnUserSignout@@YAXH@Z(controllerIndex);
}

/*
==============
Voice_IsHeadsetPresent
==============
*/

bool __fastcall Voice_IsHeadsetPresent(const int localControllerIndex)
{
  return ?Voice_IsHeadsetPresent@@YA_NH@Z(localControllerIndex);
}

/*
==============
Voice_Init
==============
*/

bool __fastcall Voice_Init()
{
  return ?Voice_Init@@YA_NXZ();
}

/*
==============
Voice_DrawDebug
==============
*/

void __fastcall Voice_DrawDebug(LocalClientNum_t localClientNum)
{
  ?Voice_DrawDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Voice_IncomingVoiceData
==============
*/

int __fastcall Voice_IncomingVoiceData(const PartyData *party, int clientNum, unsigned __int8 *data, int size, LocalClientNum_t localClientNum)
{
  return ?Voice_IncomingVoiceData@@YAHPEBUPartyData@@HPEAEHW4LocalClientNum_t@@@Z(party, clientNum, data, size, localClientNum);
}

/*
==============
Voice_UnregisterRemotePlayer
==============
*/

bool __fastcall Voice_UnregisterRemotePlayer(PartyData *party, const int clientNum)
{
  return ?Voice_UnregisterRemotePlayer@@YA_NPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Voice_Frame
==============
*/

void Voice_Frame(void)
{
  ?Voice_Frame@@YAXXZ();
}

/*
==============
Voice_SetIsMicrophoneAttached
==============
*/

void __fastcall Voice_SetIsMicrophoneAttached(int localControllerIndex, bool attached)
{
  ?Voice_SetIsMicrophoneAttached@@YAXH_N@Z(localControllerIndex, attached);
}

/*
==============
Voice_UpdateVoiceThreshold
==============
*/

void __fastcall Voice_UpdateVoiceThreshold(float deltaTime)
{
  ?Voice_UpdateVoiceThreshold@@YAXM@Z(deltaTime);
}

/*
==============
Voice_ClearRemoteTalkers
==============
*/

void __fastcall Voice_ClearRemoteTalkers(PartyData *party)
{
  ?Voice_ClearRemoteTalkers@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Voice_XB3MutePlayer
==============
*/

void __fastcall Voice_XB3MutePlayer(const unsigned __int64 platformId)
{
  ?Voice_XB3MutePlayer@@YAX_K@Z(platformId);
}

/*
==============
Voice_GetVoiceLevel
==============
*/

double __fastcall Voice_GetVoiceLevel()
{
  double result; 

  *(float *)&result = ?Voice_GetVoiceLevel@@YAMXZ();
  return result;
}

/*
==============
Voice_Update
==============
*/

void __fastcall Voice_Update(int controllerIndex)
{
  ?Voice_Update@@YAXH@Z(controllerIndex);
}

/*
==============
Voice_DisableLocalMics
==============
*/

void __fastcall Voice_DisableLocalMics(PartyData *party)
{
  ?Voice_DisableLocalMics@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Voice_IsXB3GloballyMuted
==============
*/

bool __fastcall Voice_IsXB3GloballyMuted(const unsigned __int64 platformId)
{
  return ?Voice_IsXB3GloballyMuted@@YA_N_K@Z(platformId);
}

/*
==============
Voice_PlaybackStop
==============
*/

void Voice_PlaybackStop(void)
{
  ?Voice_PlaybackStop@@YAXXZ();
}

/*
==============
Voice_Playback
==============
*/

void Voice_Playback(void)
{
  ?Voice_Playback@@YAXXZ();
}

/*
==============
Voice_Shutdown
==============
*/

void Voice_Shutdown(void)
{
  ?Voice_Shutdown@@YAXXZ();
}

/*
==============
Voice_SetAllFriendFlags
==============
*/

void __fastcall Voice_SetAllFriendFlags(PartyData *party)
{
  ?Voice_SetAllFriendFlags@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Voice_GetLocalVoiceData
==============
*/

int __fastcall Voice_GetLocalVoiceData(const PartyData *party, const LocalClientNum_t clientNum, ClientVoicePacket_s *voiceData)
{
  return ?Voice_GetLocalVoiceData@@YAHPEBUPartyData@@W4LocalClientNum_t@@PEAUClientVoicePacket_s@@@Z(party, clientNum, voiceData);
}

/*
==============
Voice_GetRegisteredPlayerCount
==============
*/

int __fastcall Voice_GetRegisteredPlayerCount(const PartyData *party)
{
  return ?Voice_GetRegisteredPlayerCount@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Voice_ChatRestricted
==============
*/

bool __fastcall Voice_ChatRestricted()
{
  return ?Voice_ChatRestricted@@YA_NXZ();
}

/*
==============
Voice_IsMemberTalking
==============
*/

bool __fastcall Voice_IsMemberTalking(const PartyData *party, const int memberIndex)
{
  return ?Voice_IsMemberTalking@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Voice_IsMemberUnmutable
==============
*/

bool __fastcall Voice_IsMemberUnmutable(const PartyData *party, const int localControllerIndex, const int memberIndex)
{
  return ?Voice_IsMemberUnmutable@@YA_NPEBUPartyData@@HH@Z(party, localControllerIndex, memberIndex);
}

/*
==============
Voice_EnableMicIfAllowed
==============
*/

void __fastcall Voice_EnableMicIfAllowed(PartyData *party, const int localControllerIndex)
{
  ?Voice_EnableMicIfAllowed@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Voice_UnmuteMember
==============
*/

void __fastcall Voice_UnmuteMember(PartyData *party, const int clientNum)
{
  ?Voice_UnmuteMember@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Voice_IsLocalClientTalking
==============
*/

bool __fastcall Voice_IsLocalClientTalking(const PartyData *party, const LocalClientNum_t localClientNum)
{
  return ?Voice_IsLocalClientTalking@@YA_NPEBUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Voice_GetRegisteredPlayerList
==============
*/

int __fastcall Voice_GetRegisteredPlayerList(const PartyData *party, XUID *playerList)
{
  return ?Voice_GetRegisteredPlayerList@@YAHPEBUPartyData@@PEAUXUID@@@Z(party, playerList);
}

/*
==============
GetXB3RemoteVoiceUser
==============
*/
XB3RemoteVoiceUser *GetXB3RemoteVoiceUser(const unsigned __int64 platformId)
{
  int v1; 
  XB3RemoteVoiceUser *result; 

  if ( !platformId )
    return 0i64;
  v1 = 0;
  for ( result = s_xb3RemoteVoiceUsers; result->platformId != platformId; ++result )
  {
    if ( (unsigned int)++v1 >= 0xC8 )
      return 0i64;
  }
  return result;
}

/*
==============
RegisterXB3RemoteVoiceUser
==============
*/
void RegisterXB3RemoteVoiceUser(const PartyData *party, const int controllerIndex, const unsigned __int64 platformId)
{
  XB3RemoteVoiceUser *v6; 
  XB3RemoteVoiceUser *v7; 
  unsigned int i; 
  unsigned __int8 activePartyBits; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1403, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !party )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1404, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    goto LABEL_7;
  }
  if ( !platformId )
  {
LABEL_7:
    Com_PrintError(14, "%s: Unable to register XB3 user because platformid is 0 or party is null\n", "RegisterXB3RemoteVoiceUser");
    return;
  }
  v6 = NULL;
  v7 = s_xb3RemoteVoiceUsers;
  for ( i = 0; i < 0xC8; ++i )
  {
    activePartyBits = v7->activePartyBits;
    if ( activePartyBits )
    {
      if ( v7->platformId == platformId )
      {
        v7->activePartyBits = activePartyBits | (1 << party->partyId);
        return;
      }
    }
    else
    {
      v6 = v7;
    }
    ++v7;
  }
  if ( v6 )
  {
    v6->platformId = platformId;
    v6->isGloballyMuted = 0;
    v6->activePartyBits = 1 << party->partyId;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1428, ASSERT_TYPE_ASSERT, "(vacantRemoteUser)", (const char *)&queryFormat, "vacantRemoteUser") )
  {
    __debugbreak();
    XB3_Privacy_BeginFetchMuteList(controllerIndex);
    return;
  }
  XB3_Privacy_BeginFetchMuteList(controllerIndex);
}

/*
==============
Voice_AllocateLocalTalkerInfo
==============
*/
bool Voice_AllocateLocalTalkerInfo(const PartyData *party, int clientNum)
{
  LocalTalkerInfo *v4; 
  LocalTalkerInfo *v5; 
  const XUID *Xuid; 
  unsigned int PortForLocalXUID; 
  LocalClientNum_t ClientFromController; 
  signed int i; 
  __int64 v11; 
  XUID result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 401, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = Voice_LocalTalkerInfoForClientNum(party, clientNum);
  v5 = v4;
  if ( v4 )
  {
    if ( v4->allocated )
    {
      LOBYTE(v4) = 1;
    }
    else
    {
      Xuid = Party_GetXuid(&result, party, clientNum);
      PortForLocalXUID = Live_GetPortForLocalXUID((const XUID)Xuid->m_id);
      if ( PortForLocalXUID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 413, ASSERT_TYPE_ASSERT, "(localControllerIndex != (-1))", (const char *)&queryFormat, "localControllerIndex != INVALID_CONTROLLER_PORT") )
        __debugbreak();
      ClientFromController = CL_Mgr_GetClientFromController(PortForLocalXUID);
      if ( ClientFromController == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 415, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
        __debugbreak();
      if ( VoiceEncode_CreateEncoder(PortForLocalXUID, ClientFromController) )
      {
        Com_Printf(25, "Voice_AllocateLocalTalkerInfo for party %s controller %d\n", party->partyName, PortForLocalXUID);
        if ( PortForLocalXUID >= 8 )
        {
          LODWORD(v11) = PortForLocalXUID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 426, ASSERT_TYPE_ASSERT, "(unsigned)( voiceBus ) < (unsigned)( SND_VOICE_BUS_COUNT )", "voiceBus doesn't index SND_VOICE_BUS_COUNT\n\t%i not in [0, %i)", v11, 8) )
            __debugbreak();
        }
        for ( i = 0; i < 5; ++i )
        {
          if ( !VoiceDecode_AddOutputBus(i, PortForLocalXUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 434, ASSERT_TYPE_ASSERT, "(ret)", (const char *)&queryFormat, "ret") )
            __debugbreak();
        }
        VoiceDecode_FutzCreate(PortForLocalXUID);
        LOBYTE(v4) = 1;
        v5->voipOutSequenceId = 0;
        v5->allocated = 1;
      }
      else
      {
        Com_PrintError(25, "Error creating voice encoder for local controller %d.\n", PortForLocalXUID);
        LOBYTE(v4) = 0;
      }
    }
  }
  return (char)v4;
}

/*
==============
Voice_ChatRestricted
==============
*/
char Voice_ChatRestricted()
{
  int v0; 
  LocalClientNum_t outLocalClientNum; 

  v0 = 0;
  while ( !CL_Mgr_IsControllerMappedToClient(v0, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v0) )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Voice_CheckXHVSync
==============
*/
void Voice_CheckXHVSync(const PartyData *party)
{
  ;
}

/*
==============
Voice_CleanupOnUserSignout
==============
*/
void Voice_CleanupOnUserSignout(const int controllerIndex)
{
  PartyData *PartyData; 
  int i; 
  const XUID *Xuid; 
  const XUID *v5; 
  int v7; 
  XUID result; 
  XUID v9; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 645, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  if ( Live_IsUserSignedIn(controllerIndex) )
  {
    PartyData = Lobby_GetPartyData();
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsRegisteredForVoice(&g_partyData, i) )
      {
        Xuid = Party_GetXuid(&result, &g_partyData, i);
        if ( Live_GetPortForLocalXUID((const XUID)Xuid->m_id) == controllerIndex )
        {
          Voice_UnregisterRemotePlayer(&g_partyData, i);
          if ( Party_IsRegisteredForVoice(&g_partyData, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 661, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( privateParty, i ))", (const char *)&queryFormat, "!Party_IsRegisteredForVoice( privateParty, i )") )
            __debugbreak();
        }
      }
      if ( Party_IsRegisteredForVoice(PartyData, i) )
      {
        v5 = Party_GetXuid(&v9, PartyData, i);
        if ( Live_GetPortForLocalXUID((const XUID)v5->m_id) == controllerIndex )
        {
          Voice_UnregisterRemotePlayer(PartyData, i);
          if ( Party_IsRegisteredForVoice(PartyData, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 672, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( gameParty, i ))", (const char *)&queryFormat, "!Party_IsRegisteredForVoice( gameParty, i )") )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
Voice_ClearRemoteTalkers
==============
*/
void Voice_ClearRemoteTalkers(PartyData *party)
{
  int v2; 
  int i; 
  __int64 v4; 
  __int64 v5; 

  if ( party )
  {
    v2 = 0;
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsRegisteredForVoice(party, i) )
        Voice_UnregisterRemotePlayer(party, i);
      if ( Party_IsRegisteredForVoice(party, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 745, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( party, clientNum ))", (const char *)&queryFormat, "!Party_IsRegisteredForVoice( party, clientNum )") )
        __debugbreak();
    }
    v4 = 0i64;
    do
    {
      v5 = v4 + (int)party->partyId;
      if ( s_localTalkerInfo[0].enabled[v5] )
      {
        s_localTalkerInfo[0].enabled[v5] = 0;
        Com_Printf(25, "Disabling local mic (controller %i) for party %s\n", (unsigned int)v2, party->partyName);
      }
      ++v2;
      v4 += 12i64;
    }
    while ( v2 < 8 );
  }
}

/*
==============
Voice_ClearXB3MuteList
==============
*/
void Voice_ClearXB3MuteList(void)
{
  unsigned int v0; 
  bool *p_isGloballyMuted; 

  v0 = 0;
  p_isGloballyMuted = &s_xb3RemoteVoiceUsers[0].isGloballyMuted;
  do
  {
    ++v0;
    *p_isGloballyMuted = 0;
    p_isGloballyMuted += 16;
  }
  while ( v0 < 0xC8 );
}

/*
==============
Voice_DisableLocalMics
==============
*/
void Voice_DisableLocalMics(PartyData *party)
{
  int v1; 
  __int64 v2; 
  __int64 v4; 

  v1 = 0;
  v2 = 0i64;
  do
  {
    v4 = v2 + (int)party->partyId;
    if ( s_localTalkerInfo[0].enabled[v4] )
    {
      s_localTalkerInfo[0].enabled[v4] = 0;
      Com_Printf(25, "Disabling local mic (controller %i) for party %s\n", (unsigned int)v1, party->partyName);
    }
    ++v1;
    v2 += 12i64;
  }
  while ( v1 < 8 );
}

/*
==============
Voice_DrawDebug
==============
*/
void Voice_DrawDebug(LocalClientNum_t localClientNum)
{
  ScreenPlacementMode v6; 
  __int32 v7; 
  bool v8; 
  GfxFont *font; 
  const char *s; 
  GfxFont *smallDevFont; 
  unsigned __int64 AverageEncodeTime; 
  const char *v29; 
  GfxFont *v33; 
  unsigned __int64 MaxEncodeTime; 
  const char *v38; 
  signed int v51; 
  bool *p_allocated; 
  int v54; 
  GfxFont *v55; 
  unsigned int LocalVoiceBufferUsage; 
  const char *v57; 
  const char *v58; 
  GfxFont *v69; 
  unsigned int v70; 
  const char *v71; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  v6 = activeScreenPlacementMode;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      _RDI = &scrPlaceViewDisplay[localClientNum];
      goto LABEL_8;
    }
    if ( v7 == 1 )
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v8 )
      __debugbreak();
  }
  _RDI = &scrPlaceFull;
LABEL_8:
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+28h]
    vmovss  xmm6, dword ptr [rdi+2Ch]
  }
  font = cls.smallDevFont;
  s = j_va("Largest packet: %d bytes", (unsigned int)s_maxPacketSize);
  __asm
  {
    vmovss  xmm7, cs:__real@3f0ccccd
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s, &colorWhite, 5, font);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, "Encode time", &colorWhite, 5, cls.smallDevFont);
  smallDevFont = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  AverageEncodeTime = VoiceEncode_GetAverageEncodeTime();
  v29 = j_va("  Avg: %lluus", AverageEncodeTime);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v29, &colorWhite, 5, smallDevFont);
  v33 = cls.smallDevFont;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  MaxEncodeTime = VoiceEncode_GetMaxEncodeTime();
  v38 = j_va("  Max: %lluus", MaxEncodeTime);
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v38, &colorWhite, 5, v33);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, xmm6
    vaddss  xmm6, xmm1, cs:__real@41200000
    vmovss  dword ptr [rsp+98h+fmt], xmm7
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, "Local Talkers", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  v51 = 0;
  p_allocated = &s_localTalkerInfo[0].allocated;
  __asm { vaddss  xmm6, xmm6, xmm0 }
  v54 = 0;
  do
  {
    v55 = cls.smallDevFont;
    LocalVoiceBufferUsage = VoiceEncode_GetLocalVoiceBufferUsage(v54);
    v57 = "False";
    if ( *p_allocated )
      v57 = "True";
    v58 = j_va("  %d) Allocated: %s, Packet count: %d", (unsigned int)v54, v57, LocalVoiceBufferUsage);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v58, &colorWhite, 5, v55);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    ++v54;
    p_allocated += 12;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  while ( v54 < 8 );
  __asm
  {
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, "Remote Talkers", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  do
  {
    v69 = cls.smallDevFont;
    v70 = VoiceDecode_GetLocalVoiceBufferUsage(v51);
    v71 = j_va("  %d) packet count: %d", (unsigned int)v51, v70);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v71, &colorWhite, 5, v69);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    ++v51;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
  }
  while ( v51 < 5 );
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
Voice_EnableMicIfAllowed
==============
*/
void Voice_EnableMicIfAllowed(PartyData *party, const int localControllerIndex)
{
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  LocalClientNum_t outLocalClientNum; 

  v4 = 12i64 * localControllerIndex;
  v5 = v4 + (int)party->partyId;
  if ( s_localTalkerInfo[0].enabled[v5] )
  {
    s_localTalkerInfo[0].enabled[v5] = 0;
    Com_Printf(25, "Disabling local mic (controller %i) for party %s\n", (unsigned int)localControllerIndex, party->partyName);
  }
  v6 = 0;
  while ( !CL_Mgr_IsControllerMappedToClient(v6, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v6) )
  {
    if ( ++v6 >= 8 )
    {
      v7 = v4 + (int)party->partyId;
      if ( !s_localTalkerInfo[0].enabled[v7] )
      {
        s_localTalkerInfo[0].enabled[v7] = 1;
        Com_Printf(25, "Enabling local mic ( controller %i) for party %s\n", (unsigned int)localControllerIndex, party->partyName);
      }
      return;
    }
  }
}

/*
==============
Voice_FindUser
==============
*/
int Voice_FindUser(const PartyData *party, const XUID xuid)
{
  int result; 
  int v5; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 263, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result = Party_FindMemberByXUID(party, xuid);
  v5 = result;
  if ( result != -1 )
  {
    if ( !Party_IsRegisteredForVoice(party, result) )
      return -1;
    return v5;
  }
  return result;
}

/*
==============
Voice_Frame
==============
*/
void Voice_Frame(void)
{
  const dvar_t *v0; 
  bool enabled; 
  unsigned int v2; 
  int i; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  const char *v7; 
  const char *v8; 
  char v9; 
  char v10; 
  const SndFutz *FutzById; 
  bool updated; 
  int v13; 

  if ( s_voiceSystemInitialized )
  {
    v0 = DVARBOOL_cl_voice;
    if ( !DVARBOOL_cl_voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    enabled = v0->current.enabled;
    v2 = 0;
    if ( enabled != s_voiceSystemEnabled )
    {
      s_voiceSystemEnabled = v0->current.enabled;
      SD_OutputEnableUserSystems(enabled);
      for ( i = 0; i < 8; ++i )
        VoiceEncode_FlushEncoder(i);
    }
    v4 = DVARINT_snd_voicefutz;
    if ( !DVARINT_snd_voicefutz && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_voicefutz") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    v6 = DVARINT_snd_voicefutz;
    if ( !DVARINT_snd_voicefutz && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 771, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_voicefutz") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = Dvar_EnumToString(v6);
    v8 = v7;
    if ( v7 )
    {
      v9 = *v7;
      if ( v9 )
      {
        v2 = 5381;
        do
        {
          ++v8;
          v10 = v9 | 0x20;
          if ( (unsigned int)(v9 - 65) >= 0x1A )
            v10 = v9;
          v2 = 65599 * v2 + v10;
          v9 = *v8;
        }
        while ( *v8 );
        if ( !v2 )
          v2 = 1;
      }
    }
    FutzById = SND_GetFutzById(v2);
    if ( FutzById )
    {
      updated = VoiceDecode_FutzUpdateParam(FutzById);
      v13 = s_currentFutzIndex;
      if ( updated )
        v13 = integer;
      s_currentFutzIndex = v13;
    }
    _RBX = DVARFLT_voice_output_scaler;
    if ( !DVARFLT_voice_output_scaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_output_scaler") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h]; volume }
    VoiceDecode_SetOutputVolume(*(float *)&_XMM0);
  }
}

/*
==============
Voice_GetLocalVoiceData
==============
*/
__int64 Voice_GetLocalVoiceData(const PartyData *party, const LocalClientNum_t clientNum, ClientVoicePacket_s *voiceData)
{
  int i; 
  int ControllerFromClient; 
  __int64 v8; 
  unsigned __int64 PlatformUserId; 
  int MemberByPlatformId; 
  int v11; 
  LocalTalkerInfo *v12; 
  int LocalVoiceData; 
  int v14; 
  int j; 
  int v16; 
  int k; 
  unsigned int Int_Internal_DebugName; 
  int v20; 
  unsigned int v21; 
  XUID outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 971, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !voiceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 972, ASSERT_TYPE_ASSERT, "(voiceData)", (const char *)&queryFormat, "voiceData") )
    __debugbreak();
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, (LocalClientNum_t *)&outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(i) )
      return 0i64;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
  v8 = ControllerFromClient;
  if ( !Live_IsSignedIn(ControllerFromClient) )
    return 0i64;
  PlatformUserId = Live_GetPlatformUserId(v8);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 277, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  MemberByPlatformId = Party_FindMemberByPlatformId(party, PlatformUserId);
  v11 = MemberByPlatformId;
  if ( MemberByPlatformId != -1 && !Party_IsRegisteredForVoice(party, MemberByPlatformId) )
    return 0i64;
  if ( v11 < 0 )
    return 0i64;
  v12 = &s_localTalkerInfo[v8];
  if ( !v12->enabled[party->partyId] || !CL_Mgr_IsClientActive(clientNum) )
    return 0i64;
  Profile_Begin(491);
  LocalVoiceData = VoiceEncode_ReadLocalVoiceData(v8, &voiceData->data[2], 0x7Eu);
  if ( LocalVoiceData > 126 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1011, ASSERT_TYPE_ASSERT, "(size <= maxSize)", (const char *)&queryFormat, "size <= maxSize") )
    __debugbreak();
  if ( LocalVoiceData > s_maxPacketSize )
  {
    s_maxPacketSize = LocalVoiceData;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
      Com_Printf(25, "Largest voice packet size is %d\n", (unsigned int)s_maxPacketSize);
  }
  if ( LocalVoiceData )
  {
    v14 = LocalVoiceData + 2;
    if ( v14 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1027, ASSERT_TYPE_ASSERT, "(bytesWritten <= 128)", (const char *)&queryFormat, "bytesWritten <= MAX_VOICE_PACKET_DATA") )
      __debugbreak();
  }
  else
  {
    v14 = 0;
  }
  if ( (v14 < 0 || (unsigned int)v14 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v14, "signed", v14) )
    __debugbreak();
  voiceData->data[0] = v14;
  voiceData->dataSize = v14;
  if ( v14 )
  {
    for ( j = 0; j < 8; ++j )
    {
      if ( CL_Mgr_IsControllerMappedToClient(j, (LocalClientNum_t *)&outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(j) )
      {
        v16 = 0;
        goto LABEL_45;
      }
    }
    v16 = 0;
    for ( k = 0; k < 200; ++k )
    {
      Party_GetXuid(&outLocalClientNum, party, k);
      if ( (_DWORD)v8 != Live_GetPortForLocalXUID(outLocalClientNum) && Voice_IsMemberTalking(party, k) )
        ++v16;
    }
LABEL_45:
    if ( v16 < Dvar_GetInt_Internal_DebugName(DVARINT_voice_maxTalkersTransmitThreshhold, "voice_maxTalkersTransmitThreshhold") )
    {
      v20 = Sys_Milliseconds();
      v21 = ++v12->voipOutSequenceId;
      v12->lastCaughtTalking = v20;
      voiceData->data[1] = v21;
    }
    else
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_voice_maxTalkersTransmitThreshhold, "voice_maxTalkersTransmitThreshhold");
        Com_Printf(25, "Num talkers has exceeded voice_maxTalkersTransmitThreshhold (%d). Dropping voice packet for local talker %d\n", Int_Internal_DebugName, (unsigned int)clientNum);
      }
      v14 = 0;
      voiceData->dataSize = 0;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_updateTalkStatusWhenMaxTalkersThreshholdExceeded, "voice_updateTalkStatusWhenMaxTalkersThreshholdExceeded") )
      {
        v12->lastCaughtTalking = Sys_Milliseconds();
        Profile_EndInternal(NULL);
        return 0i64;
      }
    }
  }
  Profile_EndInternal(NULL);
  return (unsigned int)v14;
}

/*
==============
Voice_GetRegisteredPlayerCount
==============
*/
__int64 Voice_GetRegisteredPlayerCount(const PartyData *party)
{
  unsigned int v1; 
  int i; 

  v1 = 0;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 785, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsRegisteredForVoice(party, i) )
      ++v1;
  }
  return v1;
}

/*
==============
Voice_GetRegisteredPlayerList
==============
*/
__int64 Voice_GetRegisteredPlayerList(const PartyData *party, XUID *playerList)
{
  unsigned int v2; 
  int i; 
  const XUID *Xuid; 
  XUID result; 

  v2 = 0;
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsRegisteredForVoice(party, i) )
    {
      Xuid = Party_GetXuid(&result, party, i);
      XUID::operator=(&playerList[v2++], Xuid);
    }
  }
  return v2;
}

/*
==============
Voice_GetTalkingCount
==============
*/
__int64 Voice_GetTalkingCount(const PartyData *party, const int localControllerIndex)
{
  unsigned int v2; 
  int i; 
  int j; 
  XUID outLocalClientNum; 

  v2 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, (LocalClientNum_t *)&outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(i) )
      return 0i64;
  }
  for ( j = 0; j < 200; ++j )
  {
    Party_GetXuid(&outLocalClientNum, party, j);
    if ( localControllerIndex != Live_GetPortForLocalXUID(outLocalClientNum) && Voice_IsMemberTalking(party, j) )
      ++v2;
  }
  return v2;
}

/*
==============
Voice_GetVoiceLevel
==============
*/

float __fastcall Voice_GetVoiceLevel(double _XMM0_8)
{
  bool *p_microphoneAttached; 
  int i; 
  int v5; 
  LocalClientNum_t outLocalClientNum; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  p_microphoneAttached = &s_localTalkerInfo[0].microphoneAttached;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsSignedIn(i) )
    {
      v5 = 0;
      while ( !CL_Mgr_IsControllerMappedToClient(v5, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v5) )
      {
        if ( ++v5 >= 8 )
        {
          if ( *p_microphoneAttached )
          {
            _XMM0_8 = VoiceEncode_GetLocalVoiceRms(i);
            __asm { vmaxss  xmm6, xmm0, xmm6 }
          }
          break;
        }
      }
    }
    p_microphoneAttached += 12;
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
Voice_IncomingVoiceData
==============
*/
__int64 Voice_IncomingVoiceData(const PartyData *party, int clientNum, unsigned __int8 *data, int size, LocalClientNum_t localClientNum)
{
  XUID *Xuid; 
  int i; 
  bool IsCoDCasterEnabled; 
  LocalClientNum_t v13; 
  unsigned __int64 PlatformId; 
  unsigned __int64 v15; 
  int ControllerFromClient; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int8 lastInputFrameSeq; 
  char *fmt; 
  __int64 v23; 
  __int64 v24; 
  XUID result; 
  LocalClientNum_t outLocalClientNum; 

  if ( clientNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 850, ASSERT_TYPE_ASSERT, "(clientNum >= 0)", (const char *)&queryFormat, "clientNum >= 0") )
    __debugbreak();
  if ( clientNum >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 851, ASSERT_TYPE_ASSERT, "(clientNum < 200)", (const char *)&queryFormat, "clientNum < MAX_PARTY_MEMBERS") )
    __debugbreak();
  if ( Party_IsRegisteredForVoice(party, clientNum) )
  {
    Xuid = Party_GetXuid(&result, party, clientNum);
    if ( XUID::IsNull(Xuid) )
    {
      Com_Printf(25, "not playing voice data from live-unregistered player\n");
      return 0i64;
    }
    else
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(i) )
          return 0i64;
      }
      IsCoDCasterEnabled = MLG_IsCoDCasterEnabled();
      v13 = localClientNum;
      if ( IsCoDCasterEnabled && MLG_IsLocalPlayerMLGSpectator(localClientNum) && !MLG_ShouldAcceptVoiceDataFromClient(v13, clientNum) )
        return 0i64;
      if ( (unsigned __int8)Party_GetMemberPlatform(party, clientNum) == PLATFORM_IOS )
      {
        PlatformId = Party_GetPlatformId(party, clientNum);
        if ( !GetXB3RemoteVoiceUser(PlatformId) )
        {
          v15 = Party_GetPlatformId(party, clientNum);
          ControllerFromClient = CL_Mgr_GetControllerFromClient(v13);
          RegisterXB3RemoteVoiceUser(party, ControllerFromClient, v15);
        }
      }
      v17 = Voice_PickRemoteTalkerDecoder(clientNum);
      v18 = v17;
      if ( v17 >= 5 )
      {
        LODWORD(v23) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 897, ASSERT_TYPE_ASSERT, "(unsigned)( decoderIndex ) < (unsigned)( 5 )", "decoderIndex doesn't index MAX_VOICE_DECODERS\n\t%i not in [0, %i)", v23, 5) )
          __debugbreak();
      }
      v19 = v18;
      if ( s_remoteTalkerDecoderInfo[v18].clientNum == clientNum )
      {
        lastInputFrameSeq = s_remoteTalkerDecoderInfo[v19].lastInputFrameSeq;
        v20 = (unsigned __int8)(data[1] - lastInputFrameSeq - 1);
        if ( data[1] - lastInputFrameSeq != 1 )
        {
          if ( v20 < 0xA )
          {
            if ( Sys_Milliseconds() - s_remoteTalkerDecoderInfo[v19].lastCaughtTalking <= 2400 )
            {
              LODWORD(v24) = s_remoteTalkerDecoderInfo[v19].lastInputFrameSeq;
              LODWORD(v23) = data[1];
              LODWORD(fmt) = clientNum;
              Com_Printf(25, "Encountered %d frame gaps for voice decoder %d, clientNum %d. (packet seq %d, last %d)\n", v20, (unsigned int)v18, fmt, v23, v24);
            }
            else
            {
              Com_Printf(25, "Resetting voice decoder %d for clientNum %d due to large packet age difference\n", (unsigned int)v18, (unsigned int)clientNum);
              v20 = 0;
              VoiceDecode_ResetDecoder(v18);
            }
          }
          else
          {
            LODWORD(fmt) = (unsigned __int8)(data[1] - lastInputFrameSeq - 1);
            Com_Printf(25, "Resetting voice decoder %d for clientNum %d due to too many lost frames %d\n", (unsigned int)v18, (unsigned int)clientNum, fmt);
            v20 = 0;
            VoiceDecode_ResetDecoder(v18);
          }
        }
      }
      else
      {
        v20 = 0;
        VoiceDecode_ResetDecoder(v18);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
          Com_Printf(25, "Voice decoder %d is being reallocated to clientNum %d\n", (unsigned int)v18, (unsigned int)clientNum);
        s_remoteTalkerDecoderInfo[v19].clientNum = clientNum;
      }
      s_remoteTalkerDecoderInfo[v19].lastInputFrameSeq = data[1];
      if ( size <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 955, ASSERT_TYPE_ASSERT, "(size > NUM_BYTES_NON_VOIP_DATA_HEADER)", (const char *)&queryFormat, "size > NUM_BYTES_NON_VOIP_DATA_HEADER") )
        __debugbreak();
      if ( VoiceDecode_SubmitRemoteVoiceData(v18, data + 2, size - 2, v20) )
      {
        s_remoteTalkerDecoderInfo[v19].lastCaughtTalking = Sys_Milliseconds();
        return (unsigned int)size;
      }
      else
      {
        Com_Printf(25, "Error when submitting voice chat data for clientNum %d.\n", (unsigned int)clientNum);
        return 0i64;
      }
    }
  }
  else
  {
    Com_Printf(25, "Received voice data from player %i, but we don't have a XUID for that player\n", (unsigned int)clientNum);
    return 0i64;
  }
}

/*
==============
Voice_Init
==============
*/
char Voice_Init()
{
  const dvar_t *v0; 

  if ( !SND_Active() )
    return 0;
  Voice_RegisterDvars();
  VoiceCodec_Init();
  if ( !VoiceDecode_Init() || !VoiceEncode_Init() )
    return 0;
  v0 = DVARBOOL_cl_voice;
  s_remoteTalkerDecoderInfo[0].clientNum = -1;
  s_remoteTalkerDecoderInfo[1].clientNum = -1;
  s_remoteTalkerDecoderInfo[2].clientNum = -1;
  s_remoteTalkerDecoderInfo[3].clientNum = -1;
  s_remoteTalkerDecoderInfo[4].clientNum = -1;
  if ( !DVARBOOL_cl_voice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  s_voiceSystemEnabled = v0->current.enabled;
  if ( !s_voiceSystemEnabled )
    SD_OutputEnableUserSystems(0);
  s_voiceSystemInitialized = 1;
  return 1;
}

/*
==============
Voice_IsHeadsetPresent
==============
*/
bool Voice_IsHeadsetPresent(const int localControllerIndex)
{
  __int64 v1; 
  int v2; 
  LocalClientNum_t outLocalClientNum; 

  v1 = localControllerIndex;
  if ( Live_IsSignedIn(localControllerIndex) )
  {
    v2 = 0;
    while ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v2) )
    {
      if ( ++v2 >= 8 )
        return s_localTalkerInfo[v1].microphoneAttached;
    }
  }
  return 0;
}

/*
==============
Voice_IsLocalClientTalking
==============
*/
bool Voice_IsLocalClientTalking(const PartyData *party, const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  bool IsSignedIn; 
  int v5; 
  unsigned __int64 m_id; 
  int User; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  IsSignedIn = Live_IsSignedIn(ControllerFromClient);
  if ( IsSignedIn )
  {
    v5 = 0;
    m_id = Live_GetXuid(&result, ControllerFromClient)->m_id;
    while ( !CL_Mgr_IsControllerMappedToClient(v5, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v5) )
    {
      if ( ++v5 >= 8 )
      {
        User = Voice_FindUser(party, (const XUID)m_id);
        if ( User >= 0 )
          return Voice_IsMemberTalking(party, User);
        return 0;
      }
    }
    return 0;
  }
  return IsSignedIn;
}

/*
==============
Voice_IsMemberMuted
==============
*/
bool Voice_IsMemberMuted(const PartyData *party, const int localControllerIndex, const int memberIndex)
{
  char MemberPlatform; 
  bool v7; 
  unsigned __int64 PlatformId; 
  unsigned int v9; 
  XB3RemoteVoiceUser *v10; 
  char v11; 
  unsigned __int64 v12; 
  bool PrivacySettingsForUser; 
  bool IsMuted; 
  XUID result; 

  if ( !Party_IsMemberIndexDataAvailable(party, memberIndex) )
  {
LABEL_15:
    IsMuted = Party_IsMuted(party, memberIndex);
    if ( !IsMuted )
      return IsMuted;
    return 1;
  }
  MemberPlatform = Party_GetMemberPlatform(party, memberIndex);
  v7 = MemberPlatform == (char)GetClientPlatform();
  PlatformId = Party_GetPlatformId(party, memberIndex);
  if ( !PlatformId )
    goto LABEL_6;
  v9 = 0;
  v10 = s_xb3RemoteVoiceUsers;
  while ( v10->platformId != PlatformId )
  {
    ++v9;
    ++v10;
    if ( v9 >= 0xC8 )
      goto LABEL_6;
  }
  if ( v10->isGloballyMuted )
    v11 = 1;
  else
LABEL_6:
    v11 = 0;
  if ( v7 )
  {
    v12 = Party_GetPlatformId(party, memberIndex);
    if ( v11 )
      return 1;
    PrivacySettingsForUser = XB3_Privacy_GetPrivacySettingsForUser(localControllerIndex, v12, PERMISSION_COMMUNICATION);
  }
  else
  {
    Party_GetXuid(&result, party, memberIndex);
    if ( v11 )
      return 1;
    PrivacySettingsForUser = XB3_Privacy_CanCommunicateWithCrossplayUser(localControllerIndex, result);
  }
  if ( PrivacySettingsForUser )
    goto LABEL_15;
  return 1;
}

/*
==============
Voice_IsMemberTalking
==============
*/
bool Voice_IsMemberTalking(const PartyData *party, const int memberIndex)
{
  __int64 v4; 
  int i; 
  int PortForLocalXUID; 
  int v7; 
  RemoteTalkerDecoderInfo *j; 
  int lastCaughtTalking; 
  __int64 v11; 
  XUID result; 
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1070, ASSERT_TYPE_ASSERT, "(party != nullptr)", (const char *)&queryFormat, "party != nullptr") )
    __debugbreak();
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    LODWORD(v11) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1071, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, 200) )
      __debugbreak();
  }
  v4 = 0i64;
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(i) )
      return 0;
  }
  if ( !Party_IsMemberPresent(party, memberIndex) || !Party_IsRegisteredForVoice(party, memberIndex) )
    return 0;
  Party_GetXuid(&result, party, memberIndex);
  PortForLocalXUID = Live_GetPortForLocalXUID(result);
  if ( PortForLocalXUID == -1 )
  {
    for ( j = s_remoteTalkerDecoderInfo; j->clientNum != memberIndex; ++j )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 5 )
        return 0;
    }
    lastCaughtTalking = s_remoteTalkerDecoderInfo[v4].lastCaughtTalking;
    return Sys_Milliseconds() - lastCaughtTalking < 250;
  }
  else
  {
    v7 = s_localTalkerInfo[PortForLocalXUID].lastCaughtTalking;
    return Sys_Milliseconds() - v7 < 250;
  }
}

/*
==============
Voice_IsMemberUnmutable
==============
*/
bool Voice_IsMemberUnmutable(const PartyData *party, const int localControllerIndex, const int memberIndex)
{
  unsigned __int64 PlatformId; 
  int v6; 
  XB3RemoteVoiceUser *i; 

  if ( !Party_IsMemberIndexDataAvailable(party, memberIndex) )
    return 1;
  PlatformId = Party_GetPlatformId(party, memberIndex);
  if ( !PlatformId )
    return 1;
  v6 = 0;
  for ( i = s_xb3RemoteVoiceUsers; i->platformId != PlatformId; ++i )
  {
    if ( (unsigned int)++v6 >= 0xC8 )
      return 1;
  }
  return !i->isGloballyMuted;
}

/*
==============
Voice_IsXB3GloballyMuted
==============
*/
bool Voice_IsXB3GloballyMuted(const unsigned __int64 platformId)
{
  int v1; 
  XB3RemoteVoiceUser *i; 

  if ( !platformId )
    return 0;
  v1 = 0;
  for ( i = s_xb3RemoteVoiceUsers; i->platformId != platformId; ++i )
  {
    if ( (unsigned int)++v1 >= 0xC8 )
      return 0;
  }
  return i->isGloballyMuted;
}

/*
==============
Voice_IsXuidTalking
==============
*/
bool Voice_IsXuidTalking(const PartyData *party, const XUID xuid)
{
  int i; 
  int User; 
  LocalClientNum_t outLocalClientNum; 

  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(i) )
      return 0;
  }
  User = Voice_FindUser(party, xuid);
  if ( User < 0 )
    return 0;
  return Voice_IsMemberTalking(party, User);
}

/*
==============
Voice_LocalTalkerInfoForClientNum
==============
*/
LocalTalkerInfo *Voice_LocalTalkerInfoForClientNum(const PartyData *party, const int clientNum)
{
  int PortForLocalXUID; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 291, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsMemberRegistered(party, clientNum) )
    Party_GetXuid(&result, party, clientNum);
  else
    XUID::NullXUID(&result);
  if ( !XUID::IsValid(&result) )
    return 0i64;
  PortForLocalXUID = Live_GetPortForLocalXUID(result);
  if ( PortForLocalXUID == -1 )
    return 0i64;
  else
    return &s_localTalkerInfo[PortForLocalXUID];
}

/*
==============
Voice_MuteMember
==============
*/
void Voice_MuteMember(PartyData *party, const int clientNum)
{
  XUID result; 

  Party_SetMuted(party, clientNum, 1);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 291, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsMemberRegistered(party, clientNum) )
    Party_GetXuid(&result, party, clientNum);
  else
    XUID::NullXUID(&result);
  if ( !XUID::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1313, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  VoiceMute_AddUser(result);
}

/*
==============
Voice_PickRemoteTalkerDecoder
==============
*/
__int64 Voice_PickRemoteTalkerDecoder(const int clientNum)
{
  unsigned int v1; 
  unsigned int v2; 
  RemoteTalkerDecoderInfo *v3; 
  unsigned int v5; 
  RemoteTalkerDecoderInfo *v6; 
  int *p_lastCaughtTalking; 
  int v8; 
  int i; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  bool v20; 
  int v21; 
  int v22; 
  int v23; 
  const dvar_t *v24; 
  char *fmt; 

  v1 = 0;
  v2 = 0;
  v3 = s_remoteTalkerDecoderInfo;
  do
  {
    if ( v3->clientNum == clientNum )
      return v2;
    ++v2;
    ++v3;
  }
  while ( (__int64)v3 < (__int64)&s_maxPacketSize );
  v5 = 0;
  v6 = s_remoteTalkerDecoderInfo;
  do
  {
    if ( v6->clientNum == -1 )
      return v5;
    ++v5;
    ++v6;
  }
  while ( (__int64)v6 < (__int64)&s_maxPacketSize );
  p_lastCaughtTalking = &s_remoteTalkerDecoderInfo[1].lastCaughtTalking;
  v8 = 0x7FFFFFFF;
  for ( i = 0; i < 5; i += 5 )
  {
    v10 = *(p_lastCaughtTalking - 3);
    v11 = *p_lastCaughtTalking;
    v12 = v10;
    v13 = p_lastCaughtTalking[3];
    if ( v10 >= v8 )
      v12 = v8;
    v14 = p_lastCaughtTalking[6];
    v15 = p_lastCaughtTalking[9];
    p_lastCaughtTalking += 15;
    v16 = i;
    v17 = v11;
    if ( v11 >= v12 )
      v17 = v12;
    v18 = v13;
    v19 = v14;
    if ( v13 >= v17 )
      v18 = v17;
    if ( v14 >= v18 )
      v19 = v18;
    v20 = v10 < v8;
    v21 = i + 1;
    v8 = v15;
    if ( !v20 )
      v16 = v1;
    v1 = i + 4;
    if ( v11 >= v12 )
      v21 = v16;
    v22 = i + 2;
    if ( v13 >= v17 )
      v22 = v21;
    v23 = i + 3;
    if ( v14 >= v18 )
      v23 = v22;
    if ( v15 >= v19 )
      v1 = v23;
    if ( v15 >= v19 )
      v8 = v19;
  }
  v24 = DVARBOOL_voice_debug;
  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.enabled )
  {
    LODWORD(fmt) = s_remoteTalkerDecoderInfo[v1].clientNum;
    Com_Printf(25, "Stealing voice decoder %d for clientNum %d. Was clientNum %d\n", v1, (unsigned int)clientNum, fmt);
  }
  return v1;
}

/*
==============
Voice_Playback
==============
*/
void Voice_Playback(void)
{
  ;
}

/*
==============
Voice_PlaybackStop
==============
*/
void Voice_PlaybackStop(void)
{
  ;
}

/*
==============
Voice_RegisterDvars
==============
*/
void Voice_RegisterDvars()
{
  const dvar_t *v8; 
  const dvar_t *v12; 
  const dvar_t *v16; 
  const dvar_t *v20; 
  const dvar_t *v25; 
  const dvar_t *v33; 
  const dvar_t *v37; 
  const dvar_t *v41; 
  const dvar_t *v45; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; value
    vmovss  xmm3, cs:__real@44160000; max
  }
  DVARBOOL_voice_mic_mute = Dvar_RegisterBool("NMOLNNPOST", 0, 0, "Mute the microphone");
  __asm
  {
    vmovaps xmm2, xmm1; min
    vmovss  xmm6, cs:__real@47800000
  }
  DVARFLT_voice_mic_inactivityMuteDelay = Dvar_RegisterFloat("LKPLLLNTNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Mute the microphone after this many seconds of in-game input inactivity (-1 to disable)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v8 = Dvar_RegisterFloat("OSONRTTPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone recording level");
  __asm { vmovss  xmm1, cs:__real@450186e2; value }
  DVARFLT_voice_mic_reclevel = v8;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v12 = Dvar_RegisterFloat("MSKKKMTQNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone voice threshold (normal)");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@3fff64c1; value
  }
  DVARFLT_voice_mic_threshold = v12;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v16 = Dvar_RegisterFloat("MMPQRNNTSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone voice threshold (aggressive, multiplied with voice_mic_threshold at runtime)");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@40fe2f5e; value
  }
  DVARFLT_voice_mic_threshold_aggressive = v16;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v20 = Dvar_RegisterFloat("MSPQRMTSTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone voice threshold for detecting loud talking, multiplied with voice_mic_threshold at runtime");
  __asm
  {
    vmovss  xmm6, cs:__real@43960000
    vmovss  xmm1, cs:__real@41700000; value
  }
  DVARFLT_voice_mic_threshold_loud = v20;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v25 = Dvar_RegisterFloat("LQQKKSNPNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone amount of continuous talk time before we switch to aggressive voice threshold");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DVARFLT_voice_mic_aggressiveInTime = v25;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_voice_mic_aggressiveOutTime = Dvar_RegisterFloat("SKKNQTSPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone amount of continuous mute time before we switch to normal voice threshold");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm6, cs:__real@40a00000
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v33 = Dvar_RegisterFloat("MPRRTSLLNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "After loud talking detected, use aggressive voice threshold for this long to prevent possible audio feedback (seconds)");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_voice_mic_postLoudAggressiveTime = v33;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v37 = Dvar_RegisterFloat("OMONSMLKMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone voice amount of silence before we cut the mic (after normal talking)");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_voice_mic_outTime = v37;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v41 = Dvar_RegisterFloat("NLNMRQRSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone voice amount of silence before we cut the mic (after loud talking)");
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; max
    vmovss  xmm1, cs:__real@3f800000; value
  }
  DVARFLT_voice_mic_outTimeLoud = v41;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v45 = Dvar_RegisterFloat("LRTMQRTPLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Microphone scaler value");
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; max
    vmovss  xmm1, cs:__real@3f800000; value
  }
  DVARFLT_voice_mic_scaler = v45;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_voice_output_scaler = Dvar_RegisterFloat("MPQSQTNRNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Remote voice scaler value");
  DVARBOOL_voice_agc = Dvar_RegisterBool("NSPSRQONRN", 1, 0, "Use microphone Automatic Gain Control");
  DVARBOOL_voice_loopback = Dvar_RegisterBool("LNKRTSKLT", 0, 0, "Echo microphone input locally");
  DVARBOOL_voice_test_tone = Dvar_RegisterBool("NNQQMLKMOT", 0, 0, "Generates a continuous tone to the voice encoder");
  DVARINT_voice_maxVoicePacketsPerSec = Dvar_RegisterInt("SMPPQTSMN", 100, 0, 0x7FFFFFFF, 0, "Max voice packets per second a client will send");
  DVARINT_voice_maxVoicePacketsPerSecForServer = Dvar_RegisterInt("LONTRSOSTR", 100, 0, 0x7FFFFFFF, 0, "Max voice packets per second the listen server will send");
  DVARINT_voice_transmitInterval = Dvar_RegisterInt("LOKNMMPRKT", 0, 0, 0x7FFFFFFF, 0, "How often the client will transmit voice packets");
  DVARINT_voice_packetDecodePrebufferCount = Dvar_RegisterInt("MNTSRLRPQO", 5, 1, 40, 0, "How many packets the receiving client will buffer before starting decode");
  DVARINT_voice_maxTalkersTransmitThreshhold = Dvar_RegisterInt("NRNSQKTKTP", 5, 1, 200, 0, "How many talkers can be active before we no longer allow a local talker to transmit");
  DVARBOOL_voice_updateTalkStatusWhenMaxTalkersThreshholdExceeded = Dvar_RegisterBool("LOPLNPRKMP", 0, 0, "Should the UI display the local talker chat icon when the max talker threshhold is exceeded?");
  DVARBOOL_voice_degrade = Dvar_RegisterBool("MKORMLTOKO", 0, 0, "Degrade voice quality");
  DVARBOOL_voice_debug = Dvar_RegisterBool("NROTRKMLKL", 0, 0, "Debug voice communication");
  DCONST_DVARBOOL_voice_record_input = Dvar_RegisterBool("voice_record_input", 0, 0x40004u, "Save encoded mic data to a file");
  DCONST_DVARSTR_voice_replay_recording = Dvar_RegisterString("voice_replay_recording", (const char *)&queryFormat.fmt + 3, 0x40004u, "Name of recording file to replay");
  DCONST_DVARBOOL_voice_drawDebug = Dvar_RegisterBool("voice_drawDebug", 0, 0x40004u, "Draws debug voice communication overlay");
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  Dvar_EndPermanentRegistration();
}

/*
==============
Voice_RegisterRemotePlayer
==============
*/
char Voice_RegisterRemotePlayer(PartyData *party, const int localControllerIndex, const int clientNum)
{
  __int64 v4; 
  const char *v7; 
  int User; 
  const char *v9; 
  int v10; 
  const char *v11; 
  LocalTalkerInfo *v12; 
  const char *v13; 
  int PortForLocalXUID; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  const char *v20; 
  XUID *Xuid; 
  const char *v22; 
  XUID *v23; 
  const char *v24; 
  const char *v25; 
  bool v26; 
  MuteStrategy MuteStrategy; 
  unsigned __int64 PlatformId; 
  char *fmt; 
  XUID result; 
  XUID v31; 
  XUID v32; 
  LocalClientNum_t outLocalClientNum; 

  v4 = clientNum;
  if ( !s_voiceSystemInitialized )
  {
    Com_PrintWarning(25, "Voice_Init has not been called.\n");
    return 0;
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 515, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsRegisteredForVoice(party, v4) )
  {
    Com_Printf(25, "Skipping VOICE registration for clientNum %i because player is already registered.\n", (unsigned int)v4);
    return 0;
  }
  Party_GetXuid(&result, party, v4);
  if ( !XUID::IsValid(&result) )
  {
    v7 = XUID::ToDevString(&result);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 524, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", "%s\n\tXUID is %s", "xuid.IsValid()", v7) )
      __debugbreak();
  }
  if ( XUID::IsNull(&result) )
    return 0;
  User = Voice_FindUser(party, result);
  if ( User != (_DWORD)v4 )
  {
    if ( User >= 0 )
    {
      v10 = Voice_FindUser(party, result);
      v11 = XUID::ToDevString(&result);
      LODWORD(fmt) = v10;
      Com_Printf(25, "Went to add xuid %s in voice clientNum %i, but they appear to be registered with voice already in clientNum %i\n", v11, (unsigned int)v4, fmt);
    }
    if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 547, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
      __debugbreak();
    while ( 1 )
    {
      if ( ((unsigned __int64)&s_voiceRegistrationLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_voiceRegistrationLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(&s_voiceRegistrationLock, 1, 0) )
        break;
      Sys_Sleep(1);
    }
    v12 = Voice_LocalTalkerInfoForClientNum(party, v4);
    if ( v12 )
      v12->microphoneAttached = 0;
    v13 = XUID::ToDevString(&result);
    LODWORD(fmt) = v4;
    Com_Printf(25, "[%s] Registering XUID %s with voice at clientNum %i\n", party->partyName, v13, fmt);
    if ( Live_XUIDIsLocalPlayer(result) && (party != &g_partyData || Party_InParty(&g_partyData) || Live_IsDevmapping()) )
    {
      PortForLocalXUID = Live_GetPortForLocalXUID(result);
      v15 = PortForLocalXUID;
      v16 = 12i64 * PortForLocalXUID;
      v17 = v16 + (int)party->partyId;
      if ( s_localTalkerInfo[0].enabled[v17] )
      {
        s_localTalkerInfo[0].enabled[v17] = 0;
        Com_Printf(25, "Disabling local mic (controller %i) for party %s\n", (unsigned int)PortForLocalXUID, party->partyName);
      }
      v18 = 0;
      while ( !CL_Mgr_IsControllerMappedToClient(v18, &outLocalClientNum) || Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v18) )
      {
        if ( ++v18 >= 8 )
        {
          v19 = v16 + (int)party->partyId;
          if ( !s_localTalkerInfo[0].enabled[v19] )
          {
            s_localTalkerInfo[0].enabled[v19] = 1;
            Com_Printf(25, "Enabling local mic ( controller %i) for party %s\n", v15, party->partyName);
          }
          break;
        }
      }
    }
    if ( Party_IsMemberLocalPlayer(party, v4) && !Voice_AllocateLocalTalkerInfo(party, v4) )
    {
      v20 = XUID::ToDevString(&result);
      Com_PrintError(25, "Voice_AllocateLocalTalkerInfo failed to register local player %s in clientNum %d\n", v20, (unsigned int)v4);
    }
    if ( Party_IsRegisteredForVoice(party, v4) )
    {
      if ( party->partyMembers[v4].voiceRegistered )
      {
        Xuid = Party_GetXuid(&v31, party, v4);
        v22 = XUID::ToDevString(Xuid);
      }
      else
      {
        v22 = NULL;
      }
      v23 = Party_GetXuid(&v32, party, v4);
      v24 = XUID::ToDevString(v23);
      v25 = XUID::ToDevString(&result);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 579, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( party, clientNum ))", "%s\n\tTrying to add %s in clientNum %i, but XUID %s is already there, and XUID %s is in the party clientNum", "!Party_IsRegisteredForVoice( party, clientNum )", v25, v4, v24, v22) )
        __debugbreak();
    }
    Party_RegisterVoice(party, v4);
    if ( !s_voiceRegistrationLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 586, ASSERT_TYPE_ASSERT, "(s_voiceRegistrationLock != 0)", (const char *)&queryFormat, "s_voiceRegistrationLock != 0") )
      __debugbreak();
    s_voiceRegistrationLock = 0;
    if ( VoiceMute_QueryAndRefreshUserStatus(result) )
    {
      v26 = 1;
      goto LABEL_64;
    }
    if ( !Live_XUIDIsLocalPlayer(result) )
    {
      MuteStrategy = CL_GetMuteStrategy(localControllerIndex);
      if ( MuteStrategy == MuteStrategyMuteAll )
      {
        v26 = 1;
        goto LABEL_64;
      }
      if ( MuteStrategy == MuteStrategyMuteAllButParty )
      {
        if ( !Party_IsPlayerInPrivateParty(result) )
        {
          v26 = 1;
          goto LABEL_64;
        }
      }
      else if ( MuteStrategy == MuteStrategyMuteAllButFriends && !Live_IsClientAFriendOfAnyLocalPlayer(party, v4) )
      {
        v26 = 1;
        goto LABEL_64;
      }
    }
    v26 = 0;
LABEL_64:
    Party_SetMuted(party, v4, v26);
    if ( (unsigned __int8)Party_GetMemberPlatform(party, v4) == PLATFORM_IOS )
    {
      PlatformId = Party_GetPlatformId(party, v4);
      RegisterXB3RemoteVoiceUser(party, localControllerIndex, PlatformId);
    }
    return 1;
  }
  v9 = XUID::ToDevString(&result);
  Com_Printf(25, "Went to add xuid %s in voice clientNum %i, but they're already in that clientNum", v9, (unsigned int)v4);
  return 1;
}

/*
==============
Voice_SetAllFriendFlags
==============
*/
void Voice_SetAllFriendFlags(PartyData *party)
{
  ;
}

/*
==============
Voice_SetIsMicrophoneAttached
==============
*/
void Voice_SetIsMicrophoneAttached(int localControllerIndex, bool attached)
{
  __int64 v2; 
  int v5; 

  v2 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 393, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_localTalkerInfo ) ) + 0 ) )", "localControllerIndex doesn't index ARRAY_COUNT( s_localTalkerInfo )\n\t%i not in [0, %i)", localControllerIndex, v5) )
      __debugbreak();
  }
  s_localTalkerInfo[v2].microphoneAttached = attached;
}

/*
==============
Voice_Shutdown
==============
*/
void Voice_Shutdown(void)
{
  if ( s_voiceSystemInitialized )
  {
    VoiceEncode_Shutdown();
    VoiceDecode_Shutdown();
    VoiceCodec_Shutdown();
    s_voiceSystemInitialized = 0;
  }
}

/*
==============
Voice_UnmuteMember
==============
*/
void Voice_UnmuteMember(PartyData *party, const int clientNum)
{
  XUID result; 

  Party_SetMuted(party, clientNum, 0);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 291, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsMemberRegistered(party, clientNum) )
    Party_GetXuid(&result, party, clientNum);
  else
    XUID::NullXUID(&result);
  if ( !XUID::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1325, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  VoiceMute_RemoveUser(result);
}

/*
==============
Voice_UnregisterRemotePlayer
==============
*/
bool Voice_UnregisterRemotePlayer(PartyData *party, const int clientNum)
{
  bool IsRegisteredForVoice; 
  LocalTalkerInfo *v5; 
  LocalTalkerInfo *v6; 
  const char *v7; 
  const XUID *Xuid; 
  unsigned int PortForLocalXUID; 
  signed int i; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned __int64 PlatformId; 
  int v17; 
  XB3RemoteVoiceUser *j; 
  int v19; 
  __int64 v20; 
  XUID result; 
  XUID v22; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 682, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  IsRegisteredForVoice = Party_IsRegisteredForVoice(party, clientNum);
  if ( IsRegisteredForVoice )
  {
    if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 692, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
      __debugbreak();
    while ( 1 )
    {
      if ( ((unsigned __int64)&s_voiceRegistrationLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_voiceRegistrationLock) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(&s_voiceRegistrationLock, 1, 0) )
        break;
      Sys_Sleep(1);
    }
    if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 700, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
      __debugbreak();
    Party_UnRegisterVoice(party, clientNum);
    v5 = Voice_LocalTalkerInfoForClientNum(party, clientNum);
    v6 = v5;
    if ( v5 && v5->allocated )
    {
      Party_GetXuid(&result, party, clientNum);
      if ( Party_IsRegisteredForVoiceInAnyParty(result) )
      {
        v7 = XUID::ToDevString(&result);
        Com_Printf(25, "%s skipping for %s since still registered for voice in a party\n", "Voice_DeAllocateLocalTalkerInfo", v7);
      }
      else
      {
        Xuid = Party_GetXuid(&v22, party, clientNum);
        PortForLocalXUID = Live_GetPortForLocalXUID((const XUID)Xuid->m_id);
        if ( PortForLocalXUID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 468, ASSERT_TYPE_ASSERT, "(localControllerIndex != (-1))", (const char *)&queryFormat, "localControllerIndex != INVALID_CONTROLLER_PORT") )
          __debugbreak();
        Com_Printf(25, "Voice_DeAllocateLocalTalkerInfo for party %s controller %d\n", party->partyName, PortForLocalXUID);
        if ( PortForLocalXUID >= 8 )
        {
          LODWORD(v20) = PortForLocalXUID;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( voiceBus ) < (unsigned)( SND_VOICE_BUS_COUNT )", "voiceBus doesn't index SND_VOICE_BUS_COUNT\n\t%i not in [0, %i)", v20, 8) )
            __debugbreak();
        }
        for ( i = 0; i < 5; ++i )
        {
          if ( !VoiceDecode_RemoveOutputBus(i, PortForLocalXUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 481, ASSERT_TYPE_ASSERT, "(ret)", (const char *)&queryFormat, "ret") )
            __debugbreak();
        }
        VoiceDecode_FutzDelete(PortForLocalXUID);
        VoiceEncode_FreeEncoder(PortForLocalXUID);
        v6->allocated = 0;
      }
    }
    v11 = s_remoteTalkerDecoderInfo[0].clientNum;
    if ( s_remoteTalkerDecoderInfo[0].clientNum == clientNum )
      v11 = -1;
    s_remoteTalkerDecoderInfo[0].clientNum = v11;
    v12 = s_remoteTalkerDecoderInfo[1].clientNum;
    if ( s_remoteTalkerDecoderInfo[1].clientNum == clientNum )
      v12 = -1;
    s_remoteTalkerDecoderInfo[1].clientNum = v12;
    v13 = s_remoteTalkerDecoderInfo[2].clientNum;
    if ( s_remoteTalkerDecoderInfo[2].clientNum == clientNum )
      v13 = -1;
    s_remoteTalkerDecoderInfo[2].clientNum = v13;
    v14 = s_remoteTalkerDecoderInfo[3].clientNum;
    if ( s_remoteTalkerDecoderInfo[3].clientNum == clientNum )
      v14 = -1;
    s_remoteTalkerDecoderInfo[3].clientNum = v14;
    v15 = s_remoteTalkerDecoderInfo[4].clientNum;
    if ( s_remoteTalkerDecoderInfo[4].clientNum == clientNum )
      v15 = -1;
    s_remoteTalkerDecoderInfo[4].clientNum = v15;
    if ( !s_voiceRegistrationLock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 717, ASSERT_TYPE_ASSERT, "(s_voiceRegistrationLock != 0)", (const char *)&queryFormat, "s_voiceRegistrationLock != 0") )
      __debugbreak();
    s_voiceRegistrationLock = 0;
    if ( (unsigned __int8)Party_GetMemberPlatform(party, clientNum) == PLATFORM_IOS )
    {
      PlatformId = Party_GetPlatformId(party, clientNum);
      if ( PlatformId )
      {
        v17 = 0;
        for ( j = s_xb3RemoteVoiceUsers; j->platformId != PlatformId; ++j )
        {
          if ( (unsigned int)++v17 >= 0xC8 )
            return 1;
        }
        v19 = j->activePartyBits & ~(1 << party->partyId);
        j->activePartyBits = v19;
        if ( !(_BYTE)v19 )
        {
          j->isGloballyMuted = 0;
          j->platformId = 0i64;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice.cpp", 1443, ASSERT_TYPE_ASSERT, "(platformId != 0)", (const char *)&queryFormat, "platformId != 0") )
      {
        __debugbreak();
        return 1;
      }
    }
    return 1;
  }
  return IsRegisteredForVoice;
}

/*
==============
Voice_Update
==============
*/
void Voice_Update(int controllerIndex)
{
  ;
}

/*
==============
Voice_UpdateVoiceThreshold
==============
*/
void Voice_UpdateVoiceThreshold(float deltaTime)
{
  ;
}

/*
==============
Voice_XB3MutePlayer
==============
*/
void Voice_XB3MutePlayer(const unsigned __int64 platformId)
{
  int v1; 
  XB3RemoteVoiceUser *i; 

  if ( platformId )
  {
    v1 = 0;
    for ( i = s_xb3RemoteVoiceUsers; i->platformId != platformId; ++i )
    {
      if ( (unsigned int)++v1 >= 0xC8 )
        return;
    }
    i->isGloballyMuted = 1;
  }
}

