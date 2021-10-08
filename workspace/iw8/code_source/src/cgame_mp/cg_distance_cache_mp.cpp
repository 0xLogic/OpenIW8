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
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  vec3_t *v9; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int secureOriginCount; 
  int v17; 
  __int64 v18; 

  _RDI = newOrigin;
  if ( this->secureOriginCount >= 5 )
  {
    v17 = 5;
    secureOriginCount = this->secureOriginCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( this->secureOriginCount ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "this->secureOriginCount doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", secureOriginCount, v17) )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rdi] }
  v5 = s_cgdistancecache_aab_Z;
  v6 = s_cgdistancecache_aab_Y;
  v7 = s_cgdistancecache_aab_X;
  v8 = this->secureOriginCount;
  __asm { vmovss  dword ptr [rsp+58h+arg_0], xmm0 }
  v9 = &this->secureOrigins[v8];
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+58h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+58h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v12 = (unsigned int)v9 ^ LODWORD(_RDI->v[2]);
  v13 = LODWORD(_RDI->v[0]) ^ (unsigned int)v9 ^ ~v7;
  v14 = v13 ^ (unsigned int)v9 ^ LODWORD(_RDI->v[1]);
  LODWORD(v9->v[0]) = v13;
  v15 = v6 ^ v14;
  LODWORD(v9->v[1]) = v15;
  LODWORD(v9->v[2]) = v5 ^ v15 ^ v12;
  ++this->secureOriginCount;
  memset(&v18, 0, sizeof(v18));
}

/*
==============
CG_DistanceCacheMP_AddAgent
==============
*/

float __fastcall CG_DistanceCacheMP_AddAgent(const LocalClientNum_t localClientNum, const unsigned int entNum, double distanceSqMultiplier)
{
  __int64 v7; 
  unsigned int v8; 
  centity_t *Entity; 
  bool v11; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,48,CgDistanceCacheMpCompareKey> *friendlyAgentDistanceCache; 
  float result; 
  __int64 v15; 
  __int64 v17; 
  int v18; 
  char v19[12]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
  }
  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v18 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v18) )
      __debugbreak();
  }
  if ( entNum >= 0xF8 )
  {
    LODWORD(v17) = 248;
    LODWORD(v15) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "entNum doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v8 = entNum - ComCharacterLimits::ms_gameData.m_clientCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v8 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v17) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v7, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_AGENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_AGENT)", (const char *)&queryFormat, "cent->nextState.eType == ET_AGENT") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
  v11 = *CG_DistanceCacheMP_GetTeamForEntity((const LocalClientNum_t)v7, entNum) == s_cgDistanceCacheMP.localClientData[v7].team;
  friendlyAgentDistanceCache = s_cgDistanceCacheMP.friendlyAgentDistanceCache;
  if ( !v11 )
    friendlyAgentDistanceCache = s_cgDistanceCacheMP.enemyAgentDistanceCache;
  result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v7, entNum, *(const float *)&_XMM2, &friendlyAgentDistanceCache[v7]);
  memset(v19, 0, sizeof(v19));
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
CG_DistanceCacheMP_AddItem
==============
*/

double __fastcall CG_DistanceCacheMP_AddItem(const LocalClientNum_t localClientNum, const unsigned int entNum, double distanceSqMultiplier)
{
  __int64 v4; 
  centity_t *Entity; 
  double result; 
  __int64 v11; 
  __int64 v13; 
  int v14; 

  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  if ( entNum >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 411, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_ITEM)", (const char *)&queryFormat, "cent->nextState.eType == ET_ITEM") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  *(float *)&result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_1800_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v4, entNum, *(const float *)&_XMM2, &s_cgDistanceCacheMP.itemDistanceCache[v4]);
  return result;
}

/*
==============
CG_DistanceCacheMP_AddPlayer
==============
*/

