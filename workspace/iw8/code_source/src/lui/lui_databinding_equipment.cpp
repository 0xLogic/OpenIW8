/*
==============
LUI_DataBinding_Equipment_SnapshotUpdate
==============
*/

void __fastcall LUI_DataBinding_Equipment_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Equipment_SnapshotUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Equipment_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Equipment_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Equipment_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Equipment_FrameUpdate
==============
*/
void LUI_DataBinding_Equipment_FrameUpdate(LocalClientNum_t localClientNum)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Equipment_FrameUpdate");
  LUIBinding::PushBool(&s_LUI_DataBinding_NVGIsActionable, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_NVGIsOn, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_NVGBlocked, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_FragEquipped, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_FlashEquipped, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_FragAmmo, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_FragMaxAmmo, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_FlashAmmo, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_FlashMaxAmmo, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_FragMaterial, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_FlashMaterial, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_GrenadeReticleType, localClientNum);
  LUIBinding::PushFloat(&s_LUI_DataBinding_GrenadeCookPercent, localClientNum);
  LUIBinding::PushFloat(&s_LUI_DataBinding_CompassRotation, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_EquipIsAltToggleEnabled, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_EquipIsAltTogglePrimary, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_OffhandName, localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_FIRING|0x80) )
  {
    LUIBinding::PushParamString(&s_LUI_DataBinding_ActionSlotName, localClientNum);
    LUIBinding::PushParamInt(&s_LUI_DataBinding_ActionSlotAmmo, localClientNum);
    LUIBinding::PushParamString(&s_LUI_DataBinding_ActionSlotMaterial, localClientNum);
    LUIBinding::PushParamBool(&s_LUI_DataBinding_ActionSlotActive, localClientNum);
  }
  LUI_GameInterface_DataBinding_Equipment_FrameUpdate(localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_DataBinding_Equipment_GetAltToggleWeapon
==============
*/
const Weapon *LUI_DataBinding_Equipment_GetAltToggleWeapon(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const Weapon *CurrentWeaponForPlayer; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v4, &LocalClientGlobals->predictedPlayerState);
  if ( CurrentWeaponForPlayer->weaponIdx && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 6u) && BG_HasUnderbarrelAmmo(CurrentWeaponForPlayer) )
    return CurrentWeaponForPlayer;
  else
    return 0i64;
}

/*
==============
LUI_DataBinding_Equipment_IsActionSlotActive
==============
*/
bool LUI_DataBinding_Equipment_IsActionSlotActive(const LocalClientNum_t localClientNum, const int actionSlot)
{
  __int64 v2; 
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  bool v5; 
  const playerState_s *p_predictedPlayerState; 
  const BgWeaponMap **v7; 
  const BgWeaponMap *v8; 
  const Weapon *ActionSlotWeaponParamForPlayer; 
  const Weapon *CurrentWeaponForPlayer; 

  v2 = localClientNum;
  v3 = actionSlot;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = CgWeaponMap::ms_instance[v2] == NULL;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v7 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = *v7;
  if ( p_predictedPlayerState->actionSlotType[v3] == ACTIONSLOTTYPE_SPECIFYWEAPON )
  {
    ActionSlotWeaponParamForPlayer = BG_GetActionSlotWeaponParamForPlayer(*v7, p_predictedPlayerState, v3);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v8, p_predictedPlayerState);
    return memcmp_0(CurrentWeaponForPlayer, ActionSlotWeaponParamForPlayer, 0x3Cui64) == 0;
  }
  else if ( p_predictedPlayerState->actionSlotType[v3] == ACTIONSLOTTYPE_ALTWEAPONTOGGLE )
  {
    return BG_UsingAlternate(p_predictedPlayerState);
  }
  else
  {
    return p_predictedPlayerState->actionSlotType[v3] == ACTIONSLOTTYPE_NIGHTVISION && BG_IsUsingNightVision(p_predictedPlayerState);
  }
}

/*
==============
LUI_DataBinding_Equipment_SnapshotUpdate
==============
*/
void LUI_DataBinding_Equipment_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_FIRING) )
  {
    LUIBinding::PushBool(&s_LUI_DataBinding_SelectingMapLocation, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_MapCursorActive, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_MapDragDistanceExceeded, localClientNum);
  }
}

/*
==============
s_LUI_DataBinding_Get_ActionSlotActive
==============
*/
bool s_LUI_DataBinding_Get_ActionSlotActive(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  return LUI_DataBinding_Equipment_IsActionSlotActive(localClientNum, param);
}

