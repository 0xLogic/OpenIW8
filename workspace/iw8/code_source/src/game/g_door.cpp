/*
==============
G_Door_UpdateOwnerMap
==============
*/

void G_Door_UpdateOwnerMap(void)
{
  ?G_Door_UpdateOwnerMap@@YAXXZ();
}

/*
==============
G_Door_Freeze
==============
*/

void __fastcall G_Door_Freeze(bool freeze, unsigned int scriptableIndex)
{
  ?G_Door_Freeze@@YAX_NI@Z(freeze, scriptableIndex);
}

/*
==============
G_Door_GetPMoveData
==============
*/

void __fastcall G_Door_GetPMoveData(pmove_t *pm)
{
  ?G_Door_GetPMoveData@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
G_Door_SettleScriptableState
==============
*/

void __fastcall G_Door_SettleScriptableState(unsigned int scriptableIndex)
{
  ?G_Door_SettleScriptableState@@YAXI@Z(scriptableIndex);
}

/*
==============
G_Door_ProcessUseList
==============
*/

void __fastcall G_Door_ProcessUseList(const UsableList *usableList, playerState_s *ps)
{
  ?G_Door_ProcessUseList@@YAXPEBUUsableList@@PEAUplayerState_s@@@Z(usableList, ps);
}

/*
==============
G_Door_ScriptableIsDoor
==============
*/

bool __fastcall G_Door_ScriptableIsDoor(unsigned int scriptableIndex)
{
  return ?G_Door_ScriptableIsDoor@@YA_NI@Z(scriptableIndex);
}

/*
==============
G_Door_UpdateScriptable
==============
*/

void __fastcall G_Door_UpdateScriptable(gclient_s *client)
{
  ?G_Door_UpdateScriptable@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Door_ShowHint
==============
*/

bool __fastcall G_Door_ShowHint(playerState_s *ps, unsigned int scriptableIndex)
{
  return ?G_Door_ShowHint@@YA_NPEAUplayerState_s@@I@Z(ps, scriptableIndex);
}

/*
==============
G_Door_ProcessDamageEvent
==============
*/

void __fastcall G_Door_ProcessDamageEvent(const ScriptableDamageEvent *damageEvent)
{
  ?G_Door_ProcessDamageEvent@@YAXPEBUScriptableDamageEvent@@@Z(damageEvent);
}

/*
==============
G_Door_Interact
==============
*/

void __fastcall G_Door_Interact(gclient_s *client, unsigned int scriptableIndex, unsigned int scriptablePartIndex)
{
  ?G_Door_Interact@@YAXPEAUgclient_s@@II@Z(client, scriptableIndex, scriptablePartIndex);
}

/*
==============
G_Door_GetOwner
==============
*/

int __fastcall G_Door_GetOwner(const unsigned int scriptableIndex)
{
  return ?G_Door_GetOwner@@YAHI@Z(scriptableIndex);
}

/*
==============
G_Door_MoveReliably
==============
*/

void __fastcall G_Door_MoveReliably(unsigned int scriptableIndex, DoorMoveType doorMoveType)
{
  ?G_Door_MoveReliably@@YAXIW4DoorMoveType@@@Z(scriptableIndex, doorMoveType);
}

/*
==============
G_Door_Assign
==============
*/

void __fastcall G_Door_Assign(playerState_s *ps, unsigned int candidateIndex)
{
  ?G_Door_Assign@@YAXPEAUplayerState_s@@I@Z(ps, candidateIndex);
}

/*
==============
G_Door_OpenReliablyFromPosition
==============
*/

void __fastcall G_Door_OpenReliablyFromPosition(unsigned int scriptableIndex, vec3_t *position)
{
  ?G_Door_OpenReliablyFromPosition@@YAXITvec3_t@@@Z(scriptableIndex, position);
}

/*
==============
G_Door_IsClosed
==============
*/

bool __fastcall G_Door_IsClosed(const unsigned int scriptableIndex)
{
  return ?G_Door_IsClosed@@YA_NI@Z(scriptableIndex);
}

/*
==============
G_Door_HasValidVehicle
==============
*/

bool __fastcall G_Door_HasValidVehicle(const playerState_s *ps)
{
  return ?G_Door_HasValidVehicle@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
G_Door_GetOverrideHint
==============
*/

bool __fastcall G_Door_GetOverrideHint(playerState_s *ps, unsigned int scriptableIndex, unsigned int *stringIndex)
{
  return ?G_Door_GetOverrideHint@@YA_NPEAUplayerState_s@@IAEAI@Z(ps, scriptableIndex, stringIndex);
}

/*
==============
G_Door_Reset
==============
*/

void G_Door_Reset(void)
{
  ?G_Door_Reset@@YAXXZ();
}

/*
==============
G_Door_NearestAssignedClientNum
==============
*/

int __fastcall G_Door_NearestAssignedClientNum(const unsigned int scriptableIndex)
{
  return ?G_Door_NearestAssignedClientNum@@YAHI@Z(scriptableIndex);
}

/*
==============
G_Door_SetScriptableAngle
==============
*/

void __fastcall G_Door_SetScriptableAngle(unsigned int scriptableIndex, float targetAngle)
{
  ?G_Door_SetScriptableAngle@@YAXIM@Z(scriptableIndex, targetAngle);
}

/*
==============
G_Door_SetOwnership
==============
*/

void __fastcall G_Door_SetOwnership(const playerState_s *ps)
{
  ?G_Door_SetOwnership@@YAXPEBUplayerState_s@@@Z(ps);
}

/*
==============
G_Door_GetDeltaAngle
==============
*/

double __fastcall G_Door_GetDeltaAngle(unsigned int scriptableIndex)
{
  double result; 

  *(float *)&result = ?G_Door_GetDeltaAngle@@YAMI@Z(scriptableIndex);
  return result;
}

/*
==============
G_Door_MoveCompleteEvent
==============
*/

void __fastcall G_Door_MoveCompleteEvent(const unsigned int scriptableIndex)
{
  ?G_Door_MoveCompleteEvent@@YAXI@Z(scriptableIndex);
}

/*
==============
G_Door_UpdateClientInfo
==============
*/

void __fastcall G_Door_UpdateClientInfo(gclient_s *client)
{
  ?G_Door_UpdateClientInfo@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Door_Assign
==============
*/
void G_Door_Assign(playerState_s *ps, unsigned int candidateIndex)
{
  unsigned __int64 v2; 
  int entity; 
  bool v5; 
  bool HasValidVehicle; 
  float v7; 
  unsigned int *v8; 
  unsigned int v9; 
  unsigned int *p_index; 
  unsigned int v11; 
  ScriptableInstanceContext *v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v15; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v18; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v19; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v20; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v21; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v22; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v23; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v24; 
  __int64 v25; 
  int v26; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScopedCriticalSection v28; 
  vec3_t outOrigin; 
  __int128 v30; 

  v2 = candidateIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Door_Assign");
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !G_Door_ScriptableIsDoor(v2) || ps->pm_type >= 7 )
    goto LABEL_70;
  entity = ps->vehicleState.entity;
  v5 = entity != 2047 && entity;
  HasValidVehicle = G_Door_HasValidVehicle(ps);
  if ( v5 && !HasValidVehicle )
    goto LABEL_70;
  BG_Door_GetPlayerOrigin(ps, &outOrigin);
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v2);
  v7 = (float)((float)((float)(InstanceCommonContext->origin.v[1] - outOrigin.v[1]) * (float)(InstanceCommonContext->origin.v[1] - outOrigin.v[1])) + (float)((float)(InstanceCommonContext->origin.v[0] - outOrigin.v[0]) * (float)(InstanceCommonContext->origin.v[0] - outOrigin.v[0]))) + (float)((float)(InstanceCommonContext->origin.v[2] - outOrigin.v[2]) * (float)(InstanceCommonContext->origin.v[2] - outOrigin.v[2]));
  if ( v7 > (float)(DOOR_RELEASE_DIST_0 * DOOR_RELEASE_DIST_0) )
    goto LABEL_70;
  v8 = NULL;
  v9 = 0;
  p_index = &ps->doorState[0].index;
  while ( 1 )
  {
    v11 = *p_index;
    if ( *p_index == -1 )
    {
      v7 = FLOAT_3_4028235e38;
      goto LABEL_20;
    }
    if ( v11 == (_DWORD)v2 )
      break;
    if ( p_index[3] - 4 <= 2 )
      goto LABEL_21;
    v12 = ScriptableSv_GetInstanceCommonContext(v11);
    if ( (float)((float)((float)((float)(v12->originInitial.v[1] - outOrigin.v[1]) * (float)(v12->originInitial.v[1] - outOrigin.v[1])) + (float)((float)(v12->originInitial.v[0] - outOrigin.v[0]) * (float)(v12->originInitial.v[0] - outOrigin.v[0]))) + (float)((float)(v12->originInitial.v[2] - outOrigin.v[2]) * (float)(v12->originInitial.v[2] - outOrigin.v[2]))) <= v7 )
      goto LABEL_21;
    v7 = (float)((float)((float)(v12->originInitial.v[1] - outOrigin.v[1]) * (float)(v12->originInitial.v[1] - outOrigin.v[1])) + (float)((float)(v12->originInitial.v[0] - outOrigin.v[0]) * (float)(v12->originInitial.v[0] - outOrigin.v[0]))) + (float)((float)(v12->originInitial.v[2] - outOrigin.v[2]) * (float)(v12->originInitial.v[2] - outOrigin.v[2]));
LABEL_20:
    v8 = p_index;
LABEL_21:
    ++v9;
    p_index += 4;
    if ( v9 >= 2 )
      goto LABEL_24;
  }
  v8 = p_index;
LABEL_24:
  if ( v8 )
  {
    v13 = *v8;
    if ( (_DWORD)v2 != *v8 )
    {
      if ( v13 != -1 )
      {
        v8[3] = 14;
        v14 = v13 % 0x301ui64;
        if ( v14 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v15 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v14];
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v15->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v15->m_listHead.m_sentinel.mp_next == v15 )
        {
LABEL_36:
          mp_next = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == *v8 )
              break;
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
            if ( mp_next == v15 )
              goto LABEL_36;
          }
        }
        if ( !mp_next )
          Com_PrintWarning(34, "WARNING: G_Door_Assign - Door ownership not found for door %d, client %d.  Notify JFutch with details. \n", *v8, (unsigned int)ps->clientNum);
        goto LABEL_70;
      }
      ScopedCriticalSection::ScopedCriticalSection(&v28, CRITSECT_G_DOORS, SCOPED_CRITSECT_NORMAL);
      if ( !s_doorMap.m_currentNumItems )
        goto LABEL_49;
      v17 = v2 % 0x301;
      if ( v2 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v18 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v17];
      v19 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v18->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v18->m_listHead.m_sentinel.mp_next == v18 )
      {
LABEL_49:
        LODWORD(v30) = v2;
        *(double *)((char *)&v30 + 4) = COERCE_DOUBLE(0x1FFFFFFFFi64);
        HIDWORD(v30) = v26;
        if ( v2 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v20 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2 % 0x301];
        v21 = *v20;
        if ( *v20 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20 )
        {
LABEL_58:
          if ( !s_doorMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_doorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)s_doorMap.m_freelist.m_head.mp_next == &s_doorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x190ui64) )
            __debugbreak();
          v22 = s_doorMap.m_freelist.m_head.mp_next;
          s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
          v22->mp_next = NULL;
          *(_OWORD *)&v22[1].mp_next = v30;
          v22->mp_next = *v20;
          *v20 = v22;
          ++s_doorMap.m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v21[1].mp_next) == (_DWORD)v2 )
              break;
            v21 = v21->mp_next;
            if ( v21 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20 )
              goto LABEL_58;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v19[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v2 )
            break;
          v19 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v19->m_listHead.m_sentinel.mp_next;
          if ( v19 == v18 )
            goto LABEL_49;
        }
        if ( v17 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v23 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v17];
        v24 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v23->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v23->m_listHead.m_sentinel.mp_next == v23 )
        {
LABEL_80:
          v24 = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v24[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v2 )
              break;
            v24 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v24->m_listHead.m_sentinel.mp_next;
            if ( v24 == v23 )
              goto LABEL_80;
          }
        }
        if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v25 = (__int64)&v24[2];
        if ( !v24 )
          v25 = 8i64;
        ++*(_DWORD *)v25;
      }
      v8[3] = 0;
      ScopedCriticalSection::~ScopedCriticalSection(&v28);
    }
    v8[1] = LODWORD(InstanceCommonContext->angles.v[1]);
    *v8 = v2;
  }
