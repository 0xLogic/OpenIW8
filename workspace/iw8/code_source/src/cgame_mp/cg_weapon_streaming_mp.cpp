/*
==============
CG_WeaponStreamingMP_GetClientModelCache
==============
*/

CgWeaponStreamingClientModelCache *__fastcall CG_WeaponStreamingMP_GetClientModelCache(const LocalClientNum_t localClientNum)
{
  return ?CG_WeaponStreamingMP_GetClientModelCache@@YAAEAUCgWeaponStreamingClientModelCache@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_AllocateMemory
==============
*/

void __fastcall CG_WeaponStreamingMP_AllocateMemory(HunkUser *hunkUser, const int maxLocalClients)
{
  ?CG_WeaponStreamingMP_AllocateMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_WeaponStreamingMP_Init
==============
*/

void __fastcall CG_WeaponStreamingMP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponStreamingMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_Shutdown
==============
*/

void __fastcall CG_WeaponStreamingMP_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponStreamingMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_AddWeapon
==============
*/

bool __fastcall CG_WeaponStreamingMP_AddWeapon(const Weapon *weapon, const AssetStreamingRequestSource *source, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outRequestList)
{
  return ?CG_WeaponStreamingMP_AddWeapon@@YA_NAEBUWeapon@@AEBW4AssetStreamingRequestSource@@W4AssetStreamingRequestFlags@@AEAU?$CgStreamRequestList@UWeapon@@@@@Z(weapon, source, flags, outRequestList);
}

/*
==============
CG_WeaponStreamingMP_DebugGetHudOutlineInfo
==============
*/

GfxSceneHudOutlineInfo *__fastcall CG_WeaponStreamingMP_DebugGetHudOutlineInfo(GfxSceneHudOutlineInfo *result, unsigned int entnum)
{
  return ?CG_WeaponStreamingMP_DebugGetHudOutlineInfo@@YA?AUGfxSceneHudOutlineInfo@@I@Z(result, entnum);
}

/*
==============
CG_WeaponStreamingMP_LoadWeapons
==============
*/

void __fastcall CG_WeaponStreamingMP_LoadWeapons(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponStreamingMP_LoadWeapons@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_GetScriptableLootCache
==============
*/

CgWeaponStreamingScriptableLootCache *__fastcall CG_WeaponStreamingMP_GetScriptableLootCache(const LocalClientNum_t localClientNum)
{
  return ?CG_WeaponStreamingMP_GetScriptableLootCache@@YAAEAUCgWeaponStreamingScriptableLootCache@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_FreeMemory
==============
*/

void CG_WeaponStreamingMP_FreeMemory(void)
{
  ?CG_WeaponStreamingMP_FreeMemory@@YAXXZ();
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_FriendlyPlayers
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeapons_FriendlyPlayers(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *FriendlyPlayerCache; 

  FriendlyPlayerCache = CG_DistanceCacheMP_GetFriendlyPlayerCache(localClientNum);
  return CG_WeaponStreamingMP_CollectWorldWeaponsForCharactersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___(localClientNum, FriendlyPlayerCache, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_EnemyPlayers
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeapons_EnemyPlayers(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *EnemyPlayerCache; 

  EnemyPlayerCache = CG_DistanceCacheMP_GetEnemyPlayerCache(localClientNum);
  return CG_WeaponStreamingMP_CollectWorldWeaponsForCharactersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___(localClientNum, EnemyPlayerCache, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_FriendlyAgents
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeapons_FriendlyAgents(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *FriendlyAgentCache; 

  FriendlyAgentCache = CG_DistanceCacheMP_GetFriendlyAgentCache(localClientNum);
  return CG_WeaponStreamingMP_CollectWorldWeaponsForCharactersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey___(localClientNum, FriendlyAgentCache, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_EnemyAgents
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeapons_EnemyAgents(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *EnemyAgentCache; 

  EnemyAgentCache = CG_DistanceCacheMP_GetEnemyAgentCache(localClientNum);
  return CG_WeaponStreamingMP_CollectWorldWeaponsForCharactersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey___(localClientNum, EnemyAgentCache, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_Items
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeapons_Items(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey> *ItemCache; 

  ItemCache = CG_DistanceCacheMP_GetItemCache(localClientNum);
  return CG_WeaponStreamingMP_CollectWorldWeaponsForItemsInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_1800_CgDistanceCacheMpCompareKey___(localClientNum, ItemCache, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_ClientModels
==============
*/

bool __fastcall CG_WeaponStreamingMP_CollectWorldWeapons_ClientModels(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  return CG_WeaponStreamingMP_CollectWorldWeaponsForClientModels(localClientNum, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons_ScriptableLoot
==============
*/

bool __fastcall CG_WeaponStreamingMP_CollectWorldWeapons_ScriptableLoot(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  return CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLoot(localClientNum, ring, flags, outWorldWeaponRequestList);
}

/*
==============
CG_WeaponStreamingMP_AddCurrentlyEquippedViewWeapons
==============
*/
char CG_WeaponStreamingMP_AddCurrentlyEquippedViewWeapons(const LocalClientNum_t localClientNum, const playerState_s *ps, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outViewWeaponRequestList)
{
  CgWeaponMap **v5; 
  BgWeaponMap *v8; 
  int v9; 
  const Weapon *ViewmodelWeapon; 
  WeaponSlot *p_slot; 
  BgWeaponHandle *i; 
  Weapon *p_weapon; 
  __int64 v15; 
  __int64 v16; 
  AssetStreamingRequestSource source; 

  v5 = &CgWeaponMap::ms_instance[localClientNum];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = *v5;
  v9 = 0;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 776, ASSERT_TYPE_ASSERT, "( ( weaponMap != nullptr ) )", "( weaponMap ) = %p", NULL) )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(v8, ps);
  source = ASSET_STREAMING_REQUEST_EQUIPPED_VIEW;
  if ( CG_WeaponStreamingMP_AddWeapon(ViewmodelWeapon, &source, flags, outViewWeaponRequestList) )
  {
    p_slot = &ps->weapEquippedData[0].slot;
    for ( i = ps->weaponsEquipped; ; ++i )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v9 >= 0xF )
      {
        LODWORD(v16) = 15;
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      p_weapon = &BgWeaponMap::GetWeaponEntry(v8, i->m_mapEntryId)->weapon;
      if ( p_weapon->weaponIdx )
      {
        if ( *p_slot != WEAPON_SLOT_EXECUTION )
        {
          source = ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW;
          if ( !CG_WeaponStreamingMP_AddWeapon(p_weapon, &source, flags, outViewWeaponRequestList) )
            break;
        }
      }
      ++v9;
      p_slot += 4;
      if ( v9 >= 15 )
        return 1;
    }
  }
  return 0;
}

/*
==============
CG_WeaponStreamingMP_AddWeapon
==============
*/
bool CG_WeaponStreamingMP_AddWeapon(const Weapon *weapon, const AssetStreamingRequestSource *source, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outRequestList)
{
  __int64 v8; 
  unsigned int v9; 
  AssetStreamingPriority v10; 
  AssetStreamingRequestSource v12; 
  int v13; 
  CgWeaponStreamingMpWeaponSortFunctor v14; 

  if ( !BG_WeaponHasStreamedModels(weapon) )
    return 1;
  if ( *source >= (unsigned int)ASSET_STREAMING_REQUEST_SOURCE_COUNT )
  {
    v13 = 8;
    v12 = *source;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( source ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.sourceOrderCounter ) ) + 0 ) )", "source doesn't index ARRAY_COUNT( s_cgWeaponStreaming.sourceOrderCounter )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v8 = *(unsigned int *)source;
  v9 = s_cgWeaponStreaming.sourceOrderCounter[v8];
  s_cgWeaponStreaming.sourceOrderCounter[v8] = v9 + 1;
  v10.raw = Com_Streaming_GetPriority(*source, v9, flags).raw;
  return CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outRequestList, weapon, v10, &v14);
}

/*
==============
CG_WeaponStreamingMP_AddWorldWeaponsForCharacterInfo
==============
*/
char CG_WeaponStreamingMP_AddWorldWeaponsForCharacterInfo(const characterInfo_t *ci, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  int v3; 
  const Weapon *__ptr32 const *i; 
  const Weapon *v8; 
  unsigned int v9; 
  AssetStreamingPriority v10; 
  CgWeaponStreamingMpWeaponSortFunctor v12; 

  v3 = 0;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 248, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  for ( i = CHARACTER_INFO_WEAPON_MEMBERS; ; ++i )
  {
    v8 = (const Weapon *)((char *)ci + *(int *)i);
    if ( BG_WeaponHasStreamedModels(v8) )
    {
      v9 = s_cgWeaponStreaming.sourceOrderCounter[4]++;
      v10.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_EQUIPPED_WORLD, v9, flags).raw;
      if ( !CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outWorldWeaponRequestList, v8, v10, &v12) )
        break;
    }
    if ( (unsigned int)++v3 >= 6 )
      return 1;
  }
  return 0;
}

/*
==============
CG_WeaponStreamingMP_AllocateMemory
==============
*/
void CG_WeaponStreamingMP_AllocateMemory(HunkUser *hunkUser, const int maxLocalClients)
{
  int v4; 
  CgWeaponStreamingGlob *v5; 
  unsigned int WorldWeaponRequestLimit; 
  bool v7; 
  unsigned int ViewWeaponRequestLimit; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1109, ASSERT_TYPE_ASSERT, "( ( hunkUser != nullptr ) )", "( hunkUser ) = %p", NULL) )
    __debugbreak();
  s_maxLocalClients_0 = maxLocalClients;
  v4 = 0;
  if ( maxLocalClients > 0 )
  {
    v5 = &s_cgWeaponStreaming;
    do
    {
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v11) = 2;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      WorldWeaponRequestLimit = CL_Streaming_GetWorldWeaponRequestLimit((const LocalClientNum_t)v4);
      if ( WorldWeaponRequestLimit )
      {
        if ( WorldWeaponRequestLimit <= 0x40 )
          goto LABEL_15;
        LODWORD(v13) = 64;
        LODWORD(v12) = WorldWeaponRequestLimit;
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1123, ASSERT_TYPE_ASSERT, "( maxWorldWeaponRequests ) <= ( ( ((2) * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 16 + (8)) ) )", "%s <= %s\n\t%i, %i", "maxWorldWeaponRequests", "MAX_WORLD_WEAPONS_STREAMED_STATIC", v12, v13);
      }
      else
      {
        LODWORD(v12) = 0;
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1122, ASSERT_TYPE_ASSERT, "( maxWorldWeaponRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxWorldWeaponRequests", "0", v12, 0i64);
      }
      if ( v7 )
        __debugbreak();
LABEL_15:
      ViewWeaponRequestLimit = CL_Streaming_GetViewWeaponRequestLimit((const LocalClientNum_t)v4);
      if ( !ViewWeaponRequestLimit )
      {
        LODWORD(v12) = 0;
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1126, ASSERT_TYPE_ASSERT, "( maxViewWeaponRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxViewWeaponRequests", "0", v12, 0i64);
        goto LABEL_19;
      }
      if ( ViewWeaponRequestLimit > 0x18 )
      {
        LODWORD(v13) = 24;
        LODWORD(v12) = ViewWeaponRequestLimit;
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1127, ASSERT_TYPE_ASSERT, "( maxViewWeaponRequests ) <= ( (24) )", "%s <= %s\n\t%i, %i", "maxViewWeaponRequests", "MAX_VIEW_WEAPONS_STREAMED", v12, v13);
LABEL_19:
        if ( v9 )
          __debugbreak();
      }
      CG_StreamingMP_RequestList_Alloc<Weapon>(hunkUser, &v5->clientData[0].streamingData.worldWeaponRequestList, WorldWeaponRequestLimit);
      CG_StreamingMP_RequestList_Alloc<Weapon>(hunkUser, (CgStreamRequestList<Weapon> *)v5, ViewWeaponRequestLimit);
      ++v4;
      v5 = (CgWeaponStreamingGlob *)((char *)v5 + 7960);
    }
    while ( v4 < maxLocalClients );
  }
}

/*
==============
CG_WeaponStreamingMP_CacheWeaponIcons
==============
*/
void CG_WeaponStreamingMP_CacheWeaponIcons(const LocalClientNum_t localClientNum, const ClStreamingImageUser user, Weapon *weaponBuffer, const unsigned int weaponNum)
{
  __int64 v4; 
  Weapon *v5; 
  ClStreamingImageUser v6; 
  LocalClientNum_t v7; 
  __int64 v8; 
  __int64 v9; 
  const Weapon *v10; 
  unsigned __int16 v11; 
  unsigned int AllWeaponAttachmentsWithIds; 
  WeaponAttachment **v13; 
  __int64 v14; 
  const WeaponAttachment *v15; 
  const char *dynamicAttachmentIcon; 
  unsigned int v17; 
  AttachmentSlot DynamicAttachmentSlot; 
  __int64 v19; 
  unsigned int DynamicAttachmentImageIndex; 
  unsigned __int16 v21; 
  const unsigned int *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v27; 
  __int64 v28; 
  int v30[32]; 
  WeaponAttachment *attachments[30]; 
  unsigned __int8 attachmentIds[40]; 

  v4 = weaponNum;
  v5 = weaponBuffer;
  v6 = user;
  v7 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CacheWeaponIcons");
  CL_Streaming_Images_ClearImages(v7, v6);
  if ( (unsigned int)v7 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB|0x100) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1208, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::DYNAMIC_WEAPON_ICONS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DYNAMIC_WEAPON_ICONS )") )
    __debugbreak();
  if ( (_DWORD)v4 )
  {
    v8 = 0i64;
    v28 = 0i64;
    v9 = v4;
    v27 = v4;
    do
    {
      v10 = &v5[v8];
      v11 = 0;
      if ( v10->weaponIdx < BG_GetNumWeapons() )
      {
        if ( BG_IsValidWeapon(v10, 0) && v10->weaponIdx )
        {
          AllWeaponAttachmentsWithIds = BG_GetAllWeaponAttachmentsWithIds(v10, (const WeaponAttachment **)attachments, attachmentIds);
          if ( AllWeaponAttachmentsWithIds )
          {
            v13 = attachments;
            v14 = AllWeaponAttachmentsWithIds;
            do
            {
              v15 = *v13;
              if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1174, ASSERT_TYPE_ASSERT, "( ( attachment != nullptr ) )", "( attachment ) = %p", NULL) )
                __debugbreak();
              dynamicAttachmentIcon = v15->dynamicAttachmentIcon;
              if ( dynamicAttachmentIcon && *dynamicAttachmentIcon )
              {
                v17 = 0;
                DynamicAttachmentSlot = BG_GetDynamicAttachmentSlot((const DynamicAttachmentType)v15->dynamicAttachmentType);
                v19 = DynamicAttachmentSlot;
                if ( DynamicAttachmentSlot != ATT_SLOT_OTHER )
                {
                  if ( (unsigned int)DynamicAttachmentSlot >= (ATT_SLOT_OTHER_COUNT|ATT_SLOT_PRIMARY_COUNT) )
                  {
                    LODWORD(v24) = 29;
                    LODWORD(v23) = DynamicAttachmentSlot;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1186, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentSlot ) < (unsigned)( ( sizeof( *array_counter( weapon.attachmentVariationIndices ) ) + 0 ) )", "attachmentSlot doesn't index ARRAY_COUNT( weapon.attachmentVariationIndices )\n\t%i not in [0, %i)", v23, v24) )
                      __debugbreak();
                  }
                  v17 = v10->attachmentVariationIndices[v19];
                }
                DynamicAttachmentImageIndex = BG_GetDynamicAttachmentImageIndex(v15, v17);
                if ( v11 >= 0x1Du )
                {
                  LODWORD(v24) = 29;
                  LODWORD(v23) = v11;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1190, ASSERT_TYPE_ASSERT, "(unsigned)( iconCount ) < (unsigned)( ( sizeof( *array_counter( outIconImageIndices ) ) + 0 ) )", "iconCount doesn't index outIconImageIndices\n\t%i not in [0, %i)", v23, v24) )
                    __debugbreak();
                }
                v30[v11++] = DynamicAttachmentImageIndex;
              }
              ++v13;
              --v14;
            }
            while ( v14 );
            v7 = localClientNum;
            v6 = user;
            v8 = v28;
            v9 = v27;
          }
        }
        else
        {
          v11 = 0;
        }
        v21 = 0;
        if ( v11 )
        {
          v22 = (const unsigned int *)v30;
          do
          {
            if ( v21 >= 0x1Du )
            {
              LODWORD(v24) = 29;
              LODWORD(v23) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1216, ASSERT_TYPE_ASSERT, "(unsigned)( iconImageArrayIndex ) < (unsigned)( ( sizeof( *array_counter( iconImageIndices ) ) + 0 ) )", "iconImageArrayIndex doesn't index iconImageIndices\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            CL_Streaming_Images_AddImage(v7, v6, *v22);
            ++v21;
            ++v22;
          }
          while ( v21 < v11 );
          v9 = v27;
        }
      }
      v28 = ++v8;
      v27 = --v9;
      v5 = weaponBuffer;
    }
    while ( v9 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_WeaponStreamingMP_CollectViewWeaponsForClientModels
==============
*/
bool CG_WeaponStreamingMP_CollectViewWeaponsForClientModels(const LocalClientNum_t localClientNum, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outViewWeaponRequestList)
{
  const dvar_t *v7; 
  bool result; 
  unsigned int v10; 
  bool v11; 
  const Weapon *Weapon; 
  unsigned int v15; 
  AssetStreamingPriority v16; 
  bool v17; 
  unsigned int iteratorPrevIndex; 
  unsigned int clientModelCount; 
  CgWeaponStreamingMpWeaponSortFunctor v22; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  v7 = DVARBOOL_cg_weaponStreaming_enableWorldClientModels;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldClientModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldClientModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectViewWeaponsForClientModels");
    _RDI = CG_WeaponStreamingMP_GetClientModelCache(localClientNum);
    if ( _RDI->iteratorPrevIndex > _RDI->clientModelCount )
    {
      clientModelCount = _RDI->clientModelCount;
      iteratorPrevIndex = _RDI->iteratorPrevIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 589, ASSERT_TYPE_ASSERT, "( clientModelCache.iteratorPrevIndex ) <= ( clientModelCache.clientModelCount )", "%s <= %s\n\t%i, %i", "clientModelCache.iteratorPrevIndex", "clientModelCache.clientModelCount", iteratorPrevIndex, clientModelCount) )
        __debugbreak();
    }
    v10 = _RDI->iteratorPrevIndex;
    v11 = v10 < _RDI->clientModelCount;
    if ( v10 < _RDI->clientModelCount )
    {
      __asm { vmovss  xmm6, cs:__real@471c4000 }
      do
      {
        _RAX = v10;
        __asm { vcomiss xmm6, dword ptr [rdi+rax*8+4] }
        if ( v11 )
          break;
        Weapon = CG_ClientModel_GetWeapon(localClientNum, _RDI->clientModels[v10].clientModelIndex);
        if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 601, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
          __debugbreak();
        if ( BG_WeaponHasStreamedModels(Weapon) )
        {
          v15 = s_cgWeaponStreaming.sourceOrderCounter[1]++;
          v16.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_PICKUP, v15, flags).raw;
          if ( !CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outViewWeaponRequestList, Weapon, v16, &v22) )
          {
            _RDI->iteratorPrevIndex = v10;
            v17 = 0;
            goto LABEL_19;
          }
        }
        v11 = ++v10 < _RDI->clientModelCount;
      }
      while ( v10 < _RDI->clientModelCount );
    }
    _RDI->iteratorPrevIndex = v10;
    v17 = 1;
