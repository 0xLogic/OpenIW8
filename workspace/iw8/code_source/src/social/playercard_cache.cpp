/*
==============
PlayercardCache_GetUpdateNumber
==============
*/

unsigned __int8 __fastcall PlayercardCache_GetUpdateNumber(XUID xuid)
{
  return ?PlayercardCache_GetUpdateNumber@@YAEUXUID@@@Z(xuid);
}

/*
==============
PlayercardCache_UpdateRecentPlayersCaching_Explicit
==============
*/

void __fastcall PlayercardCache_UpdateRecentPlayersCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  ?PlayercardCache_UpdateRecentPlayersCaching_Explicit@@YAXHHH@Z(controllerIndex, pivot, size);
}

/*
==============
PlayercardCache_InitAssetCache
==============
*/

void PlayercardCache_InitAssetCache(void)
{
  ?PlayercardCache_InitAssetCache@@YAXXZ();
}

/*
==============
PlayercardCache_UserSignedOut
==============
*/

void __fastcall PlayercardCache_UserSignedOut(const int controllerIndex)
{
  ?PlayercardCache_UserSignedOut@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateLeaderboardCaching
==============
*/

void __fastcall PlayercardCache_UpdateLeaderboardCaching(const int controllerIndex, XUID user)
{
  ?PlayercardCache_UpdateLeaderboardCaching@@YAXHUXUID@@@Z(controllerIndex, user);
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching_Explicit
==============
*/

void __fastcall PlayercardCache_UpdateOnlineFriendsCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  ?PlayercardCache_UpdateOnlineFriendsCaching_Explicit@@YAXHHH@Z(controllerIndex, pivot, size);
}

/*
==============
PlayercardCache_UpdateLivePartyFriendsCaching
==============
*/

void __fastcall PlayercardCache_UpdateLivePartyFriendsCaching(const int controllerIndex)
{
  ?PlayercardCache_UpdateLivePartyFriendsCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_GetMPActiveCustomizationData
==============
*/

bool __fastcall PlayercardCache_GetMPActiveCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  return ?PlayercardCache_GetMPActiveCustomizationData@@YA_NUXUID@@PEBDPEA_NPEAUCustomizationModels@@3@Z(xuid, name, selectedOperatorIndex, customizationWest, customizationEast);
}

/*
==============
PlayercardCache_ClearEditPlayerCard
==============
*/

void __fastcall PlayercardCache_ClearEditPlayerCard(const int controllerIndex)
{
  ?PlayercardCache_ClearEditPlayerCard@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_DefaultCard
==============
*/

void __fastcall PlayercardCache_DefaultCard(PlayerProfileData *playerProfile, const char *name)
{
  ?PlayercardCache_DefaultCard@@YAXPEAUPlayerProfileData@@PEBD@Z(playerProfile, name);
}

/*
==============
PlayercardCache_GetPlayercard
==============
*/

bool __fastcall PlayercardCache_GetPlayercard(XUID userID, const char *name, PlayerProfileData *profileData)
{
  return ?PlayercardCache_GetPlayercard@@YA_NUXUID@@PEBDPEAUPlayerProfileData@@@Z(userID, name, profileData);
}

/*
==============
PlayercardCache_SetFavoriteLoadout
==============
*/

void __fastcall PlayercardCache_SetFavoriteLoadout(const int controllerIndex, const int loadoutIndex)
{
  ?PlayercardCache_SetFavoriteLoadout@@YAXHH@Z(controllerIndex, loadoutIndex);
}

/*
==============
PlayercardCache_IsUserDownloading
==============
*/

bool __fastcall PlayercardCache_IsUserDownloading(const int controllerIndex, const unsigned __int64 userID)
{
  return ?PlayercardCache_IsUserDownloading@@YA_NH_K@Z(controllerIndex, userID);
}

/*
==============
PublicProfileInfo::sizeOf
==============
*/

unsigned int __fastcall PublicProfileInfo::sizeOf(PublicProfileInfo *this)
{
  return ?sizeOf@PublicProfileInfo@@UEAAIXZ(this);
}

/*
==============
PlayercardCache_Init
==============
*/

void PlayercardCache_Init(void)
{
  ?PlayercardCache_Init@@YAXXZ();
}

/*
==============
PlayercardCache_RegisterCommands
==============
*/

void PlayercardCache_RegisterCommands(void)
{
  ?PlayercardCache_RegisterCommands@@YAXXZ();
}

/*
==============
PlayercardCache_UpdateFromStats
==============
*/

void __fastcall PlayercardCache_UpdateFromStats(const int controllerIndex)
{
  ?PlayercardCache_UpdateFromStats@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_InitCaching
==============
*/

void __fastcall PlayercardCache_InitCaching(const int controllerIndex)
{
  ?PlayercardCache_InitCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateTournamentCaching
==============
*/

void __fastcall PlayercardCache_UpdateTournamentCaching(const int controllerIndex)
{
  ?PlayercardCache_UpdateTournamentCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PublicProfileInfo::deserialize
==============
*/

bool __fastcall PublicProfileInfo::deserialize(PublicProfileInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@PublicProfileInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
PlayercardCache_Shutdown
==============
*/

void PlayercardCache_Shutdown(void)
{
  ?PlayercardCache_Shutdown@@YAXXZ();
}

/*
==============
PlayercardCache_GetMPPublicCustomizationData
==============
*/

bool __fastcall PlayercardCache_GetMPPublicCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  return ?PlayercardCache_GetMPPublicCustomizationData@@YA_NUXUID@@PEBDPEA_NPEAUCustomizationModels@@3@Z(xuid, name, selectedOperatorIndex, customizationWest, customizationEast);
}

/*
==============
PlayercardCache_UpdateRecentPlayersCaching
==============
*/

void __fastcall PlayercardCache_UpdateRecentPlayersCaching(const int controllerIndex)
{
  ?PlayercardCache_UpdateRecentPlayersCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdatePartyCaching
==============
*/

void __fastcall PlayercardCache_UpdatePartyCaching(const int controllerIndex, PartyData *partydata)
{
  ?PlayercardCache_UpdatePartyCaching@@YAXHPEAUPartyData@@@Z(controllerIndex, partydata);
}

/*
==============
PlayercardCache_IsPivotWithinThreshold
==============
*/

bool __fastcall PlayercardCache_IsPivotWithinThreshold(const int controllerIndex, const int pivot, const int size)
{
  return ?PlayercardCache_IsPivotWithinThreshold@@YA_NHHH@Z(controllerIndex, pivot, size);
}

/*
==============
PlayercardCache_GetMPPrivateCustomizationData
==============
*/

bool __fastcall PlayercardCache_GetMPPrivateCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  return ?PlayercardCache_GetMPPrivateCustomizationData@@YA_NUXUID@@PEBDPEA_NPEAUCustomizationModels@@3@Z(xuid, name, selectedOperatorIndex, customizationWest, customizationEast);
}

/*
==============
PlayercardCache_LoadPlayercard_ForEdit
==============
*/

PlayerProfileData *__fastcall PlayercardCache_LoadPlayercard_ForEdit(const int controllerIndex)
{
  return ?PlayercardCache_LoadPlayercard_ForEdit@@YAPEAUPlayerProfileData@@H@Z(controllerIndex);
}

/*
==============
PublicProfileInfo::PublicProfileInfo
==============
*/

void __fastcall PublicProfileInfo::PublicProfileInfo(PublicProfileInfo *this)
{
  ??0PublicProfileInfo@@QEAA@XZ(this);
}

/*
==============
PlayercardCache_ShutdownAssetCache
==============
*/

void PlayercardCache_ShutdownAssetCache(void)
{
  ?PlayercardCache_ShutdownAssetCache@@YAXXZ();
}

/*
==============
PlayercardCache_IsUploadRequested
==============
*/

bool __fastcall PlayercardCache_IsUploadRequested(const int controllerIndex)
{
  return ?PlayercardCache_IsUploadRequested@@YA_NH@Z(controllerIndex);
}

/*
==============
PlayercardCache_TriggerCachedDownload
==============
*/

void __fastcall PlayercardCache_TriggerCachedDownload(const int controllerIndex)
{
  ?PlayercardCache_TriggerCachedDownload@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateLocalPlayerCaching
==============
*/

void __fastcall PlayercardCache_UpdateLocalPlayerCaching(const int controllerIndex)
{
  ?PlayercardCache_UpdateLocalPlayerCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PublicProfileInfo::serialize
==============
*/

bool __fastcall PublicProfileInfo::serialize(PublicProfileInfo *this, bdByteBuffer *buffer)
{
  return ?serialize@PublicProfileInfo@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
PlayercardCache_ExpireEntry
==============
*/

void __fastcall PlayercardCache_ExpireEntry(XUID xuid)
{
  ?PlayercardCache_ExpireEntry@@YAXUXUID@@@Z(xuid);
}

/*
==============
PlayerCardData_GetCacheLocation
==============
*/

PlayerCardCache __fastcall PlayerCardData_GetCacheLocation()
{
  return ?PlayerCardData_GetCacheLocation@@YA?AW4PlayerCardCache@@XZ();
}

/*
==============
PlayercardCache_GetRandomPatchAndBacking
==============
*/

void __fastcall PlayercardCache_GetRandomPatchAndBacking(const unsigned int partyMemberIndex, int *out_patch, int *out_backing)
{
  ?PlayercardCache_GetRandomPatchAndBacking@@YAXIPEAH0@Z(partyMemberIndex, out_patch, out_backing);
}

/*
==============
PlayercardCache_UnregisterCommands
==============
*/

void PlayercardCache_UnregisterCommands(void)
{
  ?PlayercardCache_UnregisterCommands@@YAXXZ();
}

/*
==============
PlayercardCache_UserSignedIn
==============
*/

void __fastcall PlayercardCache_UserSignedIn(const int controllerIndex)
{
  ?PlayercardCache_UserSignedIn@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_RequestUpload
==============
*/

void __fastcall PlayercardCache_RequestUpload(const int controllerIndex)
{
  ?PlayercardCache_RequestUpload@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_CommitPlayercardEdits
==============
*/

void __fastcall PlayercardCache_CommitPlayercardEdits(const int controllerIndex)
{
  ?PlayercardCache_CommitPlayercardEdits@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching_Raw
==============
*/

void __fastcall PlayercardCache_UpdateOnlineFriendsCaching_Raw(const int controllerIndex, XUID *xuidList, int xuidCount)
{
  ?PlayercardCache_UpdateOnlineFriendsCaching_Raw@@YAXHQEAUXUID@@H@Z(controllerIndex, xuidList, xuidCount);
}

/*
==============
PlayercardCache_HasLocalPlayercard
==============
*/

bool __fastcall PlayercardCache_HasLocalPlayercard(const int controllerIndex)
{
  return ?PlayercardCache_HasLocalPlayercard@@YA_NH@Z(controllerIndex);
}

/*
==============
PlayercardCache_Upload
==============
*/

bool __fastcall PlayercardCache_Upload(const int controllerIndex)
{
  return ?PlayercardCache_Upload@@YA_NH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching
==============
*/

void __fastcall PlayercardCache_UpdateOnlineFriendsCaching(const int controllerIndex)
{
  ?PlayercardCache_UpdateOnlineFriendsCaching@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_UpdateLivePartyFriendsCaching_Explicit
==============
*/

void __fastcall PlayercardCache_UpdateLivePartyFriendsCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  ?PlayercardCache_UpdateLivePartyFriendsCaching_Explicit@@YAXHHH@Z(controllerIndex, pivot, size);
}

/*
==============
PlayercardCache_MarkPartyDirty
==============
*/

void __fastcall PlayercardCache_MarkPartyDirty(const int controllerIndex, const int source)
{
  ?PlayercardCache_MarkPartyDirty@@YAXHH@Z(controllerIndex, source);
}

/*
==============
PlayercardCache_GetPlayercard_ForEdit
==============
*/

PlayerProfileData *__fastcall PlayercardCache_GetPlayercard_ForEdit()
{
  return ?PlayercardCache_GetPlayercard_ForEdit@@YAPEAUPlayerProfileData@@XZ();
}

/*
==============
PlayercardCache_TouchMaterials
==============
*/

void __fastcall PlayercardCache_TouchMaterials(LocalClientNum_t localClientNum)
{
  ?PlayercardCache_TouchMaterials@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PlayercardCache_GetPlayercard_Patch_Backing
==============
*/

bool __fastcall PlayercardCache_GetPlayercard_Patch_Backing(XUID userID, const char *name, int mode, int *out_patch, int *out_backing)
{
  return ?PlayercardCache_GetPlayercard_Patch_Backing@@YA_NUXUID@@PEBDHPEAH2@Z(userID, name, mode, out_patch, out_backing);
}

/*
==============
PlayercardCache_Update
==============
*/

void __fastcall PlayercardCache_Update(const int controllerIndex)
{
  ?PlayercardCache_Update@@YAXH@Z(controllerIndex);
}

/*
==============
PlayercardCache_Upload_Cmd
==============
*/
bool *PlayercardCache_Upload_Cmd()
{
  LocalClientNum_t v0; 
  __int64 ControllerFromClient; 
  bool *result; 

  v0 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v0);
  result = s_needUpload;
  s_needUpload[ControllerFromClient] = 1;
  return result;
}

/*
==============
PlayercardCache_Download_Cmd
==============
*/
void PlayercardCache_Download_Cmd()
{
  LocalClientNum_t v0; 
  int ControllerFromClient; 

  v0 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v0);
  PlayercardCache_UpdateLocalPlayerCaching(ControllerFromClient);
}

/*
==============
PublicProfileInfo::PublicProfileInfo
==============
*/
void PublicProfileInfo::PublicProfileInfo(PublicProfileInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &PublicProfileInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &PublicProfileInfo::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->m_memberplayer_profile[248] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_memberplayer_profile[256] = 0;
  }
  bdProfileInfo::bdProfileInfo(this);
  this->__vftable = (PublicProfileInfo_vtbl *)&PublicProfileInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &PublicProfileInfo::`vftable'{for `bdSerializable'};
  *(PublicProfileInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (PublicProfileInfo_vtbl *)&PublicProfileInfo::`vftable'{for `bdReferencable'};
}

/*
==============
FindPlayercard
==============
*/
__int64 FindPlayercard(XUID userID)
{
  unsigned int v1; 
  XUID xuid; 

  xuid.m_id = userID.m_id;
  v1 = 0;
  while ( !XUID::operator==(&s_cached_playercards[v1].userID, &xuid) )
  {
    if ( (int)++v1 >= 1024 )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
PlayerCardData_GetCacheLocation
==============
*/
__int64 PlayerCardData_GetCacheLocation()
{
  return 0i64;
}

/*
==============
PlayercardCache_AddToDownload
==============
*/
void PlayercardCache_AddToDownload(const int controllerIndex, XUID userID)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  unsigned __int64 *downloading_users; 
  XUID xuid; 
  XUID result; 

  xuid.m_id = userID.m_id;
  v2 = 0;
  v3 = controllerIndex;
  v4 = controllerIndex;
  v5 = 0;
  if ( g_PlayerProfileCacheStore[v4].downloading_count <= 0 )
  {
LABEL_6:
    result.m_id = userID.m_id;
    while ( !XUID::operator==(&s_cached_playercards[v2].userID, &result) )
    {
      if ( ++v2 >= 1024 )
        goto LABEL_11;
    }
    if ( Sys_Milliseconds() - s_cached_playercards[v2].time < playercard_cache_validity_life->current.integer )
      return;
LABEL_11:
    if ( g_PlayerProfileCacheStore[v4].downloading_count != 200 )
      g_PlayerProfileCacheStore[v3].downloading_users[g_PlayerProfileCacheStore[v4].downloading_count++] = XUID::GetUniversalId(&xuid);
  }
  else
  {
    downloading_users = g_PlayerProfileCacheStore[v4].downloading_users;
    while ( 1 )
    {
      XUID::FromUniversalId(&result, *downloading_users);
      if ( XUID::operator==(&result, &xuid) )
        break;
      ++v5;
      ++downloading_users;
      if ( v5 >= g_PlayerProfileCacheStore[v4].downloading_count )
      {
        userID.m_id = xuid.m_id;
        goto LABEL_6;
      }
    }
  }
}

/*
==============
PlayercardCache_ClearEditPlayerCard
==============
*/
void PlayercardCache_ClearEditPlayerCard(const int controllerIndex)
{
  char nameBufferIn[64]; 

  if ( !Live_IsSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1841, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  Live_GetOnlineUserName(controllerIndex, nameBufferIn, 64);
  memset_0(&g_CachedPlayerProfileForEdit, 0, sizeof(g_CachedPlayerProfileForEdit));
  Core_strcpy(g_CachedPlayerProfileForEdit.name, 0x24ui64, nameBufferIn);
}

/*
==============
PlayercardCache_CommitPlayercardEdits
==============
*/
void PlayercardCache_CommitPlayercardEdits(const int controllerIndex)
{
  *(_DWORD *)&g_PlayerProfileCacheStore[controllerIndex].publicProfile._bytes_20[8] = PlayercardCache_CompressToBuffer(&g_CachedPlayerProfileForEdit, &g_PlayerProfileCacheStore[controllerIndex].publicProfile._bytes_20[13], 255) + 1;
}

/*
==============
PlayercardCache_CompressToBuffer
==============
*/
__int64 PlayercardCache_CompressToBuffer(const PlayerProfileData *playerProfile, unsigned __int8 *buffer, int bufferLen)
{
  int v4; 
  unsigned int RawHash; 
  unsigned int v12; 
  int v14; 
  int v15; 
  unsigned int v16; 
  unsigned __int16 v17; 
  unsigned int v18; 
  unsigned __int8 v19; 
  unsigned int v20; 
  unsigned __int16 v21; 
  unsigned int v22; 
  unsigned __int8 v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int *p_bodyModelIndex; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  unsigned int v37; 
  unsigned int v38; 
  DDLState toState; 
  DDLState fromState; 
  DDLState state; 
  DDLContext ddlContext; 
  DDLState v44; 
  DDLState v45; 
  DDLState result; 

  v4 = 0;
  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  toState.isValid = 0;
  __asm { vmovdqu xmmword ptr [rbp+60h+fromState.member], xmm0 }
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+160h+toState.member], xmm0 }
  v44.isValid = 0;
  v44.offset = 0;
  v44.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+60h+var_80.member], xmm0 }
  v45.isValid = 0;
  v45.offset = 0;
  v45.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+60h+var_60.member], xmm0 }
  if ( !s_playerProfileDDLDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1138, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef != nullptr)", (const char *)&queryFormat, "s_playerProfileDDLDef != nullptr") )
    __debugbreak();
  if ( s_playerProfileDDLDef->byteSize > bufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1139, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef->byteSize <= bufferLen)", (const char *)&queryFormat, "s_playerProfileDDLDef->byteSize <= bufferLen") )
    __debugbreak();
  DDL_ResetContext(buffer, bufferLen, s_playerProfileDDLDef, &ddlContext, NULL, NULL);
  _RAX = DDL_GetRootState(&result, s_playerProfileDDLDef);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+160h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(scr_const.customization_patch);
  DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
  v12 = j_SL_GetRawHash(scr_const.customization_background);
  DDL_MoveToNameByHash(&fromState, &v44, v12, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm
  {
    vmovdqu xmmword ptr [rbp+60h+state.member], xmm0
    vmovdqu xmmword ptr [rbp+60h+result.member], xmm0
  }
  result.isValid = 0;
  result.offset = 0;
  result.arrayIndex = -1;
  DDL_MoveToIndex(&toState, &state, 0);
  v14 = playerProfile->customization_patch[0];
  if ( (unsigned int)(v14 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v14, "signed", playerProfile->customization_patch[0]) )
    __debugbreak();
  DDL_SetShort(&state, &ddlContext, v14);
  DDL_MoveToIndex(&v44, &result, 0);
  v15 = playerProfile->customization_background[0];
  if ( (unsigned int)(v15 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v15, "signed", playerProfile->customization_background[0]) )
    __debugbreak();
  DDL_SetShort(&result, &ddlContext, v15);
  v16 = j_SL_GetRawHash(scr_const.rank_mp);
  DDL_MoveToNameByHash(&fromState, &toState, v16, NULL);
  v17 = truncate_cast<short,int>(playerProfile->rank_mp);
  DDL_SetShort(&toState, &ddlContext, v17);
  v18 = j_SL_GetRawHash(scr_const.prestige_mp);
  DDL_MoveToNameByHash(&fromState, &toState, v18, NULL);
  v19 = truncate_cast<unsigned char,int>(playerProfile->prestige_mp);
  DDL_SetByte(&toState, &ddlContext, v19);
  v20 = j_SL_GetRawHash(scr_const.rank_alien);
  DDL_MoveToNameByHash(&fromState, &toState, v20, NULL);
  v21 = truncate_cast<short,int>(playerProfile->rank_alien);
  DDL_SetShort(&toState, &ddlContext, v21);
  v22 = j_SL_GetRawHash(scr_const.prestige_alien);
  DDL_MoveToNameByHash(&fromState, &toState, v22, NULL);
  v23 = truncate_cast<unsigned char,int>(playerProfile->prestige_alien);
  DDL_SetByte(&toState, &ddlContext, v23);
  v24 = j_SL_GetRawHash(scr_const.name);
  DDL_MoveToNameByHash(&fromState, &toState, v24, NULL);
  DDL_SetString(&toState, &ddlContext, playerProfile->name);
  v25 = j_SL_GetRawHash(scr_const.clanAbbrev);
  DDL_MoveToNameByHash(&fromState, &toState, v25, NULL);
  DDL_SetString(&toState, &ddlContext, playerProfile->clanAbbrev);
  v26 = j_SL_GetRawHash(scr_const.clanTagType);
  DDL_MoveToNameByHash(&fromState, &toState, v26, NULL);
  DDL_SetByte(&toState, &ddlContext, playerProfile->clanTagType);
  v27 = j_SL_GetRawHash(scr_const.selectedOperatorIndexPublic);
  DDL_MoveToNameByHash(&fromState, &toState, v27, NULL);
  DDL_SetBool(&toState, &ddlContext, playerProfile->selectedOperatorIndexPublic);
  v28 = j_SL_GetRawHash(scr_const.selectedOperatorIndexPrivate);
  DDL_MoveToNameByHash(&fromState, &toState, v28, NULL);
  DDL_SetBool(&toState, &ddlContext, playerProfile->selectedOperatorIndexPrivate);
  p_bodyModelIndex = &playerProfile->customizationSets[0].customizationMPPrivate.bodyModelIndex;
  do
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+60h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v30 = j_SL_GetRawHash(scr_const.customizationSets);
    DDL_MoveToNameByHash(&fromState, &toState, v30, NULL);
    DDL_MoveToIndex(&toState, &toState, v4);
    v31 = j_SL_GetRawHash(scr_const.customization_mp_private);
    DDL_MoveToNameByHash(&toState, &v44, v31, NULL);
    v32 = j_SL_GetRawHash(scr_const.customization_mp_public);
    DDL_MoveToNameByHash(&toState, &v45, v32, NULL);
    if ( v44.member->arraySize != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1200, ASSERT_TYPE_ASSERT, "(currState2.member->arraySize == CUSTOMIZATION_TYPE_COUNT)", "%s\n\tDDL def doesnt match the customization struct def", "currState2.member->arraySize == CUSTOMIZATION_TYPE_COUNT") )
      __debugbreak();
    if ( v45.member->arraySize != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1201, ASSERT_TYPE_ASSERT, "(currState3.member->arraySize == CUSTOMIZATION_TYPE_COUNT)", "%s\n\tDDL def doesnt match the customization struct def", "currState3.member->arraySize == CUSTOMIZATION_TYPE_COUNT") )
      __debugbreak();
    DDL_MoveToIndex(&v44, &state, 0);
    v33 = *(p_bodyModelIndex - 1);
    if ( (unsigned int)(v33 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v33, "signed", *(p_bodyModelIndex - 1)) )
      __debugbreak();
    DDL_SetShort(&state, &ddlContext, v33);
    DDL_MoveToIndex(&v44, &state, 1);
    v34 = *p_bodyModelIndex;
    if ( (unsigned int)(*p_bodyModelIndex + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v34, "signed", *p_bodyModelIndex) )
      __debugbreak();
    DDL_SetShort(&state, &ddlContext, v34);
    DDL_MoveToIndex(&v45, &state, 0);
    v35 = *(p_bodyModelIndex - 4);
    if ( (unsigned int)(v35 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v35, "signed", *(p_bodyModelIndex - 4)) )
      __debugbreak();
    DDL_SetShort(&state, &ddlContext, v35);
    DDL_MoveToIndex(&v45, &state, 1);
    v36 = *(p_bodyModelIndex - 3);
    if ( (unsigned int)(v36 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v36, "signed", *(p_bodyModelIndex - 3)) )
      __debugbreak();
    DDL_SetShort(&state, &ddlContext, v36);
    v37 = j_SL_GetRawHash(scr_const.execution);
    DDL_MoveToNameByHash(&toState, &v44, v37, NULL);
    DDL_MoveToIndex(&v44, &v45, 0);
    DDL_SetInt(&v45, &ddlContext, p_bodyModelIndex[1]);
    DDL_MoveToIndex(&v44, &v45, 1);
    DDL_SetInt(&v45, &ddlContext, *(p_bodyModelIndex - 2));
    ++v4;
    p_bodyModelIndex += 6;
  }
  while ( v4 < 2 );
  v38 = j_SL_GetRawHash(scr_const.ucdID);
  DDL_MoveToNameByHash(&fromState, &toState, v38, NULL);
  DDL_SetUInt64(&toState, &ddlContext, playerProfile->ucdID);
  PlayercardCache_CompressToBuffer_WeaponSetup(&ddlContext, &fromState, playerProfile->weaponCustomizationPublic, &scr_const.weaponCustomizationPublic);
  PlayercardCache_CompressToBuffer_WeaponSetup(&ddlContext, &fromState, playerProfile->weaponCustomizationPrivate, &scr_const.weaponCustomizationPrivate);
  return (unsigned int)s_playerProfileDDLDef->byteSize;
}

/*
==============
PlayercardCache_CompressToBuffer_WeaponSetup
==============
*/
void PlayercardCache_CompressToBuffer_WeaponSetup(DDLContext *context, DDLState *rootState, const WeaponCustomizationSet *weaponCustomizationSet, const scr_string_t *customization)
{
  scr_string_t v7; 
  const WeaponCustomizationSet *v8; 
  unsigned int RawHash; 
  int ArraySize; 
  int v12; 
  int v13; 
  __int64 v14; 
  int *p_weapon; 
  unsigned int v16; 
  unsigned int v17; 
  const WeaponCustomizationSet *v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  int v23; 
  const char *v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  int v28; 
  unsigned __int8 *v29; 
  const char *attachment; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  __int64 v34; 
  DDLState state; 
  DDLState v36; 
  DDLState fromState; 
  DDLState v38; 
  DDLState toState; 

  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  v7 = *customization;
  v8 = weaponCustomizationSet;
  __asm { vmovdqu xmmword ptr [rbp+57h+toState.member], xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+fromState.member], xmm0 }
  state.isValid = 0;
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+state.member], xmm0 }
  toState.arrayIndex = -1;
  fromState.arrayIndex = -1;
  state.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(v7);
  DDL_MoveToNameByHash(rootState, &toState, RawHash, NULL);
  ArraySize = DDL_StateGetArraySize(&toState);
  v12 = 2;
  v13 = 0;
  v33 = 0;
  if ( ArraySize < 2 )
    v12 = ArraySize;
  v14 = v12;
  v34 = v12;
  if ( v12 > 0 )
  {
    p_weapon = &v8->weapon;
    do
    {
      DDL_MoveToIndex(&toState, &fromState, v13);
      v16 = j_SL_GetRawHash(scr_const.lootItemID);
      DDL_MoveToNameByHash(&fromState, &state, v16, NULL);
      DDL_SetInt(&state, context, *p_weapon);
      v17 = j_SL_GetRawHash(scr_const.weaponCamo);
      DDL_MoveToNameByHash(&fromState, &state, v17, NULL);
      v18 = &v8[v13];
      DDL_SetEnum(&state, context, v18->weaponCamo);
      v19 = j_SL_GetRawHash(scr_const.cosmeticAttachment);
      DDL_MoveToNameByHash(&fromState, &state, v19, NULL);
      DDL_SetEnum(&state, context, v18->cosmeticAttachment);
      v20 = j_SL_GetRawHash(scr_const.sticker);
      DDL_MoveToNameByHash(&fromState, &state, v20, NULL);
      v21 = DDL_StateGetArraySize(&state);
      v22 = 4;
      v23 = 0;
      if ( v21 < 4 )
        v22 = v21;
      if ( v22 > 0 )
      {
        v24 = v18->sticker[0];
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v36.isValid = 0;
          v36.offset = 0;
          v36.arrayIndex = -1;
          __asm { vmovdqu xmmword ptr [rbp+57h+var_A0.member], xmm0 }
          DDL_MoveToIndex(&state, &v36, v23);
          DDL_SetEnum(&v36, context, v24);
          ++v23;
          v24 += 1024;
        }
        while ( v23 < v22 );
        v14 = v34;
      }
      v25 = j_SL_GetRawHash(scr_const.attachmentSetup);
      DDL_MoveToNameByHash(&fromState, &state, v25, NULL);
      v26 = DDL_StateGetArraySize(&state);
      v27 = 5;
      if ( v26 < 5 )
        v27 = v26;
      v28 = 0;
      if ( v27 > 0 )
      {
        v29 = (unsigned __int8 *)(p_weapon + 513);
        attachment = v18->attachmentSetup[0].attachment;
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v36.isValid = 0;
          v36.offset = 0;
          v36.arrayIndex = -1;
          __asm
          {
            vmovdqu xmmword ptr [rbp+57h+var_A0.member], xmm0
            vmovdqu xmmword ptr [rbp+57h+var_60.member], xmm0
          }
          v38.isValid = 0;
          v38.offset = 0;
          v38.arrayIndex = -1;
          DDL_MoveToIndex(&state, &v36, v28);
          v31 = j_SL_GetRawHash(scr_const.attachment);
          DDL_MoveToNameByHash(&v36, &v38, v31, NULL);
          DDL_SetEnum(&v38, context, attachment);
          v32 = j_SL_GetRawHash(scr_const.variantID);
          DDL_MoveToNameByHash(&v36, &v38, v32, NULL);
          DDL_SetByte(&v38, context, *v29);
          ++v28;
          v29 += 1025;
          attachment += 1025;
        }
        while ( v28 < v27 );
        v14 = v34;
      }
      p_weapon += 2819;
      v8 = weaponCustomizationSet;
      v13 = v33 + 1;
      --v14;
      ++v33;
      v34 = v14;
    }
    while ( v14 );
  }
}