LABEL_70:
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Door_Freeze
==============
*/
void G_Door_Freeze(bool freeze, unsigned int scriptableIndex)
{
  unsigned __int64 v3; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v5; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  ScriptablePartRuntime *PartRuntime; 
  int i; 
  gclient_s *client; 
  ScriptableInstanceContext *InstanceCommonContext; 
  float v11; 
  unsigned int v12; 
  double v13; 
  ScriptableEventParams outParams; 
  unsigned int outStateIdx; 

  v3 = scriptableIndex;
  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1272, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  if ( !G_Door_ScriptableIsDoor(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1273, ASSERT_TYPE_ASSERT, "(G_Door_ScriptableIsDoor( scriptableIndex ))", (const char *)&queryFormat, "G_Door_ScriptableIsDoor( scriptableIndex )") )
    __debugbreak();
  PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(v3, (const scr_string_t)scr_const.door, 1);
  if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1276, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  ScriptableSv_InitEventParams(&outParams, v3, PartScriptedDefFromName);
  if ( v3 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v5 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v3 % 0x301];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v5->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v5->m_listHead.m_sentinel.mp_next == v5 )
  {
LABEL_19:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v3 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v5 )
        goto LABEL_19;
    }
  }
  PartRuntime = ScriptableSv_GetPartRuntime(v3, PartScriptedDefFromName);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1284, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( freeze )
  {
    if ( PartRuntime->stateId != 16 )
    {
      ScriptableBg_ExecutePartChange(&outParams, 0x10u, 1);
      if ( mp_next )
      {
        for ( i = 0; i < level.maxclients; ++i )
        {
          if ( G_IsEntityInUse(i) )
          {
            client = G_GetGEntity(i)->client;
            if ( client->ps.doorState[0].index == (_DWORD)v3 )
            {
              client->ps.doorState[0].index = -1;
              client->ps.doorState[0].moveType = DOOR_MOVE_INVALID;
            }
            if ( client->ps.doorState[1].index == (_DWORD)v3 )
            {
              client->ps.doorState[1].index = -1;
              client->ps.doorState[1].moveType = DOOR_MOVE_INVALID;
            }
          }
        }
      }
    }
  }
  else
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v3);
    v11 = InstanceCommonContext->angles.v[1];
    if ( mp_next )
    {
      v13 = AngleDelta(InstanceCommonContext->anglesInitial.v[1], v11);
      v12 = 14;
      if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.0099999998 )
        v12 = 13;
    }
    else
    {
      BG_Door_NearestAngle(PartScriptedDefFromName, v11, InstanceCommonContext->anglesInitial.v[1], &outStateIdx);
      v12 = outStateIdx;
    }
    ScriptableBg_ExecutePartChange(&outParams, v12, 1);
  }
}

