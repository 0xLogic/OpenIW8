/*
==============
BG_VehicleAnim_FindTrees
==============
*/

void __fastcall BG_VehicleAnim_FindTrees(BGVehicles *vehicleSystem)
{
  ?BG_VehicleAnim_FindTrees@@YAXPEAVBGVehicles@@@Z(vehicleSystem);
}

/*
==============
BG_VehicleAnim_FindAnims
==============
*/

void __fastcall BG_VehicleAnim_FindAnims(BGVehicles *vehicleSystem)
{
  ?BG_VehicleAnim_FindAnims@@YAXPEAVBGVehicles@@@Z(vehicleSystem);
}

/*
==============
BG_VehicleAnim_UpdateDObj
==============
*/

void __fastcall BG_VehicleAnim_UpdateDObj(BGVehicles *vehicleSystem, entityState_t *es, BGVehicleInfo *info, BgHandler *handler)
{
  ?BG_VehicleAnim_UpdateDObj@@YAXPEAVBGVehicles@@PEAUentityState_t@@PEAVBGVehicleInfo@@PEAVBgHandler@@@Z(vehicleSystem, es, info, handler);
}

/*
==============
BG_VehicleAnim_OnDobjUpdate
==============
*/

void __fastcall BG_VehicleAnim_OnDobjUpdate(BGVehicles *vehicleSystem, const entityState_t *es)
{
  ?BG_VehicleAnim_OnDobjUpdate@@YAXPEAVBGVehicles@@PEBUentityState_t@@@Z(vehicleSystem, es);
}

/*
==============
BG_VehicleAnim_PlayerToEntity
==============
*/

void __fastcall BG_VehicleAnim_PlayerToEntity(BGVehicles *vehicleSystem, const playerState_s *ps, entityState_t *es)
{
  ?BG_VehicleAnim_PlayerToEntity@@YAXPEAVBGVehicles@@PEBUplayerState_s@@PEAUentityState_t@@@Z(vehicleSystem, ps, es);
}

/*
==============
BG_VehicleAnim_Reset
==============
*/

void __fastcall BG_VehicleAnim_Reset(BGVehicles *vehicleSystem, const entityState_t *es, BGVehicleInfo *info, BgHandler *handler)
{
  ?BG_VehicleAnim_Reset@@YAXPEAVBGVehicles@@PEBUentityState_t@@PEAVBGVehicleInfo@@PEAVBgHandler@@@Z(vehicleSystem, es, info, handler);
}

/*
==============
BG_VehicleAnim_Update
==============
*/

void __fastcall BG_VehicleAnim_Update(BGVehicles *vehicleSystem, entityState_t *es, BGVehicleInfo *info, float deltaTime)
{
  ?BG_VehicleAnim_Update@@YAXPEAVBGVehicles@@PEAUentityState_t@@PEAVBGVehicleInfo@@M@Z(vehicleSystem, es, info, deltaTime);
}

/*
==============
BG_VehicleAnim_FindAnims
==============
*/
void BG_VehicleAnim_FindAnims(BGVehicles *vehicleSystem)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
  {
    v2 = vehicleSystem->GetScriptUser(vehicleSystem);
    v3 = v2;
    if ( (unsigned int)v2 >= 2 )
    {
      v7 = 2;
      v5 = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 64, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS )") )
      __debugbreak();
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 55, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    BG_ClearAtrData(&s_vehicleAlwaysLoadedAnimData[v3]);
    s_bh_rotors_idx[v3] = -1;
    BG_FindAnimsInAtr("animtrees/mp_vehicles_always_loaded.atr", "mp_vehicles_always_loaded", &s_vehicleAlwaysLoadedAnimData[v3], 0x258u, v3);
    if ( *(&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 7808 * v3) >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 74, ASSERT_TYPE_ASSERT, "(s_vehicleAlwaysLoadedAnimData[animUser].anims.size() < (1 << (9-1)))", (const char *)&queryFormat, "s_vehicleAlwaysLoadedAnimData[animUser].anims.size() < VEH_ANIM_COUNT") )
      __debugbreak();
  }
}

