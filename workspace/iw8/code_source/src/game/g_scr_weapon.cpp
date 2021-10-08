/*
==============
GScr_Weapon_AddFields
==============
*/

void __fastcall GScr_Weapon_AddFields(scrContext_t *scrContext)
{
  ?GScr_Weapon_AddFields@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_Weapon_Shutdown
==============
*/

void __fastcall GScr_Weapon_Shutdown(scrContext_t *scrContext, const bool isFullClear)
{
  ?GScr_Weapon_Shutdown@@YAXAEAUscrContext_t@@_N@Z(scrContext, isFullClear);
}

/*
==============
GScr_Weapon_Set
==============
*/

void __fastcall GScr_Weapon_Set(scrContext_t *scrContext, scr_weapon_t *dest, const scr_weapon_t src)
{
  ?GScr_Weapon_Set@@YAXAEAUscrContext_t@@PEAW4scr_weapon_t@@W42@@Z(scrContext, dest, src);
}

/*
==============
GScr_Weapon_Save
==============
*/

void __fastcall GScr_Weapon_Save(const scrContext_t *scrContext, const scr_weapon_t weap, MemoryFile *memFile)
{
  ?GScr_Weapon_Save@@YAXAEBUscrContext_t@@W4scr_weapon_t@@PEAUMemoryFile@@@Z(scrContext, weap, memFile);
}

/*
==============
GScr_Weapon_SetField
==============
*/

void __fastcall GScr_Weapon_SetField(scrContext_t *scrContext, const scr_weapon_t weap, const int offset)
{
  ?GScr_Weapon_SetField@@YAXAEAUscrContext_t@@W4scr_weapon_t@@H@Z(scrContext, weap, offset);
}

/*
==============
GScr_Weapon_AddReference
==============
*/

void __fastcall GScr_Weapon_AddReference(scrContext_t *scrContext, const scr_weapon_t weap)
{
  ?GScr_Weapon_AddReference@@YAXAEAUscrContext_t@@W4scr_weapon_t@@@Z(scrContext, weap);
}

/*
==============
GScr_Weapon_AddParam
==============
*/

void __fastcall GScr_Weapon_AddParam(scrContext_t *scrContext, const Weapon *r_weapon, const bool isAlternate)
{
  ?GScr_Weapon_AddParam@@YAXAEAUscrContext_t@@AEBUWeapon@@_N@Z(scrContext, r_weapon, isAlternate);
}

/*
==============
GScr_Weapon_SetWeapon
==============
*/

void __fastcall GScr_Weapon_SetWeapon(scrContext_t *scrContext, scr_weapon_t *weap, const Weapon *r_weapon, const bool isAlternate)
{
  ?GScr_Weapon_SetWeapon@@YAXAEAUscrContext_t@@PEAW4scr_weapon_t@@AEBUWeapon@@_N@Z(scrContext, weap, r_weapon, isAlternate);
}

/*
==============
GScr_Weapon_Init
==============
*/

void __fastcall GScr_Weapon_Init(scrContext_t *scrContext, const bool isFullInit)
{
  ?GScr_Weapon_Init@@YAXAEAUscrContext_t@@_N@Z(scrContext, isFullInit);
}

/*
==============
GScr_Weapon_GetField
==============
*/

void __fastcall GScr_Weapon_GetField(scrContext_t *scrContext, const scr_weapon_t weap, const int offset)
{
  ?GScr_Weapon_GetField@@YAXAEAUscrContext_t@@W4scr_weapon_t@@H@Z(scrContext, weap, offset);
}

/*
==============
GScr_Weapon_RemoveReference
==============
*/

void __fastcall GScr_Weapon_RemoveReference(scrContext_t *scrContext, const scr_weapon_t weap)
{
  ?GScr_Weapon_RemoveReference@@YAXAEAUscrContext_t@@W4scr_weapon_t@@@Z(scrContext, weap);
}

/*
==============
GScr_Weapon_IsAlternate
==============
*/

bool __fastcall GScr_Weapon_IsAlternate(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  return ?GScr_Weapon_IsAlternate@@YA_NAEBUscrContext_t@@W4scr_weapon_t@@@Z(scrContext, weap);
}

/*
==============
GScr_Weapon_Load
==============
*/

scr_weapon_t __fastcall GScr_Weapon_Load(scrContext_t *scrContext, MemoryFile *memFile)
{
  return ?GScr_Weapon_Load@@YA?AW4scr_weapon_t@@AEAUscrContext_t@@PEAUMemoryFile@@@Z(scrContext, memFile);
}

/*
==============
GScr_Weapon_Create
==============
*/

scr_weapon_t __fastcall GScr_Weapon_Create(scrContext_t *scrContext, const Weapon *r_weapon, const bool isAlternate)
{
  return ?GScr_Weapon_Create@@YA?AW4scr_weapon_t@@AEAUscrContext_t@@AEBUWeapon@@_N@Z(scrContext, r_weapon, isAlternate);
}

/*
==============
GScr_Weapon_LoadPost
==============
*/

void __fastcall GScr_Weapon_LoadPost(const scrContext_t *scrContext)
{
  ?GScr_Weapon_LoadPost@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_Weapon_GetWeapon
==============
*/

const Weapon *__fastcall GScr_Weapon_GetWeapon(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  return ?GScr_Weapon_GetWeapon@@YAAEBUWeapon@@AEBUscrContext_t@@W4scr_weapon_t@@@Z(scrContext, weap);
}

/*
==============
GScr_Weapon_GetBaseName
==============
*/
void GScr_Weapon_GetBaseName(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const char *WeaponBaseName; 

  WeaponBaseName = BG_GetWeaponBaseName(&data->weapon, data->isAlternate);
  Scr_AddString(scrContext, WeaponBaseName);
}

/*
==============
GScr_Weapon_GetIsAlternate
==============
*/
void GScr_Weapon_GetIsAlternate(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddBool(scrContext, data->isAlternate);
}

/*
==============
GScr_Weapon_GetCamo
==============
*/
void GScr_Weapon_GetCamo(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const Camo *Camo; 

  if ( data->weapon.weaponCamo )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 660, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Camo = BG_Camo_GetCamo(data->weapon.weaponCamo);
    if ( !Camo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 663, ASSERT_TYPE_ASSERT, "(camo)", (const char *)&queryFormat, "camo") )
      __debugbreak();
    Scr_AddConstString(scrContext, Camo->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetUnderBarrelVarIndex
==============
*/
void GScr_Weapon_GetUnderBarrelVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[10]);
}

/*
==============
GScr_Weapon_GetScopeVarIndex
==============
*/
void GScr_Weapon_GetScopeVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[9]);
}

/*
==============
GScr_Weapon_GetReceiverVarIndex
==============
*/
void GScr_Weapon_GetReceiverVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[0]);
}

/*
==============
GScr_Weapon_GetFrontPieceVarIndex
==============
*/
void GScr_Weapon_GetFrontPieceVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[1]);
}

/*
==============
GScr_Weapon_GetBackPieceVarIndex
==============
*/
void GScr_Weapon_GetBackPieceVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[2]);
}

/*
==============
GScr_Weapon_GetMagazineVarIndex
==============
*/
void GScr_Weapon_GetMagazineVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[3]);
}

/*
==============
GScr_Weapon_GetModifierVarIndex
==============
*/
void GScr_Weapon_GetModifierVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[11]);
}

/*
==============
GScr_Weapon_GetVisualVarIndex
==============
*/
void GScr_Weapon_GetVisualVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[12]);
}

/*
==============
GScr_Weapon_GetOverrideVarIndex
==============
*/
void GScr_Weapon_GetOverrideVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[4]);
}

/*
==============
GScr_Weapon_GetMuzzleVarIndex
==============
*/
void GScr_Weapon_GetMuzzleVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[5]);
}

/*
==============
GScr_Weapon_GetRearGripVarIndex
==============
*/
void GScr_Weapon_GetRearGripVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[6]);
}

/*
==============
GScr_Weapon_GetTriggerVarIndex
==============
*/
void GScr_Weapon_GetTriggerVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[7]);
}

/*
==============
GScr_Weapon_GetExtraVarIndex
==============
*/
void GScr_Weapon_GetExtraVarIndex(scrContext_t *scrContext, const GScrWeaponData *data)
{
  Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[8]);
}

