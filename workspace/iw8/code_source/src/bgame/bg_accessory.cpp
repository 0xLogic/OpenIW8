/*
==============
BG_Accessory_GetDef
==============
*/

const AccessoryDef *__fastcall BG_Accessory_GetDef(unsigned int index)
{
  return ?BG_Accessory_GetDef@@YAPEBUAccessoryDef@@I@Z(index);
}

/*
==============
BG_Accessory_GetIndexForPtr
==============
*/

unsigned int __fastcall BG_Accessory_GetIndexForPtr(const AccessoryDef *const def)
{
  return ?BG_Accessory_GetIndexForPtr@@YAIQEBUAccessoryDef@@@Z(def);
}

/*
==============
BG_Accessory_GetIndexForName
==============
*/

unsigned int __fastcall BG_Accessory_GetIndexForName(const char *const accessoryName)
{
  return ?BG_Accessory_GetIndexForName@@YAIQEBD@Z(accessoryName);
}

/*
==============
BG_Accessory_ClearAssets
==============
*/

void BG_Accessory_ClearAssets(void)
{
  ?BG_Accessory_ClearAssets@@YAXXZ();
}

/*
==============
BG_Accessory_GetWeapon
==============
*/

void __fastcall BG_Accessory_GetWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, Weapon *outAccessoryWeapon)
{
  ?BG_Accessory_GetWeapon@@YAXQEBVBgWeaponMap@@QEBUplayerState_s@@PEAUWeapon@@@Z(weaponMap, ps, outAccessoryWeapon);
}

/*
==============
BG_Accessory_MyChanges
==============
*/

void BG_Accessory_MyChanges(void)
{
  ?BG_Accessory_MyChanges@@YAXXZ();
}

/*
==============
BG_Accessory_InitAssets
==============
*/

void __fastcall BG_Accessory_InitAssets(bool isFullInit)
{
  ?BG_Accessory_InitAssets@@YAX_N@Z(isFullInit);
}

/*
==============
BG_Accessory_ClearAssets
==============
*/
void BG_Accessory_ClearAssets(void)
{
  s_bgAccessoryDefsInitialized = 0;
  memset_0(s_bgAccessoryDefs, 0, sizeof(s_bgAccessoryDefs));
}

/*
==============
BG_Accessory_GetDef
==============
*/
AccessoryDef *BG_Accessory_GetDef(unsigned int index)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = index;
  if ( !s_bgAccessoryDefsInitialized || index == 127 )
    return 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN|0x80) && (unsigned int)v1 >= 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 103, ASSERT_TYPE_ASSERT, "( index ) < ( (63) )", "%s < %s\n\t%u, %u", "index", "INVALID_ACCESSORY_DEF_LEGACY", v1, 63) )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x80 )
  {
    LODWORD(v4) = 128;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_bgAccessoryDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_bgAccessoryDefs )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_bgAccessoryDefs[v1];
}

/*
==============
BG_Accessory_GetIndexForName
==============
*/
__int64 BG_Accessory_GetIndexForName(const char *const accessoryName)
{
  unsigned int v2; 
  __int64 v3; 
  AccessoryDef *v4; 
  const char *name; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !accessoryName )
    return 127i64;
  v2 = 0;
  v3 = 0i64;
  while ( 1 )
  {
    v4 = s_bgAccessoryDefs[v3];
    if ( v4 )
      break;
LABEL_17:
    ++v2;
    if ( (unsigned __int64)++v3 >= 128 )
      return 127i64;
  }
  name = v4->name;
  v6 = 0x7FFFFFFFi64;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = (const char *)(accessoryName - name);
  do
  {
    v8 = (unsigned __int8)name[(_QWORD)v7];
    v9 = v6;
    v10 = *(unsigned __int8 *)name++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
        goto LABEL_17;
    }
  }
  while ( v8 );
  return v2;
}

/*
==============
BG_Accessory_GetIndexForPtr
==============
*/
__int64 BG_Accessory_GetIndexForPtr(const AccessoryDef *const def)
{
  __int64 result; 

  if ( !def )
    return 127i64;
  result = 0i64;
  while ( s_bgAccessoryDefs[result] != def )
  {
    if ( (unsigned __int64)++result >= 0x80 )
      return 127i64;
  }
  return result;
}