LABEL_19:
    Sys_ProfEndNamedEvent();
    result = v17;
  }
  else
  {
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return result;
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeapons
==============
*/
void CG_WeaponStreamingMP_CollectWorldWeapons(const LocalClientNum_t localClientNum, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgDistanceCacheMpRing v5; 
  playerState_s *p_predictedPlayerState; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *FriendlyPlayerCache; 
  bool (__fastcall **v15)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  bool (__fastcall *v16)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  CgDistanceCacheMpRing v17; 
  bool (__fastcall **v18)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  bool (__fastcall *v19)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  bool (__fastcall **v20)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  bool (__fastcall *v21)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  CgDistanceCacheMpRing v22; 
  bool (__fastcall **v23)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  bool (__fastcall *v24)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgStreamRequestList<Weapon> *); 
  __int64 v25; 
  __int64 v26; 

  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectWorldWeapons");
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v5 = CG_DISTANCE_CACHE_RING_0;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 817, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 820, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 823, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, p_predictedPlayerState->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 826, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  if ( CG_WeaponStreamingMP_AddWorldWeaponsForCharacterInfo(CharacterInfo, ASSET_STREAMING_REQUEST_FLAGS_NEAR_WORLD_MODEL|ASSET_STREAMING_REQUEST_FLAGS_LOCAL_CLIENT, outWorldWeaponRequestList) )
  {
    CG_WeaponStreamingMP_ResetClientModelCacheIterator((const LocalClientNum_t)v3);
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v26) = 2;
      LODWORD(v25) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    s_cgWeaponStreaming.sourceOrderCounter[1990 * v3 - 1992] = 0;
    v9 = DVARINT_party_teamCount;
    if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    if ( integer < 2 )
      goto LABEL_42;
    v11 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.integer / integer;
    v13 = DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization;
    if ( !DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMaxTeamSizeForBoostedTeammatePrioritization") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v12 > v13->current.integer )
    {
LABEL_42:
      v20 = CG_WEAPON_STREAMING_RING_0_STRATEGY;
      v21 = CG_WEAPON_STREAMING_RING_0_STRATEGY[0];
      if ( CG_WEAPON_STREAMING_RING_0_STRATEGY[0] )
      {
        while ( v21((const LocalClientNum_t)v3, CG_DISTANCE_CACHE_RING_0, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, outWorldWeaponRequestList) )
        {
          v21 = *++v20;
          if ( !*v20 )
            goto LABEL_45;
        }
      }
      else
      {
LABEL_45:
        v22 = CG_DISTANCE_CACHE_RING_1;
        while ( 1 )
        {
          v23 = CG_WEAPON_STREAMING_RING_N_STRATEGY;
          v24 = CG_WEAPON_STREAMING_RING_N_STRATEGY[0];
          if ( CG_WEAPON_STREAMING_RING_N_STRATEGY[0] )
            break;
LABEL_49:
          if ( (unsigned __int16)++v22 >= CG_DISTANCE_CACHE_RING_COUNT )
          {
LABEL_50:
            CG_WeaponStreamingMP_CollectWorldWeaponsFromWeaponMap((const LocalClientNum_t)v3, ASSET_STREAMING_REQUEST_FLAGS_WEAPON_MAP, outWorldWeaponRequestList);
            goto LABEL_51;
          }
        }
        while ( v24((const LocalClientNum_t)v3, v22, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, outWorldWeaponRequestList) )
        {
          v24 = *++v23;
          if ( !*v23 )
            goto LABEL_49;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        FriendlyPlayerCache = CG_DistanceCacheMP_GetFriendlyPlayerCache((const LocalClientNum_t)v3);
        if ( !CG_WeaponStreamingMP_CollectWorldWeaponsForCharactersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v3, FriendlyPlayerCache, v5, ASSET_STREAMING_REQUEST_FLAGS_IMPORTANT_TEAMMATE, outWorldWeaponRequestList) )
          break;
        if ( (unsigned __int16)++v5 >= CG_DISTANCE_CACHE_RING_COUNT )
        {
          v15 = CG_WEAPON_STREAMING_RING_0_BOOSTED_TEAMMATES_STRATEGY;
          v16 = CG_WEAPON_STREAMING_RING_0_BOOSTED_TEAMMATES_STRATEGY[0];
          if ( CG_WEAPON_STREAMING_RING_0_BOOSTED_TEAMMATES_STRATEGY[0] )
          {
            while ( v16((const LocalClientNum_t)v3, CG_DISTANCE_CACHE_RING_0, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, outWorldWeaponRequestList) )
            {
              v16 = *++v15;
              if ( !*v15 )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            v17 = CG_DISTANCE_CACHE_RING_1;
            while ( 1 )
            {
              v18 = CG_WEAPON_STREAMING_RING_N_BOOSTED_TEAMMATES_STRATEGY;
              v19 = CG_WEAPON_STREAMING_RING_N_BOOSTED_TEAMMATES_STRATEGY[0];
              if ( CG_WEAPON_STREAMING_RING_N_BOOSTED_TEAMMATES_STRATEGY[0] )
                break;
LABEL_40:
              if ( (unsigned __int16)++v17 >= CG_DISTANCE_CACHE_RING_COUNT )
                goto LABEL_50;
            }
            while ( v19((const LocalClientNum_t)v3, v17, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, outWorldWeaponRequestList) )
            {
              v19 = *++v18;
              if ( !*v18 )
                goto LABEL_40;
            }
          }
          break;
        }
      }
    }
  }
LABEL_51:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeaponsForClientModels
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeaponsForClientModels(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags inFlags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const dvar_t *v14; 
  bool result; 
  unsigned int i; 
  char v25; 
  bool v26; 
  bool v29; 
  int v30; 
  __int32 v31; 
  const Weapon *Weapon; 
  unsigned int v33; 
  AssetStreamingPriority v34; 
  bool v35; 
  unsigned int iteratorPrevIndex; 
  unsigned int clientModelCount; 
  CgWeaponStreamingMpWeaponSortFunctor v43; 
  __int64 v44; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v14 = DVARBOOL_cg_weaponStreaming_enableWorldClientModels;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldClientModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldClientModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectWorldWeaponsForClientModels");
    *(double *)&_XMM0 = CG_DistanceCacheMP_GetRingRadiusSq(ring);
    __asm { vmovaps xmm9, xmm0 }
    _R14 = CG_WeaponStreamingMP_GetClientModelCache(localClientNum);
    if ( _R14->iteratorPrevIndex > _R14->clientModelCount )
    {
      clientModelCount = _R14->clientModelCount;
      iteratorPrevIndex = _R14->iteratorPrevIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 631, ASSERT_TYPE_ASSERT, "( clientModelCache.iteratorPrevIndex ) <= ( clientModelCache.clientModelCount )", "%s <= %s\n\t%i, %i", "clientModelCache.iteratorPrevIndex", "clientModelCache.clientModelCount", iteratorPrevIndex, clientModelCount) )
        __debugbreak();
    }
    for ( i = _R14->iteratorPrevIndex; i < _R14->clientModelCount; ++i )
    {
      _RSI = i;
      __asm
      {
        vmovss  xmm8, dword ptr [r14+rsi*8+4]
        vcomiss xmm8, xmm9
      }
      if ( i > _R14->clientModelCount )
        break;
      _RBX = DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization;
      if ( !DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMaxDistanceForNearWorldModelPrioritization") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm7, xmm0, xmm0
      }
      _RBX = DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization;
      if ( !DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMinDistanceForFarWorldModelPrioritization") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm6, xmm0, xmm0
        vcomiss xmm6, xmm7
      }
      if ( v25 | v26 )
      {
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_streaming_mp_inline.h", 327, ASSERT_TYPE_ASSERT, "(streamingMinDistanceSqForFarWorldModelPrioritization > streamingMaxDistanceSqForNearWorldModelPrioritization)", (const char *)&queryFormat, "streamingMinDistanceSqForFarWorldModelPrioritization > streamingMaxDistanceSqForNearWorldModelPrioritization");
        v25 = 0;
        v26 = !v29;
        if ( v29 )
          __debugbreak();
      }
      __asm { vcomiss xmm8, xmm7 }
      if ( v25 | v26 )
      {
        v30 = 8;
      }
      else
      {
        __asm { vcomiss xmm8, xmm6 }
        v30 = 16;
      }
      v31 = inFlags | v30;
      Weapon = CG_ClientModel_GetWeapon(localClientNum, _R14->clientModels[i].clientModelIndex);
      if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 649, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
        __debugbreak();
      if ( BG_WeaponHasStreamedModels(Weapon) )
      {
        v33 = s_cgWeaponStreaming.sourceOrderCounter[4]++;
        v34.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_EQUIPPED_WORLD, v33, (const AssetStreamingRequestFlags)v31).raw;
        if ( !CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outWorldWeaponRequestList, Weapon, v34, &v43) )
        {
          v35 = 0;
          goto LABEL_32;
        }
      }
    }
    v35 = 1;
