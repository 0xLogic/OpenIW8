/*
==============
LUI_DataBinding_Frontend_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Frontend_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Frontend_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Frontend_UpdateSocialRequests
==============
*/

void __fastcall LUI_DataBinding_Frontend_UpdateSocialRequests(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Frontend_UpdateSocialRequests@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Frontend_FrameUpdate
==============
*/
void LUI_DataBinding_Frontend_FrameUpdate(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int ControllerFromClient; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  Online_Friends *Instance; 
  Online_InvitationManager *v7; 
  int InviteCount; 
  OnlineClansManager *v9; 
  int ClanInviteCount; 
  unsigned __int16 v11; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 

  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Frontend_FrameUpdate");
  LUIBinding::PushString(&s_LUI_DataBinding_PrimaryPlayerName);
  LUIBinding::PushFloat(&s_LUI_DataBinding_SceneOpaqueOverlayAlpha);
  LUIBinding::PushBool(&s_LUI_DataBinding_ShowBuildNumber);
  LUIBinding::PushString(&s_LUI_DataBinding_buildAndServerNumbers);
  LUI_DataBinding_UpdatePlayerCard(v2);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.social");
  LOWORD(localClientNum) = LUI_Model_CreateModelFromPath(ModelFromPath, "friendRequestCount");
  numRequestsOut = 0;
  Instance = Online_Friends::GetInstance();
  Online_Friends::Crossplay_GetIncomingFriendRequests(Instance, ControllerFromClient, (const DWFriend **)&requestsOut, &numRequestsOut);
  LUI_Model_SetInt(localClientNum, numRequestsOut);
  LOWORD(localClientNum) = LUI_Model_CreateModelFromPath(ModelFromPath, "partyInvitationCount");
  v7 = Online_InvitationManager::GetInstance();
  InviteCount = Online_InvitationManager::GetInviteCount(v7, INVITE_ALL);
  LUI_Model_SetInt(localClientNum, InviteCount);
  LOWORD(localClientNum) = LUI_Model_CreateModelFromPath(ModelFromPath, "regimentInvitationCount");
  v9 = OnlineClansManager::GetInstance();
  ClanInviteCount = OnlineClansManager::GetClanInviteCount(v9, ControllerFromClient);
  LUI_Model_SetInt(localClientNum, ClanInviteCount);
  v11 = LUI_Model_CreateModelFromPath(ModelFromPath, "allRequestCount");
  LUI_Model_SetInt(v11, numRequestsOut + ClanInviteCount + InviteCount);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_DataBinding_Frontend_UpdateSocialRequests
==============
*/
void LUI_DataBinding_Frontend_UpdateSocialRequests(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v4; 
  Online_Friends *Instance; 
  unsigned __int16 v6; 
  Online_InvitationManager *v7; 
  int InviteCount; 
  unsigned __int16 v9; 
  OnlineClansManager *v10; 
  int ClanInviteCount; 
  unsigned __int16 v12; 
  unsigned int numRequestsOut; 
  DWFriend *requestsOut; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.social");
  v4 = LUI_Model_CreateModelFromPath(ModelFromPath, "friendRequestCount");
  numRequestsOut = 0;
  Instance = Online_Friends::GetInstance();
  Online_Friends::Crossplay_GetIncomingFriendRequests(Instance, ControllerFromClient, (const DWFriend **)&requestsOut, &numRequestsOut);
  LUI_Model_SetInt(v4, numRequestsOut);
  v6 = LUI_Model_CreateModelFromPath(ModelFromPath, "partyInvitationCount");
  v7 = Online_InvitationManager::GetInstance();
  InviteCount = Online_InvitationManager::GetInviteCount(v7, INVITE_ALL);
  LUI_Model_SetInt(v6, InviteCount);
  v9 = LUI_Model_CreateModelFromPath(ModelFromPath, "regimentInvitationCount");
  v10 = OnlineClansManager::GetInstance();
  ClanInviteCount = OnlineClansManager::GetClanInviteCount(v10, ControllerFromClient);
  LUI_Model_SetInt(v9, ClanInviteCount);
  v12 = LUI_Model_CreateModelFromPath(ModelFromPath, "allRequestCount");
  LUI_Model_SetInt(v12, numRequestsOut + ClanInviteCount + InviteCount);
}

/*
==============
LUI_DataBinding_UpdatePlayerCard
==============
*/
void LUI_DataBinding_UpdatePlayerCard()
{
  int i; 
  int ControllerFromClient; 
  const char *LocalClientName; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v5; 
  char *v6; 
  __int64 CacheLocation; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  XUID result; 
  PlayerProfileData profileData; 
  char outBuffer[16]; 
  char dest[128]; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
      if ( Live_IsUserSignedInToDemonware(ControllerFromClient) )
      {
        Live_GetXuid(&result, ControllerFromClient);
        LocalClientName = Live_GetLocalClientName(ControllerFromClient);
        if ( PlayercardCache_GetPlayercard(result, LocalClientName, &profileData) )
        {
          ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
          ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.MP.conquest.Headquarters.callingCardEditors.smallPlayerCard");
          v5 = LUI_Model_CreateModelFromPath(ModelFromPath, "fullName");
          if ( profileData.clanAbbrev[0] )
          {
            dest[0] = 0;
            *(_OWORD *)outBuffer = _xmm;
            Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, outBuffer, 0x10ui64, 0x37u);
            Com_sprintf(dest, 0x80ui64, "[%s]%s", outBuffer, LocalClientName);
            v6 = dest;
          }
          else
          {
            v6 = (char *)LocalClientName;
          }
          LUI_Model_SetString(v5, v6);
          CacheLocation = PlayerCardData_GetCacheLocation();
          v8 = LUI_Model_CreateModelFromPath(ModelFromPath, "customEmblemEquipped");
          LUI_Model_SetBool(v8, 0);
          v9 = CacheLocation;
          LODWORD(CacheLocation) = profileData.customization_patch[CacheLocation];
          v10 = LUI_Model_CreateModelFromPath(ModelFromPath, "emblemIndex");
          LUI_Model_SetInt(v10, CacheLocation);
          LODWORD(CacheLocation) = profileData.customization_background[v9];
          v11 = LUI_Model_CreateModelFromPath(ModelFromPath, "backgroundIndex");
          LUI_Model_SetInt(v11, CacheLocation);
          LODWORD(CacheLocation) = profileData.rank_mp + profileData.prestige_mp;
          v12 = LUI_Model_CreateModelFromPath(ModelFromPath, "rank");
          LUI_Model_SetInt(v12, CacheLocation);
          LODWORD(CacheLocation) = profileData.rank_mp;
          v13 = LUI_Model_CreateModelFromPath(ModelFromPath, "baseRank");
          LUI_Model_SetInt(v13, CacheLocation);
          LODWORD(CacheLocation) = profileData.prestige_mp;
          v14 = LUI_Model_CreateModelFromPath(ModelFromPath, "prestige");
          LUI_Model_SetInt(v14, CacheLocation);
        }
      }
    }
  }
}

