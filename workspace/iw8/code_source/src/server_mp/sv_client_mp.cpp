/*
==============
SvClientMP::GetCommandDeltaBaselineForSequence
==============
*/

bool __fastcall SvClientMP::GetCommandDeltaBaselineForSequence(SvClientMP *this, const int cmdDelta, usercmd_s *const outCmd, CmdPredict *const outPredict)
{
  return ?GetCommandDeltaBaselineForSequence@SvClientMP@@QEBA_NHQEAUusercmd_s@@QEAUCmdPredict@@@Z(this, cmdDelta, outCmd, outPredict);
}

/*
==============
SvClientMP::DemoSaveState
==============
*/

void __fastcall SvClientMP::DemoSaveState(SvClientMP *this, sysFileHandle_t fileDemo)
{
  ?DemoSaveState@SvClientMP@@QEBAXUsysFileHandle_t@@@Z(this, fileDemo);
}

/*
==============
SV_ClientMP_IsPeerMeshEnabled
==============
*/

bool __fastcall SV_ClientMP_IsPeerMeshEnabled()
{
  return ?SV_ClientMP_IsPeerMeshEnabled@@YA_NXZ();
}

/*
==============
SV_ClientMP_WriteCodcasterClientMatchData
==============
*/

void __fastcall SV_ClientMP_WriteCodcasterClientMatchData(SvClientMP *cl, const SvClientConnectionState connState, const int serverTime, msg_t *msg)
{
  ?SV_ClientMP_WriteCodcasterClientMatchData@@YAXPEAVSvClientMP@@W4SvClientConnectionState@@HPEAUmsg_t@@@Z(cl, connState, serverTime, msg);
}

/*
==============
SvClientMP::UpdateSnapshotEncodingOutput
==============
*/

void __fastcall SvClientMP::UpdateSnapshotEncodingOutput(SvClientMP *this, const unsigned int snapshotIndex, const clientSnapshotEncodingOutput_t *newClientSnapEncodingOutput)
{
  ?UpdateSnapshotEncodingOutput@SvClientMP@@QEAAXIPEBUclientSnapshotEncodingOutput_t@@@Z(this, snapshotIndex, newClientSnapEncodingOutput);
}

/*
==============
SV_ClientMP_WriteClientMatchData
==============
*/

void __fastcall SV_ClientMP_WriteClientMatchData(SvClientMP *cl, const SvClientConnectionState connState, const int serverTime, msg_t *msg)
{
  ?SV_ClientMP_WriteClientMatchData@@YAXPEAVSvClientMP@@W4SvClientConnectionState@@HPEAUmsg_t@@@Z(cl, connState, serverTime, msg);
}

/*
==============
SvClientMP::GetValidSnapshotForSentSequenceConst
==============
*/

bool __fastcall SvClientMP::GetValidSnapshotForSentSequenceConst(SvClientMP *this, const int sequence, const clientSnapshot_t **outSnapshot)
{
  return ?GetValidSnapshotForSentSequenceConst@SvClientMP@@QEBA_NHPEAPEBUclientSnapshot_t@@@Z(this, sequence, outSnapshot);
}

/*
==============
SvClientMP::AddClientAtAddress
==============
*/

void __fastcall SvClientMP::AddClientAtAddress(const netadr_t *addr, const unsigned int clientNum)
{
  ?AddClientAtAddress@SvClientMP@@SAXAEBUnetadr_t@@I@Z(addr, clientNum);
}

/*
==============
SV_ClientMP_GetName
==============
*/

const char *__fastcall SV_ClientMP_GetName(unsigned int clientNum)
{
  return ?SV_ClientMP_GetName@@YAPEBDI@Z(clientNum);
}

/*
==============
SvClientMP::GetFramePingHistory
==============
*/

bool __fastcall SvClientMP::GetFramePingHistory(SvClientMP *this, const int sequence, int *outPing)
{
  return ?GetFramePingHistory@SvClientMP@@QEBA_NHPEAH@Z(this, sequence, outPing);
}

/*
==============
SV_ClientMP_SetUserinfo
==============
*/

void __fastcall SV_ClientMP_SetUserinfo(int index, const char *val)
{
  ?SV_ClientMP_SetUserinfo@@YAXHPEBD@Z(index, val);
}

/*
==============
SvClientMP::IsLocalClient
==============
*/

bool __fastcall SvClientMP::IsLocalClient(SvClientMP *this)
{
  return ?IsLocalClient@SvClientMP@@UEBA_NXZ(this);
}

/*
==============
SV_ClientMP_HasAssignedTeam_Internal
==============
*/

bool __fastcall SV_ClientMP_HasAssignedTeam_Internal(unsigned int clientNum)
{
  return ?SV_ClientMP_HasAssignedTeam_Internal@@YA_NI@Z(clientNum);
}

/*
==============
SV_ClientMP_ClearExtrapolation
==============
*/

void __fastcall SV_ClientMP_ClearExtrapolation(const int clientIndex)
{
  ?SV_ClientMP_ClearExtrapolation@@YAXH@Z(clientIndex);
}

/*
==============
SV_ClientMP_UpdateSavedDemoClient
==============
*/

void __fastcall SV_ClientMP_UpdateSavedDemoClient(SvClientMP *client)
{
  ?SV_ClientMP_UpdateSavedDemoClient@@YAXPEAVSvClientMP@@@Z(client);
}

/*
==============
SV_ClientMP_Extrapolate
==============
*/

void __fastcall SV_ClientMP_Extrapolate(const int clientIndex)
{
  ?SV_ClientMP_Extrapolate@@YAXH@Z(clientIndex);
}

/*
==============
SvClientMP::SendServerCommandMsg
==============
*/

void __fastcall SvClientMP::SendServerCommandMsg(SvClientMP *this, svscmd_type type, const msg_t *msg)
{
  ?SendServerCommandMsg@SvClientMP@@UEAAXW4svscmd_type@@PEBUmsg_t@@@Z(this, type, msg);
}

/*
==============
SV_ClientMP_SetClientPersistentDataModified
==============
*/

void __fastcall SV_ClientMP_SetClientPersistentDataModified(int clientNum)
{
  ?SV_ClientMP_SetClientPersistentDataModified@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientMP_ThinkInternal
==============
*/

void __fastcall SV_ClientMP_ThinkInternal(SvClientMP *cl, const usercmd_s *cmd)
{
  ?SV_ClientMP_ThinkInternal@@YAXPEAVSvClientMP@@PEBUusercmd_s@@@Z(cl, cmd);
}

/*
==============
SvClientMP::FindClientAtAddress
==============
*/

SvClientMP *__fastcall SvClientMP::FindClientAtAddress(const netadr_t *addr)
{
  return ?FindClientAtAddress@SvClientMP@@SAPEAV1@AEBUnetadr_t@@@Z(addr);
}

/*
==============
SV_ClientMP_SetAssignedTeam
==============
*/

void __fastcall SV_ClientMP_SetAssignedTeam(unsigned int clientNum, team_t team)
{
  ?SV_ClientMP_SetAssignedTeam@@YAXIW4team_t@@@Z(clientNum, team);
}

/*
==============
SV_ClientMP_GetUserinfo
==============
*/

void __fastcall SV_ClientMP_GetUserinfo(int index, char *buffer, int bufferSize)
{
  ?SV_ClientMP_GetUserinfo@@YAXHPEADH@Z(index, buffer, bufferSize);
}

/*
==============
SV_ClientMP_GetAssignedSquad
==============
*/

int __fastcall SV_ClientMP_GetAssignedSquad(const unsigned int clientNum)
{
  return ?SV_ClientMP_GetAssignedSquad@@YAHI@Z(clientNum);
}

/*
==============
SV_GetOtherActiveSplitscreenClient
==============
*/

bool __fastcall SV_GetOtherActiveSplitscreenClient(const unsigned int clientIndex, int *outOtherClient)
{
  return ?SV_GetOtherActiveSplitscreenClient@@YA_NIPEAH@Z(clientIndex, outOtherClient);
}

/*
==============
SV_ClientMP_IHear
==============
*/

void __fastcall SV_ClientMP_IHear(netadr_t *from, msg_t *msg)
{
  ?SV_ClientMP_IHear@@YAXUnetadr_t@@PEAUmsg_t@@@Z(from, msg);
}

/*
==============
SV_ClientMP_GetInfoForTestClient
==============
*/

void __fastcall SV_ClientMP_GetInfoForTestClient(char *s, int size)
{
  ?SV_ClientMP_GetInfoForTestClient@@YAXPEADH@Z(s, size);
}

/*
==============
SV_ClientMP_ExecuteMessage
==============
*/

bool __fastcall SV_ClientMP_ExecuteMessage(SvClientMP *cl, msg_t *msg)
{
  return ?SV_ClientMP_ExecuteMessage@@YA_NPEAVSvClientMP@@PEAUmsg_t@@@Z(cl, msg);
}

/*
==============
SV_ClientMP_DropTestClients
==============
*/

void __fastcall SV_ClientMP_DropTestClients(int numBotsToDrop, const bitarray<224> *teamsToDrop)
{
  ?SV_ClientMP_DropTestClients@@YAXHAEBV?$bitarray@$0OA@@@@Z(numBotsToDrop, teamsToDrop);
}

/*
==============
SvClientMP::GetPredictedOrigin
==============
*/

bool __fastcall SvClientMP::GetPredictedOrigin(SvClientMP *this, const int commandTime, SvClientPredictedOrigin *outPredictedOrigin)
{
  return ?GetPredictedOrigin@SvClientMP@@QEBA_NHPEAUSvClientPredictedOrigin@@@Z(this, commandTime, outPredictedOrigin);
}

/*
==============
SV_ClientMP_PacketEvent
==============
*/

bool __fastcall SV_ClientMP_PacketEvent(SvClientMP *const cl, msg_t *msg, NetPingInfo *info)
{
  return ?SV_ClientMP_PacketEvent@@YA_NQEAVSvClientMP@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(cl, msg, info);
}

/*
==============
SvClientMP::IsTestClient
==============
*/

bool __fastcall SvClientMP::IsTestClient(SvClientMP *this)
{
  return ?IsTestClient@SvClientMP@@UEBA_NXZ(this);
}

/*
==============
SvClientMP::GetValidFrameInfoForSequenceConst
==============
*/

bool __fastcall SvClientMP::GetValidFrameInfoForSequenceConst(SvClientMP *this, const int sequence, const SvClientFrameInfo **outFrameInfo)
{
  return ?GetValidFrameInfoForSequenceConst@SvClientMP@@AEBA_NHPEAPEBUSvClientFrameInfo@@@Z(this, sequence, outFrameInfo);
}

/*
==============
SV_ClientMP_GetClientPlayerDataBuffer
==============
*/

unsigned __int8 *__fastcall SV_ClientMP_GetClientPlayerDataBuffer(int clientNum, StatsGroup statsGroup)
{
  return ?SV_ClientMP_GetClientPlayerDataBuffer@@YAPEAEHW4StatsGroup@@@Z(clientNum, statsGroup);
}

/*
==============
SV_ClientMP_DelayDropClient
==============
*/

void __fastcall SV_ClientMP_DelayDropClient(SvClientMP *drop, const char *reason)
{
  ?SV_ClientMP_DelayDropClient@@YAXPEAVSvClientMP@@PEBD@Z(drop, reason);
}

/*
==============
SV_CountRealClients
==============
*/

int __fastcall SV_CountRealClients()
{
  return ?SV_CountRealClients@@YAHXZ();
}

/*
==============
SV_ClientMP_SendClientMatchData
==============
*/

void __fastcall SV_ClientMP_SendClientMatchData(const int clientNum)
{
  ?SV_ClientMP_SendClientMatchData@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientMP_GeneratePresetTestClientCustomization
==============
*/

unsigned int __fastcall SV_ClientMP_GeneratePresetTestClientCustomization(ClientCustomizationInfo *presetCustomizationArray, const unsigned int presetCustomizationArraySize)
{
  return ?SV_ClientMP_GeneratePresetTestClientCustomization@@YAIPEAUClientCustomizationInfo@@I@Z(presetCustomizationArray, presetCustomizationArraySize);
}

/*
==============
SvClientMP::UpdatePing
==============
*/

void __fastcall SvClientMP::UpdatePing(SvClientMP *this)
{
  ?UpdatePing@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SV_ClientMP_GetClientPersistentDataModifiedFlags
==============
*/

unsigned __int8 *__fastcall SV_ClientMP_GetClientPersistentDataModifiedFlags(int clientNum)
{
  return ?SV_ClientMP_GetClientPersistentDataModifiedFlags@@YAPEAEH@Z(clientNum);
}

/*
==============
SV_ClientMP_DropIfInactive
==============
*/

void __fastcall SV_ClientMP_DropIfInactive(int slot, const char *reason, bool tellThem)
{
  ?SV_ClientMP_DropIfInactive@@YAXHPEBD_N@Z(slot, reason, tellThem);
}

/*
==============
SvClientMP::SendServerCommand
==============
*/

void __fastcall SvClientMP::SendServerCommand(SvClientMP *this, svscmd_type type, const char *cmd)
{
  ?SendServerCommand@SvClientMP@@UEAAXW4svscmd_type@@PEBD@Z(this, type, cmd);
}

/*
==============
SV_ClientMP_AddBot
==============
*/

gentity_s *__fastcall SV_ClientMP_AddBot(const char *bot_name, unsigned int head, unsigned int body, unsigned int helmet)
{
  return ?SV_ClientMP_AddBot@@YAPEAUgentity_s@@PEBDIII@Z(bot_name, head, body, helmet);
}

/*
==============
SvClientMP::FreeScriptId
==============
*/

void __fastcall SvClientMP::FreeScriptId(SvClientMP *this)
{
  ?FreeScriptId@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SV_ClientMP_GetChallenge
==============
*/

void __fastcall SV_ClientMP_GetChallenge(netadr_t *from)
{
  ?SV_ClientMP_GetChallenge@@YAXUnetadr_t@@@Z(from);
}

/*
==============
SvClientMP::ResetSnapshotFramesMyChanges
==============
*/

void __fastcall SvClientMP::ResetSnapshotFramesMyChanges(SvClientMP *this)
{
  ?ResetSnapshotFramesMyChanges@SvClientMP@@UEAAXXZ(this);
}

/*
==============
SV_ClientMP_ClearClients
==============
*/

void SV_ClientMP_ClearClients(void)
{
  ?SV_ClientMP_ClearClients@@YAXXZ();
}

/*
==============
SvClientMP::AllocateSnapshotForSequence
==============
*/

clientSnapshot_t *__fastcall SvClientMP::AllocateSnapshotForSequence(SvClientMP *this, const int sequence, const SvSnapshotStorageType storageType)
{
  return ?AllocateSnapshotForSequence@SvClientMP@@QEAAPEAUclientSnapshot_t@@HW4SvSnapshotStorageType@@@Z(this, sequence, storageType);
}

/*
==============
SV_ClientMP_GetPrivatePartyId
==============
*/

const bdSecurityID *__fastcall SV_ClientMP_GetPrivatePartyId(const int clientNum)
{
  return ?SV_ClientMP_GetPrivatePartyId@@YAPEBVbdSecurityID@@H@Z(clientNum);
}

/*
==============
SvClientMP::GetValidSnapshotForValidFrameConst
==============
*/

bool __fastcall SvClientMP::GetValidSnapshotForValidFrameConst(SvClientMP *this, const SvClientFrameInfo *frameInfo, const clientSnapshot_t **outSnapshot)
{
  return ?GetValidSnapshotForValidFrameConst@SvClientMP@@AEBA_NPEBUSvClientFrameInfo@@PEAPEBUclientSnapshot_t@@@Z(this, frameInfo, outSnapshot);
}

/*
==============
SV_ClientMP_FreeClients
==============
*/

void SV_ClientMP_FreeClients(void)
{
  ?SV_ClientMP_FreeClients@@YAXXZ();
}

/*
==============
SV_ClientMP_ICantHear
==============
*/

void __fastcall SV_ClientMP_ICantHear(netadr_t *from, msg_t *msg)
{
  ?SV_ClientMP_ICantHear@@YAXUnetadr_t@@PEAUmsg_t@@@Z(from, msg);
}

/*
==============
SV_ClientMP_StartExtrapolationWorkers
==============
*/

void SV_ClientMP_StartExtrapolationWorkers(void)
{
  ?SV_ClientMP_StartExtrapolationWorkers@@YAXXZ();
}

/*
==============
SV_ClientMP_GetLocalClientPing
==============
*/

int __fastcall SV_ClientMP_GetLocalClientPing(int clientNumOfLocalClient)
{
  return ?SV_ClientMP_GetLocalClientPing@@YAHH@Z(clientNumOfLocalClient);
}

/*
==============
SV_ClientMP_PostFrame
==============
*/

void SV_ClientMP_PostFrame(void)
{
  ?SV_ClientMP_PostFrame@@YAXXZ();
}

/*
==============
SV_ClientMP_MarkScriptId
==============
*/

void __fastcall SV_ClientMP_MarkScriptId(SvClientMP *cl)
{
  ?SV_ClientMP_MarkScriptId@@YAXPEAVSvClientMP@@@Z(cl);
}

/*
==============
SV_ClientMP_AllocScriptPers
==============
*/

void SV_ClientMP_AllocScriptPers(void)
{
  ?SV_ClientMP_AllocScriptPers@@YAXXZ();
}

/*
==============
SV_ClientMP_HasAssignedTeam
==============
*/

bool __fastcall SV_ClientMP_HasAssignedTeam(unsigned int clientNum)
{
  return ?SV_ClientMP_HasAssignedTeam@@YA_NI@Z(clientNum);
}

/*
==============
SvClientMP::GetValidAcknowledgedFrameInfoConst
==============
*/

bool __fastcall SvClientMP::GetValidAcknowledgedFrameInfoConst(SvClientMP *this, const SvClientFrameInfo **outFrameInfo)
{
  return ?GetValidAcknowledgedFrameInfoConst@SvClientMP@@QEBA_NPEAPEBUSvClientFrameInfo@@@Z(this, outFrameInfo);
}

/*
==============
SV_ClientMP_SetClientRankValue
==============
*/

void __fastcall SV_ClientMP_SetClientRankValue(const int clientNum, const float rankValue)
{
  ?SV_ClientMP_SetClientRankValue@@YAXHM@Z(clientNum, rankValue);
}

/*
==============
SV_CountClients
==============
*/

int __fastcall SV_CountClients()
{
  return ?SV_CountClients@@YAHXZ();
}

/*
==============
SvClientMP::DemoReadState
==============
*/

void __fastcall SvClientMP::DemoReadState(SvClientMP *this, sysFileHandle_t fileDemo)
{
  ?DemoReadState@SvClientMP@@QEAAXUsysFileHandle_t@@@Z(this, fileDemo);
}

/*
==============
SV_ClientMP_GetXNAddr
==============
*/

bool __fastcall SV_ClientMP_GetXNAddr(const int clientNum, XNADDR *outAddr)
{
  return ?SV_ClientMP_GetXNAddr@@YA_NHAEAUXNADDR@@@Z(clientNum, outAddr);
}

/*
==============
SV_ClientMP_ReceiveStartingCmd
==============
*/

void __fastcall SV_ClientMP_ReceiveStartingCmd(netadr_t *from, msg_t *msg)
{
  ?SV_ClientMP_ReceiveStartingCmd@@YAXUnetadr_t@@PEAUmsg_t@@@Z(from, msg);
}

/*
==============
SV_ClientMP_DropClient
==============
*/

void __fastcall SV_ClientMP_DropClient(SvClientMP *drop, const char *reason, bool tellThem)
{
  ?SV_ClientMP_DropClient@@YAXPEAVSvClientMP@@PEBD_N@Z(drop, reason, tellThem);
}

/*
==============
SV_ClientMP_DirectConnect
==============
*/

void __fastcall SV_ClientMP_DirectConnect(netadr_t *from)
{
  ?SV_ClientMP_DirectConnect@@YAXUnetadr_t@@@Z(from);
}

/*
==============
SV_ClientMP_DropIndex
==============
*/

void __fastcall SV_ClientMP_DropIndex(const unsigned int clientIndex, const char *reason, bool tellThem)
{
  ?SV_ClientMP_DropIndex@@YAXIPEBD_N@Z(clientIndex, reason, tellThem);
}

/*
==============
SvClientMP::SetMessageAcknowledged
==============
*/

void __fastcall SvClientMP::SetMessageAcknowledged(SvClientMP *this, const NetPingInfo *recvInfo)
{
  ?SetMessageAcknowledged@SvClientMP@@QEAAXAEBUNetPingInfo@@@Z(this, recvInfo);
}

/*
==============
SvClientMP::UpdatePingHistogram
==============
*/

void __fastcall SvClientMP::UpdatePingHistogram(SvClientMP *this)
{
  ?UpdatePingHistogram@SvClientMP@@AEAAXXZ(this);
}

/*
==============
SV_ClientMP_IsClientBot
==============
*/

bool __fastcall SV_ClientMP_IsClientBot(const unsigned int clientIndex)
{
  return ?SV_ClientMP_IsClientBot@@YA_NI@Z(clientIndex);
}

/*
==============
SV_ClientMP_GetExtrapolatedState
==============
*/

bool __fastcall SV_ClientMP_GetExtrapolatedState(const int clientIndex, SavedPlayerState **outExtrapState)
{
  return ?SV_ClientMP_GetExtrapolatedState@@YA_NHPEAPEAUSavedPlayerState@@@Z(clientIndex, outExtrapState);
}

/*
==============
SV_ClientMP_ShouldDoBlockTest
==============
*/

int __fastcall SV_ClientMP_ShouldDoBlockTest()
{
  return ?SV_ClientMP_ShouldDoBlockTest@@YAHXZ();
}

/*
==============
SV_ClientMP_GetClientPing
==============
*/

int __fastcall SV_ClientMP_GetClientPing(int clientNum)
{
  return ?SV_ClientMP_GetClientPing@@YAHH@Z(clientNum);
}

/*
==============
SV_ClientMP_CanSpawnBotOrTestClient
==============
*/

int __fastcall SV_ClientMP_CanSpawnBotOrTestClient(const gentity_s *ent)
{
  return ?SV_ClientMP_CanSpawnBotOrTestClient@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
SV_ClientMP_PreThink
==============
*/

bool __fastcall SV_ClientMP_PreThink(SvClientMP *cl, const usercmd_s *cmd)
{
  return ?SV_ClientMP_PreThink@@YA_NPEAVSvClientMP@@PEBUusercmd_s@@@Z(cl, cmd);
}

/*
==============
SV_ClientMP_UpdateConnectedClientsOnRestart
==============
*/

void __fastcall SV_ClientMP_UpdateConnectedClientsOnRestart(bool reconnect, bool savePersists)
{
  ?SV_ClientMP_UpdateConnectedClientsOnRestart@@YAX_N0@Z(reconnect, savePersists);
}

/*
==============
SV_ClientMP_GetClientStatsBuffer
==============
*/

unsigned __int8 *__fastcall SV_ClientMP_GetClientStatsBuffer(int clientNum)
{
  return ?SV_ClientMP_GetClientStatsBuffer@@YAPEAEH@Z(clientNum);
}

/*
==============
SvClientMP::ResetSnapshotFrames
==============
*/

void __fastcall SvClientMP::ResetSnapshotFrames(SvClientMP *this)
{
  ?ResetSnapshotFrames@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SV_ClientMP_ReceiveStats
==============
*/

void __fastcall SV_ClientMP_ReceiveStats(netadr_t *from, msg_t *msg)
{
  ?SV_ClientMP_ReceiveStats@@YAXUnetadr_t@@PEAUmsg_t@@@Z(from, msg);
}

/*
==============
SV_ClientMP_UpdateClientBuffering
==============
*/

void SV_ClientMP_UpdateClientBuffering(void)
{
  ?SV_ClientMP_UpdateClientBuffering@@YAXXZ();
}

/*
==============
SV_ClientMP_GetAssignedTeam
==============
*/

int __fastcall SV_ClientMP_GetAssignedTeam(unsigned int clientNum)
{
  return ?SV_ClientMP_GetAssignedTeam@@YAHI@Z(clientNum);
}

/*
==============
SV_ClientMP_IsClientConnected
==============
*/

bool __fastcall SV_ClientMP_IsClientConnected(const unsigned int clientIndex)
{
  return ?SV_ClientMP_IsClientConnected@@YA_NI@Z(clientIndex);
}

/*
==============
SvClientMP::SetBotCommandsAcknowledged
==============
*/

void __fastcall SvClientMP::SetBotCommandsAcknowledged(SvClientMP *this)
{
  ?SetBotCommandsAcknowledged@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SvClientMP::ClearCommandSequence
==============
*/

void __fastcall SvClientMP::ClearCommandSequence(SvClientMP *this)
{
  ?ClearCommandSequence@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SV_ClientMP_ProcessClientThinks
==============
*/

void SV_ClientMP_ProcessClientThinks(void)
{
  ?SV_ClientMP_ProcessClientThinks@@YAXXZ();
}

/*
==============
SvClientMP::GetLocalClientCount
==============
*/

unsigned int __fastcall SvClientMP::GetLocalClientCount(SvClientMP *this)
{
  return ?GetLocalClientCount@SvClientMP@@QEBAIXZ(this);
}

/*
==============
SV_ClientMP_SpawnBotOrTestClient
==============
*/

int __fastcall SV_ClientMP_SpawnBotOrTestClient(gentity_s *ent)
{
  return ?SV_ClientMP_SpawnBotOrTestClient@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
SV_ClientMP_AddTestClient
==============
*/

gentity_s *__fastcall SV_ClientMP_AddTestClient()
{
  return ?SV_ClientMP_AddTestClient@@YAPEAUgentity_s@@XZ();
}

/*
==============
SV_ClientMP_SendCodcasterClientMatchData
==============
*/

void __fastcall SV_ClientMP_SendCodcasterClientMatchData(const int clientNum)
{
  ?SV_ClientMP_SendCodcasterClientMatchData@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientMP_GetAssignedSquad_Internal
==============
*/

int __fastcall SV_ClientMP_GetAssignedSquad_Internal(const unsigned int clientNum)
{
  return ?SV_ClientMP_GetAssignedSquad_Internal@@YAHI@Z(clientNum);
}

/*
==============
SV_ClientMP_GetAssignedTeam_Internal
==============
*/

int __fastcall SV_ClientMP_GetAssignedTeam_Internal(unsigned int clientNum)
{
  return ?SV_ClientMP_GetAssignedTeam_Internal@@YAHI@Z(clientNum);
}

/*
==============
SV_HaveSameNetworkAddress
==============
*/

int __fastcall SV_HaveSameNetworkAddress(const unsigned int firstClientIndex, const unsigned int secondClientIndex)
{
  return ?SV_HaveSameNetworkAddress@@YAHII@Z(firstClientIndex, secondClientIndex);
}

/*
==============
SV_ClientMP_WriteDemoGamestate
==============
*/

void __fastcall SV_ClientMP_WriteDemoGamestate(const SvClientMP *client, msg_t *msg)
{
  ?SV_ClientMP_WriteDemoGamestate@@YAXPEBVSvClientMP@@PEAUmsg_t@@@Z(client, msg);
}

/*
==============
SV_ClientMP_EnterWorld
==============
*/

void __fastcall SV_ClientMP_EnterWorld(SvClientMP *client, usercmd_s *cmd, bool firstConnect)
{
  ?SV_ClientMP_EnterWorld@@YAXPEAVSvClientMP@@PEAUusercmd_s@@_N@Z(client, cmd, firstConnect);
}

/*
==============
SV_ClientMP_SendDisconnect
==============
*/

void __fastcall SV_ClientMP_SendDisconnect(SvClientMP *client, SvClientConnectionState state, const char *reason, const char *clientName)
{
  ?SV_ClientMP_SendDisconnect@@YAXPEAVSvClientMP@@W4SvClientConnectionState@@PEBD2@Z(client, state, reason, clientName);
}

/*
==============
SV_ClientMP_IsTestClient
==============
*/

int __fastcall SV_ClientMP_IsTestClient(int clientNum)
{
  return ?SV_ClientMP_IsTestClient@@YAHH@Z(clientNum);
}

/*
==============
SvClientMP::RemoveClientAtAddress
==============
*/

void __fastcall SvClientMP::RemoveClientAtAddress(const netadr_t *addr)
{
  ?RemoveClientAtAddress@SvClientMP@@SAXAEBUnetadr_t@@@Z(addr);
}

/*
==============
SV_ClientMP_DropBots
==============
*/

void __fastcall SV_ClientMP_DropBots(int numBotsToDrop, const bitarray<224> *teamsToDrop)
{
  ?SV_ClientMP_DropBots@@YAXHAEBV?$bitarray@$0OA@@@@Z(numBotsToDrop, teamsToDrop);
}

/*
==============
SV_ClientMP_Think
==============
*/

void __fastcall SV_ClientMP_Think(SvClientMP *cl, const usercmd_s *cmd)
{
  ?SV_ClientMP_Think@@YAXPEAVSvClientMP@@PEBUusercmd_s@@@Z(cl, cmd);
}

/*
==============
SV_ClientMP_FreeScriptPers
==============
*/

void SV_ClientMP_FreeScriptPers(void)
{
  ?SV_ClientMP_FreeScriptPers@@YAXXZ();
}

/*
==============
SvClientMP::GetUnsentSnapshotForSequence
==============
*/

clientSnapshot_t *__fastcall SvClientMP::GetUnsentSnapshotForSequence(SvClientMP *this, const int sequence)
{
  return ?GetUnsentSnapshotForSequence@SvClientMP@@QEAAPEAUclientSnapshot_t@@H@Z(this, sequence);
}

/*
==============
SV_ClientMP_SendClientPlayerData
==============
*/

void __fastcall SV_ClientMP_SendClientPlayerData(int clientNum)
{
  ?SV_ClientMP_SendClientPlayerData@@YAXH@Z(clientNum);
}

/*
==============
SvClientMP::UpdateCommandSequence
==============
*/

void __fastcall SvClientMP::UpdateCommandSequence(SvClientMP *this)
{
  ?UpdateCommandSequence@SvClientMP@@QEAAXXZ(this);
}

/*
==============
SV_ClientMP_IsLocalClient
==============
*/

int __fastcall SV_ClientMP_IsLocalClient(int clientNum)
{
  return ?SV_ClientMP_IsLocalClient@@YAHH@Z(clientNum);
}

/*
==============
SV_ClientMP_DropUserCommand
==============
*/

void __fastcall SV_ClientMP_DropUserCommand(SvClientMP *const cl, const usercmd_s *const cmd)
{
  ?SV_ClientMP_DropUserCommand@@YAXQEAVSvClientMP@@QEBUusercmd_s@@@Z(cl, cmd);
}

/*
==============
SV_CountTestClients
==============
*/

int __fastcall SV_CountTestClients()
{
  return ?SV_CountTestClients@@YAHXZ();
}

/*
==============
SV_ClientMP_AddMPBotToTeam
==============
*/

gentity_s *__fastcall SV_ClientMP_AddMPBotToTeam(int team)
{
  return ?SV_ClientMP_AddMPBotToTeam@@YAPEAUgentity_s@@H@Z(team);
}

/*
==============
SV_ClientMP_MarkClientScriptPers
==============
*/

void SV_ClientMP_MarkClientScriptPers(void)
{
  ?SV_ClientMP_MarkClientScriptPers@@YAXXZ();
}

/*
==============
SV_ClientMP_FinishExtrapolationWorkers
==============
*/

void SV_ClientMP_FinishExtrapolationWorkers(void)
{
  ?SV_ClientMP_FinishExtrapolationWorkers@@YAXXZ();
}

/*
==============
SV_ClientMP_IsUsingOnlineStatsOffline
==============
*/

bool __fastcall SV_ClientMP_IsUsingOnlineStatsOffline(int clientNum)
{
  return ?SV_ClientMP_IsUsingOnlineStatsOffline@@YA_NH@Z(clientNum);
}

/*
==============
SvClientMP::RecordPredictedOrigin
==============
*/

void __fastcall SvClientMP::RecordPredictedOrigin(SvClientMP *this, const SvClientPredictedOrigin *inPredictedOrigin)
{
  ?RecordPredictedOrigin@SvClientMP@@QEAAXPEBUSvClientPredictedOrigin@@@Z(this, inPredictedOrigin);
}

/*
==============
SV_HasAllClientStatPackets
==============
*/

int __fastcall SV_HasAllClientStatPackets(const SvClientMP *cl)
{
  return ?SV_HasAllClientStatPackets@@YAHPEBVSvClientMP@@@Z(cl);
}

/*
==============
SV_PrivatePartyBackout_f
==============
*/
void SV_PrivatePartyBackout_f(SvClientMP *cl)
{
  SV_PrivateParty_BroadcastBackout(cl, 0);
}

/*
==============
SV_PrivatePartyPlayAgain_f
==============
*/
void SV_PrivatePartyPlayAgain_f(SvClientMP *cl)
{
  SV_PrivateParty_BroadcastBackout(cl, 1);
}

/*
==============
SV_EndCodcasterClientMatchDataSend_f
==============
*/
void SV_EndCodcasterClientMatchDataSend_f(SvClientMP *cl)
{
  cl->sendCodcasterClientMatchData = 0;
}

/*
==============
SV_EndClientMatchDataSend_f
==============
*/
void SV_EndClientMatchDataSend_f(SvClientMP *cl)
{
  cl->sendMatchData = 0;
}

/*
==============
SV_UpdateUserinfo_f
==============
*/
void SV_UpdateUserinfo_f(SvClientMP *cl)
{
  const char *v2; 
  int MpClientIndex; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3727, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  v2 = SV_Cmd_Argv(1);
  Core_strcpy(cl->userinfo, 0x400ui64, v2);
  SV_ClientMP_UserInfoChanged(cl);
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  G_ClientMP_UserinfoChanged(MpClientIndex);
}

/*
==============
SV_ClientMP_Disconnect_f
==============
*/
void SV_ClientMP_Disconnect_f(SvClientMP *cl)
{
  unsigned int MpClientIndex; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3739, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  Com_Printf(131087, "%s: disconnect request received from client %i\n", cl->name, MpClientIndex);
  SV_ClientMP_DropClient(cl, (const char *)&stru_144009380, 1);
}

/*
==============
SvClientMP::AddClientAtAddress
==============
*/
void SvClientMP::AddClientAtAddress(const netadr_t *addr, const unsigned int clientNum)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v6; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  __int128 v9; 

  if ( !SV_IsDemoPlaying() )
  {
    v4 = (int)addr->localNetID | (unsigned __int64)((__int64)addr->addrHandleIndex << 32);
    DWORD2(v9) = clientNum;
    *(_QWORD *)&v9 = v4;
    v5 = ((unsigned int)v4 ^ HIDWORD(v4)) % 0x10D;
    if ( v5 >= 0x10D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v6 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&SvClientMP::ms_clientAddrMap.m_buckets.ntl::internal::hash_table<unsigned __int64,unsigned int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,unsigned int>,200,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> >,269>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1> >::m_data[v5];
    v7 = *v6;
    if ( *v6 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6 )
    {
LABEL_11:
      if ( !SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<24> *)SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next == &SvClientMP::ms_clientAddrMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xC8ui64) )
        __debugbreak();
      mp_next = SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next;
      SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next = SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next->mp_next;
      mp_next->mp_next = NULL;
      *(_OWORD *)&mp_next[1].mp_next = v9;
      mp_next->mp_next = *v6;
      *v6 = mp_next;
      ++SvClientMP::ms_clientAddrMap.m_currentNumItems;
    }
    else
    {
      while ( 1 )
      {
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v7[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v4 )
          break;
        v7 = v7->mp_next;
        if ( v7 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6 )
          goto LABEL_11;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4240, ASSERT_TYPE_ASSERT, "( result.second )", (const char *)&queryFormat, "result.second") )
        __debugbreak();
    }
  }
}

/*
==============
SvClientMP::AllocateSnapshotForSequence
==============
*/
clientSnapshot_t *SvClientMP::AllocateSnapshotForSequence(SvClientMP *this, const int sequence, const SvSnapshotStorageType storageType)
{
  char *v6; 
  clientSnapshot_t *p_m_blindSnapshotFrame; 
  clientSnapshotEncodingOutput_t *SnapshotEncodingOutput; 
  clientSnapshot_t *result; 

  if ( sequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4316, ASSERT_TYPE_ASSERT, "( sequence ) > ( 0 )", "sequence > 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  v6 = (char *)this + 72 * (sequence & 0x3F);
  *((_QWORD *)v6 + 46570) = 0i64;
  *((_QWORD *)v6 + 46571) = 0i64;
  *((_QWORD *)v6 + 46572) = 0i64;
  *((_QWORD *)v6 + 46573) = 0i64;
  *((_QWORD *)v6 + 46574) = 0i64;
  *((_QWORD *)v6 + 46575) = 0i64;
  *((_QWORD *)v6 + 46576) = 0i64;
  *((_QWORD *)v6 + 46577) = 0i64;
  *((_DWORD *)v6 + 93152) = -1;
  *((_DWORD *)v6 + 93143) = -1;
  *((_DWORD *)v6 + 93140) = sequence;
  v6[372566] = storageType;
  *((_QWORD *)v6 + 46569) = -1i64;
  if ( storageType == TRANSIENT )
  {
    p_m_blindSnapshotFrame = &this->m_blindSnapshotFrame;
  }
  else
  {
    *((_WORD *)v6 + 186282) = truncate_cast<unsigned short,unsigned int>(this->m_frameIndexFullSequence % SvClientMP::ms_fullSnapFrameCountPerClient);
    ++this->m_frameIndexFullSequence;
    p_m_blindSnapshotFrame = SvClientMP::GetSnapshotFullFrame(this, *((unsigned __int16 *)v6 + 186282));
    SnapshotEncodingOutput = SvClientMP::GetSnapshotEncodingOutput(this, *((unsigned __int16 *)v6 + 186282));
    if ( !SnapshotEncodingOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4341, ASSERT_TYPE_ASSERT, "( snapEncodingOutput )", (const char *)&queryFormat, "snapEncodingOutput") )
      __debugbreak();
    memset_0(SnapshotEncodingOutput, 0, sizeof(clientSnapshotEncodingOutput_t));
  }
  if ( !p_m_blindSnapshotFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4345, ASSERT_TYPE_ASSERT, "( snap )", (const char *)&queryFormat, "snap") )
    __debugbreak();
  SvClientMP::ClearClientSnapshot(p_m_blindSnapshotFrame);
  result = p_m_blindSnapshotFrame;
  p_m_blindSnapshotFrame->assignedSequence = sequence;
  return result;
}

/*
==============
SvClientMP::ClearCommandSequence
==============
*/
void SvClientMP::ClearCommandSequence(SvClientMP *this)
{
  memset_0(this->m_cmdRecvBuffer, 0, 264i64 * SvClientMP::ms_cmdCountPerClient);
  memset_0(this->m_cmdRecvPredict, 0, 60i64 * SvClientMP::ms_cmdCountPerClient);
  memset_0(this->m_cmdRecvSequence, 0, 4i64 * SvClientMP::ms_cmdCountPerClient);
  this->commandSequence = 0;
}

/*
==============
SvClientMP::DemoReadState
==============
*/
void SvClientMP::DemoReadState(SvClientMP *this, sysFileHandle_t fileDemo)
{
  clientSnapshot_t *m_fullSnapshotFrames; 
  clientSnapshotEncodingOutput_t *m_fullSnapshotEncodingOutputs; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  GSnapshotWeaponMap weaponMapCopy; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  int buffer; 

  if ( !this->m_fullSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4854, ASSERT_TYPE_ASSERT, "( m_fullSnapshotFrames != nullptr )", (const char *)&queryFormat, "m_fullSnapshotFrames != nullptr") )
    __debugbreak();
  m_fullSnapshotFrames = this->m_fullSnapshotFrames;
  GSnapshotWeaponMap::GSnapshotWeaponMap(&weaponMapCopy, &this->m_blindSnapshotFrame.weaponMap);
  v11 = *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[0].itemCount;
  v12 = *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[2].itemCount;
  v13 = *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[4].itemCount;
  if ( !this->m_fullSnapshotEncodingOutputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4859, ASSERT_TYPE_ASSERT, "( m_fullSnapshotEncodingOutputs != nullptr )", (const char *)&queryFormat, "m_fullSnapshotEncodingOutputs != nullptr") )
    __debugbreak();
  m_fullSnapshotEncodingOutputs = this->m_fullSnapshotEncodingOutputs;
  SV_DemoMP_Read(&this->state, 0x5CA58ui64, fileDemo);
  v6 = 0;
  this->scriptId = 0;
  SV_DemoMP_Read(&buffer, 4ui64, fileDemo);
  v7 = SvClientMP::ms_fullSnapFrameCountPerClient;
  if ( SvClientMP::ms_fullSnapFrameCountPerClient != buffer )
  {
    v9 = buffer;
    LODWORD(v8) = SvClientMP::ms_fullSnapFrameCountPerClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4868, ASSERT_TYPE_ASSERT, "( ms_fullSnapFrameCountPerClient ) == ( snapshotFrameCount )", "ms_fullSnapFrameCountPerClient == snapshotFrameCount\n\t%i, %i", v8, v9) )
      __debugbreak();
    v7 = SvClientMP::ms_fullSnapFrameCountPerClient;
  }
  if ( v7 )
  {
    do
      SvClientMP::ClearClientSnapshot(&m_fullSnapshotFrames[v6++]);
    while ( v6 < SvClientMP::ms_fullSnapFrameCountPerClient );
  }
  this->m_fullSnapshotFrames = m_fullSnapshotFrames;
  GSnapshotWeaponMap::GSnapshotWeaponMap(&this->m_blindSnapshotFrame.weaponMap, &weaponMapCopy);
  *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[0].itemCount = v11;
  *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[2].itemCount = v12;
  *(__m256i *)&this->m_blindSnapshotFrame.streamSync.streamSyncLists[4].itemCount = v13;
  SvClientMP::ClearClientSnapshot(&this->m_blindSnapshotFrame);
  this->m_fullSnapshotEncodingOutputs = m_fullSnapshotEncodingOutputs;
  SV_DemoMP_Read(m_fullSnapshotEncodingOutputs, 104i64 * SvClientMP::ms_fullSnapFrameCountPerClient, fileDemo);
  GSnapshotWeaponMap::~GSnapshotWeaponMap(&weaponMapCopy);
}

/*
==============
SvClientMP::DemoSaveState
==============
*/
void SvClientMP::DemoSaveState(SvClientMP *this, sysFileHandle_t fileDemo)
{
  SV_DemoMP_Write(&this->state, 0x5CA58ui64, fileDemo);
  if ( !this->m_fullSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4831, ASSERT_TYPE_ASSERT, "( m_fullSnapshotFrames != nullptr )", (const char *)&queryFormat, "m_fullSnapshotFrames != nullptr") )
    __debugbreak();
  if ( !SvClientMP::ms_fullSnapFrameCountPerClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4832, ASSERT_TYPE_ASSERT, "( ms_fullSnapFrameCountPerClient > 0 )", (const char *)&queryFormat, "ms_fullSnapFrameCountPerClient > 0") )
    __debugbreak();
  if ( !this->m_fullSnapshotEncodingOutputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4833, ASSERT_TYPE_ASSERT, "( m_fullSnapshotEncodingOutputs != nullptr )", (const char *)&queryFormat, "m_fullSnapshotEncodingOutputs != nullptr") )
    __debugbreak();
  SV_DemoMP_Write(&SvClientMP::ms_fullSnapFrameCountPerClient, 4ui64, fileDemo);
  SV_DemoMP_Write(this->m_fullSnapshotEncodingOutputs, 104i64 * SvClientMP::ms_fullSnapFrameCountPerClient, fileDemo);
}

/*
==============
SvClientMP::FindClientAtAddress
==============
*/
SvClientMP *SvClientMP::FindClientAtAddress(const netadr_t *addr)
{
  unsigned int Int; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> > *v6; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> > *mp_next; 
  SvClientMP *MpClient; 

  if ( SV_IsDemoPlaying() )
  {
    Int = SV_Demo_GetInt();
    if ( Int != -1 )
    {
      if ( Int >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4201, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", Int, SvClient::ms_clientCount) )
        __debugbreak();
      return SvClientMP::GetMpClient(Int);
    }
    return 0i64;
  }
  v4 = (int)addr->localNetID | (unsigned __int64)((__int64)addr->addrHandleIndex << 32);
  v5 = ((unsigned int)addr->localNetID ^ HIDWORD(v4)) % 0x10D;
  if ( v5 >= 0x10D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v6 = &SvClientMP::ms_clientAddrMap.m_buckets.ntl::internal::hash_table<unsigned __int64,unsigned int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,unsigned int>,200,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> >,269>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1> >::m_data[v5];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> > *)v6->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> > *)v6->m_listHead.m_sentinel.mp_next == v6 )
  {
LABEL_16:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_next[1].m_listHead.m_sentinel.mp_next == (ntl::internal::slist_node_base *)v4 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v6 )
        goto LABEL_16;
    }
  }
  if ( !mp_next )
  {
    SV_Record_GetInt(-1);
    return 0i64;
  }
  MpClient = SvClientMP::GetMpClient((unsigned int)mp_next[2].m_listHead.m_sentinel.mp_next);
  if ( !NetConnection::IsOpened(&MpClient->clientConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4214, ASSERT_TYPE_ASSERT, "( cl->clientConnection.IsOpened() )", (const char *)&queryFormat, "cl->clientConnection.IsOpened()") )
    __debugbreak();
  SV_Record_GetInt((int)mp_next[2].m_listHead.m_sentinel.mp_next);
  return MpClient;
}

/*
==============
SvClientMP::FreeScriptId
==============
*/
void SvClientMP::FreeScriptId(SvClientMP *this)
{
  scrContext_t *v2; 

  if ( this->scriptId )
  {
    v2 = ScriptContext_Server();
    Scr_FreeExtArray(v2, this->scriptId);
    this->scriptId = 0;
  }
}

/*
==============
SvClientMP::GetCommandDeltaBaselineForSequence
==============
*/
char SvClientMP::GetCommandDeltaBaselineForSequence(SvClientMP *this, const int cmdDelta, usercmd_s *const outCmd, CmdPredict *const outPredict)
{
  usercmd_s *v5; 
  unsigned int v8; 
  int v9; 
  __int64 v11; 
  CmdPredict *v12; 
  __int64 v13; 
  usercmd_s *v14; 
  __int128 v15; 
  float v16; 
  __int64 v17; 

  v5 = outCmd;
  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4580, ASSERT_TYPE_ASSERT, "( outCmd != nullptr )", (const char *)&queryFormat, "outCmd != nullptr") )
    __debugbreak();
  if ( !this->m_cmdRecvBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4581, ASSERT_TYPE_ASSERT, "( m_cmdRecvBuffer != nullptr )", (const char *)&queryFormat, "m_cmdRecvBuffer != nullptr") )
    __debugbreak();
  if ( !this->m_cmdRecvPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4582, ASSERT_TYPE_ASSERT, "( m_cmdRecvPredict != nullptr )", (const char *)&queryFormat, "m_cmdRecvPredict != nullptr") )
    __debugbreak();
  if ( !this->m_cmdRecvSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4583, ASSERT_TYPE_ASSERT, "( m_cmdRecvSequence != nullptr )", (const char *)&queryFormat, "m_cmdRecvSequence != nullptr") )
    __debugbreak();
  v8 = SvClientMP::ms_cmdCountPerClient;
  if ( !SvClientMP::ms_cmdCountPerClient )
  {
    LODWORD(v17) = SvClientMP::ms_cmdCountPerClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4584, ASSERT_TYPE_ASSERT, "( ms_cmdCountPerClient ) > ( 0 )", "ms_cmdCountPerClient > 0\n\t%i, %i", v17, 0i64) )
      __debugbreak();
    v8 = SvClientMP::ms_cmdCountPerClient;
  }
  if ( cmdDelta )
  {
    v9 = this->netchan.incomingSequence - cmdDelta;
    if ( v9 <= 0 )
    {
      Com_Printf(131087, "GetCommandDeltaBaselineForSequence: Delta from invalid command.\n");
      return 0;
    }
    v11 = (int)(v9 % v8);
    if ( v9 != this->m_cmdRecvSequence[v11] )
    {
      Com_Printf(131087, "GetCommandDeltaBaselineForSequence: Delta from command that is too old.\n");
      return 0;
    }
    v12 = &this->m_cmdRecvPredict[v11];
    v13 = 2i64;
    v14 = &this->m_cmdRecvBuffer[v11];
    do
    {
      v5 = (usercmd_s *)((char *)v5 + 128);
      v15 = *(_OWORD *)&v14->buttons;
      v14 = (usercmd_s *)((char *)v14 + 128);
      *(_OWORD *)&v5[-1].offHand.attachmentVariationIndices[13] = v15;
      *(_OWORD *)&v5[-1].offHand.weaponCamo = *(_OWORD *)&v14[-1].offHand.weaponCamo;
      *(_OWORD *)v5[-1].remoteControlMove = *(_OWORD *)v14[-1].remoteControlMove;
      *(_OWORD *)v5[-1].vehAngles = *(_OWORD *)v14[-1].vehAngles;
      *(_OWORD *)&v5[-1].vehOrgZ = *(_OWORD *)&v14[-1].vehOrgZ;
      *(_OWORD *)&v5[-1].gunYOfs = *(_OWORD *)&v14[-1].gunYOfs;
      *(_OWORD *)v5[-1].sightedClientsMask.data = *(_OWORD *)v14[-1].sightedClientsMask.data;
      *(_OWORD *)&v5[-1].sightedClientsMask.data[4] = *(_OWORD *)&v14[-1].sightedClientsMask.data[4];
      --v13;
    }
    while ( v13 );
    v5->buttons = v14->buttons;
    *(__m256i *)outPredict->origin.v = *(__m256i *)v12->origin.v;
    *(_OWORD *)outPredict->extrapData.packedBobCycle = *(_OWORD *)v12->extrapData.packedBobCycle;
    *(double *)outPredict->vehOrigin.v = *(double *)v12->vehOrigin.v;
    v16 = v12->vehOrigin.v[2];
  }
  else
  {
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon_mp\\msg_mp.h", 258, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    memset_0(v5, 0, sizeof(usercmd_s));
    BG_ClearMeleeChargeCmd(v5);
    v16 = 0.0;
    *(_QWORD *)outPredict->origin.v = 0i64;
    *(_QWORD *)&outPredict->origin.z = 0i64;
    *(_QWORD *)&outPredict->extrapData.offset.xy.y = 0i64;
    *(_QWORD *)&outPredict->extrapData.time = 0i64;
    *(_QWORD *)outPredict->extrapData.packedBobCycle = 0i64;
    *(_QWORD *)&outPredict->vehActive = 0i64;
    *(_QWORD *)outPredict->vehOrigin.v = 0i64;
  }
  outPredict->vehOrigin.v[2] = v16;
  return 1;
}

/*
==============
SvClientMP::GetFramePingHistory
==============
*/
char SvClientMP::GetFramePingHistory(SvClientMP *this, const int sequence, int *outPing)
{
  char result; 

  if ( sequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4457, ASSERT_TYPE_ASSERT, "( sequence ) > ( 0 )", "sequence > 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  if ( !outPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4458, ASSERT_TYPE_ASSERT, "( outPing )", (const char *)&queryFormat, "outPing") )
    __debugbreak();
  if ( this->m_frameInfo[sequence & 0x3F].sentSequence == sequence )
  {
    *outPing = NetPing::GetSockPing(&this->m_frameInfo[sequence & 0x3F].ping);
    return 1;
  }
  else
  {
    result = 0;
    *outPing = 0;
  }
  return result;
}

/*
==============
SvClientMP::GetLocalClientCount
==============
*/
__int64 SvClientMP::GetLocalClientCount(SvClientMP *this)
{
  return (unsigned int)(this->bIsSplitscreenClient != 0) + 1;
}

/*
==============
SvClientMP::GetPredictedOrigin
==============
*/
char SvClientMP::GetPredictedOrigin(SvClientMP *this, const int commandTime, SvClientPredictedOrigin *outPredictedOrigin)
{
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  char result; 
  __int64 v10; 
  __int64 v11; 

  if ( commandTime <= 0 )
  {
LABEL_8:
    result = 0;
    *(_QWORD *)&outPredictedOrigin->commandTime = 0i64;
    *(_QWORD *)outPredictedOrigin->origin.v = 0i64;
    *(_QWORD *)&outPredictedOrigin->origin.z = 0i64;
    *(_QWORD *)&outPredictedOrigin->vehicleOrigin.y = 0i64;
    *(_QWORD *)outPredictedOrigin->extrapData.offset.v = 0i64;
    *(_QWORD *)&outPredictedOrigin->extrapData.offset.z = 0i64;
    *(_QWORD *)&outPredictedOrigin->extrapData.inputTime = 0i64;
    outPredictedOrigin->extrapData.packedBobCycle[1] = 0;
  }
  else
  {
    v6 = 37;
    while ( 1 )
    {
      v7 = (v6 + this->m_nextPredictedIndex) % 0x26;
      if ( v7 >= 0x26 )
      {
        LODWORD(v11) = 38;
        LODWORD(v10) = (v6 + this->m_nextPredictedIndex) % 0x26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4283, ASSERT_TYPE_ASSERT, "(unsigned)( predictedIndex ) < (unsigned)( ( sizeof( *array_counter( m_predictedOrigins ) ) + 0 ) )", "predictedIndex doesn't index ARRAY_COUNT( m_predictedOrigins )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v8 = (int)v7;
      if ( this->m_predictedOrigins[v8].commandTime == commandTime )
        break;
      if ( --v6 < 0 )
        goto LABEL_8;
    }
    *(__m256i *)&outPredictedOrigin->commandTime = *(__m256i *)&this->m_predictedOrigins[v8].commandTime;
    *(_OWORD *)outPredictedOrigin->extrapData.offset.v = *(_OWORD *)this->m_predictedOrigins[v8].extrapData.offset.v;
    *(double *)&outPredictedOrigin->extrapData.inputTime = *(double *)&this->m_predictedOrigins[v8].extrapData.inputTime;
    outPredictedOrigin->extrapData.packedBobCycle[1] = this->m_predictedOrigins[v8].extrapData.packedBobCycle[1];
    return 1;
  }
  return result;
}

/*
==============
SvClientMP::GetUnsentSnapshotForSequence
==============
*/
clientSnapshot_t *SvClientMP::GetUnsentSnapshotForSequence(SvClientMP *this, const int sequence)
{
  char *v4; 
  unsigned __int8 v5; 
  __int64 v7; 
  __int64 v9; 

  if ( sequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4356, ASSERT_TYPE_ASSERT, "( sequence ) > ( 0 )", "sequence > 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  v4 = (char *)this + 72 * (sequence & 0x3F);
  if ( *((_DWORD *)v4 + 93140) != sequence )
  {
    LODWORD(v9) = sequence;
    LODWORD(v7) = *((_DWORD *)v4 + 93140);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4361, ASSERT_TYPE_ASSERT, "( frameInfo->snapshotSequence ) == ( sequence )", "frameInfo->snapshotSequence == sequence\n\t%i, %i", v7, v9) )
      __debugbreak();
  }
  if ( *((_DWORD *)v4 + 93144) )
  {
    LODWORD(v7) = *((_DWORD *)v4 + 93144);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4362, ASSERT_TYPE_ASSERT, "( frameInfo->sentTime ) == ( 0 )", "frameInfo->sentTime == 0\n\t%i, %i", v7, 0i64) )
      __debugbreak();
  }
  if ( *((_DWORD *)v4 + 93143) != -1 )
  {
    LODWORD(v9) = -1;
    LODWORD(v7) = *((_DWORD *)v4 + 93143);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4363, ASSERT_TYPE_ASSERT, "( frameInfo->sentSequence ) == ( -1 )", "frameInfo->sentSequence == -1\n\t%i, %i", v7, v9) )
      __debugbreak();
  }
  v5 = v4[372566];
  if ( v5 == 1 )
    return &this->m_blindSnapshotFrame;
  if ( v5 )
  {
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4371, ASSERT_TYPE_ASSERT, "( frameInfo->snapshotClientStorageType ) == ( SvSnapshotStorageType::FULL )", "frameInfo->snapshotClientStorageType == SvSnapshotStorageType::FULL\n\t%i, %i", v7, 0i64) )
      __debugbreak();
  }
  return SvClientMP::GetSnapshotFullFrame(this, *((unsigned __int16 *)v4 + 186282));
}

/*
==============
SvClientMP::GetValidAcknowledgedFrameInfoConst
==============
*/
bool SvClientMP::GetValidAcknowledgedFrameInfoConst(SvClientMP *this, const SvClientFrameInfo **outFrameInfo)
{
  int messageAcknowledge; 
  bool result; 

  if ( !outFrameInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4565, ASSERT_TYPE_ASSERT, "( outFrameInfo )", (const char *)&queryFormat, "outFrameInfo") )
    __debugbreak();
  if ( this->hasAckedBaselineData )
  {
    messageAcknowledge = this->messageAcknowledge;
    if ( messageAcknowledge > 0 )
      return SvClientMP::GetValidFrameInfoForSequenceConst(this, messageAcknowledge, outFrameInfo);
  }
  result = 0;
  *outFrameInfo = NULL;
  return result;
}

/*
==============
SvClientMP::GetValidFrameInfoForSequenceConst
==============
*/
char SvClientMP::GetValidFrameInfoForSequenceConst(SvClientMP *this, const int sequence, const SvClientFrameInfo **outFrameInfo)
{
  const SvClientFrameInfo *FrameInfoForSequenceConst; 

  if ( sequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4379, ASSERT_TYPE_ASSERT, "( sequence > 0 )", (const char *)&queryFormat, "sequence > 0") )
    __debugbreak();
  if ( !outFrameInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4380, ASSERT_TYPE_ASSERT, "( outFrameInfo )", (const char *)&queryFormat, "outFrameInfo") )
    __debugbreak();
  FrameInfoForSequenceConst = SvClientMP::GetFrameInfoForSequenceConst(this, sequence);
  if ( FrameInfoForSequenceConst->sentSequence == sequence )
  {
    *outFrameInfo = FrameInfoForSequenceConst;
    return 1;
  }
  else
  {
    *outFrameInfo = NULL;
    return 0;
  }
}

/*
==============
SvClientMP::GetValidSnapshotForSentSequenceConst
==============
*/
bool SvClientMP::GetValidSnapshotForSentSequenceConst(SvClientMP *this, const int sequence, const clientSnapshot_t **outSnapshot)
{
  const clientSnapshot_t *v3; 
  const SvClientFrameInfo *FrameInfoForSequenceConst; 
  int sentSequence; 
  SvSnapshotStorageType snapshotClientStorageType; 
  clientSnapshot_t *p_m_blindSnapshotFrame; 
  __int64 snapshotIndex; 
  bool result; 
  __int64 v13; 
  __int64 v14; 

  v3 = NULL;
  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4436, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  if ( !outSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4437, ASSERT_TYPE_ASSERT, "( outSnapshot )", (const char *)&queryFormat, "outSnapshot") )
    __debugbreak();
  if ( !sequence )
    goto LABEL_30;
  if ( sequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4379, ASSERT_TYPE_ASSERT, "( sequence > 0 )", (const char *)&queryFormat, "sequence > 0") )
    __debugbreak();
  FrameInfoForSequenceConst = SvClientMP::GetFrameInfoForSequenceConst(this, sequence);
  sentSequence = FrameInfoForSequenceConst->sentSequence;
  if ( sentSequence != sequence )
    goto LABEL_30;
  if ( sentSequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4401, ASSERT_TYPE_ASSERT, "( frameInfo->sentSequence > 0 )", (const char *)&queryFormat, "frameInfo->sentSequence > 0") )
    __debugbreak();
  if ( FrameInfoForSequenceConst->snapshotSequence != FrameInfoForSequenceConst->sentSequence )
    goto LABEL_30;
  snapshotClientStorageType = FrameInfoForSequenceConst->snapshotClientStorageType;
  if ( snapshotClientStorageType == TRANSIENT )
  {
    p_m_blindSnapshotFrame = &this->m_blindSnapshotFrame;
  }
  else
  {
    if ( snapshotClientStorageType )
    {
      LODWORD(v13) = (unsigned __int8)snapshotClientStorageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4415, ASSERT_TYPE_ASSERT, "( frameInfo->snapshotClientStorageType ) == ( SvSnapshotStorageType::FULL )", "frameInfo->snapshotClientStorageType == SvSnapshotStorageType::FULL\n\t%i, %i", v13, 0i64) )
        __debugbreak();
    }
    snapshotIndex = FrameInfoForSequenceConst->snapshotIndex;
    if ( (unsigned int)snapshotIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
    {
      LODWORD(v14) = SvClientMP::ms_fullSnapFrameCountPerClient;
      LODWORD(v13) = FrameInfoForSequenceConst->snapshotIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    p_m_blindSnapshotFrame = &this->m_fullSnapshotFrames[snapshotIndex];
  }
  if ( !p_m_blindSnapshotFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4420, ASSERT_TYPE_ASSERT, "( frameSnapshot )", (const char *)&queryFormat, "frameSnapshot") )
    __debugbreak();
  if ( p_m_blindSnapshotFrame->assignedSequence == FrameInfoForSequenceConst->snapshotSequence )
  {
    result = 1;
    v3 = p_m_blindSnapshotFrame;
  }
  else
  {
LABEL_30:
    result = 0;
  }
  *outSnapshot = v3;
  return result;
}

/*
==============
SvClientMP::GetValidSnapshotForValidFrameConst
==============
*/
char SvClientMP::GetValidSnapshotForValidFrameConst(SvClientMP *this, const SvClientFrameInfo *frameInfo, const clientSnapshot_t **outSnapshot)
{
  SvSnapshotStorageType snapshotClientStorageType; 
  clientSnapshot_t *p_m_blindSnapshotFrame; 
  __int64 snapshotIndex; 
  __int64 v10; 
  __int64 v11; 

  if ( !frameInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4400, ASSERT_TYPE_ASSERT, "( frameInfo )", (const char *)&queryFormat, "frameInfo") )
    __debugbreak();
  if ( frameInfo->sentSequence <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4401, ASSERT_TYPE_ASSERT, "( frameInfo->sentSequence > 0 )", (const char *)&queryFormat, "frameInfo->sentSequence > 0") )
    __debugbreak();
  if ( frameInfo->snapshotSequence != frameInfo->sentSequence )
    goto LABEL_22;
  snapshotClientStorageType = frameInfo->snapshotClientStorageType;
  if ( snapshotClientStorageType == TRANSIENT )
  {
    p_m_blindSnapshotFrame = &this->m_blindSnapshotFrame;
  }
  else
  {
    if ( snapshotClientStorageType )
    {
      LODWORD(v10) = (unsigned __int8)snapshotClientStorageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4415, ASSERT_TYPE_ASSERT, "( frameInfo->snapshotClientStorageType ) == ( SvSnapshotStorageType::FULL )", "frameInfo->snapshotClientStorageType == SvSnapshotStorageType::FULL\n\t%i, %i", v10, 0i64) )
        __debugbreak();
    }
    snapshotIndex = frameInfo->snapshotIndex;
    if ( (unsigned int)snapshotIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
    {
      LODWORD(v11) = SvClientMP::ms_fullSnapFrameCountPerClient;
      LODWORD(v10) = frameInfo->snapshotIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    p_m_blindSnapshotFrame = &this->m_fullSnapshotFrames[snapshotIndex];
  }
  if ( !p_m_blindSnapshotFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4420, ASSERT_TYPE_ASSERT, "( frameSnapshot )", (const char *)&queryFormat, "frameSnapshot") )
    __debugbreak();
  if ( p_m_blindSnapshotFrame->assignedSequence == frameInfo->snapshotSequence )
  {
    *outSnapshot = p_m_blindSnapshotFrame;
    return 1;
  }
  else
  {
LABEL_22:
    *outSnapshot = NULL;
    return 0;
  }
}

/*
==============
SvClientMP::IsLocalClient
==============
*/
bool SvClientMP::IsLocalClient(SvClientMP *this)
{
  return NetConnection::IsLocal(&this->clientConnection);
}

/*
==============
SvClientMP::IsTestClient
==============
*/
bool SvClientMP::IsTestClient(SvClientMP *this)
{
  return this->testClient == TC_TEST_CLIENT;
}

/*
==============
SvClientMP::RecordPredictedOrigin
==============
*/
void SvClientMP::RecordPredictedOrigin(SvClientMP *this, const SvClientPredictedOrigin *inPredictedOrigin)
{
  unsigned int m_nextPredictedIndex; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !inPredictedOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4259, ASSERT_TYPE_ASSERT, "( inPredictedOrigin )", (const char *)&queryFormat, "inPredictedOrigin") )
    __debugbreak();
  if ( inPredictedOrigin->commandTime > 0 )
  {
    m_nextPredictedIndex = this->m_nextPredictedIndex;
    v5 = m_nextPredictedIndex % 0x26;
    this->m_nextPredictedIndex = m_nextPredictedIndex + 1;
    if ( m_nextPredictedIndex % 0x26 >= 0x26 )
    {
      LODWORD(v7) = m_nextPredictedIndex % 0x26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4268, ASSERT_TYPE_ASSERT, "(unsigned)( predictedIndex ) < (unsigned)( ( sizeof( *array_counter( m_predictedOrigins ) ) + 0 ) )", "predictedIndex doesn't index ARRAY_COUNT( m_predictedOrigins )\n\t%i not in [0, %i)", v7, 38) )
        __debugbreak();
    }
    v6 = v5;
    *(__m256i *)&this->m_predictedOrigins[v6].commandTime = *(__m256i *)&inPredictedOrigin->commandTime;
    *(_OWORD *)this->m_predictedOrigins[v6].extrapData.offset.v = *(_OWORD *)inPredictedOrigin->extrapData.offset.v;
    *(double *)&this->m_predictedOrigins[v6].extrapData.inputTime = *(double *)&inPredictedOrigin->extrapData.inputTime;
    this->m_predictedOrigins[v6].extrapData.packedBobCycle[1] = inPredictedOrigin->extrapData.packedBobCycle[1];
  }
}

/*
==============
SvClientMP::RemoveClientAtAddress
==============
*/
void SvClientMP::RemoveClientAtAddress(const netadr_t *addr)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 r_keyVal; 

  if ( !SV_IsDemoPlaying() )
  {
    r_keyVal = (int)addr->localNetID | (unsigned __int64)((__int64)addr->addrHandleIndex << 32);
    v2 = ((unsigned int)r_keyVal ^ HIDWORD(r_keyVal)) % 0x10D;
    if ( v2 >= 0x10D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v3 = ntl::internal::hash_table<unsigned __int64,unsigned int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,unsigned int>,200,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int>>,269>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(&SvClientMP::ms_clientAddrMap, &SvClientMP::ms_clientAddrMap.m_buckets.ntl::internal::hash_table<unsigned __int64,unsigned int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,unsigned int>,200,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,unsigned int> >,269>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1> >::m_data[v2], &r_keyVal, (ntl::integral_constant<bool,1>)r_keyVal);
    if ( v3 > SvClientMP::ms_clientAddrMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
      __debugbreak();
    SvClientMP::ms_clientAddrMap.m_currentNumItems -= v3;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4252, ASSERT_TYPE_ASSERT, "(ms_clientAddrMap.erase( key ))", (const char *)&queryFormat, "ms_clientAddrMap.erase( key )") )
      __debugbreak();
  }
}

/*
==============
SvClientMP::ResetSnapshotFrames
==============
*/
void SvClientMP::ResetSnapshotFrames(SvClientMP *this)
{
  unsigned int v1; 
  unsigned int v3; 
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
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 

  v1 = 0;
  if ( this->state == CS_FREE )
  {
    v36 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4795, ASSERT_TYPE_ASSERT, "( state ) != ( SvClientConnectionState::CS_FREE )", "state != SvClientConnectionState::CS_FREE\n\t%i, %i", v36, 0i64) )
      __debugbreak();
  }
  if ( !this->m_fullSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4796, ASSERT_TYPE_ASSERT, "( m_fullSnapshotFrames )", (const char *)&queryFormat, "m_fullSnapshotFrames") )
    __debugbreak();
  if ( !SvClientMP::ms_fullSnapFrameCountPerClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4797, ASSERT_TYPE_ASSERT, "( ms_fullSnapFrameCountPerClient )", (const char *)&queryFormat, "ms_fullSnapFrameCountPerClient") )
    __debugbreak();
  if ( !this->m_fullSnapshotEncodingOutputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4798, ASSERT_TYPE_ASSERT, "( m_fullSnapshotEncodingOutputs )", (const char *)&queryFormat, "m_fullSnapshotEncodingOutputs") )
    __debugbreak();
  v3 = 2;
  do
  {
    v4 = v3 - 2;
    this->m_frameInfo[v4].snapshotClientStorageType = FULL;
    this->m_frameInfo[v4].snapshotSequence = 0;
    this->m_frameInfo[v4].snapshotIndex = 0;
    this->m_frameInfo[v4].scriptableWriteIndex = -1i64;
    v5 = v3 - 1;
    this->m_frameInfo[v5].snapshotClientStorageType = FULL;
    this->m_frameInfo[v5].snapshotSequence = 0;
    this->m_frameInfo[v5].snapshotIndex = 0;
    this->m_frameInfo[v5].scriptableWriteIndex = -1i64;
    v6 = v3;
    this->m_frameInfo[v6].snapshotClientStorageType = FULL;
    this->m_frameInfo[v6].snapshotSequence = 0;
    v7 = v3 + 1;
    this->m_frameInfo[v6].snapshotIndex = 0;
    this->m_frameInfo[v6].scriptableWriteIndex = -1i64;
    this->m_frameInfo[v7].snapshotClientStorageType = FULL;
    this->m_frameInfo[v7].snapshotSequence = 0;
    this->m_frameInfo[v7].snapshotIndex = 0;
    this->m_frameInfo[v7].scriptableWriteIndex = -1i64;
    v8 = v3 + 2;
    this->m_frameInfo[v8].snapshotClientStorageType = FULL;
    this->m_frameInfo[v8].snapshotSequence = 0;
    this->m_frameInfo[v8].snapshotIndex = 0;
    this->m_frameInfo[v8].scriptableWriteIndex = -1i64;
    v9 = v3 + 3;
    this->m_frameInfo[v9].snapshotClientStorageType = FULL;
    this->m_frameInfo[v9].snapshotSequence = 0;
    this->m_frameInfo[v9].snapshotIndex = 0;
    this->m_frameInfo[v9].scriptableWriteIndex = -1i64;
    v10 = v3 + 4;
    this->m_frameInfo[v10].snapshotClientStorageType = FULL;
    this->m_frameInfo[v10].snapshotSequence = 0;
    this->m_frameInfo[v10].snapshotIndex = 0;
    this->m_frameInfo[v10].scriptableWriteIndex = -1i64;
    v11 = v3 + 5;
    this->m_frameInfo[v11].snapshotClientStorageType = FULL;
    this->m_frameInfo[v11].snapshotSequence = 0;
    this->m_frameInfo[v11].snapshotIndex = 0;
    this->m_frameInfo[v11].scriptableWriteIndex = -1i64;
    v12 = v3 + 6;
    this->m_frameInfo[v12].snapshotClientStorageType = FULL;
    this->m_frameInfo[v12].snapshotSequence = 0;
    this->m_frameInfo[v12].snapshotIndex = 0;
    this->m_frameInfo[v12].scriptableWriteIndex = -1i64;
    v13 = v3 + 7;
    this->m_frameInfo[v13].snapshotClientStorageType = FULL;
    this->m_frameInfo[v13].snapshotSequence = 0;
    this->m_frameInfo[v13].snapshotIndex = 0;
    this->m_frameInfo[v13].scriptableWriteIndex = -1i64;
    v14 = v3 + 8;
    this->m_frameInfo[v14].snapshotClientStorageType = FULL;
    this->m_frameInfo[v14].snapshotSequence = 0;
    this->m_frameInfo[v14].snapshotIndex = 0;
    this->m_frameInfo[v14].scriptableWriteIndex = -1i64;
    v15 = v3 + 9;
    this->m_frameInfo[v15].snapshotClientStorageType = FULL;
    this->m_frameInfo[v15].snapshotSequence = 0;
    this->m_frameInfo[v15].snapshotIndex = 0;
    this->m_frameInfo[v15].scriptableWriteIndex = -1i64;
    v16 = v3 + 10;
    this->m_frameInfo[v16].snapshotClientStorageType = FULL;
    this->m_frameInfo[v16].snapshotSequence = 0;
    this->m_frameInfo[v16].snapshotIndex = 0;
    this->m_frameInfo[v16].scriptableWriteIndex = -1i64;
    v17 = v3 + 11;
    this->m_frameInfo[v17].snapshotClientStorageType = FULL;
    this->m_frameInfo[v17].snapshotSequence = 0;
    this->m_frameInfo[v17].snapshotIndex = 0;
    this->m_frameInfo[v17].scriptableWriteIndex = -1i64;
    v18 = v3 + 12;
    this->m_frameInfo[v18].snapshotClientStorageType = FULL;
    this->m_frameInfo[v18].snapshotSequence = 0;
    this->m_frameInfo[v18].snapshotIndex = 0;
    this->m_frameInfo[v18].scriptableWriteIndex = -1i64;
    v19 = v3 + 13;
    this->m_frameInfo[v19].snapshotClientStorageType = FULL;
    this->m_frameInfo[v19].snapshotSequence = 0;
    this->m_frameInfo[v19].snapshotIndex = 0;
    this->m_frameInfo[v19].scriptableWriteIndex = -1i64;
    v20 = v3 + 14;
    this->m_frameInfo[v20].snapshotClientStorageType = FULL;
    this->m_frameInfo[v20].snapshotSequence = 0;
    this->m_frameInfo[v20].snapshotIndex = 0;
    this->m_frameInfo[v20].scriptableWriteIndex = -1i64;
    v21 = v3 + 15;
    this->m_frameInfo[v21].snapshotClientStorageType = FULL;
    this->m_frameInfo[v21].snapshotSequence = 0;
    this->m_frameInfo[v21].snapshotIndex = 0;
    this->m_frameInfo[v21].scriptableWriteIndex = -1i64;
    v22 = v3 + 16;
    this->m_frameInfo[v22].snapshotClientStorageType = FULL;
    this->m_frameInfo[v22].snapshotSequence = 0;
    this->m_frameInfo[v22].snapshotIndex = 0;
    this->m_frameInfo[v22].scriptableWriteIndex = -1i64;
    v23 = v3 + 17;
    this->m_frameInfo[v23].snapshotClientStorageType = FULL;
    this->m_frameInfo[v23].snapshotSequence = 0;
    this->m_frameInfo[v23].snapshotIndex = 0;
    this->m_frameInfo[v23].scriptableWriteIndex = -1i64;
    v24 = v3 + 18;
    this->m_frameInfo[v24].snapshotClientStorageType = FULL;
    this->m_frameInfo[v24].snapshotSequence = 0;
    this->m_frameInfo[v24].snapshotIndex = 0;
    this->m_frameInfo[v24].scriptableWriteIndex = -1i64;
    v25 = v3 + 19;
    this->m_frameInfo[v25].snapshotClientStorageType = FULL;
    this->m_frameInfo[v25].snapshotSequence = 0;
    this->m_frameInfo[v25].snapshotIndex = 0;
    this->m_frameInfo[v25].scriptableWriteIndex = -1i64;
    v26 = v3 + 20;
    this->m_frameInfo[v26].snapshotClientStorageType = FULL;
    this->m_frameInfo[v26].snapshotSequence = 0;
    this->m_frameInfo[v26].snapshotIndex = 0;
    this->m_frameInfo[v26].scriptableWriteIndex = -1i64;
    v27 = v3 + 21;
    this->m_frameInfo[v27].snapshotClientStorageType = FULL;
    this->m_frameInfo[v27].snapshotSequence = 0;
    this->m_frameInfo[v27].snapshotIndex = 0;
    this->m_frameInfo[v27].scriptableWriteIndex = -1i64;
    v28 = v3 + 22;
    this->m_frameInfo[v28].snapshotClientStorageType = FULL;
    this->m_frameInfo[v28].snapshotSequence = 0;
    this->m_frameInfo[v28].snapshotIndex = 0;
    this->m_frameInfo[v28].scriptableWriteIndex = -1i64;
    v29 = v3 + 23;
    this->m_frameInfo[v29].snapshotClientStorageType = FULL;
    this->m_frameInfo[v29].snapshotSequence = 0;
    this->m_frameInfo[v29].snapshotIndex = 0;
    this->m_frameInfo[v29].scriptableWriteIndex = -1i64;
    v30 = v3 + 24;
    this->m_frameInfo[v30].snapshotClientStorageType = FULL;
    this->m_frameInfo[v30].snapshotSequence = 0;
    this->m_frameInfo[v30].snapshotIndex = 0;
    this->m_frameInfo[v30].scriptableWriteIndex = -1i64;
    v31 = v3 + 25;
    this->m_frameInfo[v31].snapshotClientStorageType = FULL;
    this->m_frameInfo[v31].snapshotSequence = 0;
    this->m_frameInfo[v31].snapshotIndex = 0;
    this->m_frameInfo[v31].scriptableWriteIndex = -1i64;
    v32 = v3 + 26;
    this->m_frameInfo[v32].snapshotClientStorageType = FULL;
    this->m_frameInfo[v32].snapshotSequence = 0;
    this->m_frameInfo[v32].snapshotIndex = 0;
    this->m_frameInfo[v32].scriptableWriteIndex = -1i64;
    v33 = v3 + 27;
    this->m_frameInfo[v33].snapshotClientStorageType = FULL;
    this->m_frameInfo[v33].snapshotSequence = 0;
    this->m_frameInfo[v33].snapshotIndex = 0;
    this->m_frameInfo[v33].scriptableWriteIndex = -1i64;
    v34 = v3 + 28;
    this->m_frameInfo[v34].snapshotClientStorageType = FULL;
    this->m_frameInfo[v34].snapshotSequence = 0;
    this->m_frameInfo[v34].snapshotIndex = 0;
    this->m_frameInfo[v34].scriptableWriteIndex = -1i64;
    v35 = v3 + 29;
    v3 += 32;
    this->m_frameInfo[v35].snapshotClientStorageType = FULL;
    this->m_frameInfo[v35].snapshotSequence = 0;
    this->m_frameInfo[v35].snapshotIndex = 0;
    this->m_frameInfo[v35].scriptableWriteIndex = -1i64;
  }
  while ( v3 - 2 < 0x40 );
  if ( SvClientMP::ms_fullSnapFrameCountPerClient )
  {
    do
      SV_ClientMP_ResetClientSnapshot(&this->m_fullSnapshotFrames[v1++]);
    while ( v1 < SvClientMP::ms_fullSnapFrameCountPerClient );
  }
  SV_ClientMP_ResetClientSnapshot(&this->m_blindSnapshotFrame);
  DebugWipe(this->m_fullSnapshotEncodingOutputs, 104i64 * SvClientMP::ms_fullSnapFrameCountPerClient);
}

/*
==============
SvClientMP::ResetSnapshotFramesMyChanges
==============
*/
void SvClientMP::ResetSnapshotFramesMyChanges(SvClientMP *this)
{
  this->deltaMessage = -1;
  *(_QWORD *)&this->messageAcknowledge = 0i64;
}

/*
==============
SV_ClientMP_AddBot
==============
*/
gentity_s *SV_ClientMP_AddBot(const char *bot_name, unsigned int head, unsigned int body, unsigned int helmet)
{
  const char *RandomName; 
  ClientCustomizationInfo *NextPresetCustomization; 
  netadr_t *v10; 
  __int128 v11; 
  SvClientMP *ClientAtAddress; 
  const SvClientMP *v13; 
  __int64 MpClientIndex; 
  netadr_t addr; 
  netadr_t result; 
  ClientCustomizationInfo outCustomizationInfo; 
  char dest[32]; 

  if ( !SV_ClientMP_CanSpawnBot() )
    return 0i64;
  if ( *bot_name )
  {
    Core_strcpy(dest, 0x20ui64, bot_name);
    BG_Customization_BuildClientCustomization(&outCustomizationInfo, head, helmet, body, NULL);
  }
  else
  {
    RandomName = SV_BotGetRandomName();
    Core_strcpy(dest, 0x20ui64, RandomName);
    NextPresetCustomization = (ClientCustomizationInfo *)SV_StreamSync_GetNextPresetCustomization();
    if ( !NextPresetCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7330, ASSERT_TYPE_ASSERT, "( presetCustomization )", (const char *)&queryFormat, "presetCustomization") )
      __debugbreak();
    outCustomizationInfo = *NextPresetCustomization;
  }
  v10 = SV_ClientMP_ConnectBot(&result, dest, outCustomizationInfo.modelIndex[0], outCustomizationInfo.modelIndex[1]);
  v11 = *(_OWORD *)&v10->type;
  LODWORD(v10) = v10->addrHandleIndex;
  *(_OWORD *)&addr.type = v11;
  addr.addrHandleIndex = (int)v10;
  ClientAtAddress = SvClientMP::FindClientAtAddress(&addr);
  v13 = ClientAtAddress;
  if ( !ClientAtAddress )
    return 0i64;
  ClientAtAddress->testClient = TC_BOT;
  SV_BotInitDataSafety(ClientAtAddress);
  MpClientIndex = (int)SV_Client_GetMpClientIndex(v13);
  return &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[MpClientIndex];
}

/*
==============
SV_ClientMP_AddMPBotToTeam
==============
*/
gentity_s *SV_ClientMP_AddMPBotToTeam(int team)
{
  int v2; 
  unsigned int v3; 
  __int64 v4; 
  netadr_t *v5; 
  __int128 v6; 
  const SvClientMP *ClientAtAddress; 
  SvClientMP *v8; 
  signed int MpClientIndex; 
  __int64 v11; 
  char *fmt; 
  netadr_t addr; 
  netadr_t result; 

  if ( !SV_ClientMP_CanSpawnBot() )
    return 0i64;
  if ( !BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
    return 0i64;
  v2 = SV_AssignBotDataToTeam(team);
  v3 = v2;
  if ( v2 < 0 )
    return 0i64;
  v4 = v2;
  v5 = SV_ClientMP_ConnectBot(&result, g_svMPBotData[v4].botDisplayData.displayName, g_svMPBotData[v4].botPlayerData.botCustomization.modelIndex[0], g_svMPBotData[v4].botPlayerData.botCustomization.modelIndex[1]);
  v6 = *(_OWORD *)&v5->type;
  LODWORD(v5) = v5->addrHandleIndex;
  *(_OWORD *)&addr.type = v6;
  addr.addrHandleIndex = (int)v5;
  ClientAtAddress = SvClientMP::FindClientAtAddress(&addr);
  v8 = (SvClientMP *)ClientAtAddress;
  if ( ClientAtAddress )
  {
    MpClientIndex = SV_Client_GetMpClientIndex(ClientAtAddress);
    v11 = MpClientIndex;
    v8->testClient = TC_BOT;
    if ( (unsigned int)(MpClientIndex + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)MpClientIndex, "signed", MpClientIndex) )
      __debugbreak();
    g_svMPBotData[v4].sv_clientIndex = v11;
    LODWORD(fmt) = v11;
    Com_Printf(15, "Adding bot index %d to team %d client index %d\n", v3, (unsigned int)team, fmt);
    SV_BotInitDataSafety(v8);
    return &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v11];
  }
  else
  {
    SV_ReleaseBotData(v3);
    return 0i64;
  }
}

/*
==============
SV_ClientMP_AddTestClient
==============
*/
gentity_s *SV_ClientMP_AddTestClient()
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const ClientCustomizationInfo *NextPresetCustomization; 
  int v4; 
  netadr_t *v5; 
  __int128 v6; 
  SvClientMP *ClientAtAddress; 
  __int64 MpClientIndex; 
  netadr_t addr; 
  _QWORD result[3]; 
  char dest[32]; 

  if ( !SV_ClientMP_CanSpawnBot() )
    return 0i64;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  Com_sprintf<32>((char (*)[32])dest, "tcBot%d", PersistentGlobalsMP->botport);
  NextPresetCustomization = SV_StreamSync_GetNextPresetCustomization();
  if ( !NextPresetCustomization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7291, ASSERT_TYPE_ASSERT, "( presetCustomization )", (const char *)&queryFormat, "presetCustomization") )
    __debugbreak();
  _XMM1 = *(_OWORD *)NextPresetCustomization->modelIndex;
  __asm { vpextrd r9d, xmm1, 1; bodyModelIndex }
  v4 = *(_OWORD *)NextPresetCustomization->modelIndex;
  result[2] = *(_QWORD *)&NextPresetCustomization->modelIndexMLG[1];
  v5 = SV_ClientMP_ConnectBot((netadr_t *)result, dest, v4, _ER9);
  v6 = *(_OWORD *)&v5->type;
  LODWORD(v5) = v5->addrHandleIndex;
  *(_OWORD *)&addr.type = v6;
  addr.addrHandleIndex = (int)v5;
  ClientAtAddress = SvClientMP::FindClientAtAddress(&addr);
  if ( !ClientAtAddress )
    return 0i64;
  ClientAtAddress->testClient = TC_TEST_CLIENT;
  MpClientIndex = (int)SV_Client_GetMpClientIndex(ClientAtAddress);
  return &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[MpClientIndex];
}

/*
==============
SV_ClientMP_AllocScriptPers
==============
*/
void SV_ClientMP_AllocScriptPers(void)
{
  signed int i; 
  SvClient *CommonClient; 
  SvClient *v2; 
  scrContext_t *v3; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    v2 = CommonClient;
    if ( CommonClient->state > CS_ZOMBIE )
    {
      if ( LODWORD(CommonClient[854].gentity) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2305, ASSERT_TYPE_ASSERT, "( cl->scriptId == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "cl->scriptId == NULL_OBJECT_VARIABLE_ID") )
          __debugbreak();
      }
      v3 = ScriptContext_Server();
      LODWORD(v2[854].gentity) = Scr_AllocExtArray(v3);
    }
  }
}

/*
==============
SV_ClientMP_BinaryCommand
==============
*/
char SV_ClientMP_BinaryCommand(SvClientMP *cl, msg_t *msg, const int cmdSequence, int fromOldServer)
{
  unsigned __int16 v8; 
  int lastClientCommand; 
  unsigned __int16 v11; 
  char v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  msg_t buf; 
  char buffer[2]; 
  unsigned __int16 v18; 
  unsigned __int8 data[1020]; 

  MSG_ReadData(msg, 4, buffer, 1020);
  v8 = v18;
  if ( (unsigned __int16)(v18 - 1) > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3987, ASSERT_TYPE_ASSERT, "(commandSize > 0 && commandSize <= 1024)", "%s\n\tcommand size: %i, clientname: %s", "commandSize > 0 && commandSize <= MAX_RELIABLE_COMMAND_LENGTH", v18, cl->name) )
    __debugbreak();
  MSG_ReadData(msg, v8, data, 1016);
  lastClientCommand = cl->lastClientCommand;
  if ( lastClientCommand < cmdSequence )
  {
    if ( cmdSequence > lastClientCommand + 1 )
    {
      LODWORD(v14) = cl->lastClientCommand;
      LODWORD(fmt) = cmdSequence;
      Com_Printf(15, "Client %s lost %i clientCommands. seq=%i, lastClientCommand=%i. binary command requested.\n", cl->name, (unsigned int)(cmdSequence - lastClientCommand + 1), fmt, v14);
      SV_ClientMP_DropClient(cl, "EXE/LOSTRELIABLECOMMANDS", 1);
      return 0;
    }
    if ( buffer[0] != 89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3929, ASSERT_TYPE_ASSERT, "( command[0] == 'Y' )", (const char *)&queryFormat, "command[0] == SVSCMD_BINARY_COMMAND") )
      __debugbreak();
    v11 = v18;
    if ( !v18 )
    {
      LODWORD(v15) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3932, ASSERT_TYPE_ASSERT, "( ( commandSize > 0 ) )", "%s\n\t( commandSize ) = %i", "( commandSize > 0 )", v15) )
        __debugbreak();
    }
    MSG_InitReadOnly(&buf, data, v11);
    MSG_BeginReading(&buf);
    v12 = MSG_ReadByte(&buf);
    if ( fromOldServer )
    {
      Com_Printf(15, "Ignoring binary client command '%c' because it's from an old server\n", (unsigned int)v12);
    }
    else
    {
      switch ( v12 )
      {
        case '%':
          Scr_PlayerActive(cl->gentity);
          break;
        case 'G':
          SV_ClientMP_PlayerDataDeltasMessage(cl, &buf);
          break;
        case 'Q':
          G_WorldStreaming_ManualStreamPosCommand(cl, &buf);
          break;
        case 'S':
          SV_StreamSync_CompleteNotifyCmd(cl, &buf);
          break;
        default:
          Com_PrintError(15, "Unknown binary command: %c\n", (unsigned int)v12);
          break;
      }
    }
    cl->lastClientCommand = cmdSequence;
    Com_sprintf(cl->lastClientCommandString, 0x400ui64, "Binary sequence %d", (unsigned int)cmdSequence);
  }
  return 1;
}

/*
==============
SV_ClientMP_CanSpawnBot
==============
*/
char SV_ClientMP_CanSpawnBot()
{
  SessionDynamicData *DemoSession; 
  unsigned int v2; 
  char v3; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7203, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    Com_PrintError(15, "Can't spawn test clients on the front end server\n");
    return 0;
  }
  else
  {
    if ( SV_IsDemoPlaying() )
      DemoSession = (SessionDynamicData *)NET_GetDemoSession();
    else
      DemoSession = &Live_GetGameParty()->session->dyn;
    if ( XSESSION_INFO::IsValidSessionId(&DemoSession->sessionInfo) )
    {
      v2 = 0;
      v3 = 0;
      if ( (int)SvClient::ms_clientCount > 0 )
      {
        while ( SvClient::GetCommonClient(v2)->state )
        {
          if ( (int)++v2 >= (int)SvClient::ms_clientCount )
            return 0;
        }
        return 1;
      }
      return v3;
    }
    else
    {
      Com_PrintError(15, "Can't spawn test clients on invalid session id\n");
      return 0;
    }
  }
}

/*
==============
SV_ClientMP_CanSpawnBotOrTestClient
==============
*/
__int64 SV_ClientMP_CanSpawnBotOrTestClient(const gentity_s *ent)
{
  unsigned int number; 
  SvClient *CommonClient; 
  unsigned int MpClientIndex; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7389, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (int)number <= (int)SvClient::ms_clientCount )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(number);
    if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7398, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( LODWORD(CommonClient[855].__vftable) )
    {
      return 1i64;
    }
    else
    {
      MpClientIndex = SV_Client_GetMpClientIndex((const SvClientMP *)CommonClient);
      Com_PrintError(15, "CanSpawnBotOrTestClient is meant to be called on test clients, not regular clients (%d '%s').\n", MpClientIndex, &CommonClient[4].lastUsercmd.selectedLoc[1]);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(15, "CanSpawnBotOrTestClient is meant to be called on test clients, not regular entities (%d).\n", number);
    return 0i64;
  }
}

/*
==============
SV_ClientMP_ClampCmdServerTime
==============
*/
void SV_ClientMP_ClampCmdServerTime(usercmd_s *cmd)
{
  int time; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4111, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  time = level.time;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->time < time )
    time = PersistentGlobalsMP->time;
  if ( cmd->serverTime > time )
    cmd->serverTime = time;
}

/*
==============
SV_ClientMP_ClearClients
==============
*/
void SV_ClientMP_ClearClients(void)
{
  signed int i; 
  SvClientMP *CommonClient; 
  SvClientAntiCheatData *p_antiCheatData; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; p_antiCheatData->hasSentPerMatchStats = 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = (SvClientMP *)SvClient::GetCommonClient(i);
    memset_0(CommonClient->m_cmdRecvBuffer, 0, 264i64 * SvClientMP::ms_cmdCountPerClient);
    memset_0(CommonClient->m_cmdRecvPredict, 0, 60i64 * SvClientMP::ms_cmdCountPerClient);
    memset_0(CommonClient->m_cmdRecvSequence, 0, 4i64 * SvClientMP::ms_cmdCountPerClient);
    CommonClient->commandSequence = 0;
    SV_ClientMP_ResetCommandThinkTime(CommonClient);
    p_antiCheatData = &CommonClient->antiCheatData;
    if ( !p_antiCheatData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.h", 95, ASSERT_TYPE_ASSERT, "( data )", (const char *)&queryFormat, "data") )
      __debugbreak();
    DebugWipe(p_antiCheatData, 0x5B20ui64);
    *(_QWORD *)&p_antiCheatData->playerKnockAndKillsCount = 0i64;
    memset_0(p_antiCheatData->recentlySightedClients, -1, sizeof(p_antiCheatData->recentlySightedClients));
    p_antiCheatData->lastRecordedAnglesTime = -1;
    p_antiCheatData->pitchVelocityDigest.m_min = 1.797693134862316e308;
    p_antiCheatData->pitchVelocityDigest.m_max = 2.225073858507201e-308;
    p_antiCheatData->pitchVelocityDigest.m_processedWeightTotal = 0.0;
    p_antiCheatData->pitchVelocityDigest.m_unprocessedWeightTotal = 0.0;
    *(_QWORD *)&p_antiCheatData->pitchVelocityDigest.m_unprocessedCentroidBufferIndex = 0i64;
    memset_0(p_antiCheatData->pitchVelocityDigest.m_processedCentroids, 0, 0x1200ui64);
    p_antiCheatData->yawVelocityDigest.m_min = 1.797693134862316e308;
    p_antiCheatData->yawVelocityDigest.m_max = 2.225073858507201e-308;
    p_antiCheatData->yawVelocityDigest.m_processedWeightTotal = 0.0;
    p_antiCheatData->yawVelocityDigest.m_unprocessedWeightTotal = 0.0;
    *(_QWORD *)&p_antiCheatData->yawVelocityDigest.m_unprocessedCentroidBufferIndex = 0i64;
    memset_0(p_antiCheatData->yawVelocityDigest.m_processedCentroids, 0, 0x1200ui64);
    p_antiCheatData->pitchAccelDigest.m_min = 1.797693134862316e308;
    p_antiCheatData->pitchAccelDigest.m_max = 2.225073858507201e-308;
    p_antiCheatData->pitchAccelDigest.m_processedWeightTotal = 0.0;
    p_antiCheatData->pitchAccelDigest.m_unprocessedWeightTotal = 0.0;
    *(_QWORD *)&p_antiCheatData->pitchAccelDigest.m_unprocessedCentroidBufferIndex = 0i64;
    memset_0(p_antiCheatData->pitchAccelDigest.m_processedCentroids, 0, 0x1200ui64);
    p_antiCheatData->yawAccelDigest.m_min = 1.797693134862316e308;
    p_antiCheatData->yawAccelDigest.m_max = 2.225073858507201e-308;
    p_antiCheatData->yawAccelDigest.m_processedWeightTotal = 0.0;
    p_antiCheatData->yawAccelDigest.m_unprocessedWeightTotal = 0.0;
    *(_QWORD *)&p_antiCheatData->yawAccelDigest.m_unprocessedCentroidBufferIndex = 0i64;
    memset_0(p_antiCheatData->yawAccelDigest.m_processedCentroids, 0, 0x1200ui64);
    ++i;
    p_antiCheatData->speedIndex = 0;
  }
}

/*
==============
SV_ClientMP_ClearExtrapolation
==============
*/
void SV_ClientMP_ClearExtrapolation(const int clientIndex)
{
  SvClient *CommonClient; 
  const playerState_s *EffectivePlayerstateForClientNum; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(clientIndex);
  BG_PlayerExtrap_SavePlayerState(EffectivePlayerstateForClientNum, (SavedPlayerState *)&CommonClient[602].lastUsercmd.offHand.attachmentVariationIndices[21]);
}

/*
==============
SV_ClientMP_ClearModifiedFlagRange
==============
*/
void SV_ClientMP_ClearModifiedFlagRange(unsigned __int8 *flags, int startByte, int byteCount)
{
  int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  signed int v12; 
  __int64 v13; 
  size_t v14; 
  __int64 v15; 
  char v16; 
  __int64 v17; 
  __int64 v18; 

  v6 = (startByte >> 31) & 7;
  v8 = (v6 + startByte) >> 3;
  v9 = ((v6 + startByte) & 7) - v6;
  v10 = (startByte + byteCount - 1) / 8;
  v11 = (startByte + byteCount - 1) % 8;
  if ( (unsigned int)v8 >= 0x208E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( startFlagIndex ) < (unsigned)( ((( 66672 ) + 7)/ 8) )", "startFlagIndex doesn't index PERSISTENT_STATS_MODIFIED_SIZE\n\t%i not in [0, %i)", (v6 + startByte) >> 3, 8334) )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x208E )
  {
    LODWORD(v18) = 8334;
    LODWORD(v17) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 499, ASSERT_TYPE_ASSERT, "(unsigned)( endFlagIndex ) < (unsigned)( ((( 66672 ) + 7)/ 8) )", "endFlagIndex doesn't index PERSISTENT_STATS_MODIFIED_SIZE\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( v8 == v10 )
  {
    v15 = v8;
    v16 = ~(((1 << v9) - 1) ^ ((1 << (v11 + 1)) - 1));
    goto LABEL_19;
  }
  v12 = (startByte + 7) & 0xFFFFFFF8;
  v13 = v12 / 8;
  v14 = (byteCount + startByte - v12) / 8;
  if ( (unsigned int)v13 >= 0x208E )
  {
    LODWORD(v18) = 8334;
    LODWORD(v17) = v12 / 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 509, ASSERT_TYPE_ASSERT, "(unsigned)( alignedFlagIndex ) < (unsigned)( ((( 66672 ) + 7)/ 8) )", "alignedFlagIndex doesn't index PERSISTENT_STATS_MODIFIED_SIZE\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (int)v14 + (int)v13 > 8334 )
  {
    LODWORD(v18) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 510, ASSERT_TYPE_ASSERT, "(alignedFlagIndex + alignedFlagCount <= ((( 66672 ) + 7)/ 8))", "%s\n\tstart is %i, size is %i", "alignedFlagIndex + alignedFlagCount <= PERSISTENT_STATS_MODIFIED_SIZE", v18, v14) )
      __debugbreak();
  }
  memset_0(&flags[v13], 0, v14);
  if ( v9 )
    flags[v8] &= (1 << v9) - 1;
  if ( v11 )
  {
    v15 = v10;
    v16 = -1 << (v11 + 1);
LABEL_19:
    flags[v15] &= v16;
  }
}

/*
==============
SV_ClientMP_ConnectBot
==============
*/
netadr_t *SV_ClientMP_ConnectBot(netadr_t *result, const char *name, const int headModelIndex, const int bodyModelIndex)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvGameGlobals *SvGameGlobalsCommon; 
  int PersistentDataDefVersion; 
  unsigned __int64 PersistentDataDefFormatChecksum; 
  float vmBuiltinTimeAccum; 
  unsigned __int64 v12; 
  SessionDynamicData *DemoSession; 
  int v14; 
  int addrHandleIndex; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  unsigned int PlatformSignature; 
  netadr_t v28; 
  char v29[176]; 
  char dest[1024]; 
  char _Buffer[1024]; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7149, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo stats access in front-end scene", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v21 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v21) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  PersistentDataDefVersion = LiveStorage_GetPersistentDataDefVersion();
  PersistentDataDefFormatChecksum = LiveStorage_GetPersistentDataDefFormatChecksum();
  vmBuiltinTimeAccum = SvGameGlobalsCommon[2].profile.vmBuiltinTimeAccum;
  v12 = PersistentDataDefFormatChecksum;
  LOBYTE(v28.type) = 0;
  v29[0] = 0;
  PlatformSignature = MSG_GetPlatformSignature();
  v24 = PersistentDataDefVersion;
  *(float *)&v20 = vmBuiltinTimeAccum;
  LODWORD(v17) = GetProtocolVersion();
  Com_sprintf(dest, 0x400ui64, "\\invited\\0\\cl_anonymous\\0\\color\\4\\rate\\5000\\xuid\\%s\\xnaddr\\%s\\natType\\2\\protocol\\%d\\checksum\\%d\\statver\\%d %llx\\platsig\\%d", (const char *)&v28, v29, v17, v20, v24, v12, PlatformSignature);
  LODWORD(v22) = bodyModelIndex;
  LODWORD(v18) = headModelIndex;
  j_sprintf(_Buffer, "connect bot%d \"%s\\name\\%s\\ctzHead\\%d\\ctzBody\\%d\"", PersistentGlobalsMP->botport, dest, name, v18, v22);
  if ( SV_IsDemoPlaying() )
    DemoSession = (SessionDynamicData *)NET_GetDemoSession();
  else
    DemoSession = &Live_GetGameParty()->session->dyn;
  SV_Cmd_TokenizeString(_Buffer);
  v14 = PersistentGlobalsMP->botport + 4;
  if ( PersistentGlobalsMP->botport > 0x270Fu )
  {
    LODWORD(v25) = 10003;
    LODWORD(v23) = 4;
    LODWORD(v19) = PersistentGlobalsMP->botport + 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7261, ASSERT_TYPE_ASSERT, "( NS_BOT_FIRST ) <= ( botNetSrc ) && ( botNetSrc ) <= ( NS_BOT_LAST )", "botNetSrc not in [NS_BOT_FIRST, NS_BOT_LAST]\n\t%i not in [%i, %i]", v19, v23, v25) )
      __debugbreak();
  }
  NET_OpenConnection(&DemoSession->sessionInfo, (const netsrc_t)v14, result);
  addrHandleIndex = result->addrHandleIndex;
  *(_OWORD *)&v28.type = *(_OWORD *)&result->type;
  v28.addrHandleIndex = addrHandleIndex;
  SV_ClientMP_DirectConnect(&v28);
  SV_Cmd_EndTokenizedString();
  ++PersistentGlobalsMP->botport;
  return result;
}

/*
==============
SV_ClientMP_DelayDropClient
==============
*/
void SV_ClientMP_DelayDropClient(SvClientMP *drop, const char *reason)
{
  const char *dropReason; 

  if ( !drop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2579, ASSERT_TYPE_ASSERT, "(drop)", (const char *)&queryFormat, "drop") )
    __debugbreak();
  if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2580, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
    __debugbreak();
  if ( drop->state == CS_FREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2582, ASSERT_TYPE_ASSERT, "(drop->state != SvClientConnectionState::CS_FREE)", (const char *)&queryFormat, "drop->state != SvClientConnectionState::CS_FREE") )
    __debugbreak();
  dropReason = drop->dropReason;
  if ( drop->state == CS_ZOMBIE )
  {
    if ( dropReason )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2585, ASSERT_TYPE_ASSERT, "( ( drop->dropReason == 0 ) )", "( drop->dropReason ) = %s", drop->dropReason) )
        __debugbreak();
    }
  }
  else if ( !dropReason )
  {
    drop->dropReason = reason;
  }
}

/*
==============
SV_ClientMP_DirectConnect
==============
*/
void SV_ClientMP_DirectConnect(netadr_t *from)
{
  const char *v2; 
  __int64 v3; 
  const char *v4; 
  char v5; 
  __int128 v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const XUID *v11; 
  __int128 v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  __int128 v19; 
  unsigned __int64 m_id; 
  int v21; 
  const char *v22; 
  const char *v23; 
  int v24; 
  const char *v25; 
  const char *v26; 
  __int128 v27; 
  const char *v28; 
  unsigned __int64 v29; 
  int Byte; 
  const PartyData *ServerLobby; 
  SvClientMP *v32; 
  SvClientMP *MpClient; 
  char *playerGuid; 
  char *v35; 
  char v36; 
  __int64 v37; 
  char v38; 
  __int128 v39; 
  const char *v40; 
  __int128 v41; 
  const char *v42; 
  OnlineTimeSeriesLog *v43; 
  unsigned int v44; 
  Online_ErrorReporting *Instance; 
  int v46; 
  int j; 
  int v48; 
  const PartyData *v49; 
  const PartyData *v50; 
  XUID *Xuid; 
  const char *v52; 
  SvClient *CommonClient; 
  int addrHandleIndex; 
  const char *v55; 
  signed int i; 
  SvClientConnectionState state; 
  int v58; 
  const char *v59; 
  __int64 MpClientIndex; 
  scrContext_t *v61; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const netadr_t *Netadr; 
  NetchanTelemetry *NetchanTelemetry; 
  const char *v65; 
  const char *v66; 
  const char *v67; 
  int time; 
  clientState_t *ClientState; 
  const netadr_t *v70; 
  netadr_t *v71; 
  __int128 v72; 
  signed int v73; 
  char *fmt; 
  char *fmta; 
  NetchanTelemetry *serverTelemetry; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  bool v83; 
  bool v84; 
  char v85; 
  int v86; 
  XUID player; 
  XUID result; 
  netadr_t v89; 
  netadr_t v90; 
  char dest[16]; 
  int v92; 
  char v93; 
  char contextString[128]; 
  char s[1024]; 

  XUID::XUID(&player);
  Com_Printf(131087, "SV_ClientMP_DirectConnect()\n");
  v2 = SV_Cmd_Argv(1);
  v3 = 21i64;
  Core_strcpy(dest, 0x15ui64, v2);
  v4 = SV_Cmd_Argv(2);
  Core_strcpy(s, 0x400ui64, v4);
  if ( SV_IsMigrating() )
  {
    NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/MIGRATION_IN_PROGRESS");
    Com_Printf(131087, "    rejected connect: host migration in progress\n");
    return;
  }
  v5 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0];
  v85 = v5;
  if ( v5 || (v6 = *(_OWORD *)&from->type, v90.addrHandleIndex = from->addrHandleIndex, *(_OWORD *)&v90.type = v6, SV_ClientMP_DirectConnect_ValidateGameProtocol(&v90, s)) )
  {
    v7 = Info_ValueForKey(s, "challenge");
    v86 = atoi(v7);
    v8 = Info_ValueForKey(s, "onlineStats");
    v83 = atoi(v8) != 0;
    v9 = Info_ValueForKey(s, "migrating");
    v84 = atoi(v9) != 0;
    v10 = Info_ValueForKey(s, "xuid");
    v11 = XUID::FromString(&result, v10);
    XUID::operator=(&player, v11);
    if ( !SV_ClientMP_HandleReconnect(from) )
    {
      v12 = *(_OWORD *)&from->type;
      v13 = 0;
      if ( v5 )
      {
        v89.addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v89.type = v12;
        if ( !NET_IsLocalAddress(&v89) )
        {
          addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
          v89.addrHandleIndex = addrHandleIndex;
          v55 = NET_AdrToString(&v89);
          Com_Printf(131087, "SV_DirectConnect: %s:rejected non-local client for front end server\n", v55);
          return;
        }
        SV_ClientMP_DirectConnect_VerifyFrontEndProtocol(s);
        for ( i = 1; i < (int)SvClient::ms_clientCount; ++i )
        {
          if ( SV_Client_GetMpClient(i)->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2088, ASSERT_TYPE_ASSERT, "( cl->state == SvClientConnectionState::CS_FREE )", (const char *)&queryFormat, "cl->state == SvClientConnectionState::CS_FREE") )
            __debugbreak();
        }
        MpClient = SV_Client_GetMpClient(0);
        state = MpClient->state;
        if ( state == CS_CONNECTED )
        {
          v58 = from->addrHandleIndex;
          *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
          v89.addrHandleIndex = v58;
          v59 = NET_AdrToString(&v89);
          Com_Printf(131087, "SV_DirectConnect: %s:replacing existing local client packet\n", v59);
          SV_ClientMP_FreeClient(MpClient, "SV_DirectConnect");
        }
        else if ( state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2100, ASSERT_TYPE_ASSERT, "(cl->state == SvClientConnectionState::CS_FREE)", (const char *)&queryFormat, "cl->state == SvClientConnectionState::CS_FREE") )
        {
          __debugbreak();
        }
        goto $gotnewcl;
      }
      v90.addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v90.type = v12;
      if ( !NET_IsLocalAddress(&v90) )
      {
        result.m_id = (unsigned __int64)SvPersistentGlobalsMP::GetPersistentGlobalsMP();
        v14 = 0;
        v15 = 0i64;
        v16 = (_DWORD *)(result.m_id + 140);
        while ( 1 )
        {
          v17 = *(v16 - 1);
          v18 = from->addrHandleIndex;
          *(_OWORD *)&v90.type = *(_OWORD *)(v16 - 5);
          v19 = *(_OWORD *)&from->type;
          v90.addrHandleIndex = v17;
          *(_OWORD *)&v89.type = v19;
          v89.addrHandleIndex = v18;
          if ( NET_CompareAdr(&v89, &v90) )
          {
            if ( v86 == *v16 )
              break;
          }
          ++v14;
          ++v15;
          v16 += 14;
          if ( v15 >= 1024 )
          {
            m_id = result.m_id;
            goto LABEL_13;
          }
        }
        m_id = result.m_id;
        v23 = (const char *)(56i64 * (int)v14 + result.m_id + 152);
        if ( strcmp(dest, v23) )
        {
          v24 = from->addrHandleIndex;
          *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
          v89.addrHandleIndex = v24;
          v25 = NET_AdrToString(&v89);
          Com_Printf(131087, "SV_DirectConnect: challenge guid mismatch (received %s, expected %s) from %s\n", dest, v23, v25);
          NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/BAD_CHALLENGE");
          return;
        }
LABEL_13:
        if ( v14 == 1024 )
        {
          v21 = from->addrHandleIndex;
          *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
          v89.addrHandleIndex = v21;
          v22 = NET_AdrToString(&v89);
          Com_Printf(131087, "SV_DirectConnect: could not find challenge for client %s at %s\n", dest, v22);
          NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/BAD_CHALLENGE");
          return;
        }
        v26 = XUID::ToDevString(&player);
        v27 = *(_OWORD *)&from->type;
        v89.addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v89.type = v27;
        v28 = NET_AdrToString(&v89);
        Com_Printf(131087, "Client with challenge %i connecting from %s. xuid %s. guid %s\n", v14, v28, v26, dest);
        *(_DWORD *)(56i64 * (int)v14 + m_id + 148) = 1;
      }
      if ( XUID::IsValid(&player) )
      {
        v29 = player.m_id;
        if ( SV_IsDemoPlaying() )
        {
          Byte = SV_Demo_GetByte();
        }
        else
        {
          ServerLobby = SV_MainMP_GetServerLobby();
          Byte = Party_FindMemberByXUID(ServerLobby, (const XUID)v29);
          SV_Record_GetByte(Byte);
        }
        if ( Byte >= 0 && Byte < (int)SvClient::ms_clientCount )
        {
          v32 = SV_Client_GetMpClient(Byte);
          MpClient = v32;
          if ( v32->state == CS_RECONNECTING && v84 )
          {
            playerGuid = v32->playerGuid;
            if ( v32 == (SvClientMP *)-246208i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
              __debugbreak();
            v35 = (char *)(dest - playerGuid);
            do
            {
              v36 = playerGuid[(_QWORD)v35];
              v37 = v3;
              v38 = *playerGuid++;
              --v3;
              if ( !v37 )
                break;
              if ( v36 != v38 )
                goto LABEL_34;
            }
            while ( v36 );
            v39 = *(_OWORD *)&from->type;
            v89.addrHandleIndex = from->addrHandleIndex;
            *(_OWORD *)&v89.type = v39;
            SV_ClientMP_ReconnectMigratedClient(MpClient, &v89, v86, dest, s, v83);
            return;
          }
LABEL_34:
          if ( MpClient->state > CS_ZOMBIE )
          {
            Com_Printf(131087, "DirectConnect(): FreeClient '%s' for slot %d because a player is connecting via session.\n", MpClient->name, (unsigned int)Byte);
            SV_ClientMP_FreeClient(MpClient, "SV_DirectConnect");
          }
$gotnewcl:
          SvClientMP::ClearClientMemoryMP(MpClient);
          MpClientIndex = (int)SV_Client_GetMpClientIndex(MpClient);
          MpClient->gentity = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[MpClientIndex];
          if ( MpClient->scriptId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2138, ASSERT_TYPE_ASSERT, "(!newcl->scriptId)", (const char *)&queryFormat, "!newcl->scriptId") )
            __debugbreak();
          v61 = ScriptContext_Server();
          MpClient->scriptId = Scr_AllocExtArray(v61);
          MpClient->challenge = v86;
          *(_OWORD *)MpClient->playerGuid = *(_OWORD *)dest;
          *(_DWORD *)&MpClient->playerGuid[16] = v92;
          MpClient->playerGuid[20] = v93;
          PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
          if ( NetConnection::Accept(&MpClient->clientConnection, from, (const NetConnection::Type)(5 - (PersistentGlobalsMP->frontEndState[0] != 0)), ACCEPT_REPLACE) )
          {
            Netadr = NetConnection::GetNetadr(&MpClient->clientConnection, &v89);
            SvClientMP::AddClientAtAddress(Netadr, MpClientIndex);
            NetchanTelemetry = SV_SnapshotMP_GetNetchanTelemetry();
            Netchan_Setup(NS_MAXCLIENTS, &MpClient->netchan, &MpClient->clientConnection, MpClient->netBuf.netchanBuffer, 4096, NetchanTelemetry);
            Core_strcpy(MpClient->userinfo, 0x400ui64, s);
            v65 = G_ClientMP_Connect(MpClientIndex, MpClient->scriptId);
            if ( v65 )
            {
              if ( v85 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2186, ASSERT_TYPE_ASSERT, "(!isFrontEndServer)", "%s\n\tFront end client should not be rejected", "!isFrontEndServer") )
                  __debugbreak();
              }
              v66 = j_va("error\n%s", v65);
              NET_OutOfBandPrint(NS_MAXCLIENTS, from, v66);
              Com_Printf(131087, "Game rejected a connection: %s.\n", v65);
              SvClientMP::FreeScriptId(MpClient);
            }
            else
            {
              v67 = Info_ValueForKey(MpClient->userinfo, (const char *)&stru_143C9A1A4);
              if ( *v67 )
                Com_Printf(131087, "Going from CS_FREE to CS_CONNECTED for \"%s\" (num %i guid \"%s\")\n", v67, (unsigned int)MpClientIndex, MpClient->playerGuid);
              else
                Com_Printf(131087, "Going from CS_FREE to CS_CONNECTED for unnamed client, probably a bot (see guid) (num %i guid \"%s\")\n", (unsigned int)MpClientIndex, MpClient->playerGuid);
              MpClient->usingOnlineStatsOffline = v83;
              MpClient->state = CS_CONNECTED;
              time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
              MpClient->nextSnapshotTime = time;
              MpClient->lastPacketTime = time;
              MpClient->lastConnectTime = time;
              MpClient->lastSnapshotSentTime = time;
              MpClient->deltaMessage = -1;
              MpClient->hasAckedBaselineData = 0;
              SV_ClientMP_ResetKillcam(MpClient);
              SV_ClientMP_ResetCommandThinkTime(MpClient);
              SV_SnapshotMP_CleanupClient(MpClientIndex);
              *(_OWORD *)MpClient->playerGuid = *(_OWORD *)dest;
              *(_DWORD *)&MpClient->playerGuid[16] = v92;
              MpClient->playerGuid[20] = v93;
              MpClient->hasSentClientNetworkTelemetry = 0;
              memset_0(MpClient->cmdReceivedHistogram, 0, 0xC0ui64);
              *(_QWORD *)MpClient->cmdExtrapolationCmdLengthHistogram = 0i64;
              *(_QWORD *)&MpClient->cmdExtrapolationCmdLengthHistogram[4] = 0i64;
              *(_QWORD *)&MpClient->cmdExtrapolationCmdLengthHistogram[8] = 0i64;
              *(_QWORD *)&MpClient->cmdExtrapolationCmdLengthHistogram[12] = 0i64;
              *(_QWORD *)&MpClient->cmdExtrapolationCmdLengthHistogram[16] = 0i64;
              SV_ClientNetPerf_InitForClient(MpClientIndex);
              SV_ClientAntiCheatMP_Reset(&MpClient->antiCheatData);
              SV_ClientMP_UserInfoChanged(MpClient);
              SV_ClientMP_UpdateSplitscreenStateForConnection(&MpClient->clientConnection);
              SV_StreamSync_ClientConnect(MpClient, 0);
              ScriptableMsgWrite_ResetClientBuffers(MpClientIndex, 1);
              ClientState = G_MainMP_GetClientState(MpClientIndex);
              v70 = NetConnection::GetNetadr(&MpClient->clientConnection, &v89);
              ClientState->isBot = NET_IsBotAddr(v70);
              SV_ClientMP_UpdateConnectivityBits(MpClientIndex);
              v71 = NetConnection::GetNetadr(&MpClient->clientConnection, &v90);
              v72 = *(_OWORD *)&v71->type;
              LODWORD(v71) = v71->addrHandleIndex;
              *(_OWORD *)&v89.type = v72;
              v89.addrHandleIndex = (int)v71;
              SV_SendConnectResponseToClient(MpClient, &v89, 0);
              v73 = 0;
              for ( MpClient->gamestateMessageNum = -1; v73 < (int)SvClient::ms_clientCount; ++v73 )
              {
                if ( SV_ClientMP_IsClientConnected(v73) )
                  ++v13;
              }
              LODWORD(serverTelemetry) = v13;
              SV_BandwidthProfile_RecordEvent(-1, "addClient:cl %d,name %s,xuid %s,total %d", (unsigned int)MpClientIndex, MpClient->name, MpClient->playerGuid, serverTelemetry);
            }
          }
          else
          {
            NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/ERR_UNREGISTERED_CONNECTION");
            Com_Printf(131087, "Rejected a connection. Client connection accept failed.\n");
          }
          return;
        }
      }
      if ( NET_IsBotAddr(from) )
      {
        if ( !NET_IsBotAddr(from) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2041, ASSERT_TYPE_ASSERT, "(NET_IsBotAddr( from ))", "%s\n\tOnly bots can claim a slot without existing in party", "NET_IsBotAddr( from )") )
          __debugbreak();
        v46 = from->addrHandleIndex;
        *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
        v89.addrHandleIndex = v46;
        for ( j = NET_IsLocalAddress(&v89) == 0; j < (int)SvClient::ms_clientCount; ++j )
        {
          MpClient = SV_Client_GetMpClient(j);
          if ( MpClient->state == CS_FREE )
          {
            v48 = from->addrHandleIndex;
            *(_OWORD *)&v89.type = *(_OWORD *)&from->type;
            v89.addrHandleIndex = v48;
            if ( !NET_IsLocalAddress(&v89) && j <= 0 )
            {
              LODWORD(v82) = from->ip[3];
              LODWORD(v81) = from->ip[2];
              LODWORD(v80) = from->ip[1];
              LODWORD(v79) = from->ip[0];
              LODWORD(v78) = from->type;
              LODWORD(v77) = j;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2052, ASSERT_TYPE_ASSERT, "(NET_IsLocalAddress( from ) || i > 0)", "%s\n\ti is %i, from.type is %i, ip is %u.%u.%u.%u", "NET_IsLocalAddress( from ) || i > 0", v77, v78, v79, v80, v81, v82) )
                __debugbreak();
            }
            if ( SV_IsDemoPlaying() )
              goto $gotnewcl;
            v49 = SV_MainMP_GetServerLobby();
            if ( !Party_IsMemberRegistered(v49, j) )
              goto $gotnewcl;
            v50 = SV_MainMP_GetServerLobby();
            Xuid = Party_GetXuid(&result, v50, j);
            v52 = XUID::ToDevString(Xuid);
            Com_Printf(131087, "A client (XUID %s) is already registered for CS_FREE at client index %i, this is not an error, skipping over this index.\n", v52, (unsigned int)j);
          }
        }
        NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/SERVERISFULL");
        Com_Printf(131087, "Rejected a connection.\n");
        Com_Printf(131087, "Current slots (maxclients is %i):\n", SvClient::ms_clientCount);
        if ( (int)SvClient::ms_clientCount > 0 )
        {
          do
          {
            if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
              __debugbreak();
            CommonClient = SvClient::GetCommonClient(v13);
            LODWORD(fmt) = (unsigned __int8)CommonClient->state;
            Com_Printf(131087, "#%i: %s, state is %i\n", v13++, &CommonClient[4].lastUsercmd.selectedLoc[1], fmt);
          }
          while ( (int)v13 < (int)SvClient::ms_clientCount );
        }
      }
      else if ( !SV_IsDemoPlaying() )
      {
        v40 = XUID::ToDevString(&player);
        v41 = *(_OWORD *)&from->type;
        v89.addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v89.type = v41;
        v42 = NET_AdrToString(&v89);
        Com_Printf(131087, "%s:directConnect - xuid was %s, we don't know about this user.  Full userinfo is %s\n", v42, v40, s);
        NET_OutOfBandPrint(NS_MAXCLIENTS, from, "error\nEXE/ERR_UNREGISTERED_CONNECTION");
        v43 = OnlineTimeSeriesLog::Get();
        OnlineTimeSeriesLog::WriteEventCounter(v43, "2.unregistered.count", 1u);
        LODWORD(v40) = Party_GetActiveParty()->migrateData.startTime;
        v44 = Sys_Milliseconds();
        LODWORD(fmta) = (_DWORD)v40;
        Com_sprintf(contextString, 0x80ui64, "%d,2,false,%d,%s,%d", v44, fmta, "false", -1);
        Instance = Online_ErrorReporting::GetInstance();
        Online_ErrorReporting::ReportError(Instance, DODGE, contextString);
      }
    }
  }
}

/*
==============
SV_ClientMP_DirectConnect_ValidateGameProtocol
==============
*/
char SV_ClientMP_DirectConnect_ValidateGameProtocol(netadr_t *from, char *userinfo)
{
  const char *v4; 
  unsigned int v5; 
  const char *v6; 
  unsigned int ProtocolVersion; 
  SvGameGlobals *SvGameGlobalsCommon; 
  const char *v10; 
  unsigned int v11; 
  const char *v12; 
  unsigned int v13; 
  unsigned int PlatformSignature; 
  const char *v15; 
  unsigned int PersistentDataDefVersion; 
  const char *v17; 
  unsigned int v18; 
  unsigned __int64 PersistentDataDefFormatChecksum; 
  const char *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  __int64 v23; 

  if ( !userinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1722, ASSERT_TYPE_ASSERT, "( userinfo )", (const char *)&queryFormat, "userinfo") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1723, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo stats access in front-end scene", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  v4 = Info_ValueForKey(userinfo, "protocol");
  v5 = atoi(v4);
  if ( v5 == GetProtocolVersion() )
  {
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
      __debugbreak();
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    v10 = Info_ValueForKey(userinfo, "checksum");
    v11 = atoi(v10);
    if ( LODWORD(SvGameGlobalsCommon[2].profile.vmBuiltinTimeAccum) == v11 )
    {
      v12 = Info_ValueForKey(userinfo, "platsig");
      v13 = atoi(v12);
      if ( v13 != MSG_GetPlatformSignature() )
      {
        PlatformSignature = MSG_GetPlatformSignature();
        Com_Printf(131087, "!!! PLATFORM SIG MISMATCH 0x%08x (should be 0x%08x) !!!\n", v13, PlatformSignature);
      }
      v15 = Info_ValueForKey(userinfo, "statver");
      j_sscanf(v15, "%i %llx", &v22, &v23);
      if ( v22 == LiveStorage_GetPersistentDataDefVersion() )
      {
        if ( v23 == LiveStorage_GetPersistentDataDefFormatChecksum() )
        {
          return 1;
        }
        else
        {
          PersistentDataDefFormatChecksum = LiveStorage_GetPersistentDataDefFormatChecksum();
          v20 = j_va(aError_1, v23, PersistentDataDefFormatChecksum);
          NET_OutOfBandPrint(NS_MAXCLIENTS, from, v20);
          v21 = LiveStorage_GetPersistentDataDefFormatChecksum();
          Com_Printf(131087, "    rejected connect with stat format checksum %llx (should be %llx)\n", v23, v21);
          return 0;
        }
      }
      else
      {
        PersistentDataDefVersion = LiveStorage_GetPersistentDataDefVersion();
        v17 = j_va(aError_8, v22, PersistentDataDefVersion);
        NET_OutOfBandPrint(NS_MAXCLIENTS, from, v17);
        v18 = LiveStorage_GetPersistentDataDefVersion();
        Com_Printf(131087, "    rejected connect with stat version %i (should be %i)\n", v22, v18);
        return 0;
      }
    }
    else
    {
      NET_OutOfBandPrint(NS_MAXCLIENTS, from, aError_10);
      Com_Printf(131087, "    rejected connect from checksum %i (should be %i)\n", v11, SvGameGlobalsCommon[2].profile.vmBuiltinTimeAccum);
      return 0;
    }
  }
  else
  {
    v6 = j_va(aErrorExeServer_0, "8.24");
    NET_OutOfBandPrint(NS_MAXCLIENTS, from, v6);
    ProtocolVersion = GetProtocolVersion();
    Com_Printf(131087, "    rejected connect from protocol version %i (should be %i)\n", v5, ProtocolVersion);
    return 0;
  }
}

/*
==============
SV_ClientMP_DirectConnect_VerifyFrontEndProtocol
==============
*/
void SV_ClientMP_DirectConnect_VerifyFrontEndProtocol(char *userinfo)
{
  const char *v2; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  const char *v15; 
  const char *v16; 
  char v17; 
  __int64 v18; 
  char v19; 

  v2 = "FEp";
  v3 = 0x7FFFFFFFi64;
  v4 = 0x7FFFFFFFi64;
  v5 = Info_ValueForKey(userinfo, "protocol");
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v6 = v2[v5 - "FEp"];
    v7 = v4;
    v8 = *v2++;
    --v4;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1706, ASSERT_TYPE_ASSERT, "(!I_strcmp( clientProtocolStr, \"FEp\" ))", "%s\n\tIncorrect userinfo protocol '%s' for connecting front end client", "!I_strcmp( clientProtocolStr, FRONTEND_SCENE_PROTOCOL_STR )", v5) )
        __debugbreak();
      break;
    }
  }
  while ( v6 );
  v9 = "FEc";
  v10 = Info_ValueForKey(userinfo, "checksum");
  v11 = 0x7FFFFFFFi64;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v12 = v9[v10 - "FEc"];
    v13 = v11;
    v14 = *v9++;
    --v11;
    if ( !v13 )
      break;
    if ( v12 != v14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1709, ASSERT_TYPE_ASSERT, "(!I_strcmp( clientChecksumStr, \"FEc\" ))", "%s\n\tIncorrect userinfo checksum '%s' for connecting front end client", "!I_strcmp( clientChecksumStr, FRONTEND_SCENE_CHECKSUM_STR )", v10) )
        __debugbreak();
      break;
    }
  }
  while ( v12 );
  v15 = "FEs";
  v16 = Info_ValueForKey(userinfo, "statver");
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v17 = v15[v16 - "FEs"];
    v18 = v3;
    v19 = *v15++;
    --v3;
    if ( !v18 )
      break;
    if ( v17 != v19 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1712, ASSERT_TYPE_ASSERT, "(!I_strcmp( statVerStr, \"FEs\" ))", "%s\n\tIncorrect userinfo stats version '%s' for connecting front end client", "!I_strcmp( statVerStr, FRONTEND_SCENE_STATVER_STR )", v16) )
        __debugbreak();
      return;
    }
  }
  while ( v17 );
}

/*
==============
SV_ClientMP_DropBots
==============
*/
void SV_ClientMP_DropBots(int numBotsToDrop, const bitarray<224> *teamsToDrop)
{
  SV_ClientMP_DropBotsOrTestClients(numBotsToDrop, teamsToDrop, TC_BOT);
}

/*
==============
SV_ClientMP_DropBotsOrTestClients
==============
*/
void SV_ClientMP_DropBotsOrTestClients(int numBotsToDrop, const bitarray<224> *teamsToDrop, TestClientType type)
{
  int v3; 
  signed int i; 
  SvClient *CommonClient; 
  unsigned __int64 team; 
  __int64 v10; 
  __int64 v11; 

  v3 = 0;
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state > CS_ZOMBIE )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      team = (unsigned int)CommonClient->gentity->client->sess.cs.team;
      if ( (unsigned int)team >= 0xE0 )
      {
        LODWORD(v11) = 224;
        LODWORD(v10) = CommonClient->gentity->client->sess.cs.team;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (team & 0x1F)) & teamsToDrop->array[team >> 5]) != 0 && NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) && LODWORD(CommonClient[855].__vftable) == type )
      {
        SV_GameMP_DropClient(i, (const char *)&stru_144009380);
        if ( ++v3 == numBotsToDrop )
          break;
      }
    }
  }
  Dvar_SetBool_Internal(DVARBOOL_bot_spawnControlledByDvar, 1);
}

/*
==============
SV_ClientMP_DropClient
==============
*/
void SV_ClientMP_DropClient(SvClientMP *drop, const char *reason, bool tellThem)
{
  SvClientConnectionState state; 
  int MpClientIndex; 
  int v8; 
  challenge_t *challenges; 
  bool v10; 
  const char *v11; 
  unsigned int v12; 
  const char *v13; 
  __int64 v14; 
  char dest[48]; 
  char v16[256]; 
  char v17[256]; 

  state = drop->state;
  if ( state == CS_FREE )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2443, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Attempting to drop a client that is not present.") )
      return;
    goto LABEL_3;
  }
  if ( state == CS_ZOMBIE )
  {
    if ( drop->dropReason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "( ( drop->dropReason == 0 ) )", "( drop->dropReason ) = %s", drop->dropReason) )
LABEL_3:
      __debugbreak();
  }
  else
  {
    drop->dropReason = NULL;
    Core_strcpy(dest, 0x24ui64, drop->name);
    SV_ClientMP_FreeClient(drop, reason);
    if ( state == CS_RECONNECTING )
    {
      Com_Printf(15, "DropClient - Going to CS_FREE from CS_RECONNECTING for '%s'\n", dest);
      drop->state = CS_FREE;
      MpClientIndex = SV_Client_GetMpClientIndex(drop);
      SV_Live_RemoveClient(MpClientIndex, reason, tellThem, NET_CLOSE_DTLS);
      tellThem = 0;
    }
    else
    {
      Com_Printf(131087, "Going to CS_ZOMBIE from %i for %s (%s) due to %s\n", (unsigned __int8)state, dest, drop->playerGuid, reason);
      drop->state = CS_ZOMBIE;
    }
    if ( !drop->gentity )
    {
      v8 = 0;
      challenges = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->challenges;
      while ( !NetConnection::operator==(&drop->clientConnection, &challenges->adr) )
      {
        ++v8;
        ++challenges;
        if ( v8 >= 1024 )
          goto LABEL_17;
      }
      challenges->connected = 0;
    }
LABEL_17:
    if ( !reason || (v10 = I_stricmp(reason, (const char *)&stru_144009380) == 0, v11 = "EXE/LEFTGAME", !v10) )
      v11 = reason;
    Com_sprintf_truncate<256>((char (*)[256])v16, aC_5, 101i64, dest, v11);
    SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v16);
    v12 = SV_Client_GetMpClientIndex(drop);
    Com_Printf(15, "%i:%s %s\n", v12, dest, reason);
    if ( tellThem )
    {
      if ( (unsigned __int8)state < CS_CONNECTED )
      {
        LODWORD(v14) = (unsigned __int8)state;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2400, ASSERT_TYPE_ASSERT, "( ( state >= SvClientConnectionState::CS_CONNECTED ) )", "( static_cast<uint>( state ) ) = %u", v14) )
          __debugbreak();
      }
      if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2401, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
        __debugbreak();
      if ( state == CS_ACTIVE )
      {
        Com_sprintf_truncate(v17, 0x100ui64, "%c \"%s\"", 114i64, reason);
        drop->SendServerCommand(drop, SV_CMD_RELIABLE, v17);
      }
      else
      {
        v13 = j_va("disconnect %s", reason);
        NetConnection::SendUnreliable(&drop->clientConnection, v13);
      }
    }
  }
}

/*
==============
SV_ClientMP_DropIfInactive
==============
*/
void SV_ClientMP_DropIfInactive(int slot, const char *reason, bool tellThem)
{
  SvClient *CommonClient; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v8; 
  int time; 
  int v10; 
  SvPersistentGlobalsMP *v11; 
  char *fmt; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2551, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(slot);
  if ( CommonClient->state )
  {
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v8 = DVARINT_sv_rejoinTimeout;
    time = PersistentGlobalsMP->time;
    if ( !DVARINT_sv_rejoinTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rejoinTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v10 = *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget;
    if ( time - v10 < 1000 * v8->current.integer )
    {
      v11 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      LODWORD(fmt) = v10;
      Com_Printf(15, "SV_DropClientIfInactive - Client %i is still active, not dropping. SvPersistentGlobalsMP::GetTime() = %i, cl->lastPacketTime = %i.\n", (unsigned int)slot, (unsigned int)v11->time, fmt);
    }
    else
    {
      SV_ClientMP_DropClient((SvClientMP *)CommonClient, reason, tellThem);
    }
  }
  else
  {
    Com_Printf(15, "Unregistering client %i from session because they are CS_FREE in SV_DropClientIfInactive.\n", (unsigned int)slot);
    SV_Live_RemoveClient(slot, reason, 0, NET_CLOSE_SOFT);
  }
}

/*
==============
SV_ClientMP_DropIndex
==============
*/
void SV_ClientMP_DropIndex(const unsigned int clientIndex, const char *reason, bool tellThem)
{
  SvClient *CommonClient; 
  __int64 v7; 
  unsigned int v8; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2531, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v8 = SvClient::ms_clientCount;
    LODWORD(v7) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2532, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2533, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  if ( CommonClient->state )
  {
    SV_ClientMP_DropClient((SvClientMP *)CommonClient, reason, tellThem);
  }
  else
  {
    Com_Printf(15, "Unregistering client %i from session because they are CS_FREE in SV_DropClientSlot.\n", clientIndex);
    SV_Live_RemoveClient(clientIndex, (const char *)&queryFormat.fmt + 3, 0, NET_CLOSE_SOFT);
  }
}

/*
==============
SV_ClientMP_DropTestClients
==============
*/
void SV_ClientMP_DropTestClients(int numBotsToDrop, const bitarray<224> *teamsToDrop)
{
  SV_ClientMP_DropBotsOrTestClients(numBotsToDrop, teamsToDrop, TC_TEST_CLIENT);
}

/*
==============
SV_ClientMP_DropUserCommand
==============
*/
void SV_ClientMP_DropUserCommand(SvClientMP *const cl, const usercmd_s *const cmd)
{
  usercmd_s *p_lastUsercmd; 
  const usercmd_s *v5; 
  __int64 v6; 
  __int128 v7; 
  bool v8; 
  int MpClientIndex; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4174, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4175, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  p_lastUsercmd = &cl->lastUsercmd;
  v5 = cmd;
  v6 = 2i64;
  do
  {
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    v7 = *(_OWORD *)&v5->buttons;
    v5 = (const usercmd_s *)((char *)v5 + 128);
    *(_OWORD *)&p_lastUsercmd[-1].offHand.attachmentVariationIndices[13] = v7;
    *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo = *(_OWORD *)&v5[-1].offHand.weaponCamo;
    *(_OWORD *)p_lastUsercmd[-1].remoteControlMove = *(_OWORD *)v5[-1].remoteControlMove;
    *(_OWORD *)p_lastUsercmd[-1].vehAngles = *(_OWORD *)v5[-1].vehAngles;
    *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ = *(_OWORD *)&v5[-1].vehOrgZ;
    *(_OWORD *)&p_lastUsercmd[-1].gunYOfs = *(_OWORD *)&v5[-1].gunYOfs;
    *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data = *(_OWORD *)v5[-1].sightedClientsMask.data;
    *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v5[-1].sightedClientsMask.data[4];
    --v6;
  }
  while ( v6 );
  v8 = cl->state == CS_ACTIVE;
  p_lastUsercmd->buttons = v5->buttons;
  if ( v8 )
  {
    GStatic::SetActiveStatics();
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    G_ActiveMP_ClientDropThink(MpClientIndex, cmd);
    GStatic::ClearActiveStatics();
  }
}

/*
==============
SV_ClientMP_EnterWorld
==============
*/
void SV_ClientMP_EnterWorld(SvClientMP *client, usercmd_s *cmd, bool firstConnect)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int MpClientIndex; 
  __int64 v8; 
  playerState_s *PlayerstateForClientNum; 
  usercmd_s *v10; 
  __int64 v11; 
  usercmd_s *p_lastUsercmd; 
  __int128 v13; 
  int commandTime; 
  int loopbackProcessStopTime; 
  SvClientConnectionState migrationState; 
  gentity_s *v17; 
  int v18; 
  int v19; 
  int v20; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  v8 = MpClientIndex;
  PlayerstateForClientNum = SV_Game_GetPlayerstateForClientNum(MpClientIndex);
  Com_Printf(131087, "%i: Going from CS_CLIENTLOADING to CS_ACTIVE for client %i %s\n", (unsigned int)PersistentGlobalsMP->time, (unsigned int)v8, client->name);
  client->state = CS_ACTIVE;
  v10 = cmd;
  client->deltaMessage = -1;
  v11 = 2i64;
  client->nextSnapshotTime = PersistentGlobalsMP->time;
  p_lastUsercmd = &client->lastUsercmd;
  do
  {
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    v13 = *(_OWORD *)&v10->buttons;
    v10 = (usercmd_s *)((char *)v10 + 128);
    *(_OWORD *)&p_lastUsercmd[-1].offHand.attachmentVariationIndices[13] = v13;
    *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo = *(_OWORD *)&v10[-1].offHand.weaponCamo;
    *(_OWORD *)p_lastUsercmd[-1].remoteControlMove = *(_OWORD *)v10[-1].remoteControlMove;
    *(_OWORD *)p_lastUsercmd[-1].vehAngles = *(_OWORD *)v10[-1].vehAngles;
    *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ = *(_OWORD *)&v10[-1].vehOrgZ;
    *(_OWORD *)&p_lastUsercmd[-1].gunYOfs = *(_OWORD *)&v10[-1].gunYOfs;
    *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data = *(_OWORD *)v10[-1].sightedClientsMask.data;
    *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v10[-1].sightedClientsMask.data[4];
    --v11;
  }
  while ( v11 );
  p_lastUsercmd->buttons = v10->buttons;
  commandTime = cmd->commandTime;
  PlayerstateForClientNum->commandTime = commandTime;
  PlayerstateForClientNum->commandTimeInterpolated = commandTime;
  PlayerstateForClientNum->inputTime = 0;
  PlayerstateForClientNum->inputTimeInterpolated = 0;
  loopbackProcessStopTime = PersistentGlobalsMP->time + 2000;
  if ( PersistentGlobalsMP->loopbackProcessStopTime > loopbackProcessStopTime )
    loopbackProcessStopTime = PersistentGlobalsMP->loopbackProcessStopTime;
  PersistentGlobalsMP->loopbackProcessStopTime = loopbackProcessStopTime;
  if ( SV_GetClientRequiredStatPackets(client) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3149, ASSERT_TYPE_ASSERT, "(SV_HasAllClientStatPackets( client ))", "%s\n\tClient entering world without having all of its stats set", "SV_HasAllClientStatPackets( client )") )
    __debugbreak();
  GStatic::SetActiveStatics();
  migrationState = client->migrationState;
  v17 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v8];
  if ( migrationState == CS_ACTIVE )
  {
    if ( client->gentity != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3158, ASSERT_TYPE_ASSERT, "(client->gentity == ent)", (const char *)&queryFormat, "client->gentity == ent") )
      __debugbreak();
    if ( v17->s.number != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3159, ASSERT_TYPE_ASSERT, "(ent->s.number == clientNum)", (const char *)&queryFormat, "ent->s.number == clientNum") )
      __debugbreak();
    v18 = SV_Client_GetMpClientIndex(client);
    G_ClientMP_Migrate(v18);
    if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
    {
      *(_QWORD *)&PlayerstateForClientNum->animState.animSet = 0i64;
      *(_QWORD *)&PlayerstateForClientNum->animState.slot[0].packedAnim = 0i64;
      PlayerstateForClientNum->animState.slot[1].packedAnim = 0;
      PlayerstateForClientNum->animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(PlayerstateForClientNum->suitIndex);
    }
  }
  else
  {
    v17->s.number = truncate_cast<short,int>(v8);
    client->gentity = v17;
    v19 = SV_Client_GetMpClientIndex(client);
    G_ClientMP_Begin(v19);
    v20 = SV_Client_GetMpClientIndex(client);
    if ( SV_BotIsBot(v20) )
      SV_BotInit(client, firstConnect);
  }
  GStatic::ClearActiveStatics();
  client->migrationState = CS_FREE;
}

/*
==============
SV_ClientMP_ExecuteMessage
==============
*/
bool SV_ClientMP_ExecuteMessage(SvClientMP *cl, msg_t *msg)
{
  bool v4; 
  int serverId; 
  int v7; 
  const char *v8; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const char *v10; 
  const char *v11; 
  const char *String; 
  BgStatic *ActiveStatics; 
  char *Value; 
  int *v15; 
  _QWORD *v16; 
  char *v17; 
  int *v18; 
  unsigned __int64 v19; 
  ThreadContext CurrentThreadContext; 
  unsigned int v21; 
  unsigned int MpClientIndex; 
  BgStatic *v23; 
  char *fmt; 
  __int64 v25; 
  __int64 v26; 
  int lastCommand; 
  msg_t buf; 
  unsigned __int8 data[2480]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7026, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7027, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( SV_UserMoveWorkersMP_IsClientThinkWorkPending() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7029, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsClientThinkWorkPending() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsClientThinkWorkPending()") )
    __debugbreak();
  v4 = 0;
  MSG_Init(&buf, data, 2474);
  if ( !MSG_ReadBitsCompress(&msg->data[msg->readcount], data, msg->cursize - msg->readcount, buf.maxsize, &buf.cursize) )
  {
    SV_ClientMP_DropClient(cl, "EXE/TRANSMITERROR_CORRUPT_DATA", 0);
    return 0;
  }
  serverId = cl->serverId;
  v7 = sv_serverId_value;
  if ( serverId == sv_serverId_value )
  {
    if ( SV_ClientMP_ProcessCommands(cl, &buf, 0, &lastCommand) )
    {
      if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
      {
        ActiveStatics = BgStatic::GetActiveStatics();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7114, ASSERT_TYPE_ASSERT, "( ( !BgStatic::HasActiveStatics() ) )", "( BgStatic::GetActiveStatics() ) = %p", ActiveStatics) )
          __debugbreak();
      }
      Value = (char *)Sys_GetValue(0);
      v15 = (int *)(Value + 16696);
      if ( (unsigned int)(*((_DWORD *)Value + 4174) + 1) >= 3 )
      {
        LODWORD(v25) = *((_DWORD *)Value + 4174) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, 3) )
          __debugbreak();
      }
      if ( (unsigned int)++*v15 >= 3 )
      {
        LODWORD(v26) = 3;
        LODWORD(v25) = *v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v16 = Value + 2088;
      v17 = Value + 40;
      if ( *v16 < (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v16 += 8i64;
      if ( *v16 >= (unsigned __int64)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v16 = v15;
      if ( *v16 <= (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v18 = &v15[*v15 + 2];
      v19 = __rdtsc();
      *v18 = v19;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 365, NULL, 0);
      v21 = lastCommand;
      if ( lastCommand )
      {
        if ( lastCommand == 1 )
        {
          v4 = SV_ClientMP_UserMove(cl, &buf, 0);
        }
        else if ( lastCommand != 3 )
        {
          MpClientIndex = SV_Client_GetMpClientIndex(cl);
          Com_PrintWarning(15, "WARNING: bad command byte %i for client %i\n", v21, MpClientIndex);
        }
      }
      else
      {
        v4 = SV_ClientMP_UserMove(cl, &buf, 1);
      }
      Profile_EndInternal(NULL);
      if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
      {
        v23 = BgStatic::GetActiveStatics();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7134, ASSERT_TYPE_ASSERT, "( ( !BgStatic::HasActiveStatics() ) )", "( BgStatic::GetActiveStatics() ) = %p", v23) )
          __debugbreak();
      }
      return v4;
    }
    else
    {
      v11 = "Failed";
      if ( cl->state == CS_ZOMBIE )
        v11 = "Stopped";
      String = NetConnection::GetString(&cl->clientConnection);
      Com_Printf(131087, "%s : (%s) %s processing commands\n", cl->name, String, v11);
      return 0;
    }
  }
  else
  {
    v8 = NetConnection::GetString(&cl->clientConnection);
    LODWORD(v25) = v7;
    LODWORD(fmt) = serverId;
    Com_Printf(131087, "%s : (%s) Received invalid game state (%x vs %x)\n", cl->name, v8, fmt, v25);
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    if ( !SvGameGlobalsMP->sendGameStates )
      SvGameGlobalsMP->sendGameStates = NetConnection::IsLocal(&cl->clientConnection);
    if ( (((unsigned __int8)sv_serverId_value ^ LOBYTE(cl->serverId)) & 0xF0) != 0 )
    {
      if ( SV_ClientMP_ProcessCommands(cl, &buf, 1, &lastCommand) && SvGameGlobalsMP->sendGameStates && cl->messageAcknowledge > cl->gamestateMessageNum )
      {
        v10 = NetConnection::GetString(&cl->clientConnection);
        Com_Printf(131087, "%s : (%s) Dropped gamestate, resending\n", cl->name, v10);
        SV_SnapWorkersMP_FinishSnapshotWorkers();
        SV_SendClientGameState(cl);
      }
    }
    else if ( cl->state == CS_CLIENTLOADING )
    {
      SV_ClientMP_EnterWorld(cl, &cl->lastUsercmd, 0);
      return 0;
    }
    return 0;
  }
}

/*
==============
SV_ClientMP_Extrapolate
==============
*/
void SV_ClientMP_Extrapolate(const int clientIndex)
{
  const SvClientMP *CommonClient; 
  usercmd_s outCmd; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (const SvClientMP *)SvClient::GetCommonClient(clientIndex);
  if ( SV_ClientMP_GetExtrapCommand(CommonClient, &outCmd) )
  {
    GStatic::SetActiveStatics();
    G_ActiveMP_ExtrapolatePlayer(clientIndex, &outCmd, &CommonClient->extrapPlayerState);
    GStatic::ClearActiveStatics();
  }
}

/*
==============
SV_ClientMP_FinishExtrapolationWorkers
==============
*/
void SV_ClientMP_FinishExtrapolationWorkers(void)
{
  const dvar_t *v0; 
  signed int i; 
  SvClient *CommonClient; 
  playerState_s *EffectivePlayerstateForClientNum; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_ClientMP_FinishExtrapolationWorkers");
  SV_UserMoveWorkersMP_FinishClientThinkCmds();
  v0 = DVARBOOL_sv_cmdDropOnPredict;
  if ( !DVARBOOL_sv_cmdDropOnPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdDropOnPredict") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
  {
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      if ( CommonClient->state == CS_ACTIVE )
      {
        EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(i);
        v4 = 0;
        if ( *(int *)&CommonClient[602].lastUsercmd.offHand.attachmentVariationIndices[9] > 0 )
          v4 = *(_DWORD *)&CommonClient[602].lastUsercmd.offHand.attachmentVariationIndices[9];
        v5 = EffectivePlayerstateForClientNum->commandTime - v4;
        EffectivePlayerstateForClientNum->commandTime = v5;
        EffectivePlayerstateForClientNum->commandTimeInterpolated = v5;
        v6 = 0;
        v7 = *(_DWORD *)&CommonClient[602].lastUsercmd.offHand.attachmentVariationIndices[9];
        *(_DWORD *)&CommonClient[602].lastUsercmd.offHand.attachmentVariationIndices[9] = 0;
        if ( v7 > 0 )
          v6 = v7;
        CommonClient->lastUsercmd.commandTime -= v6;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientMP_FreeClient
==============
*/
void SV_ClientMP_FreeClient(SvClientMP *cl, const char *reason)
{
  int MpClientIndex; 
  int IsBot; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  SvClient *CommonClient; 
  const char *v11; 
  scrContext_t *v12; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1342, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( cl->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1343, ASSERT_TYPE_ASSERT, "( cl->state > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "cl->state > SvClientConnectionState::CS_ZOMBIE") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  IsBot = SV_BotIsBot(MpClientIndex);
  v6 = IsBot;
  if ( cl->gentity && IsBot )
    SV_BotDropped(MpClientIndex);
  SV_StreamSync_ClientFree(cl);
  if ( cl->bIsSplitscreenClient )
    SV_ClientMP_UpdateSplitscreenStateForConnection(&cl->clientConnection);
  cl->migrationState = CS_FREE;
  if ( SV_Loaded() && (cl->state != CS_RECONNECTING || cl->serverId == sv_serverId_value) )
  {
    GStatic::SetActiveStatics();
    v7 = SV_Client_GetMpClientIndex(cl);
    G_ClientMP_Disconnect(v7, reason);
    GStatic::ClearActiveStatics();
  }
  v8 = SV_Client_GetMpClientIndex(cl);
  v9 = v8;
  if ( v8 < 0 || v8 >= (int)SvClient::ms_clientCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440DE0B8, 575i64, (unsigned int)v8);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v9);
  Core_strcpy((char *)&CommonClient[1].lastUsercmd.buttons + 4, 0x400ui64, (const char *)&queryFormat.fmt + 3);
  v11 = Info_ValueForKey((const char *)&queryFormat.fmt + 3, (const char *)&stru_143C9A1A4);
  Core_strcpy(&CommonClient[4].lastUsercmd.selectedLoc[1], 0x24ui64, v11);
  cl->testClient = TC_NONE;
  if ( cl->scriptId )
  {
    v12 = ScriptContext_Server();
    Scr_FreeExtArray(v12, cl->scriptId);
    cl->scriptId = 0;
  }
  if ( v6 )
    SV_BotDisconnectCleanup(MpClientIndex);
}

/*
==============
SV_ClientMP_FreeClients
==============
*/
void SV_ClientMP_FreeClients(void)
{
  signed int i; 
  SvClient *CommonClient; 
  SvClient *v2; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    v2 = CommonClient;
    if ( CommonClient->state >= CS_CONNECTED )
      SV_ClientMP_FreeClient((SvClientMP *)CommonClient, "SV_Shutdown");
    NetConnection::Close((NetConnection *)&v2[642].lastUsercmd.sightedClientsMask.data[6], NET_CLOSE_SOFT);
  }
}

/*
==============
SV_ClientMP_FreeScriptPers
==============
*/
void SV_ClientMP_FreeScriptPers(void)
{
  signed int i; 
  SvClient *CommonClient; 
  SvClient *v2; 
  scrContext_t *v3; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    v2 = CommonClient;
    if ( CommonClient->state > CS_ZOMBIE )
    {
      if ( LODWORD(CommonClient[854].gentity) )
      {
        v3 = ScriptContext_Server();
        Scr_FreeExtArray(v3, (unsigned int)v2[854].gentity);
        LODWORD(v2[854].gentity) = 0;
      }
    }
  }
}

/*
==============
SV_ClientMP_GeneratePresetTestClientCustomization
==============
*/
__int64 SV_ClientMP_GeneratePresetTestClientCustomization(ClientCustomizationInfo *presetCustomizationArray, const unsigned int presetCustomizationArraySize)
{
  __int64 v2; 
  ClientCustomizationInfo *v3; 
  unsigned int v4; 
  unsigned int randSeed; 

  v2 = presetCustomizationArraySize;
  v3 = presetCustomizationArray;
  if ( !presetCustomizationArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7170, ASSERT_TYPE_ASSERT, "( presetCustomizationArray )", (const char *)&queryFormat, "presetCustomizationArray") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7171, ASSERT_TYPE_ASSERT, "( presetCustomizationArraySize )", (const char *)&queryFormat, "presetCustomizationArraySize") )
    __debugbreak();
  randSeed = Sys_Milliseconds();
  if ( !(_DWORD)v2 )
    return 0i64;
  v4 = v2;
  do
  {
    BG_Customization_SetRandomCustomization(v3++, &randSeed);
    --v2;
  }
  while ( v2 );
  return v4;
}

/*
==============
SV_ClientMP_GetAssignedSquad
==============
*/
__int64 SV_ClientMP_GetAssignedSquad(const unsigned int clientNum)
{
  const PartyData *ServerLobby; 
  const char *v4; 
  unsigned int AssignedSquad; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v10 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7774, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v10) )
      __debugbreak();
  }
  if ( !SV_ClientMP_HasAssignedTeam(clientNum) )
    return 0i64;
  if ( SV_IsDemoPlaying() )
    return SV_Demo_GetByte();
  if ( clientNum >= SvClient::ms_clientCount )
  {
    LODWORD(v9) = SvClient::ms_clientCount;
    LODWORD(v6) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7753, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
    if ( clientNum >= SvClient::ms_clientCount )
    {
      LODWORD(v11) = SvClient::ms_clientCount;
      LODWORD(v8) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7755, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v8, v11) )
        __debugbreak();
    }
  }
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7756, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo assigned squads for front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ServerLobby = SV_MainMP_GetServerLobby();
  Party_GetXuid(&result, ServerLobby, clientNum);
  if ( XUID::IsNull(&result) )
  {
    v4 = XUID::ToDevString(&result);
    Com_PrintError(15, "SV_GetAssignedSquad Error: unknown xuid (%s) for client (%i).\n", v4, clientNum);
    SV_Record_GetByte(0xFFu);
    return 0xFFFFFFFFi64;
  }
  else
  {
    AssignedSquad = Party_GetAssignedSquad(ServerLobby, result);
    SV_Record_GetByte(AssignedSquad);
    return AssignedSquad;
  }
}

/*
==============
SV_ClientMP_GetAssignedSquad_Internal
==============
*/
int SV_ClientMP_GetAssignedSquad_Internal(const unsigned int clientNum)
{
  const PartyData *ServerLobby; 
  const char *v3; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v7 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7753, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v7) )
      __debugbreak();
    if ( clientNum >= SvClient::ms_clientCount )
    {
      LODWORD(v8) = SvClient::ms_clientCount;
      LODWORD(v6) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7755, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
  }
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7756, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo assigned squads for front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ServerLobby = SV_MainMP_GetServerLobby();
  Party_GetXuid(&result, ServerLobby, clientNum);
  if ( !XUID::IsNull(&result) )
    return Party_GetAssignedSquad(ServerLobby, result);
  v3 = XUID::ToDevString(&result);
  Com_PrintError(15, "SV_GetAssignedSquad Error: unknown xuid (%s) for client (%i).\n", v3, clientNum);
  return -1;
}

/*
==============
SV_ClientMP_GetAssignedTeam
==============
*/
__int64 SV_ClientMP_GetAssignedTeam(unsigned int clientNum)
{
  const PartyData *ServerLobby; 
  const char *v4; 
  unsigned int AssignedTeam; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v9; 
  unsigned int v10; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v10 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7727, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v10) )
      __debugbreak();
  }
  if ( !SV_ClientMP_HasAssignedTeam(clientNum) )
    return 0i64;
  if ( SV_IsDemoPlaying() )
    return SV_Demo_GetByte();
  if ( clientNum >= SvClient::ms_clientCount )
  {
    LODWORD(v9) = SvClient::ms_clientCount;
    LODWORD(v7) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7705, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
    if ( clientNum >= SvClient::ms_clientCount )
    {
      LODWORD(v9) = SvClient::ms_clientCount;
      LODWORD(v7) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7707, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
  }
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7708, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo assigned teams for front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ServerLobby = SV_MainMP_GetServerLobby();
  Party_GetXuid(&result, ServerLobby, clientNum);
  if ( XUID::IsNull(&result) )
  {
    v4 = XUID::ToDevString(&result);
    Com_PrintError(15, "SV_GetAssignedTeam Error: unknown xuid (%s) for client (%i).\n", v4, clientNum);
    SV_Record_GetByte(0);
    return 0i64;
  }
  else
  {
    AssignedTeam = Party_GetAssignedTeam(ServerLobby, result);
    v6 = AssignedTeam;
    if ( AssignedTeam >= 0xCB )
    {
      LODWORD(v9) = 203;
      LODWORD(v7) = AssignedTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7720, ASSERT_TYPE_SANITY, "(unsigned)( team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    SV_Record_GetByte(v6);
    return v6;
  }
}

/*
==============
SV_ClientMP_GetAssignedTeam_Internal
==============
*/
__int64 SV_ClientMP_GetAssignedTeam_Internal(unsigned int clientNum)
{
  const PartyData *ServerLobby; 
  const char *v3; 
  unsigned int AssignedTeam; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v9; 
  unsigned int v10; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v10 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7705, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v10) )
      __debugbreak();
    if ( clientNum >= SvClient::ms_clientCount )
    {
      LODWORD(v9) = SvClient::ms_clientCount;
      LODWORD(v7) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7707, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
  }
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7708, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo assigned teams for front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ServerLobby = SV_MainMP_GetServerLobby();
  Party_GetXuid(&result, ServerLobby, clientNum);
  if ( XUID::IsNull(&result) )
  {
    v3 = XUID::ToDevString(&result);
    Com_PrintError(15, "SV_GetAssignedTeam Error: unknown xuid (%s) for client (%i).\n", v3, clientNum);
    return 0i64;
  }
  else
  {
    AssignedTeam = Party_GetAssignedTeam(ServerLobby, result);
    v6 = AssignedTeam;
    if ( AssignedTeam >= 0xCB )
    {
      LODWORD(v9) = 203;
      LODWORD(v7) = AssignedTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7720, ASSERT_TYPE_SANITY, "(unsigned)( team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    return v6;
  }
}

/*
==============
SV_ClientMP_GetAvailableBufferThinkTime
==============
*/
__int64 SV_ClientMP_GetAvailableBufferThinkTime(const SvClientMP *cl)
{
  unsigned int v2; 
  int commandTime; 
  int i; 
  unsigned __int64 v5; 
  usercmd_s *v6; 
  int v7; 
  unsigned int v8; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5049, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = 0;
  if ( cl == (const SvClientMP *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = cl->lastUsercmd.commandTime;
  for ( i = cl->beginCmdIndex; i != cl->currCmdIndex; ++i )
  {
    v5 = i % 0x26ui64;
    v6 = &cl->cmds[v5];
    if ( (const SvClientMP *)((char *)cl + 264 * v5) == (const SvClientMP *)-173784i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    v7 = v6->commandTime - commandTime;
    v8 = v7 + v2;
    v2 = 0;
    if ( v7 >= 0 )
      v2 = v8;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    commandTime = v6->commandTime;
  }
  return v2;
}

/*
==============
SV_ClientMP_GetChallenge
==============
*/
void SV_ClientMP_GetChallenge(netadr_t *from)
{
  int v2; 
  int v3; 
  __int64 challenges; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  __int128 v10; 
  int addrHandleIndex; 
  int v12; 
  int v13; 
  const char *v14; 
  int v15; 
  int v16; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  char *Str1; 
  netadr_t v19; 
  netadr_t v20; 
  msg_t buf; 
  unsigned __int8 data[32]; 

  v2 = 0;
  v3 = 0x7FFFFFFF;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  challenges = (__int64)PersistentGlobalsMP->challenges;
  Str1 = (char *)SV_Cmd_Argv(2);
  v5 = 0;
  do
  {
    v6 = v3;
    v7 = v5;
    v16 = v2;
    v8 = v3;
    if ( !*(_DWORD *)(challenges + 28) )
    {
      v9 = *(_DWORD *)(challenges + 16);
      *(_OWORD *)&v20.type = *(_OWORD *)challenges;
      v10 = *(_OWORD *)&from->type;
      v20.addrHandleIndex = v9;
      addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v19.type = v10;
      v19.addrHandleIndex = addrHandleIndex;
      if ( NET_CompareAdr(&v19, &v20) )
      {
        if ( !strncmp(Str1, (const char *)(challenges + 32), 0x15ui64) )
          break;
      }
    }
    v3 = *(_DWORD *)(challenges + 24);
    ++v5;
    challenges += 56i64;
    v2 = v7;
    if ( v3 >= v8 )
      v2 = v16;
    if ( v3 >= v6 )
      v3 = v6;
  }
  while ( v5 < 1024 );
  if ( v5 == 1024 )
  {
    challenges = (__int64)&PersistentGlobalsMP->challenges[v2];
    v12 = G_rand() << 16;
    v5 = v2;
    *(_DWORD *)(challenges + 20) = PersistentGlobalsMP->time ^ v12 ^ G_rand();
    *(_OWORD *)challenges = *(_OWORD *)&from->type;
    *(_DWORD *)(challenges + 16) = from->addrHandleIndex;
    *(_QWORD *)(challenges + 24) = (unsigned int)PersistentGlobalsMP->time;
  }
  Core_strcpy(PersistentGlobalsMP->challenges[v5].playerGuid, 0x15ui64, Str1);
  v13 = from->addrHandleIndex;
  *(_OWORD *)&v19.type = *(_OWORD *)&from->type;
  v19.addrHandleIndex = v13;
  v14 = NET_AdrToString(&v19);
  Com_Printf(131087, "SV - GetChallenge response '%i' to client at '%s'\n", *(unsigned int *)(challenges + 20), v14);
  MSG_Init(&buf, data, 32);
  MSG_WriteString(&buf, "challengeResponse");
  MSG_WriteLong(&buf, *(_DWORD *)(challenges + 20));
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 466, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msgSend ))", "%s\n\tChallenge send buffer is too small, increase CHALLENGE_RESPONSE_SIZE", "!MSG_IsOverflowed( &msgSend )") )
    __debugbreak();
  v15 = NET_OutOfBandData(NS_MAXCLIENTS, from, buf.data, buf.cursize);
  if ( v15 < 0 )
    Com_PrintError(131087, "Failed to send response to challenge: error %d.\n", (unsigned int)v15);
}

/*
==============
SV_ClientMP_GetClientPersistentDataModifiedFlags
==============
*/
unsigned __int8 *SV_ClientMP_GetClientPersistentDataModifiedFlags(int clientNum)
{
  const SvClientMP *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (const SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 547, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( SV_GetClientRequiredStatPackets(CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 835, ASSERT_TYPE_ASSERT, "( SV_HasAllClientStatPackets( cl ) )", (const char *)&queryFormat, "SV_HasAllClientStatPackets( cl )") )
    __debugbreak();
  if ( SvClient::GetCommonClient(clientNum)->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 836, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE") )
    __debugbreak();
  return CommonClient->statsModifiedFlags;
}

/*
==============
SV_ClientMP_GetClientPing
==============
*/
int SV_ClientMP_GetClientPing(int clientNum)
{
  SvClient *CommonClient; 
  __int16 v3; 
  int v4; 

  if ( SV_IsDemoPlaying() )
    return SV_Demo_GetShort();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  v3 = truncate_cast<short,int>((int)CommonClient[783].__vftable);
  v4 = v3;
  SV_Demo_RecordShort(v3);
  return v4;
}

/*
==============
SV_ClientMP_GetClientPlayerDataBuffer
==============
*/
unsigned __int8 *SV_ClientMP_GetClientPlayerDataBuffer(int clientNum, StatsGroup statsGroup)
{
  unsigned __int8 *ClientStatsBuffer; 

  ClientStatsBuffer = SV_ClientMP_GetClientStatsBuffer(clientNum);
  return &ClientStatsBuffer[Com_PlayerData_GetStatsGroupOffset(statsGroup) + 4];
}

/*
==============
SV_ClientMP_GetClientStatsBuffer
==============
*/
unsigned __int8 *SV_ClientMP_GetClientStatsBuffer(int clientNum)
{
  const SvClientMP *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (const SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 547, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( SV_GetClientRequiredStatPackets(CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 817, ASSERT_TYPE_ASSERT, "( SV_HasAllClientStatPackets( cl ) )", (const char *)&queryFormat, "SV_HasAllClientStatPackets( cl )") )
    __debugbreak();
  if ( SvClient::GetCommonClient(clientNum)->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 818, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE") )
    __debugbreak();
  return CommonClient->stats;
}

/*
==============
SV_ClientMP_GetCommandThinkTime
==============
*/
int SV_ClientMP_GetCommandThinkTime(const SvClientMP *cl, const usercmd_s *cmd)
{
  usercmd_s *p_lastUsercmd; 
  int commandTime; 
  int v6; 
  const dvar_t *v7; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4915, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4916, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  p_lastUsercmd = &cl->lastUsercmd;
  if ( !p_lastUsercmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = p_lastUsercmd->commandTime;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v6 = cmd->commandTime;
  if ( !commandTime )
    return 0;
  v7 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return I_clamp(v6 - commandTime, 0, v7->current.integer);
}

/*
==============
SV_ClientMP_GetCurrentBurstTime
==============
*/
int SV_ClientMP_GetCurrentBurstTime(const SvClientMP *cl)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  __int64 v7; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5078, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( cl->startBufferBurstTime < cl->targetBufferBurstTime )
  {
    LODWORD(v7) = cl->startBufferBurstTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5079, ASSERT_TYPE_ASSERT, "( cl->startBufferBurstTime ) >= ( cl->targetBufferBurstTime )", "cl->startBufferBurstTime >= cl->targetBufferBurstTime\n\t%i, %i", v7, cl->targetBufferBurstTime) )
      __debugbreak();
  }
  v2 = DVARINT_sv_cmdBufferStepTime;
  if ( !DVARINT_sv_cmdBufferStepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferStepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5080, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_sv_cmdBufferStepTime, \"sv_cmdBufferStepTime\" ) > 0 )", (const char *)&queryFormat, "Dvar_GetInt( sv_cmdBufferStepTime ) > 0") )
    __debugbreak();
  v3 = DVARINT_sv_cmdBufferStepTime;
  if ( !DVARINT_sv_cmdBufferStepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferStepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  I_fclamp((float)cl->lerpBufferBurstStep / (float)v3->current.integer, 0.0, 1.0);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return I_clamp((int)*(float *)&_XMM1, cl->targetBufferBurstTime, cl->startBufferBurstTime);
}

/*
==============
SV_ClientMP_GetExtrapAngles
==============
*/
bool SV_ClientMP_GetExtrapAngles(const SvClientMP *const cl, const int commandTime, vec3_t *outAngles)
{
  int beginCmdIndex; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  double v11; 
  float v12; 
  double v14; 
  float v15; 
  double v16; 
  float v18; 
  float v20; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  float v26; 
  double v27; 
  bool result; 
  float v34; 
  __int64 v36; 
  float v37; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5434, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( cl->beginCmdIndex != cl->currCmdIndex )
  {
    LODWORD(v36) = cl->beginCmdIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5435, ASSERT_TYPE_ASSERT, "( cl->beginCmdIndex ) == ( cl->currCmdIndex )", "cl->beginCmdIndex == cl->currCmdIndex\n\t%i, %i", v36, cl->currCmdIndex) )
      __debugbreak();
  }
  beginCmdIndex = cl->beginCmdIndex;
  if ( beginCmdIndex <= 1 )
    return 0;
  v7 = (beginCmdIndex - 2) % 38;
  v8 = cl->cmds[v7].commandTime;
  v9 = (beginCmdIndex - 1) % 38;
  v10 = cl->cmds[v9].commandTime;
  if ( v10 <= v8 )
    return 0;
  v37 = _mm_cvtepi32_ps((__m128i)(unsigned int)(commandTime - v8)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)(v10 - v8)).m128_f32[0];
  v11 = MSG_UnpackSignedFloat(cl->cmds[v7].angles.v[2], 180.0, 0x14u);
  v12 = *(float *)&v11 * 0.0027777778;
  _XMM15 = 0i64;
  v14 = MSG_UnpackSignedFloat(cl->cmds[v7].angles.v[1], 180.0, 0x14u);
  v15 = *(float *)&v14 * 0.0027777778;
  v16 = MSG_UnpackSignedFloat(cl->cmds[v7].angles.v[0], 180.0, 0x14u);
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  v18 = (float)((float)(*(float *)&v16 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  v20 = (float)(v15 - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm15, xmm0, 1 }
  v22 = (float)(v12 - *(float *)&_XMM2) * 360.0;
  v23 = MSG_UnpackSignedFloat(cl->cmds[v9].angles.v[2], 180.0, 0x14u);
  v24 = *(float *)&v23 * 0.0027777778;
  v25 = MSG_UnpackSignedFloat(cl->cmds[v9].angles.v[1], 180.0, 0x14u);
  v26 = *(float *)&v25 * 0.0027777778;
  v27 = MSG_UnpackSignedFloat(cl->cmds[v9].angles.v[0], 180.0, 0x14u);
  __asm { vroundss xmm3, xmm15, xmm0, 1 }
  result = 1;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  outAngles->v[0] = (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)&v27 * 0.0027777778) - *(float *)&_XMM3) * 360.0) - v18) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v37) + v18;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  *(float *)&v27 = v26 - *(float *)&_XMM2;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  *(float *)&_XMM3 = (float)((float)((float)((float)((float)((float)(*(float *)&v27 * 360.0) - v20) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v37) + v20;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  v34 = (float)((float)((float)(v24 - *(float *)&_XMM2) * 360.0) - v22) * 0.0027777778;
  outAngles->v[1] = *(float *)&_XMM3;
  __asm { vroundss xmm2, xmm15, xmm1, 1 }
  outAngles->v[2] = (float)((float)((float)(v34 - *(float *)&_XMM2) * 360.0) * v37) + v22;
  return result;
}

/*
==============
SV_ClientMP_GetExtrapCommand
==============
*/
char SV_ClientMP_GetExtrapCommand(const SvClientMP *const cl, usercmd_s *outCmd)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  int beginCmdIndex; 
  usercmd_s *v7; 
  usercmd_s *v8; 
  __int64 v9; 
  __int128 v10; 
  usercmd_s *v11; 
  usercmd_s *p_lastUsercmd; 
  __int64 v13; 
  __int128 v14; 
  const dvar_t *v15; 
  int v16; 
  float v17; 
  int v18; 
  float v19; 
  vec3_t outAngles; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5980, ASSERT_TYPE_ASSERT, "( cl != nullptr )", (const char *)&queryFormat, "cl != nullptr") )
    __debugbreak();
  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5981, ASSERT_TYPE_ASSERT, "( outCmd != nullptr )", (const char *)&queryFormat, "outCmd != nullptr") )
    __debugbreak();
  v4 = DVARBOOL_command_extrapolation_enabled;
  if ( !DVARBOOL_command_extrapolation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  v5 = DVARINT_command_extrapolation_threshold;
  if ( !DVARINT_command_extrapolation_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( cl->cumulThinkError <= v5->current.integer )
    return 0;
  beginCmdIndex = cl->beginCmdIndex;
  if ( beginCmdIndex == cl->currCmdIndex )
  {
    v11 = outCmd;
    p_lastUsercmd = &cl->lastUsercmd;
    v13 = 2i64;
    do
    {
      v11 = (usercmd_s *)((char *)v11 + 128);
      v14 = *(_OWORD *)&p_lastUsercmd->buttons;
      p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
      *(_OWORD *)&v11[-1].offHand.attachmentVariationIndices[13] = v14;
      *(_OWORD *)&v11[-1].offHand.weaponCamo = *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo;
      *(_OWORD *)v11[-1].remoteControlMove = *(_OWORD *)p_lastUsercmd[-1].remoteControlMove;
      *(_OWORD *)v11[-1].vehAngles = *(_OWORD *)p_lastUsercmd[-1].vehAngles;
      *(_OWORD *)&v11[-1].vehOrgZ = *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ;
      *(_OWORD *)&v11[-1].gunYOfs = *(_OWORD *)&p_lastUsercmd[-1].gunYOfs;
      *(_OWORD *)v11[-1].sightedClientsMask.data = *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data;
      *(_OWORD *)&v11[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4];
      --v13;
    }
    while ( v13 );
    v11->buttons = p_lastUsercmd->buttons;
    v15 = DVARBOOL_sv_cmdExtrapAngles;
    if ( !DVARBOOL_sv_cmdExtrapAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdExtrapAngles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled && SV_ClientMP_GetExtrapAngles(cl, cl->cumulThinkError + cl->lastUsercmd.commandTime, &outAngles) )
    {
      v16 = BG_UsrCmdPackAngle(outAngles.v[0]);
      v17 = outAngles.v[1];
      outCmd->angles.v[0] = v16;
      v18 = BG_UsrCmdPackAngle(v17);
      v19 = outAngles.v[2];
      outCmd->angles.v[1] = v18;
      outCmd->angles.v[2] = BG_UsrCmdPackAngle(v19);
    }
  }
  else
  {
    v7 = outCmd;
    v8 = &cl->cmds[beginCmdIndex % 38];
    v9 = 2i64;
    do
    {
      v7 = (usercmd_s *)((char *)v7 + 128);
      v10 = *(_OWORD *)&v8->buttons;
      v8 = (usercmd_s *)((char *)v8 + 128);
      *(_OWORD *)&v7[-1].offHand.attachmentVariationIndices[13] = v10;
      *(_OWORD *)&v7[-1].offHand.weaponCamo = *(_OWORD *)&v8[-1].offHand.weaponCamo;
      *(_OWORD *)v7[-1].remoteControlMove = *(_OWORD *)v8[-1].remoteControlMove;
      *(_OWORD *)v7[-1].vehAngles = *(_OWORD *)v8[-1].vehAngles;
      *(_OWORD *)&v7[-1].vehOrgZ = *(_OWORD *)&v8[-1].vehOrgZ;
      *(_OWORD *)&v7[-1].gunYOfs = *(_OWORD *)&v8[-1].gunYOfs;
      *(_OWORD *)v7[-1].sightedClientsMask.data = *(_OWORD *)v8[-1].sightedClientsMask.data;
      *(_OWORD *)&v7[-1].sightedClientsMask.data[4] = *(_OWORD *)&v8[-1].sightedClientsMask.data[4];
      --v9;
    }
    while ( v9 );
    v7->buttons = v8->buttons;
  }
  outCmd->commandTime = cl->cumulThinkError + Com_GetUserCommandTime(&cl->lastUsercmd);
  return 1;
}

/*
==============
SV_ClientMP_GetExtrapolatedState
==============
*/
char SV_ClientMP_GetExtrapolatedState(const int clientIndex, SavedPlayerState **outExtrapState)
{
  const dvar_t *v2; 
  SvClient *CommonClient; 
  const dvar_t *v6; 
  SvClient *v7; 

  v2 = DVARBOOL_command_extrapolation_enabled;
  if ( !DVARBOOL_command_extrapolation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_13;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  v6 = DVARINT_command_extrapolation_threshold;
  v7 = CommonClient;
  if ( !DVARINT_command_extrapolation_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( *(_DWORD *)&v7[602].lastUsercmd.offHand.attachmentVariationIndices[5] > v6->current.integer )
  {
    *outExtrapState = (SavedPlayerState *)&v7[602].lastUsercmd.offHand.attachmentVariationIndices[21];
    return 1;
  }
  else
  {
LABEL_13:
    *outExtrapState = NULL;
    return 0;
  }
}

/*
==============
SV_ClientMP_GetInfoForTestClient
==============
*/
void SV_ClientMP_GetInfoForTestClient(char *s, int size)
{
  unsigned __int64 v2; 
  SvGameGlobals *SvGameGlobalsCommon; 
  int PersistentDataDefVersion; 
  unsigned __int64 PersistentDataDefFormatChecksum; 
  float vmBuiltinTimeAccum; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  unsigned int PlatformSignature; 
  char v14[32]; 
  char v15[176]; 

  v2 = size;
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7149, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tNo stats access in front-end scene", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v11 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v11) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  PersistentDataDefVersion = LiveStorage_GetPersistentDataDefVersion();
  PersistentDataDefFormatChecksum = LiveStorage_GetPersistentDataDefFormatChecksum();
  vmBuiltinTimeAccum = SvGameGlobalsCommon[2].profile.vmBuiltinTimeAccum;
  v8 = PersistentDataDefFormatChecksum;
  v14[0] = 0;
  v15[0] = 0;
  PlatformSignature = MSG_GetPlatformSignature();
  v12 = PersistentDataDefVersion;
  *(float *)&v10 = vmBuiltinTimeAccum;
  LODWORD(v9) = GetProtocolVersion();
  Com_sprintf(s, v2, "\\invited\\0\\cl_anonymous\\0\\color\\4\\rate\\5000\\xuid\\%s\\xnaddr\\%s\\natType\\2\\protocol\\%d\\checksum\\%d\\statver\\%d %llx\\platsig\\%d", v14, v15, v9, v10, v12, v8, PlatformSignature);
}

/*
==============
SV_ClientMP_GetLocalClientPing
==============
*/
int SV_ClientMP_GetLocalClientPing(int clientNumOfLocalClient)
{
  int numConnectedClients; 
  int v2; 
  int v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  SvClient *CommonClient; 
  int ClientPing; 

  numConnectedClients = level.numConnectedClients;
  v2 = clientNumOfLocalClient;
  v3 = 999;
  if ( level.numConnectedClients > 64 )
    numConnectedClients = 64;
  v4 = 0;
  v5 = numConnectedClients;
  if ( numConnectedClients <= 0 )
    return SV_ClientMP_GetClientPing(v2);
  v6 = 0i64;
  do
  {
    v7 = level.sortedClients[v6];
    if ( SV_ClientMP_IsClientConnected(v7) )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v7);
      if ( !NetConnection::IsLocal((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
      {
        ++v4;
        ClientPing = SV_ClientMP_GetClientPing(v7);
        if ( ClientPing < v3 )
          v3 = ClientPing;
      }
    }
    ++v6;
  }
  while ( v6 < v5 );
  v2 = clientNumOfLocalClient;
  if ( v4 <= 0 )
    return SV_ClientMP_GetClientPing(v2);
  else
    return v3;
}

/*
==============
SV_ClientMP_GetMaxExtrapTime
==============
*/
__int64 SV_ClientMP_GetMaxExtrapTime(const SvClientMP *cl)
{
  int beginCmdIndex; 
  int CommandThinkTime; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v7; 
  int UserCommandConstantMsec; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int m_windowMaximum; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  NetBurst *burstState; 
  int v16; 
  const dvar_t *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5405, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !cl->burstState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5406, ASSERT_TYPE_ASSERT, "( cl->burstState )", (const char *)&queryFormat, "cl->burstState") )
    __debugbreak();
  beginCmdIndex = cl->beginCmdIndex;
  if ( beginCmdIndex == cl->currCmdIndex )
  {
    v7 = DVARINT_sv_cmdMaxExtrapTime;
    if ( !DVARINT_sv_cmdMaxExtrapTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxExtrapTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer )
    {
      UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
      v9 = DVARINT_sv_cmdMaxExtrapTime;
      integer = UserCommandConstantMsec;
      if ( !DVARINT_sv_cmdMaxExtrapTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxExtrapTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.integer > integer )
        integer = v9->current.integer;
      v11 = DVARINT_sv_cmdMaxBufferTime;
      if ( !DVARINT_sv_cmdMaxBufferTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxBufferTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      m_windowMaximum = cl->burstState->m_windowMaximum;
      if ( v11->current.integer < m_windowMaximum )
      {
        v13 = DVARINT_sv_cmdMaxBufferTime;
        if ( !DVARINT_sv_cmdMaxBufferTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxBufferTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        LODWORD(v20) = m_windowMaximum;
        LODWORD(v19) = v13->current.integer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5419, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_sv_cmdMaxBufferTime, \"sv_cmdMaxBufferTime\" ) ) >= ( cl->burstState->GetWindowMaximum() )", "Dvar_GetInt( sv_cmdMaxBufferTime ) >= cl->burstState->GetWindowMaximum()\n\t%i, %i", v19, v20) )
          __debugbreak();
      }
      v14 = DVARINT_sv_cmdMaxBufferTime;
      if ( !DVARINT_sv_cmdMaxBufferTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxBufferTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      burstState = cl->burstState;
      v16 = v14->current.integer;
      v17 = DVARINT_sv_cmdDeficitOffset;
      v18 = v16 - burstState->m_windowMaximum;
      if ( !DVARINT_sv_cmdDeficitOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdDeficitOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( integer < v18 )
        v18 = integer;
      return (unsigned int)(v17->current.integer + v18);
    }
    else
    {
      return 0i64;
    }
  }
  else
  {
    CommandThinkTime = SV_ClientMP_GetCommandThinkTime(cl, &cl->cmds[beginCmdIndex % 38]);
    v4 = DVARINT_sv_cmdMaxExtrapTime;
    v5 = CommandThinkTime;
    if ( !DVARINT_sv_cmdMaxExtrapTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxExtrapTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer > v5 )
      return v4->current.unsignedInt;
    return (unsigned int)v5;
  }
}

/*
==============
SV_ClientMP_GetMaxThinkTime
==============
*/
__int64 SV_ClientMP_GetMaxThinkTime(const SvClientMP *cl, const int frameThinkTime)
{
  int v4; 
  int commandTime; 
  int i; 
  unsigned __int64 v7; 
  usercmd_s *v8; 
  int v9; 
  int v10; 
  const dvar_t *v11; 
  int cumulThinkError; 
  int v13; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5363, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v4 = 0;
  if ( cl == (const SvClientMP *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = cl->lastUsercmd.commandTime;
  for ( i = cl->beginCmdIndex; i != cl->currCmdIndex; ++i )
  {
    v7 = i % 0x26ui64;
    v8 = &cl->cmds[v7];
    if ( (const SvClientMP *)((char *)cl + 264 * v7) == (const SvClientMP *)-173784i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    v9 = v8->commandTime - commandTime;
    v10 = v9 + v4;
    v4 = 0;
    if ( v9 >= 0 )
      v4 = v10;
    if ( v4 > frameThinkTime )
      break;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    commandTime = v8->commandTime;
  }
  v11 = DVARINT_sv_cmdMaxCumulThinkError;
  cumulThinkError = cl->cumulThinkError;
  if ( !DVARINT_sv_cmdMaxCumulThinkError && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxCumulThinkError") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer < cumulThinkError )
    cumulThinkError = v11->current.integer;
  v13 = frameThinkTime + cumulThinkError;
  if ( v4 > v13 )
    return (unsigned int)v4;
  return (unsigned int)v13;
}

/*
==============
SV_ClientMP_GetName
==============
*/
char *SV_ClientMP_GetName(unsigned int clientNum)
{
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return &SvClient::GetCommonClient(clientNum)[4].lastUsercmd.selectedLoc[1];
}

/*
==============
SV_ClientMP_GetPrivatePartyId
==============
*/
const bdSecurityID *SV_ClientMP_GetPrivatePartyId(const int clientNum)
{
  const PartyData *ServerLobby; 
  unsigned int v5; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v5 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7801, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  ServerLobby = SV_MainMP_GetServerLobby();
  return Party_GetClientPrivatePartyId(ServerLobby, clientNum);
}

/*
==============
SV_ClientMP_GetUserinfo
==============
*/
void SV_ClientMP_GetUserinfo(int index, char *buffer, int bufferSize)
{
  unsigned __int64 v3; 
  SvClient *CommonClient; 

  v3 = bufferSize;
  if ( bufferSize < 1 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440DE040, 573i64, (unsigned int)bufferSize);
  if ( index < 0 || index >= (int)SvClient::ms_clientCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440DE080, 574i64, (unsigned int)index);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(index);
  Core_strcpy(buffer, v3, (const char *)&CommonClient[1].lastUsercmd.buttons + 4);
}

/*
==============
SV_ClientMP_GetVoiceConnectivityBits
==============
*/
__int64 SV_ClientMP_GetVoiceConnectivityBits(const unsigned int clientNum)
{
  const PartyData *ServerLobby; 
  unsigned int Int; 
  const char *v5; 
  int v6; 
  const char *v7; 
  const PartyData *v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    return 0xFFFFFFFFi64;
  if ( SV_IsDemoPlaying() )
  {
    Int = SV_Demo_GetInt();
  }
  else
  {
    if ( clientNum >= SvClient::ms_clientCount )
    {
      v11 = SvClient::ms_clientCount;
      v9 = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1459, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( SV_IsDemoPlaying() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1461, ASSERT_TYPE_ASSERT, "( !SV_IsDemoPlaying() )", (const char *)&queryFormat, "!SV_IsDemoPlaying()") )
      __debugbreak();
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( Party_IsMemberPresent(ServerLobby, clientNum) )
    {
      Int = PeerMesh_GetClientConnectivity(ServerLobby, clientNum);
      SV_Record_GetInt(Int);
    }
    else if ( Com_IsAnyLocalServerRunning() )
    {
      Int = -1;
      SV_Record_GetInt(-1);
    }
    else
    {
      Int = PeerMesh_GetConnectivityBitsForHost(ServerLobby);
      SV_Record_GetInt(Int);
    }
  }
  if ( SV_IsDemoPlaying() )
  {
    if ( ((1 << SV_DemoMP_HostNum()) & Int) == 0 )
    {
      LODWORD(v10) = Int;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1502, ASSERT_TYPE_ASSERT, "( ( (bits & (1 << SV_DemoMP_HostNum())) != 0 ) )", "%s\n\t( bits ) = %i", "( (bits & (1 << SV_DemoMP_HostNum())) != 0 )", v10) )
        __debugbreak();
    }
    if ( SV_DemoMP_HostNum() != clientNum || Int == -1 )
      return Int;
    v5 = "( (SV_DemoMP_HostNum() != static_cast<int>(clientNum)) || (bits == (0xFFFFFFFF)) )";
    v6 = 1503;
    v7 = "( ( (SV_DemoMP_HostNum() != static_cast<int>(clientNum)) || (bits == (0xFFFFFFFF)) ) )";
  }
  else
  {
    v8 = SV_MainMP_GetServerLobby();
    if ( !PeerMesh_IsHostConnectivitySet(v8, Int) )
    {
      LODWORD(v10) = Int;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1510, ASSERT_TYPE_ASSERT, "( ( PeerMesh_IsHostConnectivitySet( party, bits ) ) )", "%s\n\t( bits ) = %i", "( PeerMesh_IsHostConnectivitySet( party, bits ) )", v10) )
        __debugbreak();
    }
    if ( !Party_IsHost(v8, clientNum) || Int == -1 )
      return Int;
    v5 = "( !Party_IsHost( party, clientNum ) || (bits == (0xFFFFFFFF)) )";
    v6 = 1511;
    v7 = "( ( !Party_IsHost( party, clientNum ) || (bits == (0xFFFFFFFF)) ) )";
  }
  LODWORD(v10) = Int;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", v6, ASSERT_TYPE_ASSERT, v7, "%s\n\t( bits ) = %i", v5, v10) )
    __debugbreak();
  return Int;
}

/*
==============
SV_ClientMP_GetXNAddr
==============
*/
bool SV_ClientMP_GetXNAddr(const int clientNum, XNADDR *outAddr)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  return NetConnection::GetXnaddr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], outAddr);
}

/*
==============
SV_ClientMP_HandleReconnect
==============
*/
char SV_ClientMP_HandleReconnect(const netadr_t *from)
{
  unsigned int v2; 
  SvClientMP *CommonClient; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v6; 
  int v7; 
  const char *v8; 
  const dvar_t *v9; 
  const char *String; 
  __int128 v11; 
  __int64 v12; 
  __int64 v13; 
  netadr_t v14; 

  v2 = 0;
  if ( (int)SvClient::ms_clientCount <= 0 )
    return 0;
  while ( 1 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = (SvClientMP *)SvClient::GetCommonClient(v2);
    if ( SV_ClientMP_IsClientConnected(v2) )
    {
      if ( CommonClient->lastConnectTime < 0 || CommonClient->lastConnectTime > SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time )
      {
        LODWORD(v13) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
        LODWORD(v12) = CommonClient->lastConnectTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1797, ASSERT_TYPE_ASSERT, "( 0 ) <= ( cl->lastConnectTime ) && ( cl->lastConnectTime ) <= ( SvPersistentGlobalsMP::GetTime() )", "cl->lastConnectTime not in [0, SvPersistentGlobalsMP::GetTime()]\n\t%i not in [%i, %i]", v12, 0i64, v13) )
          __debugbreak();
      }
      if ( NetConnection::operator==(&CommonClient->clientConnection, from) )
        break;
    }
    if ( (int)++v2 >= (int)SvClient::ms_clientCount )
      return 0;
  }
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v6 = DVARINT_sv_min_reconnect_time;
  v7 = PersistentGlobalsMP->time - CommonClient->lastConnectTime;
  if ( !DVARINT_sv_min_reconnect_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_min_reconnect_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v7 >= v6->current.integer )
  {
    v9 = DVARINT_sv_max_reconnect_time;
    if ( !DVARINT_sv_max_reconnect_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_max_reconnect_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v7 >= v9->current.integer )
      return 0;
    String = NetConnection::GetString(&CommonClient->clientConnection);
    Com_Printf(131087, "SV_DirectConnect: reconnect accepted from %s at %dms - resending connect response\n", String, (unsigned int)v7);
    v11 = *(_OWORD *)&from->type;
    v14.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v14.type = v11;
    SV_SendConnectResponseToClient(CommonClient, &v14, 0);
  }
  else
  {
    v8 = NetConnection::GetString(&CommonClient->clientConnection);
    Com_Printf(131087, "SV_DirectConnect: reconnect rejected from %s at %dms - too soon\n", v8, (unsigned int)v7);
  }
  return 1;
}

/*
==============
SV_ClientMP_HasAssignedTeam
==============
*/
unsigned __int8 SV_ClientMP_HasAssignedTeam(unsigned int clientNum)
{
  SvClient *CommonClient; 
  PartyData *ServerLobby; 
  unsigned __int8 v5; 
  const PartyData *PartyData; 
  unsigned int v8; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v8 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7647, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v8) )
      __debugbreak();
  }
  if ( SV_IsDemoPlaying() )
    return SV_Demo_GetByte() == 1;
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    goto LABEL_19;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( (CommonClient = SvClient::GetCommonClient(clientNum), !LODWORD(CommonClient[855].__vftable)) && !NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) && (Live_IsLobbyTeamSelectEnabled() && (ServerLobby = SV_MainMP_GetServerLobby(), Session_IsValid(ServerLobby->session)) && (Party_GetXuid(&result, ServerLobby, clientNum), XUID::IsValid(&result)) && Party_GetAssignedTeam(ServerLobby, result) || Live_IsInLiveGame() && (PartyData = Lobby_GetPartyData(), PartyHost_UsingAssignedTeams(PartyData))) )
    v5 = 1;
  else
LABEL_19:
    v5 = 0;
  SV_Record_GetByte(v5);
  return v5;
}

/*
==============
SV_ClientMP_HasAssignedTeam_Internal
==============
*/
char SV_ClientMP_HasAssignedTeam_Internal(unsigned int clientNum)
{
  SvClient *CommonClient; 
  const PartyData *ServerLobby; 
  const PartyData *PartyData; 
  XUID result; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    return 0;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( LODWORD(CommonClient[855].__vftable) || NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
    return 0;
  if ( Live_IsLobbyTeamSelectEnabled() )
  {
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( Session_IsValid(ServerLobby->session) )
    {
      Party_GetXuid(&result, ServerLobby, clientNum);
      if ( XUID::IsValid(&result) )
      {
        if ( Party_GetAssignedTeam(ServerLobby, result) )
          return 1;
      }
    }
  }
  if ( Live_IsInLiveGame() )
  {
    PartyData = Lobby_GetPartyData();
    if ( PartyHost_UsingAssignedTeams(PartyData) )
      return 1;
  }
  return 0;
}

/*
==============
SV_ClientMP_ICantHear
==============
*/
void SV_ClientMP_ICantHear(netadr_t *from, msg_t *msg)
{
  const SvClientMP *ClientAtAddress; 
  unsigned int MpClientIndex; 
  signed int Byte; 
  SvClientMP *MpClient; 
  const char *v8; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1252, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tReceived ICantHear command for front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ClientAtAddress = SvClientMP::FindClientAtAddress(from);
  MpClientIndex = SV_Client_GetMpClientIndex(ClientAtAddress);
  Byte = MSG_ReadByte(msg);
  if ( Byte >= 0 && Byte < (int)SvClient::ms_clientCount )
  {
    MpClient = SV_Client_GetMpClient(Byte);
    if ( MpClient->state > CS_CONNECTED )
    {
      v8 = j_va("voicefail %i", MpClientIndex);
      NetConnection::SendUnreliable(&MpClient->clientConnection, v8);
    }
  }
}

/*
==============
SV_ClientMP_IHear
==============
*/
void SV_ClientMP_IHear(netadr_t *from, msg_t *msg)
{
  const SvClientMP *ClientAtAddress; 
  unsigned int MpClientIndex; 
  clientState_t *ClientState; 
  int Long; 
  const PartyData *ServerLobby; 
  int ConnectivityBitsForHost; 
  PartyData *PartyData; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1197, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tReceived IHear command for front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( (int)SvClient::ms_clientCount <= 24 )
  {
    ClientAtAddress = SvClientMP::FindClientAtAddress(from);
    if ( ClientAtAddress )
    {
      MpClientIndex = SV_Client_GetMpClientIndex(ClientAtAddress);
      if ( MpClientIndex >= SvClient::ms_clientCount )
      {
        v13 = SvClient::ms_clientCount;
        LODWORD(v11) = MpClientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1211, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      ClientState = G_MainMP_GetClientState(MpClientIndex);
      Long = MSG_ReadLong(msg);
      if ( SV_IsDemoPlaying() )
      {
        ClientState->voiceConnectivityBits = Long | (1 << SV_DemoMP_HostNum()) | (1 << MpClientIndex);
      }
      else
      {
        ServerLobby = SV_MainMP_GetServerLobby();
        ConnectivityBitsForHost = PeerMesh_GetConnectivityBitsForHost(ServerLobby);
        ClientState->voiceConnectivityBits = Long | ConnectivityBitsForHost | PeerMesh_GetConnectivityBitsForLocalClients(ServerLobby);
        if ( Party_IsHostRegistered(ServerLobby) )
        {
          if ( !PeerMesh_IsHostConnectivitySet(ServerLobby, ClientState->voiceConnectivityBits) )
          {
            v15 = MpClientIndex;
            LODWORD(v12) = ClientState->voiceConnectivityBits;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1235, ASSERT_TYPE_ASSERT, "(PeerMesh_IsHostConnectivitySet( party, cs->voiceConnectivityBits ))", "%s\n\tcs %i, clientNum %i", "PeerMesh_IsHostConnectivitySet( party, cs->voiceConnectivityBits )", v12, v15) )
              __debugbreak();
          }
          if ( Party_IsHost(ServerLobby, MpClientIndex) && ClientState->voiceConnectivityBits != -1 )
          {
            LODWORD(v14) = MpClientIndex;
            LODWORD(v12) = ClientState->voiceConnectivityBits;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1236, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, clientNum ) || ( cs->voiceConnectivityBits == (0xFFFFFFFF) ))", "%s\n\tcs %i, clientNum %i", "!Party_IsHost( party, clientNum ) || ( cs->voiceConnectivityBits == MESH_FULL_CONNECTIVITY_BITS )", v12, v14) )
              __debugbreak();
          }
        }
      }
      PartyData = Lobby_GetPartyData();
      if ( Lobby_IsInLobby() && Party_IsMemberRegistered(PartyData, MpClientIndex) )
        PartyHost_UpdateMemberConnectivity(PartyData, MpClientIndex, ClientState->voiceConnectivityBits);
    }
  }
  else
  {
    Com_PrintError(15, "SV_ClientMP_IHear: Received 'ihear' message while peer mesh is disabled.\n");
  }
}

/*
==============
SV_ClientMP_IsClientBot
==============
*/
bool SV_ClientMP_IsClientBot(const unsigned int clientIndex)
{
  SvClient *CommonClient; 
  unsigned int v5; 

  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v5 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1593, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientIndex, v5) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  return NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
}

/*
==============
SV_ClientMP_IsClientConnected
==============
*/
char SV_ClientMP_IsClientConnected(const unsigned int clientIndex)
{
  SvClient *CommonClient; 
  unsigned int v5; 

  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v5 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1582, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientIndex, v5) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  if ( (CommonClient->state & 0xFD) == 0 )
    return 0;
  if ( !NetConnection::IsOpened((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1586, ASSERT_TYPE_ASSERT, "(!connected || client->clientConnection.IsOpened())", "%s\n\tMismatch between SV client and network connection state", "!connected || client->clientConnection.IsOpened()") )
    __debugbreak();
  return 1;
}

/*
==============
SV_ClientMP_IsLocalClient
==============
*/
_BOOL8 SV_ClientMP_IsLocalClient(int clientNum)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  return NetConnection::IsLocal((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
}

/*
==============
SV_ClientMP_IsNormalPlaying
==============
*/
bool SV_ClientMP_IsNormalPlaying(const SvClientMP *cl)
{
  int MpClientIndex; 
  playerState_s *EffectivePlayerstateForClientNum; 
  bool result; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4889, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  result = 1;
  if ( !Com_UseConstantUserCommandTime() )
  {
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(MpClientIndex);
    if ( EffectivePlayerstateForClientNum->clientNum != MpClientIndex || EffectivePlayerstateForClientNum->pm_type )
      return 0;
  }
  return result;
}

/*
==============
SV_ClientMP_IsPeerMeshEnabled
==============
*/
bool SV_ClientMP_IsPeerMeshEnabled()
{
  return (int)SvClient::ms_clientCount <= 24;
}

/*
==============
SV_ClientMP_IsTestClient
==============
*/
_BOOL8 SV_ClientMP_IsTestClient(int clientNum)
{
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return LODWORD(SvClient::GetCommonClient(clientNum)[855].__vftable) == 1;
}

/*
==============
SV_ClientMP_IsUsingOnlineStatsOffline
==============
*/
__int64 SV_ClientMP_IsUsingOnlineStatsOffline(int clientNum)
{
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return SvClient::GetCommonClient(clientNum)[1115].lastUsercmd.offHand.weaponAttachments[9];
}

/*
==============
SV_ClientMP_MarkClientScriptPers
==============
*/
void SV_ClientMP_MarkClientScriptPers(void)
{
  signed int i; 
  SvClient *CommonClient; 
  SvClient *v2; 
  scrContext_t *v3; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    v2 = CommonClient;
    if ( CommonClient->state > CS_ZOMBIE )
    {
      if ( !LODWORD(CommonClient[854].gentity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1334, ASSERT_TYPE_ASSERT, "(cl->scriptId)", (const char *)&queryFormat, "cl->scriptId") )
        __debugbreak();
      v3 = ScriptContext_Server();
      Scr_MarkExtArray(v3, (unsigned int)v2[854].gentity);
    }
  }
}

/*
==============
SV_ClientMP_MarkScriptId
==============
*/
void SV_ClientMP_MarkScriptId(SvClientMP *cl)
{
  scrContext_t *v2; 

  if ( !cl->scriptId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1334, ASSERT_TYPE_ASSERT, "(cl->scriptId)", (const char *)&queryFormat, "cl->scriptId") )
    __debugbreak();
  v2 = ScriptContext_Server();
  Scr_MarkExtArray(v2, cl->scriptId);
}

/*
==============
SV_ClientMP_PacketEvent
==============
*/
char SV_ClientMP_PacketEvent(SvClientMP *const cl, msg_t *msg, NetPingInfo *info)
{
  int Long; 
  int Byte; 
  int v8; 
  int reliableSent; 
  int reliableSequence; 
  int v11; 
  unsigned int MpClientIndex; 
  BgStatic *ActiveStatics; 
  __int64 v14; 
  usercmd_s *p_lastRecvCommand; 
  usercmd_s *v16; 
  __int64 v17; 
  __int128 v18; 
  CmdPredict *v19; 
  char *fmt; 
  char *fmta; 
  __int64 v23; 
  __int64 v24; 

  cl->serverId = MSG_ReadByte(msg);
  Long = MSG_ReadLong(msg);
  Byte = MSG_ReadByte(msg);
  v8 = MSG_ReadLong(msg);
  if ( msg->overflowed )
  {
    Com_Printf(131087, "Invalid message from %s, overflow detected\n", cl->name);
    return 0;
  }
  if ( Long < 0 || Byte < 0 || v8 < 0 )
  {
    Com_Printf(131087, "Invalid acknowledge message from %s - messageAcknowledge is %i, messageAcknowledgeStart is %i, reliableAcknowledge is %i\n", cl->name, (unsigned int)Long, Byte, v8);
    return 0;
  }
  reliableSent = cl->reliableSent;
  cl->reliableAcknowledge = v8;
  reliableSequence = cl->reliableSequence;
  cl->messageAcknowledge = Long;
  cl->messageAcknowedlgeStreak = Byte;
  if ( reliableSequence < reliableSent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6952, ASSERT_TYPE_ASSERT, "( cl->reliableSequence ) >= ( cl->reliableSent )", "cl->reliableSequence >= cl->reliableSent\n\t%i, %i", reliableSequence, reliableSent) )
    __debugbreak();
  if ( cl->reliableAcknowledge > cl->reliableSent )
  {
    LODWORD(v24) = cl->reliableSent;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6955, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Out of range reliableAcknowledge message from %s - cl->reliableSent is %i, reliableAcknowledge is %i\n", cl->name, v24, cl->reliableAcknowledge) )
      __debugbreak();
    LODWORD(fmta) = cl->reliableAcknowledge;
    Com_Printf(131087, "Out of range reliableAcknowledge message from %s - cl->reliableSent is %i, reliableAcknowledge is %i\n", cl->name, (unsigned int)cl->reliableSent, fmta);
    cl->reliableAcknowledge = cl->reliableSent;
    return 0;
  }
  SvClientMP::SetMessageAcknowledged(cl, info);
  if ( cl->reliableSequence - cl->reliableAcknowledge >= 512 )
  {
    LODWORD(fmt) = cl->reliableAcknowledge;
    Com_Printf(131087, "Out of range reliableAcknowledge message from %s - cl->reliableSequence is %i, reliableAcknowledge is %i\n", cl->name, (unsigned int)cl->reliableSequence, fmt);
    v11 = cl->reliableSequence;
    cl->reliableAcknowledge = v11;
    cl->reliableSent = v11;
    return 0;
  }
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  if ( SvClient::GetCommonClient(MpClientIndex)->state != CS_ZOMBIE )
  {
    if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6988, ASSERT_TYPE_ASSERT, "( ( !BgStatic::HasActiveStatics() ) )", "( BgStatic::GetActiveStatics() ) = %p", ActiveStatics) )
        __debugbreak();
    }
    cl->lastPacketTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    if ( SV_ClientMP_ExecuteMessage(cl, msg) )
    {
      if ( !cl->m_cmdRecvBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4631, ASSERT_TYPE_ASSERT, "( m_cmdRecvBuffer != nullptr )", (const char *)&queryFormat, "m_cmdRecvBuffer != nullptr") )
        __debugbreak();
      if ( !cl->m_cmdRecvPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4632, ASSERT_TYPE_ASSERT, "( m_cmdRecvPredict != nullptr )", (const char *)&queryFormat, "m_cmdRecvPredict != nullptr") )
        __debugbreak();
      if ( !cl->m_cmdRecvSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4633, ASSERT_TYPE_ASSERT, "( m_cmdRecvSequence != nullptr )", (const char *)&queryFormat, "m_cmdRecvSequence != nullptr") )
        __debugbreak();
      if ( cl->netchan.incomingSequence < 0 )
      {
        LODWORD(v23) = cl->netchan.incomingSequence;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4634, ASSERT_TYPE_ASSERT, "( this->netchan.incomingSequence ) >= ( 0 )", "this->netchan.incomingSequence >= 0\n\t%i, %i", v23, 0i64) )
          __debugbreak();
      }
      v14 = (int)(cl->netchan.incomingSequence % SvClientMP::ms_cmdCountPerClient);
      cl->m_cmdRecvSequence[v14] = cl->netchan.incomingSequence;
      p_lastRecvCommand = &cl->lastRecvCommand;
      v16 = &cl->m_cmdRecvBuffer[v14];
      v17 = 2i64;
      do
      {
        v16 = (usercmd_s *)((char *)v16 + 128);
        v18 = *(_OWORD *)&p_lastRecvCommand->buttons;
        p_lastRecvCommand = (usercmd_s *)((char *)p_lastRecvCommand + 128);
        *(_OWORD *)&v16[-1].offHand.attachmentVariationIndices[13] = v18;
        *(_OWORD *)&v16[-1].offHand.weaponCamo = *(_OWORD *)&p_lastRecvCommand[-1].offHand.weaponCamo;
        *(_OWORD *)v16[-1].remoteControlMove = *(_OWORD *)p_lastRecvCommand[-1].remoteControlMove;
        *(_OWORD *)v16[-1].vehAngles = *(_OWORD *)p_lastRecvCommand[-1].vehAngles;
        *(_OWORD *)&v16[-1].vehOrgZ = *(_OWORD *)&p_lastRecvCommand[-1].vehOrgZ;
        *(_OWORD *)&v16[-1].gunYOfs = *(_OWORD *)&p_lastRecvCommand[-1].gunYOfs;
        *(_OWORD *)v16[-1].sightedClientsMask.data = *(_OWORD *)p_lastRecvCommand[-1].sightedClientsMask.data;
        *(_OWORD *)&v16[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_lastRecvCommand[-1].sightedClientsMask.data[4];
        --v17;
      }
      while ( v17 );
      v16->buttons = p_lastRecvCommand->buttons;
      v19 = &cl->m_cmdRecvPredict[v14];
      *(__m256i *)v19->origin.v = *(__m256i *)cl->lastRecvPredict.origin.v;
      *(_OWORD *)v19->extrapData.packedBobCycle = *(_OWORD *)cl->lastRecvPredict.extrapData.packedBobCycle;
      *(double *)v19->vehOrigin.v = *(double *)cl->lastRecvPredict.vehOrigin.v;
      v19->vehOrigin.v[2] = cl->lastRecvPredict.vehOrigin.v[2];
      cl->commandSequence = cl->netchan.incomingSequence;
    }
  }
  return 1;
}

/*
==============
SV_ClientMP_PlayerDataDeltasMessage
==============
*/
void SV_ClientMP_PlayerDataDeltasMessage(SvClientMP *cl, msg_t *msg)
{
  unsigned int MpClientIndex; 
  int v5; 
  int Byte; 
  unsigned __int8 v7; 
  unsigned int Long; 
  unsigned int v9; 
  unsigned int StatsGroupByByteOffset; 
  char v11; 
  char v12; 
  __int64 v13; 
  int v14; 
  char v15; 
  const SvClientMP *CommonClient; 
  const char *v17; 
  int v18; 
  int v19; 
  scrContext_t *v20; 
  char *fmt; 
  __int64 v22; 
  unsigned __int8 *ClientStatsBuffer; 
  char v24; 
  char ClientWriteableGroupBitmask; 
  unsigned __int8 v26; 

  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  ClientStatsBuffer = SV_ClientMP_GetClientStatsBuffer(MpClientIndex);
  if ( !ClientStatsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3765, ASSERT_TYPE_ASSERT, "( clientBuffer )", (const char *)&queryFormat, "clientBuffer", 0i64) )
    __debugbreak();
  ClientWriteableGroupBitmask = Com_PlayerData_GetClientWriteableGroupBitmask();
  LOBYTE(v5) = ClientWriteableGroupBitmask;
  v24 = 1;
  Byte = MSG_ReadByte(msg);
  v7 = truncate_cast<unsigned char,int>(Byte);
  v26 = v7;
  if ( msg->readcount == msg->splitSize + msg->cursize )
  {
LABEL_35:
    if ( msg->overflowed )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3817, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( msg ) )", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
        __debugbreak();
    }
    cl->editablePlayerDataVersion = v7;
  }
  else
  {
    while ( 1 )
    {
      Long = MSG_ReadLong(msg);
      if ( Long >= 0x1046C || msg->overflowed || (v9 = MSG_ReadByte(msg), v9 + Long > 0x1046C) || msg->overflowed )
      {
LABEL_43:
        Com_PrintError(15, "Got bad playerdata deltas message from client %d (%s) - ignoring...\n", MpClientIndex, cl->name);
        return;
      }
      v5 = (char)v5;
      StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(Long);
      v11 = Com_PlayerData_FindStatsGroupByByteOffset(v9 + Long - 1);
      v12 = 0;
      if ( _bittest(&v5, StatsGroupByByteOffset) )
        v12 = v24;
      v24 = v12 & (((1 << v11) & (char)v5) != 0);
      if ( !v24 )
        break;
      MSG_ReadData(msg, v9, &ClientStatsBuffer[Long], 66668 - Long);
      if ( msg->overflowed )
        goto LABEL_43;
      if ( v9 )
      {
        v13 = v9;
        do
        {
          v14 = Long;
          v15 = Long & 7;
          if ( (Long & 0x80000000) != 0 )
          {
            v14 = Long + 7;
            v15 -= 8;
          }
          ++Long;
          cl->statsModifiedFlags[v14 >> 3] |= 1 << v15;
          --v13;
        }
        while ( v13 );
      }
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (const SvClientMP *)SvClient::GetCommonClient(MpClientIndex);
      if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 846, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
        __debugbreak();
      if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 547, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
        __debugbreak();
      if ( SV_GetClientRequiredStatPackets(CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 847, ASSERT_TYPE_ASSERT, "( SV_HasAllClientStatPackets( cl ) )", (const char *)&queryFormat, "SV_HasAllClientStatPackets( cl )") )
        __debugbreak();
      if ( SvClient::GetCommonClient(MpClientIndex)->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 848, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE") )
        __debugbreak();
      LOBYTE(v5) = ClientWriteableGroupBitmask;
      CommonClient->statsModified = 1;
      if ( msg->readcount == msg->splitSize + msg->cursize )
      {
        v7 = v26;
        goto LABEL_35;
      }
    }
    v17 = j_va("sv_recordEventFF %d %s\n", 17i64, cl->userinfo);
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v18 = strlen_noncrt(v17);
    v19 = v18;
    if ( s_cmd_textArray[0].cmdsize + v18 < s_cmd_textArray[0].maxsize )
    {
      memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], v17, v18 + 1);
      s_cmd_textArray[0].cmdsize += v19;
      v20 = ScriptContext_Server();
      Scr_MonitorCommand(v20, v17);
    }
    else
    {
      Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", v17);
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    LODWORD(v22) = v9 + Long;
    LODWORD(fmt) = Long;
    Com_PrintError(15, "Attempt to write illegal playerdata - client %d (%s), bytes %d - %d\n", MpClientIndex, cl->name, fmt, v22);
    SV_ClientMP_DropClient(cl, "Illegal Playerdata Write", 1);
  }
}

/*
==============
SV_ClientMP_PostFrame
==============
*/
void SV_ClientMP_PostFrame(void)
{
  signed int i; 
  SvClient *CommonClient; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; *(_DWORD *)&CommonClient[602].lastUsercmd.weapon.attachmentVariationIndices[21] = 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i++);
  }
}

/*
==============
SV_ClientMP_PreThink
==============
*/
char SV_ClientMP_PreThink(SvClientMP *cl, const usercmd_s *cmd)
{
  const usercmd_s *v2; 
  usercmd_s *p_lastUsercmd; 
  __int64 v5; 
  __int128 v6; 
  __int64 v8; 
  int time; 

  v2 = cmd;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4132, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( v2->serverTime > SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time )
  {
    time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    LODWORD(v8) = v2->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4133, ASSERT_TYPE_ASSERT, "( cmd->serverTime ) <= ( SvPersistentGlobalsMP::GetTime() )", "cmd->serverTime <= SvPersistentGlobalsMP::GetTime()\n\t%i, %i", v8, time) )
      __debugbreak();
  }
  p_lastUsercmd = &cl->lastUsercmd;
  v5 = 2i64;
  do
  {
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    v6 = *(_OWORD *)&v2->buttons;
    v2 = (const usercmd_s *)((char *)v2 + 128);
    *(_OWORD *)&p_lastUsercmd[-1].offHand.attachmentVariationIndices[13] = v6;
    *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo = *(_OWORD *)&v2[-1].offHand.weaponCamo;
    *(_OWORD *)p_lastUsercmd[-1].remoteControlMove = *(_OWORD *)v2[-1].remoteControlMove;
    *(_OWORD *)p_lastUsercmd[-1].vehAngles = *(_OWORD *)v2[-1].vehAngles;
    *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ = *(_OWORD *)&v2[-1].vehOrgZ;
    *(_OWORD *)&p_lastUsercmd[-1].gunYOfs = *(_OWORD *)&v2[-1].gunYOfs;
    *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data = *(_OWORD *)v2[-1].sightedClientsMask.data;
    *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v2[-1].sightedClientsMask.data[4];
    --v5;
  }
  while ( v5 );
  p_lastUsercmd->buttons = v2->buttons;
  return 1;
}

/*
==============
SV_ClientMP_PredictCommand
==============
*/
char SV_ClientMP_PredictCommand(SvClientMP *cl, int *outPredictTime, usercmd_s *outPredictCmd)
{
  int v6; 
  int beginCmdIndex; 
  int v8; 
  usercmd_s *v9; 
  int CommandThinkTime; 
  usercmd_s *v11; 
  __int64 v12; 
  __int128 v13; 
  int v14; 
  const dvar_t *v15; 
  int v16; 
  usercmd_s *v17; 
  __int64 v18; 
  usercmd_s *v19; 
  __int128 v20; 
  const dvar_t *v21; 
  int v22; 
  float v23; 
  int v24; 
  float v25; 
  __int64 v27; 
  __int64 v28; 
  int MaxExtrapTime; 
  vec3_t outAngles; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5498, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !outPredictCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5499, ASSERT_TYPE_ASSERT, "( outPredictCmd )", (const char *)&queryFormat, "outPredictCmd") )
    __debugbreak();
  if ( cl->cumulThinkError <= (int)SV_ClientMP_GetMaxExtrapTime(cl) )
  {
    MaxExtrapTime = SV_ClientMP_GetMaxExtrapTime(cl);
    LODWORD(v27) = cl->cumulThinkError;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5500, ASSERT_TYPE_ASSERT, "( cl->cumulThinkError ) > ( SV_ClientMP_GetMaxExtrapTime( cl ) )", "cl->cumulThinkError > SV_ClientMP_GetMaxExtrapTime( cl )\n\t%i, %i", v27, MaxExtrapTime) )
      __debugbreak();
  }
  v6 = cl->cumulThinkError - SV_ClientMP_GetMaxExtrapTime(cl);
  if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5503, ASSERT_TYPE_ASSERT, "( predictTime > 0 )", (const char *)&queryFormat, "predictTime > 0") )
    __debugbreak();
  beginCmdIndex = cl->beginCmdIndex;
  v8 = 0;
  if ( beginCmdIndex == cl->currCmdIndex || (v9 = &cl->cmds[beginCmdIndex % 38], CommandThinkTime = SV_ClientMP_GetCommandThinkTime(cl, v9), !v9) )
  {
    v15 = DVARBOOL_command_prediction_enabled;
    if ( !DVARBOOL_command_prediction_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_prediction_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( !v15->current.enabled )
      goto LABEL_50;
    if ( cl->beginCmdIndex != cl->currCmdIndex )
    {
      LODWORD(v28) = cl->currCmdIndex;
      LODWORD(v27) = cl->beginCmdIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5524, ASSERT_TYPE_ASSERT, "( cl->beginCmdIndex ) == ( cl->currCmdIndex )", "cl->beginCmdIndex == cl->currCmdIndex\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    if ( !outPredictCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5470, ASSERT_TYPE_ASSERT, "( outPredictCmd )", (const char *)&queryFormat, "outPredictCmd") )
      __debugbreak();
    if ( cl->beginCmdIndex != cl->currCmdIndex )
    {
      LODWORD(v28) = cl->currCmdIndex;
      LODWORD(v27) = cl->beginCmdIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5471, ASSERT_TYPE_ASSERT, "( cl->beginCmdIndex ) == ( cl->currCmdIndex )", "cl->beginCmdIndex == cl->currCmdIndex\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    v16 = cl->beginCmdIndex;
    if ( v16 <= 0 )
    {
LABEL_50:
      *outPredictTime = 0;
      return 0;
    }
    v17 = outPredictCmd;
    v18 = 2i64;
    v19 = &cl->cmds[(v16 - 1) % 38];
    do
    {
      v17 = (usercmd_s *)((char *)v17 + 128);
      v20 = *(_OWORD *)&v19->buttons;
      v19 = (usercmd_s *)((char *)v19 + 128);
      *(_OWORD *)&v17[-1].offHand.attachmentVariationIndices[13] = v20;
      *(_OWORD *)&v17[-1].offHand.weaponCamo = *(_OWORD *)&v19[-1].offHand.weaponCamo;
      *(_OWORD *)v17[-1].remoteControlMove = *(_OWORD *)v19[-1].remoteControlMove;
      *(_OWORD *)v17[-1].vehAngles = *(_OWORD *)v19[-1].vehAngles;
      *(_OWORD *)&v17[-1].vehOrgZ = *(_OWORD *)&v19[-1].vehOrgZ;
      *(_OWORD *)&v17[-1].gunYOfs = *(_OWORD *)&v19[-1].gunYOfs;
      *(_OWORD *)v17[-1].sightedClientsMask.data = *(_OWORD *)v19[-1].sightedClientsMask.data;
      *(_OWORD *)&v17[-1].sightedClientsMask.data[4] = *(_OWORD *)&v19[-1].sightedClientsMask.data[4];
      --v18;
    }
    while ( v18 );
    v17->buttons = v19->buttons;
    v21 = DVARBOOL_sv_cmdPredictAngles;
    if ( !DVARBOOL_sv_cmdPredictAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdPredictAngles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled && SV_ClientMP_GetExtrapAngles(cl, v6 + cl->lastUsercmd.commandTime, &outAngles) )
    {
      v22 = BG_UsrCmdPackAngle(outAngles.v[0]);
      v23 = outAngles.v[1];
      outPredictCmd->angles.v[0] = v22;
      v24 = BG_UsrCmdPackAngle(v23);
      v25 = outAngles.v[2];
      outPredictCmd->angles.v[1] = v24;
      outPredictCmd->angles.v[2] = BG_UsrCmdPackAngle(v25);
    }
    *outPredictTime = v6;
    v14 = v6;
  }
  else
  {
    if ( cl->beginCmdIndex >= cl->currCmdIndex )
    {
      LODWORD(v28) = cl->currCmdIndex;
      LODWORD(v27) = cl->beginCmdIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5509, ASSERT_TYPE_ASSERT, "( cl->beginCmdIndex ) < ( cl->currCmdIndex )", "cl->beginCmdIndex < cl->currCmdIndex\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    v11 = outPredictCmd;
    v12 = 2i64;
    do
    {
      v11 = (usercmd_s *)((char *)v11 + 128);
      v13 = *(_OWORD *)&v9->buttons;
      v9 = (usercmd_s *)((char *)v9 + 128);
      *(_OWORD *)&v11[-1].offHand.attachmentVariationIndices[13] = v13;
      *(_OWORD *)&v11[-1].offHand.weaponCamo = *(_OWORD *)&v9[-1].offHand.weaponCamo;
      *(_OWORD *)v11[-1].remoteControlMove = *(_OWORD *)v9[-1].remoteControlMove;
      *(_OWORD *)v11[-1].vehAngles = *(_OWORD *)v9[-1].vehAngles;
      *(_OWORD *)&v11[-1].vehOrgZ = *(_OWORD *)&v9[-1].vehOrgZ;
      *(_OWORD *)&v11[-1].gunYOfs = *(_OWORD *)&v9[-1].gunYOfs;
      *(_OWORD *)v11[-1].sightedClientsMask.data = *(_OWORD *)v9[-1].sightedClientsMask.data;
      *(_OWORD *)&v11[-1].sightedClientsMask.data[4] = *(_OWORD *)&v9[-1].sightedClientsMask.data[4];
      --v12;
    }
    while ( v12 );
    v11->buttons = v9->buttons;
    v14 = v6;
    if ( CommandThinkTime < v6 )
      v14 = CommandThinkTime;
    *outPredictTime = v14;
    if ( CommandThinkTime <= v6 )
    {
      ++cl->beginCmdIndex;
      v14 = *outPredictTime;
    }
  }
  outPredictCmd->serverTime = v14 + cl->lastUsercmd.serverTime;
  outPredictCmd->commandTime = *outPredictTime + cl->lastUsercmd.commandTime;
  outPredictCmd->inputTime = *outPredictTime + cl->lastUsercmd.inputTime;
  SV_ClientMP_ClampCmdServerTime(outPredictCmd);
  if ( cl->cumulThinkError - *outPredictTime > 0 )
    v8 = cl->cumulThinkError - *outPredictTime;
  cl->cumulThinkError = v8;
  cl->cumulThinkTime += *outPredictTime;
  cl->cumulExtrapError += *outPredictTime;
  cl->maxCumulThinkTime += *outPredictTime;
  return 1;
}

/*
==============
SV_ClientMP_PrintComandBufferDebug
==============
*/
void SV_ClientMP_PrintComandBufferDebug(SvClientMP *cl)
{
  int AvailableBufferThinkTime; 
  NetBurst *burstState; 
  int WindowDuration; 
  NetBurst *v5; 
  unsigned int MpClientIndex; 
  const dvar_t *v7; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int beginCmdIndex; 
  NetBurst *v10; 
  int v11; 
  int time; 
  int v13; 
  int v14; 
  NetBurst::BufferState m_state; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int currCmdIndex; 
  int v22; 
  int cumulTargetError; 
  int cumulBufferError; 
  int cumulThinkTime; 
  int maxCumulThinkTime; 
  int recvThinkTime; 
  int cumulCmdCount; 
  SvPersistentGlobalsMP *v29; 
  int v30; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int cmdTargetError; 
  int recvCmdCount; 
  int cmdCurrentError; 
  int CurrentBurstTime; 
  int m_windowMaximum; 
  int m_windowMinimum; 
  int v42; 
  int v43; 
  int v44; 
  SvLatencyProfileMetrics metrics; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5160, ASSERT_TYPE_ASSERT, "( cl != nullptr )", (const char *)&queryFormat, "cl != nullptr") )
    __debugbreak();
  if ( !cl->burstState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5161, ASSERT_TYPE_ASSERT, "( cl->burstState != nullptr )", (const char *)&queryFormat, "cl->burstState != nullptr") )
    __debugbreak();
  metrics.value[0] = cl->cumulThinkTime;
  metrics.value[1] = cl->maxCumulThinkTime;
  metrics.value[2] = cl->cumulThinkError;
  metrics.value[3] = cl->recvThinkTime;
  AvailableBufferThinkTime = SV_ClientMP_GetAvailableBufferThinkTime(cl);
  burstState = cl->burstState;
  metrics.value[4] = AvailableBufferThinkTime;
  WindowDuration = NetBurst::GetWindowDuration(burstState);
  v5 = cl->burstState;
  metrics.value[5] = WindowDuration;
  metrics.value[6] = v5->m_windowMaximum;
  metrics.value[7] = v5->m_windowMinimum;
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  SV_LatencyProfileMP_RecordLatencyEvent(MpClientIndex, &metrics);
  v7 = DVARBOOL_sv_cmdDebugBufferVerbose;
  if ( !DVARBOOL_sv_cmdDebugBufferVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdDebugBufferVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( Com_UseConstantUserCommandTime() )
    {
      PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      beginCmdIndex = cl->beginCmdIndex;
      v10 = cl->burstState;
      v11 = cl->currCmdIndex - beginCmdIndex;
      time = PersistentGlobalsMP->time;
      if ( cl->currCmdIndex < beginCmdIndex )
        v11 += 38;
      v13 = SV_ClientMP_GetAvailableBufferThinkTime(cl);
      cmdTargetError = cl->cmdTargetError;
      cmdCurrentError = cl->cmdCurrentError;
      m_windowMaximum = v10->m_windowMaximum;
      m_windowMinimum = v10->m_windowMinimum;
      v14 = NetBurst::GetWindowDuration(v10);
      m_state = v10->m_state;
      v43 = v14;
      if ( m_state )
      {
        v16 = 0;
      }
      else
      {
        if ( time < v10->m_stateStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 218, ASSERT_TYPE_ASSERT, "( systemMsec ) >= ( m_stateStartTime )", "%s >= %s\n\t%i, %i", "systemMsec", "m_stateStartTime", time, v10->m_stateStartTime) )
          __debugbreak();
        m_state = v10->m_state;
        v16 = time - v10->m_stateStartTime;
      }
      if ( m_state == BUFF_STATE_DEFICIT )
      {
        if ( time < v10->m_stateStartTime )
        {
          LODWORD(v35) = v10->m_stateStartTime;
          LODWORD(v34) = time;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 206, ASSERT_TYPE_ASSERT, "( systemMsec ) >= ( m_stateStartTime )", "%s >= %s\n\t%i, %i", "systemMsec", "m_stateStartTime", v34, v35) )
            __debugbreak();
        }
        m_state = v10->m_state;
        v17 = time - v10->m_stateStartTime;
      }
      else
      {
        v17 = 0;
      }
      if ( m_state == BUFF_STATE_SURPLUS )
      {
        if ( time < v10->m_stateStartTime )
        {
          LODWORD(v35) = v10->m_stateStartTime;
          LODWORD(v34) = time;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_burst.h", 194, ASSERT_TYPE_ASSERT, "( systemMsec ) >= ( m_stateStartTime )", "%s >= %s\n\t%i, %i", "systemMsec", "m_stateStartTime", v34, v35) )
            __debugbreak();
        }
        v18 = time - v10->m_stateStartTime;
      }
      else
      {
        v18 = 0;
      }
      LODWORD(v35) = cl->recvThinkTime;
      LODWORD(v34) = cl->cumulCmdCount;
      LODWORD(v33) = v11;
      LODWORD(v32) = cl->recvCmdCount;
      LODWORD(fmt) = PersistentGlobalsMP->frameThinkTime;
      Com_Printf(16, "[%s]  Time( sv:%d  frm:%d )  Count( recv:%d  buf:%d  cmd:%d )  Think( recv:%d  max:%d  err:%d  pred:%d  buff:%d  cumul:%d )  Throttle( surplus:%d  deficit:%d  ideal:%d  burst:%d  min:%d  max:%d  ::  %d->%d )\n", cl->name, (unsigned int)PersistentGlobalsMP->time, fmt, v32, v33, v34, v35, cl->maxCumulThinkTime, cl->cumulThinkError, cl->cumulExtrapError, v13, cl->cumulThinkTime, v18, v17, v16, v43, m_windowMinimum, m_windowMaximum, cmdCurrentError, cmdTargetError);
    }
    else
    {
      CurrentBurstTime = SV_ClientMP_GetCurrentBurstTime(cl);
      v19 = 0;
      if ( CurrentBurstTime - cl->cumulBufferError > 0 )
        v19 = CurrentBurstTime - cl->cumulBufferError;
      v42 = v19;
      v20 = SV_ClientMP_GetAvailableBufferThinkTime(cl);
      currCmdIndex = cl->currCmdIndex;
      v22 = cl->beginCmdIndex;
      cumulTargetError = cl->cumulTargetError;
      cumulBufferError = cl->cumulBufferError;
      cumulThinkTime = cl->cumulThinkTime;
      maxCumulThinkTime = cl->maxCumulThinkTime;
      recvThinkTime = cl->recvThinkTime;
      cumulCmdCount = cl->cumulCmdCount;
      v44 = v20;
      recvCmdCount = cl->recvCmdCount;
      v29 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      v30 = currCmdIndex - v22;
      if ( currCmdIndex < v22 )
        v30 = currCmdIndex - v22 + 38;
      LODWORD(v33) = cumulCmdCount;
      LODWORD(v32) = v30;
      LODWORD(fmt) = recvCmdCount;
      Com_Printf(16, "[%s]  Time( game:%d )  Count( recv:%d  buf:%d  cmd:%d )  Think( recv:%d  max:%d  cumul:%d )  Buffer( availError:%d  targetError:%d  avail:%d  target:%d  diff:%d )  Burst( observedError:%d )\n", cl->name, (unsigned int)v29->time, fmt, v32, v33, recvThinkTime, maxCumulThinkTime, cumulThinkTime, cumulBufferError, cumulTargetError, v44, v42, v44 - v42, CurrentBurstTime);
    }
  }
}

/*
==============
SV_ClientMP_ProcessBufferedCommands
==============
*/
__int64 SV_ClientMP_ProcessBufferedCommands(SvClientMP *cl)
{
  unsigned int v2; 
  unsigned int v3; 
  __int64 result; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  int i; 
  __int64 v8; 
  usercmd_s *v9; 
  const dvar_t *v10; 
  int v11; 
  bool v12; 
  SvGameModeApplication *ActiveServerApplication; 
  int cumulThinkTime; 
  int CommandThinkTime; 
  unsigned int MpClientIndex; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4985, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  if ( cl->state != CS_ACTIVE )
  {
    cl->beginCmdIndex = cl->currCmdIndex;
    return 0i64;
  }
  v5 = DVARBOOL_command_buffering_enabled;
  if ( !DVARBOOL_command_buffering_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_buffering_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    v6 = DVARINT_sv_cumulThinkTime;
    if ( !DVARINT_sv_cumulThinkTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cumulThinkTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    cl->maxCumulThinkTime = v6->current.integer;
  }
  for ( i = cl->beginCmdIndex; i != cl->currCmdIndex; ++i )
  {
    if ( v3 >= 6 )
      break;
    v8 = i % 38;
    v9 = &cl->cmds[v8];
    if ( (SvClientMP *)((char *)cl + v8 * 264) == (SvClientMP *)-173784i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4929, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    if ( SV_ClientMP_IsNormalPlaying(cl) )
    {
      if ( cl->cumulThinkTime >= cl->maxCumulThinkTime )
        break;
      v10 = DVARBOOL_command_buffering_enabled;
      if ( !DVARBOOL_command_buffering_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_buffering_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        v11 = SV_ClientMP_GetCommandThinkTime(cl, v9) + cl->cumulThinkTime;
        if ( Com_UseConstantUserCommandTime() )
        {
          v12 = v11 <= cl->maxCumulThinkTime;
          goto LABEL_29;
        }
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        Dvar_GetFloat_Internal_DebugName(DVARFLT_sv_cmdMinCumulThinkFrac, "sv_cmdMinCumulThinkFrac");
        SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
        cumulThinkTime = cl->cumulThinkTime;
        _XMM0 = 0i64;
        __asm { vroundss xmm4, xmm0, xmm1, 1 }
        if ( cumulThinkTime >= (int)*(float *)&_XMM4 )
        {
          v12 = (int)abs32(cl->maxCumulThinkTime - v11) <= (int)abs32(cl->maxCumulThinkTime - cumulThinkTime);
LABEL_29:
          if ( !v12 )
            break;
        }
      }
    }
    SV_ClientMP_ClampCmdServerTime(v9);
    CommandThinkTime = SV_ClientMP_GetCommandThinkTime(cl, v9);
    cl->cumulThinkTime += CommandThinkTime;
    v2 += CommandThinkTime;
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    if ( !SV_UserMoveWorkersMP_TryQueueClientThinkCmd(MpClientIndex, v9) )
      SV_ClientMP_Think(cl, v9);
    ++cl->cumulCmdCount;
    ++v3;
  }
  result = v2;
  cl->beginCmdIndex = i;
  return result;
}

/*
==============
SV_ClientMP_ProcessClientThinks
==============
*/
void SV_ClientMP_ProcessClientThinks(void)
{
  signed int i; 
  SvClientMP *CommonClient; 

  SV_DemoMP_RecordProcessClientThinks();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = (SvClientMP *)SvClient::GetCommonClient(i);
    SV_ClientMP_ProcessBufferedCommands(CommonClient);
  }
}

/*
==============
SV_ClientMP_ProcessCommands
==============
*/
__int64 SV_ClientMP_ProcessCommands(SvClientMP *cl, msg_t *msg, int fromOldServer, int *lastCommand)
{
  __int64 Bits; 
  int Long; 
  int v10; 
  char v11; 
  unsigned int v12; 

  SV_Profile_BeginEvent(SVPROF_CLIENT_COMMANDS);
  while ( 1 )
  {
    Bits = MSG_ReadBits(msg, 3u);
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    *lastCommand = Bits;
    if ( (_DWORD)Bits != 2 )
      break;
    if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4057, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
      __debugbreak();
    if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4058, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
      __debugbreak();
    Long = MSG_ReadLong(msg);
    v10 = MSG_PeekByte(msg);
    if ( truncate_cast<unsigned char,int>(v10) == 89 )
      v11 = SV_ClientMP_BinaryCommand(cl, msg, Long, fromOldServer);
    else
      v11 = SV_ClientMP_StringCommand(cl, msg, Long, fromOldServer);
    if ( !v11 || cl->state == CS_ZOMBIE )
    {
      v12 = 0;
      goto LABEL_19;
    }
  }
  v12 = 1;
LABEL_19:
  SV_Profile_EndEvent(SVPROF_CLIENT_COMMANDS);
  return v12;
}

/*
==============
SV_ClientMP_ReceiveStartingCmd
==============
*/
void SV_ClientMP_ReceiveStartingCmd(netadr_t *from, msg_t *msg)
{
  SvClientMP *ClientAtAddress; 
  int addrHandleIndex; 
  const char *v5; 
  const char *v6; 
  unsigned int MpClientIndex; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int128 v9; 
  int time; 
  int v11; 
  netadr_t adr; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 792, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tShould not receive starting command on front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ClientAtAddress = SvClientMP::FindClientAtAddress(from);
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&adr.type = *(_OWORD *)&from->type;
  adr.addrHandleIndex = addrHandleIndex;
  if ( ClientAtAddress )
  {
    v6 = NET_AdrToString(&adr);
    MpClientIndex = SV_Client_GetMpClientIndex(ClientAtAddress);
    Com_Printf(15, "SV Client Starting Cmd at %i '%s'.\n", MpClientIndex, v6);
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v9 = *(_OWORD *)&from->type;
    time = PersistentGlobalsMP->time;
    LODWORD(PersistentGlobalsMP) = from->addrHandleIndex;
    ClientAtAddress->lastPacketTime = time;
    *(_OWORD *)&adr.type = v9;
    adr.addrHandleIndex = (int)PersistentGlobalsMP;
    v11 = NET_OutOfBandPrint(NS_MAXCLIENTS, &adr, "strt_resp");
    if ( v11 < 0 )
      Com_PrintError(15, "SV_ClientMP_SendStartingResponseToClient failed with %d.\n", (unsigned int)v11);
  }
  else
  {
    v5 = NET_AdrToString(&adr);
    Com_PrintWarning(15, "Received COM_CONNECT_HANDSHAKE_STARTING from unknown remote client %s\n", v5);
  }
}

/*
==============
SV_ClientMP_ReceiveStats
==============
*/
void SV_ClientMP_ReceiveStats(netadr_t *from, msg_t *msg)
{
  SvClientMP *ClientAtAddress; 
  int v5; 
  const char *v6; 
  int v7; 
  const char *v8; 
  unsigned int packetNum; 
  unsigned int StatsGroupBitOffset; 
  unsigned int v11; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  unsigned int StatsGroupOffset; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned __int64 statPacketsReceived; 
  unsigned int MpClientIndex; 
  int addrHandleIndex; 
  __int64 ClientRequiredStatPackets; 
  __int128 v22; 
  const char *v23; 
  int v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  int startByte; 
  char v29; 
  int bufferSize; 
  netadr_t v31; 
  void *buffer; 
  netadr_t adr; 
  msg_t buf; 
  statPacketHeader_t v35; 
  unsigned __int8 data[40]; 
  char Buf2[8336]; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 658, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tShould not receive stats on front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  ClientAtAddress = SvClientMP::FindClientAtAddress(from);
  if ( ClientAtAddress )
  {
    if ( statPacketHeader_t::DeserializeFromMsg(&v35, msg) )
    {
      packetNum = v35.packetNum;
      StatsGroupBitOffset = Com_PlayerData_GetStatsGroupBitOffset(v35.statsGroup);
      v11 = StatsGroupBitOffset + v35.packetNum;
      v29 = StatsGroupBitOffset;
      SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
      if ( (SvGameGlobalsMP->m_requiredStatsBitMask & (1i64 << v11)) != 0 )
      {
        LODWORD(v26) = SV_Client_GetMpClientIndex(ClientAtAddress);
        LODWORD(fmt) = v35.statsGroup;
        Com_Printf(15, "Received packet %i (adjusted %d) of stats group (%d) data from clientNum %i (%s)\n", packetNum, v11, fmt, v26, ClientAtAddress->name);
        StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset(v35.statsGroup);
        v14 = msg->cursize - msg->readcount;
        v15 = 1229 * packetNum + StatsGroupOffset;
        v16 = 1229;
        startByte = v15;
        bufferSize = 66672 - v15;
        if ( 66672 - v15 < 1229 )
          v16 = 66672 - v15;
        v17 = v16;
        if ( v14 < v16 )
          v17 = msg->cursize - msg->readcount;
        if ( v14 > v16 )
        {
          LODWORD(v27) = msg->cursize - msg->readcount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 707, ASSERT_TYPE_ASSERT, "( ( remainingMsgSize <= maxSize ) )", "%s\n\t( remainingMsgSize ) = %i", "( remainingMsgSize <= maxSize )", v27) )
            __debugbreak();
        }
        if ( v17 > 1229 )
        {
          LODWORD(v27) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 708, ASSERT_TYPE_ASSERT, "( ( size <= ( ( ( 1270 - 16 - 2 ) - ( 3 * 4 + 2 + 1 ) ) - ( 8 ) ) ) )", "%s\n\t( size ) = %i", "( size <= ( ( ( 1270 - 16 - 2 ) - ( 3 * 4 + 2 + 1 ) ) - ( 8 ) ) )", v27) )
            __debugbreak();
        }
        if ( v17 <= 0 )
        {
          LODWORD(v27) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( size > 0 ) )", "%s\n\t( size ) = %i", "( size > 0 )", v27) )
            __debugbreak();
        }
        if ( v17 + startByte > 66672 )
        {
          LODWORD(v27) = startByte;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 710, ASSERT_TYPE_ASSERT, "(start + size <= ( 66672 ))", "%s\n\tstart is %i, size is %i", "start + size <= PERSISTENT_STATS_SIZE", v27, v17) )
            __debugbreak();
        }
        buffer = &ClientAtAddress->stats[startByte];
        if ( v35.moreFragments )
        {
          statPacketsReceived = ClientAtAddress->statPacketsReceived;
          _bittestandset64((__int64 *)&statPacketsReceived, (int)v11);
          ClientAtAddress->statPacketsReceived = statPacketsReceived;
        }
        else
        {
          ClientAtAddress->statPacketsReceived |= ((1i64 << (v29 + (unsigned __int8)Com_PlayerData_GetStatsGroupMaxPackets(v35.statsGroup))) - 1) ^ ((1i64 << v11) - 1);
        }
        MSG_ReadData(msg, v17, buffer, bufferSize);
        if ( msg->readcount == msg->cursize + msg->splitSize )
        {
          ClientAtAddress->lastPacketTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
          SV_ClientMP_ClearModifiedFlagRange(ClientAtAddress->statsModifiedFlags, startByte, v17);
          if ( SV_HasAllClientStatPackets(ClientAtAddress) )
          {
            memset_0(Buf2, 0, 0x208Eui64);
            if ( memcmp_0(ClientAtAddress->statsModifiedFlags, Buf2, 0x208Eui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 768, ASSERT_TYPE_ASSERT, "(I_memcmp( cl->statsModifiedFlags, zeroedStatsModifiedFlags, sizeof( zeroedStatsModifiedFlags ) ) == 0)", "%s\n\tDid not clear stat modified flags properly", "I_memcmp( cl->statsModifiedFlags, zeroedStatsModifiedFlags, sizeof( zeroedStatsModifiedFlags ) ) == 0") )
              __debugbreak();
            SV_ClientMP_ReceiveStatsValidateData(ClientAtAddress);
          }
          addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&adr.type = *(_OWORD *)&from->type;
          adr.addrHandleIndex = addrHandleIndex;
          ClientRequiredStatPackets = SV_GetClientRequiredStatPackets(ClientAtAddress);
          v22 = *(_OWORD *)&from->type;
          v31.addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&v31.type = v22;
          v23 = NET_AdrToString(&v31);
          Com_Printf(15, "SV_ClientMP_SendStatsResponseToClient: Sending '%s' to client at '%s'. statsDataNeeded = 0x%zx\n", "statResponse", v23, ClientRequiredStatPackets);
          MSG_Init(&buf, data, 32);
          MSG_WriteString(&buf, "statResponse");
          MSG_WriteBits(&buf, ClientRequiredStatPackets, 0x36u);
          if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 575, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", "%s\n\tStats response send buffer is too small, increase STATS_MSG_BUF_SIZE", "!MSG_IsOverflowed( &msg )") )
            __debugbreak();
          v24 = NET_OutOfBandData(NS_MAXCLIENTS, &adr, buf.data, buf.cursize);
          if ( v24 < 0 )
            Com_PrintError(15, "Failed to send response to stats: error %d.\n", (unsigned int)v24);
        }
        else
        {
          MpClientIndex = SV_Client_GetMpClientIndex(ClientAtAddress);
          Com_PrintError(131087, "Expected to fully read the stats message but did not for clientNum %d (%s)", MpClientIndex, ClientAtAddress->name);
        }
      }
      else
      {
        Com_PrintWarning(15, "Received stat packet %i (adjusted %d) of stats data which is not in the requested list %zu, possibly cheating\n", packetNum, v11, SvGameGlobalsMP->m_requiredStatsBitMask);
      }
    }
    else
    {
      v7 = from->addrHandleIndex;
      *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
      v31.addrHandleIndex = v7;
      v8 = NET_AdrToString(&v31);
      Com_PrintWarning(15, "Failed to deserialize stat packet header from client %s\n", v8);
    }
  }
  else
  {
    v5 = from->addrHandleIndex;
    *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
    v31.addrHandleIndex = v5;
    v6 = NET_AdrToString(&v31);
    Com_PrintWarning(15, "Received stats packet from unknown remote client %s\n", v6);
  }
}

/*
==============
SV_ClientMP_ReceiveStatsValidateData
==============
*/
void SV_ClientMP_ReceiveStatsValidateData(const SvClientMP *cl)
{
  int ControllerFromClient; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  unsigned __int8 *StatsBuffer; 
  StatsGroup v5; 
  __int64 StatsGroupOffset; 
  unsigned int StatsGroupDataSize; 
  unsigned int v8; 
  __int64 v9; 
  Mem_LargeLocal v10; 
  unsigned __int8 *buf; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 589, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tShould not receive stats on front-end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( !SV_IsDemoPlaying() )
  {
    if ( SV_HasAllClientStatPackets(cl) )
    {
      if ( NetConnection::IsLocal(&cl->clientConnection) && !cl->bIsSplitscreenClient )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
        if ( SvGameGlobalsMP->m_requiredStatsBitMask )
        {
          Mem_LargeLocal::Mem_LargeLocal(&v10, 0x36B0ui64, "statBuffer_t tmpStatsBuffer");
          buf = (unsigned __int8 *)v10.m_ptr;
          StatsBuffer = LiveStorage_GetStatsBuffer(ControllerFromClient);
          if ( !StatsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 618, ASSERT_TYPE_ASSERT, "( clientStatBuffer )", (const char *)&queryFormat, "clientStatBuffer", -2i64) )
            __debugbreak();
          v5 = STATSGROUP_RANKED;
          while ( 1 )
          {
            if ( (Com_PlayerData_GetStatsGroupBitmask(v5) & SvGameGlobalsMP->m_requiredStatsBitMask) != 0 )
            {
              StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset(v5);
              StatsGroupDataSize = Com_PlayerData_GetStatsGroupDataSize(v5);
              v8 = StatsGroupDataSize;
              if ( StatsGroupDataSize > 0x36B0 )
              {
                LODWORD(v9) = v5;
                if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 644, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "statsGroup %d is too large to be validated!  MAX_STATSGROUP_DATA_SIZE needs to be increased.", v9) )
                  goto LABEL_18;
              }
              else
              {
                LiveStorage_LocallyUnObfuscateStatsGroupIntoBuffer(buf, ControllerFromClient, StatsGroupOffset, &StatsBuffer[StatsGroupOffset], StatsGroupDataSize);
                if ( !memcmp_0(&cl->stats[StatsGroupOffset], buf, v8) || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 637, ASSERT_TYPE_ASSERT, "(I_memcmp( &cl->stats[memCmpAddr], tmpStatsBuffer, memCmpSize ) == 0)", "%s\n\tServer data did not match client's data", "I_memcmp( &cl->stats[memCmpAddr], tmpStatsBuffer, memCmpSize ) == 0") )
                  goto LABEL_18;
              }
              __debugbreak();
            }
LABEL_18:
            if ( ++v5 >= STATSGROUP_COUNT )
            {
              Mem_LargeLocal::~Mem_LargeLocal(&v10);
              return;
            }
          }
        }
      }
    }
  }
}

/*
==============
SV_ClientMP_ReconnectMigratedClient
==============
*/
void SV_ClientMP_ReconnectMigratedClient(SvClientMP *cl, netadr_t *from, const int challenge, const char *playerGuid, const char *userinfo, bool usingOnlineStatsOffline)
{
  unsigned int MpClientIndex; 
  unsigned int v11; 
  NetchanTelemetry *serverTelemetry; 
  const char *v13; 
  int time; 
  __int128 v15; 
  netadr_t v16; 

  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  if ( !cl->scriptId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1609, ASSERT_TYPE_ASSERT, "(cl->scriptId)", (const char *)&queryFormat, "cl->scriptId") )
    __debugbreak();
  cl->challenge = challenge;
  *(_OWORD *)cl->playerGuid = *(_OWORD *)playerGuid;
  *(_DWORD *)&cl->playerGuid[16] = *((_DWORD *)playerGuid + 4);
  cl->playerGuid[20] = playerGuid[20];
  if ( NetConnection::Accept(&cl->clientConnection, from, TYPE_GAME, ACCEPT_OPEN) )
  {
    v11 = SV_Client_GetMpClientIndex(cl);
    SvClientMP::AddClientAtAddress(from, v11);
  }
  serverTelemetry = SV_SnapshotMP_GetNetchanTelemetry();
  Netchan_Setup(NS_MAXCLIENTS, &cl->netchan, &cl->clientConnection, cl->netBuf.netchanBuffer, 4096, serverTelemetry);
  Core_strcpy(cl->userinfo, 0x400ui64, userinfo);
  if ( cl->serverId == sv_serverId_value || (Com_Printf(15, "Calling client connect for client %s (num %i guid \"%s\")\n", cl->name, MpClientIndex, cl->playerGuid), cl->migrationState = CS_FREE, GStatic::SetActiveStatics(), v13 = G_ClientMP_Connect(MpClientIndex, cl->scriptId), GStatic::ClearActiveStatics(), !v13) )
  {
    Com_Printf(15, "Reconnecting migrated client %s (num %i guid \"%s\")\n", cl->name, MpClientIndex, cl->playerGuid);
    SV_ClientMP_UpdateConnectivityBits(MpClientIndex);
    cl->usingOnlineStatsOffline = usingOnlineStatsOffline;
    cl->state = CS_CONNECTED;
    time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    cl->nextSnapshotTime = time;
    cl->lastPacketTime = time;
    cl->lastConnectTime = time;
    SV_ClientMP_ResetKillcam(cl);
    SV_ClientMP_ResetCommandThinkTime(cl);
    *(_OWORD *)cl->playerGuid = *(_OWORD *)playerGuid;
    *(_DWORD *)&cl->playerGuid[16] = *((_DWORD *)playerGuid + 4);
    cl->playerGuid[20] = playerGuid[20];
    cl->hasSentClientNetworkTelemetry = 0;
    memset_0(cl->cmdReceivedHistogram, 0, 0xC0ui64);
    *(_QWORD *)cl->cmdExtrapolationCmdLengthHistogram = 0i64;
    *(_QWORD *)&cl->cmdExtrapolationCmdLengthHistogram[4] = 0i64;
    *(_QWORD *)&cl->cmdExtrapolationCmdLengthHistogram[8] = 0i64;
    *(_QWORD *)&cl->cmdExtrapolationCmdLengthHistogram[12] = 0i64;
    *(_QWORD *)&cl->cmdExtrapolationCmdLengthHistogram[16] = 0i64;
    SV_ClientNetPerf_InitForClient(MpClientIndex);
    SV_ClientAntiCheatMP_Reset(&cl->antiCheatData);
    GStatic::SetActiveStatics();
    G_ClientMP_UserinfoChanged(MpClientIndex);
    GStatic::ClearActiveStatics();
    SV_ClientMP_UserInfoChanged(cl);
    SV_ClientMP_UpdateSplitscreenStateForConnection(&cl->clientConnection);
    SV_StreamSync_ClientConnect(cl, 1);
    ScriptableMsgWrite_ResetClientBuffers(MpClientIndex, 1);
    v15 = *(_OWORD *)&from->type;
    v16.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v16.type = v15;
    SV_SendConnectResponseToClient(cl, &v16, 1);
    cl->gamestateMessageNum = -1;
  }
  else
  {
    SV_ClientMP_DropClient(cl, v13, 1);
  }
}

/*
==============
SV_ClientMP_ResetClientSnapshot
==============
*/
void SV_ClientMP_ResetClientSnapshot(clientSnapshot_t *snapshot)
{
  GSnapshotWeaponMap weaponMapCopy; 
  __m256i v3; 
  __m256i v4; 
  __m256i v5; 

  GSnapshotWeaponMap::GSnapshotWeaponMap(&weaponMapCopy, &snapshot->weaponMap);
  v3 = *(__m256i *)&snapshot->streamSync.streamSyncLists[0].itemCount;
  v4 = *(__m256i *)&snapshot->streamSync.streamSyncLists[2].itemCount;
  v5 = *(__m256i *)&snapshot->streamSync.streamSyncLists[4].itemCount;
  DebugWipe(snapshot, 0x6C78ui64);
  GSnapshotWeaponMap::GSnapshotWeaponMap(&snapshot->weaponMap, &weaponMapCopy);
  *(__m256i *)&snapshot->streamSync.streamSyncLists[0].itemCount = v3;
  *(__m256i *)&snapshot->streamSync.streamSyncLists[2].itemCount = v4;
  *(__m256i *)&snapshot->streamSync.streamSyncLists[4].itemCount = v5;
  GSnapshotWeaponMap::~GSnapshotWeaponMap(&weaponMapCopy);
}

/*
==============
SV_ClientMP_ResetCommandThinkTime
==============
*/
void SV_ClientMP_ResetCommandThinkTime(SvClientMP *cl)
{
  const dvar_t *v2; 
  NetBurst *burstState; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5795, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = DVARINT_sv_cumulThinkTime;
  if ( !DVARINT_sv_cumulThinkTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cumulThinkTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  burstState = cl->burstState;
  cl->maxCumulThinkTime = v2->current.integer;
  *(_QWORD *)&cl->lerpBufferBurstStep = 0i64;
  *(_QWORD *)&cl->cumulBufferError = 0i64;
  cl->targetBufferBurstTime = 0;
  burstState->Reset(burstState);
  cl->cmdTargetError = cl->cmdCurrentError;
  *(_QWORD *)&cl->cumulThinkError = 0i64;
}

/*
==============
SV_ClientMP_ResetKillcam
==============
*/
void SV_ClientMP_ResetKillcam(SvClientMP *cl)
{
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1571, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  *(_WORD *)&cl->isInKillcam = 0;
  *(_QWORD *)&cl->killcamOverrideSequenceNumber = -1i64;
}

/*
==============
SV_ClientMP_SendClientMatchData
==============
*/
void SV_ClientMP_SendClientMatchData(const int clientNum)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( CommonClient )
  {
    if ( !LODWORD(CommonClient[855].__vftable) )
    {
      *(_DWORD *)&CommonClient[1115].lastUsercmd.offHand.attachmentVariationIndices[25] = 0;
      CommonClient[1115].lastUsercmd.offHand.attachmentVariationIndices[21] = 1;
    }
  }
}

/*
==============
SV_ClientMP_SendClientPlayerData
==============
*/
void SV_ClientMP_SendClientPlayerData(int clientNum)
{
  SvClient *CommonClient; 
  unsigned __int8 *ClientStatsBuffer; 
  const dvar_t *v4; 
  unsigned __int8 *v5; 
  int integer; 
  int StatsGroupDataSize; 
  unsigned int StatsGroupOffset; 
  int v9; 
  int v10; 
  unsigned int v11; 
  signed int i; 
  int v13; 
  char v14; 
  __int64 v15; 
  unsigned int outFirstByte; 
  unsigned int outLastByte; 
  msg_t buf; 
  char Buf2[8336]; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( CommonClient[1115].lastUsercmd.offHand.weaponAttachments[8] )
  {
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 896, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tShould not modify stats on front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
      __debugbreak();
    if ( SV_GetClientRequiredStatPackets((const SvClientMP *)CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 897, ASSERT_TYPE_ASSERT, "( SV_HasAllClientStatPackets( cl ) )", (const char *)&queryFormat, "SV_HasAllClientStatPackets( cl )") )
      __debugbreak();
    if ( CommonClient->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 898, ASSERT_TYPE_ASSERT, "( cl->state > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "cl->state > SvClientConnectionState::CS_ZOMBIE") )
      __debugbreak();
    if ( CommonClient->state != CS_RECONNECTING )
    {
      MSG_Init(&buf, msgBuffer_0, 1020);
      MSG_WriteByte(&buf, 71i64);
      MSG_WriteByte(&buf, BYTE2(CommonClient[1115].lastUsercmd.sightedClientsMask.data[1]));
      ClientStatsBuffer = SV_ClientMP_GetClientStatsBuffer(clientNum);
      v4 = DVARINT_security_server_modify_statpacket;
      v5 = ClientStatsBuffer;
      if ( !DVARINT_security_server_modify_statpacket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "security_server_modify_statpacket") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      integer = 5;
      if ( v4->current.integer < 5 )
        integer = v4->current.integer;
      if ( integer >= 0 )
      {
        StatsGroupDataSize = Com_PlayerData_GetStatsGroupDataSize((StatsGroup)integer);
        StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset((StatsGroup)integer);
        v9 = BG_irand(4, StatsGroupDataSize, &randState);
        LiveStorage_FlagModifiedByteRange(StatsGroupOffset + v9, StatsGroupOffset + v9, &CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[13]);
      }
      outFirstByte = 0;
      outLastByte = 0;
      if ( Com_PlayerData_GetNextModifiedByte(0, &CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[13], &outFirstByte, &outLastByte) )
      {
        while ( 1 )
        {
          v10 = outLastByte - outFirstByte + 1;
          if ( v10 > 255 )
          {
            LODWORD(v15) = outLastByte - outFirstByte + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 948, ASSERT_TYPE_ASSERT, "( ( byteCount <= 0xff ) )", "%s\n\t( byteCount ) = %i", "( byteCount <= 0xff )", v15) )
              __debugbreak();
          }
          if ( outFirstByte >= 0x1046C )
          {
            LODWORD(v15) = outFirstByte;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 949, ASSERT_TYPE_ASSERT, "( ( firstByte < ( ( 66672 ) - (sizeof( int )) ) ) )", "%s\n\t( firstByte ) = %i", "( firstByte < ( ( 66672 ) - (sizeof( int )) ) )", v15) )
              __debugbreak();
          }
          if ( v10 + outFirstByte >= 0xB0E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 950, ASSERT_TYPE_ASSERT, "( firstByte + byteCount < ( __builtin_offsetof(StatsBlobs,nonGameData) ) )", (const char *)&queryFormat, "firstByte + byteCount < OFFSETOF( StatsBlobs, nonGameData )") )
            __debugbreak();
          MSG_WriteLong(&buf, outFirstByte);
          MSG_WriteByte(&buf, v10);
          MSG_WriteData(&buf, &v5[outFirstByte], v10);
          if ( buf.overflowed )
            break;
          v11 = outLastByte;
          if ( outFirstByte > outLastByte )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 982, ASSERT_TYPE_ASSERT, "(firstByte <= lastByte)", (const char *)&queryFormat, "firstByte <= lastByte") )
              __debugbreak();
            v11 = outLastByte;
          }
          for ( i = outFirstByte; i <= v11; CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[(v13 >> 3) + 13] &= ~(1 << v14) )
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
          outFirstByte = 0;
          outLastByte = 0;
          if ( !Com_PlayerData_GetNextModifiedByte(v11 + 1, &CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[13], &outFirstByte, &outLastByte) )
          {
            SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
            goto LABEL_43;
          }
        }
        SV_ClientMP_DropClient((SvClientMP *)CommonClient, "Too many stats changed at once", 1);
      }
      else
      {
LABEL_43:
        memset_0(Buf2, 0, 0x208Eui64);
        if ( memcmp_0(&CommonClient[1086].lastUsercmd.offHand.attachmentVariationIndices[13], Buf2, 0x208Eui64) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1002, ASSERT_TYPE_ASSERT, "( I_memcmp( cl->statsModifiedFlags, zeroBuffer, sizeof( cl->statsModifiedFlags ) ) == 0 )", (const char *)&queryFormat, "I_memcmp( cl->statsModifiedFlags, zeroBuffer, sizeof( cl->statsModifiedFlags ) ) == 0") )
            __debugbreak();
        }
        CommonClient[1115].lastUsercmd.offHand.weaponAttachments[8] = 0;
      }
    }
  }
}

/*
==============
SV_ClientMP_SendCodcasterClientMatchData
==============
*/
void SV_ClientMP_SendCodcasterClientMatchData(const int clientNum)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( !LODWORD(CommonClient[855].__vftable) )
  {
    *(_DWORD *)&CommonClient[1115].lastUsercmd.forwardmove = 0;
    CommonClient[1115].lastUsercmd.offHand.weaponCamo = 1;
  }
}

/*
==============
SV_ClientMP_SendDisconnect
==============
*/
void SV_ClientMP_SendDisconnect(SvClientMP *client, SvClientConnectionState state, const char *reason, const char *clientName)
{
  const char *v7; 
  __int64 v8; 
  char dest[256]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2399, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (unsigned __int8)state < CS_CONNECTED )
  {
    LODWORD(v8) = (unsigned __int8)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2400, ASSERT_TYPE_ASSERT, "( ( state >= SvClientConnectionState::CS_CONNECTED ) )", "( static_cast<uint>( state ) ) = %u", v8) )
      __debugbreak();
  }
  if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2401, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
    __debugbreak();
  if ( state == CS_ACTIVE )
  {
    Com_sprintf_truncate(dest, 0x100ui64, "%c \"%s\"", 114i64, reason);
    client->SendServerCommand(client, SV_CMD_RELIABLE, dest);
  }
  else
  {
    v7 = j_va("disconnect %s", reason);
    NetConnection::SendUnreliable(&client->clientConnection, v7);
  }
}

/*
==============
SV_ClientMP_SetAssignedTeam
==============
*/
void SV_ClientMP_SetAssignedTeam(unsigned int clientNum, team_t team)
{
  PartyData *ServerLobby; 
  SvClientMP *MpClient; 
  const char *v6; 
  __int64 v7; 
  __int64 v9; 
  unsigned int v10; 
  XUID result; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v10 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7666, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)team >= TEAM_MP_NUM_TEAMS )
  {
    LODWORD(v9) = 203;
    LODWORD(v7) = team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7667, ASSERT_TYPE_ASSERT, "(unsigned)( team ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "team doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !SV_IsDemoPlaying() )
  {
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Com_PrintError(15, "SV_SetAssignedTeam Error: not supported for front-end.\n");
    }
    else if ( Lobby_IsInLobby() )
    {
      ServerLobby = SV_MainMP_GetServerLobby();
      Party_GetXuid(&result, ServerLobby, clientNum);
      if ( XUID::IsNull(&result) )
      {
        MpClient = SV_Client_GetMpClient(clientNum);
        if ( !NetConnection::IsBot(&MpClient->clientConnection) )
        {
          v6 = XUID::ToDevString(&result);
          Com_PrintError(15, "SV_SetAssignedTeam Error: unknown xuid (%s) for client (%i).\n", v6, clientNum);
        }
      }
      else
      {
        PartyHost_SetTeam(ServerLobby, result, team);
      }
    }
    else
    {
      Com_PrintError(15, "SV_SetAssignedTeam Error: not in a game lobby.\n");
    }
  }
}

/*
==============
SV_ClientMP_SetClientPersistentDataModified
==============
*/
void SV_ClientMP_SetClientPersistentDataModified(int clientNum)
{
  const SvClientMP *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (const SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 846, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 547, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( SV_GetClientRequiredStatPackets(CommonClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 847, ASSERT_TYPE_ASSERT, "( SV_HasAllClientStatPackets( cl ) )", (const char *)&queryFormat, "SV_HasAllClientStatPackets( cl )") )
    __debugbreak();
  if ( SvClient::GetCommonClient(clientNum)->state <= CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 848, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) > SvClientConnectionState::CS_ZOMBIE") )
    __debugbreak();
  CommonClient->statsModified = 1;
}

/*
==============
SV_ClientMP_SetClientRankValue
==============
*/
void SV_ClientMP_SetClientRankValue(const int clientNum, const float rankValue)
{
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const XUID *v6; 
  int v7; 
  unsigned int v8; 
  XUID xuid; 
  XUID result; 

  XUID::XUID(&xuid);
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v8 = SvClient::ms_clientCount;
    v7 = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7503, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v3 = (char *)&SvClient::GetCommonClient(clientNum)[1].lastUsercmd.buttons + 4;
  v4 = Info_ValueForKey(v3, "guest");
  if ( !atoi(v4) )
  {
    v5 = Info_ValueForKey(v3, "xuid");
    v6 = XUID::FromString(&result, v5);
    XUID::operator=(&xuid, v6);
    if ( !XUID::IsNull(&xuid) )
      Online_Skill_SetRankForXuid(&xuid, rankValue);
  }
}

/*
==============
SV_ClientMP_SetUserinfo
==============
*/
void SV_ClientMP_SetUserinfo(int index, const char *val)
{
  const char *v4; 
  SvClient *CommonClient; 
  const char *v6; 

  if ( index < 0 || index >= (int)SvClient::ms_clientCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440DE0B8, 575i64, (unsigned int)index);
  v4 = (char *)&queryFormat.fmt + 3;
  if ( val )
    v4 = val;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(index);
  Core_strcpy((char *)&CommonClient[1].lastUsercmd.buttons + 4, 0x400ui64, v4);
  v6 = Info_ValueForKey(v4, (const char *)&stru_143C9A1A4);
  Core_strcpy(&CommonClient[4].lastUsercmd.selectedLoc[1], 0x24ui64, v6);
}

/*
==============
SV_ClientMP_ShouldDoBlockTest
==============
*/
__int64 SV_ClientMP_ShouldDoBlockTest()
{
  const dvar_t *v0; 
  const dvar_t *v2; 
  unsigned int v3; 
  signed int v4; 
  unsigned int i; 
  SvClientMP *MpClient; 
  const dvar_t *v7; 

  if ( SvStaticGlobals::ms_svStaticGlobals.state != SS_GAME )
    return 0i64;
  v0 = DVARBOOL_sv_debugMinPlayers;
  if ( !DVARBOOL_sv_debugMinPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugMinPlayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time % s_existsTimeModulo > s_existsTimeout && SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time % s_existsTimeModulo < s_existsTimeoutDuration + s_existsTimeout;
  v2 = DVARINT_sv_checkMinPlayers;
  if ( !DVARINT_sv_checkMinPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_checkMinPlayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.integer || (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return 0i64;
  v3 = 0;
  v4 = 0;
  for ( i = 0; v4 < (int)SvClient::ms_clientCount; ++v4 )
  {
    MpClient = SV_Client_GetMpClient(v4);
    if ( MpClient->state == CS_ACTIVE && !NetConnection::IsLocal(&MpClient->clientConnection) )
      ++i;
  }
  v7 = DVARINT_sv_checkMinPlayers;
  if ( !DVARINT_sv_checkMinPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_checkMinPlayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  LOBYTE(v3) = i >= v7->current.integer;
  return v3;
}

/*
==============
SV_ClientMP_SpawnBotOrTestClient
==============
*/
__int64 SV_ClientMP_SpawnBotOrTestClient(gentity_s *ent)
{
  unsigned int number; 
  SvClient *CommonClient; 
  unsigned int MpClientIndex; 
  usercmd_s cmd; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7414, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (int)number <= (int)SvClient::ms_clientCount )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(number);
    if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7423, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( LODWORD(CommonClient[855].__vftable) )
    {
      SV_SnapWorkersMP_FinishSnapshotWorkers();
      SV_SendClientGameState((SvClientMP *)CommonClient);
      memset_0(&cmd, 0, sizeof(cmd));
      SV_ClientMP_EnterWorld((SvClientMP *)CommonClient, &cmd, 1);
      return 1i64;
    }
    else
    {
      MpClientIndex = SV_Client_GetMpClientIndex((const SvClientMP *)CommonClient);
      Com_PrintError(15, "SpawnBotOrTestClient is meant to be called on test clients, not regular clients (%d '%s').\n", MpClientIndex, &CommonClient[4].lastUsercmd.selectedLoc[1]);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(15, "SpawnBotOrTestClient is meant to be called on test clients, not regular entities (%d).\n", number);
    return 0i64;
  }
}

/*
==============
SV_ClientMP_StartExtrapolationWorkers
==============
*/
void SV_ClientMP_StartExtrapolationWorkers(void)
{
  signed int i; 
  const SvClientMP *CommonClient; 
  const playerState_s *EffectivePlayerstateForClientNum; 
  bool IsPlayerActive; 
  const SvClientMP *v4; 
  __int64 v5; 
  __int64 v6; 
  usercmd_s outCmd; 

  Sys_ProfBeginNamedEvent(0xFF00FF00, "SV_ClientMP_StartExtrapolationWorkers");
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
    {
      if ( i >= SvClient::ms_clientCount )
      {
        LODWORD(v6) = SvClient::ms_clientCount;
        LODWORD(v5) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6034, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClientMP::GetClientCount() )", "clientIndex doesn't index SvClientMP::GetClientCount()\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (const SvClientMP *)SvClient::GetCommonClient(i);
      EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(i);
      BG_PlayerExtrap_SavePlayerState(EffectivePlayerstateForClientNum, &CommonClient->extrapPlayerState);
      if ( SV_ClientMP_GetExtrapCommand(CommonClient, &outCmd) )
      {
        GStatic::SetActiveStatics();
        IsPlayerActive = G_ActiveMP_IsPlayerActive(i);
        GStatic::ClearActiveStatics();
        if ( IsPlayerActive && outCmd.commandTime >= EffectivePlayerstateForClientNum->commandTime && !SV_UserMoveWorkersMP_TryStartClientExtrapCmd(i) )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v4 = (const SvClientMP *)SvClient::GetCommonClient(i);
          if ( SV_ClientMP_GetExtrapCommand(v4, &outCmd) )
          {
            GStatic::SetActiveStatics();
            G_ActiveMP_ExtrapolatePlayer(i, &outCmd, &v4->extrapPlayerState);
            GStatic::ClearActiveStatics();
          }
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientMP_StringCommand
==============
*/
char SV_ClientMP_StringCommand(SvClientMP *cl, msg_t *msg, const int cmdSequence, int fromOldServer)
{
  const char *v7; 
  int lastClientCommand; 
  const char *v9; 
  const char *name; 
  ucmd_t *v12; 
  const char *v13; 
  signed __int64 v14; 
  int v15; 
  int v16; 
  const char *v17; 
  int MpClientIndex; 
  char string[1024]; 

  v7 = MSG_ReadString(msg, string, 0x400u);
  lastClientCommand = cl->lastClientCommand;
  v9 = v7;
  if ( lastClientCommand >= cmdSequence )
    return 1;
  if ( cmdSequence > lastClientCommand + 1 )
  {
    Com_Printf(131087, "Client %s lost %i clientCommands. seq=%i, lastClientCommand=%i. command requested '%s'.\n", cl->name, (unsigned int)(cmdSequence - lastClientCommand + 1), cmdSequence, cl->lastClientCommand, v7);
    SV_ClientMP_DropClient(cl, "EXE/LOSTRELIABLECOMMANDS", 1);
    return 0;
  }
  SV_Cmd_TokenizeString(v7);
  name = s_clientMp_svCmds[0].name;
  v12 = s_clientMp_svCmds;
  if ( s_clientMp_svCmds[0].name )
  {
    while ( 1 )
    {
      v13 = SV_Cmd_Argv(0);
      v14 = name - v13;
      do
      {
        v15 = (unsigned __int8)v13[v14];
        v16 = *(unsigned __int8 *)v13 - v15;
        if ( v16 )
          break;
        ++v13;
      }
      while ( v15 );
      if ( !v16 )
        break;
      name = v12[1].name;
      ++v12;
      if ( !name )
        goto LABEL_18;
    }
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Com_PrintError(15, "Ingoring client command '%s' because it isn't support for the front-end-server\n", v12->name);
    }
    else if ( !fromOldServer || v12->allowFromOldServer )
    {
      Sys_ProfBeginNamedEvent(0xFFu, v12->name);
      v12->func(cl);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      Com_Printf(15, "Ignoring client command '%s' because it's from an old server\n", v9);
    }
    if ( v12->name )
      goto LABEL_23;
  }
LABEL_18:
  if ( !SV_Loaded() || fromOldServer )
  {
    if ( !v12->name )
    {
      Com_Printf(15, "Ignoring client command '%s' because it is an unrecognized command\n", v9);
      goto LABEL_27;
    }
LABEL_23:
    if ( SV_Loaded() )
    {
      if ( fromOldServer )
        Com_Printf(15, "Ignoring client command '%s' because fromOldServer is TRUE\n", v9);
    }
    else
    {
      Com_Printf(15, "Ignoring client command '%s' because SV_Loaded() is false\n", v9);
    }
    goto LABEL_27;
  }
  GStatic::SetActiveStatics();
  v17 = SV_Cmd_Argv(0);
  Sys_ProfBeginNamedEvent(0xFFu, v17);
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  G_CmdsMP_ClientCommand(MpClientIndex);
  Sys_ProfEndNamedEvent();
  GStatic::ClearActiveStatics();
LABEL_27:
  SV_Cmd_EndTokenizedString();
  cl->lastClientCommand = cmdSequence;
  Com_sprintf(cl->lastClientCommandString, 0x400ui64, (const char *)&queryFormat, v9);
  return 1;
}

/*
==============
SV_ClientMP_Think
==============
*/
void SV_ClientMP_Think(SvClientMP *cl, const usercmd_s *cmd)
{
  usercmd_s *p_lastUsercmd; 
  const usercmd_s *v5; 
  __int64 v6; 
  __int128 v7; 
  bool v8; 
  int MpClientIndex; 
  __int64 v10; 
  int time; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4132, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( cmd->serverTime > SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time )
  {
    time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    LODWORD(v10) = cmd->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4133, ASSERT_TYPE_ASSERT, "( cmd->serverTime ) <= ( SvPersistentGlobalsMP::GetTime() )", "cmd->serverTime <= SvPersistentGlobalsMP::GetTime()\n\t%i, %i", v10, time) )
      __debugbreak();
  }
  p_lastUsercmd = &cl->lastUsercmd;
  v5 = cmd;
  v6 = 2i64;
  do
  {
    p_lastUsercmd = (usercmd_s *)((char *)p_lastUsercmd + 128);
    v7 = *(_OWORD *)&v5->buttons;
    v5 = (const usercmd_s *)((char *)v5 + 128);
    *(_OWORD *)&p_lastUsercmd[-1].offHand.attachmentVariationIndices[13] = v7;
    *(_OWORD *)&p_lastUsercmd[-1].offHand.weaponCamo = *(_OWORD *)&v5[-1].offHand.weaponCamo;
    *(_OWORD *)p_lastUsercmd[-1].remoteControlMove = *(_OWORD *)v5[-1].remoteControlMove;
    *(_OWORD *)p_lastUsercmd[-1].vehAngles = *(_OWORD *)v5[-1].vehAngles;
    *(_OWORD *)&p_lastUsercmd[-1].vehOrgZ = *(_OWORD *)&v5[-1].vehOrgZ;
    *(_OWORD *)&p_lastUsercmd[-1].gunYOfs = *(_OWORD *)&v5[-1].gunYOfs;
    *(_OWORD *)p_lastUsercmd[-1].sightedClientsMask.data = *(_OWORD *)v5[-1].sightedClientsMask.data;
    *(_OWORD *)&p_lastUsercmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v5[-1].sightedClientsMask.data[4];
    --v6;
  }
  while ( v6 );
  v8 = cl->state == CS_ACTIVE;
  p_lastUsercmd->buttons = v5->buttons;
  if ( v8 )
  {
    GStatic::SetActiveStatics();
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    G_Active_SetLastServerTime(MpClientIndex, cmd->serverTime);
    G_ActiveMP_ClientThink(MpClientIndex, cmd);
    GStatic::ClearActiveStatics();
  }
}

/*
==============
SV_ClientMP_ThinkInternal
==============
*/
void SV_ClientMP_ThinkInternal(SvClientMP *cl, const usercmd_s *cmd)
{
  int MpClientIndex; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4143, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( cl->state == CS_ACTIVE )
  {
    GStatic::SetActiveStatics();
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    G_Active_SetLastServerTime(MpClientIndex, cmd->serverTime);
    G_ActiveMP_ClientThink(MpClientIndex, cmd);
    GStatic::ClearActiveStatics();
  }
}

/*
==============
SV_ClientMP_UpdateBufferBurstTime
==============
*/
__int64 SV_ClientMP_UpdateBufferBurstTime(SvClientMP *cl, const int currBurstTime)
{
  SvGameModeApplication *ActiveServerApplication; 
  int CurrentBurstTime; 
  __int64 result; 
  const dvar_t *v7; 
  int startBufferBurstTime; 
  int v9; 
  int v10; 
  int Int_Internal_DebugName; 
  __int64 v14; 
  __int64 v15; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5097, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( currBurstTime >= cl->startBufferBurstTime )
    goto LABEL_9;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  cl->lerpBufferBurstStep += SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
  CurrentBurstTime = SV_ClientMP_GetCurrentBurstTime(cl);
  if ( currBurstTime > CurrentBurstTime )
  {
    if ( currBurstTime < cl->targetBufferBurstTime )
    {
      LODWORD(v14) = currBurstTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5118, ASSERT_TYPE_ASSERT, "( currBurstTime ) >= ( cl->targetBufferBurstTime )", "currBurstTime >= cl->targetBufferBurstTime\n\t%i, %i", v14, cl->targetBufferBurstTime) )
        __debugbreak();
    }
LABEL_9:
    cl->startBufferBurstTime = currBurstTime;
    cl->lerpBufferBurstStep = 0;
    return (unsigned int)currBurstTime;
  }
  v7 = DVARINT_sv_cmdBufferStepTime;
  if ( !DVARINT_sv_cmdBufferStepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferStepTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  result = (unsigned int)cl->targetBufferBurstTime;
  if ( cl->lerpBufferBurstStep < v7->current.integer )
  {
    if ( currBurstTime > (int)result )
    {
      startBufferBurstTime = cl->startBufferBurstTime;
      v9 = startBufferBurstTime - CurrentBurstTime;
      v10 = startBufferBurstTime - currBurstTime;
      if ( v10 <= 0 )
      {
        LODWORD(v14) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5142, ASSERT_TYPE_ASSERT, "( newBurstRange ) > ( 0 )", "newBurstRange > 0\n\t%i, %i", v14, 0i64) )
          __debugbreak();
      }
      if ( v9 > v10 )
      {
        LODWORD(v15) = v10;
        LODWORD(v14) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5145, ASSERT_TYPE_ASSERT, "( lastBurstRange ) <= ( newBurstRange )", "lastBurstRange <= newBurstRange\n\t%i, %i", v14, v15) )
          __debugbreak();
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_sv_cmdBufferStepTime, "sv_cmdBufferStepTime");
      _XMM1 = 0i64;
      __asm { vroundss xmm2, xmm1, xmm3, 1 }
      cl->lerpBufferBurstStep = I_clamp((int)*(float *)&_XMM2, 0, Int_Internal_DebugName);
      cl->targetBufferBurstTime = currBurstTime;
    }
    return (unsigned int)CurrentBurstTime;
  }
  else
  {
    cl->startBufferBurstTime = result;
    *(_QWORD *)&cl->targetBufferBurstTime = 0i64;
  }
  return result;
}

/*
==============
SV_ClientMP_UpdateClientBuffering
==============
*/
void SV_ClientMP_UpdateClientBuffering(void)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvPersistentGlobalsMP *v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 lastCommandTimeUsec; 
  double TimescaleForSv; 
  __int64 v6; 
  signed int v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  const dvar_t *v15; 
  int integer; 
  int v17; 
  SvClient *CommonClient; 

  Sys_ProfBeginNamedEvent(0xFF00FF00, "SV_ClientMP_UpdateClientBuffering");
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v1 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v2 = 1000i64 * Com_GetUserCommandConstantMsec();
  v3 = Sys_Microseconds();
  lastCommandTimeUsec = v1->lastCommandTimeUsec;
  v1->lastCommandTimeUsec = v3;
  TimescaleForSv = Com_GetTimescaleForSv();
  v6 = v3 - lastCommandTimeUsec;
  v7 = 0;
  if ( !lastCommandTimeUsec )
    v6 = 0i64;
  v8 = (float)v6;
  if ( v6 < 0 )
  {
    v9 = (float)v6;
    v8 = v9 + 1.8446744e19;
  }
  v11 = *(float *)&TimescaleForSv * v8;
  v10 = v11;
  v12 = 0i64;
  if ( v11 >= 9.223372e18 )
  {
    v10 = v11 - 9.223372e18;
    if ( (float)(v11 - 9.223372e18) < 9.223372e18 )
      v12 = 0x8000000000000000ui64;
  }
  v13 = v1->accumCommandTimeUsec + v12 + (unsigned int)(int)v10;
  v14 = v13 - v13 % v2;
  v1->accumCommandTimeUsec = v13 % v2;
  v15 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  integer = v15->current.integer;
  v17 = truncate_cast<int,unsigned __int64>(v14 / 0x3E8);
  if ( v17 < integer )
    integer = v17;
  if ( SV_IsDemoPlaying() )
  {
    integer = SV_Demo_GetInt();
  }
  else if ( SV_Demo_IsRecording() )
  {
    SV_Record_GetInt(integer);
  }
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v7);
      if ( CommonClient->state == CS_ACTIVE )
        SV_ClientMP_UpdateCommandThinkTime((SvClientMP *)CommonClient, integer);
      ++v7;
    }
    while ( v7 < (int)SvClient::ms_clientCount );
  }
  PersistentGlobalsMP->frameThinkTime = integer;
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientMP_UpdateCommandBufferError
==============
*/
void SV_ClientMP_UpdateCommandBufferError(SvClientMP *cl)
{
  int AvailableBufferThinkTime; 
  const dvar_t *v3; 
  int v4; 
  NetBurst *burstState; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v7; 
  SvPersistentGlobalsMP *v8; 
  const dvar_t *v9; 
  int v10; 
  int v11; 
  int v12; 
  SvPersistentGlobalsMP *v13; 
  const dvar_t *v14; 
  int time; 
  int integer; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  bool v25; 
  int m_windowMinimum; 
  int m_windowMaximum; 
  int v28; 
  int cmdTargetError; 
  int v30; 
  int v31; 
  bool v32; 
  int v33; 
  bool v34; 
  int cmdCurrentError; 
  int v36; 
  int MpClientIndex; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  __int64 v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int frameThinkTime; 
  int v53; 

  AvailableBufferThinkTime = SV_ClientMP_GetAvailableBufferThinkTime(cl);
  v3 = DVARINT_command_burst_window_method;
  v4 = AvailableBufferThinkTime;
  if ( !DVARINT_command_burst_window_method && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_burst_window_method") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5694, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
      __debugbreak();
    if ( !Com_UseConstantUserCommandTime() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5695, ASSERT_TYPE_ASSERT, "( Com_UseConstantUserCommandTime() )", (const char *)&queryFormat, "Com_UseConstantUserCommandTime()") )
      __debugbreak();
    burstState = cl->burstState;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v7 = DVARINT_sv_cmdBufferOffset;
    v8 = PersistentGlobalsMP;
    if ( !DVARINT_sv_cmdBufferOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v9 = DVARINT_sv_cmdDeficitOffset;
    v10 = 0;
    v11 = 0;
    if ( v4 - v7->current.integer > 0 )
      v11 = v4 - v7->current.integer;
    if ( !DVARINT_sv_cmdDeficitOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdDeficitOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v12 = cl->cumulThinkError + cl->cumulExtrapError - v9->current.integer;
    v13 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    if ( v12 > 0 )
      v10 = v12;
    v14 = DVARINT_sv_cmdMaxBufferTime;
    time = v13->time;
    v48 = v11 - v10;
    v47 = time;
    if ( !DVARINT_sv_cmdMaxBufferTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxBufferTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    integer = v14->current.integer;
    v17 = DVARINT_sv_cmdStartSurplus;
    v49 = integer;
    if ( !DVARINT_sv_cmdStartSurplus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdStartSurplus") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.integer;
    v19 = DVARINT_sv_cmdStartDeficit;
    v50 = v18;
    if ( !DVARINT_sv_cmdStartDeficit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdStartDeficit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.integer;
    v21 = DVARINT_sv_cmdMaxBufferWindow;
    v51 = v20;
    if ( !DVARINT_sv_cmdMaxBufferWindow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxBufferWindow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = v21->current.integer;
    v23 = DVARINT_command_burst_window_method;
    v53 = v22;
    frameThinkTime = v8->frameThinkTime;
    if ( !DVARINT_command_burst_window_method && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_burst_window_method") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    switch ( v23->current.integer )
    {
      case 1:
        v34 = burstState->Update(burstState, (const NetBurst::UpdateParams *)&v47);
        cmdCurrentError = cl->cmdCurrentError;
        if ( v34 )
        {
          cmdTargetError = cmdCurrentError - burstState->m_windowMinimum;
        }
        else
        {
          cmdTargetError = cmdCurrentError - v48;
          if ( cl->cmdTargetError > cmdTargetError )
            cmdTargetError = cl->cmdTargetError;
        }
        break;
      case 2:
        v32 = burstState->Update(burstState, (const NetBurst::UpdateParams *)&v47);
        v33 = cl->cmdCurrentError;
        if ( v32 )
        {
          cmdTargetError = v33 - burstState->m_windowMaximum;
        }
        else
        {
          cmdTargetError = v33 - v48;
          if ( cl->cmdTargetError < cmdTargetError )
            cmdTargetError = cl->cmdTargetError;
        }
        break;
      case 3:
        v25 = burstState->Update(burstState, (const NetBurst::UpdateParams *)&v47);
        m_windowMinimum = burstState->m_windowMinimum;
        if ( v25 )
        {
          m_windowMaximum = burstState->m_windowMaximum;
          v28 = m_windowMinimum + Dvar_GetInt_Internal_DebugName(DVARINT_sv_cmdTargetExtrapTime, "sv_cmdTargetExtrapTime");
          if ( m_windowMaximum < v28 )
            v28 = m_windowMaximum;
          cmdTargetError = cl->cmdCurrentError - v28;
        }
        else
        {
          v30 = v48;
          v31 = m_windowMinimum + Dvar_GetInt_Internal_DebugName(DVARINT_sv_cmdTargetExtrapTime, "sv_cmdTargetExtrapTime");
          if ( v30 < v31 )
            v31 = v30;
          cmdTargetError = cl->cmdCurrentError - v31;
          if ( cl->cmdTargetError < cmdTargetError )
            cmdTargetError = cl->cmdTargetError;
        }
        break;
      default:
        v24 = DVARINT_command_burst_window_method;
        if ( !DVARINT_command_burst_window_method && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_burst_window_method") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        LODWORD(v46) = v24->current.integer;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5766, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown bust window throttle method %d", v46) )
          __debugbreak();
        goto LABEL_63;
    }
    cl->cmdTargetError = cmdTargetError;
LABEL_63:
    v36 = burstState->m_windowMaximum - burstState->m_windowMinimum;
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    SV_ClientNetPerf_AddBurstUserCommandForClient(MpClientIndex, v36);
    goto LABEL_75;
  }
  v38 = DVARINT_sv_cmdBufferOffset;
  if ( !DVARINT_sv_cmdBufferOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = DVARINT_sv_cmdDeficitOffset;
  v40 = 0;
  v41 = v4 - v38->current.integer;
  v42 = 0;
  if ( v41 > 0 )
    v42 = v41;
  if ( !DVARINT_sv_cmdDeficitOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdDeficitOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( cl->cumulThinkError + cl->cumulExtrapError - v39->current.integer > 0 )
    v40 = cl->cumulThinkError + cl->cumulExtrapError - v39->current.integer;
  v43 = v42 - v40;
  cl->cmdTargetError = cl->cmdCurrentError - v43;
  v44 = SV_Client_GetMpClientIndex(cl);
  SV_ClientNetPerf_AddBurstUserCommandForClient(v44, abs32(v43));
LABEL_75:
  v45 = SV_Client_GetMpClientIndex(cl);
  SV_ClientNetPerf_AddBufferedUserCommandForClient(v45, v4);
}

/*
==============
SV_ClientMP_UpdateCommandExtrapTime
==============
*/
void SV_ClientMP_UpdateCommandExtrapTime(SvClientMP *cl)
{
  const dvar_t *v2; 
  unsigned int v3; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  signed __int64 v5; 
  int v6; 
  SvPersistentGlobalsMP *v7; 
  char *name; 
  signed __int64 v9; 
  int v10; 
  int v11; 
  SvPersistentGlobalsMP *v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  int outPredictTime[4]; 
  usercmd_s outPredictCmd; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5599, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = DVARBOOL_command_extrapolation_enabled;
  if ( !DVARBOOL_command_extrapolation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_extrapolation_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    goto LABEL_11;
  v3 = 0;
  if ( cl->cumulThinkError < (int)SV_ClientMP_GetMaxExtrapTime(cl) )
  {
    if ( cl->lastCmdPredicted )
    {
      cl->lastCmdPredicted = 0;
      PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      Com_Printf(15, "UpdateCommandExtrapTime -- %s stopped exceeding maximum extrapolation time at server time %d.\n", cl->name, (unsigned int)PersistentGlobalsMP->time);
    }
LABEL_11:
    cl->cumulExtrapError = 0;
    return;
  }
  if ( cl->cumulThinkError > (int)SV_ClientMP_GetMaxExtrapTime(cl) )
  {
    while ( SV_ClientMP_PredictCommand(cl, outPredictTime, &outPredictCmd) )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v5 = ((char *)cl - (char *)SvClient::GetCommonClient(0)) / 379488;
      if ( (unsigned int)v5 >= 0xC8 )
      {
        LODWORD(v15) = 200;
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      SV_ClientNetPerf_AddDroppedCommandForClient(v5, 1);
      if ( cl->lastCmdPredicted )
      {
        name = cl->name;
      }
      else
      {
        cl->lastCmdPredicted = 1;
        v6 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time - cl->lastPacketTime;
        v7 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
        name = cl->name;
        LODWORD(v14) = outPredictTime[0];
        LODWORD(fmt) = v6;
        Com_Printf(15, "UpdateCommandExtrapTime -- %s Exceeded maximum extrapolation time at server time %d. Last packet was %d ms ago. Processing predicted command (think time:%d)\n", cl->name, (unsigned int)v7->time, fmt, v14);
      }
      if ( v3 >= 6 )
      {
        Com_Printf(15, "UpdateCommandExtrapTime -- %s Exceeded the maximum number of command workers. Stalling for outstanding workers.\n", name);
        SV_UserMoveWorkersMP_FinishClientThinkCmds();
        SV_MainMP_ProcessUserMoveOutput(0);
        v3 = 0;
      }
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v9 = ((char *)cl - (char *)SvClient::GetCommonClient(0)) / 379488;
      if ( (unsigned int)v9 >= 0xC8 )
      {
        LODWORD(v15) = 200;
        LODWORD(v14) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !SV_UserMoveWorkersMP_TryQueueClientThinkCmd(v9, &outPredictCmd) )
        SV_ClientMP_Think(cl, &outPredictCmd);
      ++cl->cumulCmdCount;
      ++v3;
      if ( cl->cumulThinkError <= (int)SV_ClientMP_GetMaxExtrapTime(cl) )
        return;
    }
    if ( !cl->lastCmdPredicted )
    {
      cl->lastCmdPredicted = 1;
      v10 = cl->cumulThinkError - SV_ClientMP_GetMaxExtrapTime(cl);
      v11 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time - cl->lastPacketTime;
      v12 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      LODWORD(v14) = v10;
      LODWORD(fmt) = v11;
      Com_Printf(15, "UpdateCommandExtrapTime -- %s Exceeded maximum extrapolation time at server time %d. Last packet was %d ms ago. Dropping extrapolation (this will cause clients to have discontinuous movement. dropped time:%d)\n", cl->name, (unsigned int)v12->time, fmt, v14);
    }
    cl->cumulExtrapError += cl->cumulThinkError - SV_ClientMP_GetMaxExtrapTime(cl);
    cl->cumulThinkError = SV_ClientMP_GetMaxExtrapTime(cl);
  }
}

/*
==============
SV_ClientMP_UpdateCommandThinkTime
==============
*/
void SV_ClientMP_UpdateCommandThinkTime(SvClientMP *cl, const int nextThinkTime)
{
  const dvar_t *v4; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int cumulThinkError; 
  int v7; 
  int v8; 
  int UserCommandConstantMsec; 
  int v10; 
  int v11; 
  int MaxThinkTime; 
  SvGameModeApplication *ActiveServerApplication; 
  int v14; 
  int v15; 
  int updated; 
  const dvar_t *v17; 
  int v18; 
  int v19; 
  const dvar_t *v20; 
  const dvar_t *v23; 
  const dvar_t *v25; 
  int v27; 
  const dvar_t *v28; 
  int v30; 
  int maxCumulThinkTime; 
  int AvailableBufferThinkTime; 
  int MpClientIndex; 
  int CurrentBurstTime; 
  int v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  const dvar_t *v43; 
  int time; 
  int lastBurstTime; 
  int v46; 
  const dvar_t *v47; 
  unsigned __int64 v48; 
  int v49; 
  __int64 v50; 
  __int64 v51; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5862, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_ClientMP_UpdateCommandThinkTime");
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5816, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v4 = DVARBOOL_command_buffering_enabled;
  if ( !DVARBOOL_command_buffering_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_buffering_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && cl->testClient == TC_NONE && SV_ClientMP_IsNormalPlaying(cl) )
  {
    if ( Com_UseConstantUserCommandTime() )
    {
      PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
      cumulThinkError = cl->cumulThinkError;
      v7 = cumulThinkError + PersistentGlobalsMP->frameThinkTime - cl->cumulThinkTime;
      v8 = 0;
      if ( v7 > 0 )
        v8 = v7;
      cl->cumulThinkError = v8;
      if ( !v8 )
      {
        UserCommandConstantMsec = Com_GetUserCommandConstantMsec();
        if ( cumulThinkError )
        {
          v10 = cumulThinkError / UserCommandConstantMsec;
          v11 = 20;
          if ( v10 < 20 )
            v11 = v10;
          ++cl->cmdExtrapolationCmdLengthHistogram[v11];
        }
        else
        {
          ++cl->cmdExtrapolationCmdLengthHistogram[0];
        }
      }
      SV_ClientMP_UpdateCommandExtrapTime(cl);
      SV_ClientMP_UpdateCommandBufferError(cl);
      SV_ClientMP_PrintComandBufferDebug(cl);
      MaxThinkTime = SV_ClientMP_GetMaxThinkTime(cl, nextThinkTime);
      if ( nextThinkTime + cl->cumulThinkError < MaxThinkTime )
        MaxThinkTime = nextThinkTime + cl->cumulThinkError;
      cl->maxCumulThinkTime = MaxThinkTime;
      goto LABEL_68;
    }
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    v14 = SvGameModeApplication::GetFrameDuration(ActiveServerApplication) - cl->recvThinkTime + cl->cumulBufferError;
    v15 = 0;
    if ( v14 > 0 )
      v15 = v14;
    cl->cumulBufferError = v15;
    updated = SV_ClientMP_UpdateBufferBurstTime(cl, v15);
    if ( cl->startBufferBurstTime < cl->targetBufferBurstTime )
    {
      LODWORD(v51) = cl->targetBufferBurstTime;
      LODWORD(v50) = cl->startBufferBurstTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5894, ASSERT_TYPE_ASSERT, "( cl->startBufferBurstTime ) >= ( cl->targetBufferBurstTime )", "cl->startBufferBurstTime >= cl->targetBufferBurstTime\n\t%i, %i", v50, v51) )
        __debugbreak();
    }
    SV_ClientMP_PrintComandBufferDebug(cl);
    v17 = DVARINT_sv_cmdMinBufferBurst;
    if ( !DVARINT_sv_cmdMinBufferBurst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMinBufferBurst") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( updated < v17->current.integer )
    {
      v37 = DVARINT_sv_cumulThinkTime;
      if ( !DVARINT_sv_cumulThinkTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cumulThinkTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      cl->maxCumulThinkTime = v37->current.integer;
      *(_QWORD *)&cl->cumulThinkError = 0i64;
      cl->cmdTargetError = cl->cmdCurrentError;
      cl->cumulTargetError = 0;
      goto LABEL_52;
    }
    v18 = updated - cl->cumulBufferError;
    v19 = 0;
    if ( v18 > 0 )
      v19 = v18;
    cl->cumulTargetError += SV_ClientMP_GetAvailableBufferThinkTime(cl) - v19;
    v20 = DVARFLT_sv_cmdBufferResponse;
    if ( !DVARFLT_sv_cmdBufferResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferResponse") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    _XMM8 = 0i64;
    __asm { vroundss xmm0, xmm8, xmm2, 1 }
    v23 = DVARFLT_sv_cmdBufferCumulResponse;
    if ( !DVARFLT_sv_cmdBufferCumulResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdBufferCumulResponse") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    __asm { vroundss xmm1, xmm8, xmm3, 1 }
    cl->maxCumulThinkTime = (int)*(float *)&_XMM0 + (int)*(float *)&_XMM1 + SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    v25 = DVARFLT_sv_cmdMaxCumulThinkFrac;
    if ( !DVARFLT_sv_cmdMaxCumulThinkFrac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxCumulThinkFrac") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    __asm { vroundss xmm1, xmm8, xmm3, 1 }
    v27 = (int)*(float *)&_XMM1;
    v28 = DVARFLT_sv_cmdMinCumulThinkFrac;
    if ( !DVARFLT_sv_cmdMinCumulThinkFrac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMinCumulThinkFrac") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    __asm { vroundss xmm1, xmm8, xmm3, 1 }
    v30 = (int)*(float *)&_XMM1;
    maxCumulThinkTime = cl->maxCumulThinkTime;
    if ( maxCumulThinkTime <= v27 )
    {
      if ( maxCumulThinkTime >= v30 )
        goto LABEL_52;
      cl->maxCumulThinkTime = v30;
    }
    else
    {
      cl->maxCumulThinkTime = v27;
    }
    Dvar_GetFloat_Internal_DebugName(DVARFLT_sv_cmdBufferCumulWindupScale, "sv_cmdBufferCumulWindupScale");
    __asm { vroundss xmm0, xmm8, xmm1, 1 }
    cl->cumulTargetError = (int)*(float *)&_XMM0;
LABEL_52:
    AvailableBufferThinkTime = SV_ClientMP_GetAvailableBufferThinkTime(cl);
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    SV_ClientNetPerf_AddBufferedUserCommandForClient(MpClientIndex, AvailableBufferThinkTime);
    CurrentBurstTime = SV_ClientMP_GetCurrentBurstTime(cl);
    v36 = SV_Client_GetMpClientIndex(cl);
    SV_ClientNetPerf_AddBurstUserCommandForClient(v36, CurrentBurstTime);
    goto LABEL_68;
  }
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5954, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  SV_ClientMP_ResetCommandThinkTime(cl);
  v38 = DVARBOOL_command_buffering_enabled;
  if ( !DVARBOOL_command_buffering_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_buffering_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( !v38->current.enabled && cl->testClient == TC_NONE )
  {
    v39 = SV_ClientMP_GetAvailableBufferThinkTime(cl);
    v40 = SV_Client_GetMpClientIndex(cl);
    SV_ClientNetPerf_AddBufferedUserCommandForClient(v40, v39);
    v41 = SV_ClientMP_GetAvailableBufferThinkTime(cl);
    v42 = SV_Client_GetMpClientIndex(cl);
    SV_ClientNetPerf_AddBurstUserCommandForClient(v42, v41);
  }
LABEL_68:
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 5248, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v43 = DVARINT_sv_cumulThinkTime;
  if ( !DVARINT_sv_cumulThinkTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cumulThinkTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( cl->recvThinkTime > v43->current.integer )
  {
    time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    lastBurstTime = cl->lastBurstTime;
    if ( lastBurstTime )
    {
      v46 = time - lastBurstTime - cl->recvThinkTime;
      v47 = DVARINT_command_burst_histogram_range;
      if ( !DVARINT_command_burst_histogram_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_burst_histogram_range") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      v48 = v47->current.integer / 0x3Cui64;
      if ( (int)v48 > 0 )
      {
        v49 = I_clamp(v46 / (int)v48, 0, 59);
        ++cl->cmdBurstHistogram[v49];
      }
      goto LABEL_82;
    }
    if ( SV_ClientMP_IsNormalPlaying(cl) )
LABEL_82:
      cl->lastBurstTime = time;
  }
  cl->recvThinkTime = 0;
  *(_QWORD *)&cl->cumulCmdCount = 0i64;
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientMP_UpdateConnectedClientsOnRestart
==============
*/
void SV_ClientMP_UpdateConnectedClientsOnRestart(bool reconnect, bool savePersists)
{
  signed int i; 
  SvClient *CommonClient; 
  __int64 v6; 
  unsigned int gentity; 
  const char *v8; 
  base_vec3_t<int> *p_angles; 
  char dest[8]; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state >= CS_CONNECTED )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      if ( !reconnect )
        goto LABEL_13;
      v6 = 118i64;
      if ( savePersists )
        v6 = 107i64;
      Com_sprintf(dest, 8ui64, "%c", v6);
      CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, dest);
      gentity = (unsigned int)CommonClient[854].gentity;
      LOBYTE(CommonClient[1].__vftable) = 0;
      v8 = G_ClientMP_Connect(i, gentity);
      if ( !v8 )
      {
        if ( CommonClient->state == CS_ACTIVE )
          SV_ClientMP_EnterWorld((SvClientMP *)CommonClient, &CommonClient->lastUsercmd, 0);
LABEL_13:
        SV_ClientMP_ResetCommandThinkTime((SvClientMP *)CommonClient);
        SV_ClientMP_UpdateConnectivityBits(i);
        p_angles = &CommonClient[1116].lastUsercmd.angles;
        if ( !p_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.h", 95, ASSERT_TYPE_ASSERT, "( data )", (const char *)&queryFormat, "data") )
          __debugbreak();
        DebugWipe(p_angles, 0x5B20ui64);
        *(_QWORD *)p_angles->v = 0i64;
        memset_0(&p_angles->xy + 1, -1, 0x640ui64);
        p_angles[134].v[2] = -1;
        *(_QWORD *)&p_angles[137].xy.y = 0i64;
        *(_QWORD *)&p_angles[135].xy.y = 0x7FEFFFFFFFFFFFFFi64;
        *(_QWORD *)p_angles[138].v = 0i64;
        *(_QWORD *)p_angles[136].v = 0x10000000000000i64;
        *((_QWORD *)&p_angles[138].xy + 1) = 0i64;
        memset_0(&p_angles[139].xy.y, 0, 0x1200ui64);
        *(_QWORD *)&p_angles[525].xy.y = 0i64;
        *(_QWORD *)&p_angles[523].xy.y = 0x7FEFFFFFFFFFFFFFi64;
        *(_QWORD *)p_angles[526].v = 0i64;
        *(_QWORD *)p_angles[524].v = 0x10000000000000i64;
        *((_QWORD *)&p_angles[526].xy + 1) = 0i64;
        memset_0(&p_angles[527].xy.y, 0, 0x1200ui64);
        *(_QWORD *)&p_angles[913].xy.y = 0i64;
        *(_QWORD *)&p_angles[911].xy.y = 0x7FEFFFFFFFFFFFFFi64;
        *(_QWORD *)p_angles[914].v = 0i64;
        *(_QWORD *)p_angles[912].v = 0x10000000000000i64;
        *((_QWORD *)&p_angles[914].xy + 1) = 0i64;
        memset_0(&p_angles[915].xy.y, 0, 0x1200ui64);
        *(_QWORD *)&p_angles[1301].xy.y = 0i64;
        *(_QWORD *)&p_angles[1299].xy.y = 0x7FEFFFFFFFFFFFFFi64;
        *(_QWORD *)p_angles[1302].v = 0i64;
        *(_QWORD *)p_angles[1300].v = 0x10000000000000i64;
        *((_QWORD *)&p_angles[1302].xy + 1) = 0i64;
        memset_0(&p_angles[1303].xy.y, 0, 0x1200ui64);
        p_angles[1687].v[1] = 0;
        *((_BYTE *)&p_angles[1943].xy + 8) = 0;
        continue;
      }
      SV_ClientMP_DropClient((SvClientMP *)CommonClient, v8, 1);
      Com_Printf(0, "SV_MapRestart_f: dropped client %i - denied!\n", (unsigned int)i);
    }
  }
}

/*
==============
SV_ClientMP_UpdateConnectivityBits
==============
*/
void SV_ClientMP_UpdateConnectivityBits(int clientNum)
{
  clientState_t *ClientState; 
  int clientIndex; 

  ClientState = G_MainMP_GetClientState(clientNum);
  if ( ClientState->clientIndex != clientNum )
  {
    clientIndex = ClientState->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1524, ASSERT_TYPE_ASSERT, "( ( cs->clientIndex == clientNum ) )", "%s\n\t( cs->clientIndex ) = %i", "( cs->clientIndex == clientNum )", clientIndex) )
      __debugbreak();
  }
  if ( (int)SvClient::ms_clientCount > 24 )
    ClientState->voiceConnectivityBits = -1;
  else
    ClientState->voiceConnectivityBits = SV_ClientMP_GetVoiceConnectivityBits(clientNum);
}

/*
==============
SV_ClientMP_UpdatePacketRate
==============
*/
void SV_ClientMP_UpdatePacketRate(SvClientMP *cl)
{
  const char *v2; 
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3394, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( NetConnection::IsLoopback(&cl->clientConnection) )
  {
    cl->rate = 0x7FFFFFFF;
  }
  else
  {
    v2 = Info_ValueForKey(cl->userinfo, "rate");
    if ( v2 && *v2 )
    {
      cl->rate = atoi(v2);
      v3 = DCONST_DVARINT_sv_max_client_bandwidth;
      if ( !DCONST_DVARINT_sv_max_client_bandwidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_max_client_bandwidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      integer = v3->current.integer;
      v5 = DCONST_DVARINT_sv_min_client_bandwidth;
      if ( !DCONST_DVARINT_sv_min_client_bandwidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_min_client_bandwidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      cl->rate = I_clamp(cl->rate, v5->current.integer, integer);
    }
    else
    {
      v6 = DCONST_DVARINT_sv_default_client_bandwidth;
      if ( !DCONST_DVARINT_sv_default_client_bandwidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_default_client_bandwidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      cl->rate = v6->current.integer;
    }
  }
}

/*
==============
SV_ClientMP_UpdateSavedDemoClient
==============
*/
void SV_ClientMP_UpdateSavedDemoClient(SvClientMP *client)
{
  const char *v2; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3623, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v2 = Info_ValueForKey(client->userinfo, (const char *)&stru_143C9A1A4);
  Core_strcpy(client->name, 0x24ui64, v2);
  SV_ClientMP_UpdatePacketRate(client);
  SV_ClientMP_UpdateSplitscreenStateForConnection(&client->clientConnection);
}

/*
==============
SV_ClientMP_UpdateSplitscreenStateForConnection
==============
*/
void SV_ClientMP_UpdateSplitscreenStateForConnection(const NetConnection *connection)
{
  signed int v1; 
  int v3; 
  signed int v4; 
  SvClient *CommonClient; 
  SvClient *v6; 

  v1 = 0;
  v3 = 0;
  if ( !NetConnection::IsBot((NetConnection *)connection) )
  {
    v4 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v4);
        if ( CommonClient->state >= CS_CONNECTED && !SV_ClientMP_IsClientBot(v4) && NetConnection::CompareAddr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], connection) )
        {
          ++v3;
          HIDWORD(CommonClient[854].gentity) = 0;
        }
        ++v4;
      }
      while ( v4 < (int)SvClient::ms_clientCount );
      if ( v3 > 1 && (int)SvClient::ms_clientCount > 0 )
      {
        do
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          v6 = SvClient::GetCommonClient(v1);
          if ( v6->state >= CS_CONNECTED && !SV_ClientMP_IsClientBot(v1) && NetConnection::CompareAddr((NetConnection *)&v6[642].lastUsercmd.sightedClientsMask.data[6], connection) )
            HIDWORD(v6[854].gentity) = 1;
          ++v1;
        }
        while ( v1 < (int)SvClient::ms_clientCount );
      }
    }
  }
}

/*
==============
SV_ClientMP_UpdateUserInfo
==============
*/
void SV_ClientMP_UpdateUserInfo(SvClientMP *cl)
{
  NetConnection *p_clientConnection; 
  unsigned int v3; 
  const SessionData *ServerSession; 
  char *userinfo; 
  const char *v6; 
  unsigned int v7; 
  unsigned int MpClientIndex; 
  const char *v9; 
  const XUID *v10; 
  SvClient *CommonClient; 
  char *name; 
  const PartyData *PartyForSession; 
  int MemberByXUID; 
  const char *v15; 
  const char *v16; 
  const PartyData *ServerLobby; 
  const bdSecurityID *ClientPrivatePartyId; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  int v22; 
  char v23; 
  const char *v24; 
  netsrc_t NetId; 
  char *fmt; 
  __int64 v27; 
  __int64 v28; 
  XUID xuid; 
  __int64 v30; 
  XUID result; 
  BG_SynchronizedPlayerInfo playerInfo; 
  char v33; 
  char v34; 
  bool v35; 
  XNADDR outAddr; 
  char dest[24]; 
  char str[24]; 
  char buffer[176]; 

  v30 = -2i64;
  XUID::XUID(&xuid);
  bdSecurityID::bdSecurityID(&playerInfo.partyId + 1);
  XUID::XUID((XUID *)&playerInfo.platformId);
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3434, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    p_clientConnection = &cl->clientConnection;
    if ( !NetConnection::IsBot(&cl->clientConnection) )
    {
      v3 = 0;
      if ( SV_IsDemoPlaying() )
      {
        ServerSession = NULL;
      }
      else
      {
        ServerSession = SV_MainMP_GetServerSession();
        if ( !Session_IsValid(ServerSession) )
        {
          if ( (SV_Game_IsOnlineGame() || SV_Game_IsSystemLink()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3457, ASSERT_TYPE_ASSERT, "(!SV_Game_IsOnlineGame() && !SV_Game_IsSystemLink())", "%s\n\tShould have a valid session for networked play", "!SV_Game_IsOnlineGame() && !SV_Game_IsSystemLink()") )
            __debugbreak();
          goto LABEL_50;
        }
      }
      userinfo = cl->userinfo;
      v6 = Info_ValueForKey(cl->userinfo, "natType");
      v7 = atoi(v6);
      MpClientIndex = SV_Client_GetMpClientIndex(cl);
      v9 = Info_ValueForKey(cl->userinfo, "xuid");
      v10 = XUID::FromString(&result, v9);
      XUID::operator=(&xuid, v10);
      if ( XUID::IsValid(&xuid) )
      {
        BG_SynchronizedPlayerInfo_Reset((BG_SynchronizedPlayerInfo *)&playerInfo.xnaddr.addrBuff[8]);
        XUID::operator=((XUID *)&playerInfo.platformId, &xuid);
        *(_DWORD *)playerInfo.clientPlatform = v7;
        Com_Printf(131087, "Setting client %i NATTYPE to %i\n", MpClientIndex, v7);
        if ( SV_IsDemoPlaying() )
        {
          SV_DemoMP_GetStringInBuffer(buffer, 0xA9u);
          SV_DemoMP_GetStringInBuffer(dest, 0x15u);
          SV_DemoMP_GetStringInBuffer(str, 0x15u);
          XNADDR::FromString((XNADDR *)&playerInfo.xnaddr.addrBuff[8], buffer);
          StringToXNKID(str, &playerInfo.partyId + 1);
        }
        else
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(MpClientIndex);
          if ( NetConnection::GetXnaddr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], &outAddr) )
          {
            XNADDR::ToString(&outAddr, buffer);
            *(XNADDR *)((char *)&playerInfo.xnaddr + 8) = outAddr;
            name = cl->name;
          }
          else
          {
            name = cl->name;
            v15 = XUID::ToDevString(&xuid);
            Com_PrintWarning(15, "Dropping client %d (%s) with xuid %s because we failed to get their xnaddr\n", MpClientIndex, cl->name, v15);
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_transmission_error_enabled, "sv_transmission_error_enabled") )
            {
              SV_ClientMP_DropClient(cl, "EXE/TRANSMITERROR_XNADDR_FAILED", 0);
              goto LABEL_50;
            }
          }
          PartyForSession = Party_GetPartyForSession(ServerSession);
          MemberByXUID = Party_FindMemberByXUID(PartyForSession, xuid);
          if ( MemberByXUID != MpClientIndex )
          {
            if ( MemberByXUID >= 0 )
            {
              LODWORD(fmt) = MpClientIndex;
              Com_PrintError(15, "%s seems to have already been registered as clientNum %i as well as clientNum %i\n", name, (unsigned int)MemberByXUID, fmt);
            }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_transmission_error_enabled, "sv_transmission_error_enabled") )
            {
              SV_ClientMP_DropClient(cl, "EXE/TRANSMITERROR_CLIENTNUM_ALREADY_REGISTERED", 0);
              goto LABEL_50;
            }
          }
          if ( Lobby_IsInLobby() )
            v16 = Info_ValueForKey(cl->userinfo, "platUID");
          else
            v16 = "0";
          Core_strcpy(dest, 0x15ui64, v16);
          if ( MpClientIndex >= SvClient::ms_clientCount )
          {
            LODWORD(v27) = MpClientIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7801, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v27, SvClient::ms_clientCount) )
              __debugbreak();
          }
          ServerLobby = SV_MainMP_GetServerLobby();
          ClientPrivatePartyId = Party_GetClientPrivatePartyId(ServerLobby, MpClientIndex);
          XNKIDToString(ClientPrivatePartyId, str, 21);
          *(&playerInfo.partyId + 1) = *ClientPrivatePartyId;
          SV_Record_GetString(buffer);
          SV_Record_GetString(dest);
          SV_Record_GetString(str);
        }
        v19 = Info_ValueForKey(userinfo, "guest");
        LOBYTE(v3) = atoi(v19) != 0;
        v34 = v3;
        Com_Printf(131087, "Setting client %i GUEST to %i\n", MpClientIndex, v3);
        v20 = Info_ValueForKey(userinfo, "headless");
        v35 = atoi(v20) != 0;
        Com_Printf(131087, "Setting client %i HEADLESS to %i\n", MpClientIndex, v35);
        *(_QWORD *)&playerInfo.natType = I_atoi64(dest);
        v21 = Info_ValueForKey(userinfo, "platform");
        v22 = atoi(v21);
        v23 = v22;
        if ( (unsigned int)(v22 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum ClientPlatform __cdecl truncate_cast_impl<enum ClientPlatform,int>(int)", "signed", (char)v22, "signed", v22) )
          __debugbreak();
        v33 = v23;
        if ( (unsigned __int8)v23 >= 7u )
        {
          LODWORD(v28) = 7;
          LODWORD(v27) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3563, ASSERT_TYPE_ASSERT, "(unsigned)( serverPlayerInfo.clientPlatform ) < (unsigned)( ClientPlatform::PLATFORM_COUNT )", "serverPlayerInfo.clientPlatform doesn't index ClientPlatform::PLATFORM_COUNT\n\t%i not in [0, %i)", v27, v28) )
            __debugbreak();
        }
        Com_Printf(131087, "Setting client %i PLATFORM to %d\n", MpClientIndex, (unsigned int)v33);
        Com_Printf(131087, "Setting client %i XNADDR to %s\n", MpClientIndex, buffer);
        Com_Printf(131087, "Setting client %i PLATFORMUID to %s\n", MpClientIndex, dest);
        Com_Printf(131087, "Setting client %i XNKID to %s\n", MpClientIndex, str);
        v24 = XUID::ToDevString(&xuid);
        Com_Printf(131087, "Setting client %i XUID to %s\n", MpClientIndex, v24);
        NetId = NetConnection::GetNetId(p_clientConnection);
        Com_Printf(131087, "Setting client %i NETID to %i\n", MpClientIndex, (unsigned int)NetId);
        *(_DWORD *)&playerInfo.pauseStatusChanged = NetId;
        if ( !buffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3581, ASSERT_TYPE_ASSERT, "(xnaddrString[0])", (const char *)&queryFormat, "xnaddrString[0]") )
          __debugbreak();
        if ( !str[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3582, ASSERT_TYPE_ASSERT, "(partyIdString[0])", (const char *)&queryFormat, "partyIdString[0]") )
          __debugbreak();
        SV_Live_SetPlayerInfo(MpClientIndex, (const BG_SynchronizedPlayerInfo *)&playerInfo.xnaddr.addrBuff[8]);
      }
      else
      {
        SV_Live_ClearPlayerInfo(MpClientIndex);
        Com_Printf(15, "Player '%s' logged out of Xbox Live\n", cl->name);
        if ( !SV_IsDemoPlaying() )
          SV_Live_RemoveClient(MpClientIndex, (const char *)&queryFormat.fmt + 3, 0, NET_CLOSE_SOFT);
      }
    }
  }
LABEL_50:
  bdSecurityID::~bdSecurityID(&playerInfo.partyId + 1);
}

/*
==============
SV_ClientMP_UserInfoChanged
==============
*/
void SV_ClientMP_UserInfoChanged(SvClientMP *cl)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3604, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v2 = Info_ValueForKey(cl->userinfo, (const char *)&stru_143C9A1A4);
  Core_strcpy(cl->name, 0x24ui64, v2);
  v3 = Info_ValueForKey(cl->userinfo, "platform");
  cl->platform[0] = atoi(v3);
  v4 = Info_ValueForKey(cl->userinfo, "subplatform");
  cl->subPlatform = atoi(v4);
  v5 = Info_ValueForKey(cl->userinfo, "gore");
  cl->allowDismemberment = atoi(v5) != 0;
  SV_ClientMP_UpdatePacketRate(cl);
  SV_ClientMP_UpdateUserInfo(cl);
}

/*
==============
SV_ClientMP_UserMove
==============
*/
char SV_ClientMP_UserMove(SvClientMP *cl, msg_t *msg, int delta)
{
  SvClientMP *v3; 
  int messageAcknowledge; 
  int reliableSequence; 
  int reliableAcknowledge; 
  char result; 
  const CmdPredict *v10; 
  int Byte; 
  int v12; 
  int Long; 
  unsigned __int8 *v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  unsigned int v50; 
  unsigned __int64 v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  int v55; 
  int v56; 
  char *v57; 
  int v58; 
  char *i; 
  int v60; 
  unsigned int v61; 
  __int64 v62; 
  unsigned int v63; 
  usercmd_s *p_outCmd; 
  CmdPredict *v65; 
  usercmd_s *v66; 
  usercmd_s *v67; 
  unsigned int v68; 
  unsigned __int8 *v69; 
  __int64 v70; 
  unsigned __int64 v71; 
  __int64 v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned __int8 *v78; 
  __int64 v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  __int64 v107; 
  unsigned int v108; 
  unsigned int v109; 
  int UserCommandTime; 
  CmdPredict *v111; 
  usercmd_s *p_lastRecvCommand; 
  __int64 v113; 
  __int128 v114; 
  unsigned __int64 buttons; 
  char v116; 
  SvClientConnectionState state; 
  int beginCmdIndex; 
  const usercmd_s *p_lastUsercmd; 
  int v120; 
  int v121; 
  const usercmd_s *v122; 
  const usercmd_s *v123; 
  int v124; 
  int v125; 
  int v126; 
  const usercmd_s *v127; 
  int v128; 
  int v129; 
  int v130; 
  unsigned int v131; 
  unsigned int v132; 
  const dvar_t *v133; 
  usercmd_s *v134; 
  const usercmd_s *v135; 
  __int64 v136; 
  __int128 v137; 
  bool v138; 
  int MpClientIndex; 
  int v140; 
  CmdPredict *v141; 
  usercmd_s *v142; 
  __int64 v143; 
  __int128 v144; 
  int v145; 
  int v146; 
  int v147; 
  const dvar_t *v148; 
  char *fmt; 
  __int64 v150; 
  __int64 v151; 
  char v152; 
  int outPredict; 
  CmdPredict *outPredicta; 
  char *outStrBuf; 
  int v156; 
  SvClientMP *v157; 
  msg_t *msga; 
  CmdPredict *cmdPredict; 
  usercmd_s outCmd; 
  CmdPredict v161; 
  char v162; 
  usercmd_s to[32]; 
  char dest[1024]; 

  v3 = cl;
  v157 = cl;
  msga = msg;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6515, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v152 = 0;
  memset_0(&v161, 0, 0x78ui64);
  cmdPredict = (CmdPredict *)&v162;
  if ( delta )
    messageAcknowledge = v3->messageAcknowledge;
  else
    messageAcknowledge = -1;
  v3->deltaMessage = messageAcknowledge;
  reliableSequence = v3->reliableSequence;
  reliableAcknowledge = v3->reliableAcknowledge;
  v3->cmdNoDelta = 0;
  if ( reliableSequence - reliableAcknowledge < 512 )
  {
    v10 = &v161;
    Byte = MSG_ReadByte(msg);
    if ( SvClientMP::GetCommandDeltaBaselineForSequence(v3, Byte, &outCmd, &v161) )
    {
      v156 = MSG_ReadByte(msg);
      v12 = v156;
      if ( v156 >= 1 )
      {
        if ( v156 <= 32 )
        {
          outPredict = MSG_ReadLong(msg);
          Long = MSG_ReadLong(msg);
          v14 = (unsigned __int8 *)&outCmd.buttons + 2;
          v15 = 44i64;
          v16 = -1;
          do
          {
            v17 = *(v14 - 2);
            v18 = *v14;
            v14 += 6;
            v19 = (v16 >> 8) ^ g_crc32Table[(unsigned __int8)v16 ^ v17];
            LODWORD(v17) = g_crc32Table[(unsigned __int8)v19 ^ (unsigned __int64)*(v14 - 7)];
            v20 = (((v19 >> 8) ^ (unsigned int)v17) >> 8) ^ g_crc32Table[v18 ^ (unsigned __int8)(BYTE1(v19) ^ v17)];
            LODWORD(v17) = (v20 >> 8) ^ g_crc32Table[(unsigned __int8)v20 ^ (unsigned __int64)*(v14 - 5)];
            v21 = ((unsigned int)v17 >> 8) ^ g_crc32Table[(unsigned __int8)v17 ^ (unsigned __int64)*(v14 - 4)];
            v16 = (v21 >> 8) ^ g_crc32Table[(unsigned __int8)v21 ^ (unsigned __int64)*(v14 - 3)];
            --v15;
          }
          while ( v15 );
          v22 = (unsigned __int8 *)&v161.origin.x + 2;
          v23 = 2i64;
          do
          {
            v24 = (unsigned __int8)v16 ^ (unsigned __int64)*(v22 - 2);
            v25 = (((v16 >> 8) ^ g_crc32Table[v24]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v16) ^ g_crc32Table[v24]) ^ (unsigned __int64)*(v22 - 1)];
            v26 = (v25 >> 8) ^ g_crc32Table[*v22 ^ (unsigned __int64)(unsigned __int8)v25];
            v27 = (v26 >> 8) ^ g_crc32Table[(unsigned __int8)v26 ^ (unsigned __int64)v22[1]];
            v28 = (v27 >> 8) ^ g_crc32Table[(unsigned __int8)v27 ^ (unsigned __int64)v22[2]];
            v29 = (v28 >> 8) ^ g_crc32Table[(unsigned __int8)v28 ^ (unsigned __int64)v22[3]];
            v30 = (v29 >> 8) ^ g_crc32Table[(unsigned __int8)v29 ^ (unsigned __int64)v22[4]];
            v31 = (v30 >> 8) ^ g_crc32Table[(unsigned __int8)v30 ^ (unsigned __int64)v22[5]];
            v32 = (v31 >> 8) ^ g_crc32Table[(unsigned __int8)v31 ^ (unsigned __int64)v22[6]];
            v33 = (v32 >> 8) ^ g_crc32Table[(unsigned __int8)v32 ^ (unsigned __int64)v22[7]];
            v34 = (v33 >> 8) ^ g_crc32Table[(unsigned __int8)v33 ^ (unsigned __int64)v22[8]];
            v35 = (v34 >> 8) ^ g_crc32Table[(unsigned __int8)v34 ^ (unsigned __int64)v22[9]];
            v36 = g_crc32Table[(unsigned __int8)v35 ^ (unsigned __int64)v22[10]];
            v37 = (((v35 >> 8) ^ v36) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v35) ^ v36) ^ (unsigned __int64)v22[11]];
            v38 = (v37 >> 8) ^ g_crc32Table[(unsigned __int8)v37 ^ (unsigned __int64)v22[12]];
            v39 = (v38 >> 8) ^ g_crc32Table[(unsigned __int8)v38 ^ (unsigned __int64)v22[13]];
            v40 = (v39 >> 8) ^ g_crc32Table[(unsigned __int8)v39 ^ (unsigned __int64)v22[14]];
            v41 = (v40 >> 8) ^ g_crc32Table[(unsigned __int8)v40 ^ (unsigned __int64)v22[15]];
            v42 = (v41 >> 8) ^ g_crc32Table[(unsigned __int8)v41 ^ (unsigned __int64)v22[16]];
            v43 = (v42 >> 8) ^ g_crc32Table[(unsigned __int8)v42 ^ (unsigned __int64)v22[17]];
            v44 = (v43 >> 8) ^ g_crc32Table[(unsigned __int8)v43 ^ (unsigned __int64)v22[18]];
            v45 = (v44 >> 8) ^ g_crc32Table[(unsigned __int8)v44 ^ (unsigned __int64)v22[19]];
            v46 = (v45 >> 8) ^ g_crc32Table[(unsigned __int8)v45 ^ (unsigned __int64)v22[20]];
            v47 = (v46 >> 8) ^ g_crc32Table[(unsigned __int8)v46 ^ (unsigned __int64)v22[21]];
            v48 = (v47 >> 8) ^ g_crc32Table[(unsigned __int8)v47 ^ (unsigned __int64)v22[22]];
            v49 = (unsigned __int8)v48 ^ (unsigned __int64)v22[23];
            v50 = (((v48 >> 8) ^ g_crc32Table[v49]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v48) ^ g_crc32Table[v49]) ^ (unsigned __int64)v22[24]];
            v51 = v22[25];
            v22 += 30;
            v52 = (v50 >> 8) ^ g_crc32Table[(unsigned __int8)v50 ^ v51];
            v53 = (v52 >> 8) ^ g_crc32Table[(unsigned __int8)v52 ^ (unsigned __int64)*(v22 - 4)];
            v16 = (v53 >> 8) ^ g_crc32Table[(unsigned __int8)v53 ^ (unsigned __int64)*(v22 - 3)];
            --v23;
          }
          while ( v23 );
          v54 = ~v16;
          if ( Long == v54 )
          {
            v55 = v3->reliableAcknowledge & 0x1FF;
            v56 = v3->messageAcknowledge ^ fs_checksumFeed;
            if ( CircularEntryBuffer<512,131072,int,0>::GetStr(&v3->netBuf.reliableCommands, v55, (const char **)&outStrBuf) )
            {
              v57 = outStrBuf;
            }
            else
            {
              if ( !v3->reliableOverflowed && v3->reliableAcknowledge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6610, ASSERT_TYPE_ASSERT, "(cl->reliableOverflowed || (cl->reliableAcknowledge == 0))", "%s\n\t%i, %s", "cl->reliableOverflowed || (cl->reliableAcknowledge == 0)", v3->reliableAcknowledge, v3->name) )
                __debugbreak();
              v57 = (char *)&queryFormat.fmt + 3;
            }
            v58 = 0;
            for ( i = v57; *i; v58 = v60 ^ (16777619 * v58) )
            {
              if ( i - v57 >= 32 )
                break;
              v60 = (unsigned __int8)*i++;
            }
            v61 = v58 ^ v56;
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_debugMessageKey, "sv_debugMessageKey") )
            {
              v62 = -1i64;
              do
                ++v62;
              while ( v57[v62] );
              LODWORD(v151) = v55;
              LODWORD(v150) = v58;
              LODWORD(fmt) = v3->messageAcknowledge;
              Com_Printf(15, "SV_UserMove: key:%i, checksumFeed:%i, messageAcknowledge:%i, hash:%u, servercommand(%i):'%s', len:%i\n", v61, (unsigned int)fs_checksumFeed, fmt, v150, v151, v57, v62);
            }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_usercmd_print, "sv_usercmd_print") )
            {
              LODWORD(v151) = v54;
              LODWORD(v150) = outCmd.commandTime;
              LODWORD(fmt) = v3->netchan.incomingSequence;
              Com_Printf(16, "SV[%s] -- reading %d commands in packet %d from command time %d with baseline %d\n", v3->name, (unsigned int)v12, fmt, v150, v151);
            }
            if ( !SV_IsDemoPlaying() )
              MSG_UserCmd_EnableReadData();
            LODWORD(outStrBuf) = SV_Client_GetMpClientIndex(v3);
            if ( !SV_GameMP_GetEffectivePlayerstateForClientNum((int)outStrBuf) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6643, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            v63 = 0;
            p_outCmd = &outCmd;
            if ( v12 <= 0 )
            {
LABEL_65:
              v116 = 0;
            }
            else
            {
              v65 = cmdPredict;
              v66 = to;
              do
              {
                v67 = v66;
                if ( !MSG_UserCmd_ReadCommandFields(msga, v61, p_outCmd, v66) )
                {
                  Com_Printf(15, "SV_UserMove: can't read delta user cmd key %i\n", v63);
                  return 0;
                }
                if ( !MSG_UserCmd_ReadPredictedFields(msga, v61, v10, v65) )
                {
                  Com_Printf(15, "SV_UserMove: can't read delta predict key %i\n", v63);
                  return 0;
                }
                if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_usercmd_print, "sv_usercmd_print") )
                {
                  v68 = -1;
                  v69 = (unsigned __int8 *)&v66->buttons + 2;
                  v70 = 44i64;
                  do
                  {
                    v71 = *(v69 - 2);
                    v72 = *v69;
                    v69 += 6;
                    v73 = (v68 >> 8) ^ g_crc32Table[(unsigned __int8)v68 ^ v71];
                    v74 = g_crc32Table[(unsigned __int8)v73 ^ (unsigned __int64)*(v69 - 7)];
                    v75 = (((v73 >> 8) ^ v74) >> 8) ^ g_crc32Table[v72 ^ (unsigned __int8)(BYTE1(v73) ^ v74)];
                    v76 = (v75 >> 8) ^ g_crc32Table[(unsigned __int8)v75 ^ (unsigned __int64)*(v69 - 5)];
                    v77 = (v76 >> 8) ^ g_crc32Table[(unsigned __int8)v76 ^ (unsigned __int64)*(v69 - 4)];
                    v68 = (v77 >> 8) ^ g_crc32Table[(unsigned __int8)v77 ^ (unsigned __int64)*(v69 - 3)];
                    --v70;
                  }
                  while ( v70 );
                  v12 = v156;
                  v78 = (unsigned __int8 *)&v65->origin.x + 2;
                  v79 = 2i64;
                  do
                  {
                    v80 = (v68 >> 8) ^ g_crc32Table[*(v78 - 2) ^ (unsigned __int64)(unsigned __int8)v68];
                    v81 = (v80 >> 8) ^ g_crc32Table[*(v78 - 1) ^ (unsigned __int64)(unsigned __int8)v80];
                    v82 = (v81 >> 8) ^ g_crc32Table[*v78 ^ (unsigned __int64)(unsigned __int8)v81];
                    v83 = (v82 >> 8) ^ g_crc32Table[v78[1] ^ (unsigned __int64)(unsigned __int8)v82];
                    v84 = (v83 >> 8) ^ g_crc32Table[v78[2] ^ (unsigned __int64)(unsigned __int8)v83];
                    v85 = (v84 >> 8) ^ g_crc32Table[v78[3] ^ (unsigned __int64)(unsigned __int8)v84];
                    v86 = (v85 >> 8) ^ g_crc32Table[v78[4] ^ (unsigned __int64)(unsigned __int8)v85];
                    v87 = (v86 >> 8) ^ g_crc32Table[v78[5] ^ (unsigned __int64)(unsigned __int8)v86];
                    v88 = (v87 >> 8) ^ g_crc32Table[v78[6] ^ (unsigned __int64)(unsigned __int8)v87];
                    v89 = (v88 >> 8) ^ g_crc32Table[v78[7] ^ (unsigned __int64)(unsigned __int8)v88];
                    v90 = (v89 >> 8) ^ g_crc32Table[v78[8] ^ (unsigned __int64)(unsigned __int8)v89];
                    v91 = (v90 >> 8) ^ g_crc32Table[v78[9] ^ (unsigned __int64)(unsigned __int8)v90];
                    v92 = (v91 >> 8) ^ g_crc32Table[v78[10] ^ (unsigned __int64)(unsigned __int8)v91];
                    v93 = (v92 >> 8) ^ g_crc32Table[v78[11] ^ (unsigned __int64)(unsigned __int8)v92];
                    v94 = (v93 >> 8) ^ g_crc32Table[v78[12] ^ (unsigned __int64)(unsigned __int8)v93];
                    v95 = (v94 >> 8) ^ g_crc32Table[v78[13] ^ (unsigned __int64)(unsigned __int8)v94];
                    v96 = (v95 >> 8) ^ g_crc32Table[v78[14] ^ (unsigned __int64)(unsigned __int8)v95];
                    v97 = (v96 >> 8) ^ g_crc32Table[v78[15] ^ (unsigned __int64)(unsigned __int8)v96];
                    v98 = (v97 >> 8) ^ g_crc32Table[v78[16] ^ (unsigned __int64)(unsigned __int8)v97];
                    v99 = (v98 >> 8) ^ g_crc32Table[v78[17] ^ (unsigned __int64)(unsigned __int8)v98];
                    v100 = (v99 >> 8) ^ g_crc32Table[v78[18] ^ (unsigned __int64)(unsigned __int8)v99];
                    v101 = (v100 >> 8) ^ g_crc32Table[v78[19] ^ (unsigned __int64)(unsigned __int8)v100];
                    v102 = (v101 >> 8) ^ g_crc32Table[v78[20] ^ (unsigned __int64)(unsigned __int8)v101];
                    v103 = (v102 >> 8) ^ g_crc32Table[v78[21] ^ (unsigned __int64)(unsigned __int8)v102];
                    v104 = (v103 >> 8) ^ g_crc32Table[v78[22] ^ (unsigned __int64)(unsigned __int8)v103];
                    v105 = (v104 >> 8) ^ g_crc32Table[v78[23] ^ (unsigned __int64)(unsigned __int8)v104];
                    v106 = (v105 >> 8) ^ g_crc32Table[v78[24] ^ (unsigned __int64)(unsigned __int8)v105];
                    v107 = v78[25];
                    v78 += 30;
                    v108 = (v106 >> 8) ^ g_crc32Table[v107 ^ (unsigned __int8)v106];
                    v109 = (v108 >> 8) ^ g_crc32Table[*(v78 - 4) ^ (unsigned __int64)(unsigned __int8)v108];
                    v68 = (v109 >> 8) ^ g_crc32Table[*(v78 - 3) ^ (unsigned __int64)(unsigned __int8)v109];
                    --v79;
                  }
                  while ( v79 );
                  v3 = v157;
                  LODWORD(v151) = ~v68;
                  LODWORD(v150) = v66->commandTime;
                  LODWORD(fmt) = v156;
                  Com_Printf(16, "SV[%s] -- reading command[%d/%d] for time %d with checksum %d\n", v157->name, v63, fmt, v150, v151);
                }
                SV_ClientMP_ValidateUserCmd(v3, v63, v12, v66, v61);
                UserCommandTime = Com_GetUserCommandTime(v66);
                SV_UserMove_RecordPredictedOrigin(v3, UserCommandTime, v65);
                v111 = v65;
                p_outCmd = v66++;
                ++v63;
                v65 = (CmdPredict *)v10;
                v10 = v111;
              }
              while ( (int)v63 < v12 );
              if ( v12 <= 0 )
                goto LABEL_65;
              p_lastRecvCommand = &v3->lastRecvCommand;
              v113 = 2i64;
              do
              {
                v114 = *(_OWORD *)&v67->offHand.weaponAttachments[2];
                *(__m256i *)&p_lastRecvCommand->buttons = *(__m256i *)&v67->buttons;
                *(__m256i *)(&p_lastRecvCommand->angles.xy + 1) = *(__m256i *)(&v67->angles.xy + 1);
                *(__m256i *)&p_lastRecvCommand->weapon.attachmentVariationIndices[1] = *(__m256i *)&v67->weapon.attachmentVariationIndices[1];
                *(_OWORD *)&p_lastRecvCommand->offHand.weaponIdx = *(_OWORD *)&v67->offHand.weaponIdx;
                p_lastRecvCommand = (usercmd_s *)((char *)p_lastRecvCommand + 128);
                v67 = (usercmd_s *)((char *)v67 + 128);
                *(_OWORD *)&p_lastRecvCommand[-1].sightedClientsMask.data[4] = v114;
                --v113;
              }
              while ( v113 );
              buttons = v67->buttons;
              v116 = 1;
              p_lastRecvCommand->buttons = buttons;
              *(__m256i *)v3->lastRecvPredict.origin.v = *(__m256i *)v111->origin.v;
              *(_OWORD *)v3->lastRecvPredict.extrapData.packedBobCycle = *(_OWORD *)v111->extrapData.packedBobCycle;
              *(double *)v3->lastRecvPredict.vehOrigin.v = *(double *)v111->vehOrigin.v;
              v3->lastRecvPredict.vehOrigin.v[2] = v111->vehOrigin.v[2];
              v3->cmdCurrentError = outPredict;
              v152 = 1;
            }
            MSG_UserCmd_DisableReadData();
            state = v3->state;
            if ( state == CS_CLIENTLOADING )
            {
              SV_ClientMP_EnterWorld(v3, to, 1);
              state = v3->state;
            }
            if ( state == CS_ACTIVE )
            {
              beginCmdIndex = v3->beginCmdIndex;
              p_lastUsercmd = &v3->lastUsercmd;
              v120 = 0;
              v121 = Com_GetUserCommandTime(&v3->lastUsercmd);
              if ( v12 > 0 )
              {
                outPredicta = (CmdPredict *)to;
                v122 = to;
                v123 = &to[v12 - 1];
                v157 = (SvClientMP *)v123;
                do
                {
                  v124 = Com_GetUserCommandTime(v123);
                  if ( Com_GetUserCommandTime(v122) <= v124 )
                  {
                    v125 = Com_GetUserCommandTime(p_lastUsercmd);
                    if ( Com_GetUserCommandTime(v122) > v125 )
                    {
                      v126 = v3->beginCmdIndex;
                      if ( v3->currCmdIndex == v126 && beginCmdIndex != v126 )
                      {
                        LODWORD(v151) = v3->beginCmdIndex;
                        LODWORD(v150) = beginCmdIndex;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6769, ASSERT_TYPE_ASSERT, "( insertCmdIndex ) == ( cl->beginCmdIndex )", "insertCmdIndex == cl->beginCmdIndex\n\t%i, %i", v150, v151) )
                          __debugbreak();
                      }
                      while ( 1 )
                      {
                        if ( v3->currCmdIndex - beginCmdIndex < 0 )
                        {
                          LODWORD(v150) = v3->currCmdIndex - beginCmdIndex;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6777, ASSERT_TYPE_ASSERT, "( cl->currCmdIndex - insertCmdIndex ) >= ( 0 )", "cl->currCmdIndex - insertCmdIndex >= 0\n\t%i, %i", v150, 0i64) )
                            __debugbreak();
                        }
                        if ( beginCmdIndex - v3->beginCmdIndex < 0 )
                        {
                          LODWORD(v150) = beginCmdIndex - v3->beginCmdIndex;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6778, ASSERT_TYPE_ASSERT, "( insertCmdIndex - cl->beginCmdIndex ) >= ( 0 )", "insertCmdIndex - cl->beginCmdIndex >= 0\n\t%i, %i", v150, 0i64) )
                            __debugbreak();
                        }
                        v127 = &v3->cmds[beginCmdIndex % 38];
                        if ( beginCmdIndex == v3->currCmdIndex )
                          break;
                        v128 = Com_GetUserCommandTime(v122);
                        if ( Com_GetUserCommandTime(v127) <= v128 )
                        {
                          v121 = Com_GetUserCommandTime(v127);
                          ++beginCmdIndex;
                        }
                        v129 = Com_GetUserCommandTime(v122);
                        if ( Com_GetUserCommandTime(v127) >= v129 )
                        {
                          v130 = Com_GetUserCommandTime(v122);
                          if ( Com_GetUserCommandTime(v127) != v130 )
                          {
                            v131 = Com_GetUserCommandTime(v122);
                            v132 = Com_GetUserCommandTime(v127);
                            Com_PrintError(15, "Attempted to buffer out of order command, which should have been filtered out by the NetChan (buf %i vs current %i)\n", v132, v131);
                            SV_ClientNetPerf_AddDroppedCommandForClient((const int)outStrBuf, 1);
                          }
                          goto LABEL_120;
                        }
                      }
                      v3->currCmdIndex = ++beginCmdIndex;
                      if ( beginCmdIndex - v3->beginCmdIndex > 38 )
                      {
                        v133 = DVARBOOL_sv_usercmd_print;
                        if ( !DVARBOOL_sv_usercmd_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_usercmd_print") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v133);
                        if ( v133->current.enabled )
                        {
                          LODWORD(fmt) = v3->currCmdIndex;
                          Com_Printf(16, "SV[%s] -- dropped command[%d/%d].\n", v3->name, (unsigned int)v3->beginCmdIndex, fmt);
                        }
                        if ( !v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4175, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
                          __debugbreak();
                        v134 = &v3->lastUsercmd;
                        v135 = v127;
                        v136 = 2i64;
                        do
                        {
                          v134 = (usercmd_s *)((char *)v134 + 128);
                          v137 = *(_OWORD *)&v135->buttons;
                          v135 = (const usercmd_s *)((char *)v135 + 128);
                          *(_OWORD *)&v134[-1].offHand.attachmentVariationIndices[13] = v137;
                          *(_OWORD *)&v134[-1].offHand.weaponCamo = *(_OWORD *)&v135[-1].offHand.weaponCamo;
                          *(_OWORD *)v134[-1].remoteControlMove = *(_OWORD *)v135[-1].remoteControlMove;
                          *(_OWORD *)v134[-1].vehAngles = *(_OWORD *)v135[-1].vehAngles;
                          *(_OWORD *)&v134[-1].vehOrgZ = *(_OWORD *)&v135[-1].vehOrgZ;
                          *(_OWORD *)&v134[-1].gunYOfs = *(_OWORD *)&v135[-1].gunYOfs;
                          *(_OWORD *)v134[-1].sightedClientsMask.data = *(_OWORD *)v135[-1].sightedClientsMask.data;
                          *(_OWORD *)&v134[-1].sightedClientsMask.data[4] = *(_OWORD *)&v135[-1].sightedClientsMask.data[4];
                          --v136;
                        }
                        while ( v136 );
                        v138 = v3->state == CS_ACTIVE;
                        v134->buttons = v135->buttons;
                        if ( v138 )
                        {
                          GStatic::SetActiveStatics();
                          MpClientIndex = SV_Client_GetMpClientIndex(v3);
                          G_ActiveMP_ClientDropThink(MpClientIndex, v127);
                          GStatic::ClearActiveStatics();
                        }
                        v140 = v3->currCmdIndex - 38;
                        SV_ClientNetPerf_AddDroppedCommandForClient((const int)outStrBuf, v140 - v3->beginCmdIndex);
                        v3->beginCmdIndex = v140;
                      }
                      v141 = outPredicta;
                      v142 = (usercmd_s *)v127;
                      v143 = 2i64;
                      do
                      {
                        v142 = (usercmd_s *)((char *)v142 + 128);
                        v144 = *(_OWORD *)v141->origin.v;
                        v141 = (CmdPredict *)((char *)v141 + 128);
                        *(_OWORD *)&v142[-1].offHand.attachmentVariationIndices[13] = v144;
                        *(_OWORD *)&v142[-1].offHand.weaponCamo = *(_OWORD *)&v141[-2].origin.z;
                        *(_OWORD *)v142[-1].remoteControlMove = *(_OWORD *)&v141[-2].extrapData.time;
                        *(_OWORD *)v142[-1].vehAngles = *(_OWORD *)&v141[-2].vehActive;
                        *(_OWORD *)&v142[-1].vehOrgZ = *(_OWORD *)&v141[-2].vehOrigin.z;
                        *(_OWORD *)&v142[-1].gunYOfs = *(_OWORD *)v141[-1].extrapData.offset.v;
                        *(_OWORD *)v142[-1].sightedClientsMask.data = *(_OWORD *)&v141[-1].extrapData.inputTime;
                        *(_OWORD *)&v142[-1].sightedClientsMask.data[4] = *(_OWORD *)&v141[-1].vehTarget;
                        --v143;
                      }
                      while ( v143 );
                      v142->buttons = *(_QWORD *)v141->origin.v;
                      if ( v121 )
                      {
                        v145 = Com_GetUserCommandTime(v127) - v121;
                        v146 = 0;
                        if ( v145 > 0 )
                          v146 = v145;
                      }
                      else
                      {
                        v146 = 0;
                      }
                      v3->recvThinkTime += v146;
                      v147 = Com_GetUserCommandTime(v127);
                      ++v3->recvCmdCount;
                      v121 = v147;
                      v148 = DVARBOOL_sv_usercmd_print;
                      if ( !DVARBOOL_sv_usercmd_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_usercmd_print") )
                        __debugbreak();
                      Dvar_CheckFrontendServerThread(v148);
                      if ( v148->current.enabled )
                      {
                        LODWORD(v150) = v3->recvCmdCount;
                        LODWORD(fmt) = 38;
                        Com_Printf(16, "SV[%s] -- buffering command[%d/%d]. cmdCount %d\n", v3->name, (unsigned int)(v3->currCmdIndex - v3->beginCmdIndex), fmt, v150);
                      }
                      SV_ClientNetPerf_AddReceivedUserCommandForClient((const int)outStrBuf, v146);
LABEL_120:
                      p_lastUsercmd = &v3->lastUsercmd;
                    }
                    else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_usercmd_print, "sv_usercmd_print") )
                    {
                      LODWORD(fmt) = v12;
                      Com_Printf(16, "SV[%s] -- skipping command[%d/%d] due to user cmd time\n", v3->name, (unsigned int)v120, fmt);
                    }
                  }
                  else
                  {
                    beginCmdIndex = v3->currCmdIndex;
                    v3->beginCmdIndex = beginCmdIndex;
                  }
                  outPredicta = (CmdPredict *)((char *)outPredicta + 264);
                  ++v120;
                  v123 = (const usercmd_s *)v157;
                  ++v122;
                }
                while ( v120 < v12 );
              }
              if ( v3->currCmdIndex - v3->beginCmdIndex > 38 )
              {
                LODWORD(v151) = 38;
                LODWORD(v150) = v3->currCmdIndex - v3->beginCmdIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6865, ASSERT_TYPE_ASSERT, "( cl->currCmdIndex - cl->beginCmdIndex ) <= ( MAX_CLIENT_BUFFER_CMDS )", "cl->currCmdIndex - cl->beginCmdIndex <= MAX_CLIENT_BUFFER_CMDS\n\t%i, %i", v150, v151) )
                  __debugbreak();
              }
              return v152;
            }
            else
            {
              v3->deltaMessage = -1;
              return v116;
            }
          }
          else
          {
            Com_sprintf(dest, 0x400ui64, "checksumfailed%d", (unsigned int)(v3->netchan.incomingSequence - Byte));
            LODWORD(v150) = v54;
            LODWORD(fmt) = Byte;
            Com_PrintError(15, "SV_UserMove: %s failed reading baseline command for sequence %d(%d) with checksum %d != %d\n", v3->name, (unsigned int)(v3->netchan.incomingSequence - Byte), fmt, v150, Long);
            MSG_UserCmd_PrintCommandFields(&outCmd);
            MSG_UserCmd_PrintPredictedFields(&v161);
            SV_ClientMP_DropClient(v3, dest, 1);
            return 0;
          }
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6565, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "cmdCount > MAX_PACKET_USERCMDS") )
            __debugbreak();
          Com_Printf(15, "SV_UserMove: cmdCount > MAX_PACKET_USERCMDS\n");
          return 0;
        }
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6554, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "cmdCount < 1") )
          __debugbreak();
        Com_Printf(15, "SV_UserMove: cmdCount < 1\n");
        return 0;
      }
    }
    else
    {
      Com_Printf(15, "SV_UserMove: could not find valid delta command\n");
      result = 0;
      v3->cmdNoDelta = 1;
    }
  }
  else
  {
    LODWORD(v150) = reliableSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6539, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "cl->reliableSequence is %i, cl->reliableAcknowledge is %i for %s", v150, reliableAcknowledge, v3->name) )
      __debugbreak();
    return 0;
  }
  return result;
}

/*
==============
SV_ClientMP_ValidateUserCmd
==============
*/
void SV_ClientMP_ValidateUserCmd(SvClientMP *cl, int cmdIndex, int cmdCount, const usercmd_s *cmd, int key)
{
  unsigned int MpClientIndex; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  double v11; 
  double v14; 
  double v16; 
  unsigned int v18; 
  char *v19; 
  unsigned int v20; 
  char *v21; 
  unsigned int v22; 
  char *i; 
  int v24; 
  int v25; 
  char *outStrBuf; 

  if ( !BG_ValidateWeaponNumber(&cmd->weapon) || !BG_ValidateWeaponNumber(&cmd->offHand) )
  {
    Com_Printf(15, "###!#!#!#!#!#!#!#!#!#!#!#!#!#!#!#!###\n");
    Com_Printf(15, "Encountered corrupt user command. This means the client's write key and the server read key for the net message were different\n");
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    Com_Printf(15, "Problem occured with client #%i:'%s'\n", MpClientIndex, cl->name);
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    Com_Printf(15, "Server game time: %i\n", (unsigned int)PersistentGlobalsMP->time);
    Com_Printf(15, "---- Corrupt user command data:\n");
    Com_Printf(15, "Command was %i of %i in the packet.\n", (unsigned int)cmdIndex, (unsigned int)cmdCount);
    Com_Printf(15, "commandTime = %i\n", (unsigned int)cmd->commandTime);
    Com_Printf(15, "serverTime = %i\n", (unsigned int)cmd->serverTime);
    Com_Printf(15, "inputTime = %i\n", (unsigned int)cmd->inputTime);
    v11 = MSG_UnpackSignedFloat(cmd->angles.v[0], 180.0, 0x14u);
    _XMM10 = 0i64;
    __asm { vroundss xmm2, xmm10, xmm1, 1 }
    Com_Printf(15, "angles[0] = %i(%f)\n", (unsigned int)cmd->angles.v[0], (float)((float)((float)(*(float *)&v11 * 0.0027777778) - *(float *)&_XMM2) * 360.0));
    v14 = MSG_UnpackSignedFloat(cmd->angles.v[1], 180.0, 0x14u);
    __asm { vroundss xmm4, xmm10, xmm0, 1 }
    Com_Printf(15, "angles[1] = %i(%f)\n", (unsigned int)cmd->angles.v[1], (float)((float)((float)(*(float *)&v14 * 0.0027777778) - *(float *)&_XMM4) * 360.0));
    v16 = MSG_UnpackSignedFloat(cmd->angles.v[2], 180.0, 0x14u);
    __asm { vroundss xmm3, xmm10, xmm0, 1 }
    Com_Printf(15, "angles[2] = %i(%f)\n", (unsigned int)cmd->angles.v[2], (float)((float)((float)(*(float *)&v16 * 0.0027777778) - *(float *)&_XMM3) * 360.0));
    Com_Printf(15, "forwardmove = %i\n", (unsigned int)cmd->forwardmove);
    Com_Printf(15, "rightmove = %i\n", (unsigned int)cmd->rightmove);
    Com_Printf(15, "buttons = %zu\n", cmd->buttons);
    Com_Printf(15, "weaponidx = %i\n", cmd->weapon.weaponIdx);
    v18 = SV_Client_GetMpClientIndex(cl);
    Com_Printf(15, "---- %i Client Info\n", v18);
    if ( cl->state )
    {
      switch ( cl->state )
      {
        case CS_ZOMBIE:
          v19 = "zombie";
          break;
        case CS_CONNECTED:
          v19 = "connected";
          break;
        case CS_CLIENTLOADING:
          v19 = "clientloading";
          break;
        case CS_ACTIVE:
          v19 = "active";
          break;
        default:
          v19 = j_va("unknown(%i)", (unsigned __int8)cl->state);
          break;
      }
    }
    else
    {
      v19 = "free";
    }
    outStrBuf = v19;
    Com_Printf(15, "state: %s\n", v19);
    Com_Printf(15, "userinfo: '%s'\n", cl->userinfo);
    Com_Printf(15, "reliableSequence: %i\n", (unsigned int)cl->reliableSequence);
    Com_Printf(15, "reliableAcknowledge: %i\n", (unsigned int)cl->reliableAcknowledge);
    Com_Printf(15, "reliableSent: %i\n", (unsigned int)cl->reliableSent);
    Com_Printf(15, "reliableOverflowed: %i\n", cl->reliableOverflowed);
    Com_Printf(15, "messageAcknowledge: %i\n", (unsigned int)cl->messageAcknowledge);
    Com_Printf(15, "gamestateMessageNum: %i\n", (unsigned int)cl->gamestateMessageNum);
    Com_Printf(15, "challenge: %i\n", (unsigned int)cl->challenge);
    Com_Printf(15, "lastClientCommand: %i\n", (unsigned int)cl->lastClientCommand);
    Com_Printf(15, "deltaMessage: %i\n", (unsigned int)cl->deltaMessage);
    Com_Printf(15, "lastPacketTime: %i\n", (unsigned int)cl->lastPacketTime);
    Com_Printf(15, "lastConnectTime: %i\n", (unsigned int)cl->lastConnectTime);
    Com_Printf(15, "nextSnapshotTime: %i\n", (unsigned int)cl->nextSnapshotTime);
    Com_Printf(15, "rateDelayed: %i\n", (unsigned int)cl->rateDelayed);
    Com_Printf(15, "timeoutCount: %i\n", (unsigned int)cl->timeoutCount);
    Com_Printf(15, "ping: %i\n", (unsigned int)cl->ping);
    Com_Printf(15, "rate: %i\n", (unsigned int)cl->rate);
    Com_Printf(15, "pureAuthentic: %i\n", (unsigned int)cl->pureAuthentic);
    Com_Printf(15, "---- Misc Messaging Info\n");
    Com_Printf(15, "fs_checksumFeed: %i\n", (unsigned int)fs_checksumFeed);
    Com_Printf(15, "cl->messageAcknowledge: %i\n", (unsigned int)cl->messageAcknowledge);
    Com_Printf(15, "cl->largeCommandSequence: %i\n", (unsigned int)cl->largeCommandSequence);
    v20 = cl->reliableAcknowledge & 0x1FF;
    Com_Printf(15, "reliableIndex: %i\n", v20);
    if ( CircularEntryBuffer<512,131072,int,0>::GetStr(&cl->netBuf.reliableCommands, v20, (const char **)&outStrBuf) )
    {
      v21 = outStrBuf;
      Com_Printf(15, "reliableIndex cmd: '%s'\n", outStrBuf);
    }
    else
    {
      Com_Printf(15, "reliableIndex cmd: '<not found>'\n");
      v21 = (char *)&queryFormat.fmt + 3;
    }
    v22 = 0;
    for ( i = v21; *v21; v22 = v24 ^ (16777619 * v22) )
    {
      if ( v21 - i >= 32 )
        break;
      v24 = (unsigned __int8)*v21++;
    }
    Com_Printf(15, "Com_FNV32Hash(reliableIndex cmd: %i\n", v22);
    Com_Printf(15, "key = fs_checksumFeed: %i\n", (unsigned int)fs_checksumFeed);
    Com_Printf(15, "key ^= cl->messageAcknowledge: %i\n", (unsigned int)fs_checksumFeed ^ cl->messageAcknowledge);
    Com_Printf(15, "key ^= Com_FNV32HashStringWithLimit(cl->netBuf.reliableCommandInfo[cl->reliableAcknowledge&(MAX_RELIABLE_COMMANDS_MP-1)].cmd,32): %i\n", fs_checksumFeed ^ cl->messageAcknowledge ^ v22);
    v25 = key;
    Com_Printf(15, "key: %i\n", (unsigned int)key);
    Com_Printf(15, "key ^= cmd->commandTime: %i\n", cmd->commandTime ^ (unsigned int)v25);
    Com_Printf(15, "key ^= cmd->serverTime: %i\n", (unsigned int)v25 ^ cmd->serverTime);
    Com_Printf(15, "########################################\n");
    SV_ClientMP_DropClient(cl, &byte_1440DCFC8, 1);
  }
}

/*
==============
SV_ClientMP_WriteClientMatchData
==============
*/
void SV_ClientMP_WriteClientMatchData(SvClientMP *cl, const SvClientConnectionState connState, const int serverTime, msg_t *msg)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3698, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && connState == CS_ACTIVE && serverTime - cl->matchDataSendTime >= 1000 )
  {
    cl->matchDataSendTime = serverTime;
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    MSG_WriteBits(msg, 6i64, 4u);
    MSG_WriteString(msg, SvGameGlobalsMP->clientMatchData.def);
    MSG_WriteData(msg, SvGameGlobalsMP->clientMatchData.data, 24000);
  }
}

/*
==============
SV_ClientMP_WriteCodcasterClientMatchData
==============
*/
void SV_ClientMP_WriteCodcasterClientMatchData(SvClientMP *cl, const SvClientConnectionState connState, const int serverTime, msg_t *msg)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3651, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && connState == CS_ACTIVE && serverTime - cl->codcasterClientMatchDataSendTime >= 1000 )
  {
    cl->codcasterClientMatchDataSendTime = serverTime;
    SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
    MSG_WriteBits(msg, 7i64, 4u);
    MSG_WriteString(msg, SvGameGlobalsMP->codcasterClientMatchData.def);
    MSG_WriteData(msg, SvGameGlobalsMP->codcasterClientMatchData.data, 1614);
  }
}

/*
==============
SV_ClientMP_WriteDemoGamestate
==============
*/
void SV_ClientMP_WriteDemoGamestate(const SvClientMP *client, msg_t *msg)
{
  unsigned int MpClientIndex; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3001, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  SV_SendClientGameStateInternal(client, msg);
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  Com_Printf(131087, "[DEMO] Sending %i bytes in gamestate to client: %i\n", (unsigned int)msg->cursize, MpClientIndex);
}

/*
==============
SV_CountClients
==============
*/
__int64 SV_CountClients()
{
  unsigned int v0; 
  signed int i; 
  SvClient *CommonClient; 
  unsigned int v3; 

  v0 = 0;
  for ( i = 0; i < (int)SvClient::ms_clientCount; v0 = v3 )
  {
    CommonClient = SvClient::GetCommonClient(i);
    v3 = v0 + 1;
    if ( CommonClient->state < CS_ACTIVE )
      v3 = v0;
    ++i;
  }
  return v0;
}

/*
==============
SV_CountRealClients
==============
*/
__int64 SV_CountRealClients()
{
  unsigned int v0; 
  unsigned int i; 
  unsigned int v2; 

  v0 = 0;
  for ( i = 0; i < SvClient::ms_clientCount; ++i )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !LODWORD(SvClient::GetCommonClient(i)[855].__vftable) && SvClient::GetCommonClient(i)->state >= CS_ACTIVE )
    {
      if ( SV_ClientMP_IsClientBot(i) || (v2 = 0, !i) )
      {
LABEL_13:
        ++v0;
      }
      else
      {
        while ( SvClient::GetCommonClient(v2)->state < CS_ACTIVE || !SV_HaveSameNetworkAddress(v2, i) || SV_ClientMP_IsClientBot(v2) )
        {
          if ( ++v2 >= i )
            goto LABEL_13;
        }
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        if ( !HIDWORD(SvClient::GetCommonClient(v2)[854].gentity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 310, ASSERT_TYPE_ASSERT, "(SV_Client_GetMpClient( otherClientIndex )->bIsSplitscreenClient)", (const char *)&queryFormat, "SV_Client_GetMpClient( otherClientIndex )->bIsSplitscreenClient") )
          __debugbreak();
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        if ( !HIDWORD(SvClient::GetCommonClient(i)[854].gentity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 311, ASSERT_TYPE_ASSERT, "(SV_Client_GetMpClient( clientIndex )->bIsSplitscreenClient)", (const char *)&queryFormat, "SV_Client_GetMpClient( clientIndex )->bIsSplitscreenClient") )
          __debugbreak();
      }
    }
  }
  return v0;
}

/*
==============
SV_CountTestClients
==============
*/
__int64 SV_CountTestClients()
{
  unsigned int v0; 
  signed int i; 
  SvClient *CommonClient; 
  unsigned int v3; 

  v0 = 0;
  for ( i = 0; i < (int)SvClient::ms_clientCount; v0 = v3 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i);
    v3 = v0 + 1;
    if ( !LODWORD(CommonClient[855].__vftable) )
      v3 = v0;
    ++i;
  }
  return v0;
}

/*
==============
SV_GetClientRequiredStatPackets
==============
*/
unsigned __int64 SV_GetClientRequiredStatPackets(const SvClientMP *cl)
{
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 538, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  return *(_QWORD *)&SvGameGlobals::GetSvGameGlobalsCommon()[107].skelMemPos & ~cl->statPacketsReceived;
}

/*
==============
SV_GetOtherActiveSplitscreenClient
==============
*/
char SV_GetOtherActiveSplitscreenClient(const unsigned int clientIndex, int *outOtherClient)
{
  unsigned int v2; 
  unsigned int v5; 

  v2 = 0;
  *outOtherClient = 0;
  if ( SV_ClientMP_IsClientBot(clientIndex) )
    return 0;
  v5 = SvClient::ms_clientCount;
  if ( !SvClient::ms_clientCount )
    return 0;
  while ( clientIndex == v2 || SvClient::GetCommonClient(v2)->state < CS_ACTIVE || !SV_HaveSameNetworkAddress(v2, clientIndex) || SV_ClientMP_IsClientBot(v2) )
  {
    if ( ++v2 >= v5 )
      return 0;
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !HIDWORD(SvClient::GetCommonClient(v2)[854].gentity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 280, ASSERT_TYPE_ASSERT, "(SV_Client_GetMpClient( otherClientIndex )->bIsSplitscreenClient)", (const char *)&queryFormat, "SV_Client_GetMpClient( otherClientIndex )->bIsSplitscreenClient") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !HIDWORD(SvClient::GetCommonClient(clientIndex)[854].gentity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 281, ASSERT_TYPE_ASSERT, "(SV_Client_GetMpClient( clientIndex )->bIsSplitscreenClient)", (const char *)&queryFormat, "SV_Client_GetMpClient( clientIndex )->bIsSplitscreenClient") )
    __debugbreak();
  *outOtherClient = v2;
  return 1;
}

/*
==============
SV_HasAllClientStatPackets
==============
*/
_BOOL8 SV_HasAllClientStatPackets(const SvClientMP *cl)
{
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 547, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  return SV_GetClientRequiredStatPackets(cl) == 0;
}

/*
==============
SV_HaveSameNetworkAddress
==============
*/
_BOOL8 SV_HaveSameNetworkAddress(const unsigned int firstClientIndex, const unsigned int secondClientIndex)
{
  SvClient *CommonClient; 
  SvClient *v5; 
  SvClientConnectionState state; 
  SvClientConnectionState v7; 
  __int64 v9; 
  __int64 v11; 

  if ( firstClientIndex == secondClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 233, ASSERT_TYPE_ASSERT, "( firstClientIndex ) != ( secondClientIndex )", "firstClientIndex != secondClientIndex\n\t%i, %i", firstClientIndex, secondClientIndex) )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(firstClientIndex);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v5 = SvClient::GetCommonClient(secondClientIndex);
  state = CommonClient->state;
  if ( (unsigned __int8)state < CS_RECONNECTING )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = (unsigned __int8)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 237, ASSERT_TYPE_ASSERT, "( firstClient->state ) >= ( SvClientConnectionState::CS_RECONNECTING )", "firstClient->state >= SvClientConnectionState::CS_RECONNECTING\n\t%i, %i", v9, v11) )
      __debugbreak();
  }
  v7 = v5->state;
  if ( (unsigned __int8)v7 < CS_RECONNECTING )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = (unsigned __int8)v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 238, ASSERT_TYPE_ASSERT, "( secondClient->state ) >= ( SvClientConnectionState::CS_RECONNECTING )", "secondClient->state >= SvClientConnectionState::CS_RECONNECTING\n\t%i, %i", v9, v11) )
      __debugbreak();
  }
  return NetConnection::CompareAddr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], (const NetConnection *)&v5[642].lastUsercmd.sightedClientsMask.data[6]);
}

/*
==============
SV_PrivateParty_BroadcastBackout
==============
*/
void SV_PrivateParty_BroadcastBackout(const SvClientMP *const cl, const bool playAgain)
{
  unsigned int MpClientIndex; 
  const char *v5; 
  char *fmt; 
  __int64 v7; 
  char dest[64]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3205, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 3206, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(cl);
  v5 = "false";
  if ( playAgain )
    v5 = "true";
  Com_Printf(15, "SV: partybackout request received from client %i (playagain:%s)\n", MpClientIndex, v5);
  LODWORD(v7) = playAgain;
  LODWORD(fmt) = MpClientIndex;
  Com_sprintf(dest, 0x40ui64, "%c %i %i", 88i64, fmt, v7);
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, dest);
}

/*
==============
SV_SendClientGameState
==============
*/
void SV_SendClientGameState(SvClientMP *client)
{
  unsigned __int8 *m_ptr; 
  SvGameGlobals *SvGameGlobalsCommon; 
  const char *dropReason; 
  SvClientConnectionState state; 
  char *name; 
  const dvar_t *v7; 
  int cursize; 
  int reliableSequence; 
  unsigned int MpClientIndex; 
  int time; 
  int DeterministicSystemTime; 
  bool IsClientThrottled; 
  int v14; 
  int v15; 
  Mem_LargeLocal data; 
  msg_t buf; 

  Mem_LargeLocal::Mem_LargeLocal(&data, 0x243D8ui64, "max_msg_buf msgBuffer");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v15 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v15) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( client->testClient )
  {
    memset_0(client->stats, 0, 0x124FEui64);
    client->statPacketsReceived = *(_QWORD *)&SvGameGlobalsCommon[107].skelMemPos;
  }
  if ( SV_GetClientRequiredStatPackets(client) )
  {
    SV_ClientMP_DropClient(client, "EXE/NEEDSTATS", 1);
  }
  else
  {
    dropReason = client->dropReason;
    if ( dropReason )
    {
      SV_ClientMP_DropClient(client, dropReason, 1);
      if ( client->dropReason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2915, ASSERT_TYPE_ASSERT, "( !client->dropReason )", (const char *)&queryFormat, "!client->dropReason") )
        __debugbreak();
      if ( client->state != CS_ZOMBIE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2916, ASSERT_TYPE_ASSERT, "( client->state == SvClientConnectionState::CS_ZOMBIE )", (const char *)&queryFormat, "client->state == SvClientConnectionState::CS_ZOMBIE") )
        __debugbreak();
    }
    Com_Printf(131087, "SV_SendClientGameState() %s\n", client->name);
    client->pureAuthentic = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] != 0;
    state = client->state;
    name = client->name;
    if ( state == CS_CLIENTLOADING )
    {
      Com_Printf(131087, "Resending gamestate while in CS_CLIENTLOADING for %s\n", name);
    }
    else
    {
      Com_Printf(131087, "Going from CS_CONNECTED to CS_CLIENTLOADING for %s (actually from %i)\n", name, (unsigned __int8)state);
      client->state = CS_CLIENTLOADING;
    }
    client->gamestateMessageNum = client->netchan.outgoingSequence;
    MSG_Init(&buf, m_ptr, 148440);
    MSG_ClearLastReferencedEntity(&buf);
    v7 = DVARINT_sv_useExtraCompress;
    if ( !DVARINT_sv_useExtraCompress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_useExtraCompress") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    buf.compressionFlags = v7->current.integer != 0 ? 0x80000000 : 0;
    MSG_WriteLong(&buf, client->commandSequence);
    cursize = buf.cursize;
    reliableSequence = client->reliableSequence;
    client->reliableSent = reliableSequence;
    SV_SnapshotMP_UpdateServerCommandsToClient(client, &buf, client->reliableAcknowledge, reliableSequence);
    Com_Printf(131087, "Gamestate has %i bytes of server commands\n", (unsigned int)(buf.cursize - cursize));
    SV_SendClientGameStateInternal(client, &buf);
    MpClientIndex = SV_Client_GetMpClientIndex(client);
    Com_Printf(131087, "Sending %i bytes in gamestate to client: %i\n", (unsigned int)buf.cursize, MpClientIndex);
    time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    DeterministicSystemTime = SV_MainMP_GetDeterministicSystemTime();
    IsClientThrottled = SV_SnapshotMP_IsClientThrottled(client);
    v14 = SV_SnapshotMP_SendMessageToClient(client, time, DeterministicSystemTime, 0, IsClientThrottled, &buf);
    if ( v14 < 0 )
      SV_SnapshotMP_TransmissionError(client, v14);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
SV_SendClientGameStateInternal
==============
*/
void SV_SendClientGameStateInternal(const SvClientMP *client, msg_t *msg)
{
  SvGameGlobals *SvGameGlobalsCommon; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvGameModeAppMP *ActiveServerApplicationMP; 
  int MpClientIndex; 
  const char *MapName; 
  const char *GameType; 
  bool IsHardcoreMode; 
  unsigned __int8 v11; 
  __int64 m_svCurCmdDuration; 
  signed __int16 v13; 
  int DataChecksum; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  int NetChecksum; 
  unsigned __int64 v18; 
  bool LootActive; 
  int LootChecksum; 
  int LootSeed; 
  const char *LootTableName; 
  const char *LootTableZones; 
  const char *LootTableFilter; 
  int DvarChecksum; 
  int Checksum; 
  __int64 v27; 
  __int64 v28; 
  int v29; 

  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v29 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v29) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  MSG_WriteBits(msg, 2i64, 4u);
  MSG_WriteLong(msg, client->reliableSequence);
  MapName = SV_Game_GetMapName();
  MSG_WriteString(msg, MapName);
  MSG_WriteLong(msg, SvGameGlobalsCommon->mapcrc);
  GameType = SV_GameMP_GetGameType();
  MSG_WriteString(msg, GameType);
  IsHardcoreMode = SV_GameMP_IsHardcoreMode();
  MSG_WriteBool(msg, IsHardcoreMode);
  if ( !ActiveServerApplicationMP->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  v11 = truncate_cast<unsigned char,int>(ActiveServerApplicationMP->m_frameDuration);
  MSG_WriteByte(msg, v11);
  if ( (signed int)ActiveServerApplicationMP->m_svCurCmdDuration < Com_GetUserCommandConstantMsec() )
  {
    LODWORD(v28) = Com_GetUserCommandConstantMsec();
    LODWORD(v27) = ActiveServerApplicationMP->m_svCurCmdDuration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_gamemode_app_mp.h", 189, ASSERT_TYPE_ASSERT, "( static_cast<int>(m_svCurCmdDuration) ) >= ( Com_GetUserCommandConstantMsec() )", "static_cast<int>(m_svCurCmdDuration) >= Com_GetUserCommandConstantMsec()\n\t%i, %i", v27, v28) )
      __debugbreak();
  }
  m_svCurCmdDuration = ActiveServerApplicationMP->m_svCurCmdDuration;
  if ( (unsigned int)m_svCurCmdDuration > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)m_svCurCmdDuration, "unsigned", m_svCurCmdDuration) )
    __debugbreak();
  MSG_WriteByte(msg, (unsigned __int8)m_svCurCmdDuration);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v13 = BgWeaponMap::ms_runtimeSize;
  if ( BgWeaponMap::ms_runtimeSize > 0x7FFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned short>(unsigned short)", "signed", (__int16)BgWeaponMap::ms_runtimeSize, "unsigned", BgWeaponMap::ms_runtimeSize) )
    __debugbreak();
  MSG_WriteShort(msg, v13);
  DataChecksum = BG_Omnvar_GetDataChecksum();
  MSG_WriteLong(msg, DataChecksum);
  v15 = truncate_cast<unsigned char,int>(SvClient::ms_clientCount);
  MSG_WriteByte(msg, v15);
  v16 = truncate_cast<unsigned char,int>(PersistentGlobalsMP->agentCount);
  MSG_WriteByte(msg, v16);
  NetChecksum = ScriptableSv_GetNetChecksum();
  MSG_WriteLong(msg, NetChecksum);
  v18 = ScriptableMsgWrite_GetChangeStartIndex(MpClientIndex);
  MSG_WriteInt64(msg, v18);
  LootActive = ScriptableSv_GetLootActive();
  MSG_WriteBool(msg, LootActive);
  if ( ScriptableSv_GetLootActive() )
  {
    LootChecksum = ScriptableSv_GetLootChecksum();
    MSG_WriteLong(msg, LootChecksum);
    LootSeed = ScriptableSv_GetLootSeed();
    MSG_WriteLong(msg, LootSeed);
    LootTableName = ScriptableSv_GetLootTableName();
    MSG_WriteString(msg, LootTableName);
    LootTableZones = ScriptableSv_GetLootTableZones();
    MSG_WriteString(msg, LootTableZones);
    LootTableFilter = ScriptableSv_GetLootTableFilter();
    MSG_WriteString(msg, LootTableFilter);
  }
  DvarChecksum = NetConstStrings_GetDvarChecksum();
  Checksum = NetConstStrings_GetChecksum();
  MSG_WriteLong(msg, DvarChecksum);
  MSG_WriteLong(msg, Checksum);
  SV_WriteClientConfigStrings(msg);
  SV_WriteSynchronizedPlayerInfos(msg);
  if ( MpClientIndex < 0 || MpClientIndex >= (int)SvClient::ms_clientCount )
  {
    LODWORD(v28) = MpClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2835, ASSERT_TYPE_ASSERT, "( ( clientNum >= 0 && clientNum < SvClient::GetClientCount() ) )", "%s\n\t( clientNum ) = %i", "( clientNum >= 0 && clientNum < SvClient::GetClientCount() )", v28) )
      __debugbreak();
  }
  MSG_WriteBits(msg, 1i64, 4u);
  MSG_WriteLong(msg, MpClientIndex);
  MSG_WriteLong(msg, fs_checksumFeed);
  MSG_WriteBits(msg, 1i64, 4u);
}

/*
==============
SV_SendConnectResponseToClient
==============
*/
void SV_SendConnectResponseToClient(SvClientMP *cl, const netadr_t *address, const int isHostMigration)
{
  int addrHandleIndex; 
  const char *v6; 
  __int64 ClientRequiredStatPackets; 
  int v8; 
  netadr_t v9; 
  msg_t buf; 
  unsigned __int8 data[512]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1544, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  MSG_Init(&buf, data, 512);
  MSG_WriteString(&buf, "connectResponse");
  addrHandleIndex = address->addrHandleIndex;
  *(_OWORD *)&v9.type = *(_OWORD *)&address->type;
  v9.addrHandleIndex = addrHandleIndex;
  v6 = NET_AdrToString(&v9);
  Com_Printf(131087, "SV_SendConnectResponseToClient: Sending '%s' to client at '%s'.\n", "connectResponse", v6);
  ClientRequiredStatPackets = SV_GetClientRequiredStatPackets(cl);
  MSG_WriteBits(&buf, ClientRequiredStatPackets, 0x36u);
  Com_Printf(15, "StatsDataNeeded = 0x%zx\n", ClientRequiredStatPackets);
  Com_Printf(15, "\n");
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 1559, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", "%s\n\tConnect message got too big, need to increase CONNECT_MSG_BUF_SIZE", "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  v8 = NET_OutOfBandData(NS_MAXCLIENTS, address, buf.data, buf.cursize);
  if ( v8 < 0 && !NET_IsBotAddr(address) )
    Com_PrintError(131087, "Failed to send response to connect: error %d\n", (unsigned int)v8);
}

/*
==============
SV_UserMove_RecordPredictedOrigin
==============
*/
void SV_UserMove_RecordPredictedOrigin(SvClientMP *cl, const int commandTime, const CmdPredict *const cmdPredict)
{
  int vehTarget; 
  const dvar_t *v7; 
  float v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __m256i v13; 
  __int128 v14; 
  _BYTE v15[12]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6451, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !cmdPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 6452, ASSERT_TYPE_ASSERT, "( cmdPredict )", (const char *)&queryFormat, "cmdPredict") )
    __debugbreak();
  vehTarget = cmdPredict->vehTarget;
  v13.m256i_i32[0] = commandTime;
  v13.m256i_i32[2] = LODWORD(cmdPredict->origin.v[0]);
  v13.m256i_i32[3] = LODWORD(cmdPredict->origin.v[1]);
  v13.m256i_i32[4] = LODWORD(cmdPredict->origin.v[2]);
  v13.m256i_i32[5] = LODWORD(cmdPredict->vehOrigin.v[0]);
  v13.m256i_i32[6] = LODWORD(cmdPredict->vehOrigin.v[1]);
  v13.m256i_i32[7] = LODWORD(cmdPredict->vehOrigin.v[2]);
  if ( (vehTarget < 0 || (unsigned int)vehTarget > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)vehTarget, "signed", vehTarget) )
    __debugbreak();
  v13.m256i_i16[2] = vehTarget;
  v7 = DCONST_DVARFLT_com_userCmdMaxExtrapTranslation;
  v13.m256i_i8[6] = cmdPredict->vehActive != 0;
  if ( !DCONST_DVARFLT_com_userCmdMaxExtrapTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxExtrapTranslation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  HIDWORD(v14) = cmdPredict->extrapData.time;
  *(_DWORD *)v15 = cmdPredict->extrapData.inputTime;
  v8 = v7->current.value * 0.000030518509;
  *(float *)&v14 = (float)cmdPredict->extrapData.offset.v[0] * v8;
  *(_QWORD *)&v15[4] = *(_QWORD *)cmdPredict->extrapData.packedBobCycle;
  *((float *)&v14 + 1) = (float)cmdPredict->extrapData.offset.v[1] * v8;
  *((float *)&v14 + 2) = (float)cmdPredict->extrapData.offset.v[2] * v8;
  if ( commandTime > 0 )
  {
    v9 = cl->m_nextPredictedIndex % 0x26;
    ++cl->m_nextPredictedIndex;
    if ( v9 >= 0x26 )
    {
      LODWORD(v12) = 38;
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4268, ASSERT_TYPE_ASSERT, "(unsigned)( predictedIndex ) < (unsigned)( ( sizeof( *array_counter( m_predictedOrigins ) ) + 0 ) )", "predictedIndex doesn't index ARRAY_COUNT( m_predictedOrigins )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v10 = v9;
    *(__m256i *)&cl->m_predictedOrigins[v10].commandTime = v13;
    *(_OWORD *)cl->m_predictedOrigins[v10].extrapData.offset.v = v14;
    *(double *)&cl->m_predictedOrigins[v10].extrapData.inputTime = *(double *)v15;
    cl->m_predictedOrigins[v10].extrapData.packedBobCycle[1] = *(_DWORD *)&v15[8];
  }
}

/*
==============
SV_WriteClientConfigStrings
==============
*/
void SV_WriteClientConfigStrings(msg_t *msg)
{
  unsigned int v1; 
  unsigned int v2; 
  SvGameGlobals *SvGameGlobalsCommon; 
  unsigned int v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  char *DvarInfoString; 
  scr_string_t v12; 
  const char *v13; 
  const dvar_t *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  int v19; 
  const char *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int cursize; 

  v1 = 0;
  v22 = 0;
  v2 = 0;
  cursize = msg->cursize;
  v23 = 0;
  v24 = 0;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  MSG_WriteBits(msg, 3i64, 4u);
  v5 = 0;
  v6 = 0;
  v7 = 0i64;
  do
  {
    if ( v5 == 529 || SvGameGlobalsCommon->configstrings[v7] != SvGameGlobalsCommon->emptyConfigString )
      ++v6;
    if ( v5 == 528 || SvGameGlobalsCommon->configstrings[v7 + 1] != SvGameGlobalsCommon->emptyConfigString )
      ++v6;
    v5 += 2;
    v7 += 2i64;
  }
  while ( v5 < 0x2FE );
  MSG_WriteShort(msg, v6);
  v8 = -1;
  v9 = 0;
  v21 = __rdtsc();
  v10 = 0i64;
  do
  {
    if ( v9 == 529 )
    {
      DvarInfoString = SV_MainMP_GetDvarInfoString(4096);
    }
    else
    {
      v12 = SvGameGlobalsCommon->configstrings[v10];
      if ( v12 == SvGameGlobalsCommon->emptyConfigString )
        goto LABEL_33;
      DvarInfoString = (char *)SL_ConvertToString(v12);
    }
    v13 = DvarInfoString;
    if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2682, ASSERT_TYPE_ASSERT, "(configStringCount >= 0)", (const char *)&queryFormat, "configStringCount >= 0") )
      __debugbreak();
    if ( v9 == v8 + 1 )
    {
      MSG_WriteBit1(msg);
    }
    else
    {
      MSG_WriteBit0(msg);
      MSG_WriteBits(msg, (int)v9, 0xAu);
    }
    v8 = v9;
    MSG_WriteBigString(msg, v13);
    v14 = DVARBOOL_sv_printConfigStrings;
    --v6;
    if ( !DVARBOOL_sv_printConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printConfigStrings") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      Com_Printf(15, "CS %4i: %s\n", v9, v13);
    v15 = -1i64;
    do
      ++v15;
    while ( v13[v15] );
    v22 += v15;
    v1 = ++v23;
    if ( (int)v15 <= v24 )
      LODWORD(v15) = v24;
    v2 = v15;
    v24 = v15;
LABEL_33:
    ++v9;
    ++v10;
  }
  while ( v9 < 0x2FE );
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2716, ASSERT_TYPE_ASSERT, "( configStringCount ) == ( 0 )", "%s == %s\n\t%i, %i", "configStringCount", "0", v6, 0i64) )
    __debugbreak();
  v16 = __rdtsc();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (int)v16 - v21 < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(15, "SV Config String Generation Total: %fms\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
  v19 = msg->cursize - cursize;
  if ( v19 > 4000 && SV_Game_IsOnlineGame() )
  {
    v20 = j_va("Gamestate Exceeded - size %i - max %i", (unsigned int)v19, 4000i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_GAMESTATEEXCEEDED, 20000, v20, v19);
  }
  Com_Printf(15, "Gamestate has %i bytes of config strings (%i total config strings)\n", (unsigned int)v19, v1);
  Com_Printf(15, "   Largest config string was %i bytes\n", v2);
  Com_Printf(15, "   Average config string was %i bytes\n", (unsigned int)(v22 / (int)v1));
}

/*
==============
SV_WriteSynchronizedPlayerInfos
==============
*/
void SV_WriteSynchronizedPlayerInfos(msg_t *msg)
{
  int cursize; 
  __int64 i; 
  BG_SynchronizedPlayerInfo *v4; 
  bool IsValid; 
  __int64 v6; 
  __int64 v7; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2744, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2745, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  cursize = msg->cursize;
  MSG_WriteBits(msg, 8i64, 4u);
  for ( i = 0i64; (int)i < (int)SvClient::ms_clientCount; i = (unsigned int)(i + 1) )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)i >= SvClient::ms_clientCount )
    {
      LODWORD(v7) = SvClient::ms_clientCount;
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v4 = SvClientMP::ms_playerInfos[i];
    IsValid = XUID::IsValid(&v4->xuid);
    MSG_WriteBool(msg, IsValid);
    if ( IsValid )
      BG_SynchronizedPlayerInfo::Serialize(v4, msg);
  }
  Com_Printf(15, "Gamestate has %i bytes of playerinfo (%i total clients)\n", (unsigned int)(msg->cursize - cursize), SvClient::ms_clientCount);
  if ( msg->overflowed )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 2768, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
      __debugbreak();
  }
}

/*
==============
SvClientMP::SendServerCommand
==============
*/

void __fastcall SvClientMP::SendServerCommand(SvClientMP *this, svscmd_type type, const char *cmd)
{
  SV_MainMP_AddServerCommand(this, type, cmd);
}

/*
==============
SvClientMP::SendServerCommandMsg
==============
*/

void __fastcall SvClientMP::SendServerCommandMsg(SvClientMP *this, svscmd_type type, const msg_t *msg)
{
  SV_MainMP_AddServerCommandMsg(this, type, msg);
}

/*
==============
SvClientMP::SetBotCommandsAcknowledged
==============
*/
void SvClientMP::SetBotCommandsAcknowledged(SvClientMP *this)
{
  const dvar_t *v2; 
  int v3; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  int v7; 
  int v8; 
  int m_packetBackupCount; 
  int v10; 
  __int64 v11; 
  unsigned int pHoldrand; 
  NetPingInfo recvInfo; 

  if ( this->testClient == TC_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4743, ASSERT_TYPE_ASSERT, "(this->testClient != TC_NONE)", "%s\n\tOnly intended to be used for test clients or bots", "this->testClient != TC_NONE") )
    __debugbreak();
  v2 = DVARBOOL_sv_sendSnapshotsToBots;
  v3 = this->netchan.outgoingSequence - 1;
  if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && this->state && this->testClient == TC_BOT )
  {
    v4 = DVARINT_sv_botsSimulatedLatency;
    if ( !DVARINT_sv_botsSimulatedLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_botsSimulatedLatency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    v6 = DVARINT_sv_botsSimulatedJitter;
    if ( !DVARINT_sv_botsSimulatedJitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_botsSimulatedJitter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.integer;
    if ( v7 > 0 )
    {
      pHoldrand = Sys_Microseconds();
      integer += BG_irand(-v7, v7, &pHoldrand);
    }
    if ( integer && this->hasAckedBaselineData )
    {
      v8 = integer / SV_SnapshotMP_GetRemoteClientSendDelay();
      if ( v8 < 1 )
        v8 = 1;
      v3 = this->netchan.outgoingSequence - v8;
      if ( v3 < 0 )
        v3 = 0;
    }
  }
  if ( v3 > this->deltaMessage )
  {
    this->deltaMessage = v3;
    this->messageAcknowledge = v3;
    m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    if ( g_svSnapshotData.m_packetBackupCount <= 0 )
    {
      LODWORD(v11) = g_svSnapshotData.m_packetBackupCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", v11, 0i64) )
        __debugbreak();
      m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    }
    v10 = this->messageAcknowledge - 1;
    recvInfo.initialized = 0;
    recvInfo.netTicks = 0i64;
    if ( v10 < 0 )
      v10 = 0;
    if ( v10 < m_packetBackupCount )
      m_packetBackupCount = v10;
    this->messageAcknowedlgeStreak = m_packetBackupCount;
    recvInfo.sockTicks = 0i64;
    SvClientMP::SetMessageAcknowledged(this, &recvInfo);
  }
}

/*
==============
SvClientMP::SetMessageAcknowledged
==============
*/
void SvClientMP::SetMessageAcknowledged(SvClientMP *this, const NetPingInfo *recvInfo)
{
  int DeterministicSystemTime; 
  int SockPing; 
  int v6; 
  int v7; 
  char *v8; 
  int v9; 
  int v10; 
  const dvar_t *v11; 
  int minPing; 
  __int64 v13; 
  int messageAcknowledge; 
  __int64 v15; 

  DeterministicSystemTime = SV_MainMP_GetDeterministicSystemTime();
  SockPing = -1;
  if ( this->messageAcknowledge < 0 )
  {
    messageAcknowledge = this->messageAcknowledge;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4655, ASSERT_TYPE_ASSERT, "( this->messageAcknowledge ) >= ( 0 )", "this->messageAcknowledge >= 0\n\t%i, %i", messageAcknowledge, 0i64) )
      __debugbreak();
  }
  if ( this->messageAcknowedlgeStreak < 0 )
  {
    LODWORD(v13) = this->messageAcknowedlgeStreak;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4656, ASSERT_TYPE_ASSERT, "( this->messageAcknowedlgeStreak ) >= ( 0 )", "this->messageAcknowedlgeStreak >= 0\n\t%i, %i", v13, 0i64) )
      __debugbreak();
  }
  v6 = 0;
  if ( this->messageAcknowedlgeStreak >= 0 )
  {
    do
    {
      v7 = this->messageAcknowledge - v6;
      if ( v7 < 0 )
      {
        LODWORD(v13) = this->messageAcknowledge - v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1046, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", v13, 0i64) )
          __debugbreak();
      }
      v8 = (char *)this + 72 * (v7 & 0x3F);
      v9 = *((_DWORD *)v8 + 93144);
      if ( v9 <= 0 || *((_DWORD *)v8 + 93143) != v7 || *((int *)v8 + 93152) > 0 )
        break;
      if ( DeterministicSystemTime < v9 )
      {
        LODWORD(v15) = *((_DWORD *)v8 + 93144);
        LODWORD(v13) = DeterministicSystemTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4696, ASSERT_TYPE_ASSERT, "( recvTime ) >= ( clientFrame->sentTime )", "recvTime >= clientFrame->sentTime\n\t%i, %i", v13, v15) )
          __debugbreak();
      }
      v10 = *((_DWORD *)v8 + 93144);
      *((_DWORD *)v8 + 93152) = DeterministicSystemTime;
      NetPing::Update((NetPing *)v8 + 31051, v10, (const NetPingInfo *)(v8 + 372584), DeterministicSystemTime, recvInfo);
      if ( SockPing < 0 )
      {
        SockPing = NetPing::GetSockPing((NetPing *)v8 + 31051);
        if ( SV_IsDemoPlaying() || SV_Demo_IsRecording() )
          SockPing = NetPing::GetGamePing((NetPing *)v8 + 31051);
      }
      ++v6;
    }
    while ( v6 <= this->messageAcknowedlgeStreak );
    if ( SockPing >= 0 )
    {
      v11 = DVARINT_sv_minPingClamp;
      if ( !DVARINT_sv_minPingClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_minPingClamp") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      minPing = this->minPing;
      if ( minPing <= v11->current.integer )
        ++minPing;
      this->currFramePing = SockPing;
      if ( minPing < SockPing )
        SockPing = minPing;
      this->minPing = SockPing;
      SvClientMP::UpdatePingHistogram(this);
    }
  }
}

/*
==============
SvClientMP::UpdateCommandSequence
==============
*/
void SvClientMP::UpdateCommandSequence(SvClientMP *this)
{
  __int64 v2; 
  usercmd_s *p_lastRecvCommand; 
  usercmd_s *v4; 
  __int64 v5; 
  __int128 v6; 
  CmdPredict *v7; 
  __int64 v8; 

  if ( !this->m_cmdRecvBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4631, ASSERT_TYPE_ASSERT, "( m_cmdRecvBuffer != nullptr )", (const char *)&queryFormat, "m_cmdRecvBuffer != nullptr") )
    __debugbreak();
  if ( !this->m_cmdRecvPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4632, ASSERT_TYPE_ASSERT, "( m_cmdRecvPredict != nullptr )", (const char *)&queryFormat, "m_cmdRecvPredict != nullptr") )
    __debugbreak();
  if ( !this->m_cmdRecvSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4633, ASSERT_TYPE_ASSERT, "( m_cmdRecvSequence != nullptr )", (const char *)&queryFormat, "m_cmdRecvSequence != nullptr") )
    __debugbreak();
  if ( this->netchan.incomingSequence < 0 )
  {
    LODWORD(v8) = this->netchan.incomingSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4634, ASSERT_TYPE_ASSERT, "( this->netchan.incomingSequence ) >= ( 0 )", "this->netchan.incomingSequence >= 0\n\t%i, %i", v8, 0i64) )
      __debugbreak();
  }
  v2 = (int)(this->netchan.incomingSequence % SvClientMP::ms_cmdCountPerClient);
  this->m_cmdRecvSequence[v2] = this->netchan.incomingSequence;
  p_lastRecvCommand = &this->lastRecvCommand;
  v4 = &this->m_cmdRecvBuffer[v2];
  v5 = 2i64;
  do
  {
    v4 = (usercmd_s *)((char *)v4 + 128);
    v6 = *(_OWORD *)&p_lastRecvCommand->buttons;
    p_lastRecvCommand = (usercmd_s *)((char *)p_lastRecvCommand + 128);
    *(_OWORD *)&v4[-1].offHand.attachmentVariationIndices[13] = v6;
    *(_OWORD *)&v4[-1].offHand.weaponCamo = *(_OWORD *)&p_lastRecvCommand[-1].offHand.weaponCamo;
    *(_OWORD *)v4[-1].remoteControlMove = *(_OWORD *)p_lastRecvCommand[-1].remoteControlMove;
    *(_OWORD *)v4[-1].vehAngles = *(_OWORD *)p_lastRecvCommand[-1].vehAngles;
    *(_OWORD *)&v4[-1].vehOrgZ = *(_OWORD *)&p_lastRecvCommand[-1].vehOrgZ;
    *(_OWORD *)&v4[-1].gunYOfs = *(_OWORD *)&p_lastRecvCommand[-1].gunYOfs;
    *(_OWORD *)v4[-1].sightedClientsMask.data = *(_OWORD *)p_lastRecvCommand[-1].sightedClientsMask.data;
    *(_OWORD *)&v4[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_lastRecvCommand[-1].sightedClientsMask.data[4];
    --v5;
  }
  while ( v5 );
  v4->buttons = p_lastRecvCommand->buttons;
  v7 = &this->m_cmdRecvPredict[v2];
  *(__m256i *)v7->origin.v = *(__m256i *)this->lastRecvPredict.origin.v;
  *(_OWORD *)v7->extrapData.packedBobCycle = *(_OWORD *)this->lastRecvPredict.extrapData.packedBobCycle;
  *(double *)v7->vehOrigin.v = *(double *)this->lastRecvPredict.vehOrigin.v;
  v7->vehOrigin.v[2] = this->lastRecvPredict.vehOrigin.v[2];
  this->commandSequence = this->netchan.incomingSequence;
}

/*
==============
SvClientMP::UpdatePing
==============
*/
void SvClientMP::UpdatePing(SvClientMP *this)
{
  unsigned int MpClientIndex; 
  int *v3; 
  signed int v4; 
  int i; 
  int v6; 
  int SockPing; 
  const dvar_t *v8; 
  unsigned int v9; 
  char *fmt; 
  __int64 v11; 
  __int64 v12; 
  std::less<void> v13; 
  int _First[64]; 

  MpClientIndex = SV_Client_GetMpClientIndex(this);
  if ( SvClient::GetCommonClient(MpClientIndex)->state != CS_ACTIVE )
    goto LABEL_5;
  if ( !this->gentity )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_snapshotDebugVerbose, "sv_snapshotDebugVerbose") )
      Com_DPrintf(15, "Giving %s a 999 ping - not a gentity\n", this->name);
LABEL_5:
    this->minPing = 999;
LABEL_6:
    this->ping = 999;
    return;
  }
  v3 = _First;
  v4 = 0;
  for ( i = 0; i < 64; ++i )
  {
    v6 = this->messageAcknowledge - i;
    if ( v6 <= 0 )
      break;
    if ( this->m_frameInfo[v6 & 0x3F].sentSequence == v6 )
    {
      SockPing = NetPing::GetSockPing(&this->m_frameInfo[v6 & 0x3F].ping);
      if ( SockPing > 0 )
      {
        if ( (unsigned int)v4 >= 0x40 )
        {
          LODWORD(v12) = 64;
          LODWORD(v11) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 4525, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( ( sizeof( *array_counter( deltas ) ) + 0 ) )", "count doesn't index ARRAY_COUNT( deltas )\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        ++v4;
        *v3++ = SockPing;
      }
    }
  }
  if ( !v4 )
  {
    if ( !NetConnection::IsBot(&this->clientConnection) )
    {
      v8 = DVARBOOL_sv_snapshotDebugVerbose;
      if ( !DVARBOOL_sv_snapshotDebugVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotDebugVerbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
        Com_DPrintf(15, "Giving %s a 999 ping - no packets acked\n", this->name);
    }
    goto LABEL_5;
  }
  std::nth_element<int *,std::less<void>>(_First, &_First[v4 / 2], &_First[v4], v13);
  v9 = _First[v4 / 2];
  this->ping = v9;
  if ( v9 > 0x3E7 )
  {
    if ( !NetConnection::IsBot(&this->clientConnection) && Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_snapshotDebugVerbose, "sv_snapshotDebugVerbose") )
    {
      LODWORD(fmt) = v4;
      Com_DPrintf(15, "Giving %s a 999 ping - > calculated ping: %d from %d packets\n", this->name, (unsigned int)this->ping, fmt);
    }
    goto LABEL_6;
  }
}

/*
==============
SvClientMP::UpdatePingHistogram
==============
*/
void SvClientMP::UpdatePingHistogram(SvClientMP *this)
{
  const dvar_t *v1; 
  __int64 v3; 
  int m_unprocessedCentroidBufferIndex; 
  __int64 v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v21; 

  v1 = DVARBOOL_sv_recordPingHistogram;
  if ( !DVARBOOL_sv_recordPingHistogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_recordPingHistogram") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return;
  m_unprocessedCentroidBufferIndex = this->pingDigest.m_unprocessedCentroidBufferIndex;
  _XMM6 = 0i64;
  __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+370E8h] }
  if ( (unsigned int)m_unprocessedCentroidBufferIndex < 0x2BC )
    goto LABEL_8;
  if ( !this->pingDigest.m_disableAutoMerge )
  {
    DLogTDigest<100,8>::ProcessBufferedCentroids(&this->pingDigest);
    m_unprocessedCentroidBufferIndex = this->pingDigest.m_unprocessedCentroidBufferIndex;
LABEL_8:
    _XMM0 = *(unsigned __int64 *)&this->pingDigest.m_min;
    __asm { vminsd  xmm1, xmm0, xmm6 }
    this->pingDigest.m_min = *(double *)&_XMM1;
    _XMM0 = *(unsigned __int64 *)&this->pingDigest.m_max;
    __asm { vmaxsd  xmm1, xmm0, xmm6 }
    this->pingDigest.m_max = *(double *)&_XMM1;
    v11 = 2 * (m_unprocessedCentroidBufferIndex + 103i64);
    *((double *)&this->pingDigest.m_min + v11) = *(double *)&_XMM6;
    *((_QWORD *)&this->pingDigest.m_max + v11) = 0x3FF0000000000000i64;
    *(long double *)&_XMM0 = this->pingDigest.m_unprocessedWeightTotal;
    ++this->pingDigest.m_unprocessedCentroidBufferIndex;
    this->pingDigest.m_unprocessedWeightTotal = *(double *)&_XMM0 + 1.0;
    goto LABEL_9;
  }
  DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_9:
  v12 = 0;
  v13 = this->messageAcknowledge - 1;
  v14 = 1i64;
  do
  {
    if ( v13 < 0 )
      break;
    v15 = v13 & 0x3F;
    v3 = 9 * v15;
    if ( this->m_frameInfo[v15].sentSequence != v13 )
      break;
    if ( this->m_frameInfo[v15].sentTime > 0 )
    {
      if ( this->m_frameInfo[v15].ackedTime > 0 )
        break;
      ++v12;
    }
    v14 = (unsigned int)(v14 + 1);
    --v13;
  }
  while ( (int)v14 < 64 );
  v16 = this->lostSnapshotsDigest.m_unprocessedCentroidBufferIndex;
  _XMM6 = 0i64;
  __asm { vcvtsi2sd xmm6, xmm6, r9d }
  if ( (unsigned int)v16 >= 0x8C )
  {
    if ( this->lostSnapshotsDigest.m_disableAutoMerge )
    {
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n", v3, v14);
      return;
    }
    DLogTDigest<20,8>::ProcessBufferedCentroids(&this->lostSnapshotsDigest);
    v16 = this->lostSnapshotsDigest.m_unprocessedCentroidBufferIndex;
  }
  __asm { vminsd  xmm0, xmm6, qword ptr [rbx+3A960h] }
  this->lostSnapshotsDigest.m_min = *(double *)&_XMM0;
  __asm { vmaxsd  xmm1, xmm6, qword ptr [rbx+3A968h] }
  this->lostSnapshotsDigest.m_max = *(double *)&_XMM1;
  v21 = 2 * (v16 + 23i64);
  *((double *)&this->lostSnapshotsDigest.m_min + v21) = *(double *)&_XMM6;
  *((_QWORD *)&this->lostSnapshotsDigest.m_max + v21) = 0x3FF0000000000000i64;
  *(long double *)&_XMM0 = this->lostSnapshotsDigest.m_unprocessedWeightTotal;
  ++this->lostSnapshotsDigest.m_unprocessedCentroidBufferIndex;
  this->lostSnapshotsDigest.m_unprocessedWeightTotal = *(double *)&_XMM0 + 1.0;
}

/*
==============
SvClientMP::UpdateSnapshotEncodingOutput
==============
*/
void SvClientMP::UpdateSnapshotEncodingOutput(SvClientMP *this, const unsigned int snapshotIndex, const clientSnapshotEncodingOutput_t *newClientSnapEncodingOutput)
{
  __int64 v3; 
  clientSnapshotEncodingOutput_t *v6; 
  __int64 v7; 

  v3 = snapshotIndex;
  if ( !newClientSnapEncodingOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7873, ASSERT_TYPE_ASSERT, "( newClientSnapEncodingOutput )", (const char *)&queryFormat, "newClientSnapEncodingOutput") )
    __debugbreak();
  if ( (unsigned int)v3 >= SvClientMP::ms_fullSnapFrameCountPerClient )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1020, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", v7, SvClientMP::ms_fullSnapFrameCountPerClient) )
      __debugbreak();
  }
  v6 = &this->m_fullSnapshotEncodingOutputs[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.cpp", 7875, ASSERT_TYPE_ASSERT, "( clientSnapEncodingOutput )", (const char *)&queryFormat, "clientSnapEncodingOutput") )
    __debugbreak();
  *(__m256i *)v6->playerEventNeedsFullSerialization.m_data = *(__m256i *)newClientSnapEncodingOutput->playerEventNeedsFullSerialization.m_data;
  *(__m256i *)&v6->playerEventNeedsFullSerialization.m_data[4] = *(__m256i *)&newClientSnapEncodingOutput->playerEventNeedsFullSerialization.m_data[4];
  *(__m256i *)&v6->playerEventNeedsFullSerialization.m_data[8] = *(__m256i *)&newClientSnapEncodingOutput->playerEventNeedsFullSerialization.m_data[8];
  v6->playerEventNeedsFullSerialization.m_data[12] = newClientSnapEncodingOutput->playerEventNeedsFullSerialization.m_data[12];
}

