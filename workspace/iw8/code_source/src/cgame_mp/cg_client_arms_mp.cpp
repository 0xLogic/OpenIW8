/*
==============
CG_ClientArmsMP_UpdateDObj
==============
*/

void __fastcall CG_ClientArmsMP_UpdateDObj(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  ?CG_ClientArmsMP_UpdateDObj@@YAXW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientArmsMP_GetXModelForEntity
==============
*/

const XModel *__fastcall CG_ClientArmsMP_GetXModelForEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return ?CG_ClientArmsMP_GetXModelForEntity@@YAPEBUXModel@@W4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientArmsMP_BuildDObj
==============
*/
void CG_ClientArmsMP_BuildDObj(const LocalClientNum_t localClientNum, const centity_t *const cent, const CgClientArmsMPState *state)
{
  ClGameModeApplication *ActiveClientApplication; 
  DObjModel dobjModels; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 145, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 146, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  if ( state->clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(state.clientNum != -1)", (const char *)&queryFormat, "state.clientNum != INVALID_CLIENTNUM") )
    __debugbreak();
  if ( !state->viewHandsModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 150, ASSERT_TYPE_ASSERT, "( ( state.viewHandsModel != nullptr ) )", "( state.viewHandsModel ) = %p", NULL) )
    __debugbreak();
  CG_ClientArmsMP_FreeDObjForEntity(localClientNum, cent);
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  if ( !ActiveClientApplication && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 157, ASSERT_TYPE_ASSERT, "( ( gameModeApp != nullptr ) )", "( gameModeApp ) = %p", NULL) )
    __debugbreak();
  if ( !ActiveClientApplication->IsModelLoaded(ActiveClientApplication, state->viewHandsModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 158, ASSERT_TYPE_ASSERT, "(gameModeApp->IsModelLoaded( state.viewHandsModel ))", (const char *)&queryFormat, "gameModeApp->IsModelLoaded( state.viewHandsModel )") )
    __debugbreak();
  DObjInitModel(state->viewHandsModel, (scr_string_t)0, 0, 0, NULL, &dobjModels);
  Com_ClientDObjCreate(&dobjModels, 1u, NULL, cent->nextState.number, localClientNum, 0, cent->nextState.number);
  CG_AnimTreeMP_SetDObjInfo(localClientNum, cent->nextState.number, cent->nextState.eType, state->viewHandsModel);
}

/*
==============
CG_ClientArmsMP_FreeDObjForEntity
==============
*/
void CG_ClientArmsMP_FreeDObjForEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  const DObj *ClientDObj; 
  DObj *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 109, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 111, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 113, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  v5 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    if ( ClientDObj->tree )
    {
      XAnimClearTree(ClientDObj);
      DObjSetTree(v5, NULL);
      v6 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
      if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
        CG_AnimTreeMP_ClearDObjAnimInfo(localClientNum, cent->nextState.number);
    }
    Com_SafeClientDObjFree(cent->nextState.number, localClientNum);
    v7 = DVARBOOL_killswitch_fix_dangling_client_anims_enabled;
    if ( !DVARBOOL_killswitch_fix_dangling_client_anims_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_fix_dangling_client_anims_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      CG_AnimTreeMP_SetDObjInfo(localClientNum, cent->nextState.number, 0, NULL);
  }
}

