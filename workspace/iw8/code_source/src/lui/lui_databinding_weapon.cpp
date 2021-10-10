/*
==============
LUI_DataBinding_Weapon_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Weapon_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Weapon_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_AmmoName
==============
*/
bool s_LUI_DataBinding_Get_AmmoName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  __int16 v3; 
  bool v7; 
  CgHandler *Handler; 
  Weapon result; 
  Weapon weapon; 

  *outString = 0;
  weapon = *LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  v7 = v3;
  if ( v3 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    return BG_GetWeaponAmmoPoolName(&weapon, 0, Handler, outString, outStringSize);
  }
  return v7;
}

/*
==============
s_LUI_DataBinding_Get_WeaponAttachmentsIndexString
==============
*/
char s_LUI_DataBinding_Get_WeaponAttachmentsIndexString(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  __int16 v3; 
  Weapon *Weapon; 
  __m256i v7; 
  __int128 v8; 
  double v9; 
  char v10; 
  Weapon r_weapon; 
  Weapon result; 

  *outString = 0;
  Weapon = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  v7 = *(__m256i *)&Weapon->weaponIdx;
  v8 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
  v9 = *(double *)&Weapon->attachmentVariationIndices[21];
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&Weapon->weaponCamo;
  v10 = v3;
  *(__m256i *)&r_weapon.weaponIdx = v7;
  *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v8;
  *(double *)&r_weapon.attachmentVariationIndices[21] = v9;
  if ( v3 )
  {
    LUI_DataBinding_Interactions_GetWeaponAttachmentsIndexString(&r_weapon, outString, outStringSize);
    return 1;
  }
  return v10;
}

/*
==============
s_LUI_DataBinding_Get_Name
==============
*/
char s_LUI_DataBinding_Get_Name(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  int v4; 
  cg_t *LocalClientGlobals; 

  v4 = outStringSize;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Game_GetPlayerName(localClientNum, LocalClientGlobals->clientNum, v4, outString);
  return 1;
}

/*
==============
LUI_DataBindingWeapon_GetAltModeFireType
==============
*/
weapFireType_t LUI_DataBindingWeapon_GetAltModeFireType(const LocalClientNum_t localClientNum, const bool isCurrentFireType)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  bool v10; 
  bool v11; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  if ( !BG_HasUnderbarrelAmmo(WeaponForHud) || BG_UseLeftTriggerAltFireMode(WeaponForHud) )
    return -1;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
    v9 = p_predictedPlayerState && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v9 = BG_UsingAlternate(p_predictedPlayerState);
  v10 = v9;
  v11 = !v9;
  if ( !isCurrentFireType )
    v10 = v11;
  return BG_GetWeaponFireType(CurrentWeaponForPlayer, v10);
}

/*
==============
LUI_DataBindingWeapon_GetAmmoWarningState
==============
*/
__int64 LUI_DataBindingWeapon_GetAmmoWarningState(const LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  const cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 
  const WeaponDef *WeaponDef; 
  int PlayerClipAmmoCount; 
  int ClipLowAmmo; 
  int PlayerWeaponAmmoStock; 
  bool HasLadderHand; 
  __int64 result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(p_predictedPlayerState);
  WeaponDef = LUI_DataBindingWeapon_GetWeaponDef(localClientNum);
  if ( !WeaponForHud->weaponIdx )
    return 4i64;
  if ( BG_IsUsingOffhandGestureWeapon(p_predictedPlayerState) )
    return 4i64;
  PlayerClipAmmoCount = CG_Utils_GetPlayerClipAmmoCount(localClientNum, hand);
  ClipLowAmmo = BG_GetClipLowAmmo(p_predictedPlayerState, WeaponForHud, UsingAltForHud);
  if ( PlayerClipAmmoCount > ClipLowAmmo )
    return 4i64;
  PlayerWeaponAmmoStock = CG_GetPlayerWeaponAmmoStock(localClientNum);
  HasLadderHand = BG_HasLadderHand(p_predictedPlayerState);
  if ( BG_ReloadDisabled(WeaponForHud, UsingAltForHud) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x1Au) || (result = 2i64, HasLadderHand) )
    result = 3i64;
  if ( !PlayerWeaponAmmoStock )
  {
    if ( !HasLadderHand )
    {
      if ( !PlayerClipAmmoCount && !WeaponDef->disableNoAmmoWarning )
        return 0i64;
LABEL_11:
      result = 1i64;
      if ( ClipLowAmmo > 0 )
        return result;
      return 4i64;
    }
    if ( PlayerClipAmmoCount )
      goto LABEL_11;
    return 4i64;
  }
  return result;
}

/*
==============
LUI_DataBindingWeapon_GetClipAmmoDisplay
==============
*/
__int64 LUI_DataBindingWeapon_GetClipAmmoDisplay(LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  CG_Utils_GetPlayerClipAmmoCount(localClientNum, hand);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v5->predictedPlayerState);
  BG_AmmoUsedPerShot(WeaponForHud, UsingAltForHud);
  if ( hand == WEAPON_HAND_LEFT && BG_HasLadderHand(&v5->predictedPlayerState) )
    return 0i64;
  _XMM1 = 0i64;
  if ( BG_RequireAmmoUsedPerShot(WeaponForHud, UsingAltForHud) )
    __asm { vroundss xmm1, xmm1, xmm6, 1 }
  else
    __asm { vroundss xmm1, xmm1, xmm6, 2 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

/*
==============
LUI_DataBindingWeapon_GetStowedWeapon
==============
*/
const Weapon *LUI_DataBindingWeapon_GetStowedWeapon(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 clientNum; 
  __int64 v3; 
  CgEntitySystem *v4; 
  __int64 p_nextState; 
  CgWeaponMap *v6; 
  unsigned int v7; 
  int v8; 
  __int64 v10; 
  __int64 v11; 

  v1 = localClientNum;
  clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v1) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v11) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v3 = v1;
  if ( !CgEntitySystem::ms_entitySystemArray[v1] )
  {
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v11) )
      __debugbreak();
  }
  v4 = CgEntitySystem::ms_entitySystemArray[v3];
  if ( (unsigned int)clientNum >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  p_nextState = (__int64)&v4->m_entities[clientNum].nextState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 522, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 523, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v7 = *(unsigned __int16 *)(p_nextState + 8);
  if ( (unsigned __int16)v7 > 0x11u || (v8 = 131111, !_bittest(&v8, v7)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 524, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  return BgWeaponMap::GetWeapon(v6, *(BgWeaponHandle *)(p_nextState + 128));
}

/*
==============
LUI_DataBindingWeapon_GetWeaponClass
==============
*/
weapClass_t LUI_DataBindingWeapon_GetWeaponClass(const LocalClientNum_t localClientNum, const bool isAlternateWeaponClass)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  bool v5; 
  const BgWeaponMap **v6; 
  const Weapon *CurrentWeaponForPlayer; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = CgWeaponMap::ms_instance[v2] == NULL;
  v6 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v6, &LocalClientGlobals->predictedPlayerState);
  return BG_GetWeaponClass(CurrentWeaponForPlayer, isAlternateWeaponClass);
}

