/*
==============
ClGameModeApplicationSP::IsModelNameLoaded
==============
*/

bool __fastcall ClGameModeApplicationSP::IsModelNameLoaded(ClGameModeApplicationSP *this, const char *modelName)
{
  return ?IsModelNameLoaded@ClGameModeApplicationSP@@UEBA_NPEBD@Z(this, modelName);
}

/*
==============
ClGameModeApplicationSP::DrawUIScene
==============
*/

void __fastcall ClGameModeApplicationSP::DrawUIScene(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, bool runLUI)
{
  ?DrawUIScene@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@_N@Z(this, localClientNum, runLUI);
}

/*
==============
ClGameModeApplicationSP::DisconnectLocalClient
==============
*/

void __fastcall ClGameModeApplicationSP::DisconnectLocalClient(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, bool declineInvite)
{
  ?DisconnectLocalClient@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@_N@Z(this, localClientNum, declineInvite);
}

/*
==============
ClGameModeApplicationSP::UnloadModel
==============
*/

void __fastcall ClGameModeApplicationSP::UnloadModel(ClGameModeApplicationSP *this, const char *modelName)
{
  ?UnloadModel@ClGameModeApplicationSP@@UEBAXPEBD@Z(this, modelName);
}

/*
==============
ClGameModeApplicationSP::RegisterGameModeFunctions
==============
*/

