/*
==============
CG_CustomizationStreamingMP_Shutdown
==============
*/

void __fastcall CG_CustomizationStreamingMP_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_CustomizationStreamingMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CustomizationStreamingMP_FreeMemory
==============
*/

void CG_CustomizationStreamingMP_FreeMemory(void)
{
  ?CG_CustomizationStreamingMP_FreeMemory@@YAXXZ();
}

/*
==============
CG_CustomizationStreamingMP_Init
==============
*/

void __fastcall CG_CustomizationStreamingMP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_CustomizationStreamingMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CustomizationStreamingMP_DebugGetHudOutlineInfo
==============
*/

GfxSceneHudOutlineInfo *__fastcall CG_CustomizationStreamingMP_DebugGetHudOutlineInfo(GfxSceneHudOutlineInfo *result, unsigned int entNum)
{
  return ?CG_CustomizationStreamingMP_DebugGetHudOutlineInfo@@YA?AUGfxSceneHudOutlineInfo@@I@Z(result, entNum);
}

/*
==============
CG_CustomizationStreamingMP_LoadCustomizations
==============
*/

void __fastcall CG_CustomizationStreamingMP_LoadCustomizations(const LocalClientNum_t localClientNum)
{
  ?CG_CustomizationStreamingMP_LoadCustomizations@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CustomizationStreamingMP_AllocateMemory
==============
*/

void __fastcall CG_CustomizationStreamingMP_AllocateMemory(HunkUser *hunkUser, const int maxLocalClients)
{
  ?CG_CustomizationStreamingMP_AllocateMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_CustomizationStreamingMP_CollectCustomizations_FriendlyPlayers
==============
*/
__int64 CG_CustomizationStreamingMP_CollectCustomizations_FriendlyPlayers(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *requestData)
{
  const char *v8; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *FriendlyPlayerCache; 

  v8 = j_va("CG_CustomizationStreamingMP - Friendly Players ring %d", (unsigned __int16)ring);
  Sys_ProfBeginNamedEvent(0xFF808080, v8);
  FriendlyPlayerCache = CG_DistanceCacheMP_GetFriendlyPlayerCache(localClientNum);
  LOBYTE(requestData) = CG_CustomizationStreamingMP_LoadPlayersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___(localClientNum, FriendlyPlayerCache, ring, flags, requestData);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)requestData;
}

/*
==============
CG_CustomizationStreamingMP_CollectCustomizations_EnemyPlayers
==============
*/
__int64 CG_CustomizationStreamingMP_CollectCustomizations_EnemyPlayers(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *requestData)
{
  const char *v8; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *EnemyPlayerCache; 

  v8 = j_va("CG_CustomizationStreamingMP - Enemy Players ring %d", (unsigned __int16)ring);
  Sys_ProfBeginNamedEvent(0xFF808080, v8);
  EnemyPlayerCache = CG_DistanceCacheMP_GetEnemyPlayerCache(localClientNum);
  LOBYTE(requestData) = CG_CustomizationStreamingMP_LoadPlayersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___(localClientNum, EnemyPlayerCache, ring, flags, requestData);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)requestData;
}

/*
==============
CG_CustomizationStreamingMP_CollectCustomizations_AllPlayerCorpses
==============
*/
__int64 CG_CustomizationStreamingMP_CollectCustomizations_AllPlayerCorpses(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *requestData)
{
  const char *v8; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *PlayerCorpseCache; 

  v8 = j_va("CG_CustomizationStreamingMP - Player Corpses ring %d", (unsigned __int16)ring);
  Sys_ProfBeginNamedEvent(0xFF808080, v8);
  PlayerCorpseCache = CG_DistanceCacheMP_GetPlayerCorpseCache(localClientNum);
  LOBYTE(requestData) = CG_CustomizationStreamingMP_LoadPlayerCorpsesInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_8_CgDistanceCacheMpCompareKey___(localClientNum, PlayerCorpseCache, ring, flags, requestData);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)requestData;
}