/*
==============
BG_VehicleAnim_FindTrees
==============
*/
void BG_VehicleAnim_FindTrees(BGVehicles *vehicleSystem)
{
  int v2; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
  {
    v2 = vehicleSystem->GetScriptUser(vehicleSystem);
    BG_VehicleAnim_FindTrees_AlwaysLoaded(v2);
  }
}

/*
==============
BG_VehicleAnim_FindTrees_AlwaysLoaded
==============
*/
void BG_VehicleAnim_FindTrees_AlwaysLoaded(int animUser)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *i; 
  __int64 v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  v1 = animUser;
  if ( (unsigned int)animUser >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, 2) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 94, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS )") )
    __debugbreak();
  v2 = 62464 * v1;
  v3 = v1;
  BG_FindTreeForAtr("animtrees/mp_vehicles_always_loaded.atr", "mp_vehicles_always_loaded", &s_vehicleAlwaysLoadedAnimData[v1], v1);
  if ( BG_HasAnimFile("animtrees/mp_vehicles_always_loaded.atr") )
  {
    next = *(ntl::red_black_tree_node_base **)((char *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_endNodeBase.mp_left + v2);
    for ( i = (ntl::red_black_tree_node_base *)((char *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_endNodeBase + v2); next != i; next = ntl::red_black_tree_node_base::get_next(next) )
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v6 = 0x7FFFFFFFi64;
      v7 = "bh_rotors";
      if ( next == (ntl::red_black_tree_node_base *)-32i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)((_DWORD)next + 33), "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v8 = v7[(char *)next - "bh_rotors" + 32];
        v9 = v6;
        v10 = *v7++;
        --v6;
        if ( !v9 )
        {
LABEL_18:
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          s_bh_rotors_idx[v3] = LOWORD(next[3].m_color);
          return;
        }
        if ( v8 != v10 )
          break;
        if ( !v8 )
          goto LABEL_18;
      }
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
    }
    Com_PrintWarning(16, "could not find bh_rotors animation in %s\n", "mp_vehicles_always_loaded");
  }
}

/*
==============
BG_VehicleAnim_OnDobjUpdate
==============
*/
void BG_VehicleAnim_OnDobjUpdate(BGVehicles *vehicleSystem, const entityState_t *es)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
    BG_Vehicle_SetAnimTree_AlwaysLoaded(vehicleSystem, es);
}

/*
==============
BG_VehicleAnim_PlayerToEntity
==============
*/
void BG_VehicleAnim_PlayerToEntity(BGVehicles *vehicleSystem, const playerState_s *ps, entityState_t *es)
{
  ;
}

/*
==============
BG_VehicleAnim_Reset
==============
*/
void BG_VehicleAnim_Reset(BGVehicles *vehicleSystem, const entityState_t *es, BGVehicleInfo *info, BgHandler *handler)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
    BG_VehicleAnim_Reset_AlwaysLoaded(vehicleSystem, es, info);
}