/*
==============
CG_ClientArmsMP_GetActiveXModelForClient
==============
*/
XModel *CG_ClientArmsMP_GetActiveXModelForClient(const LocalClientNum_t localClientNum, const int clientNum)
{
  __int64 v2; 
  CgGlobalsMP *v5; 
  const char *ViewHandsModelName; 
  const char *ActiveModel; 
  const characterInfo_t *CharacterInfo; 
  CgStatic *v9; 
  const clientInfo_t *v10; 
  ClGameModeApplication *ActiveClientApplication; 
  XModel *v12; 
  __int64 v13; 
  __int64 v14; 
  bool outIsModelLoaded; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientNum == -1 )
  {
    Com_PrintWarning(14, "CG_ClientArmsMP_GetActiveXModelForClient: Failed to get XModel for invalid client!\n");
    return 0i64;
  }
  else
  {
    if ( (unsigned int)v2 >= cg_t::ms_allocatedCount )
    {
      LODWORD(v14) = cg_t::ms_allocatedCount;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
    {
      LODWORD(v14) = cg_t::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v14) )
        __debugbreak();
    }
    v5 = (CgGlobalsMP *)cg_t::ms_cgArray[v2];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 46, ASSERT_TYPE_ASSERT, "( ( cgameGlobals != nullptr ) )", "( cgameGlobals ) = %p", NULL) )
      __debugbreak();
    if ( v5->HasCharacterInfo(v5, clientNum) )
    {
      ViewHandsModelName = CG_ViewMP_GetViewHandsModelName((const LocalClientNum_t)v2, v5);
      ActiveModel = ViewHandsModelName;
      if ( !ViewHandsModelName || !*ViewHandsModelName )
      {
        CharacterInfo = CgGlobalsMP::GetCharacterInfo(v5, clientNum);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 64, ASSERT_TYPE_ASSERT, "( ( characterInfo != nullptr ) )", "( characterInfo ) = %p", NULL) )
          __debugbreak();
        if ( !(_BYTE)CgStatic::ms_allocatedType )
        {
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= LODWORD(CgStatic::ms_allocatedCount) )
        {
          *(float *)&v14 = CgStatic::ms_allocatedCount;
          LODWORD(v13) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( !CgStatic::ms_cgameStaticsArray[v2] )
        {
          LODWORD(v14) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v14) )
            __debugbreak();
        }
        v9 = CgStatic::ms_cgameStaticsArray[v2];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 66, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
          __debugbreak();
        v10 = v9->GetClientInfo(v9, clientNum);
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 68, ASSERT_TYPE_ASSERT, "( ( clientInfo != nullptr ) )", "( clientInfo ) = %p", NULL) )
          __debugbreak();
        ActiveModel = CG_CustomizationMP_GetActiveModel((const LocalClientNum_t)v2, v10, CharacterInfo, CUSTOMIZATION_TYPE_VIEWHANDS, &outIsModelLoaded);
      }
      if ( !ActiveModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 74, ASSERT_TYPE_ASSERT, "( ( viewArmsModelName != nullptr ) )", "( viewArmsModelName ) = %p", NULL) )
        __debugbreak();
      if ( !*ActiveModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 75, ASSERT_TYPE_ASSERT, "(viewArmsModelName[0] != '\\0')", (const char *)&queryFormat, "viewArmsModelName[0] != '\\0'") )
        __debugbreak();
      ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
      if ( !ActiveClientApplication && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 81, ASSERT_TYPE_ASSERT, "( ( gameModeApp != nullptr ) )", "( gameModeApp ) = %p", NULL) )
        __debugbreak();
      if ( !ActiveClientApplication->IsModelNameLoaded(ActiveClientApplication, ActiveModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(gameModeApp->IsModelNameLoaded( viewArmsModelName ))", (const char *)&queryFormat, "gameModeApp->IsModelNameLoaded( viewArmsModelName )") )
        __debugbreak();
      v12 = R_RegisterModel(ActiveModel);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 88, ASSERT_TYPE_ASSERT, "( ( viewHandsModel != nullptr ) )", "( viewHandsModel ) = %p", NULL) )
        __debugbreak();
      return v12;
    }
    else
    {
      Com_PrintWarning(14, "CG_ClientArmsMP_GetActiveXModelForClient: Failed to get XModel for client %u, no character info available!\n", (unsigned int)clientNum);
      return 0i64;
    }
  }
}

/*
==============
CG_ClientArmsMP_GetXModelForEntity
==============
*/
XModel *CG_ClientArmsMP_GetXModelForEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 221, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 222, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  return CG_ClientArmsMP_GetActiveXModelForClient(localClientNum, cent->nextState.staticState.mover.u.clientNum);
}

/*
==============
CG_ClientArmsMP_IsDObjDirty
==============
*/
bool CG_ClientArmsMP_IsDObjDirty(const LocalClientNum_t localClientNum, const centity_t *const cent, const CgClientArmsMPState *state)
{
  const DObj *ClientDObj; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 177, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  if ( state->clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 181, ASSERT_TYPE_ASSERT, "(state.clientNum != -1)", (const char *)&queryFormat, "state.clientNum != INVALID_CLIENTNUM") )
    __debugbreak();
  if ( !state->viewHandsModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 182, ASSERT_TYPE_ASSERT, "( ( state.viewHandsModel != nullptr ) )", "( state.viewHandsModel ) = %p", NULL) )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  return !ClientDObj || DObjGetModelIndex(ClientDObj, state->viewHandsModel) < 0;
}

/*
==============
CG_ClientArmsMP_UpdateDObj
==============
*/
void CG_ClientArmsMP_UpdateDObj(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 233, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 235, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  CG_ClientArmsMP_UpdateDObjInternal(localClientNum, cent);
}

/*
==============
CG_ClientArmsMP_UpdateDObjInternal
==============
*/
void CG_ClientArmsMP_UpdateDObjInternal(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  XModel *ActiveXModelForClient; 
  __int64 v5; 
  __int64 v6; 
  CgClientArmsMPState state; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 196, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 197, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 198, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v6) = 2;
    LODWORD(v5) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 99, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.un.scriptMoverType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 100, ASSERT_TYPE_ASSERT, "(cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms)", (const char *)&queryFormat, "cent->nextState.un.scriptMoverType == ScriptMoverType_ServerArms") )
    __debugbreak();
  state.clientNum = cent->nextState.staticState.mover.u.clientNum;
  ActiveXModelForClient = CG_ClientArmsMP_GetActiveXModelForClient(localClientNum, state.clientNum);
  state.viewHandsModel = ActiveXModelForClient;
  if ( state.clientNum == -1 || !ActiveXModelForClient )
  {
    CG_ClientArmsMP_FreeDObjForEntity(localClientNum, cent);
  }
  else
  {
    if ( CG_ClientArmsMP_IsDObjDirty(localClientNum, cent, &state) )
      CG_ClientArmsMP_BuildDObj(localClientNum, cent, &state);
    if ( CG_ClientArmsMP_IsDObjDirty(localClientNum, cent, &state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_client_arms_mp.cpp", 213, ASSERT_TYPE_ASSERT, "(!CG_ClientArmsMP_IsDObjDirty( localClientNum, cent, state ))", (const char *)&queryFormat, "!CG_ClientArmsMP_IsDObjDirty( localClientNum, cent, state )") )
      __debugbreak();
  }
}

