/*
==============
G_MotionWarp_TrackerIsFull
==============
*/

bool __fastcall G_MotionWarp_TrackerIsFull()
{
  return ?G_MotionWarp_TrackerIsFull@@YA_NXZ();
}

/*
==============
G_MotionWarp_Load
==============
*/

void __fastcall G_MotionWarp_Load(SaveGame *save)
{
  ?G_MotionWarp_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_MotionWarp_GetNumTrackedEntities
==============
*/

int __fastcall G_MotionWarp_GetNumTrackedEntities()
{
  return ?G_MotionWarp_GetNumTrackedEntities@@YAHXZ();
}

/*
==============
G_MotionWarp_Start
==============
*/

void __fastcall G_MotionWarp_Start(int entnum, const vec3_t *targetPos, const vec3_t *targetAngles, int duration)
{
  ?G_MotionWarp_Start@@YAXHAEBTvec3_t@@0H@Z(entnum, targetPos, targetAngles, duration);
}

/*
==============
G_MotionWarp_Reset
==============
*/

void G_MotionWarp_Reset(void)
{
  ?G_MotionWarp_Reset@@YAXXZ();
}

/*
==============
G_MotionWarp_Save
==============
*/

void __fastcall G_MotionWarp_Save(MemoryFile *memFile)
{
  ?G_MotionWarp_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_MotionWarp_Cancel
==============
*/

void __fastcall G_MotionWarp_Cancel(int entnum)
{
  ?G_MotionWarp_Cancel@@YAXH@Z(entnum);
}

/*
==============
G_MotionWarp_Active
==============
*/

bool __fastcall G_MotionWarp_Active(int entnum)
{
  return ?G_MotionWarp_Active@@YA_NH@Z(entnum);
}

/*
==============
G_MotionWarp_StartWithAnim
==============
*/

void __fastcall G_MotionWarp_StartWithAnim(int entnum, const vec3_t *animStartPos, const vec3_t *animStartAngles, const vec3_t *targetPos, const vec3_t *targetAngles, int duration)
{
  ?G_MotionWarp_StartWithAnim@@YAXHAEBTvec3_t@@000H@Z(entnum, animStartPos, animStartAngles, targetPos, targetAngles, duration);
}

/*
==============
G_MotionWarp_UpdateHook
==============
*/

motionwarp_status_t __fastcall G_MotionWarp_UpdateHook(int entnum, vec3_t *translationDelta, vec4_t *rotationDeltaQuat)
{
  return ?G_MotionWarp_UpdateHook@@YA?AW4motionwarp_status_t@@HAEATvec3_t@@AEATvec4_t@@@Z(entnum, translationDelta, rotationDeltaQuat);
}

/*
==============
G_MotionWarp_MovingPlatformUpdate
==============
*/

void __fastcall G_MotionWarp_MovingPlatformUpdate(const tmat33_t<vec3_t> *rotMtx, int angleChange, const vec3_t *prevOrigin, const vec3_t *origin, int entnum)
{
  ?G_MotionWarp_MovingPlatformUpdate@@YAXAEBT?$tmat33_t@Tvec3_t@@@@HAEBTvec3_t@@1H@Z(rotMtx, angleChange, prevOrigin, origin, entnum);
}

/*
==============
G_MotionWarp_Active
==============
*/
bool G_MotionWarp_Active(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v3; 
  ntl::red_black_tree_node_base *v4; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( !s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
LABEL_10:
    v3 = p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase;
    return !v3;
  }
  do
  {
    if ( mp_parent[1].m_color < entnum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  v3 = p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase )
  {
    v4 = &s_MotionWarpTrackerMap.m_endNodeBase;
    if ( entnum >= p_m_endNodeBase[1].m_color )
      v4 = p_m_endNodeBase;
    p_m_endNodeBase = v4;
    goto LABEL_10;
  }
  return !v3;
}

/*
==============
G_MotionWarp_Cancel
==============
*/
void G_MotionWarp_Cancel(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
      MotionWarp_Cancel((motionwarp_tracker_field_t *)p_m_endNodeBase[1].mp_parent);
  }
}

/*
==============
G_MotionWarp_GetNumTrackedEntities
==============
*/
__int64 G_MotionWarp_GetNumTrackedEntities()
{
  return LODWORD(s_MotionWarpTrackerMap.m_size);
}

/*
==============
G_MotionWarp_Load
==============
*/
void G_MotionWarp_Load(SaveGame *save)
{
  int v3; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  motionwarp_tracker_field_t *i; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v7; 
  int entnum; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v11; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element; 
  __m256i v17; 
  int buffer; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result; 

  SaveMemory_LoadRead(&buffer, 4, save);
  if ( buffer < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 117, ASSERT_TYPE_ASSERT, "(trackedEntsCount >= 0)", (const char *)&queryFormat, "trackedEntsCount >= 0") )
    __debugbreak();
  if ( buffer > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 118, ASSERT_TYPE_ASSERT, "(trackedEntsCount <= s_MAX_TRACKED_ENTS)", (const char *)&queryFormat, "trackedEntsCount <= s_MAX_TRACKED_ENTS") )
    __debugbreak();
  v3 = 0;
  if ( buffer > 0 )
  {
    p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
    for ( i = s_MotionWarpTrackerArray; ; ++i )
    {
      SaveMemory_LoadRead(&s_MotionWarpTrackerArray[v3], 140, save);
      mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
      v7 = 1;
      entnum = i->entnum;
      r_element.first = i->entnum;
      r_element.second = &s_MotionWarpTrackerArray[v3];
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v7 = entnum < mp_parent[1].m_color;
        if ( entnum >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( !v7 )
        goto LABEL_29;
      if ( p_m_endNodeBase != s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_54:
      ++v3;
      p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
      if ( v3 >= buffer )
        return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( j = mp_left->mp_right; j; j = j->mp_right )
          mp_left = j;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v11 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v11 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_29:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < entnum )
    {
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<48> *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next == &s_MotionWarpTrackerMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
        __debugbreak();
      _RCX = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      __asm
      {
        vmovups xmm1, xmmword ptr [rsp+0B8h+r_element.first]
        vpxor   xmm0, xmm0, xmm0
      }
      v17.m256i_i32[0] = 0;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      v17.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm
      {
        vmovdqu xmmword ptr [rsp+0B8h+var_68+10h], xmm0
        vmovups ymm0, ymmword ptr [rsp+0B8h+var_68]
        vmovups ymmword ptr [rcx], ymm0
        vmovups xmmword ptr [rcx+20h], xmm1
      }
      if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
      }
      else if ( entnum >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)_RCX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
      ++s_MotionWarpTrackerMap.m_size;
    }
    goto LABEL_54;
  }
}

/*
==============
G_MotionWarp_MovingPlatformUpdate
==============
*/
void G_MotionWarp_MovingPlatformUpdate(const tmat33_t<vec3_t> *rotMtx, int angleChange, const vec3_t *prevOrigin, const vec3_t *origin, int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  motionwarp_tracker_field_t *EntTrackerPointer; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
    {
      EntTrackerPointer = MotionWarp_GetEntTrackerPointer(entnum);
      UpdateMovingPlatformPoint(rotMtx, angleChange, prevOrigin, origin, &EntTrackerPointer->naivePos);
      UpdateMovingPlatformPoint(rotMtx, angleChange, prevOrigin, origin, &EntTrackerPointer->animPos);
      UpdateMovingPlatformPoint(rotMtx, angleChange, prevOrigin, origin, &EntTrackerPointer->targetPos);
      UpdateMovingPlatformPoint(rotMtx, angleChange, prevOrigin, origin, &EntTrackerPointer->lastPos);
      UpdateMovingPlatformPoint(rotMtx, angleChange, prevOrigin, origin, &EntTrackerPointer->expectedPos);
      UpdateMovingPlatformQuat(rotMtx, angleChange, &EntTrackerPointer->naiveQuat);
      UpdateMovingPlatformQuat(rotMtx, angleChange, &EntTrackerPointer->animQuat);
      UpdateMovingPlatformQuat(rotMtx, angleChange, &EntTrackerPointer->targetQuat);
    }
  }
}

