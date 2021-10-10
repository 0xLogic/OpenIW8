/*
==============
CG_DistanceCacheMP_GetEnemyPlayerCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetEnemyPlayerCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetEnemyPlayerCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$0MI@UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_Reset
==============
*/

void __fastcall CG_DistanceCacheMP_Reset(const LocalClientNum_t localClientNum)
{
  ?CG_DistanceCacheMP_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_GetPlayerCorpseCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetPlayerCorpseCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetPlayerCorpseCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$07UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_AddPlayerCorpse
==============
*/

double __fastcall CG_DistanceCacheMP_AddPlayerCorpse(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  double result; 

  *(float *)&result = ?CG_DistanceCacheMP_AddPlayerCorpse@@YAMW4LocalClientNum_t@@IM@Z(localClientNum, entNum, distanceSqMultiplier);
  return result;
}

/*
==============
CgDistanceCacheClientData::GetOrigin
==============
*/

void __fastcall CgDistanceCacheClientData::GetOrigin(CgDistanceCacheClientData *this, const unsigned int viewIndex, vec3_t *outOrigin)
{
  ?GetOrigin@CgDistanceCacheClientData@@QEBAXIAEATvec3_t@@@Z(this, viewIndex, outOrigin);
}

/*
==============
CG_DistanceCacheMP_GetFriendlyAgentCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetFriendlyAgentCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetFriendlyAgentCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$0DA@UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_AddItem
==============
*/

double __fastcall CG_DistanceCacheMP_AddItem(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  double result; 

  *(float *)&result = ?CG_DistanceCacheMP_AddItem@@YAMW4LocalClientNum_t@@IM@Z(localClientNum, entNum, distanceSqMultiplier);
  return result;
}

/*
==============
CG_DistanceCacheMP_GetEnemyAgentCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetEnemyAgentCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetEnemyAgentCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$0DA@UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_GetRingRadiusSq
==============
*/

double __fastcall CG_DistanceCacheMP_GetRingRadiusSq(const CgDistanceCacheMpRing ring)
{
  double result; 

  *(float *)&result = ?CG_DistanceCacheMP_GetRingRadiusSq@@YAMW4CgDistanceCacheMpRing@@@Z(ring);
  return result;
}

/*
==============
CG_DistanceCacheMP_SetClientStreamManualViews
==============
*/

void __fastcall CG_DistanceCacheMP_SetClientStreamManualViews(const LocalClientNum_t localClientNum)
{
  ?CG_DistanceCacheMP_SetClientStreamManualViews@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDistanceCacheClientData::AddOrigin
==============
*/

void __fastcall CgDistanceCacheClientData::AddOrigin(CgDistanceCacheClientData *this, const vec3_t *newOrigin)
{
  ?AddOrigin@CgDistanceCacheClientData@@QEAAXAEBTvec3_t@@@Z(this, newOrigin);
}

/*
==============
CG_DistanceCacheMP_AddAgent
==============
*/

double __fastcall CG_DistanceCacheMP_AddAgent(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  double result; 

  *(float *)&result = ?CG_DistanceCacheMP_AddAgent@@YAMW4LocalClientNum_t@@IM@Z(localClientNum, entNum, distanceSqMultiplier);
  return result;
}

/*
==============
CG_DistanceCacheMP_Validate
==============
*/

void __fastcall CG_DistanceCacheMP_Validate(const LocalClientNum_t localClientNum)
{
  ?CG_DistanceCacheMP_Validate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_AddPlayer
==============
*/

double __fastcall CG_DistanceCacheMP_AddPlayer(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  double result; 

  *(float *)&result = ?CG_DistanceCacheMP_AddPlayer@@YAMW4LocalClientNum_t@@IM@Z(localClientNum, entNum, distanceSqMultiplier);
  return result;
}

/*
==============
CG_DistanceCacheMP_CacheLocalClientPlayerState
==============
*/

void __fastcall CG_DistanceCacheMP_CacheLocalClientPlayerState(const LocalClientNum_t localClientNum)
{
  ?CG_DistanceCacheMP_CacheLocalClientPlayerState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_GetFriendlyPlayerCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetFriendlyPlayerCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetFriendlyPlayerCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$0MI@UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DistanceCacheMP_GetItemCache
==============
*/

const OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey> *__fastcall CG_DistanceCacheMP_GetItemCache(const LocalClientNum_t localClientNum)
{
  return ?CG_DistanceCacheMP_GetItemCache@@YAAEBU?$OneLevelSkipList@UCgDistanceCacheMpKey@@$04$0HAI@UCgDistanceCacheMpCompareKey@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDistanceCacheClientData::AddOrigin
==============
*/
void CgDistanceCacheClientData::AddOrigin(CgDistanceCacheClientData *this, const vec3_t *newOrigin)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  vec3_t *v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int secureOriginCount; 
  int v14; 
  __int64 v15; 

  if ( this->secureOriginCount >= 5 )
  {
    v14 = 5;
    secureOriginCount = this->secureOriginCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( this->secureOriginCount ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "this->secureOriginCount doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", secureOriginCount, v14) )
      __debugbreak();
  }
  v4 = s_cgdistancecache_aab_Z;
  v5 = s_cgdistancecache_aab_Y;
  v6 = s_cgdistancecache_aab_X;
  v7 = this->secureOriginCount;
  *(float *)&v15 = newOrigin->v[0];
  v8 = &this->secureOrigins[v7];
  if ( (v15 & 0x7F800000) == 2139095040 || (*(float *)&v15 = newOrigin->v[1], (v15 & 0x7F800000) == 2139095040) || (*(float *)&v15 = newOrigin->v[2], (v15 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v9 = (unsigned int)v8 ^ LODWORD(newOrigin->v[2]);
  v10 = LODWORD(newOrigin->v[0]) ^ (unsigned int)v8 ^ ~v6;
  v11 = v10 ^ (unsigned int)v8 ^ LODWORD(newOrigin->v[1]);
  LODWORD(v8->v[0]) = v10;
  v12 = v5 ^ v11;
  LODWORD(v8->v[1]) = v12;
  LODWORD(v8->v[2]) = v4 ^ v12 ^ v9;
  ++this->secureOriginCount;
  memset(&v15, 0, sizeof(v15));
}

/*
==============
CG_DistanceCacheMP_AddAgent
==============
*/
float CG_DistanceCacheMP_AddAgent(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  __int64 v4; 
  unsigned int v5; 
  centity_t *Entity; 
  bool v7; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *friendlyAgentDistanceCache; 
  float result; 
  __int64 v10; 
  __int64 v12; 
  int v13; 
  char v14[12]; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( entNum >= 0xF8 )
  {
    LODWORD(v12) = 248;
    LODWORD(v10) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "entNum doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v5 = entNum - ComCharacterLimits::ms_gameData.m_clientCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v5 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v12) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_AGENT)", (const char *)&queryFormat, "cent->nextState.eType == ET_AGENT") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v7 = *CG_DistanceCacheMP_GetTeamForEntity((const LocalClientNum_t)v4, entNum) == s_cgDistanceCacheMP.localClientData[v4].team;
  friendlyAgentDistanceCache = s_cgDistanceCacheMP.friendlyAgentDistanceCache;
  if ( !v7 )
    friendlyAgentDistanceCache = s_cgDistanceCacheMP.enemyAgentDistanceCache;
  result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v4, entNum, distanceSqMultiplier, &friendlyAgentDistanceCache[v4]);
  memset(v14, 0, sizeof(v14));
  return result;
}

/*
==============
CG_DistanceCacheMP_AddItem
==============
*/
double CG_DistanceCacheMP_AddItem(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  __int64 v3; 
  centity_t *Entity; 
  double result; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( entNum >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v7) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v3, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 411, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_ITEM)", (const char *)&queryFormat, "cent->nextState.eType == ET_ITEM") )
    __debugbreak();
  *(float *)&result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_1800_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v3, entNum, distanceSqMultiplier, &s_cgDistanceCacheMP.itemDistanceCache[v3]);
  return result;
}

/*
==============
CG_DistanceCacheMP_AddPlayer
==============
*/
float CG_DistanceCacheMP_AddPlayer(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  __int64 v4; 
  centity_t *Entity; 
  bool v6; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *friendlyPlayerDistanceCache; 
  float result; 
  __int64 v9; 
  __int64 v11; 
  int v12; 
  char v13[12]; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 360, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  if ( entNum >= 0xC8 )
  {
    LODWORD(v11) = 200;
    LODWORD(v9) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ((1 >= 200) ? 1 : 200) )", "entNum doesn't index MAX_CLIENTS_STATIC\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entNum >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v11) = ComCharacterLimits::ms_gameData.m_clientCount;
    LODWORD(v9) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v6 = *CG_DistanceCacheMP_GetTeamForEntity((const LocalClientNum_t)v4, entNum) == s_cgDistanceCacheMP.localClientData[v4].team;
  friendlyPlayerDistanceCache = s_cgDistanceCacheMP.friendlyPlayerDistanceCache;
  if ( !v6 )
    friendlyPlayerDistanceCache = s_cgDistanceCacheMP.enemyPlayerDistanceCache;
  result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v4, entNum, distanceSqMultiplier, &friendlyPlayerDistanceCache[v4]);
  memset(v13, 0, sizeof(v13));
  return result;
}

/*
==============
CG_DistanceCacheMP_AddPlayerCorpse
==============
*/
double CG_DistanceCacheMP_AddPlayerCorpse(const LocalClientNum_t localClientNum, const unsigned int entNum, const float distanceSqMultiplier)
{
  __int64 v3; 
  centity_t *Entity; 
  double result; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( entNum >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v7) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v3, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PLAYER_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 395, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER_CORPSE)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER_CORPSE") )
    __debugbreak();
  *(float *)&result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_8_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v3, entNum, distanceSqMultiplier, &s_cgDistanceCacheMP.playerCorpseDistanceCache[v3]);
  return result;
}

