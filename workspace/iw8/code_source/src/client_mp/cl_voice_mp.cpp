/*
==============
CL_MutePlayer
==============
*/

void __fastcall CL_MutePlayer(PartyData *party, const int muteClientIndex)
{
  ?CL_MutePlayer@@YAXPEAUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_IsPlayerTalking
==============
*/

bool __fastcall CL_IsPlayerTalking(const PartyData *party, const int talkingClientIndex)
{
  return ?CL_IsPlayerTalking@@YA_NPEBUPartyData@@H@Z(party, talkingClientIndex);
}

/*
==============
CL_TogglePlayerMute
==============
*/

void __fastcall CL_TogglePlayerMute(PartyData *party, const int muteClientIndex)
{
  ?CL_TogglePlayerMute@@YAXPEAUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_UnmutePlayer
==============
*/

void __fastcall CL_UnmutePlayer(PartyData *party, const int muteClientIndex)
{
  ?CL_UnmutePlayer@@YAXPEAUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_GetMuteStrategy
==============
*/

MuteStrategy __fastcall CL_GetMuteStrategy(const int controllerIndex)
{
  return ?CL_GetMuteStrategy@@YA?AW4MuteStrategy@@H@Z(controllerIndex);
}

/*
==============
CL_MuteAllPlayers
==============
*/

void __fastcall CL_MuteAllPlayers(PartyData *party)
{
  ?CL_MuteAllPlayers@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
CL_ClearMutedList
==============
*/

void __fastcall CL_ClearMutedList(PartyData *party)
{
  ?CL_ClearMutedList@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
CL_VoiceFrame
==============
*/

void __fastcall CL_VoiceFrame(LocalClientNum_t localClientNum)
{
  ?CL_VoiceFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_WriteVoicePacket
==============
*/

void __fastcall CL_WriteVoicePacket(LocalClientNum_t localClientNum)
{
  ?CL_WriteVoicePacket@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ResetPlayerMuting
==============
*/

void __fastcall CL_ResetPlayerMuting(PartyData *party, const int muteClientIndex)
{
  ?CL_ResetPlayerMuting@@YAXPEAUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_MuteAllPlayersButParty
==============
*/

void __fastcall CL_MuteAllPlayersButParty(PartyData *party)
{
  ?CL_MuteAllPlayersButParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
CL_VoiceTransmit
==============
*/

int __fastcall CL_VoiceTransmit(LocalClientNum_t localClientNum)
{
  return ?CL_VoiceTransmit@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_SetMuteStrategy
==============
*/

void __fastcall CL_SetMuteStrategy(const int controllerIndex, const MuteStrategy muteStrategy)
{
  ?CL_SetMuteStrategy@@YAXHW4MuteStrategy@@@Z(controllerIndex, muteStrategy);
}

/*
==============
CL_CanChangePlayerMute
==============
*/

bool __fastcall CL_CanChangePlayerMute(const PartyData *party, const int muteClientIndex)
{
  return ?CL_CanChangePlayerMute@@YA_NPEBUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_IsPlayerMuted
==============
*/

bool __fastcall CL_IsPlayerMuted(const PartyData *party, const int muteClientIndex)
{
  return ?CL_IsPlayerMuted@@YA_NPEBUPartyData@@H@Z(party, muteClientIndex);
}

/*
==============
CL_MuteAllPlayersButFriends
==============
*/

void __fastcall CL_MuteAllPlayersButFriends(PartyData *party)
{
  ?CL_MuteAllPlayersButFriends@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
CL_UnmuteAllPlayers
==============
*/

void __fastcall CL_UnmuteAllPlayers(PartyData *party, const int controllerIndex)
{
  ?CL_UnmuteAllPlayers@@YAXPEAUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
CL_AreAllPlayersMuted
==============
*/

bool __fastcall CL_AreAllPlayersMuted(const PartyData *party, const int controllerIndex)
{
  return ?CL_AreAllPlayersMuted@@YA_NPEBUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
CL_AreAllPlayersMuted
==============
*/
char CL_AreAllPlayersMuted(const PartyData *party, const int controllerIndex)
{
  unsigned int v2; 
  int VoiceMuteStrategy; 
  int v7; 
  const XUID *Xuid; 
  int PortForLocalXUID; 
  int v10; 
  int v11; 
  Online_BlockList *Instance; 
  OnlineUserLists *v13; 
  __int64 v14; 
  __int64 v15; 
  UserList::User *userOut; 
  XUID v17; 
  XUID player; 
  XUID result; 

  v2 = 0;
  while ( 1 )
  {
    if ( !Party_IsMemberRegistered(party, v2) || Party_IsMemberLocalPlayer(party, v2) )
      goto LABEL_6;
    VoiceMuteStrategy = GamerProfile_GetVoiceMuteStrategy(controllerIndex);
    if ( VoiceMuteStrategy != 2 )
      break;
    Party_GetXuid(&result, party, v2);
    if ( !Party_IsPlayerInPrivateParty(result) )
      goto LABEL_12;
LABEL_6:
    if ( (int)++v2 >= 200 )
      return 1;
  }
  if ( VoiceMuteStrategy == 3 )
  {
    v7 = 0;
    while ( !Live_IsClientAFriend(v7, party, v2) )
    {
      if ( ++v7 >= 8 )
        goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  XUID::XUID(&player);
  if ( v2 >= 0xC8 )
  {
    LODWORD(v15) = 200;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( muteClientIndex ) < (unsigned)( 200 )", "muteClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 626, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  Xuid = Party_GetXuid(&v17, party, v2);
  XUID::operator=(&player, Xuid);
  if ( !XUID::IsNull(&player) )
  {
    PortForLocalXUID = Live_GetPortForLocalXUID(player);
    v10 = PortForLocalXUID;
    if ( PortForLocalXUID < 0 || Live_IsSignedIn(PortForLocalXUID) && !Live_UserIsGuest(v10) )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( Live_IsSignedIn(v11) )
        {
          if ( Voice_IsMemberMuted(party, v11, v2) )
            break;
          Instance = Online_BlockList::GetInstance();
          if ( Online_BlockList::IsBlocked(Instance, v11, player) )
            break;
          userOut = NULL;
          v13 = OnlineUserLists::GetInstance();
          if ( OnlineUserLists::GetUserByXUID(v13, v11, COUNT, player, (const UserList::User **)&userOut) )
            break;
        }
        if ( ++v11 >= 8 )
          return 0;
      }
    }
    goto LABEL_6;
  }
  return 0;
}

/*
==============
CL_AssembleVoicePacket
==============
*/
void CL_AssembleVoicePacket(const PartyData *party, LocalClientNum_t localClientNum, const voiceCommunication_t *vc, int voicePacketCount, bitarray<256> *relayBits, msg_t *msg)
{
  int v8; 
  int ControllerFromClient; 
  __int64 OurClientNum; 
  int v11; 
  int v12; 
  int *p_dataSize; 
  const dvar_t *v14; 
  __int64 v15; 

  v8 = voicePacketCount;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
  MSG_WriteString(msg, "v");
  MSG_WriteByte(msg, OurClientNum);
  MSG_WriteData(msg, relayBits, 32);
  MSG_WriteByte(msg, (unsigned __int8)v8);
  if ( msg->cursize != 36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 104, ASSERT_TYPE_ASSERT, "(msg->cursize == 36)", (const char *)&queryFormat, "msg->cursize == VOICE_PACKET_HEADER_SIZE") )
    __debugbreak();
  v11 = 0;
  v12 = 0;
  if ( vc->voicePacketCount > 0 )
  {
    p_dataSize = &vc->voicePackets[0].dataSize;
    do
    {
      if ( (*((_BYTE *)p_dataSize - 127) & 1) == 0 )
        goto LABEL_25;
      v14 = DVARBOOL_voice_degrade;
      if ( !DVARBOOL_voice_degrade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_degrade") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( !v14->current.enabled )
      {
LABEL_25:
        if ( *p_dataSize != *((unsigned __int8 *)p_dataSize - 128) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 118, ASSERT_TYPE_ASSERT, "(vc->voicePackets[voicePacket].dataSize == vc->voicePackets[voicePacket].data[0])", (const char *)&queryFormat, "vc->voicePackets[voicePacket].dataSize == vc->voicePackets[voicePacket].data[0]") )
          __debugbreak();
        if ( *p_dataSize > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(vc->voicePackets[voicePacket].dataSize <= 0xFF)", (const char *)&queryFormat, "vc->voicePackets[voicePacket].dataSize <= 0xFF") )
          __debugbreak();
        MSG_WriteData(msg, &vc->voicePackets[v12], *p_dataSize);
        ++v11;
      }
      ++v12;
      p_dataSize += 33;
    }
    while ( v12 < vc->voicePacketCount );
    v8 = voicePacketCount;
  }
  if ( v11 != v8 )
  {
    LODWORD(v15) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 125, ASSERT_TYPE_ASSERT, "( ( numPacketsWritten == voicePacketCount ) )", "( numPacketsWritten ) = %i", v15) )
      __debugbreak();
  }
}

/*
==============
CL_CanChangePlayerMute
==============
*/
char CL_CanChangePlayerMute(const PartyData *party, const int muteClientIndex)
{
  const XUID *Xuid; 
  int v5; 
  XUID player; 
  XUID result; 

  XUID::XUID(&player);
  if ( (unsigned int)muteClientIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 683, ASSERT_TYPE_ASSERT, "(unsigned)( muteClientIndex ) < (unsigned)( 200 )", "muteClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", muteClientIndex, 200) )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 684, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  Xuid = Party_GetXuid(&result, party, muteClientIndex);
  XUID::operator=(&player, Xuid);
  if ( !XUID::IsNull(&player) && !Live_XUIDIsLocalPlayer(player) )
  {
    v5 = 0;
    while ( !Live_IsSignedIn(v5) || Voice_IsMemberUnmutable(party, v5, muteClientIndex) )
    {
      if ( ++v5 >= 8 )
        return 1;
    }
  }
  return 0;
}

/*
==============
CL_ClearMutedList
==============
*/
void CL_ClearMutedList(PartyData *party)
{
  int i; 
  __int64 v3; 
  __int64 v4; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 720, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) )
    {
      if ( (unsigned int)i >= 0xC8 )
      {
        LODWORD(v4) = 200;
        LODWORD(v3) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 711, ASSERT_TYPE_ASSERT, "(unsigned)( muteClientIndex ) < (unsigned)( 200 )", "muteClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      Voice_UnmuteMember(party, i);
    }
  }
}

/*
==============
CL_GetCurrentVoicePacketSize
==============
*/

__int64 __fastcall CL_GetCurrentVoicePacketSize(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  __int64 v3; 
  int v4; 
  __int64 v6; 
  voiceCommunication_t *v7; 
  __int64 voicePacketCount; 
  __int64 v11; 
  int v28; 
  unsigned __int64 v29; 
  int *p_dataSize; 
  int v33; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v33 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v33) )
      __debugbreak();
  }
  v4 = 0;
  _ER10 = 0;
  LODWORD(v6) = 0;
  v7 = &cl_voiceCommunication[v3];
  voicePacketCount = v7->voicePacketCount;
  if ( (int)voicePacketCount > 0 && (unsigned int)voicePacketCount >= 8 )
  {
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v11 = 0i64;
    _RAX = &v7->voicePackets[2].dataSize;
    do
    {
      __asm
      {
        vmovd   xmm0, dword ptr [rax-108h]
        vpinsrd xmm0, xmm0, dword ptr [rax-84h], 1
        vpinsrd xmm0, xmm0, dword ptr [rax], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+84h], 3
        vpaddd  xmm1, xmm0, xmm1
        vmovd   xmm0, dword ptr [rax+108h]
        vpinsrd xmm0, xmm0, dword ptr [rax+18Ch], 1
        vpinsrd xmm0, xmm0, dword ptr [rax+210h], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+294h], 3
      }
      LODWORD(v6) = v6 + 8;
      _RAX += 264;
      v11 += 8i64;
      __asm { vpaddd  xmm2, xmm0, xmm2 }
    }
    while ( v11 < (int)voicePacketCount - (int)voicePacketCount % 8 );
    __asm
    {
      vpaddd  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
      vmovd   r10d, xmm0
    }
  }
  v6 = (int)v6;
  v28 = 0;
  if ( (int)v6 >= voicePacketCount )
    return _ER10;
  if ( voicePacketCount - (int)v6 >= 2 )
  {
    v29 = ((unsigned __int64)(voicePacketCount - (int)v6 - 2) >> 1) + 1;
    p_dataSize = &v7->voicePackets[(int)v6 + 1].dataSize;
    v6 = (int)v6 + 2 * v29;
    do
    {
      v4 += *(p_dataSize - 33);
      v28 += *p_dataSize;
      p_dataSize += 66;
      --v29;
    }
    while ( v29 );
  }
  if ( v6 < v7->voicePacketCount )
    _ER10 += v7->voicePackets[v6].dataSize;
  return _ER10 + v28 + v4;
}

/*
==============
CL_GetMuteStrategy
==============
*/

int __fastcall CL_GetMuteStrategy(const int controllerIndex)
{
  return GamerProfile_GetVoiceMuteStrategy(controllerIndex);
}

/*
==============
CL_IsPlayerMuted
==============
*/
char CL_IsPlayerMuted(const PartyData *party, const int muteClientIndex)
{
  const XUID *Xuid; 
  int PortForLocalXUID; 
  int v6; 
  int v7; 
  Online_BlockList *Instance; 
  OnlineUserLists *v9; 
  XUID player; 
  XUID result; 

  XUID::XUID(&player);
  if ( (unsigned int)muteClientIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( muteClientIndex ) < (unsigned)( 200 )", "muteClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", muteClientIndex, 200) )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 626, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  Xuid = Party_GetXuid(&result, party, muteClientIndex);
  XUID::operator=(&player, Xuid);
  if ( XUID::IsNull(&player) )
    return 0;
  PortForLocalXUID = Live_GetPortForLocalXUID(player);
  v6 = PortForLocalXUID;
  if ( PortForLocalXUID < 0 || Live_IsSignedIn(PortForLocalXUID) && !Live_UserIsGuest(v6) )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( Live_IsSignedIn(v7) )
      {
        if ( Voice_IsMemberMuted(party, v7, muteClientIndex) )
          break;
        Instance = Online_BlockList::GetInstance();
        if ( Online_BlockList::IsBlocked(Instance, v7, player) )
          break;
        result.m_id = 0i64;
        v9 = OnlineUserLists::GetInstance();
        if ( OnlineUserLists::GetUserByXUID(v9, v7, COUNT, player, (const UserList::User **)&result) )
          break;
      }
      if ( ++v7 >= 8 )
        return 0;
    }
  }
  return 1;
}

/*
==============
CL_IsPlayerTalking
==============
*/
bool CL_IsPlayerTalking(const PartyData *party, const int talkingClientIndex)
{
  const dvar_t *v2; 
  const dvar_t *v5; 

  v2 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v5 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled )
      return 0;
  }
  return Party_IsMemberRegistered(party, talkingClientIndex) && Voice_IsMemberTalking(party, talkingClientIndex);
}

/*
==============
CL_MuteAllPlayers
==============
*/
void CL_MuteAllPlayers(PartyData *party)
{
  int i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 829, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) && !CL_IsPlayerMuted(party, i) )
      CL_MutePlayer(party, i);
  }
}