/*
==============
PlayercardCache_DefaultCard
==============
*/
void PlayercardCache_DefaultCard(PlayerProfileData *playerProfile, const char *name)
{
  memset_0(playerProfile, 0, sizeof(PlayerProfileData));
  Core_strcpy(playerProfile->name, 0x24ui64, name);
}

/*
==============
PlayercardCache_ExpireEntry
==============
*/
void PlayercardCache_ExpireEntry(XUID xuid)
{
  int v1; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v1 = 0;
  while ( !XUID::operator==(&s_cached_playercards[v1].userID, &xuida) )
  {
    if ( ++v1 >= 1024 )
      return;
  }
  s_cached_playercards[v1].time = ~playercard_cache_validity_life->current.integer + Sys_Milliseconds();
}

/*
==============
PlayercardCache_GetMPActiveCustomizationData
==============
*/
bool PlayercardCache_GetMPActiveCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  StatsGroup LoadoutStatsGroupForGameMode; 

  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 2362, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !customizationWest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 2363, ASSERT_TYPE_ASSERT, "(customizationWest)", (const char *)&queryFormat, "customizationWest") )
    __debugbreak();
  if ( !customizationEast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 2364, ASSERT_TYPE_ASSERT, "(customizationEast)", (const char *)&queryFormat, "customizationEast") )
    __debugbreak();
  if ( LoadoutStatsGroupForGameMode == STATSGROUP_RANKEDLOADOUTS )
    return PlayercardCache_GetMPPublicCustomizationData(xuid, name, selectedOperatorIndex, customizationWest, customizationEast);
  if ( LoadoutStatsGroupForGameMode == STATSGROUP_PRIVATELOADOUTS )
    return PlayercardCache_GetMPPrivateCustomizationData(xuid, name, selectedOperatorIndex, customizationWest, customizationEast);
  return 0;
}

/*
==============
PlayercardCache_GetMPPrivateCustomizationData
==============
*/
char PlayercardCache_GetMPPrivateCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  int executionId; 
  int v13; 
  PlayerProfileData profileData; 

  _RSI = customizationEast;
  _RDI = customizationWest;
  if ( !selectedOperatorIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 2327, ASSERT_TYPE_ASSERT, "(selectedOperatorIndex)", (const char *)&queryFormat, "selectedOperatorIndex") )
    __debugbreak();
  if ( !PlayercardCache_GetPlayercard(xuid, name, &profileData) )
    return 0;
  __asm { vmovsd  xmm0, qword ptr [rsp+0B128h+profileData.customizationSets.customizationMPPrivate.headModelIndex] }
  *selectedOperatorIndex = profileData.selectedOperatorIndexPrivate;
  executionId = profileData.customizationSets[0].customizationMPPrivate.executionId;
  __asm
  {
    vmovsd  qword ptr [rdi], xmm0
    vmovsd  xmm0, qword ptr [rsp+0B128h+profileData.customizationSets.customizationMPPrivate.headModelIndex+18h]
  }
  _RDI->executionId = executionId;
  v13 = profileData.customizationSets[1].customizationMPPrivate.executionId;
  __asm { vmovsd  qword ptr [rsi], xmm0 }
  customizationEast->executionId = v13;
  return 1;
}