/*
==============
CG_DistanceCacheMP_CacheLocalClientPlayerState
==============
*/
void CG_DistanceCacheMP_CacheLocalClientPlayerState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  __int64 v6; 
  __int64 v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v7) = cg_t::ms_allocatedCount;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(v7) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v7) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 250, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 253, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
    __debugbreak();
  if ( v2 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 256, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v2->predictedPlayerState.clientNum);
  if ( CharacterInfo )
  {
    team = CharacterInfo->team;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 259, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
      __debugbreak();
    team = MEMORY[0xC];
  }
  s_cgDistanceCacheMP.localClientData[v1].team = team;
}

/*
==============
CG_DistanceCacheMP_GetEnemyAgentCache
==============
*/
OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetEnemyAgentCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 164, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyAgentDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_cgDistanceCacheMP.enemyAgentDistanceCache[v1];
}

/*
==============
CG_DistanceCacheMP_GetEnemyPlayerCache
==============
*/
OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetEnemyPlayerCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyPlayerDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_cgDistanceCacheMP.enemyPlayerDistanceCache[v1];
}

/*
==============
CG_DistanceCacheMP_GetFriendlyAgentCache
==============
*/
OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetFriendlyAgentCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyAgentDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_cgDistanceCacheMP.friendlyAgentDistanceCache[v1];
}

