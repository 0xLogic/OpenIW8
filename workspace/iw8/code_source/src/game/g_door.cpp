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
  unsigned __int64 v5; 
  int entity; 
  bool v8; 
  bool HasValidVehicle; 
  char v23; 
  char v24; 
  unsigned int *v25; 
  unsigned int v26; 
  unsigned int *p_index; 
  unsigned int v29; 
  unsigned int v42; 
  unsigned __int64 v43; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v44; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v46; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v47; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v48; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v50; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v51; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v57; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v58; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScopedCriticalSection v63; 
  vec3_t outOrigin; 
  __int128 v65; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v5 = candidateIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Door_Assign");
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !G_Door_ScriptableIsDoor(v5) || ps->pm_type >= 7 )
    goto LABEL_70;
  entity = ps->vehicleState.entity;
  v8 = entity != 2047 && entity;
  HasValidVehicle = G_Door_HasValidVehicle(ps);
  if ( v8 && !HasValidVehicle )
    goto LABEL_70;
  BG_Door_GetPlayerOrigin(ps, &outOrigin);
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v5);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+20h]
    vsubss  xmm3, xmm0, dword ptr [rsp+0F8h+outOrigin]
    vmovss  xmm1, dword ptr [rax+24h]
    vsubss  xmm2, xmm1, dword ptr [rsp+0F8h+outOrigin+4]
    vmovss  xmm0, dword ptr [rax+28h]
    vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+outOrigin+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm0
    vmovss  xmm1, cs:DOOR_RELEASE_DIST_0
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm6, xmm2
  }
  if ( !(v23 | v24) )
    goto LABEL_70;
  v25 = NULL;
  v26 = 0;
  p_index = &ps->doorState[0].index;
  __asm { vmovss  xmm7, cs:__real@7f7fffff }
  while ( 1 )
  {
    v29 = *p_index;
    if ( *p_index == -1 )
    {
      __asm { vmovaps xmm6, xmm7 }
      goto LABEL_20;
    }
    if ( v29 == (_DWORD)v5 )
      break;
    if ( p_index[3] - 4 <= 2 )
      goto LABEL_21;
    _RAX = ScriptableSv_GetInstanceCommonContext(v29);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  xmm1, dword ptr [rax+0Ch]
      vmovss  xmm2, dword ptr [rax+10h]
      vsubss  xmm3, xmm0, dword ptr [rsp+0F8h+outOrigin]
      vsubss  xmm0, xmm1, dword ptr [rsp+0F8h+outOrigin+4]
      vsubss  xmm4, xmm2, dword ptr [rsp+0F8h+outOrigin+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm6
    }
    if ( v23 | v24 )
      goto LABEL_21;
    __asm { vmovaps xmm6, xmm3 }
LABEL_20:
    v25 = p_index;
LABEL_21:
    ++v26;
    p_index += 4;
    if ( v26 >= 2 )
      goto LABEL_24;
  }
  v25 = p_index;
LABEL_24:
  if ( v25 )
  {
    v42 = *v25;
    if ( (_DWORD)v5 != *v25 )
    {
      if ( v42 != -1 )
      {
        v25[3] = 14;
        v43 = v42 % 0x301ui64;
        if ( v43 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v44 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v43];
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v44->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v44->m_listHead.m_sentinel.mp_next == v44 )
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
            if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == *v25 )
              break;
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
            if ( mp_next == v44 )
              goto LABEL_36;
          }
        }
        if ( !mp_next )
          Com_PrintWarning(34, "WARNING: G_Door_Assign - Door ownership not found for door %d, client %d.  Notify JFutch with details. \n", *v25, (unsigned int)ps->clientNum);
        goto LABEL_70;
      }
      ScopedCriticalSection::ScopedCriticalSection(&v63, CRITSECT_G_DOORS, SCOPED_CRITSECT_NORMAL);
      if ( !s_doorMap.m_currentNumItems )
        goto LABEL_49;
      v46 = v5 % 0x301;
      if ( v5 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v47 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v46];
      v48 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v47->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v47->m_listHead.m_sentinel.mp_next == v47 )
      {
LABEL_49:
        v60 = 0x1FFFFFFFFi64;
        LODWORD(v65) = v5;
        __asm
        {
          vmovsd  xmm0, [rsp+0F8h+var_B8]
          vmovsd  qword ptr [rsp+0F8h+var_78+4], xmm0
        }
        HIDWORD(v65) = v61;
        if ( v5 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v50 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v5 % 0x301];
        v51 = *v50;
        if ( *v50 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50 )
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
          _RCX = s_doorMap.m_freelist.m_head.mp_next;
          s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
          _RCX->mp_next = NULL;
          __asm
          {
            vmovups xmm0, [rsp+0F8h+var_78]
            vmovups xmmword ptr [rcx+8], xmm0
          }
          _RCX->mp_next = *v50;
          *v50 = _RCX;
          ++s_doorMap.m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v51[1].mp_next) == (_DWORD)v5 )
              break;
            v51 = v51->mp_next;
            if ( v51 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50 )
              goto LABEL_58;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v48[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v5 )
            break;
          v48 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v48->m_listHead.m_sentinel.mp_next;
          if ( v48 == v47 )
            goto LABEL_49;
        }
        if ( v46 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v57 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v46];
        v58 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v57->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v57->m_listHead.m_sentinel.mp_next == v57 )
        {
LABEL_80:
          v58 = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v58[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v5 )
              break;
            v58 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v58->m_listHead.m_sentinel.mp_next;
            if ( v58 == v57 )
              goto LABEL_80;
          }
        }
        if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v59 = (__int64)&v58[2];
        if ( !v58 )
          v59 = 8i64;
        ++*(_DWORD *)v59;
      }
      v25[3] = 0;
      ScopedCriticalSection::~ScopedCriticalSection(&v63);
    }
    v25[1] = LODWORD(InstanceCommonContext->angles.v[1]);
    *v25 = v5;
  }