/*
==============
LUI_DataBindingWeapon_GetWeaponDef
==============
*/
WeaponDef *LUI_DataBindingWeapon_GetWeaponDef(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  unsigned int weaponIdx; 
  bool v6; 
  WeaponDef **v7; 
  WeaponDef *v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  CG_GetUsingAltForHud(&v3->predictedPlayerState);
  weaponIdx = WeaponForHud->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v6 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v7 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v8 = *v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_weapon.cpp", 28, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v8;
}

/*
==============
LUI_DataBindingWeapon_GetWeaponFireType
==============
*/
weapFireType_t LUI_DataBindingWeapon_GetWeaponFireType(const LocalClientNum_t localClientNum, const bool isAlternate)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  cg_t *v6; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  if ( !BG_HasUnderbarrelAmmo(WeaponForHud) || BG_UseLeftTriggerAltFireMode(WeaponForHud) )
    return -1;
  v6 = CG_GetLocalClientGlobals(localClientNum);
  Instance = CgWeaponMap::GetInstance(localClientNum);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &v6->predictedPlayerState);
  return BG_GetWeaponFireType(CurrentWeaponForPlayer, isAlternate);
}

/*
==============
LUI_DataBindingWeapon_IsReticleVisible
==============
*/
bool LUI_DataBindingWeapon_IsReticleVisible(const LocalClientNum_t localClientNum, const bool isPrimary)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const BgWeaponMap **v6; 
  const BgWeaponMap *v7; 
  const Weapon *CurrentWeaponForPlayer; 
  int weaponState; 
  bool v10; 
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool CanHybridToggle; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState;
  v6 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = *v6;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v6, p_predictedPlayerState);
  weaponState = p_predictedPlayerState->weapState[0].weaponState;
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = BG_IsThirdPersonMode(*v6, p_predictedPlayerState) || LocalClientGlobals->renderingThirdPerson;
  v11 = (unsigned int)(weaponState - 9) <= 1 || (unsigned int)(weaponState - 2) <= 1;
  v12 = BG_PlayerDualWieldingWeapon(v7, p_predictedPlayerState, CurrentWeaponForPlayer) == 1;
  v13 = CG_GetFlashbangedRemainingTime((LocalClientNum_t)v2) > 0;
  v14 = BG_UsingAlternate(p_predictedPlayerState);
  CanHybridToggle = BG_CanHybridToggle(p_predictedPlayerState, CurrentWeaponForPlayer, v14);
  if ( isPrimary )
  {
    if ( !CanHybridToggle && v14 )
      return 0;
  }
  else if ( !CanHybridToggle && !v14 )
  {
    return 0;
  }
  return !v11 && !v10 && !v12 && !v13;
}

/*
==============
LUI_DataBinding_CurrentWeapon_GetWeaponAttachmentsIndexString
==============
*/
void LUI_DataBinding_CurrentWeapon_GetWeaponAttachmentsIndexString(const Weapon *r_weapon, char *outString, unsigned __int64 outStringSize)
{
  unsigned int weaponCamo; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  unsigned int v28; 
  unsigned __int64 v29; 
  unsigned int weaponOthers; 
  char _Buffer[16]; 

  weaponCamo = r_weapon->weaponCamo;
  v7 = 0i64;
  v8 = outStringSize - 1;
  v9 = j_sprintf(_Buffer, "%d", r_weapon->weaponCamo) + 1;
  if ( v9 < v8 )
  {
    Com_sprintf(outString, outStringSize, "%d ", weaponCamo);
    v7 = v9;
  }
  v10 = r_weapon->weaponAttachments[9];
  v11 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[9]) + 1;
  if ( v11 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v10);
    v7 = v11;
  }
  v12 = r_weapon->weaponAttachments[10];
  v13 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[10]) + 1;
  if ( v13 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v12);
    v7 = v13;
  }
  v14 = r_weapon->weaponAttachments[5];
  v15 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[5]) + 1;
  if ( v15 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v14);
    v7 = v15;
  }
  v16 = r_weapon->weaponAttachments[0];
  v17 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[0]) + 1;
  if ( v17 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v16);
    v7 = v17;
  }
  v18 = r_weapon->weaponAttachments[1];
  v19 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[1]) + 1;
  if ( v19 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v18);
    v7 = v19;
  }
  v20 = r_weapon->weaponAttachments[2];
  v21 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[2]) + 1;
  if ( v21 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v20);
    v7 = v21;
  }
  v22 = r_weapon->weaponAttachments[3];
  v23 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[3]) + 1;
  if ( v23 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v22);
    v7 = v23;
  }
  v24 = r_weapon->weaponAttachments[6];
  v25 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[6]) + 1;
  if ( v25 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v24);
    v7 = v25;
  }
  v26 = r_weapon->weaponAttachments[11];
  v27 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[11]) + 1;
  if ( v27 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v26);
    v7 = v27;
  }
  v28 = r_weapon->weaponAttachments[8];
  v29 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[8]) + 1;
  if ( v29 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v28);
    v7 = v29;
  }
  weaponOthers = r_weapon->weaponOthers;
  if ( v7 + j_sprintf(_Buffer, "%d", weaponOthers) + 1 < v8 )
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", weaponOthers);
}