/*
==============
G_Door_GetDeltaAngle
==============
*/
double G_Door_GetDeltaAngle(unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  if ( !G_Door_ScriptableIsDoor(scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 121, ASSERT_TYPE_ASSERT, "(G_Door_ScriptableIsDoor( scriptableIndex ))", (const char *)&queryFormat, "G_Door_ScriptableIsDoor( scriptableIndex )") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  return AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
}

/*
==============
G_Door_GetOverrideHint
==============
*/
char G_Door_GetOverrideHint(playerState_s *ps, unsigned int scriptableIndex, unsigned int *stringIndex)
{
  GConfigStrings *v6; 
  gentity_s *GEntity; 
  ScriptableInstanceContext *InstanceCommonContext; 
  double v9; 
  const dvar_t *v10; 
  unsigned int (__fastcall *GetHintStringIndex)(GConfigStrings *, const char *); 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 132, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v6 = GConfigStrings::ms_gConfigStrings;
  GEntity = G_GetGEntity(ps->clientNum);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 136, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 137, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( (GEntity->client->buttons & 0x200) == 0 )
    return 0;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v9 = AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
  if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0099999998 )
    return 0;
  v10 = DCONST_DVARSTR_bg_doorPeekHintName;
  GetHintStringIndex = v6->GetHintStringIndex;
  if ( !DCONST_DVARSTR_bg_doorPeekHintName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorPeekHintName") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  *stringIndex = GetHintStringIndex(v6, v10->current.string);
  return 1;
}

/*
==============
G_Door_GetOwner
==============
*/
__int64 G_Door_GetOwner(const unsigned int scriptableIndex)
{
  unsigned __int64 v2; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v3; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 

  v2 = scriptableIndex % 0x301ui64;
  if ( v2 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v3 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v3->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v3->m_listHead.m_sentinel.mp_next == v3 )
  {
LABEL_10:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == scriptableIndex )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v3 )
        goto LABEL_10;
    }
  }
  if ( mp_next )
    return HIDWORD(mp_next[1].m_listHead.m_sentinel.mp_next);
  else
    return 0xFFFFFFFFi64;
}

/*
==============
G_Door_GetPMoveData
==============
*/
void G_Door_GetPMoveData(pmove_t *pm)
{
  const dvar_t *v2; 
  playerState_s *ps; 
  bool *doorSettle; 
  unsigned int *p_index; 
  __int64 i; 
  unsigned __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v11; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v12; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v13; 
  __int64 v14; 

  Sys_ProfBeginNamedEvent(0xFF808080, "G_Door_GetPMoveData");
  v2 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 679, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 679, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    doorSettle = pm->doorSettle;
    p_index = &ps->doorState[0].index;
    for ( i = 2i64; i; --i )
    {
      *(doorSettle - 2) = 0;
      *doorSettle = 0;
      if ( *p_index != -1 && ps->pm_type < 7 )
      {
        v7 = *p_index % 0x301ui64;
        if ( v7 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v8 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v7];
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next != v8 )
        {
          while ( 1 )
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == *p_index )
              break;
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
            if ( mp_next == v8 )
              goto LABEL_23;
          }
          v10 = *p_index % 0x301ui64;
          if ( v10 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v11 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v10];
          v12 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v11->m_listHead.m_sentinel.mp_next;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v11->m_listHead.m_sentinel.mp_next == v11 )
          {
LABEL_35:
            v12 = NULL;
          }
          else
          {
            while ( 1 )
            {
              if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( LODWORD(v12[1].m_listHead.m_sentinel.mp_next) == *p_index )
                break;
              v12 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v12->m_listHead.m_sentinel.mp_next;
              if ( v12 == v11 )
                goto LABEL_35;
            }
            if ( v12 )
            {
              v13 = v12;
LABEL_37:
              if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v14 = (__int64)&v13[1].m_listHead.m_sentinel.mp_next + 4;
              if ( !v13 )
                v14 = 4i64;
              if ( *(_DWORD *)v14 == -1 || *(_DWORD *)v14 == ps->clientNum )
                *(doorSettle - 2) = 1;
              if ( *(int *)(v14 + 4) <= 1 )
                *doorSettle = 1;
              goto LABEL_24;
            }
          }
          v13 = NULL;
          goto LABEL_37;
        }
LABEL_23:
        Com_PrintWarning(34, "WARNING: G_Door_GetPMoveData - Door ownership not found for door %d, client %d.  Notify JFutch with details. \n", *p_index, (unsigned int)ps->clientNum);
      }
LABEL_24:
      p_index += 4;
      ++doorSettle;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Door_HasValidVehicle
==============
*/
bool G_Door_HasValidVehicle(const playerState_s *ps)
{
  int entity; 
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 

  entity = ps->vehicleState.entity;
  return entity != 2047 && entity && (GEntity = G_GetGEntity(entity)) != NULL && (vehicle = GEntity->vehicle) != NULL && (ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex)) != NULL && BG_Door_ValidVehicle(ServerDef);
}

