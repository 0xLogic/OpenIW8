/*
==============
BG_SpawnGroup_Loot_FindTypeIndex
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_FindTypeIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const char *typeName)
{
  return ?BG_SpawnGroup_Loot_FindTypeIndex@@YAEQEBUBG_SpawnGroup_Loot_Table@@PEBD@Z(lootTable, typeName);
}

/*
==============
BG_SpawnGroup_Loot_FindSetIndex
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_FindSetIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const char *name)
{
  return ?BG_SpawnGroup_Loot_FindSetIndex@@YAEQEBUBG_SpawnGroup_Loot_Table@@PEBD@Z(lootTable, name);
}

/*
==============
BG_SpawnGroup_Loot_FindItemDefIndexByName
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_FindItemDefIndexByName(const BG_SpawnGroup_Loot_Table *lootTable, const char *scriptableDefName)
{
  return ?BG_SpawnGroup_Loot_FindItemDefIndexByName@@YAEPEBUBG_SpawnGroup_Loot_Table@@PEBD@Z(lootTable, scriptableDefName);
}

/*
==============
BG_SpawnGroup_Loot_FindOrAddSet
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_FindOrAddSet(BG_SpawnGroup_Loot_Table *const lootTable, const char *name)
{
  return ?BG_SpawnGroup_Loot_FindOrAddSet@@YAEQEAUBG_SpawnGroup_Loot_Table@@PEBD@Z(lootTable, name);
}

/*
==============
BG_SpawnGroup_Loot_IsCustomWeaponItemDef
==============
*/

bool __fastcall BG_SpawnGroup_Loot_IsCustomWeaponItemDef(const BG_SpawnGroup_Loot_ItemDef *const itemDef)
{
  return ?BG_SpawnGroup_Loot_IsCustomWeaponItemDef@@YA_NQEBUBG_SpawnGroup_Loot_ItemDef@@@Z(itemDef);
}

/*
==============
BG_SpawnGroup_Loot_GetItemDefIndex
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_GetItemDefIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const BG_SpawnGroup_Loot_ItemDef *const itemDef)
{
  return ?BG_SpawnGroup_Loot_GetItemDefIndex@@YAEQEBUBG_SpawnGroup_Loot_Table@@QEBUBG_SpawnGroup_Loot_ItemDef@@@Z(lootTable, itemDef);
}

/*
==============
BG_SpawnGroup_Loot_InitBrAmmo
==============
*/

void __fastcall BG_SpawnGroup_Loot_InitBrAmmo(BG_SpawnGroup_Loot_Table *lootTable)
{
  ?BG_SpawnGroup_Loot_InitBrAmmo@@YAXPEAUBG_SpawnGroup_Loot_Table@@@Z(lootTable);
}

/*
==============
BG_SpawnGroup_Loot_SetBrAmmoData
==============
*/

void __fastcall BG_SpawnGroup_Loot_SetBrAmmoData(BG_SpawnGroup_Loot_Table *lootTable, BG_SpawnGroup_AmmoTypes ammoType, const char *errMsg)
{
  ?BG_SpawnGroup_Loot_SetBrAmmoData@@YAXPEAUBG_SpawnGroup_Loot_Table@@W4BG_SpawnGroup_AmmoTypes@@PEBD@Z(lootTable, ammoType, errMsg);
}

/*
==============
BG_SpawnGroup_Loot_FindOrAddTypeIndex
==============
*/

unsigned __int8 __fastcall BG_SpawnGroup_Loot_FindOrAddTypeIndex(BG_SpawnGroup_Loot_Table *lootTable, const char *typeName)
{
  return ?BG_SpawnGroup_Loot_FindOrAddTypeIndex@@YAEPEAUBG_SpawnGroup_Loot_Table@@PEBD@Z(lootTable, typeName);
}

/*
==============
BG_SpawnGroup_Loot_ParseTable
==============
*/

bool __fastcall BG_SpawnGroup_Loot_ParseTable(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, const StringTable *zoneMapTable, const char *filter, BG_SpawnGroup_Loot_Caches *cacheBuffer)
{
  return ?BG_SpawnGroup_Loot_ParseTable@@YA_NPEAUBG_SpawnGroup_Loot_Table@@PEBUStringTable@@1PEBDPEAUBG_SpawnGroup_Loot_Caches@@@Z(lootTable, table, zoneMapTable, filter, cacheBuffer);
}

/*
==============
BG_SpawnGroup_Loot_AllocateCacheType
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_AllocateCacheType(BG_SpawnGroup_Loot_Caches *cacheBuffer)
{
  unsigned __int8 cacheTypeCount; 
  unsigned __int8 result; 
  __int64 v4; 
  __int64 v5; 

  if ( !cacheBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1112, ASSERT_TYPE_ASSERT, "(cacheBuffer)", (const char *)&queryFormat, "cacheBuffer") )
    __debugbreak();
  cacheTypeCount = cacheBuffer->cacheTypeCount;
  if ( cacheTypeCount >= 0x32u )
  {
    LODWORD(v5) = cacheTypeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1113, ASSERT_TYPE_ASSERT, "(unsigned)( cacheBuffer->cacheTypeCount ) < (unsigned)( 50 )", "cacheBuffer->cacheTypeCount doesn't index SPAWNGROUP_LOOT_MAX_CACHE_TYPES\n\t%i not in [0, %i)", v5, 50) )
      __debugbreak();
  }
  result = cacheBuffer->cacheTypeCount;
  if ( result < 0x32u )
  {
    cacheBuffer->cacheTypeCount = result + 1;
    v4 = result;
    *(_WORD *)&cacheBuffer->cacheTypes[v4].cacheSetCount = 0;
    *(_DWORD *)&cacheBuffer->cacheTypes[v4].scriptPoolFirst = 0;
    cacheBuffer->cacheTypes[v4].scriptPoolName = NULL;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8730, 6614i64);
    return 0;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_FindItemDef
==============
*/
BG_SpawnGroup_Loot_ItemDef *BG_SpawnGroup_Loot_FindItemDef(BG_SpawnGroup_Loot_Table *lootTable, const char *itemName, bool allowEmptyName)
{
  unsigned __int8 ItemDefIndexByName; 

  if ( itemName && *itemName )
  {
    ItemDefIndexByName = BG_SpawnGroup_Loot_FindItemDefIndexByName(lootTable, itemName);
    if ( ItemDefIndexByName )
    {
      return &lootTable->itemDefs[(unsigned __int64)ItemDefIndexByName];
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7360, 907i64, itemName, lootTable->table->name);
      return 0i64;
    }
  }
  else
  {
    if ( !allowEmptyName )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7310, 906i64, lootTable->table->name);
    return 0i64;
  }
}