/*
==============
LUI_DataBinding_Weapon_FrameUpdate
==============
*/
void LUI_DataBinding_Weapon_FrameUpdate(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  cg_t *v4; 
  CgWeaponMap *Instance; 
  Weapon *Weapon; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Weapon_FrameUpdate");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) && !CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass(p_predictedPlayerState) )
  {
    LUIBinding::PushInt(&s_LUI_DataBinding_AmmoStockDisplay, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClipAmmoMax, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClipAmmoLeft, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClipAmmoRight, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_TotalAltAmmo, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClipAmmoLeftDisplay, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClipAmmoRightDisplay, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_AmmoWarningStateLeft, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_AmmoWarningStateRight, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ChamberedAmmoRight, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ChamberedAmmoMax, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_SecondaryAmmoInClip, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_SecondaryAmmoNotInClip, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_SecondaryHUDIcon, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_SpreadPercent, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_ViewFov, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_ADSPercent, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_InADS, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_InFullADS, localClientNum);
    LUIBinding::PushParamFloat(&s_LUI_DataBinding_ZoomLevelWeights, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_InAltMode, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsLockedOn, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsAimingAtEnemy, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsAimingAtFriendly, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_CrosshairRadius, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_CrosshairColor, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_CrosshairAlpha, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_CrosshairWidget, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_HipfireCrosshairVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsPrimaryReticleVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsAltReticleVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_AreWidgetsOnWeaponVisible, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_InWorldAttachmentsAlpha, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_GunAnglesX, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_GunAnglesY, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_GunAnglesZ, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_HybridScopeState, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsHybridVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsHoldBreathHintVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsThermalHintVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsZoomHintVisible, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_AltModeActiveName, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_AltModeInactiveName, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_AltModeIcon, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_AltModeFireType, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_NextAltModeFireType, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_DefaultWeaponFireType, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_AltWeaponFireType, localClientNum);
    LUIBinding::PushFloat(&s_LUI_DataBinding_AltModeHoldProgress, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_WeaponAttachmentsIndexString_0, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ScopeVariation, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ScopeIndex, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_StockAmmoVisible, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_ClipAmmoVisible, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_StowedWeaponName, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_StowedWeaponBaseName, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_HasAltMode, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_AmmoHideClip, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_AmmoHideReserve, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_BinocularsADS, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_BinocularsZoomLevel, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_BinocularsThermalEnabled, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_WeaponInspectOnAltToggle, localClientNum);
    v4 = CG_GetLocalClientGlobals(localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( Instance )
      Weapon = (Weapon *)BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weapCommon.weaponHandle);
    else
      Weapon = &NULL_WEAPON;
    v7 = BG_UsingAlternate(p_predictedPlayerState);
    v8 = memcmp_0(&v4->prevLUIWeapon, Weapon, 0x3Cui64) || v4->prevLUIWeaponIsAlternate != v7 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_weapon_datasource_caching_enabled, "killswitch_weapon_datasource_caching_enabled");
    v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 6u);
    v10 = v9 != v4->prevOnLadder;
    v4->prevOnLadder = v9;
    if ( v8 || v10 )
    {
      LUIBinding::PushBool(&s_LUI_DataBinding_IsNull, localClientNum);
      LUIBinding::PushBool(&s_LUI_DataBinding_IsDefault, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_WeaponIndex, localClientNum);
      LUIBinding::PushBool(&s_LUI_DataBinding_IsMeleeOnly, localClientNum);
      LUIBinding::PushBool(&s_LUI_DataBinding_IsDualWielding, localClientNum);
      LUIBinding::PushBool(&s_LUI_DataBinding_HasEnergyBullet, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_WeaponClass, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_AltWeaponClass, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_LootIndex, localClientNum);
      LUIBinding::PushString(&s_LUI_DataBinding_Name_0, localClientNum);
      LUIBinding::PushString(&s_LUI_DataBinding_AmmoName_0, localClientNum);
      LUIBinding::PushString(&s_LUI_DataBinding_BaseName, localClientNum);
      LUIBinding::PushString(&s_LUI_DataBinding_DisplayName, localClientNum);
      LUIBinding::PushString(&s_LUI_DataBinding_HUDIcon, localClientNum);
      LUIBinding::PushFloat(&s_LUI_DataBinding_EnemyNameplateRange, localClientNum);
      *(__m256i *)&v4->prevLUIWeapon.weaponIdx = *(__m256i *)&Weapon->weaponIdx;
      *(_OWORD *)&v4->prevLUIWeapon.attachmentVariationIndices[5] = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
      *(double *)&v4->prevLUIWeapon.attachmentVariationIndices[21] = *(double *)&Weapon->attachmentVariationIndices[21];
      *(_DWORD *)&v4->prevLUIWeapon.weaponCamo = *(_DWORD *)&Weapon->weaponCamo;
      v4->prevLUIWeaponIsAlternate = v7;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
s_LUI_DataBinding_Get_ADSPercent
==============
*/
float s_LUI_DataBinding_Get_ADSPercent(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac;
}

/*
==============
s_LUI_DataBinding_Get_AltModeActiveName
==============
*/
char s_LUI_DataBinding_Get_AltModeActiveName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  cg_t *v8; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponAttachment *UnderbarrelAttachment; 
  const char *szAltModeName; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  if ( !BG_HasUnderbarrelAmmo(WeaponForHud) )
    return 0;
  if ( BG_UseLeftTriggerAltFireMode(WeaponForHud) )
    return 0;
  v8 = CG_GetLocalClientGlobals(localClientNum);
  Instance = CgWeaponMap::GetInstance(localClientNum);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &v8->predictedPlayerState);
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(CurrentWeaponForPlayer);
  if ( !UnderbarrelAttachment )
    return 0;
  szAltModeName = UnderbarrelAttachment->szAltModeName;
  if ( !szAltModeName )
    return 0;
  Core_strcpy(outString, outStringSize, szAltModeName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_AltModeFireType
==============
*/
weapFireType_t s_LUI_DataBinding_Get_AltModeFireType(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetAltModeFireType(localClientNum, 1);
}

/*
==============
s_LUI_DataBinding_Get_AltModeHoldProgress
==============
*/
double s_LUI_DataBinding_Get_AltModeHoldProgress(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  int ButtonHeldTime; 

  v1 = DCONST_DVARINT_cl_weaponToggleAltModeHoldTime;
  if ( !DCONST_DVARINT_cl_weaponToggleAltModeHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_weaponToggleAltModeHoldTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( !integer )
    return 0.0;
  ButtonHeldTime = CL_Input_CycleWeapon_GetButtonHeldTime(localClientNum);
  return I_fclamp((float)ButtonHeldTime / (float)integer, 0.0, 1.0);
}

/*
==============
s_LUI_DataBinding_Get_AltModeIcon
==============
*/
char s_LUI_DataBinding_Get_AltModeIcon(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  cg_t *v8; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponAttachment *UnderbarrelAttachment; 
  const char **p_name; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  if ( !BG_HasUnderbarrelAmmo(WeaponForHud) )
    return 0;
  if ( BG_UseLeftTriggerAltFireMode(WeaponForHud) )
    return 0;
  v8 = CG_GetLocalClientGlobals(localClientNum);
  Instance = CgWeaponMap::GetInstance(localClientNum);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &v8->predictedPlayerState);
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(CurrentWeaponForPlayer);
  if ( !UnderbarrelAttachment )
    return 0;
  p_name = &UnderbarrelAttachment->altModeIcon->name;
  if ( !p_name )
    return 0;
  Core_strcpy(outString, outStringSize, *p_name);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_AltModeInactiveName
==============
*/
char s_LUI_DataBinding_Get_AltModeInactiveName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  cg_t *v8; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponAttachment *UnderbarrelAttachment; 
  const char *szAltModeInactiveName; 
  bool v14; 
  const WeaponCompleteDef *v15; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  if ( !BG_HasUnderbarrelAmmo(WeaponForHud) || BG_UseLeftTriggerAltFireMode(WeaponForHud) )
    return 0;
  v8 = CG_GetLocalClientGlobals(localClientNum);
  Instance = CgWeaponMap::GetInstance(localClientNum);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &v8->predictedPlayerState);
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(CurrentWeaponForPlayer);
  if ( !UnderbarrelAttachment || (szAltModeInactiveName = UnderbarrelAttachment->szAltModeInactiveName) == NULL )
  {
    v14 = BG_UsingAlternate(&v8->predictedPlayerState);
    v15 = BG_WeaponCompleteDef(CurrentWeaponForPlayer, v14);
    if ( !v15 )
      return 0;
    szAltModeInactiveName = v15->szAltModeInactiveName;
    if ( !szAltModeInactiveName )
      return 0;
  }
  Core_strcpy(outString, outStringSize, szAltModeInactiveName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_AltWeaponClass
==============
*/
weapClass_t s_LUI_DataBinding_Get_AltWeaponClass(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponClass(localClientNum, 1);
}

/*
==============
s_LUI_DataBinding_Get_AltWeaponFireType
==============
*/
weapFireType_t s_LUI_DataBinding_Get_AltWeaponFireType(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponFireType(localClientNum, 1);
}

/*
==============
s_LUI_DataBinding_Get_AmmoHideClip
==============
*/
_BOOL8 s_LUI_DataBinding_Get_AmmoHideClip(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponDef(localClientNum)->suppressAmmoPrimaryDisplay;
}

/*
==============
s_LUI_DataBinding_Get_AmmoHideReserve
==============
*/
_BOOL8 s_LUI_DataBinding_Get_AmmoHideReserve(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponDef(localClientNum)->suppressAmmoReserveDisplay;
}

/*
==============
s_LUI_DataBinding_Get_AmmoStockDisplay
==============
*/
__int64 s_LUI_DataBinding_Get_AmmoStockDisplay(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v3->predictedPlayerState);
  BG_AmmoUsedPerShot(WeaponForHud, UsingAltForHud);
  CG_GetPlayerWeaponAmmoStock(localClientNum);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 2 }
  return (unsigned int)(int)*(float *)&_XMM3;
}