/*
==============
G_Door_Interact
==============
*/
void G_Door_Interact(gclient_s *client, unsigned int scriptableIndex, unsigned int scriptablePartIndex)
{
  unsigned int v3; 
  const dvar_t *v5; 
  const ScriptableDef *def; 
  bool v7; 
  char v8; 
  char v9; 
  unsigned int v10; 
  DoorState *doorState; 
  unsigned int index; 
  ScriptableInstanceContext *InstanceCommonContext; 
  double v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v18; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v20; 
  DoorMoveType moveType; 
  bool v22; 
  bool v23; 
  bool v24; 
  unsigned __int64 v25; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v26; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v27; 
  ScriptableInstanceContext *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  double v34; 
  float v35; 
  bool v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v43; 
  double v44; 
  bool v45; 
  double v46; 
  DoorMoveType v47; 
  GHandler *v48; 
  GHandler *v49; 
  GHandler *v50; 
  GHandler *v51; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  int time; 
  unsigned int v55; 
  entity_event_t v56; 
  int clientNum; 
  __int64 v58; 
  gclient_s *fmt; 
  unsigned int v61; 
  __int64 v62; 
  ScopedCriticalSection v63; 

  v3 = scriptableIndex;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 311, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v5 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    def = ScriptableSv_GetInstanceCommonContext(v3)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 321, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    v7 = (def->flags & 0x100000) != 0;
    v8 = 1;
    v9 = 0;
    v10 = 0;
    doorState = client->ps.doorState;
    do
    {
      index = doorState->index;
      if ( doorState->index == v3 )
        v9 = 1;
      if ( v7 )
      {
        if ( index == -1 || (def->flags & 0x100000) == 0 )
          return;
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(index);
        v14 = AngleDelta(InstanceCommonContext->anglesInitial.v[1], InstanceCommonContext->angles.v[1]);
        if ( COERCE_FLOAT(LODWORD(v14) & _xmm) >= 0.0099999998 )
          v8 = 0;
      }
      ++v10;
      ++doorState;
    }
    while ( v10 < 2 );
    if ( !v9 )
      return;
    ScopedCriticalSection::ScopedCriticalSection(&v63, CRITSECT_G_DOORS, SCOPED_CRITSECT_NORMAL);
    v61 = 0;
    v15 = 0i64;
    v62 = 0i64;
    while ( 1 )
    {
      if ( !v7 && client->ps.doorState[v15].index != v3 )
        goto LABEL_94;
      v16 = v15;
      v17 = client->ps.doorState[v15].index % 0x301ui64;
      if ( v17 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v18 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v17];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v18->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v18->m_listHead.m_sentinel.mp_next == v18 )
      {
LABEL_33:
        Com_PrintWarning(34, "WARNING: G_Door_Interact - Door %d not found in map.  Should never get here.  Notify JFutch with details. \n", client->ps.doorState[v15].index);
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v20 = client->ps.doorState[v15].index;
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v20 )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v18 )
            goto LABEL_33;
        }
        moveType = client->ps.doorState[v15].moveType;
        v22 = (unsigned int)(moveType - 2) <= 4 || moveType == DOOR_MOVE_COMPLETE;
        v23 = (unsigned int)(moveType - 7) <= 1 || moveType == DOOR_MOVE_COMPLETE;
        v24 = ((moveType - 10) & 0xFFFFFFFC) == 0 && moveType != DOOR_MOVE_PUSHING_BLOCKED;
        if ( v22 || v23 || v24 )
        {
LABEL_95:
          ScopedCriticalSection::~ScopedCriticalSection(&v63);
          return;
        }
        v25 = v20 % 0x301;
        if ( v20 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v26 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v25];
        v27 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v26->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v26->m_listHead.m_sentinel.mp_next == v26 )
        {
LABEL_58:
          v27 = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v27[1].m_listHead.m_sentinel.mp_next) == client->ps.doorState[v15].index )
              break;
            v27 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v27->m_listHead.m_sentinel.mp_next;
            if ( v27 == v26 )
              goto LABEL_58;
          }
        }
        if ( !v27 || HIDWORD(v27[1].m_listHead.m_sentinel.mp_next) == -1 || HIDWORD(v27[1].m_listHead.m_sentinel.mp_next) == client->ps.clientNum )
        {
          v28 = ScriptableSv_GetInstanceCommonContext(client->ps.doorState[v15].index);
          v29 = v28->originInitial.v[0];
          v30 = v28->originInitial.v[1];
          v31 = v28->originInitial.v[2];
          v32 = v28->angles.v[1];
          v33 = v28->anglesInitial.v[1];
          v34 = AngleDelta(v33, v32);
          LODWORD(v35) = LODWORD(v34) & _xmm;
          v36 = v35 < 0.0099999998;
          if ( !v7 || v35 >= 0.0099999998 || v8 )
          {
            v37 = client->ps.origin.v[0] - v29;
            v39 = LODWORD(client->ps.origin.v[1]);
            v38 = client->ps.origin.v[1] - v30;
            *(float *)&v39 = fsqrt((float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)((float)(client->ps.origin.v[2] - v31) * (float)(client->ps.origin.v[2] - v31)));
            _XMM1 = v39;
            __asm
            {
              vcmpless xmm0, xmm1, cs:__real@80000000
              vblendvps xmm1, xmm1, xmm15, xmm0
            }
            v43 = atan2f_0(v38 * (float)(1.0 / *(float *)&_XMM1), v37 * (float)(1.0 / *(float *)&_XMM1)) * 57.295776;
            v44 = AngleDelta(v32, v33);
            v45 = (client->buttons & 0x200) != 0;
            if ( !v36 )
            {
              v47 = (*(float *)&v44 < 0.0) + 2;
              Handler = GHandler::getHandler();
              if ( BG_Door_BlockedByVehicle(client->ps.doorState[v16].index, 2047, Handler, v33, 0) )
                goto LABEL_95;
              goto LABEL_81;
            }
            v46 = AngleDelta(v43, v32);
            if ( *(float *)&v46 >= 0.0 )
            {
              v47 = DOOR_MOVE_USE_RIGHT;
              if ( v45 )
                v47 = DOOR_MOVE_PEEK_RIGHT;
            }
            else
            {
              v47 = 8 * v45 + 3;
            }
            if ( ((v47 - 3) & 0xFFFFFFF7) != 0 )
            {
              if ( ((v47 - 2) & 0xFFFFFFF7) != 0 )
                goto LABEL_82;
              v48 = GHandler::getHandler();
              if ( BG_Door_BlockedByVehicle(client->ps.doorState[v16].index, 2047, v48, v33 - 90.0, 0) && v47 == DOOR_MOVE_USE_RIGHT )
              {
                v49 = GHandler::getHandler();
                if ( BG_Door_BlockedByVehicle(client->ps.doorState[v16].index, 2047, v49, v33 + 90.0, 0) )
                  goto LABEL_95;
                v47 = DOOR_MOVE_USE_LEFT;
                goto LABEL_83;
              }
LABEL_81:
              if ( v47 != DOOR_MOVE_PEEK_RIGHT )
              {
LABEL_82:
                if ( v47 != DOOR_MOVE_PEEK_LEFT )
                  goto LABEL_83;
              }
              fmt = client;
              Instance = GWeaponMap::GetInstance();
              time = level.time;
              v55 = client->ps.doorState[v16].index;
              v56 = EV_DOOR_PEEK;
            }
            else
            {
              v50 = GHandler::getHandler();
              if ( !BG_Door_BlockedByVehicle(client->ps.doorState[v16].index, 2047, v50, v33 + 90.0, 0) || v47 != DOOR_MOVE_USE_LEFT )
                goto LABEL_81;
              v51 = GHandler::getHandler();
              if ( BG_Door_BlockedByVehicle(client->ps.doorState[v16].index, 2047, v51, v33 - 90.0, 0) )
                goto LABEL_95;
              v47 = DOOR_MOVE_USE_RIGHT;
LABEL_83:
              fmt = client;
              Instance = GWeaponMap::GetInstance();
              time = level.time;
              v55 = client->ps.doorState[v16].index;
              if ( v36 )
                v56 = EV_DOOR_OPEN;
              else
                v56 = EV_DOOR_CLOSE;
            }
            BG_AddUnPredictableEventToPlayerstate(v56, v55, time, Instance, &fmt->ps);
            client->ps.doorState[v16].moveType = v47;
            client->ps.doorState[v16].moveTime = level.time;
            clientNum = client->ps.clientNum;
            if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            v58 = (__int64)&v27[1].m_listHead.m_sentinel.mp_next + 4;
            if ( !v27 )
              v58 = 4i64;
            *(_DWORD *)v58 = clientNum;
            v15 = v62;
          }
          v3 = scriptableIndex;
        }
      }
LABEL_94:
      ++v61;
      v62 = ++v15;
      if ( v61 >= 2 )
        goto LABEL_95;
    }
  }
}

/*
==============
G_Door_IsClosed
==============
*/
bool G_Door_IsClosed(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  double v2; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v2 = AngleDelta(InstanceCommonContext->anglesInitial.v[1], InstanceCommonContext->angles.v[1]);
  return COERCE_FLOAT(LODWORD(v2) & _xmm) < 0.0099999998;
}

/*
==============
G_Door_MoveCompleteEvent
==============
*/

void __fastcall G_Door_MoveCompleteEvent(const unsigned int scriptableIndex)
{
  ScriptableSv_UpdateNavObstacle(scriptableIndex);
}

/*
==============
G_Door_MoveReliably
==============
*/
void G_Door_MoveReliably(unsigned int scriptableIndex, DoorMoveType doorMoveType)
{
  unsigned __int64 v2; 
  ScriptableInstanceContext *InstanceCommonContext; 
  double v5; 
  bool v6; 
  __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  int mp_next_high; 
  DoorState *doorState; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  unsigned int v13; 
  ScriptableEventParams outParams; 

  v2 = scriptableIndex;
  if ( (unsigned int)(doorMoveType - 4) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 533, ASSERT_TYPE_ASSERT, "(BG_Door_IsMovingReliably( doorMoveType ))", (const char *)&queryFormat, "BG_Door_IsMovingReliably( doorMoveType )") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v2);
  v5 = AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
  switch ( doorMoveType )
  {
    case DOOR_MOVE_OPEN_RIGHT_RELIABLE:
      v6 = *(float *)&v5 < -89.989998;
      goto LABEL_11;
    case DOOR_MOVE_OPEN_LEFT_RELIABLE:
      if ( *(float *)&v5 > 89.989998 )
        return;
      break;
    case DOOR_MOVE_CLOSE_RELIABLE:
      v6 = COERCE_FLOAT(LODWORD(v5) & _xmm) < 0.0099999998;
LABEL_11:
      if ( v6 )
        return;
      break;
  }
  if ( v2 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v7 = 0i64;
  v8 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2 % 0x301];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next == v8 )
  {
LABEL_21:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v2 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v8 )
        goto LABEL_21;
    }
  }
  if ( !mp_next || (HIDWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == -1 ? (mp_next_high = G_Door_NearestAssignedClientNum(v2)) : (mp_next_high = HIDWORD(mp_next[1].m_listHead.m_sentinel.mp_next)), mp_next_high == -1) )
  {
LABEL_30:
    PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(v2, (const scr_string_t)scr_const.door, 1);
    if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 594, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
      __debugbreak();
    ScriptableSv_InitEventParams(&outParams, v2, PartScriptedDefFromName);
    if ( doorMoveType == DOOR_MOVE_OPEN_LEFT_RELIABLE )
    {
      v13 = 4;
    }
    else if ( doorMoveType == DOOR_MOVE_OPEN_RIGHT_RELIABLE )
    {
      v13 = 8;
    }
    else
    {
      v13 = 0;
    }
    ScriptableBg_ChangePartState(&outParams, v13, 1);
  }
  else
  {
    doorState = G_GetGEntity(mp_next_high)->client->ps.doorState;
    while ( doorState->index != (_DWORD)v2 )
    {
      ++v7;
      ++doorState;
      if ( v7 >= 2 )
        goto LABEL_30;
    }
    doorState->moveType = doorMoveType;
    doorState->moveTime = level.time;
  }
}

