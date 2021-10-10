/*
==============
GItemsMP::FinishDeferItemDrops
==============
*/

void __fastcall GItemsMP::FinishDeferItemDrops(GItemsMP *this)
{
  ?FinishDeferItemDrops@GItemsMP@@UEAAXXZ(this);
}

/*
==============
GItemsMP::TouchLogPickup
==============
*/

void __fastcall GItemsMP::TouchLogPickup(GItemsMP *this, const gentity_s *other, const Weapon *weapon)
{
  ?TouchLogPickup@GItemsMP@@UEBAXPEBUgentity_s@@AEBUWeapon@@@Z(this, other, weapon);
}

/*
==============
GItemsMP::TouchSendEvent
==============
*/

void __fastcall GItemsMP::TouchSendEvent(GItemsMP *this, gentity_s *clientEnt, const BgWeaponHandle weaponHandle, const entity_event_t pickupEvent, const bool predictable)
{
  ?TouchSendEvent@GItemsMP@@UEBAXPEAUgentity_s@@VBgWeaponHandle@@W4entity_event_t@@_N@Z(this, clientEnt, weaponHandle, pickupEvent, predictable);
}

/*
==============
GItemsMP::RestoreRiotShieldHealthOnPickup
==============
*/

void __fastcall GItemsMP::RestoreRiotShieldHealthOnPickup(GItemsMP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  ?RestoreRiotShieldHealthOnPickup@GItemsMP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@@Z(this, owner, itemEnt, item);
}

/*
==============
GItemsMP::UpdateSpecialGroundOrientation
==============
*/

bool __fastcall GItemsMP::UpdateSpecialGroundOrientation(GItemsMP *this, gentity_s *itemEnt)
{
  return ?UpdateSpecialGroundOrientation@GItemsMP@@UEAA_NPEAUgentity_s@@@Z(this, itemEnt);
}

/*
==============
GItemsMP::SaveRiotShieldHealthFromOwner
==============
*/

void __fastcall GItemsMP::SaveRiotShieldHealthFromOwner(GItemsMP *this, const gentity_s *owner, gentity_s *launched, const Weapon *item)
{
  ?SaveRiotShieldHealthFromOwner@GItemsMP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@@Z(this, owner, launched, item);
}

/*
==============
GItemsMP::UpdateDefaultVelocity
==============
*/

void __fastcall GItemsMP::UpdateDefaultVelocity(GItemsMP *this, vec3_t *velocity)
{
  ?UpdateDefaultVelocity@GItemsMP@@UEAAXAEATvec3_t@@@Z(this, velocity);
}

/*
==============
GItemsMP::ShouldAbortDropWeapon
==============
*/

bool __fastcall GItemsMP::ShouldAbortDropWeapon(GItemsMP *this, const gentity_s *owner, const playerState_s *ps, const Weapon *weapon)
{
  return ?ShouldAbortDropWeapon@GItemsMP@@UEAA_NPEBUgentity_s@@PEBUplayerState_s@@AEBUWeapon@@@Z(this, owner, ps, weapon);
}

/*
==============
GItemsMP::DeferItemDrop
==============
*/

void __fastcall GItemsMP::DeferItemDrop(GItemsMP *this, const int characterIndex, const int dropIndex, const scr_string_t dropTag)
{
  ?DeferItemDrop@GItemsMP@@UEAAXHHW4scr_string_t@@@Z(this, characterIndex, dropIndex, dropTag);
}

/*
==============
GItemsMP::CanDeferItemDrop
==============
*/

bool __fastcall GItemsMP::CanDeferItemDrop(GItemsMP *this)
{
  return ?CanDeferItemDrop@GItemsMP@@UEBA_NXZ(this);
}

/*
==============
GItemsMP::BeginDeferItemDrops
==============
*/

void __fastcall GItemsMP::BeginDeferItemDrops(GItemsMP *this)
{
  ?BeginDeferItemDrops@GItemsMP@@UEAAXXZ(this);
}

/*
==============
GItemsMP::WeaponDropExtraNotifies
==============
*/

void __fastcall GItemsMP::WeaponDropExtraNotifies(GItemsMP *this, const gentity_s *const droppedItem, gentity_s *const player, const Weapon *r_weapon)
{
  ?WeaponDropExtraNotifies@GItemsMP@@UEAAXQEBUgentity_s@@QEAU2@AEBUWeapon@@@Z(this, droppedItem, player, r_weapon);
}

/*
==============
GItemsMP::RestrictPickupForOwner
==============
*/

void __fastcall GItemsMP::RestrictPickupForOwner(GItemsMP *this, const gentity_s *ownerEnt, gentity_s *dropped)
{
  ?RestrictPickupForOwner@GItemsMP@@UEAAXPEBUgentity_s@@PEAU2@@Z(this, ownerEnt, dropped);
}