/*
==============
BG_SpawnGroup_Loot_FindItemDefIndexByName
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_FindItemDefIndexByName(const BG_SpawnGroup_Loot_Table *lootTable, const char *scriptableDefName)
{
  const ScriptableDef *ScriptableDefByName; 
  unsigned __int8 itemDefCount; 
  unsigned __int8 result; 

  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 233, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  if ( !scriptableDefName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 234, ASSERT_TYPE_ASSERT, "(scriptableDefName)", (const char *)&queryFormat, "scriptableDefName") )
    __debugbreak();
  ScriptableDefByName = BG_SpawnGroup_Loot_FindScriptableDefByName(scriptableDefName);
  if ( !ScriptableDefByName )
    return 0;
  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 218, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  itemDefCount = lootTable->itemDefCount;
  result = 1;
  if ( itemDefCount <= 1u )
    return 0;
  while ( lootTable->itemDefs[(unsigned __int64)result].scriptableDef != ScriptableDefByName )
  {
    if ( ++result >= itemDefCount )
      return 0;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_FindOrAddSet
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_FindOrAddSet(BG_SpawnGroup_Loot_Table *const lootTable, const char *name)
{
  unsigned __int8 v4; 
  unsigned __int8 setCount; 
  unsigned __int8 result; 

  if ( name && *name )
  {
    v4 = 1;
    if ( lootTable->setCount <= 1u )
      goto LABEL_6;
    while ( I_strncmp(name, lootTable->sets[v4].name, 0x7FFFFFFFui64) )
    {
      if ( ++v4 >= lootTable->setCount )
        goto LABEL_6;
    }
    if ( v4 )
    {
      return v4;
    }
    else
    {
LABEL_6:
      setCount = lootTable->setCount;
      if ( setCount >= 0x1Eu )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7410, 915i64, name, lootTable->table->name);
        return 0;
      }
      else
      {
        BG_SpawnGroup_Loot_ParseSet(lootTable, name, &lootTable->sets[setCount], setCount, NULL);
        result = lootTable->setCount;
        lootTable->setCount = result + 1;
      }
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE73C0, 908i64, lootTable->table->name);
    return 0;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_FindOrAddTypeIndex
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_FindOrAddTypeIndex(BG_SpawnGroup_Loot_Table *lootTable, const char *typeName)
{
  unsigned __int8 v4; 
  __int64 v5; 
  unsigned __int8 itemTypeCount; 
  __int64 v7; 
  const char *v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  unsigned __int8 result; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  __int64 v18; 
  const char *v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  __int64 v23; 
  __int64 v24; 
  const char *v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  const char *v29; 
  char v30; 
  __int64 v31; 
  char v32; 

  if ( !typeName || !*typeName )
    return 0;
  v4 = 1;
  v5 = 0x7FFFFFFFi64;
  if ( lootTable->itemTypeCount > 1u )
  {
    while ( I_strncmp(typeName, lootTable->itemTypes[v4], 0x7FFFFFFFui64) )
    {
      if ( ++v4 >= lootTable->itemTypeCount )
        goto LABEL_6;
    }
    if ( v4 )
      return v4;
  }
LABEL_6:
  itemTypeCount = lootTable->itemTypeCount;
  if ( itemTypeCount >= 0x32u )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE6FC0, 905i64, lootTable->table->name);
    return 0;
  }
  else
  {
    v7 = 0x7FFFFFFFi64;
    v8 = typeName;
    while ( 1 )
    {
      v9 = v8["cache" - typeName];
      v10 = v7;
      v11 = *v8++;
      --v7;
      if ( !v10 )
      {
LABEL_11:
        lootTable->itemTypeIndexCache = itemTypeCount;
        goto LABEL_12;
      }
      if ( v9 != v11 )
        break;
      if ( !v9 )
        goto LABEL_11;
    }
    v13 = 0x7FFFFFFFi64;
    v14 = typeName;
    while ( 1 )
    {
      v15 = v14["kiosk" - typeName];
      v16 = v13;
      v17 = *v14++;
      --v13;
      if ( !v16 )
      {
LABEL_20:
        lootTable->itemTypeIndexKiosk = itemTypeCount;
        goto LABEL_12;
      }
      if ( v15 != v17 )
        break;
      if ( !v15 )
        goto LABEL_20;
    }
    v18 = 0x7FFFFFFFi64;
    v19 = typeName;
    while ( 1 )
    {
      v20 = v19["tablet" - typeName];
      v21 = v18;
      v22 = *v19++;
      --v18;
      if ( !v21 )
      {
LABEL_25:
        lootTable->itemTypeIndexTablet = itemTypeCount;
        goto LABEL_12;
      }
      if ( v20 != v22 )
        break;
      if ( !v20 )
        goto LABEL_25;
    }
    v23 = -1i64;
    do
      ++v23;
    while ( typeName[v23] );
    if ( I_strnicmp("dropkit", typeName, (unsigned int)v23) )
    {
      v24 = 0x7FFFFFFFi64;
      v25 = typeName;
      while ( 1 )
      {
        v26 = v25["attraction" - typeName];
        v27 = v24;
        v28 = *v25++;
        --v24;
        if ( !v27 )
        {
LABEL_34:
          lootTable->itemTypeIndexAttraction = lootTable->itemTypeCount;
          goto LABEL_12;
        }
        if ( v26 != v28 )
          break;
        if ( !v26 )
          goto LABEL_34;
      }
      v29 = typeName;
      do
      {
        v30 = v29["weapon" - typeName];
        v31 = v5;
        v32 = *v29++;
        --v5;
        if ( !v31 )
          break;
        if ( v30 != v32 )
          goto LABEL_12;
      }
      while ( v30 );
      lootTable->itemTypeIndexWeapon = lootTable->itemTypeCount;
    }
    else
    {
      lootTable->itemTypeIndexDropkit = lootTable->itemTypeCount;
    }
LABEL_12:
    lootTable->itemTypes[lootTable->itemTypeCount] = typeName;
    lootTable->itemTypesDisabled[lootTable->itemTypeCount] = 0;
    result = lootTable->itemTypeCount;
    lootTable->itemTypeCount = result + 1;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_FindScriptableDefByName
==============
*/
const ScriptableDef *BG_SpawnGroup_Loot_FindScriptableDefByName(const char *scriptableDefName)
{
  const ScriptableDef *result; 
  unsigned int outIndex; 

  if ( scriptableDefName && *scriptableDefName )
  {
    if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, scriptableDefName, &outIndex) )
    {
      result = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
      if ( !result )
      {
        Com_PrintError(0, "[SPAWNGROUP_LOOT] '%s' is not a valid scriptable def. Could not find an asset with that name.\n", scriptableDefName);
        return 0i64;
      }
    }
    else
    {
      Com_PrintError(0, "[SPAWNGROUP_LOOT] '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", scriptableDefName);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(0, "[SPAWNGROUP_LOOT] empty scriptableDefName passed into BG_SpawnGroup_Loot_FindScriptableDefByName.\n");
    return 0i64;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_FindSetIndex
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_FindSetIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const char *name)
{
  unsigned __int8 v4; 

  if ( !name )
    return 0;
  if ( !*name )
    return 0;
  v4 = 1;
  if ( lootTable->setCount <= 1u )
    return 0;
  while ( I_strncmp(name, lootTable->sets[v4].name, 0x7FFFFFFFui64) )
  {
    if ( ++v4 >= lootTable->setCount )
      return 0;
  }
  return v4;
}

/*
==============
BG_SpawnGroup_Loot_FindTypeIndex
==============
*/
unsigned __int8 BG_SpawnGroup_Loot_FindTypeIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const char *typeName)
{
  unsigned __int8 v4; 

  if ( !typeName )
    return 0;
  if ( !*typeName )
    return 0;
  v4 = 1;
  if ( lootTable->itemTypeCount <= 1u )
    return 0;
  while ( I_strncmp(typeName, lootTable->itemTypes[v4], 0x7FFFFFFFui64) )
  {
    if ( ++v4 >= lootTable->itemTypeCount )
      return 0;
  }
  return v4;
}

/*
==============
BG_SpawnGroup_Loot_GetItemDefIndex
==============
*/
signed __int64 BG_SpawnGroup_Loot_GetItemDefIndex(const BG_SpawnGroup_Loot_Table *const lootTable, const BG_SpawnGroup_Loot_ItemDef *const itemDef)
{
  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 246, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  if ( !itemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 247, ASSERT_TYPE_ASSERT, "(itemDef)", (const char *)&queryFormat, "itemDef") )
    __debugbreak();
  if ( itemDef <= lootTable->itemDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 248, ASSERT_TYPE_ASSERT, "(itemDef > lootTable->itemDefs)", (const char *)&queryFormat, "itemDef > lootTable->itemDefs") )
    __debugbreak();
  return ((char *)itemDef - (char *)lootTable - 472) >> 8;
}

/*
==============
BG_SpawnGroup_Loot_InitBrAmmo
==============
*/
void BG_SpawnGroup_Loot_InitBrAmmo(BG_SpawnGroup_Loot_Table *lootTable)
{
  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1451, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_SHOTGUN_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_SNIPER_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_AR_LMG_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_PISTOL_SMG_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_ROCKET_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
}

/*
==============
BG_SpawnGroup_Loot_IsCustomWeaponItemDef
==============
*/
bool BG_SpawnGroup_Loot_IsCustomWeaponItemDef(const BG_SpawnGroup_Loot_ItemDef *const itemDef)
{
  if ( !itemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1438, ASSERT_TYPE_ASSERT, "(itemDef)", (const char *)&queryFormat, "itemDef") )
    __debugbreak();
  return itemDef->rarity == 5;
}

/*
==============
BG_SpawnGroup_Loot_ParseDepends
==============
*/
void BG_SpawnGroup_Loot_ParseDepends(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, int row)
{
  const char *ColumnValueForRow; 
  const char *v7; 
  const char *v8; 
  unsigned __int8 ItemDefIndexByName; 
  unsigned __int64 v10; 
  char *v11; 
  BG_SpawnGroup_Loot_ItemDef *ItemDef; 
  unsigned __int16 v13; 

  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1013, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  if ( row >= table->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1014, ASSERT_TYPE_ASSERT, "(row < table->rowCount)", (const char *)&queryFormat, "row < table->rowCount") )
    __debugbreak();
  ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, 1);
  if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1017, ASSERT_TYPE_ASSERT, "(baseItemName)", (const char *)&queryFormat, "baseItemName") )
    __debugbreak();
  v7 = StringTable_GetColumnValueForRow(table, row, 2);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1020, ASSERT_TYPE_ASSERT, "(dependItemName)", (const char *)&queryFormat, "dependItemName") )
    __debugbreak();
  v8 = StringTable_GetColumnValueForRow(table, row, 3);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1023, ASSERT_TYPE_ASSERT, "(dependItemName)", (const char *)&queryFormat, "dependItemName") )
    __debugbreak();
  if ( !ColumnValueForRow || !*ColumnValueForRow )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7310, 906i64, lootTable->table->name);
    goto LABEL_28;
  }
  ItemDefIndexByName = BG_SpawnGroup_Loot_FindItemDefIndexByName(lootTable, ColumnValueForRow);
  if ( !ItemDefIndexByName )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7360, 907i64, ColumnValueForRow, lootTable->table->name);