/*
==============
G_Door_NearestAssignedClientNum
==============
*/
__int64 G_Door_NearestAssignedClientNum(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  float v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  gclient_s *client; 
  __int64 v10; 
  __int64 v11; 
  vec3_t outOrigin; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  v3 = FLOAT_3_4028235e38;
  v4 = 0;
  v5 = -1;
  if ( level.maxclients > 0 )
  {
    v6 = 0i64;
    v7 = 0i64;
    do
    {
      if ( v4 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v6] )
      {
        if ( v4 >= 0x800 )
        {
          LODWORD(v11) = 2048;
          LODWORD(v10) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        client = g_entities[v7].client;
        if ( g_entities[v7].health )
        {
          if ( client->ps.doorState[0].index == scriptableIndex && (float)((float)((float)((float)(client->ps.origin.v[1] - outOrigin.v[1]) * (float)(client->ps.origin.v[1] - outOrigin.v[1])) + (float)((float)(client->ps.origin.v[0] - outOrigin.v[0]) * (float)(client->ps.origin.v[0] - outOrigin.v[0]))) + (float)((float)(client->ps.origin.v[2] - outOrigin.v[2]) * (float)(client->ps.origin.v[2] - outOrigin.v[2]))) < v3 )
          {
            v5 = v4;
            v3 = (float)((float)((float)(client->ps.origin.v[1] - outOrigin.v[1]) * (float)(client->ps.origin.v[1] - outOrigin.v[1])) + (float)((float)(client->ps.origin.v[0] - outOrigin.v[0]) * (float)(client->ps.origin.v[0] - outOrigin.v[0]))) + (float)((float)(client->ps.origin.v[2] - outOrigin.v[2]) * (float)(client->ps.origin.v[2] - outOrigin.v[2]));
          }
          if ( client->ps.doorState[1].index == scriptableIndex && (float)((float)((float)((float)(client->ps.origin.v[1] - outOrigin.v[1]) * (float)(client->ps.origin.v[1] - outOrigin.v[1])) + (float)((float)(client->ps.origin.v[0] - outOrigin.v[0]) * (float)(client->ps.origin.v[0] - outOrigin.v[0]))) + (float)((float)(client->ps.origin.v[2] - outOrigin.v[2]) * (float)(client->ps.origin.v[2] - outOrigin.v[2]))) < v3 )
          {
            v5 = v4;
            v3 = (float)((float)((float)(client->ps.origin.v[1] - outOrigin.v[1]) * (float)(client->ps.origin.v[1] - outOrigin.v[1])) + (float)((float)(client->ps.origin.v[0] - outOrigin.v[0]) * (float)(client->ps.origin.v[0] - outOrigin.v[0]))) + (float)((float)(client->ps.origin.v[2] - outOrigin.v[2]) * (float)(client->ps.origin.v[2] - outOrigin.v[2]));
          }
        }
      }
      ++v4;
      ++v6;
      ++v7;
    }
    while ( (int)v4 < level.maxclients );
  }
  return v5;
}

/*
==============
G_Door_OpenReliablyFromPosition
==============
*/
void G_Door_OpenReliablyFromPosition(unsigned int scriptableIndex, vec3_t *position)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  float v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 
  double v13; 
  float v14; 
  double v15; 
  DoorMoveType v16; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v6 = LODWORD(position->v[1]);
  v5 = position->v[1] - InstanceCommonContext->originInitial.v[1];
  v7 = position->v[0] - InstanceCommonContext->originInitial.v[0];
  v8 = position->v[2] - InstanceCommonContext->originInitial.v[2];
  v9 = InstanceCommonContext->anglesInitial.v[1];
  *(float *)&v6 = fsqrt((float)((float)(v5 * v5) + (float)(v7 * v7)) + (float)(v8 * v8));
  _XMM5 = v6;
  __asm
  {
    vcmpless xmm1, xmm5, cs:__real@80000000
    vblendvps xmm1, xmm5, xmm2, xmm1
  }
  v13 = AngleDelta(InstanceCommonContext->angles.v[1], v9);
  v14 = *(float *)&v13;
  *(float *)&v13 = atan2f_0(v5 * (float)(1.0 / *(float *)&_XMM1), v7 * (float)(1.0 / *(float *)&_XMM1));
  v15 = AngleDelta(v9, *(float *)&v13 * 57.295776);
  if ( *(float *)&v15 <= 0.0 )
  {
    v16 = DOOR_MOVE_OPEN_RIGHT_RELIABLE;
    if ( v14 < -89.989998 )
      return;
  }
  else
  {
    v16 = DOOR_MOVE_OPEN_LEFT_RELIABLE;
    if ( v14 > 89.989998 )
      return;
  }
  G_Door_MoveReliably(scriptableIndex, v16);
}

/*
==============
G_Door_ProcessDamageEvent
==============
*/
void G_Door_ProcessDamageEvent(const ScriptableDamageEvent *damageEvent)
{
  unsigned int mod; 
  int v3; 
  float v4; 
  __int128 v5; 
  ScriptableInstanceContext *InstanceCommonContext; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  __int128 v11; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int8 v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  unsigned __int64 v21; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v22; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned int v24; 
  unsigned __int64 v25; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v26; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v27; 
  __int64 v28; 
  gentity_s *GEntity; 
  unsigned int v30; 
  gclient_s *client; 
  unsigned int scriptableIndex; 
  DoorState *doorState; 
  DoorMoveType moveType; 
  GWeaponMap *Instance; 
  ScriptableEventParams outParams; 
  vec3_t outOrigin; 

  mod = damageEvent->mod;
  if ( mod <= 0x10 )
  {
    v3 = 65712;
    if ( _bittest(&v3, mod) )
    {
      v4 = damageEvent->start.v[0];
      v5 = LODWORD(damageEvent->start.v[1]);
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(damageEvent->scriptableIndex);
      ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, damageEvent->scriptableIndex, &outOrigin);
      v7 = v4 - outOrigin.v[0];
      v11 = v5;
      v8 = *(float *)&v5 - outOrigin.v[1];
      v9 = DCONST_DVARFLT_bg_doorDamageRadiusMultiplier;
      *(float *)&v11 = fsqrt((float)(v8 * v8) + (float)(v7 * v7));
      _XMM6 = v11;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
      }
      if ( !DCONST_DVARFLT_bg_doorDamageRadiusMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorDamageRadiusMultiplier") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( *(float *)&v11 <= (float)(damageEvent->explosionRadius * v9->current.value) )
      {
        PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(damageEvent->scriptableIndex, (const scr_string_t)scr_const.door, 1);
        if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1008, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
          __debugbreak();
        PartRuntime = ScriptableSv_GetPartRuntime(damageEvent->scriptableIndex, PartScriptedDefFromName);
        if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1011, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
          __debugbreak();
        if ( PartRuntime->stateId != 16 )
        {
          v16 = 0;
          v17 = atan2f_0(v8 * (float)(1.0 / *(float *)&_XMM0), v7 * (float)(1.0 / *(float *)&_XMM0)) * 57.295776;
          v18 = AngleDelta(InstanceCommonContext->angles.v[1], v17);
          v19 = *(float *)&v18;
          v20 = AngleDelta(InstanceCommonContext->angles.v[1], InstanceCommonContext->anglesInitial.v[1]);
          if ( v19 >= 0.0 )
          {
            if ( *(float *)&v20 >= 90.0 )
              return;
          }
          else
          {
            v16 = 1;
            if ( *(float *)&v20 <= -90.0 )
              return;
          }
          v21 = damageEvent->scriptableIndex % 0x301ui64;
          if ( v21 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v22 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v21];
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v22->m_listHead.m_sentinel.mp_next;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v22->m_listHead.m_sentinel.mp_next == v22 )
            goto LABEL_27;
          while ( 1 )
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == damageEvent->scriptableIndex )
              break;
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
            if ( mp_next == v22 )
              goto LABEL_27;
          }
          v25 = damageEvent->scriptableIndex % 0x301ui64;
          if ( v25 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v26 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v25];
          v27 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v26->m_listHead.m_sentinel.mp_next;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v26->m_listHead.m_sentinel.mp_next == v26 )
          {
LABEL_40:
            v27 = NULL;
          }
          else
          {
            while ( 1 )
            {
              if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( LODWORD(v27[1].m_listHead.m_sentinel.mp_next) == damageEvent->scriptableIndex )
                break;
              v27 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v27->m_listHead.m_sentinel.mp_next;
              if ( v27 == v26 )
                goto LABEL_40;
            }
          }
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v28 = (__int64)&v27[1].m_listHead.m_sentinel.mp_next + 4;
          if ( !v27 )
            v28 = 4i64;
          if ( *(_DWORD *)v28 != -1 )
          {
            if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            GEntity = G_GetGEntity(*(_DWORD *)v28);
            if ( GEntity && GEntity->health )
            {
              if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v30 = *(_DWORD *)v28;
              if ( v30 != -1 )
                goto LABEL_57;
            }
          }
          v30 = G_Door_NearestAssignedClientNum(damageEvent->scriptableIndex);
          if ( v30 == -1 )
          {
LABEL_27:
            ScriptableSv_InitEventParams(&outParams, damageEvent->scriptableIndex, PartScriptedDefFromName);
            v24 = 12;
            if ( !v16 )
              v24 = 11;
            ScriptableBg_ChangePartState(&outParams, v24, 1);
          }
          else
          {
LABEL_57:
            client = G_GetGEntity(v30)->client;
            scriptableIndex = damageEvent->scriptableIndex;
            doorState = client->ps.doorState;
            if ( client->ps.doorState[0].index == scriptableIndex || (doorState = &client->ps.doorState[1], client->ps.doorState[1].index == scriptableIndex) )
            {
              moveType = doorState->moveType;
              if ( (unsigned int)(moveType - 7) > 1 && moveType != DOOR_MOVE_COMPLETE )
              {
                Instance = GWeaponMap::GetInstance();
                BG_AddUnPredictableEventToPlayerstate(EV_DOOR_EXPLODE, doorState->index, level.time, Instance, &client->ps);
                doorState->moveType = (v16 ^ 1) + 7;
                doorState->moveTime = level.time;
              }
            }
            else
            {
              Com_PrintWarning(15, "WARNING: G_Door_ProcessDamageEvent - Scriptable Index not found for owner client %d ", v30);
            }
          }
        }
      }
    }
  }
}