/*
==============
s_LUI_DataBinding_Get_PrimaryPlayerName
==============
*/
char s_LUI_DataBinding_Get_PrimaryPlayerName(unsigned __int64 outStringSize, char *outString)
{
  Live_GetPrimaryGamertagToDisplay(outString, outStringSize);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_SceneOpaqueOverlayAlpha
==============
*/

double __fastcall s_LUI_DataBinding_Get_SceneOpaqueOverlayAlpha()
{
  return Com_FrontEndScene_GetOpaqueOverlayAlpha();
}

/*
==============
s_LUI_DataBinding_Get_ShowBuildNumber
==============
*/
__int64 s_LUI_DataBinding_Get_ShowBuildNumber()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_lui_showBuildAndServerText;
  if ( !DVARBOOL_lui_showBuildAndServerText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_showBuildAndServerText") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
s_LUI_DataBinding_Get_buildAndServerNumbers
==============
*/
char s_LUI_DataBinding_Get_buildAndServerNumbers(unsigned __int64 outStringSize, char *outString)
{
  Online_PatchStreamer *Instance; 
  unsigned int PatchManifestVersion; 
  unsigned int BuildNumberAsInt; 
  const char *v7; 
  int v9; 
  int v10; 

  Instance = Online_PatchStreamer::GetInstance();
  PatchManifestVersion = Online_PatchStreamer::GetPatchManifestVersion(Instance, MOVEMENT);
  BuildNumberAsInt = j_getBuildNumberAsInt();
  v10 = 33;
  v9 = 1065;
  v7 = j_va("%s.%i [%i:%i+%i] %s", "8.24", BuildNumberAsInt, PatchManifestVersion, v9, v10, "**DWDEV**");
  Core_strcpy(outString, outStringSize, v7);
  return 1;
}

