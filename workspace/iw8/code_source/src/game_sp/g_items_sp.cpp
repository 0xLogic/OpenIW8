/*
==============
GItemsSP::UpdateSpecialGroundOrientation
==============
*/

bool __fastcall GItemsSP::UpdateSpecialGroundOrientation(GItemsSP *this, gentity_s *itemEnt)
{
  return ?UpdateSpecialGroundOrientation@GItemsSP@@UEAA_NPEAUgentity_s@@@Z(this, itemEnt);
}

/*
==============
GItemsSP::RestrictPickupForOwner
==============
*/

void __fastcall GItemsSP::RestrictPickupForOwner(GItemsSP *this, const gentity_s *ownerEnt, gentity_s *dropped)
{
  ?RestrictPickupForOwner@GItemsSP@@UEAAXPEBUgentity_s@@PEAU2@@Z(this, ownerEnt, dropped);
}

/*
==============
GItemsSP::RestoreRiotShieldHealthOnPickup
==============
*/

void __fastcall GItemsSP::RestoreRiotShieldHealthOnPickup(GItemsSP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  ?RestoreRiotShieldHealthOnPickup@GItemsSP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@@Z(this, owner, itemEnt, item);
}

/*
==============
GItemsSP::UpdateDefaultVelocity
==============
*/

void __fastcall GItemsSP::UpdateDefaultVelocity(GItemsSP *this, vec3_t *velocity)
{
  ?UpdateDefaultVelocity@GItemsSP@@UEAAXAEATvec3_t@@@Z(this, velocity);
}

/*
==============
GItemsSP::BeginDeferItemDrops
==============
*/

void __fastcall GItemsSP::BeginDeferItemDrops(GItemsSP *this)
{
  ?BeginDeferItemDrops@GItemsSP@@UEAAXXZ(this);
}

/*
==============
GItemsSP::ShouldDropAkimboWeapon
==============
*/

bool __fastcall GItemsSP::ShouldDropAkimboWeapon(GItemsSP *this)
{
  return ?ShouldDropAkimboWeapon@GItemsSP@@UEAA_NXZ(this);
}

/*
==============
GItemsSP::DeferItemDrop
==============
*/

void __fastcall GItemsSP::DeferItemDrop(GItemsSP *this, const int characterIndex, const int dropIndex, const scr_string_t dropTag)
{
  ?DeferItemDrop@GItemsSP@@UEAAXHHW4scr_string_t@@@Z(this, characterIndex, dropIndex, dropTag);
}

/*
==============
GItemsSP::SetRiotShieldHealthOnTransfer
==============
*/

void __fastcall GItemsSP::SetRiotShieldHealthOnTransfer(GItemsSP *this, const gentity_s *owner, gentity_s *weaponEnt, const Weapon *weapon, const bool isAlternate)
{
  ?SetRiotShieldHealthOnTransfer@GItemsSP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@_N@Z(this, owner, weaponEnt, weapon, isAlternate);
}

/*
==============
GItemsSP::TouchLogPickup
==============
*/

void __fastcall GItemsSP::TouchLogPickup(GItemsSP *this, const gentity_s *other, const Weapon *weapon)
{
  ?TouchLogPickup@GItemsSP@@UEBAXPEBUgentity_s@@AEBUWeapon@@@Z(this, other, weapon);
}

/*
==============
GItemsSP::SetEntModel
==============
*/

void __fastcall GItemsSP::SetEntModel(GItemsSP *this, gentity_s *itemEnt, const XModel *xmodel)
{
  ?SetEntModel@GItemsSP@@UEAAXPEAUgentity_s@@PEBUXModel@@@Z(this, itemEnt, xmodel);
}

/*
==============
GItemsSP::ShouldAbortDropWeapon
==============
*/

bool __fastcall GItemsSP::ShouldAbortDropWeapon(GItemsSP *this, const gentity_s *owner, const playerState_s *ps, const Weapon *weapon)
{
  return ?ShouldAbortDropWeapon@GItemsSP@@UEAA_NPEBUgentity_s@@PEBUplayerState_s@@AEBUWeapon@@@Z(this, owner, ps, weapon);
}

/*
==============
GItemsSP::FinishDeferItemDrops
==============
*/

void __fastcall GItemsSP::FinishDeferItemDrops(GItemsSP *this)
{
  ?FinishDeferItemDrops@GItemsSP@@UEAAXXZ(this);
}

/*
==============
GItemsSP::CanDeferItemDrop
==============
*/

bool __fastcall GItemsSP::CanDeferItemDrop(GItemsSP *this)
{
  return ?CanDeferItemDrop@GItemsSP@@UEBA_NXZ(this);
}

/*
==============
GItemsSP::SaveRiotShieldHealthFromOwner
==============
*/