LABEL_32:
    _R14->iteratorPrevIndex = i;
    Sys_ProfEndNamedEvent();
    result = v35;
  }
  else
  {
    result = 1;
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLoot
==============
*/
bool CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLoot(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags inFlags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  __int64 v9; 
  const dvar_t *v10; 
  bool result; 
  int v13; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  const BG_SpawnGroup_Loot_Table *v16; 
  const CgWeaponMap *Instance; 
  unsigned int iteratorPrevIndex; 
  bool i; 
  int RequestFlagsForDistanceSq; 
  bool v23; 
  char *fmt; 
  CgStreamRequestList<Weapon> *outWorldWeaponRequestLista; 
  __int64 v27; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  v9 = localClientNum;
  v10 = DVARBOOL_cg_weaponStreaming_enableWorldScriptableLoot;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldScriptableLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldScriptableLoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLoot");
    *(double *)&_XMM0 = CG_DistanceCacheMP_GetRingRadiusSq(ring);
    __asm { vmovaps xmm6, xmm0 }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(v27) = 2;
      LODWORD(outWorldWeaponRequestLista) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", outWorldWeaponRequestLista, v27) )
        __debugbreak();
    }
    if ( s_cgWeaponStreaming.sourceOrderCounter[1990 * v9 - 1994] != s_cgWeaponStreaming.sourceOrderCounter[1990 * v9 - 1993] )
    {
      v13 = Sys_Milliseconds();
      if ( v13 - dword_148C65034 > 2000 )
      {
        LODWORD(fmt) = 600;
        Com_PrintWarning(14, "WARNING: Client %u requests %u loot weapons. This exceeds CgWeaponStreamingScriptableLootCache's max capacity MAX_SCRIPTABLE_LOOT_CHESTS (%u)\n", (unsigned int)v9, s_cgWeaponStreaming.sourceOrderCounter[1990 * v9 - 1993], fmt);
        dword_148C65034 = v13;
      }
    }
    _RDI = CG_WeaponStreamingMP_GetScriptableLootCache((const LocalClientNum_t)v9);
    LootTable = ScriptableCl_GetLootTable((const LocalClientNum_t)v9);
    v16 = LootTable;
    if ( LootTable && LootTable->weaponMapCopied )
    {
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v9);
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 741, ASSERT_TYPE_ASSERT, "( ( weaponMap != nullptr ) )", "( weaponMap ) = %p", NULL) )
        __debugbreak();
      if ( _RDI->iteratorPrevIndex > _RDI->chestCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 743, ASSERT_TYPE_ASSERT, "( scriptableLootCache.iteratorPrevIndex ) <= ( scriptableLootCache.chestCount )", "%s <= %s\n\t%i, %i", "scriptableLootCache.iteratorPrevIndex", "scriptableLootCache.chestCount", _RDI->iteratorPrevIndex, _RDI->chestCount) )
        __debugbreak();
      iteratorPrevIndex = _RDI->iteratorPrevIndex;
      for ( i = iteratorPrevIndex <= _RDI->chestCount; iteratorPrevIndex < _RDI->chestCount; i = ++iteratorPrevIndex <= _RDI->chestCount )
      {
        _RSI = iteratorPrevIndex;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+rsi*8+4]; distanceSq
          vcomiss xmm0, xmm6
        }
        if ( !i )
          break;
        RequestFlagsForDistanceSq = CG_StreamingMP_GetRequestFlagsForDistanceSq(*(double *)&_XMM0);
        if ( !CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLootChest((const LocalClientNum_t)v9, Instance, v16, (const AssetStreamingRequestFlags)(inFlags | RequestFlagsForDistanceSq), _RDI->chestInfo[iteratorPrevIndex].scriptableInstanceIndex, outWorldWeaponRequestList) )
        {
          v23 = 0;
          goto LABEL_26;
        }
      }
      _RDI->iteratorPrevIndex = iteratorPrevIndex;
    }
    v23 = 1;