/*
==============
s_LUI_DataBinding_Get_AmmoWarningStateLeft
==============
*/
__int64 s_LUI_DataBinding_Get_AmmoWarningStateLeft(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetAmmoWarningState(localClientNum, WEAPON_HAND_LEFT);
}

/*
==============
s_LUI_DataBinding_Get_AmmoWarningStateRight
==============
*/
__int64 s_LUI_DataBinding_Get_AmmoWarningStateRight(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetAmmoWarningState(localClientNum, WEAPON_HAND_DEFAULT);
}

/*
==============
s_LUI_DataBinding_Get_AreWidgetsOnWeaponVisible
==============
*/
bool s_LUI_DataBinding_Get_AreWidgetsOnWeaponVisible(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  bool v4; 
  const BgWeaponMap **v5; 
  const BgWeaponMap *v6; 
  const Weapon *CurrentWeaponForPlayer; 
  int weaponState; 
  bool v9; 
  bool v10; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->predictedPlayerState;
  v4 = CgWeaponMap::ms_instance[v1] == NULL;
  v5 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = *v5;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v5, p_predictedPlayerState);
  weaponState = p_predictedPlayerState->weapState[0].weaponState;
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v9 = BG_IsThirdPersonMode(*v5, p_predictedPlayerState) || LocalClientGlobals->renderingThirdPerson;
  v10 = BG_PlayerDualWieldingWeapon(v6, p_predictedPlayerState, CurrentWeaponForPlayer) == 1;
  return (unsigned int)(weaponState - 7) > 5 && weaponState != 50 && !v9 && !v10;
}

