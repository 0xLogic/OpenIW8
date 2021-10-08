/*
==============
CgSimBulletFirePellet_StartWorkers
==============
*/

void __fastcall CgSimBulletFirePellet_StartWorkers(LocalClientNum_t localClientNum)
{
  ?CgSimBulletFirePellet_StartWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSimBulletFirePellet_ExecuteWorkerThread
==============
*/

void __fastcall CgSimBulletFirePellet_ExecuteWorkerThread(const void *const cmdInfo)
{
  ?CgSimBulletFirePellet_ExecuteWorkerThread@@YAXQEBX@Z(cmdInfo);
}

/*
==============
CgSimBulletFirePellet_ProcessEvents
==============
*/

void __fastcall CgSimBulletFirePellet_ProcessEvents(LocalClientNum_t localClientNum)
{
  ?CgSimBulletFirePellet_ProcessEvents@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSimBulletFirePellet_WaitForWorkers
==============
*/

void __fastcall CgSimBulletFirePellet_WaitForWorkers(LocalClientNum_t localClientNum)
{
  ?CgSimBulletFirePellet_WaitForWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate
==============
*/

bool __fastcall CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(const cg_t *const cgameGlob)
{
  return ?CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate@@YA_NQEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CgSimBulletFirePellet_AreWorkersEnabled
==============
*/

bool __fastcall CgSimBulletFirePellet_AreWorkersEnabled()
{
  return ?CgSimBulletFirePellet_AreWorkersEnabled@@YA_NXZ();
}

/*
==============
CgSimBulletFirePellet_TryToPrepareWorker
==============
*/

bool __fastcall CgSimBulletFirePellet_TryToPrepareWorker(LocalClientNum_t localClientNum, SimulateBulletFirePelletData *pelletData)
{
  return ?CgSimBulletFirePellet_TryToPrepareWorker@@YA_NW4LocalClientNum_t@@PEAUSimulateBulletFirePelletData@@@Z(localClientNum, pelletData);
}

/*
==============
CgSimBulletFirePellet_EnableWorkers
==============
*/

void __fastcall CgSimBulletFirePellet_EnableWorkers(bool enable)
{
  ?CgSimBulletFirePellet_EnableWorkers@@YAX_N@Z(enable);
}

/*
==============
CgSimBulletFirePellet_Reset
==============
*/

void CgSimBulletFirePellet_Reset(void)
{
  ?CgSimBulletFirePellet_Reset@@YAXXZ();
}

/*
==============
CgSimBulletFirePellet_GetQueueEntry
==============
*/

CgSimBulletFirePellet_MainThreadEvent_QueueEntry *__fastcall CgSimBulletFirePellet_GetQueueEntry()
{
  return ?CgSimBulletFirePellet_GetQueueEntry@@YAPEAUCgSimBulletFirePellet_MainThreadEvent_QueueEntry@@XZ();
}

/*
==============
CgSimBulletFirePellet_AddToDelayedEvents
==============
*/
void CgSimBulletFirePellet_AddToDelayedEvents(const LocalClientNum_t localClientNum, const CgSimBulletFirePellet_MainThreadEvent *event)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::pool_allocator_freelist<176> *p_m_freelist; 
  int v21; 

  v2 = localClientNum;
  _RDI = event;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v21 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 200, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v21) )
      __debugbreak();
  }
  v4 = v2;
  v5 = 0i64;
  p_m_listHead = &s_delayedImpactEvents[v2].m_listHead;
  mp_next = s_delayedImpactEvents[v2].m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    goto LABEL_8;
  do
  {
    mp_next = mp_next->mp_next;
    ++v5;
  }
  while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
  if ( v5 < 0x100 )
  {
LABEL_8:
    p_m_freelist = &s_delayedImpactEvents[v4].m_freelist;
    if ( !p_m_freelist->m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<176> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0xB0ui64, 0x100ui64) )
      __debugbreak();
    _R8 = (ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    _R8->mp_prev = NULL;
    _R8->mp_next = NULL;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [r8+10h], xmm0
      vmovups xmm1, xmmword ptr [rdi+10h]
      vmovups xmmword ptr [r8+20h], xmm1
      vmovups xmm0, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [r8+30h], xmm0
      vmovups xmm1, xmmword ptr [rdi+30h]
      vmovups xmmword ptr [r8+40h], xmm1
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [r8+50h], xmm0
      vmovups xmm1, xmmword ptr [rdi+50h]
      vmovups xmmword ptr [r8+60h], xmm1
      vmovups xmm0, xmmword ptr [rdi+60h]
      vmovups xmmword ptr [r8+70h], xmm0
      vmovups xmm0, xmmword ptr [rdi+70h]
      vmovups xmmword ptr [r8+80h], xmm0
      vmovups xmm1, xmmword ptr [rdi+80h]
      vmovups xmmword ptr [r8+90h], xmm1
      vmovups xmm0, xmmword ptr [rdi+90h]
      vmovups xmmword ptr [r8+0A0h], xmm0
    }
    ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent>>::insert_before(&s_delayedImpactEvents[v4].m_listHead, (ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> *)&s_delayedImpactEvents[v4].m_listHead, _R8);
  }
  else
  {
    Com_PrintError(1, "CgSimBulletFirePellet_AddToDelayedEvents dropped an event because we hit the limit of MAX_SIM_BULLET_FIRE_PELLET_MAIN_THREAD_EVENTS (%d) events\n", 256i64);
  }
}