LABEL_28:
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8360, 917i64, ColumnValueForRow, v7, lootTable->table->name);
    return;
  }
  v10 = (unsigned __int64)ItemDefIndexByName << 8;
  v11 = (char *)lootTable->itemDefs + v10;
  if ( (BG_SpawnGroup_Loot_Table *)((char *)lootTable + v10) == (BG_SpawnGroup_Loot_Table *)-472i64 )
    goto LABEL_28;
  ItemDef = BG_SpawnGroup_Loot_FindItemDef(lootTable, v7, 0);
  if ( ItemDef )
  {
    v13 = *((_WORD *)v11 + 25);
    if ( v13 < 0xAu )
    {
      *(_QWORD *)&v11[16 * v13 + 56] = ItemDef;
      *(_WORD *)&v11[16 * (unsigned __int16)(*((_WORD *)v11 + 25))++ + 64] = atoi(v8);
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8460, 919i64, v7, lootTable->table->name);
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143CE83E0, 918i64, v7, ColumnValueForRow, lootTable->table->name);
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseItemCacheSets
==============
*/
void BG_SpawnGroup_Loot_ParseItemCacheSets(BG_SpawnGroup_Loot_Table *lootTable, BG_SpawnGroup_Loot_CacheType *cacheType, const StringTable *table, int row, int col)
{
  unsigned __int16 i; 
  const char *ColumnValueForRow; 
  unsigned __int8 v11; 
  unsigned __int8 setCount; 
  __int64 v13; 
  __int64 v14; 

  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1136, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  for ( i = 0; i < 3u; ++i )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, col + (unsigned int)i);
    if ( ColumnValueForRow && *ColumnValueForRow )
    {
      v11 = BG_SpawnGroup_Loot_FindOrAddSet(lootTable, ColumnValueForRow);
      if ( v11 )
      {
        setCount = lootTable->setCount;
        if ( v11 >= setCount )
        {
          LODWORD(v14) = setCount;
          LODWORD(v13) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1155, ASSERT_TYPE_ASSERT, "(unsigned)( setIndex ) < (unsigned)( lootTable->setCount )", "setIndex doesn't index lootTable->setCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        lootTable->sets[v11].flags |= 4u;
        cacheType->cacheSets[cacheType->cacheSetCount++] = v11;
      }
    }
    else if ( !i )
    {
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - table '%s' row %d specifies an empty cacheSet\n", table->name, (unsigned int)row);
    }
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseItemChance
==============
*/
__int64 BG_SpawnGroup_Loot_ParseItemChance(const char *value, const BG_SpawnGroup_Loot_Set *const set)
{
  unsigned int v4; 
  __int64 v6; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 425, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v4 = atoi(value);
  if ( v4 > 0x2710 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 428, ASSERT_TYPE_ASSERT, "(chance >= 0 && chance <= CHANCE_ITEM_MAX)", (const char *)&queryFormat, "chance >= 0 && chance <= CHANCE_ITEM_MAX") )
    __debugbreak();
  if ( v4 > 0x2710 )
  {
    LODWORD(v6) = 10000;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7630, 6609i64, value, set->name, v6);
  }
  return (unsigned __int16)v4;
}

/*
==============
BG_SpawnGroup_Loot_ParseItemDef
==============
*/
char BG_SpawnGroup_Loot_ParseItemDef(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, int row)
{
  const char *name; 
  const char *v7; 
  char v9; 
  const char *ColumnValueForRow; 
  const ScriptableDef *ScriptableDefByName; 
  const ScriptableDef *v12; 
  int flags; 
  char v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned __int16 v19; 
  unsigned __int8 itemDefCount; 
  unsigned __int8 v21; 
  unsigned int *v22; 
  char *v23; 
  int v24; 
  const char *v25; 
  const char *v26; 
  GfxImage *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  unsigned __int8 itemTypeIndexKiosk; 
  char *fmt; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int16 v36; 
  char *saveptrctx; 
  unsigned int *outIndex; 
  char *typeName; 
  char dest[128]; 

  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 763, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  if ( row >= table->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 764, ASSERT_TYPE_ASSERT, "( row ) < ( table->rowCount )", "%s < %s\n\t%i, %i", "row", "table->rowCount", row, table->rowCount) )
    __debugbreak();
  if ( lootTable->itemDefCount < 0xC8u )
  {
    v9 = 1;
    ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, 1);
    ScriptableDefByName = BG_SpawnGroup_Loot_FindScriptableDefByName(ColumnValueForRow);
    v12 = ScriptableDefByName;
    if ( !ScriptableDefByName )
      return 0;
    flags = ScriptableDefByName->flags;
    v14 = 1;
    if ( (flags & 2) == 0 )
    {
      Com_PrintError(0, "[SPAWNGROUP_LOOT] scriptable def '%s' in table '%s' has no server instance, so it can't be loot\n", ColumnValueForRow, lootTable->table->name);
      flags = v12->flags;
      v14 = 0;
    }
    if ( (flags & 4) == 0 )
    {
      Com_PrintError(0, "[SPAWNGROUP_LOOT] scriptable def '%s' in table '%s' is not server controlled, so it can't be loot\n", ColumnValueForRow, lootTable->table->name);
      v14 = 0;
    }
    typeName = (char *)StringTable_GetColumnValueForRow(table, row, 2);
    if ( I_strnicmp(typeName, "dropkit", 7ui64) && v12->partCount > 1 )
    {
      LODWORD(v34) = 1;
      LODWORD(fmt) = v12->partCount;
      Com_PrintError(0, "[SPAWNGROUP_LOOT] scriptable def '%s' in table '%s' has more than the maximum part count (%u > %u).\n", ColumnValueForRow, lootTable->table->name, fmt, v34);
      v14 = 0;
    }
    lootTable->itemDefs[(unsigned __int64)lootTable->itemDefCount].activeAttachmentCount = 0;
    v15 = StringTable_GetColumnValueForRow(table, row, 10);
    if ( v15 )
    {
      if ( *v15 )
      {
        Core_strcpy(dest, 0x80ui64, v15);
        saveptrctx = NULL;
        if ( I_strtok_r(dest, "+", &saveptrctx) )
        {
          do
            ++lootTable->itemDefs[(unsigned __int64)lootTable->itemDefCount].activeAttachmentCount;
          while ( I_strtok_r(NULL, "+", &saveptrctx) );
        }
      }
    }
    if ( v14 )
    {
      v36 = 0;
      LODWORD(saveptrctx) = 0;
      v16 = StringTable_GetColumnValueForRow(table, row, 3);
      v17 = StringTable_GetColumnValueForRow(table, row, 4);
      outIndex = (unsigned int *)StringTable_GetColumnValueForRow(table, row, 11);
      if ( v16 )
      {
        if ( *v16 )
        {
          v18 = I_atoui(v16);
          v19 = truncate_cast<unsigned short,unsigned int>(v18);
          v36 = v19;
          if ( v19 >= 8u )
          {
            LODWORD(v35) = 8;
            LODWORD(v34) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( rarity ) < (unsigned)( 8 )", "rarity doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", v34, v35) )
              __debugbreak();
          }
        }
      }
      if ( v17 && *v17 )
        LODWORD(saveptrctx) = I_atoui(v17);
      itemDefCount = lootTable->itemDefCount;
      v21 = BG_SpawnGroup_Loot_FindOrAddTypeIndex(lootTable, typeName);
      if ( v21 >= 0x32u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 830, ASSERT_TYPE_ASSERT, "(type >= 0 && type < 50)", (const char *)&queryFormat, "type >= 0 && type < SPAWNGROUP_LOOT_MAX_TYPES") )
        __debugbreak();
      v22 = outIndex;
      v23 = (char *)lootTable + 256 * (unsigned __int64)itemDefCount;
      *((_WORD *)v23 + 247) = v36;
      v24 = (int)saveptrctx;
      *((_DWORD *)v23 + 128) = (_DWORD)saveptrctx;
      *((_DWORD *)v23 + 122) = v24;
      *((_DWORD *)v23 + 179) = 0;
      *((_QWORD *)v23 + 62) = 0i64;
      *((_QWORD *)v23 + 63) = v22;
      *((_DWORD *)v23 + 129) = 0;
      *((_WORD *)v23 + 261) = 0;
      *((_WORD *)v23 + 360) = 0;
      v23[521] = 0;
      v23[722] = 0;
      *((_QWORD *)v23 + 60) = ColumnValueForRow;
      v23[492] = v21;
      *((_QWORD *)v23 + 59) = v12;
      *((_DWORD *)v23 + 131) = row;
      outIndex = (unsigned int *)(v23 + 716);
      v25 = StringTable_GetColumnValueForRow(table, row, 18);
      *((_DWORD *)v23 + 181) = atoi(v25);
      v26 = StringTable_GetColumnValueForRow(table, row, 14);
      if ( v26 && *v26 )
        v27 = Image_Register(v26, IMAGE_TRACK_HUD);
      else
        v27 = NULL;
      *((_QWORD *)v23 + 86) = v27;
      v28 = StringTable_GetColumnValueForRow(table, row, 20);
      v29 = v28;
      if ( v28 && *v28 )
      {
        v23[698] = 1;
        *((_WORD *)v23 + 348) = 2048;
        v23[704] = 1;
        *((_DWORD *)v23 + 175) = 0;
        *(_QWORD *)(v23 + 708) = 0i64;
        v30 = StringTable_GetColumnValueForRow(table, row, 31);
        v23[705] = atoi(v30) != 0;
        v31 = StringTable_GetColumnValueForRow(table, row, 32);
        v23[706] = atoi(v31) != 0;
        if ( v21 == lootTable->itemTypeIndexTablet )
        {
          v23[699] = 3;
          *((_WORD *)v23 + 360) = 0;
        }
        else if ( v21 == lootTable->itemTypeIndexAttraction )
        {
          v23[699] = 1;
          *((_WORD *)v23 + 360) = 0;
          *((_WORD *)v23 + 348) |= 0x3001u;
        }
        else
        {
          v23[699] = 5;
          itemTypeIndexKiosk = lootTable->itemTypeIndexKiosk;
          v23[720] = 1;
          if ( v23[492] == itemTypeIndexKiosk )
            v9 = 3;
          v23[721] = v9;
        }
        if ( !NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_OBJECTIVEICON, v29, outIndex) )
          Com_PrintError(0, "[SPAWNGROUP_LOOT] scriptable def '%s' in table '%s' has objective icon %s that is not precached.\n", ColumnValueForRow, lootTable->table->name, v29);
      }
      ++lootTable->itemDefCount;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    name = lootTable->table->name;
    v7 = StringTable_GetColumnValueForRow(table, row, 1);
    Com_PrintError(0, "[SPAWNGROUP_LOOT] exceeded SPAWNGROUP_LOOT_MAX_ITEM_DEFS when adding item '%s' in table '%s'\n", v7, name);
    return 0;
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseItemTypeChance
==============
*/
__int64 BG_SpawnGroup_Loot_ParseItemTypeChance(const char *value, const BG_SpawnGroup_Loot_Set *const set)
{
  unsigned int v4; 
  __int64 v6; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 411, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v4 = atoi(value);
  if ( v4 > 0x2710 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 414, ASSERT_TYPE_ASSERT, "(chance >= 0 && chance <= CHANCE_TYPE_MAX)", (const char *)&queryFormat, "chance >= 0 && chance <= CHANCE_TYPE_MAX") )
    __debugbreak();
  if ( v4 > 0x2710 )
  {
    LODWORD(v6) = 10000;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7630, 6609i64, value, set->name, v6);
  }
  return v4;
}