/*
==============
CL_MuteAllPlayersButFriends
==============
*/
void CL_MuteAllPlayersButFriends(PartyData *party)
{
  int i; 
  bool IsClientAFriendOfAnyLocalPlayer; 
  bool IsPlayerMuted; 
  int SplitscreenClientNumAtSameAddress; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 914, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) )
    {
      IsClientAFriendOfAnyLocalPlayer = Live_IsClientAFriendOfAnyLocalPlayer(party, i);
      IsPlayerMuted = CL_IsPlayerMuted(party, i);
      if ( IsClientAFriendOfAnyLocalPlayer )
      {
        if ( IsPlayerMuted && CL_CanChangePlayerMute(party, i) )
        {
          Voice_UnmuteMember(party, i);
          SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, i);
          if ( SplitscreenClientNumAtSameAddress != -1 )
            Voice_UnmuteMember(party, SplitscreenClientNumAtSameAddress);
          ChangeMuteStatusInDWMuteList(party, i, 0);
        }
      }
      else if ( !IsPlayerMuted )
      {
        CL_MutePlayer(party, i);
      }
    }
  }
}

/*
==============
CL_MuteAllPlayersButParty
==============
*/
void CL_MuteAllPlayersButParty(PartyData *party)
{
  int i; 
  int IsPlayerInPrivateParty; 
  bool IsPlayerMuted; 
  int SplitscreenClientNumAtSameAddress; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 885, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) )
    {
      Party_GetXuid(&result, party, i);
      IsPlayerInPrivateParty = Party_IsPlayerInPrivateParty(result);
      IsPlayerMuted = CL_IsPlayerMuted(party, i);
      if ( IsPlayerInPrivateParty )
      {
        if ( IsPlayerMuted && CL_CanChangePlayerMute(party, i) )
        {
          Voice_UnmuteMember(party, i);
          SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, i);
          if ( SplitscreenClientNumAtSameAddress != -1 )
            Voice_UnmuteMember(party, SplitscreenClientNumAtSameAddress);
          ChangeMuteStatusInDWMuteList(party, i, 0);
        }
      }
      else if ( !IsPlayerMuted )
      {
        CL_MutePlayer(party, i);
      }
    }
  }
}