LABEL_70:
  Sys_ProfEndNamedEvent();
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  unsigned int v13; 
  char v16; 
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
    _RAX = ScriptableSv_GetInstanceCommonContext(v3);
    __asm { vmovss  xmm1, dword ptr [rax+30h]; angle2 }
    if ( mp_next )
    {
      __asm { vmovss  xmm0, dword ptr [rax+18h]; angle1 }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3c23d70a
      }
      v13 = 14;
      if ( !v16 )
        v13 = 13;
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rax+18h]; initialDoorAngle }
      BG_Door_NearestAngle(PartScriptedDefFromName, *(float *)&_XMM1, *(float *)&_XMM2, &outStateIdx);
      v13 = outStateIdx;
    }
    ScriptableBg_ExecutePartChange(&outParams, v13, 1);
  }
}

/*
==============
G_Door_GetDeltaAngle
==============
*/
double G_Door_GetDeltaAngle(unsigned int scriptableIndex)
{
  if ( !G_Door_ScriptableIsDoor(scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 121, ASSERT_TYPE_ASSERT, "(G_Door_ScriptableIsDoor( scriptableIndex ))", (const char *)&queryFormat, "G_Door_ScriptableIsDoor( scriptableIndex )") )
    __debugbreak();
  _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+18h]; angle2
    vmovss  xmm0, dword ptr [rax+30h]; angle1
  }
  return AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
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
  char v12; 
  const dvar_t *v13; 
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
  _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+18h]; angle2
    vmovss  xmm0, dword ptr [rax+30h]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3c23d70a
  }
  if ( !v12 )
    return 0;
  v13 = DCONST_DVARSTR_bg_doorPeekHintName;
  GetHintStringIndex = v6->GetHintStringIndex;
  if ( !DCONST_DVARSTR_bg_doorPeekHintName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorPeekHintName") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  *stringIndex = GetHintStringIndex(v6, v13->current.string);
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
  unsigned int v14; 
  const dvar_t *v16; 
  const ScriptableDef *def; 
  bool v18; 
  char v19; 
  char v20; 
  unsigned int v21; 
  unsigned int *p_index; 
  unsigned int v25; 
  __int64 v30; 
  __int64 v34; 
  unsigned __int64 v35; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v36; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 index; 
  DoorMoveType moveType; 
  bool v40; 
  bool v41; 
  bool v42; 
  unsigned __int64 v43; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v44; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v45; 
  char v54; 
  char v56; 
  bool v77; 
  int v80; 
  GHandler *v81; 
  GHandler *v83; 
  GHandler *v85; 
  GHandler *v87; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  int time; 
  unsigned int v93; 
  entity_event_t v94; 
  int clientNum; 
  __int64 v96; 
  char *fmt; 
  unsigned int v110; 
  __int64 v111; 
  ScopedCriticalSection v112; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
  }
  v14 = scriptableIndex;
  _RDI = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 311, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v16 = DVARBOOL_bg_doorEnableEnhanced;
  if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    def = ScriptableSv_GetInstanceCommonContext(v14)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 321, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    v18 = (def->flags & 0x100000) != 0;
    v19 = 1;
    v20 = 0;
    v21 = 0;
    p_index = &_RDI->ps.doorState[0].index;
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm13, cs:__real@3c23d70a
    }
    do
    {
      v25 = *p_index;
      if ( *p_index == v14 )
        v20 = 1;
      if ( v18 )
      {
        if ( v25 == -1 || (def->flags & 0x100000) == 0 )
          goto LABEL_96;
        _RAX = ScriptableSv_GetInstanceCommonContext(v25);
        __asm
        {
          vmovss  xmm1, dword ptr [rax+30h]; angle2
          vmovss  xmm0, dword ptr [rax+18h]; angle1
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vandps  xmm0, xmm0, xmm12
          vcomiss xmm0, xmm13
        }
        if ( !v54 )
          v19 = 0;
      }
      ++v21;
      p_index += 4;
    }
    while ( v21 < 2 );
    if ( v20 )
    {
      ScopedCriticalSection::ScopedCriticalSection(&v112, CRITSECT_G_DOORS, SCOPED_CRITSECT_NORMAL);
      v110 = 0;
      v30 = 0i64;
      v111 = 0i64;
      __asm
      {
        vmovss  xmm15, cs:__real@3f800000
        vxorps  xmm14, xmm14, xmm14
        vmovss  xmm11, cs:__real@42b40000
      }
      while ( 1 )
      {
        if ( !v18 && _RDI->ps.doorState[v30].index != v14 )
          goto LABEL_94;
        v34 = v30;
        v35 = _RDI->ps.doorState[v30].index % 0x301ui64;
        if ( v35 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v36 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v35];
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v36->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v36->m_listHead.m_sentinel.mp_next == v36 )
        {
LABEL_33:
          Com_PrintWarning(34, "WARNING: G_Door_Interact - Door %d not found in map.  Should never get here.  Notify JFutch with details. \n", _RDI->ps.doorState[v30].index);
        }
        else
        {
          while ( 1 )
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            index = _RDI->ps.doorState[v30].index;
            if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)index )
              break;
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
            if ( mp_next == v36 )
              goto LABEL_33;
          }
          moveType = _RDI->ps.doorState[v30].moveType;
          v40 = (unsigned int)(moveType - 2) <= 4 || moveType == DOOR_MOVE_COMPLETE;
          v41 = (unsigned int)(moveType - 7) <= 1 || moveType == DOOR_MOVE_COMPLETE;
          v42 = ((moveType - 10) & 0xFFFFFFFC) == 0 && moveType != DOOR_MOVE_PUSHING_BLOCKED;
          if ( v40 || v41 || v42 )
          {
LABEL_95:
            ScopedCriticalSection::~ScopedCriticalSection(&v112);
            break;
          }
          v43 = index % 0x301;
          if ( index % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v44 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v43];
          v45 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v44->m_listHead.m_sentinel.mp_next;
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v44->m_listHead.m_sentinel.mp_next == v44 )
          {
LABEL_58:
            v45 = NULL;
          }
          else
          {
            while ( 1 )
            {
              if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( LODWORD(v45[1].m_listHead.m_sentinel.mp_next) == _RDI->ps.doorState[v30].index )
                break;
              v45 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v45->m_listHead.m_sentinel.mp_next;
              if ( v45 == v44 )
                goto LABEL_58;
            }
          }
          if ( !v45 || HIDWORD(v45[1].m_listHead.m_sentinel.mp_next) == -1 || HIDWORD(v45[1].m_listHead.m_sentinel.mp_next) == _RDI->ps.clientNum )
          {
            _RAX = ScriptableSv_GetInstanceCommonContext(_RDI->ps.doorState[v30].index);
            __asm
            {
              vmovss  xmm6, dword ptr [rax+8]
              vmovss  xmm9, dword ptr [rax+0Ch]
              vmovss  xmm10, dword ptr [rax+10h]
              vmovss  xmm8, dword ptr [rax+30h]
              vmovss  xmm7, dword ptr [rax+18h]
              vmovaps xmm1, xmm8; angle2
              vmovaps xmm0, xmm7; angle1
            }
            *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
            __asm
            {
              vandps  xmm0, xmm0, xmm12
              vcomiss xmm0, xmm13
            }
            v56 = v54;
            if ( !v18 || !v54 || v19 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+30h]
                vsubss  xmm6, xmm0, xmm6
                vmovss  xmm1, dword ptr [rdi+34h]
                vsubss  xmm5, xmm1, xmm9
                vmovss  xmm0, dword ptr [rdi+38h]
                vsubss  xmm4, xmm0, xmm10
                vmulss  xmm2, xmm5, xmm5
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm1, xmm2, xmm2
                vcmpless xmm0, xmm1, cs:__real@80000000
                vblendvps xmm1, xmm1, xmm15, xmm0
                vdivss  xmm0, xmm15, xmm1
                vmulss  xmm1, xmm6, xmm0; X
                vmulss  xmm0, xmm5, xmm0; Y
              }
              *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm
              {
                vmulss  xmm6, xmm0, cs:__real@42652ee0
                vmovaps xmm1, xmm7; angle2
                vmovaps xmm0, xmm8; angle1
              }
              *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
              v77 = (_RDI->buttons & 0x200) != 0;
              if ( !v56 )
              {
                __asm { vcomiss xmm0, xmm14 }
                v80 = 2;
                Handler = GHandler::getHandler();
                __asm { vmovaps xmm3, xmm7; targetAngle }
                if ( BG_Door_BlockedByVehicle(_RDI->ps.doorState[v34].index, 2047, Handler, *(float *)&_XMM3, 0) )
                  goto LABEL_95;
                goto LABEL_81;
              }
              __asm
              {
                vmovaps xmm1, xmm8; angle2
                vmovaps xmm0, xmm6; angle1
              }
              *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
              __asm { vcomiss xmm0, xmm14 }
              if ( v54 )
              {
                v80 = 8 * v77 + 3;
              }
              else
              {
                v80 = 2;
                if ( v77 )
                  v80 = 10;
              }
              if ( ((v80 - 3) & 0xFFFFFFF7) != 0 )
              {
                if ( ((v80 - 2) & 0xFFFFFFF7) != 0 )
                  goto LABEL_82;
                v81 = GHandler::getHandler();
                __asm { vsubss  xmm3, xmm7, xmm11; targetAngle }
                if ( BG_Door_BlockedByVehicle(_RDI->ps.doorState[v34].index, 2047, v81, *(float *)&_XMM3, 0) && v80 == 2 )
                {
                  v83 = GHandler::getHandler();
                  __asm { vaddss  xmm3, xmm7, xmm11; targetAngle }
                  if ( BG_Door_BlockedByVehicle(_RDI->ps.doorState[v34].index, 2047, v83, *(float *)&_XMM3, 0) )
                    goto LABEL_95;
                  v80 = 3;
                  goto LABEL_83;
                }
LABEL_81:
                if ( v80 != 10 )
                {
LABEL_82:
                  if ( v80 != 11 )
                    goto LABEL_83;
                }
                fmt = (char *)_RDI;
                Instance = GWeaponMap::GetInstance();
                time = level.time;
                v93 = _RDI->ps.doorState[v34].index;
                v94 = EV_DOOR_PEEK;
              }
              else
              {
                v85 = GHandler::getHandler();
                __asm { vaddss  xmm3, xmm7, xmm11; targetAngle }
                if ( !BG_Door_BlockedByVehicle(_RDI->ps.doorState[v34].index, 2047, v85, *(float *)&_XMM3, 0) || v80 != 3 )
                  goto LABEL_81;
                v87 = GHandler::getHandler();
                __asm { vsubss  xmm3, xmm7, xmm11; targetAngle }
                if ( BG_Door_BlockedByVehicle(_RDI->ps.doorState[v34].index, 2047, v87, *(float *)&_XMM3, 0) )
                  goto LABEL_95;
                v80 = 2;
LABEL_83:
                fmt = (char *)_RDI;
                Instance = GWeaponMap::GetInstance();
                time = level.time;
                v93 = _RDI->ps.doorState[v34].index;
                if ( v56 )
                  v94 = EV_DOOR_OPEN;
                else
                  v94 = EV_DOOR_CLOSE;
              }
              BG_AddUnPredictableEventToPlayerstate(v94, v93, time, Instance, (playerState_s *)fmt);
              _RDI->ps.doorState[v34].moveType = v80;
              _RDI->ps.doorState[v34].moveTime = level.time;
              clientNum = _RDI->ps.clientNum;
              if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v96 = (__int64)&v45[1].m_listHead.m_sentinel.mp_next + 4;
              if ( !v45 )
                v96 = 4i64;
              *(_DWORD *)v96 = clientNum;
              v30 = v111;
            }
            v14 = scriptableIndex;
          }
        }