/*
==============
BG_SpawnGroup_Loot_ParseRarityDef
==============
*/
void BG_SpawnGroup_Loot_ParseRarityDef(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, int row)
{
  const char *ColumnValueForRow; 
  unsigned int v7; 
  BG_SpawnGroup_Loot_Rarity *v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  FXRegisteredDef *p_trailStopFX; 
  const char *v16; 
  char *fmt; 

  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1082, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  if ( row >= table->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1083, ASSERT_TYPE_ASSERT, "(row < table->rowCount)", (const char *)&queryFormat, "row < table->rowCount") )
    __debugbreak();
  ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, 1);
  if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1086, ASSERT_TYPE_ASSERT, "(rarityLevelStr)", (const char *)&queryFormat, "rarityLevelStr") )
    __debugbreak();
  v7 = I_atoui(ColumnValueForRow);
  if ( v7 < 8 )
  {
    v8 = &lootTable->rarities[v7];
    v9 = BG_SpawnGroup_Loot_ParseRarityDefColor(table, row, 2);
    v10 = BG_SpawnGroup_Loot_ParseRarityDefColor(table, row, 3);
    v11 = BG_SpawnGroup_Loot_ParseRarityDefColor(table, row, 4);
    v8->colors = v9 | ((v10 | ((v11 | (BG_SpawnGroup_Loot_ParseRarityDefColor(table, row, 5) << 8)) << 8)) << 8);
    v12 = StringTable_GetColumnValueForRow(table, row, 6);
    if ( v12 && *v12 )
      FX_LoadEffect(v12, &v8->beamFX);
    else
      v8->beamFX.m_particleSystemDef = NULL;
    v13 = StringTable_GetColumnValueForRow(table, row, 7);
    if ( v13 && *v13 )
      FX_LoadEffect(v13, &v8->trailFX);
    else
      v8->trailFX.m_particleSystemDef = NULL;
    v14 = StringTable_GetColumnValueForRow(table, row, 8);
    if ( v14 && *v14 )
      FX_LoadEffect(v14, &v8->beamStopFX);
    else
      v8->beamStopFX.m_particleSystemDef = NULL;
    p_trailStopFX = &v8->trailStopFX;
    v16 = StringTable_GetColumnValueForRow(table, row, 9);
    if ( v16 && *v16 )
      FX_LoadEffect(v16, p_trailStopFX);
    else
      p_trailStopFX->m_particleSystemDef = NULL;
  }
  else
  {
    LODWORD(fmt) = 7;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE85E0, 5696i64, v7, fmt, table->name);
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseRarityDefColor
==============
*/
unsigned int BG_SpawnGroup_Loot_ParseRarityDefColor(const StringTable *table, int row, int col)
{
  const char *ColumnValueForRow; 
  unsigned int result; 

  ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, col);
  if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1069, ASSERT_TYPE_ASSERT, "(rarityColorRStr)", (const char *)&queryFormat, "rarityColorRStr") )
    __debugbreak();
  result = I_atoui(ColumnValueForRow);
  if ( result > 0xFF )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8530, 6613i64, result, table->name);
    return 0;
  }
  return result;
}