/*
==============
CG_DistanceCacheMP_GetFriendlyPlayerCache
==============
*/
OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetFriendlyPlayerCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyPlayerDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_cgDistanceCacheMP.friendlyPlayerDistanceCache[v1];
}

/*
==============
CG_DistanceCacheMP_GetItemCache
==============
*/
OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetItemCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.itemDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.itemDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return &s_cgDistanceCacheMP.itemDistanceCache[v1];
}

/*
==============
CG_DistanceCacheMP_GetPlayerCorpseCache
==============
*/
const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *CG_DistanceCacheMP_GetPlayerCorpseCache(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.playerCorpseDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.playerCorpseDistanceCache )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return (const OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *)((char *)&s_cgDistanceCacheMP + 416 * v1);
}

/*
==============
CG_DistanceCacheMP_GetRingRadiusSq
==============
*/
float CG_DistanceCacheMP_GetRingRadiusSq(const CgDistanceCacheMpRing ring)
{
  int v2; 
  int v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  if ( (unsigned __int16)ring >= CG_DISTANCE_CACHE_RING_COUNT )
  {
    v6 = 5;
    v2 = (unsigned __int16)ring;
    v4 = (unsigned __int16)ring;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( ring ) < (unsigned)( CG_DISTANCE_CACHE_RING_COUNT )", "ring doesn't index CG_DISTANCE_CACHE_RING_COUNT\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
    LODWORD(v7) = 5;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( ring ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.ringRadiiSq ) ) + 0 ) )", "ring doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.ringRadiiSq )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_cgDistanceCacheMP.ringRadiiSq[(unsigned __int16)ring];
}