/*
==============
G_Door_ProcessUseList
==============
*/
void G_Door_ProcessUseList(const UsableList *usableList, playerState_s *ps)
{
  unsigned __int16 *p_itemCount; 
  const UsableList *v4; 
  unsigned int i; 
  unsigned int CursorHintEntIndex; 
  unsigned int v7; 

  p_itemCount = &usableList->itemCount;
  v4 = usableList;
  for ( i = 0; i < 2; ++i )
  {
    if ( i >= *p_itemCount )
      break;
    if ( v4->items[0].ref.useClass == USE_CLASS_SCRIPTABLE )
    {
      CursorHintEntIndex = UsableRef_GetCursorHintEntIndex((const UsableRef *)v4);
      if ( G_Door_ScriptableIsDoor(CursorHintEntIndex) )
      {
        v7 = UsableRef_GetCursorHintEntIndex((const UsableRef *)v4);
        G_Door_Assign(ps, v7);
      }
    }
    v4 = (const UsableList *)((char *)v4 + 20);
  }
}

/*
==============
G_Door_Reset
==============
*/
void G_Door_Reset(void)
{
  ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v2; 

  p_m_buckets = (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_doorMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_doorMap.m_freelist.m_head.mp_next = v2 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v2 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v2->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_doorMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_doorMap.m_currentNumItems );
  s_doorMap.m_currentNumItems = 0i64;
}

/*
==============
G_Door_ScriptableIsDoor
==============
*/
bool G_Door_ScriptableIsDoor(unsigned int scriptableIndex)
{
  const dvar_t *v1; 
  const ScriptableDef *def; 

  v1 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled && (def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def) != NULL && (def->flags & 0x180000) != 0;
}

/*
==============
G_Door_SetOwnership
==============
*/
void G_Door_SetOwnership(const playerState_s *ps)
{
  const dvar_t *v2; 
  unsigned int *p_index; 
  unsigned int i; 
  unsigned __int64 v5; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v6; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v8; 
  __int64 v9; 
  unsigned int v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 723, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && ps->pm_type < 7 )
  {
    p_index = &ps->doorState[0].index;
    for ( i = 0; i < 2; ++i )
    {
      if ( *p_index == -1 )
        goto LABEL_33;
      v5 = *p_index % 0x301ui64;
      if ( v5 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v6 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v5];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v6->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v6->m_listHead.m_sentinel.mp_next == v6 )
      {
LABEL_20:
        mp_next = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == *p_index )
            break;
          mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
          if ( mp_next == v6 )
            goto LABEL_20;
        }
        if ( mp_next )
        {
          v8 = mp_next;
          goto LABEL_22;
        }
      }
      v8 = NULL;
LABEL_22:
      if ( !mp_next )
      {
        Com_PrintWarning(34, "WARNING: G_Door_SetOwnership - Door ownership not found for door %d, client %d.  Notify JFutch with details.", *p_index, (unsigned int)ps->clientNum);
        return;
      }
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v9 = (__int64)&v8[1].m_listHead.m_sentinel.mp_next + 4;
      if ( !v8 )
        v9 = 4i64;
      v10 = p_index[3];
      if ( v10 && v10 != 14 && (*(_DWORD *)v9 == -1 || *(_DWORD *)v9 == ps->clientNum) )
        *(_DWORD *)v9 = ps->clientNum;
LABEL_33:
      p_index += 4;
    }
  }
}

/*
==============
G_Door_SetScriptableAngle
==============
*/
void G_Door_SetScriptableAngle(unsigned int scriptableIndex, float targetAngle)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  vec3_t outDoorAngles; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  BG_Door_CalcDoorAngles(&InstanceCommonContext->anglesInitial, targetAngle, &outDoorAngles);
  ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, &InstanceCommonContext->originInitial, &outDoorAngles, 1);
}

/*
==============
G_Door_SettleScriptableState
==============
*/
void G_Door_SettleScriptableState(unsigned int scriptableIndex)
{
  ScriptablePartDef *PartScriptedDefFromName; 
  ScriptableInstanceContext *InstanceCommonContext; 
  float v4; 
  float v5; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int16 stateId; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  double v11; 
  double v12; 
  ScriptableEventParams outParams; 
  unsigned int outStateIdx; 

  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 770, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(scriptableIndex, (const scr_string_t)scr_const.door, 1);
  if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 772, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v4 = InstanceCommonContext->anglesInitial.v[1];
  v5 = InstanceCommonContext->angles.v[1];
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartScriptedDefFromName);
  if ( PartRuntime->stateId || (AngleDelta(v5, v4), COERCE_FLOAT(LODWORD(v5) & _xmm) > 0.0099999998) )
  {
    stateId = PartRuntime->stateId;
    if ( PartRuntime->stateId != 16 )
    {
      if ( (unsigned __int16)(stateId - 11) <= 1u && (v8 = 0, v9 = (__int64)&PartScriptedDefFromName->states[stateId], *(_DWORD *)(v9 + 12)) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 16) + 176i64 * v8;
          if ( *(_DWORD *)(v10 + 16) == 34 && level.time < ScriptableSv_StateEventMoveGetData(InstanceCommonContext, (const ScriptableEventMoveDef *const)(v10 + 24))->startTime - (int)(float)(-1000.0 * *(float *)(v10 + 56)) )
            break;
          if ( ++v8 >= *(_DWORD *)(v9 + 12) )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        v11 = BG_Door_NearestAngle(PartScriptedDefFromName, v5, v4, &outStateIdx);
        if ( PartRuntime->stateId != outStateIdx || (AngleDelta(v5, *(float *)&v11 + v4), COERCE_FLOAT(LODWORD(v5) & _xmm) > 0.0099999998) )
        {
          v12 = AngleDelta(v5, InstanceCommonContext->anglesInitial.v[1]);
          InstanceCommonContext->angles.v[1] = *(float *)&v12 + InstanceCommonContext->anglesInitial.v[1];
          ScriptableSv_InitEventParams(&outParams, scriptableIndex, PartScriptedDefFromName);
          ScriptableBg_ExecutePartChange(&outParams, outStateIdx, 1);
        }
      }
    }
  }
}