/*
==============
G_MotionWarp_Reset
==============
*/
void G_MotionWarp_Reset(void)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 

  if ( s_MotionWarpTrackerMap.m_size )
  {
    mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
    if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::erase_tree(&s_MotionWarpTrackerMap, (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
        s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    s_MotionWarpTrackerMap.m_endNodeBase.mp_left = &s_MotionWarpTrackerMap.m_endNodeBase;
    s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = NULL;
    s_MotionWarpTrackerMap.m_endNodeBase.mp_right = &s_MotionWarpTrackerMap.m_endNodeBase;
    s_MotionWarpTrackerMap.m_size = 0i64;
  }
  s_MotionWarpTrackerArray[0].entnum = 2047;
  s_MotionWarpTrackerArray[1].entnum = 2047;
  s_MotionWarpTrackerArray[2].entnum = 2047;
  s_MotionWarpTrackerArray[3].entnum = 2047;
  s_MotionWarpTrackerArray[4].entnum = 2047;
  s_MotionWarpTrackerArray[5].entnum = 2047;
  s_MotionWarpTrackerArray[6].entnum = 2047;
  s_MotionWarpTrackerArray[7].entnum = 2047;
  s_MotionWarpTrackerArray[8].entnum = 2047;
  s_MotionWarpTrackerArray[9].entnum = 2047;
  s_MotionWarpTrackerArray[10].entnum = 2047;
  s_MotionWarpTrackerArray[11].entnum = 2047;
  s_MotionWarpTrackerArray[12].entnum = 2047;
  s_MotionWarpTrackerArray[13].entnum = 2047;
  s_MotionWarpTrackerArray[14].entnum = 2047;
  s_MotionWarpTrackerArray[15].entnum = 2047;
  s_MotionWarpTrackerArray[16].entnum = 2047;
  s_MotionWarpTrackerArray[17].entnum = 2047;
  s_MotionWarpTrackerArray[18].entnum = 2047;
  s_MotionWarpTrackerArray[19].entnum = 2047;
  s_MotionWarpTrackerArray[20].entnum = 2047;
  s_MotionWarpTrackerArray[21].entnum = 2047;
  s_MotionWarpTrackerArray[22].entnum = 2047;
  s_MotionWarpTrackerArray[23].entnum = 2047;
  s_MotionWarpTrackerArray[24].entnum = 2047;
  s_MotionWarpTrackerArray[25].entnum = 2047;
  s_MotionWarpTrackerArray[26].entnum = 2047;
  s_MotionWarpTrackerArray[27].entnum = 2047;
  s_MotionWarpTrackerArray[28].entnum = 2047;
  s_MotionWarpTrackerArray[29].entnum = 2047;
  s_MotionWarpTrackerArray[30].entnum = 2047;
  s_MotionWarpTrackerArray[31].entnum = 2047;
  s_MotionWarpTrackerArray[32].entnum = 2047;
  s_MotionWarpTrackerArray[33].entnum = 2047;
  s_MotionWarpTrackerArray[34].entnum = 2047;
  s_MotionWarpTrackerArray[35].entnum = 2047;
  s_MotionWarpTrackerArray[36].entnum = 2047;
  s_MotionWarpTrackerArray[37].entnum = 2047;
  s_MotionWarpTrackerArray[38].entnum = 2047;
  s_MotionWarpTrackerArray[39].entnum = 2047;
  s_MotionWarpTrackerArray[40].entnum = 2047;
  s_MotionWarpTrackerArray[41].entnum = 2047;
  s_MotionWarpTrackerArray[42].entnum = 2047;
  s_MotionWarpTrackerArray[43].entnum = 2047;
  s_MotionWarpTrackerArray[44].entnum = 2047;
  s_MotionWarpTrackerArray[45].entnum = 2047;
  s_MotionWarpTrackerArray[46].entnum = 2047;
  s_MotionWarpTrackerArray[47].entnum = 2047;
  s_MotionWarpTrackerArray[48].entnum = 2047;
  s_MotionWarpTrackerArray[49].entnum = 2047;
  s_MotionWarpTrackerArray[50].entnum = 2047;
  s_MotionWarpTrackerArray[51].entnum = 2047;
  s_MotionWarpTrackerArray[52].entnum = 2047;
  s_MotionWarpTrackerArray[53].entnum = 2047;
  s_MotionWarpTrackerArray[54].entnum = 2047;
  s_MotionWarpTrackerArray[55].entnum = 2047;
  s_MotionWarpTrackerArray[56].entnum = 2047;
  s_MotionWarpTrackerArray[57].entnum = 2047;
  s_MotionWarpTrackerArray[58].entnum = 2047;
  s_MotionWarpTrackerArray[59].entnum = 2047;
  s_MotionWarpTrackerArray[60].entnum = 2047;
  s_MotionWarpTrackerArray[61].entnum = 2047;
  s_MotionWarpTrackerArray[62].entnum = 2047;
  s_MotionWarpTrackerArray[63].entnum = 2047;
}

/*
==============
G_MotionWarp_Save
==============
*/
void G_MotionWarp_Save(MemoryFile *memFile)
{
  ntl::red_black_tree_node_base *mp_left; 
  int i; 
  int m_size; 

  m_size = s_MotionWarpTrackerMap.m_size;
  MemFile_WriteData(memFile, 4ui64, &m_size);
  mp_left = s_MotionWarpTrackerMap.m_endNodeBase.mp_left;
  for ( i = 0; mp_left != &s_MotionWarpTrackerMap.m_endNodeBase; mp_left = ntl::red_black_tree_node_base::get_next(mp_left) )
  {
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    MemFile_WriteData(memFile, 0x8Cui64, mp_left[1].mp_parent);
    ++i;
  }
  if ( i != m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 109, ASSERT_TYPE_ASSERT, "( savedEntsCount ) == ( trackedEntsCount )", "%s == %s\n\t%i, %i", "savedEntsCount", "trackedEntsCount", i, m_size) )
    __debugbreak();
}