/*
==============
BG_Accessory_GetWeapon
==============
*/
void BG_Accessory_GetWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, Weapon *outAccessoryWeapon)
{
  bool v3; 
  __int64 accessoryIndex; 
  AccessoryDef *v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = !s_bgAccessoryDefsInitialized;
  *outAccessoryWeapon = NULL_WEAPON;
  accessoryIndex = ps->accessoryIndex;
  if ( !v3 && (_DWORD)accessoryIndex != 127 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN|0x80) && (unsigned int)accessoryIndex >= 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 103, ASSERT_TYPE_ASSERT, "( index ) < ( (63) )", "%s < %s\n\t%u, %u", "index", "INVALID_ACCESSORY_DEF_LEGACY", accessoryIndex, 63) )
      __debugbreak();
    if ( (unsigned int)accessoryIndex >= 0x80 )
    {
      LODWORD(v10) = 128;
      LODWORD(v9) = accessoryIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_bgAccessoryDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_bgAccessoryDefs )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v8 = s_bgAccessoryDefs[accessoryIndex];
    if ( v8 )
    {
      *outAccessoryWeapon = *BG_GetFirstEquippedWeaponBySlot(weaponMap, ps, WEAPON_SLOT_ACCESSORY);
      if ( !outAccessoryWeapon->weaponIdx )
      {
        LODWORD(v9) = ps->clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 168, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Player %i has Accessory '%s' equipped, but does not have a valid Accessory Weapon equipped.  Was the Weapon removed from the player's inventory without calling 'ClearAccessory()'?", v9, v8->name) )
          __debugbreak();
      }
    }
  }
}

/*
==============
BG_Accessory_InitAssets
==============
*/
void BG_Accessory_InitAssets(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllAccessoryStrings(BG_Accessory_LoadCache_Callback);
    s_bgAccessoryDefsInitialized = 1;
  }
  else
  {
    if ( !s_bgAccessoryDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 57, ASSERT_TYPE_ASSERT, "(s_bgAccessoryDefsInitialized)", (const char *)&queryFormat, "s_bgAccessoryDefsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllAccessoryStrings(BG_Accessory_Validate_Callback);
  }
}

/*
==============
BG_Accessory_LoadCache_Callback
==============
*/
void BG_Accessory_LoadCache_Callback(const unsigned int accessoryIndex, const char *accessoryName)
{
  AccessoryDef *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = accessoryIndex;
  if ( !accessoryName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 19, ASSERT_TYPE_ASSERT, "(accessoryName)", (const char *)&queryFormat, "accessoryName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x7F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 21, ASSERT_TYPE_ASSERT, "( accessoryIndex ) < ( ((1<<7)-1) )", "%s < %s\n\t%i, %i", "accessoryIndex", "INVALID_ACCESSORY_DEF", v3, 127) )
    __debugbreak();
  if ( *accessoryName )
    v2 = Accessory_Register(accessoryName);
  s_bgAccessoryDefs[v3] = v2;
}

/*
==============
BG_Accessory_MyChanges
==============
*/
void BG_Accessory_MyChanges(void)
{
  s_bgAccessoryDefsInitialized = 0;
  memset_0(s_bgAccessoryDefs, 0, sizeof(s_bgAccessoryDefs));
  if ( NetConstStrings_AreStringsLoaded() )
  {
    NetConstStrings_CallForAllAccessoryStrings(BG_Accessory_LoadCache_Callback);
    s_bgAccessoryDefsInitialized = 1;
  }
}

/*
==============
BG_Accessory_Validate_Callback
==============
*/
void BG_Accessory_Validate_Callback(const unsigned int accessoryIndex, const char *accessoryName)
{
  __int64 v2; 
  const char *v3; 
  AccessoryDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = accessoryIndex;
  v3 = accessoryName;
  if ( !accessoryName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 35, ASSERT_TYPE_ASSERT, "(accessoryName)", (const char *)&queryFormat, "accessoryName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x7F )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( accessoryIndex ) < (unsigned)( ((1<<7)-1) )", "accessoryIndex doesn't index INVALID_ACCESSORY_DEF\n\t%i not in [0, %i)", v13, 127) )
      __debugbreak();
  }
  v4 = &s_bgAccessoryDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 38, ASSERT_TYPE_ASSERT, "(s_bgAccessoryDefs[accessoryIndex])", (const char *)&queryFormat, "s_bgAccessoryDefs[accessoryIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory.cpp", 39, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_bgAccessoryDefs[accessoryIndex]->name, accessoryName ))", "%s\n\tInvalid Accessory asset mapping", "!I_stricmp( s_bgAccessoryDefs[accessoryIndex]->name, accessoryName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

