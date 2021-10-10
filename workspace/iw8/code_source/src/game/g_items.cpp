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
  unsigned int v10; 
  ClipAmmo *ammoInClip; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  int MaxPickupableAmmo; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  ClipAmmo *v21; 
  int v22; 
  int v23; 
  bool v24; 
  int IsClipOnly; 
  int AmmoNotInClip; 
  int ammoCount; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  const WeaponDef *v31; 
  BgWeaponMap *weaponMap; 
  AmmoStore v33; 
  AmmoStore result; 
  AmmoStore r_ammoType; 

  v24 = isAlternate;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 95, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps", isAlternate) )
    __debugbreak();
  weaponMap = GWeaponMap::GetInstance();
  if ( !BG_PlayerHasWeapon(weaponMap, ps, weapon) && !BG_PlayerHasCompatibleWeapon(weaponMap, ps, weapon, isAlternate) )
    return 0i64;
  IsClipOnly = BG_WeaponIsClipOnly(weapon, isAlternate);
  v31 = BG_WeaponDef(weapon, isAlternate);
  r_ammoType = *BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  ammoCount = BG_GetAmmoPlayerMax(weaponMap, ps, weapon, isAlternate, &NULL_WEAPON);
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, weapon, isAlternate);
  BG_AddGlobalAmmoForAmmoType(ps, &r_ammoType, count);
  v10 = 0;
  ammoInClip = ps->weapCommon.ammoInClip;
  v29 = 0i64;
  v12 = 0i64;
  v30 = 2i64;
  v28 = 2i64;
  do
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v13 = v12;
    result = *BG_AmmoStoreForWeapon(&v33, weapon, isAlternate);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_HasLadderHand(ps) && v12 == 1 )
      v13 = 0i64;
    while ( !BG_IsClipCompatible(&ammoInClip->clipIndex, &result) )
    {
      ++v10;
      ++ammoInClip;
      if ( v10 >= 0xF )
      {
        v10 = 0;
        v14 = 0;
        goto LABEL_21;
      }
    }
    v14 = ammoInClip->ammoCount[v13];
    v10 = 0;
LABEL_21:
    *((_DWORD *)&v29 + v12) = v14;
    ammoInClip = ps->weapCommon.ammoInClip;
    ++v12;
    --v28;
  }
  while ( v28 );
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
  if ( v31->iSharedAmmoCapIndex >= 0 )
  {
    MaxPickupableAmmo = BG_GetMaxPickupableAmmo(weaponMap, ps, weapon, isAlternate);
    v16 = MaxPickupableAmmo;
    if ( MaxPickupableAmmo < 0 )
    {
      if ( IsClipOnly )
      {
        result = *BG_AmmoStoreForWeapon(&v33, weapon, isAlternate);
        BG_AddClipAmmo(ps, &result, WEAPON_HAND_DEFAULT, v16);
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
  v17 = BG_GetAmmoNotInClip(ps, weapon, isAlternate) - AmmoNotInClip;
  v18 = 0i64;
  if ( v17 < 0 )
    v17 = 0;
  do
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v19 = v18;
    result = *BG_AmmoStoreForWeapon(&v33, weapon, v24);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_HasLadderHand(ps) && v18 == 1 )
      v19 = 0i64;
    v20 = 0;
    v21 = ps->weapCommon.ammoInClip;
    while ( !BG_IsClipCompatible(&v21->clipIndex, &result) )
    {
      ++v20;
      ++v21;
      if ( v20 >= 0xF )
      {
        v22 = 0;
        goto LABEL_53;
      }
    }
    v22 = v21->ammoCount[v19];
LABEL_53:
    v23 = v22 - *((_DWORD *)&v29 + v18++);
    v17 += v23;
    --v30;
  }
  while ( v30 );
  return (unsigned int)v17;
}

/*
==============
G_Items_CheckPenetration
==============
*/
char G_Items_CheckPenetration(const Weapon *r_weapon, const tmat43_t<vec3_t> *penetrationTestMatrix)
{
  XModel *v4; 
  XModel *v5; 
  const PhysicsAsset *physicsAsset; 
  double InstantiatiationPenetrationDepthForAsset; 
  Physics_InstantiateShapeOverride shapeOverride; 
  vec4_t out; 

  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v4 = GUtils::ms_gUtils->GetWeaponWorldModels(GUtils::ms_gUtils, r_weapon);
  v5 = v4;
  if ( !v4 )
    return 0;
  physicsAsset = v4->physicsAsset;
  if ( !physicsAsset )
    return 0;
  shapeOverride.shapeOverride = -1;
  shapeOverride.customShape = NULL;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.massProperties = NULL;
  *(_WORD *)&shapeOverride.overrideMass = 0;
  shapeOverride.overrideTensor = 0;
  shapeOverride.shapeAddendum = -1;
  Axis43ToQuat(penetrationTestMatrix, &out);
  InstantiatiationPenetrationDepthForAsset = Physics_GetInstantiatiationPenetrationDepthForAsset(PHYSICS_WORLD_ID_FIRST, physicsAsset, &penetrationTestMatrix->m[3], &out, &shapeOverride, 512);
  if ( *(float *)&InstantiatiationPenetrationDepthForAsset <= 0.0 )
    return 0;
  Com_PrintWarning(15, "Weapon %s dropped at (%.2f,%.2f,%.2f) would be penetrating collision by %.2f units - drop failed\n", v5->name, penetrationTestMatrix->m[3].v[0], penetrationTestMatrix->m[3].v[1], penetrationTestMatrix->m[3].v[2], *(float *)&InstantiatiationPenetrationDepthForAsset);
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
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  gentity_s *v14; 
  float v16; 
  float v17; 
  float v18; 
  const dvar_t *v19; 
  float value; 
  const dvar_t *v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v30; 
  G_PhysicsObject *v33; 
  unsigned int v34; 
  int NumRigidBodys; 
  signed int v36; 
  hknpBodyId *RigidBodyID; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  float outRadians[2]; 
  gentity_s *v45; 
  vec3_t outAxis; 
  vec3_t linearVelocity; 
  tmat43_t<vec3_t> matrix; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 

  v58 = v5;
  v57 = v6;
  v56 = v7;
  v14 = weapEnt;
  v55 = v8;
  v54 = v9;
  v53 = v10;
  v45 = weapEnt;
  v52 = v11;
  v51 = v12;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_EnablePhysicsDelayed");
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2304, ASSERT_TYPE_ASSERT, "( weapEnt )", (const char *)&queryFormat, "weapEnt") )
    __debugbreak();
  if ( v14->s.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2305, ASSERT_TYPE_ASSERT, "( weapEnt->s.eType == ET_ITEM )", (const char *)&queryFormat, "weapEnt->s.eType == ET_ITEM") )
    __debugbreak();
  G_Items_GetStateFromTag(dropper, tagName, v14, &matrix, 0);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v16 = 1000.0 / (float)level.frameDuration;
  v17 = matrix.m[3].v[1] - prevMatrix->m[3].v[1];
  linearVelocity.v[0] = (float)(matrix.m[3].v[0] - prevMatrix->m[3].v[0]) * v16;
  v18 = matrix.m[3].v[2] - prevMatrix->m[3].v[2];
  linearVelocity.v[1] = v17 * v16;
  linearVelocity.v[2] = v18 * v16;
  MatrixTranspose((const tmat33_t<vec3_t> *)prevMatrix, &out);
  MatrixMultiply(&out, (const tmat33_t<vec3_t> *)&matrix, &v50);
  MatrixToAngleRadAxis(&v50, &outAxis, outRadians);
  v19 = DVARFLT_actorDropItemMaxVelocity;
  outAxis.v[0] = (float)(v16 * outRadians[0]) * outAxis.v[0];
  outAxis.v[1] = (float)(v16 * outRadians[0]) * outAxis.v[1];
  outAxis.v[2] = (float)(v16 * outRadians[0]) * outAxis.v[2];
  if ( !DVARFLT_actorDropItemMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorDropItemMaxVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  value = v19->current.value;
  v21 = DVARFLT_actorDropItemMaxAngularVelocity;
  if ( !DVARFLT_actorDropItemMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "actorDropItemMaxAngularVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.value;
  v23 = LODWORD(outAxis.v[1]);
  *(float *)&v23 = (float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(outAxis.v[0] * outAxis.v[0])) + (float)(outAxis.v[2] * outAxis.v[2]);
  v24 = v23;
  v25 = LODWORD(linearVelocity.v[1]);
  *(float *)&v25 = (float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(linearVelocity.v[0] * linearVelocity.v[0])) + (float)(linearVelocity.v[2] * linearVelocity.v[2]);
  if ( *(float *)&v25 > (float)(value * value) )
  {
    *(float *)&v25 = fsqrt(*(float *)&v25);
    _XMM1 = v25;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm5, xmm0
    }
    linearVelocity.v[0] = (float)(linearVelocity.v[0] * (float)(1.0 / *(float *)&_XMM0)) * value;
    linearVelocity.v[2] = (float)(linearVelocity.v[2] * (float)(1.0 / *(float *)&_XMM0)) * value;
    linearVelocity.v[1] = (float)(linearVelocity.v[1] * (float)(1.0 / *(float *)&_XMM0)) * value;
  }
  if ( *(float *)&v24 > (float)(v22 * v22) )
  {
    v30 = v24;
    *(float *)&v30 = fsqrt(*(float *)&v24);
    _XMM1 = v30;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm5, xmm0
    }
    outAxis.v[0] = (float)(outAxis.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v22;
    outAxis.v[2] = (float)(outAxis.v[2] * (float)(1.0 / *(float *)&_XMM0)) * v22;
    outAxis.v[1] = (float)(outAxis.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v22;
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&matrix, &v14->r.currentAngles);
  G_SetOriginAndAngle(v14, &matrix.m[3], &v14->r.currentAngles, 1, 1);
  G_Items_EnablePhysics(v14);
  v33 = G_PhysicsObject_Get(v14);
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2348, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v34 = v33->physicsInstances[0];
  if ( v34 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v34);
    v36 = 0;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v43) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v43) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&outRadians[1], PHYSICS_WORLD_ID_FIRST, v34, v36);
        Physics_SetRigidBodyVelocity(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &linearVelocity, &outAxis);
        ++v36;
      }
      while ( v36 < NumRigidBodys );
      v14 = v45;
    }
    v38 = linearVelocity.v[0];
    v39 = linearVelocity.v[1];
    v14->s.lerp.pos.trTime = level.time;
    v14->s.lerp.apos.trTime = level.time;
    v14->s.lerp.pos.trDelta.v[0] = v38;
    v40 = linearVelocity.v[2];
    v14->s.lerp.pos.trDelta.v[1] = v39;
    v41 = outAxis.v[0];
    v14->s.lerp.pos.trDelta.v[2] = v40;
    v42 = outAxis.v[1];
    v14->s.lerp.apos.trDelta.v[0] = v41;
    v14->s.lerp.apos.trDelta.v[2] = outAxis.v[2];
    v14->s.lerp.apos.trDelta.v[1] = v42;
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
  AmmoStore *v6; 
  bool v7; 
  unsigned int v8; 
  PlayerHandIndex v9; 
  GWeaponMap *Instance; 
  ClipAmmo *ammoInClip; 
  __int64 v12; 
  __int64 v13; 
  int IsClipCompatible; 
  int v15; 
  int v16; 
  int ammoCount; 
  int ClipSize; 
  __int64 v19; 
  AmmoStore v20; 
  AmmoStore result; 
  AmmoStore r_ammoType; 

  v6 = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  v7 = weapon->weaponIdx == 0;
  r_ammoType = *v6;
  if ( !v7 && weapon->weaponIdx < BG_GetNumWeapons() )
  {
    v8 = 0;
    ClipSize = BG_GetClipSize(ps, weapon, isAlternate);
    v9 = WEAPON_HAND_DEFAULT;
    Instance = GWeaponMap::GetInstance();
    ammoInClip = ps->weapCommon.ammoInClip;
    v12 = 0i64;
    v19 = BG_PlayerDualWieldingWeapon(Instance, ps, weapon) != 0;
    do
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v13 = v12;
      result = *BG_AmmoStoreForWeapon(&v20, weapon, isAlternate);
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( BG_HasLadderHand(ps) && v12 == 1 )
        v13 = 0i64;
      while ( 1 )
      {
        IsClipCompatible = BG_IsClipCompatible(&ammoInClip->clipIndex, &result);
        if ( IsClipCompatible )
          break;
        ++v8;
        ++ammoInClip;
        if ( v8 >= 0xF )
          goto LABEL_17;
      }
      IsClipCompatible = ammoInClip->ammoCount[v13];
LABEL_17:
      v15 = ClipSize - IsClipCompatible;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      result = *BG_AmmoStoreForWeapon(&v20, weapon, isAlternate);
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v16 = 0;
      while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v16].ammoType, &result) )
      {
        if ( (unsigned int)++v16 >= 0xF )
          goto LABEL_26;
      }
      if ( (playerState_s *)((char *)ps + 68 * v16) == (playerState_s *)-1912i64 )
      {
LABEL_26:
        v8 = 0;
        ammoCount = 0;
        goto LABEL_27;
      }
      ammoCount = ps->weapCommon.ammoNotInClip[v16].ammoCount;
      v8 = 0;