LABEL_94:
        ++v110;
        v111 = ++v30;
        if ( v110 >= 2 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, [rsp+148h+var_D8]
  }
}

/*
==============
G_Door_IsClosed
==============
*/
char G_Door_IsClosed(const unsigned int scriptableIndex)
{
  char v5; 

  _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+30h]; angle2
    vmovss  xmm0, dword ptr [rax+18h]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3c23d70a
  }
  return v5;
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
  bool v7; 
  __int64 v9; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  int mp_next_high; 
  DoorState *doorState; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  unsigned int v15; 
  ScriptableEventParams outParams; 

  v2 = scriptableIndex;
  if ( (unsigned int)(doorMoveType - 4) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 533, ASSERT_TYPE_ASSERT, "(BG_Door_IsMovingReliably( doorMoveType ))", (const char *)&queryFormat, "BG_Door_IsMovingReliably( doorMoveType )") )
    __debugbreak();
  _RAX = ScriptableSv_GetInstanceCommonContext(v2);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+18h]; angle2
    vmovss  xmm0, dword ptr [rax+30h]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  v7 = (unsigned int)doorMoveType < DOOR_MOVE_OPEN_RIGHT_RELIABLE;
  if ( doorMoveType == DOOR_MOVE_OPEN_RIGHT_RELIABLE )
  {
    __asm { vcomiss xmm0, cs:__real@c2b3fae1 }
    goto LABEL_11;
  }
  if ( doorMoveType == DOOR_MOVE_OPEN_LEFT_RELIABLE )
  {
    __asm { vcomiss xmm0, cs:__real@42b3fae1 }
  }
  else
  {
    v7 = (unsigned int)doorMoveType < DOOR_MOVE_CLOSE_RELIABLE;
    if ( doorMoveType == DOOR_MOVE_CLOSE_RELIABLE )
    {
      __asm
      {
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3c23d70a
      }
LABEL_11:
      if ( v7 )
        return;
    }
  }
  if ( v2 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v9 = 0i64;
  v10 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v2 % 0x301];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v10->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v10->m_listHead.m_sentinel.mp_next == v10 )
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
      if ( mp_next == v10 )
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
      v15 = 4;
    }
    else if ( doorMoveType == DOOR_MOVE_OPEN_RIGHT_RELIABLE )
    {
      v15 = 8;
    }
    else
    {
      v15 = 0;
    }
    ScriptableBg_ChangePartState(&outParams, v15, 1);
  }
  else
  {
    doorState = G_GetGEntity(mp_next_high)->client->ps.doorState;
    while ( doorState->index != (_DWORD)v2 )
    {
      ++v9;
      ++doorState;
      if ( v9 >= 2 )
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
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 result; 
  __int64 v34; 
  __int64 v35; 
  vec3_t outOrigin; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  v5 = 0;
  v6 = -1;
  if ( level.maxclients > 0 )
  {
    v7 = 0i64;
    v8 = 0i64;
    do
    {
      if ( v5 >= 0x800 )
      {
        LODWORD(v35) = 2048;
        LODWORD(v34) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        if ( v5 >= 0x800 )
        {
          LODWORD(v35) = 2048;
          LODWORD(v34) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        _RCX = g_entities[v8].client;
        if ( g_entities[v8].health )
        {
          if ( _RCX->ps.doorState[0].index == scriptableIndex )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+30h]
              vsubss  xmm3, xmm0, dword ptr [rsp+98h+outOrigin]
              vmovss  xmm1, dword ptr [rcx+34h]
              vmovss  xmm0, dword ptr [rcx+38h]
              vsubss  xmm2, xmm1, dword ptr [rsp+98h+outOrigin+4]
              vsubss  xmm4, xmm0, dword ptr [rsp+98h+outOrigin+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
              vcomiss xmm5, xmm6
            }
            if ( _RCX->ps.doorState[0].index < scriptableIndex )
            {
              v6 = v5;
              __asm { vmovaps xmm6, xmm5 }
            }
          }
          if ( _RCX->ps.doorState[1].index == scriptableIndex )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+30h]
              vsubss  xmm3, xmm0, dword ptr [rsp+98h+outOrigin]
              vmovss  xmm1, dword ptr [rcx+34h]
              vmovss  xmm0, dword ptr [rcx+38h]
              vsubss  xmm2, xmm1, dword ptr [rsp+98h+outOrigin+4]
              vsubss  xmm4, xmm0, dword ptr [rsp+98h+outOrigin+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
              vcomiss xmm5, xmm6
            }
            if ( _RCX->ps.doorState[1].index < scriptableIndex )
            {
              v6 = v5;
              __asm { vmovaps xmm6, xmm5 }
            }
          }
        }
      }
      ++v5;
      ++v7;
      ++v8;
    }
    while ( (int)v5 < level.maxclients );
  }
  result = v6;
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return result;
}