/*
==============
BG_SpawnGroup_Loot_ParseScriptCache
==============
*/
void BG_SpawnGroup_Loot_ParseScriptCache(BG_SpawnGroup_Loot_Table *lootTable, BG_SpawnGroup_Loot_Caches *cacheBuffer, const StringTable *zoneMapTable, int row)
{
  const char *ColumnValueForRow; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  unsigned __int8 v12; 
  unsigned __int8 setCount; 
  const char *v14; 
  unsigned __int16 v15; 
  __int64 CacheType; 

  ColumnValueForRow = StringTable_GetColumnValueForRow(zoneMapTable, row, 1);
  v9 = ColumnValueForRow;
  if ( ColumnValueForRow && *ColumnValueForRow )
  {
    v10 = StringTable_GetColumnValueForRow(zoneMapTable, row, 2);
    v11 = v10;
    if ( v10 && *v10 )
    {
      v12 = BG_SpawnGroup_Loot_FindOrAddSet(lootTable, v10);
      if ( v12 )
      {
        setCount = lootTable->setCount;
        if ( v12 >= setCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1220, ASSERT_TYPE_ASSERT, "(unsigned)( setIndex ) < (unsigned)( lootTable->setCount )", "setIndex doesn't index lootTable->setCount\n\t%i not in [0, %i)", v12, setCount) )
          __debugbreak();
        lootTable->sets[v12].flags |= 4u;
        v14 = StringTable_GetColumnValueForRow(zoneMapTable, row, 3);
        if ( v14 && *v14 && (v15 = atoi(v14)) != 0 )
        {
          CacheType = BG_SpawnGroup_Loot_AllocateCacheType(cacheBuffer);
          cacheBuffer->cacheTypes[CacheType].scriptPoolCount = v15;
          cacheBuffer->cacheTypes[CacheType].scriptPoolName = v9;
          cacheBuffer->cacheTypes[CacheType].cacheSetCount = 1;
          cacheBuffer->cacheTypes[CacheType].cacheSets[0] = v12;
        }
        else
        {
          Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d has no count defined for a scriptCache, will not pre-allocate any cache contents for %s\n", zoneMapTable->name, (unsigned int)row, v11);
        }
      }
      else
      {
        Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d failed to find or create a scriptCache set %s\n", zoneMapTable->name, (unsigned int)row, v11);
      }
    }
    else
    {
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d specifies an empty cacheSetName\n", zoneMapTable->name, (unsigned int)row);
    }
  }
  else
  {
    Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d specifies an empty scriptCacheName\n", zoneMapTable->name, (unsigned int)row);
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseSet
==============
*/
void BG_SpawnGroup_Loot_ParseSet(BG_SpawnGroup_Loot_Table *lootTable, const char *setName, BG_SpawnGroup_Loot_Set *set, unsigned __int8 setIndex, const char *setInheritanceChild)
{
  unsigned int *typeChances; 
  __int64 v10; 
  StringTable *v11; 
  const char *ColumnValueForRow; 
  const char *v13; 
  const char *v14; 
  __int64 v15; 
  signed __int64 v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  int v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  BG_SpawnGroup_Loot_Table *v36; 
  unsigned __int8 i; 
  unsigned __int16 v38; 
  const dvar_t *v39; 
  unsigned int unsignedInt; 
  const dvar_t *v41; 
  unsigned int v42; 
  const dvar_t *v43; 
  unsigned int v44; 
  const dvar_t *v45; 
  unsigned int v46; 
  const char *v47; 
  __int64 v48; 
  char v49; 
  __int64 v50; 
  char v51; 
  const char *v52; 
  __int64 v53; 
  char v54; 
  __int64 v55; 
  char v56; 
  const char *v57; 
  unsigned __int16 v58; 
  BG_SpawnGroup_Loot_Table *v59; 
  unsigned __int16 v60; 
  const BG_SpawnGroup_Loot_ItemDef *v61; 
  const char *v62; 
  __int64 v63; 
  char v64; 
  __int64 v65; 
  char v66; 
  BG_SpawnGroup_Loot_Table *v67; 
  const BG_SpawnGroup_Loot_ItemDef *ItemDef; 
  unsigned __int8 TypeIndex; 
  const char *v70; 
  __int64 v71; 
  char v72; 
  __int64 v73; 
  char v74; 
  __int64 v75; 
  const char *v76; 
  signed __int64 v77; 
  char v78; 
  __int64 v79; 
  char v80; 
  const char *v81; 
  __int64 v82; 
  signed __int64 v83; 
  char v84; 
  __int64 v85; 
  char v86; 
  __int64 v87; 
  char *v88; 
  unsigned int v89; 
  unsigned __int64 v90; 
  char v91; 
  unsigned int v92; 
  __int64 v93; 
  const char *v94; 
  unsigned __int16 v95; 
  BG_SpawnGroup_Loot_Table *v96; 
  unsigned __int16 v97; 
  unsigned __int8 v98; 
  unsigned __int8 v99; 
  __int64 v100; 
  const char *v101; 
  unsigned __int16 v102; 
  const char *v103; 
  unsigned __int16 v104; 
  const char *v105; 
  const char *v106; 
  const char *v107; 
  const char *v108; 
  __int64 v109; 
  char v110; 
  __int64 v111; 
  char v112; 
  const char *v113; 
  __int64 v114; 
  char v115; 
  __int64 v116; 
  char v117; 
  const char *v118; 
  __int64 v119; 
  char v120; 
  __int64 v121; 
  char v122; 
  const char *v123; 
  __int64 v124; 
  char v125; 
  __int64 v126; 
  char v127; 
  unsigned int v128; 
  const char *v129; 
  __int64 v130; 
  char v131; 
  __int64 v132; 
  char v133; 
  unsigned int v134; 
  BG_SpawnGroup_Loot_Table *v135; 
  __int64 v136; 
  unsigned int v137; 
  char *fmt; 
  __int64 v139; 
  StringTable *tablePtr; 
  int row; 
  int column; 
  BG_SpawnGroup_Loot_Table *lootTablea; 
  int RowCount; 
  char *s1; 
  char typeName[1024]; 

  lootTablea = lootTable;
  s1 = (char *)setInheritanceChild;
  if ( !set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 459, ASSERT_TYPE_ASSERT, "(set)", (const char *)&queryFormat, "set") )
    __debugbreak();
  memset_0(set, 0, sizeof(BG_SpawnGroup_Loot_Set));
  if ( setName && *setName )
  {
    StringTable_GetAsset(setName, (const StringTable **)&tablePtr);
    if ( tablePtr )
    {
      RowCount = StringTable_GetRowCount(tablePtr);
      if ( RowCount )
      {
        typeChances = set->typeChances;
        set->name = setName;
        v10 = 3i64;
        set->inheritance = NULL;
        set->index = setIndex;
        set->chancePoint = 100;
        set->chanceCluster = 100;
        set->chanceClusterSolo = 100;
        set->chanceLootCache = 100;
        set->chanceLocationMax = 100;
        set->typeChanceTotal = 0;
        do
        {
          *(_QWORD *)typeChances = 0i64;
          *((_QWORD *)typeChances + 1) = 0i64;
          *((_QWORD *)typeChances + 2) = 0i64;
          typeChances += 16;
          *((_QWORD *)typeChances - 5) = 0i64;
          *((_QWORD *)typeChances - 4) = 0i64;
          *((_QWORD *)typeChances - 3) = 0i64;
          *((_QWORD *)typeChances - 2) = 0i64;
          *((_QWORD *)typeChances - 1) = 0i64;
          --v10;
        }
        while ( v10 );
        v11 = tablePtr;
        *(_QWORD *)typeChances = 0i64;
        column = 2;
        ColumnValueForRow = StringTable_GetColumnValueForRow(v11, 0, 0);
        v13 = "inherit";
        v14 = StringTable_GetColumnValueForRow(tablePtr, 0, 1);
        v15 = 8i64;
        if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v16 = ColumnValueForRow - "inherit";
        do
        {
          v17 = v13[v16];
          v18 = v15;
          v19 = *v13;
          --v15;
          ++v13;
          if ( !v18 )
            break;
          if ( v17 != v19 )
            goto LABEL_20;
        }
        while ( v17 );
        BG_SpawnGroup_Loot_ParseSet(lootTablea, v14, set, setIndex, setName);
        set->name = setName;
        set->inheritance = v14;
LABEL_20:
        v20 = 0;
        row = 0;
        if ( RowCount > 0 )
        {
          while ( 2 )
          {
            v21 = "chance";
            v22 = StringTable_GetColumnValueForRow(tablePtr, v20, 0);
            v23 = StringTable_GetColumnValueForRow(tablePtr, v20, 1);
            v24 = StringTable_GetColumnValueForRow(tablePtr, v20, 2);
            v25 = 7i64;
            if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            do
            {
              v26 = v21[v22 - "chance"];
              v27 = v25;
              v28 = *v21++;
              --v25;
              if ( !v27 )
                break;
              if ( v26 != v28 )
              {
                v47 = "setchancecol";
                v48 = 13i64;
                if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                do
                {
                  v49 = v47[v22 - "setchancecol"];
                  v50 = v48;
                  v51 = *v47;
                  --v48;
                  ++v47;
                  if ( !v50 )
                    break;
                  if ( v49 != v51 )
                    goto LABEL_72;
                }
                while ( v49 );
                if ( s1 )
                {
                  if ( !I_strncmp(v23, s1, 0x7FFFFFFFui64) )
                    column = (unsigned __int16)atoi(v24);
                  goto LABEL_37;
                }
LABEL_72:
                v52 = "item";
                v53 = 5i64;
                if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                do
                {
                  v54 = v52[v22 - "item"];
                  v55 = v53;
                  v56 = *v52;
                  --v53;
                  ++v52;
                  if ( !v55 )
                    break;
                  if ( v54 != v56 )
                  {
                    v62 = "req";
                    v63 = 4i64;
                    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v64 = v62[v22 - "req"];
                      v65 = v63;
                      v66 = *v62;
                      --v63;
                      ++v62;
                      if ( !v65 )
                      {
LABEL_86:
                        if ( set->reqCount >= 0xAu )
                        {
                          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7AE0, 914i64, set->name, lootTablea->table->name);
                        }
                        else
                        {
                          v67 = lootTablea;
                          ItemDef = BG_SpawnGroup_Loot_FindItemDef(lootTablea, v23, 1);
                          if ( ItemDef )
                          {
                            TypeIndex = 0;
                          }
                          else
                          {
                            TypeIndex = BG_SpawnGroup_Loot_FindTypeIndex(v67, v24);
                            if ( TypeIndex >= 0x32u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 596, ASSERT_TYPE_ASSERT, "(type >= 0 && type < 50)", (const char *)&queryFormat, "type >= 0 && type < SPAWNGROUP_LOOT_MAX_TYPES") )
                              __debugbreak();
                          }
                          v20 = row;
                          v101 = StringTable_GetColumnValueForRow(tablePtr, row, 6);
                          v102 = atoi(v101);
                          v103 = StringTable_GetColumnValueForRow(tablePtr, v20, 7);
                          v104 = atoi(v103);
                          set->reqs[set->reqCount].def = ItemDef;
                          set->reqs[set->reqCount].type = TypeIndex;
                          set->reqs[set->reqCount].rarityMin = v102;
                          set->reqs[set->reqCount].rarityMax = v104;
                          v105 = StringTable_GetColumnValueForRow(tablePtr, v20, 5);
                          set->reqs[set->reqCount].chance = atoi(v105);
                          v106 = StringTable_GetColumnValueForRow(tablePtr, v20, 3);
                          set->reqs[set->reqCount].min = atoi(v106);
                          v107 = StringTable_GetColumnValueForRow(tablePtr, v20, 4);
                          set->reqs[set->reqCount].max = atoi(v107);
                          set->reqs[set->reqCount++].num = 0;
                        }
                        goto LABEL_37;
                      }
                      if ( v64 != v66 )
                        break;
                      if ( !v64 )
                        goto LABEL_86;
                    }
                    v70 = "option";
                    v71 = 7i64;
                    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v72 = v70[v22 - "option"];
                      v73 = v71;
                      v74 = *v70++;
                      --v71;
                      if ( !v73 )
                      {
LABEL_97:
                        v75 = 8i64;
                        v76 = "allowdupes";
                        if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                          __debugbreak();
                        v77 = v23 - "allowdupes";
                        do
                        {
                          v78 = v76[v77];
                          v79 = v75;
                          v80 = *v76;
                          --v75;
                          ++v76;
                          if ( !v79 )
                            break;
                          if ( v78 != v80 )
                            goto LABEL_37;
                        }
                        while ( v78 );
                        if ( atoi(v24) )
                          set->flags |= 1u;
                        else
                          set->flags = 0;
                        goto LABEL_37;
                      }
                      if ( v72 != v74 )
                        break;
                      if ( !v72 )
                        goto LABEL_97;
                    }
                    v81 = "rarity";
                    v82 = 7i64;
                    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    v83 = v22 - "rarity";
                    do
                    {
                      v84 = v81[v83];
                      v85 = v82;
                      v86 = *v81;
                      --v82;
                      ++v81;
                      if ( !v85 )
                        break;
                      if ( v84 != v86 )
                        goto LABEL_37;
                    }
                    while ( v84 );
                    v87 = -1i64;
                    do
                      ++v87;
                    while ( v23[v87] );
                    if ( (unsigned int)v87 >= 0x3FF )
                    {
                      LODWORD(fmt) = v20;
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7B70, 912i64, v23, fmt, lootTablea->table->name);
                      return;
                    }
                    v88 = typeName;
                    v89 = 0;
                    if ( (_DWORD)v87 )
                    {
                      v90 = 0i64;
                      do
                      {
                        v91 = typeName[v90 + v23 - typeName];
                        if ( v91 == 95 )
                        {
                          if ( v90 >= 0x400 )
                            goto LABEL_192;
                          v88 = &typeName[v89 + 1];
                          v91 = 0;
                        }
                        ++v89;
                        typeName[v90++] = v91;
                      }
                      while ( v89 < (unsigned int)v87 );
                    }
                    if ( (unsigned int)v87 >= 0x400ui64 )
                    {
LABEL_192:
                      j___report_rangecheckfailure(v87);
                      JUMPOUT(0x1403AFFB0i64);
                    }
                    typeName[(unsigned int)v87] = 0;
                    v92 = atoi(typeName);
                    v93 = v92;
                    if ( v92 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 442, ASSERT_TYPE_ASSERT, "(rarityIndex >= 0 && rarityIndex <= 8)", (const char *)&queryFormat, "rarityIndex >= 0 && rarityIndex <= SPAWNGROUP_LOOT_MAX_RARITIES") )
                      __debugbreak();
                    if ( (unsigned int)v93 > 8 )
                    {
                      LODWORD(v139) = 8;
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7810, 6609i64, typeName, set->name, v139);
                    }
                    v94 = StringTable_GetColumnValueForRow(tablePtr, v20, column);
                    if ( !v94 || !*v94 )
                      v94 = v24;
                    v95 = BG_SpawnGroup_Loot_ParseItemChance(v94, set);
                    v96 = lootTablea;
                    v97 = v95;
                    if ( v88 == typeName )
                    {
                      v99 = 1;
                      if ( lootTablea->itemTypeCount > 1u )
                      {
                        do
                        {
                          v100 = v99++;
                          set->rarityChances[v93][v100] = v97;
                        }
                        while ( v99 < v96->itemTypeCount );
                      }
                      set->flags |= 8u;
                      goto LABEL_37;
                    }
                    v98 = BG_SpawnGroup_Loot_FindTypeIndex(lootTablea, v88);
                    if ( v98 )
                    {
                      set->rarityChances[v93][v98] = v97;
                      set->flags |= 8u;
                      goto LABEL_37;
                    }
                    LODWORD(v139) = v20;
                    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7BE0, 912i64, v23, v88, v139, v96->table->name);
                    return;
                  }
                }
                while ( v54 );
                v57 = StringTable_GetColumnValueForRow(tablePtr, v20, column);
                v58 = BG_SpawnGroup_Loot_ParseItemChance(v57, set);
                v59 = lootTablea;
                v60 = v58;
                v61 = BG_SpawnGroup_Loot_FindItemDef(lootTablea, v23, 0);
                if ( v61 )
                {
                  BG_SpawnGroup_Loot_Set_AddItem(v59, set, v61, v60, 1);
                  v20 = row;
                  goto LABEL_37;
                }
                LODWORD(v139) = row;
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143CE7A60, 912i64, v23, set->name, v139, v59->table->name);
                return;
              }
            }
            while ( v26 );
            v29 = StringTable_GetColumnValueForRow(tablePtr, v20, column);
            v30 = v29;
            if ( !v29 || !*v29 )
              v30 = v24;
            v31 = "point";
            v32 = 6i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v33 = v31[v23 - "point"];
              v34 = v32;
              v35 = *v31;
              --v32;
              ++v31;
              if ( !v34 )
              {
LABEL_36:
                set->chancePoint = BG_SpawnGroup_Loot_ParseSpawnLocationChance(v30, set);
                goto LABEL_37;
              }
              if ( v33 != v35 )
                break;
              if ( !v33 )
                goto LABEL_36;
            }
            v108 = "cluster";
            v109 = 8i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v110 = v108[v23 - "cluster"];
              v111 = v109;
              v112 = *v108;
              --v109;
              ++v108;
              if ( !v111 )
              {
LABEL_147:
                set->chanceCluster = BG_SpawnGroup_Loot_ParseSpawnLocationChance(v30, set);
                goto LABEL_37;
              }
              if ( v110 != v112 )
                break;
              if ( !v110 )
                goto LABEL_147;
            }
            v113 = "clusterSolo";
            v114 = 12i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v115 = v113[v23 - "clusterSolo"];
              v116 = v114;
              v117 = *v113;
              --v114;
              ++v113;
              if ( !v116 )
              {
LABEL_154:
                set->chanceClusterSolo = BG_SpawnGroup_Loot_ParseSpawnLocationChance(v30, set);
                goto LABEL_37;
              }
              if ( v115 != v117 )
                break;
              if ( !v115 )
                goto LABEL_154;
            }
            v118 = "cachePoint";
            v119 = 11i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v120 = v118[v23 - "cachePoint"];
              v121 = v119;
              v122 = *v118;
              --v119;
              ++v118;
              if ( !v121 )
              {
LABEL_161:
                set->chanceLootCache = BG_SpawnGroup_Loot_ParseSpawnLocationChance(v30, set);
                goto LABEL_37;
              }
              if ( v120 != v122 )
                break;
              if ( !v120 )
                goto LABEL_161;
            }
            v123 = "location_max";
            v124 = 13i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v125 = v123[v23 - "location_max"];
              v126 = v124;
              v127 = *v123++;
              --v124;
              if ( !v126 )
              {
LABEL_168:
                if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 386, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
                  __debugbreak();
                v128 = atoi(v30);
                if ( v128 > 0x2710 )
                {
                  LODWORD(v139) = 10000;
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE75B0, 909i64, v30, set->name, v139);
                }
                set->chanceLocationMax = v128;
                goto LABEL_37;
              }
              if ( v125 != v127 )
                break;
              if ( !v125 )
                goto LABEL_168;
            }
            v129 = "type_all";
            v130 = 9i64;
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v131 = v129[v23 - "type_all"];
              v132 = v130;
              v133 = *v129;
              --v130;
              ++v129;
              if ( !v132 )
              {
LABEL_180:
                v134 = BG_SpawnGroup_Loot_ParseItemTypeChance(v30, set);
                set->typeChanceTotal = 0;
                set->typeChances[0] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[1] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[2] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[3] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[4] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[5] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[6] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[7] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[8] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[9] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[10] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[11] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[12] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[13] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[14] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[15] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[16] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[17] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[18] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[19] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[20] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[21] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[22] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[23] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[24] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[25] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[26] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[27] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[28] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[29] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[30] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[31] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[32] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[33] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[34] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[35] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[36] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[37] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[38] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[39] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[40] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[41] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[42] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[43] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[44] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[45] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[46] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[47] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[48] = v134;
                set->typeChanceTotal += v134;
                set->typeChances[49] = v134;
                set->typeChanceTotal += v134;
                goto LABEL_37;
              }
              if ( v131 != v133 )
                break;
              if ( !v131 )
                goto LABEL_180;
            }
            v135 = lootTablea;
            LOBYTE(v136) = BG_SpawnGroup_Loot_FindOrAddTypeIndex(lootTablea, v23);
            if ( (unsigned __int8)v136 >= 0x32u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 558, ASSERT_TYPE_ASSERT, "(type >= 0 && type < 50)", (const char *)&queryFormat, "type >= 0 && type < SPAWNGROUP_LOOT_MAX_TYPES") )
              __debugbreak();
            v136 = (unsigned __int8)v136;
            if ( !v135->itemTypesDisabled[(unsigned __int8)v136] )
            {
              set->typeChanceTotal -= set->typeChances[v136];
              v137 = BG_SpawnGroup_Loot_ParseItemTypeChance(v30, set);
              set->typeChances[v136] = v137;
              set->typeChanceTotal += v137;
            }
            set->flags |= 2u;
            v20 = row;