LABEL_26:
    Sys_ProfEndNamedEvent();
    result = v23;
  }
  else
  {
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return result;
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLootChest
==============
*/
char CG_WeaponStreamingMP_CollectWorldWeaponsForScriptableLootChest(const LocalClientNum_t localClientNum, const CgWeaponMap *const weaponMap, const BG_SpawnGroup_Loot_Table *const lootTable, const AssetStreamingRequestFlags flags, const unsigned int scriptableInstanceIndex, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  unsigned int v9; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned __int8 cacheTypeIndex; 
  const BG_SpawnGroup_Loot_CacheType *CacheType; 
  unsigned __int8 v13; 
  const BG_SpawnGroup_Loot_Cache *Cache; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned __int8 itemDefCount; 
  const WeaponMapEntry *WeaponEntry; 
  const Weapon *p_weapon; 
  unsigned int v20; 
  AssetStreamingPriority v21; 
  __int64 v23; 
  __int64 v24; 
  CgWeaponStreamingMpWeaponSortFunctor v25; 
  AssetStreamingRequestFlags flagsa; 

  flagsa = flags;
  if ( !lootTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 667, ASSERT_TYPE_ASSERT, "( ( lootTable != nullptr ) )", "( lootTable ) = %p", NULL) )
    __debugbreak();
  if ( !lootTable->weaponMapCopied && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 668, ASSERT_TYPE_ASSERT, "(lootTable->weaponMapCopied)", (const char *)&queryFormat, "lootTable->weaponMapCopied") )
    __debugbreak();
  v9 = scriptableInstanceIndex;
  if ( !ScriptableCl_IsLootCache(localClientNum, scriptableInstanceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 669, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsLootCache( localClientNum, scriptableInstanceIndex ))", (const char *)&queryFormat, "ScriptableCl_IsLootCache( localClientNum, scriptableInstanceIndex )") )
    __debugbreak();
  LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, v9);
  if ( !LootItemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 672, ASSERT_TYPE_ASSERT, "(lootCacheItemDef)", (const char *)&queryFormat, "lootCacheItemDef") )
    __debugbreak();
  cacheTypeIndex = LootItemDef->cacheTypeIndex;
  if ( !cacheTypeIndex )
    return 1;
  CacheType = ScriptableCl_GetCacheType(localClientNum, cacheTypeIndex);
  if ( !CacheType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 681, ASSERT_TYPE_ASSERT, "(cacheType)", (const char *)&queryFormat, "cacheType") )
    __debugbreak();
  v13 = 0;
  if ( !CacheType->cacheSetCount )
    return 1;
  while ( 1 )
  {
    Cache = ScriptableCl_GetCache(localClientNum, v9, v13);
    if ( !Cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 686, ASSERT_TYPE_ASSERT, "(cache)", (const char *)&queryFormat, "cache") )
      __debugbreak();
    v15 = 0;
    if ( Cache->itemCount )
      break;