/*
==============
CgSimBulletFirePellet_AreWorkersEnabled
==============
*/
_BOOL8 CgSimBulletFirePellet_AreWorkersEnabled()
{
  return s_cgSimBulletFirePelletWorkersEnabled;
}

/*
==============
CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate
==============
*/
bool CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(const cg_t *const cgameGlob)
{
  __int64 localClientNum; 
  bool result; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 170, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( cgameGlob->renderingThirdPerson )
    return 1;
  result = BG_IsThirdPersonMode(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState);
  if ( result )
    return 1;
  return result;
}

/*
==============
CgSimBulletFirePellet_EnableWorkers
==============
*/
void CgSimBulletFirePellet_EnableWorkers(bool enable)
{
  if ( s_cgSimBulletFirePelletWorkersEnabled == enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 59, ASSERT_TYPE_ASSERT, "(s_cgSimBulletFirePelletWorkersEnabled != enable)", (const char *)&queryFormat, "s_cgSimBulletFirePelletWorkersEnabled != enable") )
    __debugbreak();
  s_cgSimBulletFirePelletWorkersEnabled = enable;
}

/*
==============
CgSimBulletFirePellet_ExecuteQueueEntry
==============
*/
void CgSimBulletFirePellet_ExecuteQueueEntry(LocalClientNum_t localClientNum, CgSimBulletFirePellet_MainThreadEvent_QueueEntry *entry)
{
  CgWeaponSystem *WeaponSystem; 
  int time; 
  int spawnDelay; 
  bool isAlternate; 
  const TagPair *v9; 
  float normal; 
  TagPair v11; 

  _RSI = entry;
  if ( !entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 215, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  if ( !_RSI->valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 216, ASSERT_TYPE_ASSERT, "(entry->valid)", (const char *)&queryFormat, "entry->valid") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 217, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  WeaponSystem = CgWeaponSystem::GetWeaponSystem(localClientNum);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 221, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  switch ( _RSI->event.type )
  {
    case CgSimBulletFirePellet_EventType_HitEffect:
      if ( _RSI->event.eventTriggerTime > time )
        goto LABEL_16;
      Sys_ProfBeginNamedEvent(0xFF008080, "HitEffect");
      CgWeaponSystem::TrySimulateBulletFire_HitEffect(WeaponSystem, _RSI->event.eventTriggerTime, 0, _RSI->event.hitEffect.sourceEntityNum, _RSI->event.hitEffect.targetEntityNum, _RSI->event.hitEffect.targetScriptableIndex, _RSI->event.hitEffect.knownHitClientNum, &_RSI->event.hitEffect.weapon, _RSI->event.hitEffect.isAlternate, &_RSI->event.hitEffect.initialShootingPos, &_RSI->event.hitEffect.startPos, &_RSI->event.hitEffect.position, &_RSI->event.hitEffect.normal, _RSI->event.hitEffect.surfType, _RSI->event.hitEffect.meansOfDeath, _RSI->event.hitEffect.impactEffects, _RSI->event.hitEffect.hitContents, _RSI->event.hitEffect.forceClientSideHandling);
      Sys_ProfEndNamedEvent();
      break;
    case CgSimBulletFirePellet_EventType_MissEffect:
      if ( _RSI->event.eventTriggerTime > time )
        goto LABEL_16;
      Sys_ProfBeginNamedEvent(0xFF008080, "MissEffect");
      CgWeaponSystem::TrySimulateBulletFire_MissEffect(WeaponSystem, _RSI->event.eventTriggerTime, 0, _RSI->event.hitEffect.sourceEntityNum, &_RSI->event.missEffect.weapon, _RSI->event.missEffect.isAlternate, &_RSI->event.missEffect.initialShootingPos, &_RSI->event.hitEffect.initialShootingPos, &_RSI->event.hitEffect.startPos, _RSI->event.missEffect.surfType);
      Sys_ProfEndNamedEvent();
      break;
    case CgSimBulletFirePellet_EventType_BulletScriptableImpact:
      if ( _RSI->event.eventTriggerTime > time )
      {
LABEL_16:
        CgSimBulletFirePellet_AddToDelayedEvents(localClientNum, &_RSI->event);
      }
      else
      {
        Sys_ProfBeginNamedEvent(0xFF008080, "BulletScriptableImpact");
        CgWeaponSystem::TryBulletScriptableImpact(WeaponSystem, _RSI->event.eventTriggerTime, 0, _RSI->event.bulletScriptableImpact.inflictorEntNum, _RSI->event.bulletScriptableImpact.targetEntityNum, &_RSI->event.bulletScriptableImpact.weapon, _RSI->event.bulletScriptableImpact.isAlternate, (const meansOfDeath_t)_RSI->event.bulletScriptableImpact.mod, &_RSI->event.bulletScriptableImpact.start, &_RSI->event.bulletScriptableImpact.hitPos, (const scr_string_t)_RSI->event.bulletScriptableImpact.hitPartName);
        Sys_ProfEndNamedEvent();
      }
      break;
    case CgSimBulletFirePellet_EventType_TrackingLaserAdd:
      Sys_ProfBeginNamedEvent(0xFF008080, "TrackingLaserAdd");
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+84h]
        vmovss  dword ptr [rsp+98h+normal], xmm0
      }
      CgWeaponSystem::TryCG_TrackingLaserBeamAdd(WeaponSystem, 0, (const LocalClientNum_t)_RSI->event.trackingLaserAdd.localClientNum, &_RSI->event.trackingLaserAdd.start, &_RSI->event.trackingLaserAdd.end, _RSI->event.trackingLaserAdd.owner, &_RSI->event.trackingLaserAdd.weapon, _RSI->event.trackingLaserAdd.isAlternate, _RSI->event.trackingLaserAdd.shotIndex, _RSI->event.trackingLaserAdd.trackedEntNum, (const scr_string_t)_RSI->event.trackingLaserAdd.autoTargetEntTag, &_RSI->event.trackingLaserAdd.tagOffset, normal);
      Sys_ProfEndNamedEvent();
      break;
    case CgSimBulletFirePellet_EventType_LaserAdd:
      Sys_ProfBeginNamedEvent(0xFF008080, "LaserAdd");
      CgWeaponSystem::TryCG_LaserBeamAdd(WeaponSystem, 0, (const LocalClientNum_t)_RSI->event.trackingLaserAdd.localClientNum, &_RSI->event.trackingLaserAdd.start, &_RSI->event.trackingLaserAdd.end, _RSI->event.laserAdd.owner, &_RSI->event.laserAdd.weapon, _RSI->event.laserAdd.isAlternate);
      Sys_ProfEndNamedEvent();
      break;
    case CgSimBulletFirePellet_EventType_BreakGlass:
      Sys_ProfBeginNamedEvent(0xFF008080, "BreakGlass");
      CgWeaponSystem::TryCG_Glass_BreakGlass(WeaponSystem, 0, _RSI->event.trackingLaserAdd.localClientNum, &_RSI->event.trackingLaserAdd.start, _RSI->event.hitEffect.weapon.weaponIdx, &_RSI->event.breakGlass.hitPosition, &_RSI->event.breakGlass.hitDirection);
      Sys_ProfEndNamedEvent();
      break;
    case CgSimBulletFirePellet_EventType_SpawnTracer:
      Sys_ProfBeginNamedEvent(0xFF008080, "SpawnTracer");
      spawnDelay = _RSI->event.spawnTracer.spawnDelay;
      isAlternate = _RSI->event.spawnTracer.isAlternate;
      TagPair::TagPair(&v11, _RSI->event.spawnTracer.sourcePrimaryTagName, _RSI->event.spawnTracer.sourceFallbackTagName);
      CgWeaponSystem::TrySpawnTracer(WeaponSystem, _RSI->event.hitEffect.sourceEntityNum, 0, _RSI->event.spawnTracer.blendFromViewmodel, _RSI->event.spawnTracer.inflictorEntNum, &_RSI->event.spawnTracer.inflictorPerks, _RSI->event.spawnTracer.hand, *v9, &_RSI->event.breakGlass.hitDirection, &_RSI->event.spawnTracer.tracerEnd, &_RSI->event.spawnTracer.r_weapon, isAlternate, spawnDelay);
      Sys_ProfEndNamedEvent();
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 309, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      break;
  }
}

