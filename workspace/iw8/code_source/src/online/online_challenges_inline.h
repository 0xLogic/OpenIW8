/*
==============
OnlineChallengesManager::AddToXPCache
==============
*/

void __fastcall OnlineChallengesManager::AddToXPCache(OnlineChallengesManager *this, bdUserAccountID *xuid, bdUserAccountID *first_party_xuid, bdPlatformID platform, CachedChallengeEventData *data, bool isPremium)
{
  ?AddToXPCache@OnlineChallengesManager@@AEAAXVbdUserAccountID@@0W4bdPlatformID@@PEAUCachedChallengeEventData@@_N@Z(this, xuid, first_party_xuid, platform, data, isPremium);
}

/*
==============
OnlineChallengesManager::AddToEventCache
==============
*/

void __fastcall OnlineChallengesManager::AddToEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType, bdUserAccountID *xuid, bdUserAccountID *first_party_xuid, bdPlatformID platform, CachedChallengeEventData *data, bool isPremium)
{
  ?AddToEventCache@OnlineChallengesManager@@AEAAXW4ChallengeEventCacheType@@VbdUserAccountID@@1W4bdPlatformID@@PEAUCachedChallengeEventData@@_N@Z(this, cacheType, xuid, first_party_xuid, platform, data, isPremium);
}

/*
==============
OnlineChallengesManager::RecordEventForPlayer
==============
*/

void __fastcall OnlineChallengesManager::RecordEventForPlayer(OnlineChallengesManager *this, const int controllerIndex, const XUID xuid, const char *eventName, const char *eventParams, const unsigned __int64 timestamp)
{
  ?RecordEventForPlayer@OnlineChallengesManager@@QEAAXHUXUID@@PEBD1_K@Z(this, controllerIndex, xuid, eventName, eventParams, timestamp);
}