/*
==============
CG_DistanceCacheMP_GetTeamForEntity
==============
*/
__int64 CG_DistanceCacheMP_GetTeamForEntity(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 124, ASSERT_TYPE_ASSERT, "( ( cgameStatic != nullptr ) )", "( cgameStatic ) = %p", NULL) )
    __debugbreak();
  if ( !LocalClientStatics->HasCharacterInfo(LocalClientStatics, entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(cgameStatic->HasCharacterInfo( entNum ))", (const char *)&queryFormat, "cgameStatic->HasCharacterInfo( entNum )") )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, entNum);
  if ( CharacterInfo )
    return (__int64)&CharacterInfo->team;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 128, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
    __debugbreak();
  return 12i64;
}

/*
==============
CG_DistanceCacheMP_Reset
==============
*/
void CG_DistanceCacheMP_Reset(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  const dvar_t *v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *v12; 
  float *ringRadiiSq; 
  unsigned int v14; 
  float v16; 
  unsigned __int16 *m_linkPageIndices; 
  unsigned int v18; 
  __int64 v19; 
  float *v20; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey> *v21; 
  unsigned int v22; 
  float v23; 
  unsigned __int16 *v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  CgDistanceCacheMpKey v30; 
  CgDistanceCacheMpKey v31; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v3 = DCONST_DVARFLT_cg_distanceCache_ringRadius0;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v5 = DCONST_DVARFLT_cg_distanceCache_ringRadius1;
  s_cgDistanceCacheMP.ringRadiiSq[0] = value * value;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value;
  v7 = DCONST_DVARFLT_cg_distanceCache_ringRadius2;
  s_cgDistanceCacheMP.ringRadiiSq[1] = v6 * v6;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  v9 = DCONST_DVARFLT_cg_distanceCache_ringRadius3;
  s_cgDistanceCacheMP.ringRadiiSq[2] = v8 * v8;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius3") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = DCONST_DVARFLT_cg_distanceCache_ringRadius4;
  s_cgDistanceCacheMP.ringRadiiSq[3] = v10 * v10;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius4") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  s_cgDistanceCacheMP.ringRadiiSq[4] = v11->current.value * v11->current.value;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyAgentDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.enemyAgentDistanceCache[v2]);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyAgentDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.friendlyAgentDistanceCache[v2]);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.playerCorpseDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.playerCorpseDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  v12 = &s_cgDistanceCacheMP.playerCorpseDistanceCache[v2];
  memset_0(v12, 0, sizeof(OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>));
  v12->m_nextFreePage = 0;
  ringRadiiSq = s_cgDistanceCacheMP.ringRadiiSq;
  *(_DWORD *)v12->m_linkPageIndices = 393222;
  v14 = 0;
  v12->m_linkPageIndices[4] = 6;
  *(_DWORD *)&v12->m_linkPageIndices[2] = 393222;
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  do
  {
    v16 = *ringRadiiSq;
    if ( *ringRadiiSq <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( ringDistanceSq ) > ( 0.f )", "%s > %s\n\t%g, %g", "ringDistanceSq", "0.f", v16, *(double *)&_XMM8) )
      __debugbreak();
    v30.distanceSq = v16;
    v30.index = -1;
    m_linkPageIndices = v12->m_linkPageIndices;
    v18 = 0;
    while ( *m_linkPageIndices != 6 )
    {
      ++v18;
      ++m_linkPageIndices;
      if ( v18 >= 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CFEAA0, 5844i64);
        goto LABEL_37;
      }
    }
    v19 = v18;
    v12->m_linkPageIndices[v18] = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::AllocPage(v12);
    v12->m_linkKeys[v19] = v30;
LABEL_37:
    ++v14;
    ++ringRadiiSq;
  }
  while ( v14 < 5 );
  v20 = s_cgDistanceCacheMP.ringRadiiSq;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyPlayerDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.enemyPlayerDistanceCache[localClientNum]);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyPlayerDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.friendlyPlayerDistanceCache[localClientNum]);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v28) = 2;
    LODWORD(v27) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.itemDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.itemDistanceCache )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  v21 = &s_cgDistanceCacheMP.itemDistanceCache[localClientNum];
  memset_0(v21, 0, sizeof(OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey>));
  v21->m_nextFreePage = 0;
  v22 = 0;
  *(_DWORD *)v21->m_linkPageIndices = 17170694;
  *(_DWORD *)&v21->m_linkPageIndices[2] = 17170694;
  v21->m_linkPageIndices[4] = 262;
  do
  {
    v23 = *v20;
    if ( *v20 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( ringDistanceSq ) > ( 0.f )", "%s > %s\n\t%g, %g", "ringDistanceSq", "0.f", v23, *(double *)&_XMM8) )
      __debugbreak();
    v31.distanceSq = v23;
    v31.index = -1;
    v24 = v21->m_linkPageIndices;
    v25 = 0;
    while ( *v24 != 262 )
    {
      ++v25;
      ++v24;
      if ( v25 >= 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CFEAA0, 5844i64);
        goto LABEL_56;
      }
    }
    v26 = v25;
    v21->m_linkPageIndices[v25] = OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey>::AllocPage(v21);
    v21->m_linkKeys[v26] = v31;
LABEL_56:
    ++v22;
    ++v20;
  }
  while ( v22 < 5 );
}