/*
==============
GItemsMP::SetRiotShieldHealthOnTransfer
==============
*/

void __fastcall GItemsMP::SetRiotShieldHealthOnTransfer(GItemsMP *this, const gentity_s *owner, gentity_s *weaponEnt, const Weapon *weapon, const bool isAlternate)
{
  ?SetRiotShieldHealthOnTransfer@GItemsMP@@UEAAXPEBUgentity_s@@PEAU2@AEBUWeapon@@_N@Z(this, owner, weaponEnt, weapon, isAlternate);
}

/*
==============
GItemsMP::ShouldDropAkimboWeapon
==============
*/

bool __fastcall GItemsMP::ShouldDropAkimboWeapon(GItemsMP *this)
{
  return ?ShouldDropAkimboWeapon@GItemsMP@@UEAA_NXZ(this);
}

/*
==============
GItemsMP::SetEntModel
==============
*/

void __fastcall GItemsMP::SetEntModel(GItemsMP *this, gentity_s *item, const XModel *xmodel)
{
  ?SetEntModel@GItemsMP@@UEAAXPEAUgentity_s@@PEBUXModel@@@Z(this, item, xmodel);
}

/*
==============
GItemsMP::WeaponPickupExtraNotifies
==============
*/

void __fastcall GItemsMP::WeaponPickupExtraNotifies(GItemsMP *this, gentity_s *thisItem, gentity_s *newDroppedItem, gentity_s *player, const WeaponDef *weapDef, bool pickedUp)
{
  ?WeaponPickupExtraNotifies@GItemsMP@@UEAAXPEAUgentity_s@@00PEBUWeaponDef@@_N@Z(this, thisItem, newDroppedItem, player, weapDef, pickedUp);
}

/*
==============
GItemsMP::BeginDeferItemDrops
==============
*/
void GItemsMP::BeginDeferItemDrops(GItemsMP *this)
{
  if ( this->m_deferDropItemMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 168, ASSERT_TYPE_ASSERT, "( m_deferDropItemMax == 0 )", (const char *)&queryFormat, "m_deferDropItemMax == 0") )
    __debugbreak();
  if ( this->m_deferDropItemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 169, ASSERT_TYPE_ASSERT, "( m_deferDropItemCount == 0 )", (const char *)&queryFormat, "m_deferDropItemCount == 0") )
    __debugbreak();
  this->m_deferDropItemMax = 200;
}

/*
==============
GItemsMP::CanDeferItemDrop
==============
*/
bool GItemsMP::CanDeferItemDrop(GItemsMP *this)
{
  return this->m_deferDropItemCount < this->m_deferDropItemMax;
}

/*
==============
GItemsMP::DeferItemDrop
==============
*/
void GItemsMP::DeferItemDrop(GItemsMP *this, const int characterIndex, const int dropIndex, const scr_string_t dropTag)
{
  unsigned int m_deferDropItemCount; 
  unsigned int m_deferDropItemMax; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 

  m_deferDropItemCount = this->m_deferDropItemCount;
  m_deferDropItemMax = this->m_deferDropItemMax;
  v8 = dropIndex;
  v9 = characterIndex;
  if ( m_deferDropItemCount > m_deferDropItemMax )
  {
    v14 = m_deferDropItemMax;
    v12 = m_deferDropItemCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 183, ASSERT_TYPE_ASSERT, "( m_deferDropItemCount ) <= ( m_deferDropItemMax )", "m_deferDropItemCount not in [0, m_deferDropItemMax]\n\t%u not in [0, %u]", v12, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 184, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( 2048 ) )", "characterIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(unsigned)( dropIndex ) < (unsigned)( ( 2048 ) )", "dropIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 186, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( characterIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( characterIndex )") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 187, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( dropIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( dropIndex )") )
    __debugbreak();
  v10 = this->m_deferDropItemCount;
  this->m_deferDropItems[v10].characterIndex = v9;
  this->m_deferDropItems[v10].entityIndex = v8;
  this->m_deferDropItems[v10].dropTag = dropTag;
  ++this->m_deferDropItemCount;
}