float __fastcall CG_DistanceCacheMP_AddPlayer(const LocalClientNum_t localClientNum, const unsigned int entNum, double distanceSqMultiplier)
{
  __int64 v7; 
  centity_t *Entity; 
  bool v10; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,200,CgDistanceCacheMpCompareKey> *friendlyPlayerDistanceCache; 
  float result; 
  __int64 v14; 
  __int64 v16; 
  int v17; 
  char v18[12]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
  }
  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v17 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 360, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v17) )
      __debugbreak();
  }
  if ( entNum >= 0xC8 )
  {
    LODWORD(v16) = 200;
    LODWORD(v14) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 361, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ((1 >= 200) ? 1 : 200) )", "entNum doesn't index MAX_CLIENTS_STATIC\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entNum >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v16) = ComCharacterLimits::ms_gameData.m_clientCount;
    LODWORD(v14) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "entNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v7, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v16) = 2;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; distanceSqMultiplier }
  v10 = *CG_DistanceCacheMP_GetTeamForEntity((const LocalClientNum_t)v7, entNum) == s_cgDistanceCacheMP.localClientData[v7].team;
  friendlyPlayerDistanceCache = s_cgDistanceCacheMP.friendlyPlayerDistanceCache;
  if ( !v10 )
    friendlyPlayerDistanceCache = s_cgDistanceCacheMP.enemyPlayerDistanceCache;
  result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v7, entNum, *(const float *)&_XMM2, &friendlyPlayerDistanceCache[v7]);
  memset(v18, 0, sizeof(v18));
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
CG_DistanceCacheMP_AddPlayerCorpse
==============
*/

double __fastcall CG_DistanceCacheMP_AddPlayerCorpse(const LocalClientNum_t localClientNum, const unsigned int entNum, double distanceSqMultiplier)
{
  __int64 v4; 
  centity_t *Entity; 
  double result; 
  __int64 v11; 
  __int64 v13; 
  int v14; 

  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  if ( entNum >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v4, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PLAYER_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 395, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER_CORPSE)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER_CORPSE") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  *(float *)&result = CG_DistanceCacheMP_AddEntityInternal_OneLevelSkipList_CgDistanceCacheMpKey_5_8_CgDistanceCacheMpCompareKey___((const LocalClientNum_t)v4, entNum, *(const float *)&_XMM2, &s_cgDistanceCacheMP.playerCorpseDistanceCache[v4]);
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
  int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  if ( (unsigned __int16)ring >= CG_DISTANCE_CACHE_RING_COUNT )
  {
    v9 = 5;
    v2 = (unsigned __int16)ring;
    v7 = (unsigned __int16)ring;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( ring ) < (unsigned)( CG_DISTANCE_CACHE_RING_COUNT )", "ring doesn't index CG_DISTANCE_CACHE_RING_COUNT\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
    LODWORD(v10) = 5;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( ring ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.ringRadiiSq ) ) + 0 ) )", "ring doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.ringRadiiSq )\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  _RAX = (unsigned __int16)ring;
  _RCX = s_cgDistanceCacheMP.ringRadiiSq;
  __asm { vmovss  xmm0, dword ptr [rcx+rax*4] }
  return *(float *)&_XMM0;
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
  __int64 v4; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey> *v20; 
  unsigned int v22; 
  bool v25; 
  unsigned __int16 *m_linkPageIndices; 
  unsigned int v29; 
  __int64 v30; 
  OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey> *v32; 
  unsigned int v33; 
  bool v34; 
  unsigned __int16 *v37; 
  unsigned int v38; 
  __int64 v39; 
  __int64 v43; 
  __int64 v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  CgDistanceCacheMpKey v53; 
  CgDistanceCacheMpKey v54; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+0B8h+var_58], xmm7
    vmovaps [rsp+0B8h+var_68], xmm8
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RBX = DCONST_DVARFLT_cg_distanceCache_ringRadius0;
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_distanceCache_ringRadius1;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  cs:s_cgDistanceCacheMP.ringRadiiSq, xmm1
  }
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_distanceCache_ringRadius2;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  cs:s_cgDistanceCacheMP.ringRadiiSq+4, xmm1
  }
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_distanceCache_ringRadius3;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  cs:s_cgDistanceCacheMP.ringRadiiSq+8, xmm1
  }
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius3") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_cg_distanceCache_ringRadius4;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  cs:s_cgDistanceCacheMP.ringRadiiSq+0Ch, xmm1
  }
  if ( !DCONST_DVARFLT_cg_distanceCache_ringRadius4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_distanceCache_ringRadius4") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  cs:s_cgDistanceCacheMP.ringRadiiSq+10h, xmm1
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyAgentDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.enemyAgentDistanceCache[v4]);
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyAgentDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyAgentDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_48_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.friendlyAgentDistanceCache[v4]);
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.playerCorpseDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.playerCorpseDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  v20 = &s_cgDistanceCacheMP.playerCorpseDistanceCache[v4];
  memset_0(v20, 0, sizeof(OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>));
  v20->m_nextFreePage = 0;
  _RBP = s_cgDistanceCacheMP.ringRadiiSq;
  *(_DWORD *)v20->m_linkPageIndices = 393222;
  v22 = 0;
  v20->m_linkPageIndices[4] = 6;
  *(_DWORD *)&v20->m_linkPageIndices[2] = 393222;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorpd  xmm8, xmm8, xmm8
  }
  v25 = 1;
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+0]
      vcomiss xmm6, xmm7
    }
    if ( v25 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_78], xmm8
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0B8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( ringDistanceSq ) > ( 0.f )", "%s > %s\n\t%g, %g", "ringDistanceSq", "0.f", v45, v47) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rsp+0B8h+arg_8+4], xmm6 }
    v53.index = -1;
    m_linkPageIndices = v20->m_linkPageIndices;
    v29 = 0;
    while ( *m_linkPageIndices != 6 )
    {
      ++v29;
      ++m_linkPageIndices;
      if ( v29 >= 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CFEAA0, 5844i64);
        goto LABEL_37;
      }
    }
    v30 = v29;
    v20->m_linkPageIndices[v29] = OneLevelSkipList<CgDistanceCacheMpKey,5,8,CgDistanceCacheMpCompareKey>::AllocPage(v20);
    v20->m_linkKeys[v30] = v53;