/*
==============
G_Door_OpenReliablyFromPosition
==============
*/
void G_Door_OpenReliablyFromPosition(unsigned int scriptableIndex, vec3_t *position)
{
  char v35; 
  char v36; 
  DoorMoveType v38; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = position;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
  }
  _RAX = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm7, xmm1, dword ptr [rax+0Ch]
    vsubss  xmm6, xmm0, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm4, xmm0, dword ptr [rax+10h]
    vmovss  xmm8, dword ptr [rax+18h]
    vmovss  xmm0, dword ptr [rax+30h]; angle1
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm3, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vsqrtss xmm5, xmm3, xmm3
    vcmpless xmm1, xmm5, cs:__real@80000000
    vblendvps xmm1, xmm5, xmm2, xmm1
    vdivss  xmm2, xmm2, xmm1
    vmovaps xmm1, xmm8; angle2
    vmulss  xmm6, xmm6, xmm2
    vmulss  xmm7, xmm7, xmm2
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm7; Y
    vmovaps xmm1, xmm6; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0; angle2
    vmovaps xmm0, xmm8; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v35 | v36 )
  {
    __asm { vcomiss xmm9, cs:__real@c2b3fae1 }
    v38 = DOOR_MOVE_OPEN_RIGHT_RELIABLE;
    if ( !v35 )
LABEL_5:
      G_Door_MoveReliably(scriptableIndex, v38);
  }
  else
  {
    __asm { vcomiss xmm9, cs:__real@42b3fae1 }
    v38 = DOOR_MOVE_OPEN_LEFT_RELIABLE;
    if ( v35 | v36 )
      goto LABEL_5;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
G_Door_ProcessDamageEvent
==============
*/
void G_Door_ProcessDamageEvent(const ScriptableDamageEvent *damageEvent)
{
  unsigned int mod; 
  int v7; 
  unsigned int scriptableIndex; 
  const dvar_t *v14; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int8 v29; 
  char v36; 
  char v37; 
  unsigned __int64 v40; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v41; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned int v43; 
  unsigned __int64 v47; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v48; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v49; 
  __int64 v50; 
  gentity_s *GEntity; 
  unsigned int v52; 
  gclient_s *client; 
  unsigned int v54; 
  DoorState *doorState; 
  DoorMoveType moveType; 
  GWeaponMap *Instance; 
  ScriptableEventParams outParams; 
  vec3_t outOrigin; 
  void *retaddr; 

  _R11 = &retaddr;
  mod = damageEvent->mod;
  _RDI = damageEvent;
  if ( mod <= 0x10 )
  {
    v7 = 65712;
    if ( _bittest(&v7, mod) )
    {
      scriptableIndex = _RDI->scriptableIndex;
      __asm
      {
        vmovaps xmmword ptr [r11-38h], xmm6
        vmovss  xmm6, dword ptr [rdi+38h]
        vmovaps xmmword ptr [r11-48h], xmm7
        vmovss  xmm7, dword ptr [rdi+3Ch]
        vmovaps xmmword ptr [r11-58h], xmm8
      }
      _RSI = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      ScriptableInstanceContextSecure::GetOrigin(_RSI, _RDI->scriptableIndex, &outOrigin);
      __asm
      {
        vsubss  xmm2, xmm6, dword ptr [rsp+0D8h+outOrigin]
        vsubss  xmm3, xmm7, dword ptr [rsp+0D8h+outOrigin+4]
      }
      v14 = DCONST_DVARFLT_bg_doorDamageRadiusMultiplier;
      __asm
      {
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm6, xmm1, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm7, xmm2, xmm1
        vmulss  xmm8, xmm3, xmm1
      }
      if ( !DCONST_DVARFLT_bg_doorDamageRadiusMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorDamageRadiusMultiplier") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0ACh]
        vmulss  xmm1, xmm0, dword ptr [rbx+28h]
        vcomiss xmm6, xmm1
      }
      if ( v36 | v37 )
      {
        PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(_RDI->scriptableIndex, (const scr_string_t)scr_const.door, 1);
        if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1008, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
          __debugbreak();
        PartRuntime = ScriptableSv_GetPartRuntime(_RDI->scriptableIndex, PartScriptedDefFromName);
        if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 1011, ASSERT_TYPE_ASSERT, "(runtime)", (const char *)&queryFormat, "runtime") )
          __debugbreak();
        if ( PartRuntime->stateId != 16 )
        {
          v29 = 0;
          __asm
          {
            vmovaps xmm1, xmm7; X
            vmovaps xmm0, xmm8; Y
          }
          *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@42652ee0; angle2
            vmovss  xmm0, dword ptr [rsi+30h]; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+18h]; angle2
            vmovaps xmm6, xmm0
            vmovss  xmm0, dword ptr [rsi+30h]; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcomiss xmm6, xmm1
          }
          if ( v36 )
          {
            __asm { vcomiss xmm0, cs:__real@c2b40000 }
            v29 = 1;
            if ( !(v36 | v37) )
            {
LABEL_18:
              v40 = _RDI->scriptableIndex % 0x301ui64;
              if ( v40 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v41 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v40];
              mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v41->m_listHead.m_sentinel.mp_next;
              if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v41->m_listHead.m_sentinel.mp_next == v41 )
                goto LABEL_27;
              while ( 1 )
              {
                if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == _RDI->scriptableIndex )
                  break;
                mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
                if ( mp_next == v41 )
                  goto LABEL_27;
              }
              v47 = _RDI->scriptableIndex % 0x301ui64;
              if ( v47 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v48 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v47];
              v49 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v48->m_listHead.m_sentinel.mp_next;
              if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v48->m_listHead.m_sentinel.mp_next == v48 )
              {
LABEL_41:
                v49 = NULL;
              }
              else
              {
                while ( 1 )
                {
                  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                    __debugbreak();
                  if ( LODWORD(v49[1].m_listHead.m_sentinel.mp_next) == _RDI->scriptableIndex )
                    break;
                  v49 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v49->m_listHead.m_sentinel.mp_next;
                  if ( v49 == v48 )
                    goto LABEL_41;
                }
              }
              if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v50 = (__int64)&v49[1].m_listHead.m_sentinel.mp_next + 4;
              if ( !v49 )
                v50 = 4i64;
              if ( *(_DWORD *)v50 != -1 )
              {
                if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                GEntity = G_GetGEntity(*(_DWORD *)v50);
                if ( GEntity && GEntity->health )
                {
                  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                    __debugbreak();
                  v52 = *(_DWORD *)v50;
                  if ( v52 != -1 )
                    goto LABEL_58;
                }
              }
              v52 = G_Door_NearestAssignedClientNum(_RDI->scriptableIndex);
              if ( v52 == -1 )
              {
LABEL_27:
                ScriptableSv_InitEventParams(&outParams, _RDI->scriptableIndex, PartScriptedDefFromName);
                v43 = 12;
                if ( !v29 )
                  v43 = 11;
                ScriptableBg_ChangePartState(&outParams, v43, 1);
              }
              else
              {
LABEL_58:
                client = G_GetGEntity(v52)->client;
                v54 = _RDI->scriptableIndex;
                doorState = client->ps.doorState;
                if ( client->ps.doorState[0].index == v54 || (doorState = &client->ps.doorState[1], client->ps.doorState[1].index == v54) )
                {
                  moveType = doorState->moveType;
                  if ( (unsigned int)(moveType - 7) > 1 && moveType != DOOR_MOVE_COMPLETE )
                  {
                    Instance = GWeaponMap::GetInstance();
                    BG_AddUnPredictableEventToPlayerstate(EV_DOOR_EXPLODE, doorState->index, level.time, Instance, &client->ps);
                    doorState->moveType = (v29 ^ 1) + 7;
                    doorState->moveTime = level.time;
                  }
                }
                else
                {
                  Com_PrintWarning(15, "WARNING: G_Door_ProcessDamageEvent - Scriptable Index not found for owner client %d ", v52);
                }
              }
            }
          }
          else
          {
            __asm { vcomiss xmm0, cs:__real@42b40000 }
            if ( v36 )
              goto LABEL_18;
          }
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+0D8h+var_38]
        vmovaps xmm7, [rsp+0D8h+var_48]
        vmovaps xmm8, [rsp+0D8h+var_58]
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