/*
==============
CgSimBulletFirePellet_ExecuteWorkerThread
==============
*/
void CgSimBulletFirePellet_ExecuteWorkerThread(const void *const cmdInfo)
{
  CgWeaponSystem *WeaponSystem; 
  bool IsMainThread; 
  __int64 v4; 
  unsigned __int64 v5; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 120, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)*(_DWORD *)cmdInfo);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 124, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  IsMainThread = Sys_IsMainThread();
  CgWeaponSystem::SimulateBulletFirePellet(WeaponSystem, &s_cgSimBulletFirePelletWorkersData[*((unsigned int *)cmdInfo + 1)], !IsMainThread);
  v5 = *((unsigned int *)cmdInfo + 1);
  if ( v5 >= 0x20 )
  {
    j___report_rangecheckfailure(v4);
    JUMPOUT(0x141E2309Di64);
  }
  s_cgSimBulletFirePelletWorkersDataInUse[v5] = 0;
  if ( ((unsigned __int8)&s_cgSimBulletFirePelletWorkersNumCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_cgSimBulletFirePelletWorkersNumCommands) )
    __debugbreak();
  _InterlockedDecrement(&s_cgSimBulletFirePelletWorkersNumCommands);
}

/*
==============
CgSimBulletFirePellet_GetQueueEntry
==============
*/
CgSimBulletFirePellet_MainThreadEvent_QueueEntry *CgSimBulletFirePellet_GetQueueEntry()
{
  unsigned __int32 v0; 

  if ( ((unsigned __int8)&s_cgSimBulletFirePelletEventQueueNextEntry & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_cgSimBulletFirePelletEventQueueNextEntry) )
    __debugbreak();
  v0 = _InterlockedExchangeAdd(&s_cgSimBulletFirePelletEventQueueNextEntry, 1u);
  if ( v0 < 0x100 )
    return &s_cgSimBulletFirePelletEventQueue[v0];
  else
    return 0i64;
}

