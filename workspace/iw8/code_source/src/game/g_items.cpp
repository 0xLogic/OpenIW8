/*
==============
G_Items_SetItemPhysics
==============
*/

void __fastcall G_Items_SetItemPhysics(const gentity_s *owner, gentity_s *itemEnt)
{
  ?G_Items_SetItemPhysics@@YAXPEBUgentity_s@@PEAU1@@Z(owner, itemEnt);
}

/*
==============
G_Items_DropWeapon
==============
*/

gentity_s *__fastcall G_Items_DropWeapon(gentity_s *ent, const Weapon *r_weapon, const bool doPhysicsOnInit, const bool checkForPenetration, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  return ?G_Items_DropWeapon@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@_N2AEBT?$tmat43_t@Tvec3_t@@@@@Z(ent, r_weapon, doPhysicsOnInit, checkForPenetration, penetrationTestMatrix);
}

/*
==============
G_LoadWeaponCue
==============
*/

void __fastcall G_LoadWeaponCue(SaveGame *save)
{
  ?G_LoadWeaponCue@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_Items_RunItem
==============
*/

void __fastcall G_Items_RunItem(gentity_s *ent)
{
  ?G_Items_RunItem@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Items_CreatePhysObj
==============
*/

void __fastcall G_Items_CreatePhysObj(gentity_s *ent)
{
  ?G_Items_CreatePhysObj@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Items_GetNonClipAmmoToTransferToWeaponEntity
==============
*/

int __fastcall G_Items_GetNonClipAmmoToTransferToWeaponEntity(const gentity_s *player, const Weapon *transferWeapon, bool isAlternate)
{
  return ?G_Items_GetNonClipAmmoToTransferToWeaponEntity@@YAHPEBUgentity_s@@AEBUWeapon@@_N@Z(player, transferWeapon, isAlternate);
}

/*
==============
G_Items_EnablePhysics
==============
*/

void __fastcall G_Items_EnablePhysics(gentity_s *ent)
{
  ?G_Items_EnablePhysics@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Items_SetupWeapon
==============
*/

void __fastcall G_Items_SetupWeapon(unsigned int weapIndex)
{
  ?G_Items_SetupWeapon@@YAXI@Z(weapIndex);
}

/*
==============
G_Items_AddAmmo
==============
*/

unsigned int __fastcall G_Items_AddAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate, int count, int fillClip)
{
  return ?G_Items_AddAmmo@@YAIPEAUplayerState_s@@AEBUWeapon@@_NHH@Z(ps, weapon, isAlternate, count, fillClip);
}

/*
==============
G_Items_Touch
==============
*/

void __fastcall G_Items_Touch(gentity_s *ent, gentity_s *other, int touched, int predictable)
{
  ?G_Items_Touch@@YAXPEAUgentity_s@@0HH@Z(ent, other, touched, predictable);
}

/*
==============
G_Items_EnablePhysicsDelayed
==============
*/

void __fastcall G_Items_EnablePhysicsDelayed(gentity_s *weapEnt, gentity_s *dropper, int dropTime, const tmat43_t<vec3_t> *prevMatrix, scr_string_t tagName)
{
  ?G_Items_EnablePhysicsDelayed@@YAXPEAUgentity_s@@0HAEBT?$tmat43_t@Tvec3_t@@@@W4scr_string_t@@@Z(weapEnt, dropper, dropTime, prevMatrix, tagName);
}

/*
==============
G_Items_InitializeAmmo
==============
*/

void __fastcall G_Items_InitializeAmmo(playerState_s *ps, const Weapon *weapon, const bool isAlternate, int hadWeapon)
{
  ?G_Items_InitializeAmmo@@YAXPEAUplayerState_s@@AEBUWeapon@@_NH@Z(ps, weapon, isAlternate, hadWeapon);
}

/*
==============
G_Items_SetDefaultState
==============
*/

void __fastcall G_Items_SetDefaultState(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  ?G_Items_SetDefaultState@@YAXPEBUgentity_s@@PEAU1@@Z(droppingEnt, droppedEnt);
}

/*
==============
G_Items_GetStateFromTag
==============
*/

void __fastcall G_Items_GetStateFromTag(const gentity_s *droppingEnt, scr_string_t tag, const gentity_s *droppedEnt, tmat43_t<vec3_t> *matrix, const bool canSkipTraceToTag)
{
  ?G_Items_GetStateFromTag@@YAXPEBUgentity_s@@W4scr_string_t@@0AEAT?$tmat43_t@Tvec3_t@@@@_N@Z(droppingEnt, tag, droppedEnt, matrix, canSkipTraceToTag);
}

/*
==============
G_Items_SetStateFromTag
==============
*/

void __fastcall G_Items_SetStateFromTag(const gentity_s *droppingEnt, scr_string_t tag, gentity_s *droppedEnt, const bool canSkipTraceToTag)
{
  ?G_Items_SetStateFromTag@@YAXPEBUgentity_s@@W4scr_string_t@@PEAU1@_N@Z(droppingEnt, tag, droppedEnt, canSkipTraceToTag);
}

/*
==============
G_Items_FinishSpawningCallback
==============
*/

void __fastcall G_Items_FinishSpawningCallback(gentity_s *ent)
{
  ?G_Items_FinishSpawningCallback@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Items_DropScavengerBag
==============
*/

gentity_s *__fastcall G_Items_DropScavengerBag(gentity_s *ent, const Weapon *r_weapon, const bool doPhysicsOnInit, const bool checkForPenetration, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  return ?G_Items_DropScavengerBag@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@_N2AEBT?$tmat43_t@Tvec3_t@@@@@Z(ent, r_weapon, doPhysicsOnInit, checkForPenetration, penetrationTestMatrix);
}

/*
==============
G_Items_Think
==============
*/

void __fastcall G_Items_Think(gentity_s *pSelf)
{
  ?G_Items_Think@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
G_Items_GetClassname
==============
*/

void __fastcall G_Items_GetClassname(const Weapon *item, gentity_s *ent)
{
  ?G_Items_GetClassname@@YAXAEBUWeapon@@PEAUgentity_s@@@Z(item, ent);
}

/*
==============
G_Items_CheckPenetration
==============
*/

bool __fastcall G_Items_CheckPenetration(const Weapon *r_weapon, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  return ?G_Items_CheckPenetration@@YA_NAEBUWeapon@@AEBT?$tmat43_t@Tvec3_t@@@@@Z(r_weapon, penetrationTestMatrix);
}

/*
==============
G_SaveWeaponCue
==============
*/

void __fastcall G_SaveWeaponCue(MemoryFile *memFile)
{
  ?G_SaveWeaponCue@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_Items_Spawn
==============
*/

void __fastcall G_Items_Spawn(gentity_s *ent, const Weapon *item)
{
  ?G_Items_Spawn@@YAXPEAUgentity_s@@AEBUWeapon@@@Z(ent, item);
}

/*
==============
G_Items_SetPhysicsVelocities
==============
*/

bool __fastcall G_Items_SetPhysicsVelocities(gentity_s *droppedEnt, const vec3_t *velocity, const vec3_t *angularVelocity)
{
  return ?G_Items_SetPhysicsVelocities@@YA_NPEAUgentity_s@@AEBTvec3_t@@1@Z(droppedEnt, velocity, angularVelocity);
}

/*
==============
G_Items_SetDefaultVelocity
==============
*/

void __fastcall G_Items_SetDefaultVelocity(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  ?G_Items_SetDefaultVelocity@@YAXPEBUgentity_s@@PEAU1@@Z(droppingEnt, droppedEnt);
}

/*
==============
G_Items_TouchAuto
==============
*/

void __fastcall G_Items_TouchAuto(gentity_s *ent, gentity_s *other, int bTouched)
{
  ?G_Items_TouchAuto@@YAXPEAUgentity_s@@0H@Z(ent, other, bTouched);
}

/*
==============
G_Items_AddAmmo
==============
*/
__int64 G_Items_AddAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate, int count, int fillClip)
{
  __int64 v9; 
  unsigned int v13; 
  ClipAmmo *ammoInClip; 
  __int64 v15; 
  __int64 v17; 
  int v20; 
  int MaxPickupableAmmo; 
  int v22; 
  int v26; 
  __int64 v27; 
  __int64 v29; 
  unsigned int v32; 
  ClipAmmo *v33; 
  int v34; 
  int v35; 
  bool v36; 
  int IsClipOnly; 
  int AmmoNotInClip; 
  int ammoCount; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  const WeaponDef *v43; 
  BgWeaponMap *weaponMap; 
  AmmoStore v45; 
  AmmoStore result; 
  AmmoStore r_ammoType; 

  v36 = isAlternate;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 95, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps", isAlternate) )
    __debugbreak();
  weaponMap = GWeaponMap::GetInstance();
  if ( !BG_PlayerHasWeapon(weaponMap, ps, weapon) && !BG_PlayerHasCompatibleWeapon(weaponMap, ps, weapon, isAlternate) )
    return 0i64;
  IsClipOnly = BG_WeaponIsClipOnly(weapon, isAlternate);
  v43 = BG_WeaponDef(weapon, isAlternate);
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+80h+r_ammoType.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+80h+r_ammoType.weapon.attachmentVariationIndices+5], ymm1
  }
  ammoCount = BG_GetAmmoPlayerMax(weaponMap, ps, weapon, isAlternate, &NULL_WEAPON);
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, weapon, isAlternate);
  BG_AddGlobalAmmoForAmmoType(ps, &r_ammoType, count);
  v13 = 0;
  ammoInClip = ps->weapCommon.ammoInClip;
  v41 = 0i64;
  v15 = 0i64;
  v42 = 2i64;
  v40 = 2i64;
  do
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_AmmoStoreForWeapon(&v45, weapon, isAlternate);
    v17 = v15;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+80h+result.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+80h+result.weapon.attachmentVariationIndices+5], ymm1
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_HasLadderHand(ps) && v15 == 1 )
      v17 = 0i64;
    while ( !BG_IsClipCompatible(&ammoInClip->clipIndex, &result) )
    {
      ++v13;
      ++ammoInClip;
      if ( v13 >= 0xF )
      {
        v13 = 0;
        v20 = 0;
        goto LABEL_21;
      }
    }
    v20 = ammoInClip->ammoCount[v17];
    v13 = 0;
LABEL_21:
    *((_DWORD *)&v41 + v15) = v20;
    ammoInClip = ps->weapCommon.ammoInClip;
    ++v15;
    --v40;
  }
  while ( v40 );
  if ( (fillClip || IsClipOnly) && (G_Items_FillClip(ps, weapon, isAlternate), IsClipOnly) )
  {
    BG_SetGlobalAmmo(ps, weapon, isAlternate, 0);
  }
  else if ( BG_GetAmmoNotInClip(ps, weapon, isAlternate) > ammoCount )
  {
    BG_SetGlobalAmmo(ps, weapon, isAlternate, ammoCount);
    v9 = (unsigned int)(BG_GetAmmoNotInClip(ps, weapon, isAlternate) - AmmoNotInClip);
    if ( (int)v9 < 0 )
      return 0i64;
    return v9;
  }
  if ( v43->iSharedAmmoCapIndex >= 0 )
  {
    MaxPickupableAmmo = BG_GetMaxPickupableAmmo(weaponMap, ps, weapon, isAlternate);
    v22 = MaxPickupableAmmo;
    if ( MaxPickupableAmmo < 0 )
    {
      if ( IsClipOnly )
      {
        _RAX = BG_AmmoStoreForWeapon(&v45, weapon, isAlternate);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+80h+result.weapon.weaponIdx], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbp+80h+result.weapon.attachmentVariationIndices+5], ymm1
        }
        BG_AddClipAmmo(ps, &result, WEAPON_HAND_DEFAULT, v22);
        if ( BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT) <= 0 )
        {
          G_Weapon_TakePlayerWeapon(ps, weapon);
          return 0i64;
        }
      }
      else
      {
        BG_AddGlobalAmmoForAmmoType(ps, &r_ammoType, MaxPickupableAmmo);
        if ( BG_GetAmmoNotInClip(ps, weapon, isAlternate) < 0 )
          BG_SetGlobalAmmo(ps, weapon, isAlternate, 0);
      }
    }
  }
  v26 = BG_GetAmmoNotInClip(ps, weapon, isAlternate) - AmmoNotInClip;
  v27 = 0i64;
  if ( v26 < 0 )
    v26 = 0;
  do
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_AmmoStoreForWeapon(&v45, weapon, v36);
    v29 = v27;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+80h+result.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+80h+result.weapon.attachmentVariationIndices+5], ymm1
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_HasLadderHand(ps) && v27 == 1 )
      v29 = 0i64;
    v32 = 0;
    v33 = ps->weapCommon.ammoInClip;
    while ( !BG_IsClipCompatible(&v33->clipIndex, &result) )
    {
      ++v32;
      ++v33;
      if ( v32 >= 0xF )
      {
        v34 = 0;
        goto LABEL_53;
      }
    }
    v34 = v33->ammoCount[v29];
LABEL_53:
    v35 = v34 - *((_DWORD *)&v41 + v27++);
    v26 += v35;
    --v42;
  }
  while ( v42 );
  return (unsigned int)v26;
}

/*
==============
G_Items_CheckPenetration
==============
*/
char G_Items_CheckPenetration(const Weapon *r_weapon, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  XModel *v6; 
  XModel *v7; 
  const PhysicsAsset *physicsAsset; 
  char v10; 
  char v11; 
  char *fmt; 
  __int64 ignoreSystems; 
  __int64 v23; 
  Physics_InstantiateShapeOverride shapeOverride; 
  vec4_t out; 

  _RSI = penetrationTestMatrix;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v6 = GUtils::ms_gUtils->GetWeaponWorldModels(GUtils::ms_gUtils, r_weapon);
  v7 = v6;
  if ( !v6 )
    return 0;
  physicsAsset = v6->physicsAsset;
  if ( !physicsAsset )
    return 0;
  shapeOverride.shapeOverride = -1;
  shapeOverride.customShape = NULL;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  shapeOverride.shapeAddendum = -1;
  Axis43ToQuat(_RSI, &out);
  *(double *)&_XMM0 = Physics_GetInstantiatiationPenetrationDepthForAsset(PHYSICS_WORLD_ID_FIRST, physicsAsset, &_RSI->m[3], &out, &shapeOverride, 512);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v10 | v11 )
    return 0;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+2Ch]
    vmovss  xmm3, dword ptr [rsi+24h]
    vmovss  xmm2, dword ptr [rsi+28h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+0A8h+var_78], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  qword ptr [rsp+0A8h+ignoreSystems], xmm1
    vmovq   r9, xmm3
    vmovsd  [rsp+0A8h+fmt], xmm2
  }
  Com_PrintWarning(15, "Weapon %s dropped at (%.2f,%.2f,%.2f) would be penetrating collision by %.2f units - drop failed\n", v7->name, _R9, fmt, ignoreSystems, v23);
  return 1;
}

/*
==============
G_Items_ClipMask
==============
*/
__int64 G_Items_ClipMask(const gentity_s *ent)
{
  unsigned int clipmask; 
  __int64 result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 253, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  clipmask = ent->clipmask;
  result = 1169i64;
  if ( clipmask )
    return clipmask;
  return result;
}

/*
==============
G_Items_CreatePhysObj
==============
*/
void G_Items_CreatePhysObj(gentity_s *ent)
{
  G_PhysicsObject *v2; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2261, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Utils_DestroyEntityPhysics(ent);
  G_Utils_CreateEntityPhysics(ent);
  v2 = G_PhysicsObject_Get(ent);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2269, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v2->physicsInstances[0] == -1 )
  {
    ent->s.lerp.pos.trType = TR_GRAVITY;
    ent->s.lerp.pos.trTime = level.time;
    ent->s.lerp.apos.trType = TR_STATIONARY;
  }
}

/*
==============
G_Items_DropScavengerBag
==============
*/
gentity_s *G_Items_DropScavengerBag(gentity_s *ent, const Weapon *r_weapon, const bool doPhysicsOnInit, const bool checkForPenetration, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  gentity_s *v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1593, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_DropScavengerBag");
  if ( checkForPenetration && G_Items_CheckPenetration(r_weapon, penetrationTestMatrix) )
  {
    v9 = NULL;
  }
  else
  {
    v9 = G_Items_Launch(ent, r_weapon, 1, doPhysicsOnInit);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1606, ASSERT_TYPE_ASSERT, "( droppedItemEnt )", (const char *)&queryFormat, "droppedItemEnt") )
      __debugbreak();
    G_Items_UpdateScavengerBagVisibility(v9);
  }
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
G_Items_DropWeapon
==============
*/
gentity_s *G_Items_DropWeapon(gentity_s *ent, const Weapon *r_weapon, const bool doPhysicsOnInit, const bool checkForPenetration, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  const WeaponDef *v10; 
  GItems *v11; 
  gentity_s *v12; 
  unsigned int *holdrand; 
  GHandler *Handler; 
  GUtils *Utils; 
  const XModel *v17; 
  const char **p_name; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1864, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( EntityPlayerState )
  {
    Instance = GWeaponMap::GetInstance();
    if ( !BG_PlayerHasWeapon(Instance, EntityPlayerState, r_weapon) )
      return 0i64;
  }
  v10 = BG_WeaponDef(r_weapon, 0);
  if ( v10->inventoryType == WEAPINVENTORY_ALTMODE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1872, ASSERT_TYPE_ASSERT, "( weapDef->inventoryType != WEAPINVENTORY_ALTMODE )", (const char *)&queryFormat, "weapDef->inventoryType != WEAPINVENTORY_ALTMODE") )
    __debugbreak();
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v11 = GItems::ms_gItemsSystem;
  v12 = NULL;
  if ( EntityPlayerState && (holdrand = G_GetRandomSeed(), Handler = GHandler::getHandler(), BG_AnimScriptEvent(Handler, EntityPlayerState, ANIM_ET_DROPWEAPONTOGROUND, 0, 0, holdrand), v11->ShouldAbortDropWeapon(v11, ent, EntityPlayerState, r_weapon)) || BG_WeaponDropIsDisabled(r_weapon, 0) )
  {
    G_Weapon_TakePlayerWeapon(EntityPlayerState, r_weapon);
    return 0i64;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_DropWeapon");
  if ( checkForPenetration && G_Items_CheckPenetration(r_weapon, penetrationTestMatrix) )
  {
    if ( EntityPlayerState )
      G_Weapon_TakePlayerWeapon(EntityPlayerState, r_weapon);
  }
  else
  {
    Utils = GUtils::GetUtils();
    v17 = Utils->GetWeaponWorldModels(Utils, r_weapon);
    p_name = &v17->name;
    if ( v17 && XModelIsDefaultAsset(v17) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1909, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to drop a weapon with model %s that is unloaded", *p_name) )
        __debugbreak();
    }
    else
    {
      v12 = G_Items_Launch(ent, r_weapon, 0, doPhysicsOnInit);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1914, ASSERT_TYPE_ASSERT, "( dropEnt )", (const char *)&queryFormat, "dropEnt") )
        __debugbreak();
      if ( ent->client && BG_IsRiotShield(r_weapon, 0) )
        G_Utils_AddEvent(ent, 0x64u, 0);
      if ( EntityPlayerState )
      {
        G_Items_TransferPlayerAmmoToWeaponEntity(ent, v12, r_weapon);
        G_Weapon_TakePlayerWeapon(EntityPlayerState, r_weapon);
      }
      else
      {
        if ( v10->dualWieldType == DUAL_WIELD_TYPE_DEFAULT && BG_OneHandedViewModelAnimsValid(v10) && v11->ShouldDropAkimboWeapon(v11) )
          v12->spawnflags |= 4u;
        G_Items_TransferRandomAmmoToWeaponEntity(ent, v12, r_weapon);
      }
      if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
        __debugbreak();
      GItems::ms_gItemsSystem->WeaponDropExtraNotifies(GItems::ms_gItemsSystem, v12, ent, r_weapon);
    }
  }
  Sys_ProfEndNamedEvent();
  return v12;
}