void __fastcall G_Door_SetScriptableAngle(unsigned int scriptableIndex, double targetAngle)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  vec3_t outDoorAngles; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm { vmovaps xmm1, xmm6; targetAngle }
  BG_Door_CalcDoorAngles(&InstanceCommonContext->anglesInitial, *(float *)&_XMM1, &outDoorAngles);
  ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, &InstanceCommonContext->originInitial, &outDoorAngles, 1);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
G_Door_SettleScriptableState
==============
*/
void G_Door_SettleScriptableState(unsigned int scriptableIndex)
{
  ScriptablePartDef *PartScriptedDefFromName; 
  ScriptablePartRuntime *PartRuntime; 
  char v13; 
  char v14; 
  unsigned __int16 stateId; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v19; 
  Scriptable_EventMove_Data *Data; 
  ScriptableEventParams outParams; 
  unsigned int outStateIdx; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_58], xmm8
  }
  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 770, ASSERT_TYPE_ASSERT, "(scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
    __debugbreak();
  PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(scriptableIndex, (const scr_string_t)scr_const.door, 1);
  if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 772, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  _R14 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  __asm
  {
    vmovss  xmm8, dword ptr [rax+18h]
    vmovss  xmm6, dword ptr [rax+30h]
  }
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartScriptedDefFromName);
  if ( PartRuntime->stateId )
    goto LABEL_23;
  __asm
  {
    vmovaps xmm1, xmm8; angle2
    vmovaps xmm0, xmm6; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3c23d70a
  }
  if ( !(v13 | v14) )
  {
LABEL_23:
    stateId = PartRuntime->stateId;
    if ( PartRuntime->stateId != 16 )
    {
      __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
      if ( (unsigned __int16)(stateId - 11) <= 1u && (v16 = 0, v17 = (__int64)&PartScriptedDefFromName->states[stateId], *(_DWORD *)(v17 + 12)) )
      {
        __asm { vmovss  xmm7, cs:__real@c47a0000 }
        while ( 1 )
        {
          v19 = *(_QWORD *)(v17 + 16) + 176i64 * v16;
          if ( *(_DWORD *)(v19 + 16) == 34 )
          {
            Data = ScriptableSv_StateEventMoveGetData(_R14, (const ScriptableEventMoveDef *const)(v19 + 24));
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rbx+38h]
              vcvttss2si ecx, xmm1
            }
            if ( level.time < Data->startTime - _ECX )
              break;
          }
          if ( ++v16 >= *(_DWORD *)(v17 + 12) )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        __asm
        {
          vmovaps xmm2, xmm8; initialDoorAngle
          vmovaps xmm1, xmm6; doorAngle
        }
        *(double *)&_XMM0 = BG_Door_NearestAngle(PartScriptedDefFromName, *(float *)&_XMM1, *(float *)&_XMM2, &outStateIdx);
        __asm { vaddss  xmm1, xmm0, xmm8; angle2 }
        if ( PartRuntime->stateId != outStateIdx )
          goto LABEL_18;
        __asm { vmovaps xmm0, xmm6; angle1 }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3c23d70a
        }
        if ( !(v13 | v14) )
        {
LABEL_18:
          __asm
          {
            vmovss  xmm1, dword ptr [r14+18h]; angle2
            vmovaps xmm0, xmm6; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vaddss  xmm1, xmm0, dword ptr [r14+18h]
            vmovss  dword ptr [r14+30h], xmm1
          }
          ScriptableSv_InitEventParams(&outParams, scriptableIndex, PartScriptedDefFromName);
          ScriptableBg_ExecutePartChange(&outParams, outStateIdx, 1);
        }
      }
      __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm8, [rsp+0B8h+var_58]
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
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v13; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v14; 
  const dvar_t *v17; 
  unsigned int index; 
  __int64 v19; 
  int entity; 
  bool v21; 
  bool HasValidVehicle; 
  DoorMoveType moveType; 
  __int64 v24; 
  int v25; 
  __int128 v26; 

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
      v19 = (__int64)&v10[1].m_listHead.m_sentinel.mp_next + 4;
      if ( !v10 )
        v19 = 4i64;
      doorState->angle = ScriptableSv_GetInstanceCommonContext(v5->index)->angles.v[1];
      doorState->index = index;
      doorState->owner = *(_DWORD *)v19 == client->ps.clientNum;
      entity = client->ps.vehicleState.entity;
      v21 = entity != 2047 && entity;
      HasValidVehicle = G_Door_HasValidVehicle(&client->ps);
      moveType = v5->moveType;
      if ( moveType == DOOR_MOVE_RELEASE || client->ps.pm_type >= 5 || v21 && !HasValidVehicle )
      {
        doorState->index = -1;
        doorState->owner = 0;
      }
      else if ( moveType == DOOR_MOVE_COMPLETE || moveType == DOOR_MOVE_INVALID )
      {
        v5->moveType = DOOR_MOVE_INVALID;
        if ( client->ps.clientNum == *(_DWORD *)v19 )
          *(_DWORD *)v19 = -1;
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
        v24 = (v5->moveType != DOOR_MOVE_INVALID) | 0x100000000i64;
        __asm { vmovsd  xmm0, [rsp+0B8h+var_70] }
        HIDWORD(v26) = v25;
        LODWORD(v26) = v5->index;
        __asm { vmovsd  qword ptr [rsp+0B8h+var_40+4], xmm0 }
        if ( v11 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v13 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v11 % 0x301];
        v14 = *v13;
        if ( *v13 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13 )
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
          _RCX = s_doorMap.m_freelist.m_head.mp_next;
          __asm { vmovups xmm0, [rsp+0B8h+var_40] }
          s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
          _RCX->mp_next = NULL;
          __asm { vmovups xmmword ptr [rcx+8], xmm0 }
          _RCX->mp_next = *v13;
          *v13 = _RCX;
          ++s_doorMap.m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v14[1].mp_next) == (_DWORD)v11 )
              break;
            v14 = v14->mp_next;
            if ( v14 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13 )
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
      v17 = DVARBOOL_bg_doorCrashBadState;
      if ( !DVARBOOL_bg_doorCrashBadState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorCrashBadState") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( v17->current.enabled )
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
  ntl::fixed_hash_map<unsigned int,DoorOwnerData,400,769,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 
  int maxclients; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  gentity_s *v9; 
  int *p_commandTime; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  bool v14; 
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  bool v18; 
  int v19; 
  gclient_s *client; 
  bool v21; 
  bool v22; 
  unsigned __int64 v23; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v24; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *mp_next; 
  unsigned __int64 v26; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v28; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v29; 
  __int64 v32; 
  bool v33; 
  int *v35; 
  __int64 v36; 
  unsigned __int64 v37; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v38; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v39; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int *v43; 
  int v45; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  __int64 v52; 
  __int64 v53; 
  gentity_s *v54; 
  __int64 v55; 
  int v56; 
  __int128 v57; 
  int v58[200]; 

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
  v49 = 0;
  v51 = 0;
  if ( level.maxclients > 0 )
  {
    v6 = 0i64;
    __asm
    {
      vmovaps [rsp+418h+var_38], xmm6
      vmovss  xmm6, cs:__real@42b40000
    }
    v52 = 0i64;
    do
    {
      v8 = 1456 * v6;
      v9 = &g_entities[v6];
      v53 = 1456 * v6;
      v54 = v9;
      if ( v9 )
      {
        p_commandTime = &v9->client->ps.commandTime;
        if ( p_commandTime )
        {
          v11 = 0;
          v50 = 0;
          v12 = 0i64;
          while ( 1 )
          {
            if ( p_commandTime[4 * v12 + 255] != -1 )
            {
              if ( v5 >= 0x800 )
              {
                LODWORD(v48) = 2048;
                LODWORD(v47) = v5;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v47, v48) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              if ( *(&g_entities->r.isInUse + v8) != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( g_entityIsInUse[v6] || p_commandTime[4 * v12 + 255] )
              {
                v13 = p_commandTime[72];
                v14 = v13 != 2047 && v13;
                v18 = v13 != 2047 && v13 && (GEntity = G_GetGEntity(v13)) != NULL && (vehicle = GEntity->vehicle) != NULL && (ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex)) != NULL && BG_Door_ValidVehicle(ServerDef);
                v19 = p_commandTime[4 * v12 + 258];
                client = v9->client;
                v21 = (unsigned int)(v19 - 4) <= 2;
                v22 = 0;
                if ( client->sess.connected )
                {
                  if ( client->sess.sessionState )
                  {
                    v22 = 1;
                  }
                  else if ( v19 == 14 )
                  {
                    v22 = 1;
                  }
                  else if ( p_commandTime[3] < 5 )
                  {
                    if ( v14 && !v18 )
                      v22 = (unsigned int)(v19 - 4) > 2;
                  }
                  else
                  {
                    v22 = 1;
                  }
                }
                else
                {
                  v22 = 1;
                }
                v23 = (unsigned int)p_commandTime[4 * v12 + 255] % 0x301ui64;
                if ( v23 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                v24 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v23];
                mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v24->m_listHead.m_sentinel.mp_next;
                if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v24->m_listHead.m_sentinel.mp_next == v24 )
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
                    if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == p_commandTime[4 * v12 + 255] )
                      break;
                    mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)mp_next->m_listHead.m_sentinel.mp_next;
                    if ( mp_next == v24 )
                      goto LABEL_59;
                  }
                }
                if ( mp_next )
                {
                  if ( v22 )
                    goto LABEL_130;
                  if ( p_commandTime[4 * v12 + 258] )
                    HIDWORD(mp_next[1].m_listHead.m_sentinel.mp_next) = p_commandTime[115];
                  v9 = v54;
                  v32 = (__int64)&mp_next[2].m_listHead.m_sentinel.mp_next + 4;
                  v8 = v53;
                  v33 = mp_next == NULL;
                  v6 = v52;
                  if ( v33 )
                    v32 = 12i64;
                  *(_BYTE *)v32 = 0;
                }
                else
                {
                  LODWORD(v55) = -1;
                  if ( v22 )
                  {
                    LOBYTE(v56) = 1;
                  }
                  else
                  {
                    if ( p_commandTime[4 * v12 + 258] )
                      LODWORD(v55) = p_commandTime[115];
                    LOBYTE(v56) = 0;
                  }
                  v26 = (unsigned int)p_commandTime[4 * v12 + 255];
                  __asm { vmovsd  xmm0, [rsp+418h+var_3B0] }
                  HIDWORD(v57) = v56;
                  v58[v51++] = v26;
                  LODWORD(v57) = v26;
                  __asm { vmovsd  qword ptr [rsp+418h+var_380+4], xmm0 }
                  if ( v26 % 0x301 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                    __debugbreak();
                  v28 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v26 % 0x301];
                  v29 = *v28;
                  if ( *v28 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v28 )
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
                    _RCX = s_doorMap.m_freelist.m_head.mp_next;
                    __asm { vmovups xmm0, [rsp+418h+var_380] }
                    s_doorMap.m_freelist.m_head.mp_next = s_doorMap.m_freelist.m_head.mp_next->mp_next;
                    _RCX->mp_next = NULL;
                    __asm { vmovups xmmword ptr [rcx+8], xmm0 }
                    _RCX->mp_next = *v28;
                    *v28 = _RCX;
                    ++s_doorMap.m_currentNumItems;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                        __debugbreak();
                      if ( LODWORD(v29[1].mp_next) == (_DWORD)v26 )
                        break;
                      v29 = v29->mp_next;
                      if ( v29 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v28 )
                        goto LABEL_75;
                    }
                  }
                  v11 = v50;
                  if ( v22 )
                  {
LABEL_130:
                    if ( v21 )
                    {
                      _RAX = ScriptableSv_GetInstanceCommonContext(p_commandTime[4 * v12 + 255]);
                      v45 = p_commandTime[4 * v12 + 258];
                      __asm { vmovss  xmm1, dword ptr [rax+18h] }
                      if ( v45 == 5 )
                      {
                        __asm { vaddss  xmm1, xmm1, xmm6 }
                      }
                      else if ( v45 == 4 )
                      {
                        __asm { vsubss  xmm1, xmm1, xmm6; targetAngle }
                      }
                      G_Door_SetScriptableAngle(p_commandTime[4 * v12 + 255], *(float *)&_XMM1);
                    }
                    v9 = v54;
                    v6 = v52;
                    v5 = v49;
                    v8 = v53;
                    if ( v54->client->sess.sessionState != SESS_STATE_SPECTATOR )
                    {
                      p_commandTime[4 * v12 + 255] = -1;
                      p_commandTime[4 * v12 + 258] = 0;
                    }
                    goto LABEL_95;
                  }
                  v6 = v52;
                  v9 = v54;
                  v8 = v53;
                }
              }
              v5 = v49;
            }