/*
==============
CG_CustomizationStreamingMP_CollectCustomizations_LowPriorityCorpses
==============
*/
char CG_CustomizationStreamingMP_CollectCustomizations_LowPriorityCorpses(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *requestData)
{
  CgCustomizationStreamingData *v4; 
  CgDistanceCacheMpRing v5; 
  LocalClientNum_t v6; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *PlayerCorpseCache; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *v8; 
  unsigned __int16 nextPageIndex; 
  unsigned __int8 v10; 
  const dvar_t *v11; 
  int v12; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *Page; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v14; 
  const char *v15; 
  const cgs_t *LocalClientStaticGlobals; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v17; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v18; 
  __int64 v19; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v20; 
  unsigned int v22; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 

  v4 = requestData;
  v5 = ring;
  v6 = localClientNum;
  PlayerCorpseCache = CG_DistanceCacheMP_GetPlayerCorpseCache(localClientNum);
  v8 = (OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *)PlayerCorpseCache;
  if ( (unsigned __int16)v5 >= CG_DISTANCE_CACHE_RING_COUNT )
    nextPageIndex = 6;
  else
    nextPageIndex = PlayerCorpseCache->m_linkPageIndices[(unsigned __int16)v5];
  v10 = 0;
  v11 = DVARBOOL_cg_customizationStreaming_highPriorityCorpses;
  if ( !DVARBOOL_cg_customizationStreaming_highPriorityCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationStreaming_highPriorityCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = 0;
    while ( nextPageIndex != 6 )
    {
      Page = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(v8, nextPageIndex);
      v14 = Page;
      if ( v10 >= Page->meta.keyCount )
      {
        if ( Page->meta.nextPageIndex == nextPageIndex )
        {
          LODWORD(v28) = nextPageIndex;
          LODWORD(v27) = Page->meta.nextPageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 130, ASSERT_TYPE_ASSERT, "( page.meta.nextPageIndex ) != ( m_pageIndex )", "%s != %s\n\t%i, %i", "page.meta.nextPageIndex", "m_pageIndex", v27, v28) )
            __debugbreak();
        }
        nextPageIndex = v14->meta.nextPageIndex;
        v10 = 0;
        if ( v14->meta.nextPageIndex >= 6u )
          break;
        OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(v8, v14->meta.nextPageIndex);
        if ( !v14->meta.keyCount )
        {
          LODWORD(v26) = 0;
          LODWORD(v25) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 139, ASSERT_TYPE_ASSERT, "(unsigned)( m_keyIndex ) < (unsigned)( page.meta.keyCount )", "m_keyIndex doesn't index page.meta.keyCount\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        v10 = 1;
      }
      else
      {
        ++v10;
      }
      if ( (unsigned int)++v12 >= 2 )
        break;
    }
    v5 = ring;
    v6 = localClientNum;
    v4 = requestData;
  }
  v15 = j_va("CG_CustomizationStreamingMP - Low Priority Corpses ring %d", (unsigned __int16)v5);
  Sys_ProfBeginNamedEvent(0xFF808080, v15);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(v6);
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 424, ASSERT_TYPE_ASSERT, "( ( cgs != nullptr ) )", "( cgs ) = %p", NULL) )
    __debugbreak();
  while ( nextPageIndex != 6 )
  {
    v17 = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(v8, nextPageIndex);
    v18 = v17;
    if ( v10 >= v17->meta.keyCount )
    {
      if ( v17->meta.nextPageIndex == nextPageIndex )
      {
        LODWORD(v28) = nextPageIndex;
        LODWORD(v27) = v17->meta.nextPageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 130, ASSERT_TYPE_ASSERT, "( page.meta.nextPageIndex ) != ( m_pageIndex )", "%s != %s\n\t%i, %i", "page.meta.nextPageIndex", "m_pageIndex", v27, v28) )
          __debugbreak();
      }
      nextPageIndex = v18->meta.nextPageIndex;
      if ( v18->meta.nextPageIndex >= 6u )
        break;
      v20 = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(v8, v18->meta.nextPageIndex);
      if ( !v18->meta.keyCount )
      {
        LODWORD(v26) = 0;
        LODWORD(v25) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 139, ASSERT_TYPE_ASSERT, "(unsigned)( m_keyIndex ) < (unsigned)( page.meta.keyCount )", "m_keyIndex doesn't index page.meta.keyCount\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v10 = 1;
    }
    else
    {
      v19 = v10++;
      v20 = (const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *)((char *)v17 + 8 * v19);
    }
    _R14 = (unsigned int *)v20->keys;
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 152, ASSERT_TYPE_ASSERT, "( ( m_key != nullptr ) )", "( m_key ) = %p", NULL) )
      __debugbreak();
    v22 = *_R14;
    if ( *_R14 >= 0x800 )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = *_R14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( !CG_CustomizationStreamingMP_LoadPlayerCorpseEntity(v6, LocalClientStaticGlobals, v22, flags, v4) )
    {
      Sys_ProfEndNamedEvent();
      return 0;
    }
    __asm { vmovss  xmm2, dword ptr [r14+4]; distanceSq }
    CG_CustomizationStreamingMP_DebugDrawDistanceCacheEntry(v6, v22, *(const float *)&_XMM2);
  }
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
CG_CustomizationStreamingMP_CollectCustomizations_HighPriorityCorpses
==============
*/
char CG_CustomizationStreamingMP_CollectCustomizations_HighPriorityCorpses(const LocalClientNum_t localClientNum, const CgDistanceCacheMpRing ring, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *requestData)
{
  const dvar_t *v6; 
  const char *v7; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *PlayerCorpseCache; 
  const cgs_t *LocalClientStaticGlobals; 
  int v10; 
  unsigned __int16 nextPageIndex; 
  unsigned __int8 v12; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *Page; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v14; 
  __int64 v15; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *v16; 
  unsigned int v18; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  v6 = DVARBOOL_cg_customizationStreaming_highPriorityCorpses;
  if ( !DVARBOOL_cg_customizationStreaming_highPriorityCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationStreaming_highPriorityCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 1;
  v7 = j_va("CG_CustomizationStreamingMP - High Priority Corpses ring %d", (unsigned __int16)ring);
  Sys_ProfBeginNamedEvent(0xFF808080, v7);
  PlayerCorpseCache = (OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *)CG_DistanceCacheMP_GetPlayerCorpseCache(localClientNum);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 455, ASSERT_TYPE_ASSERT, "( ( cgs != nullptr ) )", "( cgs ) = %p", NULL) )
    __debugbreak();
  v10 = 0;
  if ( (unsigned __int16)ring >= CG_DISTANCE_CACHE_RING_COUNT )
    nextPageIndex = 6;
  else
    nextPageIndex = PlayerCorpseCache->m_linkPageIndices[(unsigned __int16)ring];
  v12 = 0;
  while ( 1 )
  {
    if ( nextPageIndex == 6 )
    {
LABEL_31:
      Sys_ProfEndNamedEvent();
      return 1;
    }
    Page = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(PlayerCorpseCache, nextPageIndex);
    v14 = Page;
    if ( v12 >= Page->meta.keyCount )
    {
      if ( Page->meta.nextPageIndex == nextPageIndex )
      {
        LODWORD(v24) = nextPageIndex;
        LODWORD(v23) = Page->meta.nextPageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 130, ASSERT_TYPE_ASSERT, "( page.meta.nextPageIndex ) != ( m_pageIndex )", "%s != %s\n\t%i, %i", "page.meta.nextPageIndex", "m_pageIndex", v23, v24) )
          __debugbreak();
      }
      nextPageIndex = v14->meta.nextPageIndex;
      if ( v14->meta.nextPageIndex >= 6u )
        goto LABEL_31;
      v16 = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::GetPage(PlayerCorpseCache, v14->meta.nextPageIndex);
      if ( !v14->meta.keyCount )
      {
        LODWORD(v22) = 0;
        LODWORD(v21) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 139, ASSERT_TYPE_ASSERT, "(unsigned)( m_keyIndex ) < (unsigned)( page.meta.keyCount )", "m_keyIndex doesn't index page.meta.keyCount\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v12 = 1;
    }
    else
    {
      v15 = v12++;
      v16 = (const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Page *)((char *)Page + 8 * v15);
    }
    _RSI = (unsigned int *)v16->keys;
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_one_level_skip_list.h", 152, ASSERT_TYPE_ASSERT, "( ( m_key != nullptr ) )", "( m_key ) = %p", NULL) )
      __debugbreak();
    v18 = *_RSI;
    if ( *_RSI >= 0x800 )
    {
      LODWORD(v22) = 2048;
      LODWORD(v21) = *_RSI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( !CG_CustomizationStreamingMP_LoadPlayerCorpseEntity(localClientNum, LocalClientStaticGlobals, v18, flags, requestData) )
      break;
    __asm { vmovss  xmm2, dword ptr [rsi+4]; distanceSq }
    CG_CustomizationStreamingMP_DebugDrawDistanceCacheEntry(localClientNum, v18, *(const float *)&_XMM2);
    if ( (unsigned int)++v10 >= 2 )
      goto LABEL_31;
  }
  Sys_ProfEndNamedEvent();
  return 0;
}