/*
==============
G_Items_EnablePhysics
==============
*/
void G_Items_EnablePhysics(gentity_s *ent)
{
  entityType_s eType; 
  G_PhysicsObject *v3; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2377, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  eType = ent->s.eType;
  if ( eType != ET_ITEM && eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2378, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_ITEM || ent->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "ent->s.eType == ET_ITEM || ent->s.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  ent->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
  ent->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
  G_Utils_DestroyEntityPhysics(ent);
  G_Utils_CreateEntityPhysics(ent);
  v3 = G_PhysicsObject_Get(ent);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2269, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v3->physicsInstances[0] == -1 )
  {
    ent->s.lerp.pos.trType = TR_GRAVITY;
    ent->s.lerp.pos.trTime = level.time;
    ent->s.lerp.apos.trType = TR_STATIONARY;
  }
}

/*
==============
G_Items_EnablePhysicsDelayed
==============
*/
void G_Items_EnablePhysicsDelayed(gentity_s *weapEnt, gentity_s *dropper, int dropTime, const tmat43_t<vec3_t> *prevMatrix, scr_string_t tagName)
{
  char v38; 
  char v39; 
  G_PhysicsObject *v84; 
  G_PhysicsObject *v86; 
  unsigned int v90; 
  int NumRigidBodys; 
  signed int v92; 
  hknpBodyId *RigidBodyID; 
  __int64 v100; 
  float outRadians[2]; 
  gentity_s *v102; 
  vec3_t outAxis; 
  vec3_t linearVelocity; 
  tmat43_t<vec3_t> matrix; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v107; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  _RDI = weapEnt;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  v102 = weapEnt;
  __asm
  {
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_EnablePhysicsDelayed");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2304, ASSERT_TYPE_ASSERT, "( weapEnt )", (const char *)&queryFormat, "weapEnt") )
    __debugbreak();
  if ( _RDI->s.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2305, ASSERT_TYPE_ASSERT, "( weapEnt->s.eType == ET_ITEM )", (const char *)&queryFormat, "weapEnt->s.eType == ET_ITEM") )
    __debugbreak();
  G_Items_GetStateFromTag(dropper, tagName, _RDI, &matrix, 0);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm6, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbp+0B0h+matrix+24h]
    vsubss  xmm0, xmm1, dword ptr [rsi+24h]
    vmovss  xmm1, dword ptr [rbp+0B0h+matrix+28h]
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm0, xmm1, dword ptr [rsi+28h]
    vmovss  xmm1, dword ptr [rbp+0B0h+matrix+2Ch]
    vmovss  dword ptr [rsp+1B0h+linearVelocity], xmm2
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm0, xmm1, dword ptr [rsi+2Ch]
    vmovss  dword ptr [rsp+1B0h+linearVelocity+4], xmm2
    vmulss  xmm2, xmm0, xmm6
    vmovss  dword ptr [rsp+1B0h+linearVelocity+8], xmm2
  }
  MatrixTranspose((const tmat33_t<vec3_t> *)prevMatrix, &out);
  MatrixMultiply(&out, (const tmat33_t<vec3_t> *)&matrix, &v107);
  MatrixToAngleRadAxis(&v107, &outAxis, outRadians);
  __asm { vmulss  xmm3, xmm6, [rsp+1B0h+outRadians] }
  _RBX = DVARFLT_actorDropItemMaxVelocity;
  __asm
  {
    vmulss  xmm2, xmm3, dword ptr [rsp+1B0h+outAxis]
    vmulss  xmm1, xmm3, dword ptr [rsp+1B0h+outAxis+4]
    vmulss  xmm0, xmm3, dword ptr [rsp+1B0h+outAxis+8]
    vmovss  dword ptr [rsp+1B0h+outAxis], xmm2
    vmovss  dword ptr [rsp+1B0h+outAxis+4], xmm1
    vmovss  dword ptr [rsp+1B0h+outAxis+8], xmm0
  }
  if ( !DVARFLT_actorDropItemMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorDropItemMaxVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_actorDropItemMaxAngularVelocity;
  if ( !DVARFLT_actorDropItemMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorDropItemMaxAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rsp+1B0h+outAxis+4]
    vmovss  xmm9, dword ptr [rsp+1B0h+outAxis]
    vmovss  xmm10, dword ptr [rsp+1B0h+outAxis+8]
    vmovss  xmm11, dword ptr [rsp+1B0h+linearVelocity+4]
    vmovss  xmm12, dword ptr [rsp+1B0h+linearVelocity]
    vmovss  xmm13, dword ptr [rsp+1B0h+linearVelocity+8]
    vmovss  xmm4, dword ptr [rbx+28h]
    vmovss  xmm5, cs:__real@3f800000
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vcomiss xmm3, xmm0
  }
  if ( !(v38 | v39) )
  {
    __asm
    {
      vsqrtss xmm1, xmm3, xmm3
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm5, xmm0
      vdivss  xmm3, xmm5, xmm0
      vmulss  xmm0, xmm12, xmm3
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm11, xmm3
      vmulss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rsp+1B0h+linearVelocity], xmm1
      vmulss  xmm1, xmm13, xmm3
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsp+1B0h+linearVelocity+8], xmm2
      vmovss  dword ptr [rsp+1B0h+linearVelocity+4], xmm0
    }
  }
  __asm
  {
    vmovaps xmm13, [rsp+1B0h+var_B8+8]
    vmovaps xmm12, [rsp+1B0h+var_A8+8]
    vmovaps xmm11, [rsp+1B0h+var_98+8]
    vmovaps xmm6, [rsp+1B0h+var_48+8]
    vmulss  xmm0, xmm4, xmm4
    vcomiss xmm7, xmm0
  }
  if ( !(v38 | v39) )
  {
    __asm
    {
      vsqrtss xmm1, xmm7, xmm7
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm5, xmm0
      vdivss  xmm3, xmm5, xmm0
      vmulss  xmm0, xmm9, xmm3
      vmulss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm8, xmm3
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rsp+1B0h+outAxis], xmm1
      vmulss  xmm1, xmm10, xmm3
      vmulss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rsp+1B0h+outAxis+8], xmm2
      vmovss  dword ptr [rsp+1B0h+outAxis+4], xmm0
    }
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&matrix, &_RDI->r.currentAngles);
  G_SetOriginAndAngle(_RDI, &matrix.m[3], &_RDI->r.currentAngles, 1, 1);
  G_Items_EnablePhysics(_RDI);
  v84 = G_PhysicsObject_Get(_RDI);
  __asm { vmovaps xmm10, [rsp+1B0h+var_88+8] }
  v86 = v84;
  __asm
  {
    vmovaps xmm9, [rsp+1B0h+var_78+8]
    vmovaps xmm8, [rsp+1B0h+var_68+8]
    vmovaps xmm7, [rsp+1B0h+var_58+8]
  }
  if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2348, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v90 = v86->physicsInstances[0];
  if ( v90 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v90);
    v92 = 0;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v100) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v100) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&outRadians[1], PHYSICS_WORLD_ID_FIRST, v90, v92);
        Physics_SetRigidBodyVelocity(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &linearVelocity, &outAxis);
        ++v92;
      }
      while ( v92 < NumRigidBodys );
      _RDI = v102;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1B0h+linearVelocity]
      vmovss  xmm1, dword ptr [rsp+1B0h+linearVelocity+4]
    }
    _RDI->s.lerp.pos.trTime = level.time;
    _RDI->s.lerp.apos.trTime = level.time;
    __asm
    {
      vmovss  dword ptr [rdi+28h], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+linearVelocity+8]
      vmovss  dword ptr [rdi+2Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+1B0h+outAxis]
      vmovss  dword ptr [rdi+30h], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+outAxis+4]
      vmovss  dword ptr [rdi+4Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+1B0h+outAxis+8]
      vmovss  dword ptr [rdi+54h], xmm1
      vmovss  dword ptr [rdi+50h], xmm0
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_FillClip
==============
*/
void G_Items_FillClip(playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  bool v7; 
  unsigned int v10; 
  PlayerHandIndex v11; 
  GWeaponMap *Instance; 
  ClipAmmo *ammoInClip; 
  __int64 v14; 
  __int64 v16; 
  int IsClipCompatible; 
  int v20; 
  int v24; 
  int ammoCount; 
  int ClipSize; 
  __int64 v30; 
  AmmoStore v31; 
  AmmoStore result; 
  AmmoStore r_ammoType; 

  _RAX = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  v7 = weapon->weaponIdx == 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+148h+r_ammoType.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+148h+r_ammoType.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !v7 && weapon->weaponIdx < BG_GetNumWeapons() )
  {
    v10 = 0;
    ClipSize = BG_GetClipSize(ps, weapon, isAlternate);
    v11 = WEAPON_HAND_DEFAULT;
    Instance = GWeaponMap::GetInstance();
    ammoInClip = ps->weapCommon.ammoInClip;
    v14 = 0i64;
    v30 = BG_PlayerDualWieldingWeapon(Instance, ps, weapon) != 0;
    do
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      _RAX = BG_AmmoStoreForWeapon(&v31, weapon, isAlternate);
      v16 = v14;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+148h+result.weapon.weaponIdx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+148h+result.weapon.attachmentVariationIndices+5], ymm1
      }
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( BG_HasLadderHand(ps) && v14 == 1 )
        v16 = 0i64;
      while ( 1 )
      {
        IsClipCompatible = BG_IsClipCompatible(&ammoInClip->clipIndex, &result);
        if ( IsClipCompatible )
          break;
        ++v10;
        ++ammoInClip;
        if ( v10 >= 0xF )
          goto LABEL_17;
      }
      IsClipCompatible = ammoInClip->ammoCount[v16];
LABEL_17:
      v20 = ClipSize - IsClipCompatible;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      _RAX = BG_AmmoStoreForWeapon(&v31, weapon, isAlternate);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+148h+result.weapon.weaponIdx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+148h+result.weapon.attachmentVariationIndices+5], ymm1
      }
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v24 = 0;
      while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v24].ammoType, &result) )
      {
        if ( (unsigned int)++v24 >= 0xF )
          goto LABEL_26;
      }
      if ( (playerState_s *)((char *)ps + 68 * v24) == (playerState_s *)-1912i64 )
      {
LABEL_26:
        v10 = 0;
        ammoCount = 0;
        goto LABEL_27;
      }
      ammoCount = ps->weapCommon.ammoNotInClip[v24].ammoCount;
      v10 = 0;
LABEL_27:
      if ( v20 <= ammoCount )
        ammoCount = v20;
      if ( ammoCount > 0 )
      {
        _RAX = BG_AmmoStoreForWeapon(&v31, weapon, isAlternate);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+148h+result.weapon.weaponIdx], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rsp+148h+result.weapon.attachmentVariationIndices+5], ymm1
        }
        BG_AddGlobalAmmoForAmmoType(ps, &r_ammoType, -ammoCount);
        BG_AddClipAmmo(ps, &result, v11, ammoCount);
      }
      ++v11;
      ammoInClip = ps->weapCommon.ammoInClip;
      ++v14;
    }
    while ( v14 <= v30 );
  }
}

/*
==============
G_Items_FinishSpawningCallback
==============
*/
void G_Items_FinishSpawningCallback(gentity_s *ent)
{
  bool v3; 
  gentity_s *v4; 
  vec3_t *p_origin; 
  int v8; 
  int contentmask; 
  int passEntityNum; 
  int number; 
  const char *v21; 
  const char *v22; 
  signed __int16 EntityHitId; 
  vec3_t start; 
  vec3_t end; 
  vec3_t origin; 
  Bounds bounds; 
  trace_t results; 

  _RDI = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_FinishSpawningCallback");
  v3 = (_RDI->spawnflags & 1) == 0;
  v4 = _RDI;
  _RDI->handler = 22;
  if ( v3 )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
      vmovaps [rsp+130h+var_10], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovss  dword ptr [rbp+30h+bounds.halfSize+4], xmm7
      vmovss  dword ptr [rbp+30h+bounds.halfSize+8], xmm7
      vmovups xmmword ptr [rbp+30h+bounds.midPoint], xmm0
    }
    v8 = G_Items_ClipMask(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+134h]
      vmovss  xmm1, dword ptr [rdi+138h]
      vmovss  xmm2, dword ptr [rdi+130h]
    }
    contentmask = v8;
    passEntityNum = _RDI->s.number;
    __asm
    {
      vmovss  dword ptr [rsp+130h+start+4], xmm0
      vmovss  dword ptr [rsp+130h+end+4], xmm0
      vsubss  xmm0, xmm1, cs:__real@45800000
      vmovss  dword ptr [rsp+130h+end+8], xmm0
      vmovss  dword ptr [rsp+130h+start], xmm2
      vmovss  dword ptr [rsp+130h+start+8], xmm1
      vmovss  dword ptr [rsp+130h+end], xmm2
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, contentmask);
    if ( results.startsolid )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+138h]
        vsubss  xmm2, xmm1, cs:__real@41700000
        vmovss  xmm3, dword ptr [rdi+130h]
        vmovss  xmm0, dword ptr [rdi+134h]
      }
      number = _RDI->s.number;
      __asm
      {
        vmovss  dword ptr [rsp+130h+start+8], xmm2
        vsubss  xmm2, xmm1, cs:__real@45800000
        vmovss  dword ptr [rsp+130h+end+8], xmm2
        vmovss  dword ptr [rsp+130h+start], xmm3
        vmovss  dword ptr [rsp+130h+start+4], xmm0
        vmovss  dword ptr [rsp+130h+end], xmm3
        vmovss  dword ptr [rsp+130h+end+4], xmm0
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds, number, contentmask);
      if ( results.startsolid )
      {
        v21 = vtos(&_RDI->r.currentOrigin);
        v22 = SL_ConvertToString(_RDI->classname);
        Com_Printf(1, "ERROR: FinishSpawningItem - %s startsolid at %s\n", v22, v21);
      }
    }
    EntityHitId = Trace_GetEntityHitId(&results);
    _RDI->s.groundEntityNum = EntityHitId;
    g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
    __asm
    {
      vmovss  xmm5, [rbp+30h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+130h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+130h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+130h+start]
      vmovss  xmm1, dword ptr [rsp+130h+end+4]
      vmovss  dword ptr [rsp+130h+origin], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+130h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+4]
      vmovss  xmm0, dword ptr [rsp+130h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+130h+origin+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+8]
      vcomiss xmm5, xmm7
      vmovaps xmm7, [rsp+130h+var_10]
      vmovss  dword ptr [rsp+130h+origin+8], xmm3
    }
    p_origin = &origin;
    v4 = _RDI;
  }
  else
  {
    p_origin = &_RDI->r.currentOrigin;
  }
  G_SetOrigin(v4, p_origin, 1, 1);
  SV_LinkEntity(_RDI);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_GetClassname
==============
*/
void G_Items_GetClassname(const Weapon *item, gentity_s *ent)
{
  const char *WeaponName; 
  char dest[512]; 
  char output[512]; 

  WeaponName = BG_GetWeaponName(item, output, 0x200u);
  Com_sprintf(dest, 0x200ui64, "weapon_%s", WeaponName);
  G_Utils_SetConstString(&ent->script_classname, dest);
  G_Utils_SetConstString(&ent->classname, dest);
}