/*
==============
CgSimBulletFirePellet_ProcessEvents
==============
*/
void CgSimBulletFirePellet_ProcessEvents(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int time; 
  CgWeaponSystem *WeaponSystem; 
  __int64 v4; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *p_m_listHead; 
  int mp_prev; 
  ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> *v8; 
  int v9; 
  __int64 v10; 
  volatile bool *p_valid; 
  Weapon *weapon; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF008080, "CgSimBulletFirePellet_ProcessEvents");
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->time;
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v1);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 325, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  v4 = v1;
  mp_next = s_delayedImpactEvents[v1].m_listHead.m_sentinel.mp_next;
  p_m_listHead = &s_delayedImpactEvents[v1].m_listHead;
  if ( mp_next != (ntl::internal::list_node_base *)p_m_listHead )
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( SHIDWORD(mp_next[1].mp_prev) > time )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_next = mp_next->mp_next;
        goto LABEL_26;
      }
      mp_prev = (int)mp_next[1].mp_prev;
      if ( mp_prev )
      {
        if ( mp_prev == 1 )
        {
          Sys_ProfBeginNamedEvent(0xFF008080, "MissEffect");
          CgWeaponSystem::TrySimulateBulletFire_MissEffect(WeaponSystem, HIDWORD(mp_next[1].mp_prev), 0, (int)mp_next[1].mp_next, (const Weapon *)((char *)&mp_next[1].mp_next + 4), (bool)mp_next[5].mp_next, (const vec3_t *)((char *)&mp_next[5].mp_next + 4), (const vec3_t *)&mp_next[6].mp_next, (const vec3_t *)((char *)&mp_next[7].mp_prev + 4), (int)mp_next[8].mp_prev);
        }
        else
        {
          if ( mp_prev != 2 )
          {
            LODWORD(weapon) = mp_next[1].mp_prev;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled delayed event type %d in CgSimBulletFirePellet_ProcessEvents", weapon) )
              __debugbreak();
            goto LABEL_18;
          }
          Sys_ProfBeginNamedEvent(0xFF008080, "BulletScriptableImpact");
          CgWeaponSystem::TryBulletScriptableImpact(WeaponSystem, HIDWORD(mp_next[1].mp_prev), 0, (const unsigned int)mp_next[1].mp_next, HIDWORD(mp_next[1].mp_next), (const Weapon *)&mp_next[2], BYTE4(mp_next[5].mp_next), (const meansOfDeath_t)mp_next[6].mp_prev, (const vec3_t *)((char *)&mp_next[6].mp_prev + 4), (const vec3_t *)&mp_next[7], SHIDWORD(mp_next[7].mp_next));
        }
      }
      else
      {
        Sys_ProfBeginNamedEvent(0xFF008080, "HitEffect");
        CgWeaponSystem::TrySimulateBulletFire_HitEffect(WeaponSystem, HIDWORD(mp_next[1].mp_prev), 0, (int)mp_next[1].mp_next, HIDWORD(mp_next[1].mp_next), (unsigned int)mp_next[2].mp_prev, HIDWORD(mp_next[2].mp_prev), (const Weapon *)&mp_next[2].mp_next, BYTE4(mp_next[6].mp_prev), (const vec3_t *)&mp_next[6].mp_next, (const vec3_t *)((char *)&mp_next[7].mp_prev + 4), (const vec3_t *)&mp_next[8], (const vec3_t *)((char *)&mp_next[8].mp_next + 4), (int)mp_next[9].mp_next, HIDWORD(mp_next[9].mp_next), (unsigned int)mp_next[10].mp_prev, HIDWORD(mp_next[10].mp_prev), (const bool)mp_next[10].mp_next);
      }
      Sys_ProfEndNamedEvent();