/*
==============
PlayercardCache_GetMPPublicCustomizationData
==============
*/
char PlayercardCache_GetMPPublicCustomizationData(XUID xuid, const char *name, bool *selectedOperatorIndex, CustomizationModels *customizationWest, CustomizationModels *customizationEast)
{
  int executionId; 
  int v13; 
  PlayerProfileData profileData; 

  _RSI = customizationEast;
  _RDI = customizationWest;
  if ( !selectedOperatorIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 2345, ASSERT_TYPE_ASSERT, "(selectedOperatorIndex)", (const char *)&queryFormat, "selectedOperatorIndex") )
    __debugbreak();
  if ( !PlayercardCache_GetPlayercard(xuid, name, &profileData) )
    return 0;
  __asm { vmovsd  xmm0, qword ptr [rsp+0B128h+profileData.customizationSets.customizationMPPublic.headModelIndex] }
  *selectedOperatorIndex = profileData.selectedOperatorIndexPublic;
  executionId = profileData.customizationSets[0].customizationMPPublic.executionId;
  __asm
  {
    vmovsd  qword ptr [rdi], xmm0
    vmovsd  xmm0, qword ptr [rsp+0B128h+profileData.customizationSets.customizationMPPublic.headModelIndex+18h]
  }
  _RDI->executionId = executionId;
  v13 = profileData.customizationSets[1].customizationMPPublic.executionId;
  __asm { vmovsd  qword ptr [rsi], xmm0 }
  customizationEast->executionId = v13;
  return 1;
}

/*
==============
PlayercardCache_GetPlayercard
==============
*/
char PlayercardCache_GetPlayercard(XUID userID, const char *name, PlayerProfileData *profileData)
{
  int v5; 
  const char *v6; 
  __int64 v7; 
  const dvar_t *v8; 
  int *customization_background; 
  int v10; 
  int *customization_patch; 
  int v12; 
  XUID v14; 
  XUID xuid; 

  v14.m_id = userID.m_id;
  xuid.m_id = userID.m_id;
  v5 = 0;
  while ( !XUID::operator==(&s_cached_playercards[v5].userID, &xuid) )
  {
    if ( ++v5 >= 1024 )
      goto LABEL_4;
  }
  if ( v5 < 0 || (v7 = v5, !s_cached_playercards[v7].has_data) )
  {
LABEL_4:
    v6 = XUID::ToDevString(&v14);
    Com_Printf(25, "Player card not found for user [%s], setting default card from player card cache\n", v6);
    memset_0(profileData, 0, sizeof(PlayerProfileData));
    Core_strcpy(profileData->name, 0x24ui64, name);
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_LOOP|0x80) )
    {
      RandomizePatchBacking(name, 0, profileData->customization_patch, profileData->customization_background);
    }
    else
    {
      v8 = DCONST_DVARBOOL_cl_devLoadPlayerCards;
      if ( !DCONST_DVARBOOL_cl_devLoadPlayerCards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_devLoadPlayerCards") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        customization_background = profileData->customization_background;
        v10 = XUID::ToUint64(&v14);
        customization_patch = profileData->customization_patch;
        if ( !customization_patch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1830, ASSERT_TYPE_ASSERT, "( ( out_patch != nullptr ) )", "( out_patch ) = %p", NULL) )
          __debugbreak();
        if ( !customization_background && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1831, ASSERT_TYPE_ASSERT, "( ( out_backing != nullptr ) )", "( out_backing ) = %p", NULL) )
          __debugbreak();
        v12 = 214013 * v10;
        *customization_background = (v12 + 2531011) % PlayerCards_GetBackgroundCount();
        *customization_patch = (v12 + 2531011) % PlayerCards_GetPatchCount();
      }
    }
    return 1;
  }
  if ( !ReadPlayerProfileFromDDL(&s_cached_playercards[v7].profile[1], profileData) )
    Com_Printf(25, "Unable to read player profile from DDL\n");
  return 1;
}

/*
==============
PlayercardCache_GetPlayercard_ForEdit
==============
*/
PlayerProfileData *PlayercardCache_GetPlayercard_ForEdit()
{
  return &g_CachedPlayerProfileForEdit;
}

/*
==============
PlayercardCache_GetPlayercard_Patch_Backing
==============
*/
char PlayercardCache_GetPlayercard_Patch_Backing(XUID userID, const char *name, int mode, int *out_patch, int *out_backing)
{
  int Short; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  __int64 v15; 
  unsigned int RawHash; 
  unsigned int v20; 
  int v23; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v26; 
  DDLState state; 
  DDLState v28; 
  DDLContext ddlContext; 
  DDLState result; 
  int v31; 
  int out_patcha; 
  XUID xuid; 

  if ( mode )
  {
    v23 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1762, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( PLAYERCARDCACHE_COUNT )", "mode doesn't index PLAYERCARDCACHE_COUNT\n\t%i not in [0, %i)", mode, v23) )
      __debugbreak();
  }
  Short = 0;
  xuid.m_id = userID.m_id;
  v11 = 0;
  out_patcha = 0;
  v31 = 0;
  v12 = 0;
  while ( !XUID::operator==(&s_cached_playercards[v12].userID, &xuid) )
  {
    if ( ++v12 >= 1024 )
      goto LABEL_7;
  }
  if ( v12 >= 0 )
  {
    v15 = v12;
    if ( s_cached_playercards[v15].has_data )
    {
      if ( !s_playerProfileDDLDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1777, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef != nullptr)", (const char *)&queryFormat, "s_playerProfileDDLDef != nullptr") )
        __debugbreak();
      if ( Com_DDL_CreateContext(&s_cached_playercards[v15].profile[1], 255, s_playerProfileDDLDef, &ddlContext, NULL, NULL) )
      {
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+160h+fromState.member], xmm0
          vmovdqu xmmword ptr [rsp+160h+toState.member], xmm0
          vmovdqu xmmword ptr [rbp+60h+var_E0.member], xmm0
        }
        fromState.isValid = 0;
        fromState.offset = 0;
        fromState.arrayIndex = -1;
        toState.isValid = 0;
        toState.offset = 0;
        toState.arrayIndex = -1;
        v26.isValid = 0;
        v26.offset = 0;
        v26.arrayIndex = -1;
        _RAX = DDL_GetRootState(&result, s_playerProfileDDLDef);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+160h+fromState.isValid], ymm0
        }
        RawHash = j_SL_GetRawHash(scr_const.customization_patch);
        DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
        v20 = j_SL_GetRawHash(scr_const.customization_background);
        DDL_MoveToNameByHash(&fromState, &v26, v20, NULL);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        state.isValid = 0;
        state.offset = 0;
        state.arrayIndex = -1;
        __asm
        {
          vmovdqu xmmword ptr [rbp+60h+state.member], xmm0
          vmovdqu xmmword ptr [rbp+60h+var_A0.member], xmm0
        }
        v28.isValid = 0;
        v28.offset = 0;
        v28.arrayIndex = -1;
        DDL_MoveToIndex(&toState, &state, mode);
        DDL_MoveToIndex(&v26, &v28, mode);
        Short = DDL_GetShort(&state, &ddlContext);
        v11 = DDL_GetShort(&v28, &ddlContext);
        goto LABEL_13;
      }
    }
  }
LABEL_7:
  v13 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled && Com_GameMode_SupportsFeature(WEAPON_STUNNED_LOOP|0x80) )
  {
    RandomizePatchBacking(name, mode, &out_patcha, &v31);
    Short = out_patcha;
    v11 = v31;
  }
LABEL_13:
  if ( Short >= 4096 )
    Short = 0;
  if ( v11 >= 0x8000 )
    v11 = 0;
  if ( out_patch )
    *out_patch = Short;
  if ( out_backing )
    *out_backing = v11;
  return 1;
}

/*
==============
PlayercardCache_GetRandomPatchAndBacking
==============
*/
void PlayercardCache_GetRandomPatchAndBacking(const unsigned int partyMemberIndex, int *out_patch, int *out_backing)
{
  unsigned int v6; 

  if ( !out_patch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1830, ASSERT_TYPE_ASSERT, "( ( out_patch != nullptr ) )", "( out_patch ) = %p", NULL) )
    __debugbreak();
  if ( !out_backing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1831, ASSERT_TYPE_ASSERT, "( ( out_backing != nullptr ) )", "( out_backing ) = %p", NULL) )
    __debugbreak();
  v6 = 214013 * partyMemberIndex;
  *out_backing = (v6 + 2531011) % PlayerCards_GetBackgroundCount();
  *out_patch = (v6 + 2531011) % PlayerCards_GetPatchCount();
}

/*
==============
PlayercardCache_GetUpdateNumber
==============
*/
unsigned __int8 PlayercardCache_GetUpdateNumber(XUID xuid)
{
  int v1; 
  unsigned __int8 result; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v1 = 0;
  while ( 1 )
  {
    result = XUID::operator==(&s_cached_playercards[v1].userID, &xuida);
    if ( result )
      break;
    if ( ++v1 >= 1024 )
      return result;
  }
  return s_cached_playercards[v1].profile[0];
}

/*
==============
PlayercardCache_HasLocalPlayercard
==============
*/
bool PlayercardCache_HasLocalPlayercard(const int controllerIndex)
{
  const XUID *Xuid; 
  int Playercard; 
  bool v4; 
  XUID userID; 
  XUID result; 

  XUID::XUID(&userID);
  if ( !Live_IsSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1911, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  v4 = 0;
  if ( Live_IsConnectedToDemonware(controllerIndex) )
  {
    Xuid = Live_GetXuid(&result, controllerIndex);
    XUID::operator=(&userID, Xuid);
    Playercard = FindPlayercard(userID);
    if ( Playercard >= 0 && s_cached_playercards[Playercard].has_data )
      return 1;
  }
  return v4;
}

/*
==============
PlayercardCache_Init
==============
*/
void PlayercardCache_Init(void)
{
  __int64 v0; 
  __int64 i; 
  __int64 v2; 

  Dvar_BeginPermanentRegistration();
  playercard_cache_show_cached = Dvar_RegisterBool("NPMOPRLMTK", 0, 0x2000u, "Shows whether a playercard is in the cache or not");
  Dvar_EndPermanentRegistration();
  v0 = 0i64;
  for ( i = 0i64; i < 8; ++i )
  {
    g_DWPlayercardCacheUploadTaskStage[v0] = PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE;
    g_DWPlayercardCacheDownloadTaskStage[v0] = PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE;
    g_PlayerProfileCacheStore[i].screen = PLAYERCARD_CACHE_SCREEN_NONE;
    g_PlayerProfileCacheStore[i].downloading_count = 0;
    g_PlayerProfileCacheStore[i].do_initial_cache = 1;
    s_playerCardCacheUploadRetryTime[v0] = 0;
    s_playerCardCacheUploadRetryAttempt[v0] = 0;
    s_playerCardCacheDownloadRetryTime[v0] = 0;
    s_playerCardCacheDownloadRetryAttempt[v0] = 0;
    s_playercardCache_partyUpdateAttemptCount[v0] = 0;
    s_playercardCache_partyUpdateTime[v0] = Sys_Milliseconds();
    if ( (unsigned __int64)i >= 8 )
    {
      j___report_rangecheckfailure(v2);
      JUMPOUT(0x142776D59i64);
    }
    s_needUpload[v0++] = 0;
  }
  memset_0(s_cached_playercards, 0, sizeof(s_cached_playercards));
}

/*
==============
PlayercardCache_InitAssetCache
==============
*/
void PlayercardCache_InitAssetCache(void)
{
  int BackgroundCount; 
  int v1; 
  int PatchCount; 
  int v3; 
  int v4; 
  unsigned int v5; 
  int v6; 
  signed int v7; 
  int v8; 
  signed int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 

  if ( s_playerProfileDDLDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 286, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef == nullptr)", (const char *)&queryFormat, "s_playerProfileDDLDef == nullptr") )
    __debugbreak();
  if ( s_totalBackgroundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 287, ASSERT_TYPE_ASSERT, "(s_totalBackgroundCount == 0)", (const char *)&queryFormat, "s_totalBackgroundCount == 0") )
    __debugbreak();
  if ( s_totalPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 288, ASSERT_TYPE_ASSERT, "(s_totalPatchCount == 0)", (const char *)&queryFormat, "s_totalPatchCount == 0") )
    __debugbreak();
  if ( s_randomBackgroundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 289, ASSERT_TYPE_ASSERT, "(s_randomBackgroundCount == 0)", (const char *)&queryFormat, "s_randomBackgroundCount == 0") )
    __debugbreak();
  if ( s_randomPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 290, ASSERT_TYPE_ASSERT, "(s_randomPatchCount == 0)", (const char *)&queryFormat, "s_randomPatchCount == 0") )
    __debugbreak();
  s_playerProfileDDLDef = Com_DDL_LoadAsset("ddl/mp/playerprofile.ddl");
  BackgroundCount = PlayerCards_GetBackgroundCount();
  v1 = 2048;
  s_totalBackgroundCount = BackgroundCount;
  if ( BackgroundCount > 2048 )
  {
    v15 = 2048;
    v13 = BackgroundCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 301, ASSERT_TYPE_ASSERT, "(s_totalBackgroundCount <= 2048)", "%s\n\tToo many player card backgrounds, found %d in csv, max in code is %d\n", "s_totalBackgroundCount <= MAX_BACKGROUNDS_CACHED", v13, v15) )
      __debugbreak();
  }
  PatchCount = PlayerCards_GetPatchCount();
  s_totalPatchCount = PatchCount;
  v3 = PatchCount;
  if ( PatchCount > 2048 )
  {
    LODWORD(v14) = 2048;
    LODWORD(v12) = PatchCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 303, ASSERT_TYPE_ASSERT, "(s_totalPatchCount <= 2048)", "%s\n\tToo many emblems, found %d in csv, max in code is %d\n", "s_totalPatchCount <= MAX_PATCHES_CACHED", v12, v14) )
      __debugbreak();
    v3 = s_totalPatchCount;
  }
  v4 = s_totalBackgroundCount;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( s_totalBackgroundCount > 0 )
  {
    do
    {
      if ( !PlayerCards_GetBackgroundHideUnlessUnlocked(v7) )
        ++v6;
      v4 = s_totalBackgroundCount;
      ++v7;
    }
    while ( v7 < s_totalBackgroundCount );
    v3 = s_totalPatchCount;
  }
  s_randomBackgroundCount = v6;
  v8 = 0;
  v9 = 0;
  if ( v3 > 0 )
  {
    do
    {
      if ( !PlayerCards_GetPatchHideUnlessUnlocked(v9) )
        ++v8;
      v3 = s_totalPatchCount;
      ++v9;
    }
    while ( v9 < s_totalPatchCount );
    v4 = s_totalBackgroundCount;
  }
  s_randomPatchCount = v8;
  memset_0(s_hidePatchUnlessUnlocked, 0, sizeof(s_hidePatchUnlessUnlocked));
  memset_0(s_hideBackgroundUnlessUnlocked, 0, sizeof(s_hideBackgroundUnlessUnlocked));
  v10 = 2048;
  if ( v3 < 2048 )
    v10 = v3;
  v11 = 0;
  if ( v10 > 0 )
  {
    do
    {
      if ( PlayerCards_GetPatchHideUnlessUnlocked(v11) )
        s_hidePatchUnlessUnlocked[(unsigned __int64)v11 >> 3] |= 1 << (v11 & 7);
      ++v11;
    }
    while ( (int)v11 < v10 );
    v4 = s_totalBackgroundCount;
  }
  if ( v4 < 2048 )
    v1 = v4;
  if ( v1 > 0 )
  {
    do
    {
      if ( PlayerCards_GetBackgroundHideUnlessUnlocked(v5) )
        s_hideBackgroundUnlessUnlocked[(unsigned __int64)v5 >> 3] |= 1 << (v5 & 7);
      ++v5;
    }
    while ( (int)v5 < v1 );
  }
}

/*
==============
PlayercardCache_InitCaching
==============
*/
void PlayercardCache_InitCaching(const int controllerIndex)
{
  int actualIndex; 
  __int64 v2; 
  int count; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  bool *p_do_initial_cache; 
  Online_Friends *v7; 
  FriendListGlobal *v8; 
  XUID *v9; 
  int *sortedFriends; 
  __int64 v11; 

  actualIndex = 0;
  v2 = controllerIndex;
  count = 0;
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, v2);
  p_do_initial_cache = &g_PlayerProfileCacheStore[v2].do_initial_cache;
  g_PlayerProfileCacheStore[v2].screen = PLAYERCARD_CACHE_SCREEN_NONE;
  if ( *p_do_initial_cache )
  {
    v7 = Online_Friends::GetInstance();
    v8 = Online_Friends::GetFriends(v7, v2);
    count = v8->count;
    actualIndex = v8->actualIndex;
    if ( count > 0 )
    {
      g_PlayerProfileCacheStore[v2].last_pivot = actualIndex;
      v9 = g_currentUserList;
      sortedFriends = Friends->sortedFriends;
      v11 = (unsigned int)count;
      do
      {
        XUID::operator=(v9++, &Friends->friends[*sortedFriends++]);
        --v11;
      }
      while ( v11 );
    }
    *p_do_initial_cache = 0;
  }
  PlayercardCache_UpdateCachingInternal(v2, actualIndex, count);
}