LABEL_37:
    ++v22;
    ++_RBP;
    v25 = v22 <= 5;
  }
  while ( v22 < 5 );
  _R13 = s_cgDistanceCacheMP.ringRadiiSq;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.enemyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.enemyPlayerDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.enemyPlayerDistanceCache[localClientNum]);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.friendlyPlayerDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.friendlyPlayerDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  CG_DistanceCacheMP_Init_CgDistanceCacheMpKey_5_200_CgDistanceCacheMpCompareKey_(&s_cgDistanceCacheMP.friendlyPlayerDistanceCache[localClientNum]);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v44) = 2;
    LODWORD(v43) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.itemDistanceCache ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.itemDistanceCache )\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  v32 = &s_cgDistanceCacheMP.itemDistanceCache[localClientNum];
  memset_0(v32, 0, sizeof(OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey>));
  v32->m_nextFreePage = 0;
  v33 = 0;
  *(_DWORD *)v32->m_linkPageIndices = 17170694;
  *(_DWORD *)&v32->m_linkPageIndices[2] = 17170694;
  v32->m_linkPageIndices[4] = 262;
  v34 = 1;
  do
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r13+0]
      vcomiss xmm6, xmm7
    }
    if ( v34 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_78], xmm8
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0B8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( ringDistanceSq ) > ( 0.f )", "%s > %s\n\t%g, %g", "ringDistanceSq", "0.f", v46, v48) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rsp+0B8h+arg_8+4], xmm6 }
    v54.index = -1;
    v37 = v32->m_linkPageIndices;
    v38 = 0;
    while ( *v37 != 262 )
    {
      ++v38;
      ++v37;
      if ( v38 >= 5 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CFEAA0, 5844i64);
        goto LABEL_56;
      }
    }
    v39 = v38;
    v32->m_linkPageIndices[v38] = OneLevelSkipList<CgDistanceCacheMpKey,5,1800,CgDistanceCacheMpCompareKey>::AllocPage(v32);
    v32->m_linkKeys[v39] = v54;