/*
==============
CG_CustomizationStreamingMP_AddWorldModelRequestsForCustomizationInfo
==============
*/
bool CG_CustomizationStreamingMP_AddWorldModelRequestsForCustomizationInfo(const ClientCustomizationInfo *ci, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *outRequestData)
{
  unsigned __int16 ModelIndex; 
  unsigned int v7; 
  AssetStreamingPriority v8; 
  bool v9; 
  unsigned int v10; 
  AssetStreamingPriority v11; 
  bool result; 
  unsigned int v13; 
  std::less<int> v14; 
  unsigned int requestData; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 192, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_BODY, ci);
  v7 = s_cgCustomizationStreaming.sourceOrderCounter[2];
  requestData = ModelIndex;
  ++s_cgCustomizationStreaming.sourceOrderCounter[2];
  v8.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_CLASS_SELECT, v7, flags).raw;
  v9 = CG_StreamingMP_RequestList_AddRequest_unsigned_int_std::less_int___(&outRequestData->bodyRequestList, &requestData, v8, (const std::less<int> *)&v13);
  v13 = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_HEAD, ci);
  v10 = s_cgCustomizationStreaming.sourceOrderCounter[2]++;
  v11.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_CLASS_SELECT, v10, flags).raw;
  result = CG_StreamingMP_RequestList_AddRequest_unsigned_int_std::less_int___(&outRequestData->headRequestList, &v13, v11, &v14);
  if ( v9 || result )
    return 1;
  return result;
}

/*
==============
CG_CustomizationStreamingMP_AllocateMemory
==============
*/
void CG_CustomizationStreamingMP_AllocateMemory(HunkUser *hunkUser, const int maxLocalClients)
{
  int v4; 
  CgStreamRequestList<unsigned int> *p_viewArmsRequestList; 
  unsigned int BodyRequestLimit; 
  bool v7; 
  unsigned int HeadRequestLimit; 
  bool v9; 
  unsigned int ViewArmsRequestLimit; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 591, ASSERT_TYPE_ASSERT, "( ( hunkUser != nullptr ) )", "( hunkUser ) = %p", NULL) )
    __debugbreak();
  s_maxLocalClients = maxLocalClients;
  v4 = 0;
  if ( maxLocalClients > 0 )
  {
    p_viewArmsRequestList = &s_cgCustomizationStreaming.clientData[0].requestData.viewArmsRequestList;
    do
    {
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v13) = 2;
        LODWORD(v12) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgCustomizationStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgCustomizationStreaming.clientData )\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      BodyRequestLimit = CL_Streaming_GetBodyRequestLimit((const LocalClientNum_t)v4);
      if ( BodyRequestLimit )
      {
        if ( BodyRequestLimit <= 0x30 )
          goto LABEL_15;
        LODWORD(v15) = 48;
        LODWORD(v14) = BodyRequestLimit;
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 605, ASSERT_TYPE_ASSERT, "( maxBodyRequests ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxBodyRequests", "MAX_BODIES_STREAMED_STATIC", v14, v15);
      }
      else
      {
        LODWORD(v14) = 0;
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 604, ASSERT_TYPE_ASSERT, "( maxBodyRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxBodyRequests", "0", v14, 0i64);
      }
      if ( v7 )
        __debugbreak();
LABEL_15:
      HeadRequestLimit = CL_Streaming_GetHeadRequestLimit((const LocalClientNum_t)v4);
      if ( HeadRequestLimit )
      {
        if ( HeadRequestLimit <= 0x30 )
          goto LABEL_21;
        LODWORD(v15) = 48;
        LODWORD(v14) = HeadRequestLimit;
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 609, ASSERT_TYPE_ASSERT, "( maxHeadRequests ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxHeadRequests", "MAX_HEADS_STREAMED_STATIC", v14, v15);
      }
      else
      {
        LODWORD(v14) = 0;
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 608, ASSERT_TYPE_ASSERT, "( maxHeadRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxHeadRequests", "0", v14, 0i64);
      }
      if ( v9 )
        __debugbreak();
LABEL_21:
      ViewArmsRequestLimit = CL_Streaming_GetViewArmsRequestLimit((const LocalClientNum_t)v4);
      if ( !ViewArmsRequestLimit )
      {
        LODWORD(v14) = 0;
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 612, ASSERT_TYPE_ASSERT, "( maxViewArmsRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxViewArmsRequests", "0", v14, 0i64);
        goto LABEL_25;
      }
      if ( ViewArmsRequestLimit > 0x14 )
      {
        LODWORD(v15) = 20;
        LODWORD(v14) = ViewArmsRequestLimit;
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 613, ASSERT_TYPE_ASSERT, "( maxViewArmsRequests ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "%s <= %s\n\t%i, %i", "maxViewArmsRequests", "MAX_VIEWARMS_STREAMED_STATIC", v14, v15);
LABEL_25:
        if ( v11 )
          __debugbreak();
      }
      CG_StreamingMP_RequestList_Alloc<unsigned int>(hunkUser, p_viewArmsRequestList - 2, BodyRequestLimit);
      CG_StreamingMP_RequestList_Alloc<unsigned int>(hunkUser, p_viewArmsRequestList - 1, HeadRequestLimit);
      CG_StreamingMP_RequestList_Alloc<unsigned int>(hunkUser, p_viewArmsRequestList, ViewArmsRequestLimit);
      ++v4;
      p_viewArmsRequestList += 3;
    }
    while ( v4 < maxLocalClients );
  }
}