/*
==============
G_Items_GetFreeDropCueIdx
==============
*/
__int64 G_Items_GetFreeDropCueIdx(EntHandle *items, const unsigned int maxDroppedItems)
{
  unsigned int v6; 
  EntHandle *v7; 
  unsigned int v9; 
  unsigned int v10; 
  EntHandle *v12; 
  unsigned __int16 number; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v23; 
  int v24; 
  __int64 v26; 
  __int64 v27; 
  gentity_s *v45; 
  __int64 result; 
  __int64 v51; 
  __int64 v52; 

  __asm { vmovaps [rsp+0D8h+var_58], xmm7 }
  v6 = maxDroppedItems;
  v7 = items;
  if ( !items )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1136, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
      __debugbreak();
    v7 = NULL;
  }
  __asm { vmovss  xmm7, cs:__real@bf800000 }
  v9 = 0;
  v10 = -1;
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps [rsp+0D8h+var_68], xmm8
    vmovaps [rsp+0D8h+var_78], xmm9
  }
  if ( v6 )
  {
    __asm { vmovss  xmm8, cs:__real@7f7fffff }
    v12 = v7;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      number = v12->number;
      if ( !v12->number )
        goto LABEL_65;
      v15 = number;
      v16 = number - 1;
      if ( v16 >= 0x800 )
      {
        LODWORD(v52) = 2048;
        LODWORD(v51) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v17 = v15 - 1;
      if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v17] )
      {
        LODWORD(v52) = v12->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v52) )
          __debugbreak();
      }
      v18 = v12->number;
      if ( !v12->number )
      {
LABEL_65:
        result = v9;
        goto LABEL_64;
      }
      if ( (unsigned int)v18 - 1 >= 0x7FF )
      {
        LODWORD(v52) = 2047;
        LODWORD(v51) = v18 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      v19 = v12->number;
      if ( (unsigned int)(v19 - 1) >= 0x800 )
      {
        LODWORD(v52) = 2048;
        LODWORD(v51) = v19 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v20 = v19 - 1;
      if ( g_entities[v20].r.isInUse != g_entityIsInUse[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v20] )
      {
        LODWORD(v52) = v12->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v52) )
          __debugbreak();
      }
      _R14 = g_entities;
      _RBP = v12->number;
      if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&g_entities[_RBP - 1].flags, ACTIVE, 0x10u) )
      {
        LODWORD(v23) = _R14[_RBP - 1].c.item[0].weapon.weaponIdx;
        if ( (unsigned int)v23 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v52) = bg_lastParsedWeaponIndex;
          LODWORD(v51) = _R14[_RBP - 1].c.item[0].weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v51, v52) )
            __debugbreak();
        }
        v23 = (unsigned __int16)v23;
        if ( !bg_weaponDefs[(unsigned __int16)v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        if ( !bg_weaponDefs[v23]->avoidDropCleanup )
        {
          v24 = 0;
          __asm { vmovaps xmm6, xmm8 }
          if ( level.maxclients > 0 )
          {
            v26 = 0i64;
            v27 = 0i64;
            do
            {
              if ( level.clients[v27].sess.connected == CON_CONNECTED && level.clients[v27].sess.sessionState == SESS_STATE_PLAYING && G_IsEntityInUse(v24) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [r14+rbp-480h]
                  vmovss  xmm1, dword ptr [r14+rbp-47Ch]
                  vsubss  xmm3, xmm0, dword ptr [rsi+rax+130h]
                  vsubss  xmm2, xmm1, dword ptr [rsi+rax+134h]
                  vmovss  xmm0, dword ptr [r14+rbp-478h]
                  vsubss  xmm4, xmm0, dword ptr [rsi+rax+138h]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vminss  xmm6, xmm2, xmm6
                }
              }
              ++v24;
              ++v27;
              v26 += 1456i64;
            }
            while ( v24 < level.maxclients );
            v6 = maxDroppedItems;
          }
          if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
            __debugbreak();
          _EAX = level.time - level.frameDuration;
          __asm
          {
            vmovd   xmm1, dword ptr [r14+rbp-194h]
            vmovd   xmm0, eax
            vpcmpgtd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm6, xmm2
            vcomiss xmm0, xmm7
          }
          if ( level.time > (unsigned int)level.frameDuration )
          {
            __asm { vmovaps xmm7, xmm0 }
            v10 = v9;
          }
        }
      }
      ++v9;
      ++v12;
    }
    while ( v9 < v6 );
    if ( v10 != -1 )
      goto LABEL_60;
  }
  Com_PrintWarning(16, "Could not find a suitable weapon entity to free out of %i possible.  Using index zero.\n", v6);
  v10 = 0;
LABEL_60:
  v45 = EntHandle::ent(&items[v10]);
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1187, ASSERT_TYPE_ASSERT, "( freeItemEnt )", (const char *)&queryFormat, "freeItemEnt") )
    __debugbreak();
  G_FreeEntity(v45);
  EntHandle::setEnt(&items[v10], NULL);
  result = v10;
LABEL_64:
  __asm
  {
    vmovaps xmm9, [rsp+0D8h+var_78]
    vmovaps xmm8, [rsp+0D8h+var_68]
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
  return result;
}

/*
==============
G_Items_GetNeededStartAmmo
==============
*/
__int64 G_Items_GetNeededStartAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  int AmmoNotInClip; 
  bool v9; 
  GWeaponMap *Instance; 
  int v14; 
  BgWeaponHandle *weaponsEquipped; 
  int started; 
  int v24; 
  int AmmoInClip; 
  int v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  bool HasPerk; 
  BgWeaponMap *weaponMap; 
  AmmoStore v32; 
  Weapon Buf1; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 895, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( isAlternate && !BG_HasUnderbarrelAmmo(weapon) )
    return 0i64;
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, weapon, isAlternate);
  HasPerk = BG_HasPerk(&ps->perks, 7u);
  v9 = HasPerk;
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+198h+r_ammo2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+198h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
  }
  Instance = GWeaponMap::GetInstance();
  weaponMap = Instance;
  v14 = 0;
  weaponsEquipped = ps->weaponsEquipped;
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v14 >= 0xF )
    {
      LODWORD(v29) = 15;
      LODWORD(v28) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    _RAX = BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups [rsp+198h+Buf1], ymm2
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups [rsp+198h+var_E8], xmm0
      vmovsd  xmm1, qword ptr [rax+30h]
      vmovsd  [rsp+198h+var_D8], xmm1
    }
    *(_DWORD *)&Buf1.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm { vmovd   eax, xmm2 }
    if ( (_WORD)_RAX && memcmp_0(&Buf1, weapon, 0x3Cui64) && (!isAlternate || BG_HasUnderbarrelAmmo(&Buf1)) )
    {
      _RAX = BG_AmmoStoreForWeapon(&v32, &Buf1, isAlternate);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+198h+result.weapon.weaponIdx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+198h+result.weapon.attachmentVariationIndices+5], ymm1
      }
      if ( BG_IsAmmoCompatible(&result, &r_ammo2) )
      {
        started = BG_StartAmmo(&Buf1, isAlternate, v9);
        v24 = started - BG_GetAmmoInClip(ps, &Buf1, isAlternate, WEAPON_HAND_DEFAULT);
        if ( BG_PlayerDualWieldingWeapon(weaponMap, ps, &Buf1) )
          v24 += started - BG_GetAmmoInClip(ps, &Buf1, isAlternate, WEAPON_HAND_LEFT);
        Instance = (GWeaponMap *)weaponMap;
        AmmoNotInClip -= v24;
        v9 = HasPerk;
      }
    }
    ++v14;
    ++weaponsEquipped;
  }
  while ( v14 < 15 );
  AmmoInClip = BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT);
  v26 = 0;
  if ( AmmoNotInClip >= 0 )
    v26 = AmmoNotInClip;
  v27 = v26 + AmmoInClip;
  if ( BG_PlayerDualWieldingWeapon(Instance, ps, weapon) )
    v27 += BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_LEFT);
  return (unsigned int)(BG_StartAmmo(weapon, isAlternate, HasPerk) - v27);
}

/*
==============
G_Items_GetNonClipAmmoToTransferToWeaponEntity
==============
*/
__int64 G_Items_GetNonClipAmmoToTransferToWeaponEntity(const gentity_s *player, const Weapon *transferWeapon, bool isAlternate)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  int AmmoPlayerMax; 
  int AmmoNotInClip; 
  bool v9; 
  unsigned int v10; 
  __int64 result; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(player);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1620, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  AmmoPlayerMax = BG_GetAmmoPlayerMax(Instance, EntityPlayerStateConst, transferWeapon, isAlternate, transferWeapon);
  AmmoNotInClip = BG_GetAmmoNotInClip(EntityPlayerStateConst, transferWeapon, isAlternate);
  v9 = AmmoNotInClip - AmmoPlayerMax < 0;
  v10 = AmmoNotInClip - AmmoPlayerMax;
  result = 0i64;
  if ( !v9 )
    return v10;
  return result;
}

/*
==============
G_Items_GetPrimaryWeaponToDrop
==============
*/
Weapon *G_Items_GetPrimaryWeaponToDrop(const playerState_s *ps, const Weapon *pickedUpWeapon)
{
  WeaponSlot Slot; 
  GWeaponMap *Instance; 
  GWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  Weapon *v7; 
  Weapon *v8; 
  const WeaponDef *v9; 
  GWeaponMap *v10; 
  unsigned __int16 weaponIdx; 
  WeaponSlot EquippedSlot; 
  bool v13; 
  bool v14; 
  int v16; 
  const Weapon *Weapon; 
  const Weapon *v18; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  const PlayerEquippedWeaponState *v20; 
  const WeaponDef *v21; 
  WeaponSlot v22; 

  Slot = BG_PlayerWeaponGetSlot(pickedUpWeapon);
  v22 = Slot;
  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 169, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, ps);
  v7 = (Weapon *)CurrentWeaponForPlayer;
  v8 = &NULL_WEAPON;
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return v8;
  v9 = BG_WeaponDef(CurrentWeaponForPlayer, 0);
  if ( v9->inventoryType == WEAPINVENTORY_ALTMODE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 179, ASSERT_TYPE_ASSERT, "( weapDef->inventoryType != WEAPINVENTORY_ALTMODE )", (const char *)&queryFormat, "weapDef->inventoryType != WEAPINVENTORY_ALTMODE") )
    __debugbreak();
  v10 = GWeaponMap::GetInstance();
  if ( !BG_PlayerHasWeapon(v10, ps, v7) || v9->inventoryType )
  {
    weaponIdx = NULL_WEAPON.weaponIdx;
    v7 = &NULL_WEAPON;
  }
  else
  {
    weaponIdx = v7->weaponIdx;
  }
  if ( !weaponIdx )
    return v8;
  EquippedSlot = BG_PlayerWeaponGetEquippedSlot(Instance, ps, v7);
  v13 = Slot == EquippedSlot;
  if ( Slot == EquippedSlot )
  {
    v14 = BG_UsingAlternate(ps);
    if ( BG_WeaponIsPrefferedDrop(v7, v14) )
      return v7;
  }
  v16 = 0;
  if ( !v13 )
    v7 = NULL;
  while ( 1 )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, ps->weaponsEquipped[v16]);
    v18 = Weapon;
    if ( !Weapon->weaponIdx )
      goto LABEL_34;
    EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, ps, Weapon);
    v20 = EquippedWeaponStateConst;
    if ( !EquippedWeaponStateConst )
      goto LABEL_34;
    v21 = BG_WeaponDef(v18, EquippedWeaponStateConst->inAltMode);
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 229, ASSERT_TYPE_ASSERT, "(equippedWeaponDef)", (const char *)&queryFormat, "equippedWeaponDef") )
      __debugbreak();
    if ( v21->inventoryType || v20->slot != v22 )
      goto LABEL_34;
    if ( BG_WeaponIsPrefferedDrop(v18, v20->inAltMode) )
      break;
    if ( !v7 )
      v7 = (Weapon *)v18;
LABEL_34:
    if ( (unsigned int)++v16 >= 0xF )
      goto LABEL_37;
  }
  v7 = (Weapon *)v18;
LABEL_37:
  if ( v7 )
    return v7;
  return v8;
}

/*
==============
G_Items_GetStateFromTag
==============
*/
void G_Items_GetStateFromTag(const gentity_s *droppingEnt, scr_string_t tag, const gentity_s *droppedEnt, tmat43_t<vec3_t> *matrix, const bool canSkipTraceToTag)
{
  const dvar_t *v9; 
  int v16; 
  Bounds *p_box; 
  int fmt; 
  int contentmask; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  _RDI = matrix;
  _RBX = droppingEnt;
  if ( !droppingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1512, ASSERT_TYPE_ASSERT, "( droppingEnt )", (const char *)&queryFormat, "droppingEnt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_GetStateFromTag");
  if ( tag && G_Utils_DObjGetWorldTagMatrix(_RBX, tag, _RDI) )
  {
    if ( !canSkipTraceToTag )
      goto LABEL_11;
    v9 = DCONST_DVARBOOL_g_dropWeaponLaunchTrace;
    if ( !DCONST_DVARBOOL_g_dropWeaponLaunchTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponLaunchTrace") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
LABEL_11:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+100h]
        vmovss  xmm1, dword ptr [rbx+104h]
        vmovss  xmm2, dword ptr [rbx+108h]
        vaddss  xmm0, xmm0, dword ptr [rbx+130h]
        vmovss  dword ptr [rsp+108h+start], xmm0
        vaddss  xmm1, xmm1, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+108h+start+4], xmm1
        vaddss  xmm0, xmm2, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+108h+start+8], xmm0
      }
      if ( droppedEnt )
      {
        v16 = G_Items_ClipMask(droppedEnt);
        p_box = &droppedEnt->r.box;
        contentmask = v16;
        fmt = _RBX->s.number;
      }
      else
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
          vmovups xmmword ptr [rsp+108h+bounds.midPoint], xmm0
          vmovss  xmm1, cs:__real@3f800000
          vmovss  dword ptr [rsp+108h+bounds.halfSize+4], xmm1
          vmovss  dword ptr [rsp+108h+bounds.halfSize+8], xmm1
        }
        contentmask = 1169;
        fmt = _RBX->s.number;
        p_box = &bounds;
      }
      _RDI = &_RDI->m[3];
      G_Main_TraceCapsule(&results, &start, _RDI, p_box, fmt, contentmask);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, dword ptr [rsp+108h+start]
        vmovss  xmm3, [rsp+108h+results.fraction]
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm1, xmm0, dword ptr [rsp+108h+start]
        vmovss  dword ptr [rdi], xmm1
        vmovss  xmm0, dword ptr [rdi+4]
        vsubss  xmm0, xmm0, dword ptr [rsp+108h+start+4]
        vmulss  xmm1, xmm0, xmm3
        vaddss  xmm2, xmm1, dword ptr [rsp+108h+start+4]
        vmovss  dword ptr [rdi+4], xmm2
        vmovss  xmm0, dword ptr [rdi+8]
        vsubss  xmm0, xmm0, dword ptr [rsp+108h+start+8]
        vmulss  xmm1, xmm0, xmm3
        vaddss  xmm2, xmm1, dword ptr [rsp+108h+start+8]
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
  }
  else
  {
    _RDI->m[3].v[0] = _RBX->r.currentOrigin.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+134h]
      vmovss  dword ptr [rdi+28h], xmm0
      vmovss  xmm1, dword ptr [rbx+138h]
      vmovss  dword ptr [rdi+2Ch], xmm1
      vaddss  xmm0, xmm1, dword ptr [rbx+114h]
      vmovss  dword ptr [rdi+2Ch], xmm0
    }
    AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)_RDI);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_GetTunnelTraceOffset