/*
==============
CL_MutePlayer
==============
*/
void CL_MutePlayer(PartyData *party, const int muteClientIndex)
{
  int SplitscreenClientNumAtSameAddress; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 771, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_CanChangePlayerMute(party, muteClientIndex) )
  {
    Voice_MuteMember(party, muteClientIndex);
    SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, muteClientIndex);
    if ( SplitscreenClientNumAtSameAddress != -1 )
      Voice_MuteMember(party, SplitscreenClientNumAtSameAddress);
    ChangeMuteStatusInDWMuteList(party, muteClientIndex, 1);
  }
}

/*
==============
CL_ResetPlayerMuting
==============
*/
void CL_ResetPlayerMuting(PartyData *party, const int muteClientIndex)
{
  int v5; 

  if ( (unsigned int)muteClientIndex >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 711, ASSERT_TYPE_ASSERT, "(unsigned)( muteClientIndex ) < (unsigned)( 200 )", "muteClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", muteClientIndex, v5) )
      __debugbreak();
  }
  Voice_UnmuteMember(party, muteClientIndex);
}

/*
==============
CL_SetMuteStrategy
==============
*/
void CL_SetMuteStrategy(const int controllerIndex, const MuteStrategy muteStrategy)
{
  PartyData *ActiveParty; 
  int k; 
  bool IsClientAFriendOfAnyLocalPlayer; 
  bool v7; 
  int v8; 
  int j; 
  int IsPlayerInPrivateParty; 
  bool IsPlayerMuted; 
  int v12; 
  int i; 
  int v14; 
  int VoiceMuteStrategy; 
  int v16; 
  int SplitscreenClientNumAtSameAddress; 
  XUID result; 

  ActiveParty = Party_GetActiveParty();
  if ( !ActiveParty )
  {
    Com_Printf(25, "[voice] Unable to set mute strategy, there is not active party\n");
    return;
  }
  switch ( muteStrategy )
  {
    case MuteStrategyUnmute:
      v14 = 0;
      while ( 1 )
      {
        if ( Party_IsMemberRegistered(ActiveParty, v14) && CL_IsPlayerMuted(ActiveParty, v14) )
        {
          VoiceMuteStrategy = GamerProfile_GetVoiceMuteStrategy(controllerIndex);
          if ( VoiceMuteStrategy != 2 )
          {
            if ( VoiceMuteStrategy == 3 )
            {
              v16 = 0;
              while ( !Live_IsClientAFriend(v16, ActiveParty, v14) )
              {
                if ( ++v16 >= 8 )
                  goto LABEL_48;
              }
              goto LABEL_52;
            }
LABEL_48:
            if ( CL_CanChangePlayerMute(ActiveParty, v14) )
            {
              Voice_UnmuteMember(ActiveParty, v14);
              SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(ActiveParty, v14);
              if ( SplitscreenClientNumAtSameAddress != -1 )
                Voice_UnmuteMember(ActiveParty, SplitscreenClientNumAtSameAddress);
              ChangeMuteStatusInDWMuteList(ActiveParty, v14, 0);
            }
            goto LABEL_52;
          }
          Party_GetXuid(&result, ActiveParty, v14);
          if ( !Party_IsPlayerInPrivateParty(result) )
            goto LABEL_48;
        }
LABEL_52:
        if ( ++v14 >= 200 )
          goto LABEL_53;
      }
    case MuteStrategyMuteAll:
      for ( i = 0; i < 200; ++i )
      {
        if ( Party_IsMemberRegistered(ActiveParty, i) && !CL_IsPlayerMuted(ActiveParty, i) )
          CL_MutePlayer(ActiveParty, i);
      }
      break;
    case MuteStrategyMuteAllButParty:
      for ( j = 0; j < 200; ++j )
      {
        if ( Party_IsMemberRegistered(ActiveParty, j) )
        {
          Party_GetXuid(&result, ActiveParty, j);
          IsPlayerInPrivateParty = Party_IsPlayerInPrivateParty(result);
          IsPlayerMuted = CL_IsPlayerMuted(ActiveParty, j);
          if ( IsPlayerInPrivateParty )
          {
            if ( IsPlayerMuted && CL_CanChangePlayerMute(ActiveParty, j) )
            {
              Voice_UnmuteMember(ActiveParty, j);
              v12 = Party_GetSplitscreenClientNumAtSameAddress(ActiveParty, j);
              if ( v12 != -1 )
                Voice_UnmuteMember(ActiveParty, v12);
              ChangeMuteStatusInDWMuteList(ActiveParty, j, 0);
            }
          }
          else if ( !IsPlayerMuted )
          {
            CL_MutePlayer(ActiveParty, j);
          }
        }
      }
      break;
    case MuteStrategyMuteAllButFriends:
      for ( k = 0; k < 200; ++k )
      {
        if ( Party_IsMemberRegistered(ActiveParty, k) )
        {
          IsClientAFriendOfAnyLocalPlayer = Live_IsClientAFriendOfAnyLocalPlayer(ActiveParty, k);
          v7 = CL_IsPlayerMuted(ActiveParty, k);
          if ( IsClientAFriendOfAnyLocalPlayer )
          {
            if ( v7 && CL_CanChangePlayerMute(ActiveParty, k) )
            {
              Voice_UnmuteMember(ActiveParty, k);
              v8 = Party_GetSplitscreenClientNumAtSameAddress(ActiveParty, k);
              if ( v8 != -1 )
                Voice_UnmuteMember(ActiveParty, v8);
              ChangeMuteStatusInDWMuteList(ActiveParty, k, 0);
            }
          }
          else if ( !v7 )
          {
            CL_MutePlayer(ActiveParty, k);
          }
        }
      }
      break;
    default:
      Com_PrintError(25, "[voice] unknown MuteStrategy (%i)\n", (unsigned int)muteStrategy);
      return;
  }
LABEL_53:
  Com_Printf(25, "[voice] Set mute strategy to %i for controller %i successfully\n", (unsigned int)muteStrategy, (unsigned int)controllerIndex);
  GamerProfile_SetVoiceMuteStrategy(controllerIndex, muteStrategy);
}