void __fastcall GItemsSP::SaveRiotShieldHealthFromOwner(GItemsSP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  ?SaveRiotShieldHealthFromOwner@GItemsSP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@@Z(this, owner, itemEnt, item);
}

/*
==============
GItemsSP::WeaponDropExtraNotifies
==============
*/

void __fastcall GItemsSP::WeaponDropExtraNotifies(GItemsSP *this, const gentity_s *const droppedItem, gentity_s *const player, const Weapon *r_weapon)
{
  ?WeaponDropExtraNotifies@GItemsSP@@UEAAXQEBUgentity_s@@QEAU2@AEBUWeapon@@@Z(this, droppedItem, player, r_weapon);
}

/*
==============
GItemsSP::TouchSendEvent
==============
*/

void __fastcall GItemsSP::TouchSendEvent(GItemsSP *this, gentity_s *clientEnt, const BgWeaponHandle weaponHandle, const entity_event_t pickupEvent, const bool predictable)
{
  ?TouchSendEvent@GItemsSP@@UEBAXPEAUgentity_s@@VBgWeaponHandle@@W4entity_event_t@@_N@Z(this, clientEnt, weaponHandle, pickupEvent, predictable);
}

/*
==============
GItemsSP::WeaponPickupExtraNotifies
==============
*/

void __fastcall GItemsSP::WeaponPickupExtraNotifies(GItemsSP *this, gentity_s *thisItem, gentity_s *newDroppedItem, gentity_s *player, const WeaponDef *weapDef, bool pickedUp)
{
  ?WeaponPickupExtraNotifies@GItemsSP@@UEAAXPEAUgentity_s@@00PEBUWeaponDef@@_N@Z(this, thisItem, newDroppedItem, player, weapDef, pickedUp);
}

/*
==============
GItemsSP::BeginDeferItemDrops
==============
*/
void GItemsSP::BeginDeferItemDrops(GItemsSP *this)
{
  ;
}

/*
==============
GItemsSP::CanDeferItemDrop
==============
*/
bool GItemsSP::CanDeferItemDrop(GItemsSP *this)
{
  return 0;
}

/*
==============
GItemsSP::DeferItemDrop
==============
*/
void GItemsSP::DeferItemDrop(GItemsSP *this, const int characterIndex, const int dropIndex, const scr_string_t dropTag)
{
  ;
}

/*
==============
GItemsSP::FinishDeferItemDrops
==============
*/
void GItemsSP::FinishDeferItemDrops(GItemsSP *this)
{
  ;
}

/*
==============
GItemsSP::RestoreRiotShieldHealthOnPickup
==============
*/
void GItemsSP::RestoreRiotShieldHealthOnPickup(GItemsSP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  gclient_s *client; 
  actor_s *actor; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 69, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !itemEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 70, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  if ( BG_IsRiotShield(item, 0) )
  {
    client = owner->client;
    if ( client )
    {
      client->shieldHealth = itemEnt->c.item[0].shieldHealth;
    }
    else
    {
      actor = owner->actor;
      if ( actor )
        actor->shieldHealth = itemEnt->c.item[0].shieldHealth;
    }
  }
}

/*
==============
GItemsSP::RestrictPickupForOwner
==============
*/
void GItemsSP::RestrictPickupForOwner(GItemsSP *this, const gentity_s *ownerEnt, gentity_s *dropped)
{
  ;
}

/*
==============
GItemsSP::SaveRiotShieldHealthFromOwner
==============
*/
void GItemsSP::SaveRiotShieldHealthFromOwner(GItemsSP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  gclient_s *client; 
  int shieldHealth; 
  actor_s *actor; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 54, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !itemEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 55, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  if ( BG_IsRiotShield(item, 0) )
  {
    client = owner->client;
    if ( client )
    {
      shieldHealth = client->shieldHealth;
    }
    else
    {
      actor = owner->actor;
      if ( !actor )
        return;
      shieldHealth = actor->shieldHealth;
    }
    itemEnt->c.item[0].shieldHealth = shieldHealth;
  }
}

/*
==============
GItemsSP::SetEntModel
==============
*/
void GItemsSP::SetEntModel(GItemsSP *this, gentity_s *itemEnt, const XModel *xmodel)
{
  if ( !itemEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 29, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  if ( !xmodel )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 30, ASSERT_TYPE_ASSERT, "( xmodel )", (const char *)&queryFormat, "xmodel") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
  }
  G_Utils_SetModel(itemEnt, xmodel->name);
}