LABEL_18:
      v8 = (ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> *)mp_next;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent>>::remove(&s_delayedImpactEvents[v4].m_listHead, v8);
      v8->mp_prev = (ntl::internal::list_node_base *)s_delayedImpactEvents[v4].m_freelist.m_head.mp_next;
      s_delayedImpactEvents[v4].m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8;
LABEL_26:
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      {
        LODWORD(v1) = localClientNum;
        break;
      }
    }
  }
  if ( s_cgSimBulletFirePelletEventQueueNextEntry )
  {
    v9 = s_cgSimBulletFirePelletEventQueueNextEntry;
    if ( s_cgSimBulletFirePelletEventQueueNextEntry > 256 )
      v9 = 256;
    v10 = v9;
    if ( v9 > 0 )
    {
      p_valid = &s_cgSimBulletFirePelletEventQueue[0].valid;
      do
      {
        if ( !*p_valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 387, ASSERT_TYPE_ASSERT, "(event->valid)", (const char *)&queryFormat, "event->valid") )
          __debugbreak();
        CgSimBulletFirePellet_ExecuteQueueEntry((LocalClientNum_t)v1, (CgSimBulletFirePellet_MainThreadEvent_QueueEntry *)(p_valid - 160));
        *p_valid = 0;
        p_valid += 168;
        --v10;
      }
      while ( v10 );
    }
    s_cgSimBulletFirePelletEventQueueNextEntry = 0;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CgSimBulletFirePellet_Reset