/*
==============
CL_TogglePlayerMute
==============
*/
void CL_TogglePlayerMute(PartyData *party, const int muteClientIndex)
{
  if ( CL_CanChangePlayerMute(party, muteClientIndex) )
  {
    if ( CL_IsPlayerMuted(party, muteClientIndex) )
      CL_UnmutePlayer(party, muteClientIndex);
    else
      CL_MutePlayer(party, muteClientIndex);
  }
}

/*
==============
CL_UnmuteAllPlayers
==============
*/
void CL_UnmuteAllPlayers(PartyData *party, const int controllerIndex)
{
  int i; 
  int VoiceMuteStrategy; 
  int v6; 
  int SplitscreenClientNumAtSameAddress; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 944, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  for ( i = 0; i < 200; ++i )
  {
    if ( !Party_IsMemberRegistered(party, i) || !CL_IsPlayerMuted(party, i) )
      continue;
    VoiceMuteStrategy = GamerProfile_GetVoiceMuteStrategy(controllerIndex);
    if ( VoiceMuteStrategy == 2 )
    {
      Party_GetXuid(&result, party, i);
      if ( Party_IsPlayerInPrivateParty(result) )
        continue;
LABEL_14:
      if ( CL_CanChangePlayerMute(party, i) )
      {
        Voice_UnmuteMember(party, i);
        SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, i);
        if ( SplitscreenClientNumAtSameAddress != -1 )
          Voice_UnmuteMember(party, SplitscreenClientNumAtSameAddress);
        ChangeMuteStatusInDWMuteList(party, i, 0);
      }
      continue;
    }
    if ( VoiceMuteStrategy != 3 )
      goto LABEL_14;
    v6 = 0;
    while ( !Live_IsClientAFriend(v6, party, i) )
    {
      if ( ++v6 >= 8 )
        goto LABEL_14;
    }
  }
}