LABEL_27:
      if ( v15 <= ammoCount )
        ammoCount = v15;
      if ( ammoCount > 0 )
      {
        result = *BG_AmmoStoreForWeapon(&v20, weapon, isAlternate);
        BG_AddGlobalAmmoForAmmoType(ps, &r_ammoType, -ammoCount);
        BG_AddClipAmmo(ps, &result, v9, ammoCount);
      }
      ++v9;
      ammoInClip = ps->weapCommon.ammoInClip;
      ++v12;
    }
    while ( v12 <= v19 );
  }
}

/*
==============
G_Items_FinishSpawningCallback
==============
*/
void G_Items_FinishSpawningCallback(gentity_s *ent)
{
  bool v2; 
  gentity_s *v3; 
  vec3_t *p_currentOrigin; 
  int v5; 
  float v6; 
  float v7; 
  int contentmask; 
  int passEntityNum; 
  float v10; 
  float v11; 
  float v12; 
  int number; 
  const char *v14; 
  const char *v15; 
  __int16 EntityHitId; 
  vec3_t start; 
  vec3_t end; 
  vec3_t origin; 
  vec3_t angles; 
  tmat33_t<vec3_t> forward; 
  Bounds bounds; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_FinishSpawningCallback");
  v2 = (ent->spawnflags & 1) == 0;
  v3 = ent;
  ent->handler = 22;
  if ( !v2 )
  {
    p_currentOrigin = &ent->r.currentOrigin;
LABEL_9:
    G_SetOrigin(v3, p_currentOrigin, 1, 1);
    goto LABEL_10;
  }
  bounds.halfSize.v[1] = FLOAT_1_0;
  bounds.halfSize.v[2] = FLOAT_1_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  v5 = G_Items_ClipMask(ent);
  v6 = ent->r.currentOrigin.v[2];
  v7 = ent->r.currentOrigin.v[0];
  contentmask = v5;
  passEntityNum = ent->s.number;
  start.v[1] = ent->r.currentOrigin.v[1];
  end.v[1] = start.v[1];
  end.v[2] = v6 - 4096.0;
  start.v[0] = v7;
  start.v[2] = v6;
  end.v[0] = v7;
  G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, contentmask);
  if ( results.startsolid )
  {
    v10 = ent->r.currentOrigin.v[2];
    v11 = ent->r.currentOrigin.v[0];
    v12 = ent->r.currentOrigin.v[1];
    number = ent->s.number;
    start.v[2] = v10 - 15.0;
    end.v[2] = v10 - 4096.0;
    start.v[0] = v11;
    start.v[1] = v12;
    end.v[0] = v11;
    end.v[1] = v12;
    G_Main_TraceCapsule(&results, &start, &end, &bounds, number, contentmask);
    if ( results.startsolid )
    {
      v14 = vtos(&ent->r.currentOrigin);
      v15 = SL_ConvertToString(ent->classname);
      Com_Printf(1, "ERROR: FinishSpawningItem - %s startsolid at %s\n", v15, v14);
    }
  }
  EntityHitId = Trace_GetEntityHitId(&results);
  ent->s.groundEntityNum = EntityHitId;
  g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
  origin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  origin.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  origin.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  if ( results.fraction >= 1.0 )
  {
    p_currentOrigin = &origin;
    v3 = ent;
    goto LABEL_9;
  }
  forward.m[2] = results.normal;
  AngleVectors(&ent->r.currentAngles, forward.m, NULL, NULL);
  Vec3Cross(&forward.m[2], forward.m, &forward.m[1]);
  Vec3Cross(&forward.m[1], &forward.m[2], forward.m);
  AxisToAngles(&forward, &angles);
  angles.v[2] = angles.v[2] + 90.0;
  G_SetOriginAndAngle(ent, &origin, &angles, 1, 1);
LABEL_10:
  SV_LinkEntity(ent);
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
  unsigned int v2; 
  EntHandle *v3; 
  float v4; 
  unsigned int v5; 
  unsigned int v6; 
  EntHandle *v7; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 
  gentity_s *v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  gentity_s *v30; 
  __int64 v32; 
  __int64 v33; 

  v2 = maxDroppedItems;
  v3 = items;
  if ( !items )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1136, ASSERT_TYPE_ASSERT, "( items )", (const char *)&queryFormat, "items") )
      __debugbreak();
    v3 = NULL;
  }
  v4 = FLOAT_N1_0;
  v5 = 0;
  v6 = -1;
  if ( v2 )
  {
    v7 = v3;
    _XMM9 = 0i64;
    do
    {
      number = v7->number;
      if ( !v7->number )
        return v5;
      v10 = number;
      v11 = number - 1;
      if ( v11 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v12 = v10 - 1;
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v12] )
      {
        LODWORD(v33) = v7->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v33) )
          __debugbreak();
      }
      v13 = v7->number;
      if ( !v7->number )
        return v5;
      if ( (unsigned int)v13 - 1 >= 0x7FF )
      {
        LODWORD(v33) = 2047;
        LODWORD(v32) = v13 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      v14 = v7->number;
      if ( (unsigned int)(v14 - 1) >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v14 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v15 = v14 - 1;
      if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v15] )
      {
        LODWORD(v33) = v7->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v33) )
          __debugbreak();
      }
      v16 = g_entities;
      v17 = v7->number;
      if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&g_entities[v17 - 1].flags, ACTIVE, 0x10u) )
      {
        LODWORD(v18) = v16[v17 - 1].c.item[0].weapon.weaponIdx;
        if ( (unsigned int)v18 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v33) = bg_lastParsedWeaponIndex;
          LODWORD(v32) = v16[v17 - 1].c.item[0].weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v32, v33) )
            __debugbreak();
        }
        v18 = (unsigned __int16)v18;
        if ( !bg_weaponDefs[(unsigned __int16)v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        if ( !bg_weaponDefs[v18]->avoidDropCleanup )
        {
          v19 = 0;
          if ( level.maxclients > 0 )
          {
            v20 = 0i64;
            v21 = 0i64;
            do
            {
              if ( level.clients[v21].sess.connected == CON_CONNECTED && level.clients[v21].sess.sessionState == SESS_STATE_PLAYING && G_IsEntityInUse(v19) )
              {
                v22 = v16[v17 - 1].r.currentOrigin.v[0] - g_entities[v20].r.currentOrigin.v[0];
                v23 = LODWORD(v16[v17 - 1].r.currentOrigin.v[1]);
                *(float *)&v23 = v16[v17 - 1].r.currentOrigin.v[1] - g_entities[v20].r.currentOrigin.v[1];
                v24 = v16[v17 - 1].r.currentOrigin.v[2] - g_entities[v20].r.currentOrigin.v[2];
                *(float *)&v23 = (float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v22 * v22)) + (float)(v24 * v24);
                _XMM2 = v23;
                __asm { vminss  xmm6, xmm2, xmm6 }
              }
              ++v19;
              ++v21;
              ++v20;
            }
            while ( v19 < level.maxclients );
            v2 = maxDroppedItems;
          }
          if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
            __debugbreak();
          _XMM0 = (unsigned int)(level.time - level.frameDuration);
          __asm
          {
            vpcmpgtd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm6, xmm2
          }
          if ( *(float *)&_XMM0 > v4 )
          {
            v4 = *(float *)&_XMM0;
            v6 = v5;
          }
        }
      }
      ++v5;
      ++v7;
    }
    while ( v5 < v2 );
    if ( v6 != -1 )
      goto LABEL_60;
  }
  Com_PrintWarning(16, "Could not find a suitable weapon entity to free out of %i possible.  Using index zero.\n", v2);
  v6 = 0;
LABEL_60:
  v30 = EntHandle::ent(&items[v6]);
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1187, ASSERT_TYPE_ASSERT, "( freeItemEnt )", (const char *)&queryFormat, "freeItemEnt") )
    __debugbreak();
  G_FreeEntity(v30);
  EntHandle::setEnt(&items[v6], NULL);
  return v6;
}