LABEL_37:
            row = ++v20;
            if ( v20 < RowCount )
              continue;
            break;
          }
        }
        if ( (set->flags & 8) != 0 )
        {
          v36 = lootTablea;
          for ( i = 0; i < v36->itemDefCount; ++i )
          {
            v38 = set->rarityChances[v36->itemDefs[(unsigned __int64)i].rarity][v36->itemDefs[(unsigned __int64)i].type];
            if ( v38 )
              BG_SpawnGroup_Loot_Set_AddItem(v36, set, &v36->itemDefs[(unsigned __int64)i], v38, 0);
          }
        }
        v39 = DCONST_DVARINT_bg_spawngroup_loot_override_chance_point;
        if ( !DCONST_DVARINT_bg_spawngroup_loot_override_chance_point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_override_chance_point") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v39);
        unsignedInt = v39->current.unsignedInt;
        if ( unsignedInt != -1 )
          set->chancePoint = unsignedInt;
        v41 = DCONST_DVARINT_bg_spawngroup_loot_override_chance_cluster;
        if ( !DCONST_DVARINT_bg_spawngroup_loot_override_chance_cluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_override_chance_cluster") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        v42 = v41->current.unsignedInt;
        if ( v42 != -1 )
          set->chanceCluster = v42;
        v43 = DCONST_DVARINT_bg_spawngroup_loot_override_chance_clusterSolo;
        if ( !DCONST_DVARINT_bg_spawngroup_loot_override_chance_clusterSolo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_override_chance_clusterSolo") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        v44 = v43->current.unsignedInt;
        if ( v44 != -1 )
          set->chanceClusterSolo = v44;
        v45 = DCONST_DVARINT_bg_spawngroup_loot_override_chance_cache;
        if ( !DCONST_DVARINT_bg_spawngroup_loot_override_chance_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_override_chance_cache") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        v46 = v45->current.unsignedInt;
        if ( v46 != -1 )
          set->chanceLootCache = v46;
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7958, 6610i64, setName);
      }
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE78F0, 911i64, setName, lootTable->table->name);
    }
  }
  else
  {
    set->name = (char *)&queryFormat.fmt + 3;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7890, 910i64, lootTable->table->name);
  }
}

/*
==============
BG_SpawnGroup_Loot_ParseSpawnLocationChance
==============
*/
__int64 BG_SpawnGroup_Loot_ParseSpawnLocationChance(const char *value, const BG_SpawnGroup_Loot_Set *const set)
{
  unsigned int v4; 
  __int64 v6; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v4 = atoi(value);
  if ( v4 > set->chanceLocationMax )
  {
    LODWORD(v6) = set->chanceLocationMax;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7630, 6608i64, value, set->name, v6);
  }
  return v4;
}