==============
*/
void G_Items_GetTunnelTraceOffset(const gentity_s *ent, const vec3_t *angles, const WeaponDef *weapDef, vec3_t *outRotatedOffset, vec3_t *outRotatedHalfSize)
{
  const DObj *ServerDObjForEnt; 
  tmat33_t<vec3_t> axis; 
  Bounds bounds; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RSI = outRotatedHalfSize;
  _R14 = (Bounds *)outRotatedOffset;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 266, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 267, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
  {
    DObjGetVisibleBounds(ServerDObjForEnt, &bounds);
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+4Fh+bounds.midPoint]
      vmovss  xmm10, dword ptr [rbp+4Fh+bounds.midPoint+4]
      vmovss  xmm11, dword ptr [rbp+4Fh+bounds.midPoint+8]
      vmovss  xmm7, dword ptr [rbp+4Fh+bounds.halfSize]
      vmovss  xmm8, dword ptr [rbp+4Fh+bounds.halfSize+4]
      vmovss  xmm9, dword ptr [rbp+4Fh+bounds.halfSize+8]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm11, xmm11, xmm11
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
    }
  }
  AnglesToAxis(angles, &axis);
  if ( &bounds == _R14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulss  xmm3, xmm10, dword ptr [rsp+110h+axis+0Ch]
    vmulss  xmm2, xmm6, dword ptr [rsp+110h+axis]
    vmulss  xmm1, xmm11, dword ptr [rbp+4Fh+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm10, dword ptr [rsp+110h+axis+10h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm11, dword ptr [rbp+4Fh+axis+1Ch]
    vmovss  dword ptr [r14], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+110h+axis+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm10, dword ptr [rbp+4Fh+axis+14h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm11, dword ptr [rbp+4Fh+axis+20h]
    vmovss  dword ptr [r14+4], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+110h+axis+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [r14+8], xmm2
  }
  if ( &bounds == (Bounds *)outRotatedHalfSize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm3, xmm8, dword ptr [rsp+110h+axis+0Ch]
    vmulss  xmm2, xmm7, dword ptr [rsp+110h+axis]
    vmulss  xmm1, xmm9, dword ptr [rbp+4Fh+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm8, dword ptr [rsp+110h+axis+10h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+4Fh+axis+1Ch]
    vandps  xmm2, xmm2, xmm5
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+110h+axis+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm8, dword ptr [rbp+4Fh+axis+14h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbp+4Fh+axis+20h]
    vandps  xmm2, xmm2, xmm5
    vmovss  dword ptr [rsi+4], xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+110h+axis+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, xmm5
    vmovss  dword ptr [rsi+8], xmm2
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
G_Items_InitializeAmmo
==============
*/
void G_Items_InitializeAmmo(playerState_s *ps, const Weapon *weapon, const bool isAlternate, int hadWeapon)
{
  bool HasUnderbarrelAmmo; 
  bool v9; 
  bool v10; 
  bool v11; 
  int NeededStartAmmo; 
  PlayerHandIndex v13; 
  int v14; 
  bool v15; 
  GWeaponMap *Instance; 
  PlayerHandIndex v17; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 946, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  HasUnderbarrelAmmo = BG_HasUnderbarrelAmmo(weapon);
  v9 = BG_AltSharesAmmo(weapon);
  v10 = v9;
  v11 = HasUnderbarrelAmmo && v9;
  NeededStartAmmo = G_Items_GetNeededStartAmmo(ps, weapon, v11);
  v13 = WEAPON_HAND_DEFAULT;
  if ( NeededStartAmmo > 0 )
    G_Items_AddAmmo(ps, weapon, v11, NeededStartAmmo, 0);
  if ( HasUnderbarrelAmmo && !v10 )
  {
    v14 = G_Items_GetNeededStartAmmo(ps, weapon, 1);
    if ( v14 > 0 )
      G_Items_AddAmmo(ps, weapon, 1, v14, 0);
  }
  if ( !hadWeapon )
  {
    if ( !HasUnderbarrelAmmo || v10 )
    {
      v15 = isAlternate;
    }
    else
    {
      G_Items_FillClip(ps, weapon, 0);
      v15 = 1;
    }
    G_Items_FillClip(ps, weapon, v15);
  }
  Instance = GWeaponMap::GetInstance();
  v17 = BG_PlayerDualWieldingWeapon(Instance, ps, weapon) != 0;
  do
  {
    PM_WeaponRechamberAmmo(ps, weapon, 0, v13);
    if ( HasUnderbarrelAmmo && !v10 )
      PM_WeaponRechamberAmmo(ps, weapon, 1, v13);
    ++v13;
  }
  while ( v13 <= v17 );
}

/*
==============
G_Items_IsEntForceFall
==============
*/
bool G_Items_IsEntForceFall(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2391, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, GameModeFlagValues::ms_spValue, 0x23u);
}

/*
==============
G_Items_Launch
==============
*/
gentity_s *G_Items_Launch(gentity_s *ownerEnt, const Weapon *item, const bool isEquipment, bool doPhysicsOnInit)
{
  const dvar_t *v8; 
  unsigned int unsignedInt; 
  EntHandle *v10; 
  const dvar_t *v11; 
  unsigned int v12; 
  GWeaponMap *Instance; 
  const char *WeaponName; 
  const WeaponDef *v18; 
  char *v19; 
  GItems *v20; 
  const dvar_t *v21; 
  DObj *ServerDObjForEnt; 
  DObj *v23; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  char dest[512]; 
  char output[512]; 
  char v31[1032]; 

  _RSI = item;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_Launch");
  _RDI = G_Utils_SpawnEntity();
  if ( isEquipment )
  {
    v8 = DCONST_DVARINT_g_maxDroppedEquipment;
    if ( !DCONST_DVARINT_g_maxDroppedEquipment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_maxDroppedEquipment") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    unsignedInt = v8->current.unsignedInt;
    if ( unsignedInt - 1 > 7 )
    {
      LODWORD(v26) = 1;
      LODWORD(v25) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1329, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxDroppedEquipment ) && ( maxDroppedEquipment ) <= ( 8 )", "maxDroppedEquipment not in [1, MAX_DROPPED_EQUIPMENT]\n\t%i not in [%i, %i]", v25, v26, 8) )
        __debugbreak();
    }
    v10 = &level.droppedEquipmentCue[(int)G_Items_GetFreeDropCueIdx(level.droppedEquipmentCue, unsignedInt)];
  }
  else
  {
    v11 = DCONST_DVARMPSPINT_g_maxDroppedWeapons;
    if ( !DCONST_DVARMPSPINT_g_maxDroppedWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_maxDroppedWeapons") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.unsignedInt;
    if ( v12 - 1 > 0x1F )
    {
      LODWORD(v26) = 1;
      LODWORD(v25) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1338, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxDroppedWeapon ) && ( maxDroppedWeapon ) <= ( ((32 >= 16) ? 32 : 16) )", "maxDroppedWeapon not in [1, MAX_DROPPED_WEAPONS]\n\t%i not in [%i, %i]", v25, v26, 32) )
        __debugbreak();
    }
    v10 = &level.droppedWeaponCue[(int)G_Items_GetFreeDropCueIdx(level.droppedWeaponCue, v12)];
  }
  EntHandle::setEnt(v10, _RDI);
  _RDI->s.eType = ET_ITEM;
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &_RDI->s, _RSI);
  _RDI->s.inAltWeaponMode = 0;
  WeaponName = BG_GetWeaponName(_RSI, output, 0x200u);
  Com_sprintf(dest, 0x200ui64, "weapon_%s", WeaponName);
  G_Utils_SetConstString(&_RDI->script_classname, dest);
  G_Utils_SetConstString(&_RDI->classname, dest);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rdi+1CCh], ymm0
    vmovups xmm1, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rdi+1ECh], xmm1
    vmovsd  xmm0, qword ptr [rsi+30h]
    vmovsd  qword ptr [rdi+1FCh], xmm0
  }
  _RDI->c.mover.angle.pos1.v[2] = *(float *)&_RSI->weaponCamo;
  *(_QWORD *)_RDI->r.box.midPoint.v = 0i64;
  _RDI->r.box.midPoint.v[2] = 0.0;
  _RDI->r.box.halfSize.v[0] = 1.0;
  _RDI->r.box.halfSize.v[1] = 1.0;
  _RDI->r.box.halfSize.v[2] = 1.0;
  G_PlayerUse_SetEntityUsable(_RDI, 1);
  if ( (unsigned __int16)(_RSI->weaponIdx - 1) > 0x224u )
  {
    LODWORD(v27) = 549;
    LODWORD(v26) = 1;
    LODWORD(v25) = _RSI->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1357, ASSERT_TYPE_ASSERT, "( 1 ) <= ( item.weaponIdx ) && ( item.weaponIdx ) <= ( (550 - 1) )", "item.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v25, v26, v27) )
      __debugbreak();
  }
  v18 = BG_WeaponDef(_RSI, 0);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1359, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( isEquipment && BG_WeaponHasStreamedModelsErrorCheck(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1361, ASSERT_TYPE_ASSERT, "(!isEquipment || !BG_WeaponHasStreamedModelsErrorCheck( item ))", "%s\n\tTransient equipment weapon models are not supported. They are not accounted for in the streaming limits.", "!isEquipment || !BG_WeaponHasStreamedModelsErrorCheck( item )") )
    __debugbreak();
  if ( !v18->worldModel )
  {
    v19 = BG_GetWeaponName(_RSI, v31, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC200, 1128i64, (unsigned int)_RDI->s.number, v19);
  }
  _RDI->handler = 20;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v20 = GItems::ms_gItemsSystem;
  GItems::ms_gItemsSystem->SetEntModel(GItems::ms_gItemsSystem, _RDI, v18->worldModel);
  v20->SaveRiotShieldHealthFromOwner(v20, ownerEnt, _RDI, _RSI);
  v20->RestrictPickupForOwner(v20, ownerEnt, _RDI);
  _RDI->flags = 0i64;
  _RDI->flags.m_flags[0] |= 0x200u;
  if ( !doPhysicsOnInit )
  {
    v21 = DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit;
    if ( !DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponLaunchCanDisablePhysicsOnInit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
      _RDI->flags.m_flags[1] |= 1u;
  }
  G_DObjUpdate(_RDI, 1);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagInternal(&_RDI->flags, ACTIVE, 0x20u);
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
  v23 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, _RSI, 0, 0);
    BG_UpdatedWeaponBones(_RSI, v23, 0);
  }
  Sys_ProfEndNamedEvent();
  return _RDI;
}

/*
==============
G_Items_RunItem
==============
*/
void G_Items_RunItem(gentity_s *ent)
{
  G_PhysicsObject *v8; 
  __int16 groundEntityNum; 
  trType_t trType; 
  int FrameDuration; 
  int v28; 
  int contentmask; 
  __int16 number; 
  bool IsEntForceFall; 
  char v45; 
  const dvar_t *v74; 
  __int16 EntityIndex; 
  int IsEntityInUse; 
  GTrajectory v97; 
  trace_t results; 
  vec3_t angles; 
  vec3_t outPos; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 

  __asm { vmovaps [rsp+1D0h+var_60], xmm9 }
  _RBX = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_RunItem");
  if ( GMovingPlatformEntityTracking::UpdatePlatformTracking(&_RBX->movingPlatformTrack, _RBX) )
    goto LABEL_8;
  v8 = G_PhysicsObject_Get(_RBX);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2420, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v8->physicsInstances[0] == -1 || _RBX->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH )
  {
LABEL_8:
    groundEntityNum = _RBX->s.groundEntityNum;
    if ( groundEntityNum == 2047 || level.gentities[groundEntityNum].s.lerp.pos.trType || G_Items_IsEntForceFall(_RBX) )
    {
      trType = _RBX->s.lerp.pos.trType;
      if ( trType != TR_GRAVITY && (unsigned int)(trType - 24) > 1 && (BG_IsCorpseEntity(&_RBX->s) || (_RBX->spawnflags & 1) == 0) )
      {
        _RBX->s.lerp.pos.trType = TR_GRAVITY;
        _RBX->s.lerp.pos.trTime = level.time;
        Trajectory_SetTrBase(&_RBX->s.lerp.pos, &_RBX->r.currentOrigin);
        *(_QWORD *)_RBX->s.lerp.pos.trDelta.v = 0i64;
        _RBX->s.lerp.pos.trDelta.v[2] = 0.0;
      }
    }
    _RSI = &_RBX->s.lerp.pos;
    if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RSI->trType == TR_LINEAR_STOP_SECURE )
    {
      *(_QWORD *)angles.v = &v102;
      v104 = LODWORD(_RBX->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Z ^ LODWORD(_RBX->s.lerp.pos.trBase.v[2]);
      v103 = LODWORD(_RBX->s.lerp.pos.trBase.v[0]) ^ LODWORD(_RBX->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
      v102 = LODWORD(_RBX->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
      __asm { vmovss  xmm0, [rbp+0D0h+var_E0] }
      memset(&angles, 0, 8ui64);
      __asm { vmovss  dword ptr [rbp+0D0h+angles], xmm0 }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_66;
      __asm
      {
        vmovss  xmm0, [rbp+0D0h+var_DC]
        vmovss  dword ptr [rbp+0D0h+angles], xmm0
      }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_66;
      __asm
      {
        vmovss  xmm0, [rbp+0D0h+var_D8]
        vmovss  dword ptr [rbp+0D0h+angles], xmm0
      }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_66:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  xmm1, dword ptr [rsi+10h]
        vmovss  [rbp+0D0h+var_E0], xmm0
        vmovss  xmm0, dword ptr [rsi+14h]
        vmovss  [rbp+0D0h+var_D8], xmm0
        vmovss  [rbp+0D0h+var_DC], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+var_E0]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+var_DC]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+var_D8]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_67:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2454, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rbp+0D0h+angles], xmm0
    }
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_68:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2457, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ent->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ent->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
    if ( _RSI->trType == TR_STATIONARY || _RBX->tagInfo )
    {
      G_Main_RunThink(_RBX);
    }
    else
    {
      __asm { vmovaps [rsp+1D0h+var_40], xmm7 }
      GTrajectory::GTrajectory(&v97, _RBX);
      FrameDuration = G_Level_GetFrameDuration();
      BgTrajectory::EvaluatePosTrajectory(&v97, level.time + FrameDuration, &outPos);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0D0h+outPos]
        vmovss  dword ptr [rbp+0D0h+angles], xmm0
      }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_69;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0D0h+outPos+4]
        vmovss  dword ptr [rbp+0D0h+angles], xmm0
      }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_69;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0D0h+outPos+8]
        vmovss  dword ptr [rbp+0D0h+angles], xmm0
      }
      if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_69:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2471, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
          __debugbreak();
      }
      v28 = G_Items_ClipMask(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0D0h+outPos]
        vmovss  xmm1, dword ptr [rbp+0D0h+outPos+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rbx+130h]
        vmovss  xmm5, dword ptr [rbp+0D0h+outPos+8]
        vsubss  xmm3, xmm5, dword ptr [rbx+138h]
        vmulss  xmm1, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, cs:__real@3dcccccd
      }
      contentmask = v28;
      if ( v45 )
      {
        __asm
        {
          vaddss  xmm0, xmm5, cs:__real@bf800000
          vmovss  dword ptr [rbp+0D0h+outPos+8], xmm0
        }
      }
      if ( EntHandle::isDefined(&_RBX->r.ownerNum) )
        number = EntHandle::entnum(&_RBX->r.ownerNum);
      else
        number = _RBX->s.number;
      G_Main_TraceCapsule(&results, &_RBX->r.currentOrigin, &outPos, &_RBX->r.box, number, contentmask);
      IsEntForceFall = G_Items_IsEntForceFall(_RBX);
      __asm { vmovss  xmm7, cs:__real@3f800000 }
      v45 = 0;
      if ( IsEntForceFall )
      {
        LOWORD(_EAX) = Trace_GetEntityHitId(&results);
        __asm { vmovss  xmm2, [rsp+1D0h+results.fraction] }
        _EAX = (unsigned __int16)_EAX;
        _ECX = 2046;
        __asm
        {
          vmovd   xmm0, eax
          vmovd   xmm1, ecx
          vpcmpeqd xmm3, xmm0, xmm1
          vblendvps xmm0, xmm7, xmm2, xmm3
          vmovss  [rsp+1D0h+results.fraction], xmm0
        }
      }
      __asm
      {
        vmovss  xmm3, [rsp+1D0h+results.fraction]
        vcomiss xmm3, xmm7
        vmovss  xmm9, cs:__real@3c23d70a
      }
      if ( v45 )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+130h]
          vmovss  xmm5, dword ptr [rbx+134h]
          vmovaps [rsp+1D0h+var_70], xmm10
          vmovss  xmm10, dword ptr [rbx+138h]
          vmovaps [rsp+1D0h+var_80], xmm11
          vmovss  xmm11, dword ptr [rbp+0D0h+outPos]
          vsubss  xmm0, xmm11, xmm4
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm2, xmm1, xmm4
          vmovaps [rsp+1D0h+var_90], xmm12
          vmovss  xmm12, dword ptr [rbp+0D0h+outPos+4]
          vsubss  xmm0, xmm12, xmm5
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+0D0h+start], xmm2
          vaddss  xmm2, xmm1, xmm5
          vmovaps [rsp+1D0h+var_A0], xmm13
          vmovss  xmm13, dword ptr [rbp+0D0h+outPos+8]
          vsubss  xmm0, xmm13, xmm10
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+0D0h+start+4], xmm2
          vaddss  xmm2, xmm1, xmm10
          vmovss  dword ptr [rbp+0D0h+start+8], xmm2
        }
        if ( !results.startsolid )
          __asm { vcomiss xmm3, xmm9 }
        __asm
        {
          vmovaps xmm13, [rsp+1D0h+var_A0]
          vmovaps xmm12, [rsp+1D0h+var_90]
          vmovaps xmm11, [rsp+1D0h+var_80]
          vmovaps xmm10, [rsp+1D0h+var_70]
        }
        _RSI->trType = TR_LINEAR_STOP;
        _RBX->s.lerp.pos.trTime = level.time;
        v74 = DCONST_DVARINT_g_itemMaxExtrapolationTime;
        if ( !DCONST_DVARINT_g_itemMaxExtrapolationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_itemMaxExtrapolationTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v74);
        _RBX->s.lerp.pos.trDuration = v74->current.integer;
        Trajectory_SetTrBase(&_RBX->s.lerp.pos, &_RBX->r.currentOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+start]
          vsubss  xmm1, xmm0, dword ptr [rbx+130h]
          vmovss  xmm2, dword ptr [rbp+0D0h+start+4]
          vmovss  dword ptr [rbx+28h], xmm1
          vsubss  xmm0, xmm2, dword ptr [rbx+134h]
          vmovss  xmm1, dword ptr [rbp+0D0h+start+8]
          vmovss  dword ptr [rbx+2Ch], xmm0
          vsubss  xmm2, xmm1, dword ptr [rbx+138h]
          vmovss  dword ptr [rbx+30h], xmm2
        }
        G_Level_GetFrameDuration();
        __asm
        {
          vmovss  xmm0, cs:__real@447a0000
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vdivss  xmm2, xmm0, xmm1
          vmulss  xmm1, xmm2, dword ptr [rbx+28h]
          vmovss  dword ptr [rbx+28h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+2Ch]
          vmovss  dword ptr [rbx+2Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+30h]
          vmovss  dword ptr [rbx+30h], xmm1
        }
        if ( G_Items_IsEntForceFall(_RBX) )
        {
          GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagInternal(&_RBX->flags, GameModeFlagValues::ms_spValue, 0x23u);
          EntHandle::setEnt(&_RBX->movingPlatformTrack.m_trackEnt, NULL);
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+start]
          vmovss  xmm1, dword ptr [rbp+0D0h+start+4]
          vmovss  dword ptr [rbx+130h], xmm0
          vmovss  xmm0, dword ptr [rbp+0D0h+start+8]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+outPos]
          vmovss  xmm1, dword ptr [rbp+0D0h+outPos+4]
          vmovss  dword ptr [rbx+130h], xmm0
          vmovss  xmm0, dword ptr [rbp+0D0h+outPos+8]
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+138h], xmm0
        vmovss  dword ptr [rbx+134h], xmm1
      }
      SV_LinkEntity(_RBX);
      G_Main_RunThink(_RBX);
      EntityIndex = G_GetEntityIndex(_RBX);
      IsEntityInUse = G_IsEntityInUse(EntityIndex);
      __asm { vmovaps xmm7, [rsp+1D0h+var_40] }
      if ( IsEntityInUse )
      {
        __asm
        {
          vmovss  xmm0, [rsp+1D0h+results.fraction]
          vcomiss xmm0, xmm9
        }
      }
    }
  }
  else
  {
    SV_LinkEntity(_RBX);
    G_Main_RunThink(_RBX);
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm9, [rsp+1D0h+var_60] }
}