/*
==============
G_MotionWarp_Start
==============
*/
void G_MotionWarp_Start(int entnum, const vec3_t *targetPos, const vec3_t *targetAngles, int duration)
{
  MotionWarp_Start(entnum, targetPos, targetAngles, targetPos, targetAngles, duration, 0);
}

/*
==============
G_MotionWarp_StartWithAnim
==============
*/
void G_MotionWarp_StartWithAnim(int entnum, const vec3_t *animStartPos, const vec3_t *animStartAngles, const vec3_t *targetPos, const vec3_t *targetAngles, int duration)
{
  MotionWarp_Start(entnum, animStartPos, animStartAngles, targetPos, targetAngles, duration, 1);
}

/*
==============
G_MotionWarp_TrackerIsFull
==============
*/
bool G_MotionWarp_TrackerIsFull()
{
  return SLODWORD(s_MotionWarpTrackerMap.m_size) >= 64;
}

/*
==============
G_MotionWarp_UpdateHook
==============
*/
motionwarp_status_t G_MotionWarp_UpdateHook(int entnum, vec3_t *translationDelta, vec4_t *rotationDeltaQuat)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( !s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < entnum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase || entnum < p_m_endNodeBase[1].m_color )
    return 0;
  else
    return MotionWarp_Update((motionwarp_tracker_field_t *)p_m_endNodeBase[1].mp_parent, translationDelta, rotationDeltaQuat);
}

/*
==============
MotionWarp_Cancel
==============
*/
void MotionWarp_Cancel(motionwarp_tracker_field_t *pEntTracker)
{
  const dvar_t *v1; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  int entnum; 

  v1 = DVARBOOL_ai_debugMotionWarp;
  if ( !DVARBOOL_ai_debugMotionWarp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMotionWarp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    G_DebugLineWithArrow(&pEntTracker->lastPos, &g_entities[pEntTracker->entnum].r.currentOrigin, &colorOrange, 100);
    MotionWarp_DebugFinalState(pEntTracker->entnum);
  }
  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    entnum = pEntTracker->entnum;
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
    {
      if ( !s_MotionWarpTrackerMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      ntl::red_black_tree_node_base::get_next(p_m_endNodeBase);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(p_m_endNodeBase, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent, &s_MotionWarpTrackerMap.m_endNodeBase.mp_left, &s_MotionWarpTrackerMap.m_endNodeBase.mp_right);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&p_m_endNodeBase->m_color = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      --s_MotionWarpTrackerMap.m_size;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase;
    }
  }
  pEntTracker->entnum = 2047;
}

/*
==============
MotionWarp_DebugFinalState
==============
*/
void MotionWarp_DebugFinalState(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  __int64 v13; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *p_m_endNodeBase; 
  bool v17; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v19; 
  ntl::red_black_tree_node_base *mp_right; 
  double hintElementLessInsert; 
  double hintElementLessInserta; 
  double hintElementLessInsertb; 
  double hintElementLessInsertc; 
  double hintElementLessInsertd; 
  double hintElementLessInserte; 
  double hintElementLessInsertf; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element_8; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result[7]; 
  vec3_t angles; 
  vec3_t v119; 
  vec3_t v120; 
  vec4_t quat; 
  vec4_t outRotationDeltaQuat; 
  vec4_t v123; 
  vec4_t v124; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  v13 = entnum;
  _RDI = &s_MotionWarpTrackerMap.m_endNodeBase;
  v15 = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  if ( !s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    goto LABEL_8;
  do
  {
    if ( v15[1].m_color < entnum )
    {
      v15 = v15->mp_right;
    }
    else
    {
      _RDI = v15;
      v15 = v15->mp_left;
    }
  }
  while ( v15 );
  if ( _RDI == &s_MotionWarpTrackerMap.m_endNodeBase || entnum < _RDI[1].m_color )
  {
LABEL_8:
    p_m_endNodeBase = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)&s_MotionWarpTrackerMap.m_endNodeBase;
    v17 = 1;
    r_element_8.first = v13;
    r_element_8.second = NULL;
    if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    {
      do
      {
        p_m_endNodeBase = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)mp_parent;
        v17 = (int)v13 < mp_parent[1].m_color;
        if ( (int)v13 >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      while ( mp_parent );
    }
    _RDI = p_m_endNodeBase;
    if ( v17 )
    {
      if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
      {
        _RDI = ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, result, p_m_endNodeBase, &r_element_8, 1, 0)->mp_node;
LABEL_55:
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        goto LABEL_58;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->ntl::red_black_tree_node_base::mp_parent != p_m_endNodeBase )
      {
        _RDI = p_m_endNodeBase->mp_left;
        if ( _RDI )
        {
          for ( i = _RDI->mp_right; i; i = i->mp_right )
            _RDI = i;
        }
        else
        {
          _RDI = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == _RDI->mp_left )
          {
            do
            {
              v19 = _RDI;
              _RDI = _RDI->mp_parent;
            }
            while ( v19 == _RDI->mp_left );
          }
        }
      }
      else
      {
        _RDI = p_m_endNodeBase->mp_right;
      }
    }
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( _RDI[1].m_color >= (int)v13 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
    }
    else
    {
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<48> *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next == &s_MotionWarpTrackerMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
        __debugbreak();
      _RDI = (ntl::red_black_tree_node_base *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      LODWORD(result[1].mp_node) = 0;
      result[2].mp_node = p_m_endNodeBase;
      __asm { vmovups xmm1, xmmword ptr [rsp+1B0h+r_element.second] }
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+1B0h+result+18h], xmm0
        vmovups ymm0, ymmword ptr [rsp+1B0h+result+8]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmmword ptr [rdi+20h], xmm1
      }
      if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = _RDI;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = _RDI;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = _RDI;
      }
      else if ( (int)v13 >= p_m_endNodeBase->m_element.first )
      {
        p_m_endNodeBase->mp_right = _RDI;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = _RDI;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = _RDI;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = _RDI;
      }
      ntl::red_black_tree_node_base::rebalance(_RDI, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
      ++s_MotionWarpTrackerMap.m_size;
    }
    goto LABEL_55;
  }