/*
==============
GItemsMP::FinishDeferItemDrops
==============
*/
void GItemsMP::FinishDeferItemDrops(GItemsMP *this)
{
  unsigned int i; 
  __int64 characterIndex; 
  __int64 entityIndex; 
  const gentity_s *v5; 
  scr_string_t dropTag; 
  gentity_s *v7; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  __int64 v10; 
  __int64 v11; 
  tmat43_t<vec3_t> matrix; 

  if ( this->m_deferDropItemCount > this->m_deferDropItemMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 202, ASSERT_TYPE_ASSERT, "( m_deferDropItemCount ) <= ( m_deferDropItemMax )", "m_deferDropItemCount not in [0, m_deferDropItemMax]\n\t%u not in [0, %u]", this->m_deferDropItemCount, this->m_deferDropItemMax) )
    __debugbreak();
  for ( i = 0; i < this->m_deferDropItemCount; ++i )
  {
    characterIndex = this->m_deferDropItems[i].characterIndex;
    if ( (unsigned int)characterIndex >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = this->m_deferDropItems[i].characterIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[characterIndex].r.isInUse != g_entityIsInUse[characterIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[characterIndex] )
    {
      entityIndex = this->m_deferDropItems[i].entityIndex;
      if ( (unsigned int)entityIndex >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = this->m_deferDropItems[i].entityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[entityIndex].r.isInUse != g_entityIsInUse[entityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[entityIndex] )
      {
        v5 = &g_entities[this->m_deferDropItems[i].characterIndex];
        dropTag = this->m_deferDropItems[i].dropTag;
        v7 = &g_entities[this->m_deferDropItems[i].entityIndex];
        Instance = GWeaponMap::GetInstance();
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        Weapon = BgWeaponMap::GetWeapon(Instance, v7->s.weaponHandle);
        G_Items_GetStateFromTag(v5, dropTag, NULL, &matrix, 1);
        if ( !G_Items_CheckPenetration(Weapon, &matrix) || (dropTag = scr_const.tag_weapon_chest, G_Items_GetStateFromTag(v5, scr_const.tag_weapon_chest, NULL, &matrix, 1), !G_Items_CheckPenetration(Weapon, &matrix)) )
        {
          G_Items_SetStateFromTag(v5, dropTag, v7, 1);
          G_Items_SetDefaultVelocity(v5, v7);
          G_Items_SetItemPhysics(v5, v7);
        }
      }
    }
  }
  *(_QWORD *)&this->m_deferDropItemMax = 0i64;
}

/*
==============
GItemsMP::RestoreRiotShieldHealthOnPickup
==============
*/
void GItemsMP::RestoreRiotShieldHealthOnPickup(GItemsMP *this, const gentity_s *owner, gentity_s *itemEnt, const Weapon *item)
{
  ;
}

/*
==============
GItemsMP::RestrictPickupForOwner
==============
*/
void GItemsMP::RestrictPickupForOwner(GItemsMP *this, const gentity_s *ownerEnt, gentity_s *dropped)
{
  if ( !ownerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 23, ASSERT_TYPE_ASSERT, "( ownerEnt )", (const char *)&queryFormat, "ownerEnt") )
    __debugbreak();
  if ( !dropped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 24, ASSERT_TYPE_ASSERT, "( dropped )", (const char *)&queryFormat, "dropped") )
    __debugbreak();
  dropped->s.clientNum = ownerEnt->s.number;
  dropped->nextthink = level.time + 1000;
}

/*
==============
GItemsMP::SaveRiotShieldHealthFromOwner
==============
*/
void GItemsMP::SaveRiotShieldHealthFromOwner(GItemsMP *this, const gentity_s *owner, gentity_s *launched, const Weapon *item)
{
  ;
}

/*
==============
GItemsMP::SetEntModel
==============
*/
void GItemsMP::SetEntModel(GItemsMP *this, gentity_s *item, const XModel *xmodel)
{
  ;
}

/*
==============
GItemsMP::SetRiotShieldHealthOnTransfer
==============
*/
void GItemsMP::SetRiotShieldHealthOnTransfer(GItemsMP *this, const gentity_s *owner, gentity_s *weaponEnt, const Weapon *weapon)
{
  ;
}

/*
==============
GItemsMP::ShouldAbortDropWeapon
==============
*/
bool GItemsMP::ShouldAbortDropWeapon(GItemsMP *this, const gentity_s *owner, const playerState_s *ps, const Weapon *weapon)
{
  GWeaponMap *Instance; 
  const dvar_t *v8; 
  int EquippedWeaponIndex; 
  PlayerEquippedWeaponState *v10; 
  const playerState_s *EntityPlayerStateConst; 
  unsigned int weaponIdx; 
  bool v13; 
  WeaponDef **v14; 
  __int64 v16; 

  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 76, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 77, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DVARBOOL_bg_giveAll;
  if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v8->current.enabled) )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weapon->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, ps, weapon), EquippedWeaponIndex >= 0) )
      v10 = &ps->weapEquippedData[EquippedWeaponIndex];
    else
      v10 = NULL;
    if ( !v10 )
      return 1;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(owner);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 61, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetAmmoInClipBothHands(EntityPlayerStateConst, weapon, 0) <= 0 && G_Items_GetNonClipAmmoToTransferToWeaponEntity(owner, weapon, 0) <= 0 )
    return 1;
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v16) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v16, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v13 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v14 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  return (*v14)->bClipOnly && !BG_GetAmmoInClipBothHands(ps, weapon, 0);
}