/*
==============
G_Items_SetDefaultState
==============
*/
void G_Items_SetDefaultState(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  int v16; 
  int v17; 
  int v18; 
  vec3_t forward; 
  vec3_t angle; 
  vec3_t origin; 
  vec3_t angles; 

  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  _RDI = droppedEnt;
  _RBX = droppingEnt;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_SetDefaultState");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+98h+origin], xmm0
    vmovss  xmm0, dword ptr [rbx+114h]
    vaddss  xmm2, xmm0, dword ptr [rbx+138h]
    vmovss  xmm0, dword ptr [rbx+140h]
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+98h+angle+4], xmm0
    vmovss  dword ptr [rsp+98h+origin+4], xmm1
    vmovss  dword ptr [rsp+98h+origin+8], xmm2
    vmovss  dword ptr [rsp+98h+angle], xmm6
    vmovss  dword ptr [rsp+98h+angle+8], xmm6
  }
  G_SetOriginAndAngle(_RDI, &origin, &angle, 1, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  dword ptr [rsp+98h+angles+4], xmm0
    vmovss  dword ptr [rsp+98h+angles], xmm6
    vmovss  dword ptr [rsp+98h+angles+8], xmm6
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->UpdateDefaultVelocity(GItems::ms_gItemsSystem, &forward);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+98h+forward]
    vmovss  xmm0, dword ptr [rsp+98h+forward+4]
    vmovss  xmm1, dword ptr [rsp+98h+forward+8]
    vmovss  [rsp+98h+var_68], xmm2
    vmovss  dword ptr [rdi+2Ch], xmm0
    vmovss  dword ptr [rdi+30h], xmm1
    vmovss  dword ptr [rdi+28h], xmm2
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+98h+var_68], xmm0 }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+98h+var_68], xmm1 }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  _RDI->s.lerp.pos.trType = TR_GRAVITY;
  _RDI->s.lerp.pos.trTime = level.time;
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_18] }
}

/*
==============
G_Items_SetDefaultVelocity
==============
*/
void G_Items_SetDefaultVelocity(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  int v9; 
  int v10; 
  int v11; 
  vec3_t forward; 
  vec3_t angles; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+140h]
    vxorps  xmm1, xmm1, xmm1
  }
  _RBX = droppedEnt;
  __asm
  {
    vmovss  dword ptr [rsp+68h+angles+4], xmm0
    vmovss  dword ptr [rsp+68h+angles], xmm1
    vmovss  dword ptr [rsp+68h+angles+8], xmm1
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->UpdateDefaultVelocity(GItems::ms_gItemsSystem, &forward);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+68h+forward]
    vmovss  xmm0, dword ptr [rsp+68h+forward+4]
    vmovss  xmm1, dword ptr [rsp+68h+forward+8]
    vmovss  [rsp+68h+var_38], xmm2
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  dword ptr [rbx+30h], xmm1
    vmovss  dword ptr [rbx+28h], xmm2
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+68h+var_38], xmm0 }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+68h+var_38], xmm1 }
  if ( (v11 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  _RBX->s.lerp.pos.trType = TR_GRAVITY;
  _RBX->s.lerp.pos.trTime = level.time;
}

/*
==============
G_Items_SetItemPhysics
==============
*/
void G_Items_SetItemPhysics(const gentity_s *owner, gentity_s *itemEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  G_PhysicsObject *v16; 
  unsigned int v17; 
  int NumRigidBodys; 
  signed int v19; 
  hknpBodyId *RigidBodyID; 
  __int64 v30; 
  hknpBodyId result; 
  gentity_s *v32; 
  __int64 v33; 
  vec3_t linearVelocity; 
  vec3_t angularVelocity; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  v33 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = itemEnt;
  v32 = itemEnt;
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1566, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1567, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_SetItemPhysics");
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(owner);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1572, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GMovingPlatformEntityTracking::DropItem(&_RBX->movingPlatformTrack, EntityPlayerStateConst) )
  {
    G_Items_EnablePhysics(_RBX);
    __asm
    {
      vmovss  xmm1, cs:__real@3f8ccccd; max
      vmovss  xmm0, cs:__real@3f4ccccd; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rdi+3Ch]
      vmovss  dword ptr [rsp+0E8h+linearVelocity], xmm1
      vmulss  xmm2, xmm0, dword ptr [rdi+40h]
      vmovss  dword ptr [rsp+0E8h+linearVelocity+4], xmm2
      vmulss  xmm0, xmm0, dword ptr [rdi+44h]
      vmovss  dword ptr [rsp+0E8h+linearVelocity+8], xmm0
    }
    *(double *)&_XMM0 = G_crandom();
    __asm { vmulss  xmm8, xmm0, cs:__real@41200000 }
    *(double *)&_XMM0 = G_crandom();
    __asm { vmulss  xmm6, xmm0, cs:__real@41200000 }
    *(double *)&_XMM0 = G_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@41200000
      vmovss  dword ptr [rsp+0E8h+angularVelocity], xmm1
      vmovss  dword ptr [rsp+0E8h+angularVelocity+4], xmm6
      vmovss  dword ptr [rsp+0E8h+angularVelocity+8], xmm8
    }
    v16 = G_PhysicsObject_Get(_RBX);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1480, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
      __debugbreak();
    v17 = v16->physicsInstances[0];
    if ( v17 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v17);
      v19 = 0;
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v30) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v17, v19);
          Physics_SetRigidBodyVelocity(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &linearVelocity, &angularVelocity);
          ++v19;
        }
        while ( v19 < NumRigidBodys );
        _RBX = v32;
      }
      _RBX->s.lerp.pos.trTime = level.time;
      _RBX->s.lerp.apos.trTime = level.time;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+linearVelocity]
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm1, dword ptr [rsp+0E8h+linearVelocity+4]
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+0E8h+linearVelocity+8]
        vmovss  dword ptr [rbx+30h], xmm0
        vmovss  xmm1, dword ptr [rsp+0E8h+angularVelocity]
        vmovss  dword ptr [rbx+4Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+0E8h+angularVelocity+4]
        vmovss  dword ptr [rbx+50h], xmm0
        vmovss  xmm1, dword ptr [rsp+0E8h+angularVelocity+8]
        vmovss  dword ptr [rbx+54h], xmm1
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
  }
}

/*
==============
G_Items_SetPhysicsVelocities
==============
*/
char G_Items_SetPhysicsVelocities(gentity_s *droppedEnt, const vec3_t *velocity, const vec3_t *angularVelocity)
{
  gentity_s *v5; 
  G_PhysicsObject *v6; 
  unsigned int v7; 
  int NumRigidBodys; 
  signed int v10; 
  hknpBodyId *RigidBodyID; 
  __int64 v12; 
  hknpBodyId result; 

  v5 = droppedEnt;
  v6 = G_PhysicsObject_Get(droppedEnt);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1480, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v7 = v6->physicsInstances[0];
  if ( v7 == -1 )
    return 0;
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v7);
  v10 = 0;
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v12) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v12) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v7, v10);
      Physics_SetRigidBodyVelocity(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, velocity, angularVelocity);
      ++v10;
    }
    while ( v10 < NumRigidBodys );
    v5 = droppedEnt;
  }
  v5->s.lerp.pos.trTime = level.time;
  v5->s.lerp.apos.trTime = level.time;
  v5->s.lerp.pos.trDelta.v[0] = velocity->v[0];
  v5->s.lerp.pos.trDelta.v[1] = velocity->v[1];
  v5->s.lerp.pos.trDelta.v[2] = velocity->v[2];
  v5->s.lerp.apos.trDelta.v[0] = angularVelocity->v[0];
  v5->s.lerp.apos.trDelta.v[1] = angularVelocity->v[1];
  v5->s.lerp.apos.trDelta.v[2] = angularVelocity->v[2];
  return 1;
}

/*
==============
G_Items_SetStateFromTag
==============
*/
void G_Items_SetStateFromTag(const gentity_s *droppingEnt, scr_string_t tag, gentity_s *droppedEnt, const bool canSkipTraceToTag)
{
  vec3_t angles; 
  tmat43_t<vec3_t> matrix; 

  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_SetStateFromTag");
  G_Items_GetStateFromTag(droppingEnt, tag, droppedEnt, &matrix, canSkipTraceToTag);
  AxisToAngles((const tmat33_t<vec3_t> *)&matrix, &angles);
  G_SetOriginAndAngle(droppedEnt, &matrix.m[3], &angles, 1, 1);
  droppedEnt->s.lerp.pos.trType = TR_GRAVITY;
  droppedEnt->s.lerp.pos.trTime = level.time;
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_SetupWeapon
==============
*/
void G_Items_SetupWeapon(unsigned int weapIndex)
{
  ComGameModeApplication *ActiveApplication; 
  unsigned __int16 weaponIdx; 
  bool v6; 
  WeaponDef **v7; 
  WeaponDef *v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  const XModel *worldModel; 
  const char *Name; 
  const XModel *projectileModel; 
  const char *v16; 
  const XModel *worldClipModel; 
  const char *v18; 
  unsigned __int16 v19; 
  WeaponDef *v20; 
  XModel *v21; 
  const XModel *defaultWorldModel; 
  const char *szInternalName; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 
  Weapon r_weapon; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  r_weapon.weaponIdx = truncate_cast<unsigned short,unsigned int>(weapIndex);
  ActiveApplication = ComGameModeApplication::GetActiveApplication();
  ActiveApplication->SetupWeaponDefDevGui(ActiveApplication, &r_weapon);
  weaponIdx = r_weapon.weaponIdx;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", r_weapon.weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v6 = bg_weaponDefs[weaponIdx] == NULL;
  v7 = &bg_weaponDefs[weaponIdx];
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v8 = *v7;
  if ( *v8->szUseHintString )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v9 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v8->szUseHintString);
    if ( !v9 )
    {
      v10 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v26) = bg_lastParsedWeaponIndex;
        LODWORD(v25) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, v26) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      Com_PrintError(15, "Could not find or allocate hint string ID for weapon '%s'. See console log for details.\n", bg_weaponCompleteDefs[v10]->szInternalName);
    }
    v8->iUseHintStringIndex = v9;
  }
  if ( *v8->dropHintString )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v11 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v8->dropHintString);
    if ( !v11 )
    {
      v12 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v26) = bg_lastParsedWeaponIndex;
        LODWORD(v25) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, v26) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      Com_PrintError(15, "Could not find or allocate hint string ID for weapon '%s'. See console log for details.\n", bg_weaponCompleteDefs[v12]->szInternalName);
    }
    v8->dropHintStringIndex = v11;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) )
  {
    worldModel = v8->worldModel;
    if ( worldModel )
    {
      Name = XModelGetName(worldModel);
      G_CString_GetModelIndex(Name);
    }
    projectileModel = v8->projectileModel;
    if ( projectileModel )
    {
      v16 = XModelGetName(projectileModel);
      G_CString_GetModelIndex(v16);
    }
    worldClipModel = v8->worldClipModel;
    if ( worldClipModel )
    {
      v18 = XModelGetName(worldClipModel);
      G_CString_GetModelIndex(v18);
    }
  }
  v19 = r_weapon.weaponIdx;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v26) = bg_lastParsedWeaponIndex;
    LODWORD(v25) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, v26) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v20 = bg_weaponDefs[v19];
  v21 = v20->worldModel;
  if ( v21 )
  {
    if ( (v21->flags & 0x8000) != 0 )
    {
      defaultWorldModel = v20->defaultWorldModel;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) || !CL_TransientsMP_IsTransientAsset(v21->name, ASSET_TYPE_XMODEL) || !defaultWorldModel || XModelIsDefaultAsset(defaultWorldModel) )
      {
        szInternalName = BG_WeaponCompleteDef(&r_weapon, 0)->szInternalName;
        v24 = XModelGetName(v20->worldModel);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC6C0, 1129i64, v24, szInternalName);
      }
    }
  }
}

/*
==============
G_Items_ShouldDropUnderbarrelAmmo
==============
*/
bool G_Items_ShouldDropUnderbarrelAmmo(const Weapon *weapon)
{
  const dvar_t *v2; 

  if ( !BG_HasUnderbarrelAmmo(weapon) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE_OFFHAND|0x80) )
    return 1;
  v2 = DVARBOOL_killswitch_drop_ammo_fix_enabled;
  if ( !DVARBOOL_killswitch_drop_ammo_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_drop_ammo_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return !v2->current.enabled || !BG_AltSharesAmmo(weapon);
}

/*
==============
G_Items_Spawn
==============
*/
void G_Items_Spawn(gentity_s *ent, const Weapon *item)
{
  const WeaponDef *v7; 
  char *WeaponName; 
  GItems *v9; 
  GWeaponMap *Instance; 
  int frameDuration; 
  int time; 
  bool v13; 
  DObj *ServerDObjForEnt; 
  DObj *v17; 
  char output[1024]; 

  _RDI = item;
  _RBX = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_Spawn");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+1CCh], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+1ECh], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+1FCh], xmm0
  }
  _RBX->c.mover.angle.pos1.v[2] = *(float *)&_RDI->weaponCamo;
  if ( (unsigned __int16)(_RDI->weaponIdx - 1) > 0x224u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2162, ASSERT_TYPE_ASSERT, "( 1 ) <= ( item.weaponIdx ) && ( item.weaponIdx ) <= ( (550 - 1) )", "item.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", _RDI->weaponIdx, 1, 549) )
    __debugbreak();
  v7 = BG_WeaponDef(_RDI, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2164, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v7->worldModel )
  {
    WeaponName = BG_GetWeaponName(_RDI, output, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC200, 1130i64, (unsigned int)_RBX->s.number, WeaponName);
  }
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v9 = GItems::ms_gItemsSystem;
  GItems::ms_gItemsSystem->SetEntModel(GItems::ms_gItemsSystem, _RBX, v7->worldModel);
  *(_QWORD *)_RBX->r.box.midPoint.v = 0i64;
  _RBX->r.box.midPoint.v[2] = 0.0;
  _RBX->r.box.halfSize.v[0] = 1.0;
  _RBX->r.box.halfSize.v[1] = 1.0;
  _RBX->r.box.halfSize.v[2] = 1.0;
  G_PlayerUse_SetEntityUsable(_RBX, 1);
  _RBX->s.eType = ET_ITEM;
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &_RBX->s, &_RBX->c.item[0].weapon);
  _RBX->s.inAltWeaponMode = 0;
  G_Items_TransferRandomAmmoToWeaponEntityState(NULL, _RBX, _RDI, 0);
  if ( G_Items_ShouldDropUnderbarrelAmmo(_RDI) )
    G_Items_TransferRandomAmmoToWeaponEntityState(NULL, _RBX, _RDI, 1);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  _RBX->s.clientNum = ComCharacterLimits::ms_gameData.m_characterCount;
  _RBX->flags.m_flags[0] |= 0x200u;
  if ( level.spawnVar.spawnVarsValid )
  {
    G_SetAngle(_RBX, &_RBX->r.currentAngles, 1, 1);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    frameDuration = level.frameDuration;
    time = level.time;
    _RBX->handler = 21;
    _RBX->nextthink = time + 2 * frameDuration;
  }
  else
  {
    v13 = (_RBX->spawnflags & 1) == 0;
    _RBX->handler = 22;
    if ( v13 )
    {
      _RBX->s.groundEntityNum = 2047;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+144h]
        vaddss  xmm1, xmm0, cs:__real@42b40000
        vmovss  dword ptr [rbx+144h], xmm1
      }
    }
    G_SetOriginAndAngle(_RBX, &_RBX->r.currentOrigin, &_RBX->r.currentAngles, 1, 1);
  }
  G_DObjUpdate(_RBX, 1);
  if ( v9->m_shouldUpdateDObjOnSpawn )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
    v17 = ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, _RDI, 0, 0);
      BG_UpdatedWeaponBones(_RDI, v17, 0);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_Think
==============
*/
void G_Items_Think(gentity_s *pSelf)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1222, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  pSelf->s.clientNum = ComCharacterLimits::ms_gameData.m_characterCount;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &pSelf->s);
  if ( BG_IsScavengerPickup(WeaponForEntity) )
  {
    G_Items_UpdateScavengerBagVisibility(pSelf);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    pSelf->nextthink = level.time + level.frameDuration;
  }
}