/*
==============
CG_CustomizationStreamingMP_CollectWorldAndViewModelsForClientNum
==============
*/
bool CG_CustomizationStreamingMP_CollectWorldAndViewModelsForClientNum(const CgStatic *const cgameStatic, const int clientNum, CgCustomizationStreamingData *outRequestData, const AssetStreamingRequestFlags flags)
{
  const clientInfo_t *v8; 
  const ClientCustomizationInfo *p_customization; 
  unsigned __int16 ModelIndex; 
  unsigned int v11; 
  unsigned int v12; 
  AssetStreamingPriority v13; 
  bool v14; 
  unsigned int v15; 
  AssetStreamingPriority v16; 
  bool v17; 
  unsigned __int16 ViewhandIndexForBody; 
  unsigned int v19; 
  AssetStreamingPriority v20; 
  bool result; 
  std::less<int> v22; 
  unsigned int requestData[8]; 
  unsigned int v24; 
  std::less<int> v25; 

  if ( !cgameStatic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 305, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
    __debugbreak();
  v8 = cgameStatic->GetClientInfo(cgameStatic, (unsigned int)clientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 308, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  p_customization = &v8->customization;
  ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_BODY, p_customization);
  v11 = s_cgCustomizationStreaming.sourceOrderCounter[2];
  v12 = ModelIndex;
  requestData[0] = ModelIndex;
  ++s_cgCustomizationStreaming.sourceOrderCounter[2];
  v13.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_CLASS_SELECT, v11, flags).raw;
  v14 = CG_StreamingMP_RequestList_AddRequest_unsigned_int_std::less_int___(&outRequestData->bodyRequestList, requestData, v13, (const std::less<int> *)&v24);
  v24 = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_HEAD, p_customization);
  v15 = s_cgCustomizationStreaming.sourceOrderCounter[2]++;
  v16.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_CLASS_SELECT, v15, flags).raw;
  v17 = CG_StreamingMP_RequestList_AddRequest_unsigned_int_std::less_int___(&outRequestData->headRequestList, &v24, v16, &v25);
  ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(v12);
  v19 = s_cgCustomizationStreaming.sourceOrderCounter[7];
  v24 = ViewhandIndexForBody;
  ++s_cgCustomizationStreaming.sourceOrderCounter[7];
  v20.raw = Com_Streaming_GetPriority(ASSET_STREAMING_REQUEST_EQUIPPED_VIEW, v19, flags).raw;
  result = CG_StreamingMP_RequestList_AddRequest_unsigned_int_std::less_int___(&outRequestData->viewArmsRequestList, &v24, v20, &v22);
  if ( v14 || v17 || result )
    return 1;
  return result;
}

/*
==============
CG_CustomizationStreamingMP_ConvertBodyRequestToClStreamingRequest
==============
*/
void CG_CustomizationStreamingMP_ConvertBodyRequestToClStreamingRequest(const unsigned int *modelIndex, const AssetStreamingPriority priority, ClStreamingRequest *const outRequest)
{
  CL_Streaming_GetCustomizationRequest(CUSTOMIZATION_TYPE_BODY, *modelIndex, priority, outRequest);
}

/*
==============
CG_CustomizationStreamingMP_ConvertHeadRequestToClStreamingRequest
==============
*/
void CG_CustomizationStreamingMP_ConvertHeadRequestToClStreamingRequest(const unsigned int *modelIndex, const AssetStreamingPriority priority, ClStreamingRequest *const outRequest)
{
  CL_Streaming_GetCustomizationRequest(CUSTOMIZATION_TYPE_HEAD, *modelIndex, priority, outRequest);
}

/*
==============
CG_CustomizationStreamingMP_ConvertViewArmsRequestToClStreamingRequest
==============
*/
void CG_CustomizationStreamingMP_ConvertViewArmsRequestToClStreamingRequest(const unsigned int *modelIndex, const AssetStreamingPriority priority, ClStreamingRequest *const outRequest)
{
  CL_Streaming_GetCustomizationRequest(CUSTOMIZATION_TYPE_VIEWHANDS, *modelIndex, priority, outRequest);
}

/*
==============
CG_CustomizationStreamingMP_DebugDrawDistanceCacheEntry
==============
*/