==============
*/
void CgSimBulletFirePellet_Reset(void)
{
  __int64 v0; 
  ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *v3; 

  s_cgSimBulletFirePelletWorkersEnabled = 0;
  s_cgSimBulletFirePelletWorkersNumCommands = 0;
  *(_QWORD *)s_cgSimBulletFirePelletWorkersDataInUse = 0i64;
  *(_QWORD *)&s_cgSimBulletFirePelletWorkersDataInUse[8] = 0i64;
  *(_QWORD *)&s_cgSimBulletFirePelletWorkersDataInUse[16] = 0i64;
  v0 = 2i64;
  *(_QWORD *)&s_cgSimBulletFirePelletWorkersDataInUse[24] = 0i64;
  p_m_listHead = &s_delayedImpactEvents[0].m_listHead;
  s_cgSimBulletFirePelletEventQueueNextEntry = 0;
  do
  {
    mp_next = (ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *)p_m_listHead->m_sentinel.mp_next;
    if ( mp_next != p_m_listHead )
    {
      do
      {
        v3 = (ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *)mp_next->m_sentinel.mp_next;
        mp_next->m_sentinel.mp_prev = p_m_listHead[-1].m_sentinel.mp_next;
        p_m_listHead[-1].m_sentinel.mp_next = &mp_next->m_sentinel;
        mp_next = v3;
      }
      while ( v3 != p_m_listHead );
    }
    p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
    p_m_listHead->m_sentinel.mp_next = &p_m_listHead->m_sentinel;
    p_m_listHead = (ntl::internal::list_head_base<ntl::internal::list_node<CgSimBulletFirePellet_MainThreadEvent> > *)((char *)p_m_listHead + 45080);
    --v0;
  }
  while ( v0 );
}