/*
==============
G_Door_ShowHint
==============
*/
bool G_Door_ShowHint(playerState_s *ps, unsigned int scriptableIndex)
{
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned int *p_index; 
  char v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v13; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v15; 
  __int64 v16; 
  const ScriptableDef *def; 

  v3 = scriptableIndex;
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 68, ASSERT_TYPE_ASSERT, "( candidateDef )", (const char *)&queryFormat, "candidateDef") )
    __debugbreak();
  v4 = 0;
  p_index = &ps->doorState[0].index;
  v6 = 0;
  v7 = v3 % 0x301;
  do
  {
    v8 = *p_index;
    if ( *p_index == (_DWORD)v3 )
    {
      v9 = p_index[3];
      v10 = v9 - 2 <= 4 || v9 == 13;
      v11 = v9 - 7 <= 1 || v9 == 13;
      v12 = ((v9 - 10) & 0xFFFFFFFC) == 0 && v9 != 12;
      if ( !v10 && !v11 && !v12 )
        v6 = 1;
    }
    if ( v7 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v13 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v7];
    mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v13->m_listHead.m_sentinel.mp_next;
    if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v13->m_listHead.m_sentinel.mp_next == v13 )
    {
LABEL_31:
      mp_next = NULL;
LABEL_32:
      v15 = NULL;
      goto LABEL_33;
    }
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v3 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v13 )
        goto LABEL_31;
    }
    if ( !mp_next )
      goto LABEL_32;
    v15 = mp_next;
LABEL_33:
    if ( mp_next )
    {
      v16 = (__int64)&v15[1].m_listHead.m_sentinel.mp_next + 4;
      if ( !v15 )
        v16 = 4i64;
      if ( *(_DWORD *)v16 != -1 )
      {
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( *(_DWORD *)v16 != ps->clientNum )
          return 0;
      }
    }
    if ( (def->flags & 0x100000) != 0 && (v8 == -1 || (ScriptableSv_GetInstanceCommonContext(v8)->def->flags & 0x100000) == 0) )
      return 0;
    ++v4;
    p_index += 4;
  }
  while ( v4 < 2 );
  return v6 != 0;
}

/*
==============
G_Door_UpdateClientInfo
==============
*/
void G_Door_UpdateClientInfo(gclient_s *client)
{
  const dvar_t *v2; 
  DoorClientState *doorState; 
  bool enabled; 
  DoorState *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v10; 
  unsigned __int64 v11; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v12; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v13; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v14; 
  const dvar_t *v15; 
  unsigned int index; 
  __int64 v17; 
  int entity; 
  bool v19; 
  bool HasValidVehicle; 
  DoorMoveType moveType; 
  int v22; 
  __int128 v23; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 832, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v2 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  doorState = client->sess.cs.doorState;
  enabled = v2->current.enabled;
  v5 = client->ps.doorState;
  v6 = 2i64;
  do
  {
    if ( client->sess.sessionState >= SESS_STATE_SPECTATOR || !enabled || v5->index == -1 )
    {
LABEL_68:
      doorState->index = -1;
      doorState->owner = 0;
      goto LABEL_69;
    }
    v7 = v5->index % 0x301ui64;
    if ( v7 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v8 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v7];
    mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next;
    if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v8->m_listHead.m_sentinel.mp_next == v8 )
    {
LABEL_20:
      mp_next = NULL;
LABEL_21:
      v10 = NULL;
      goto LABEL_22;
    }
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v5->index )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v8 )
        goto LABEL_20;
    }
    if ( !mp_next )
      goto LABEL_21;
    v10 = mp_next;
LABEL_22:
    if ( mp_next )
    {
      index = v5->index;
      v17 = (__int64)&v10[1].m_listHead.m_sentinel.mp_next + 4;
      if ( !v10 )
        v17 = 4i64;
      doorState->angle = ScriptableSv_GetInstanceCommonContext(v5->index)->angles.v[1];
      doorState->index = index;
      doorState->owner = *(_DWORD *)v17 == client->ps.clientNum;
      entity = client->ps.vehicleState.entity;
      v19 = entity != 2047 && entity;
      HasValidVehicle = G_Door_HasValidVehicle(&client->ps);
      moveType = v5->moveType;
      if ( moveType == DOOR_MOVE_RELEASE || client->ps.pm_type >= 5 || v19 && !HasValidVehicle )
      {
        doorState->index = -1;
        doorState->owner = 0;
      }
      else if ( moveType == DOOR_MOVE_COMPLETE || moveType == DOOR_MOVE_INVALID )
      {
        v5->moveType = DOOR_MOVE_INVALID;
        if ( client->ps.clientNum == *(_DWORD *)v17 )
          *(_DWORD *)v17 = -1;
      }
      if ( !doorState->index )
        goto LABEL_68;
    }
    else
    {
      if ( client->ps.clientNum == client->sess.cs.clientIndex )
      {
        doorState->index = v5->index;
        doorState->owner = v5->moveType != DOOR_MOVE_INVALID;
        Sys_EnterCriticalSection(CRITSECT_G_DOORS);
        v11 = v5->index;
        HIDWORD(v23) = v22;
        LODWORD(v23) = v5->index;
        *(_QWORD *)((char *)&v23 + 4) = (v5->moveType != DOOR_MOVE_INVALID) | 0x100000000i64;
        if ( v11 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v12 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v11 % 0x301];
        v13 = *v12;
        if ( *v12 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v12 )
        {
LABEL_33:
          if ( !s_doorMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_doorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)s_doorMap.m_freelist.m_head.mp_next == &s_doorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x190ui64) )
            __debugbreak();
          v14 = s_doorMap.m_freelist.m_head.mp_next;
          s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
          v14->mp_next = NULL;
          *(_OWORD *)&v14[1].mp_next = v23;
          v14->mp_next = *v12;
          *v12 = v14;
          ++s_doorMap.m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v13[1].mp_next) == (_DWORD)v11 )
              break;
            v13 = v13->mp_next;
            if ( v13 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v12 )
              goto LABEL_33;
          }
        }
        Sys_LeaveCriticalSection(CRITSECT_G_DOORS);
      }
      else
      {
        doorState->index = -1;
        doorState->owner = 0;
      }
      v15 = DVARBOOL_bg_doorCrashBadState;
      if ( !DVARBOOL_bg_doorCrashBadState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorCrashBadState") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
        client->ps.clientNum = MEMORY[0];
    }
LABEL_69:
    ++v5;
    ++doorState;
    --v6;
  }
  while ( v6 );
}