LABEL_32:
    if ( ++v13 >= CacheType->cacheSetCount )
      return 1;
    v9 = scriptableInstanceIndex;
  }
  while ( 1 )
  {
    v16 = Cache->items[v15];
    itemDefCount = lootTable->itemDefCount;
    if ( v16 >= itemDefCount )
    {
      LODWORD(v24) = itemDefCount;
      LODWORD(v23) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( lootTable->itemDefCount )", "itemDefIndex doesn't index lootTable->itemDefCount\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( v16 >= 0xC8u )
    {
      LODWORD(v24) = 200;
      LODWORD(v23) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 693, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( ( sizeof( *array_counter( lootTable->itemDefs ) ) + 0 ) )", "itemDefIndex doesn't index lootTable->itemDefs\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    WeaponEntry = BgWeaponMap::GetWeaponEntry(&weaponMap->BgWeaponMap, lootTable->itemDefs[(unsigned __int64)v16].weaponIndex);
    p_weapon = &WeaponEntry->weapon;
    if ( WeaponEntry->weapon.weaponIdx )
    {
      if ( BG_WeaponHasStreamedModels(&WeaponEntry->weapon) )
      {
        v20 = s_cgWeaponStreaming.sourceOrderCounter[4]++;
        v21.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_EQUIPPED_WORLD, v20, flagsa).raw;
        if ( !CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outWorldWeaponRequestList, p_weapon, v21, &v25) )
          return 0;
      }
    }
    if ( ++v15 >= Cache->itemCount )
      goto LABEL_32;
  }
}

/*
==============
CG_WeaponStreamingMP_CollectWorldWeaponsFromWeaponMap
==============
*/
char CG_WeaponStreamingMP_CollectWorldWeaponsFromWeaponMap(const LocalClientNum_t localClientNum, const AssetStreamingRequestFlags flags, CgStreamRequestList<Weapon> *outWorldWeaponRequestList)
{
  const dvar_t *v6; 
  CgWeaponMap *Instance; 
  unsigned __int16 v9; 
  unsigned __int16 i; 
  unsigned __int16 v11; 
  Weapon *p_weapon; 
  unsigned int v13; 
  AssetStreamingPriority v14; 
  char v15; 
  CgWeaponStreamingMpWeaponSortFunctor v16; 

  v6 = DVARBOOL_cg_weaponStreaming_enableWorldWeaponMap;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldWeaponMap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 1;
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectWorldWeaponsFromWeaponMap");
  Instance = CgWeaponMap::GetInstance(localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 863, ASSERT_TYPE_ASSERT, "( ( weaponMap != nullptr ) )", "( weaponMap ) = %p", NULL) )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v9 = BgWeaponMap::ms_runtimeSize;
  for ( i = 1; i < v9; ++i )
  {
    if ( !Instance->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v11 = truncate_cast<unsigned short,unsigned int>(i);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v11 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( Instance->m_entries[v11].index == v11 )
    {
      p_weapon = &BgWeaponMap::GetWeaponEntry(Instance, i)->weapon;
      if ( BG_WeaponHasStreamedModels(p_weapon) )
      {
        v13 = s_cgWeaponStreaming.sourceOrderCounter[4]++;
        v14.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_EQUIPPED_WORLD, v13, flags).raw;
        if ( !CG_StreamingMP_RequestList_AddRequest_Weapon_CgWeaponStreamingMpWeaponSortFunctor_(outWorldWeaponRequestList, p_weapon, v14, &v16) )
        {
          v15 = 0;
          goto LABEL_29;
        }
      }
    }
  }
  v15 = 1;
LABEL_29:
  Sys_ProfEndNamedEvent();
  return v15;
}

/*
==============
CG_WeaponStreamingMP_ComputeClientModelCache
==============
*/
void CG_WeaponStreamingMP_ComputeClientModelCache(const LocalClientNum_t localClientNum)
{
  const dvar_t *v6; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int bits; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int index; 
  __int64 v29; 
  __int64 v30; 
  CgWeaponStreamingMpClientModelSortFunctor v31; 
  BitArrayIterator outIter; 
  vec3_t outOrg; 
  __int64 v34; 
  vec3_t outOrigin; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  v34 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v6 = DVARBOOL_cg_weaponStreaming_enableWorldClientModels;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldClientModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldClientModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_ComputeClientModelCache");
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 383, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
      __debugbreak();
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _RSI = CG_WeaponStreamingMP_GetClientModelCache(localClientNum);
    *(_QWORD *)&_RSI->clientModelCount = 0i64;
    CG_ClientModel_GetStreamingWeaponIterator(localClientNum, &outIter);
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+57h+outOrg+8]
      vmovss  xmm7, dword ptr [rbp+57h+outOrg+4]
      vmovss  xmm8, dword ptr [rbp+57h+outOrg]
    }
    while ( 1 )
    {
      bits = outIter.bits;
      LODWORD(v13) = outIter.wordIndex;
      if ( !outIter.bits )
        break;
LABEL_12:
      v14 = __lzcnt(bits);
      outIter.index = v14 + 32 * v13;
      if ( v14 >= 0x20 )
      {
        LODWORD(v30) = 32;
        LODWORD(v29) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
        bits = outIter.bits;
      }
      if ( (bits & (0x80000000 >> v14)) == 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        bits = outIter.bits;
      }
      outIter.bits = ~(0x80000000 >> v14) & bits;
      index = outIter.index;
      CG_ClientModel_GetOrigin(localClientNum, outIter.index, &outOrigin, (scr_string_t)0);
      __asm
      {
        vsubss  xmm2, xmm8, dword ptr [rbp+57h+outOrigin]
        vsubss  xmm0, xmm7, dword ptr [rbp+57h+outOrigin+4]
        vsubss  xmm3, xmm6, dword ptr [rbp+57h+outOrigin+8]
      }
      _RAX = _RSI->clientModelCount;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsi+rax*8+4], xmm2
      }
      _RSI->clientModels[_RAX].clientModelIndex = index;
      ++_RSI->clientModelCount;
    }
    while ( 1 )
    {
      v13 = (unsigned int)(v13 + 1);
      outIter.wordIndex = v13;
      if ( (unsigned int)v13 >= outIter.wordCount )
        break;
      bits = outIter.bitArray[v13];
      outIter.bits = bits;
      if ( bits )
        goto LABEL_12;
    }
    std::_Sort_unchecked<CgWeaponStreamingClientModelInfo *,CgWeaponStreamingMpClientModelSortFunctor>(_RSI->clientModels, &_RSI->clientModels[_RSI->clientModelCount], _RSI->clientModelCount, v31);
    memset(&outOrg, 0, sizeof(outOrg));
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_WeaponStreamingMP_ComputeScriptableLootCache
==============
*/
void CG_WeaponStreamingMP_ComputeScriptableLootCache(const LocalClientNum_t localClientNum)
{
  __int64 v8; 
  const dvar_t *v10; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int Count; 
  unsigned int v14; 
  unsigned int v19; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  char v32; 
  char v33; 
  const dvar_t *v36; 
  ScriptableInstanceContextSecure *v37; 
  const char *v42; 
  CgWeaponStreamingMpScriptableLootSortFunctor v51; 
  unsigned int outFirstUsablePartIndex; 
  __int64 v53; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  v53 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  v8 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RBX = &s_cgWeaponStreaming.sourceOrderCounter[1990 * v8 - 3194];
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_ComputeScriptableLootCache");
  *((_QWORD *)_RBX + 600) = 0i64;
  _RBX[1202] = 0;
  v10 = DVARBOOL_cg_weaponStreaming_enableWorldScriptableLoot;
  if ( !DVARBOOL_cg_weaponStreaming_enableWorldScriptableLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_enableWorldScriptableLoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    LootTable = ScriptableCl_GetLootTable((const LocalClientNum_t)v8);
    if ( LootTable )
    {
      if ( LootTable->weaponMapCopied )
      {
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v8);
        if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 481, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
          __debugbreak();
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        Count = ScriptableCl_Spatial_ActiveList_GetCount((const LocalClientNum_t)v8);
        v14 = 0;
        if ( Count )
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rsp+108h+outOrg+8]
            vmovss  xmm9, dword ptr [rsp+108h+outOrg+4]
            vmovss  xmm10, dword ptr [rsp+108h+outOrg]
            vmovss  xmm11, cs:__real@3f000000
          }
          do
          {
            v19 = ScriptableCl_Spatial_ActiveList_GetAtIndex((const LocalClientNum_t)v8, v14);
            outFirstUsablePartIndex = 0;
            if ( ScriptableCl_IsLootCache((const LocalClientNum_t)v8, v19) )
            {
              _RBP = DVARFLT_cg_weaponStreaming_scriptableLootRadius;
              if ( !DVARFLT_cg_weaponStreaming_scriptableLootRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreaming_scriptableLootRadius") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RBP);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+28h]
                vmulss  xmm6, xmm0, xmm0
              }
              InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v8, v19);
              ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, v19, &outOrg);
              __asm
              {
                vsubss  xmm2, xmm10, dword ptr [rsp+108h+outOrg]
                vsubss  xmm0, xmm9, dword ptr [rsp+108h+outOrg+4]
                vsubss  xmm3, xmm8, dword ptr [rsp+108h+outOrg+8]
                vmulss  xmm1, xmm0, xmm0
                vmulss  xmm0, xmm2, xmm2
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm7, xmm2, xmm1
                vcomiss xmm7, xmm6
              }
              if ( v32 | v33 )
              {
                if ( ScriptableCl_IsScriptableUsable((const LocalClientNum_t)v8, v19, &outFirstUsablePartIndex) )
                {
                  ++_RBX[1201];
                  _RAX = _RBX[1200];
                  if ( (unsigned int)_RAX < 0x258 )
                  {
                    _RBP = (unsigned int)_RAX;
                    __asm { vmovss  dword ptr [rbx+rax*8+4], xmm7 }
                    _RBX[2 * _RAX] = v19;
                    ++_RBX[1200];
                    v36 = DCONST_DVARINT_cg_drawWeaponStreaming;
                    if ( !DCONST_DVARINT_cg_drawWeaponStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWeaponStreaming") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v36);
                    if ( v36->current.integer == 1 )
                    {
                      v37 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v8, _RBX[2 * _RBP]);
                      ScriptableInstanceContextSecure::GetOrigin(v37, _RBX[2 * _RBP], &outOrigin);
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx+rbp*8+4]
                        vsqrtss xmm0, xmm0, xmm0
                        vcvtss2sd xmm2, xmm0, xmm0
                        vmovq   r8, xmm2
                      }
                      v42 = j_va("%u: %f", _RBX[2 * _RBP], _R8);
                      __asm { vmovaps xmm2, xmm11; scale }
                      CL_AddDebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, v42, 0, 1);
                    }
                  }
                }
              }
            }
            ++v14;
          }
          while ( v14 < Count );
        }
        std::_Sort_unchecked<CgWeaponStreamingScriptableLootChestInfo *,CgWeaponStreamingMpScriptableLootSortFunctor>((CgWeaponStreamingScriptableLootChestInfo *)&s_cgWeaponStreaming.sourceOrderCounter[1990 * v8 - 3194], (CgWeaponStreamingScriptableLootChestInfo *)&_RBX[2 * _RBX[1200]], _RBX[1200], v51);
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v56;
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
CG_WeaponStreamingMP_DebugDrawDistanceCacheEntry
==============
*/
void CG_WeaponStreamingMP_DebugDrawDistanceCacheEntry(const LocalClientNum_t localClientNum, unsigned int entNum)
{
  __int64 v2; 
  const dvar_t *v4; 
  centity_t *Entity; 
  const char *v6; 
  __int64 duration; 
  __int64 v9; 
  vec3_t outOrigin; 

  v2 = entNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(duration) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v9) )
      __debugbreak();
  }
  v4 = DCONST_DVARINT_cg_drawWeaponStreaming;
  if ( !DCONST_DVARINT_cg_drawWeaponStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWeaponStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 1 )
  {
    Entity = CG_GetEntity(localClientNum, v2);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 273, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
      __debugbreak();
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v6 = j_va("%i: %i", s_sortOrderCounter_0, (unsigned int)v2);
    __asm { vmovss  xmm2, cs:__real@3f000000; scale }
    CL_AddDebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, v6, 0, 1);
  }
  s_sortOrderLookupTable_0[v2] = ++s_sortOrderCounter_0;
}