LABEL_95:
            ++v11;
            ++v12;
            v50 = v11;
            if ( v11 >= 2 )
            {
              maxclients = level.maxclients;
              break;
            }
          }
        }
      }
      ++v5;
      ++v6;
      v49 = v5;
      v52 = v6;
    }
    while ( (int)v5 < maxclients );
    __asm { vmovaps xmm6, [rsp+418h+var_38] }
    if ( v51 )
    {
      v35 = v58;
      v36 = v51;
      while ( 1 )
      {
        v37 = (unsigned int)*v35 % 0x301ui64;
        if ( v37 >= 0x301 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v38 = &s_doorMap.m_buckets.ntl::internal::hash_table<unsigned int,DoorOwnerData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,DoorOwnerData>,400,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> >,769>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v37];
        v39 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v38->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v38->m_listHead.m_sentinel.mp_next == v38 )
          break;
        while ( 1 )
        {
          if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v39[1].m_listHead.m_sentinel.mp_next) == *v35 )
            break;
          v39 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,DoorOwnerData> > *)v39->m_listHead.m_sentinel.mp_next;
          if ( v39 == v38 )
            goto LABEL_109;
        }
        if ( !v39 )
          goto LABEL_110;
        v40 = v39;
LABEL_111:
        if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v41 = (__int64)&v40[2].m_listHead.m_sentinel.mp_next + 4;
        if ( !v40 )
          v41 = 12i64;
        if ( *(_BYTE *)v41 )
        {
          if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v42 = (__int64)&v40[1].m_listHead.m_sentinel.mp_next + 4;
          if ( !v40 )
            v42 = 4i64;
          *(_DWORD *)v42 = -1;
          if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v43 = (unsigned int *)&v40[1];
          if ( !v40 )
            v43 = NULL;
          G_Door_SettleScriptableState(*v43);
        }
        ++v35;
        if ( !--v36 )
          return;
      }
