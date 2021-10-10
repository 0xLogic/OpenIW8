/*
==============
ClGameModeApplicationMP::RunDvarValidation
==============
*/

void __fastcall ClGameModeApplicationMP::RunDvarValidation(ClGameModeApplicationMP *this)
{
  ?RunDvarValidation@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::ShutdownHunkUsers
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownHunkUsers(ClGameModeApplicationMP *this)
{
  ?ShutdownHunkUsers@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::InitGameMode
==============
*/

void __fastcall ClGameModeApplicationMP::InitGameMode(ClGameModeApplicationMP *this)
{
  ?InitGameMode@ClGameModeApplicationMP@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::RenderSceneCallback
==============
*/

void __fastcall ClGameModeApplicationMP::RenderSceneCallback(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?RenderSceneCallback@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::RunFrameTimeClamp
==============
*/

void __fastcall ClGameModeApplicationMP::RunFrameTimeClamp(ClGameModeApplicationMP *this)
{
  ?RunFrameTimeClamp@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::GetMaxFPS
==============
*/

int __fastcall ClGameModeApplicationMP::GetMaxFPS(ClGameModeApplicationMP *this)
{
  return ?GetMaxFPS@ClGameModeApplicationMP@@UEBAHXZ(this);
}

/*
==============
ClGameModeApplicationMP::DrawGameScene
==============
*/

bool __fastcall ClGameModeApplicationMP::DrawGameScene(ClGameModeApplicationMP *this, Scr_UpdateFrame_State state, bool *outFrameToggled)
{
  return ?DrawGameScene@ClGameModeApplicationMP@@UEAA_NW4Scr_UpdateFrame_State@@PEA_N@Z(this, state, outFrameToggled);
}

/*
==============
ClGameModeApplicationMP::ShutdownClientMemory
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownClientMemory(ClGameModeApplicationMP *this)
{
  ?ShutdownClientMemory@ClGameModeApplicationMP@@UEBAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::ShutdownGameMode
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownGameMode(ClGameModeApplicationMP *this)
{
  ?ShutdownGameMode@ClGameModeApplicationMP@@MEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::UpdateSkinningCache
==============
*/

void __fastcall ClGameModeApplicationMP::UpdateSkinningCache(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?UpdateSkinningCache@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::IsModelLoaded
==============
*/

bool __fastcall ClGameModeApplicationMP::IsModelLoaded(ClGameModeApplicationMP *this, const XModel *model)
{
  return ?IsModelLoaded@ClGameModeApplicationMP@@UEBA_NPEBUXModel@@@Z(this, model);
}

/*
==============
ClGameModeApplicationMP::IsModelNameLoaded
==============
*/

bool __fastcall ClGameModeApplicationMP::IsModelNameLoaded(ClGameModeApplicationMP *this, const char *modelName)
{
  return ?IsModelNameLoaded@ClGameModeApplicationMP@@UEBA_NPEBD@Z(this, modelName);
}

/*
==============
ClGameModeApplicationMP::DisconnectLocalClient
==============
*/

void __fastcall ClGameModeApplicationMP::DisconnectLocalClient(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, bool declineInvite)
{
  ?DisconnectLocalClient@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@_N@Z(this, localClientNum, declineInvite);
}

/*
==============
ClGameModeApplicationMP::ConnectionLessPacketDispatch
==============
*/

bool __fastcall ClGameModeApplicationMP::ConnectionLessPacketDispatch(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, int time)
{
  return ?ConnectionLessPacketDispatch@ClGameModeApplicationMP@@UEAA_NW4LocalClientNum_t@@PEBUnetadr_t@@PEAUmsg_t@@H@Z(this, localClientNum, from, msg, time);
}

/*
==============
ClGameModeApplicationMP::RunTransientProcessing
==============
*/

void __fastcall ClGameModeApplicationMP::RunTransientProcessing(ClGameModeApplicationMP *this)
{
  ?RunTransientProcessing@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::SetLoadPriority
==============
*/

void __fastcall ClGameModeApplicationMP::SetLoadPriority(ClGameModeApplicationMP *this, const char *modelName, const AssetStreamingPriority priority)
{
  ?SetLoadPriority@ClGameModeApplicationMP@@UEBAXPEBDTAssetStreamingPriority@@@Z(this, modelName, priority);
}

/*
==============
ClGameModeApplicationMP::ControlRemoved
==============
*/

void __fastcall ClGameModeApplicationMP::ControlRemoved(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?ControlRemoved@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::RunClientFrame
==============
*/

void __fastcall ClGameModeApplicationMP::RunClientFrame(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?RunClientFrame@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::DrawOverlay
==============
*/

void __fastcall ClGameModeApplicationMP::DrawOverlay(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?DrawOverlay@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::InitAllGameModeClients
==============
*/

void __fastcall ClGameModeApplicationMP::InitAllGameModeClients(ClGameModeApplicationMP *this)
{
  ?InitAllGameModeClients@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::UnloadModel
==============
*/

void __fastcall ClGameModeApplicationMP::UnloadModel(ClGameModeApplicationMP *this, const char *modelName)
{
  ?UnloadModel@ClGameModeApplicationMP@@UEBAXPEBD@Z(this, modelName);
}

/*
==============
ClGameModeApplicationMP::RegisterGameModeFunctions
==============
*/

void __fastcall ClGameModeApplicationMP::RegisterGameModeFunctions(ClGameModeApplicationMP *this, lua_State *luaVM)
{
  ?RegisterGameModeFunctions@ClGameModeApplicationMP@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
ClGameModeApplicationMP::Disconnect
==============
*/

void __fastcall ClGameModeApplicationMP::Disconnect(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  ?Disconnect@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClGameModeApplicationMP::ClearWaitingForServer
==============
*/

void __fastcall ClGameModeApplicationMP::ClearWaitingForServer(ClGameModeApplicationMP *this)
{
  ?ClearWaitingForServer@ClGameModeApplicationMP@@UEBAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::HandleSplitscreenSignIn
==============
*/

bool __fastcall ClGameModeApplicationMP::HandleSplitscreenSignIn(ClGameModeApplicationMP *this, int controllerIndex, bool isJoining)
{
  return ?HandleSplitscreenSignIn@ClGameModeApplicationMP@@UEAA_NH_N@Z(this, controllerIndex, isJoining);
}

/*
==============
ClGameModeApplicationMP::ShutdownAllGameModeClients
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownAllGameModeClients(ClGameModeApplicationMP *this)
{
  ?ShutdownAllGameModeClients@ClGameModeApplicationMP@@UEAAXXZ(this);
}

/*
==============
ClGameModeApplicationMP::LoadModel
==============
*/

bool __fastcall ClGameModeApplicationMP::LoadModel(ClGameModeApplicationMP *this, const char *modelName, const AssetStreamingPriority priority)
{
  return ?LoadModel@ClGameModeApplicationMP@@UEBA_NPEBDTAssetStreamingPriority@@@Z(this, modelName, priority);
}

/*
==============
ClGameModeApplicationMP::DrawUIScene
==============
*/

void __fastcall ClGameModeApplicationMP::DrawUIScene(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, bool runLUI)
{
  ?DrawUIScene@ClGameModeApplicationMP@@UEAAXW4LocalClientNum_t@@_N@Z(this, localClientNum, runLUI);
}

/*
==============
ClGameModeApplicationMP::RunAuthenticationManager
==============
*/

void __fastcall ClGameModeApplicationMP::RunAuthenticationManager(ClGameModeApplicationMP *this, int msec)
{
  ?RunAuthenticationManager@ClGameModeApplicationMP@@UEAAXH@Z(this, msec);
}

/*
==============
ClGameModeApplicationMP::ClearWaitingForServer
==============
*/
void ClGameModeApplicationMP::ClearWaitingForServer(ClGameModeApplicationMP *this)
{
  g_waitingForServer = 0;
}

/*
==============
ClGameModeApplicationMP::ConnectionLessPacketDispatch
==============
*/
bool ClGameModeApplicationMP::ConnectionLessPacketDispatch(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg, int time)
{
  __int128 v8; 
  netadr_t v10; 

  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(from)", (const char *)&queryFormat, "from") )
    __debugbreak();
  v8 = *(_OWORD *)&from->type;
  v10.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v10.type = v8;
  return CL_MainMP_DispatchConnectionlessPacket(localClientNum, &v10, msg, time);
}

/*
==============
ClGameModeApplicationMP::ControlRemoved
==============
*/
void ClGameModeApplicationMP::ControlRemoved(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
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
      CL_MainMP_Pause((LocalClientNum_t)v2, 1, (CLPauseReason)32);
  }
}

/*
==============
ClGameModeApplicationMP::Disconnect
==============
*/
void ClGameModeApplicationMP::Disconnect(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  CL_MainMP_Disconnect(localClientNum);
}

/*
==============
ClGameModeApplicationMP::DisconnectLocalClient
==============
*/
void ClGameModeApplicationMP::DisconnectLocalClient(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, bool declineInvite)
{
  CL_MainMP_DisconnectLocalClient(localClientNum, declineInvite);
}

/*
==============
ClGameModeApplicationMP::DrawGameScene
==============
*/
bool ClGameModeApplicationMP::DrawGameScene(ClGameModeApplicationMP *this, Scr_UpdateFrame_State state, bool *outFrameToggled)
{
  return CL_ScreenMP_DrawGameScene(outFrameToggled);
}

/*
==============
ClGameModeApplicationMP::DrawOverlay
==============
*/
void ClGameModeApplicationMP::DrawOverlay(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  CL_ScreenMP_DrawOverlay(localClientNum);
}

/*
==============
ClGameModeApplicationMP::DrawUIScene
==============
*/
void ClGameModeApplicationMP::DrawUIScene(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum, bool runLUI)
{
  CL_ScreenMP_DrawUI(localClientNum, runLUI);
}

/*
==============
ClGameModeApplicationMP::GetMaxFPS
==============
*/
__int64 ClGameModeApplicationMP::GetMaxFPS(ClGameModeApplicationMP *this)
{
  int integer; 
  __int64 result; 

  if ( !com_maxfps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 541, ASSERT_TYPE_ASSERT, "(com_maxfps != nullptr)", (const char *)&queryFormat, "com_maxfps != nullptr") )
    __debugbreak();
  integer = com_maxfps->current.integer;
  if ( Com_UseConstantUserCommandTime() )
    return (unsigned int)integer;
  result = 100i64;
  if ( integer < 100 )
    return (unsigned int)integer;
  return result;
}

/*
==============
ClGameModeApplicationMP::HandleSplitscreenSignIn
==============
*/
bool ClGameModeApplicationMP::HandleSplitscreenSignIn(ClGameModeApplicationMP *this, int controllerIndex, bool isJoining)
{
  return CL_Mgr_HandleSignIn(controllerIndex, isJoining);
}

/*
==============
ClGameModeApplicationMP::InitAllGameModeClients
==============
*/
void ClGameModeApplicationMP::InitAllGameModeClients(ClGameModeApplicationMP *this)
{
  int i; 

  CL_MainMP_InitGameMode();
  for ( i = 0; i < 2; ++i )
    CL_MainMP_InitGameModeClient((LocalClientNum_t)i);
}

/*
==============
ClGameModeApplicationMP::InitGameMode
==============
*/
void ClGameModeApplicationMP::InitGameMode(ClGameModeApplicationMP *this)
{
  char ActiveGameMode; 
  int v2; 
  const dvar_t *v3; 

  ClGameModeApplication::InitGameMode(this);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    v2 = 20;
    goto LABEL_7;
  }
  if ( ActiveGameMode == 3 )
  {
    v2 = 4;
LABEL_7:
    Dvar_SetInt_Internal(DVARINT_party_maxPrivatePartyPlayers, v2);
    goto LABEL_8;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 90, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected game mode type in MP application") )
    __debugbreak();
LABEL_8:
  v3 = DVARINT_party_maxPrivatePartyPlayers;
  if ( !DVARINT_party_maxPrivatePartyPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxPrivatePartyPlayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  Party_SetNumGameSlots(&g_partyData, v3->current.integer);
}

/*
==============
ClGameModeApplicationMP::IsModelLoaded
==============
*/
char ClGameModeApplicationMP::IsModelLoaded(ClGameModeApplicationMP *this, const XModel *model)
{
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 482, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !CL_TransientsMP_IsXModelLoaded(model) )
    return 0;
  if ( CL_TransientsMP_IsRegisteredAsset(model->name, ASSET_TYPE_XMODEL) && !DB_XAssetExists(ASSET_TYPE_XMODEL, model->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 487, ASSERT_TYPE_ASSERT, "( ( !CL_TransientsMP_IsRegisteredAsset(model->name, ASSET_TYPE_XMODEL) || DB_XAssetExists( ASSET_TYPE_XMODEL, model->name ) ) )", "( model->name ) = %s", model->name) )
    __debugbreak();
  return 1;
}

/*
==============
ClGameModeApplicationMP::IsModelNameLoaded
==============
*/
char ClGameModeApplicationMP::IsModelNameLoaded(ClGameModeApplicationMP *this, const char *modelName)
{
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 500, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !CL_TransientsMP_IsXModelNameLoaded(modelName) )
    return 0;
  if ( CL_TransientsMP_IsRegisteredAsset(modelName, ASSET_TYPE_XMODEL) && !DB_XAssetExists(ASSET_TYPE_XMODEL, modelName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 505, ASSERT_TYPE_ASSERT, "( ( !CL_TransientsMP_IsRegisteredAsset( modelName, ASSET_TYPE_XMODEL ) || DB_XAssetExists( ASSET_TYPE_XMODEL, modelName ) ) )", "( modelName ) = %s", modelName) )
    __debugbreak();
  return 1;
}

/*
==============
ClGameModeApplicationMP::LoadModel
==============
*/
bool ClGameModeApplicationMP::LoadModel(ClGameModeApplicationMP *this, const char *modelName, const AssetStreamingPriority priority)
{
  char *modelNames; 

  modelNames = (char *)modelName;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 450, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  return CL_TransientsCommonMP_LoadModels((const char *const *)&modelNames, 1u, priority);
}

/*
==============
ClGameModeApplicationMP::RegisterGameModeFunctions
==============
*/
void ClGameModeApplicationMP::RegisterGameModeFunctions(ClGameModeApplicationMP *this, lua_State *luaVM)
{
  LUI_CoD_GameMP_RegisterFunctions(luaVM);
}

/*
==============
ClGameModeApplicationMP::RenderSceneCallback
==============
*/
void ClGameModeApplicationMP::RenderSceneCallback(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  CG_PlayersMP_StartUpdateClientWeaponVisibility(localClientNum);
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "aim assist client");
  AimTargetMP_StartTargetVisibilityWorkers(localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
ClGameModeApplicationMP::RunAuthenticationManager
==============
*/
void ClGameModeApplicationMP::RunAuthenticationManager(ClGameModeApplicationMP *this, int msec)
{
  ;
}

/*
==============
ClGameModeApplicationMP::RunClientFrame
==============
*/
void ClGameModeApplicationMP::RunClientFrame(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  CL_MainMP_ClientFrame(localClientNum);
}

/*
==============
ClGameModeApplicationMP::RunDvarValidation
==============
*/
void ClGameModeApplicationMP::RunDvarValidation(ClGameModeApplicationMP *this)
{
  ;
}

/*
==============
ClGameModeApplicationMP::RunFrameTimeClamp
==============
*/
void ClGameModeApplicationMP::RunFrameTimeClamp(ClGameModeApplicationMP *this)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v3; 

  v1 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  frame_msec = com_frameTime - old_com_frameTime;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v3 = DCONST_DVARINT_com_userCmdMinTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  frame_msec = I_clamp(frame_msec, v3->current.integer, integer);
  old_com_frameTime = com_frameTime;
}

/*
==============
ClGameModeApplicationMP::RunTransientProcessing
==============
*/
void ClGameModeApplicationMP::RunTransientProcessing(ClGameModeApplicationMP *this)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 385, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  CL_TransientsCommonMP_Update();
}

/*
==============
ClGameModeApplicationMP::SetLoadPriority
==============
*/
void ClGameModeApplicationMP::SetLoadPriority(ClGameModeApplicationMP *this, const char *modelName, const AssetStreamingPriority priority)
{
  char *modelNames; 

  modelNames = (char *)modelName;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  CL_TransientsCommonMP_SetLoadPriorities((const char *const *)&modelNames, 1u, priority);
}

/*
==============
ClGameModeApplicationMP::ShutdownAllGameModeClients
==============
*/
void ClGameModeApplicationMP::ShutdownAllGameModeClients(ClGameModeApplicationMP *this)
{
  int i; 

  for ( i = 0; i < 2; ++i )
    CL_MainMP_ShutdownGameModeClient((LocalClientNum_t)i);
  CL_MainMP_ShutdownGameMode();
}

/*
==============
ClGameModeApplicationMP::ShutdownClientMemory
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownClientMemory(ClGameModeApplicationMP *this)
{
  CL_MainMP_ShutdownMemory();
}

/*
==============
ClGameModeApplicationMP::ShutdownGameMode
==============
*/

void __fastcall ClGameModeApplicationMP::ShutdownGameMode(ClGameModeApplicationMP *this)
{
  ClGameModeApplication::ShutdownGameMode(this);
}

/*
==============
ClGameModeApplicationMP::ShutdownHunkUsers
==============
*/
void ClGameModeApplicationMP::ShutdownHunkUsers(ClGameModeApplicationMP *this)
{
  LocalClientNum_t v1; 
  int i; 
  int j; 
  int k; 
  int m; 
  signed int n; 
  int v7; 
  int ii; 
  Physics_WorldId v9; 
  Physics_WorldId v10; 

  if ( !Com_FrontEndScene_IsActive() && !Com_IsAnyLocalServerStarting() && !Com_IsGameLocalServerRunningOrLoading() )
  {
    BG_TransientsInfilMP_Shutdown();
    BG_Omnvar_ClearTables();
  }
  v1 = LOCAL_CLIENT_0;
  for ( i = 0; i < 2; ++i )
    CL_CGameMP_Shutdown((LocalClientNum_t)i);
  CG_Glass_Shutdown();
  for ( j = 0; j < 2; ++j )
    CG_Particle_ClearParticleDeferredPhysics((LocalClientNum_t)j, 0);
  for ( k = 0; k < 2; ++k )
    LUITraceRunner::Shutdown((LocalClientNum_t)k);
  AnimVisualizer_Terminate();
  for ( m = 0; m < 2; ++m )
  {
    if ( CG_Cloth_Entity_IsInitialized((const LocalClientNum_t)m) )
      CG_Cloth_Entity_Shutdown((const LocalClientNum_t)m);
    if ( CG_Cloth_Legs_IsInitialized((const LocalClientNum_t)m) )
      CG_Cloth_Legs_Shutdown((const LocalClientNum_t)m);
    if ( CG_ClientModel_IsClientInitialized((const LocalClientNum_t)m) )
      CG_ClientModel_ShutdownClient((const LocalClientNum_t)m);
  }
  for ( n = 0; n < 2; ++n )
  {
    if ( Cloth_HasGlobalWorld(n) )
      Cloth_DestroyGlobalWorld(n);
  }
  v7 = 4;
  for ( ii = 4; ii < 10; ii += 3 )
  {
    if ( Physics_AreClientWorldsCreated(v1) )
    {
      v9 = ii;
      if ( !__OFSUB__(ii, ii - 2) )
      {
        do
        {
          PatchCollision_ShutdownCollision(v9);
          StaticModels_ShutdownCollision(v9);
          WorldCollision_ShutdownCollision(v9--);
        }
        while ( v9 >= ii - 2 );
      }
    }
    ++v1;
  }
  do
  {
    v10 = v7;
    if ( !__OFSUB__(v7, v7 - 2) )
    {
      do
      {
        if ( PatchCollision_HasCollisionForWorld(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 262, ASSERT_TYPE_ASSERT, "(!PatchCollision_HasCollisionForWorld( worldId ))", (const char *)&queryFormat, "!PatchCollision_HasCollisionForWorld( worldId )") )
          __debugbreak();
        if ( StaticModels_HasCollisionForWorld(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 263, ASSERT_TYPE_ASSERT, "(!StaticModels_HasCollisionForWorld( worldId ))", (const char *)&queryFormat, "!StaticModels_HasCollisionForWorld( worldId )") )
          __debugbreak();
        if ( WorldCollision_HasCollisionForWorld(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 264, ASSERT_TYPE_ASSERT, "(!WorldCollision_HasCollisionForWorld( worldId ))", (const char *)&queryFormat, "!WorldCollision_HasCollisionForWorld( worldId )") )
          __debugbreak();
        --v10;
      }
      while ( v10 >= v7 - 2 );
    }
    v7 += 3;
  }
  while ( v7 < 10 );
  CL_TransientsCollisionMP_UpdateTransientFlags(1);
  if ( !Physics_AreServerWorldsCreated() && CL_TransientsCollisionMP_HasCollision() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(Physics_AreServerWorldsCreated() || !CL_TransientsCollisionMP_HasCollision())", (const char *)&queryFormat, "Physics_AreServerWorldsCreated() || !CL_TransientsCollisionMP_HasCollision()") )
    __debugbreak();
  if ( Physics_AreClientWorldsCreated() )
    Physics_DestroyClientWorlds();
}

/*
==============
ClGameModeApplicationMP::UnloadModel
==============
*/
void ClGameModeApplicationMP::UnloadModel(ClGameModeApplicationMP *this, const char *modelName)
{
  char *modelNames; 

  modelNames = (char *)modelName;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_gamemode_app_mp.cpp", 472, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  CL_TransientsCommonMP_UnloadModels((const char *const *)&modelNames, 1u);
}

/*
==============
ClGameModeApplicationMP::UpdateSkinningCache
==============
*/
void ClGameModeApplicationMP::UpdateSkinningCache(ClGameModeApplicationMP *this, LocalClientNum_t localClientNum)
{
  if ( R_SkinCacheReachedCorpseThreshold() )
    CG_PlayerCorpseMP_FreeClientCorpse(localClientNum);
}

