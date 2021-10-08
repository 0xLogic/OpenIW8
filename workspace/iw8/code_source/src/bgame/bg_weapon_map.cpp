/*
==============
BgWeaponMap::PrintMap
==============
*/

void __fastcall BgWeaponMap::PrintMap(BgWeaponMap *this)
{
  ?PrintMap@BgWeaponMap@@QEBAXXZ(this);
}

/*
==============
BgWeaponMap::ComputeRuntimeSize
==============
*/

unsigned __int16 __fastcall BgWeaponMap::ComputeRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount, unsigned __int16 *outIndexBits)
{
  return ?ComputeRuntimeSize@BgWeaponMap@@KAGIPEBDGPEAG@Z(clientCount, mapname, largeDynamicMaxCount, outIndexBits);
}

/*
==============
BgWeaponMap::ComputeRuntimeSize
==============
*/
__int64 BgWeaponMap::ComputeRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount, unsigned __int16 *outIndexBits)
{
  const char *v5; 
  const char **v6; 
  unsigned int v10; 
  __int64 v11; 
  const char *v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  int v16; 
  unsigned __int16 v17; 
  int MinBitCountForNum; 
  unsigned __int16 v19; 
  __int64 v21; 
  __int64 v22; 
  _QWORD v23[7]; 

  v23[1] = "mp_fr_day";
  v5 = "mp_firingrange";
  v23[0] = "mp_firingrange";
  v23[2] = "mp_fr_night02";
  v6 = (const char **)v23;
  v23[3] = "mp_fr_overcast";
  v23[4] = "mp_fr_sunset";
  v10 = 0;
  v23[5] = "mp_fr_night_dk";
  v23[6] = "cp_firingrange";
  while ( 2 )
  {
    v11 = 0x7FFFFFFFi64;
    if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v12 = (const char *)(mapname - v5);
    while ( 1 )
    {
      v13 = v5[(_QWORD)v12];
      v14 = v11;
      v15 = *v5++;
      --v11;
      if ( !v14 )
      {
LABEL_12:
        if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)136) )
          goto LABEL_16;
        v16 = 63;
        goto LABEL_14;
      }
      if ( v13 != v15 )
        break;
      if ( !v13 )
        goto LABEL_12;
    }
    ++v10;
    ++v6;
    if ( v10 < 7 )
    {
      v5 = *v6;
      continue;
    }
    break;
  }
  if ( clientCount <= 0x14 )
  {
    v17 = 255;
    goto LABEL_19;
  }
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)136) )
  {
    v16 = 71;
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.cpp", v16, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_MAP_LARGE_RUNTIME_SIZE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_MAP_LARGE_RUNTIME_SIZE )") )
      __debugbreak();
  }
LABEL_16:
  v17 = largeDynamicMaxCount;
  if ( largeDynamicMaxCount > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.cpp", 91, ASSERT_TYPE_ASSERT, "( runtimeSizeResult ) <= ( BgWeaponMap::MAX_ENTRIES )", "%s <= %s\n\t%u, %u", "runtimeSizeResult", "BgWeaponMap::MAX_ENTRIES", largeDynamicMaxCount, 1023) )
    __debugbreak();
LABEL_19:
  if ( !outIndexBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.cpp", 92, ASSERT_TYPE_ASSERT, "(outIndexBits)", (const char *)&queryFormat, "outIndexBits") )
    __debugbreak();
  MinBitCountForNum = GetMinBitCountForNum(v17);
  v19 = MinBitCountForNum;
  if ( (MinBitCountForNum < 0 || (unsigned int)MinBitCountForNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)MinBitCountForNum, "signed", MinBitCountForNum) )
    __debugbreak();
  if ( v19 > 0xAu )
  {
    LODWORD(v22) = 10;
    LODWORD(v21) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.cpp", 83, ASSERT_TYPE_ASSERT, "( result ) <= ( BgWeaponMap::MAX_MAP_INDEX_BITS )", "%s <= %s\n\t%i, %i", "result", "BgWeaponMap::MAX_MAP_INDEX_BITS", v21, v22) )
      __debugbreak();
  }
  *outIndexBits = v19;
  return v17;
}

/*
==============
BgWeaponMap::PrintMap
==============
*/
void BgWeaponMap::PrintMap(BgWeaponMap *this)
{
  BgWeaponMap *v1; 
  unsigned __int16 v2; 
  __int64 v3; 
  unsigned __int16 v4; 
  WeaponMapEntry *m_entries; 
  int weaponClientLoadout; 
  const Weapon *p_weapon; 
  unsigned __int16 PrimaryAttachmentIndex; 
  int scopeVariation; 
  int weaponOthers; 
  int v11; 
  int v12; 
  int v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  AttachmentSlot v23; 
  AttachmentSlot v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned __int16 v28; 
  AttachmentSlot slot; 
  AttachmentSlot v30; 

  v1 = this;
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.cpp", 106, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v2 = 1;
  v28 = BgWeaponMap::ms_runtimeSize;
  if ( BgWeaponMap::ms_runtimeSize > 1u )
  {
    v3 = 1i64;
    v26 = 1i64;
    do
    {
      if ( !v1->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v25 = v2;
      v4 = truncate_cast<unsigned short,unsigned int>(v2);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      m_entries = v1->m_entries;
      if ( m_entries[v4].index == v4 )
      {
        weaponClientLoadout = m_entries[v3].weapon.weaponClientLoadout;
        p_weapon = &m_entries[v3].weapon;
        slot = ATT_SLOT_VISUAL;
        PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(p_weapon, &slot);
        scopeVariation = p_weapon->scopeVariation;
        weaponOthers = p_weapon->weaponOthers;
        v11 = PrimaryAttachmentIndex;
        v30 = ATT_SLOT_MODIFIER;
        v12 = BG_Weapon_GetPrimaryAttachmentIndex(p_weapon, &v30);
        v23 = ATT_SLOT_UNDERBARREL;
        v13 = BG_Weapon_GetPrimaryAttachmentIndex(p_weapon, &v23);
        v24 = ATT_SLOT_SCOPE;
        LODWORD(v22) = weaponClientLoadout;
        LODWORD(v21) = v11;
        LODWORD(v20) = scopeVariation;
        LODWORD(v19) = weaponOthers;
        LODWORD(v18) = v12;
        LODWORD(v17) = v13;
        LODWORD(v16) = BG_Weapon_GetPrimaryAttachmentIndex(p_weapon, &v24);
        LODWORD(v15) = p_weapon->weaponCamo;
        LODWORD(fmt) = p_weapon->weaponIdx;
        Com_Printf(16, "[%u] :: Entry=%u WeaponIdx=%u WeaponCamo=%u WeaponScope:%u WeaponUnderBarrel:%u WeaponModifier:%u WeaponOthers:%04X ScopeVariation:%04X WeaponVisual:%u WeaponClientLoadout:%04X\n", (unsigned __int16)(v2 - 1), v25, fmt, v15, v16, v17, v18, v19, v20, v21, v22);
        v1 = this;
        v3 = v26;
      }
      ++v3;
      ++v2;
      v26 = v3;
    }
    while ( v2 < v28 );
  }
}