/*
==============
BG_SpawnGroup_Loot_ParseTable
==============
*/
char BG_SpawnGroup_Loot_ParseTable(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, const StringTable *zoneMapTable, const char *filter, BG_SpawnGroup_Loot_Caches *cacheBuffer)
{
  BG_SpawnGroup_Loot_Caches *v8; 
  unsigned int v9; 
  char v10; 
  int v11; 
  __int64 v12; 
  const char *v13; 
  const char *ColumnValueForRow; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  const char *v19; 
  const char *v20; 
  unsigned __int8 v21; 
  unsigned __int8 ItemDefIndexByName; 
  unsigned __int8 v23; 
  unsigned __int64 v24; 
  unsigned __int8 itemDefCount; 
  int v26; 
  unsigned __int8 *p_type; 
  __int64 v28; 
  unsigned __int8 i; 
  bool *v30; 
  int v31; 
  const char *v32; 
  __int64 v33; 
  const char *v34; 
  char v35; 
  __int64 v36; 
  char v37; 
  __int64 v38; 
  const char *v39; 
  signed __int64 v40; 
  char v41; 
  __int64 v42; 
  char v43; 
  char v44; 
  const char *v45; 
  const char *v46; 
  __int64 v47; 
  char v48; 
  __int64 v49; 
  char v50; 
  BG_SpawnGroup_Loot_Caches *v51; 
  const char *v52; 
  __int64 v53; 
  char v54; 
  __int64 v55; 
  char v56; 
  const char *v57; 
  unsigned __int8 v58; 
  unsigned __int8 setCount; 
  const char *v60; 
  __int64 v61; 
  char v62; 
  __int64 v63; 
  char v64; 
  const char *v65; 
  const char *v66; 
  unsigned __int8 v67; 
  const char *v68; 
  __int64 v69; 
  signed __int64 v70; 
  char v71; 
  __int64 v72; 
  char v73; 
  unsigned __int64 v74; 
  char *v75; 
  unsigned __int8 CacheType; 
  BG_SpawnGroup_Loot_CacheType *v77; 
  unsigned __int8 j; 
  char *v79; 
  const char *v80; 
  unsigned __int8 v81; 
  BG_SpawnGroup_Loot_CacheType *v82; 
  __int64 v84; 
  __int64 v85; 
  char *data_p; 

  data_p = (char *)filter;
  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1250, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  if ( (!zoneMapTable || !data_p) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1251, ASSERT_TYPE_ASSERT, "(zoneMapTable && filter)", (const char *)&queryFormat, "zoneMapTable && filter") )
    __debugbreak();
  lootTable->table = table;
  lootTable->itemTypeCount = 1;
  lootTable->itemTypeIndexCache = -1;
  lootTable->itemDefCount = 1;
  *(_WORD *)&lootTable->setCount = 1;
  lootTable->cacheSetCount = 1;
  lootTable->cacheSetForZoneDefault = 0;
  lootTable->weaponMapCopied = 0;
  memset_0(lootTable->setForZone, 0, sizeof(lootTable->setForZone));
  v8 = cacheBuffer;
  v9 = 0;
  if ( cacheBuffer )
  {
    cacheBuffer->cacheCount = 0;
    v8->cacheTypeCount = 1;
  }
  v10 = 1;
  v11 = 0;
  if ( table->rowCount > 0 )
  {
    do
    {
      v12 = 5i64;
      v13 = "item";
      ColumnValueForRow = StringTable_GetColumnValueForRow(table, v11, 0);
      if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v15 = ColumnValueForRow - "item";
      do
      {
        v16 = v13[v15];
        v17 = v12;
        v18 = *v13;
        --v12;
        ++v13;
        if ( !v17 )
          break;
        if ( v16 != v18 )
          goto LABEL_21;
      }
      while ( v16 );
      if ( !BG_SpawnGroup_Loot_ParseItemDef(lootTable, table, v11) )
        v10 = 0;
LABEL_21:
      ++v11;
    }
    while ( v11 < table->rowCount );
    if ( !v10 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143CE8BF0, 921i64, table->name);
      return 0;
    }
  }
  if ( data_p && *data_p )
  {
    while ( 1 )
    {
      v19 = Com_Parse((const char **)&data_p);
      v20 = v19;
      if ( !v19 || !*v19 )
        break;
      v21 = 1;
      if ( lootTable->itemTypeCount <= 1u )
        goto LABEL_31;
      while ( I_strncmp(v20, lootTable->itemTypes[v21], 0x7FFFFFFFui64) )
      {
        if ( ++v21 >= lootTable->itemTypeCount )
          goto LABEL_31;
      }
      if ( v21 )
      {
        v23 = 1;
        for ( lootTable->itemTypesDisabled[v21] = 1; v23 < lootTable->itemDefCount; ++v23 )
        {
          v24 = (unsigned __int64)v23 << 8;
          if ( *(&lootTable->itemDefs[0].type + v24) == v21 )
            *(&lootTable->itemDefs[0].disabled + v24) = 1;
        }
      }
      else
      {
LABEL_31:
        ItemDefIndexByName = BG_SpawnGroup_Loot_FindItemDefIndexByName(lootTable, v20);
        if ( ItemDefIndexByName )
          lootTable->itemDefs[(unsigned __int64)ItemDefIndexByName].disabled = 1;
      }
    }
  }
  itemDefCount = lootTable->itemDefCount;
  v26 = 0;
  if ( itemDefCount )
  {
    p_type = &lootTable->itemDefs[0].type;
    v28 = itemDefCount;
    do
    {
      if ( !p_type[29] )
        v26 |= 1 << *p_type;
      p_type += 256;
      --v28;
    }
    while ( v28 );
  }
  for ( i = 0; i < lootTable->itemTypeCount; ++i )
  {
    v30 = &lootTable->itemTypesDisabled[i];
    if ( !*v30 && !_bittest(&v26, i) )
    {
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Disabling type %s because no active items of that type were found\n", lootTable->itemTypes[i]);
      *v30 = 1;
    }
  }
  v31 = 0;
  if ( table->rowCount > 0 )
  {
    do
    {
      v32 = StringTable_GetColumnValueForRow(table, v31, 0);
      v33 = 8i64;
      v34 = "depends";
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v35 = v34[v32 - "depends"];
        v36 = v33;
        v37 = *v34++;
        --v33;
        if ( !v36 )
          break;
        if ( v35 != v37 )
          goto LABEL_57;
      }
      while ( v35 );
      BG_SpawnGroup_Loot_ParseDepends(lootTable, table, v31);
LABEL_57:
      v38 = 10i64;
      v39 = "raritydef";
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v40 = v32 - "raritydef";
      do
      {
        v41 = v39[v40];
        v42 = v38;
        v43 = *v39++;
        --v38;
        if ( !v42 )
          break;
        if ( v41 != v43 )
          goto LABEL_65;
      }
      while ( v41 );
      BG_SpawnGroup_Loot_ParseRarityDef(lootTable, table, v31);
LABEL_65:
      ++v31;
    }
    while ( v31 < table->rowCount );
    v9 = 0;
  }
  v44 = 0;
  if ( zoneMapTable->rowCount <= 0 )
  {
LABEL_128:
    if ( table == zoneMapTable )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143CE8D10, 922i64, table->name);
    else
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8DD0, 6615i64, zoneMapTable->name);
    return 0;
  }
  v45 = "zone";
  do
  {
    v46 = StringTable_GetColumnValueForRow(zoneMapTable, v9, 0);
    v47 = 5i64;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v48 = v45[v46 - "zone"];
      v49 = v47;
      v50 = *v45++;
      --v47;
      if ( !v49 )
      {
LABEL_75:
        BG_SpawnGroup_Loot_ParseZoneToSetMapping(lootTable, zoneMapTable, v9);
        v44 = 1;
        goto LABEL_76;
      }
      if ( v48 != v50 )
        break;
      if ( !v48 )
        goto LABEL_75;
    }
    v52 = "set";
    v53 = 4i64;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v54 = v52[v46 - "set"];
      v55 = v53;
      v56 = *v52;
      --v53;
      ++v52;
      if ( !v55 )
      {
LABEL_87:
        v57 = StringTable_GetColumnValueForRow(zoneMapTable, v9, 1);
        v58 = BG_SpawnGroup_Loot_FindOrAddSet(lootTable, v57);
        setCount = lootTable->setCount;
        if ( v58 >= setCount )
        {
          LODWORD(v85) = setCount;
          LODWORD(v84) = v58;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1371, ASSERT_TYPE_ASSERT, "(unsigned)( setIndex ) < (unsigned)( lootTable->setCount )", "setIndex doesn't index lootTable->setCount\n\t%i not in [0, %i)", v84, v85) )
            __debugbreak();
        }
        lootTable->sets[v58].flags |= 4u;
        goto LABEL_76;
      }
      if ( v54 != v56 )
        break;
      if ( !v54 )
        goto LABEL_87;
    }
    if ( !cacheBuffer )
      goto LABEL_76;
    v60 = "itemCache";
    v61 = 10i64;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 2 )
    {
      v62 = v60[v46 - "itemCache"];
      v63 = v61;
      v64 = *v60++;
      --v61;
      if ( !v63 )
      {
LABEL_98:
        v65 = StringTable_GetColumnValueForRow(zoneMapTable, v9, 1);
        v66 = v65;
        if ( v65 && *v65 )
        {
          v67 = BG_SpawnGroup_Loot_FindItemDefIndexByName(lootTable, v65);
          if ( v67 )
          {
            v74 = (unsigned __int64)v67 << 8;
            v75 = (char *)lootTable->itemDefs + v74;
            if ( (BG_SpawnGroup_Loot_Table *)((char *)lootTable + v74) != (BG_SpawnGroup_Loot_Table *)-472i64 )
            {
              v51 = cacheBuffer;
              if ( !*(&lootTable->itemDefs[0].disabled + v74) )
              {
                CacheType = BG_SpawnGroup_Loot_AllocateCacheType(cacheBuffer);
                v75[250] = CacheType;
                v77 = &v51->cacheTypes[CacheType];
                if ( v75 <= (char *)lootTable->itemDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 248, ASSERT_TYPE_ASSERT, "(itemDef > lootTable->itemDefs)", (const char *)&queryFormat, "itemDef > lootTable->itemDefs") )
                  __debugbreak();
                v77->itemDefIndex = (unsigned __int16)((_WORD)v75 - (_WORD)lootTable - 472) >> 8;
                BG_SpawnGroup_Loot_ParseItemCacheSets(lootTable, v77, zoneMapTable, v9, 2);
                if ( lootTable->itemTypeIndexCache == v75[20] )
                  v77->scriptPoolCount = 100;
              }
              goto LABEL_77;
            }
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7360, 907i64, v66, lootTable->table->name);
          }
          Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d specifies an item named '%s' which does not exist in item def table '%s'\n", zoneMapTable->name, v9, v66, table->name);
          goto LABEL_76;
        }
        Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - zone map '%s' row %d specifies an empty item name for an itemCache\n", zoneMapTable->name, v9);