/*
==============
s_LUI_DataBinding_Get_ActionSlotAmmo
==============
*/
int s_LUI_DataBinding_Get_ActionSlotAmmo(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  __int64 v2; 
  __int64 v3; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  const Weapon *AltToggleWeapon; 
  const Weapon *v8; 
  const WeaponAttachment *UnderbarrelAttachment; 
  const Weapon *ActionSlotWeaponParamForPlayer; 
  const Weapon *v11; 

  v2 = localClientNum;
  v3 = param;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v2];
  if ( p_predictedPlayerState->weaponHudIconOverrides[v3 + 3] )
    return BG_GetWeaponHudIconOverrideAmmo(p_predictedPlayerState, v3 + 3);
  if ( p_predictedPlayerState->actionSlotType[v3] == ACTIONSLOTTYPE_SPECIFYWEAPON )
  {
    ActionSlotWeaponParamForPlayer = BG_GetActionSlotWeaponParamForPlayer(v5, p_predictedPlayerState, v3);
    v11 = ActionSlotWeaponParamForPlayer;
    if ( ActionSlotWeaponParamForPlayer->weaponIdx && BG_PlayerHasWeapon(v5, p_predictedPlayerState, ActionSlotWeaponParamForPlayer) && !BG_WeaponDisableSwitchToEmpty(v5, p_predictedPlayerState, v11) && BG_WeaponCompleteDef(v11, 0)->dpadIconShowsAmmo )
      return BG_WeaponAmmo(v5, p_predictedPlayerState, v11, 0);
  }
  else if ( p_predictedPlayerState->actionSlotType[v3] == ACTIONSLOTTYPE_ALTWEAPONTOGGLE )
  {
    AltToggleWeapon = LUI_DataBinding_Equipment_GetAltToggleWeapon((LocalClientNum_t)v2);
    v8 = AltToggleWeapon;
    if ( AltToggleWeapon )
    {
      UnderbarrelAttachment = BG_GetUnderbarrelAttachment(AltToggleWeapon);
      if ( !UnderbarrelAttachment || !UnderbarrelAttachment->shareAmmoWithAlt )
        return BG_WeaponAmmo(v5, p_predictedPlayerState, v8, 1);
    }
  }
  return -1;
}

/*
==============
s_LUI_DataBinding_Get_ActionSlotMaterial
==============
*/
char s_LUI_DataBinding_Get_ActionSlotMaterial(LocalClientNum_t localClientNum, unsigned __int8 param, unsigned __int64 outStringSize, char *outString)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  int v9; 
  const playerState_s *p_predictedPlayerState; 
  Material *hudIconNVG; 
  CgWeaponMap *Instance; 
  const BgWeaponMap *v13; 
  const Weapon *AltToggleWeapon; 
  bool v15; 
  bool v16; 
  const Weapon *v17; 
  const Weapon *ActionSlotWeaponParamForPlayer; 
  const Weapon *v19; 
  bool IsActionSlotActive; 
  bool v21; 
  const char *Name; 

  v5 = param;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals->predictedPlayerState.weaponHudIconOverrides[v5 + 3];
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( v9 )
  {
    hudIconNVG = CG_Draw_MaterialHandleForIndex(localClientNum, v9);
    goto LABEL_15;
  }
  Instance = CgWeaponMap::GetInstance(localClientNum);
  v13 = Instance;
  if ( p_predictedPlayerState->actionSlotType[v5] == ACTIONSLOTTYPE_SPECIFYWEAPON )
  {
    ActionSlotWeaponParamForPlayer = BG_GetActionSlotWeaponParamForPlayer(Instance, p_predictedPlayerState, v5);
    v19 = ActionSlotWeaponParamForPlayer;
    if ( !ActionSlotWeaponParamForPlayer->weaponIdx || !BG_PlayerHasWeapon(v13, p_predictedPlayerState, ActionSlotWeaponParamForPlayer) || BG_WeaponDisableSwitchToEmpty(v13, p_predictedPlayerState, v19) )
      goto LABEL_17;
    IsActionSlotActive = LUI_DataBinding_Equipment_IsActionSlotActive(localClientNum, v5);
    v21 = BG_UsingAlternate(p_predictedPlayerState);
    v15 = IsActionSlotActive;
    v16 = v21;
    v17 = v19;
LABEL_14:
    hudIconNVG = BG_DPadIcon(v17, v16, v15);
    goto LABEL_15;
  }
  if ( p_predictedPlayerState->actionSlotType[v5] == ACTIONSLOTTYPE_ALTWEAPONTOGGLE )
  {
    AltToggleWeapon = LUI_DataBinding_Equipment_GetAltToggleWeapon(localClientNum);
    if ( !AltToggleWeapon )
    {
LABEL_17:
      *outString = 0;
      return 1;
    }
    v15 = LUI_DataBinding_Equipment_IsActionSlotActive(localClientNum, v5);
    v16 = 1;
    v17 = AltToggleWeapon;
    goto LABEL_14;
  }
  if ( p_predictedPlayerState->actionSlotType[v5] != ACTIONSLOTTYPE_NIGHTVISION || !Com_GameMode_SupportsFeature(WEAPON_STUNNED_END) )
    goto LABEL_17;
  hudIconNVG = cgMedia.hudIconNVG;