/*
==============
PlayercardCache_IsPivotWithinThreshold
==============
*/
bool PlayercardCache_IsPivotWithinThreshold(const int controllerIndex, const int pivot, const int size)
{
  int last_pivot; 
  int v4; 
  int v5; 
  int v6; 

  last_pivot = g_PlayerProfileCacheStore[controllerIndex].last_pivot;
  v4 = last_pivot - pivot + size;
  if ( last_pivot - pivot >= 0 )
    v4 = last_pivot - pivot;
  v5 = pivot - last_pivot;
  v6 = v5 + size;
  if ( v5 >= 0 )
    v6 = v5;
  if ( v4 < v6 )
    v6 = v4;
  return v6 < 6;
}

/*
==============
PlayercardCache_IsUploadRequested
==============
*/
_BOOL8 PlayercardCache_IsUploadRequested(const int controllerIndex)
{
  return s_needUpload[controllerIndex];
}

/*
==============
PlayercardCache_IsUserDownloading
==============
*/
char PlayercardCache_IsUserDownloading(const int controllerIndex, const unsigned __int64 userID)
{
  __int64 v2; 
  __int64 downloading_count; 
  __int64 v4; 
  unsigned __int64 *i; 

  v2 = controllerIndex;
  downloading_count = g_PlayerProfileCacheStore[v2].downloading_count;
  if ( downloading_count <= 0 )
    return 0;
  v4 = 0i64;
  for ( i = g_PlayerProfileCacheStore[v2].downloading_users; *i != userID; ++i )
  {
    if ( ++v4 >= downloading_count )
      return 0;
  }
  return 1;
}

/*
==============
PlayercardCache_LoadPlayercard_ForEdit
==============
*/
PlayerProfileData *PlayercardCache_LoadPlayercard_ForEdit(const int controllerIndex)
{
  const XUID *Xuid; 
  int v3; 
  __int64 v5; 
  XUID v6; 
  XUID result; 
  char nameBufferIn[64]; 

  XUID::XUID(&v6);
  if ( !Live_IsSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1854, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  Xuid = Live_GetXuid(&result, controllerIndex);
  XUID::operator=(&v6, Xuid);
  Live_GetOnlineUserName(controllerIndex, nameBufferIn, 64);
  result.m_id = v6.m_id;
  v3 = 0;
  while ( !XUID::operator==(&s_cached_playercards[v3].userID, &result) )
  {
    if ( ++v3 >= 1024 )
      goto LABEL_7;
  }
  if ( v3 < 0 || (v5 = v3, !s_cached_playercards[v5].has_data) )
  {
LABEL_7:
    memset_0(&g_CachedPlayerProfileForEdit, 0, sizeof(g_CachedPlayerProfileForEdit));
    Core_strcpy(g_CachedPlayerProfileForEdit.name, 0x24ui64, nameBufferIn);
    return &g_CachedPlayerProfileForEdit;
  }
  if ( !ReadPlayerProfileFromDDL(&s_cached_playercards[v5].profile[1], &g_CachedPlayerProfileForEdit) )
    Com_Printf(25, "Unable to read player profile from DDL\n");
  return &g_CachedPlayerProfileForEdit;
}

/*
==============
PlayercardCache_MarkPartyDirty
==============
*/
void PlayercardCache_MarkPartyDirty(const int controllerIndex, const int source)
{
  __int64 v2; 

  if ( playercard_cache_party_update_mode )
  {
    if ( (source & playercard_cache_party_update_mode->current.integer) != 0 )
    {
      v2 = controllerIndex;
      s_playercardCache_partyUpdateAttemptCount[v2] = 3;
      s_playercardCache_partyUpdateTime[v2] = playercard_cache_party_fetch_attempt_delay->current.integer + Sys_Milliseconds();
    }
  }
}

/*
==============
PlayercardCache_RegisterCommands
==============
*/
void PlayercardCache_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_PLAYERCARD_CACHE_CMD, 2u);
}

/*
==============
PlayercardCache_RequestUpload
==============
*/
void PlayercardCache_RequestUpload(const int controllerIndex)
{
  s_needUpload[controllerIndex] = 1;
}

/*
==============
PlayercardCache_RetryDownload
==============
*/
void PlayercardCache_RetryDownload(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v3; 
  int integer; 
  int v5; 

  v1 = controllerIndex;
  v2 = playercard_cache_download_retry_step;
  v3 = v2->current.integer << ++s_playerCardCacheDownloadRetryAttempt[v1];
  integer = playercard_cache_download_max_retry_time->current.integer;
  v5 = Sys_Milliseconds();
  g_DWPlayercardCacheDownloadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
  if ( v3 >= integer )
    v3 = integer;
  s_playerCardCacheDownloadRetryTime[v1] = v3 + v5;
}

/*
==============
PlayercardCache_RetryUpload
==============
*/
void PlayercardCache_RetryUpload(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v3; 
  int integer; 
  int v5; 

  v1 = controllerIndex;
  v2 = playercard_cache_upload_retry_step;
  v3 = v2->current.integer << ++s_playerCardCacheUploadRetryAttempt[v1];
  integer = playercard_cache_upload_max_retry_time->current.integer;
  v5 = Sys_Milliseconds();
  g_DWPlayercardCacheUploadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
  if ( v3 >= integer )
    v3 = integer;
  s_playerCardCacheUploadRetryTime[v1] = v3 + v5;
}

/*
==============
PlayercardCache_SetFavoriteLoadout
==============
*/
void PlayercardCache_SetFavoriteLoadout(const int controllerIndex, const int loadoutIndex)
{
  StatsGroup LoadoutStatsGroupForGameMode; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v13; 
  unsigned int v15; 
  unsigned int v17; 
  unsigned int v20; 
  WeaponCustomizationSet *weaponCustomizationPrivate; 
  int v22; 
  char *cosmeticAttachment; 
  unsigned int v26; 
  const char *Enum; 
  unsigned int v29; 
  unsigned int Int; 
  const char *v31; 
  unsigned int v33; 
  int v34; 
  scr_string_t camo; 
  unsigned int v37; 
  const char *v38; 
  unsigned int v40; 
  const char *v41; 
  unsigned int v43; 
  int ArraySize; 
  int v45; 
  int v46; 
  char *v47; 
  const char *v48; 
  unsigned int v49; 
  int v50; 
  int v51; 
  int v52; 
  unsigned __int8 *p_variantID; 
  char *v54; 
  unsigned int v57; 
  const char *v58; 
  unsigned int v59; 
  DDLState v60; 
  DDLState v61; 
  StringTable *tablePtr; 
  DDLState fromState; 
  DDLState v64; 
  DDLState v65; 
  DDLContext context; 
  DDLState toState; 
  DDLState state; 
  DDLState v69; 
  DDLState v70; 
  DDLState v71; 
  DDLState v72; 
  DDLState v73; 
  DDLState v74; 
  DDLState v75; 
  DDLState v76; 
  DDLState v77; 
  DDLState v78; 
  DDLState result; 
  char dest[256]; 
  char src[256]; 

  LoadoutStatsGroupForGameMode = Com_PlayerData_GetLoadoutStatsGroupForGameMode();
  if ( (unsigned int)(LoadoutStatsGroupForGameMode - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1939, ASSERT_TYPE_ASSERT, "(statsGroup == StatsGroup::STATSGROUP_RANKEDLOADOUTS || statsGroup == StatsGroup::STATSGROUP_PRIVATELOADOUTS)", (const char *)&queryFormat, "statsGroup == StatsGroup::STATSGROUP_RANKEDLOADOUTS || statsGroup == StatsGroup::STATSGROUP_PRIVATELOADOUTS") )
    __debugbreak();
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, LoadoutStatsGroupForGameMode) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    fromState.offset = 0;
    fromState.isValid = 0;
    fromState.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rbp+3F0h+fromState.member], xmm0 }
    _RAX = DDL_GetRootState(&result, context.def);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+4F0h+fromState.isValid], ymm0
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+3F0h+toState.member], xmm0
    }
    toState.isValid = 0;
    toState.offset = 0;
    toState.arrayIndex = -1;
    RawHash = j_SL_GetRawHash(scr_const.customizationFavorites);
    DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+3F0h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v13 = j_SL_GetRawHash(scr_const.favoriteLoadoutIndex);
    DDL_MoveToNameByHash(&toState, &state, v13, NULL);
    DDL_SetInt(&state, &context, loadoutIndex);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+3F0h+var_3A8.member], xmm0
    }
    v69.isValid = 0;
    v69.offset = 0;
    v69.arrayIndex = -1;
    v15 = j_SL_GetRawHash(scr_const.squadMembers);
    DDL_MoveToNameByHash(&fromState, &v69, v15, NULL);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+3F0h+var_388.member], xmm0
    }
    v70.isValid = 0;
    v70.offset = 0;
    v70.arrayIndex = -1;
    v17 = j_SL_GetRawHash(scr_const.loadouts);
    DDL_MoveToNameByHash(&v69, &v70, v17, NULL);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v71.isValid = 0;
    v71.offset = 0;
    v71.arrayIndex = -1;
    __asm { vmovdqu xmmword ptr [rbp+3F0h+var_368.member], xmm0 }
    if ( DDL_MoveToIndex(&v70, &v71, loadoutIndex) )
    {
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+3F0h+var_348.member], xmm0
      }
      v72.isValid = 0;
      v72.offset = 0;
      v72.arrayIndex = -1;
      v20 = j_SL_GetRawHash(scr_const.weaponSetups);
      DDL_MoveToNameByHash(&v71, &v72, v20, NULL);
      weaponCustomizationPrivate = g_CachedPlayerProfileForEdit.weaponCustomizationPrivate;
      if ( LoadoutStatsGroupForGameMode != STATSGROUP_PRIVATELOADOUTS )
        weaponCustomizationPrivate = g_CachedPlayerProfileForEdit.weaponCustomizationPublic;
      StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&tablePtr);
      v22 = 0;
      cosmeticAttachment = weaponCustomizationPrivate->cosmeticAttachment;
      do
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        v61.isValid = 0;
        v61.offset = 0;
        v61.arrayIndex = -1;
        __asm { vmovdqu xmmword ptr [rsp+4F0h+var_4A0.member], xmm0 }
        DDL_MoveToIndex(&v72, &v61, v22);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_328.member], xmm0
        }
        v73.isValid = 0;
        v73.offset = 0;
        v73.arrayIndex = -1;
        v26 = j_SL_GetRawHash(scr_const.weapon);
        DDL_MoveToNameByHash(&v61, &v73, v26, NULL);
        Enum = DDL_GetEnum(&v73, &context);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_308.member], xmm0
        }
        v74.isValid = 0;
        v74.offset = 0;
        v74.arrayIndex = -1;
        v29 = j_SL_GetRawHash(scr_const.variantID);
        DDL_MoveToNameByHash(&v61, &v74, v29, NULL);
        Int = DDL_GetInt(&v74, &context);
        memset_0(dest, 0, sizeof(dest));
        I_strcat(dest, 0x100ui64, Enum);
        I_strcat(dest, 0x100ui64, "_variant_");
        memset_0(src, 0, sizeof(src));
        Com_sprintf(src, 0x100ui64, "%i", Int);
        I_strcat(dest, 0x100ui64, src);
        v31 = StringTable_Lookup(tablePtr, 6, dest, 0);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+result.member], xmm0
        }
        result.isValid = 0;
        result.offset = 0;
        result.arrayIndex = -1;
        v33 = j_SL_GetRawHash(scr_const.lootItemID);
        DDL_MoveToNameByHash(&v61, &result, v33, NULL);
        v34 = atoi(v31);
        camo = scr_const.camo;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_2E8.member], xmm0
        }
        weaponCustomizationPrivate->weapon = v34;
        v75.isValid = 0;
        v75.offset = 0;
        v75.arrayIndex = -1;
        v37 = j_SL_GetRawHash(camo);
        DDL_MoveToNameByHash(&v61, &v75, v37, NULL);
        v38 = DDL_GetEnum(&v75, &context);
        Core_strcpy(cosmeticAttachment - 10245, 0x400ui64, v38);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_2C8.member], xmm0
        }
        v76.isValid = 0;
        v76.offset = 0;
        v76.arrayIndex = -1;
        v40 = j_SL_GetRawHash(scr_const.cosmeticAttachment);
        DDL_MoveToNameByHash(&v61, &v76, v40, NULL);
        v41 = DDL_GetEnum(&v76, &context);
        Core_strcpy(cosmeticAttachment, 0x400ui64, v41);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_458.member], xmm0
        }
        v64.isValid = 0;
        v64.offset = 0;
        v64.arrayIndex = -1;
        v43 = j_SL_GetRawHash(scr_const.sticker);
        DDL_MoveToNameByHash(&v61, &v64, v43, NULL);
        ArraySize = DDL_StateGetArraySize(&v64);
        v45 = 4;
        v46 = 0;
        if ( ArraySize < 4 )
          v45 = ArraySize;
        if ( v45 > 0 )
        {
          v47 = cosmeticAttachment - 4096;
          do
          {
            __asm { vpxor   xmm0, xmm0, xmm0 }
            v60.isValid = 0;
            v60.offset = 0;
            v60.arrayIndex = -1;
            __asm { vmovdqu xmmword ptr [rsp+4F0h+var_4C0.member], xmm0 }
            DDL_MoveToIndex(&v64, &v60, v46);
            v48 = DDL_GetEnum(&v60, &context);
            Core_strcpy(v47, 0x400ui64, v48);
            ++v46;
            v47 += 1024;
          }
          while ( v46 < v45 );
        }
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+3F0h+var_438.member], xmm0
        }
        v65.isValid = 0;
        v65.offset = 0;
        v65.arrayIndex = -1;
        v49 = j_SL_GetRawHash(scr_const.attachmentSetup);
        DDL_MoveToNameByHash(&v61, &v65, v49, NULL);
        v50 = DDL_StateGetArraySize(&v65);
        v51 = 5;
        if ( v50 < 5 )
          v51 = v50;
        v52 = 0;
        if ( v51 > 0 )
        {
          p_variantID = &weaponCustomizationPrivate->attachmentSetup[0].variantID;
          v54 = cosmeticAttachment - 9221;
          do
          {
            __asm { vpxor   xmm0, xmm0, xmm0 }
            v60.isValid = 0;
            v60.offset = 0;
            v60.arrayIndex = -1;
            __asm { vmovdqu xmmword ptr [rsp+4F0h+var_4C0.member], xmm0 }
            DDL_MoveToIndex(&v65, &v60, v52);
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu xmmword ptr [rbp+3F0h+var_2A8.member], xmm0
            }
            v77.isValid = 0;
            v77.offset = 0;
            v77.arrayIndex = -1;
            v57 = j_SL_GetRawHash(scr_const.attachment);
            DDL_MoveToNameByHash(&v60, &v77, v57, NULL);
            v58 = DDL_GetEnum(&v77, &context);
            Core_strcpy(v54, 0x400ui64, v58);
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu xmmword ptr [rbp+3F0h+var_288.member], xmm0
            }
            v78.isValid = 0;
            v78.offset = 0;
            v78.arrayIndex = -1;
            v59 = j_SL_GetRawHash(scr_const.variantID);
            DDL_MoveToNameByHash(&v60, &v78, v59, NULL);
            ++v52;
            *p_variantID = DDL_GetByte(&v78, &context);
            v54 += 1025;
            p_variantID += 1025;
          }
          while ( v52 < v51 );
        }
        ++v22;
        cosmeticAttachment += 11276;
        ++weaponCustomizationPrivate;
      }
      while ( v22 < 2 );
    }
    else
    {
      Com_PrintError(25, "Unable to set favorite loadout to %d.\n", (unsigned int)loadoutIndex);
    }
  }
  else
  {
    Com_Printf(16, "PlayercardCache_SetFavoriteLoadout: Can't get persistent data for controller %d\n", (unsigned int)controllerIndex);
  }
}

/*
==============
PlayercardCache_Shutdown
==============
*/
void PlayercardCache_Shutdown(void)
{
  __int64 i; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v2; 
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 

  for ( i = 0i64; i < 8; ++i )
  {
    m_ptr = g_DWPlayercardCacheUploadTask[i].m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v2 = g_DWPlayercardCacheUploadTask[i].m_ptr;
        if ( v2 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v2->~bdReferencable)(v2, 1i64);
      }
      g_DWPlayercardCacheUploadTask[i].m_ptr = NULL;
    }
    v3 = g_DWPlayercardCacheDownloadTask[i].m_ptr;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v4 = g_DWPlayercardCacheDownloadTask[i].m_ptr;
        if ( v4 )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v4->~bdReferencable)(v4, 1i64);
      }
      g_DWPlayercardCacheDownloadTask[i].m_ptr = NULL;
    }
  }
}