LABEL_76:
        v51 = cacheBuffer;
        goto LABEL_77;
      }
      if ( v62 == v64 )
      {
        if ( !v62 )
          goto LABEL_98;
        continue;
      }
      break;
    }
    v68 = "scriptCache";
    v69 = 12i64;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v70 = v46 - "scriptCache";
    do
    {
      v71 = v68[v70];
      v72 = v69;
      v73 = *v68++;
      --v69;
      if ( !v72 )
        break;
      if ( v71 != v73 )
        goto LABEL_76;
    }
    while ( v71 );
    v51 = cacheBuffer;
    BG_SpawnGroup_Loot_ParseScriptCache(lootTable, cacheBuffer, zoneMapTable, v9);
LABEL_77:
    ++v9;
    v45 = "zone";
  }
  while ( (signed int)v9 < zoneMapTable->rowCount );
  if ( !v44 )
    goto LABEL_128;
  if ( !lootTable->setForZoneDefault )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143CE8E30, 6616i64, zoneMapTable->name);
    return 0;
  }
  if ( v51 )
  {
    for ( j = 0; j < lootTable->itemDefCount; ++j )
    {
      v79 = (char *)lootTable + 256 * (unsigned __int64)j;
      if ( !v79[521] && !v79[722] )
      {
        v80 = StringTable_GetColumnValueForRow(table, *((_DWORD *)v79 + 131), 21);
        if ( v80 )
        {
          if ( *v80 )
          {
            v81 = BG_SpawnGroup_Loot_AllocateCacheType(v51);
            v79[722] = v81;
            v82 = &v51->cacheTypes[v81];
            v82->itemDefIndex = j;
            BG_SpawnGroup_Loot_ParseItemCacheSets(lootTable, v82, table, *((_DWORD *)v79 + 131), 21);
          }
        }
      }
    }
  }
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_SHOTGUN_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_SNIPER_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_AR_LMG_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_PISTOL_SMG_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  BG_SpawnGroup_Loot_SetBrAmmoData(lootTable, BR_ROCKET_AMMO, "[BG_WEAPONS_SETUP] unable to find item '%s' in loot table for BR. Setting max ammo to 0.\n");
  return 1;
}

/*
==============
BG_SpawnGroup_Loot_ParseZoneToSetMapping
==============
*/
void BG_SpawnGroup_Loot_ParseZoneToSetMapping(BG_SpawnGroup_Loot_Table *lootTable, const StringTable *table, int row)
{
  const char *v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  scr_string_t LowercaseString; 
  unsigned __int8 v15; 
  __int64 cacheSetCount; 
  int v17; 
  unsigned __int8 v18; 
  unsigned __int8 *v19; 
  MapEnts *mapEnts; 
  __int64 v21; 
  __int64 v22; 
  bool v23; 
  char *name; 
  const char *ColumnValueForRow; 
  unsigned __int8 v26; 

  if ( (!lootTable || !table) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 927, ASSERT_TYPE_ASSERT, "(lootTable && table)", (const char *)&queryFormat, "lootTable && table") )
    __debugbreak();
  if ( row >= table->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 928, ASSERT_TYPE_ASSERT, "(row < table->rowCount)", (const char *)&queryFormat, "row < table->rowCount") )
    __debugbreak();
  ColumnValueForRow = StringTable_GetColumnValueForRow(table, row, 1);
  if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 931, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  name = (char *)StringTable_GetColumnValueForRow(table, row, 2);
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 934, ASSERT_TYPE_ASSERT, "(setName)", (const char *)&queryFormat, "setName") )
    __debugbreak();
  v6 = StringTable_GetColumnValueForRow(table, row, 3);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 937, ASSERT_TYPE_ASSERT, "(cacheSetName)", (const char *)&queryFormat, "cacheSetName") )
    __debugbreak();
  v7 = StringTable_GetColumnValueForRow(table, row, 4);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 940, ASSERT_TYPE_ASSERT, "(cacheFixedString)", (const char *)&queryFormat, "cacheFixedString") )
    __debugbreak();
  v8 = 0;
  if ( *ColumnValueForRow )
  {
    v9 = "global";
    v10 = 7i64;
    do
    {
      v11 = v9[ColumnValueForRow - "global"];
      v12 = v10;
      v13 = *v9++;
      --v10;
      if ( !v12 )
        break;
      if ( v11 != v13 )
      {
        LowercaseString = SL_FindLowercaseString(ColumnValueForRow);
        if ( LowercaseString )
          goto LABEL_26;
        return;
      }
    }
    while ( v11 );
  }
  LowercaseString = 0;
LABEL_26:
  v26 = BG_SpawnGroup_Loot_FindOrAddSet(lootTable, name);
  v15 = BG_SpawnGroup_Loot_FindOrAddSet(lootTable, v6);
  cacheSetCount = lootTable->cacheSetCount;
  v17 = 1;
  v18 = v15;
  if ( (unsigned int)cacheSetCount <= 1 )
  {
LABEL_30:
    if ( (unsigned __int8)cacheSetCount < 0x64u )
    {
      lootTable->cacheSets[cacheSetCount] = v15;
      ++lootTable->cacheSetCount;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8180, 6611i64, lootTable->table->name);
    }
  }
  else
  {
    v19 = &lootTable->cacheSets[1];
    while ( *v19 != v15 )
    {
      ++v17;
      ++v19;
      if ( v17 >= (int)cacheSetCount )
        goto LABEL_30;
    }
  }
  if ( LowercaseString )
  {
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts->spawnGroupLoot.zoneCount )
    {
      v21 = 0i64;
      v22 = 0i64;
      do
      {
        if ( v22 >= 1000 )
          break;
        if ( mapEnts->spawnGroupLoot.zones[v22].name == LowercaseString )
        {
          if ( lootTable->setForZone[v21] )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8290, 6612i64, ColumnValueForRow, name, lootTable->table->name);
          lootTable->setForZone[v21] = v26;
          lootTable->cacheSetForZone[v21] = v18;
          v23 = !I_strempty(v7) && *v7 == 49;
          lootTable->cacheFixedForZone[v21] = v23;
        }
        ++v8;
        ++v21;
        ++v22;
      }
      while ( v8 < mapEnts->spawnGroupLoot.zoneCount );
    }
  }
  else
  {
    if ( lootTable->setForZoneDefault )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE8220, 916i64, name, lootTable->table->name);
    lootTable->setForZoneDefault = v26;
    lootTable->cacheSetForZoneDefault = v18;
  }
}

/*
==============
BG_SpawnGroup_Loot_SetBrAmmoData
==============
*/
void BG_SpawnGroup_Loot_SetBrAmmoData(BG_SpawnGroup_Loot_Table *lootTable, BG_SpawnGroup_AmmoTypes ammoType, const char *errMsg)
{
  __int64 v3; 
  unsigned __int8 ItemDefIndexByName; 

  v3 = ammoType;
  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1466, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  if ( !errMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 1467, ASSERT_TYPE_ASSERT, "(errMsg)", (const char *)&queryFormat, "errMsg") )
    __debugbreak();
  ItemDefIndexByName = BG_SpawnGroup_Loot_FindItemDefIndexByName(lootTable, s_brAmmoDataRefs[v3]);
  if ( ItemDefIndexByName )
  {
    lootTable->ammoMaximums[v3] = lootTable->itemDefs[(unsigned __int64)ItemDefIndexByName].maxStackSize;
  }
  else
  {
    Com_Printf(1, errMsg, s_brAmmoDataRefs[v3]);
    lootTable->ammoMaximums[v3] = 0;
  }
}

/*
==============
BG_SpawnGroup_Loot_Set_AddItem
==============
*/
void BG_SpawnGroup_Loot_Set_AddItem(BG_SpawnGroup_Loot_Table *lootTable, BG_SpawnGroup_Loot_Set *set, const BG_SpawnGroup_Loot_ItemDef *const itemDef, const unsigned __int16 itemChance, bool allowOverrideInSet)
{
  int itemCount; 
  int v10; 
  BG_SpawnGroup_Loot_SetItem *items; 
  const dvar_t *v12; 
  __int64 v13; 

  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 339, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  if ( !set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 340, ASSERT_TYPE_ASSERT, "(set)", (const char *)&queryFormat, "set") )
    __debugbreak();
  if ( !itemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 341, ASSERT_TYPE_ASSERT, "(itemDef)", (const char *)&queryFormat, "itemDef") )
    __debugbreak();
  if ( !itemDef->disabled )
  {
    if ( !set && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_spawngroup_loot_table.cpp", 323, ASSERT_TYPE_ASSERT, "(set)", (const char *)&queryFormat, "set") )
      __debugbreak();
    itemCount = set->itemCount;
    v10 = 0;
    if ( !set->itemCount )
      goto LABEL_18;
    items = set->items;
    while ( items->def != itemDef )
    {
      ++v10;
      ++items;
      if ( v10 >= itemCount )
        goto LABEL_18;
    }
    if ( v10 == -1 )
    {
LABEL_18:
      if ( (unsigned __int16)itemCount < 0xC8u )
      {
        if ( !allowOverrideInSet )
        {
          v12 = DCONST_DVARBOOL_bg_spawngroup_loot_warnOnRarityChanceAdd;
          if ( !DCONST_DVARBOOL_bg_spawngroup_loot_warnOnRarityChanceAdd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_spawngroup_loot_warnOnRarityChanceAdd") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v12);
          if ( v12->current.enabled )
            Com_Printf(29, "[SPAWNGROUP_LOOT] Rarity chance adding item %s to set %s\n", itemDef->name, set->name);
        }
        set->items[set->itemCount].def = itemDef;
        set->items[set->itemCount].chance = itemChance;
        v13 = set->itemCount;
        set->chanceTotal += set->items[v13].chance;
        set->itemCount = v13 + 1;
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CE7490, 913i64, set->name, lootTable->table->name);
      }
    }
    else if ( set->inheritance && allowOverrideInSet )
    {
      set->chanceTotal -= set->items[v10].chance;
      set->items[v10].chance = itemChance;
      set->chanceTotal += itemChance;
    }
  }
}