/*
==============
G_Items_GetNeededStartAmmo
==============
*/
__int64 G_Items_GetNeededStartAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  __int16 v3; 
  int AmmoNotInClip; 
  bool v9; 
  GWeaponMap *Instance; 
  int v11; 
  BgWeaponHandle *weaponsEquipped; 
  int started; 
  int v14; 
  int AmmoInClip; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  bool HasPerk; 
  BgWeaponMap *weaponMap; 
  AmmoStore v22; 
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
  r_ammo2 = *BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  Instance = GWeaponMap::GetInstance();
  weaponMap = Instance;
  v11 = 0;
  weaponsEquipped = ps->weaponsEquipped;
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v11 >= 0xF )
    {
      LODWORD(v19) = 15;
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    Buf1 = *BgWeaponMap::GetWeapon(Instance, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
    if ( v3 && memcmp_0(&Buf1, weapon, 0x3Cui64) && (!isAlternate || BG_HasUnderbarrelAmmo(&Buf1)) )
    {
      result = *BG_AmmoStoreForWeapon(&v22, &Buf1, isAlternate);
      if ( BG_IsAmmoCompatible(&result, &r_ammo2) )
      {
        started = BG_StartAmmo(&Buf1, isAlternate, v9);
        v14 = started - BG_GetAmmoInClip(ps, &Buf1, isAlternate, WEAPON_HAND_DEFAULT);
        if ( BG_PlayerDualWieldingWeapon(weaponMap, ps, &Buf1) )
          v14 += started - BG_GetAmmoInClip(ps, &Buf1, isAlternate, WEAPON_HAND_LEFT);
        Instance = (GWeaponMap *)weaponMap;
        AmmoNotInClip -= v14;
        v9 = HasPerk;
      }
    }
    ++v11;
    ++weaponsEquipped;
  }
  while ( v11 < 15 );
  AmmoInClip = BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT);
  v16 = 0;
  if ( AmmoNotInClip >= 0 )
    v16 = AmmoNotInClip;
  v17 = v16 + AmmoInClip;
  if ( BG_PlayerDualWieldingWeapon(Instance, ps, weapon) )
    v17 += BG_GetAmmoInClip(ps, weapon, isAlternate, WEAPON_HAND_LEFT);
  return (unsigned int)(BG_StartAmmo(weapon, isAlternate, HasPerk) - v17);
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
  float v10; 
  float v11; 
  int v12; 
  Bounds *p_box; 
  vec3_t *v14; 
  float fraction; 
  float v16; 
  int fmt; 
  int contentmask; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  if ( !droppingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1512, ASSERT_TYPE_ASSERT, "( droppingEnt )", (const char *)&queryFormat, "droppingEnt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_GetStateFromTag");
  if ( tag && G_Utils_DObjGetWorldTagMatrix(droppingEnt, tag, matrix) )
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
      v10 = droppingEnt->r.box.midPoint.v[1];
      v11 = droppingEnt->r.box.midPoint.v[2];
      start.v[0] = droppingEnt->r.box.midPoint.v[0] + droppingEnt->r.currentOrigin.v[0];
      start.v[1] = v10 + droppingEnt->r.currentOrigin.v[1];
      start.v[2] = v11 + droppingEnt->r.currentOrigin.v[2];
      if ( droppedEnt )
      {
        v12 = G_Items_ClipMask(droppedEnt);
        p_box = &droppedEnt->r.box;
        contentmask = v12;
        fmt = droppingEnt->s.number;
      }
      else
      {
        *(_OWORD *)bounds.midPoint.v = _xmm;
        bounds.halfSize.v[1] = FLOAT_1_0;
        bounds.halfSize.v[2] = FLOAT_1_0;
        contentmask = 1169;
        fmt = droppingEnt->s.number;
        p_box = &bounds;
      }
      v14 = &matrix->m[3];
      G_Main_TraceCapsule(&results, &start, v14, p_box, fmt, contentmask);
      fraction = results.fraction;
      v14->v[0] = (float)((float)(v14->v[0] - start.v[0]) * results.fraction) + start.v[0];
      v14->v[1] = (float)((float)(v14->v[1] - start.v[1]) * fraction) + start.v[1];
      v14->v[2] = (float)((float)(v14->v[2] - start.v[2]) * fraction) + start.v[2];
    }
  }
  else
  {
    matrix->m[3].v[0] = droppingEnt->r.currentOrigin.v[0];
    matrix->m[3].v[1] = droppingEnt->r.currentOrigin.v[1];
    v16 = droppingEnt->r.currentOrigin.v[2];
    matrix->m[3].v[2] = v16;
    matrix->m[3].v[2] = v16 + droppingEnt->r.box.halfSize.v[2];
    AnglesToAxis(&droppingEnt->r.currentAngles, (tmat33_t<vec3_t> *)matrix);
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
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  tmat33_t<vec3_t> axis; 
  Bounds bounds; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 266, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 267, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
  {
    DObjGetVisibleBounds(ServerDObjForEnt, &bounds);
    v10 = bounds.midPoint.v[0];
    v11 = bounds.midPoint.v[1];
    v12 = bounds.midPoint.v[2];
    v13 = bounds.halfSize.v[0];
    v14 = bounds.halfSize.v[1];
    v15 = bounds.halfSize.v[2];
  }
  else
  {
    v10 = 0.0;
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
  }
  AnglesToAxis(angles, &axis);
  if ( &bounds == (Bounds *)outRotatedOffset && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v16 = v11 * axis.m[1].v[1];
  v17 = v12 * axis.m[2].v[1];
  outRotatedOffset->v[0] = (float)((float)(v11 * axis.m[1].v[0]) + (float)(v10 * axis.m[0].v[0])) + (float)(v12 * axis.m[2].v[0]);
  v18 = v16 + (float)(v10 * axis.m[0].v[1]);
  v19 = v11 * axis.m[1].v[2];
  v20 = v18 + v17;
  v21 = v12 * axis.m[2].v[2];
  outRotatedOffset->v[1] = v20;
  outRotatedOffset->v[2] = (float)(v19 + (float)(v10 * axis.m[0].v[2])) + v21;
  if ( &bounds == (Bounds *)outRotatedHalfSize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v22 = v14 * axis.m[1].v[1];
  v23 = v15 * axis.m[2].v[1];
  outRotatedHalfSize->v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v14 * axis.m[1].v[0]) + (float)(v13 * axis.m[0].v[0])) + (float)(v15 * axis.m[2].v[0])) & _xmm);
  v24 = v22 + (float)(v13 * axis.m[0].v[1]);
  v25 = v14 * axis.m[1].v[2];
  v26 = v24 + v23;
  v27 = v15 * axis.m[2].v[2];
  outRotatedHalfSize->v[1] = COERCE_FLOAT(LODWORD(v26) & _xmm);
  outRotatedHalfSize->v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v25 + (float)(v13 * axis.m[0].v[2])) + v27) & _xmm);
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
  gentity_s *v7; 
  const dvar_t *v8; 
  unsigned int unsignedInt; 
  EntHandle *v10; 
  const dvar_t *v11; 
  unsigned int v12; 
  GWeaponMap *Instance; 
  const char *WeaponName; 
  const WeaponDef *v15; 
  char *v16; 
  GItems *v17; 
  const dvar_t *v18; 
  DObj *ServerDObjForEnt; 
  DObj *v20; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  char dest[512]; 
  char output[512]; 
  char v28[1032]; 

  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_Launch");
  v7 = G_Utils_SpawnEntity();
  if ( isEquipment )
  {
    v8 = DCONST_DVARINT_g_maxDroppedEquipment;
    if ( !DCONST_DVARINT_g_maxDroppedEquipment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_maxDroppedEquipment") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    unsignedInt = v8->current.unsignedInt;
    if ( unsignedInt - 1 > 7 )
    {
      LODWORD(v23) = 1;
      LODWORD(v22) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1329, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxDroppedEquipment ) && ( maxDroppedEquipment ) <= ( 8 )", "maxDroppedEquipment not in [1, MAX_DROPPED_EQUIPMENT]\n\t%i not in [%i, %i]", v22, v23, 8) )
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
      LODWORD(v23) = 1;
      LODWORD(v22) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1338, ASSERT_TYPE_ASSERT, "( 1 ) <= ( maxDroppedWeapon ) && ( maxDroppedWeapon ) <= ( ((32 >= 16) ? 32 : 16) )", "maxDroppedWeapon not in [1, MAX_DROPPED_WEAPONS]\n\t%i not in [%i, %i]", v22, v23, 32) )
        __debugbreak();
    }
    v10 = &level.droppedWeaponCue[(int)G_Items_GetFreeDropCueIdx(level.droppedWeaponCue, v12)];
  }
  EntHandle::setEnt(v10, v7);
  v7->s.eType = ET_ITEM;
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &v7->s, item);
  v7->s.inAltWeaponMode = 0;
  WeaponName = BG_GetWeaponName(item, output, 0x200u);
  Com_sprintf(dest, 0x200ui64, "weapon_%s", WeaponName);
  G_Utils_SetConstString(&v7->script_classname, dest);
  G_Utils_SetConstString(&v7->classname, dest);
  *(__m256i *)(&v7->c.beam + 3) = *(__m256i *)&item->weaponIdx;
  *(_OWORD *)(&v7->c.beam + 11) = *(_OWORD *)&item->attachmentVariationIndices[5];
  *(double *)(&v7->c.beam + 15) = *(double *)&item->attachmentVariationIndices[21];
  v7->c.mover.angle.pos1.v[2] = *(float *)&item->weaponCamo;
  *(_QWORD *)v7->r.box.midPoint.v = 0i64;
  v7->r.box.midPoint.v[2] = 0.0;
  v7->r.box.halfSize.v[0] = 1.0;
  v7->r.box.halfSize.v[1] = 1.0;
  v7->r.box.halfSize.v[2] = 1.0;
  G_PlayerUse_SetEntityUsable(v7, 1);
  if ( (unsigned __int16)(item->weaponIdx - 1) > 0x224u )
  {
    LODWORD(v24) = 549;
    LODWORD(v23) = 1;
    LODWORD(v22) = item->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1357, ASSERT_TYPE_ASSERT, "( 1 ) <= ( item.weaponIdx ) && ( item.weaponIdx ) <= ( (550 - 1) )", "item.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", v22, v23, v24) )
      __debugbreak();
  }
  v15 = BG_WeaponDef(item, 0);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1359, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( isEquipment && BG_WeaponHasStreamedModelsErrorCheck(item) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1361, ASSERT_TYPE_ASSERT, "(!isEquipment || !BG_WeaponHasStreamedModelsErrorCheck( item ))", "%s\n\tTransient equipment weapon models are not supported. They are not accounted for in the streaming limits.", "!isEquipment || !BG_WeaponHasStreamedModelsErrorCheck( item )") )
    __debugbreak();
  if ( !v15->worldModel )
  {
    v16 = BG_GetWeaponName(item, v28, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC200, 1128i64, (unsigned int)v7->s.number, v16);
  }
  v7->handler = 20;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v17 = GItems::ms_gItemsSystem;
  GItems::ms_gItemsSystem->SetEntModel(GItems::ms_gItemsSystem, v7, v15->worldModel);
  v17->SaveRiotShieldHealthFromOwner(v17, ownerEnt, v7, item);
  v17->RestrictPickupForOwner(v17, ownerEnt, v7);
  v7->flags = 0i64;
  v7->flags.m_flags[0] |= 0x200u;
  if ( !doPhysicsOnInit )
  {
    v18 = DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit;
    if ( !DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponLaunchCanDisablePhysicsOnInit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
      v7->flags.m_flags[1] |= 1u;
  }
  G_DObjUpdate(v7, 1);
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagInternal(&v7->flags, ACTIVE, 0x20u);
  ServerDObjForEnt = Com_GetServerDObjForEnt(v7);
  v20 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, item, 0, 0);
    BG_UpdatedWeaponBones(item, v20, 0);
  }
  Sys_ProfEndNamedEvent();
  return v7;
}