void __fastcall CG_CustomizationStreamingMP_DebugDrawDistanceCacheEntry(const LocalClientNum_t localClientNum, const unsigned int entnum, double distanceSq)
{
  __int64 v4; 
  __int64 v5; 
  const dvar_t *v7; 
  CgEntitySystem *v8; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const char *v26; 
  __int64 duration; 
  __int64 v30; 
  vec3_t xyz; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  v4 = localClientNum;
  v5 = entnum;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v30) = 2048;
    LODWORD(duration) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v30) )
      __debugbreak();
  }
  v7 = DCONST_DVARINT_cg_drawCustomizationStreaming;
  if ( !DCONST_DVARINT_cg_drawCustomizationStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCustomizationStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 1 )
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v30) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v30) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v30) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v30) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v30) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v30) )
        __debugbreak();
    }
    v8 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v30) = 2048;
      LODWORD(duration) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v30) )
        __debugbreak();
    }
    p_pose = &v8->m_entities[(int)v5].pose;
    if ( !p_pose )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 137, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
    }
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, &xyz);
    if ( p_pose->isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rsp+88h+xyz]
        vmovd   xmm2, dword ptr [rsp+88h+xyz+4]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovd   xmm2, dword ptr [rsp+88h+xyz+8]
        vmovss  dword ptr [rsp+88h+xyz], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+88h+xyz+4], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+88h+xyz+8], xmm1
      }
    }
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    v26 = j_va("[%i]: entity %d, distanceSq %f", s_sortOrderCounter, (unsigned int)v5, _R9);
    __asm { vmovss  xmm2, cs:__real@3f000000; scale }
    CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v26, 0, 1);
  }
  s_sortOrderLookupTable[v5] = ++s_sortOrderCounter;
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
CG_CustomizationStreamingMP_DebugGetHudOutlineInfo
==============
*/
GfxSceneHudOutlineInfo *CG_CustomizationStreamingMP_DebugGetHudOutlineInfo(GfxSceneHudOutlineInfo *result, unsigned int entNum)
{
  GfxSceneHudOutlineInfo *v2; 
  unsigned int HudOutlineColor; 

  v2 = result;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO.color
    vmovups ymmword ptr [rcx], ymm0
  }
  result->characterEVOffset = NULL_HUDOUTLINE_INFO.characterEVOffset;
  if ( s_sortOrderLookupTable[entNum] )
  {
    HudOutlineColor = CG_Utils_GetHudOutlineColor(5u);
    _RDI = DVARFLT_r_hudOutlineWidth;
    v2->color = HudOutlineColor;
    *(_WORD *)&v2->drawOccludedPixels = 257;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcvttss2si eax, dword ptr [rdi+28h] }
    v2->lineWidth = _EAX;
    v2->renderMode = 0;
    v2->fill = 1;
  }
  return v2;
}

/*
==============
CG_CustomizationStreamingMP_DevReset
==============
*/
void CG_CustomizationStreamingMP_DevReset()
{
  unsigned int i; 
  const CgStreamRequestList<unsigned int> *p_bodyRequestList; 
  __int64 v2; 
  __int64 v3; 

  for ( i = 0; i < s_maxLocalClients; ++i )
  {
    if ( i >= 2 )
    {
      LODWORD(v3) = 2;
      LODWORD(v2) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgCustomizationStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgCustomizationStreaming.clientData )\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    p_bodyRequestList = &s_cgCustomizationStreaming.clientData[i].requestData.bodyRequestList;
    CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList);
    DebugWipe(p_bodyRequestList->cgRequests, 4i64 * p_bodyRequestList->maxRequestCount);
    DebugWipe(p_bodyRequestList->clRequests, 60i64 * p_bodyRequestList->maxRequestCount);
    DebugWipe(p_bodyRequestList->priorities, 4i64 * p_bodyRequestList->maxRequestCount);
    p_bodyRequestList->requestCount = 0;
    CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList + 1);
    DebugWipe(p_bodyRequestList[1].cgRequests, 4i64 * p_bodyRequestList[1].maxRequestCount);
    DebugWipe(p_bodyRequestList[1].clRequests, 60i64 * p_bodyRequestList[1].maxRequestCount);
    DebugWipe(p_bodyRequestList[1].priorities, 4i64 * p_bodyRequestList[1].maxRequestCount);
    p_bodyRequestList[1].requestCount = 0;
    CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList + 2);
    DebugWipe(p_bodyRequestList[2].cgRequests, 4i64 * p_bodyRequestList[2].maxRequestCount);
    DebugWipe(p_bodyRequestList[2].clRequests, 60i64 * p_bodyRequestList[2].maxRequestCount);
    DebugWipe(p_bodyRequestList[2].priorities, 4i64 * p_bodyRequestList[2].maxRequestCount);
    p_bodyRequestList[2].requestCount = 0;
    if ( p_bodyRequestList->maxRequestCount > 0x30 )
    {
      LODWORD(v3) = 48;
      LODWORD(v2) = p_bodyRequestList->maxRequestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 552, ASSERT_TYPE_ASSERT, "( streamingData.bodyRequestList.maxRequestCount ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "streamingData.bodyRequestList.maxRequestCount not in [0, MAX_BODIES_STREAMED_STATIC]\n\t%u not in [0, %u]", v2, v3) )
        __debugbreak();
    }
    if ( p_bodyRequestList[1].maxRequestCount > 0x30 )
    {
      LODWORD(v3) = 48;
      LODWORD(v2) = p_bodyRequestList[1].maxRequestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 553, ASSERT_TYPE_ASSERT, "( streamingData.headRequestList.maxRequestCount ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "streamingData.headRequestList.maxRequestCount not in [0, MAX_HEADS_STREAMED_STATIC]\n\t%u not in [0, %u]", v2, v3) )
        __debugbreak();
    }
    if ( p_bodyRequestList[2].maxRequestCount > 0x14 )
    {
      LODWORD(v3) = 20;
      LODWORD(v2) = p_bodyRequestList[2].maxRequestCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 554, ASSERT_TYPE_ASSERT, "( streamingData.viewArmsRequestList.maxRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "streamingData.viewArmsRequestList.maxRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v2, v3) )
        __debugbreak();
    }
  }
}

/*
==============
CG_CustomizationStreamingMP_FreeMemory
==============
*/
void CG_CustomizationStreamingMP_FreeMemory(void)
{
  ClStreamingRequest **p_clRequests; 
  int v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  p_clRequests = &s_cgCustomizationStreaming.clientData[0].requestData.headRequestList.clRequests;
  v1 = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 2;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgCustomizationStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgCustomizationStreaming.clientData )\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    *(p_clRequests - 5) = NULL;
    ++v1;
    *(p_clRequests - 4) = NULL;
    *(p_clRequests - 3) = NULL;
    *(p_clRequests - 6) = NULL;
    *(p_clRequests - 1) = NULL;
    *p_clRequests = NULL;
    p_clRequests[1] = NULL;
    *(p_clRequests - 2) = NULL;
    p_clRequests[3] = NULL;
    p_clRequests[4] = NULL;
    p_clRequests[5] = NULL;
    p_clRequests[2] = NULL;
    p_clRequests += 12;
    v2 = (unsigned int)v1 < 2;
  }
  while ( v1 < 2 );
}