void __fastcall ClGameModeApplicationSP::RegisterGameModeFunctions(ClGameModeApplicationSP *this, lua_State *luaVM)
{
  ?RegisterGameModeFunctions@ClGameModeApplicationSP@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
ClGameModeApplicationSP::RunDvarValidation
==============
*/

void __fastcall ClGameModeApplicationSP::RunDvarValidation(ClGameModeApplicationSP *this)
{
  ?RunDvarValidation@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::RunFrameTimeClamp
==============
*/

void __fastcall ClGameModeApplicationSP::RunFrameTimeClamp(ClGameModeApplicationSP *this)
{
  ?RunFrameTimeClamp@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::ConnectionLessPacketDispatch
==============
*/

bool __fastcall ClGameModeApplicationSP::ConnectionLessPacketDispatch(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, int time)
{
  return ?ConnectionLessPacketDispatch@ClGameModeApplicationSP@@UEAA_NW4LocalClientNum_t@@PEBUnetadr_t@@PEAUmsg_t@@H@Z(this, localClientNum, from, msg, time);
}

/*
==============
ClGameModeApplicationSP::GetMaxFPS
==============
*/

int __fastcall ClGameModeApplicationSP::GetMaxFPS(ClGameModeApplicationSP *this)
{
  return ?GetMaxFPS@ClGameModeApplicationSP@@UEBAHXZ(this);
}

/*
==============
ClGameModeApplicationSP::RunAuthenticationManager
==============
*/

void __fastcall ClGameModeApplicationSP::RunAuthenticationManager(ClGameModeApplicationSP *this, int msec)
{
  ?RunAuthenticationManager@ClGameModeApplicationSP@@UEAAXH@Z(this, msec);
}

/*
==============
ClGameModeApplicationSP::InitGameMode
==============
*/

void __fastcall ClGameModeApplicationSP::InitGameMode(ClGameModeApplicationSP *this)
{
  ?InitGameMode@ClGameModeApplicationSP@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::ControlRemoved
==============
*/

void __fastcall ClGameModeApplicationSP::ControlRemoved(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?ControlRemoved@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::Disconnect
==============
*/

void __fastcall ClGameModeApplicationSP::Disconnect(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?Disconnect@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::DrawGameScene
==============
*/

bool __fastcall ClGameModeApplicationSP::DrawGameScene(ClGameModeApplicationSP *this, Scr_UpdateFrame_State state, bool *outFrameToggled)
{
  return ?DrawGameScene@ClGameModeApplicationSP@@UEAA_NW4Scr_UpdateFrame_State@@PEA_N@Z(this, state, outFrameToggled);
}

/*
==============
ClGameModeApplicationSP::RunTransientProcessing
==============
*/

void __fastcall ClGameModeApplicationSP::RunTransientProcessing(ClGameModeApplicationSP *this)
{
  ?RunTransientProcessing@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::UpdateSkinningCache
==============
*/

void __fastcall ClGameModeApplicationSP::UpdateSkinningCache(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?UpdateSkinningCache@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::RenderSceneCallback
==============
*/

void __fastcall ClGameModeApplicationSP::RenderSceneCallback(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?RenderSceneCallback@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::LoadModel
==============
*/

bool __fastcall ClGameModeApplicationSP::LoadModel(ClGameModeApplicationSP *this, const char *modelName, const AssetStreamingPriority priority)
{
  return ?LoadModel@ClGameModeApplicationSP@@UEBA_NPEBDTAssetStreamingPriority@@@Z(this, modelName, priority);
}

/*
==============
ClGameModeApplicationSP::IsModelLoaded
==============
*/

bool __fastcall ClGameModeApplicationSP::IsModelLoaded(ClGameModeApplicationSP *this, const XModel *model)
{
  return ?IsModelLoaded@ClGameModeApplicationSP@@UEBA_NPEBUXModel@@@Z(this, model);
}

/*
==============
ClGameModeApplicationSP::ShutdownHunkUsers
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownHunkUsers(ClGameModeApplicationSP *this)
{
  ?ShutdownHunkUsers@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::ShutdownClientMemory
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownClientMemory(ClGameModeApplicationSP *this)
{
  ?ShutdownClientMemory@ClGameModeApplicationSP@@UEBAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::ShutdownAllGameModeClients
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownAllGameModeClients(ClGameModeApplicationSP *this)
{
  ?ShutdownAllGameModeClients@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::DrawOverlay
==============
*/

void __fastcall ClGameModeApplicationSP::DrawOverlay(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?DrawOverlay@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::InitAllGameModeClients
==============
*/

void __fastcall ClGameModeApplicationSP::InitAllGameModeClients(ClGameModeApplicationSP *this)
{
  ?InitAllGameModeClients@ClGameModeApplicationSP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::ShutdownGameMode
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownGameMode(ClGameModeApplicationSP *this)
{
  ?ShutdownGameMode@ClGameModeApplicationSP@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::HandleSplitscreenSignIn
==============
*/

bool __fastcall ClGameModeApplicationSP::HandleSplitscreenSignIn(ClGameModeApplicationSP *this, int controllerIndex, bool isJoining)
{
  return ?HandleSplitscreenSignIn@ClGameModeApplicationSP@@UEAA_NH_N@Z(this, controllerIndex, isJoining);
}

/*
==============
ClGameModeApplicationSP::SetLoadPriority
==============
*/

void __fastcall ClGameModeApplicationSP::SetLoadPriority(ClGameModeApplicationSP *this, const char *modelName, const AssetStreamingPriority priority)
{
  ?SetLoadPriority@ClGameModeApplicationSP@@UEBAXPEBDTAssetStreamingPriority@@@Z(this, modelName, priority);
}

/*
==============
ClGameModeApplicationSP::ClearWaitingForServer
==============
*/

void __fastcall ClGameModeApplicationSP::ClearWaitingForServer(ClGameModeApplicationSP *this)
{
  ?ClearWaitingForServer@ClGameModeApplicationSP@@UEBAXXZ(this);
}

/*
==============
ClGameModeApplicationSP::RunClientFrame
==============
*/

void __fastcall ClGameModeApplicationSP::RunClientFrame(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ?RunClientFrame@ClGameModeApplicationSP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationSP::ClearWaitingForServer
==============
*/
void ClGameModeApplicationSP::ClearWaitingForServer(ClGameModeApplicationSP *this)
{
  ;
}

/*
==============
ClGameModeApplicationSP::ConnectionLessPacketDispatch
==============
*/
bool ClGameModeApplicationSP::ConnectionLessPacketDispatch(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg)
{
  return 0;
}

/*
==============
ClGameModeApplicationSP::ControlRemoved
==============
*/
void ClGameModeApplicationSP::ControlRemoved(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
    LODWORD(v8) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( !clientUIActives[v2].frontEndSceneState[0] )
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v3) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v6) )
        __debugbreak();
    }
    if ( clientUIActives[v2].connectionState )
      CL_MainSP_Pause((LocalClientNum_t)v2, 1, (CLPauseReason)32);
  }
}

/*
==============
ClGameModeApplicationSP::Disconnect
==============
*/
void ClGameModeApplicationSP::Disconnect(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  CL_MainSP_Disconnect(localClientNum);
}

/*
==============
ClGameModeApplicationSP::DisconnectLocalClient
==============
*/
void ClGameModeApplicationSP::DisconnectLocalClient(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, bool declineInvite)
{
  CL_MainSP_DisconnectLocalClient(localClientNum);
}

/*
==============
ClGameModeApplicationSP::DrawGameScene
==============
*/
bool ClGameModeApplicationSP::DrawGameScene(ClGameModeApplicationSP *this, Scr_UpdateFrame_State state, bool *outFrameToggled)
{
  return CL_ScreenSP_DrawGameScene(state, outFrameToggled);
}

/*
==============
ClGameModeApplicationSP::DrawOverlay
==============
*/
void ClGameModeApplicationSP::DrawOverlay(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  CL_ScreenSP_DrawOverlay(localClientNum);
}

/*
==============
ClGameModeApplicationSP::DrawUIScene
==============
*/
void ClGameModeApplicationSP::DrawUIScene(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum, bool runLUI)
{
  CL_ScreenSP_DrawUI(runLUI);
}

/*
==============
ClGameModeApplicationSP::GetMaxFPS
==============
*/
__int64 ClGameModeApplicationSP::GetMaxFPS(ClGameModeApplicationSP *this)
{
  int integer; 
  __int64 result; 

  if ( !com_maxfps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_gamemode_app_sp.cpp", 282, ASSERT_TYPE_ASSERT, "(com_maxfps != nullptr)", (const char *)&queryFormat, "com_maxfps != nullptr") )
    __debugbreak();
  integer = com_maxfps->current.integer;
  if ( Com_UseConstantUserCommandTime() )
    return (unsigned int)integer;
  result = 120i64;
  if ( integer < 120 )
    return (unsigned int)integer;
  return result;
}

/*
==============
ClGameModeApplicationSP::HandleSplitscreenSignIn
==============
*/
bool ClGameModeApplicationSP::HandleSplitscreenSignIn(ClGameModeApplicationSP *this, int controllerIndex, bool isJoining)
{
  return 0;
}

/*
==============
ClGameModeApplicationSP::InitAllGameModeClients
==============
*/
void ClGameModeApplicationSP::InitAllGameModeClients(ClGameModeApplicationSP *this)
{
  int i; 

  CL_MainSP_InitGameMode();
  for ( i = 0; i < 2; ++i )
    CL_MainSP_InitGameModeClient((LocalClientNum_t)i);
}

/*
==============
ClGameModeApplicationSP::InitGameMode
==============
*/
void ClGameModeApplicationSP::InitGameMode(ClGameModeApplicationSP *this)
{
  ClGameModeApplication::InitGameMode(this);
  CL_MainSP_ResetSaveGameExists();
}

/*
==============
ClGameModeApplicationSP::IsModelLoaded
==============
*/
char ClGameModeApplicationSP::IsModelLoaded(ClGameModeApplicationSP *this, const XModel *model)
{
  return 1;
}

/*
==============
ClGameModeApplicationSP::IsModelNameLoaded
==============
*/
char ClGameModeApplicationSP::IsModelNameLoaded(ClGameModeApplicationSP *this, const char *modelName)
{
  return 1;
}

/*
==============
ClGameModeApplicationSP::LoadModel
==============
*/
char ClGameModeApplicationSP::LoadModel(ClGameModeApplicationSP *this, const char *modelName, const AssetStreamingPriority priority)
{
  Com_Printf(14, "Transient load request for model %s ignored in SP.\n", modelName);
  return 1;
}

/*
==============
ClGameModeApplicationSP::RegisterGameModeFunctions
==============
*/
void ClGameModeApplicationSP::RegisterGameModeFunctions(ClGameModeApplicationSP *this, lua_State *luaVM)
{
  LUI_CoD_GameSP_RegisterFunctions(luaVM);
}

/*
==============
ClGameModeApplicationSP::RenderSceneCallback
==============
*/
void ClGameModeApplicationSP::RenderSceneCallback(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
ClGameModeApplicationSP::RunAuthenticationManager
==============
*/
void ClGameModeApplicationSP::RunAuthenticationManager(ClGameModeApplicationSP *this, int msec)
{
  ;
}

/*
==============
ClGameModeApplicationSP::RunClientFrame
==============
*/
void ClGameModeApplicationSP::RunClientFrame(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  CL_MainSP_ClientFrame(localClientNum);
}

/*
==============
ClGameModeApplicationSP::RunDvarValidation
==============
*/
void ClGameModeApplicationSP::RunDvarValidation(ClGameModeApplicationSP *this)
{
  ;
}

/*
==============
ClGameModeApplicationSP::RunFrameTimeClamp
==============
*/
void ClGameModeApplicationSP::RunFrameTimeClamp(ClGameModeApplicationSP *this)
{
  ;
}

/*
==============
ClGameModeApplicationSP::RunTransientProcessing
==============
*/
void ClGameModeApplicationSP::RunTransientProcessing(ClGameModeApplicationSP *this)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_gamemode_app_sp.cpp", 170, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_gamemode_app_sp.cpp", 171, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  CL_TransientsSP_Process();
  CL_PreloadSP_Process();
}

/*
==============
ClGameModeApplicationSP::SetLoadPriority
==============
*/
void ClGameModeApplicationSP::SetLoadPriority(ClGameModeApplicationSP *this, const char *modelName, const AssetStreamingPriority priority)
{
  Com_Printf(14, "Transient priority request for model %s ignored in SP.\n", modelName);
}

/*
==============
ClGameModeApplicationSP::ShutdownAllGameModeClients
==============
*/
void ClGameModeApplicationSP::ShutdownAllGameModeClients(ClGameModeApplicationSP *this)
{
  int i; 

  for ( i = 0; i < 2; ++i )
    CL_MainSP_ShutdownGameModeClient((LocalClientNum_t)i);
  CL_MainSP_ShutdownGameMode();
}

/*
==============
ClGameModeApplicationSP::ShutdownClientMemory
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownClientMemory(ClGameModeApplicationSP *this)
{
  CL_MainSP_ShutdownMemory();
}

/*
==============
ClGameModeApplicationSP::ShutdownGameMode
==============
*/

void __fastcall ClGameModeApplicationSP::ShutdownGameMode(ClGameModeApplicationSP *this)
{
  ClGameModeApplication::ShutdownGameMode(this);
}

/*
==============
ClGameModeApplicationSP::ShutdownHunkUsers
==============
*/
void ClGameModeApplicationSP::ShutdownHunkUsers(ClGameModeApplicationSP *this)
{
  CL_CGameSP_Shutdown(LOCAL_CLIENT_0);
}

/*
==============
ClGameModeApplicationSP::UnloadModel
==============
*/
void ClGameModeApplicationSP::UnloadModel(ClGameModeApplicationSP *this, const char *modelName)
{
  Com_Printf(14, "Transient unload request for model %s ignored in SP.\n", modelName);
}

/*
==============
ClGameModeApplicationSP::UpdateSkinningCache
==============
*/
void ClGameModeApplicationSP::UpdateSkinningCache(ClGameModeApplicationSP *this, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  ClConnection **v3; 
  __int64 v4; 
  __int64 v5; 

  v2 = localClientNum;
  if ( R_SkinCacheReachedCorpseThreshold() && g_allowRemoveCorpse )
  {
    if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
      __debugbreak();
    v3 = &ClConnection::ms_connections[v2];
    if ( !*v3 )
    {
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
        __debugbreak();
    }
    if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v2) )
    {
      if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v5 = cl_maxLocalClients;
        LODWORD(v4) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
        __debugbreak();
      if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
        __debugbreak();
      (*v3)->AddReliableCommand(*v3, "removecorpse");
    }
    g_allowRemoveCorpse = 0;
  }
}