/*
==============
G_Items_RunItem
==============
*/
void G_Items_RunItem(gentity_s *ent)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  G_PhysicsObject *v9; 
  __int16 groundEntityNum; 
  trType_t trType; 
  trajectory_t_secure *p_pos; 
  float v13; 
  int FrameDuration; 
  int contentmask; 
  __int16 number; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  GMovingPlatformEntityTracking *p_movingPlatformTrack; 
  float v31; 
  float v32; 
  __int16 EntityIndex; 
  GItems *ItemSystem; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int16 EntityHitId; 
  GTrajectory v38; 
  trace_t results; 
  vec3_t angles; 
  vec3_t outPos; 
  vec3_t start; 
  float v43; 
  float v44; 
  float v45; 
  tmat33_t<vec3_t> forward; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_RunItem");
  if ( GMovingPlatformEntityTracking::UpdatePlatformTracking(&ent->movingPlatformTrack, ent) )
    goto LABEL_8;
  v9 = G_PhysicsObject_Get(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2420, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v9->physicsInstances[0] == -1 || ent->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH )
  {
LABEL_8:
    groundEntityNum = ent->s.groundEntityNum;
    if ( groundEntityNum == 2047 || level.gentities[groundEntityNum].s.lerp.pos.trType || G_Items_IsEntForceFall(ent) )
    {
      trType = ent->s.lerp.pos.trType;
      if ( trType != TR_GRAVITY && (unsigned int)(trType - 24) > 1 && (BG_IsCorpseEntity(&ent->s) || (ent->spawnflags & 1) == 0) )
      {
        ent->s.lerp.pos.trType = TR_GRAVITY;
        ent->s.lerp.pos.trTime = level.time;
        Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
        *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
        ent->s.lerp.pos.trDelta.v[2] = 0.0;
      }
    }
    p_pos = &ent->s.lerp.pos;
    if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
    {
      *(_QWORD *)angles.v = &v43;
      LODWORD(v45) = LODWORD(ent->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Z ^ LODWORD(ent->s.lerp.pos.trBase.v[2]);
      LODWORD(v44) = LODWORD(ent->s.lerp.pos.trBase.v[0]) ^ LODWORD(ent->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
      LODWORD(v43) = LODWORD(ent->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&angles, 0, 8ui64);
      angles.v[0] = v43;
      if ( (LODWORD(v43) & 0x7F800000) == 2139095040 || (angles.v[0] = v44, (LODWORD(v44) & 0x7F800000) == 2139095040) || (angles.v[0] = v45, (LODWORD(v45) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      v13 = ent->s.lerp.pos.trBase.v[1];
      v43 = ent->s.lerp.pos.trBase.v[0];
      v45 = ent->s.lerp.pos.trBase.v[2];
      v44 = v13;
    }
    angles.v[0] = v43;
    if ( (LODWORD(v43) & 0x7F800000) == 2139095040 || (angles.v[0] = v44, (LODWORD(v44) & 0x7F800000) == 2139095040) || (angles.v[0] = v45, (LODWORD(v45) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2454, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpTrBase )[0] ) && !IS_NAN( ( tmpTrBase )[1] ) && !IS_NAN( ( tmpTrBase )[2] )") )
        __debugbreak();
    }
    angles.v[0] = ent->s.lerp.pos.trDelta.v[0];
    if ( (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040 || (angles.v[0] = ent->s.lerp.pos.trDelta.v[1], (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040) || (angles.v[0] = ent->s.lerp.pos.trDelta.v[2], (LODWORD(angles.v[0]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2457, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ent->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ent->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( ent->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
    if ( p_pos->trType == TR_STATIONARY || ent->tagInfo )
    {
      G_Main_RunThink(ent);
    }
    else
    {
      v52 = v2;
      GTrajectory::GTrajectory(&v38, ent);
      FrameDuration = G_Level_GetFrameDuration();
      BgTrajectory::EvaluatePosTrajectory(&v38, level.time + FrameDuration, &outPos);
      angles.v[0] = outPos.v[0];
      if ( (LODWORD(outPos.v[0]) & 0x7F800000) == 2139095040 || (angles.v[0] = outPos.v[1], (LODWORD(outPos.v[1]) & 0x7F800000) == 2139095040) || (angles.v[0] = outPos.v[2], (LODWORD(outPos.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2471, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
          __debugbreak();
      }
      contentmask = G_Items_ClipMask(ent);
      if ( (float)((float)((float)((float)(outPos.v[1] - ent->r.currentOrigin.v[1]) * (float)(outPos.v[1] - ent->r.currentOrigin.v[1])) + (float)((float)(outPos.v[0] - ent->r.currentOrigin.v[0]) * (float)(outPos.v[0] - ent->r.currentOrigin.v[0]))) + (float)((float)(outPos.v[2] - ent->r.currentOrigin.v[2]) * (float)(outPos.v[2] - ent->r.currentOrigin.v[2]))) < 0.1 )
        outPos.v[2] = outPos.v[2] + -1.0;
      if ( EntHandle::isDefined(&ent->r.ownerNum) )
        number = EntHandle::entnum(&ent->r.ownerNum);
      else
        number = ent->s.number;
      G_Main_TraceCapsule(&results, &ent->r.currentOrigin, &outPos, &ent->r.box, number, contentmask);
      _XMM7 = LODWORD(FLOAT_1_0);
      if ( G_Items_IsEntForceFall(ent) )
      {
        _XMM0 = Trace_GetEntityHitId(&results);
        __asm
        {
          vpcmpeqd xmm3, xmm0, xmm1
          vblendvps xmm0, xmm7, xmm2, xmm3
        }
        results.fraction = *(float *)&_XMM0;
      }
      if ( results.fraction >= 1.0 )
      {
        v31 = outPos.v[1];
        ent->r.currentOrigin.v[0] = outPos.v[0];
        v32 = outPos.v[2];
        p_movingPlatformTrack = &ent->movingPlatformTrack;
      }
      else
      {
        v21 = ent->r.currentOrigin.v[0];
        v22 = ent->r.currentOrigin.v[1];
        v50 = v4;
        v23 = ent->r.currentOrigin.v[2];
        v49 = v5;
        v48 = v6;
        start.v[0] = (float)((float)(outPos.v[0] - v21) * results.fraction) + v21;
        v47 = v7;
        start.v[1] = (float)((float)(outPos.v[1] - v22) * results.fraction) + v22;
        start.v[2] = (float)((float)(outPos.v[2] - v23) * results.fraction) + v23;
        if ( !results.startsolid && results.fraction < 0.0099999998 )
        {
          v51 = v3;
          if ( results.normal.v[2] < 0.5 )
          {
            v24 = 1.0 - (float)((float)((float)((float)(outPos.v[1] - v22) * results.normal.v[1]) + (float)((float)(outPos.v[0] - v21) * results.normal.v[0])) + (float)((float)(outPos.v[2] - v23) * results.normal.v[2]));
            outPos.v[0] = outPos.v[0] + (float)(v24 * results.normal.v[0]);
            v53 = v1;
            outPos.v[2] = outPos.v[2] + (float)(results.normal.v[2] * v24);
            outPos.v[1] = outPos.v[1] + (float)(v24 * results.normal.v[1]);
            if ( EntHandle::isDefined(&ent->r.ownerNum) )
              v25 = EntHandle::entnum(&ent->r.ownerNum);
            else
              v25 = 2047;
            G_Main_TraceCapsule(&results, &start, &outPos, &ent->r.box, v25, contentmask);
            start.v[0] = (float)((float)(outPos.v[0] - start.v[0]) * results.fraction) + start.v[0];
            start.v[1] = (float)((float)(outPos.v[1] - start.v[1]) * results.fraction) + start.v[1];
            start.v[2] = (float)((float)(outPos.v[2] - start.v[2]) * results.fraction) + start.v[2];
          }
        }
        p_pos->trType = TR_LINEAR_STOP;
        ent->s.lerp.pos.trTime = level.time;
        v26 = DCONST_DVARINT_g_itemMaxExtrapolationTime;
        if ( !DCONST_DVARINT_g_itemMaxExtrapolationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_itemMaxExtrapolationTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        ent->s.lerp.pos.trDuration = v26->current.integer;
        Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
        v27 = start.v[1];
        ent->s.lerp.pos.trDelta.v[0] = start.v[0] - ent->r.currentOrigin.v[0];
        v28 = start.v[2];
        ent->s.lerp.pos.trDelta.v[1] = v27 - ent->r.currentOrigin.v[1];
        ent->s.lerp.pos.trDelta.v[2] = v28 - ent->r.currentOrigin.v[2];
        v29 = 1000.0 / (float)G_Level_GetFrameDuration();
        ent->s.lerp.pos.trDelta.v[0] = v29 * ent->s.lerp.pos.trDelta.v[0];
        ent->s.lerp.pos.trDelta.v[1] = v29 * ent->s.lerp.pos.trDelta.v[1];
        ent->s.lerp.pos.trDelta.v[2] = v29 * ent->s.lerp.pos.trDelta.v[2];
        if ( G_Items_IsEntForceFall(ent) )
        {
          GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagInternal(&ent->flags, GameModeFlagValues::ms_spValue, 0x23u);
          p_movingPlatformTrack = &ent->movingPlatformTrack;
          EntHandle::setEnt(&ent->movingPlatformTrack.m_trackEnt, NULL);
        }
        else
        {
          p_movingPlatformTrack = &ent->movingPlatformTrack;
        }
        v31 = start.v[1];
        ent->r.currentOrigin.v[0] = start.v[0];
        v32 = start.v[2];
      }
      ent->r.currentOrigin.v[2] = v32;
      ent->r.currentOrigin.v[1] = v31;
      SV_LinkEntity(ent);
      G_Main_RunThink(ent);
      EntityIndex = G_GetEntityIndex(ent);
      if ( G_IsEntityInUse(EntityIndex) && results.fraction < 0.0099999998 )
      {
        if ( results.normal.v[2] > 0.0 )
        {
          ItemSystem = GItems::GetItemSystem();
          if ( !ItemSystem->UpdateSpecialGroundOrientation(ItemSystem, ent) )
          {
            Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_OrientItemToGround");
            forward.m[2] = results.normal;
            AngleVectors(&ent->r.currentAngles, forward.m, NULL, NULL);
            Vec3Cross(&forward.m[2], forward.m, &forward.m[1]);
            Vec3Cross(&forward.m[1], &forward.m[2], forward.m);
            AxisToAngles(&forward, &angles);
            Instance = GWeaponMap::GetInstance();
            WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
            if ( WeaponForEntity->weaponIdx )
            {
              if ( BG_IsRiotShield(WeaponForEntity, 0) )
                angles.v[0] = angles.v[0] + -90.0;
              else
                angles.v[2] = angles.v[2] + 90.0;
            }
            G_SetAngle(ent, &angles, 1, 1);
            Sys_ProfEndNamedEvent();
          }
          G_SetOrigin(ent, &start, 1, 1);
          if ( GMovingPlatforms::TraceHitMovingPlatform(&results) && !BG_IsCorpseEntity(&ent->s) )
          {
            EntHandle::setEnt(&p_movingPlatformTrack->m_trackEnt, NULL);
            G_EntLinkTo(ent, &g_entities[results.hitId], (scr_string_t)0, 0, NULL);
          }
          ent->s.lerp.pos.trDuration = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_itemMaxExtrapolationTime, "g_itemMaxExtrapolationTime");
          EntityHitId = Trace_GetEntityHitId(&results);
          ent->s.groundEntityNum = EntityHitId;
          g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
          SV_LinkEntity(ent);
        }
        else
        {
          G_FreeEntity(ent);
        }
      }
    }
  }
  else
  {
    SV_LinkEntity(ent);
    G_Main_RunThink(ent);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_SetDefaultState
==============
*/
void G_Items_SetDefaultState(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  float v10; 
  vec3_t forward; 
  vec3_t angle; 
  vec3_t origin; 
  vec3_t angles; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_SetDefaultState");
  v4 = droppingEnt->r.currentOrigin.v[1];
  origin.v[0] = droppingEnt->r.currentOrigin.v[0];
  v5 = droppingEnt->r.box.halfSize.v[2] + droppingEnt->r.currentOrigin.v[2];
  angle.v[1] = droppingEnt->r.currentAngles.v[1];
  origin.v[1] = v4;
  origin.v[2] = v5;
  angle.v[0] = 0.0;
  angle.v[2] = 0.0;
  G_SetOriginAndAngle(droppedEnt, &origin, &angle, 1, 1);
  angles.v[1] = droppingEnt->r.currentAngles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->UpdateDefaultVelocity(GItems::ms_gItemsSystem, &forward);
  v6 = forward.v[0];
  v7 = forward.v[1];
  v8 = forward.v[2];
  v10 = forward.v[0];
  v9 = LODWORD(forward.v[0]) & 0x7F800000;
  droppedEnt->s.lerp.pos.trDelta.v[1] = forward.v[1];
  droppedEnt->s.lerp.pos.trDelta.v[2] = v8;
  droppedEnt->s.lerp.pos.trDelta.v[0] = v6;
  if ( v9 == 2139095040 || (v10 = v7, (LODWORD(v7) & 0x7F800000) == 2139095040) || (v10 = v8, (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] )", v10) )
      __debugbreak();
  }
  droppedEnt->s.lerp.pos.trType = TR_GRAVITY;
  droppedEnt->s.lerp.pos.trTime = level.time;
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Items_SetDefaultVelocity
==============
*/
void G_Items_SetDefaultVelocity(const gentity_s *droppingEnt, gentity_s *droppedEnt)
{
  float v3; 
  float v4; 
  float v5; 
  int v6; 
  float v7; 
  vec3_t forward; 
  vec3_t angles; 

  angles.v[1] = droppingEnt->r.currentAngles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->UpdateDefaultVelocity(GItems::ms_gItemsSystem, &forward);
  v3 = forward.v[0];
  v4 = forward.v[1];
  v5 = forward.v[2];
  v7 = forward.v[0];
  v6 = LODWORD(forward.v[0]) & 0x7F800000;
  droppedEnt->s.lerp.pos.trDelta.v[1] = forward.v[1];
  droppedEnt->s.lerp.pos.trDelta.v[2] = v5;
  droppedEnt->s.lerp.pos.trDelta.v[0] = v3;
  if ( v6 == 2139095040 || (v7 = v4, (LODWORD(v4) & 0x7F800000) == 2139095040) || (v7 = v5, (LODWORD(v5) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( droppedEnt->s.lerp.pos.trDelta )[2] )", v7) )
      __debugbreak();
  }
  droppedEnt->s.lerp.pos.trType = TR_GRAVITY;
  droppedEnt->s.lerp.pos.trTime = level.time;
}

/*
==============
G_Items_SetItemPhysics
==============
*/
void G_Items_SetItemPhysics(const gentity_s *owner, gentity_s *itemEnt)
{
  gentity_s *v2; 
  const playerState_s *EntityPlayerStateConst; 
  double v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  G_PhysicsObject *v11; 
  unsigned int v12; 
  int NumRigidBodys; 
  signed int v14; 
  hknpBodyId *RigidBodyID; 
  __int64 v16; 
  hknpBodyId result; 
  gentity_s *v18; 
  __int64 v19; 
  vec3_t linearVelocity; 
  vec3_t angularVelocity; 

  v19 = -2i64;
  v2 = itemEnt;
  v18 = itemEnt;
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1566, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1567, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Items_SetItemPhysics");
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(owner);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1572, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GMovingPlatformEntityTracking::DropItem(&v2->movingPlatformTrack, EntityPlayerStateConst) )
  {
    G_Items_EnablePhysics(v2);
    v5 = G_flrand(0.80000001, 1.1);
    linearVelocity.v[0] = *(float *)&v5 * EntityPlayerStateConst->velocity.v[0];
    linearVelocity.v[1] = *(float *)&v5 * EntityPlayerStateConst->velocity.v[1];
    linearVelocity.v[2] = *(float *)&v5 * EntityPlayerStateConst->velocity.v[2];
    v6 = G_crandom();
    v7 = *(float *)&v6 * 10.0;
    v8 = G_crandom();
    v9 = *(float *)&v8 * 10.0;
    v10 = G_crandom();
    angularVelocity.v[0] = *(float *)&v10 * 10.0;
    angularVelocity.v[1] = v9;
    angularVelocity.v[2] = v7;
    v11 = G_PhysicsObject_Get(v2);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1480, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
      __debugbreak();
    v12 = v11->physicsInstances[0];
    if ( v12 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v12);
      v14 = 0;
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v16) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v12, v14);
          Physics_SetRigidBodyVelocity(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &linearVelocity, &angularVelocity);
          ++v14;
        }
        while ( v14 < NumRigidBodys );
        v2 = v18;
      }
      v2->s.lerp.pos.trTime = level.time;
      v2->s.lerp.apos.trTime = level.time;
      v2->s.lerp.pos.trDelta = linearVelocity;
      v2->s.lerp.apos.trDelta = angularVelocity;
    }
  }
  Sys_ProfEndNamedEvent();
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
  bool v3; 
  WeaponDef **v4; 
  WeaponDef *v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  const XModel *worldModel; 
  const char *Name; 
  const XModel *projectileModel; 
  const char *v13; 
  const XModel *worldClipModel; 
  const char *v15; 
  unsigned __int16 v16; 
  WeaponDef *v17; 
  XModel *v18; 
  const XModel *defaultWorldModel; 
  const char *szInternalName; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  Weapon r_weapon; 

  memset(&r_weapon, 0, 48);
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  r_weapon.weaponIdx = truncate_cast<unsigned short,unsigned int>(weapIndex);
  ActiveApplication = ComGameModeApplication::GetActiveApplication();
  ActiveApplication->SetupWeaponDefDevGui(ActiveApplication, &r_weapon);
  weaponIdx = r_weapon.weaponIdx;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", r_weapon.weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v3 = bg_weaponDefs[weaponIdx] == NULL;
  v4 = &bg_weaponDefs[weaponIdx];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v5 = *v4;
  if ( *v5->szUseHintString )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v6 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v5->szUseHintString);
    if ( !v6 )
    {
      v7 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v23) = bg_lastParsedWeaponIndex;
        LODWORD(v22) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v22, v23) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      Com_PrintError(15, "Could not find or allocate hint string ID for weapon '%s'. See console log for details.\n", bg_weaponCompleteDefs[v7]->szInternalName);
    }
    v5->iUseHintStringIndex = v6;
  }
  if ( *v5->dropHintString )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v8 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v5->dropHintString);
    if ( !v8 )
    {
      v9 = r_weapon.weaponIdx;
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v23) = bg_lastParsedWeaponIndex;
        LODWORD(v22) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v22, v23) )
          __debugbreak();
      }
      if ( !bg_weaponCompleteDefs[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      Com_PrintError(15, "Could not find or allocate hint string ID for weapon '%s'. See console log for details.\n", bg_weaponCompleteDefs[v9]->szInternalName);
    }
    v5->dropHintStringIndex = v8;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) )
  {
    worldModel = v5->worldModel;
    if ( worldModel )
    {
      Name = XModelGetName(worldModel);
      G_CString_GetModelIndex(Name);
    }
    projectileModel = v5->projectileModel;
    if ( projectileModel )
    {
      v13 = XModelGetName(projectileModel);
      G_CString_GetModelIndex(v13);
    }
    worldClipModel = v5->worldClipModel;
    if ( worldClipModel )
    {
      v15 = XModelGetName(worldClipModel);
      G_CString_GetModelIndex(v15);
    }
  }
  v16 = r_weapon.weaponIdx;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v23) = bg_lastParsedWeaponIndex;
    LODWORD(v22) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v22, v23) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v17 = bg_weaponDefs[v16];
  v18 = v17->worldModel;
  if ( v18 )
  {
    if ( (v18->flags & 0x8000) != 0 )
    {
      defaultWorldModel = v17->defaultWorldModel;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) || !CL_TransientsMP_IsTransientAsset(v18->name, ASSET_TYPE_XMODEL) || !defaultWorldModel || XModelIsDefaultAsset(defaultWorldModel) )
      {
        szInternalName = BG_WeaponCompleteDef(&r_weapon, 0)->szInternalName;
        v21 = XModelGetName(v17->worldModel);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC6C0, 1129i64, v21, szInternalName);
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
  const WeaponDef *v4; 
  char *WeaponName; 
  GItems *v6; 
  GWeaponMap *Instance; 
  int frameDuration; 
  int time; 
  bool v10; 
  DObj *ServerDObjForEnt; 
  DObj *v12; 
  char output[1024]; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_Spawn");
  ent->c.item[0].weapon = *item;
  if ( (unsigned __int16)(item->weaponIdx - 1) > 0x224u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2162, ASSERT_TYPE_ASSERT, "( 1 ) <= ( item.weaponIdx ) && ( item.weaponIdx ) <= ( (550 - 1) )", "item.weaponIdx not in [1, (MAX_WEAPONS - 1)]\n\t%i not in [%i, %i]", item->weaponIdx, 1, 549) )
    __debugbreak();
  v4 = BG_WeaponDef(item, 0);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 2164, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v4->worldModel )
  {
    WeaponName = BG_GetWeaponName(item, output, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FBC200, 1130i64, (unsigned int)ent->s.number, WeaponName);
  }
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v6 = GItems::ms_gItemsSystem;
  GItems::ms_gItemsSystem->SetEntModel(GItems::ms_gItemsSystem, ent, v4->worldModel);
  *(_QWORD *)ent->r.box.midPoint.v = 0i64;
  ent->r.box.midPoint.v[2] = 0.0;
  ent->r.box.halfSize.v[0] = 1.0;
  ent->r.box.halfSize.v[1] = 1.0;
  ent->r.box.halfSize.v[2] = 1.0;
  G_PlayerUse_SetEntityUsable(ent, 1);
  ent->s.eType = ET_ITEM;
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &ent->s, &ent->c.item[0].weapon);
  ent->s.inAltWeaponMode = 0;
  G_Items_TransferRandomAmmoToWeaponEntityState(NULL, ent, item, 0);
  if ( G_Items_ShouldDropUnderbarrelAmmo(item) )
    G_Items_TransferRandomAmmoToWeaponEntityState(NULL, ent, item, 1);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  ent->s.clientNum = ComCharacterLimits::ms_gameData.m_characterCount;
  ent->flags.m_flags[0] |= 0x200u;
  if ( level.spawnVar.spawnVarsValid )
  {
    G_SetAngle(ent, &ent->r.currentAngles, 1, 1);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    frameDuration = level.frameDuration;
    time = level.time;
    ent->handler = 21;
    ent->nextthink = time + 2 * frameDuration;
  }
  else
  {
    v10 = (ent->spawnflags & 1) == 0;
    ent->handler = 22;
    if ( v10 )
    {
      ent->s.groundEntityNum = 2047;
      ent->r.currentAngles.v[2] = ent->r.currentAngles.v[2] + 90.0;
    }
    G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
  }
  G_DObjUpdate(ent, 1);
  if ( v6->m_shouldUpdateDObjOnSpawn )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    v12 = ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, item, 0, 0);
      BG_UpdatedWeaponBones(item, v12, 0);
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
  int v10; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1657, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1658, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1659, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx != 0 )", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(player);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1662, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  NonClipAmmoToTransferToWeaponEntity = G_Items_GetNonClipAmmoToTransferToWeaponEntity(player, weapon, 0);
  *(__m256i *)(&weaponEnt->c.beam + 3) = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)(&weaponEnt->c.beam + 11) = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(double *)(&weaponEnt->c.beam + 15) = *(double *)&weapon->attachmentVariationIndices[21];
  weaponEnt->c.mover.angle.pos1.v[2] = *(float *)&weapon->weaponCamo;
  weaponEnt->c.item[0].ammoCount = NonClipAmmoToTransferToWeaponEntity;
  Instance = GWeaponMap::GetInstance();
  weaponEnt->c.item[0].dualWieldItem = BG_PlayerDualWieldingWeapon(Instance, EntityPlayerState, weapon) != 0;
  weaponEnt->c.item[0].clipAmmoCount[0] = BG_GetAmmoInClip(EntityPlayerState, weapon, 0, WEAPON_HAND_DEFAULT);
  if ( weaponEnt->c.item[0].dualWieldItem )
    AmmoInClip = BG_GetAmmoInClip(EntityPlayerState, weapon, 0, WEAPON_HAND_LEFT);
  else
    AmmoInClip = 0;
  weaponEnt->c.item[0].clipAmmoCount[1] = AmmoInClip;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  GItems::ms_gItemsSystem->SaveRiotShieldHealthFromOwner(GItems::ms_gItemsSystem, player, weaponEnt, weapon);
  weaponEnt->c.item[1].weapon = NULL_WEAPON;
  if ( G_Items_ShouldDropUnderbarrelAmmo(weapon) )
  {
    v10 = G_Items_GetNonClipAmmoToTransferToWeaponEntity(player, weapon, 1);
    *(__m256i *)(&weaponEnt->c.beam + 23) = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)(&weaponEnt->c.beam + 31) = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)(&weaponEnt->c.beam + 35) = *(double *)&weapon->attachmentVariationIndices[21];
    *((_DWORD *)&weaponEnt->c.beam + 37) = *(_DWORD *)&weapon->weaponCamo;
    weaponEnt->c.item[1].ammoCount = v10;
    weaponEnt->c.item[1].dualWieldItem = 0;
    weaponEnt->c.item[1].clipAmmoCount[0] = BG_GetAmmoInClip(EntityPlayerState, weapon, 1, WEAPON_HAND_DEFAULT);
    weaponEnt->c.item[1].clipAmmoCount[1] = 0;
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
  int v4; 
  const Weapon *v6; 
  gentity_s *v7; 
  __int64 v9; 
  const WeaponDef *v10; 
  const WeaponCompleteDef *v11; 
  int ammoDropStockMax; 
  int v13; 
  int ammoDropStockMin; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 i; 
  int ClipSize; 
  const WeaponDef *v20; 
  int v21; 
  int ammoDropClipPercentMax; 
  float v23; 
  BOOL fmt; 
  __int64 v26; 
  _BOOL8 v27; 
  __int64 v28; 
  int ammoDropClipPercentMin; 

  v4 = 0;
  v6 = weapon;
  v7 = weaponEnt;
  v9 = 80i64 * isAlternate;
  v28 = v9;
  *(Weapon *)((char *)&weaponEnt->c.item[0].weapon + v9) = NULL_WEAPON;
  *(_QWORD *)((char *)&weaponEnt->c.item[0].ammoCount + v9) = 0i64;
  *(int *)((char *)&weaponEnt->c.item[0].clipAmmoCount[1] + v9) = 0;
  if ( !weapon->weaponIdx )
    return 0i64;
  v10 = BG_WeaponDef(weapon, isAlternate);
  v11 = BG_WeaponCompleteDef(v6, isAlternate);
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  LOBYTE(fmt) = isAlternate;
  GItems::ms_gItemsSystem->SetRiotShieldHealthOnTransfer(GItems::ms_gItemsSystem, entity, v7, v6, fmt);
  if ( isAlternate && (!G_Items_ShouldDropUnderbarrelAmmo(v6) || v10->iSharedAmmoCapIndex >= 0) )
    return 0i64;
  if ( v10->dualWieldType == DUAL_WIELD_TYPE_DEFAULT && BG_OneHandedViewModelAnimsValid(v10) && (v7->spawnflags & 4) != 0 )
    *(&v7->c.item[0].dualWieldItem + v9) = 1;
  ammoDropStockMax = v11->ammoDropStockMax;
  v13 = ammoDropStockMax;
  ammoDropStockMin = v10->ammoDropStockMin;
  if ( ammoDropStockMax >= ammoDropStockMin )
    v13 = ammoDropStockMin;
  if ( ammoDropStockMax >= ammoDropStockMin )
    ammoDropStockMin = v11->ammoDropStockMax;
  if ( ammoDropStockMin < 0 )
    goto LABEL_21;
  if ( ammoDropStockMin < v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1796, ASSERT_TYPE_ASSERT, "( max >= min )", (const char *)&queryFormat, "max >= min") )
    __debugbreak();
  v15 = v13 + G_rand() % (ammoDropStockMin - v13 + 1);
  if ( v15 > 0 )
  {
    v27 = *(&v7->c.item[0].dualWieldItem + v9);
    v17 = v27;
    v26 = 0i64;
    for ( i = 0i64; i <= v17; ++i )
    {
      ClipSize = BG_GetClipSize(NULL, v6, 0);
      if ( ClipSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 1707, ASSERT_TYPE_ASSERT, "( clipsize >= 0 )", (const char *)&queryFormat, "clipsize >= 0") )
        __debugbreak();
      v20 = BG_WeaponDef(v6, 0);
      if ( ClipSize == 1 )
      {
        v21 = 1;
      }
      else
      {
        ammoDropClipPercentMax = v20->ammoDropClipPercentMax;
        ammoDropClipPercentMin = v20->ammoDropClipPercentMin;
        if ( ammoDropClipPercentMax > ammoDropClipPercentMin )
          ammoDropClipPercentMax = G_rand() % (ammoDropClipPercentMax - ammoDropClipPercentMin + 1) + v20->ammoDropClipPercentMin;
        v23 = (float)ammoDropClipPercentMax;
        v6 = weapon;
        v21 = (int)(float)((float)((float)(v23 * (float)ClipSize) * 0.0099999998) + 0.5);
      }
      *((_DWORD *)&v26 + i) = v21;
      if ( v21 < v15 )
      {
        v15 -= v21;
      }
      else
      {
        *((_DWORD *)&v26 + i) = v15;
        v15 = 0;
      }
    }
    v4 = HIDWORD(v26);
    v16 = v26;
    v7 = weaponEnt;
    v9 = v28;
  }
  else
  {
LABEL_21:
    v15 = 0;
    v16 = 0;
  }
  *(__m256i *)((char *)&v7->c.beam + v9 + 12) = *(__m256i *)&v6->weaponIdx;
  *(_OWORD *)((char *)&v7->c.beam + v9 + 44) = *(_OWORD *)&v6->attachmentVariationIndices[5];
  *(double *)((char *)&v7->c.beam + v9 + 60) = *(double *)&v6->attachmentVariationIndices[21];
  *(float *)((char *)&v7->c.mover.angle.pos1.v[2] + v9) = *(float *)&v6->weaponCamo;
  *(int *)((char *)&v7->c.item[0].ammoCount + v9) = v15;
  *(int *)((char *)v7->c.item[0].clipAmmoCount + v9) = v16;
  *(int *)((char *)&v7->c.item[0].clipAmmoCount[1] + v9) = v4;
  return (unsigned int)(*(int *)((char *)&v7->c.item[0].ammoCount + v9) + v4 + v16);
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