/*
==============
PlayercardCache_ShutdownAssetCache
==============
*/
void PlayercardCache_ShutdownAssetCache(void)
{
  s_playerProfileDDLDef = NULL;
  s_totalBackgroundCount = 0;
  s_totalPatchCount = 0;
  s_randomBackgroundCount = 0;
  s_randomPatchCount = 0;
}

/*
==============
PlayercardCache_TouchMaterials
==============
*/
void PlayercardCache_TouchMaterials(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
PlayercardCache_TriggerCachedDownload
==============
*/
void PlayercardCache_TriggerCachedDownload(const int controllerIndex)
{
  const dvar_t *v1; 
  __int64 v2; 

  v1 = DVARBOOL_enable_leaderboard_playercards;
  v2 = controllerIndex;
  if ( !DVARBOOL_enable_leaderboard_playercards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enable_leaderboard_playercards") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && g_DWPlayercardCacheDownloadTaskStage[v2] == PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE && g_PlayerProfileCacheStore[v2].downloading_count > 0 )
    g_DWPlayercardCacheDownloadTaskStage[v2] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
}

/*
==============
PlayercardCache_UnregisterCommands
==============
*/
void PlayercardCache_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_PLAYERCARD_CACHE_CMD, 2u);
}

/*
==============
PlayercardCache_Update
==============
*/
void PlayercardCache_Update(const int controllerIndex)
{
  __int64 v1; 
  PublisherVariableManager *Instance; 
  DWServicesAccess *v3; 
  PartyData *ActiveParty; 
  int i; 
  int v6; 
  PLAYERCARD_CACHE_TASK_STAGE v7; 
  int v8; 
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v10; 
  bdLobbyErrorCode ErrorCode; 
  DWServicesAccess *v12; 
  DWServicesAccess *v13; 
  DWProfiles *Profiles; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> *v16; 
  XUID result; 
  bdReference<bdRemoteTask> v18; 

  v1 = controllerIndex;
  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) && Live_IsUserSignedInToLive(v1) )
  {
    v3 = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(v3, v1) )
    {
      if ( s_needUpload[v1] )
        s_needUpload[v1] = !PlayercardCache_Upload(v1);
      if ( s_playercardCache_partyUpdateAttemptCount[v1] > 0 && Sys_Milliseconds() - s_playercardCache_partyUpdateTime[v1] > 0 )
      {
        ActiveParty = Party_GetActiveParty();
        PlayercardCache_UpdatePartyCaching(v1, ActiveParty);
      }
      if ( OnlineTournament_IsInTournament() && g_DWPlayercardCacheDownloadTaskStage[v1] == PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE )
      {
        for ( i = 0; i < OnlineTournament_GetParticipantCount(); ++i )
        {
          OnlineTournament_GetParticipant(&result, i);
          if ( !XUID::IsNull(&result) )
            PlayercardCache_AddToDownload(v1, result);
        }
        if ( g_PlayerProfileCacheStore[v1].downloading_count > 0 )
          g_DWPlayercardCacheDownloadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
      }
      v6 = Sys_Milliseconds();
      v7 = g_DWPlayercardCacheUploadTaskStage[v1];
      v8 = v6;
      if ( v7 )
      {
        if ( v7 != PLAYERCARD_CACHE_TASK_STAGE_WORKING )
          goto LABEL_35;
        m_ptr = g_DWPlayercardCacheUploadTask[v1].m_ptr;
        if ( !m_ptr )
          goto LABEL_35;
        v10 = m_ptr->getStatus(m_ptr);
        if ( v10 == BD_PENDING )
          goto LABEL_35;
        ErrorCode = bdRemoteTask::getErrorCode(g_DWPlayercardCacheUploadTask[v1].m_ptr);
        if ( v10 == BD_DONE && ErrorCode == BD_NO_ERROR )
        {
          g_DWPlayercardCacheUploadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE;
LABEL_35:
          PlayercardCache_UpdateDownloads(v1);
          return;
        }
      }
      else
      {
        v12 = DWServicesAccess::GetInstance();
        if ( !DWServicesAccess::isReady(v12, v1) || !Com_FrontEnd_IsInFrontEnd() || v8 <= s_playerCardCacheUploadRetryTime[v1] )
          goto LABEL_35;
        v13 = DWServicesAccess::GetInstance();
        Profiles = DWServicesAccess::GetProfiles(v13, v1);
        v15 = DWProfiles::setPublicInfo(Profiles, &v18, &g_PlayerProfileCacheStore[v1].publicProfile);
        v16 = &g_DWPlayercardCacheUploadTask[v1];
        bdReference<bdRemoteTask>::operator=(v16, v15);
        if ( v18.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v18.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v18.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))v18.m_ptr->~bdReferencable)(v18.m_ptr, 1i64);
        Com_Printf(25, "Uploading playercard\n");
        if ( v16->m_ptr && v16->m_ptr->getStatus(v16->m_ptr) == BD_PENDING )
        {
          g_DWPlayercardCacheUploadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WORKING;
          goto LABEL_35;
        }
      }
      PlayercardCache_RetryUpload(v1);
      goto LABEL_35;
    }
  }
}

/*
==============
PlayercardCache_UpdateCachingInternal
==============
*/
void PlayercardCache_UpdateCachingInternal(const int controllerIndex, int pivot, int size)
{
  __int64 v3; 
  __int64 v5; 
  char v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  char v11; 
  unsigned int v12; 
  int downloading_count; 
  int v14; 
  bool v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 

  v3 = controllerIndex;
  v5 = controllerIndex;
  g_PlayerProfileCacheStore[v5].last_size = size;
  if ( size )
  {
    v6 = 0;
    v19 = I_clamp(pivot, 0, size - 1);
    v7 = v19;
    v8 = v19 + 1 - size;
    if ( v19 + 1 < size )
      v8 = v19 + 1;
    do
    {
      v9 = v7;
      if ( v8 >= size )
      {
        LODWORD(v18) = size;
        LODWORD(v17) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( fwd ) < (unsigned)( size )", "fwd doesn't index size\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( v7 >= size )
      {
        LODWORD(v18) = size;
        LODWORD(v17) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 526, ASSERT_TYPE_ASSERT, "(unsigned)( back ) < (unsigned)( size )", "back doesn't index size\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      PlayercardCache_AddToDownload(v3, g_currentUserList[v8]);
      PlayercardCache_AddToDownload(v3, g_currentUserList[v7]);
      v10 = v8 + 1;
      v11 = v6;
      v12 = v8 + 1;
      downloading_count = g_PlayerProfileCacheStore[v5].downloading_count;
      if ( downloading_count == 200 )
        v11 = 1;
      v8 = v12 - size;
      v6 = v11;
      if ( v10 < size )
        v8 = v10;
      v14 = v7 - 1;
      v15 = v7 == v8;
      v16 = size - 1;
      if ( v15 )
        v6 = 1;
      if ( v14 >= 0 )
        v16 = -1;
      v7 = v9 + v16;
      if ( (size & 1) == 0 && v7 == v8 )
        v6 = 1;
    }
    while ( !v6 );
    if ( downloading_count )
    {
      g_PlayerProfileCacheStore[v5].last_pivot = v19;
      g_DWPlayercardCacheDownloadTaskStage[v3] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
    }
  }
}

/*
==============
PlayercardCache_UpdateDownloads
==============
*/
void PlayercardCache_UpdateDownloads(const int controllerIndex)
{
  __int64 v1; 
  int v2; 
  PLAYERCARD_CACHE_TASK_STAGE v3; 
  bdRemoteTask *v4; 
  __int32 v5; 
  int actualIndex; 
  int count; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  bool *p_do_initial_cache; 
  Online_Friends *v11; 
  FriendListGlobal *v12; 
  int *sortedFriends; 
  XUID *v14; 
  __int64 v15; 
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v17; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v19; 
  int v20; 
  int *p_downloading_count; 
  unsigned __int64 *downloading_users; 
  unsigned int v23; 
  __int64 v24; 
  DWServicesAccess *v25; 
  DWServicesAccess *v26; 
  DWProfiles *Profiles; 
  const bdReference<bdRemoteTask> *PublicInfos; 
  bdReference<bdRemoteTask> *v29; 
  XUID xuid; 
  XUID result; 
  bdReference<bdRemoteTask> v32; 

  v1 = controllerIndex;
  v2 = Sys_Milliseconds();
  v3 = g_DWPlayercardCacheDownloadTaskStage[v1];
  v4 = (bdRemoteTask *)&g_DWPlayercardCacheDownloadTaskStage[v1];
  v32.m_ptr = v4;
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        actualIndex = 0;
        count = 0;
        Instance = Online_Friends::GetInstance();
        Friends = Online_Friends::GetFriends(Instance, v1);
        p_do_initial_cache = &g_PlayerProfileCacheStore[v1].do_initial_cache;
        g_PlayerProfileCacheStore[v1].screen = PLAYERCARD_CACHE_SCREEN_NONE;
        if ( *p_do_initial_cache )
        {
          v11 = Online_Friends::GetInstance();
          v12 = Online_Friends::GetFriends(v11, v1);
          count = v12->count;
          actualIndex = v12->actualIndex;
          if ( count > 0 )
          {
            g_PlayerProfileCacheStore[v1].last_pivot = actualIndex;
            sortedFriends = Friends->sortedFriends;
            v14 = g_currentUserList;
            v15 = (unsigned int)count;
            do
            {
              XUID::operator=(v14++, &Friends->friends[*sortedFriends++]);
              --v15;
            }
            while ( v15 );
          }
          *p_do_initial_cache = 0;
        }
        PlayercardCache_UpdateCachingInternal(v1, actualIndex, count);
      }
      return;
    }
    m_ptr = g_DWPlayercardCacheDownloadTask[v1].m_ptr;
    if ( !m_ptr )
      return;
    v17 = m_ptr->getStatus(m_ptr);
    if ( v17 == BD_PENDING )
      return;
    ErrorCode = bdRemoteTask::getErrorCode(g_DWPlayercardCacheDownloadTask[v1].m_ptr);
    if ( v17 == BD_DONE )
    {
      if ( ErrorCode )
      {
LABEL_15:
        Com_Printf(25, "playercard download failed with code %d\n", (unsigned int)ErrorCode);
        PlayercardCache_RetryDownload(v1);
        return;
      }
    }
    else if ( v17 != BD_FAILED || ErrorCode != BD_NO_PROFILE_INFO_EXISTS && ErrorCode != BD_HANDLE_TASK_FAILED )
    {
      goto LABEL_15;
    }
    v19 = v1;
    v20 = 0;
    p_downloading_count = &g_PlayerProfileCacheStore[v1].downloading_count;
    if ( *p_downloading_count > 0 )
    {
      downloading_users = g_PlayerProfileCacheStore[v19].downloading_users;
      do
      {
        XUID::FromUniversalId(&result, *downloading_users);
        v23 = 0;
        if ( bdRemoteTask::getNumResults(g_DWPlayercardCacheDownloadTask[v1].m_ptr) )
        {
          while ( 1 )
          {
            v24 = v19 * 65944 + 320i64 * v23;
            XUID::FromUniversalId(&xuid, *(_QWORD *)&g_PlayerProfileCacheStore[0].downloading_buffer[0]._bytes_20[v24]);
            if ( XUID::operator==(&result, &xuid) )
              break;
            if ( ++v23 >= bdRemoteTask::getNumResults(g_DWPlayercardCacheDownloadTask[v1].m_ptr) )
              goto LABEL_24;
          }
          Playercard_AddToCache(v1, xuid, &g_PlayerProfileCacheStore[0].downloading_buffer[0]._bytes_20[v24 + 12]);
        }
        else
        {
LABEL_24:
          Playercard_AddToCache(v1, result, NULL);
        }
        ++v20;
        p_downloading_count = &g_PlayerProfileCacheStore[v19].downloading_count;
        ++downloading_users;
      }
      while ( v20 < g_PlayerProfileCacheStore[v1].downloading_count );
      v4 = v32.m_ptr;
    }
    *p_downloading_count = 0;
    LODWORD(v4->__vftable) = 2;
    Com_Printf(25, "playercard download succeeded\n");
  }
  else
  {
    v25 = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(v25, v1) && v2 > s_playerCardCacheDownloadRetryTime[v1] )
    {
      Com_Printf(25, "Downloading playercards: %d\n", (unsigned int)g_PlayerProfileCacheStore[v1].downloading_count);
      v26 = DWServicesAccess::GetInstance();
      Profiles = DWServicesAccess::GetProfiles(v26, v1);
      PublicInfos = DWProfiles::getPublicInfos(Profiles, &v32, g_PlayerProfileCacheStore[v1].downloading_users, g_PlayerProfileCacheStore[v1].downloading_buffer, g_PlayerProfileCacheStore[v1].downloading_count);
      v29 = &g_DWPlayercardCacheDownloadTask[v1];
      bdReference<bdRemoteTask>::operator=(v29, PublicInfos);
      if ( v32.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v32.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v32.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v32.m_ptr->~bdReferencable)(v32.m_ptr, 1i64);
      if ( v29->m_ptr && v29->m_ptr->getStatus(v29->m_ptr) == BD_PENDING )
        LODWORD(v4->__vftable) = 1;
      else
        PlayercardCache_RetryDownload(v1);
    }
  }
}

/*
==============
PlayercardCache_UpdateFromStats
==============
*/
void PlayercardCache_UpdateFromStats(const int controllerIndex)
{
  int FavoriteLoadoutIndex; 
  const char *LocalClientName; 
  const char *ClanTag; 
  char dest[40]; 

  g_CachedPlayerProfileForEdit.rank_mp = CL_PlayerData_GetRankMP(controllerIndex);
  g_CachedPlayerProfileForEdit.prestige_mp = CL_PlayerData_GetPrestigeMP(controllerIndex);
  g_CachedPlayerProfileForEdit.rank_alien = CL_PlayerData_GetRankAlien(controllerIndex);
  g_CachedPlayerProfileForEdit.prestige_alien = CL_PlayerData_GetPrestigeAlien(controllerIndex);
  g_CachedPlayerProfileForEdit.customization_background[0] = CL_PlayerData_GetCustomizationBackground(controllerIndex);
  g_CachedPlayerProfileForEdit.customization_patch[0] = CL_PlayerData_GetCustomizationPatch(controllerIndex);
  FavoriteLoadoutIndex = CL_PlayerData_GetFavoriteLoadoutIndex(controllerIndex);
  PlayercardCache_SetFavoriteLoadout(controllerIndex, FavoriteLoadoutIndex);
  LocalClientName = Live_GetLocalClientName(controllerIndex);
  Core_strcpy(dest, 0x24ui64, LocalClientName);
  strncpy(g_CachedPlayerProfileForEdit.name, dest, 0x24ui64);
  ClanTag = CL_PlayerData_GetClanTag(controllerIndex);
  strncpy(g_CachedPlayerProfileForEdit.clanAbbrev, ClanTag, 6ui64);
  g_CachedPlayerProfileForEdit.clanAbbrev[5] = 0;
  g_CachedPlayerProfileForEdit.clanTagType = CL_PlayerData_GetClanTagType(controllerIndex);
  CL_PlayerData_GetCustomizationForMPPrivate(controllerIndex, &g_CachedPlayerProfileForEdit.selectedOperatorIndexPrivate, &g_CachedPlayerProfileForEdit.customizationSets[0].customizationMPPrivate, &g_CachedPlayerProfileForEdit.customizationSets[1].customizationMPPrivate);
  CL_PlayerData_GetCustomizationForMPPublic(controllerIndex, &g_CachedPlayerProfileForEdit.selectedOperatorIndexPublic, &g_CachedPlayerProfileForEdit.customizationSets[0].customizationMPPublic, &g_CachedPlayerProfileForEdit.customizationSets[1].customizationMPPublic);
}