/*
==============
OnlineChallengesManager::AddToEventCache
==============
*/
void OnlineChallengesManager::AddToEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType, bdUserAccountID *xuid, bdUserAccountID *first_party_xuid, bdPlatformID platform, CachedChallengeEventData *data, bool isPremium)
{
  bdUserAccountID *v7; 
  bdUserAccountID *v8; 
  ChallengeEventCacheType v9; 
  OnlineChallengesManager *v10; 
  CachedChallengeEventData *v11; 
  unsigned __int8 *p_params_amount; 
  unsigned __int8 params_amount; 
  int v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  __int64 v17; 
  ChallengeEventCache *v18; 
  int v19; 
  int eventCount; 
  __int64 events; 
  bool v22; 
  unsigned int operatorParamIndex; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  bdReferencable *v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 cacheTypec; 
  __int64 cacheTypeb; 
  __int64 v39; 

  v7 = first_party_xuid;
  v8 = xuid;
  v9 = cacheType;
  v10 = this;
  v11 = data;
  p_params_amount = &data->params_amount;
  params_amount = data->params_amount;
  v14 = 0;
  if ( params_amount > 4u )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges_inline.h", 103, ASSERT_TYPE_ASSERT, "( 0 ) <= ( data->params_amount ) && ( data->params_amount ) <= ( 4 )", "data->params_amount not in [0, ONLINE_CHALLENGES_MAX_EVENT_CACHE_PARAMS]\n\t%i not in [%i, %i]", params_amount, 0i64, 4) )
      __debugbreak();
    v9 = cacheType;
    v10 = this;
  }
  v15 = *p_params_amount;
  if ( *p_params_amount > 4u )
    goto LABEL_47;
  v16 = v15;
  if ( !v15 )
    goto LABEL_47;
  v17 = 0i64;
  while ( !data->params[v17] )
  {
    if ( ++v17 >= v16 )
      goto LABEL_47;
  }
  v18 = &v10->m_caches[v9];
  v19 = 0;
  eventCount = v18->eventCount;
  if ( v18->eventCount <= 0 )
  {
LABEL_38:
    v29 = (__int64)&v18->events[(__int64)eventCount];
    v18->eventCount = eventCount + 1;
    bdUserAccountID::operator=(&v18->events[(__int64)eventCount].xuid, v8);
    *(_BYTE *)v29 = isPremium;
    bdUserAccountID::operator=((bdUserAccountID *)(v29 + 80), v7);
    *(_DWORD *)(v29 + 152) = platform;
    *(_DWORD *)(v29 + 156) = *p_params_amount;
    if ( *p_params_amount )
    {
      v30 = v29 + 168;
      do
      {
        if ( !*(_BYTE *)(v30 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        *(_DWORD *)v30 += *(_DWORD *)(v30 + 4);
        *(_DWORD *)(v30 - 8) = LODWORD(v11->params[0]) ^ (((v30 - 8) ^ *(_DWORD *)v30) * (((v30 - 8) ^ *(_DWORD *)v30) + 2));
        *(_DWORD *)(v30 - 4) = (((v30 - 4) ^ *(_DWORD *)v30) * (((v30 - 4) ^ *(_DWORD *)v30) + 2)) ^ HIDWORD(v11->params[0]);
        ++v14;
        v30 += 24i64;
        v11 = (CachedChallengeEventData *)((char *)v11 + 8);
      }
      while ( v14 < *p_params_amount );
      v8 = xuid;
      v7 = first_party_xuid;
    }
    if ( v18->eventCount == 64 )
      OnlineChallengesManager::FlushEventCache(this, cacheType);
LABEL_47:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v8->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v8->gap38);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v7->gap38);
    v28 = (bdReferencable *)v7->gap38;
    goto LABEL_48;
  }
  events = (__int64)v10->m_caches[v9].events;
  while ( 1 )
  {
    v22 = bdUserAccountID::operator==((bdUserAccountID *)(events + 8), v8);
    operatorParamIndex = v18->operatorParamIndex;
    if ( operatorParamIndex != 4 )
      break;
    if ( v22 )
      goto LABEL_22;
LABEL_36:
    ++v19;
    events += 256i64;
    eventCount = v18->eventCount;
    v8 = xuid;
    if ( v19 >= v18->eventCount )
    {
      v7 = first_party_xuid;
      goto LABEL_38;
    }
  }
  if ( operatorParamIndex >= *p_params_amount )
  {
    LODWORD(v32) = *p_params_amount;
    LODWORD(v31) = v18->operatorParamIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges_inline.h", 137, ASSERT_TYPE_ASSERT, "(unsigned)( cache->operatorParamIndex ) < (unsigned)( data->params_amount )", "cache->operatorParamIndex doesn't index data->params_amount\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  if ( !v22 )
    goto LABEL_36;
  v24 = v18->operatorParamIndex;
  v25 = events + 24 * v24 + 160;
  if ( !*(_BYTE *)(events + 24 * v24 + 176) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(v39) = *(_DWORD *)v25 ^ ((v25 ^ *(_DWORD *)(v25 + 8)) * ((v25 ^ *(_DWORD *)(v25 + 8)) + 2));
  HIDWORD(v39) = (((v25 + 4) ^ *(_DWORD *)(v25 + 8)) * (((v25 + 4) ^ *(_DWORD *)(v25 + 8)) + 2)) ^ *(_DWORD *)(v25 + 4);
  if ( v39 != data->params[v18->operatorParamIndex] )
    goto LABEL_36;
LABEL_22:
  if ( *p_params_amount )
  {
    v26 = 0i64;
    do
    {
      if ( operatorParamIndex == 4 || v14 != v18->operatorParamIndex )
      {
        if ( !*(_BYTE *)(events + v26 + 176) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        LODWORD(cacheTypec) = *(_DWORD *)(events + v26 + 160) ^ (((events + v26 + 160) ^ *(_DWORD *)(events + v26 + 168)) * (((events + v26 + 160) ^ *(_DWORD *)(events + v26 + 168)) + 2));
        v27 = (events + v26 + 164) ^ *(_DWORD *)(events + v26 + 168);
        HIDWORD(cacheTypec) = *(_DWORD *)(events + v26 + 164) ^ (v27 * (v27 + 2));
        cacheTypeb = v11->params[0] + cacheTypec;
        if ( !*(_BYTE *)(events + v26 + 176) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        *(_DWORD *)(events + v26 + 168) += *(_DWORD *)(events + v26 + 172);
        *(_DWORD *)(events + v26 + 160) = cacheTypeb ^ (((events + v26 + 160) ^ *(_DWORD *)(events + v26 + 168)) * (((events + v26 + 160) ^ *(_DWORD *)(events + v26 + 168)) + 2));
        *(_DWORD *)(events + v26 + 164) = (((events + v26 + 164) ^ *(_DWORD *)(events + v26 + 168)) * (((events + v26 + 164) ^ *(_DWORD *)(events + v26 + 168)) + 2)) ^ HIDWORD(cacheTypeb);
        p_params_amount = &data->params_amount;
      }
      ++v14;
      v11 = (CachedChallengeEventData *)((char *)v11 + 8);
      v26 += 24i64;
    }
    while ( v14 < *p_params_amount );
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)xuid->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)xuid->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)first_party_xuid->gap38);
  v28 = (bdReferencable *)first_party_xuid->gap38;
LABEL_48:
  bdReferencable::~bdReferencable(v28);
}