LABEL_109:
      v39 = NULL;
LABEL_110:
      v40 = NULL;
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
  __int64 v8; 
  __int64 index; 
  const ScriptablePartDef *PartScriptedDefFromName; 
  __int64 v19; 
  __int64 v20; 
  ScriptableEventParams outParams; 
  char v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 943, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3c23d70a
  }
  _RBX = client->ps.doorState;
  v8 = 2i64;
  do
  {
    index = _RBX->index;
    if ( (_DWORD)index == -1 || _RBX->moveType == DOOR_MOVE_INVALID )
    {
      if ( (unsigned int)(index - 1) <= 0xFFFFFFFD )
        _RBX->angle = ScriptableSv_GetInstanceCommonContext(index)->angles.v[1];
    }
    else
    {
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)index >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v20) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v19) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      _RDI = &g_scriptableSv_instanceContexts[index];
      PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(_RBX->index, (const scr_string_t)scr_const.door, 1);
      if ( !PartScriptedDefFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_door.cpp", 953, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
        __debugbreak();
      ScriptableSv_InitEventParams(&outParams, _RBX->index, PartScriptedDefFromName);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+4]; angle2
        vmovss  xmm0, dword ptr [rdi+18h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      ScriptableBg_ChangePartState(&outParams, 0xDu, 1);
      __asm { vmovss  xmm1, dword ptr [rbx+4]; targetAngle }
      G_Door_SetScriptableAngle(_RBX->index, *(float *)&_XMM1);
    }
    ++_RBX;
    --v8;
  }
  while ( v8 );
  _R11 = &v23;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