/*
==============
CL_UnmutePlayer
==============
*/
void CL_UnmutePlayer(PartyData *party, const int muteClientIndex)
{
  int SplitscreenClientNumAtSameAddress; 

  if ( CL_CanChangePlayerMute(party, muteClientIndex) )
  {
    Voice_UnmuteMember(party, muteClientIndex);
    SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, muteClientIndex);
    if ( SplitscreenClientNumAtSameAddress != -1 )
      Voice_UnmuteMember(party, SplitscreenClientNumAtSameAddress);
    ChangeMuteStatusInDWMuteList(party, muteClientIndex, 0);
  }
}

/*
==============
CL_VoiceDebug
==============
*/

void __fastcall CL_VoiceDebug(const PartyData *party, double _XMM1_8)
{
  int v2; 
  cg_t **v3; 
  bool v4; 
  bool *p_cgameInitialized; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  cg_t *v11; 
  int i; 
  __int64 v14; 
  __int64 v15; 

  v2 = 0;
  v3 = cg_t::ms_cgArray;
  v4 = 1;
  p_cgameInitialized = &clientUIActives[0].cgameInitialized;
  do
  {
    if ( !v4 )
    {
      LODWORD(v15) = 2;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !*(p_cgameInitialized - 1) && *p_cgameInitialized )
    {
      v7 = DVARBOOL_voice_on_screen_debug;
      if ( !DVARBOOL_voice_on_screen_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_on_screen_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        v8 = DVARBOOL_voice_proximity_team;
        if ( !DVARBOOL_voice_proximity_team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_team") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
          goto LABEL_34;
        v9 = DVARBOOL_voice_proximity_enemy;
        if ( !DVARBOOL_voice_proximity_enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_enemy") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( v9->current.enabled )
        {
LABEL_34:
          if ( v2 >= (unsigned int)cg_t::ms_allocatedCount )
          {
            LODWORD(v15) = cg_t::ms_allocatedCount;
            LODWORD(v14) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
          {
            LODWORD(v15) = cg_t::ms_allocatedType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v15) )
              __debugbreak();
          }
          v10 = DVARINT_voice_proximity_radius;
          v11 = *v3;
          if ( !DVARINT_voice_proximity_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_radius") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v10);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rbx+28h]; radius
          }
          CG_DebugSphere(&v11->predictedPlayerState.origin, *(float *)&_XMM1_8, &colorCyan, 1, 0);
        }
        for ( i = 0; i < cls.maxClients; ++i )
          CL_CGameMP_ShouldSendPeerVoiceData(party, (const LocalClientNum_t)v2, i);
      }
    }
    ++v2;
    p_cgameInitialized += 440;
    ++v3;
    v4 = (unsigned int)v2 < 2;
  }
  while ( v2 < 2 );
}

/*
==============
CL_VoiceFrame
==============
*/
void CL_VoiceFrame(LocalClientNum_t localClientNum, double a2, double a3)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  PartyData *ActiveParty; 
  voiceCommunication_t *LocalClientVoiceCommunication; 
  int LocalVoiceData; 
  int v9; 
  int v10; 

  if ( localClientNum <= LOCAL_CLIENT_0 || CL_Mgr_IsClientActive(localClientNum) )
  {
    v4 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      goto LABEL_11;
    v5 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
LABEL_11:
      ActiveParty = Live_GetActiveParty();
      if ( ActiveParty->inParty )
      {
        LocalClientVoiceCommunication = CL_GetLocalClientVoiceCommunication(localClientNum);
        if ( LocalClientVoiceCommunication->voicePacketCount >= 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 577, ASSERT_TYPE_ASSERT, "(vc->voicePacketCount < 10)", (const char *)&queryFormat, "vc->voicePacketCount < MAX_CLIENT_QUEUED_VOICE_PACKETS") )
          __debugbreak();
        LocalVoiceData = Voice_GetLocalVoiceData(ActiveParty, localClientNum, &LocalClientVoiceCommunication->voicePackets[LocalClientVoiceCommunication->voicePacketCount]);
        v9 = LocalVoiceData + CL_GetCurrentVoicePacketSize(localClientNum, a2, a3);
        if ( LocalVoiceData > 0 )
        {
          do
          {
            if ( ++LocalClientVoiceCommunication->voicePacketCount >= 10 || v9 >= 256 )
            {
              if ( CL_VoiceTransmit(localClientNum) )
                v9 = 0;
            }
            v10 = Voice_GetLocalVoiceData(ActiveParty, localClientNum, &LocalClientVoiceCommunication->voicePackets[LocalClientVoiceCommunication->voicePacketCount]);
            v9 += v10;
          }
          while ( v10 > 0 );
        }
        CL_VoiceTransmit(localClientNum);
        CL_VoiceDebug(ActiveParty, a2);
      }
    }
  }
}