/*
==============
CG_WeaponStreamingMP_DebugGetHudOutlineInfo
==============
*/
GfxSceneHudOutlineInfo *CG_WeaponStreamingMP_DebugGetHudOutlineInfo(GfxSceneHudOutlineInfo *result, unsigned int entnum)
{
  __int64 v2; 
  bool v5; 
  unsigned int HudOutlineColor; 
  __int64 v10; 
  __int64 v11; 

  v2 = entnum;
  _RBX = result;
  if ( entnum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1476, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entnum, 2048) )
      __debugbreak();
    LODWORD(v11) = 2048;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1477, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( sizeof( *array_counter( s_sortOrderLookupTable ) ) + 0 ) )", "entnum doesn't index ARRAY_COUNT( s_sortOrderLookupTable )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_0.color }
  v5 = s_sortOrderLookupTable_0[v2] == 0;
  __asm { vmovups ymmword ptr [rbx], ymm0 }
  _RBX->characterEVOffset = NULL_HUDOUTLINE_INFO_0.characterEVOffset;
  if ( !v5 )
  {
    HudOutlineColor = CG_Utils_GetHudOutlineColor(4u);
    _RDI = DVARFLT_r_hudOutlineWidth;
    _RBX->color = HudOutlineColor;
    *(_WORD *)&_RBX->drawOccludedPixels = 257;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcvttss2si eax, dword ptr [rdi+28h] }
    _RBX->lineWidth = _EAX;
    _RBX->renderMode = 0;
    _RBX->fill = 1;
  }
  return _RBX;
}

/*
==============
CG_WeaponStreamingMP_DevReset
==============
*/
void CG_WeaponStreamingMP_DevReset()
{
  LocalClientNum_t i; 
  const CgStreamRequestList<Weapon> *p_viewWeaponRequestList; 
  Weapon *cgRequests; 
  size_t v3; 
  Weapon *v4; 
  size_t v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  for ( i = LOCAL_CLIENT_0; i < s_maxLocalClients_0; ++i )
  {
    if ( (unsigned int)i >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v8) = 2;
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1064, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
      LODWORD(v9) = 2;
      LODWORD(v7) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    p_viewWeaponRequestList = &s_cgWeaponStreaming.clientData[i].streamingData.viewWeaponRequestList;
    CG_StreamingMP_RequestList_Validate<Weapon>(p_viewWeaponRequestList + 1);
    DebugWipe(p_viewWeaponRequestList[1].cgRequests, 60i64 * p_viewWeaponRequestList[1].maxRequestCount);
    DebugWipe(p_viewWeaponRequestList[1].clRequests, 60i64 * p_viewWeaponRequestList[1].maxRequestCount);
    DebugWipe(p_viewWeaponRequestList[1].priorities, 4i64 * p_viewWeaponRequestList[1].maxRequestCount);
    cgRequests = p_viewWeaponRequestList[1].cgRequests;
    v3 = 60i64 * p_viewWeaponRequestList[1].maxRequestCount;
    p_viewWeaponRequestList[1].requestCount = 0;
    memset_0(cgRequests, 0, v3);
    CG_StreamingMP_RequestList_Validate<Weapon>(p_viewWeaponRequestList);
    DebugWipe(p_viewWeaponRequestList->cgRequests, 60i64 * p_viewWeaponRequestList->maxRequestCount);
    DebugWipe(p_viewWeaponRequestList->clRequests, 60i64 * p_viewWeaponRequestList->maxRequestCount);
    DebugWipe(p_viewWeaponRequestList->priorities, 4i64 * p_viewWeaponRequestList->maxRequestCount);
    v4 = p_viewWeaponRequestList->cgRequests;
    v5 = 60i64 * p_viewWeaponRequestList->maxRequestCount;
    p_viewWeaponRequestList->requestCount = 0;
    memset_0(v4, 0, v5);
    CL_Streaming_Images_ClearImages(i, CL_STREAMING_IMAGE_USER_VIEW_WEAPON_UI_ICONS);
    CL_Streaming_Images_ClearImages(i, CL_STREAMING_IMAGE_USER_WORLD_WEAPON_UI_ICONS);
  }
}

/*
==============
CG_WeaponStreamingMP_FreeMemory
==============
*/
void CG_WeaponStreamingMP_FreeMemory(void)
{
  ClStreamingRequest **p_clRequests; 
  int v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  p_clRequests = &s_cgWeaponStreaming.clientData[0].streamingData.worldWeaponRequestList.clRequests;
  v1 = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    *(p_clRequests - 1) = NULL;
    ++v1;
    *p_clRequests = NULL;
    p_clRequests[1] = NULL;
    *(p_clRequests - 2) = NULL;
    *(p_clRequests - 5) = NULL;
    *(p_clRequests - 4) = NULL;
    *(p_clRequests - 3) = NULL;
    *(p_clRequests - 6) = NULL;
    p_clRequests += 995;
    v2 = (unsigned int)v1 < 2;
  }
  while ( v1 < 2 );
}

/*
==============
CG_WeaponStreamingMP_GetClientModelCache
==============
*/
CgWeaponStreamingClientModelCache *CG_WeaponStreamingMP_GetClientModelCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (CgWeaponStreamingClientModelCache *)&s_cgWeaponStreaming.sourceOrderCounter[1990 * v1 - 3964];
}

/*
==============
CG_WeaponStreamingMP_GetScriptableLootCache
==============
*/
CgWeaponStreamingScriptableLootCache *CG_WeaponStreamingMP_GetScriptableLootCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (CgWeaponStreamingScriptableLootCache *)&s_cgWeaponStreaming.sourceOrderCounter[1990 * v1 - 3194];
}

/*
==============
CG_WeaponStreamingMP_GetStreamingData
==============
*/
CgWeaponStreamingData *CG_WeaponStreamingMP_GetStreamingData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (CgWeaponStreamingData *)((char *)&s_cgWeaponStreaming + 7960 * v1);
}