/*
==============
PlayercardCache_UpdateLeaderboardCaching
==============
*/
void PlayercardCache_UpdateLeaderboardCaching(const int controllerIndex, XUID user)
{
  const dvar_t *v2; 
  __int64 v3; 
  XUID userID; 

  userID.m_id = user.m_id;
  v2 = DVARBOOL_enable_leaderboard_playercards;
  v3 = controllerIndex;
  if ( !DVARBOOL_enable_leaderboard_playercards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enable_leaderboard_playercards") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && g_DWPlayercardCacheDownloadTaskStage[v3] == PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE && !XUID::IsNull(&userID) )
    PlayercardCache_AddToDownload(v3, userID);
}

/*
==============
PlayercardCache_UpdateLivePartyFriendsCaching
==============
*/
void PlayercardCache_UpdateLivePartyFriendsCaching(const int controllerIndex)
{
  __int64 v1; 
  Online_Friends *Instance; 
  int currentIndex; 
  int v4; 
  int Count; 
  XUID *v6; 
  const XUID *XUID; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  XUID result; 

  v1 = controllerIndex;
  Instance = Online_Friends::GetInstance();
  Online_Friends::GetFriends(Instance, v1);
  currentIndex = s_partyGlobals.currentIndex;
  v4 = 0;
  Count = LiveParty_GetCount();
  if ( Count > 0 )
  {
    v6 = g_currentUserList;
    do
    {
      XUID = LiveParty_GetXUID(&result, v4);
      XUID::operator=(v6, XUID);
      ++v4;
      ++v6;
    }
    while ( v4 < Count );
  }
  v8 = v1;
  if ( g_PlayerProfileCacheStore[v1].screen != PLAYERCARD_CACHE_SCREEN_PARTY )
  {
    g_PlayerProfileCacheStore[v8].screen = PLAYERCARD_CACHE_SCREEN_PARTY;
    g_PlayerProfileCacheStore[v8].last_pivot = currentIndex;
    g_PlayerProfileCacheStore[v8].last_size = Count;
LABEL_14:
    PlayercardCache_UpdateCachingInternal(v1, currentIndex, Count);
    return;
  }
  v9 = g_PlayerProfileCacheStore[v8].last_pivot - currentIndex;
  v10 = v9 + Count;
  if ( v9 >= 0 )
    v10 = g_PlayerProfileCacheStore[v8].last_pivot - currentIndex;
  v11 = currentIndex - g_PlayerProfileCacheStore[v8].last_pivot + Count;
  if ( currentIndex - g_PlayerProfileCacheStore[v8].last_pivot >= 0 )
    v11 = currentIndex - g_PlayerProfileCacheStore[v8].last_pivot;
  if ( v10 < v11 )
    v11 = v10;
  if ( v11 >= 6 || g_PlayerProfileCacheStore[v8].last_size != Count )
    goto LABEL_14;
}

/*
==============
PlayercardCache_UpdateLivePartyFriendsCaching_Explicit
==============
*/
void PlayercardCache_UpdateLivePartyFriendsCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  int v4; 
  __int64 v5; 
  XUID *v7; 
  const XUID *XUID; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  XUID result; 

  v4 = 0;
  v5 = controllerIndex;
  if ( size > 0 )
  {
    v7 = g_currentUserList;
    do
    {
      XUID = LiveParty_GetXUID(&result, v4);
      XUID::operator=(v7, XUID);
      ++v4;
      ++v7;
    }
    while ( v4 < size );
  }
  v9 = v5;
  if ( g_PlayerProfileCacheStore[v5].screen != PLAYERCARD_CACHE_SCREEN_PARTY )
  {
    g_PlayerProfileCacheStore[v9].screen = PLAYERCARD_CACHE_SCREEN_PARTY;
    g_PlayerProfileCacheStore[v9].last_pivot = pivot;
    g_PlayerProfileCacheStore[v9].last_size = size;
LABEL_14:
    PlayercardCache_UpdateCachingInternal(v5, pivot, size);
    return;
  }
  v10 = g_PlayerProfileCacheStore[v9].last_pivot - pivot;
  v11 = v10 + size;
  if ( v10 >= 0 )
    v11 = g_PlayerProfileCacheStore[v9].last_pivot - pivot;
  v12 = pivot - g_PlayerProfileCacheStore[v9].last_pivot + size;
  if ( pivot - g_PlayerProfileCacheStore[v9].last_pivot >= 0 )
    v12 = pivot - g_PlayerProfileCacheStore[v9].last_pivot;
  if ( v11 < v12 )
    v12 = v11;
  if ( v12 >= 6 || g_PlayerProfileCacheStore[v9].last_size != size )
    goto LABEL_14;
}

/*
==============
PlayercardCache_UpdateLocalPlayerCaching
==============
*/
void PlayercardCache_UpdateLocalPlayerCaching(const int controllerIndex)
{
  __int64 v1; 
  const XUID *Xuid; 
  XUID userID; 
  XUID result; 

  v1 = controllerIndex;
  XUID::XUID(&userID);
  if ( !Live_IsSignedIn(v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 562, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  if ( g_PlayerProfileCacheStore[v1].downloading_count >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 563, ASSERT_TYPE_ASSERT, "(g_PlayerProfileCacheStore[controllerIndex].downloading_count < 200)", (const char *)&queryFormat, "g_PlayerProfileCacheStore[controllerIndex].downloading_count < MAX_CACHED_PLAYER_CARDS_DOWNLOADS") )
    __debugbreak();
  Xuid = Live_GetXuid(&result, v1);
  XUID::operator=(&userID, Xuid);
  PlayercardCache_AddToDownload(v1, userID);
  g_DWPlayercardCacheDownloadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching
==============
*/
void PlayercardCache_UpdateOnlineFriendsCaching(const int controllerIndex)
{
  __int64 v1; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  int actualIndex; 
  __int64 count; 
  Online_Friends *v6; 
  FriendListGlobal *v7; 
  int v8; 
  FriendListGlobal *v9; 
  __int64 v10; 
  int *sortedFriends; 
  __int64 v12; 
  int last_pivot; 
  int v14; 
  bool v15; 
  int v16; 
  int v17; 

  v1 = controllerIndex;
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, v1);
  actualIndex = Friends->actualIndex;
  count = (int)Friends->count;
  v6 = Online_Friends::GetInstance();
  v7 = Online_Friends::GetFriends(v6, v1);
  v8 = 0;
  v9 = v7;
  v10 = count;
  if ( (int)count > 0 )
  {
    sortedFriends = v7->sortedFriends;
    do
    {
      XUID::operator=(&g_currentUserList[v8++], &v9->friends[*sortedFriends++]);
      --v10;
    }
    while ( v10 );
  }
  v12 = v1;
  if ( g_PlayerProfileCacheStore[v1].screen != PLAYERCARD_CACHE_SCREEN_FRIENDS )
  {
    g_PlayerProfileCacheStore[v12].do_initial_cache = 0;
    g_PlayerProfileCacheStore[v12].screen = PLAYERCARD_CACHE_SCREEN_FRIENDS;
    g_PlayerProfileCacheStore[v12].last_pivot = actualIndex;
    g_PlayerProfileCacheStore[v12].last_size = count;
LABEL_14:
    PlayercardCache_UpdateCachingInternal(v1, actualIndex, count);
    return;
  }
  last_pivot = g_PlayerProfileCacheStore[v12].last_pivot;
  v14 = last_pivot - actualIndex + count;
  if ( last_pivot - actualIndex >= 0 )
    v14 = g_PlayerProfileCacheStore[v12].last_pivot - actualIndex;
  v15 = actualIndex - last_pivot < 0;
  v16 = actualIndex - last_pivot;
  v17 = actualIndex - last_pivot + count;
  if ( !v15 )
    v17 = v16;
  if ( v14 < v17 )
    v17 = v14;
  if ( v17 >= 6 || g_PlayerProfileCacheStore[v12].last_size != (_DWORD)count )
    goto LABEL_14;
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching_Explicit
==============
*/
void PlayercardCache_UpdateOnlineFriendsCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  __int64 v5; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  FriendListGlobal *v8; 
  int *sortedFriends; 
  __int64 v10; 
  XUID *v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 

  v5 = controllerIndex;
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, v5);
  v8 = Friends;
  if ( size > 0 )
  {
    sortedFriends = Friends->sortedFriends;
    v10 = (unsigned int)size;
    v11 = g_currentUserList;
    do
    {
      XUID::operator=(v11++, &v8->friends[*sortedFriends++]);
      --v10;
    }
    while ( v10 );
  }
  v12 = v5;
  if ( g_PlayerProfileCacheStore[v5].screen != PLAYERCARD_CACHE_SCREEN_FRIENDS )
  {
    g_PlayerProfileCacheStore[v12].do_initial_cache = 0;
    g_PlayerProfileCacheStore[v12].screen = PLAYERCARD_CACHE_SCREEN_FRIENDS;
    g_PlayerProfileCacheStore[v12].last_pivot = pivot;
    g_PlayerProfileCacheStore[v12].last_size = size;
LABEL_14:
    PlayercardCache_UpdateCachingInternal(v5, pivot, size);
    return;
  }
  v13 = g_PlayerProfileCacheStore[v12].last_pivot - pivot;
  v14 = v13 + size;
  if ( v13 >= 0 )
    v14 = g_PlayerProfileCacheStore[v12].last_pivot - pivot;
  v15 = pivot - g_PlayerProfileCacheStore[v12].last_pivot + size;
  if ( pivot - g_PlayerProfileCacheStore[v12].last_pivot >= 0 )
    v15 = pivot - g_PlayerProfileCacheStore[v12].last_pivot;
  if ( v14 < v15 )
    v15 = v14;
  if ( v15 >= 6 || g_PlayerProfileCacheStore[v12].last_size != size )
    goto LABEL_14;
}

/*
==============
PlayercardCache_UpdateOnlineFriendsCaching_Raw
==============
*/
void PlayercardCache_UpdateOnlineFriendsCaching_Raw(const int controllerIndex, XUID *xuidList, __int64 xuidCount)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int64 m_id; 
  int v8; 
  __int64 v9; 
  unsigned __int64 *downloading_users; 
  int v11; 
  __int64 v12; 
  XUID v13; 
  XUID result; 
  XUID v15; 
  XUID xuid; 

  v4 = controllerIndex;
  if ( (int)xuidCount > 1200 )
  {
    Com_PrintWarning(25, "PlayercardCache_UpdateOnlineFriendsCaching_Raw: Too many users specified.  %d > %d\n", xuidCount, 1200i64);
    LODWORD(xuidCount) = 1200;
  }
  v5 = (int)xuidCount;
  if ( (int)xuidCount > 0 )
  {
    v6 = 0i64;
    do
    {
      v13.m_id = xuidList[v6].m_id;
      if ( !XUID::IsNull(&v13) )
      {
        m_id = v13.m_id;
        v8 = 0;
        v9 = v4;
        xuid.m_id = v13.m_id;
        if ( g_PlayerProfileCacheStore[v4].downloading_count <= 0 )
        {
LABEL_11:
          v11 = 0;
          v15.m_id = m_id;
          v12 = 0i64;
          while ( !XUID::operator==(&s_cached_playercards[v11].userID, &v15) )
          {
            ++v11;
            ++v12;
            if ( v11 >= 1024 )
              goto LABEL_16;
          }
          if ( Sys_Milliseconds() - s_cached_playercards[v12].time < playercard_cache_validity_life->current.integer )
            goto LABEL_18;
LABEL_16:
          if ( g_PlayerProfileCacheStore[v9].downloading_count != 200 )
            g_PlayerProfileCacheStore[v4].downloading_users[g_PlayerProfileCacheStore[v9].downloading_count++] = XUID::GetUniversalId(&xuid);
        }
        else
        {
          downloading_users = g_PlayerProfileCacheStore[v9].downloading_users;
          while ( 1 )
          {
            XUID::FromUniversalId(&result, *downloading_users);
            if ( XUID::operator==(&result, &xuid) )
              break;
            ++v8;
            ++downloading_users;
            if ( v8 >= g_PlayerProfileCacheStore[v9].downloading_count )
            {
              m_id = xuid.m_id;
              goto LABEL_11;
            }
          }
        }
      }
LABEL_18:
      ++v6;
    }
    while ( v6 < v5 );
  }
  if ( g_PlayerProfileCacheStore[v4].downloading_count > 0 )
    g_DWPlayercardCacheDownloadTaskStage[v4] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
}

/*
==============
PlayercardCache_UpdatePartyCaching
==============
*/
void PlayercardCache_UpdatePartyCaching(const int controllerIndex, PartyData *partydata)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int v5; 
  unsigned __int8 *p_playerCardUpdate; 
  unsigned __int64 v7; 
  int v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  XUID xuid; 

  v2 = controllerIndex;
  if ( !partydata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 584, ASSERT_TYPE_ASSERT, "(partydata)", (const char *)&queryFormat, "partydata") )
    __debugbreak();
  v4 = v2;
  if ( g_DWPlayercardCacheDownloadTaskStage[v2] == PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE )
  {
    if ( Party_GetNumGameSlots(partydata) > 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 590, ASSERT_TYPE_ASSERT, "(Party_GetNumGameSlots( partydata ) <= 200)", (const char *)&queryFormat, "Party_GetNumGameSlots( partydata ) <= MAX_CACHED_PLAYER_CARDS_DOWNLOADS") )
      __debugbreak();
    v5 = 0;
    p_playerCardUpdate = &partydata->partyMembers[0].info.playerCardUpdate;
    do
    {
      if ( p_playerCardUpdate[311] )
      {
        v7 = *(_QWORD *)(p_playerCardUpdate + 317);
        v8 = 0;
        v9 = *p_playerCardUpdate;
        v10 = 0i64;
        xuid.m_id = v7;
        while ( !XUID::operator==(&s_cached_playercards[v8].userID, &xuid) )
        {
          ++v8;
          ++v10;
          if ( v8 >= 1024 )
          {
            v11 = 0;
            goto LABEL_15;
          }
        }
        v11 = s_cached_playercards[v10].profile[0];
LABEL_15:
        if ( g_PlayerProfileCacheStore[v4].downloading_count >= 200 )
        {
          LODWORD(v16) = 200;
          LODWORD(v15) = g_PlayerProfileCacheStore[v4].downloading_count;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 599, ASSERT_TYPE_ASSERT, "( g_PlayerProfileCacheStore[controllerIndex].downloading_count ) < ( 200 )", "%s < %s\n\t%i, %i", "g_PlayerProfileCacheStore[controllerIndex].downloading_count", "MAX_CACHED_PLAYER_CARDS_DOWNLOADS", v15, v16) )
            __debugbreak();
        }
        if ( v9 != v11 )
        {
          xuid.m_id = v7;
          v12 = 0;
          v13 = 0i64;
          while ( !XUID::operator==(&s_cached_playercards[v12].userID, &xuid) )
          {
            ++v12;
            ++v13;
            if ( v12 >= 1024 )
              goto LABEL_24;
          }
          s_cached_playercards[v13].time = ~playercard_cache_validity_life->current.integer + Sys_Milliseconds();
        }
LABEL_24:
        PlayercardCache_AddToDownload(controllerIndex, partydata->partyMembers[v5].playerUID);
      }
      ++v5;
      p_playerCardUpdate += 504;
    }
    while ( v5 < 0xC8 );
    if ( g_PlayerProfileCacheStore[v4].downloading_count <= 0 )
    {
      s_playercardCache_partyUpdateAttemptCount[v4] = 0;
    }
    else
    {
      v14 = s_playercardCache_partyUpdateAttemptCount[v4] - 1;
      g_DWPlayercardCacheDownloadTaskStage[v4] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
      s_playercardCache_partyUpdateAttemptCount[v4] = v14;
      if ( v14 > 0 )
        s_playercardCache_partyUpdateTime[v4] = (playercard_cache_party_fetch_attempt_delay->current.integer << (3 - v14)) + Sys_Milliseconds();
    }
  }
}

/*
==============
PlayercardCache_UpdateRecentPlayersCaching
==============
*/
void PlayercardCache_UpdateRecentPlayersCaching(const int controllerIndex)
{
  __int64 v1; 
  Online_Friends *Instance; 
  int v3; 
  Online_MetPlayer *v4; 
  int Count; 
  OnlineUserLists *v6; 
  UserList *v7; 
  unsigned int i; 
  bool UserByIndex; 
  __int64 v10; 
  int last_pivot; 
  int v12; 
  bool v13; 
  int v14; 
  int v15; 
  UserList *userListOut; 
  UserList::User *userOut; 

  v1 = controllerIndex;
  Instance = Online_Friends::GetInstance();
  Online_Friends::GetFriends(Instance, v1);
  v3 = Online_MetPlayer::GetInstance()->m_currentIndex[v1];
  LODWORD(userListOut) = v3;
  v4 = Online_MetPlayer::GetInstance();
  Count = Online_MetPlayer::GetCount(v4, v1);
  userListOut = NULL;
  v6 = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserList(v6, v1, MOVEMENT, (const UserList **)&userListOut) )
  {
    v7 = userListOut;
    for ( i = 0; i < userListOut->m_numUsers; ++i )
    {
      userOut = NULL;
      if ( !UserList::GetUserByIndex(v7, i, (const UserList::User **)&userOut) )
      {
        UserByIndex = UserList::GetUserByIndex(userListOut, i, (const UserList::User **)&userOut);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 784, ASSERT_TYPE_ASSERT, "userList->GetUserByIndex( i, &user ) == true", "\n\t%llx, %llx", UserByIndex, 1i64) )
          __debugbreak();
      }
      XUID::operator=(&g_currentUserList[i], &userOut->xuid);
      v7 = userListOut;
    }
    v10 = v1;
    if ( g_PlayerProfileCacheStore[v1].screen != PLAYERCARD_CACHE_SCREEN_RECENT )
    {
      g_PlayerProfileCacheStore[v10].screen = PLAYERCARD_CACHE_SCREEN_RECENT;
      g_PlayerProfileCacheStore[v10].last_pivot = v3;
      g_PlayerProfileCacheStore[v10].last_size = Count;
LABEL_17:
      PlayercardCache_UpdateCachingInternal(v1, v3, Count);
      return;
    }
    last_pivot = g_PlayerProfileCacheStore[v10].last_pivot;
    v12 = last_pivot - v3 + Count;
    if ( last_pivot - v3 >= 0 )
      v12 = g_PlayerProfileCacheStore[v10].last_pivot - v3;
    v13 = v3 - last_pivot < 0;
    v14 = v3 - last_pivot;
    v15 = v3 - last_pivot + Count;
    if ( !v13 )
      v15 = v14;
    if ( v12 < v15 )
      v15 = v12;
    if ( v15 >= 6 || g_PlayerProfileCacheStore[v10].last_size != Count )
      goto LABEL_17;
  }
}

