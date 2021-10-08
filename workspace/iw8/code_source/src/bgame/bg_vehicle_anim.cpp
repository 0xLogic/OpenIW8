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
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  float rate; 

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
              {
                __asm
                {
                  vmovss  xmm0, cs:__real@3fc00000
                  vmovss  xmm1, cs:__real@3e4ccccd
                  vmovss  [rsp+78h+rate], xmm0
                  vmovss  xmm0, cs:__real@3f800000
                  vmovss  [rsp+78h+goalTime], xmm1
                  vmovss  dword ptr [rsp+78h+fmt], xmm0
                }
                XAnimSetCompleteGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, v10, fmt, goalTimea, rate, (scr_string_t)0, 0, 1, LINEAR, NULL);
              }
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

void __fastcall BG_VehicleAnim_Update(BGVehicles *vehicleSystem, entityState_t *es, BGVehicleInfo *info, double deltaTime)
{
  BGVehicleInfo *v4; 
  __int64 v9; 
  __int64 v16; 
  BGVehicleInfo prevInfo; 

  v4 = info;
  _R9 = &prevInfo;
  _RAX = info;
  v9 = 2i64;
  do
  {
    _R9 = (BGVehicleInfo *)((char *)_R9 + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (BGVehicleInfo *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [r9-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [r9-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [r9-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r9-20h], xmm0
      vmovups xmmword ptr [r9-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v16 = *(_QWORD *)&_RAX->m_attachModels[0][24];
  __asm
  {
    vmovss  dword ptr [r8+94h], xmm3
    vmovups ymmword ptr [r9], ymm0
  }
  *(_QWORD *)&_R9->m_attachModels[0][24] = v16;
  *(_QWORD *)&info->m_vignetteAnim = 0i64;
  LOBYTE(v16) = (es->lerp.u.anonymous.data[1] & 0x4000) != 0;
  info->m_animRate = 1.0;
  info->m_desiredRemoveCodeAnims = v16;
  ((void (__fastcall *)(BGVehicles *))vehicleSystem->UpdateGameModeSpecificVehicleInfo)(vehicleSystem);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
    BG_VehicleAnim_Update_AlwaysLoadedAnims(vehicleSystem, es, v4, &prevInfo);
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
  __int64 v10; 
  VehicleType type; 
  unsigned int v12; 
  DObj *DObjFromEntityNumber; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v18; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float goalTimec; 
  float rate; 
  float ratea; 
  float rateb; 

  v10 = vehicleSystem->GetScriptUser(vehicleSystem);
  type = vehicleSystem->GetVehicleDef(vehicleSystem, es)->type;
  v12 = info->m_animInfo.animData >> 1;
  if ( v12 != prevInfo->m_animInfo.animData >> 1 )
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
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovaps [rsp+0A8h+var_48], xmm7
      }
      v14 = *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v10) + 1;
      if ( v12 )
      {
        if ( v12 >= v14 )
        {
          LODWORD(goalTime) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( numAnims )", "animIndex doesn't index numAnims\n\t%i not in [0, %i)", goalTime, *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v10) + 1) )
            __debugbreak();
        }
        v18 = 0;
        if ( v14 )
        {
          __asm
          {
            vmovss  xmm7, cs:__real@3f800000
            vxorps  xmm6, xmm6, xmm6
          }
          do
          {
            if ( v12 == v18 )
            {
              __asm
              {
                vmovss  [rsp+0A8h+rate], xmm7
                vmovss  [rsp+0A8h+goalTime], xmm6
                vmovss  dword ptr [rsp+0A8h+fmt], xmm7
              }
              XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, v18, fmta, goalTimeb, ratea, (scr_string_t)0, 0, (info->m_animInfo.animData & 1) == 0, LINEAR, NULL);
            }
            else if ( (*(_BYTE *)&info->m_animInfo.selectAnim & 1) != 0 && (type != VEH_HELICOPTER || v18 != s_bh_rotors_idx[v10]) )
            {
              __asm
              {
                vmovss  [rsp+0A8h+rate], xmm7
                vmovss  [rsp+0A8h+goalTime], xmm6
                vmovss  dword ptr [rsp+0A8h+fmt], xmm6
              }
              XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, v18, fmtb, goalTimec, rateb, (scr_string_t)0, 0, 0, LINEAR, NULL);
            }
            ++v18;
          }
          while ( v18 < v14 );
        }
      }
      else
      {
        if ( *((_DWORD *)&s_vehicleAlwaysLoadedAnimData[0].anims.m_size + 15616 * v10) == -1 )
        {
          LODWORD(goalTime) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_anim.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( numAnims )", "animIndex doesn't index numAnims\n\t%i not in [0, %i)", goalTime, 0) )
            __debugbreak();
        }
        v15 = 0;
        if ( v14 )
        {
          __asm
          {
            vmovss  xmm7, cs:__real@3f800000
            vxorps  xmm6, xmm6, xmm6
          }
          do
          {
            if ( type != VEH_HELICOPTER || v15 != s_bh_rotors_idx[v10] )
            {
              __asm
              {
                vmovss  [rsp+0A8h+rate], xmm7
                vmovss  [rsp+0A8h+goalTime], xmm6
                vmovss  dword ptr [rsp+0A8h+fmt], xmm6
              }
              XAnimSetGoalWeight(DObjFromEntityNumber, 0, XANIM_SUBTREE_DEFAULT, v15, fmt, goalTimea, rate, (scr_string_t)0, 0, 0, LINEAR, NULL);
            }
            ++v15;
          }
          while ( v15 < v14 );
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+0A8h+var_38]
        vmovaps xmm7, [rsp+0A8h+var_48]
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