/*
==============
GItemsMP::ShouldDropAkimboWeapon
==============
*/
bool GItemsMP::ShouldDropAkimboWeapon(GItemsMP *this)
{
  return 0;
}

/*
==============
GItemsMP::TouchLogPickup
==============
*/
void GItemsMP::TouchLogPickup(GItemsMP *this, const gentity_s *other, const Weapon *weapon)
{
  char *WeaponName; 
  unsigned int number; 
  const char *v7; 
  const char *Guid; 
  char dest[64]; 
  char output[1024]; 

  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 139, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  Core_strcpy(dest, 0x40ui64, other->client->sess.cs.name);
  I_CleanStr(dest);
  WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
  number = other->s.number;
  v7 = WeaponName;
  Guid = SV_GameMP_GetGuid(number);
  G_MainMP_LogPrintf("Weapon;%s;%d;%s;%s\n", Guid, number, dest, v7);
}

/*
==============
GItemsMP::TouchSendEvent
==============
*/
void GItemsMP::TouchSendEvent(GItemsMP *this, gentity_s *clientEnt, const BgWeaponHandle weaponHandle, const entity_event_t pickupEvent, const bool predictable)
{
  gclient_s *client; 
  GWeaponMap *Instance; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 150, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  client = clientEnt->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 153, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( predictable )
    BG_AddPredictableEventToPlayerstate(pickupEvent, weaponHandle.m_mapEntryId, client->lastServerTime, Instance, &client->ps);
  else
    BG_AddUnPredictableEventToPlayerstate(pickupEvent, weaponHandle.m_mapEntryId, level.time, Instance, &client->ps);
}

/*
==============
GItemsMP::UpdateDefaultVelocity
==============
*/
void GItemsMP::UpdateDefaultVelocity(GItemsMP *this, vec3_t *velocity)
{
  const dvar_t *v2; 
  float value; 
  float v5; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  double v10; 
  const dvar_t *v11; 
  float v12; 
  double v13; 
  const dvar_t *v14; 
  float v15; 
  double v16; 

  v2 = DVARFLT_g_dropForwardSpeed;
  if ( !DVARFLT_g_dropForwardSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropForwardSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v5 = value * velocity->v[1];
  velocity->v[0] = value * velocity->v[0];
  velocity->v[2] = value * velocity->v[2];
  velocity->v[1] = v5;
  v6 = DVARFLT_g_dropUpSpeedBase;
  if ( !DVARFLT_g_dropUpSpeedBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropUpSpeedBase") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  v8 = DVARFLT_g_dropUpSpeedRand;
  if ( !DVARFLT_g_dropUpSpeedRand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropUpSpeedRand") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = G_crandom();
  velocity->v[2] = (float)((float)(*(float *)&v10 * v9) + v7) + velocity->v[2];
  v11 = DVARFLT_g_dropHorzSpeedRand;
  if ( !DVARFLT_g_dropHorzSpeedRand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropHorzSpeedRand") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = G_crandom();
  velocity->v[0] = (float)(*(float *)&v13 * v12) + velocity->v[0];
  v14 = DVARFLT_g_dropHorzSpeedRand;
  if ( !DVARFLT_g_dropHorzSpeedRand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dropHorzSpeedRand") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  v16 = G_crandom();
  velocity->v[1] = (float)(*(float *)&v16 * v15) + velocity->v[1];
}

/*
==============
GItemsMP::UpdateSpecialGroundOrientation
==============
*/
bool GItemsMP::UpdateSpecialGroundOrientation(GItemsMP *this, gentity_s *itemEnt)
{
  return 0;
}

/*
==============
GItemsMP::WeaponDropExtraNotifies
==============
*/
void GItemsMP::WeaponDropExtraNotifies(GItemsMP *this, const gentity_s *const droppedItem, gentity_s *const player, const Weapon *r_weapon)
{
  scrContext_t *v7; 

  if ( !droppedItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 108, ASSERT_TYPE_ASSERT, "( droppedItem )", (const char *)&queryFormat, "droppedItem") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_items_mp.cpp", 109, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  v7 = ScriptContext_Server();
  if ( r_weapon->weaponIdx )
    GScr_Weapon_AddParam(v7, r_weapon, 0);
  else
    Scr_AddUndefined(v7);
  GScr_AddEntity(droppedItem);
  GScr_Notify(player, scr_const.weapon_dropped, 2u);
}

/*
==============
GItemsMP::WeaponPickupExtraNotifies
==============
*/
void GItemsMP::WeaponPickupExtraNotifies(GItemsMP *this, gentity_s *thisItem, gentity_s *newDroppedItem, gentity_s *player)
{
  ;
}