/*
==============
CL_VoiceTransmit
==============
*/
__int64 CL_VoiceTransmit(LocalClientNum_t localClientNum, double a2, double a3)
{
  __int64 v3; 
  const dvar_t *v4; 
  __int64 v5; 
  int v8; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  v4 = DVARINT_voice_transmitInterval;
  v5 = v3;
  if ( DVARINT_voice_transmitInterval )
  {
    Dvar_CheckFrontendServerThread(DVARINT_voice_transmitInterval);
    LODWORD(v4) = v4->current.integer;
  }
  if ( Sys_Milliseconds() - cl_voiceCommunication[v5].voicePacketLastTransmit < (int)v4 && cl_voiceCommunication[v5].voicePacketCount < 10 && (int)(CL_GetCurrentVoicePacketSize((LocalClientNum_t)v3, a2, a3) + 164) <= 1252 || cl_voiceCommunication[v5].voicePacketCount <= 0 )
    return 0i64;
  CL_WriteVoicePacket((LocalClientNum_t)v3);
  cl_voiceCommunication[v5].voicePacketCount = 0;
  cl_voiceCommunication[v5].voicePacketLastTransmit = Sys_Milliseconds();
  return 1i64;
}

/*
==============
CL_WriteVoicePacket
==============
*/
void CL_WriteVoicePacket(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const PartyData *v2; 
  voiceCommunication_t *v3; 
  int ControllerFromClient; 
  int v5; 
  int *p_dataSize; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  bool v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  char v13; 
  char v14; 
  char v15; 
  LocalClientNum_t v16; 
  int j; 
  bool IsConnected; 
  int v19; 
  const XUID *Xuid; 
  int MemberByXUID; 
  NetConnection *MemberConnection; 
  NetConnection *v23; 
  const dvar_t *v24; 
  int v25; 
  bitarray<256> *k; 
  int m_id; 
  int *v28; 
  unsigned int i; 
  const dvar_t *v30; 
  const char *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  const dvar_t *v36; 
  msg_t *msg; 
  msg_t *msga; 
  __int64 canRelay; 
  __int64 canRelaya; 
  __int64 v41; 
  int NumGameSlots; 
  __int64 v43; 
  unsigned int voicePacketCount; 
  int clientNum; 
  PartyData *party; 
  XUID result; 
  voiceCommunication_t *vc; 
  msg_t buf; 
  bitarray<256> relayBits; 
  bitarray<256> v52; 
  int routeList[32]; 
  unsigned __int8 data[2480]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(canRelaya) = 2;
    LODWORD(msga) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", msga, canRelaya) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].frontEndSceneState[0] )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(canRelay) = 2;
      LODWORD(msg) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", msg, canRelay) )
        __debugbreak();
    }
    if ( clientUIActives[v1].connectionState )
      goto LABEL_119;
  }
  if ( Lobby_IsInRunningLobby() || Party_InParty(&g_partyData) )
  {
LABEL_119:
    party = Live_GetCurrentParty();
    v2 = party;
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(canRelay) = 2;
      LODWORD(msg) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", msg, canRelay) )
        __debugbreak();
    }
    v3 = &cl_voiceCommunication[v1];
    vc = v3;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( !Live_IsSignedIn(ControllerFromClient) )
    {
      Com_PrintWarning(25, "Not signed in, so not sending voice packet.\n");
      return;
    }
    clientNum = Live_GetOurClientNum(ControllerFromClient, party);
    if ( clientNum < 0 )
    {
      Com_PrintWarning(25, "We can't find our own clientNum, so not sending voice packet.\n");
      return;
    }
    if ( clientNum >= 200 )
    {
      LODWORD(msg) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 178, ASSERT_TYPE_ASSERT, "( ( ourClientNum < 200 ) )", "( ourClientNum ) = %i", msg) )
        __debugbreak();
    }
    if ( !Party_IsMemberRegistered(party, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, ourClientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, ourClientNum )") )
      __debugbreak();
    v5 = 0;
    voicePacketCount = 0;
    if ( v3->voicePacketCount > 0 )
    {
      p_dataSize = &v3->voicePackets[0].dataSize;
      while ( 1 )
      {
        if ( (*((_BYTE *)p_dataSize - 127) & 1) != 0 )
        {
          v7 = DVARBOOL_voice_degrade;
          if ( !DVARBOOL_voice_degrade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_degrade") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v7);
          if ( v7->current.enabled )
            break;
        }
        v8 = DVARBOOL_voice_loopback;
        if ( !DVARBOOL_voice_loopback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_loopback") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        v9 = !v8->current.enabled;
        v10 = clientNum;
        if ( !v9 )
        {
          Voice_IncomingVoiceData(party, clientNum, v3->voicePackets[v5].data, *p_dataSize, (LocalClientNum_t)v1);
LABEL_40:
          v11 = voicePacketCount;
          goto LABEL_41;
        }
        v11 = ++voicePacketCount;
LABEL_41:
        ++v5;
        p_dataSize += 33;
        if ( v5 >= v3->voicePacketCount )
        {
          v12 = 0;
          if ( v11 )
          {
            if ( PeerMesh_IsEnabled(party) )
            {
              if ( Party_GetNumGameSlots(party) > 32 )
              {
                NumGameSlots = Party_GetNumGameSlots(party);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 286, ASSERT_TYPE_ASSERT, "( Party_GetNumGameSlots( party ) ) <= ( 32 )", "%s <= %s\n\t%i, %i", "Party_GetNumGameSlots( party )", "MAX_CLIENTS_PEERMESH", NumGameSlots, 32) )
                  __debugbreak();
              }
              memset_0(routeList, 0, sizeof(routeList));
              PeerMesh_BuildRouteList(party, (LocalClientNum_t)v1, v10, routeList, 0x20u);
              m_id = 1;
              v28 = routeList;
              LODWORD(result.m_id) = 1;
              for ( i = 0; i < 0x20; ++i )
              {
                if ( *v28 )
                {
                  if ( i == v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 295, ASSERT_TYPE_ASSERT, "(peer != ourClientNum)", (const char *)&queryFormat, "peer != ourClientNum") )
                    __debugbreak();
                  v30 = DVARBOOL_voice_debug;
                  if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v30);
                  if ( v30->current.enabled )
                  {
                    Com_Printf(25, "Sending %d voice packets to client %i", voicePacketCount, i);
                    if ( *v28 != m_id )
                    {
                      v31 = "relayed ";
                      if ( (*v28 & m_id) != 0 )
                        v31 = "themself and ";
                      Com_Printf(25, " with voice data for %sclients ", v31);
                      v32 = 0;
                      v33 = 1;
                      do
                      {
                        if ( i != v32 && (v33 & *v28) != 0 )
                          Com_Printf(25, "%i, ", (unsigned int)v32);
                        ++v32;
                        v33 = __ROL4__(v33, 1);
                      }
                      while ( v32 < 32 );
                    }
                    Com_Printf(25, "\n");
                  }
                  MSG_Init(&buf, data, 2474);
                  v34 = 0;
                  memset(&relayBits, 0, sizeof(relayBits));
                  v35 = 1;
                  do
                  {
                    if ( (v35 & *v28) != 0 )
                    {
                      if ( (unsigned int)v34 >= 0x100 )
                      {
                        LODWORD(v43) = 256;
                        LODWORD(v41) = v34;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v41, v43) )
                          __debugbreak();
                      }
                      relayBits.array[(unsigned __int64)(unsigned int)v34 >> 5] |= 0x80000000 >> (v34 & 0x1F);
                    }
                    ++v34;
                    v35 = __ROL4__(v35, 1);
                  }
                  while ( v34 < 32 );
                  CL_AssembleVoicePacket(party, localClientNum, vc, voicePacketCount, &relayBits, &buf);
                  PeerMesh_Send(party, localClientNum, i, buf.data, buf.cursize, 1, 0);
                  v36 = DVARBOOL_cl_showSend;
                  if ( !DVARBOOL_cl_showSend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showSend") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v36);
                  if ( v36->current.enabled )
                    Com_Printf(25, "voice: %i\n", (unsigned int)buf.cursize);
                  v10 = clientNum;
                  m_id = result.m_id;
                }
                m_id = __ROL4__(m_id, 1);
                ++v28;
                LODWORD(result.m_id) = m_id;
              }
            }
            else
            {
              if ( Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.cpp", 210, ASSERT_TYPE_ASSERT, "(!Party_IsPrivateParty( party ))", (const char *)&queryFormat, "!Party_IsPrivateParty( party )") )
                __debugbreak();
              memset(&relayBits, 0, sizeof(relayBits));
              if ( Party_AreWeHost(party) && !Com_IsGameLocalServerRunning() )
              {
                v13 = 1;
                goto LABEL_50;
              }
              v24 = DVARBOOL_cl_voice_direct_send_to_private_party;
              v13 = 0;
              if ( !DVARBOOL_cl_voice_direct_send_to_private_party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice_direct_send_to_private_party") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v24);
              if ( v24->current.enabled && PeerMesh_IsEnabled(&g_partyData) )
                v14 = 1;
              else
LABEL_50:
                v14 = 0;
              v15 = 0;
              MSG_Init(&buf, data, 2474);
              v16 = localClientNum;
              for ( j = 0; j < 200; ++j )
              {
                if ( CL_CGameMP_ShouldSendPeerVoiceData(v2, v16, j) )
                {
                  IsConnected = 0;
                  v19 = -1;
                  if ( v14 )
                  {
                    Xuid = Party_GetXuid(&result, party, j);
                    MemberByXUID = Party_FindMemberByXUID(&g_partyData, (const XUID)Xuid->m_id);
                    v19 = MemberByXUID;
                    if ( MemberByXUID != -1 )
                    {
                      MemberConnection = (NetConnection *)Party_GetMemberConnection(&g_partyData, MemberByXUID);
                      IsConnected = NetConnection::IsConnected(MemberConnection);
                    }
                  }
                  if ( v13 )
                  {
                    v16 = localClientNum;
                    v2 = party;
                    if ( !v15 )
                    {
                      CL_AssembleVoicePacket(party, localClientNum, vc, voicePacketCount, &relayBits, &buf);
                      v15 = 1;
                    }
                    v23 = (NetConnection *)Party_GetMemberConnection(party, j);
                    NetConnection::SendUnreliable(v23, buf.data, buf.cursize, 0x10u);
                  }
                  else if ( IsConnected )
                  {
                    v2 = party;
                    if ( !v15 )
                    {
                      memset(&v52, 0, sizeof(v52));
                      CL_AssembleVoicePacket(party, localClientNum, vc, voicePacketCount, &v52, &buf);
                      v15 = 1;
                    }
                    v25 = v19;
                    v16 = localClientNum;
                    PeerMesh_Send(&g_partyData, localClientNum, v25, buf.data, buf.cursize, 1, 0);
                  }
                  else
                  {
                    if ( (unsigned int)j >= 0x100 )
                    {
                      LODWORD(v43) = 256;
                      LODWORD(v41) = j;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v41, v43) )
                        __debugbreak();
                    }
                    v2 = party;
                    v16 = localClientNum;
                    relayBits.array[(unsigned __int64)(unsigned int)j >> 5] |= 0x80000000 >> (j & 0x1F);
                  }
                }
              }
              for ( k = &relayBits; !k->array[0]; k = (bitarray<256> *)((char *)k + 4) )
              {
                if ( (unsigned int)++v12 >= 8 )
                  return;
              }
              if ( v15 )
                MSG_Init(&buf, data, 2474);
              CL_AssembleVoicePacket(v2, v16, vc, voicePacketCount, &relayBits, &buf);
              NetConnection::SendUnreliable(&v2->currentHost.connections[v16], buf.data, buf.cursize, 0x10u);
            }
          }
          return;
        }
      }
      v10 = clientNum;
      goto LABEL_40;
    }
  }
}