LABEL_58:
  _RDI = _RDI[1].mp_parent;
  _RAX = g_entities;
  _RBX = 1456 * v13;
  __asm
  {
    vmovss  xmm12, dword ptr [rdi+50h]
    vmovss  xmm13, dword ptr [rdi+4Ch]
    vmovss  xmm14, dword ptr [rdi+48h]
    vmovss  xmm8, dword ptr [rdi+2Ch]
    vmovss  xmm0, dword ptr [rbx+rax+138h]
    vmovss  xmm2, dword ptr [rbx+rax+134h]
    vmovss  xmm7, dword ptr [rdi+30h]
    vmovss  xmm6, dword ptr [rdi+34h]
    vmovss  xmm11, dword ptr [rdi+10h]
    vmovss  xmm10, dword ptr [rdi+14h]
    vmovss  xmm9, dword ptr [rdi+18h]
    vsubss  xmm1, xmm0, xmm12
    vsubss  xmm0, xmm2, xmm13
    vcvtss2sd xmm4, xmm1, xmm1
    vmovss  xmm1, dword ptr [rbx+rax+130h]
    vsubss  xmm2, xmm1, xmm14
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r8, xmm2
    vmovq   r9, xmm3
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm4
  }
  Com_Printf(18, "warpTranslationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInsert);
  __asm
  {
    vsubss  xmm0, xmm6, xmm12
    vcvtss2sd xmm4, xmm0, xmm0
    vsubss  xmm0, xmm8, xmm14
    vsubss  xmm1, xmm7, xmm13
    vcvtss2sd xmm2, xmm0, xmm0
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r8, xmm2
    vmovq   r9, xmm3
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm4
  }
  Com_Printf(18, "animTranslationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInserta);
  __asm
  {
    vsubss  xmm0, xmm9, xmm12
    vcvtss2sd xmm4, xmm0, xmm0
    vsubss  xmm0, xmm11, xmm14
    vsubss  xmm1, xmm10, xmm13
    vcvtss2sd xmm2, xmm0, xmm0
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r8, xmm2
    vmovq   r9, xmm3
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm4
  }
  Com_Printf(18, "naiveTranslationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInsertb);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+84h]
    vmovss  xmm2, dword ptr [rdi+80h]
    vmovss  xmm0, dword ptr [rdi+88h]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm0
  }
  Com_Printf(18, "accumulatedTransError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInsertc);
  AnglesToQuat(&g_entities[v13].r.currentAngles, &quat);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm3, xmm6; f
  }
  ComputeFrameRotationDeltaQuat(&quat, (const vec4_t *)((char *)&_RDI[2].mp_left + 4), &quat, *(float *)&_XMM3, &outRotationDeltaQuat);
  QuatToAngles(&outRotationDeltaQuat, &angles);
  __asm { vmovaps xmm3, xmm6; f }
  ComputeFrameRotationDeltaQuat((const vec4_t *)&_RDI[1].mp_right, (const vec4_t *)((char *)&_RDI[2].mp_left + 4), (const vec4_t *)&_RDI[1].mp_right, *(float *)&_XMM3, &v123);
  QuatToAngles(&v123, &v119);
  __asm { vmovaps xmm3, xmm6; f }
  ComputeFrameRotationDeltaQuat((const vec4_t *)((char *)&_RDI->mp_right + 4), (const vec4_t *)((char *)&_RDI[2].mp_left + 4), (const vec4_t *)((char *)&_RDI->mp_right + 4), *(float *)&_XMM3, &v124);
  QuatToAngles(&v124, &v120);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+0B0h+angles+4]
    vmovss  xmm2, dword ptr [rbp+0B0h+angles]
    vmovss  xmm0, dword ptr [rbp+0B0h+angles+8]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm0
  }
  Com_Printf(18, "warpRotationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInsertd);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+0B0h+var_118+4]
    vmovss  xmm2, dword ptr [rbp+0B0h+var_118]
    vmovss  xmm0, dword ptr [rbp+0B0h+var_118+8]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm0
  }
  Com_Printf(18, "animRotationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInserte);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+0B0h+var_108+4]
    vmovss  xmm2, dword ptr [rbp+0B0h+var_108]
    vmovss  xmm0, dword ptr [rbp+0B0h+var_108+8]
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  qword ptr [rsp+1B0h+hintElementLessInsert], xmm0
  }
  Com_Printf(18, "naiveRotationError: %f, %f, %f\n", *(double *)&_XMM2, *(double *)&_XMM3, hintElementLessInsertf);
  _R11 = &v125;
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
  }
}

/*
==============
MotionWarp_GetEntTrackerPointer
==============
*/
ntl::red_black_tree_node_base *MotionWarp_GetEntTrackerPointer(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v5; 
  bool v7; 
  ntl::red_black_tree_node_base *v8; 
  _QWORD *i; 
  _QWORD *v11; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element; 
  __m256i v17; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  v5 = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( v5[1].m_color < entnum )
      {
        v5 = v5->mp_right;
      }
      else
      {
        p_m_endNodeBase = v5;
        v5 = v5->mp_left;
      }
    }
    while ( v5 );
    if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
      return p_m_endNodeBase[1].mp_parent;
  }
  v7 = 1;
  v8 = &s_MotionWarpTrackerMap.m_endNodeBase;
  r_element.first = entnum;
  r_element.second = NULL;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      v8 = mp_parent;
      v7 = entnum < mp_parent[1].m_color;
      if ( entnum >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    while ( mp_parent );
  }
  _RBX = v8;
  if ( !v7 )
    goto LABEL_29;
  if ( v8 != s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v8->m_color || v8->mp_parent->mp_parent != v8 )
    {
      _RBX = v8->mp_left;
      if ( _RBX )
      {
        for ( i = (_QWORD *)_RBX[3]; i; i = (_QWORD *)i[3] )
          _RBX = i;
      }
      else
      {
        _RBX = v8->mp_parent;
        if ( v8 == (ntl::red_black_tree_node_base *)_RBX[2] )
        {
          do
          {
            v11 = _RBX;
            _RBX = (_QWORD *)_RBX[1];
          }
          while ( v11 == (_QWORD *)_RBX[2] );
        }
      }
    }
    else
    {
      _RBX = v8->mp_right;
    }
LABEL_29:
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( *((_DWORD *)_RBX + 8) >= entnum )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
    }
    else
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<48> *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next == &s_MotionWarpTrackerMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
        __debugbreak();
      _RBX = &s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      v17.m256i_i32[0] = 0;
      v17.m256i_i64[1] = (__int64)v8;
      __asm { vmovups xmm1, xmmword ptr [rsp+98h+r_element.first] }
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+98h+var_48+10h], xmm0
        vmovups ymm0, ymmword ptr [rsp+98h+var_48]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmmword ptr [rbx+20h], xmm1
      }
      if ( v8 == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RBX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RBX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RBX;
      }
      else if ( entnum >= v8[1].m_color )
      {
        v8->mp_right = (ntl::red_black_tree_node_base *)_RBX;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( v8 == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)_RBX;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        v8->mp_left = (ntl::red_black_tree_node_base *)_RBX;
        if ( v8 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RBX;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RBX, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
      ++s_MotionWarpTrackerMap.m_size;
    }
    goto LABEL_56;
  }
  _RBX = ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, &result, v8, &r_element, 1, 0)->mp_node;