/*
==============
CG_CustomizationStreamingMP_GetStreamingData
==============
*/
CgCustomizationStreamingData *CG_CustomizationStreamingMP_GetStreamingData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgCustomizationStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgCustomizationStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (CgCustomizationStreamingData *)((char *)&s_cgCustomizationStreaming + 96 * v1);
}

/*
==============
CG_CustomizationStreamingMP_Init
==============
*/
void CG_CustomizationStreamingMP_Init(const LocalClientNum_t localClientNum)
{
  Cmd_AddCommandInternal("cg_customizationStreaming_reset", CG_CustomizationStreamingMP_DevReset, &CG_CustomizationStreamingMP_DevReset_VAR);
  CG_CustomizationStreamingMP_ResetClient(localClientNum);
}

/*
==============
CG_CustomizationStreamingMP_LoadCustomizations
==============
*/
void CG_CustomizationStreamingMP_LoadCustomizations(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  CgCustomizationStreamingData *StreamingData; 
  unsigned int BodyRequestLimit; 
  bool v5; 
  unsigned int HeadRequestLimit; 
  bool v7; 
  unsigned int ViewArmsRequestLimit; 
  bool v9; 
  void (__fastcall *converterFn)(const unsigned int *, AssetStreamingPriority, ClStreamingRequest *); 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  std::minus<int> v14[16]; 
  CgCustomizationStreamingData requestList; 
  __int64 v16; 
  char v17; 
  char v18; 
  char v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23; 
  char v24; 
  char v25; 

  v16 = -2i64;
  v2 = DCONST_DVARBOOL_cg_customizationStreamingEnabled;
  if ( !DCONST_DVARBOOL_cg_customizationStreamingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationStreamingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v11) = 2;
      LODWORD(converterFn) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 655, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", converterFn, v11) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFF808080, "CG_CustomizationStreamingMP_LoadCustomizations");
    StreamingData = CG_CustomizationStreamingMP_GetStreamingData(localClientNum);
    CG_StreamingMP_RequestList_Validate<unsigned int>(&StreamingData->bodyRequestList);
    CG_StreamingMP_RequestList_Validate<unsigned int>(&StreamingData->headRequestList);
    CG_StreamingMP_RequestList_Validate<unsigned int>(&StreamingData->viewArmsRequestList);
    s_sortOrderCounter = 0;
    memset_0(s_sortOrderLookupTable, 0, 0x800ui64);
    BodyRequestLimit = CL_Streaming_GetBodyRequestLimit(localClientNum);
    if ( BodyRequestLimit )
    {
      if ( BodyRequestLimit <= 0x30 )
        goto LABEL_14;
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 671, ASSERT_TYPE_ASSERT, "( maxBodyRequests ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxBodyRequests", "MAX_BODIES_STREAMED_STATIC", BodyRequestLimit, 48);
    }
    else
    {
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 670, ASSERT_TYPE_ASSERT, "( maxBodyRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxBodyRequests", "0", 0, 0i64);
    }
    if ( v5 )
      __debugbreak();
LABEL_14:
    HeadRequestLimit = CL_Streaming_GetHeadRequestLimit(localClientNum);
    if ( HeadRequestLimit )
    {
      if ( HeadRequestLimit <= 0x30 )
        goto LABEL_20;
      LODWORD(v13) = 48;
      LODWORD(v12) = HeadRequestLimit;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 675, ASSERT_TYPE_ASSERT, "( maxHeadRequests ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "%s <= %s\n\t%i, %i", "maxHeadRequests", "MAX_HEADS_STREAMED_STATIC", v12, v13);
    }
    else
    {
      LODWORD(v12) = 0;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 674, ASSERT_TYPE_ASSERT, "( maxHeadRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxHeadRequests", "0", v12, 0i64);
    }
    if ( v7 )
      __debugbreak();