/*
==============
G_Items_Touch
==============
*/
void G_Items_Touch(gentity_s *ent, gentity_s *other, int touched, int predictable)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  int v10; 
  GItems *ItemSystem; 
  bool v12; 
  int IsScavengerPickup; 
  gclient_s *client; 
  gclient_s *v15; 
  GWeaponMap *v16; 
  entity_event_t v17; 
  GWeaponMap *v18; 
  const Weapon *v19; 
  int v20; 
  GWeaponMap *v21; 
  const Weapon *v22; 
  int v23; 
  int fmt; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  entity_event_t pickupEvent; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1037, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->active )
  {
    ent->active = 0;
    pickupEvent = EV_NONE;
    if ( other->client )
    {
      if ( other->health >= 1 && !level.clientIsSpawning )
      {
        Instance = GWeaponMap::GetInstance();
        WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
        v10 = 1;
        if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
        {
          LODWORD(v25) = WeaponForEntity->weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1066, ASSERT_TYPE_ASSERT, "( 1 ) <= ( r_weapon.weaponIdx ) && ( r_weapon.weaponIdx ) <= ( (550 - 1) )", "r_weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v25, 1, 549) )
            __debugbreak();
        }
        if ( BG_CanItemBeGrabbed(Instance, &ent->s, &other->client->ps, touched) )
        {
          ItemSystem = GItems::GetItemSystem();
          ItemSystem->TouchLogPickup(ItemSystem, other, WeaponForEntity);
          v12 = predictable == 1;
          IsScavengerPickup = BG_IsScavengerPickup(WeaponForEntity);
          client = other->client;
          if ( !IsScavengerPickup )
          {
            if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 876, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
              __debugbreak();
            v18 = GWeaponMap::GetInstance();
            v19 = BG_GetWeaponForEntity(v18, &ent->s);
            if ( (unsigned __int16)(v19->weaponIdx - 1) > 0x224u )
            {
              LODWORD(v27) = 549;
              LODWORD(v26) = 1;
              LODWORD(v25) = v19->weaponIdx;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 879, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( (550 - 1) )", "weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v25, v26, v27) )
                __debugbreak();
            }
            if ( touched )
            {
              v20 = G_Items_WeaponPickup_Touch(ent, other, v19, &pickupEvent);
              v17 = pickupEvent;
              v10 = v20;
              if ( pickupEvent == EV_ITEM_PICKUP )
              {
                if ( !other->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1092, ASSERT_TYPE_ASSERT, "( other->client )", (const char *)&queryFormat, "other->client") )
                  __debugbreak();
                v21 = GWeaponMap::GetInstance();
                v22 = BG_GetWeaponForEntity(v21, &ent->s);
                if ( !BG_PlayerHasWeapon(Instance, &other->client->ps, v22) )
                  v12 = 0;
              }
            }
            else
            {
              v23 = G_Items_WeaponPickup_Grab(ent, other, v19, &pickupEvent);
              v17 = pickupEvent;
              v10 = v23;
            }
            if ( v17 == EV_NONE )
              goto LABEL_38;
            goto LABEL_37;
          }
          if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 998, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
            __debugbreak();
          if ( !touched && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1002, ASSERT_TYPE_ASSERT, "( touched )", (const char *)&queryFormat, "touched") )
            __debugbreak();
          v15 = other->client;
          v16 = GWeaponMap::GetInstance();
          if ( BG_HasRoomForScavengerPickup(v16, &v15->ps) )
          {
            GScr_AddEntity(other);
            GScr_Notify(ent, scr_const.scavenger, 1u);
            v17 = EV_AMMO_PICKUP;
LABEL_37:
            LOBYTE(fmt) = v12;
            ((void (__fastcall *)(GItems *, gentity_s *, _QWORD, _QWORD, int))ItemSystem->TouchSendEvent)(ItemSystem, other, ent->s.weaponHandle.m_mapEntryId, (unsigned int)v17, fmt);
LABEL_38:
            if ( v10 )
            {
              if ( ent->s.eType == ET_MISSILE )
              {
                GScr_Notify(ent, scr_const.death, 0);
                GScr_Notify(ent, scr_const.death_or_disconnect, 0);
              }
              G_FreeEntity(ent);
            }
          }
        }
      }
    }
  }
}

/*
==============
G_Items_TouchAuto
==============
*/
void G_Items_TouchAuto(gentity_s *ent, gentity_s *other, int bTouched)
{
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1019, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1020, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( !bTouched || (client = other->client) == NULL || !client->bDisableAutoPickup )
  {
    ent->active = 1;
    G_Items_Touch(ent, other, bTouched, bTouched);
  }
}

/*
==============
G_Items_TransferPlayerAmmoToWeaponEntity
==============
*/
void G_Items_TransferPlayerAmmoToWeaponEntity(gentity_s *player, gentity_s *weaponEnt, const Weapon *weapon)
{
  const playerState_s *EntityPlayerState; 
  int NonClipAmmoToTransferToWeaponEntity; 
  GWeaponMap *Instance; 
  int AmmoInClip; 
  int v16; 

  _RDI = weapon;
  _RBX = weaponEnt;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1657, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1658, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !_RDI->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1659, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1662, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  NonClipAmmoToTransferToWeaponEntity = G_Items_GetNonClipAmmoToTransferToWeaponEntity(player, _RDI, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+1CCh], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+1ECh], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+1FCh], xmm0
  }
  _RBX->c.mover.angle.pos1.v[2] = *(float *)&_RDI->weaponCamo;
  _RBX->c.item[0].ammoCount = NonClipAmmoToTransferToWeaponEntity;
  Instance = GWeaponMap::GetInstance();
  _RBX->c.item[0].dualWieldItem = BG_PlayerDualWieldingWeapon(Instance, EntityPlayerState, _RDI) != 0;
  _RBX->c.item[0].clipAmmoCount[0] = BG_GetAmmoInClip(EntityPlayerState, _RDI, 0, WEAPON_HAND_DEFAULT);
  if ( _RBX->c.item[0].dualWieldItem )
    AmmoInClip = BG_GetAmmoInClip(EntityPlayerState, _RDI, 0, WEAPON_HAND_LEFT);
  else
    AmmoInClip = 0;
  _RBX->c.item[0].clipAmmoCount[1] = AmmoInClip;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->SaveRiotShieldHealthFromOwner(GItems::ms_gItemsSystem, player, _RBX, _RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rbx+21Ch], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rbx+23Ch], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rbx+24Ch], xmm0
  }
  *((_DWORD *)&_RBX->c.beam + 37) = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  if ( G_Items_ShouldDropUnderbarrelAmmo(_RDI) )
  {
    v16 = G_Items_GetNonClipAmmoToTransferToWeaponEntity(player, _RDI, 1);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+21Ch], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+23Ch], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+24Ch], xmm0
    }
    *((_DWORD *)&_RBX->c.beam + 37) = *(_DWORD *)&_RDI->weaponCamo;
    _RBX->c.item[1].ammoCount = v16;
    _RBX->c.item[1].dualWieldItem = 0;
    _RBX->c.item[1].clipAmmoCount[0] = BG_GetAmmoInClip(EntityPlayerState, _RDI, 1, WEAPON_HAND_DEFAULT);
    _RBX->c.item[1].clipAmmoCount[1] = 0;
  }
}

/*
==============
G_Items_TransferRandomAmmoToWeaponEntity
==============
*/
__int64 G_Items_TransferRandomAmmoToWeaponEntity(gentity_s *entity, gentity_s *weaponEnt, const Weapon *transferWeapon)
{
  unsigned int v6; 

  v6 = G_Items_TransferRandomAmmoToWeaponEntityState(entity, weaponEnt, transferWeapon, 0);
  if ( G_Items_ShouldDropUnderbarrelAmmo(transferWeapon) )
    return v6 + G_Items_TransferRandomAmmoToWeaponEntityState(entity, weaponEnt, transferWeapon, 1);
  else
    return v6;
}

/*
==============
G_Items_TransferRandomAmmoToWeaponEntityState
==============
*/
__int64 G_Items_TransferRandomAmmoToWeaponEntityState(gentity_s *entity, gentity_s *weaponEnt, const Weapon *weapon, bool isAlternate)
{
  int v7; 
  const WeaponDef *v15; 
  const WeaponCompleteDef *v16; 
  int ammoDropStockMax; 
  int v18; 
  int ammoDropStockMin; 
  int v20; 
  int v21; 
  bool v22; 
  __int64 v25; 
  __int64 i; 
  int ClipSize; 
  const WeaponDef *v28; 
  BOOL fmt; 
  __int64 v42; 
  _BOOL8 v43; 
  __int64 v44; 
  gentity_s *v47; 

  v47 = weaponEnt;
  __asm { vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON }
  v7 = 0;
  _RBP = weapon;
  _R14 = weaponEnt;
  _R15 = 80i64 * isAlternate;
  v44 = _R15;
  __asm
  {
    vmovups ymmword ptr [r15+rdx+1CCh], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [r15+rdx+1ECh], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [r15+rdx+1FCh], xmm0
  }
  *(float *)((char *)&weaponEnt->c.mover.angle.pos1.v[2] + _R15) = *(float *)&NULL_WEAPON.weaponCamo;
  *(_QWORD *)((char *)&weaponEnt->c.item[0].ammoCount + _R15) = 0i64;
  *(int *)((char *)&weaponEnt->c.item[0].clipAmmoCount[1] + _R15) = 0;
  if ( !weapon->weaponIdx )
    return 0i64;
  v15 = BG_WeaponDef(weapon, isAlternate);
  v16 = BG_WeaponCompleteDef(_RBP, isAlternate);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  LOBYTE(fmt) = isAlternate;
  GItems::ms_gItemsSystem->SetRiotShieldHealthOnTransfer(GItems::ms_gItemsSystem, entity, _R14, _RBP, fmt);
  if ( isAlternate && (!G_Items_ShouldDropUnderbarrelAmmo(_RBP) || v15->iSharedAmmoCapIndex >= 0) )
    return 0i64;
  if ( v15->dualWieldType == DUAL_WIELD_TYPE_DEFAULT && BG_OneHandedViewModelAnimsValid(v15) && (_R14->spawnflags & 4) != 0 )
    *(&_R14->c.item[0].dualWieldItem + _R15) = 1;
  ammoDropStockMax = v16->ammoDropStockMax;
  v18 = ammoDropStockMax;
  ammoDropStockMin = v15->ammoDropStockMin;
  if ( ammoDropStockMax >= ammoDropStockMin )
    v18 = ammoDropStockMin;
  if ( ammoDropStockMax >= ammoDropStockMin )
    ammoDropStockMin = v16->ammoDropStockMax;
  if ( ammoDropStockMin < 0 )
    goto LABEL_21;
  if ( ammoDropStockMin < v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1796, ASSERT_TYPE_ASSERT, "( max >= min )", (const char *)&queryFormat, "max >= min") )
    __debugbreak();
  v20 = v18 + G_rand() % (ammoDropStockMin - v18 + 1);
  if ( v20 > 0 )
  {
    v22 = !*(&_R14->c.item[0].dualWieldItem + _R15);
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovss  xmm6, cs:__real@3c23d70a
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f000000
    }
    v43 = !v22;
    v25 = v43;
    v42 = 0i64;
    for ( i = 0i64; i <= v25; ++i )
    {
      ClipSize = BG_GetClipSize(NULL, _RBP, 0);
      if ( ClipSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1707, ASSERT_TYPE_ASSERT, "( clipsize >= 0 )", (const char *)&queryFormat, "clipsize >= 0") )
        __debugbreak();
      v28 = BG_WeaponDef(_RBP, 0);
      if ( ClipSize == 1 )
      {
        _EAX = 1;
      }
      else
      {
        if ( v28->ammoDropClipPercentMax > v28->ammoDropClipPercentMin )
          G_rand();
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebp
        }
        _RBP = weapon;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r12d
          vmulss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm7
          vcvttss2si eax, xmm3
        }
      }
      *((_DWORD *)&v42 + i) = _EAX;
      if ( _EAX < v20 )
      {
        v20 -= _EAX;
      }
      else
      {
        *((_DWORD *)&v42 + i) = v20;
        v20 = 0;
      }
    }
    v7 = HIDWORD(v42);
    v21 = v42;
    _R14 = v47;
    _R15 = v44;
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_58]
      vmovaps xmm6, [rsp+0A8h+var_48]
    }
  }
  else
  {
LABEL_21:
    v20 = 0;
    v21 = 0;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [r15+r14+1CCh], ymm0
    vmovups xmm1, xmmword ptr [rbp+20h]
    vmovups xmmword ptr [r15+r14+1ECh], xmm1
    vmovsd  xmm0, qword ptr [rbp+30h]
    vmovsd  qword ptr [r15+r14+1FCh], xmm0
  }
  *(float *)((char *)&_R14->c.mover.angle.pos1.v[2] + _R15) = *(float *)&_RBP->weaponCamo;
  *(int *)((char *)&_R14->c.item[0].ammoCount + _R15) = v20;
  *(int *)((char *)_R14->c.item[0].clipAmmoCount + _R15) = v21;
  *(int *)((char *)&_R14->c.item[0].clipAmmoCount[1] + _R15) = v7;
  return (unsigned int)(*(int *)((char *)&_R14->c.item[0].ammoCount + _R15) + v7 + v21);
}

/*
==============
G_Items_UpdateScavengerBagVisibility
==============
*/
void G_Items_UpdateScavengerBagVisibility(gentity_s *bagEnt)
{
  unsigned int v2; 
  ClientBits *p_clientMask; 
  const dvar_t *v4; 
  gclient_s *v5; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !bagEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1199, ASSERT_TYPE_ASSERT, "( bagEnt )", (const char *)&queryFormat, "bagEnt") )
    __debugbreak();
  if ( bagEnt->s.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1200, ASSERT_TYPE_ASSERT, "( bagEnt->s.eType == ET_ITEM )", (const char *)&queryFormat, "bagEnt->s.eType == ET_ITEM") )
    __debugbreak();
  v2 = 0;
  p_clientMask = &bagEnt->clientMask;
  bagEnt->clientMask.array[0] = 0;
  *(_QWORD *)&bagEnt->clientMask.array[1] = 0i64;
  *(_QWORD *)&bagEnt->clientMask.array[3] = 0i64;
  *(_QWORD *)&bagEnt->clientMask.array[5] = 0i64;
  v4 = DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags;
  if ( !DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_allowEveryoneToSeeScavengerBags") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && level.maxclients )
  {
    do
    {
      v5 = &level.clients[v2];
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x23u);
      v7 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex < 0 )
        goto LABEL_17;
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v9) = 64;
        LODWORD(v8) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v7 & 0x1F)) & v5->ps.perks.array[v7 >> 5]) == 0 )
      {
LABEL_17:
        if ( v2 >= 0xE0 )
        {
          LODWORD(v11) = 224;
          LODWORD(v10) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
            __debugbreak();
        }
        p_clientMask->array[(unsigned __int64)v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
      }
      ++v2;
    }
    while ( v2 < level.maxclients );
  }
}

/*
==============
G_Items_WeaponPickup_AddAmmoForNewWeapon
==============
*/

void __fastcall G_Items_WeaponPickup_AddAmmoForNewWeapon(gentity_s *weaponEnt, gentity_s *player, double _XMM2_8)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  int EquippedWeaponIndex; 
  int *clipAmmoCount; 
  int v13; 
  int i; 
  int v15; 
  int amount; 
  int v20; 
  int ClipSize; 
  AmmoStore result; 
  Weapon r_weapon; 
  AmmoStore r_clipIndex; 

  _RSI = weaponEnt;
  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 701, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 702, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 703, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  __asm
  {
    vmovups ymm2, ymmword ptr [rsi+1CCh]
    vmovups xmm0, xmmword ptr [rsi+1ECh]
    vmovsd  xmm1, qword ptr [rsi+1FCh]
  }
  client = player->client;
  *(float *)&r_weapon.weaponCamo = _RSI->c.mover.angle.pos1.v[2];
  __asm
  {
    vmovd   eax, xmm2
    vmovups ymmword ptr [rsp+130h+r_weapon.weaponIdx], ymm2
    vmovups xmmword ptr [rbp+30h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  qword ptr [rbp+30h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  if ( (_WORD)_EAX )
  {
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, &client->ps, &r_weapon);
    if ( EquippedWeaponIndex >= 0 && (gclient_s *)((char *)client + 16 * EquippedWeaponIndex) != (gclient_s *)-1540i64 )
    {
      clipAmmoCount = _RSI->c.item[0].clipAmmoCount;
      v13 = 0;
      for ( i = 0; i < 2; ++i )
      {
        v15 = *clipAmmoCount;
        if ( *clipAmmoCount >= 0 )
        {
          _RAX = BG_AmmoStoreForWeapon(&result, &r_weapon, 0);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+30h+r_clipIndex.weapon.weaponIdx], ymm0
            vmovups ymm1, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rbp+30h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
          }
          amount = BG_GetClipSize(&client->ps, &r_weapon, 0);
          if ( v15 < amount )
            amount = v15;
          BG_SetClipAmmo(&client->ps, &r_clipIndex, &r_weapon, 0, (PlayerHandIndex)i, amount);
        }
        if ( !_RSI->c.item[0].dualWieldItem )
          break;
        ++clipAmmoCount;
      }
      G_Items_AddAmmo(&player->client->ps, &r_weapon, 0, _RSI->c.item[0].ammoCount, _RSI->c.item[0].clipAmmoCount[0] == -1);
      if ( BG_HasUnderbarrelAmmo(&r_weapon) && !BG_AltSharesAmmo(&r_weapon) )
      {
        v20 = _RSI->c.item[1].clipAmmoCount[0];
        if ( v20 >= 0 )
        {
          _RAX = BG_AmmoStoreForWeapon(&result, &r_weapon, 1);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+30h+r_clipIndex.weapon.weaponIdx], ymm0
            vmovups ymm1, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rbp+30h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
          }
          ClipSize = BG_GetClipSize(&client->ps, &r_weapon, 1);
          if ( v20 < ClipSize )
            ClipSize = v20;
          BG_SetClipAmmo(&client->ps, &r_clipIndex, &r_weapon, 1, WEAPON_HAND_DEFAULT, ClipSize);
          v20 = _RSI->c.item[1].clipAmmoCount[0];
        }
        LOBYTE(v13) = v20 == -1;
        G_Items_AddAmmo(&player->client->ps, &r_weapon, 1, _RSI->c.item[1].ammoCount, v13);
      }
    }
  }
}