/*
==============
GScr_Weapon_GetScope
==============
*/
void GScr_Weapon_GetScope(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_SCOPE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 757, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetReticle
==============
*/
void GScr_Weapon_GetReticle(scrContext_t *scrContext, const GScrWeaponData *data)
{
  unsigned __int8 scopeVariation; 

  if ( data->weapon.weaponIdx && (scopeVariation = data->weapon.scopeVariation) != 0 )
    Scr_AddInt(scrContext, scopeVariation - 1);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
GScr_Weapon_GetUnderBarrel
==============
*/
void GScr_Weapon_GetUnderBarrel(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_UNDERBARREL);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 789, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetModifier
==============
*/
void GScr_Weapon_GetModifier(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_MODIFIER);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 804, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetVisual
==============
*/
void GScr_Weapon_GetVisual(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_VISUAL);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 819, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetOverride
==============
*/
void GScr_Weapon_GetOverride(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_OVERRIDE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 834, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetReceiver
==============
*/
void GScr_Weapon_GetReceiver(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_RECEIVER);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 849, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetFrontPiece
==============
*/
void GScr_Weapon_GetFrontPiece(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_FRONT_PIECE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 864, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetBackPiece
==============
*/
void GScr_Weapon_GetBackPiece(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_BACK_PIECE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 879, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetMagazine
==============
*/
void GScr_Weapon_GetMagazine(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_MAGAZINE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 894, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetMuzzle
==============
*/
void GScr_Weapon_GetMuzzle(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_MUZZLE);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 909, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetRearGrip
==============
*/
void GScr_Weapon_GetRearGrip(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_REAR_GRIP);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 924, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetTrigger
==============
*/
void GScr_Weapon_GetTrigger(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_TRIGGER);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 939, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetExtra
==============
*/
void GScr_Weapon_GetExtra(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const WeaponAttachment *WeaponPrimaryAttachment; 

  WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(&data->weapon, ATT_SLOT_EXTRA);
  if ( WeaponPrimaryAttachment )
  {
    if ( !data->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 954, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( data->weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( data->weapon )") )
      __debugbreak();
    Scr_AddConstString(scrContext, WeaponPrimaryAttachment->internalName);
  }
  else
  {
    Scr_AddUndefined(scrContext);
  }
}

/*
==============
GScr_Weapon_GetOthers
==============
*/
void GScr_Weapon_GetOthers(scrContext_t *scrContext, const GScrWeaponData *data)
{
  __int64 v4; 
  const WeaponCompleteDef *v5; 
  int v6; 

  Scr_MakeArray(scrContext);
  if ( data->weapon.weaponIdx )
  {
    v4 = 0i64;
    v5 = BG_WeaponCompleteDef(&data->weapon, data->isAlternate);
    if ( v5->attachments[13].attachmentCount )
    {
      do
      {
        v6 = 1 << v4;
        if ( (1 << v4 < 0 || (unsigned int)v6 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v6, "signed", v6) )
          __debugbreak();
        if ( ((unsigned __int16)v6 & data->weapon.weaponOthers) != 0 )
        {
          Scr_AddConstString(scrContext, v5->attachments[13].attachments[v4]->internalName);
          Scr_AddArray(scrContext);
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < v5->attachments[13].attachmentCount );
    }
  }
}

/*
==============
GScr_Weapon_GetOtherVarIndices
==============
*/
void GScr_Weapon_GetOtherVarIndices(scrContext_t *scrContext, const GScrWeaponData *data)
{
  __int64 v4; 
  const WeaponCompleteDef *v5; 
  int v6; 
  WeaponAttachment *v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  __int64 v10; 

  Scr_MakeArray(scrContext);
  if ( data->weapon.weaponIdx )
  {
    v4 = 0i64;
    v5 = BG_WeaponCompleteDef(&data->weapon, data->isAlternate);
    if ( v5->attachments[13].attachmentCount )
    {
      do
      {
        v6 = 1 << v4;
        if ( (1 << v4 < 0 || (unsigned int)v6 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v6, "signed", v6) )
          __debugbreak();
        if ( ((unsigned __int16)v6 & data->weapon.weaponOthers) != 0 )
        {
          v7 = v5->attachments[13].attachments[v4];
          if ( (unsigned int)v4 >= 0x10 )
          {
            LODWORD(v10) = 16;
            LODWORD(v9) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          v8 = truncate_cast<unsigned char,unsigned int>(v4 + 13);
          Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[v8]);
          Scr_AddArrayStringIndexed(scrContext, v7->internalName);
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < v5->attachments[13].attachmentCount );
    }
  }
}

/*
==============
GScr_Weapon_GetAttachments
==============
*/
void GScr_Weapon_GetAttachments(scrContext_t *scrContext, const GScrWeaponData *data)
{
  unsigned int AllWeaponAttachments; 
  WeaponAttachment **v5; 
  __int64 v6; 
  WeaponAttachment *attachments[30]; 

  Scr_MakeArray(scrContext);
  if ( data->weapon.weaponIdx )
  {
    AllWeaponAttachments = BG_GetAllWeaponAttachments(&data->weapon, (const WeaponAttachment **)attachments);
    if ( AllWeaponAttachments )
    {
      v5 = attachments;
      v6 = AllWeaponAttachments;
      do
      {
        Scr_AddConstString(scrContext, (*v5)->internalName);
        Scr_AddArray(scrContext);
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
}

/*
==============
GScr_Weapon_GetAttachmentVarIndices
==============
*/
void GScr_Weapon_GetAttachmentVarIndices(scrContext_t *scrContext, const GScrWeaponData *data)
{
  unsigned int AllWeaponAttachmentsWithIds; 
  unsigned __int8 *v5; 
  WeaponAttachment **v6; 
  __int64 v7; 
  WeaponAttachment *attachments[30]; 
  unsigned __int8 attachmentIds[32]; 

  Scr_MakeArray(scrContext);
  if ( data->weapon.weaponIdx )
  {
    AllWeaponAttachmentsWithIds = BG_GetAllWeaponAttachmentsWithIds(&data->weapon, (const WeaponAttachment **)attachments, attachmentIds);
    if ( AllWeaponAttachmentsWithIds )
    {
      v5 = attachmentIds;
      v6 = attachments;
      v7 = AllWeaponAttachmentsWithIds;
      do
      {
        Scr_AddInt(scrContext, data->weapon.attachmentVariationIndices[*v5]);
        Scr_AddArrayStringIndexed(scrContext, (*v6)->internalName);
        ++v5;
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
}

/*
==============
GScr_Weapon_GetLootVariant
==============
*/
void GScr_Weapon_GetLootVariant(scrContext_t *scrContext, const GScrWeaponData *data)
{
  unsigned __int8 weaponLootId; 

  weaponLootId = data->weapon.weaponLootId;
  if ( weaponLootId )
    Scr_AddInt(scrContext, weaponLootId - 1);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
GScr_Weapon_GetHasAlternate
==============
*/
void GScr_Weapon_GetHasAlternate(scrContext_t *scrContext, const GScrWeaponData *data)
{
  const Weapon *AltWeapon; 

  if ( data->isAlternate )
  {
    Scr_AddBool(scrContext, 0);
  }
  else
  {
    AltWeapon = BG_GetAltWeapon(&data->weapon);
    Scr_AddBool(scrContext, AltWeapon->weaponIdx != 0);
  }
}

/*
==============
GScr_Weapon_GetClass
==============
*/
void GScr_Weapon_GetClass(scrContext_t *scrContext, const GScrWeaponData *data)
{
  weapClass_t WeaponClass; 
  const char *WeaponClassName; 

  if ( data->weapon.weaponIdx )
  {
    WeaponClass = BG_GetWeaponClass(&data->weapon, data->isAlternate);
    WeaponClassName = BG_GetWeaponClassName(WeaponClass);
    Scr_AddString(scrContext, WeaponClassName);
  }
  else
  {
    Scr_AddString(scrContext, "none");
  }
}

/*
==============
GScr_Weapon_GetType
==============
*/
void GScr_Weapon_GetType(scrContext_t *scrContext, const GScrWeaponData *data)
{
  weapType_t WeaponType; 
  const char *WeaponTypeName; 

  WeaponType = BG_GetWeaponType(&data->weapon, data->isAlternate);
  WeaponTypeName = BG_GetWeaponTypeName(WeaponType);
  Scr_AddString(scrContext, WeaponTypeName);
}

/*
==============
GScr_Weapon_GetInventoryType
==============
*/
void GScr_Weapon_GetInventoryType(scrContext_t *scrContext, const GScrWeaponData *data)
{
  weapInventoryType_t inventoryType; 
  unsigned int weaponIdx; 
  bool v5; 
  WeaponDef **v6; 
  const char *WeaponInventoryTypeName; 
  int v8; 
  unsigned int v9; 

  if ( data->isAlternate )
  {
    inventoryType = WEAPINVENTORY_ALTMODE;
  }
  else
  {
    weaponIdx = data->weapon.weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      v9 = bg_lastParsedWeaponIndex;
      v8 = data->weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v8, v9) )
        __debugbreak();
    }
    v5 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
    v6 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    inventoryType = (*v6)->inventoryType;
  }
  WeaponInventoryTypeName = BG_GetWeaponInventoryTypeName(inventoryType);
  Scr_AddString(scrContext, WeaponInventoryTypeName);
}

/*
==============
GScr_Weapon_GetClipSize
==============
*/
void GScr_Weapon_GetClipSize(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int ClipSize; 

  ClipSize = BG_GetClipSize(NULL, &data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, ClipSize);
}

/*
==============
GScr_Weapon_GetStartAmmo
==============
*/
void GScr_Weapon_GetStartAmmo(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int started; 

  started = BG_StartAmmo(&data->weapon, data->isAlternate, 0);
  Scr_AddInt(scrContext, started);
}

/*
==============
GScr_Weapon_GetMaxAmmo
==============
*/
void GScr_Weapon_GetMaxAmmo(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int v3; 

  v3 = BG_MaxAmmo(&data->weapon, data->isAlternate, 0);
  Scr_AddInt(scrContext, v3);
}

/*
==============
GScr_Weapon_GetIsAuto
==============
*/
void GScr_Weapon_GetIsAuto(scrContext_t *scrContext, const GScrWeaponData *data)
{
  if ( BG_GetWeaponFireType(&data->weapon, data->isAlternate) || BG_GetWeaponType(&data->weapon, data->isAlternate) != WEAPTYPE_BULLET )
    Scr_AddInt(scrContext, 0);
  else
    Scr_AddInt(scrContext, 1);
}

/*
==============
GScr_Weapon_GetIsSemiAuto
==============
*/
void GScr_Weapon_GetIsSemiAuto(scrContext_t *scrContext, const GScrWeaponData *data)
{
  if ( ((BG_GetWeaponFireType(&data->weapon, data->isAlternate) - 1) & 0xFFFFFFFD) != 0 || BG_GetWeaponType(&data->weapon, data->isAlternate) != WEAPTYPE_BULLET )
    Scr_AddInt(scrContext, 0);
  else
    Scr_AddInt(scrContext, 1);
}

/*
==============
GScr_Weapon_GetIsBeam
==============
*/
void GScr_Weapon_GetIsBeam(scrContext_t *scrContext, const GScrWeaponData *data)
{
  weapFireType_t WeaponFireType; 

  WeaponFireType = BG_GetWeaponFireType(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, WeaponFireType == WEAPON_FIRETYPE_BEAM);
}

/*
==============
GScr_Weapon_GetIsBolt
==============
*/
void GScr_Weapon_GetIsBolt(scrContext_t *scrContext, const GScrWeaponData *data)
{
  bool IsBoltAction; 

  IsBoltAction = BG_IsBoltAction(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, IsBoltAction);
}

/*
==============
GScr_Weapon_GetIsMelee
==============
*/
void GScr_Weapon_GetIsMelee(scrContext_t *scrContext, const GScrWeaponData *data)
{
  bool IsMeleeOnlyWeapon; 

  IsMeleeOnlyWeapon = BG_IsMeleeOnlyWeapon(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, IsMeleeOnlyWeapon);
}

/*
==============
GScr_Weapon_GetMaxDamage
==============
*/
void GScr_Weapon_GetMaxDamage(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int Damage; 

  Damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, &data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, Damage);
}

/*
==============
GScr_Weapon_GetMinDamage
==============
*/
void GScr_Weapon_GetMinDamage(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int MinDamage; 

  MinDamage = BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, &data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, MinDamage);
}

/*
==============
GScr_Weapon_GetDamageRadius
==============
*/
void GScr_Weapon_GetDamageRadius(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int v3; 

  v3 = BG_ExplosionRadius(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, v3);
}

/*
==============
GScr_Weapon_GetFuseTime
==============
*/
void GScr_Weapon_GetFuseTime(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int v3; 

  v3 = BG_WeaponFuseTime(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, v3);
}

/*
==============
GScr_Weapon_GetAIFuseTime
==============
*/
void GScr_Weapon_GetAIFuseTime(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int v3; 

  v3 = BG_WeaponAIFuseTime(&data->weapon, data->isAlternate);
  Scr_AddInt(scrContext, v3);
}

/*
==============
GScr_Weapon_GetBurstCount
==============
*/
void GScr_Weapon_GetBurstCount(scrContext_t *scrContext, const GScrWeaponData *data)
{
  int WeaponBurstCount; 

  if ( BG_GetWeaponFireType(&data->weapon, data->isAlternate) == WEAPON_FIRETYPE_BURST )
    WeaponBurstCount = BG_GetWeaponBurstCount(&data->weapon, data->isAlternate);
  else
    WeaponBurstCount = 0;
  Scr_AddInt(scrContext, WeaponBurstCount);
}

/*
==============
GScr_Weapon_GetFireTime
==============
*/
void GScr_Weapon_GetFireTime(scrContext_t *scrContext, const GScrWeaponData *data)
{
  bool isDualWielding; 
  int fireTime; 
  int fireDelay; 

  isDualWielding = BG_WeaponIsDualWield(&data->weapon);
  BG_GetFireTime(NULL, NULL, &data->weapon, data->isAlternate, isDualWielding, 0, &fireTime, &fireDelay);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+48h+arg_8]
    vmulss  xmm1, xmm0, cs:__real@3a83126f; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
GScr_Weapon_GetCanDrop
==============
*/
void GScr_Weapon_GetCanDrop(scrContext_t *scrContext, const GScrWeaponData *data)
{
  bool IsDisabled; 

  IsDisabled = BG_WeaponDropIsDisabled(&data->weapon, data->isAlternate);
  Scr_AddBool(scrContext, !IsDisabled);
}

/*
==============
GScr_Weapon_GetPreferredDrop
==============
*/
void GScr_Weapon_GetPreferredDrop(scrContext_t *scrContext, const GScrWeaponData *data)
{
  bool IsPrefferedDrop; 

  IsPrefferedDrop = BG_WeaponIsPrefferedDrop(&data->weapon, data->isAlternate);
  Scr_AddBool(scrContext, !IsPrefferedDrop);
}

/*
==============
GScr_Weapon_GetMaterialType
==============
*/
void GScr_Weapon_GetMaterialType(scrContext_t *scrContext, const GScrWeaponData *data)
{
  WeaponSFXPackage *SfxPackage; 

  SfxPackage = BG_GetSfxPackage(&data->weapon, data->isAlternate);
  if ( SfxPackage )
    Scr_AddConstString(scrContext, *s_weapMaterialName[SfxPackage->sfxMaterialType]);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
GScr_Weapon_GetStickerSlot0
==============
*/
void GScr_Weapon_GetStickerSlot0(scrContext_t *scrContext, const GScrWeaponData *data)
{
  GScr_Weapon_GetStickerSlot(scrContext, data, 0i64);
}

/*
==============
GScr_Weapon_GetStickerSlot1
==============
*/
void GScr_Weapon_GetStickerSlot1(scrContext_t *scrContext, const GScrWeaponData *data)
{
  GScr_Weapon_GetStickerSlot(scrContext, data, 1ui64);
}

/*
==============
GScr_Weapon_GetStickerSlot2
==============
*/
void GScr_Weapon_GetStickerSlot2(scrContext_t *scrContext, const GScrWeaponData *data)
{
  GScr_Weapon_GetStickerSlot(scrContext, data, 2ui64);
}

/*
==============
GScr_Weapon_GetStickerSlot3
==============
*/
void GScr_Weapon_GetStickerSlot3(scrContext_t *scrContext, const GScrWeaponData *data)
{
  GScr_Weapon_GetStickerSlot(scrContext, data, 3ui64);
}

/*
==============
GScr_Weapon_Spawn
==============
*/
void GScr_Weapon_Spawn(scrContext_t *scrContext)
{
  GScr_Weapon_SpawnInternal(scrContext, 0);
}

/*
==============
GScr_Weapon_SpawnAlt
==============
*/
void GScr_Weapon_SpawnAlt(scrContext_t *scrContext)
{
  GScr_Weapon_SpawnInternal(scrContext, 1);
}

/*
==============
GScr_Weapon_SpawnFromString
==============
*/
void GScr_Weapon_SpawnFromString(scrContext_t *scrContext)
{
  const char *String; 
  bool IsAlternate; 
  int v11; 
  Weapon result; 
  Weapon r_weapon; 

  if ( Scr_GetType(scrContext, 0) )
  {
    String = Scr_GetString(scrContext, 0);
    _RAX = GScr_Main_GetWeaponForName(&result, scrContext, String);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    IsAlternate = BG_IsAlternate(String);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    IsAlternate = 0;
    __asm
    {
      vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm0
      vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm1
    }
  }
  v11 = GScr_Weapon_Create(scrContext, &r_weapon, IsAlternate);
  Scr_AddEntityNum(scrContext, v11, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_SpawnNull
==============
*/
void GScr_Weapon_SpawnNull(scrContext_t *scrContext)
{
  Scr_AddEntityNum(scrContext, 0, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_IsWeaponObject
==============
*/
void GScr_Weapon_IsWeaponObject(scrContext_t *scrContext)
{
  if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY && (unsigned __int8)*(_DWORD *)&Scr_GetEntityRef(scrContext, 0).entclass == 10 )
    Scr_AddInt(scrContext, 1);
  else
    Scr_AddInt(scrContext, 0);
}

/*
==============
GScr_Weapon_IsSameWeapon
==============
*/
void GScr_Weapon_IsSameWeapon(scrContext_t *scrContext)
{
  VariableType Type; 
  VariableType v3; 
  scr_entref_t EntityRef; 
  scr_entref_t v5; 
  const GScrWeaponData *RefConst; 
  const GScrWeaponData *v7; 
  int v8; 

  Type = Scr_GetType(scrContext, 0);
  v3 = Scr_GetType(scrContext, 1u);
  if ( Type && v3 )
  {
    EntityRef = Scr_GetEntityRef(scrContext, 0);
    if ( EntityRef.entclass == ENTITY_CLASS_SAVED_COUNT )
    {
      v5 = Scr_GetEntityRef(scrContext, 1u);
      if ( v5.entclass == ENTITY_CLASS_SAVED_COUNT )
      {
        if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) && Scr_GetInt(scrContext, 2u) )
        {
          RefConst = GScr_Weapon_GetRefConst(scrContext, EntityRef);
          v7 = GScr_Weapon_GetRefConst(scrContext, v5);
          v8 = memcmp_0(RefConst, v7, 0x3Cui64);
          Scr_AddBool(scrContext, v8 == 0);
        }
        else
        {
          Scr_AddBool(scrContext, EntityRef.entnum == v5.entnum);
        }
      }
      else
      {
        Scr_ParamError(COM_ERR_5201, scrContext, 1u, "Invalid weapon parameter specified. Weapon must be a weapon object");
      }
    }
    else
    {
      Scr_ParamError(COM_ERR_5200, scrContext, 0, "Invalid weapon parameter specified. Weapon must be a weapon object");
    }
  }
  else
  {
    Scr_AddBool(scrContext, 0);
  }
}

/*
==============
GScr_Weapon_IsWeaponNull
==============
*/
void GScr_Weapon_IsWeaponNull(scrContext_t *scrContext)
{
  const GScrWeaponData *ParamConst; 

  ParamConst = GScr_Weapon_GetParamConst(scrContext, 0);
  if ( !ParamConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2523, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  Scr_AddBool(scrContext, ParamConst->weapon.weaponIdx == 0);
}

/*
==============
GScr_Weapon_IsWeaponUndefined
==============
*/
void GScr_Weapon_IsWeaponUndefined(scrContext_t *scrContext)
{
  if ( Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    goto LABEL_8;
  if ( Scr_GetType(scrContext, 0) == VAR_STRING )
  {
    if ( Scr_GetConstString(scrContext, 0) == scr_const.none )
      goto LABEL_8;
  }
  else if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY )
  {
    if ( !GScr_Weapon_GetParamConst(scrContext, 0)->weapon.weaponIdx )
    {
LABEL_8:
      Scr_AddBool(scrContext, 1);
      return;
    }
  }
  else
  {
    Scr_ParamError(COM_ERR_5202, scrContext, 0, "Invalid weapon parameter specified. Weapon must be a undefined, weapon object, or weapon string");
  }
  Scr_AddBool(scrContext, 0);
}

/*
==============
GScr_Weapon_GetCompleteWeaponName
==============
*/
void GScr_Weapon_GetCompleteWeaponName(scrContext_t *scrContext)
{
  const GScrWeaponData *ParamConst; 
  char output[512]; 

  ParamConst = GScr_Weapon_GetParamConst(scrContext, 0);
  BG_GetWeaponNameComplete(&ParamConst->weapon, ParamConst->isAlternate, output, 0x200u);
  Scr_AddString(scrContext, output);
}

/*
==============
GScr_Weapon_GetWeaponIndex
==============
*/
void GScr_Weapon_GetWeaponIndex(scrContext_t *scrContext)
{
  const GScrWeaponData *ParamConst; 

  ParamConst = GScr_Weapon_GetParamConst(scrContext, 0);
  Scr_AddInt(scrContext, ParamConst->weapon.weaponIdx);
}

/*
==============
GScr_Weapon_CanUseAttachment
==============
*/
void GScr_Weapon_CanUseAttachment(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  const GScrWeaponData *WeaponData; 
  scr_string_t ConstString; 
  unsigned int v6; 
  AttachmentList *attachments; 
  unsigned __int16 outAttachmentIndex; 

  v2 = 0;
  if ( entref.entclass != ENTITY_CLASS_SAVED_COUNT )
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
    goto LABEL_5;
  }
  WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  if ( !WeaponData )
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2635, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
      __debugbreak();
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  v6 = 0;
  attachments = BG_WeaponCompleteDef(&WeaponData->weapon, WeaponData->isAlternate)->attachments;
  while ( !GScr_Weapon_GetAttachmentIndex(ConstString, attachments->attachments, attachments->attachmentCount, &outAttachmentIndex) )
  {
    ++v6;
    ++attachments;
    if ( v6 >= 0xE )
      goto LABEL_12;
  }
  v2 = 1;
LABEL_12:
  Scr_AddBool(scrContext, v2);
}

/*
==============
GScr_Weapon_WithAttachments
==============
*/
void GScr_Weapon_WithAttachments(scrContext_t *scrContext, scr_entref_t entref)
{
  int v7; 
  Weapon outWeapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2674, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+88h+outWeapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+88h+outWeapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+88h+outWeapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&outWeapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
  if ( Scr_GetType(scrContext, 0) )
  {
    if ( outWeapon.weaponIdx )
      GScr_Weapon_ReadAttachments(scrContext, 0, -1, 0, &outWeapon);
    else
      Scr_Error(COM_ERR_5203, scrContext, "Cannot set the attachments on null weapon");
  }
  if ( !BG_ActiveUnderbarrel(&outWeapon) && _RDI->isAlternate )
    Scr_Error(COM_ERR_5204, scrContext, "Trying to set underbarrel attachment without alt fire mode on a weapon in alt mode");
  v7 = GScr_Weapon_Create(scrContext, &outWeapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v7, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithoutAttachments
==============
*/

void __fastcall GScr_Weapon_WithoutAttachments(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  bool v12; 
  int v13; 
  int v14; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RBX = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RBX )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RBX = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2715, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rbx]
    vmovups ymmword ptr [rbp+57h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rbp+57h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmovsd  qword ptr [rbp+57h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( (_WORD)_EAX )
  {
    __asm { vmovups ymm2, ymmword ptr [rbx] }
    v14 = *(_DWORD *)&_RBX->weapon.weaponCamo;
    *(_WORD *)&r_weapon.scopeVariation = 0;
    memset(&r_weapon.stickerIndices[3], 0, 48);
    __asm { vmovd   eax, xmm2 }
    *(_QWORD *)&r_weapon.weaponIdx = (unsigned __int16)_EAX;
    *(_WORD *)&r_weapon.weaponCamo = v14;
    __asm { vpextrq rax, xmm2, 1 }
    r_weapon.weaponClientLoadout = WORD1(_RAX);
  }
  v12 = BG_ActiveUnderbarrel(&r_weapon) && _RBX->isAlternate;
  v13 = GScr_Weapon_Create(scrContext, &r_weapon, v12);
  Scr_AddEntityNum(scrContext, v13, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithAttachment
==============
*/
void GScr_Weapon_WithAttachment(scrContext_t *scrContext, scr_entref_t entref)
{
  int Int; 
  scr_string_t ConstString; 
  int v9; 
  int v10; 
  Weapon r_weapon; 

  Int = 0;
  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2745, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0A8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
  ConstString = Scr_GetConstString(scrContext, 0);
  v9 = -1;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_INTEGER )
  {
    v9 = 1;
    Int = Scr_GetInt(scrContext, 1u);
  }
  GScr_Weapon_AddAttachmentToWeapon(scrContext, 0, v9, ConstString, Int, 0, &r_weapon);
  v10 = GScr_Weapon_Create(scrContext, &r_weapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v10, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithoutAttachment
==============
*/
void GScr_Weapon_WithoutAttachment(scrContext_t *scrContext, scr_entref_t entref)
{
  scr_string_t ConstString; 
  int v8; 
  Weapon outWeapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RBX = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RBX )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RBX = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2781, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+88h+outWeapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsp+88h+outWeapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsp+88h+outWeapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&outWeapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
  ConstString = Scr_GetConstString(scrContext, 0);
  GScr_Weapon_RemoveAttachmentFromWeapon(scrContext, 0, ConstString, &outWeapon);
  v8 = GScr_Weapon_Create(scrContext, &outWeapon, _RBX->isAlternate);
  Scr_AddEntityNum(scrContext, v8, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithOtherAttachment
==============
*/

void __fastcall GScr_Weapon_WithOtherAttachment(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  int Int; 
  __int64 v10; 
  WeaponCompleteDef *v11; 
  scr_string_t ConstString; 
  unsigned __int16 v13; 
  unsigned __int8 v14; 
  const char *WeaponBaseName; 
  const char *String; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int16 outAttachmentIndex; 
  Weapon r_weapon; 

  Int = 0;
  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RSI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RSI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RSI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2811, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RSI->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  v10 = (unsigned __int16)_EAX;
  if ( (unsigned __int16)_EAX > bg_lastParsedWeaponIndex )
  {
    LODWORD(v19) = (unsigned __int16)_EAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v19, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponCompleteDefs[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  v11 = bg_weaponCompleteDefs[v10];
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( GScr_Weapon_GetAttachmentIndex(ConstString, v11->attachments[13].attachments, v11->attachments[13].attachmentCount, &outAttachmentIndex) )
  {
    v13 = outAttachmentIndex;
    if ( outAttachmentIndex >= v11->attachments[13].attachmentCount )
    {
      LODWORD(v20) = v11->attachments[13].attachmentCount;
      LODWORD(v19) = outAttachmentIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2821, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( otherList->attachmentCount )", "otherIndex doesn't index otherList->attachmentCount\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    r_weapon.weaponOthers |= truncate_cast<unsigned short,int>(1 << v13);
    if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_INTEGER )
      Int = Scr_GetInt(scrContext, 1u);
    v14 = truncate_cast<unsigned char,int>(Int);
    if ( v13 >= 0x10u )
    {
      LODWORD(v20) = 16;
      LODWORD(v19) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    r_weapon.attachmentVariationIndices[truncate_cast<unsigned char,unsigned int>(v13 + 13)] = v14;
  }
  else
  {
    WeaponBaseName = BG_GetWeaponBaseName(&r_weapon, _RSI->isAlternate);
    String = Scr_GetString(scrContext, 0);
    v17 = j_va("Unknown other attachment '%s' specified for weapon %s", String, WeaponBaseName);
    Scr_Error(COM_ERR_5205, scrContext, v17);
  }
  v18 = GScr_Weapon_Create(scrContext, &r_weapon, _RSI->isAlternate);
  Scr_AddEntityNum(scrContext, v18, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_RemoveOtherAttachment
==============
*/

void __fastcall GScr_Weapon_RemoveOtherAttachment(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  __int64 v9; 
  WeaponCompleteDef *v10; 
  scr_string_t ConstString; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  const char *v14; 
  const char *v15; 
  ComErrorCode v16; 
  const char *WeaponBaseName; 
  const char *String; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int16 outAttachmentIndex; 
  Weapon r_weapon; 
  char output[512]; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RSI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RSI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RSI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2857, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+2B8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rsp+2B8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rsi+30h]
    vmovsd  qword ptr [rsp+2B8h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RSI->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  v9 = (unsigned __int16)_EAX;
  if ( (unsigned __int16)_EAX > bg_lastParsedWeaponIndex )
  {
    LODWORD(v20) = (unsigned __int16)_EAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v20, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponCompleteDefs[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  v10 = bg_weaponCompleteDefs[v9];
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( !GScr_Weapon_GetAttachmentIndex(ConstString, v10->attachments[13].attachments, v10->attachments[13].attachmentCount, &outAttachmentIndex) )
  {
    WeaponBaseName = BG_GetWeaponBaseName(&r_weapon, _RSI->isAlternate);
    String = Scr_GetString(scrContext, 0);
    v15 = j_va("Unknown other attachment '%s' specified for weapon %s", String, WeaponBaseName);
    v16 = COM_ERR_5207;
    goto LABEL_21;
  }
  v12 = outAttachmentIndex;
  if ( outAttachmentIndex >= v10->attachments[13].attachmentCount )
  {
    LODWORD(v21) = v10->attachments[13].attachmentCount;
    LODWORD(v20) = outAttachmentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2867, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( otherList->attachmentCount )", "otherIndex doesn't index otherList->attachmentCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v13 = truncate_cast<unsigned short,int>(1 << v12);
  if ( (r_weapon.weaponOthers & v13) == 0 )
  {
    BG_GetWeaponNameComplete(&r_weapon, _RSI->isAlternate, output, 0x200u);
    v14 = Scr_GetString(scrContext, 0);
    v15 = j_va("Other attachment '%s' cannot be removed from weapon %s. The attachment is not present", v14, output);
    v16 = COM_ERR_5206;
LABEL_21:
    Scr_Error(v16, scrContext, v15);
    goto LABEL_22;
  }
  r_weapon.weaponOthers &= ~v13;
  r_weapon.attachmentVariationIndices[Com_GetOtherAttachmentId(v12)] = 0;
LABEL_22:
  v19 = GScr_Weapon_Create(scrContext, &r_weapon, _RSI->isAlternate);
  Scr_AddEntityNum(scrContext, v19, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithCamo
==============
*/
void GScr_Weapon_WithCamo(scrContext_t *scrContext, scr_entref_t entref)
{
  scr_string_t ConstString; 
  unsigned int IndexFromScrString; 
  const char *WeaponBaseName; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  ComErrorCode v15; 
  const char *v16; 
  int v17; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2908, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+98h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+98h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+98h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
  if ( Scr_GetType(scrContext, 0) )
  {
    if ( !r_weapon.weaponIdx )
    {
      Scr_Error(COM_ERR_5208, scrContext, "Cannot set the camo on null weapon");
      goto LABEL_19;
    }
    if ( Scr_GetType(scrContext, 0) == VAR_STRING )
    {
      ConstString = Scr_GetConstString(scrContext, 0);
      IndexFromScrString = BG_Camo_GetIndexFromScrString(ConstString);
      if ( IndexFromScrString >= BG_Camo_GetCamoCount() )
      {
        WeaponBaseName = BG_GetWeaponBaseName(&_RDI->weapon, _RDI->isAlternate);
        v10 = SL_ConvertToString(ConstString);
        v11 = j_va("Invalid camo %s specified for weapon %s. Camo name does not exist.", v10, WeaponBaseName);
        Scr_Error(COM_ERR_5209, scrContext, v11);
        IndexFromScrString = 0;
      }
      if ( BG_WeaponCanAcceptCamo(&_RDI->weapon) )
        goto LABEL_18;
      v12 = BG_GetWeaponBaseName(&_RDI->weapon, _RDI->isAlternate);
      v13 = SL_ConvertToString(ConstString);
      v14 = j_va("Tried to set camo %s on a weapon %s that doesn't support camo.", v13, v12);
      v15 = COM_ERR_5210;
    }
    else
    {
      v16 = BG_GetWeaponBaseName(&_RDI->weapon, _RDI->isAlternate);
      v14 = j_va("Invalid camo specified for weapon %s. Camo must be specified using a string name", v16);
      v15 = COM_ERR_5211;
    }
    Scr_Error(v15, scrContext, v14);
    IndexFromScrString = 0;
LABEL_18:
    r_weapon.weaponCamo = truncate_cast<unsigned char,unsigned int>(IndexFromScrString);
    goto LABEL_19;
  }
  r_weapon.weaponCamo = 0;
LABEL_19:
  v17 = GScr_Weapon_Create(scrContext, &r_weapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v17, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithoutCamo
==============
*/
void GScr_Weapon_WithoutCamo(scrContext_t *scrContext, scr_entref_t entref)
{
  int v7; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RBX = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RBX )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RBX = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2970, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
  r_weapon.weaponCamo = 0;
  v7 = GScr_Weapon_Create(scrContext, &r_weapon, _RBX->isAlternate);
  Scr_AddEntityNum(scrContext, v7, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_SetSticker
==============
*/

void __fastcall GScr_Weapon_SetSticker(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  int Int; 
  __int64 v10; 
  const char *String; 
  const char *v12; 
  int v13; 
  char r_weapon[64]; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2996, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+98h+r_weapon], ymm2
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+98h+r_weapon+20h], xmm0
    vmovsd  xmm1, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+98h+r_weapon+30h], xmm1
  }
  *(_DWORD *)&r_weapon[56] = *(_DWORD *)&_RDI->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( !(_WORD)_EAX )
    Scr_Error(COM_ERR_5938, scrContext, "Cannot set the sticker on null weapon");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_5939, scrContext, "Invalid argument specified to SetSticker function. First argument must be an integer. Usage: weaponObj = weaponObj SetSticker( <slot index>, <sticker material> );");
  if ( Scr_GetType(scrContext, 1u) != VAR_STRING )
    Scr_Error(COM_ERR_5769, scrContext, "Invalid argument specified to SetSticker function. Second argument must be a string. Usage: weaponObj = weaponObj SetSticker( <slot index>, <sticker material> );");
  Int = Scr_GetInt(scrContext, 0);
  v10 = Int;
  if ( Int < 0 || (unsigned __int64)Int >= 4 )
    Scr_Error(COM_ERR_5770, scrContext, "Invalid argument specified to SetSticker function. Sticker slot index must be in the range of [0, 3]. Usage: weaponObj = weaponObj SetSticker( <slot index>, <sticker material> );");
  String = Scr_GetString(scrContext, 1u);
  v12 = String;
  if ( !String || !*String )
    Scr_Error(COM_ERR_5771, scrContext, "Invalid argument specified to SetSticker function. Sticker material cannot be empty string. Usage: weaponObj = weaponObj SetSticker( <slot index>, <sticker material> );");
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings", *(_QWORD *)r_weapon, *(_QWORD *)&r_weapon[8], *(_QWORD *)&r_weapon[16], *(_QWORD *)&r_weapon[24], *(_QWORD *)&r_weapon[32], *(_QWORD *)&r_weapon[40], *(_QWORD *)&r_weapon[48], *(_QWORD *)&r_weapon[56]) )
    __debugbreak();
  *(_WORD *)&r_weapon[2 * v10 + 2] = GConfigStrings::ms_gConfigStrings->GetStickerMaterialIndex(GConfigStrings::ms_gConfigStrings, v12);
  v13 = GScr_Weapon_Create(scrContext, (const Weapon *)r_weapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v13, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_ClearSticker
==============
*/

void __fastcall GScr_Weapon_ClearSticker(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  int Int; 
  __int64 v10; 
  int v11; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3052, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+98h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+98h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+98h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( !(_WORD)_EAX )
    Scr_Error(COM_ERR_5772, scrContext, "Cannot clear sticker on null weapon");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_5773, scrContext, "Invalid argument specified to ClearSticker function. First argument must be an integer. Usage: weaponObj = weaponObj ClearSticker( <slot index> );");
  Int = Scr_GetInt(scrContext, 0);
  v10 = Int;
  if ( Int < 0 || (unsigned __int64)Int >= 4 )
    Scr_Error(COM_ERR_5774, scrContext, "Invalid argument specified to ClearSticker function. Sticker slot index must be in the range of [0, 3]. Usage: weaponObj = weaponObj ClearSticker( <slot index> );");
  r_weapon.stickerIndices[v10] = 0;
  v11 = GScr_Weapon_Create(scrContext, &r_weapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v11, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_ClearStickers
==============
*/

void __fastcall GScr_Weapon_ClearStickers(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  int v9; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RBX = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RBX )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RBX = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3093, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm2, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( !(_WORD)_EAX )
    Scr_Error(COM_ERR_5775, scrContext, "Cannot clear stickers on null weapon");
  *(_QWORD *)r_weapon.stickerIndices = 0i64;
  v9 = GScr_Weapon_Create(scrContext, &r_weapon, _RBX->isAlternate);
  Scr_AddEntityNum(scrContext, v9, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithReticle
==============
*/
void GScr_Weapon_WithReticle(scrContext_t *scrContext, scr_entref_t entref)
{
  const char *String; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *WeaponBaseName; 
  const char *v13; 
  int v14; 
  int val; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RDI = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RDI )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RDI = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3124, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
  if ( Scr_GetType(scrContext, 0) )
  {
    if ( !r_weapon.weaponIdx )
    {
      Scr_Error(COM_ERR_5212, scrContext, "Cannot set the reticle on null weapon");
      goto LABEL_20;
    }
    if ( Scr_GetType(scrContext, 0) == VAR_INTEGER )
    {
      val = Scr_GetInt(scrContext, 0);
    }
    else
    {
      if ( Scr_GetType(scrContext, 0) != VAR_STRING )
      {
        WeaponBaseName = BG_GetWeaponBaseName(&r_weapon, _RDI->isAlternate);
        v13 = j_va("Invalid reticle specified for weapon %s. Reticle must be specified using an integer or string of the format 'scope01'", WeaponBaseName);
        Scr_Error(COM_ERR_5214, scrContext, v13);
        val = 0;
LABEL_19:
        r_weapon.scopeVariation = truncate_cast<unsigned char,int>(val);
        goto LABEL_20;
      }
      String = Scr_GetString(scrContext, 0);
      if ( j_sscanf(String, "scope%d", &val) != 1 )
      {
        v8 = BG_GetWeaponBaseName(&r_weapon, _RDI->isAlternate);
        v9 = j_va("Invalid reticle name '%s' specified for weapon %s", String, v8);
        Scr_Error(COM_ERR_5213, scrContext, v9);
      }
    }
    if ( (unsigned int)val > 0xFE )
    {
      v10 = BG_GetWeaponBaseName(&r_weapon, _RDI->isAlternate);
      v11 = j_va("Specified reticle 'scope%d' is out of bounds for weapon %s. Maximum allowed reticle is %d", (unsigned int)val, v10, 255i64);
      Scr_Error(COM_ERR_5215, scrContext, v11);
    }
    goto LABEL_19;
  }
  r_weapon.scopeVariation = 0;
LABEL_20:
  v14 = GScr_Weapon_Create(scrContext, &r_weapon, _RDI->isAlternate);
  Scr_AddEntityNum(scrContext, v14, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_WithoutReticle
==============
*/
void GScr_Weapon_WithoutReticle(scrContext_t *scrContext, scr_entref_t entref)
{
  int v7; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    _RBX = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( _RBX )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    _RBX = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3185, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
  r_weapon.scopeVariation = 0;
  v7 = GScr_Weapon_Create(scrContext, &r_weapon, _RBX->isAlternate);
  Scr_AddEntityNum(scrContext, v7, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_HasAttachment
==============
*/
void GScr_Weapon_HasAttachment(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  scr_string_t ConstString; 
  int v5; 
  int Int; 
  bool v7; 
  const char *v8; 
  unsigned int v9; 
  unsigned int AllWeaponAttachments; 
  WeaponAttachment **v11; 
  WeaponAttachment *v12; 
  WeaponAttachment *attachments[30]; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( WeaponData )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3211, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  ConstString = Scr_GetConstString(scrContext, 0);
  v5 = 1;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
  {
    Int = Scr_GetInt(scrContext, 1u);
    v7 = Int == 0;
    if ( Int )
    {
      v8 = SL_ConvertToString(ConstString);
      goto LABEL_13;
    }
  }
  else
  {
    v7 = 1;
  }
  v8 = NULL;
LABEL_13:
  v9 = 0;
  AllWeaponAttachments = BG_GetAllWeaponAttachments(&WeaponData->weapon, (const WeaponAttachment **)attachments);
  if ( AllWeaponAttachments )
  {
    v11 = attachments;
    do
    {
      v12 = *v11;
      if ( v7 )
      {
        if ( ConstString == v12->internalName )
          goto LABEL_21;
      }
      else if ( I_stristr(v12->szInternalName, v8) )
      {
        goto LABEL_21;
      }
      ++v9;
      ++v11;
    }
    while ( v9 < AllWeaponAttachments );
  }
  v5 = 0;
LABEL_21:
  Scr_AddBool(scrContext, v5);
}

/*
==============
GScr_Weapon_GetBaseWeapon
==============
*/
void GScr_Weapon_GetBaseWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int v7; 
  Weapon r_weapon; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
    if ( WeaponData )
      goto LABEL_7;
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 3258, ASSERT_TYPE_ASSERT, "( data != nullptr )", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  r_weapon.weaponIdx = WeaponData->weapon.weaponIdx;
  v7 = GScr_Weapon_Create(scrContext, &r_weapon, 0);
  Scr_AddEntityNum(scrContext, v7, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_GetAltWeapon
==============
*/
void GScr_Weapon_GetAltWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  const Weapon *AltWeapon; 
  bool v5; 
  int v6; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  if ( WeaponData->isAlternate )
  {
    AltWeapon = &NULL_WEAPON;
    v5 = 0;
  }
  else
  {
    AltWeapon = BG_GetAltWeapon(&WeaponData->weapon);
    v5 = 1;
  }
  v6 = GScr_Weapon_Create(scrContext, AltWeapon, v5);
  Scr_AddEntityNum(scrContext, v6, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_GetNoAltWeapon
==============
*/
void GScr_Weapon_GetNoAltWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int v4; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  v4 = GScr_Weapon_Create(scrContext, &WeaponData->weapon, 0);
  Scr_AddEntityNum(scrContext, v4, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_GetMid1Damage
==============
*/
void GScr_Weapon_GetMid1Damage(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int outMid1Damage; 
  int outMid3Damage; 
  int outMid2Damage; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  outMid1Damage = 0;
  outMid2Damage = 0;
  outMid3Damage = 0;
  BG_GetMidDamage(WEAP_DMG_CALC_TYPE_DEFAULT, &WeaponData->weapon, WeaponData->isAlternate, &outMid1Damage, &outMid2Damage, &outMid3Damage);
  Scr_AddInt(scrContext, outMid1Damage);
}

/*
==============
GScr_Weapon_GetMid2Damage
==============
*/
void GScr_Weapon_GetMid2Damage(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int value; 
  int outMid3Damage; 
  int outMid1Damage; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  outMid1Damage = 0;
  value = 0;
  outMid3Damage = 0;
  BG_GetMidDamage(WEAP_DMG_CALC_TYPE_DEFAULT, &WeaponData->weapon, WeaponData->isAlternate, &outMid1Damage, &value, &outMid3Damage);
  Scr_AddInt(scrContext, value);
}

/*
==============
GScr_Weapon_GetMid3Damage
==============
*/
void GScr_Weapon_GetMid3Damage(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int value; 
  int outMid2Damage; 
  int outMid1Damage; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  outMid1Damage = 0;
  outMid2Damage = 0;
  value = 0;
  BG_GetMidDamage(WEAP_DMG_CALC_TYPE_DEFAULT, &WeaponData->weapon, WeaponData->isAlternate, &outMid1Damage, &outMid2Damage, &value);
  Scr_AddInt(scrContext, value);
}

/*
==============
GScr_Weapon_GetWeaponClassInt
==============
*/
void GScr_Weapon_GetWeaponClassInt(scrContext_t *scrContext, scr_entref_t entref)
{
  const GScrWeaponData *WeaponData; 
  int WeaponClass; 

  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
  {
    WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  }
  else
  {
    Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
    WeaponData = NULL;
  }
  WeaponClass = BG_GetWeaponClass(&WeaponData->weapon, WeaponData->isAlternate);
  Scr_AddInt(scrContext, WeaponClass);
}

/*
==============
GScr_Weapon_AddAttachmentToWeapon
==============
*/
void GScr_Weapon_AddAttachmentToWeapon(scrContext_t *scrContext, const unsigned int attachmentNameVarIndex, const int attachmentIndicesVarIndex, const scr_string_t attachmentName, const int attachmentVariationIndex, const bool errorOnDuplicate, Weapon *const outWeapon)
{
  Weapon *v7; 
  const WeaponCompleteDef *v11; 
  __int64 v12; 
  AttachmentList *i; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  const char *v16; 
  const char *v17; 
  const WeaponAttachment *v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  const char *szInternalName; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  __int64 v26; 
  const WeaponAttachment *v27; 
  unsigned __int8 v28; 
  __int64 attachmentType; 
  __int64 attachmentTypea; 
  __int64 v31; 
  AttachmentSlot slot[4]; 

  v7 = outWeapon;
  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 439, ASSERT_TYPE_ASSERT, "( outWeapon )", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  v11 = BG_WeaponCompleteDef(v7, 0);
  v12 = 0i64;
  for ( i = v11->attachments; !GScr_Weapon_GetAttachmentIndex(attachmentName, i->attachments, i->attachmentCount, (unsigned __int16 *)&outWeapon); ++i )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= 0xD )
    {
      if ( GScr_Weapon_GetAttachmentIndex(attachmentName, v11->attachments[13].attachments, v11->attachments[13].attachmentCount, (unsigned __int16 *)&outWeapon) )
      {
        v14 = (unsigned __int16)outWeapon;
        v15 = 1 << (char)outWeapon;
        if ( errorOnDuplicate && (v15 & v7->weaponOthers) != 0 )
        {
          v16 = SL_ConvertToString(attachmentName);
          v17 = j_va("Trying to set the same other attachment (%s) more than once on weapon", v16);
          Scr_ParamError(COM_ERR_5180, scrContext, attachmentNameVarIndex, v17);
        }
        v7->weaponOthers |= v15;
        v18 = v11->attachments[13].attachments[v14];
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 479, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
          __debugbreak();
        if ( v14 >= 0x10u )
        {
          LODWORD(attachmentType) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", attachmentType, 16) )
            __debugbreak();
        }
        v19 = truncate_cast<unsigned char,unsigned int>(v14 + 13);
        GScr_Weapon_CheckAttachmentVariationIsValid(scrContext, v18, attachmentVariationIndex, attachmentIndicesVarIndex, attachmentNameVarIndex, v19);
        if ( v14 >= 0x10u )
        {
          LODWORD(v31) = 16;
          LODWORD(attachmentTypea) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", attachmentTypea, v31) )
            __debugbreak();
        }
        v20 = truncate_cast<unsigned char,unsigned int>(v14 + 13);
        v21 = v20;
        if ( v20 >= 0x1Du )
        {
          LODWORD(v31) = 29;
          LODWORD(attachmentTypea) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 484, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentSlot ) < (unsigned)( WEAPON_ATTACHMENT_ID_COUNT )", "attachmentSlot doesn't index WEAPON_ATTACHMENT_ID_COUNT\n\t%i not in [0, %i)", attachmentTypea, v31) )
            __debugbreak();
        }
        v7->attachmentVariationIndices[v21] = truncate_cast<unsigned char,int>(attachmentVariationIndex);
      }
      else
      {
        szInternalName = v11->szInternalName;
        v23 = SL_ConvertToString(attachmentName);
        v24 = j_va("Unknown attachment name '%s' specified for weapon '%s'", v23, szInternalName);
        Scr_ParamError(COM_ERR_5181, scrContext, attachmentNameVarIndex, v24);
      }
      return;
    }
  }
  slot[0] = v12;
  if ( errorOnDuplicate && BG_Weapon_GetPrimaryAttachmentIndex(v7, slot) )
  {
    v25 = j_va("Trying to set more than one attachment in slot %d on weapon", (unsigned int)v12);
    Scr_ParamError(COM_ERR_5167, scrContext, attachmentNameVarIndex, v25);
  }
  v26 = (unsigned __int16)outWeapon;
  BG_Weapon_SetPrimaryAttachmentIndex(slot, (_WORD)outWeapon + 1, v7);
  v27 = i->attachments[v26];
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 457, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
    __debugbreak();
  v28 = truncate_cast<unsigned char,unsigned int>(v12);
  GScr_Weapon_CheckAttachmentVariationIsValid(scrContext, v27, attachmentVariationIndex, attachmentIndicesVarIndex, attachmentNameVarIndex, v28);
  v7->attachmentVariationIndices[v12] = truncate_cast<unsigned char,int>(attachmentVariationIndex);
}

/*
==============
GScr_Weapon_AddFields
==============
*/
void GScr_Weapon_AddFields(scrContext_t *scrContext)
{
  const GScrWeaponField *v2; 
  unsigned __int16 i; 

  v2 = s_scrWeaponFields;
  for ( i = 0; i < 0x3Du; ++i )
  {
    if ( !v2->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2209, ASSERT_TYPE_ASSERT, "( field->name )", (const char *)&queryFormat, "field->name") )
      __debugbreak();
    if ( (i & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2210, ASSERT_TYPE_ASSERT, "( !(fieldIndex & ENTFIELD_MASK) )", (const char *)&queryFormat, "!(fieldIndex & ENTFIELD_MASK)") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_SAVED_COUNT, *v2->name, v2->canonicalString, i);
    ++v2;
  }
}

/*
==============
GScr_Weapon_AddParam
==============
*/
void GScr_Weapon_AddParam(scrContext_t *scrContext, const Weapon *r_weapon, const bool isAlternate)
{
  int v4; 

  v4 = GScr_Weapon_Create(scrContext, r_weapon, isAlternate);
  Scr_AddEntityNum(scrContext, v4, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_AddReference
==============
*/
void GScr_Weapon_AddReference(scrContext_t *scrContext, const scr_weapon_t weap)
{
  GScrWeaponTable *WeaponTable; 
  unsigned __int16 v4; 
  int v5; 
  int v6; 

  if ( weap )
  {
    WeaponTable = ScriptContext_GetWeaponTable(scrContext);
    v4 = truncate_cast<unsigned short,enum scr_weapon_t>(weap) - 1;
    if ( v4 >= 0x3E8u )
    {
      v6 = 1000;
      v5 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2094, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    ++WeaponTable->refCount[v4];
  }
}

/*
==============
GScr_Weapon_CheckAttachmentVariationIsValid
==============
*/
void GScr_Weapon_CheckAttachmentVariationIsValid(scrContext_t *scrContext, const WeaponAttachment *attachment, const int attachmentVariationIndex, const int attachmentIndicesVarIndex, const unsigned int attachmentNameVarIndex, const unsigned __int8 attachmentType)
{
  signed int numModelVariations; 
  const char *v11; 
  char *fmt; 

  if ( !attachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 405, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
    __debugbreak();
  if ( attachmentVariationIndex >= 0 )
  {
    if ( !attachmentVariationIndex )
      return;
    numModelVariations = attachment->numModelVariations;
    if ( attachmentVariationIndex < numModelVariations )
      return;
  }
  else
  {
    numModelVariations = attachment->numModelVariations;
  }
  LODWORD(fmt) = numModelVariations;
  v11 = j_va("%d attachment '%s' variation index %d is invalid. Model variation count: %d.", attachmentType, attachment->szInternalName, (unsigned int)attachmentVariationIndex, fmt);
  if ( attachmentIndicesVarIndex >= 0 )
    attachmentNameVarIndex = attachmentIndicesVarIndex;
  Scr_ParamError(COM_ERR_5166, scrContext, attachmentNameVarIndex, v11);
}

/*
==============
GScr_Weapon_Create
==============
*/
__int64 GScr_Weapon_Create(scrContext_t *scrContext, const Weapon *r_weapon, const bool isAlternate)
{
  int v8; 
  unsigned __int16 v10; 
  const char *v11; 
  GScrWeaponData weapData; 

  _RDI = r_weapon;
  if ( !r_weapon->weaponIdx )
    return 0i64;
  if ( !BG_ValidateWeapon(r_weapon) )
  {
    GScr_Weapon_PrintTable(scrContext);
    Scr_Error(COM_ERR_6077, scrContext, "GScr_Weapon_Create called with invalid weapon. See console log for details.\n");
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [rdi+20h]
  }
  v8 = *(_DWORD *)&_RDI->weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rsp+88h+weapData.weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [rdi+30h]
  }
  weapData.pad = 0;
  __asm
  {
    vmovsd  qword ptr [rsp+88h+weapData.weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rsp+88h+weapData.weapon.attachmentVariationIndices+5], xmm1
  }
  *(_DWORD *)&weapData.weapon.weaponCamo = v8;
  weapData.isAlternate = isAlternate;
  v10 = GScr_Weapon_Insert(scrContext, &weapData);
  if ( v10 == 0xFFFF )
  {
    GScr_Weapon_PrintTable(scrContext);
    v11 = j_va("Too many allocated script weapons. Limit is %d. See console log for details.\n", 1000i64);
    Scr_Error(COM_ERR_5190, scrContext, v11);
  }
  return (unsigned int)v10 + 1;
}

/*
==============
GScr_Weapon_Erase
==============
*/
void GScr_Weapon_Erase(scrContext_t *scrContext, const unsigned __int16 weapIndex)
{
  const GScrWeaponTable *WeaponTableConst; 
  unsigned __int16 v5; 
  unsigned __int16 Bucket; 
  GScrWeaponTable *WeaponTable; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 *v10; 
  unsigned __int16 free; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 

  if ( weapIndex >= 0x3E8u )
  {
    v15 = 1000;
    v13 = weapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  v5 = WeaponTableConst->refCount[weapIndex];
  if ( v5 )
  {
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 218, ASSERT_TYPE_ASSERT, "( weapTable->refCount[weapIndex] ) == ( 0 )", "weapTable->refCount[weapIndex] == 0\n\t%i, %i", v12, 0i64) )
      __debugbreak();
  }
  Bucket = GScr_Weapon_GetBucket(&WeaponTableConst->data[weapIndex]);
  if ( weapIndex >= 0x3E8u )
  {
    LODWORD(v14) = 1000;
    LODWORD(v12) = weapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  WeaponTable = ScriptContext_GetWeaponTable(scrContext);
  if ( Bucket >= 0x511u )
  {
    LODWORD(v14) = 1297;
    LODWORD(v12) = Bucket;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( bucketIndex ) < (unsigned)( ( sizeof( *array_counter( weapTable->bucket ) ) + 0 ) )", "bucketIndex doesn't index ARRAY_COUNT( weapTable->bucket )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  v8 = WeaponTable->next[weapIndex];
  v9 = WeaponTable->prev[weapIndex];
  if ( v8 != 0xFFFF )
    WeaponTable->prev[v8] = v9;
  if ( v9 != 0xFFFF )
    WeaponTable->next[v9] = v8;
  v10 = &WeaponTable->bucket[Bucket];
  if ( *v10 == weapIndex )
  {
    if ( v9 != 0xFFFF )
    {
      LODWORD(v14) = 0xFFFF;
      LODWORD(v12) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 180, ASSERT_TYPE_ASSERT, "( prevListItem ) == ( INVALID_SCRIPT_WEAPON )", "prevListItem == INVALID_SCRIPT_WEAPON\n\t%i, %i", v12, v14) )
        __debugbreak();
    }
    *v10 = v8;
  }
  WeaponTable->next[weapIndex] = WeaponTable->free;
  WeaponTable->prev[weapIndex] = -1;
  free = WeaponTable->free;
  if ( free != 0xFFFF )
    WeaponTable->prev[free] = weapIndex;
  WeaponTable->free = weapIndex;
}

/*
==============
GScr_Weapon_GetAttachmentIndex
==============
*/
char GScr_Weapon_GetAttachmentIndex(const scr_string_t attachmentName, WeaponAttachment *const *attachments, const unsigned int numAttachments, unsigned __int16 *outAttachmentIndex)
{
  __int64 v4; 
  unsigned __int16 i; 
  WeaponAttachment *v9; 
  char result; 

  v4 = numAttachments;
  if ( numAttachments && !attachments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 383, ASSERT_TYPE_ASSERT, "( (numAttachments == 0) || (attachments != nullptr) )", (const char *)&queryFormat, "(numAttachments == 0) || (attachments != nullptr)") )
    __debugbreak();
  if ( !outAttachmentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 384, ASSERT_TYPE_ASSERT, "( outAttachmentIndex )", (const char *)&queryFormat, "outAttachmentIndex") )
    __debugbreak();
  for ( i = 0; ; ++i )
  {
    if ( (unsigned int)v4 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v4, "unsigned", v4) )
      __debugbreak();
    if ( i >= (unsigned __int16)v4 )
      break;
    v9 = attachments[i];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 389, ASSERT_TYPE_ASSERT, "( attachment )", (const char *)&queryFormat, "attachment") )
      __debugbreak();
    if ( attachmentName == v9->internalName )
    {
      *outAttachmentIndex = i;
      return 1;
    }
  }
  result = 0;
  *outAttachmentIndex = 0;
  return result;
}

/*
==============
GScr_Weapon_GetBucket
==============
*/
unsigned __int16 GScr_Weapon_GetBucket(const GScrWeaponData *const weapData)
{
  unsigned int v2; 
  __int64 v3; 
  const GScrWeaponData *v4; 
  int weaponIdx_low; 

  if ( !weapData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 82, ASSERT_TYPE_ASSERT, "( weapData )", (const char *)&queryFormat, "weapData") )
    __debugbreak();
  v2 = 0;
  v3 = 62i64;
  v4 = weapData;
  if ( weapData > &weapData[1] )
    v3 = 0i64;
  if ( weapData <= &weapData[1] )
  {
    do
    {
      weaponIdx_low = LOBYTE(v4->weapon.weaponIdx);
      v4 = (const GScrWeaponData *)((char *)v4 + 1);
      v2 = weaponIdx_low ^ (16777619 * v2);
    }
    while ( (char *)v4 - (char *)weapData != v3 );
  }
  return truncate_cast<unsigned short,unsigned int>(v2 % 0x511);
}

/*
==============
GScr_Weapon_GetField
==============
*/
void GScr_Weapon_GetField(scrContext_t *scrContext, const scr_weapon_t weap, const int offset)
{
  __int64 v3; 
  const GScrWeaponField *v6; 
  const GScrWeaponData *WeaponData; 
  void (__fastcall *getter)(scrContext_t *, const GScrWeaponData *); 
  const char *v9; 
  const char *v10; 
  int v12; 

  v3 = offset;
  if ( (unsigned int)offset >= 0x3D )
  {
    v12 = 61;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2219, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( s_scrWeaponFields ) ) + 0 ) )", "offset doesn't index ARRAY_COUNT( s_scrWeaponFields )\n\t%i not in [0, %i)", offset, v12) )
      __debugbreak();
  }
  v6 = &s_scrWeaponFields[v3];
  WeaponData = GScr_Weapon_GetWeaponData(scrContext, weap);
  getter = v6->getter;
  if ( getter )
  {
    getter(scrContext, WeaponData);
  }
  else
  {
    v9 = SL_ConvertToString(*v6->name);
    v10 = j_va("Weapon field %s cannot be read", v9);
    Scr_Error(COM_ERR_5189, scrContext, v10);
  }
}

/*
==============
GScr_Weapon_GetParamConst
==============
*/
const GScrWeaponData *GScr_Weapon_GetParamConst(scrContext_t *scrContext, const unsigned int index)
{
  scr_entref_t EntityRef; 

  if ( Scr_GetType(scrContext, index) == VAR_POINTER && Scr_GetPointerType(scrContext, index) == VAR_ENTITY )
  {
    EntityRef = Scr_GetEntityRef(scrContext, index);
    if ( EntityRef.entclass == ENTITY_CLASS_SAVED_COUNT )
      return GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)EntityRef.entnum);
  }
  Scr_ParamError(COM_ERR_5192, scrContext, index, "Not a weapon object");
  return 0i64;
}

/*
==============
GScr_Weapon_GetRefConst
==============
*/
const GScrWeaponData *GScr_Weapon_GetRefConst(scrContext_t *scrContext, const scr_entref_t entref)
{
  if ( entref.entclass == ENTITY_CLASS_SAVED_COUNT )
    return GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)entref.entnum);
  Scr_Error(COM_ERR_5191, scrContext, "Not a weapon object");
  return 0i64;
}

/*
==============
GScr_Weapon_GetReferenceCount
==============
*/
__int64 GScr_Weapon_GetReferenceCount(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  const GScrWeaponTable *WeaponTableConst; 
  unsigned __int16 v4; 

  if ( !weap )
    return 0i64;
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  v4 = truncate_cast<unsigned short,enum scr_weapon_t>(weap) - 1;
  if ( v4 >= 0x3E8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v4, 1000) )
    __debugbreak();
  return WeaponTableConst->refCount[v4];
}

/*
==============
GScr_Weapon_GetStickerSlot
==============
*/
void GScr_Weapon_GetStickerSlot(scrContext_t *scrContext, const GScrWeaponData *data, const unsigned __int64 slotIndex)
{
  unsigned __int16 v6; 
  char value[1024]; 

  if ( slotIndex > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 1262, ASSERT_TYPE_ASSERT, "( slotIndex ) <= ( WEAPON_STICKER_SLOT_COUNT - 1 )", "slotIndex not in [0, WEAPON_STICKER_SLOT_COUNT - 1]\n\t%u not in [0, %u]", slotIndex, 3) )
    __debugbreak();
  v6 = data->weapon.stickerIndices[slotIndex];
  if ( v6 )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    GConfigStrings::ms_gConfigStrings->GetStickerMaterialName(GConfigStrings::ms_gConfigStrings, v6, value, 1024);
    Scr_AddString(scrContext, value);
  }
  else
  {
    Scr_AddConstString(scrContext, scr_const.none);
  }
}

/*
==============
GScr_Weapon_GetWeapon
==============
*/

const GScrWeaponData *__fastcall GScr_Weapon_GetWeapon(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  return GScr_Weapon_GetWeaponData(scrContext, weap);
}

/*
==============
GScr_Weapon_GetWeaponData
==============
*/
GScrWeaponData *GScr_Weapon_GetWeaponData(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  const GScrWeaponTable *WeaponTableConst; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  const GScrWeaponTable *v8; 
  __int64 v10; 
  __int64 v11; 

  if ( !weap )
    return &s_nullWeapon;
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  v5 = truncate_cast<unsigned short,enum scr_weapon_t>(weap);
  v6 = v5 - 1;
  if ( (unsigned __int16)(v5 - 1) >= 0x3E8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", (unsigned __int16)(v5 - 1), 1000) )
    __debugbreak();
  if ( !WeaponTableConst->refCount[v6] )
  {
    LODWORD(v10) = (unsigned __int16)GScr_Weapon_GetReferenceCount(scrContext, weap);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 232, ASSERT_TYPE_ASSERT, "( GScr_Weapon_GetReferenceCount( scrContext, weap ) ) > ( 0 )", "GScr_Weapon_GetReferenceCount( scrContext, weap ) > 0\n\t%i, %i", v10, 0i64) )
      __debugbreak();
  }
  v7 = weap - 1;
  v8 = ScriptContext_GetWeaponTableConst(scrContext);
  if ( v7 >= 0x3E8u )
  {
    LODWORD(v11) = 1000;
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return (GScrWeaponData *)((char *)v8 + 62 * v7);
}

/*
==============
GScr_Weapon_Init
==============
*/
void GScr_Weapon_Init(scrContext_t *scrContext, const bool isFullInit)
{
  GScrWeaponTable *WeaponTable; 
  GScrWeaponTable *v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  unsigned __int16 *v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 *bucket; 

  WeaponTable = ScriptContext_GetWeaponTable(scrContext);
  v5 = WeaponTable;
  if ( isFullInit )
  {
    DebugWipe(WeaponTable, 0x113C4ui64);
    v5->free = 0;
    v5->prev[0] = -1;
    v5->next[v5->free] = 1;
    v6 = v5->next[v5->free];
    if ( v6 < 0x3E8u )
    {
      v7 = v6;
      v8 = v6 + 1;
      v6 = 1000;
      v9 = &v5->next[v7];
      do
      {
        v10 = v8 - 2;
        *v9 = v8++;
        v9[1000] = v10;
        ++v9;
      }
      while ( v8 < 0x3E9u );
    }
    v11 = v6;
    v12 = 1297i64;
    bucket = v5->bucket;
    v5->refCount[v11 + 999] = -1;
    while ( v12 )
    {
      *bucket++ = -1;
      --v12;
    }
    memset_0(v5->refCount, 0, sizeof(v5->refCount));
  }
  else
  {
    GScr_Weapon_ValidateReferences(scrContext);
  }
}

/*
==============
GScr_Weapon_Insert
==============
*/
__int64 GScr_Weapon_Insert(scrContext_t *scrContext, const GScrWeaponData *const weapData)
{
  unsigned __int16 Bucket; 
  const GScrWeaponTable *WeaponTableConst; 
  __int64 v6; 
  unsigned __int16 v7; 
  GScrWeaponTable *WeaponTable; 
  unsigned __int16 free; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  __int64 v17; 
  __int64 v18; 

  _RBX = weapData;
  if ( !weapData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 199, ASSERT_TYPE_ASSERT, "( weapData != nullptr )", (const char *)&queryFormat, "weapData != nullptr") )
    __debugbreak();
  Bucket = GScr_Weapon_GetBucket(_RBX);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 95, ASSERT_TYPE_ASSERT, "( weapData != nullptr )", (const char *)&queryFormat, "weapData != nullptr") )
    __debugbreak();
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  if ( Bucket >= 0x511u )
  {
    LODWORD(v17) = Bucket;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( bucketIndex ) < (unsigned)( ( sizeof( *array_counter( weapTable->bucket ) ) + 0 ) )", "bucketIndex doesn't index ARRAY_COUNT( weapTable->bucket )\n\t%i not in [0, %i)", v17, 1297) )
      __debugbreak();
  }
  v6 = 2i64 * Bucket + 68000;
  v7 = *(unsigned __int16 *)((char *)&WeaponTableConst->data[0].weapon.weaponIdx + v6);
  if ( v7 == 0xFFFF )
  {
LABEL_14:
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 122, ASSERT_TYPE_ASSERT, "( weapData != nullptr )", (const char *)&queryFormat, "weapData != nullptr") )
      __debugbreak();
    WeaponTable = ScriptContext_GetWeaponTable(scrContext);
    if ( Bucket >= 0x511u )
    {
      LODWORD(v18) = 1297;
      LODWORD(v17) = Bucket;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( bucketIndex ) < (unsigned)( ( sizeof( *array_counter( weapTable->bucket ) ) + 0 ) )", "bucketIndex doesn't index ARRAY_COUNT( weapTable->bucket )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    free = WeaponTable->free;
    if ( free != 0xFFFF )
    {
      if ( free >= 0x3E8u )
      {
        LODWORD(v18) = 1000;
        LODWORD(v17) = free;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v10 = WeaponTable->next[free];
      WeaponTable->free = v10;
      if ( v10 != 0xFFFF )
        WeaponTable->prev[v10] = -1;
      WeaponTable->next[free] = *(unsigned __int16 *)((char *)&WeaponTable->data[0].weapon.weaponIdx + v6);
      WeaponTable->prev[free] = -1;
      v11 = *(unsigned __int16 *)((char *)&WeaponTable->data[0].weapon.weaponIdx + v6);
      if ( v11 != 0xFFFF )
        WeaponTable->prev[v11] = free;
      *(unsigned __int16 *)((char *)&WeaponTable->data[0].weapon.weaponIdx + v6) = free;
      __asm { vmovups ymm0, ymmword ptr [rbx] }
      _RDX = &WeaponTable->data[free];
      __asm
      {
        vmovups ymmword ptr [rdx], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdx+20h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rdx+30h], xmm0
      }
      *(_DWORD *)&_RDX->weapon.weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
      *(_WORD *)&_RDX->isAlternate = *(_WORD *)&_RBX->isAlternate;
    }
    return free;
  }
  else
  {
    while ( memcmp_0(&WeaponTableConst->data[v7], _RBX, 0x3Cui64) || WeaponTableConst->data[v7].isAlternate != _RBX->isAlternate )
    {
      v7 = WeaponTableConst->next[v7];
      if ( v7 == 0xFFFF )
        goto LABEL_14;
    }
    return v7;
  }
}

/*
==============
GScr_Weapon_IsAlternate
==============
*/
_BOOL8 GScr_Weapon_IsAlternate(const scrContext_t *scrContext, const scr_weapon_t weap)
{
  return GScr_Weapon_GetWeaponData(scrContext, weap)->isAlternate;
}

/*
==============
GScr_Weapon_Load
==============
*/
scr_weapon_t GScr_Weapon_Load(scrContext_t *scrContext, MemoryFile *memFile)
{
  const char *CString; 
  bool IsAlternate; 
  Weapon outWeapon; 

  CString = MemFile_ReadCString(memFile);
  if ( !BG_Weapons_GetFullWeaponForName(CString, &outWeapon, BG_FindBaseWeaponForName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 350, ASSERT_TYPE_ASSERT, "(BG_Weapons_GetFullWeaponForName( weaponName, &weapon, BG_FindBaseWeaponForName ))", (const char *)&queryFormat, "BG_Weapons_GetFullWeaponForName( weaponName, &weapon, BG_FindBaseWeaponForName )") )
    __debugbreak();
  IsAlternate = BG_IsAlternate(CString);
  return GScr_Weapon_Create(scrContext, &outWeapon, IsAlternate);
}

/*
==============
GScr_Weapon_LoadPost
==============
*/

void __fastcall GScr_Weapon_LoadPost(const scrContext_t *scrContext)
{
  GScr_Weapon_ValidateReferences(scrContext);
}

/*
==============
GScr_Weapon_PrintTable
==============
*/
void GScr_Weapon_PrintTable(const scrContext_t *scrContext)
{
  const GScrWeaponTable *WeaponTableConst; 
  unsigned __int16 v3; 
  unsigned __int16 *refCount; 
  unsigned int v5; 
  const char *WeaponNameComplete; 
  __int64 v7; 
  char output[512]; 

  Com_Printf(24, "----- BEGIN WEAPON LIST -----\n");
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  v3 = 0;
  refCount = WeaponTableConst->refCount;
  do
  {
    if ( *refCount )
    {
      v5 = *refCount;
      WeaponNameComplete = BG_GetWeaponNameComplete((const Weapon *)WeaponTableConst, WeaponTableConst->data[0].isAlternate, output, 0x200u);
      LODWORD(v7) = v3;
      Com_Printf(24, "%s -- cnt:%d  idx:%d\n", WeaponNameComplete, v5, v7);
    }
    ++v3;
    ++refCount;
    WeaponTableConst = (const GScrWeaponTable *)((char *)WeaponTableConst + 62);
  }
  while ( v3 < 0x3E8u );
  Com_Printf(24, "----- END WEAPON LIST -----\n");
}

/*
==============
GScr_Weapon_ReadAttachments
==============
*/
void GScr_Weapon_ReadAttachments(scrContext_t *scrContext, const unsigned int attachmentNamesVarIndex, const int attachmentIndicesVarIndex, const bool errorOnDuplicate, Weapon *outWeapon)
{
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v10; 
  __int64 v11; 
  int v12; 
  unsigned int FirstSibling; 
  scr_string_t *v14; 
  VariableType ValueType; 
  unsigned int v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  const char *v20; 
  unsigned int NextSibling; 
  VariableType v22; 
  VariableUnion *VariableValueAddress; 
  __int64 v24; 
  unsigned int v26; 
  int attachmentVariationIndex[32]; 
  scr_string_t attachmentName[32]; 

  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 592, ASSERT_TYPE_ASSERT, "( outWeapon )", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  ArrayObject = BGScr_Main_GetArrayObject(scrContext, attachmentNamesVarIndex);
  ArraySize = GetArraySize(scrContext, ArrayObject);
  if ( ArraySize > 0x1D )
  {
    v10 = j_va("Too many attachments specified (%d > %d)", ArraySize, 29i64);
    Scr_ParamError(COM_ERR_5185, scrContext, attachmentNamesVarIndex, v10);
  }
  v11 = 0i64;
  v12 = 0;
  FirstSibling = FindFirstSibling(scrContext, ArrayObject);
  if ( FirstSibling )
  {
    v14 = attachmentName;
    do
    {
      ValueType = GetValueType(scrContext, FirstSibling);
      if ( ValueType )
      {
        if ( ValueType != VAR_STRING )
          Scr_ParamError(COM_ERR_5186, scrContext, attachmentNamesVarIndex, "Attachment name specified is not a string");
        ++v12;
        *v14++ = (scr_string_t)GetVariableValueAddress(scrContext, FirstSibling)->intValue;
      }
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
    }
    while ( FirstSibling );
    if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 545, ASSERT_TYPE_ASSERT, "(attachmentNameCount >= 0)", (const char *)&queryFormat, "attachmentNameCount >= 0") )
      __debugbreak();
  }
  memset_0(attachmentVariationIndex, 0, 0x74ui64);
  if ( attachmentIndicesVarIndex >= 0 )
  {
    v16 = BGScr_Main_GetArrayObject(scrContext, attachmentIndicesVarIndex);
    v17 = GetArraySize(scrContext, v16);
    if ( v17 <= 0x1D )
    {
      NextSibling = FindFirstSibling(scrContext, v16);
      if ( NextSibling )
      {
        v19 = v26;
        do
        {
          v22 = GetValueType(scrContext, NextSibling);
          if ( v22 )
          {
            if ( v22 != VAR_INTEGER )
              Scr_ParamError(COM_ERR_5184, scrContext, attachmentIndicesVarIndex, "Attachment index specified is not an integer");
            VariableValueAddress = GetVariableValueAddress(scrContext, NextSibling);
            v24 = (int)v19++;
            attachmentVariationIndex[v24] = VariableValueAddress->intValue;
          }
          NextSibling = FindNextSibling(scrContext, NextSibling);
        }
        while ( NextSibling );
        goto LABEL_20;
      }
    }
    else
    {
      v18 = j_va("Too many attachment indices specified (%d > %d)", v17, 29i64);
      Scr_ParamError(COM_ERR_5183, scrContext, attachmentIndicesVarIndex, v18);
    }
    v19 = v26;
LABEL_20:
    if ( v12 != v19 )
    {
      v20 = j_va("Different number of attachment names and indices specified (%d != %d)", (unsigned int)v12, v19);
      Scr_ParamError(COM_ERR_5187, scrContext, attachmentIndicesVarIndex, v20);
    }
  }
  if ( v12 > 0i64 )
  {
    do
    {
      GScr_Weapon_AddAttachmentToWeapon(scrContext, attachmentNamesVarIndex, attachmentIndicesVarIndex, attachmentName[v11], attachmentVariationIndex[v11], errorOnDuplicate, outWeapon);
      ++v11;
    }
    while ( v11 < v12 );
  }
}

/*
==============
GScr_Weapon_RemoveAttachmentFromWeapon
==============
*/
void GScr_Weapon_RemoveAttachmentFromWeapon(scrContext_t *scrContext, const unsigned int index, const scr_string_t attachmentName, Weapon *outWeapon)
{
  const WeaponCompleteDef *v8; 
  __int64 v9; 
  AttachmentList *i; 
  unsigned int v11; 
  __int16 v12; 
  const char *v13; 
  const char *v14; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  const char *szInternalName; 
  const char *v18; 
  const char *v19; 
  unsigned __int16 PrimaryAttachmentIndex; 
  const char *v21; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int WeaponAttachmentSlotSize; 
  AttachmentSlot slot[4]; 
  unsigned __int16 outAttachmentIndex; 

  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 498, ASSERT_TYPE_ASSERT, "( outWeapon )", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  v8 = BG_WeaponCompleteDef(outWeapon, 0);
  v9 = 0i64;
  for ( i = v8->attachments; !GScr_Weapon_GetAttachmentIndex(attachmentName, i->attachments, i->attachmentCount, &outAttachmentIndex); ++i )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0xD )
    {
      slot[0] = ATT_SLOT_OTHER;
      if ( v8->attachments[13].attachmentCount > Com_GetWeaponAttachmentSlotSize(slot) )
      {
        slot[0] = ATT_SLOT_OTHER;
        WeaponAttachmentSlotSize = Com_GetWeaponAttachmentSlotSize(slot);
        LODWORD(v23) = v8->attachments[13].attachmentCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 521, ASSERT_TYPE_ASSERT, "( otherList->attachmentCount ) <= ( Com_GetWeaponAttachmentSlotSize( ATT_SLOT_OTHER ) )", "otherList->attachmentCount not in [0, Com_GetWeaponAttachmentSlotSize( ATT_SLOT_OTHER )]\n\t%u not in [0, %u]", v23, WeaponAttachmentSlotSize) )
          __debugbreak();
      }
      if ( GScr_Weapon_GetAttachmentIndex(attachmentName, v8->attachments[13].attachments, v8->attachments[13].attachmentCount, &outAttachmentIndex) )
      {
        v11 = outAttachmentIndex;
        v12 = 1 << outAttachmentIndex;
        if ( ((unsigned __int16)(1 << outAttachmentIndex) & outWeapon->weaponOthers) == 0 )
        {
          v13 = SL_ConvertToString(attachmentName);
          v14 = j_va("Trying to remove other attachment %s from weapon %%s that does not have that other attachment", v13);
          GScr_Main_WeaponParamError(COM_ERR_5363, scrContext, index, outWeapon, v14);
        }
        if ( v11 >= 0x10 )
        {
          LODWORD(v24) = 16;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v15 = truncate_cast<unsigned char,unsigned int>(v11 + 13);
        v16 = v15;
        if ( v15 >= 0x1Du )
        {
          LODWORD(v24) = 29;
          LODWORD(v23) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentSlot ) < (unsigned)( WEAPON_ATTACHMENT_ID_COUNT )", "attachmentSlot doesn't index WEAPON_ATTACHMENT_ID_COUNT\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        outWeapon->weaponOthers &= ~v12;
        outWeapon->attachmentVariationIndices[v16] = 0;
      }
      else
      {
        szInternalName = v8->szInternalName;
        v18 = SL_ConvertToString(attachmentName);
        v19 = j_va("Unknown attachment name '%s' specified for weapon '%s'", v18, szInternalName);
        Scr_Error(COM_ERR_5182, scrContext, v19);
      }
      return;
    }
  }
  slot[0] = v9;
  PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(outWeapon, slot);
  if ( PrimaryAttachmentIndex != outAttachmentIndex + 1 )
  {
    v21 = SL_ConvertToString(attachmentName);
    v22 = j_va("Trying to remove attachment %s in slot %d from weapon %%s that does not have that scope", v21, (unsigned int)v9);
    GScr_Main_WeaponParamError(COM_ERR_5350, scrContext, index, outWeapon, v22);
  }
  BG_Weapon_SetPrimaryAttachmentIndex(slot, 0, outWeapon);
  outWeapon->attachmentVariationIndices[v9] = 0;
}

/*
==============
GScr_Weapon_RemoveReference
==============
*/
void GScr_Weapon_RemoveReference(scrContext_t *scrContext, const scr_weapon_t weap)
{
  GScrWeaponTable *WeaponTable; 
  unsigned __int16 v5; 
  unsigned __int16 *v6; 
  unsigned __int16 v8; 
  int v9; 
  int v10; 

  if ( weap )
  {
    WeaponTable = ScriptContext_GetWeaponTable(scrContext);
    v5 = truncate_cast<unsigned short,enum scr_weapon_t>(weap) - 1;
    if ( v5 >= 0x3E8u )
    {
      v10 = 1000;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2108, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = &WeaponTable->refCount[v5];
    if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2109, ASSERT_TYPE_ASSERT, "( weapTable->refCount[weapIndex] > 0 )", (const char *)&queryFormat, "weapTable->refCount[weapIndex] > 0") )
      __debugbreak();
    if ( (*v6)-- == 1 )
    {
      Scr_ClearEntityNum(scrContext, weap, ENTITY_CLASS_SAVED_COUNT);
      v8 = truncate_cast<unsigned short,enum scr_weapon_t>(weap);
      GScr_Weapon_Erase(scrContext, v8 - 1);
    }
  }
}

/*
==============
GScr_Weapon_Save
==============
*/
void GScr_Weapon_Save(const scrContext_t *scrContext, const scr_weapon_t weap, MemoryFile *memFile)
{
  GScrWeaponData *WeaponData; 
  char output[512]; 

  WeaponData = GScr_Weapon_GetWeaponData(scrContext, weap);
  BG_GetWeaponNameComplete(&WeaponData->weapon, WeaponData->isAlternate, output, 0x200u);
  MemFile_WriteCString(memFile, output);
}

/*
==============
GScr_Weapon_Set
==============
*/
void GScr_Weapon_Set(scrContext_t *scrContext, scr_weapon_t *dest, const scr_weapon_t src)
{
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2159, ASSERT_TYPE_ASSERT, "( dest != nullptr )", (const char *)&queryFormat, "dest != nullptr") )
    __debugbreak();
  if ( *dest != src )
  {
    GScr_Weapon_RemoveReference(scrContext, *dest);
    *dest = src;
    GScr_Weapon_AddReference(scrContext, src);
  }
}

/*
==============
GScr_Weapon_SetField
==============
*/
void GScr_Weapon_SetField(scrContext_t *scrContext, const scr_weapon_t weap, const int offset)
{
  __int64 v3; 
  const char *v5; 
  const char *v6; 
  int v8; 

  v3 = offset;
  if ( (unsigned int)offset >= 0x3D )
  {
    v8 = 61;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2236, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( s_scrWeaponFields ) ) + 0 ) )", "offset doesn't index ARRAY_COUNT( s_scrWeaponFields )\n\t%i not in [0, %i)", offset, v8) )
      __debugbreak();
  }
  v5 = SL_ConvertToString(*s_scrWeaponFields[v3].name);
  v6 = j_va("Weapon field %s is read-only", v5);
  Scr_Error(COM_ERR_5188, scrContext, v6);
}

/*
==============
GScr_Weapon_SetWeapon
==============
*/
void GScr_Weapon_SetWeapon(scrContext_t *scrContext, scr_weapon_t *weap, const Weapon *r_weapon, const bool isAlternate)
{
  GScrWeaponData *WeaponData; 
  scr_weapon_t v9; 

  if ( !weap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2174, ASSERT_TYPE_ASSERT, "( weap != nullptr )", (const char *)&queryFormat, "weap != nullptr") )
    __debugbreak();
  WeaponData = GScr_Weapon_GetWeaponData(scrContext, (const scr_weapon_t)*weap);
  if ( WeaponData->isAlternate != isAlternate || memcmp_0(WeaponData, r_weapon, 0x3Cui64) )
  {
    GScr_Weapon_RemoveReference(scrContext, *weap);
    v9 = GScr_Weapon_Create(scrContext, r_weapon, isAlternate);
    *weap = v9;
    GScr_Weapon_AddReference(scrContext, v9);
  }
}

/*
==============
GScr_Weapon_Shutdown
==============
*/
void GScr_Weapon_Shutdown(scrContext_t *scrContext, const bool isFullClear)
{
  __int64 v3; 
  GScrWeaponTable *WeaponTable; 
  unsigned __int16 *bucket; 
  unsigned __int16 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int16 *v9; 
  __int64 v10; 

  if ( isFullClear )
  {
    v3 = 1297i64;
    WeaponTable = ScriptContext_GetWeaponTable(scrContext);
    v10 = 1297i64;
    bucket = WeaponTable->bucket;
    v9 = WeaponTable->bucket;
    do
    {
      v6 = *bucket;
      if ( *bucket != 0xFFFF )
      {
        do
        {
          if ( v6 >= 0x3E8u )
          {
            LODWORD(v8) = 1000;
            LODWORD(v7) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 320, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          if ( !WeaponTable->refCount[v6] )
          {
            LODWORD(v7) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 321, ASSERT_TYPE_ASSERT, "( weapTable->refCount[weapIndex] ) != ( 0 )", "weapTable->refCount[weapIndex] != 0\n\t%i, %i", v7, 0i64) )
              __debugbreak();
          }
          Scr_FreeEntityNum(scrContext, v6 + 1, ENTITY_CLASS_SAVED_COUNT);
          v6 = WeaponTable->next[v6];
        }
        while ( v6 != 0xFFFF );
        bucket = v9;
        v3 = v10;
      }
      ++bucket;
      --v3;
      v9 = bucket;
      v10 = v3;
    }
    while ( v3 );
    Scr_FreeEntityNum(scrContext, 0, ENTITY_CLASS_SAVED_COUNT);
  }
}

/*
==============
GScr_Weapon_SpawnInternal
==============
*/
void GScr_Weapon_SpawnInternal(scrContext_t *scrContext, const bool isAlternate)
{
  int v4; 
  const char *String; 
  int v10; 
  unsigned int Int; 
  const char *v12; 
  const WeaponAttachment *ScopeAttachment; 
  const char *v14; 
  scr_string_t ConstString; 
  unsigned int IndexFromScrString; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  unsigned int v21; 
  __int64 numLootVariants; 
  const char *v23; 
  __int64 v24; 
  AttachmentSlot slot; 
  Weapon result; 
  Weapon weapon; 

  if ( Scr_GetConstString(scrContext, 0) == scr_const.none )
  {
    v4 = 0;
  }
  else
  {
    String = Scr_GetString(scrContext, 0);
    _RAX = BG_FindBaseWeaponForName(&result, String);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0D8h+weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0D8h+weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0D8h+weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    if ( isAlternate || Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    {
      if ( weapon.weaponIdx )
      {
        v10 = -1;
        if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) )
          v10 = 5;
        GScr_Weapon_ReadAttachments(scrContext, 1u, v10, 1, &weapon);
      }
      else
      {
        Scr_Error(COM_ERR_5193, scrContext, "Cannot set the attachments on null weapon");
      }
    }
    if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) )
    {
      Int = Scr_GetInt(scrContext, 2u);
      if ( Int )
      {
        slot = ATT_SLOT_SCOPE;
        if ( !BG_Weapon_GetPrimaryAttachmentIndex(&weapon, &slot) )
        {
          v12 = j_va("Specified reticle %d on weapon '%s' that does not have a scope attachment", Int, String);
          Scr_ParamError(COM_ERR_5194, scrContext, 2u, v12);
        }
      }
      ScopeAttachment = BG_GetScopeAttachment(&weapon);
      if ( !ScopeAttachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 2286, ASSERT_TYPE_ASSERT, "(scopeAttachment != nullptr)", (const char *)&queryFormat, "scopeAttachment != nullptr") )
        __debugbreak();
      if ( Int >= ScopeAttachment->numReticles )
      {
        LODWORD(v24) = ScopeAttachment->numReticles;
        v14 = j_va("Specified reticle %d is out of bounds for weapon '%s' with scope '%s'. Maximum allowed reticle index for scope '%s' is %d", Int, String, ScopeAttachment->szInternalName, ScopeAttachment->szInternalName, v24);
        Scr_ParamError(COM_ERR_5195, scrContext, 2u, v14);
      }
      weapon.scopeVariation = truncate_cast<unsigned char,int>(Int);
    }
    if ( Scr_GetNumParam(scrContext) > 3 && Scr_GetType(scrContext, 3u) )
    {
      ConstString = Scr_GetConstString(scrContext, 3u);
      IndexFromScrString = BG_Camo_GetIndexFromScrString(ConstString);
      if ( IndexFromScrString >= BG_Camo_GetCamoCount() )
      {
        v17 = SL_ConvertToString(ConstString);
        v18 = j_va("Specified camo '%s' not found for weapon '%s'", v17, String);
        Scr_ParamError(COM_ERR_5196, scrContext, 3u, v18);
      }
      if ( !BG_WeaponCanAcceptCamo(&weapon) )
      {
        v19 = SL_ConvertToString(ConstString);
        v20 = j_va("Tried to set camo '%s' on a weapon %s that doesn't support camo.", v19, String);
        Scr_ParamError(COM_ERR_5197, scrContext, 3u, v20);
      }
      weapon.weaponCamo = truncate_cast<unsigned char,unsigned int>(IndexFromScrString);
    }
    if ( Scr_GetNumParam(scrContext) > 4 && Scr_GetType(scrContext, 4u) )
    {
      v21 = Scr_GetInt(scrContext, 4u);
      numLootVariants = BG_WeaponCompleteDef(&weapon, isAlternate)->numLootVariants;
      if ( v21 >= (unsigned int)numLootVariants )
      {
        v23 = j_va("Invalid loot variant specified: %d does not index the supported %d variants for weapon '%s'", v21, numLootVariants, String);
        Scr_ParamError(COM_ERR_5198, scrContext, 4u, v23);
      }
      weapon.weaponLootId = truncate_cast<unsigned char,unsigned int>(v21 + 1);
    }
    if ( !BG_ActiveUnderbarrel(&weapon) && isAlternate )
      Scr_Error(COM_ERR_5199, scrContext, "Trying to create a weapon in alternate mode that has no underbarrel attachment with an alternate fire");
    v4 = GScr_Weapon_Create(scrContext, &weapon, isAlternate);
  }
  Scr_AddEntityNum(scrContext, v4, ENTITY_CLASS_SAVED_COUNT);
}