LABEL_56:
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  return (ntl::red_black_tree_node_base *)_RBX[5];
}

/*
==============
MotionWarp_Start
==============
*/
void MotionWarp_Start(int entnum, const vec3_t *animStartPos, const vec3_t *animStartAngles, const vec3_t *targetPos, const vec3_t *targetAngles, int duration, bool useAnim)
{
  __int64 v10; 
  int frameDuration; 
  unsigned __int8 v12; 
  int v26; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v47; 
  int v49; 
  motionwarp_tracker_field_t *v50; 
  ntl::red_black_tree_node_base *v53; 
  int v54; 
  bool v56; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v62; 
  ntl::red_black_tree_node_base *mp_right; 
  __int64 hintInsertLessElement; 
  __int64 hintInsertLessElementa; 
  __int64 v70; 
  __int64 v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result; 
  vec3_t *angles[2]; 
  __m256i v86; 
  vec4_t quat[2]; 
  __m256i v88; 
  __m256i v89; 
  __m256i v90; 
  int v92; 

  _R15 = targetPos;
  _R13 = animStartAngles;
  angles[0] = (vec3_t *)targetAngles;
  _R12 = animStartPos;
  v10 = entnum;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = level.frameDuration;
  if ( SLODWORD(s_MotionWarpTrackerMap.m_size) >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 151, ASSERT_TYPE_ASSERT, "(!G_MotionWarp_TrackerIsFull())", "%s\n\tMax tracked entities exceeded.", "!G_MotionWarp_TrackerIsFull()") )
    __debugbreak();
  if ( duration < frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 152, ASSERT_TYPE_ASSERT, "(duration >= frameDuration)", "%s\n\tMotion warp duration (%i ms) must be at least one frame (%i ms).", "duration >= frameDuration", duration, frameDuration) )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x800 )
  {
    LODWORD(v70) = 2048;
    LODWORD(hintInsertLessElement) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElement, v70) )
      __debugbreak();
    LODWORD(v71) = 2048;
    LODWORD(hintInsertLessElementa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElementa, v71) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = g_entityIsInUse[v10];
  result.mp_node = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)(1456 * v10);
  if ( g_entities[v10].r.isInUse != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 154, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entnum ))", (const char *)&queryFormat, "G_IsEntityInUse( entnum )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
    goto LABEL_121;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v73 & 0x7F800000) == 2139095040 )
    goto LABEL_121;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
  {
LABEL_121:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 155, ASSERT_TYPE_ASSERT, "(!IS_NAN( animStartPos[ 0 ] ) && !IS_NAN( animStartPos[ 1 ] ) && !IS_NAN( animStartPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( animStartPos[ 0 ] ) && !IS_NAN( animStartPos[ 1 ] ) && !IS_NAN( animStartPos[ 2 ] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
    goto LABEL_122;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v76 & 0x7F800000) == 2139095040 )
    goto LABEL_122;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
  {
LABEL_122:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 156, ASSERT_TYPE_ASSERT, "(!IS_NAN( animStartAngles[ 0 ] ) && !IS_NAN( animStartAngles[ 1 ] ) && !IS_NAN( animStartAngles[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( animStartAngles[ 0 ] ) && !IS_NAN( animStartAngles[ 1 ] ) && !IS_NAN( animStartAngles[ 2 ] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
    goto LABEL_123;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_123;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 )
  {
LABEL_123:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 157, ASSERT_TYPE_ASSERT, "(!IS_NAN( targetPos[ 0 ] ) && !IS_NAN( targetPos[ 1 ] ) && !IS_NAN( targetPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( targetPos[ 0 ] ) && !IS_NAN( targetPos[ 1 ] ) && !IS_NAN( targetPos[ 2 ] )") )
      __debugbreak();
  }
  _RDI = angles[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
    goto LABEL_124;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
    goto LABEL_124;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+160h+var_120], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
  {
LABEL_124:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 158, ASSERT_TYPE_ASSERT, "(!IS_NAN( targetAngles[ 0 ] ) && !IS_NAN( targetAngles[ 1 ] ) && !IS_NAN( targetAngles[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( targetAngles[ 0 ] ) && !IS_NAN( targetAngles[ 1 ] ) && !IS_NAN( targetAngles[ 2 ] )") )
      __debugbreak();
  }
  *(_QWORD *)quat[0].v = __PAIR64__(level.time, v10);
  v26 = duration - duration % frameDuration;
  LODWORD(quat[0].v[2]) = v26 + level.time;
  v90.m256i_i8[4] = useAnim;
  LODWORD(quat[0].v[3]) = v26 / frameDuration;
  if ( v26 / frameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 171, ASSERT_TYPE_ASSERT, "(entTracker.numTotalFrames > 0)", (const char *)&queryFormat, "entTracker.numTotalFrames > 0") )
    __debugbreak();
  _RAX = g_entities;
  _RBX = result.mp_node;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rax+130h]
    vmovss  dword ptr [rbp+60h+quat+10h], xmm0
    vmovss  xmm1, dword ptr [rbx+rax+134h]
    vmovss  dword ptr [rbp+60h+quat+14h], xmm1
    vmovss  xmm0, dword ptr [rbx+rax+138h]
    vmovss  dword ptr [rbp+60h+quat+18h], xmm0
  }
  AnglesToQuat((const vec3_t *)((char *)&result.mp_node[6].mp_right + (unsigned __int64)g_entities + 4), (vec4_t *)&quat[1].v[3]);
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  xmm1, dword ptr [r12+4]
    vmovss  [rbp+60h+var_A4], xmm0
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  [rbp+60h+var_9C], xmm0
    vmovss  [rbp+60h+var_A0], xmm1
  }
  AnglesToQuat(_R13, (vec4_t *)&v88.m256i_u64[3]);
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  [rbp+60h+var_88], xmm0
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rbp+60h+var_80], xmm0
    vmovss  [rbp+60h+var_84], xmm1
  }
  AnglesToQuat(angles[0], (vec4_t *)((char *)&v89.m256i_u64[2] + 4));
  _RAX = g_entities;
  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rax+130h]
    vmovss  [rbp+60h+var_68], xmm0
    vmovss  xmm1, dword ptr [rbx+rax+134h]
    vmovss  [rbp+60h+var_64], xmm1
    vmovss  xmm0, dword ptr [rbx+rax+138h]
    vmovss  [rbp+60h+var_60], xmm0
    vmovss  xmm1, dword ptr [rbx+rax+130h]
    vmovss  [rbp+60h+var_5C], xmm1
    vmovss  xmm0, dword ptr [rbx+rax+134h]
    vmovss  [rbp+60h+var_58], xmm0
    vmovss  xmm1, dword ptr [rbx+rax+138h]
  }
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  v47 = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+60h+var_54], xmm1
    vmovss  dword ptr [rbp+60h+var_50], xmm0
    vmovss  dword ptr [rbp+60h+var_50+4], xmm0
    vmovss  [rbp+60h+var_48], xmm0
  }
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( v47[1].m_color < (int)v10 )
      {
        v47 = v47->mp_right;
      }
      else
      {
        p_m_endNodeBase = v47;
        v47 = v47->mp_left;
      }
    }
    while ( v47 );
    if ( p_m_endNodeBase != &s_MotionWarpTrackerMap.m_endNodeBase && (int)v10 >= p_m_endNodeBase[1].m_color )
    {
      if ( !s_MotionWarpTrackerMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      result.mp_node = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)ntl::red_black_tree_node_base::get_next(p_m_endNodeBase);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(p_m_endNodeBase, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent, &s_MotionWarpTrackerMap.m_endNodeBase.mp_left, &s_MotionWarpTrackerMap.m_endNodeBase.mp_right);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&p_m_endNodeBase->m_color = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      --s_MotionWarpTrackerMap.m_size;
      mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase;
    }
  }
  v49 = 0;
  v50 = s_MotionWarpTrackerArray;
  while ( v50->entnum != 2047 )
  {
    ++v49;
    if ( (__int64)++v50 >= (__int64)&unk_1491B9170 )
      return;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h+quat]
    vmovups ymm1, ymmword ptr [rbp-50h]
  }
  v53 = &s_MotionWarpTrackerMap.m_endNodeBase;
  v54 = v92;
  _RDX = &s_MotionWarpTrackerArray[v49];
  LODWORD(angles[0]) = v10;
  v56 = 1;
  angles[1] = (vec3_t *)_RDX;
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rbp-30h]
    vmovups ymmword ptr [rdx+20h], ymm1
    vmovups ymm1, ymmword ptr [rbp-10h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovsd  xmm0, [rbp+60h+var_50]
    vmovups ymmword ptr [rdx+60h], ymm1
    vmovsd  qword ptr [rdx+80h], xmm0
  }
  LODWORD(_RDX->accumulatedTransError.v[2]) = v54;
  while ( mp_parent )
  {
    v53 = mp_parent;
    v56 = (int)v10 < mp_parent[1].m_color;
    if ( (int)v10 >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = v53;
  if ( v56 )
  {
    if ( v53 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, &result, v53, (const ntl::pair<int,motionwarp_tracker_field_t *> *)angles, 1, 0);
      return;
    }
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v53->m_color || v53->mp_parent->mp_parent != v53 )
    {
      mp_left = v53->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = v53->mp_parent;
        if ( v53 == mp_left->mp_left )
        {
          do
          {
            v62 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v62 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = v53->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_left[1].m_color < (int)v10 )
  {
    if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
      __debugbreak();
    if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !s_MotionWarpTrackerMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<48> *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next == &s_MotionWarpTrackerMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, 0x40ui64) )
      __debugbreak();
    _RCX = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
    v86.m256i_i32[0] = 0;
    v86.m256i_i64[1] = (__int64)v53;
    __asm { vmovups xmm1, xmmword ptr [rsp+160h+angles] }
    s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+160h+var_100+10h], xmm0
      vmovups ymm0, ymmword ptr [rsp+160h+var_100]
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmmword ptr [rcx+20h], xmm1
    }
    if ( v53 == &s_MotionWarpTrackerMap.m_endNodeBase )
    {
      s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
    }
    else if ( (int)v10 >= v53[1].m_color )
    {
      v53->mp_right = (ntl::red_black_tree_node_base *)_RCX;
      mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
      if ( v53 == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)_RCX;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v53->mp_left = (ntl::red_black_tree_node_base *)_RCX;
      if ( v53 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
    ++s_MotionWarpTrackerMap.m_size;
  }
}