/*
==============
G_Items_WeaponPickup_AddWeapon
==============
*/
int G_Items_WeaponPickup_AddWeapon(gentity_s *weaponEnt, gentity_s *playerEnt, const Weapon *weapon, gentity_s **pDroppedWeapon)
{
  int dualWieldItem; 
  gclient_s *client; 
  gentity_s *v10; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponSlot Slot; 
  bool v19; 
  gentity_s *v20; 
  int spawnflags; 
  EntityTagInfo *tagInfo; 
  const WeaponDef *v23; 
  const WeaponDef *v27; 
  char v29; 
  int dualWield; 
  WeaponDef *pickupWeapDef; 
  vec3_t angles; 
  Weapon r_weapon; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> penetrationTestMatrix; 

  _RDI = weaponEnt;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_WeaponPickup_AddWeapon");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 445, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 446, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  dualWieldItem = _RDI->c.item[0].dualWieldItem;
  client = playerEnt->client;
  dualWield = dualWieldItem;
  v10 = NULL;
  pickupWeapDef = (WeaponDef *)BG_WeaponDef(weapon, 0);
  if ( pickupWeapDef->inventoryType )
  {
    Sys_ProfEndNamedEvent();
    return G_Weapon_GivePlayerWeapon(&client->ps, NULL, weapon, dualWieldItem, 0, 0);
  }
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &client->ps);
  if ( CurrentWeaponForPlayer->weaponIdx && !BG_PlayerHasWeapon(Instance, &client->ps, CurrentWeaponForPlayer) )
    goto LABEL_14;
  Slot = BG_PlayerWeaponGetSlot(weapon);
  if ( BG_PlayerWeaponIsSlotFull(Instance, &client->ps, Slot) )
  {
    _RAX = G_Items_GetPrimaryWeaponToDrop(&client->ps, weapon);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+140h+r_weapon.weaponIdx], ymm2
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+140h+r_weapon.attachmentVariationIndices+5], xmm0
      vmovsd  xmm1, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+40h+r_weapon.attachmentVariationIndices+15h], xmm1
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm { vmovd   eax, xmm2 }
    if ( !(_WORD)_RAX )
    {
LABEL_14:
      Sys_ProfEndNamedEvent();
      return 0;
    }
    v19 = BG_UsingAlternate(&client->ps);
    if ( BG_IsFauxFists(&client->ps, &r_weapon, v19) )
    {
      if ( BG_GetEquippedWeaponCount(Instance, &client->ps, WEAPINVENTORY_PRIMARY, Slot) > 1 )
        G_Weapon_TakePlayerWeapon(&client->ps, &r_weapon);
      goto LABEL_42;
    }
    if ( !BG_PlayerHasWeapon(Instance, &client->ps, &r_weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 506, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, playerWeap ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, playerWeap )") )
      __debugbreak();
    v20 = G_Items_DropWeapon(playerEnt, &r_weapon, 0, 0, &penetrationTestMatrix);
    v10 = v20;
    if ( !v20 )
      goto LABEL_42;
    spawnflags = _RDI->spawnflags;
    if ( (spawnflags & 0x10) == 0 )
      spawnflags &= ~1u;
    v20->spawnflags = spawnflags;
    v20->s.groundEntityNum = _RDI->s.groundEntityNum;
    if ( GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v20->flags, ACTIVE, 9u) )
    {
      tagInfo = _RDI->tagInfo;
      if ( tagInfo )
      {
        if ( tagInfo->parent )
        {
          G_SetOriginAndAngle(v10, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
          G_EntLinkTo(v10, _RDI->tagInfo->parent, _RDI->tagInfo->name, 0, NULL);
LABEL_41:
          SV_LinkEntity(v10);
LABEL_42:
          *pDroppedWeapon = v10;
          Sys_ProfEndNamedEvent();
          return G_Weapon_GivePlayerWeapon(&client->ps, NULL, weapon, dualWield, 0, 0);
        }
      }
    }
    v23 = BG_WeaponDef(&r_weapon, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+13Ch]
      vmovss  xmm1, dword ptr [rdi+140h]
      vmovss  dword ptr [rsp+140h+angles], xmm0
      vmovss  xmm0, dword ptr [rdi+144h]
      vmovss  dword ptr [rsp+140h+angles+8], xmm0
      vmovss  dword ptr [rsp+140h+angles+4], xmm1
    }
    v27 = v23;
    if ( BG_IsRiotShield(weapon, 0) )
    {
      AnglesToAxis(&angles, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+40h+axis+14h]
        vcomiss xmm0, cs:__real@3f34fdf4
      }
      if ( v29 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+140h+angles]
          vaddss  xmm1, xmm0, cs:__real@42b40000
        }
LABEL_33:
        __asm { vmovss  dword ptr [rsp+140h+angles], xmm1 }
      }
    }
    else if ( BG_IsRiotShield(&r_weapon, 0) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+angles]
        vaddss  xmm1, xmm0, cs:__real@c2b40000
      }
      goto LABEL_33;
    }
    if ( (v10->spawnflags & 1) != 0 )
    {
      G_SetOriginAndAngle(v10, &_RDI->r.currentOrigin, &angles, 1, 1);
    }
    else if ( BG_IsRiotShield(&r_weapon, 0) )
    {
      G_Items_WeaponPickup_TraceGround(_RDI, pickupWeapDef, &angles, v10, v27);
    }
    else
    {
      G_Items_WeaponPickup_TraceGround_Legacy(_RDI, pickupWeapDef, &angles, v10, v27);
    }
    if ( (v10->spawnflags & 1) == 0 )
      G_Items_EnablePhysics(v10);
    goto LABEL_41;
  }
  Sys_ProfEndNamedEvent();
  return G_Weapon_GivePlayerWeapon(&client->ps, NULL, weapon, dualWield, 0, 0);
}

/*
==============
G_Items_WeaponPickup_Grab
==============
*/
__int64 G_Items_WeaponPickup_Grab(gentity_s *weaponEnt, gentity_s *player, const Weapon *weapon, entity_event_t *pickupEvent)
{
  double v4; 
  const WeaponDef *v9; 
  signed __int64 v11; 
  int v12; 
  signed __int64 v13; 
  unsigned int *RandomSeed; 
  gclient_s *client; 
  unsigned int *v16; 
  GHandler *Handler; 
  gentity_s *v18; 
  weapType_t WeaponType; 
  __int16 EntityIndex; 
  GItems *ItemSystem; 
  unsigned int *holdrand; 
  __int64 v23; 
  gentity_s *pDroppedWeapon; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 786, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 787, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 788, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( (unsigned __int16)(weapon->weaponIdx - 1) > 0x224u )
  {
    LODWORD(holdrand) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 789, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( (550 - 1) )", "weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", holdrand, 1, 549) )
      __debugbreak();
  }
  pDroppedWeapon = NULL;
  v9 = BG_WeaponDef(weapon, 0);
  if ( weaponEnt->s.eType == ET_MISSILE )
  {
    if ( BG_GetWeaponClass(weapon, 0) == WEAPCLASS_THROWINGKNIFE )
      G_Items_AddAmmo(&player->client->ps, weapon, 0, 1, 1);
    *pickupEvent = EV_AMMO_PICKUP;
    G_Items_WeaponPickup_Notifies(weaponEnt, NULL, player, v9, 1);
    return 1i64;
  }
  else
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v11 = weaponEnt - g_entities;
    if ( (unsigned int)v11 >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(holdrand) = weaponEnt - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", holdrand, v23) )
        __debugbreak();
    }
    v11 = (__int16)v11;
    if ( (unsigned int)(__int16)v11 >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(holdrand) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", holdrand, v23) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 808, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( weaponEnt ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( weaponEnt ) )") )
      __debugbreak();
    weaponEnt->flags.m_flags[0] |= 0x10000u;
    v12 = G_Items_WeaponPickup_AddWeapon(weaponEnt, player, weapon, &pDroppedWeapon);
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v13 = weaponEnt - g_entities;
    if ( (unsigned int)v13 >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(holdrand) = weaponEnt - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", holdrand, v23) )
        __debugbreak();
    }
    v13 = (__int16)v13;
    if ( (unsigned int)(__int16)v13 >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(holdrand) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", holdrand, v23) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 813, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( weaponEnt ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( weaponEnt ) )") )
      __debugbreak();
    GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagInternal(&weaponEnt->flags, ACTIVE, 0x10u);
    if ( v12 )
    {
      RandomSeed = G_GetRandomSeed();
      client = player->client;
      v16 = RandomSeed;
      Handler = GHandler::getHandler();
      BG_AnimScriptEvent(Handler, &client->ps, ANIM_ET_PICKUPWEAPON, 0, 0, v16);
      *pickupEvent = EV_ITEM_PICKUP;
      G_Items_WeaponPickup_AddAmmoForNewWeapon(weaponEnt, player, v4);
      v18 = pDroppedWeapon;
      if ( pDroppedWeapon )
        G_Items_WeaponPickup_LeechFromWeaponEnt(pDroppedWeapon, player, 0, NULL, 1);
      G_Items_WeaponPickup_Notifies(weaponEnt, v18, player, v9, 1);
      WeaponType = BG_GetWeaponType(weapon, 0);
      if ( v9->slot != WEAPON_SLOT_MELEE && (!BG_WeaponTypeIsOffhand(WeaponType) || v9->offhandClass == OFFHAND_CLASS_NONE) )
      {
        EntityIndex = G_GetEntityIndex(player);
        G_Weapon_SelectWeapon(EntityIndex, weapon);
      }
      ItemSystem = GItems::GetItemSystem();
      ItemSystem->RestoreRiotShieldHealthOnPickup(ItemSystem, player, weaponEnt, weapon);
      return 1i64;
    }
    else
    {
      return 0i64;
    }
  }
}

/*
==============
G_Items_WeaponPickup_LeechFromWeaponEnt
==============
*/
bool G_Items_WeaponPickup_LeechFromWeaponEnt(gentity_s *weaponEnt, gentity_s *player, int haveExactWeapon, entity_event_t *pickupEvent, bool suppressNotifies)
{
  char v9; 
  __int64 v10; 
  scrContext_t *v12; 
  bool v17; 
  WeaponDef **v18; 
  WeaponDef *v19; 
  bool v20; 
  int v21; 
  int v22; 
  GHandler *Handler; 
  const dvar_t *v24; 
  __int64 weaponIdx; 
  WeaponCompleteDef **v26; 
  WeaponCompleteDef *v27; 
  int IsClipOnly; 
  const char *v29; 
  const char *v30; 
  unsigned int EntityIndex; 
  SvClient *CommonClient; 
  int v33; 
  int v34; 
  bool v35; 
  int v36; 
  __int64 v38; 
  __int64 v39; 
  Weapon r_weapon; 
  char outAmmoName[1024]; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 611, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 612, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  v9 = 0;
  v10 = 0i64;
  _RDI = &weaponEnt->c.mover.pos.midTime;
  v12 = ScriptContext_Server();
  do
  {
    __asm
    {
      vmovups ymm2, ymmword ptr [rdi+4]
      vmovups xmm0, xmmword ptr [rdi+24h]
      vmovsd  xmm1, qword ptr [rdi+34h]
      vmovd   ebx, xmm2
    }
    *(float *)&r_weapon.weaponCamo = _RDI[15];
    __asm
    {
      vmovups ymmword ptr [rsp+4D8h+r_weapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+4D8h+r_weapon.attachmentVariationIndices+5], xmm0
      vmovsd  qword ptr [rsp+4D8h+r_weapon.attachmentVariationIndices+15h], xmm1
    }
    if ( (_WORD)_EBX )
    {
      if ( (unsigned __int16)_EBX > bg_lastParsedWeaponIndex )
      {
        LODWORD(v39) = bg_lastParsedWeaponIndex;
        LODWORD(v38) = (unsigned __int16)_EBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v38, v39) )
          __debugbreak();
      }
      v17 = bg_weaponDefs[(unsigned __int16)_EBX] == NULL;
      v18 = &bg_weaponDefs[(unsigned __int16)_EBX];
      if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v19 = *v18;
      if ( !v19->bClipOnly || BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE )
      {
        v20 = v10 && (BG_HasUnderbarrelAmmo(&r_weapon) || v19->inventoryType == WEAPINVENTORY_ALTMODE);
        v21 = *((_DWORD *)_RDI - 2);
        if ( haveExactWeapon )
          v21 += *(_DWORD *)_RDI + *((_DWORD *)_RDI - 1);
        v22 = G_Items_AddAmmo(&player->client->ps, &r_weapon, v20, v21, 0);
        if ( v22 )
        {
          Handler = GHandler::getHandler();
          BG_GetWeaponAmmoPoolName(&r_weapon, v20, Handler, outAmmoName, 0x400ui64);
          Scr_AddString(v12, outAmmoName);
          Scr_AddInt(v12, v22);
          GScr_Notify(player, scr_const.ammo_pickup, 2u);
          v9 = 1;
          if ( !suppressNotifies )
          {
            v24 = DVARBOOL_pickupPrints;
            if ( !DVARBOOL_pickupPrints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pickupPrints") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v24);
            if ( v24->current.enabled )
            {
              weaponIdx = r_weapon.weaponIdx;
              if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
              {
                LODWORD(v39) = bg_lastParsedWeaponIndex;
                LODWORD(v38) = r_weapon.weaponIdx;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v38, v39) )
                  __debugbreak();
              }
              v17 = bg_weaponCompleteDefs[weaponIdx] == NULL;
              v26 = &bg_weaponCompleteDefs[weaponIdx];
              if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
                __debugbreak();
              v27 = *v26;
              IsClipOnly = BG_WeaponIsClipOnly(&r_weapon, 0);
              v29 = aCGamePickupCli;
              if ( !IsClipOnly )
                v29 = aCGamePickupAmm;
              v30 = j_va(v29, 102i64, v27->szDisplayName);
              EntityIndex = G_GetEntityIndex(player);
              if ( EntityIndex == -1 )
              {
                SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v30);
              }
              else
              {
                CommonClient = SvClient::GetCommonClient(EntityIndex);
                CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, v30);
              }
            }
          }
          v33 = *((_DWORD *)_RDI - 2) - v22;
          *((_DWORD *)_RDI - 2) = v33;
          if ( v33 < 0 )
          {
            *(_RDI - 2) = 0.0;
            v34 = *((_DWORD *)_RDI - 1) + v33;
            *((_DWORD *)_RDI - 1) = v34;
            if ( v34 < 0 )
            {
              v35 = v34 + *(_DWORD *)_RDI < 0;
              *(_DWORD *)_RDI += v34;
              v36 = *(_DWORD *)_RDI;
              if ( v35 )
                v36 = 0;
              *(_RDI - 1) = 0.0;
              *(_DWORD *)_RDI = v36;
            }
          }
        }
      }
    }
    ++v10;
    _RDI += 20;
  }
  while ( v10 < 2 );
  if ( !suppressNotifies && v9 )
  {
    if ( !pickupEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 682, ASSERT_TYPE_ASSERT, "( pickupEvent )", (const char *)&queryFormat, "pickupEvent") )
      __debugbreak();
    *pickupEvent = EV_ITEM_PICKUP;
  }
  return haveExactWeapon && v9;
}

/*
==============
G_Items_WeaponPickup_Notifies
==============
*/
void G_Items_WeaponPickup_Notifies(gentity_s *thisItem, gentity_s *newDroppedItem, gentity_s *player, const WeaponDef *weapDef, bool pickedUp)
{
  scrContext_t *v9; 
  BOOL v10; 

  if ( !thisItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 754, ASSERT_TYPE_ASSERT, "( thisItem )", (const char *)&queryFormat, "thisItem") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 755, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 756, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v9 = ScriptContext_Server();
  if ( newDroppedItem )
    GScr_AddEntity(newDroppedItem);
  else
    Scr_AddUndefined(v9);
  GScr_AddEntity(player);
  GScr_Notify(thisItem, scr_const.trigger, 2u);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  LOBYTE(v10) = pickedUp;
  GItems::ms_gItemsSystem->WeaponPickupExtraNotifies(GItems::ms_gItemsSystem, thisItem, newDroppedItem, player, weapDef, v10);
}

/*
==============
G_Items_WeaponPickup_Touch
==============
*/
_BOOL8 G_Items_WeaponPickup_Touch(gentity_s *weaponEnt, gentity_s *player, const Weapon *weapon, entity_event_t *pickupEvent)
{
  const WeaponDef *v8; 
  GWeaponMap *Instance; 
  int HasWeapon; 
  bool v11; 
  bool v12; 
  __int64 v14; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 846, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 847, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 848, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !pickupEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 849, ASSERT_TYPE_ASSERT, "( pickupEvent )", (const char *)&queryFormat, "pickupEvent") )
    __debugbreak();
  if ( (unsigned __int16)(weapon->weaponIdx - 1) > 0x224u )
  {
    LODWORD(v14) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 850, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( (550 - 1) )", "weapon.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v14, 1, 549) )
      __debugbreak();
  }
  v8 = BG_WeaponDef(weapon, 0);
  Instance = GWeaponMap::GetInstance();
  HasWeapon = BG_PlayerHasWeapon(Instance, &player->client->ps, weapon);
  if ( !HasWeapon && !BG_PlayerHasCompatibleWeapon(Instance, &player->client->ps, weapon, 0) )
    return 0i64;
  v11 = G_Items_WeaponPickup_LeechFromWeaponEnt(weaponEnt, player, HasWeapon, pickupEvent, 0);
  v12 = v11;
  if ( *pickupEvent )
    G_Items_WeaponPickup_Notifies(weaponEnt, NULL, player, v8, v11);
  return v12;
}