LABEL_56:
    ++v33;
    ++_R13;
    v34 = v33 <= 5;
  }
  while ( v33 < 5 );
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
  }
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
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  float v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  __int64 v23; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v19 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgDistanceCacheMP.localClientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgDistanceCacheMP.localClientData )\n\t%i not in [0, %i)", localClientNum, v19) )
      __debugbreak();
  }
  v2 = &s_cgDistanceCacheMP.localClientData[v1];
  v3 = MOVEMENT;
  v2->secureOriginCount = 0;
  do
  {
    if ( CL_StreamViews_IsManualViewSet(v3, (LocalClientNum_t)v1) )
    {
      _RDI = CL_StreamViews_GetManualViewOrigin(v3, (LocalClientNum_t)v1);
      if ( v2->secureOriginCount >= 5 )
      {
        LODWORD(v18) = 5;
        LODWORD(v16) = v2->secureOriginCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( this->secureOriginCount ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "this->secureOriginCount doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", v16, v18) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rdi] }
      v6 = s_cgdistancecache_aab_Z;
      v7 = s_cgdistancecache_aab_Y;
      v8 = s_cgdistancecache_aab_X;
      __asm { vmovss  [rsp+78h+arg_0], xmm0 }
      v9 = (__int64)&v2->secureOrigins[v2->secureOriginCount];
      if ( (v20 & 0x7F800000) == 2139095040 )
        goto LABEL_18;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  [rsp+78h+arg_0], xmm0
      }
      if ( (v21 & 0x7F800000) == 2139095040 )
        goto LABEL_18;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  [rsp+78h+arg_0], xmm0
      }
      if ( (v22 & 0x7F800000) == 2139095040 )
      {
LABEL_18:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v12 = _RDI->v[2];
      v13 = v9 ^ LODWORD(_RDI->v[0]) ^ ~v8;
      v14 = v13 ^ v9 ^ LODWORD(_RDI->v[1]);
      *(_DWORD *)v9 = v13;
      v15 = v7 ^ v14;
      *(_DWORD *)(v9 + 4) = v15;
      *(_DWORD *)(v9 + 8) = v6 ^ v15 ^ v9 ^ LODWORD(v12);
      ++v2->secureOriginCount;
      memset(&v23, 0, sizeof(v23));
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
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  v3 = viewIndex;
  _RSI = outOrigin;
  if ( viewIndex >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( ( sizeof( *array_counter( this->secureOrigins ) ) + 0 ) )", "viewIndex doesn't index ARRAY_COUNT( this->secureOrigins )\n\t%i not in [0, %i)", viewIndex, 5) )
    __debugbreak();
  if ( (unsigned int)v3 >= this->secureOriginCount )
  {
    LODWORD(v15) = this->secureOriginCount;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_distance_cache_mp.cpp", 93, ASSERT_TYPE_ASSERT, "(unsigned)( viewIndex ) < (unsigned)( this->secureOriginCount )", "viewIndex doesn't index this->secureOriginCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v6 = s_cgdistancecache_aab_Y;
  v7 = this->secureOrigins[v3].v[0];
  v8 = (_DWORD)this + 12 * v3 + 8;
  v9 = this->secureOrigins[v3].v[1];
  v10 = v8 ^ ~s_cgdistancecache_aab_X;
  LODWORD(_RSI->v[2]) = LODWORD(v9) ^ s_cgdistancecache_aab_Z ^ v8 ^ LODWORD(this->secureOrigins[v3].v[2]);
  LODWORD(_RSI->v[1]) = v6 ^ LODWORD(v7) ^ LODWORD(v9) ^ v8;
  memset(&v16, 0, sizeof(v16));
  LODWORD(_RSI->v[0]) = LODWORD(v7) ^ v10;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