/*
==============
s_LUI_DataBinding_Get_BaseName
==============
*/
char s_LUI_DataBinding_Get_BaseName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const Weapon *WeaponForHud; 
  bool v9; 
  const WeaponCompleteDef *v10; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v9 = BG_UsingAlternate(&v7->predictedPlayerState);
  v10 = BG_WeaponCompleteDef(WeaponForHud, v9);
  Core_strcpy(outString, outStringSize, v10->szInternalName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_BinocularsADS
==============
*/

bool __fastcall s_LUI_DataBinding_Get_BinocularsADS(LocalClientNum_t localClientNum)
{
  return CG_BinocularsADS(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_BinocularsThermalEnabled
==============
*/

bool __fastcall s_LUI_DataBinding_Get_BinocularsThermalEnabled(LocalClientNum_t localClientNum)
{
  return CG_BinocularsThermalEnabled(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_BinocularsZoomLevel
==============
*/
bool s_LUI_DataBinding_Get_BinocularsZoomLevel(LocalClientNum_t localClientNum)
{
  return CG_BinocularsGetZoomLevel(localClientNum) != 0;
}

/*
==============
s_LUI_DataBinding_Get_ChamberedAmmoMax
==============
*/
int s_LUI_DataBinding_Get_ChamberedAmmoMax(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v3->predictedPlayerState);
  return BG_GetMaxChamberedAmmo(WeaponForHud, UsingAltForHud);
}

/*
==============
s_LUI_DataBinding_Get_ChamberedAmmoRight
==============
*/
__int64 s_LUI_DataBinding_Get_ChamberedAmmoRight(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 
  const ClipAmmo *ClipAmmoPtrConst; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v3->predictedPlayerState);
  r_clipIndex = *BG_AmmoStoreForWeapon(&result, WeaponForHud, UsingAltForHud);
  ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(&v3->predictedPlayerState, &r_clipIndex);
  if ( ClipAmmoPtrConst )
    return (unsigned int)ClipAmmoPtrConst->chamberedCount[0];
  else
    return 1i64;
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoLeft
==============
*/
int s_LUI_DataBinding_Get_ClipAmmoLeft(LocalClientNum_t localClientNum)
{
  return CG_Utils_GetPlayerClipAmmoCount(localClientNum, WEAPON_HAND_LEFT);
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoLeftDisplay
==============
*/
__int64 s_LUI_DataBinding_Get_ClipAmmoLeftDisplay(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetClipAmmoDisplay(localClientNum, WEAPON_HAND_LEFT);
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoMax
==============
*/
int s_LUI_DataBinding_Get_ClipAmmoMax(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v3->predictedPlayerState);
  return BG_GetClipSize(&v3->predictedPlayerState, WeaponForHud, UsingAltForHud);
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoRight
==============
*/
int s_LUI_DataBinding_Get_ClipAmmoRight(LocalClientNum_t localClientNum)
{
  return CG_Utils_GetPlayerClipAmmoCount(localClientNum, WEAPON_HAND_DEFAULT);
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoRightDisplay
==============
*/
__int64 s_LUI_DataBinding_Get_ClipAmmoRightDisplay(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetClipAmmoDisplay(localClientNum, WEAPON_HAND_DEFAULT);
}

/*
==============
s_LUI_DataBinding_Get_ClipAmmoVisible
==============
*/
bool s_LUI_DataBinding_Get_ClipAmmoVisible(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx && !LUI_DataBindingWeapon_GetWeaponDef(localClientNum)->suppressAmmoPrimaryDisplay;
}

/*
==============
s_LUI_DataBinding_Get_CrosshairAlpha
==============
*/

double __fastcall s_LUI_DataBinding_Get_CrosshairAlpha(LocalClientNum_t localClientNum)
{
  return CG_GetCrosshairAlpha(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_CrosshairColor
==============
*/

int __fastcall s_LUI_DataBinding_Get_CrosshairColor(LocalClientNum_t localClientNum)
{
  return CG_GetCrosshairColorAsInt(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_CrosshairRadius
==============
*/

double __fastcall s_LUI_DataBinding_Get_CrosshairRadius(LocalClientNum_t localClientNum)
{
  return CG_GetCrosshairRadius(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_CrosshairWidget
==============
*/
char s_LUI_DataBinding_Get_CrosshairWidget(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const char *CrosshairWidget; 
  const Weapon *ReticleWeapon; 
  bool outIsAlternate; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  if ( BG_ShouldHandleThirdPersonVehicleCamera(&LocalClientGlobals->predictedPlayerState, Handler) )
  {
    CrosshairWidget = CG_Vehicle_GetCrosshairWidget(localClientNum);
  }
  else
  {
    ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
    CrosshairWidget = BG_GetLUICrosshairWidget(ReticleWeapon, outIsAlternate);
  }
  if ( CrosshairWidget )
    Core_strcpy(outString, outStringSize, CrosshairWidget);
  else
    *outString = 0;
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_DefaultWeaponFireType
==============
*/
weapFireType_t s_LUI_DataBinding_Get_DefaultWeaponFireType(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponFireType(localClientNum, 0);
}

/*
==============
s_LUI_DataBinding_Get_DisplayName
==============
*/
char s_LUI_DataBinding_Get_DisplayName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v7->predictedPlayerState);
  CG_GetWeaponDisplayName(WeaponForHud, UsingAltForHud, outString, outStringSize, 0);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_EnemyNameplateRange
==============
*/
double s_LUI_DataBinding_Get_EnemyNameplateRange(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const Weapon *WeaponForHud; 
  bool UsingAltForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  UsingAltForHud = CG_GetUsingAltForHud(&v3->predictedPlayerState);
  return BG_GetEnemyCrossHairRange(WeaponForHud, UsingAltForHud);
}

/*
==============
s_LUI_DataBinding_Get_GunAnglesX
==============
*/
float s_LUI_DataBinding_Get_GunAnglesX(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->gunAngles.v[0];
}

/*
==============
s_LUI_DataBinding_Get_GunAnglesY
==============
*/
float s_LUI_DataBinding_Get_GunAnglesY(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->gunAngles.v[1];
}

/*
==============
s_LUI_DataBinding_Get_GunAnglesZ
==============
*/
float s_LUI_DataBinding_Get_GunAnglesZ(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->gunAngles.v[2];
}

/*
==============
s_LUI_DataBinding_Get_HUDIcon
==============
*/
bool s_LUI_DataBinding_Get_HUDIcon(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 
  GfxImage *v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  v7 = BG_HudIcon(WeaponForHud, 0);
  if ( v7 )
  {
    Core_strcpy(outString, outStringSize, v7->name);
    LOBYTE(v7) = 1;
  }
  return (char)v7;
}

/*
==============
s_LUI_DataBinding_Get_HasAltMode
==============
*/
bool s_LUI_DataBinding_Get_HasAltMode(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  const Weapon *WeaponForHud; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  return BG_HasUnderbarrelAmmo(WeaponForHud) && !BG_UseLeftTriggerAltFireMode(WeaponForHud);
}

/*
==============
s_LUI_DataBinding_Get_HasEnergyBullet
==============
*/
_BOOL8 s_LUI_DataBinding_Get_HasEnergyBullet(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponDef(localClientNum)->bEnergyBullet;
}

/*
==============
s_LUI_DataBinding_Get_HipfireCrosshairVisible
==============
*/

bool __fastcall s_LUI_DataBinding_Get_HipfireCrosshairVisible(LocalClientNum_t localClientNum)
{
  return CG_DrawReticles_ShouldDrawCrosshair(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_HybridScopeState
==============
*/
__int64 s_LUI_DataBinding_Get_HybridScopeState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  playerState_s *p_predictedPlayerState; 
  bool v3; 
  const BgWeaponMap **v4; 
  const BgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  int EquippedWeaponIndex; 

  v1 = localClientNum;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = *v4;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, p_predictedPlayerState);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v5, p_predictedPlayerState, CurrentWeaponForPlayer);
  if ( EquippedWeaponIndex < 0 )
    return MEMORY[9];
  else
    return p_predictedPlayerState->weapEquippedData[EquippedWeaponIndex].hybridScope;
}

/*
==============
s_LUI_DataBinding_Get_InADS
==============
*/
bool s_LUI_DataBinding_Get_InADS(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0;
}

/*
==============
s_LUI_DataBinding_Get_InAltMode
==============
*/
bool s_LUI_DataBinding_Get_InAltMode(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
s_LUI_DataBinding_Get_InFullADS
==============
*/
bool s_LUI_DataBinding_Get_InFullADS(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac >= 1.0;
}

/*
==============
s_LUI_DataBinding_Get_InWorldAttachmentsAlpha
==============
*/
float s_LUI_DataBinding_Get_InWorldAttachmentsAlpha(LocalClientNum_t localClientNum)
{
  float blurRadius; 
  __int128 v3; 

  blurRadius = CG_GetLocalClientGlobals(localClientNum)->refdef.blurRadius;
  if ( blurRadius <= 0.0 )
    return FLOAT_1_0;
  v3 = LODWORD(FLOAT_1_0);
  *(float *)&v3 = 1.0 / blurRadius;
  _XMM0 = v3;
  __asm { vminss  xmm0, xmm0, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_IsAimingAtEnemy
==============
*/
bool s_LUI_DataBinding_Get_IsAimingAtEnemy(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
}

/*
==============
s_LUI_DataBinding_Get_IsAimingAtFriendly
==============
*/
bool s_LUI_DataBinding_Get_IsAimingAtFriendly(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u);
}

/*
==============
s_LUI_DataBinding_Get_IsAltReticleVisible
==============
*/
bool s_LUI_DataBinding_Get_IsAltReticleVisible(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_IsReticleVisible(localClientNum, 0);
}

/*
==============
s_LUI_DataBinding_Get_IsDefault
==============
*/
_BOOL8 s_LUI_DataBinding_Get_IsDefault(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->playerWeaponInfo.isWeaponDefault;
}

/*
==============
s_LUI_DataBinding_Get_IsDualWielding
==============
*/
_BOOL8 s_LUI_DataBinding_Get_IsDualWielding(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !BG_Skydive_IsSkydiving(p_predictedPlayerState) && BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) && p_predictedPlayerState->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
}

/*
==============
s_LUI_DataBinding_Get_IsHoldBreathHintVisible
==============
*/
bool s_LUI_DataBinding_Get_IsHoldBreathHintVisible(LocalClientNum_t localClientNum)
{
  playerState_s *p_predictedPlayerState; 
  const dvar_t *v3; 
  __int64 v4; 
  CgWeaponMap *Instance; 
  double v6; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 *v13; 
  char *fmt; 
  __int64 v16; 
  int v17; 

  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && BG_IsTurretActive(p_predictedPlayerState) )
    return 0;
  v3 = DVARBOOL_cg_drawBreathHint;
  if ( !DVARBOOL_cg_drawBreathHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBreathHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  v4 = 2i64;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 2u) )
    return 0;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  v6 = BG_WeaponADSFractionAffectedByReload(Instance, p_predictedPlayerState);
  if ( *(float *)&v6 != 1.0 || !BG_HasHoldBreathAbility(Instance, p_predictedPlayerState) )
    return 0;
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v9 = ClActiveClient::GetClient(localClientNum);
  v10 = ClActiveClient_GetCmdNumber(v9);
  v11 = v10;
  v17 = v10;
  if ( CmdNumber > v10 )
  {
    LODWORD(fmt) = v10;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= v11 - 128 || CmdNumber <= 0 )
  {
    memset(&v17, 0, sizeof(v17));
  }
  else
  {
    v12 = (__int64)&v9->cmds[CmdNumber & 0x7F];
    memset(&v17, 0, sizeof(v17));
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    v13 = &v16;
    do
    {
      *(__m256i *)v13 = *(__m256i *)v12;
      *((__m256i *)v13 + 1) = *(__m256i *)(v12 + 32);
      *((__m256i *)v13 + 2) = *(__m256i *)(v12 + 64);
      *((_OWORD *)v13 + 6) = *(_OWORD *)(v12 + 96);
      v13 += 16;
      *((_OWORD *)v13 - 1) = *(_OWORD *)(v12 + 112);
      v12 += 128i64;
      --v4;
    }
    while ( v4 );
    *v13 = *(_QWORD *)v12;
  }
  return (v16 & 0x800) == 0 && !BG_HoldingBreath(p_predictedPlayerState);
}

/*
==============
s_LUI_DataBinding_Get_IsHybridVisible
==============
*/
bool s_LUI_DataBinding_Get_IsHybridVisible(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const playerState_s *p_predictedPlayerState; 
  bool v6; 
  bool v7; 
  bool result; 
  Weapon r_weapon; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(*v4, p_predictedPlayerState);
  result = 0;
  if ( ((unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF || !BG_IsTurretActive(p_predictedPlayerState)) && BG_InADS(p_predictedPlayerState) )
  {
    v6 = BG_UsingAlternate(p_predictedPlayerState);
    if ( BG_CanHybridToggle(p_predictedPlayerState, &r_weapon, v6) )
    {
      v7 = BG_UsingAlternate(p_predictedPlayerState);
      if ( !BG_CanThermalToggle(&r_weapon, v7) )
        return 1;
    }
  }
  return result;
}

/*
==============
s_LUI_DataBinding_Get_IsLockedOn
==============
*/
bool s_LUI_DataBinding_Get_IsLockedOn(LocalClientNum_t localClientNum)
{
  return (CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.weapLockFlags & 2) != 0;
}

/*
==============
s_LUI_DataBinding_Get_IsMeleeOnly
==============
*/
bool s_LUI_DataBinding_Get_IsMeleeOnly(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v4, &LocalClientGlobals->predictedPlayerState);
  v6 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  return BG_IsMeleeOnlyWeapon(CurrentWeaponForPlayer, v6);
}

/*
==============
s_LUI_DataBinding_Get_IsNull
==============
*/
bool s_LUI_DataBinding_Get_IsNull(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx == 0;
}

/*
==============
s_LUI_DataBinding_Get_IsPrimaryReticleVisible
==============
*/
bool s_LUI_DataBinding_Get_IsPrimaryReticleVisible(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_IsReticleVisible(localClientNum, 1);
}

/*
==============
s_LUI_DataBinding_Get_IsThermalHintVisible
==============
*/
bool s_LUI_DataBinding_Get_IsThermalHintVisible(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const playerState_s *p_predictedPlayerState; 
  const BgWeaponMap *v6; 
  bool outIsAlternate; 
  Weapon r_weapon; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = *v4;
  r_weapon = *BG_GetViewmodelOrOffhandADSWeapon(v6, p_predictedPlayerState, &outIsAlternate);
  if ( BG_IsUsingOffhandGestureWeaponADSActive(p_predictedPlayerState) )
    return BG_CanThermalToggle(&r_weapon, outIsAlternate);
  return BG_InADS(p_predictedPlayerState) && BG_IsThermalEnabled(v6, &r_weapon, p_predictedPlayerState) && BG_CanThermalToggle(&r_weapon, outIsAlternate);
}

/*
==============
s_LUI_DataBinding_Get_IsZoomHintVisible
==============
*/
bool s_LUI_DataBinding_Get_IsZoomHintVisible(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  double v5; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  bool v7; 
  CgHandler *Handler; 
  bool v9; 
  CgWeaponMap *v10; 
  bool outIsAlternate; 
  Weapon r_weapon; 

  v1 = DVARBOOL_cg_drawZoomHint;
  if ( !DVARBOOL_cg_drawZoomHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawZoomHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  r_weapon = *BG_GetViewmodelOrOffhandADSWeapon(Instance, p_predictedPlayerState, &outIsAlternate);
  v5 = BG_WeaponADSFractionAffectedByReload(Instance, p_predictedPlayerState);
  IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(p_predictedPlayerState);
  v7 = *(float *)&v5 == 1.0;
  if ( IsUsingOffhandGestureWeaponADSActive )
    v7 = 1;
  if ( !r_weapon.weaponIdx )
    return 0;
  if ( !v7 )
    return 0;
  Handler = CgHandler::getHandler(localClientNum);
  if ( BG_PlayerUsesNVGHalfADS(p_predictedPlayerState, Handler) )
    return 0;
  v9 = outIsAlternate;
  v10 = CgWeaponMap::GetInstance(localClientNum);
  return BG_ADSZoomCount(v10, p_predictedPlayerState, &r_weapon, v9) > 1;
}

/*
==============
s_LUI_DataBinding_Get_LootIndex
==============
*/
__int64 s_LUI_DataBinding_Get_LootIndex(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  unsigned __int8 weaponLootId; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  weaponLootId = CG_GetWeaponForHud(LocalClientGlobals)->weaponLootId;
  if ( weaponLootId )
    return (unsigned int)weaponLootId - 1;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
s_LUI_DataBinding_Get_NextAltModeFireType
==============
*/
weapFireType_t s_LUI_DataBinding_Get_NextAltModeFireType(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetAltModeFireType(localClientNum, 0);
}

/*
==============
s_LUI_DataBinding_Get_ScopeIndex
==============
*/
__int64 s_LUI_DataBinding_Get_ScopeIndex(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 
  const Weapon *CurrentWeaponForPlayer; 
  AttachmentSlot slot; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(*v4, &LocalClientGlobals->predictedPlayerState);
  slot = ATT_SLOT_SCOPE;
  return (unsigned int)BG_Weapon_GetPrimaryAttachmentIndex(CurrentWeaponForPlayer, &slot) - 1;
}

/*
==============
s_LUI_DataBinding_Get_ScopeVariation
==============
*/
__int64 s_LUI_DataBinding_Get_ScopeVariation(LocalClientNum_t localClientNum)
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
  return BG_GetCurrentWeaponForPlayer(*v4, &LocalClientGlobals->predictedPlayerState)->scopeVariation;
}

/*
==============
s_LUI_DataBinding_Get_SecondaryAmmoInClip
==============
*/
__int64 s_LUI_DataBinding_Get_SecondaryAmmoInClip(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const Weapon *SecondPrimaryWeapon; 
  unsigned int v6; 
  int v7; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  SecondPrimaryWeapon = CG_GetSecondPrimaryWeapon(LocalClientGlobals, p_predictedPlayerState);
  if ( !SecondPrimaryWeapon->weaponIdx )
    return 0i64;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_clip2 = *BG_AmmoStoreForWeapon(&result, SecondPrimaryWeapon, 0);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_HasLadderHand(p_predictedPlayerState);
  v6 = 0;
  v7 = 0;
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v7].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v7 >= 0xF )
      return v6;
  }
  return (unsigned int)p_predictedPlayerState->weapCommon.ammoInClip[v7].ammoCount[0];
}

/*
==============
s_LUI_DataBinding_Get_SecondaryAmmoNotInClip
==============
*/
__int64 s_LUI_DataBinding_Get_SecondaryAmmoNotInClip(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const Weapon *SecondPrimaryWeapon; 
  unsigned int v6; 
  int v7; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  SecondPrimaryWeapon = CG_GetSecondPrimaryWeapon(LocalClientGlobals, p_predictedPlayerState);
  if ( !SecondPrimaryWeapon->weaponIdx )
    return 0i64;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_ammo2 = *BG_AmmoStoreForWeapon(&result, SecondPrimaryWeapon, 0);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  while ( !BG_IsAmmoCompatible(&p_predictedPlayerState->weapCommon.ammoNotInClip[v7].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v7 >= 0xF )
      return v6;
  }
  if ( (playerState_s *)((char *)p_predictedPlayerState + 68 * v7) != (playerState_s *)-1912i64 )
    return (unsigned int)p_predictedPlayerState->weapCommon.ammoNotInClip[v7].ammoCount;
  return v6;
}

/*
==============
s_LUI_DataBinding_Get_SecondaryHUDIcon
==============
*/
char s_LUI_DataBinding_Get_SecondaryHUDIcon(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  const cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const Weapon *SecondPrimaryWeapon; 
  GfxImage *v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = CG_GetLocalClientGlobals(localClientNum);
  SecondPrimaryWeapon = CG_GetSecondPrimaryWeapon(LocalClientGlobals, &v7->predictedPlayerState);
  if ( !SecondPrimaryWeapon->weaponIdx )
    return 0;
  v9 = BG_HudIcon(SecondPrimaryWeapon, 0);
  if ( !v9 )
    return 0;
  Core_strcpy(outString, outStringSize, v9->name);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_SpreadPercent
==============
*/
float s_LUI_DataBinding_Get_SpreadPercent(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.weapCommon.aimSpreadScale * 0.0039215689;
}

/*
==============
s_LUI_DataBinding_Get_StockAmmoVisible
==============
*/
bool s_LUI_DataBinding_Get_StockAmmoVisible(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx && !LUI_DataBindingWeapon_GetWeaponDef(localClientNum)->suppressAmmoReserveDisplay;
}

/*
==============
s_LUI_DataBinding_Get_StowedWeaponBaseName
==============
*/
char s_LUI_DataBinding_Get_StowedWeaponBaseName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  const Weapon *StowedWeapon; 
  bool v8; 
  const WeaponCompleteDef *v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  StowedWeapon = LUI_DataBindingWeapon_GetStowedWeapon(localClientNum);
  v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  v9 = BG_WeaponCompleteDef(StowedWeapon, v8);
  Core_strcpy(outString, outStringSize, v9->szInternalName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_StowedWeaponName
==============
*/
char s_LUI_DataBinding_Get_StowedWeaponName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  unsigned int v4; 
  const Weapon *StowedWeapon; 

  v4 = outStringSize;
  StowedWeapon = LUI_DataBindingWeapon_GetStowedWeapon(localClientNum);
  BG_GetWeaponName(StowedWeapon, outString, v4);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_TotalAltAmmo
==============
*/

__int64 __fastcall s_LUI_DataBinding_Get_TotalAltAmmo(LocalClientNum_t localClientNum, __int64 a2, double a3)
{
  const cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  int TotalAmmoReserve; 
  int v7; 
  int v8; 
  CgWeaponMap *Instance; 
  AmmoStore result; 
  Weapon r_weapon; 
  AmmoStore r_clip2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  r_weapon = *CG_GetWeaponForHud(LocalClientGlobals);
  if ( BG_AltSharesAmmo(&r_weapon) )
    return 0xFFFFFFFFi64;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1257, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  TotalAmmoReserve = 0;
  v7 = 0;
  r_clip2 = *BG_AmmoStoreForWeapon(&result, &r_weapon, 1);
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v7].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v7 >= 0xF )
    {
      v8 = 0;
      goto LABEL_10;
    }
  }
  v8 = p_predictedPlayerState->weapCommon.ammoInClip[v7].ammoCount[0] + p_predictedPlayerState->weapCommon.ammoInClip[v7].ammoCount[1];
LABEL_10:
  r_weapon = *CG_ClipCounterWeapon(&r_clip2.weapon, LocalClientGlobals, &r_weapon, 1);
  if ( LOWORD(a3) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    TotalAmmoReserve = BG_GetTotalAmmoReserve(Instance, p_predictedPlayerState, &r_weapon, 1);
  }
  return (unsigned int)(v8 + TotalAmmoReserve);
}

/*
==============
s_LUI_DataBinding_Get_ViewFov
==============
*/
float s_LUI_DataBinding_Get_ViewFov(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClientFov result; 

  v1 = *(_QWORD *)&CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0)->finalFov;
  return *(float *)&v1;
}

/*
==============
s_LUI_DataBinding_Get_WeaponClass
==============
*/
weapClass_t s_LUI_DataBinding_Get_WeaponClass(LocalClientNum_t localClientNum)
{
  return LUI_DataBindingWeapon_GetWeaponClass(localClientNum, 0);
}

/*
==============
s_LUI_DataBinding_Get_WeaponIndex
==============
*/
__int64 s_LUI_DataBinding_Get_WeaponIndex(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_GetWeaponForHud(LocalClientGlobals)->weaponIdx;
}

/*
==============
s_LUI_DataBinding_Get_WeaponInspectOnAltToggle
==============
*/

bool __fastcall s_LUI_DataBinding_Get_WeaponInspectOnAltToggle(LocalClientNum_t localClientNum)
{
  return CG_IsWeaponInspectOnAltToggle(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_ZoomLevelWeights
==============
*/
float s_LUI_DataBinding_Get_ZoomLevelWeights(LocalClientNum_t localClientNum, unsigned __int8 param)
{
  __int64 v3; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool UsingAltForHud; 
  double ADSZoomLevelFraction; 
  float outZoomLevelWeights[4]; 

  v3 = localClientNum;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v3];
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, p_predictedPlayerState);
  UsingAltForHud = CG_GetUsingAltForHud(p_predictedPlayerState);
  ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(v5, p_predictedPlayerState, CurrentWeaponForPlayer, UsingAltForHud, p_predictedPlayerState->serverTimeInterpolated);
  BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, outZoomLevelWeights);
  return outZoomLevelWeights[param];
}