LABEL_20:
    ViewArmsRequestLimit = CL_Streaming_GetViewArmsRequestLimit(localClientNum);
    if ( ViewArmsRequestLimit )
    {
      if ( ViewArmsRequestLimit <= 0x14 )
      {
LABEL_26:
        requestList.bodyRequestList.requestCount = 0;
        requestList.bodyRequestList.cgRequests = (unsigned int *)&v19;
        requestList.bodyRequestList.clRequests = (ClStreamingRequest *)&v24;
        requestList.bodyRequestList.priorities = (AssetStreamingPriority *)&v20;
        requestList.bodyRequestList.maxRequestCount = BodyRequestLimit;
        CG_StreamingMP_RequestList_Validate<unsigned int>(&requestList.bodyRequestList);
        requestList.headRequestList.requestCount = 0;
        requestList.headRequestList.cgRequests = (unsigned int *)&v21;
        requestList.headRequestList.clRequests = (ClStreamingRequest *)&v25;
        requestList.headRequestList.priorities = (AssetStreamingPriority *)&v22;
        requestList.headRequestList.maxRequestCount = HeadRequestLimit;
        CG_StreamingMP_RequestList_Validate<unsigned int>(&requestList.headRequestList);
        requestList.viewArmsRequestList.requestCount = 0;
        requestList.viewArmsRequestList.cgRequests = (unsigned int *)&v17;
        requestList.viewArmsRequestList.clRequests = (ClStreamingRequest *)&v23;
        requestList.viewArmsRequestList.priorities = (AssetStreamingPriority *)&v18;
        requestList.viewArmsRequestList.maxRequestCount = ViewArmsRequestLimit;
        CG_StreamingMP_RequestList_Validate<unsigned int>(&requestList.viewArmsRequestList);
        *(_QWORD *)s_cgCustomizationStreaming.sourceOrderCounter = 0i64;
        *(_QWORD *)&s_cgCustomizationStreaming.sourceOrderCounter[2] = 0i64;
        *(_QWORD *)&s_cgCustomizationStreaming.sourceOrderCounter[4] = 0i64;
        *(_QWORD *)&s_cgCustomizationStreaming.sourceOrderCounter[6] = 0i64;
        CG_CustomizationStreamingMP_LoadCustomizationsInternal(localClientNum, &requestList);
        if ( CG_StreamingMP_SendRequestsIfAnyAreNew_unsigned_int_std::minus_int__void___cdecl_unsigned_int_const___AssetStreamingPriority_ClStreamingRequest____(localClientNum, &StreamingData->bodyRequestList, &requestList.bodyRequestList, STREAM_SYNC_CLIENT_TYPE_BODY, v14, (void (__fastcall *)(const unsigned int *, AssetStreamingPriority, ClStreamingRequest *))CG_CustomizationStreamingMP_ConvertBodyRequestToClStreamingRequest) )
          CG_StreamingMP_RequestList_Copy_unsigned_int_(&StreamingData->bodyRequestList, &requestList.bodyRequestList);
        if ( CG_StreamingMP_SendRequestsIfAnyAreNew_unsigned_int_std::minus_int__void___cdecl_unsigned_int_const___AssetStreamingPriority_ClStreamingRequest____(localClientNum, &StreamingData->headRequestList, &requestList.headRequestList, STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL, v14, (void (__fastcall *)(const unsigned int *, AssetStreamingPriority, ClStreamingRequest *))CG_CustomizationStreamingMP_ConvertHeadRequestToClStreamingRequest) )
          CG_StreamingMP_RequestList_Copy_unsigned_int_(&StreamingData->headRequestList, &requestList.headRequestList);
        if ( CG_StreamingMP_SendRequestsIfAnyAreNew_unsigned_int_std::minus_int__void___cdecl_unsigned_int_const___AssetStreamingPriority_ClStreamingRequest____(localClientNum, &StreamingData->viewArmsRequestList, &requestList.viewArmsRequestList, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, v14, (void (__fastcall *)(const unsigned int *, AssetStreamingPriority, ClStreamingRequest *))CG_CustomizationStreamingMP_ConvertViewArmsRequestToClStreamingRequest) )
          CG_StreamingMP_RequestList_Copy_unsigned_int_(&StreamingData->viewArmsRequestList, &requestList.viewArmsRequestList);
        Sys_ProfEndNamedEvent();
        return;
      }
      LODWORD(v13) = 20;
      LODWORD(v12) = ViewArmsRequestLimit;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 679, ASSERT_TYPE_ASSERT, "( maxViewArmsRequests ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "%s <= %s\n\t%i, %i", "maxViewArmsRequests", "MAX_VIEWARMS_STREAMED_STATIC", v12, v13);
    }
    else
    {
      LODWORD(v12) = 0;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 678, ASSERT_TYPE_ASSERT, "( maxViewArmsRequests ) != ( 0 )", "%s != %s\n\t%i, %i", "maxViewArmsRequests", "0", v12, 0i64);
    }
    if ( v9 )
      __debugbreak();
    goto LABEL_26;
  }
}

