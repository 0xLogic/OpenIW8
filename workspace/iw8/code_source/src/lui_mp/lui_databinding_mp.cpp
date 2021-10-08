/*
==============
LUI_DataBindingMP_SpectatingUpdate
==============
*/

void __fastcall LUI_DataBindingMP_SpectatingUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBindingMP_SpectatingUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBindingMP_PushBroshotData
==============
*/

void __fastcall LUI_DataBindingMP_PushBroshotData(LocalClientNum_t localClientNum, const PodiumData *data, const int dataCount)
{
  ?LUI_DataBindingMP_PushBroshotData@@YAXW4LocalClientNum_t@@PEBUPodiumData@@H@Z(localClientNum, data, dataCount);
}

/*
==============
LUI_DataBindingMP_PushBroshotData
==============
*/
void LUI_DataBindingMP_PushBroshotData(LocalClientNum_t localClientNum, const PodiumData *data, const int dataCount)
{
  int v3; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 v7; 
  bool v8; 
  int *p_headIndex; 
  int v10; 
  char *name; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  __int64 CacheLocation; 
  const char *v24; 
  const char *PatchImageNameByRef; 
  int rank_alien; 
  int prestige_alien; 
  unsigned __int16 ModelForController; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  bool v32; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v34; 
  unsigned __int16 v35; 
  unsigned __int16 v36; 
  int controllerIndex; 
  XUID userID; 
  XUID result; 
  PlayerProfileData profileData; 
  char dest[64]; 
  char output[1024]; 

  v3 = dataCount;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_mp.cpp", 143, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  GlobalModel = LUI_Model_GetGlobalModel();
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "cg.MP.broShot.players");
  v7 = ModelFromPath;
  controllerIndex = CL_Mgr_GetControllerFromClient(localClientNum);
  Live_GetXuid(&result, controllerIndex);
  v8 = 0;
  p_headIndex = &data->headIndex;
  v10 = 0;
  name = data->name;
  do
  {
    Com_sprintf(dest, 0x40ui64, "%i", (unsigned int)v10);
    v12 = LUI_Model_CreateModelFromPath(v7, dest);
    v13 = LUI_Model_CreateModelFromPath(v12, "rigIndex");
    LUI_Model_SetInt(v13, *(p_headIndex - 1));
    v14 = LUI_Model_CreateModelFromPath(v12, "headIndex");
    LUI_Model_SetInt(v14, *p_headIndex);
    v15 = LUI_Model_CreateModelFromPath(v12, "bodyIndex");
    LUI_Model_SetInt(v15, p_headIndex[1]);
    v16 = LUI_Model_CreateModelFromPath(v12, "clanTag");
    LUI_Model_SetString(v16, name - 12);
    v17 = LUI_Model_CreateModelFromPath(v12, (const char *)&stru_143C9A1A4);
    LUI_Model_SetString(v17, name);
    v18 = LUI_Model_CreateModelFromPath(v12, "shouldShow");
    LUI_Model_SetBool(v18, v10 < v3);
    BG_GetWeaponName((const Weapon *)(name - 72), output, 0x400u);
    v19 = LUI_Model_CreateModelFromPath(v12, "weapon");
    LUI_Model_SetString(v19, output);
    v20 = LUI_Model_CreateModelFromPath(v12, "xuidString");
    v21 = LUI_Model_CreateModelFromPath(v12, "backgroundIndex");
    v22 = LUI_Model_CreateModelFromPath(v12, "emblem");
    v34 = LUI_Model_CreateModelFromPath(v12, "customEmblemEquipped");
    v35 = LUI_Model_CreateModelFromPath(v12, "rank");
    v36 = LUI_Model_CreateModelFromPath(v12, "prestige");
    userID.m_id = *(_QWORD *)(p_headIndex - 3);
    CacheLocation = PlayerCardData_GetCacheLocation();
    v24 = XUID::ToString(&userID);
    LUI_Model_SetString(v20, v24);
    if ( *((_BYTE *)p_headIndex + 80) )
    {
      PlayercardCache_GetPlayercard(userID, name, &profileData);
      LUI_Model_SetInt(v21, profileData.customization_background[CacheLocation]);
      LUI_Model_SetBool(v34, 0);
      PatchImageNameByRef = PlayerCards_GetPatchImageNameByRef(profileData.customization_patch[CacheLocation]);
      LUI_Model_SetString(v22, PatchImageNameByRef);
      rank_alien = profileData.rank_alien;
      if ( !(_DWORD)CacheLocation )
        rank_alien = profileData.rank_mp;
      LUI_Model_SetInt(v35, rank_alien);
      prestige_alien = profileData.prestige_alien;
      if ( !(_DWORD)CacheLocation )
        prestige_alien = profileData.prestige_mp;
      LUI_Model_SetInt(v36, prestige_alien);
      if ( v10 < 3 && XUID::operator==(&result, (const XUID *)(name - 92)) )
        v8 = 1;
    }
    v7 = ModelFromPath;
    ++v10;
    v3 = dataCount;
    name += 128;
    p_headIndex += 32;
  }
  while ( v10 < 6 );
  ModelForController = LUI_Model_GetModelForController(controllerIndex);
  v29 = LUI_Model_CreateModelFromPath(ModelForController, "cg.MP.broShot");
  v30 = LUI_Model_CreateModelFromPath(v29, "showTaunt");
  LUI_Model_SetBool(v30, v8);
  v31 = LUI_Model_CreateModelFromPath(ModelFromPath, "notify");
  v32 = LUI_Model_GetDataType(v31) != LUI_MODEL_DT_BOOL || !LUI_Model_GetBool(v31);
  LUI_Model_SetBool(v31, v32);
}