void __fastcall G_Items_WeaponPickup_AddAmmoForNewWeapon(gentity_s *weaponEnt, gentity_s *player, double a3)
{
  __m256i v5; 
  __int128 v6; 
  double v7; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  int EquippedWeaponIndex; 
  float *p_speed; 
  int v12; 
  int i; 
  int v14; 
  int amount; 
  int v16; 
  int ClipSize; 
  AmmoStore result; 
  Weapon r_weapon; 
  AmmoStore r_clipIndex; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 701, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 702, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 703, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  v5 = *(__m256i *)(&weaponEnt->c.beam + 3);
  v6 = *(_OWORD *)(&weaponEnt->c.beam + 11);
  v7 = *(double *)(&weaponEnt->c.beam + 15);
  client = player->client;
  *(float *)&r_weapon.weaponCamo = weaponEnt->c.mover.angle.pos1.v[2];
  *(__m256i *)&r_weapon.weaponIdx = v5;
  *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v6;
  *(double *)&r_weapon.attachmentVariationIndices[21] = v7;
  if ( LOWORD(a3) )
  {
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, &client->ps, &r_weapon);
    if ( EquippedWeaponIndex >= 0 && (gclient_s *)((char *)client + 16 * EquippedWeaponIndex) != (gclient_s *)-1540i64 )
    {
      p_speed = &weaponEnt->c.mover.pos.speed;
      v12 = 0;
      for ( i = 0; i < 2; ++i )
      {
        v14 = *(_DWORD *)p_speed;
        if ( *(int *)p_speed >= 0 )
        {
          r_clipIndex = *BG_AmmoStoreForWeapon(&result, &r_weapon, 0);
          amount = BG_GetClipSize(&client->ps, &r_weapon, 0);
          if ( v14 < amount )
            amount = v14;
          BG_SetClipAmmo(&client->ps, &r_clipIndex, &r_weapon, 0, (PlayerHandIndex)i, amount);
        }
        if ( !weaponEnt->c.item[0].dualWieldItem )
          break;
        ++p_speed;
      }
      G_Items_AddAmmo(&player->client->ps, &r_weapon, 0, weaponEnt->c.item[0].ammoCount, weaponEnt->c.item[0].clipAmmoCount[0] == -1);
      if ( BG_HasUnderbarrelAmmo(&r_weapon) && !BG_AltSharesAmmo(&r_weapon) )
      {
        v16 = weaponEnt->c.item[1].clipAmmoCount[0];
        if ( v16 >= 0 )
        {
          r_clipIndex = *BG_AmmoStoreForWeapon(&result, &r_weapon, 1);
          ClipSize = BG_GetClipSize(&client->ps, &r_weapon, 1);
          if ( v16 < ClipSize )
            ClipSize = v16;
          BG_SetClipAmmo(&client->ps, &r_clipIndex, &r_weapon, 1, WEAPON_HAND_DEFAULT, ClipSize);
          v16 = weaponEnt->c.item[1].clipAmmoCount[0];
        }
        LOBYTE(v12) = v16 == -1;
        G_Items_AddAmmo(&player->client->ps, &r_weapon, 1, weaponEnt->c.item[1].ammoCount, v12);
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
  __int16 v4; 
  int dualWieldItem; 
  gclient_s *client; 
  gentity_s *v10; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponSlot Slot; 
  bool v15; 
  gentity_s *v16; 
  int spawnflags; 
  EntityTagInfo *tagInfo; 
  const WeaponDef *v19; 
  float v20; 
  const WeaponDef *v21; 
  float v22; 
  int dualWield; 
  WeaponDef *pickupWeapDef; 
  vec3_t angles; 
  Weapon r_weapon; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> penetrationTestMatrix; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Items_WeaponPickup_AddWeapon");
  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 445, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 446, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  dualWieldItem = weaponEnt->c.item[0].dualWieldItem;
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
    r_weapon = *G_Items_GetPrimaryWeaponToDrop(&client->ps, weapon);
    if ( !v4 )
    {
LABEL_14:
      Sys_ProfEndNamedEvent();
      return 0;
    }
    v15 = BG_UsingAlternate(&client->ps);
    if ( BG_IsFauxFists(&client->ps, &r_weapon, v15) )
    {
      if ( BG_GetEquippedWeaponCount(Instance, &client->ps, WEAPINVENTORY_PRIMARY, Slot) > 1 )
        G_Weapon_TakePlayerWeapon(&client->ps, &r_weapon);
      goto LABEL_42;
    }
    if ( !BG_PlayerHasWeapon(Instance, &client->ps, &r_weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 506, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, playerWeap ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, playerWeap )") )
      __debugbreak();
    v16 = G_Items_DropWeapon(playerEnt, &r_weapon, 0, 0, &penetrationTestMatrix);
    v10 = v16;
    if ( !v16 )
      goto LABEL_42;
    spawnflags = weaponEnt->spawnflags;
    if ( (spawnflags & 0x10) == 0 )
      spawnflags &= ~1u;
    v16->spawnflags = spawnflags;
    v16->s.groundEntityNum = weaponEnt->s.groundEntityNum;
    if ( GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v16->flags, ACTIVE, 9u) )
    {
      tagInfo = weaponEnt->tagInfo;
      if ( tagInfo )
      {
        if ( tagInfo->parent )
        {
          G_SetOriginAndAngle(v10, &weaponEnt->r.currentOrigin, &weaponEnt->r.currentAngles, 1, 1);
          G_EntLinkTo(v10, weaponEnt->tagInfo->parent, weaponEnt->tagInfo->name, 0, NULL);
LABEL_41:
          SV_LinkEntity(v10);
LABEL_42:
          *pDroppedWeapon = v10;
          Sys_ProfEndNamedEvent();
          return G_Weapon_GivePlayerWeapon(&client->ps, NULL, weapon, dualWield, 0, 0);
        }
      }
    }
    v19 = BG_WeaponDef(&r_weapon, 0);
    v20 = weaponEnt->r.currentAngles.v[1];
    angles.v[0] = weaponEnt->r.currentAngles.v[0];
    angles.v[2] = weaponEnt->r.currentAngles.v[2];
    angles.v[1] = v20;
    v21 = v19;
    if ( BG_IsRiotShield(weapon, 0) )
    {
      AnglesToAxis(&angles, &axis);
      if ( axis.m[1].v[2] < 0.70700002 )
      {
        v22 = angles.v[0] + 90.0;
LABEL_33:
        angles.v[0] = v22;
      }
    }
    else if ( BG_IsRiotShield(&r_weapon, 0) )
    {
      v22 = angles.v[0] + -90.0;
      goto LABEL_33;
    }
    if ( (v10->spawnflags & 1) != 0 )
    {
      G_SetOriginAndAngle(v10, &weaponEnt->r.currentOrigin, &angles, 1, 1);
    }
    else if ( BG_IsRiotShield(&r_weapon, 0) )
    {
      G_Items_WeaponPickup_TraceGround(weaponEnt, pickupWeapDef, &angles, v10, v21);
    }
    else
    {
      G_Items_WeaponPickup_TraceGround_Legacy(weaponEnt, pickupWeapDef, &angles, v10, v21);
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
  unsigned __int16 v5; 
  char v9; 
  __int64 v10; 
  float *p_midTime; 
  scrContext_t *v12; 
  __m256i v13; 
  __int128 v14; 
  double v15; 
  WeaponDef *v16; 
  bool v17; 
  int v18; 
  int v19; 
  GHandler *Handler; 
  const dvar_t *v21; 
  __int64 weaponIdx; 
  bool v23; 
  WeaponCompleteDef **v24; 
  WeaponCompleteDef *v25; 
  int IsClipOnly; 
  const char *v27; 
  const char *v28; 
  unsigned int EntityIndex; 
  SvClient *CommonClient; 
  int v31; 
  int v32; 
  bool v33; 
  int v34; 
  __int64 v36; 
  __int64 v37; 
  Weapon r_weapon; 
  char outAmmoName[1024]; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 611, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 612, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  v9 = 0;
  v10 = 0i64;
  p_midTime = &weaponEnt->c.mover.pos.midTime;
  v12 = ScriptContext_Server();
  do
  {
    v13 = *(__m256i *)(p_midTime + 1);
    v14 = *(_OWORD *)(p_midTime + 9);
    v15 = *(double *)(p_midTime + 13);
    *(float *)&r_weapon.weaponCamo = p_midTime[15];
    *(__m256i *)&r_weapon.weaponIdx = v13;
    *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v14;
    *(double *)&r_weapon.attachmentVariationIndices[21] = v15;
    if ( v5 )
    {
      if ( v5 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v37) = bg_lastParsedWeaponIndex;
        LODWORD(v36) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v36, v37) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v16 = bg_weaponDefs[v5];
      if ( !v16->bClipOnly || BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE )
      {
        v17 = v10 && (BG_HasUnderbarrelAmmo(&r_weapon) || v16->inventoryType == WEAPINVENTORY_ALTMODE);
        v18 = *((_DWORD *)p_midTime - 2);
        if ( haveExactWeapon )
          v18 += *(_DWORD *)p_midTime + *((_DWORD *)p_midTime - 1);
        v19 = G_Items_AddAmmo(&player->client->ps, &r_weapon, v17, v18, 0);
        if ( v19 )
        {
          Handler = GHandler::getHandler();
          BG_GetWeaponAmmoPoolName(&r_weapon, v17, Handler, outAmmoName, 0x400ui64);
          Scr_AddString(v12, outAmmoName);
          Scr_AddInt(v12, v19);
          GScr_Notify(player, scr_const.ammo_pickup, 2u);
          v9 = 1;
          if ( !suppressNotifies )
          {
            v21 = DVARBOOL_pickupPrints;
            if ( !DVARBOOL_pickupPrints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pickupPrints") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v21);
            if ( v21->current.enabled )
            {
              weaponIdx = r_weapon.weaponIdx;
              if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
              {
                LODWORD(v37) = bg_lastParsedWeaponIndex;
                LODWORD(v36) = r_weapon.weaponIdx;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v36, v37) )
                  __debugbreak();
              }
              v23 = bg_weaponCompleteDefs[weaponIdx] == NULL;
              v24 = &bg_weaponCompleteDefs[weaponIdx];
              if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
                __debugbreak();
              v25 = *v24;
              IsClipOnly = BG_WeaponIsClipOnly(&r_weapon, 0);
              v27 = aCGamePickupCli;
              if ( !IsClipOnly )
                v27 = aCGamePickupAmm;
              v28 = j_va(v27, 102i64, v25->szDisplayName);
              EntityIndex = G_GetEntityIndex(player);
              if ( EntityIndex == -1 )
              {
                SV_Game_BroadcastServerCommand(SV_CMD_CAN_IGNORE, v28);
              }
              else
              {
                CommonClient = SvClient::GetCommonClient(EntityIndex);
                CommonClient->SendServerCommand(CommonClient, SV_CMD_CAN_IGNORE, v28);
              }
            }
          }
          v31 = *((_DWORD *)p_midTime - 2) - v19;
          *((_DWORD *)p_midTime - 2) = v31;
          if ( v31 < 0 )
          {
            *(p_midTime - 2) = 0.0;
            v32 = *((_DWORD *)p_midTime - 1) + v31;
            *((_DWORD *)p_midTime - 1) = v32;
            if ( v32 < 0 )
            {
              v33 = v32 + *(_DWORD *)p_midTime < 0;
              *(_DWORD *)p_midTime += v32;
              v34 = *(_DWORD *)p_midTime;
              if ( v33 )
                v34 = 0;
              *(p_midTime - 1) = 0.0;
              *(_DWORD *)p_midTime = v34;
            }
          }
        }
      }
    }
    ++v10;
    p_midTime += 20;
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
  const DObj *v10; 
  const dvar_t *v11; 
  vec3_t *p_currentOrigin; 
  float v13; 
  float value; 
  float v21; 
  float v22; 
  __int128 v24; 
  int contentmask; 
  int v27; 
  vec3_t end; 
  vec3_t start; 
  Bounds v30; 
  Bounds rotatedBounds; 
  Bounds bounds; 
  Bounds baseBounds; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !pickupEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 353, ASSERT_TYPE_ASSERT, "(pickupEnt)", (const char *)&queryFormat, "pickupEnt") )
    __debugbreak();
  if ( !pickupWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 354, ASSERT_TYPE_ASSERT, "(pickupWeapDef)", (const char *)&queryFormat, "pickupWeapDef") )
    __debugbreak();
  if ( !dropEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 355, ASSERT_TYPE_ASSERT, "(dropEnt)", (const char *)&queryFormat, "dropEnt") )
    __debugbreak();
  if ( !dropWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 356, ASSERT_TYPE_ASSERT, "(dropWeapDef)", (const char *)&queryFormat, "dropWeapDef") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(pickupEnt);
  v10 = Com_GetServerDObjForEnt(dropEnt);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 360, ASSERT_TYPE_ASSERT, "(dropDObj)", (const char *)&queryFormat, "dropDObj") )
    __debugbreak();
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 361, ASSERT_TYPE_ASSERT, "(pickupDObj)", (const char *)&queryFormat, "pickupDObj") )
    __debugbreak();
  v11 = DVARFLT_g_dropWeaponHeight;
  p_currentOrigin = &pickupEnt->r.currentOrigin;
  v13 = pickupEnt->r.currentOrigin.v[1];
  end.v[0] = pickupEnt->r.currentOrigin.v[0];
  end.v[2] = pickupEnt->r.currentOrigin.v[2];
  end.v[1] = v13;
  if ( !DVARFLT_g_dropWeaponHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  if ( !ServerDObjForEnt )
    goto LABEL_32;
  if ( !v10 )
    goto LABEL_32;
  AnglesToAxis(pickupAngles, &axis);
  DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
  Bounds_Transform(&bounds, &vec3_origin, &axis, &rotatedBounds);
  Bounds_RaiseToWidth(&rotatedBounds);
  _XMM0 = LODWORD(rotatedBounds.halfSize.v[0]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rbp+0D0h+rotatedBounds.halfSize+4]
    vmaxss  xmm9, xmm1, dword ptr [rbp+0D0h+rotatedBounds.halfSize+8]
  }
  DObjPhysicsGetBounds(v10, &baseBounds);
  Bounds_Transform(&baseBounds, &vec3_origin, &axis, &v30);
  Bounds_RaiseToWidth(&v30);
  _XMM0 = LODWORD(v30.halfSize.v[0]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rsp+1D0h+var_170.halfSize+4]
    vmaxss  xmm8, xmm1, dword ptr [rsp+1D0h+var_170.halfSize+8]
  }
  v30.halfSize.v[2] = *(float *)&_XMM8;
  if ( value > 0.0 && (*(float *)&_XMM8 == 0.0 || *(float *)&_XMM9 == 0.0) )
  {
LABEL_32:
    end.v[2] = value + end.v[2];
    goto LABEL_33;
  }
  v21 = p_currentOrigin->v[0] - (float)(v30.midPoint.v[0] - rotatedBounds.midPoint.v[0]);
  v22 = pickupEnt->r.currentOrigin.v[2] - (float)(v30.midPoint.v[2] - rotatedBounds.midPoint.v[2]);
  v24 = _XMM8;
  *(float *)&v24 = *(float *)&_XMM8 - *(float *)&_XMM9;
  _XMM0 = v24;
  __asm { vmaxss  xmm0, xmm0, xmm7 }
  end.v[1] = pickupEnt->r.currentOrigin.v[1] - (float)(v30.midPoint.v[1] - rotatedBounds.midPoint.v[1]);
  start.v[1] = end.v[1];
  start.v[2] = (float)((float)(*(float *)&_XMM0 + *(float *)&_XMM8) + 1.0) + v22;
  end.v[0] = v21;
  end.v[2] = v22;
  start.v[0] = v21;
  contentmask = G_Items_ClipMask(pickupEnt);
  if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
    v27 = EntHandle::entnum(&dropEnt->r.ownerNum);
  else
    v27 = 2047;
  G_Main_TraceCapsule(&results, &start, &end, &v30, v27, contentmask);
  if ( !results.startsolid )
  {
    end.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    end.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    end.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
LABEL_33:
    p_currentOrigin = &end;
  }
  G_SetOriginAndAngle(dropEnt, p_currentOrigin, pickupAngles, 1, 1);
}