/*
==============
MotionWarp_Update
==============
*/
__int64 MotionWarp_Update(motionwarp_tracker_field_t *pEntTracker, vec3_t *translationDeltaLocal, vec4_t *rotationDeltaQuat)
{
  __int64 entnum; 
  __int64 v14; 
  int v15; 
  vec4_t *p_out; 
  const dvar_t *v73; 
  __int64 v129; 
  __int64 v130; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  vec3_t v164; 
  vec3_t endPos; 
  vec3_t v166; 
  vec4_t targetQuat; 
  vec4_t out; 
  vec3_t worldVec; 
  vec4_t outRotationDeltaQuat; 
  vec3_t v171; 
  vec4_t quat; 
  vec3_t angles; 
  vec4_t v174; 

  _RSI = rotationDeltaQuat;
  _R14 = translationDeltaLocal;
  _RDI = pEntTracker;
  if ( !pEntTracker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 239, ASSERT_TYPE_ASSERT, "(pEntTracker)", "%s\n\tMotion warp update requested for untracked entity.", "pEntTracker") )
    __debugbreak();
  entnum = _RDI->entnum;
  if ( (unsigned int)entnum >= 0x800 )
  {
    LODWORD(v129) = _RDI->entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v129, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entnum].r.isInUse != g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 240, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( pEntTracker->entnum ))", (const char *)&queryFormat, "G_IsEntityInUse( pEntTracker->entnum )") )
    __debugbreak();
  v14 = _RDI->entnum;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v15 = _RDI->endTime - level.time;
  if ( v15 % level.frameDuration )
  {
    LODWORD(v130) = _RDI->endTime - level.time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 248, ASSERT_TYPE_ASSERT, "(timeRemaining % frameDuration == 0)", "%s\n\ttimeRemaining (%i ms) is not evenly divisible by frame duration (%i ms).", "timeRemaining % frameDuration == 0", v130, level.frameDuration) )
      __debugbreak();
  }
  if ( v15 > 0 )
  {
    _RAX = g_entities;
    _RCX = 1456 * v14;
    __asm
    {
      vmovaps [rsp+190h+var_40], xmm6
      vmovaps [rsp+190h+var_50], xmm7
      vmovaps [rsp+190h+var_60], xmm8
      vmovss  xmm7, dword ptr [rcx+rax+130h]
      vmovss  xmm8, dword ptr [rcx+rax+134h]
      vmovaps [rsp+190h+var_70], xmm9
      vmovss  xmm9, dword ptr [rcx+rax+138h]
    }
    AnglesToQuat(&g_entities[v14].r.currentAngles, &quat);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v131 & 0x7F800000) == 2139095040 )
      goto LABEL_93;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v132 & 0x7F800000) == 2139095040 )
      goto LABEL_93;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v133 & 0x7F800000) == 2139095040 )
    {
LABEL_93:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 264, ASSERT_TYPE_ASSERT, "(!IS_NAN( translationDeltaLocal[ 0 ] ) && !IS_NAN( translationDeltaLocal[ 1 ] ) && !IS_NAN( translationDeltaLocal[ 2 ] ))", "%s\n\tNAN translationDeltaLocal in", "!IS_NAN( translationDeltaLocal[ 0 ] ) && !IS_NAN( translationDeltaLocal[ 1 ] ) && !IS_NAN( translationDeltaLocal[ 2 ] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v134 & 0x7F800000) == 2139095040 )
      goto LABEL_94;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v135 & 0x7F800000) == 2139095040 )
      goto LABEL_94;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v136 & 0x7F800000) == 2139095040 )
      goto LABEL_94;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v137 & 0x7F800000) == 2139095040 )
    {
LABEL_94:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 265, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] ))", "%s\n\tNAN rotationDeltaQuat in", "!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v138 & 0x7F800000) == 2139095040 )
      goto LABEL_95;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v139 & 0x7F800000) == 2139095040 )
      goto LABEL_95;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v140 & 0x7F800000) == 2139095040 )
    {
LABEL_95:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 266, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->naivePos[ 0 ] ) && !IS_NAN( pEntTracker->naivePos[ 1 ] ) && !IS_NAN( pEntTracker->naivePos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->naivePos[ 0 ] ) && !IS_NAN( pEntTracker->naivePos[ 1 ] ) && !IS_NAN( pEntTracker->naivePos[ 2 ] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v141 & 0x7F800000) == 2139095040 )
      goto LABEL_96;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+30h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v142 & 0x7F800000) == 2139095040 )
      goto LABEL_96;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v143 & 0x7F800000) == 2139095040 )
    {
LABEL_96:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 267, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->animPos[ 0 ] ) && !IS_NAN( pEntTracker->animPos[ 1 ] ) && !IS_NAN( pEntTracker->animPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->animPos[ 0 ] ) && !IS_NAN( pEntTracker->animPos[ 1 ] ) && !IS_NAN( pEntTracker->animPos[ 2 ] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1Ch]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v144 & 0x7F800000) == 2139095040 )
      goto LABEL_97;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v145 & 0x7F800000) == 2139095040 )
      goto LABEL_97;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+24h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v146 & 0x7F800000) == 2139095040 )
      goto LABEL_97;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v147 & 0x7F800000) == 2139095040 )
    {
LABEL_97:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 268, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->naiveQuat[ 0 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 1 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 2 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 3 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->naiveQuat[ 0 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 1 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 2 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 3 ] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v148 & 0x7F800000) == 2139095040 )
      goto LABEL_98;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3Ch]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v149 & 0x7F800000) == 2139095040 )
      goto LABEL_98;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+40h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v150 & 0x7F800000) == 2139095040 )
      goto LABEL_98;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+44h]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v151 & 0x7F800000) == 2139095040 )
    {
LABEL_98:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 269, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->animQuat[ 0 ] ) && !IS_NAN( pEntTracker->animQuat[ 1 ] ) && !IS_NAN( pEntTracker->animQuat[ 2 ] ) && !IS_NAN( pEntTracker->animQuat[ 3 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->animQuat[ 0 ] ) && !IS_NAN( pEntTracker->animQuat[ 1 ] ) && !IS_NAN( pEntTracker->animQuat[ 2 ] ) && !IS_NAN( pEntTracker->animQuat[ 3 ] )") )
        __debugbreak();
    }
    Vec4Normalize(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v152 & 0x7F800000) == 2139095040 )
      goto LABEL_99;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v153 & 0x7F800000) == 2139095040 )
      goto LABEL_99;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v154 & 0x7F800000) == 2139095040 )
      goto LABEL_99;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v155 & 0x7F800000) == 2139095040 )
    {
LABEL_99:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 279, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] ))", "%s\n\tNAN rotationDeltaQuat normalize", "!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] )") )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0Ch]
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm6, xmm1, xmm0
    }
    if ( _RDI->useAnim )
    {
      QuatMultiply(&_RDI->naiveQuat, _RSI, &out);
      QuatTransform(&out, _R14, &v166);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+var_128]
        vaddss  xmm1, xmm0, dword ptr [rdi+10h]
        vmovss  xmm2, dword ptr [rsp+190h+var_128+4]
        vaddss  xmm0, xmm2, dword ptr [rdi+14h]
        vmovss  dword ptr [rsp+190h+var_148], xmm1
        vmovss  xmm1, dword ptr [rsp+190h+var_128+8]
        vaddss  xmm2, xmm1, dword ptr [rdi+18h]
        vmovss  dword ptr [rsp+190h+var_148+8], xmm2
        vmovss  dword ptr [rsp+190h+var_148+4], xmm0
      }
      QuatMultiply(&_RDI->animQuat, _RSI, &targetQuat);
      QuatTransform(&targetQuat, _R14, &v171);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+90h+var_D8]
        vaddss  xmm1, xmm0, dword ptr [rdi+2Ch]
        vmovss  xmm2, dword ptr [rbp+90h+var_D8+4]
        vaddss  xmm0, xmm2, dword ptr [rdi+30h]
        vmovss  dword ptr [rsp+190h+endPos], xmm1
        vmovss  xmm1, dword ptr [rbp+90h+var_D8+8]
        vaddss  xmm2, xmm1, dword ptr [rdi+34h]
        vmovss  dword ptr [rsp+190h+endPos+8], xmm2
        vmovss  dword ptr [rsp+190h+endPos+4], xmm0
      }
      p_out = &out;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10h]
        vmovss  xmm1, dword ptr [rdi+14h]
        vmovss  dword ptr [rsp+190h+var_148], xmm0
        vmovss  xmm0, dword ptr [rdi+18h]
        vmovss  dword ptr [rsp+190h+var_148+8], xmm0
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  dword ptr [rsp+190h+endPos+4], xmm0
        vmovups xmm0, xmmword ptr [rdi+1Ch]
        vmovss  dword ptr [rsp+190h+var_148+4], xmm1
        vmovss  xmm1, dword ptr [rdi+2Ch]
        vmovups xmmword ptr [rbp+90h+out], xmm0
        vmovups xmm0, xmmword ptr [rdi+38h]
        vmovss  dword ptr [rsp+190h+endPos], xmm1
        vmovss  xmm1, dword ptr [rdi+34h]
        vmovups xmmword ptr [rsp+190h+targetQuat], xmm0
        vmovss  dword ptr [rsp+190h+endPos+8], xmm1
      }
      p_out = &quat;
    }
    __asm { vmovaps xmm3, xmm6; f }
    ComputeFrameRotationDeltaQuat(p_out, &targetQuat, &quat, *(float *)&_XMM3, &outRotationDeltaQuat);
    if ( _RDI->numTotalFrames <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 318, ASSERT_TYPE_ASSERT, "(pEntTracker->numTotalFrames > 0)", (const char *)&queryFormat, "pEntTracker->numTotalFrames > 0") )
      __debugbreak();
    __asm { vmovss  [rsp+190h+var_150], xmm6 }
    if ( (v156 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 319, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ))", (const char *)&queryFormat, "!IS_NAN( scale )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+190h+endPos]
      vsubss  xmm1, xmm0, dword ptr [rsp+190h+var_148]
    }
    v73 = DVARBOOL_ai_debugMotionWarp;
    __asm
    {
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+190h+var_148]
      vmovss  xmm1, dword ptr [rsp+190h+endPos+4]
      vsubss  xmm0, xmm3, xmm7
      vmovss  dword ptr [rbp+90h+worldVec], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+190h+var_148+4]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+190h+var_148+4]
      vmovss  xmm0, dword ptr [rsp+190h+endPos+8]
      vsubss  xmm1, xmm3, xmm8
      vmovss  dword ptr [rbp+90h+worldVec+4], xmm1
      vsubss  xmm1, xmm0, dword ptr [rsp+190h+var_148+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+190h+var_148+8]
      vsubss  xmm0, xmm3, xmm9
      vmovss  dword ptr [rbp+90h+worldVec+8], xmm0
    }
    if ( !DVARBOOL_ai_debugMotionWarp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMotionWarp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    if ( v73->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+74h]
        vmovss  xmm2, dword ptr [rdi+78h]
      }
      _RCX = 1456i64 * _RDI->entnum;
      __asm
      {
        vmovaps [rsp+190h+var_80], xmm10
        vmovaps [rsp+190h+var_90], xmm11
      }
      _RAX = g_entities;
      __asm
      {
        vmovss  xmm5, dword ptr [rcx+rax+130h]
        vaddss  xmm6, xmm5, dword ptr [rbp+90h+worldVec]
        vsubss  xmm1, xmm0, xmm5
        vaddss  xmm11, xmm1, dword ptr [rdi+80h]
        vmovss  xmm1, dword ptr [rdi+7Ch]
        vmovss  dword ptr [rsp+190h+var_128], xmm5
        vmovss  xmm4, dword ptr [rcx+rax+134h]
        vaddss  xmm7, xmm4, dword ptr [rbp+90h+worldVec+4]
        vsubss  xmm0, xmm2, xmm4
        vaddss  xmm10, xmm0, dword ptr [rdi+84h]
        vmovss  dword ptr [rsp+190h+var_128+4], xmm4
        vmovss  xmm3, dword ptr [rcx+rax+138h]
        vaddss  xmm8, xmm3, dword ptr [rbp+90h+worldVec+8]
        vsubss  xmm2, xmm1, xmm3
        vaddss  xmm9, xmm2, dword ptr [rdi+88h]
        vmovss  dword ptr [rsp+190h+var_128+8], xmm3
      }
      G_DebugLineWithArrow(&_RDI->animPos, &endPos, &colorGreen, 100);
      G_DebugLineWithArrow(&_RDI->lastPos, &v166, &colorOrange, 100);
      G_DebugLineWithArrow(&_RDI->naivePos, &v164, &colorRed, 100);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+var_128]
        vmovss  xmm1, dword ptr [rsp+190h+var_128+4]
        vmovss  dword ptr [rdi+68h], xmm0
        vmovss  xmm0, dword ptr [rsp+190h+var_128+8]
        vmovss  dword ptr [rdi+70h], xmm0
        vmovss  dword ptr [rdi+6Ch], xmm1
        vmovss  dword ptr [rdi+74h], xmm6
        vmovss  dword ptr [rdi+78h], xmm7
        vmovss  dword ptr [rdi+7Ch], xmm8
        vmovss  dword ptr [rdi+80h], xmm11
        vmovaps xmm11, [rsp+190h+var_90]
        vmovss  dword ptr [rdi+84h], xmm10
        vmovaps xmm10, [rsp+190h+var_80]
        vmovss  dword ptr [rdi+88h], xmm9
      }
    }
    QuatMultiply(&quat, &outRotationDeltaQuat, &v174);
    QuatToAngles(&v174, &angles);
    OrientVectorToLocalSpace(&worldVec, _R14, &angles);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+90h+outRotationDeltaQuat]
      vmovss  xmm1, dword ptr [rsp+190h+var_148+4]
      vmovaps xmm9, [rsp+190h+var_70]
      vmovaps xmm8, [rsp+190h+var_60]
      vmovaps xmm7, [rsp+190h+var_50]
      vmovaps xmm6, [rsp+190h+var_40]
      vmovups xmmword ptr [rsi], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+var_148]
      vmovss  dword ptr [rdi+10h], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+var_148+8]
      vmovss  dword ptr [rdi+14h], xmm1
      vmovups xmm1, xmmword ptr [rbp+90h+out]
      vmovss  dword ptr [rdi+18h], xmm0
      vmovss  xmm0, dword ptr [rsp+190h+endPos+4]
      vmovups xmmword ptr [rdi+1Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+endPos]
      vmovss  dword ptr [rdi+2Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+endPos+8]
      vmovss  dword ptr [rdi+30h], xmm0
      vmovups xmm0, xmmword ptr [rsp+190h+targetQuat]
      vmovss  dword ptr [rdi+34h], xmm1
      vmovups xmmword ptr [rdi+38h], xmm0
      vmovss  xmm0, dword ptr [r14]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v157 & 0x7F800000) == 2139095040 )
      goto LABEL_100;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v158 & 0x7F800000) == 2139095040 )
      goto LABEL_100;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v159 & 0x7F800000) == 2139095040 )
    {
LABEL_100:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 345, ASSERT_TYPE_ASSERT, "(!IS_NAN( translationDeltaLocal[0] ) && !IS_NAN( translationDeltaLocal[1] ) && !IS_NAN( translationDeltaLocal[2] ))", "%s\n\tNAN translationDelta out!", "!IS_NAN( translationDeltaLocal[0] ) && !IS_NAN( translationDeltaLocal[1] ) && !IS_NAN( translationDeltaLocal[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v160 & 0x7F800000) == 2139095040 )
      goto LABEL_101;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+190h+var_150], xmm0
    }
    if ( (v161 & 0x7F800000) == 2139095040 )
      goto LABEL_101;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm1, dword ptr [rsi+8]
    }
    if ( (v161 & 0x7F800000) != 2139095040 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  [rsp+190h+var_150], xmm0
      }
      if ( (v162 & 0x7F800000) != 2139095040 )
        __asm { vmovss  xmm1, cs:__real@3f800000 }
    }
    __asm { vmovss  [rsp+190h+var_150], xmm1 }
    if ( (v163 & 0x7F800000) == 2139095040 )
    {
LABEL_101:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 346, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[0] ) && !IS_NAN( rotationDeltaQuat[1] ) && !IS_NAN( rotationDeltaQuat[2] && !IS_NAN( rotationDeltaQuat[3] ) ))", "%s\n\tNAN rotationDeltaQuat out!", "!IS_NAN( rotationDeltaQuat[0] ) && !IS_NAN( rotationDeltaQuat[1] ) && !IS_NAN( rotationDeltaQuat[2] && !IS_NAN( rotationDeltaQuat[3] ) )") )
        __debugbreak();
    }
    return 1i64;
  }
  else
  {
    MotionWarp_Cancel(_RDI);
    return 2i64;
  }
}