/*
==============
CgSimBulletFirePellet_StartWorkers
==============
*/
void CgSimBulletFirePellet_StartWorkers(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  bool *v3; 
  LocalClientNum_t data; 
  unsigned int v5; 

  s_cgSimBulletFirePelletWorkersRunning = 1;
  v2 = 0;
  v3 = s_cgSimBulletFirePelletWorkersDataInUse;
  do
  {
    if ( *v3 )
    {
      data = localClientNum;
      v5 = v2;
      Sys_AddWorkerCmd(WRKCMD_SIM_BULLET_FIRE_PELLET, &data);
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 0x20 );
}

/*
==============
CgSimBulletFirePellet_TryToPrepareWorker
==============
*/
char CgSimBulletFirePellet_TryToPrepareWorker(LocalClientNum_t localClientNum, SimulateBulletFirePelletData *pelletData)
{
  const dvar_t *v3; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v15; 

  _RDI = pelletData;
  if ( !s_cgSimBulletFirePelletWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 74, ASSERT_TYPE_ASSERT, "(CgSimBulletFirePellet_AreWorkersEnabled())", (const char *)&queryFormat, "CgSimBulletFirePellet_AreWorkersEnabled()") )
    __debugbreak();
  if ( s_cgSimBulletFirePelletWorkersRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 75, ASSERT_TYPE_ASSERT, "(!s_cgSimBulletFirePelletWorkersRunning)", "%s\n\tAttempted to add work while simulate bullet fire worker commands are running.", "!s_cgSimBulletFirePelletWorkersRunning") )
    __debugbreak();
  v3 = DVARBOOL_cg_weapons_workers_enable;
  if ( !DVARBOOL_cg_weapons_workers_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weapons_workers_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  if ( ((unsigned __int8)&s_cgSimBulletFirePelletWorkersNumCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_cgSimBulletFirePelletWorkersNumCommands) )
    __debugbreak();
  if ( _InterlockedIncrement(&s_cgSimBulletFirePelletWorkersNumCommands) < 32 )
  {
    v5 = 0;
    v6 = 0i64;
    while ( s_cgSimBulletFirePelletWorkersDataInUse[v6] )
    {
      if ( !s_cgSimBulletFirePelletWorkersDataInUse[v6 + 1] )
      {
        ++v5;
        break;
      }
      if ( !s_cgSimBulletFirePelletWorkersDataInUse[v6 + 2] )
      {
        v5 += 2;
        break;
      }
      if ( !s_cgSimBulletFirePelletWorkersDataInUse[v6 + 3] )
      {
        v5 += 3;
        break;
      }
      v5 += 4;
      v6 += 4i64;
      if ( v5 >= 0x20 )
        goto LABEL_31;
    }
    if ( v5 < 0x20 )
      goto LABEL_33;
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_workers.cpp", 100, ASSERT_TYPE_ASSERT, "(dataIndex < MAX_SIM_BULLET_FIRE_PELLET_WORKERS)", (const char *)&queryFormat, "dataIndex < MAX_SIM_BULLET_FIRE_PELLET_WORKERS") )
      __debugbreak();
LABEL_33:
    _RDX = &_RDI->assistTarget.m_hitResults;
    s_cgSimBulletFirePelletWorkersDataInUse[v5] = 1;
    _R8 = &s_cgSimBulletFirePelletWorkersData[v5];
    _R8->bulletId = _RDI->bulletId;
    _RCX = &_R8->assistTarget.m_hitResults;
    _R8->shotIndex = _RDI->shotIndex;
    _R8->inflictorEnt = _RDI->inflictorEnt;
    _R8->knownHitClientNum = _RDI->knownHitClientNum;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+14h]
      vmovups ymmword ptr [r8+14h], ymm0
      vmovups xmm1, xmmword ptr [rdi+34h]
      vmovups xmmword ptr [r8+34h], xmm1
      vmovsd  xmm0, qword ptr [rdi+44h]
      vmovsd  qword ptr [r8+44h], xmm0
    }
    *(_DWORD *)&_R8->weapon.weaponCamo = *(_DWORD *)&_RDI->weapon.weaponCamo;
    _R8->isAlternate = _RDI->isAlternate;
    _R8->primaryTagName = _RDI->primaryTagName;
    _R8->fallbackTagName = _RDI->fallbackTagName;
    _R8->randSeed = _RDI->randSeed;
    _R8->isPlayerWeaponView = _RDI->isPlayerWeaponView;
    _R8->bulletRange = _RDI->bulletRange;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+68h]
      vmovups ymmword ptr [r8+68h], ymm0
      vmovups xmm1, xmmword ptr [rdi+88h]
      vmovups xmmword ptr [r8+88h], xmm1
    }
    _R8->meansOfDeath = _RDI->meansOfDeath;
    _R8->attackerPerks = _RDI->attackerPerks;
    _R8->hand = _RDI->hand;
    _R8->aimSpreadAmount = _RDI->aimSpreadAmount;
    _R8->spreadMin = _RDI->spreadMin;
    _R8->spreadMax = _RDI->spreadMax;
    _R8->angleMin = _RDI->angleMin;
    _R8->angleMax = _RDI->angleMax;
    _R8->distributePellets = _RDI->distributePellets;
    _R8->ignoreTargetEvaluation = _RDI->ignoreTargetEvaluation;
    _R8->targetEvaluator = _RDI->targetEvaluator;
    _R8->targetCount = _RDI->targetCount;
    _R8->targetAssistOnlyTargets = _RDI->targetAssistOnlyTargets;
    _R8->targetAssistDirectDamage = _RDI->targetAssistDirectDamage;
    _R8->targetAssistBeam = _RDI->targetAssistBeam;
    v15 = 6i64;
    do
    {
      _RCX = (ConeTargetHitResults *)((char *)_RCX + 128);
      __asm { vmovups xmm0, xmmword ptr [rdx] }
      _RDX = (ConeTargetHitResults *)((char *)_RDX + 128);
      __asm
      {
        vmovups xmmword ptr [rcx-80h], xmm0
        vmovups xmm1, xmmword ptr [rdx-70h]
        vmovups xmmword ptr [rcx-70h], xmm1
        vmovups xmm0, xmmword ptr [rdx-60h]
        vmovups xmmword ptr [rcx-60h], xmm0
        vmovups xmm1, xmmword ptr [rdx-50h]
        vmovups xmmword ptr [rcx-50h], xmm1
        vmovups xmm0, xmmword ptr [rdx-40h]
        vmovups xmmword ptr [rcx-40h], xmm0
        vmovups xmm1, xmmword ptr [rdx-30h]
        vmovups xmmword ptr [rcx-30h], xmm1
        vmovups xmm0, xmmword ptr [rdx-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmm1, xmmword ptr [rdx-10h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v15;
    }
    while ( v15 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rdx+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
    }
    *(_QWORD *)&_RCX->hits[0].tagName = *(_QWORD *)&_RDX->hits[0].tagName;
    _RCX->hits[0].modelIndex = _RDX->hits[0].modelIndex;
    _R8->assistTarget.m_target = _RDI->assistTarget.m_target;
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+420h]
      vmovsd  qword ptr [r8+420h], xmm0
    }
    _R8->tracerStart.v[2] = _RDI->tracerStart.v[2];
    _R8->shouldSpawnTracer = _RDI->shouldSpawnTracer;
    _R8->shouldPredictCharacterImpacts = _RDI->shouldPredictCharacterImpacts;
    _R8->localClientNum = _RDI->localClientNum;
    return 1;
  }
  else
  {
    if ( ((unsigned __int64)&s_cgSimBulletFirePelletWorkersNumCommands & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_cgSimBulletFirePelletWorkersNumCommands) )
      __debugbreak();
    _InterlockedDecrement(&s_cgSimBulletFirePelletWorkersNumCommands);
    return 0;
  }
}

/*
==============
CgSimBulletFirePellet_WaitForWorkers
==============
*/
void CgSimBulletFirePellet_WaitForWorkers(LocalClientNum_t localClientNum)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SIM_BULLET_FIRE_PELLET);
  s_cgSimBulletFirePelletWorkersRunning = 0;
}