/*
==============
GScr_Weapon_ValidateReferences
==============
*/
void GScr_Weapon_ValidateReferences(const scrContext_t *scrContext)
{
  __int64 v1; 
  const GScrWeaponTable *WeaponTableConst; 
  unsigned __int16 *bucket; 
  unsigned __int16 v4; 
  unsigned __int16 i; 
  unsigned __int16 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = 1297i64;
  WeaponTableConst = ScriptContext_GetWeaponTableConst(scrContext);
  v9 = 1297i64;
  bucket = WeaponTableConst->bucket;
  do
  {
    v4 = *bucket;
    if ( *bucket != 0xFFFF )
    {
      do
      {
        if ( v4 >= 0x3E8u )
        {
          LODWORD(v8) = 1000;
          LODWORD(v7) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 255, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( !WeaponTableConst->refCount[v4] )
        {
          LODWORD(v7) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 256, ASSERT_TYPE_ASSERT, "( weapTable->refCount[weapIndex] ) != ( 0 )", "weapTable->refCount[weapIndex] != 0\n\t%i, %i", v7, 0i64) )
            __debugbreak();
        }
        v4 = WeaponTableConst->next[v4];
      }
      while ( v4 != 0xFFFF );
      v1 = v9;
    }
    ++bucket;
    v9 = --v1;
  }
  while ( v1 );
  for ( i = WeaponTableConst->free; i != 0xFFFF; i = WeaponTableConst->next[i] )
  {
    if ( i >= 0x3E8u )
    {
      LODWORD(v8) = 1000;
      LODWORD(v7) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( weapIndex ) < (unsigned)( MAX_SCRIPT_WEAPONS )", "weapIndex doesn't index MAX_SCRIPT_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v6 = WeaponTableConst->refCount[i];
    if ( v6 )
    {
      LODWORD(v7) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_weapon.cpp", 263, ASSERT_TYPE_ASSERT, "( weapTable->refCount[weapIndex] ) == ( 0 )", "weapTable->refCount[weapIndex] == 0\n\t%i, %i", v7, 0i64) )
        __debugbreak();
    }
  }
}