/*
==============
OnlineChallengesManager::AddToXPCache
==============
*/
void OnlineChallengesManager::AddToXPCache(OnlineChallengesManager *this, bdUserAccountID *xuid, bdUserAccountID *first_party_xuid, bdPlatformID platform, CachedChallengeEventData *data, bool isPremium)
{
  int v10; 
  int v11; 
  int v12; 
  int m_xpCacheAmount; 
  ChallengeXPCache *v14; 
  ChallengeXPCache *v15; 
  int v16; 
  __int64 weapon_amount; 
  ChallengeWeaponXPCache *weapon; 
  __int64 p_amount; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  unsigned __int64 v36; 

  v36 = data->params[0];
  v29 = data->params[0];
  v10 = data->params[2];
  v24 = v10;
  v35 = data->params[3];
  v34 = data->params[4];
  v11 = 0;
  v12 = 0;
  m_xpCacheAmount = this->m_xpCacheAmount;
  if ( m_xpCacheAmount <= 0 )
  {
LABEL_5:
    v15 = &this->m_xpCache[m_xpCacheAmount];
    bdUserAccountID::operator=(&this->m_xpCache[m_xpCacheAmount].xuid, xuid);
    v15->is_premium = isPremium;
    bdUserAccountID::operator=(&v15->first_party_xuid, first_party_xuid);
    v15->platform = platform;
    if ( !v15->xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v15->xp_amount.secureInt64_aab += v15->xp_amount.secureInt64_set_aab;
    LODWORD(v15->xp_amount.data) = v36 ^ ((((_DWORD)v15 + 160) ^ v15->xp_amount.secureInt64_aab) * ((((_DWORD)v15 + 160) ^ v15->xp_amount.secureInt64_aab) + 2));
    HIDWORD(v15->xp_amount.data) = ((((_DWORD)v15 + 164) ^ v15->xp_amount.secureInt64_aab) * ((((_DWORD)v15 + 164) ^ v15->xp_amount.secureInt64_aab) + 2)) ^ HIDWORD(v29);
    if ( !v15->battlepass_xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v15->battlepass_xp_amount.secureInt64_aab += v15->battlepass_xp_amount.secureInt64_set_aab;
    LODWORD(v15->battlepass_xp_amount.data) = v34 ^ ((((_DWORD)v15 + 184) ^ v15->battlepass_xp_amount.secureInt64_aab) * ((((_DWORD)v15 + 184) ^ v15->battlepass_xp_amount.secureInt64_aab) + 2));
    HIDWORD(v15->battlepass_xp_amount.data) = ((v15->battlepass_xp_amount.secureInt64_aab ^ ((_DWORD)v15 + 188)) * ((v15->battlepass_xp_amount.secureInt64_aab ^ ((_DWORD)v15 + 188)) + 2)) ^ (v34 >> 31);
    if ( (unsigned int)(v10 - 1) <= 0x270E )
    {
      if ( !v15->weapon[0].amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v15->weapon[0].amount.secureInt64_aab += v15->weapon[0].amount.secureInt64_set_aab;
      LODWORD(v15->weapon[0].amount.data) = v35 ^ ((((_DWORD)v15 + 216) ^ v15->weapon[0].amount.secureInt64_aab) * ((((_DWORD)v15 + 216) ^ v15->weapon[0].amount.secureInt64_aab) + 2));
      HIDWORD(v15->weapon[0].amount.data) = ((((_DWORD)v15 + 220) ^ v15->weapon[0].amount.secureInt64_aab) * ((((_DWORD)v15 + 220) ^ v15->weapon[0].amount.secureInt64_aab) + 2)) ^ (v35 >> 31);
      v15->weapon[0].weaponID = v24;
      v15->weapon_amount = 1;
    }
    if ( ++this->m_xpCacheAmount == 64 )
      OnlineChallengesManager::FlushXPCache(this);
  }
  else
  {
    while ( 1 )
    {
      v14 = &this->m_xpCache[v12];
      if ( bdUserAccountID::operator==(&this->m_xpCache[v12].xuid, xuid) )
        break;
      ++v12;
      m_xpCacheAmount = this->m_xpCacheAmount;
      if ( v12 >= m_xpCacheAmount )
      {
        v10 = v24;
        goto LABEL_5;
      }
    }
    if ( !this->m_xpCache[v12].xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    LODWORD(v30) = LODWORD(v14->xp_amount.data) ^ ((((_DWORD)v14 + 160) ^ v14->xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 160) ^ v14->xp_amount.secureInt64_aab) + 2));
    HIDWORD(v30) = ((((_DWORD)v14 + 164) ^ v14->xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 164) ^ v14->xp_amount.secureInt64_aab) + 2)) ^ HIDWORD(v14->xp_amount.data);
    v31 = v36 + v30;
    if ( !this->m_xpCache[v12].xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    this->m_xpCache[v12].xp_amount.secureInt64_aab += this->m_xpCache[v12].xp_amount.secureInt64_set_aab;
    LODWORD(v14->xp_amount.data) = v31 ^ ((((_DWORD)v14 + 160) ^ v14->xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 160) ^ v14->xp_amount.secureInt64_aab) + 2));
    HIDWORD(v14->xp_amount.data) = ((((_DWORD)v14 + 164) ^ v14->xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 164) ^ v14->xp_amount.secureInt64_aab) + 2)) ^ HIDWORD(v31);
    if ( !this->m_xpCache[v12].battlepass_xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    LODWORD(v32) = LODWORD(v14->battlepass_xp_amount.data) ^ ((((_DWORD)v14 + 184) ^ v14->battlepass_xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 184) ^ v14->battlepass_xp_amount.secureInt64_aab) + 2));
    HIDWORD(v32) = ((((_DWORD)v14 + 188) ^ v14->battlepass_xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 188) ^ v14->battlepass_xp_amount.secureInt64_aab) + 2)) ^ HIDWORD(v14->battlepass_xp_amount.data);
    v33 = v34 + v32;
    if ( !this->m_xpCache[v12].battlepass_xp_amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    this->m_xpCache[v12].battlepass_xp_amount.secureInt64_aab += this->m_xpCache[v12].battlepass_xp_amount.secureInt64_set_aab;
    LODWORD(v14->battlepass_xp_amount.data) = v33 ^ ((((_DWORD)v14 + 184) ^ v14->battlepass_xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 184) ^ v14->battlepass_xp_amount.secureInt64_aab) + 2));
    HIDWORD(v14->battlepass_xp_amount.data) = ((((_DWORD)v14 + 188) ^ v14->battlepass_xp_amount.secureInt64_aab) * ((((_DWORD)v14 + 188) ^ v14->battlepass_xp_amount.secureInt64_aab) + 2)) ^ HIDWORD(v33);
    v16 = v24;
    if ( (unsigned int)(v24 - 1) <= 0x270E )
    {
      weapon_amount = v14->weapon_amount;
      if ( (int)weapon_amount <= 0 )
      {
LABEL_36:
        p_amount = (__int64)&v14->weapon[weapon_amount].amount;
        if ( !v14->weapon[weapon_amount].amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        LODWORD(v25) = *(_DWORD *)p_amount ^ ((p_amount ^ *(_DWORD *)(p_amount + 8)) * ((p_amount ^ *(_DWORD *)(p_amount + 8)) + 2));
        HIDWORD(v25) = (((p_amount + 4) ^ *(_DWORD *)(p_amount + 8)) * (((p_amount + 4) ^ *(_DWORD *)(p_amount + 8)) + 2)) ^ *(_DWORD *)(p_amount + 4);
        v26 = v35 + v25;
        v20 = v14->weapon_amount;
        v21 = (__int64)&v14->weapon[v20].amount;
        if ( !v14->weapon[v20].amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        *(_DWORD *)(v21 + 8) += *(_DWORD *)(v21 + 12);
        *(_DWORD *)v21 = v26 ^ ((v21 ^ *(_DWORD *)(v21 + 8)) * ((v21 ^ *(_DWORD *)(v21 + 8)) + 2));
        *(_DWORD *)(v21 + 4) = ((*(_DWORD *)(v21 + 8) ^ (v21 + 4)) * ((*(_DWORD *)(v21 + 8) ^ (v21 + 4)) + 2)) ^ HIDWORD(v26);
        v14->weapon[v14->weapon_amount++].weaponID = v16;
      }
      else
      {
        weapon = v14->weapon;
        while ( weapon->weaponID != v24 )
        {
          ++v11;
          ++weapon;
          if ( v11 >= (int)weapon_amount )
            goto LABEL_36;
        }
        v22 = v11;
        v23 = (__int64)&v14->weapon[v22].amount;
        if ( !v14->weapon[v22].amount.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        LODWORD(v27) = *(_DWORD *)v23 ^ ((v23 ^ *(_DWORD *)(v23 + 8)) * ((v23 ^ *(_DWORD *)(v23 + 8)) + 2));
        HIDWORD(v27) = (((v23 + 4) ^ *(_DWORD *)(v23 + 8)) * (((v23 + 4) ^ *(_DWORD *)(v23 + 8)) + 2)) ^ *(_DWORD *)(v23 + 4);
        v28 = v35 + v27;
        if ( !*(_BYTE *)(v23 + 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 350, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
          __debugbreak();
        *(_DWORD *)(v23 + 8) += *(_DWORD *)(v23 + 12);
        *(_DWORD *)v23 = v28 ^ ((v23 ^ *(_DWORD *)(v23 + 8)) * ((v23 ^ *(_DWORD *)(v23 + 8)) + 2));
        *(_DWORD *)(v23 + 4) = (((v23 + 4) ^ *(_DWORD *)(v23 + 8)) * (((v23 + 4) ^ *(_DWORD *)(v23 + 8)) + 2)) ^ HIDWORD(v28);
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)xuid->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)xuid->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)first_party_xuid->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)first_party_xuid->gap38);
}

/*
==============
OnlineChallengesManager::RecordEventForPlayer
==============
*/
void OnlineChallengesManager::RecordEventForPlayer(OnlineChallengesManager *this, const int controllerIndex, const XUID xuid, const char *eventName, const char *eventParams, const unsigned __int64 timestamp)
{
  const char *v6; 
  int v7; 
  OnlineChallengesManager *v8; 
  const char *v9; 
  const dvar_t *v10; 
  int v11; 
  __int64 v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  bool IsPaid; 
  Online_Commerce *Instance; 
  Online_Commerce *v17; 
  bool v18; 
  Online_Commerce *v19; 
  bool HavePaidEntitlement; 
  unsigned __int64 m_id; 
  PartyData *ServerLobby; 
  unsigned int MemberByXUID; 
  int v24; 
  char MemberPlatform; 
  const dvar_t *v26; 
  char ActiveGameMode; 
  GHandler *Handler; 
  __int64 v29; 
  unsigned __int8 *v30; 
  int v31; 
  int v32; 
  int v34; 
  int v35; 
  const char *v36; 
  unsigned __int64 v37; 
  const char *v38; 
  unsigned __int64 v39; 
  const char *v40; 
  const char *v41; 
  unsigned __int64 v42; 
  const char *v43; 
  unsigned __int64 v44; 
  bdPlatformID v45; 
  __int64 v46; 
  unsigned __int8 *v47; 
  int v48; 
  int v49; 
  int v51; 
  int v52; 
  bdUserAccountID *v53; 
  bdUserAccountID *v54; 
  bdUserAccountID *v55; 
  __int64 v56; 
  unsigned __int8 *v57; 
  int v58; 
  int v59; 
  int v61; 
  int v62; 
  bdUserAccountID *v63; 
  bdUserAccountID *v64; 
  bdUserAccountID *v65; 
  __int64 v66; 
  unsigned __int8 *v67; 
  int v68; 
  int v69; 
  int v71; 
  int v72; 
  __int64 v73; 
  unsigned __int8 *v74; 
  int v75; 
  int v76; 
  int v78; 
  int v79; 
  bdUserAccountID *v80; 
  bdUserAccountID *v81; 
  bdUserAccountID *v82; 
  __int64 v83; 
  unsigned __int8 *v84; 
  int v85; 
  int v86; 
  int v88; 
  int v89; 
  bdUserAccountID *v90; 
  bdUserAccountID *v91; 
  bdUserAccountID *v92; 
  __int64 v93; 
  unsigned __int8 *v94; 
  int v95; 
  int v96; 
  int v98; 
  int v99; 
  bdUserAccountID *v100; 
  bdUserAccountID *v101; 
  bdUserAccountID *v102; 
  unsigned int params_amount; 
  unsigned int v104; 
  CachedChallengeEventData *p_data; 
  const char *v106; 
  unsigned __int64 KeyValue; 
  unsigned __int64 v108; 
  unsigned __int64 v109; 
  DWServicesAccess *v110; 
  DWAchievementEngineClient *AchievementEngineClient; 
  unsigned __int64 v112; 
  unsigned __int8 v113; 
  bool v114; 
  const char *AccountType; 
  unsigned __int64 v116; 
  const char *v117; 
  int v118; 
  int v119; 
  int v121; 
  int v122; 
  __int64 v123; 
  const char *v124; 
  bool v125; 
  unsigned __int64 userID; 
  OnlineChallengesManager *v128; 
  char *params; 
  bdUserAccountID v130; 
  __int64 v131; 
  CachedChallengeEventData data; 
  bdUserAccountID firstPartyUser; 
  bdUserAccountID other; 
  bdUserAccountID v135; 
  DLogContext context; 
  bdAchievementEvent achievementEvent; 
  char buffer[4096]; 
  XUID player; 

  player.m_id = xuid.m_id;
  v131 = -2i64;
  v6 = eventName;
  v7 = controllerIndex;
  v8 = this;
  v128 = this;
  v9 = eventParams;
  params = (char *)eventParams;
  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges_inline.h", 183, ASSERT_TYPE_ASSERT, "(eventName)", (const char *)&queryFormat, "eventName") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges_inline.h", 184, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  v10 = DVARBOOL_online_challenge_upload_enabled;
  if ( !DVARBOOL_online_challenge_upload_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    userID = XUID::GetUniversalId(&player);
    bdUserAccountID::bdUserAccountID(&v135, &userID);
    bdUserAccountID::setAccountType(&v135, "uno");
    bdUserAccountID::bdUserAccountID(&firstPartyUser);
    v11 = 0;
    v12 = 0x7FFFFFFFi64;
    if ( Live_XUIDIsLocalPlayer(player) )
    {
      userID = XUID::GetPlatformIdFromXuid(player);
      bdUserAccountID::bdUserAccountID(&other, &userID);
      bdUserAccountID::operator=(&firstPartyUser, &other);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
      v13 = DVARBOOL_com_force_free_to_play;
      if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled )
      {
        v14 = DVARBOOL_com_force_premium;
        if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( v14->current.enabled )
        {
          IsPaid = 1;
LABEL_33:
          v125 = IsPaid;
LABEL_34:
          bdUserAccountID::setAccountType(&firstPartyUser, "xbl");
          LODWORD(userID) = 107;
          goto LABEL_45;
        }
        if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
        {
          IsPaid = 1;
          goto LABEL_33;
        }
        Instance = Online_Commerce::GetInstance();
        v18 = 1;
        if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, v7) != ENTITLEMENT_STATE_COMPLETE )
        {
          v17 = Online_Commerce::GetInstance();
          if ( Online_Commerce::GetPaidEntitlementTaskState(v17, v7) != ENTITLEMENT_STATE_ERROR )
            v18 = 0;
        }
        v19 = Online_Commerce::GetInstance();
        HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v19, v7);
        if ( Live_IsUserSignedInToLive(v7) && v18 && HavePaidEntitlement )
        {
          IsPaid = 1;
          goto LABEL_33;
        }
      }
      IsPaid = 0;
      goto LABEL_33;
    }
    if ( !Lobby_AreWeHost() )
    {
      AccountType = bdUserAccountID::getAccountType(&v135);
      v116 = bdUserAccountID::getUserID(&v135);
      Com_PrintError(25, "Trying to send an AE event for a player that is not in the game or local (%zu %s)\n", v116, AccountType);
      goto LABEL_92;
    }
    m_id = player.m_id;
    ServerLobby = SV_MainMP_GetServerLobby();
    MemberByXUID = Party_FindMemberByXUID(ServerLobby, (const XUID)m_id);
    v24 = MemberByXUID;
    if ( MemberByXUID == -1 )
      goto LABEL_163;
    MemberPlatform = Party_GetMemberPlatform(ServerLobby, MemberByXUID);
    userID = Party_GetPlatformId(ServerLobby, v24);
    bdUserAccountID::bdUserAccountID(&other, &userID);
    bdUserAccountID::operator=(&firstPartyUser, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    IsPaid = Party_PartyMemberIsPaid(ServerLobby, v24);
    v125 = IsPaid;
    if ( MemberPlatform <= 0 )
      goto LABEL_163;
    if ( MemberPlatform <= 2 )
    {
      bdUserAccountID::setAccountType(&firstPartyUser, "bnet");
      LODWORD(userID) = 113;
    }
    else
    {
      if ( MemberPlatform == 3 )
        goto LABEL_34;
      if ( MemberPlatform != 4 )
      {
        if ( MemberPlatform == 5 )
        {
          bdUserAccountID::setAccountType(&firstPartyUser, "wecn");
          LODWORD(userID) = 115;
          goto LABEL_45;
        }
LABEL_163:
        v8 = v128;
        goto LABEL_92;
      }
      bdUserAccountID::setAccountType(&firstPartyUser, "psn");
      LODWORD(userID) = 109;
    }
LABEL_45:
    v26 = DVARBOOL_online_challenge_free_kill_events_enabled;
    if ( !DVARBOOL_online_challenge_free_kill_events_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_free_kill_events_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( !v26->current.enabled )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      Handler = GHandler::getHandler();
      if ( ActiveGameMode == 2 && !BG_IsGameTypeQuick_BR(Handler) && !IsPaid )
      {
        v29 = 0x7FFFFFFFi64;
        v30 = (unsigned __int8 *)v6;
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        do
        {
          v31 = v30["kill" - v6];
          v32 = *v30++;
          if ( !v29-- )
            break;
          if ( v31 != v32 )
          {
            v34 = v31 + 32;
            if ( (unsigned int)(v31 - 65) > 0x19 )
              v34 = v31;
            v31 = v34;
            v35 = v32 + 32;
            if ( (unsigned int)(v32 - 65) > 0x19 )
              v35 = v32;
            if ( v31 != v35 )
              goto LABEL_64;
          }
        }
        while ( v31 );
        v36 = bdUserAccountID::getAccountType(&firstPartyUser);
        v37 = bdUserAccountID::getUserID(&firstPartyUser);
        v38 = bdUserAccountID::getAccountType(&v135);
        v39 = bdUserAccountID::getUserID(&v135);
        LODWORD(v123) = userID;
        Com_Printf(25, "AE User - (%zu %s) (FP:%zu %s) (%d) (Paid:%s) - Ignoring MP only Kill event as it is kill switched for free users\n", v39, v38, v37, v36, v123, "False");
        Sys_LeaveCriticalSection(CRITSECT_ONLINE_CHALLENGES);
        goto LABEL_179;
      }
    }
LABEL_64:
    v40 = "False";
    if ( IsPaid )
      v40 = "True";
    v41 = bdUserAccountID::getAccountType(&firstPartyUser);
    v42 = bdUserAccountID::getUserID(&firstPartyUser);
    v43 = bdUserAccountID::getAccountType(&v135);
    v44 = bdUserAccountID::getUserID(&v135);
    v124 = v40;
    v45 = (int)userID;
    LODWORD(v123) = userID;
    Com_Printf(25, "AE User - (%zu %s) (FP:%zu %s) (%d) (Paid:%s)\n", v44, v43, v42, v41, v123, v124);
    v8 = v128;
    if ( OnlineChallengesManager::ProcessParams(v128, v6, params, &data) )
    {
      v46 = 0x7FFFFFFFi64;
      v47 = (unsigned __int8 *)v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v48 = v47["mp_addxp" - v6];
        v49 = *v47++;
        if ( !v46-- )
        {
LABEL_78:
          params = (char *)&v130;
          bdUserAccountID::bdUserAccountID(&v130, &firstPartyUser);
          v54 = v53;
          bdUserAccountID::bdUserAccountID(&other, &v135);
          OnlineChallengesManager::AddToXPCache(v8, v55, v54, v45, &data, v125);
          goto LABEL_91;
        }
        if ( v48 != v49 )
        {
          v51 = v48 + 32;
          if ( (unsigned int)(v48 - 65) > 0x19 )
            v51 = v48;
          v48 = v51;
          v52 = v49 + 32;
          if ( (unsigned int)(v49 - 65) > 0x19 )
            v52 = v49;
          if ( v48 != v52 )
            break;
        }
        if ( !v48 )
          goto LABEL_78;
      }
      v56 = 0x7FFFFFFFi64;
      v57 = (unsigned __int8 *)v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v58 = v57["pickup" - v6];
        v59 = *v57++;
        if ( !v56-- )
        {
LABEL_90:
          params = (char *)&v130;
          bdUserAccountID::bdUserAccountID(&v130, &firstPartyUser);
          v64 = v63;
          bdUserAccountID::bdUserAccountID(&other, &v135);
          OnlineChallengesManager::AddToEventCache(v8, CHALLENGE_EVENT_CACHE_PICKUP, v65, v64, v45, &data, v125);
          goto LABEL_91;
        }
        if ( v58 != v59 )
        {
          v61 = v58 + 32;
          if ( (unsigned int)(v58 - 65) > 0x19 )
            v61 = v58;
          v58 = v61;
          v62 = v59 + 32;
          if ( (unsigned int)(v59 - 65) > 0x19 )
            v62 = v59;
          if ( v58 != v62 )
            break;
        }
        if ( !v58 )
          goto LABEL_90;
      }
      v73 = 0x7FFFFFFFi64;
      v74 = (unsigned __int8 *)v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v75 = v74["driving" - v6];
        v76 = *v74++;
        if ( !v73-- )
        {
LABEL_115:
          params = (char *)&v130;
          bdUserAccountID::bdUserAccountID(&v130, &firstPartyUser);
          v81 = v80;
          bdUserAccountID::bdUserAccountID(&other, &v135);
          OnlineChallengesManager::AddToEventCache(v8, CHALLENGE_EVENT_CACHE_DRIVING, v82, v81, v45, &data, v125);
          goto LABEL_91;
        }
        if ( v75 != v76 )
        {
          v78 = v75 + 32;
          if ( (unsigned int)(v75 - 65) > 0x19 )
            v78 = v75;
          v75 = v78;
          v79 = v76 + 32;
          if ( (unsigned int)(v76 - 65) > 0x19 )
            v79 = v76;
          if ( v75 != v79 )
            break;
        }
        if ( !v75 )
          goto LABEL_115;
      }
      v83 = 0x7FFFFFFFi64;
      v84 = (unsigned __int8 *)v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v85 = v84["alive_in_gas" - v6];
        v86 = *v84++;
        if ( !v83-- )
        {
LABEL_127:
          params = (char *)&v130;
          bdUserAccountID::bdUserAccountID(&v130, &firstPartyUser);
          v91 = v90;
          bdUserAccountID::bdUserAccountID(&other, &v135);
          OnlineChallengesManager::AddToEventCache(v8, CHALLENGE_EVENT_CACHE_ALIVE_IN_GAS, v92, v91, v45, &data, v125);
          goto LABEL_91;
        }
        if ( v85 != v86 )
        {
          v88 = v85 + 32;
          if ( (unsigned int)(v85 - 65) > 0x19 )
            v88 = v85;
          v85 = v88;
          v89 = v86 + 32;
          if ( (unsigned int)(v86 - 65) > 0x19 )
            v89 = v86;
          if ( v85 != v89 )
            break;
        }
        if ( !v85 )
          goto LABEL_127;
      }
      v93 = 0x7FFFFFFFi64;
      v94 = (unsigned __int8 *)v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v95 = v94["alive_not_downed" - v6];
        v96 = *v94++;
        if ( !v93-- )
        {
LABEL_139:
          params = (char *)&other;
          bdUserAccountID::bdUserAccountID(&other, &firstPartyUser);
          v101 = v100;
          bdUserAccountID::bdUserAccountID(&v130, &v135);
          OnlineChallengesManager::AddToEventCache(v8, CHALLENGE_EVENT_CACHE_ALIVE_NOT_DOWNED, v102, v101, v45, &data, v125);
          goto LABEL_91;
        }
        if ( v95 != v96 )
        {
          v98 = v95 + 32;
          if ( (unsigned int)(v95 - 65) > 0x19 )
            v98 = v95;
          v95 = v98;
          v99 = v96 + 32;
          if ( (unsigned int)(v96 - 65) > 0x19 )
            v99 = v96;
          if ( v95 != v99 )
            break;
        }
        if ( !v95 )
          goto LABEL_139;
      }
      bdAchievementEvent::bdAchievementEvent(&achievementEvent);
      bdAchievementEvent::setName(&achievementEvent, v6);
      bdAchievementEvent::addKeyValue(&achievementEvent, "version", 1ui64);
      OnlineChallengesManager::AddGamemode(v8, v125, &achievementEvent);
      params_amount = data.params_amount;
      v104 = 0;
      if ( data.params_amount )
      {
        p_data = &data;
        do
        {
          v106 = j_va("Param%d", v104);
          bdAchievementEvent::addKeyValue(&achievementEvent, v106, p_data->params[0]);
          ++v104;
          p_data = (CachedChallengeEventData *)((char *)p_data + 8);
        }
        while ( (int)v104 < (int)params_amount );
      }
      bdAchievementEvent::setTimeStamp(&achievementEvent, timestamp);
      KeyValue = bdAchievementEvent::getKeyValue(&achievementEvent, "gamemode");
      v108 = data.params[1];
      v109 = data.params[0];
      Com_Printf(25, "AE Event (%d Params, Gamemode: %zu) - %zu, %zu, %zu, %zu, %zu, %zu, %zu, %zu, %zu, %zu\n", params_amount, KeyValue, data.params[0], data.params[1], data.params[2], data.params[3], data.params[4], data.params[5], data.params[6], data.params[7], data.params[8], data.params[9]);
      v110 = DWServicesAccess::GetInstance();
      AchievementEngineClient = DWServicesAccess::GetAchievementEngineClient(v110, controllerIndex);
      DWAchievementEngineClient::reportUserEvent(AchievementEngineClient, &v135, &firstPartyUser, (bdPlatformID)userID, &achievementEvent);
      v112 = bdAchievementEvent::getKeyValue(&achievementEvent, "gamemode");
      v113 = truncate_cast<unsigned char,unsigned __int64>(v112);
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
      {
        if ( DLog_IsActive() )
        {
          v114 = DLog_BeginEvent(&context, "dlog_event_achievement_engine_event");
          context.autoEndEvent = 1;
          if ( v114 && DLog_UInt8(&context, "game_mode", v113) && DLog_String(&context, "event_name", v6, 0) && DLog_UInt64(&context, "param0", v109) && DLog_UInt64(&context, "param1", v108) && DLog_UInt64(&context, "param2", data.params[2]) && DLog_UInt64(&context, "param3", data.params[3]) && DLog_UInt64(&context, "param4", data.params[4]) && DLog_UInt64(&context, "param5", data.params[5]) && DLog_UInt64(&context, "param6", data.params[6]) && DLog_UInt64(&context, "param7", data.params[7]) && DLog_UInt64(&context, "param8", data.params[8]) && DLog_UInt64(&context, "param9", data.params[9]) )
            DLog_RecordContext(&context);
        }
        else
        {
          context.error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      `eh vector destructor iterator'(&achievementEvent.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
      bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&achievementEvent.__vftable + 3));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&achievementEvent.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&achievementEvent.m_keyValues + 1));
      v8 = v128;
    }
LABEL_91:
    v7 = controllerIndex;
LABEL_92:
    Sys_LeaveCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    v66 = 0x7FFFFFFFi64;
    v67 = (unsigned __int8 *)v6;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v68 = v67["end_match" - v6];
      v69 = *v67++;
      if ( !v66-- )
        break;
      if ( v68 != v69 )
      {
        v71 = v68 + 32;
        if ( (unsigned int)(v68 - 65) > 0x19 )
          v71 = v68;
        v68 = v71;
        v72 = v69 + 32;
        if ( (unsigned int)(v69 - 65) > 0x19 )
          v72 = v69;
        if ( v68 != v72 )
        {
          if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v117 = (const char *)("match_placement" - v6);
          while ( 1 )
          {
            v118 = (unsigned __int8)v117[(_QWORD)v6];
            v119 = *(unsigned __int8 *)v6++;
            if ( !v12-- )
              goto LABEL_176;
            if ( v118 != v119 )
            {
              v121 = v118 + 32;
              if ( (unsigned int)(v118 - 65) > 0x19 )
                v121 = v118;
              v118 = v121;
              v122 = v119 + 32;
              if ( (unsigned int)(v119 - 65) > 0x19 )
                v122 = v119;
              if ( v118 != v122 )
                goto LABEL_179;
            }
            if ( !v118 )
              goto LABEL_176;
          }
        }
      }
    }
    while ( v68 );
LABEL_176:
    OnlineChallengesManager::FlushXPCache(v8);
    do
      OnlineChallengesManager::FlushEventCache(v8, (ChallengeEventCacheType)v11++);
    while ( v11 < 4 );
    v8->m_aeFetchState[v7] = 1;
LABEL_179:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUser.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)firstPartyUser.gap38);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v135.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v135.gap38);
  }
}