/*
==============
G_Door_UpdateOwnerMap
==============
*/
void G_Door_UpdateOwnerMap()
{
  __int128 v0; 
  ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 
  int maxclients; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  gentity_s *v8; 
  int *p_commandTime; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  bool v13; 
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  bool v17; 
  int v18; 
  gclient_s *client; 
  bool v20; 
  bool v21; 
  unsigned __int64 v22; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v23; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v25; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v26; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v27; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v28; 
  __int64 v29; 
  bool v30; 
  int *v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v34; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v35; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int *v39; 
  ScriptableInstanceContext *InstanceCommonContext; 
  int v41; 
  float v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  __int64 v48; 
  __int64 v49; 
  gentity_s *v50; 
  double v51; 
  int v52; 
  __int128 v53; 
  int v54[200]; 
  __int128 v55; 

  p_m_buckets = (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_doorMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_doorMap.m_freelist.m_head.mp_next = v3 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v3 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v3->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_doorMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_doorMap.m_currentNumItems );
  maxclients = level.maxclients;
  s_doorMap.m_currentNumItems = 0i64;
  v5 = 0;
  v45 = 0;
  v47 = 0;
  if ( level.maxclients > 0 )
  {
    v6 = 0i64;
    v55 = v0;
    v48 = 0i64;
    do
    {
      v7 = 1456 * v6;
      v8 = &g_entities[v6];
      v49 = 1456 * v6;
      v50 = v8;
      if ( v8 )
      {
        p_commandTime = &v8->client->ps.commandTime;
        if ( p_commandTime )
        {
          v10 = 0;
          v46 = 0;
          v11 = 0i64;
          while ( 1 )
          {
            if ( p_commandTime[4 * v11 + 255] != -1 )
            {
              if ( v5 >= 0x800 )
              {
                LODWORD(v44) = 2048;
                LODWORD(v43) = v5;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, v44) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              if ( *(&g_entities->r.isInUse + v7) != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( g_entityIsInUse[v6] || p_commandTime[4 * v11 + 255] )
              {
                v12 = p_commandTime[72];
                v13 = v12 != 2047 && v12;
                v17 = v12 != 2047 && v12 && (GEntity = G_GetGEntity(v12)) != NULL && (vehicle = GEntity->vehicle) != NULL && (ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex)) != NULL && BG_Door_ValidVehicle(ServerDef);
                v18 = p_commandTime[4 * v11 + 258];
                client = v8->client;
                v20 = (unsigned int)(v18 - 4) <= 2;
                v21 = 0;
                if ( client->sess.connected )
                {
                  if ( client->sess.sessionState )
                  {
                    v21 = 1;
                  }
                  else if ( v18 == 14 )
                  {
                    v21 = 1;
                  }
                  else if ( p_commandTime[3] < 5 )
                  {
                    if ( v13 && !v17 )
                      v21 = (unsigned int)(v18 - 4) > 2;
                  }
                  else
                  {
                    v21 = 1;
                  }
                }
                else
                {
                  v21 = 1;
                }
                v22 = (unsigned int)p_commandTime[4 * v11 + 255] % 0x301ui64;
                if ( v22 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                v23 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v22];
                mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v23->m_listHead.m_sentinel.mp_next;
                if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v23->m_listHead.m_sentinel.mp_next == v23 )
                {
LABEL_59:
                  mp_next = NULL;
                }
                else
                {
                  while ( 1 )
                  {
                    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                      __debugbreak();
                    if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == p_commandTime[4 * v11 + 255] )
                      break;
                    mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
                    if ( mp_next == v23 )
                      goto LABEL_59;
                  }
                }
                if ( mp_next )
                {
                  if ( v21 )
                    goto LABEL_130;
                  if ( p_commandTime[4 * v11 + 258] )
                    HIDWORD(mp_next[1].m_listHead.m_sentinel.mp_next) = p_commandTime[115];
                  v8 = v50;
                  v29 = (__int64)&mp_next[2].m_listHead.m_sentinel.mp_next + 4;
                  v7 = v49;
                  v30 = mp_next == NULL;
                  v6 = v48;
                  if ( v30 )
                    v29 = 12i64;
                  *(_BYTE *)v29 = 0;
                }
                else
                {
                  LODWORD(v51) = -1;
                  if ( v21 )
                  {
                    LOBYTE(v52) = 1;
                  }
                  else
                  {
                    if ( p_commandTime[4 * v11 + 258] )
                      LODWORD(v51) = p_commandTime[115];
                    LOBYTE(v52) = 0;
                  }
                  v25 = (unsigned int)p_commandTime[4 * v11 + 255];
                  HIDWORD(v53) = v52;
                  v54[v47++] = v25;
                  LODWORD(v53) = v25;
                  *(double *)((char *)&v53 + 4) = v51;
                  if ( v25 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                    __debugbreak();
                  v26 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v25 % 0x301];
                  v27 = *v26;
                  if ( *v26 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v26 )
                  {
LABEL_75:
                    if ( !s_doorMap.m_freelist.m_head.mp_next )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                        __debugbreak();
                      if ( !s_doorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                        __debugbreak();
                    }
                    if ( (ntl::internal::pool_allocator_freelist<24> *)s_doorMap.m_freelist.m_head.mp_next == &s_doorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x190ui64) )
                      __debugbreak();
                    v28 = s_doorMap.m_freelist.m_head.mp_next;
                    s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
                    v28->mp_next = NULL;
                    *(_OWORD *)&v28[1].mp_next = v53;
                    v28->mp_next = *v26;
                    *v26 = v28;
                    ++s_doorMap.m_currentNumItems;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                        __debugbreak();
                      if ( LODWORD(v27[1].mp_next) == (_DWORD)v25 )
                        break;
                      v27 = v27->mp_next;
                      if ( v27 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v26 )
                        goto LABEL_75;
                    }
                  }
                  v10 = v46;
                  if ( v21 )
                  {
LABEL_130:
                    if ( v20 )
                    {
                      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(p_commandTime[4 * v11 + 255]);
                      v41 = p_commandTime[4 * v11 + 258];
                      v42 = InstanceCommonContext->anglesInitial.v[1];
                      if ( v41 == 5 )
                      {
                        v42 = v42 + 90.0;
                      }
                      else if ( v41 == 4 )
                      {
                        v42 = v42 - 90.0;
                      }
                      G_Door_SetScriptableAngle(p_commandTime[4 * v11 + 255], v42);
                    }
                    v8 = v50;
                    v6 = v48;
                    v5 = v45;
                    v7 = v49;
                    if ( v50->client->sess.sessionState != SESS_STATE_SPECTATOR )
                    {
                      p_commandTime[4 * v11 + 255] = -1;
                      p_commandTime[4 * v11 + 258] = 0;
                    }
                    goto LABEL_95;
                  }
                  v6 = v48;
                  v8 = v50;
                  v7 = v49;
                }
              }
              v5 = v45;
            }
LABEL_95:
            ++v10;
            ++v11;
            v46 = v10;
            if ( v10 >= 2 )
            {
              maxclients = level.maxclients;
              break;
            }
          }
        }
      }
      ++v5;
      ++v6;
      v45 = v5;
      v48 = v6;
    }
    while ( (int)v5 < maxclients );
    if ( v47 )
    {
      v31 = v54;
      v32 = v47;
      while ( 1 )
      {
        v33 = (unsigned int)*v31 % 0x301ui64;
        if ( v33 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v34 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v33];
        v35 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v34->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v34->m_listHead.m_sentinel.mp_next == v34 )
          break;
        while ( 1 )
        {
          if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v35[1].m_listHead.m_sentinel.mp_next) == *v31 )
            break;
          v35 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v35->m_listHead.m_sentinel.mp_next;
          if ( v35 == v34 )
            goto LABEL_109;
        }
        if ( !v35 )
          goto LABEL_110;
        v36 = v35;
LABEL_111:
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v37 = (__int64)&v36[2].m_listHead.m_sentinel.mp_next + 4;
        if ( !v36 )
          v37 = 12i64;
        if ( *(_BYTE *)v37 )
        {
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v38 = (__int64)&v36[1].m_listHead.m_sentinel.mp_next + 4;
          if ( !v36 )
            v38 = 4i64;
          *(_DWORD *)v38 = -1;
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v39 = (unsigned int *)&v36[1];
          if ( !v36 )
            v39 = NULL;
          G_Door_SettleScriptableState(*v39);
        }
        ++v31;
        if ( !--v32 )
          return;
      }
LABEL_109:
      v35 = NULL;
LABEL_110:
      v36 = NULL;
      goto LABEL_111;
    }
  }
}

/*
==============
G_Door_UpdateScriptable
==============
*/
void G_Door_UpdateScriptable(gclient_s *client)
{
  DoorState *doorState; 
  __int64 v3; 
  __int64 index; 
  ScriptableInstanceServerContext *v5; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  double v7; 
  __int64 v8; 
  __int64 v9; 
  ScriptableEventParams outParams; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 943, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  doorState = client->ps.doorState;
  v3 = 2i64;
  do
  {
    index = doorState->index;
    if ( (_DWORD)index == -1 || doorState->moveType == DOOR_MOVE_INVALID )
    {
      if ( (unsigned int)(index - 1) <= 0xFFFFFFFD )
        doorState->angle = ScriptableSv_GetInstanceCommonContext(index)->angles.v[1];
    }
    else
    {
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)index >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v9) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v8) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v5 = &g_scriptableSv_instanceContexts[index];
      PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(doorState->index, (const scr_string_t)scr_const.door, 1);
      if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 953, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
        __debugbreak();
      ScriptableSv_InitEventParams(&outParams, doorState->index, PartScriptedDefFromName);
      v7 = AngleDelta(v5->commonContext.anglesInitial.v[1], doorState->angle);
      ScriptableBg_ChangePartState(&outParams, (COERCE_FLOAT(LODWORD(v7) & _xmm) < 0.0099999998) + 13, 1);
      G_Door_SetScriptableAngle(doorState->index, doorState->angle);
    }
    ++doorState;
    --v3;
  }
  while ( v3 );
}