/*
==============
PlayercardCache_UpdateRecentPlayersCaching_Explicit
==============
*/
void PlayercardCache_UpdateRecentPlayersCaching_Explicit(const int controllerIndex, int pivot, int size)
{
  __int64 v3; 
  OnlineUserLists *Instance; 
  UserList *v7; 
  unsigned int i; 
  bool UserByIndex; 
  __int64 v10; 
  int last_pivot; 
  int v12; 
  bool v13; 
  int v14; 
  int v15; 
  UserList::User *userOut[2]; 
  UserList *userListOut; 

  v3 = controllerIndex;
  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserList(Instance, v3, MOVEMENT, (const UserList **)&userListOut) )
  {
    v7 = userListOut;
    for ( i = 0; i < userListOut->m_numUsers; ++i )
    {
      userOut[0] = NULL;
      if ( !UserList::GetUserByIndex(v7, i, (const UserList::User **)userOut) )
      {
        UserByIndex = UserList::GetUserByIndex(userListOut, i, (const UserList::User **)userOut);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 784, ASSERT_TYPE_ASSERT, "userList->GetUserByIndex( i, &user ) == true", "\n\t%llx, %llx", UserByIndex, 1i64) )
          __debugbreak();
      }
      XUID::operator=(&g_currentUserList[i], &userOut[0]->xuid);
      v7 = userListOut;
    }
    v10 = v3;
    if ( g_PlayerProfileCacheStore[v3].screen != PLAYERCARD_CACHE_SCREEN_RECENT )
    {
      g_PlayerProfileCacheStore[v10].screen = PLAYERCARD_CACHE_SCREEN_RECENT;
      g_PlayerProfileCacheStore[v10].last_pivot = pivot;
      g_PlayerProfileCacheStore[v10].last_size = size;
LABEL_17:
      PlayercardCache_UpdateCachingInternal(v3, pivot, size);
      return;
    }
    last_pivot = g_PlayerProfileCacheStore[v10].last_pivot;
    v12 = last_pivot - pivot + size;
    if ( last_pivot - pivot >= 0 )
      v12 = g_PlayerProfileCacheStore[v10].last_pivot - pivot;
    v13 = pivot - last_pivot < 0;
    v14 = pivot - last_pivot;
    v15 = pivot - last_pivot + size;
    if ( !v13 )
      v15 = v14;
    if ( v12 < v15 )
      v15 = v12;
    if ( v15 >= 6 || g_PlayerProfileCacheStore[v10].last_size != size )
      goto LABEL_17;
  }
}

/*
==============
PlayercardCache_UpdateTournamentCaching
==============
*/
void PlayercardCache_UpdateTournamentCaching(const int controllerIndex)
{
  __int64 v1; 
  int i; 
  unsigned __int64 m_id; 
  int v4; 
  __int64 v5; 
  unsigned __int64 *downloading_users; 
  int v7; 
  __int64 v8; 
  XUID v9; 
  XUID xuid; 
  XUID result; 
  XUID v12; 

  v1 = controllerIndex;
  if ( g_DWPlayercardCacheDownloadTaskStage[controllerIndex] == PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE )
  {
    for ( i = 0; i < OnlineTournament_GetParticipantCount(); ++i )
    {
      OnlineTournament_GetParticipant(&result, i);
      if ( !XUID::IsNull(&result) )
      {
        m_id = result.m_id;
        v4 = 0;
        v5 = v1;
        xuid.m_id = result.m_id;
        if ( g_PlayerProfileCacheStore[v1].downloading_count <= 0 )
        {
LABEL_9:
          v7 = 0;
          v9.m_id = m_id;
          v8 = 0i64;
          while ( !XUID::operator==(&s_cached_playercards[v7].userID, &v9) )
          {
            ++v7;
            ++v8;
            if ( v7 >= 1024 )
              goto LABEL_14;
          }
          if ( Sys_Milliseconds() - s_cached_playercards[v8].time < playercard_cache_validity_life->current.integer )
            continue;
LABEL_14:
          if ( g_PlayerProfileCacheStore[v5].downloading_count != 200 )
            g_PlayerProfileCacheStore[v1].downloading_users[g_PlayerProfileCacheStore[v5].downloading_count++] = XUID::GetUniversalId(&xuid);
        }
        else
        {
          downloading_users = g_PlayerProfileCacheStore[v5].downloading_users;
          while ( 1 )
          {
            XUID::FromUniversalId(&v12, *downloading_users);
            if ( XUID::operator==(&v12, &xuid) )
              break;
            ++v4;
            ++downloading_users;
            if ( v4 >= g_PlayerProfileCacheStore[v5].downloading_count )
            {
              m_id = xuid.m_id;
              goto LABEL_9;
            }
          }
        }
      }
    }
    if ( g_PlayerProfileCacheStore[v1].downloading_count > 0 )
      g_DWPlayercardCacheDownloadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
  }
}

/*
==============
PlayercardCache_Upload
==============
*/
char PlayercardCache_Upload(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int FavoriteLoadoutIndex; 
  const char *LocalClientName; 
  const char *ClanTag; 
  __int64 v6; 
  const XUID *Xuid; 
  int Playercard; 
  __int64 v10; 
  char v12; 
  __int64 v13; 
  XUID userID; 
  XUID result; 
  char dest[40]; 

  v1 = controllerIndex;
  XUID::XUID(&userID);
  if ( !Live_IsUserSignedInToLive(v1) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF) )
    return 0;
  v2 = v1;
  if ( g_DWPlayercardCacheUploadTaskStage[v1] != PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE )
    return 0;
  g_CachedPlayerProfileForEdit.rank_mp = CL_PlayerData_GetRankMP(v1);
  g_CachedPlayerProfileForEdit.prestige_mp = CL_PlayerData_GetPrestigeMP(v1);
  g_CachedPlayerProfileForEdit.rank_alien = CL_PlayerData_GetRankAlien(v1);
  g_CachedPlayerProfileForEdit.prestige_alien = CL_PlayerData_GetPrestigeAlien(v1);
  g_CachedPlayerProfileForEdit.customization_background[0] = CL_PlayerData_GetCustomizationBackground(v1);
  g_CachedPlayerProfileForEdit.customization_patch[0] = CL_PlayerData_GetCustomizationPatch(v1);
  FavoriteLoadoutIndex = CL_PlayerData_GetFavoriteLoadoutIndex(v1);
  PlayercardCache_SetFavoriteLoadout(v1, FavoriteLoadoutIndex);
  LocalClientName = Live_GetLocalClientName(v1);
  Core_strcpy(dest, 0x24ui64, LocalClientName);
  strncpy(g_CachedPlayerProfileForEdit.name, dest, 0x24ui64);
  ClanTag = CL_PlayerData_GetClanTag(v1);
  strncpy(g_CachedPlayerProfileForEdit.clanAbbrev, ClanTag, 6ui64);
  g_CachedPlayerProfileForEdit.clanAbbrev[5] = 0;
  g_CachedPlayerProfileForEdit.clanTagType = CL_PlayerData_GetClanTagType(v1);
  CL_PlayerData_GetCustomizationForMPPrivate(v1, &g_CachedPlayerProfileForEdit.selectedOperatorIndexPrivate, &g_CachedPlayerProfileForEdit.customizationSets[0].customizationMPPrivate, &g_CachedPlayerProfileForEdit.customizationSets[1].customizationMPPrivate);
  CL_PlayerData_GetCustomizationForMPPublic(v1, &g_CachedPlayerProfileForEdit.selectedOperatorIndexPublic, &g_CachedPlayerProfileForEdit.customizationSets[0].customizationMPPublic, &g_CachedPlayerProfileForEdit.customizationSets[1].customizationMPPublic);
  v6 = 65944 * v1;
  *(_DWORD *)&g_PlayerProfileCacheStore[0].publicProfile._bytes_20[65944 * v1 + 8] = PlayercardCache_CompressToBuffer(&g_CachedPlayerProfileForEdit, &g_PlayerProfileCacheStore[0].publicProfile._bytes_20[65944 * v1 + 13], 255) + 1;
  Xuid = Live_GetXuid(&result, v1);
  XUID::operator=(&userID, Xuid);
  Playercard = FindPlayercard(userID);
  if ( Playercard >= 0 )
  {
    v10 = Playercard;
    if ( !s_cached_playercards[v10].has_data || memcmp_0(&s_cached_playercards[v10].profile[1], &g_PlayerProfileCacheStore[0].publicProfile._bytes_20[65944 * v2 + 13], 0xFFui64) )
    {
      _RAX = &g_PlayerProfileCacheStore[0].publicProfile._bytes_20[v6 + 12];
      v12 = g_PlayerProfileCacheStore[0].publicProfile._bytes_20[v6 + 12] + 1;
      if ( g_PlayerProfileCacheStore[0].publicProfile._bytes_20[v6 + 12] == 0xFF )
        v12 = 1;
      v13 = 2i64;
      *_RAX = v12;
      _RCX = s_cached_playercards[v10].profile;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
        }
        _RAX += 128;
        _RCX += 128;
        __asm { vmovups xmmword ptr [rcx-10h], xmm1 }
        --v13;
      }
      while ( v13 );
      s_cached_playercards[v10].has_data = 1;
      g_DWPlayercardCacheUploadTaskStage[v2] = PLAYERCARD_CACHE_TASK_STAGE_WAITING;
    }
    return 1;
  }
  else
  {
    Com_Printf(25, "Could not upload player card because we haven't fetched it yet.\n");
    return 0;
  }
}

/*
==============
PlayercardCache_UserSignedIn
==============
*/

void __fastcall PlayercardCache_UserSignedIn(const int controllerIndex)
{
  PlayercardCache_UpdateLocalPlayerCaching(controllerIndex);
}

/*
==============
PlayercardCache_UserSignedOut
==============
*/
void PlayercardCache_UserSignedOut(const int controllerIndex)
{
  __int64 v1; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 
  __int64 v4; 

  v1 = controllerIndex;
  m_ptr = g_DWPlayercardCacheUploadTask[controllerIndex].m_ptr;
  if ( m_ptr )
    bdRemoteTask::cancelTask(m_ptr);
  v3 = g_DWPlayercardCacheDownloadTask[v1].m_ptr;
  if ( v3 )
    bdRemoteTask::cancelTask(v3);
  v4 = v1;
  g_DWPlayercardCacheUploadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE;
  g_DWPlayercardCacheDownloadTaskStage[v1] = PLAYERCARD_CACHE_TASK_STAGE_ALL_DONE;
  s_playerCardCacheUploadRetryTime[v1] = 0;
  s_playerCardCacheUploadRetryAttempt[v1] = 0;
  s_playerCardCacheDownloadRetryTime[v1] = 0;
  s_playerCardCacheDownloadRetryAttempt[v1] = 0;
  g_PlayerProfileCacheStore[v4].screen = PLAYERCARD_CACHE_SCREEN_NONE;
  g_PlayerProfileCacheStore[v4].downloading_count = 0;
  g_PlayerProfileCacheStore[v4].do_initial_cache = 1;
}

/*
==============
Playercard_AddToCache
==============
*/
void Playercard_AddToCache(const int controllerIndex, XUID userID, unsigned __int8 *buffer)
{
  int v5; 
  unsigned int v6; 
  const XUID *v7; 
  int v8; 
  int *p_time; 
  const char *v10; 
  __int64 v11; 
  __int64 v13; 
  void *userData; 
  DDLContext ddlContext; 
  XUID xuid; 
  XUID v25; 
  XUID result; 

  xuid.m_id = userID.m_id;
  _RDI = buffer;
  XUID::XUID(&v25);
  v5 = 0x7FFFFFFF;
  v6 = -1;
  if ( !s_playerProfileDDLDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 334, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef != nullptr)", (const char *)&queryFormat, "s_playerProfileDDLDef != nullptr") )
    __debugbreak();
  if ( !Live_IsSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 335, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  v7 = Live_GetXuid(&result, controllerIndex);
  XUID::operator=(&v25, v7);
  v8 = 0;
  p_time = &s_cached_playercards[0].time;
  while ( !XUID::operator==(&xuid, &s_cached_playercards[v8].userID) )
  {
    if ( XUID::operator==(&v25, &s_cached_playercards[v8].userID) || *p_time > v5 || (v5 = *p_time, v6 = v8, *p_time) )
    {
      ++v8;
      p_time += 70;
      if ( v8 < 1024 )
        continue;
    }
    goto LABEL_15;
  }
  v6 = v8;
LABEL_15:
  if ( v6 >= 0x400 )
  {
    LODWORD(userData) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 1024 )", "index doesn't index MAX_CACHED_PLAYER_PROFILES\n\t%i not in [0, %i)", userData, 1024) )
      __debugbreak();
  }
  v10 = XUID::ToDevString(&xuid);
  Com_Printf(25, "Adding player [%s] to the player card cache at index [%i]\n", v10, v6);
  v11 = (int)v6;
  s_cached_playercards[v11].time = Sys_Milliseconds();
  XUID::operator=(&s_cached_playercards[v11].userID, &xuid);
  _RCX = s_cached_playercards[v11].profile;
  if ( _RDI )
  {
    s_cached_playercards[v11].has_data = 1;
    v13 = 2i64;
    do
    {
      _RCX += 128;
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      _RDI += 128;
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rdi-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rdi-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rdi-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rdi-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rdi-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rdi-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rdi-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v13;
    }
    while ( v13 );
  }
  else
  {
    DDL_ResetContext(_RCX, 256, s_playerProfileDDLDef, &ddlContext, NULL, NULL);
    s_cached_playercards[v11].has_data = 1;
  }
}

/*
==============
RandomizePatchBacking
==============
*/
void RandomizePatchBacking(const char *name, const int mode, int *out_patch, int *out_backing)
{
  const char *v7; 
  char v8; 
  int v9; 
  unsigned int i; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  signed int v14; 
  int v15; 
  char v16; 
  int v17; 
  char v18; 
  unsigned __int8 v19; 
  int v20; 
  signed int v21; 
  int v22; 
  char v23; 
  int v24; 
  char v25; 
  unsigned __int8 v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 

  v7 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1687, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !out_patch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1688, ASSERT_TYPE_ASSERT, "(out_patch)", (const char *)&queryFormat, "out_patch") )
    __debugbreak();
  if ( !out_backing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1689, ASSERT_TYPE_ASSERT, "(out_backing)", (const char *)&queryFormat, "out_backing") )
    __debugbreak();
  if ( !*v7 )
    Com_PrintWarning(25, "Hashing empty gamertag to randomize patch packing won't generate good results!\n");
  if ( s_randomPatchCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1698, ASSERT_TYPE_ASSERT, "(s_randomPatchCount > 0)", (const char *)&queryFormat, "s_randomPatchCount > 0") )
    __debugbreak();
  v8 = *v7;
  v9 = 0;
  for ( i = 0; *v7; v8 = *v7 )
  {
    ++v7;
    i = v8 + 31 * i;
  }
  v11 = 5 * mode % 32;
  if ( v11 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1604, ASSERT_TYPE_ASSERT, "(rotation < 32)", (const char *)&queryFormat, "rotation < 32") )
    __debugbreak();
  v12 = i;
  if ( v11 )
    v12 = __ROR4__(i, v11);
  v13 = 0;
  v14 = v12 % s_randomPatchCount;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= 0x800 )
    {
      LODWORD(v29) = 2048;
      LODWORD(v28) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1621, ASSERT_TYPE_ASSERT, "(unsigned)( patchIndex ) < (unsigned)( 2048 )", "patchIndex doesn't index MAX_PATCHES_CACHED\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    v15 = v13;
    v16 = v13 & 7;
    if ( v13 < 0 )
    {
      v15 = v13 + 7;
      v16 -= 8;
    }
    if ( (s_hidePatchUnlessUnlocked[v15 >> 3] & (unsigned __int8)(1 << v16)) == 0 )
      break;
    ++v13;
  }
  if ( v14 > 0 )
  {
    do
    {
      if ( (unsigned int)v13 >= 0x800 )
      {
        LODWORD(v29) = 2048;
        LODWORD(v28) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1621, ASSERT_TYPE_ASSERT, "(unsigned)( patchIndex ) < (unsigned)( 2048 )", "patchIndex doesn't index MAX_PATCHES_CACHED\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v17 = v13;
      v18 = v13 & 7;
      if ( v13 < 0 )
      {
        v17 = v13 + 7;
        v18 -= 8;
      }
      v19 = s_hidePatchUnlessUnlocked[v17 >> 3];
      v20 = v14 - 1;
      if ( (v19 & (unsigned __int8)(1 << v18)) != 0 )
        v20 = v14;
      ++v13;
      v14 = v20;
    }
    while ( v20 > 0 );
  }
  *out_patch = v13;
  if ( (((_BYTE)v11 - 15) & 0x1F) != 0 )
    i = __ROR4__(i, (v11 - 15) & 0x1F);
  v21 = i % s_randomBackgroundCount;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= 0x800 )
    {
      LODWORD(v29) = 2048;
      LODWORD(v28) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1632, ASSERT_TYPE_ASSERT, "(unsigned)( backgroundIndex ) < (unsigned)( 2048 )", "backgroundIndex doesn't index MAX_BACKGROUNDS_CACHED\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    v22 = v9;
    v23 = v9 & 7;
    if ( v9 < 0 )
    {
      v22 = v9 + 7;
      v23 -= 8;
    }
    if ( (s_hideBackgroundUnlessUnlocked[v22 >> 3] & (unsigned __int8)(1 << v23)) == 0 )
      break;
    ++v9;
  }
  if ( v21 > 0 )
  {
    do
    {
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(v29) = 2048;
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1632, ASSERT_TYPE_ASSERT, "(unsigned)( backgroundIndex ) < (unsigned)( 2048 )", "backgroundIndex doesn't index MAX_BACKGROUNDS_CACHED\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v24 = v9;
      v25 = v9 & 7;
      if ( v9 < 0 )
      {
        v24 = v9 + 7;
        v25 -= 8;
      }
      v26 = s_hideBackgroundUnlessUnlocked[v24 >> 3];
      v27 = v21 - 1;
      if ( (v26 & (unsigned __int8)(1 << v25)) != 0 )
        v27 = v21;
      ++v9;
      v21 = v27;
    }
    while ( v27 > 0 );
  }
  *out_backing = v9;
}