/*
==============
LUI_DataBindingMP_SpectatingUpdate
==============
*/
void LUI_DataBindingMP_SpectatingUpdate(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  cg_t *v4; 
  bool v5; 
  bool v6; 
  unsigned int IndexByName; 
  OmnvarData *Data; 
  bool v9; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  const char *v14; 
  bool Bool_Internal_DebugName; 
  const char *v16; 
  unsigned __int16 v17; 
  bool v18; 
  unsigned __int16 v19; 
  bool v20; 
  CgMLGSpectator *MLGSpectator; 
  unsigned __int16 v22; 
  int IsFollowDroneActive; 
  __int64 v24; 
  unsigned int luiStringIndex; 

  v1 = localClientNum;
  if ( !LUI_CoD_InFrontend() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
    if ( (unsigned int)v1 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v1, cg_t::ms_allocatedCount) )
      __debugbreak();
    if ( !cg_t::ms_cgArray[v1] )
    {
      LODWORD(v24) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v24) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v24) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v24) )
        __debugbreak();
    }
    v4 = cg_t::ms_cgArray[v1];
    v5 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&v4->predictedPlayerState.otherFlags, (POtherFlagsMP)33);
    v6 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&v4->predictedPlayerState.otherFlags, (POtherFlagsMP)36);
    IndexByName = BG_Omnvar_GetIndexByName("ui_session_state");
    Data = CG_Omnvar_GetData((LocalClientNum_t)v1, IndexByName);
    if ( !NetConstStrings_GetLuiStringIndex("spectator", &luiStringIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_mp.cpp", 52, ASSERT_TYPE_ASSERT, "(NetConstStrings_GetLuiStringIndex( \"spectator\", &currentSessionState ))", (const char *)&queryFormat, "NetConstStrings_GetLuiStringIndex( \"spectator\", &currentSessionState )") )
      __debugbreak();
    v9 = Data->current.integer == luiStringIndex;
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.isSpectating");
    LUI_Model_SetBool(ModelFromPath, v9);
    if ( v9 )
    {
      v11 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.isSpectatingPlayer");
      LUI_Model_SetBool(v11, v5);
      v12 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.isSpectatingThirdPerson");
      LUI_Model_SetBool(v12, v4->renderingThirdPerson != 0);
      v13 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.nextViewModeText");
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
      {
        v14 = (char *)&queryFormat.fmt + 3;
      }
      else if ( v5 )
      {
        if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_helmetCamFollowEnabled, "helmetCamFollowEnabled") || CG_Utils_IsActionCamActive((const LocalClientNum_t)v1) || v4->renderingThirdPerson || v4->spectatingThirdPerson )
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_camera_allow3rdspectate, "camera_allow3rdspectate") || v4->renderingThirdPerson )
          {
            if ( v6 )
            {
              v14 = "PLATFORM/FOLLOWSTOP";
            }
            else
            {
              Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_camera_allow3rdspectate, "camera_allow3rdspectate");
              v16 = "PLATFORM/FIRSTPERSON";
              if ( !Bool_Internal_DebugName )
                v16 = (char *)&queryFormat.fmt + 3;
              v14 = v16;
            }
          }
          else
          {
            v14 = "PLATFORM/THIRDPERSON";
          }
        }
        else
        {
          v14 = "PLATFORM/FIRSTPERSON_HELMET";
        }
      }
      else
      {
        v14 = "PLATFORM/FIRSTPERSON";
      }
      LUI_Model_SetString(v13, v14);
      v17 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.isAllowedToSwitchPlayer");
      v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&v4->predictedPlayerState.otherFlags, CROUCHING|0x20);
      LUI_Model_SetBool(v17, v18);
      v19 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.isSwitchingPlayer");
      v20 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&v4->predictedPlayerState.otherFlags, TURRET_ACTIVE_PRONE|0x20);
      LUI_Model_SetBool(v19, v20);
      if ( v4->m_isMLGSpectator )
      {
        MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v1);
        v22 = LUI_Model_CreateModelFromPath(ModelForController, "cg.spectating.followDroneActive");
        IsFollowDroneActive = CgMLGSpectator::IsFollowDroneActive(MLGSpectator, v4->clientNum);
        LUI_Model_SetBool(v22, IsFollowDroneActive != 0);
      }
    }
  }
}