/*
==============
G_Items_WeaponPickup_TraceGround
==============
*/
void G_Items_WeaponPickup_TraceGround(const gentity_s *const pickupEnt, const WeaponDef *const pickupWeapDef, const vec3_t *pickupAngles, gentity_s *const dropEnt, const WeaponDef *const dropWeapDef)
{
  const DObj *ServerDObjForEnt; 
  const DObj *v14; 
  char v24; 
  char v29; 
  int contentmask; 
  int v48; 
  vec3_t end; 
  vec3_t start; 
  Bounds v69; 
  Bounds rotatedBounds; 
  Bounds bounds; 
  Bounds baseBounds; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  __asm { vmovaps [rsp+1D0h+var_40], xmm6 }
  if ( !pickupEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 353, ASSERT_TYPE_ASSERT, "(pickupEnt)", (const char *)&queryFormat, "pickupEnt") )
    __debugbreak();
  if ( !pickupWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 354, ASSERT_TYPE_ASSERT, "(pickupWeapDef)", (const char *)&queryFormat, "pickupWeapDef") )
    __debugbreak();
  if ( !dropEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 355, ASSERT_TYPE_ASSERT, "(dropEnt)", (const char *)&queryFormat, "dropEnt") )
    __debugbreak();
  if ( !dropWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 356, ASSERT_TYPE_ASSERT, "(dropWeapDef)", (const char *)&queryFormat, "dropWeapDef") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(pickupEnt);
  v14 = Com_GetServerDObjForEnt(dropEnt);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 360, ASSERT_TYPE_ASSERT, "(dropDObj)", (const char *)&queryFormat, "dropDObj") )
    __debugbreak();
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 361, ASSERT_TYPE_ASSERT, "(pickupDObj)", (const char *)&queryFormat, "pickupDObj") )
    __debugbreak();
  _RDI = DVARFLT_g_dropWeaponHeight;
  _RBX = &pickupEnt->r.currentOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+1D0h+end], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+1D0h+end+8], xmm0
    vmovss  dword ptr [rsp+1D0h+end+4], xmm1
  }
  if ( !DVARFLT_g_dropWeaponHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponHeight") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1D0h+var_50], xmm7
    vmovaps [rsp+1D0h+var_60], xmm8
    vmovaps [rsp+1D0h+var_70], xmm9
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  if ( !ServerDObjForEnt || !v14 )
    goto LABEL_32;
  AnglesToAxis(pickupAngles, &axis);
  DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
  Bounds_Transform(&bounds, &vec3_origin, &axis, &rotatedBounds);
  Bounds_RaiseToWidth(&rotatedBounds);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0D0h+rotatedBounds.halfSize]
    vmaxss  xmm1, xmm0, dword ptr [rbp+0D0h+rotatedBounds.halfSize+4]
    vmaxss  xmm9, xmm1, dword ptr [rbp+0D0h+rotatedBounds.halfSize+8]
  }
  DObjPhysicsGetBounds(v14, &baseBounds);
  Bounds_Transform(&baseBounds, &vec3_origin, &axis, &v69);
  Bounds_RaiseToWidth(&v69);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1D0h+var_170.halfSize]
    vmaxss  xmm1, xmm0, dword ptr [rsp+1D0h+var_170.halfSize+4]
    vmaxss  xmm8, xmm1, dword ptr [rsp+1D0h+var_170.halfSize+8]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
    vmovss  dword ptr [rsp+1D0h+var_170.halfSize+8], xmm8
  }
  if ( v29 | v24 )
    goto LABEL_27;
  __asm { vucomiss xmm8, xmm7 }
  if ( v24 )
  {
LABEL_32:
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsp+1D0h+end+8]
      vmovss  dword ptr [rsp+1D0h+end+8], xmm1
    }
    goto LABEL_33;
  }
  __asm { vucomiss xmm9, xmm7 }
LABEL_27:
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1D0h+var_170.midPoint]
    vsubss  xmm2, xmm0, dword ptr [rsp+1D0h+rotatedBounds.midPoint]
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsp+1D0h+var_170.midPoint+4]
    vsubss  xmm5, xmm1, xmm2
    vsubss  xmm2, xmm0, dword ptr [rsp+1D0h+rotatedBounds.midPoint+4]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+1D0h+var_170.midPoint+8]
    vsubss  xmm3, xmm1, xmm2
    vsubss  xmm2, xmm0, dword ptr [rbp+0D0h+rotatedBounds.midPoint+8]
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm4, xmm1, xmm2
    vsubss  xmm0, xmm8, xmm9
    vmaxss  xmm0, xmm0, xmm7
    vaddss  xmm1, xmm0, xmm8
    vaddss  xmm2, xmm1, cs:__real@3f800000
    vmovss  dword ptr [rsp+1D0h+end+4], xmm3
    vmovss  dword ptr [rsp+1D0h+start+4], xmm3
    vaddss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rsp+1D0h+start+8], xmm3
    vmovss  dword ptr [rsp+1D0h+end], xmm5
    vmovss  dword ptr [rsp+1D0h+end+8], xmm4
    vmovss  dword ptr [rsp+1D0h+start], xmm5
  }
  contentmask = G_Items_ClipMask(pickupEnt);
  if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
    v48 = EntHandle::entnum(&dropEnt->r.ownerNum);
  else
    v48 = 2047;
  G_Main_TraceCapsule(&results, &start, &end, &v69, v48, contentmask);
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1D0h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start]
      vmovss  xmm5, [rbp+0D0h+results.fraction]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+1D0h+start]
      vmovss  xmm1, dword ptr [rsp+1D0h+end+4]
      vmovss  dword ptr [rsp+1D0h+end], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+1D0h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+start+4]
      vmovss  xmm0, dword ptr [rsp+1D0h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+1D0h+end+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+start+8]
      vmovss  dword ptr [rsp+1D0h+end+8], xmm3
    }
LABEL_33:
    _RBX = &end;
  }
  G_SetOriginAndAngle(dropEnt, _RBX, pickupAngles, 1, 1);
  __asm
  {
    vmovaps xmm9, [rsp+1D0h+var_70]
    vmovaps xmm8, [rsp+1D0h+var_60]
    vmovaps xmm7, [rsp+1D0h+var_50]
    vmovaps xmm6, [rsp+1D0h+var_40]
  }
}

/*
==============
G_Items_WeaponPickup_TraceGround_Legacy
==============
*/
void G_Items_WeaponPickup_TraceGround_Legacy(const gentity_s *const pickupEnt, const WeaponDef *const pickupWeapDef, const vec3_t *pickupAngles, gentity_s *const dropEnt, const WeaponDef *const dropWeapDef)
{
  char v32; 
  char v33; 
  vec3_t *p_outRotatedOffset; 
  bool v42; 
  int contentmask; 
  int v49; 
  int v50; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outRotatedOffset; 
  Bounds bounds; 
  vec3_t outRotatedHalfSize; 
  vec3_t v91; 
  trace_t results; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RBX = pickupEnt;
  if ( !pickupEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 295, ASSERT_TYPE_ASSERT, "(pickupEnt)", (const char *)&queryFormat, "pickupEnt") )
    __debugbreak();
  if ( !pickupWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 296, ASSERT_TYPE_ASSERT, "(pickupWeapDef)", (const char *)&queryFormat, "pickupWeapDef") )
    __debugbreak();
  if ( !dropEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 297, ASSERT_TYPE_ASSERT, "(dropEnt)", (const char *)&queryFormat, "dropEnt") )
    __debugbreak();
  if ( !dropWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 298, ASSERT_TYPE_ASSERT, "(dropWeapDef)", (const char *)&queryFormat, "dropWeapDef") )
    __debugbreak();
  G_Items_GetTunnelTraceOffset(_RBX, pickupAngles, pickupWeapDef, &outRotatedOffset, &outRotatedHalfSize);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1B0h+outRotatedOffset]
    vaddss  xmm1, xmm0, dword ptr [rbx+130h]
    vmovss  xmm2, dword ptr [rsp+1B0h+outRotatedOffset+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+1B0h+start], xmm1
    vmovss  xmm1, dword ptr [rsp+1B0h+outRotatedOffset+8]
    vaddss  xmm2, xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+1B0h+start+8], xmm2
    vmovss  dword ptr [rsp+1B0h+start+4], xmm0
  }
  G_Items_GetTunnelTraceOffset(dropEnt, pickupAngles, dropWeapDef, &outRotatedOffset, &v91);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1B0h+start]
    vmovss  xmm9, dword ptr [rsp+1B0h+outRotatedOffset]
    vmovss  xmm10, dword ptr [rsp+1B0h+outRotatedOffset+4]
    vmovss  xmm11, dword ptr [rsp+1B0h+outRotatedOffset+8]
  }
  _RSI = DVARFLT_g_dropWeaponHeight;
  __asm
  {
    vsubss  xmm1, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsp+1B0h+start+4]
    vmovss  dword ptr [rsp+1B0h+start], xmm1
    vsubss  xmm1, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsp+1B0h+start+8]
    vmovss  dword ptr [rsp+1B0h+start+4], xmm1
    vsubss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rsp+1B0h+start+8], xmm1
  }
  if ( !DVARFLT_g_dropWeaponHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+28h]
    vmovss  xmm8, dword ptr [rbp+0B0h+outRotatedHalfSize+8]
    vmovss  xmm7, dword ptr [rbp+0B0h+var_118+8]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
  }
  if ( v32 | v33 )
    goto LABEL_20;
  __asm { vucomiss xmm7, xmm6 }
  if ( v33 )
    goto LABEL_19;
  __asm { vucomiss xmm8, xmm6 }
  if ( v33 )
  {
LABEL_19:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+1B0h+outRotatedOffset], xmm0
      vaddss  xmm0, xmm2, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+1B0h+outRotatedOffset+8], xmm0
      vmovss  dword ptr [rsp+1B0h+outRotatedOffset+4], xmm1
    }
    p_outRotatedOffset = &outRotatedOffset;
  }
  else
  {
LABEL_20:
    __asm { vcomiss xmm7, xmm6 }
    if ( v32 )
    {
      v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 328, ASSERT_TYPE_SANITY, "( droppedHalfSize[2] >= 0.f )", (const char *)&queryFormat, "droppedHalfSize[2] >= 0.f");
      v32 = 0;
      if ( v42 )
        __debugbreak();
    }
    __asm { vcomiss xmm8, xmm6 }
    if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 329, ASSERT_TYPE_SANITY, "( pickedupHalfSize[2] >= 0.f )", (const char *)&queryFormat, "pickedupHalfSize[2] >= 0.f") )
      __debugbreak();
    __asm
    {
      vmaxss  xmm2, xmm7, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rsp+1B0h+start]
      vmovss  xmm1, dword ptr [rsp+1B0h+start+4]
      vmovss  dword ptr [rsp+1B0h+end], xmm0
      vaddss  xmm0, xmm2, cs:__real@3f800000
      vmovss  dword ptr [rbp+0B0h+bounds.halfSize+8], xmm2
      vmovss  dword ptr [rbp+0B0h+bounds.halfSize+4], xmm2
      vmovss  dword ptr [rsp+1B0h+bounds.halfSize], xmm2
      vaddss  xmm2, xmm0, dword ptr [rsp+1B0h+start+8]
      vmovss  dword ptr [rsp+1B0h+end+8], xmm2
      vmovss  dword ptr [rsp+1B0h+bounds.midPoint], xmm9
      vmovss  dword ptr [rsp+1B0h+bounds.midPoint+4], xmm10
      vmovss  dword ptr [rsp+1B0h+bounds.midPoint+8], xmm11
      vmovss  dword ptr [rsp+1B0h+end+4], xmm1
    }
    contentmask = G_Items_ClipMask(_RBX);
    v49 = 2047;
    if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
      v50 = EntHandle::entnum(&dropEnt->r.ownerNum);
    else
      v50 = 2047;
    G_Main_TraceCapsule(&results, &start, &end, &bounds, v50, contentmask);
    if ( !results.allsolid )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+1B0h+start+8]
        vmovss  xmm0, dword ptr [rsp+1B0h+end]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+start]
        vmovss  xmm5, [rbp+0B0h+results.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rsp+1B0h+start]
        vmovss  xmm1, dword ptr [rsp+1B0h+end+4]
        vmovss  dword ptr [rsp+1B0h+end], xmm0
        vsubss  xmm0, xmm1, dword ptr [rsp+1B0h+start+4]
        vmulss  xmm2, xmm0, xmm5
        vmovss  xmm0, dword ptr [rsp+1B0h+end+8]
        vaddss  xmm3, xmm2, dword ptr [rsp+1B0h+start+4]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rsp+1B0h+end+4], xmm3
        vaddss  xmm3, xmm2, xmm4
        vsubss  xmm0, xmm4, xmm8
        vmovss  dword ptr [rsp+1B0h+end+8], xmm3
        vmovss  dword ptr [rsp+1B0h+start+8], xmm0
      }
      if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
        v49 = EntHandle::entnum(&dropEnt->r.ownerNum);
      G_Main_TraceCapsule(&results, &end, &start, &bounds, v49, contentmask);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1B0h+start]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+end]
        vmovss  xmm5, [rbp+0B0h+results.fraction]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rsp+1B0h+end]
        vmovss  xmm1, dword ptr [rsp+1B0h+start+4]
        vmovss  dword ptr [rsp+1B0h+start], xmm0
        vsubss  xmm0, xmm1, dword ptr [rsp+1B0h+end+4]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rsp+1B0h+end+4]
        vmovss  xmm0, dword ptr [rsp+1B0h+start+8]
        vsubss  xmm1, xmm0, dword ptr [rsp+1B0h+end+8]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rsp+1B0h+start+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+1B0h+end+8]
        vmovss  dword ptr [rsp+1B0h+start+8], xmm3
      }
    }
    p_outRotatedOffset = &start;
  }
  G_SetOriginAndAngle(dropEnt, p_outRotatedOffset, pickupAngles, 1, 1);
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
G_LoadWeaponCue
==============
*/
void G_LoadWeaponCue(SaveGame *save)
{
  EntHandle *droppedWeaponCue; 
  EntHandle *v3; 
  __int64 v4; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  EntHandle *droppedEquipmentCue; 
  __int64 v11; 
  EntHandle *v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1284, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  droppedWeaponCue = level.droppedWeaponCue;
  v3 = level.droppedWeaponCue;
  v4 = 32i64;
  do
  {
    SaveMemory_LoadRead(&buffer, 4, save);
    number = droppedWeaponCue->number;
    if ( droppedWeaponCue->number )
    {
      v6 = number;
      v7 = number - 1;
      if ( v7 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v8 = v6 - 1;
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v8] )
      {
        LODWORD(v19) = droppedWeaponCue->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
          __debugbreak();
      }
      if ( droppedWeaponCue->number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1289, ASSERT_TYPE_ASSERT, "(!level.droppedWeaponCue[i].isDefined())", (const char *)&queryFormat, "!level.droppedWeaponCue[i].isDefined()") )
        __debugbreak();
    }
    v9 = buffer;
    if ( buffer > 0x800 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBBDD0, 1126i64, buffer);
      v9 = buffer;
    }
    if ( v9 )
      EntHandle::setEnt(v3, &g_entities[v9 - 1]);
    ++v3;
    ++droppedWeaponCue;
    --v4;
  }
  while ( v4 );
  droppedEquipmentCue = level.droppedEquipmentCue;
  v11 = 8i64;
  v12 = level.droppedEquipmentCue;
  do
  {
    SaveMemory_LoadRead(&buffer, 4, save);
    v13 = droppedEquipmentCue->number;
    if ( droppedEquipmentCue->number )
    {
      v14 = v13;
      v15 = v13 - 1;
      if ( v15 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v16 = v14 - 1;
      if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v16] )
      {
        LODWORD(v19) = droppedEquipmentCue->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
          __debugbreak();
      }
      if ( droppedEquipmentCue->number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1301, ASSERT_TYPE_ASSERT, "(!level.droppedEquipmentCue[i].isDefined())", (const char *)&queryFormat, "!level.droppedEquipmentCue[i].isDefined()") )
        __debugbreak();
    }
    v17 = buffer;
    if ( buffer > 0x800 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBBDD0, 1127i64, buffer);
      v17 = buffer;
    }
    if ( v17 )
      EntHandle::setEnt(v12, &g_entities[v17 - 1]);
    ++v12;
    ++droppedEquipmentCue;
    --v11;
  }
  while ( v11 );
}

/*
==============
G_SaveWeaponCue
==============
*/
void G_SaveWeaponCue(MemoryFile *memFile)
{
  EntHandle *droppedWeaponCue; 
  EntHandle *droppedEquipmentCue; 
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1256, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  droppedWeaponCue = level.droppedWeaponCue;
  droppedEquipmentCue = level.droppedEquipmentCue;
  do
  {
    number = droppedWeaponCue->number;
    if ( !droppedWeaponCue->number )
      goto LABEL_35;
    v5 = number;
    v6 = number - 1;
    if ( v6 >= 0x800 )
    {
      LODWORD(v21) = 2048;
      LODWORD(v20) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v7 = v5 - 1;
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v7] )
    {
      LODWORD(v21) = droppedWeaponCue->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v21) )
        __debugbreak();
    }
    v8 = droppedWeaponCue->number;
    if ( droppedWeaponCue->number )
    {
      if ( (unsigned int)v8 - 1 >= 0x7FF )
      {
        LODWORD(v21) = 2047;
        LODWORD(v20) = v8 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v9 = droppedWeaponCue->number;
      if ( (unsigned int)(v9 - 1) >= 0x800 )
      {
        LODWORD(v21) = 2048;
        LODWORD(v20) = v9 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v10 = v9 - 1;
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v10] )
      {
        LODWORD(v21) = droppedWeaponCue->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v21) )
          __debugbreak();
      }
      v11 = (__int16)(droppedWeaponCue->number - 1) + 1;
    }
    else
    {
LABEL_35:
      v11 = 0;
    }
    p = v11;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++droppedWeaponCue;
  }
  while ( (__int64)droppedWeaponCue < (__int64)level.droppedEquipmentCue );
  do
  {
    v12 = droppedEquipmentCue->number;
    if ( !droppedEquipmentCue->number )
      goto LABEL_67;
    v13 = v12;
    v14 = v12 - 1;
    if ( v14 >= 0x800 )
    {
      LODWORD(v21) = 2048;
      LODWORD(v20) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v15 = v13 - 1;
    if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v15] )
    {
      LODWORD(v21) = droppedEquipmentCue->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v21) )
        __debugbreak();
    }
    v16 = droppedEquipmentCue->number;
    if ( droppedEquipmentCue->number )
    {
      if ( (unsigned int)v16 - 1 >= 0x7FF )
      {
        LODWORD(v21) = 2047;
        LODWORD(v20) = v16 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v17 = droppedEquipmentCue->number;
      if ( (unsigned int)(v17 - 1) >= 0x800 )
      {
        LODWORD(v21) = 2048;
        LODWORD(v20) = v17 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v18 = v17 - 1;
      if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v18] )
      {
        LODWORD(v21) = droppedEquipmentCue->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v21) )
          __debugbreak();
      }
      v19 = (__int16)(droppedEquipmentCue->number - 1) + 1;
    }
    else
    {
LABEL_67:
      v19 = 0;
    }
    p = v19;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++droppedEquipmentCue;
  }
  while ( (__int64)droppedEquipmentCue < (__int64)&level.fFogOpaqueDist );
}