/*
==============
ReadPlayerProfileFromDDL
==============
*/
char ReadPlayerProfileFromDDL(unsigned __int8 *buffer, PlayerProfileData *playerProfile)
{
  unsigned int RawHash; 
  unsigned int v9; 
  unsigned __int16 Short; 
  unsigned __int16 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  const char *String; 
  unsigned int v19; 
  const char *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  int *p_bodyModelIndex; 
  int i; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  DDLState toState; 
  DDLState fromState; 
  DDLState state; 
  DDLContext ddlContext; 
  DDLState v36; 
  DDLState v37; 
  DDLState result; 

  if ( !s_playerProfileDDLDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1450, ASSERT_TYPE_ASSERT, "(s_playerProfileDDLDef != nullptr)", (const char *)&queryFormat, "s_playerProfileDDLDef != nullptr") )
    __debugbreak();
  if ( !Com_DDL_CreateContext(buffer, 255, s_playerProfileDDLDef, &ddlContext, NULL, NULL) )
    return 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+140h+fromState.member], xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+140h+toState.member], xmm0 }
  v36.isValid = 0;
  v36.offset = 0;
  v36.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+40h+var_80.member], xmm0 }
  v37.isValid = 0;
  v37.offset = 0;
  v37.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rbp+40h+var_60.member], xmm0 }
  _RAX = DDL_GetRootState(&result, s_playerProfileDDLDef);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+140h+fromState.isValid], ymm0
  }
  RawHash = j_SL_GetRawHash(scr_const.customization_patch);
  DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
  v9 = j_SL_GetRawHash(scr_const.customization_background);
  DDL_MoveToNameByHash(&fromState, &v36, v9, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  __asm
  {
    vmovdqu xmmword ptr [rbp+40h+state.member], xmm0
    vmovdqu xmmword ptr [rbp+40h+result.member], xmm0
  }
  result.isValid = 0;
  result.offset = 0;
  result.arrayIndex = -1;
  DDL_MoveToIndex(&toState, &state, 0);
  DDL_MoveToIndex(&v36, &result, 0);
  Short = DDL_GetShort(&state, &ddlContext);
  playerProfile->customization_patch[0] = Short;
  if ( Short >= 0x1000u )
    playerProfile->customization_patch[0] = 0;
  v12 = DDL_GetShort(&result, &ddlContext);
  playerProfile->customization_background[0] = v12;
  if ( v12 >= 0x8000u )
    playerProfile->customization_background[0] = 0;
  v13 = j_SL_GetRawHash(scr_const.rank_mp);
  DDL_MoveToNameByHash(&fromState, &toState, v13, NULL);
  playerProfile->rank_mp = DDL_GetShort(&toState, &ddlContext);
  v14 = j_SL_GetRawHash(scr_const.prestige_mp);
  DDL_MoveToNameByHash(&fromState, &toState, v14, NULL);
  playerProfile->prestige_mp = DDL_GetByte(&toState, &ddlContext);
  v15 = j_SL_GetRawHash(scr_const.rank_alien);
  DDL_MoveToNameByHash(&fromState, &toState, v15, NULL);
  playerProfile->rank_alien = DDL_GetShort(&toState, &ddlContext);
  v16 = j_SL_GetRawHash(scr_const.prestige_alien);
  DDL_MoveToNameByHash(&fromState, &toState, v16, NULL);
  playerProfile->prestige_alien = DDL_GetByte(&toState, &ddlContext);
  v17 = j_SL_GetRawHash(scr_const.name);
  DDL_MoveToNameByHash(&fromState, &toState, v17, NULL);
  String = DDL_GetString(&toState, &ddlContext);
  Core_strcpy(playerProfile->name, 0x24ui64, String);
  v19 = j_SL_GetRawHash(scr_const.clanAbbrev);
  DDL_MoveToNameByHash(&fromState, &toState, v19, NULL);
  v20 = DDL_GetString(&toState, &ddlContext);
  Core_strcpy(playerProfile->clanAbbrev, 6ui64, v20);
  v21 = j_SL_GetRawHash(scr_const.clanTagType);
  DDL_MoveToNameByHash(&fromState, &toState, v21, NULL);
  playerProfile->clanTagType = DDL_GetByte(&toState, &ddlContext);
  v22 = j_SL_GetRawHash(scr_const.selectedOperatorIndexPublic);
  DDL_MoveToNameByHash(&fromState, &toState, v22, NULL);
  playerProfile->selectedOperatorIndexPublic = DDL_GetBool(&toState, &ddlContext);
  v23 = j_SL_GetRawHash(scr_const.selectedOperatorIndexPrivate);
  DDL_MoveToNameByHash(&fromState, &toState, v23, NULL);
  playerProfile->selectedOperatorIndexPrivate = DDL_GetBool(&toState, &ddlContext);
  p_bodyModelIndex = &playerProfile->customizationSets[0].customizationMPPrivate.bodyModelIndex;
  for ( i = 0; i < 2; ++i )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+40h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v26 = j_SL_GetRawHash(scr_const.customizationSets);
    DDL_MoveToNameByHash(&fromState, &toState, v26, NULL);
    DDL_MoveToIndex(&toState, &toState, i);
    v27 = j_SL_GetRawHash(scr_const.customization_mp_private);
    DDL_MoveToNameByHash(&toState, &v36, v27, NULL);
    v28 = j_SL_GetRawHash(scr_const.customization_mp_public);
    DDL_MoveToNameByHash(&toState, &v37, v28, NULL);
    if ( v36.member->arraySize != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1522, ASSERT_TYPE_ASSERT, "(currState2.member->arraySize == CUSTOMIZATION_TYPE_COUNT)", "%s\n\tDDL def doesnt match the customization struct def", "currState2.member->arraySize == CUSTOMIZATION_TYPE_COUNT") )
      __debugbreak();
    if ( v37.member->arraySize != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\playercard_cache.cpp", 1523, ASSERT_TYPE_ASSERT, "(currState3.member->arraySize == CUSTOMIZATION_TYPE_COUNT)", "%s\n\tDDL def doesnt match the customization struct def", "currState3.member->arraySize == CUSTOMIZATION_TYPE_COUNT") )
      __debugbreak();
    DDL_MoveToIndex(&v36, &state, 0);
    *(p_bodyModelIndex - 1) = DDL_GetShort(&state, &ddlContext);
    DDL_MoveToIndex(&v36, &state, 1);
    *p_bodyModelIndex = DDL_GetShort(&state, &ddlContext);
    DDL_MoveToIndex(&v37, &state, 0);
    *(p_bodyModelIndex - 4) = DDL_GetShort(&state, &ddlContext);
    DDL_MoveToIndex(&v37, &state, 1);
    *(p_bodyModelIndex - 3) = DDL_GetShort(&state, &ddlContext);
    v29 = j_SL_GetRawHash(scr_const.execution);
    DDL_MoveToNameByHash(&toState, &v36, v29, NULL);
    DDL_MoveToIndex(&v36, &v37, 0);
    p_bodyModelIndex[1] = DDL_GetInt(&v37, &ddlContext);
    DDL_MoveToIndex(&v36, &v37, 1);
    *(p_bodyModelIndex - 2) = DDL_GetInt(&v37, &ddlContext);
    p_bodyModelIndex += 6;
  }
  v30 = j_SL_GetRawHash(scr_const.ucdID);
  DDL_MoveToNameByHash(&fromState, &toState, v30, NULL);
  playerProfile->ucdID = DDL_GetUInt64(&toState, &ddlContext);
  ReadPlayerProfileFromDDL_WeaponSetup(&ddlContext, &fromState, playerProfile->weaponCustomizationPublic, &scr_const.weaponCustomizationPublic);
  ReadPlayerProfileFromDDL_WeaponSetup(&ddlContext, &fromState, playerProfile->weaponCustomizationPrivate, &scr_const.weaponCustomizationPrivate);
  return 1;
}

/*
==============
ReadPlayerProfileFromDDL_WeaponSetup
==============
*/
char ReadPlayerProfileFromDDL_WeaponSetup(DDLContext *context, DDLState *rootState, WeaponCustomizationSet *weaponCustomizationSet, const scr_string_t *customization)
{
  scr_string_t v7; 
  WeaponCustomizationSet *v8; 
  unsigned int RawHash; 
  int ArraySize; 
  int v12; 
  int v13; 
  __int64 v14; 
  WeaponCustomizationSet *v15; 
  unsigned int v16; 
  unsigned int v17; 
  const char *Enum; 
  WeaponCustomizationSet *v19; 
  unsigned int v20; 
  const char *v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  char *v26; 
  const char *v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  int v31; 
  unsigned __int8 *p_variantID; 
  char *attachment; 
  unsigned int v34; 
  const char *v35; 
  unsigned int v36; 
  int v38; 
  __int64 v39; 
  DDLState state; 
  DDLState v41; 
  DDLState fromState; 
  DDLState v43; 
  DDLState toState; 

  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  v7 = *customization;
  v8 = weaponCustomizationSet;
  __asm { vmovdqu xmmword ptr [rbp+57h+toState.member], xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+fromState.member], xmm0 }
  state.isValid = 0;
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+state.member], xmm0 }
  toState.arrayIndex = -1;
  fromState.arrayIndex = -1;
  state.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(v7);
  DDL_MoveToNameByHash(rootState, &toState, RawHash, NULL);
  ArraySize = DDL_StateGetArraySize(&toState);
  v12 = 2;
  v13 = 0;
  v38 = 0;
  if ( ArraySize < 2 )
    v12 = ArraySize;
  v14 = v12;
  v39 = v12;
  if ( v12 > 0 )
  {
    v15 = v8;
    do
    {
      DDL_MoveToIndex(&toState, &fromState, v13);
      v16 = j_SL_GetRawHash(scr_const.lootItemID);
      DDL_MoveToNameByHash(&fromState, &state, v16, NULL);
      v15->weapon = DDL_GetInt(&state, context);
      v17 = j_SL_GetRawHash(scr_const.weaponCamo);
      DDL_MoveToNameByHash(&fromState, &state, v17, NULL);
      Enum = DDL_GetEnum(&state, context);
      v19 = &v8[v13];
      Core_strcpy(v19->weaponCamo, 0x400ui64, Enum);
      v20 = j_SL_GetRawHash(scr_const.cosmeticAttachment);
      DDL_MoveToNameByHash(&fromState, &state, v20, NULL);
      v21 = DDL_GetEnum(&state, context);
      Core_strcpy(v19->cosmeticAttachment, 0x400ui64, v21);
      v22 = j_SL_GetRawHash(scr_const.sticker);
      DDL_MoveToNameByHash(&fromState, &state, v22, NULL);
      v23 = DDL_StateGetArraySize(&state);
      v24 = 4;
      v25 = 0;
      if ( v23 < 4 )
        v24 = v23;
      if ( v24 > 0 )
      {
        v26 = v19->sticker[0];
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v41.isValid = 0;
          v41.offset = 0;
          v41.arrayIndex = -1;
          __asm { vmovdqu xmmword ptr [rbp+57h+var_A0.member], xmm0 }
          DDL_MoveToIndex(&state, &v41, v25);
          v27 = DDL_GetEnum(&v41, context);
          Core_strcpy(v26, 0x400ui64, v27);
          ++v25;
          v26 += 1024;
        }
        while ( v25 < v24 );
        v14 = v39;
      }
      v28 = j_SL_GetRawHash(scr_const.attachmentSetup);
      DDL_MoveToNameByHash(&fromState, &state, v28, NULL);
      v29 = DDL_StateGetArraySize(&state);
      v30 = 5;
      if ( v29 < 5 )
        v30 = v29;
      v31 = 0;
      if ( v30 > 0 )
      {
        p_variantID = &v15->attachmentSetup[0].variantID;
        attachment = v19->attachmentSetup[0].attachment;
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v41.isValid = 0;
          v41.offset = 0;
          v41.arrayIndex = -1;
          __asm
          {
            vmovdqu xmmword ptr [rbp+57h+var_A0.member], xmm0
            vmovdqu xmmword ptr [rbp+57h+var_60.member], xmm0
          }
          v43.isValid = 0;
          v43.offset = 0;
          v43.arrayIndex = -1;
          DDL_MoveToIndex(&state, &v41, v31);
          v34 = j_SL_GetRawHash(scr_const.attachment);
          DDL_MoveToNameByHash(&v41, &v43, v34, NULL);
          v35 = DDL_GetEnum(&v43, context);
          Core_strcpy(attachment, 0x400ui64, v35);
          v36 = j_SL_GetRawHash(scr_const.variantID);
          DDL_MoveToNameByHash(&v41, &v43, v36, NULL);
          *p_variantID = DDL_GetByte(&v43, context);
          p_variantID += 1025;
          ++v31;
          attachment += 1025;
        }
        while ( v31 < v30 );
        v14 = v39;
      }
      ++v15;
      v8 = weaponCustomizationSet;
      v13 = v38 + 1;
      --v14;
      ++v38;
      v39 = v14;
    }
    while ( v14 );
  }
  return 1;
}

/*
==============
PublicProfileInfo::deserialize
==============
*/
bool PublicProfileInfo::deserialize(PublicProfileInfo *this, bdReference<bdByteBuffer> buffer)
{
  bdByteBuffer *v4; 
  bool v5; 
  _DWORD *v6; 
  bool v7; 
  bdByteBuffer_vtbl *v8; 
  bdReference<bdByteBuffer> buffera; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  v4 = (bdByteBuffer *)buffer.m_ptr->__vftable;
  buffera.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  v5 = bdProfileInfo::deserialize(this, (bdReference<bdByteBuffer>)&buffera);
  v6 = &this->_bytes_20[8];
  *(_DWORD *)&this->_bytes_20[8] = 256;
  v7 = v5 && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, &this->_bytes_20[12], (unsigned int *)&this->_bytes_20[8]);
  v8 = buffer.m_ptr->__vftable;
  if ( *v6 <= 0x100u )
  {
    if ( v8 && !_InterlockedDecrement((volatile signed __int32 *)&v8->allocateBuffer) )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return v7;
  }
  else
  {
    if ( v8 && !_InterlockedDecrement((volatile signed __int32 *)&v8->allocateBuffer) )
    {
      if ( buffer.m_ptr->__vftable )
        (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
      buffer.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
PublicProfileInfo::serialize
==============
*/
char PublicProfileInfo::serialize(PublicProfileInfo *this, bdByteBuffer *buffer)
{
  bdProfileInfo::serialize(this, buffer);
  bdByteBuffer::writeBlob(buffer, (char *)&this->__vftable + 28, *((_DWORD *)&this->__vftable + 6));
  return 1;
}

/*
==============
PublicProfileInfo::sizeOf
==============
*/
__int64 PublicProfileInfo::sizeOf(PublicProfileInfo *this)
{
  return 320i64;
}