/*
==============
GItemsSP::SetRiotShieldHealthOnTransfer
==============
*/
void GItemsSP::SetRiotShieldHealthOnTransfer(GItemsSP *this, const gentity_s *owner, gentity_s *weaponEnt, const Weapon *weapon, const bool isAlternate)
{
  unsigned int weaponIdx; 
  bool v9; 
  WeaponDef **v10; 
  int riotShieldHealth; 
  actor_s *actor; 
  __int64 v13; 

  if ( !weaponEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 39, ASSERT_TYPE_ASSERT, "( weaponEnt )", (const char *)&queryFormat, "weaponEnt") )
    __debugbreak();
  if ( BG_IsRiotShield(weapon, isAlternate) )
  {
    weaponIdx = weapon->weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v13) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v13, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    v9 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
    v10 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( (*v10)->riotShieldEnableDamage )
      riotShieldHealth = (*v10)->riotShieldHealth;
    else
      riotShieldHealth = 1;
    weaponEnt->c.item[0].shieldHealth = riotShieldHealth;
    if ( owner )
    {
      actor = owner->actor;
      if ( actor )
        weaponEnt->c.item[0].shieldHealth = actor->shieldHealth;
    }
  }
}

/*
==============
GItemsSP::ShouldAbortDropWeapon
==============
*/
bool GItemsSP::ShouldAbortDropWeapon(GItemsSP *this, const gentity_s *owner, const playerState_s *ps, const Weapon *weapon)
{
  return 0;
}

/*
==============
GItemsSP::ShouldDropAkimboWeapon
==============
*/
bool GItemsSP::ShouldDropAkimboWeapon(GItemsSP *this)
{
  const dvar_t *v1; 
  int integer; 

  v1 = DVARINT_ai_dropAkimboChance;
  if ( !DVARINT_ai_dropAkimboChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_dropAkimboChance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  return G_rand() % 100 < integer;
}

/*
==============
GItemsSP::TouchLogPickup
==============
*/
void GItemsSP::TouchLogPickup(GItemsSP *this, const gentity_s *other, const Weapon *weapon)
{
  ;
}

/*
==============
GItemsSP::TouchSendEvent
==============
*/
void GItemsSP::TouchSendEvent(GItemsSP *this, gentity_s *clientEnt, const BgWeaponHandle weaponHandle, const entity_event_t pickupEvent, const bool predictable)
{
  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 145, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  if ( !clientEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 146, ASSERT_TYPE_ASSERT, "( clientEnt->client )", (const char *)&queryFormat, "clientEnt->client") )
    __debugbreak();
  G_Utils_AddEvent(clientEnt, pickupEvent, weaponHandle.m_mapEntryId);
}

/*
==============
GItemsSP::UpdateDefaultVelocity
==============
*/
void GItemsSP::UpdateDefaultVelocity(GItemsSP *this, vec3_t *velocity)
{
  double v3; 

  velocity->v[0] = 150.0 * velocity->v[0];
  velocity->v[1] = 150.0 * velocity->v[1];
  velocity->v[2] = 150.0 * velocity->v[2];
  v3 = G_crandom();
  velocity->v[2] = (float)((float)(*(float *)&v3 * 50.0) + velocity->v[2]) + 200.0;
}

/*
==============
GItemsSP::UpdateSpecialGroundOrientation
==============
*/
char GItemsSP::UpdateSpecialGroundOrientation(GItemsSP *this, gentity_s *itemEnt)
{
  if ( !itemEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 124, ASSERT_TYPE_ASSERT, "( itemEnt )", (const char *)&queryFormat, "itemEnt") )
    __debugbreak();
  if ( itemEnt->s.eType != ET_ACTOR_CORPSE )
    return 0;
  AIActorInterface::OrientCorpseToGround(itemEnt, 0);
  return 1;
}

/*
==============
GItemsSP::WeaponDropExtraNotifies
==============
*/
void GItemsSP::WeaponDropExtraNotifies(GItemsSP *this, const gentity_s *const droppedItem, gentity_s *const player, const Weapon *r_weapon)
{
  ;
}

/*
==============
GItemsSP::WeaponPickupExtraNotifies
==============
*/
void GItemsSP::WeaponPickupExtraNotifies(GItemsSP *this, gentity_s *thisItem, gentity_s *newDroppedItem, gentity_s *player, const WeaponDef *weapDef, bool pickedUp)
{
  scrContext_t *v9; 

  if ( !thisItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 97, ASSERT_TYPE_ASSERT, "( thisItem )", (const char *)&queryFormat, "thisItem") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 98, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_items_sp.cpp", 99, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( pickedUp && player->client )
  {
    v9 = ScriptContext_Server();
    if ( newDroppedItem )
      GScr_AddEntity(newDroppedItem);
    else
      Scr_AddUndefined(v9);
    GScr_AddEntity(thisItem);
    GScr_Notify(player, scr_const.pickup, 2u);
  }
}