LABEL_15:
  if ( !hudIconNVG )
    goto LABEL_17;
  Name = Material_GetName(hudIconNVG);
  Core_strcpy(outString, outStringSize, Name);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_ActionSlotName
==============
*/
char s_LUI_DataBinding_Get_ActionSlotName(LocalClientNum_t localClientNum, unsigned __int8 param, unsigned __int64 outStringSize, char *outString)
{
  __int64 v4; 
  __int64 v6; 
  unsigned int v7; 
  const BgWeaponMap **v8; 
  playerState_s *p_predictedPlayerState; 
  const BgWeaponMap *v10; 
  const Weapon *AltToggleWeapon; 
  const Weapon *ActionSlotWeaponParamForPlayer; 
  const Weapon *v14; 

  v4 = localClientNum;
  v6 = param;
  v7 = outStringSize;
  v8 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[localClientNum];
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = *v8;
  if ( p_predictedPlayerState->actionSlotType[v6] == ACTIONSLOTTYPE_SPECIFYWEAPON )
  {
    ActionSlotWeaponParamForPlayer = BG_GetActionSlotWeaponParamForPlayer(v10, p_predictedPlayerState, v6);
    v14 = ActionSlotWeaponParamForPlayer;
    if ( ActionSlotWeaponParamForPlayer->weaponIdx && BG_PlayerHasWeapon(v10, p_predictedPlayerState, ActionSlotWeaponParamForPlayer) && !BG_WeaponDisableSwitchToEmpty(v10, p_predictedPlayerState, v14) )
    {
      BG_GetWeaponName(v14, outString, v7);
      return 1;
    }
  }
  else if ( p_predictedPlayerState->actionSlotType[v6] == ACTIONSLOTTYPE_ALTWEAPONTOGGLE )
  {
    AltToggleWeapon = LUI_DataBinding_Equipment_GetAltToggleWeapon((LocalClientNum_t)v4);
    if ( AltToggleWeapon )
    {
      BG_GetWeaponName(AltToggleWeapon, outString, v7);
      return 1;
    }
  }
  return 0;
}