/*
==============
CG_DistanceCacheMP_SetClientStreamManualViews
==============
*/
void CG_DistanceCacheMP_SetClientStreamManualViews(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgDistanceCacheClientData *v2; 
  StreamManualViewType v3; 
  const vec3_t *ManualViewOrigin; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  float v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v15; 
  int v16; 
  __int64 v17; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  v2 = &s_cgDistanceCacheMP.localClientData[v1];
  v3 = MOVEMENT;
  v2->secureOriginCount = 0;
  do
  {
    if ( CL_StreamViews_IsManualViewSet(v3, (LocalClientNum_t)v1) )
    {
      ManualViewOrigin = CL_StreamViews_GetManualViewOrigin(v3, (LocalClientNum_t)v1);
      if ( v2->secureOriginCount >= 5 )
      {
        LODWORD(v15) = 5;
        LODWORD(v13) = v2->secureOriginCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( this->secureOriginCount ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "this->secureOriginCount doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", v13, v15) )
          __debugbreak();
      }
      v5 = s_cgdistancecache_aab_Z;
      v6 = s_cgdistancecache_aab_Y;
      v7 = s_cgdistancecache_aab_X;
      v8 = (__int64)&v2->secureOrigins[v2->secureOriginCount];
      if ( ((LODWORD(ManualViewOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ManualViewOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ManualViewOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
      v9 = ManualViewOrigin->v[2];
      v10 = v8 ^ LODWORD(ManualViewOrigin->v[0]) ^ ~v7;
      v11 = v10 ^ v8 ^ LODWORD(ManualViewOrigin->v[1]);
      *(_DWORD *)v8 = v10;
      v12 = v6 ^ v11;
      *(_DWORD *)(v8 + 4) = v12;
      *(_DWORD *)(v8 + 8) = v5 ^ v12 ^ v8 ^ LODWORD(v9);
      ++v2->secureOriginCount;
      memset(&v17, 0, sizeof(v17));
    }
    ++v3;
  }
  while ( (unsigned int)v3 < 5 );
}

/*
==============
CG_DistanceCacheMP_Validate
==============
*/
void CG_DistanceCacheMP_Validate(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.friendlyAgentDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 425, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.friendlyAgentDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.friendlyAgentDistanceCache[localClientNum].Validate()") )
    __debugbreak();
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.enemyAgentDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 426, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.enemyAgentDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.enemyAgentDistanceCache[localClientNum].Validate()") )
    __debugbreak();
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.playerCorpseDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 427, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.playerCorpseDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.playerCorpseDistanceCache[localClientNum].Validate()") )
    __debugbreak();
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.enemyPlayerDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 428, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.enemyPlayerDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.enemyPlayerDistanceCache[localClientNum].Validate()") )
    __debugbreak();
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.friendlyPlayerDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 429, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.friendlyPlayerDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.friendlyPlayerDistanceCache[localClientNum].Validate()") )
    __debugbreak();
  if ( !OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey>::Validate(&s_cgDistanceCacheMP.itemDistanceCache[v1]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 430, ASSERT_TYPE_ASSERT, "(s_cgDistanceCacheMP.itemDistanceCache[localClientNum].Validate())", (const char *)&queryFormat, "s_cgDistanceCacheMP.itemDistanceCache[localClientNum].Validate()") )
    __debugbreak();
}

/*
==============
CgDistanceCacheClientData::GetOrigin
==============
*/
void CgDistanceCacheClientData::GetOrigin(CgDistanceCacheClientData *this, const unsigned int viewIndex, vec3_t *outOrigin)
{
  __int64 v3; 
  unsigned int v6; 
  float v7; 
  int v8; 
  float v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 

  v3 = viewIndex;
  if ( viewIndex >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", viewIndex, 5) )
    __debugbreak();
  if ( (unsigned int)v3 >= this->secureOriginCount )
  {
    LODWORD(v12) = this->secureOriginCount;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( this->secureOriginCount )", "viewIndex doesn't index this->secureOriginCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v6 = s_cgdistancecache_aab_Y;
  v7 = this->secureOrigins[v3].v[0];
  v8 = (_DWORD)this + 12 * v3 + 8;
  v9 = this->secureOrigins[v3].v[1];
  v10 = v8 ^ ~s_cgdistancecache_aab_X;
  LODWORD(outOrigin->v[2]) = LODWORD(v9) ^ s_cgdistancecache_aab_Z ^ v8 ^ LODWORD(this->secureOrigins[v3].v[2]);
  LODWORD(outOrigin->v[1]) = v6 ^ LODWORD(v7) ^ LODWORD(v9) ^ v8;
  memset(&v13, 0, sizeof(v13));
  LODWORD(outOrigin->v[0]) = LODWORD(v7) ^ v10;
  v14 = outOrigin->v[0];
  if ( (LODWORD(v14) & 0x7F800000) == 2139095040 || (v14 = outOrigin->v[1], (LODWORD(v14) & 0x7F800000) == 2139095040) || (v14 = outOrigin->v[2], (LODWORD(v14) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