/*
==============
BG_VehicleAnim_Reset_AlwaysLoaded
==============
*/
void BG_VehicleAnim_Reset_AlwaysLoaded(BGVehicles *vehicleSystem, const entityState_t *es, BGVehicleInfo *info)
{
  const VehicleDef *v6; 
  int v7; 
  __int64 v8; 
  const DObj *DObjFromEntityNumber; 
  unsigned int v10; 
  __int64 goalTime; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 173, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 174, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 175, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( vehicleSystem && es && info )
  {
    v6 = vehicleSystem->GetVehicleDef(vehicleSystem, es);
    if ( v6 )
    {
      v7 = vehicleSystem->GetScriptUser(vehicleSystem);
      v8 = v7;
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(goalTime) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", goalTime, 2) )
          __debugbreak();
      }
      if ( (unsigned int)v8 <= 1 )
      {
        if ( BG_Vehicle_HasAnimAssets(v8) )
        {
          DObjFromEntityNumber = BG_GetDObjFromEntityNumber(vehicleSystem, es->number);
          if ( vehicleSystem->BgIsDobjValidForVehicle(vehicleSystem, DObjFromEntityNumber) )
          {
            if ( !DObjFromEntityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 217, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
              __debugbreak();
            BG_Vehicle_SetAnimTree_AlwaysLoaded(vehicleSystem, es);
            if ( v6->type == VEH_HELICOPTER )
            {
              v10 = s_bh_rotors_idx[v8];
              if ( v10 != -1 )
                XAnimSetCompleteGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, v10, 1.0, 0.2, 1.5, (scr_string_t)0, 0, 1, LINEAR, NULL);
            }
          }
        }
        else
        {
          Com_PrintWarning(16, "Missing assets, Failed to set always loaded anim tree for vehicle %s\n", v6->name);
        }
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 189, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    {
      __debugbreak();
    }
  }
}

/*
==============
BG_VehicleAnim_Update
==============
*/
void BG_VehicleAnim_Update(BGVehicles *vehicleSystem, entityState_t *es, BGVehicleInfo *info, float deltaTime)
{
  __m256i *p_prevInfo; 
  BGVehicleInfo *v8; 
  __int64 v9; 
  __m256i v10; 
  __int128 v11; 
  __m256i v12; 
  __int64 v13; 
  BGVehicleInfo prevInfo; 

  p_prevInfo = (__m256i *)&prevInfo;
  v8 = info;
  v9 = 2i64;
  do
  {
    p_prevInfo += 4;
    v10 = *(__m256i *)&v8->m_animInfo.animTime;
    v11 = *(_OWORD *)&v8->m_attachModels[1][40];
    v8 = (BGVehicleInfo *)((char *)v8 + 128);
    p_prevInfo[-4] = v10;
    p_prevInfo[-3] = *(__m256i *)&v8[-1].m_handBlendRight.z;
    p_prevInfo[-2] = *(__m256i *)&v8[-1].m_desiredMove.z;
    *(_OWORD *)p_prevInfo[-1].m256i_i8 = *(_OWORD *)&v8[-1].m_vignetteAnimBlendTime;
    *(_OWORD *)&p_prevInfo[-1].m256i_u64[2] = v11;
    --v9;
  }
  while ( v9 );
  v12 = *(__m256i *)&v8->m_animInfo.animTime;
  v13 = *(_QWORD *)&v8->m_attachModels[0][24];
  info->m_deltaTime = deltaTime;
  *p_prevInfo = v12;
  p_prevInfo[1].m256i_i64[0] = v13;
  *(_QWORD *)&info->m_vignetteAnim = 0i64;
  LOBYTE(v13) = (es->lerp.u.anonymous.data[1] & 0x4000) != 0;
  info->m_animRate = 1.0;
  info->m_desiredRemoveCodeAnims = v13;
  ((void (__fastcall *)(BGVehicles *))vehicleSystem->UpdateGameModeSpecificVehicleInfo)(vehicleSystem);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
    BG_VehicleAnim_Update_AlwaysLoadedAnims(vehicleSystem, es, info, &prevInfo);
}

/*
==============
BG_VehicleAnim_UpdateDObj
==============
*/
void BG_VehicleAnim_UpdateDObj(BGVehicles *vehicleSystem, entityState_t *es, BGVehicleInfo *info, BgHandler *handler)
{
  if ( info->m_dobjDirty )
  {
    ((void (__fastcall *)(BGVehicles *, _QWORD, BGVehicleInfo *, BgHandler *))vehicleSystem->BuildDObjFromVehicleInfo)(vehicleSystem, (unsigned int)es->number, info, handler);
    if ( info->m_dobjDirty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 394, ASSERT_TYPE_ASSERT, "(info->m_dobjDirty == false)", (const char *)&queryFormat, "info->m_dobjDirty == false") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
      BG_VehicleAnim_Reset_AlwaysLoaded(vehicleSystem, es, info);
  }
}

/*
==============
BG_VehicleAnim_Update_AlwaysLoadedAnims
==============
*/
void BG_VehicleAnim_Update_AlwaysLoadedAnims(BGVehicles *vehicleSystem, const entityState_t *es, BGVehicleInfo *info, const BGVehicleInfo *prevInfo)
{
  __int64 v8; 
  VehicleType type; 
  unsigned int v10; 
  DObj *DObjFromEntityNumber; 
  unsigned int v12; 
  unsigned int j; 
  unsigned int i; 
  __int64 goalTime; 

  v8 = vehicleSystem->GetScriptUser(vehicleSystem);
  type = vehicleSystem->GetVehicleDef(vehicleSystem, es)->type;
  v10 = info->m_animInfo.animData >> 1;
  if ( v10 != prevInfo->m_animInfo.animData >> 1 )
  {
    DObjFromEntityNumber = BG_GetDObjFromEntityNumber(vehicleSystem, es->number);
    if ( !DObjFromEntityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 298, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( DObjFromEntityNumber->tree )
      goto LABEL_9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 299, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
      __debugbreak();
    if ( DObjFromEntityNumber->tree )
    {
LABEL_9:
      v12 = *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v8) + 1;
      if ( v10 )
      {
        if ( v10 >= v12 )
        {
          LODWORD(goalTime) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( numAnims )", "animIndex doesn't index numAnims\n\t%i not in [0, %i)", goalTime, *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v8) + 1) )
            __debugbreak();
        }
        for ( i = 0; i < v12; ++i )
        {
          if ( v10 == i )
          {
            XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, i, 1.0, 0.0, 1.0, (scr_string_t)0, 0, (info->m_animInfo.animData & 1) == 0, LINEAR, NULL);
          }
          else if ( (*(_BYTE *)&info->m_animInfo.selectAnim & 1) != 0 && (type != VEH_HELICOPTER || i != s_bh_rotors_idx[v8]) )
          {
            XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, i, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
        }
      }
      else
      {
        if ( *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v8) == -1 )
        {
          LODWORD(goalTime) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( numAnims )", "animIndex doesn't index numAnims\n\t%i not in [0, %i)", goalTime, 0) )
            __debugbreak();
        }
        for ( j = 0; j < v12; ++j )
        {
          if ( type != VEH_HELICOPTER || j != s_bh_rotors_idx[v8] )
            XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, j, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
    }
  }
}

/*
==============
BG_Vehicle_HasAnimAssets
==============
*/
bool BG_Vehicle_HasAnimAssets(int animUser)
{
  __int64 v1; 
  int v4; 

  v1 = animUser;
  if ( (unsigned int)animUser >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", animUser, v4) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 128, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_ALWAYS_LOADED_ANIMS )") )
    __debugbreak();
  return *(&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 7808 * v1) != 0;
}

/*
==============
BG_Vehicle_SetAnimTree_AlwaysLoaded
==============
*/
void BG_Vehicle_SetAnimTree_AlwaysLoaded(BGVehicles *vehicleSystem, const entityState_t *es)
{
  int v4; 
  __int64 v5; 
  const VehicleDef *v6; 
  AtrAnimData *v7; 
  __int64 v8; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 141, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 142, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v4 = vehicleSystem->GetScriptUser(vehicleSystem);
  v5 = v4;
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( animUser ) < (unsigned)( SCR_XANIM_COUNT )", "animUser doesn't index SCR_XANIM_COUNT\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  if ( BG_Vehicle_HasAnimAssets(v5) )
  {
    v7 = &s_vehicleAlwaysLoadedAnimData[v5];
    if ( v7 )
    {
      if ( !v7->animTree.anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 165, ASSERT_TYPE_ASSERT, "(animData->animTree.anims)", (const char *)&queryFormat, "animData->animTree.anims") )
        __debugbreak();
      vehicleSystem->SetEntityAnimTree(vehicleSystem, es, v7->animTree.anims);
    }
  }
  else
  {
    v6 = vehicleSystem->GetVehicleDef(vehicleSystem, es);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 155, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    Com_PrintWarning(16, "Missing assets, Failed to set always loaded anim tree for vehicle %s\n", v6->name);
  }
}