/*
==============
s_LUI_DataBinding_Get_CompassRotation
==============
*/
float s_LUI_DataBinding_Get_CompassRotation(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  CgCompassSystem *CompassSystem; 
  float outAngle; 
  vec2_t outVector; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
  CgCompassSystem::GetCompassYaw(CompassSystem, COMPASS_TYPE_NAVBAR, 0, LocalClientGlobals, &outAngle, &outVector);
  __asm
  {
    vmovss  xmm0, [rsp+58h+var_28]
    vsubss  xmm0, xmm0, dword ptr [rdi+49FFCh]
  }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_EquipIsAltToggleEnabled
==============
*/

bool __fastcall s_LUI_DataBinding_Get_EquipIsAltToggleEnabled(LocalClientNum_t localClientNum)
{
  return GamerProfile_IsEquipToggleEnabled(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_EquipIsAltTogglePrimary
==============
*/
bool s_LUI_DataBinding_Get_EquipIsAltTogglePrimary(LocalClientNum_t localClientNum)
{
  return !CG_GetLocalClientGlobals(localClientNum)->equipSelectInAlt;
}

/*
==============
s_LUI_DataBinding_Get_FlashAmmo
==============
*/

int __fastcall s_LUI_DataBinding_Get_FlashAmmo(LocalClientNum_t localClientNum)
{
  return CG_GetOffHandSecondaryAmmo(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_FlashEquipped
==============
*/
bool s_LUI_DataBinding_Get_FlashEquipped(LocalClientNum_t localClientNum)
{
  return CG_GetOffhandSecondaryWeapon(localClientNum)->weaponIdx != 0;
}

/*
==============
s_LUI_DataBinding_Get_FlashMaterial
==============
*/
bool s_LUI_DataBinding_Get_FlashMaterial(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  GfxImage *OffhandSecondaryMaterial; 

  OffhandSecondaryMaterial = CG_GetOffhandSecondaryMaterial(localClientNum);
  if ( OffhandSecondaryMaterial )
  {
    Core_strcpy(outString, outStringSize, OffhandSecondaryMaterial->name);
    LOBYTE(OffhandSecondaryMaterial) = 1;
  }
  return (char)OffhandSecondaryMaterial;
}

/*
==============
s_LUI_DataBinding_Get_FlashMaxAmmo
==============
*/
int s_LUI_DataBinding_Get_FlashMaxAmmo(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v3; 
  const Weapon *OffhandSecondaryWeapon; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  OffhandSecondaryWeapon = CG_GetOffhandSecondaryWeapon((LocalClientNum_t)v1);
  return BG_GetAmmoPlayerMax(v3, &LocalClientGlobals->predictedPlayerState, OffhandSecondaryWeapon, 0, &NULL_WEAPON);
}

/*
==============
s_LUI_DataBinding_Get_FragAmmo
==============
*/

int __fastcall s_LUI_DataBinding_Get_FragAmmo(LocalClientNum_t localClientNum)
{
  return CG_GetOffHandPrimaryAmmo(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_FragEquipped
==============
*/
bool s_LUI_DataBinding_Get_FragEquipped(LocalClientNum_t localClientNum)
{
  return CG_GetOffhandPrimaryWeapon(localClientNum)->weaponIdx != 0;
}

/*
==============
s_LUI_DataBinding_Get_FragMaterial
==============
*/
bool s_LUI_DataBinding_Get_FragMaterial(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  GfxImage *OffhandPrimaryMaterial; 

  OffhandPrimaryMaterial = CG_GetOffhandPrimaryMaterial(localClientNum);
  if ( OffhandPrimaryMaterial )
  {
    Core_strcpy(outString, outStringSize, OffhandPrimaryMaterial->name);
    LOBYTE(OffhandPrimaryMaterial) = 1;
  }
  return (char)OffhandPrimaryMaterial;
}

/*
==============
s_LUI_DataBinding_Get_FragMaxAmmo
==============
*/
int s_LUI_DataBinding_Get_FragMaxAmmo(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v3; 
  const Weapon *OffhandPrimaryWeapon; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  OffhandPrimaryWeapon = CG_GetOffhandPrimaryWeapon((LocalClientNum_t)v1);
  return BG_GetAmmoPlayerMax(v3, &LocalClientGlobals->predictedPlayerState, OffhandPrimaryWeapon, 0, &NULL_WEAPON);
}

/*
==============
s_LUI_DataBinding_Get_GrenadeCookPercent
==============
*/
double s_LUI_DataBinding_Get_GrenadeCookPercent(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  playerState_s *p_predictedPlayerState; 
  const Weapon *OffHandWeaponForPlayer; 
  bool IsUsingOffhandGestureWeapon; 
  const WeaponDef *v6; 

  v2 = localClientNum;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(CgWeaponMap::ms_instance[v2], p_predictedPlayerState);
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 1u) || (IsUsingOffhandGestureWeapon = BG_IsUsingOffhandGestureWeapon(p_predictedPlayerState)) )
    IsUsingOffhandGestureWeapon = 1;
  if ( OffHandWeaponForPlayer->weaponIdx && IsUsingOffhandGestureWeapon && (v6 = BG_WeaponDef(OffHandWeaponForPlayer, 0), BG_GetWeaponType(OffHandWeaponForPlayer, 0) == WEAPTYPE_GRENADE) && v6->bCookOffHold && p_predictedPlayerState->grenadeTimeLeft && !BG_OFfhandGestureWeaponIsBeingPutAway(p_predictedPlayerState) )
  {
    if ( BG_GetOffhandMaxHoldTime(OffHandWeaponForPlayer, 0) )
      *(double *)&_XMM0 = BG_GetCookingGrenadeMaxHoldPercentage(OffHandWeaponForPlayer, 0, p_predictedPlayerState);
    else
      *(double *)&_XMM0 = BG_GetCookingGrenadeCookPercentage(OffHandWeaponForPlayer, 0, p_predictedPlayerState);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_GrenadeReticleType
==============
*/
__int64 s_LUI_DataBinding_Get_GrenadeReticleType(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  playerState_s *p_predictedPlayerState; 
  bool v3; 
  const BgWeaponMap **v4; 
  const Weapon *OffHandWeaponForPlayer; 
  bool v6; 
  bool IsBeingPutAway; 
  bool v8; 
  const WeaponDef *v9; 

  v1 = localClientNum;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(*v4, p_predictedPlayerState);
  v6 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 1u) || BG_IsUsingOffhandGestureWeapon(p_predictedPlayerState);
  IsBeingPutAway = BG_OFfhandGestureWeaponIsBeingPutAway(p_predictedPlayerState);
  v8 = BG_GetOffhandMaxHoldTime(OffHandWeaponForPlayer, 0) > 0;
  if ( !OffHandWeaponForPlayer->weaponIdx )
    return 4i64;
  if ( !v6 )
    return 4i64;
  if ( IsBeingPutAway )
    return 4i64;
  v9 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  if ( BG_GetWeaponType(OffHandWeaponForPlayer, 0) != WEAPTYPE_GRENADE )
    return 4i64;
  if ( BG_GetWeaponFieldTime(p_predictedPlayerState, OffHandWeaponForPlayer, 0, 0, 188i64) )
    return 1i64;
  if ( v8 )
    return 3i64;
  if ( v9->bCookOffHold && p_predictedPlayerState->grenadeTimeLeft )
    return 2i64;
  return 0i64;
}

/*
==============
s_LUI_DataBinding_Get_MapCursorActive
==============
*/
bool s_LUI_DataBinding_Get_MapCursorActive(LocalClientNum_t localClientNum)
{
  return CL_Keys_IsCatcherActive(localClientNum, 16);
}

/*
==============
s_LUI_DataBinding_Get_MapDragDistanceExceeded
==============
*/
bool s_LUI_DataBinding_Get_MapDragDistanceExceeded(LocalClientNum_t localClientNum)
{
  CgCompassSystem *CompassSystem; 

  CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
  return CgCompassSystem::GetIfExceedMinDragDistance(CompassSystem);
}

/*
==============
s_LUI_DataBinding_Get_NVGBlocked
==============
*/
bool s_LUI_DataBinding_Get_NVGBlocked(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)&LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2253, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_predictedPlayerState + 229, ACTIVE, 9u);
}

/*
==============
s_LUI_DataBinding_Get_NVGIsActionable
==============
*/
bool s_LUI_DataBinding_Get_NVGIsActionable(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  unsigned int v4; 
  ActionSlotType *actionSlotType; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x39u) )
    return 1;
  v4 = 0;
  actionSlotType = p_predictedPlayerState->actionSlotType;
  do
  {
    if ( *actionSlotType == ACTIONSLOTTYPE_NIGHTVISION )
      break;
    ++v4;
    ++actionSlotType;
  }
  while ( v4 < 7 );
  return v4 < 7;
}

/*
==============
s_LUI_DataBinding_Get_NVGIsOn
==============
*/
bool s_LUI_DataBinding_Get_NVGIsOn(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_IsUsingNightVision(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
s_LUI_DataBinding_Get_OffhandName
==============
*/
char s_LUI_DataBinding_Get_OffhandName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  bool v7; 
  const BgWeaponMap **v8; 
  const Weapon *OffHandWeaponForPlayer; 
  const char *szInternalName; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = CgWeaponMap::ms_instance[v3] == NULL;
  v8 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v3];
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(*v8, &LocalClientGlobals->predictedPlayerState);
  if ( !BG_Offhand_HasActiveOffhand(&LocalClientGlobals->predictedPlayerState) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 1u) || !OffHandWeaponForPlayer->weaponIdx || (szInternalName = BG_WeaponCompleteDef(OffHandWeaponForPlayer, 0)->szInternalName) == NULL )
    szInternalName = (char *)&queryFormat.fmt + 3;
  Core_strcpy(outString, outStringSize, szInternalName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_SelectingMapLocation
==============
*/
bool s_LUI_DataBinding_Get_SelectingMapLocation(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return BG_IsLocationSelectorActive(*v4, &LocalClientGlobals->predictedPlayerState);
}