/*
==============
G_Items_WeaponPickup_TraceGround_Legacy
==============
*/
void G_Items_WeaponPickup_TraceGround_Legacy(const gentity_s *const pickupEnt, const WeaponDef *const pickupWeapDef, const vec3_t *pickupAngles, gentity_s *const dropEnt, const WeaponDef *const dropWeapDef)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float value; 
  float v15; 
  float v17; 
  vec3_t *p_outRotatedOffset; 
  int contentmask; 
  int v21; 
  int v22; 
  vec3_t start; 
  vec3_t end; 
  vec3_t outRotatedOffset; 
  Bounds bounds; 
  vec3_t outRotatedHalfSize; 
  vec3_t v28; 
  trace_t results; 

  if ( !pickupEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 295, ASSERT_TYPE_ASSERT, "(pickupEnt)", (const char *)&queryFormat, "pickupEnt") )
    __debugbreak();
  if ( !pickupWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 296, ASSERT_TYPE_ASSERT, "(pickupWeapDef)", (const char *)&queryFormat, "pickupWeapDef") )
    __debugbreak();
  if ( !dropEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 297, ASSERT_TYPE_ASSERT, "(dropEnt)", (const char *)&queryFormat, "dropEnt") )
    __debugbreak();
  if ( !dropWeapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 298, ASSERT_TYPE_ASSERT, "(dropWeapDef)", (const char *)&queryFormat, "dropWeapDef") )
    __debugbreak();
  G_Items_GetTunnelTraceOffset(pickupEnt, pickupAngles, pickupWeapDef, &outRotatedOffset, &outRotatedHalfSize);
  v9 = outRotatedOffset.v[1] + pickupEnt->r.currentOrigin.v[1];
  start.v[0] = outRotatedOffset.v[0] + pickupEnt->r.currentOrigin.v[0];
  start.v[2] = outRotatedOffset.v[2] + pickupEnt->r.currentOrigin.v[2];
  G_Items_GetTunnelTraceOffset(dropEnt, pickupAngles, dropWeapDef, &outRotatedOffset, &v28);
  v10 = outRotatedOffset.v[0];
  v11 = outRotatedOffset.v[1];
  v12 = outRotatedOffset.v[2];
  v13 = DVARFLT_g_dropWeaponHeight;
  start.v[0] = start.v[0] - outRotatedOffset.v[0];
  start.v[1] = v9 - outRotatedOffset.v[1];
  start.v[2] = start.v[2] - outRotatedOffset.v[2];
  if ( !DVARFLT_g_dropWeaponHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropWeaponHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = outRotatedHalfSize.v[2];
  _XMM7 = LODWORD(v28.v[2]);
  if ( value > 0.0 && (v28.v[2] == 0.0 || outRotatedHalfSize.v[2] == 0.0) )
  {
    v17 = pickupEnt->r.currentOrigin.v[1];
    outRotatedOffset.v[0] = pickupEnt->r.currentOrigin.v[0];
    outRotatedOffset.v[2] = value + pickupEnt->r.currentOrigin.v[2];
    outRotatedOffset.v[1] = v17;
    p_outRotatedOffset = &outRotatedOffset;
  }
  else
  {
    if ( v28.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 328, ASSERT_TYPE_SANITY, "( droppedHalfSize[2] >= 0.f )", (const char *)&queryFormat, "droppedHalfSize[2] >= 0.f") )
      __debugbreak();
    if ( v15 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.cpp", 329, ASSERT_TYPE_SANITY, "( pickedupHalfSize[2] >= 0.f )", (const char *)&queryFormat, "pickedupHalfSize[2] >= 0.f") )
      __debugbreak();
    __asm { vmaxss  xmm2, xmm7, cs:__real@3f800000 }
    end.v[0] = start.v[0];
    bounds.halfSize.v[2] = *(float *)&_XMM2;
    bounds.halfSize.v[1] = *(float *)&_XMM2;
    bounds.halfSize.v[0] = *(float *)&_XMM2;
    end.v[2] = (float)(*(float *)&_XMM2 + 1.0) + start.v[2];
    bounds.midPoint.v[0] = v10;
    bounds.midPoint.v[1] = v11;
    bounds.midPoint.v[2] = v12;
    end.v[1] = start.v[1];
    contentmask = G_Items_ClipMask(pickupEnt);
    v21 = 2047;
    if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
      v22 = EntHandle::entnum(&dropEnt->r.ownerNum);
    else
      v22 = 2047;
    G_Main_TraceCapsule(&results, &start, &end, &bounds, v22, contentmask);
    if ( !results.allsolid )
    {
      end.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      end.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      end.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      start.v[2] = start.v[2] - v15;
      if ( EntHandle::isDefined(&dropEnt->r.ownerNum) )
        v21 = EntHandle::entnum(&dropEnt->r.ownerNum);
      G_Main_TraceCapsule(&results, &end, &start, &bounds, v21, contentmask);
      start.v[0] = (float)((float)(start.v[0] - end.v[0]) * results.fraction) + end.v[0];
      start.v[1] = (float)((float)(start.v[1] - end.v[1]) * results.fraction) + end.v[1];
      start.v[2] = (float)((float)(start.v[2] - end.v[2]) * results.fraction) + end.v[2];
    }
    p_outRotatedOffset = &start;
  }
  G_SetOriginAndAngle(dropEnt, p_outRotatedOffset, pickupAngles, 1, 1);
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