/*
==============
ChangeMuteStatusInDWMuteList
==============
*/
void ChangeMuteStatusInDWMuteList(PartyData *party, const int muteClientIndex, const bool mutePlayer)
{
  int i; 
  OnlineUserLists *Instance; 
  OnlineUserLists *v8; 
  bool UserByXUID; 
  const char *MemberName; 
  OnlineUserLists *v11; 
  UserList::User *v12; 
  OnlineUserLists *v13; 
  XUID result; 
  UserList::User *userOut; 
  UserList *userListOut; 
  UserList::User users; 

  for ( i = 0; i < 8; ++i )
  {
    userListOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserList(Instance, i, COUNT, (const UserList **)&userListOut) && Party_IsMemberRegistered(party, muteClientIndex) )
    {
      Party_GetXuid(&result, party, muteClientIndex);
      userOut = NULL;
      v8 = OnlineUserLists::GetInstance();
      UserByXUID = OnlineUserLists::GetUserByXUID(v8, i, COUNT, result, (const UserList::User **)&userOut);
      if ( mutePlayer )
      {
        if ( !UserByXUID )
        {
          UserList::User::User(&users);
          XUID::operator=(&users.xuid, &result);
          MemberName = Party_GetMemberName(party, muteClientIndex);
          Core_strcpy(users.name, 0x40ui64, MemberName);
          v11 = OnlineUserLists::GetInstance();
          OnlineUserLists::AddUsersToList(v11, i, COUNT, &users, 1);
        }
      }
      else if ( UserByXUID )
      {
        v12 = userOut;
        XUID::XUID(&users.xuid);
        XUID::operator=(&users.xuid, &v12->xuid);
        users.timeAdded = v12->timeAdded;
        Core_strcpy(users.name, 0x40ui64, v12->name);
        Core_strcpy(users.nameWithHash, 0x40ui64, v12->nameWithHash);
        users.xb3PlatformId = v12->xb3PlatformId;
        users.xb3DataSet = v12->xb3DataSet;
        v13 = OnlineUserLists::GetInstance();
        OnlineUserLists::RemoveUsersFromList(v13, i, COUNT, &users, 1);
      }
    }
  }
}