/*
==============
CG_WeaponStreamingMP_Init
==============
*/
void CG_WeaponStreamingMP_Init(const LocalClientNum_t localClientNum)
{
  Cmd_AddCommandInternal("cg_weaponStreaming_reset", CG_WeaponStreamingMP_DevReset, &CG_WeaponStreamingMP_DevReset_VAR);
  CG_WeaponStreamingMP_ResetClient(localClientNum);
}

/*
==============
CG_WeaponStreamingMP_LoadWeapons
==============
*/
void CG_WeaponStreamingMP_LoadWeapons(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  CgWeaponStreamingData *StreamingData; 
  unsigned int v4; 
  unsigned int WorldWeaponRequestLimit; 
  bool v6; 
  unsigned int ViewWeaponRequestLimit; 
  bool v8; 
  CgGlobalsMP *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v11; 
  unsigned int i; 
  void (__fastcall *converterFn)(const Weapon *, AssetStreamingPriority, ClStreamingRequest *); 
  void (__fastcall *converterFna)(const Weapon *, AssetStreamingPriority, ClStreamingRequest *); 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  CgWeaponStreamingAttachmentIconIterator iter; 
  CgStreamRequestList<Weapon> outViewWeaponRequestList; 
  CgStreamRequestList<Weapon> requestList; 
  __int64 v21; 
  char v22[96]; 
  char mem[256]; 
  char v24[1440]; 
  char v25[1440]; 
  char v26[3840]; 
  char v27[3848]; 

  v21 = -2i64;
  v2 = DCONST_DVARBOOL_cg_weaponStreamingEnabled;
  if ( !DCONST_DVARBOOL_cg_weaponStreamingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponStreamingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v15) = 2;
      LODWORD(converterFn) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", converterFn, v15) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_LoadWeapons");
    DebugWipe(mem, 0x100ui64);
    DebugWipe(v22, 0x60ui64);
    DebugWipe(v26, 0xF00ui64);
    DebugWipe(v24, 0x5A0ui64);
    DebugWipe(v27, 0xF00ui64);
    DebugWipe(v25, 0x5A0ui64);
    StreamingData = CG_WeaponStreamingMP_GetStreamingData(localClientNum);
    CG_StreamingMP_RequestList_Validate<Weapon>(&StreamingData->worldWeaponRequestList);
    CG_StreamingMP_RequestList_Validate<Weapon>(&StreamingData->viewWeaponRequestList);
    v4 = 0;
    s_sortOrderCounter_0 = 0;
    memset_0(s_sortOrderLookupTable_0, 0, 0x800ui64);
    WorldWeaponRequestLimit = CL_Streaming_GetWorldWeaponRequestLimit(localClientNum);
    if ( WorldWeaponRequestLimit )
    {
      if ( WorldWeaponRequestLimit <= 0x40 )
        goto LABEL_14;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1398, ASSERT_TYPE_ASSERT, "( maxWorldWeaponRequests ) <= ( ( ((2) * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 16 + (8)) ) )", "%s <= %s\n\t%i, %i", "maxWorldWeaponRequests", "MAX_WORLD_WEAPONS_STREAMED_STATIC", WorldWeaponRequestLimit, 64);
    }
    else
    {
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1397, ASSERT_TYPE_ASSERT, "( maxWorldWeaponRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxWorldWeaponRequests", "0", 0, 0i64);
    }
    if ( v6 )
      __debugbreak();
LABEL_14:
    ViewWeaponRequestLimit = CL_Streaming_GetViewWeaponRequestLimit(localClientNum);
    if ( ViewWeaponRequestLimit )
    {
      if ( ViewWeaponRequestLimit <= 0x18 )
      {
LABEL_20:
        requestList.requestCount = 0;
        requestList.cgRequests = (Weapon *)v26;
        requestList.clRequests = (ClStreamingRequest *)v27;
        requestList.priorities = (AssetStreamingPriority *)mem;
        requestList.maxRequestCount = WorldWeaponRequestLimit;
        CG_StreamingMP_RequestList_Validate<Weapon>(&requestList);
        outViewWeaponRequestList.requestCount = 0;
        outViewWeaponRequestList.cgRequests = (Weapon *)v24;
        outViewWeaponRequestList.clRequests = (ClStreamingRequest *)v25;
        outViewWeaponRequestList.priorities = (AssetStreamingPriority *)v22;
        outViewWeaponRequestList.maxRequestCount = ViewWeaponRequestLimit;
        CG_StreamingMP_RequestList_Validate<Weapon>(&outViewWeaponRequestList);
        CG_WeaponStreamingMP_ComputeClientModelCache(localClientNum);
        CG_WeaponStreamingMP_ComputeScriptableLootCache(localClientNum);
        *(_QWORD *)s_cgWeaponStreaming.sourceOrderCounter = 0i64;
        *(_QWORD *)&s_cgWeaponStreaming.sourceOrderCounter[2] = 0i64;
        *(_QWORD *)&s_cgWeaponStreaming.sourceOrderCounter[4] = 0i64;
        *(_QWORD *)&s_cgWeaponStreaming.sourceOrderCounter[6] = 0i64;
        CG_WeaponStreamingMP_CollectWorldWeapons(localClientNum, &requestList);
        if ( CG_StreamingMP_SendRequestsIfAnyAreNew_Weapon_int___cdecl_Weapon_const___Weapon_const____void___cdecl_Weapon_const___AssetStreamingPriority_ClStreamingRequest____(localClientNum, &StreamingData->worldWeaponRequestList, &requestList, STREAM_SYNC_CLIENT_TYPE_WEAPON, BG_WeaponCompare, (void (__fastcall *)(const Weapon *, AssetStreamingPriority, ClStreamingRequest *))CL_Streaming_GetWeaponWorldRequest) )
        {
          CG_StreamingMP_RequestList_Copy_Weapon_(&StreamingData->worldWeaponRequestList, &requestList);
          CG_WeaponStreamingMP_CacheWeaponIcons(localClientNum, CL_STREAMING_IMAGE_USER_WORLD_WEAPON_UI_ICONS, requestList.cgRequests, requestList.requestCount);
        }
        Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_CollectViewWeapons");
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v15) = 2;
          LODWORD(converterFna) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", converterFna, v15) )
            __debugbreak();
        }
        LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
        if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 842, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
          __debugbreak();
        p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
        if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 845, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
          __debugbreak();
        if ( CG_WeaponStreamingMP_AddCurrentlyEquippedViewWeapons(localClientNum, p_predictedPlayerState, ASSET_STREAMING_REQUEST_FLAGS_LOCAL_CLIENT, &outViewWeaponRequestList) )
        {
          CG_WeaponStreamingMP_ResetClientModelCacheIterator(localClientNum);
          CG_WeaponStreamingMP_CollectViewWeaponsForClientModels(localClientNum, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, &outViewWeaponRequestList);
        }
        Sys_ProfEndNamedEvent();
        if ( CG_StreamingMP_SendRequestsIfAnyAreNew_Weapon_int___cdecl_Weapon_const___Weapon_const____void___cdecl_Weapon_const___AssetStreamingPriority_ClStreamingRequest____(localClientNum, &StreamingData->viewWeaponRequestList, &outViewWeaponRequestList, STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, BG_WeaponCompare, (void (__fastcall *)(const Weapon *, AssetStreamingPriority, ClStreamingRequest *))CL_Streaming_GetWeaponViewRequest) )
        {
          CG_StreamingMP_RequestList_Copy_Weapon_(&StreamingData->viewWeaponRequestList, &outViewWeaponRequestList);
          CG_WeaponStreamingMP_CacheWeaponIcons(localClientNum, CL_STREAMING_IMAGE_USER_VIEW_WEAPON_UI_ICONS, outViewWeaponRequestList.cgRequests, outViewWeaponRequestList.requestCount);
        }
        v11 = DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons;
        if ( !DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_devLoadWeaponAttachmentIcons") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "CG_WeaponStreamingMP_LoadDevWeaponAttachmentIcons");
          *(_QWORD *)&iter.weaponIndex = 0i64;
          *(_QWORD *)&iter.attachmentIndex = 0i64;
          for ( i = 0; i < 0xF0; ++i )
          {
            if ( !CG_WeaponStreaming_AttachmentIconIterator_Advance(&iter) )
              break;
            CL_Streaming_Images_AddImage(localClientNum, CL_STREAMING_IMAGE_USER_VIEW_WEAPON_UI_ICONS, iter.imageIndex);
          }
          do
          {
            if ( !CG_WeaponStreaming_AttachmentIconIterator_Advance(&iter) )
              break;
            CL_Streaming_Images_AddImage(localClientNum, CL_STREAMING_IMAGE_USER_WORLD_WEAPON_UI_ICONS, iter.imageIndex);
            ++v4;
          }
          while ( v4 < 0x280 );
          Sys_ProfEndNamedEvent();
        }
        CG_WeaponStreamingMP_StreamWeaponIcons(localClientNum);
        Sys_ProfEndNamedEvent();
        return;
      }
      LODWORD(v17) = 24;
      LODWORD(v16) = ViewWeaponRequestLimit;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1402, ASSERT_TYPE_ASSERT, "( maxViewWeaponRequests ) <= ( (24) )", "%s <= %s\n\t%i, %i", "maxViewWeaponRequests", "MAX_VIEW_WEAPONS_STREAMED", v16, v17);
    }
    else
    {
      LODWORD(v16) = 0;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1401, ASSERT_TYPE_ASSERT, "( maxViewWeaponRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxViewWeaponRequests", "0", v16, 0i64);
    }
    if ( v8 )
      __debugbreak();
    goto LABEL_20;
  }
}