/*
==============
CG_CustomizationStreamingMP_LoadCustomizationsInternal
==============
*/
void CG_CustomizationStreamingMP_LoadCustomizationsInternal(const LocalClientNum_t localClientNum, CgCustomizationStreamingData *requestData)
{
  __int64 v3; 
  const CgStatic *LocalClientStatics; 
  CgDistanceCacheMpRing v5; 
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  playerState_s *p_predictedPlayerState; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  const char *v14; 
  const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *FriendlyPlayerCache; 
  char (__fastcall **v16)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  char (__fastcall *m)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  CgDistanceCacheMpRing n; 
  unsigned __int8 (__fastcall **v19)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  unsigned __int8 (__fastcall *ii)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  char (__fastcall **v21)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  char (__fastcall *i)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  CgDistanceCacheMpRing j; 
  unsigned __int8 (__fastcall **v24)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  unsigned __int8 (__fastcall *k)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *); 
  __int64 v26; 
  __int64 v27; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
  v5 = CG_DISTANCE_CACHE_RING_0;
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 355, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( CG_CustomizationStreamingMP_CollectWorldAndViewModelsForClientNum(LocalClientStatics, LocalClientGlobals->clientNum, requestData, ASSET_STREAMING_REQUEST_FLAGS_LOCAL_CLIENT) )
  {
    if ( (unsigned int)v3 >= cg_t::ms_allocatedCount )
    {
      LODWORD(v27) = cg_t::ms_allocatedCount;
      LODWORD(v26) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
    {
      LODWORD(v27) = cg_t::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v27) )
        __debugbreak();
    }
    v7 = cg_t::ms_cgArray[v3];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 343, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
      __debugbreak();
    p_predictedPlayerState = &v7->predictedPlayerState;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 346, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
      __debugbreak();
    if ( CG_CustomizationStreamingMP_CollectWorldAndViewModelsForClientNum(LocalClientStatics, p_predictedPlayerState->clientNum, requestData, ASSET_STREAMING_REQUEST_FLAGS_LOCAL_CLIENT) )
    {
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
        v21 = (char (__fastcall **)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_0_STRATEGY;
        for ( i = (char (__fastcall *)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_0_STRATEGY[0]; *v21; i = *v21 )
        {
          if ( !i((const LocalClientNum_t)v3, CG_DISTANCE_CACHE_RING_0, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, requestData) )
            break;
          ++v21;
        }
        for ( j = CG_DISTANCE_CACHE_RING_1; (unsigned __int16)j < CG_DISTANCE_CACHE_RING_COUNT; ++j )
        {
          v24 = (unsigned __int8 (__fastcall **)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_N_STRATEGY;
          for ( k = (unsigned __int8 (__fastcall *)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_N_STRATEGY[0]; *v24; k = *v24 )
          {
            if ( !k((const LocalClientNum_t)v3, j, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, requestData) )
              break;
            ++v24;
          }
        }
      }
      else
      {
        do
        {
          v14 = j_va("CG_CustomizationStreamingMP - Friendly Players ring %d", (unsigned __int16)v5);
          Sys_ProfBeginNamedEvent(0xFF808080, v14);
          FriendlyPlayerCache = CG_DistanceCacheMP_GetFriendlyPlayerCache((const LocalClientNum_t)v3);
          CG_CustomizationStreamingMP_LoadPlayersInCache_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v3, FriendlyPlayerCache, v5, ASSET_STREAMING_REQUEST_FLAGS_IMPORTANT_TEAMMATE, requestData);
          Sys_ProfEndNamedEvent();
          ++v5;
        }
        while ( (unsigned __int16)v5 < CG_DISTANCE_CACHE_RING_COUNT );
        v16 = (char (__fastcall **)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_0_BOOSTED_TEAMMATES_STRATEGY;
        for ( m = (char (__fastcall *)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_0_BOOSTED_TEAMMATES_STRATEGY[0]; *v16; m = *v16 )
        {
          if ( !m((const LocalClientNum_t)v3, CG_DISTANCE_CACHE_RING_0, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, requestData) )
            break;
          ++v16;
        }
        for ( n = CG_DISTANCE_CACHE_RING_1; (unsigned __int16)n < CG_DISTANCE_CACHE_RING_COUNT; ++n )
        {
          v19 = (unsigned __int8 (__fastcall **)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_N_BOOSTED_TEAMMATES_STRATEGY;
          for ( ii = (unsigned __int8 (__fastcall *)(const LocalClientNum_t, const CgDistanceCacheMpRing, const AssetStreamingRequestFlags, CgCustomizationStreamingData *))CG_CUSTOMIZATION_STREAMING_RING_N_BOOSTED_TEAMMATES_STRATEGY[0]; *v19; ii = *v19 )
          {
            if ( !ii((const LocalClientNum_t)v3, n, ASSET_STREAMING_REQUEST_FLAGS_DEFAULT, requestData) )
              break;
            ++v19;
          }
        }
      }
    }
  }
}

/*
==============
CG_CustomizationStreamingMP_LoadPlayerCorpseEntity
==============
*/
bool CG_CustomizationStreamingMP_LoadPlayerCorpseEntity(const LocalClientNum_t localClientNum, const cgs_t *const cgs, const unsigned int entnum, const AssetStreamingRequestFlags flags, CgCustomizationStreamingData *outRequestData)
{
  unsigned int v8; 
  __int64 v10; 

  if ( !cgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 252, ASSERT_TYPE_ASSERT, "( ( cgs != nullptr ) )", "( cgs ) = %p", NULL) )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v8 = entnum - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v8 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v10, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 256, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
      __debugbreak();
  }
  return CG_CustomizationStreamingMP_AddWorldModelRequestsForCustomizationInfo(&cgs->corpseinfo[v8].customization, flags, outRequestData);
}

/*
==============
CG_CustomizationStreamingMP_ResetClient
==============
*/
void CG_CustomizationStreamingMP_ResetClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const CgStreamRequestList<unsigned int> *p_bodyRequestList; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgCustomizationStreaming.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgCustomizationStreaming.clientData )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  p_bodyRequestList = &s_cgCustomizationStreaming.clientData[v1].requestData.bodyRequestList;
  CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList);
  DebugWipe(p_bodyRequestList->cgRequests, 4i64 * p_bodyRequestList->maxRequestCount);
  DebugWipe(p_bodyRequestList->clRequests, 60i64 * p_bodyRequestList->maxRequestCount);
  DebugWipe(p_bodyRequestList->priorities, 4i64 * p_bodyRequestList->maxRequestCount);
  p_bodyRequestList->requestCount = 0;
  CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList + 1);
  DebugWipe(p_bodyRequestList[1].cgRequests, 4i64 * p_bodyRequestList[1].maxRequestCount);
  DebugWipe(p_bodyRequestList[1].clRequests, 60i64 * p_bodyRequestList[1].maxRequestCount);
  DebugWipe(p_bodyRequestList[1].priorities, 4i64 * p_bodyRequestList[1].maxRequestCount);
  p_bodyRequestList[1].requestCount = 0;
  CG_StreamingMP_RequestList_Validate<unsigned int>(p_bodyRequestList + 2);
  DebugWipe(p_bodyRequestList[2].cgRequests, 4i64 * p_bodyRequestList[2].maxRequestCount);
  DebugWipe(p_bodyRequestList[2].clRequests, 60i64 * p_bodyRequestList[2].maxRequestCount);
  DebugWipe(p_bodyRequestList[2].priorities, 4i64 * p_bodyRequestList[2].maxRequestCount);
  p_bodyRequestList[2].requestCount = 0;
  if ( p_bodyRequestList->maxRequestCount > 0x30 )
  {
    LODWORD(v4) = 48;
    LODWORD(v3) = p_bodyRequestList->maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 552, ASSERT_TYPE_ASSERT, "( streamingData.bodyRequestList.maxRequestCount ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "streamingData.bodyRequestList.maxRequestCount not in [0, MAX_BODIES_STREAMED_STATIC]\n\t%u not in [0, %u]", v3, v4) )
      __debugbreak();
  }
  if ( p_bodyRequestList[1].maxRequestCount > 0x30 )
  {
    LODWORD(v4) = 48;
    LODWORD(v3) = p_bodyRequestList[1].maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 553, ASSERT_TYPE_ASSERT, "( streamingData.headRequestList.maxRequestCount ) <= ( (2 * (((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20)) + 8) )", "streamingData.headRequestList.maxRequestCount not in [0, MAX_HEADS_STREAMED_STATIC]\n\t%u not in [0, %u]", v3, v4) )
      __debugbreak();
  }
  if ( p_bodyRequestList[2].maxRequestCount > 0x14 )
  {
    LODWORD(v4) = 20;
    LODWORD(v3) = p_bodyRequestList[2].maxRequestCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_customization_streaming_mp.cpp", 554, ASSERT_TYPE_ASSERT, "( streamingData.viewArmsRequestList.maxRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "streamingData.viewArmsRequestList.maxRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v3, v4) )
      __debugbreak();
  }
}

/*
==============
CG_CustomizationStreamingMP_Shutdown
==============
*/
void CG_CustomizationStreamingMP_Shutdown(const LocalClientNum_t localClientNum)
{
  Cmd_RemoveCommand("cg_customizationStreaming_reset");
}