/*
==============
CG_WeaponStreamingMP_ResetClient
==============
*/
void CG_WeaponStreamingMP_ResetClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const CgStreamRequestList<Weapon> *p_viewWeaponRequestList; 
  Weapon *cgRequests; 
  size_t v4; 
  Weapon *v5; 
  size_t v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1064, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v8) = 2;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_viewWeaponRequestList = &s_cgWeaponStreaming.clientData[v1].streamingData.viewWeaponRequestList;
  CG_StreamingMP_RequestList_Validate<Weapon>(p_viewWeaponRequestList + 1);
  DebugWipe(p_viewWeaponRequestList[1].cgRequests, 60i64 * p_viewWeaponRequestList[1].maxRequestCount);
  DebugWipe(p_viewWeaponRequestList[1].clRequests, 60i64 * p_viewWeaponRequestList[1].maxRequestCount);
  DebugWipe(p_viewWeaponRequestList[1].priorities, 4i64 * p_viewWeaponRequestList[1].maxRequestCount);
  cgRequests = p_viewWeaponRequestList[1].cgRequests;
  v4 = 60i64 * p_viewWeaponRequestList[1].maxRequestCount;
  p_viewWeaponRequestList[1].requestCount = 0;
  memset_0(cgRequests, 0, v4);
  CG_StreamingMP_RequestList_Validate<Weapon>(p_viewWeaponRequestList);
  DebugWipe(p_viewWeaponRequestList->cgRequests, 60i64 * p_viewWeaponRequestList->maxRequestCount);
  DebugWipe(p_viewWeaponRequestList->clRequests, 60i64 * p_viewWeaponRequestList->maxRequestCount);
  DebugWipe(p_viewWeaponRequestList->priorities, 4i64 * p_viewWeaponRequestList->maxRequestCount);
  v5 = p_viewWeaponRequestList->cgRequests;
  v6 = 60i64 * p_viewWeaponRequestList->maxRequestCount;
  p_viewWeaponRequestList->requestCount = 0;
  memset_0(v5, 0, v6);
  CL_Streaming_Images_ClearImages((const LocalClientNum_t)v1, CL_STREAMING_IMAGE_USER_VIEW_WEAPON_UI_ICONS);
  CL_Streaming_Images_ClearImages((const LocalClientNum_t)v1, CL_STREAMING_IMAGE_USER_WORLD_WEAPON_UI_ICONS);
}

/*
==============
CG_WeaponStreamingMP_ResetClientModelCacheIterator
==============
*/
void CG_WeaponStreamingMP_ResetClientModelCacheIterator(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  s_cgWeaponStreaming.sourceOrderCounter[1990 * v1 - 3195] = 0;
}

/*
==============
CG_WeaponStreamingMP_Shutdown
==============
*/
void CG_WeaponStreamingMP_Shutdown(const LocalClientNum_t localClientNum)
{
  Cmd_RemoveCommand("cg_weaponStreaming_reset");
}

/*
==============
CG_WeaponStreamingMP_StreamWeaponIcons
==============
*/
void CG_WeaponStreamingMP_StreamWeaponIcons(const LocalClientNum_t localClientNum)
{
  const char *v5; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v14; 
  char v20; 
  char v21; 
  int v26; 
  double v27; 
  double v28; 
  double v29; 
  int v32; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v26 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v26) )
      __debugbreak();
  }
  if ( cls.maxClients <= 0x14u )
  {
    _RBX = DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons;
    if ( DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons )
      goto LABEL_11;
    v5 = "cg_imageHintDistanceWeaponAttachmentIcons";
  }
  else
  {
    _RBX = DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow;
    if ( DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow )
      goto LABEL_11;
    v5 = "cg_imageHintDistanceWeaponAttachmentIconsLow";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
    vmovss  [rsp+78h+arg_0], xmm6
  }
  v8 = (v32 & 0x7F800000u) < 0x7F800000;
  v9 = (v32 & 0x7F800000u) <= 0x7F800000;
  if ( (v32 & 0x7F800000) == 2139095040 )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 51, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )");
    v8 = 0;
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v8 )
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+78h+var_38], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+78h+var_40], xmm1
    }
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 52, ASSERT_TYPE_ASSERT, "( distance ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "distance", "0.f", v27, v29);
    v8 = 0;
    v9 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3ecccccd
    vminss  xmm1, xmm0, cs:__real@3f800000
    vmovss  xmm3, cs:__real@437f0000
    vmulss  xmm2, xmm1, xmm3
    vcomiss xmm2, xmm7
    vcvttss2si ebx, xmm2
  }
  if ( v8 )
    goto LABEL_20;
  __asm { vcomiss xmm2, cs:__real@4b800000 }
  if ( !v9 )
  {
LABEL_20:
    v20 = 0;
    v9 = 1;
  }
  else
  {
    v20 = 1;
  }
  __asm
  {
    vcomiss xmm2, xmm7
    vcomiss xmm2, xmm3
  }
  v21 = v9;
  if ( !v20 || !v21 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+78h+var_40], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)_EBX, v28) )
      __debugbreak();
  }
  CL_Streaming_Images_HintImagesInCache(localClientNum, CL_STREAMING_IMAGE_USER_VIEW_WEAPON_UI_ICONS, (const StreamMiniDistance)_EBX);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  CL_Streaming_Images_HintImagesInCache(localClientNum, CL_STREAMING_IMAGE_USER_WORLD_WEAPON_UI_ICONS, (const StreamMiniDistance)_EBX);
}

/*
==============
CG_WeaponStreaming_AttachmentIconIterator_Advance
==============
*/
char CG_WeaponStreaming_AttachmentIconIterator_Advance(CgWeaponStreamingAttachmentIconIterator *iter)
{
  const WeaponCompleteDef *PointerToWeaponCompleteDefConst; 
  __int64 attachSlotIndex; 
  __int64 attachmentIndex; 
  const WeaponAttachment *v5; 
  unsigned int variantIndex; 
  const char *dynamicAttachmentIcon; 
  unsigned int DynamicAttachmentImageIndex; 
  __int64 v10; 
  __int64 v11; 

  if ( iter->weaponIndex >= BG_GetNumWeapons() )
    return 0;
  while ( 1 )
  {
    if ( iter->weaponIndex >= BG_GetNumWeapons() )
    {
      LODWORD(v11) = BG_GetNumWeapons();
      LODWORD(v10) = iter->weaponIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1252, ASSERT_TYPE_ASSERT, "(unsigned)( iter.weaponIndex ) < (unsigned)( BG_GetNumWeapons() )", "iter.weaponIndex doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    PointerToWeaponCompleteDefConst = BG_GetPointerToWeaponCompleteDefConst(iter->weaponIndex);
    if ( !PointerToWeaponCompleteDefConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1254, ASSERT_TYPE_ASSERT, "( ( weapCompleteDef != nullptr ) )", "( weapCompleteDef ) = %p", NULL) )
      __debugbreak();
    attachSlotIndex = iter->attachSlotIndex;
    if ( (unsigned int)attachSlotIndex < 0xE )
      break;
    ++iter->weaponIndex;
    iter->attachSlotIndex = 0;
LABEL_20:
    if ( iter->weaponIndex >= BG_GetNumWeapons() )
      return 0;
  }
  attachmentIndex = iter->attachmentIndex;
  if ( (unsigned int)attachmentIndex >= PointerToWeaponCompleteDefConst->attachments[attachSlotIndex].attachmentCount )
  {
    *(_QWORD *)&iter->attachSlotIndex = (unsigned int)(attachSlotIndex + 1);
    goto LABEL_20;
  }
  v5 = PointerToWeaponCompleteDefConst->attachments[attachSlotIndex].attachments[attachmentIndex];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapon_streaming_mp.cpp", 1278, ASSERT_TYPE_ASSERT, "( ( attachment != nullptr ) )", "( attachment ) = %p", NULL) )
    __debugbreak();
  variantIndex = iter->variantIndex;
  if ( variantIndex >= v5->numModelVariations )
  {
    ++iter->attachmentIndex;
    iter->variantIndex = 0;
    goto LABEL_20;
  }
  dynamicAttachmentIcon = v5->dynamicAttachmentIcon;
  if ( !dynamicAttachmentIcon || !*dynamicAttachmentIcon )
  {
    iter->variantIndex = variantIndex + 1;
    goto LABEL_20;
  }
  DynamicAttachmentImageIndex = BG_GetDynamicAttachmentImageIndex(v5, variantIndex);
  ++iter->variantIndex;
  iter->imageIndex = DynamicAttachmentImageIndex;
  return 1;
}

