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
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::pair<int,motionwarp_tracker_field_t *> v13; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element; 
  __m256i v16; 
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
      mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      v13 = r_element;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v16.m256i_i32[0] = 0;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      v16.m256i_i64[1] = (__int64)p_m_endNodeBase;
      *(_OWORD *)&v16.m256i_u64[2] = _XMM0;
      *(__m256i *)&mp_next->mp_next = v16;
      *(ntl::pair<int,motionwarp_tracker_field_t *> *)&mp_next[4].mp_next = v13;
      if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
      }
      else if ( entnum >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)mp_next;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
        if ( p_m_endNodeBase == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
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
  __int64 v3; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v5; 
  ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *v6; 
  bool v7; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v9; 
  ntl::pair<int,motionwarp_tracker_field_t *> v10; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element_8; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result[7]; 
  vec3_t angles; 
  vec3_t v26; 
  vec3_t v27; 
  vec4_t quat; 
  vec4_t outRotationDeltaQuat; 
  vec4_t v30; 
  vec4_t v31; 

  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  v3 = entnum;
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  v5 = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  if ( !s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    goto LABEL_8;
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
  if ( p_m_endNodeBase == &s_MotionWarpTrackerMap.m_endNodeBase || entnum < p_m_endNodeBase[1].m_color )
  {
LABEL_8:
    v6 = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)&s_MotionWarpTrackerMap.m_endNodeBase;
    v7 = 1;
    r_element_8.first = v3;
    r_element_8.second = NULL;
    if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
    {
      do
      {
        v6 = (ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> > *)mp_parent;
        v7 = (int)v3 < mp_parent[1].m_color;
        if ( (int)v3 >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      while ( mp_parent );
    }
    p_m_endNodeBase = v6;
    if ( v7 )
    {
      if ( v6 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
      {
        p_m_endNodeBase = ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, result, v6, &r_element_8, 1, 0)->mp_node;
LABEL_55:
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        goto LABEL_58;
      }
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( v6->m_color || v6->mp_parent->ntl::red_black_tree_node_base::mp_parent != v6 )
      {
        p_m_endNodeBase = v6->mp_left;
        if ( p_m_endNodeBase )
        {
          for ( i = p_m_endNodeBase->mp_right; i; i = i->mp_right )
            p_m_endNodeBase = i;
        }
        else
        {
          p_m_endNodeBase = v6->mp_parent;
          if ( v6 == p_m_endNodeBase->mp_left )
          {
            do
            {
              v9 = p_m_endNodeBase;
              p_m_endNodeBase = p_m_endNodeBase->mp_parent;
            }
            while ( v9 == p_m_endNodeBase->mp_left );
          }
        }
      }
      else
      {
        p_m_endNodeBase = v6->mp_right;
      }
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase[1].m_color >= (int)v3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\map\\map.h", 87, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
        __debugbreak();
    }
    else
    {
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
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
      p_m_endNodeBase = (ntl::red_black_tree_node_base *)s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
      LODWORD(result[1].mp_node) = 0;
      result[2].mp_node = v6;
      v10 = r_element_8;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&result[3].mp_node = _XMM0;
      *p_m_endNodeBase = *(ntl::red_black_tree_node_base *)&result[1].mp_node;
      *(ntl::pair<int,motionwarp_tracker_field_t *> *)&p_m_endNodeBase[1].m_color = v10;
      if ( v6 == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = p_m_endNodeBase;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = p_m_endNodeBase;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = p_m_endNodeBase;
      }
      else if ( (int)v3 >= v6->m_element.first )
      {
        v6->mp_right = p_m_endNodeBase;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( v6 == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = p_m_endNodeBase;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        v6->mp_left = p_m_endNodeBase;
        if ( v6 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = p_m_endNodeBase;
      }
      ntl::red_black_tree_node_base::rebalance(p_m_endNodeBase, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
      ++s_MotionWarpTrackerMap.m_size;
    }
    goto LABEL_55;
  }
LABEL_58:
  v13 = p_m_endNodeBase[1].mp_parent;
  v14 = *(float *)&v13[2].mp_left;
  v15 = *((float *)&v13[2].mp_parent + 1);
  v16 = *(float *)&v13[2].mp_parent;
  v17 = *((float *)&v13[1].mp_parent + 1);
  v18 = *(float *)&v13[1].mp_left;
  v19 = *((float *)&v13[1].mp_left + 1);
  v20 = *(float *)&v13->mp_left;
  v21 = *((float *)&v13->mp_left + 1);
  v22 = *(float *)&v13->mp_right;
  Com_Printf(18, "warpTranslationError: %f, %f, %f\n", (float)(g_entities[v3].r.currentOrigin.v[0] - v16), (float)(g_entities[v3].r.currentOrigin.v[1] - v15), (float)(g_entities[v3].r.currentOrigin.v[2] - v14));
  Com_Printf(18, "animTranslationError: %f, %f, %f\n", (float)(v17 - v16), (float)(v18 - v15), (float)(v19 - v14));
  Com_Printf(18, "naiveTranslationError: %f, %f, %f\n", (float)(v20 - v16), (float)(v21 - v15), (float)(v22 - v14));
  Com_Printf(18, "accumulatedTransError: %f, %f, %f\n", *(float *)&v13[4].m_color, *((float *)&v13[4].m_color + 1), *(float *)&v13[4].mp_parent);
  AnglesToQuat(&g_entities[v3].r.currentAngles, &quat);
  ComputeFrameRotationDeltaQuat(&quat, (const vec4_t *)((char *)&v13[2].mp_left + 4), &quat, 1.0, &outRotationDeltaQuat);
  QuatToAngles(&outRotationDeltaQuat, &angles);
  ComputeFrameRotationDeltaQuat((const vec4_t *)&v13[1].mp_right, (const vec4_t *)((char *)&v13[2].mp_left + 4), (const vec4_t *)&v13[1].mp_right, 1.0, &v30);
  QuatToAngles(&v30, &v26);
  ComputeFrameRotationDeltaQuat((const vec4_t *)((char *)&v13->mp_right + 4), (const vec4_t *)((char *)&v13[2].mp_left + 4), (const vec4_t *)((char *)&v13->mp_right + 4), 1.0, &v31);
  QuatToAngles(&v31, &v27);
  Com_Printf(18, "warpRotationError: %f, %f, %f\n", angles.v[0], angles.v[1], angles.v[2]);
  Com_Printf(18, "animRotationError: %f, %f, %f\n", v26.v[0], v26.v[1], v26.v[2]);
  Com_Printf(18, "naiveRotationError: %f, %f, %f\n", v27.v[0], v27.v[1], v27.v[2]);
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
  _QWORD *mp_left; 
  _QWORD *i; 
  _QWORD *v11; 
  ntl::pair<int,motionwarp_tracker_field_t *> v12; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::pair<int,motionwarp_tracker_field_t *> r_element; 
  __m256i v16; 
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
  mp_left = v8;
  if ( !v7 )
    goto LABEL_29;
  if ( v8 != s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v8->m_color || v8->mp_parent->mp_parent != v8 )
    {
      mp_left = v8->mp_left;
      if ( mp_left )
      {
        for ( i = (_QWORD *)mp_left[3]; i; i = (_QWORD *)i[3] )
          mp_left = i;
      }
      else
      {
        mp_left = v8->mp_parent;
        if ( v8 == (ntl::red_black_tree_node_base *)mp_left[2] )
        {
          do
          {
            v11 = mp_left;
            mp_left = (_QWORD *)mp_left[1];
          }
          while ( v11 == (_QWORD *)mp_left[2] );
        }
      }
    }
    else
    {
      mp_left = v8->mp_right;
    }
LABEL_29:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( *((_DWORD *)mp_left + 8) >= entnum )
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
      mp_left = &s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      v16.m256i_i32[0] = 0;
      v16.m256i_i64[1] = (__int64)v8;
      v12 = r_element;
      s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v16.m256i_u64[2] = _XMM0;
      *(__m256i *)mp_left = v16;
      *((ntl::pair<int,motionwarp_tracker_field_t *> *)mp_left + 2) = v12;
      if ( v8 == &s_MotionWarpTrackerMap.m_endNodeBase )
      {
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_left;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_left;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_left;
      }
      else if ( entnum >= v8[1].m_color )
      {
        v8->mp_right = (ntl::red_black_tree_node_base *)mp_left;
        mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
        if ( v8 == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)mp_left;
        s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        v8->mp_left = (ntl::red_black_tree_node_base *)mp_left;
        if ( v8 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
          s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_left;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_left, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
      ++s_MotionWarpTrackerMap.m_size;
    }
    goto LABEL_56;
  }
  mp_left = ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, &result, v8, &r_element, 1, 0)->mp_node;
LABEL_56:
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  return (ntl::red_black_tree_node_base *)mp_left[5];
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
  int v13; 
  float v14; 
  float v15; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v18; 
  int v19; 
  motionwarp_tracker_field_t *v20; 
  __m256i v21; 
  ntl::red_black_tree_node_base *v22; 
  float v23; 
  motionwarp_tracker_field_t *v24; 
  bool v25; 
  __m256i v26; 
  __m256i v27; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v31; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  __int128 v33; 
  ntl::red_black_tree_node_base *mp_right; 
  __int64 hintInsertLessElement; 
  __int64 hintInsertLessElementa; 
  __int64 v38; 
  __int64 v39; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *> >,ntl::pair<int,motionwarp_tracker_field_t *> *,ntl::pair<int,motionwarp_tracker_field_t *> &> result; 
  vec3_t *angles[2]; 
  __m256i v42; 
  vec4_t quat[2]; 
  __m256i v44; 
  __m256i v45; 
  __m256i v46; 
  unsigned __int64 v47; 
  float v48; 

  angles[0] = (vec3_t *)targetAngles;
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
    LODWORD(v38) = 2048;
    LODWORD(hintInsertLessElement) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElement, v38) )
      __debugbreak();
    LODWORD(v39) = 2048;
    LODWORD(hintInsertLessElementa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", hintInsertLessElementa, v39) )
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
  if ( ((LODWORD(animStartPos->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(animStartPos->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(animStartPos->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 155, ASSERT_TYPE_ASSERT, "(!IS_NAN( animStartPos[ 0 ] ) && !IS_NAN( animStartPos[ 1 ] ) && !IS_NAN( animStartPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( animStartPos[ 0 ] ) && !IS_NAN( animStartPos[ 1 ] ) && !IS_NAN( animStartPos[ 2 ] )") )
    __debugbreak();
  if ( ((LODWORD(animStartAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(animStartAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(animStartAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 156, ASSERT_TYPE_ASSERT, "(!IS_NAN( animStartAngles[ 0 ] ) && !IS_NAN( animStartAngles[ 1 ] ) && !IS_NAN( animStartAngles[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( animStartAngles[ 0 ] ) && !IS_NAN( animStartAngles[ 1 ] ) && !IS_NAN( animStartAngles[ 2 ] )") )
    __debugbreak();
  if ( ((LODWORD(targetPos->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(targetPos->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(targetPos->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 157, ASSERT_TYPE_ASSERT, "(!IS_NAN( targetPos[ 0 ] ) && !IS_NAN( targetPos[ 1 ] ) && !IS_NAN( targetPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( targetPos[ 0 ] ) && !IS_NAN( targetPos[ 1 ] ) && !IS_NAN( targetPos[ 2 ] )") )
    __debugbreak();
  if ( ((LODWORD(angles[0]->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angles[0]->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angles[0]->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 158, ASSERT_TYPE_ASSERT, "(!IS_NAN( targetAngles[ 0 ] ) && !IS_NAN( targetAngles[ 1 ] ) && !IS_NAN( targetAngles[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( targetAngles[ 0 ] ) && !IS_NAN( targetAngles[ 1 ] ) && !IS_NAN( targetAngles[ 2 ] )") )
    __debugbreak();
  *(_QWORD *)quat[0].v = __PAIR64__(level.time, v10);
  v13 = duration - duration % frameDuration;
  LODWORD(quat[0].v[2]) = v13 + level.time;
  v46.m256i_i8[4] = useAnim;
  LODWORD(quat[0].v[3]) = v13 / frameDuration;
  if ( v13 / frameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 171, ASSERT_TYPE_ASSERT, "(entTracker.numTotalFrames > 0)", (const char *)&queryFormat, "entTracker.numTotalFrames > 0") )
    __debugbreak();
  *(_QWORD *)quat[1].v = *(ntl::red_black_tree_node_base **)((char *)&result.mp_node[6].mp_left + (unsigned __int64)g_entities);
  quat[1].v[2] = *(float *)((char *)&result.mp_node[6].mp_right + (unsigned __int64)g_entities);
  AnglesToQuat((const vec3_t *)((char *)&result.mp_node[6].mp_right + (unsigned __int64)g_entities + 4), (vec4_t *)&quat[1].v[3]);
  v14 = animStartPos->v[1];
  v44.m256i_i32[3] = LODWORD(animStartPos->v[0]);
  v44.m256i_i32[5] = LODWORD(animStartPos->v[2]);
  *(float *)&v44.m256i_i32[4] = v14;
  AnglesToQuat(animStartAngles, (vec4_t *)&v44.m256i_u64[3]);
  v15 = targetPos->v[1];
  v45.m256i_i32[2] = LODWORD(targetPos->v[0]);
  v45.m256i_i32[4] = LODWORD(targetPos->v[2]);
  *(float *)&v45.m256i_i32[3] = v15;
  AnglesToQuat(angles[0], (vec4_t *)((char *)&v45.m256i_u64[2] + 4));
  mp_parent = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  v46.m256i_i64[1] = *(__int64 *)((char *)&result.mp_node[6].mp_left + (unsigned __int64)g_entities);
  v46.m256i_i32[4] = *(_DWORD *)((char *)&result.mp_node[6].mp_right + (unsigned __int64)g_entities);
  *(__int64 *)((char *)&v46.m256i_i64[2] + 4) = *(__int64 *)((char *)&result.mp_node[6].mp_left + (unsigned __int64)g_entities);
  p_m_endNodeBase = &s_MotionWarpTrackerMap.m_endNodeBase;
  v18 = s_MotionWarpTrackerMap.m_endNodeBase.mp_parent;
  v46.m256i_i32[7] = *(_DWORD *)((char *)&result.mp_node[6].mp_right + (unsigned __int64)g_entities);
  v47 = 0i64;
  v48 = 0.0;
  if ( s_MotionWarpTrackerMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( v18[1].m_color < (int)v10 )
      {
        v18 = v18->mp_right;
      }
      else
      {
        p_m_endNodeBase = v18;
        v18 = v18->mp_left;
      }
    }
    while ( v18 );
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
  v19 = 0;
  v20 = s_MotionWarpTrackerArray;
  while ( v20->entnum != 2047 )
  {
    ++v19;
    if ( (__int64)++v20 >= (__int64)&unk_1491B9170 )
      return;
  }
  v21 = v44;
  v22 = &s_MotionWarpTrackerMap.m_endNodeBase;
  v23 = v48;
  v24 = &s_MotionWarpTrackerArray[v19];
  LODWORD(angles[0]) = v10;
  v25 = 1;
  angles[1] = (vec3_t *)v24;
  *(__m256i *)&v24->entnum = *(__m256i *)quat[0].v;
  v26 = v45;
  *(__m256i *)&v24->naiveQuat.xyz.y = v21;
  v27 = v46;
  *(__m256i *)&v24->animQuat.xyz.z = v26;
  _XMM0 = v47;
  *(__m256i *)(&v24->targetQuat.xyz + 1) = v27;
  *(double *)v24->accumulatedTransError.v = *(double *)&_XMM0;
  v24->accumulatedTransError.v[2] = v23;
  while ( mp_parent )
  {
    v22 = mp_parent;
    v25 = (int)v10 < mp_parent[1].m_color;
    if ( (int)v10 >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = v22;
  if ( v25 )
  {
    if ( v22 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<int,ntl::pair<int,motionwarp_tracker_field_t *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,motionwarp_tracker_field_t *>>,64,8>,ntl::return_pair_first<int,motionwarp_tracker_field_t *>,ntl::less<int,int>>::insert_node(&s_MotionWarpTrackerMap, &result, v22, (const ntl::pair<int,motionwarp_tracker_field_t *> *)angles, 1, 0);
      return;
    }
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v22->m_color || v22->mp_parent->mp_parent != v22 )
    {
      mp_left = v22->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = v22->mp_parent;
        if ( v22 == mp_left->mp_left )
        {
          do
          {
            v31 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v31 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = v22->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_left[1].m_color < (int)v10 )
  {
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
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
    mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next;
    v42.m256i_i32[0] = 0;
    v42.m256i_i64[1] = (__int64)v22;
    v33 = *(_OWORD *)angles;
    s_MotionWarpTrackerMap.m_freelist.m_head.mp_next = s_MotionWarpTrackerMap.m_freelist.m_head.mp_next->mp_next;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v42.m256i_u64[2] = _XMM0;
    *(__m256i *)&mp_next->mp_next = v42;
    *(_OWORD *)&mp_next[4].mp_next = v33;
    if ( v22 == &s_MotionWarpTrackerMap.m_endNodeBase )
    {
      s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
    }
    else if ( (int)v10 >= v22[1].m_color )
    {
      v22->mp_right = (ntl::red_black_tree_node_base *)mp_next;
      mp_right = s_MotionWarpTrackerMap.m_endNodeBase.mp_right;
      if ( v22 == s_MotionWarpTrackerMap.m_endNodeBase.mp_right )
        mp_right = (ntl::red_black_tree_node_base *)mp_next;
      s_MotionWarpTrackerMap.m_endNodeBase.mp_right = mp_right;
    }
    else
    {
      v22->mp_left = (ntl::red_black_tree_node_base *)mp_next;
      if ( v22 == s_MotionWarpTrackerMap.m_endNodeBase.mp_left )
        s_MotionWarpTrackerMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
    }
    ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &s_MotionWarpTrackerMap.m_endNodeBase.mp_parent);
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
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int64 entnum; 
  __int64 v13; 
  int v14; 
  int v15; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec4_t *p_out; 
  float v24; 
  vec4_t naiveQuat; 
  float v26; 
  vec4_t animQuat; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  __int64 v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  vec4_t v46; 
  float v47; 
  vec4_t v48; 
  float v49; 
  __int64 v50; 
  __int64 v51; 
  vec3_t v52; 
  vec3_t endPos; 
  vec3_t v54; 
  vec4_t targetQuat; 
  vec4_t out; 
  vec3_t worldVec; 
  vec4_t outRotationDeltaQuat; 
  vec3_t v59; 
  vec4_t quat; 
  vec3_t angles; 
  vec4_t v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 

  if ( !pEntTracker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 239, ASSERT_TYPE_ASSERT, "(pEntTracker)", "%s\n\tMotion warp update requested for untracked entity.", "pEntTracker") )
    __debugbreak();
  entnum = pEntTracker->entnum;
  if ( (unsigned int)entnum >= 0x800 )
  {
    LODWORD(v50) = pEntTracker->entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v50, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entnum].r.isInUse != g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 240, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( pEntTracker->entnum ))", (const char *)&queryFormat, "G_IsEntityInUse( pEntTracker->entnum )") )
    __debugbreak();
  v13 = pEntTracker->entnum;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v14 = pEntTracker->endTime - level.time;
  v15 = v14 / level.frameDuration;
  if ( v14 % level.frameDuration )
  {
    LODWORD(v51) = pEntTracker->endTime - level.time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 248, ASSERT_TYPE_ASSERT, "(timeRemaining % frameDuration == 0)", "%s\n\ttimeRemaining (%i ms) is not evenly divisible by frame duration (%i ms).", "timeRemaining % frameDuration == 0", v51, level.frameDuration) )
      __debugbreak();
  }
  if ( v14 > 0 )
  {
    v68 = v3;
    v67 = v4;
    v66 = v5;
    v17 = g_entities[v13].r.currentOrigin.v[0];
    v18 = g_entities[v13].r.currentOrigin.v[1];
    v65 = v6;
    v19 = g_entities[v13].r.currentOrigin.v[2];
    AnglesToQuat(&g_entities[v13].r.currentAngles, &quat);
    if ( ((LODWORD(translationDeltaLocal->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(translationDeltaLocal->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(translationDeltaLocal->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 264, ASSERT_TYPE_ASSERT, "(!IS_NAN( translationDeltaLocal[ 0 ] ) && !IS_NAN( translationDeltaLocal[ 1 ] ) && !IS_NAN( translationDeltaLocal[ 2 ] ))", "%s\n\tNAN translationDeltaLocal in", "!IS_NAN( translationDeltaLocal[ 0 ] ) && !IS_NAN( translationDeltaLocal[ 1 ] ) && !IS_NAN( translationDeltaLocal[ 2 ] )") )
      __debugbreak();
    if ( ((LODWORD(rotationDeltaQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 265, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] ))", "%s\n\tNAN rotationDeltaQuat in", "!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] )") )
      __debugbreak();
    if ( ((LODWORD(pEntTracker->naivePos.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->naivePos.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->naivePos.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 266, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->naivePos[ 0 ] ) && !IS_NAN( pEntTracker->naivePos[ 1 ] ) && !IS_NAN( pEntTracker->naivePos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->naivePos[ 0 ] ) && !IS_NAN( pEntTracker->naivePos[ 1 ] ) && !IS_NAN( pEntTracker->naivePos[ 2 ] )") )
      __debugbreak();
    if ( ((LODWORD(pEntTracker->animPos.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->animPos.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->animPos.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 267, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->animPos[ 0 ] ) && !IS_NAN( pEntTracker->animPos[ 1 ] ) && !IS_NAN( pEntTracker->animPos[ 2 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->animPos[ 0 ] ) && !IS_NAN( pEntTracker->animPos[ 1 ] ) && !IS_NAN( pEntTracker->animPos[ 2 ] )") )
      __debugbreak();
    if ( ((LODWORD(pEntTracker->naiveQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->naiveQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->naiveQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->naiveQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 268, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->naiveQuat[ 0 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 1 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 2 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 3 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->naiveQuat[ 0 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 1 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 2 ] ) && !IS_NAN( pEntTracker->naiveQuat[ 3 ] )") )
      __debugbreak();
    if ( ((LODWORD(pEntTracker->animQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->animQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->animQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(pEntTracker->animQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 269, ASSERT_TYPE_ASSERT, "(!IS_NAN( pEntTracker->animQuat[ 0 ] ) && !IS_NAN( pEntTracker->animQuat[ 1 ] ) && !IS_NAN( pEntTracker->animQuat[ 2 ] ) && !IS_NAN( pEntTracker->animQuat[ 3 ] ))", (const char *)&queryFormat, "!IS_NAN( pEntTracker->animQuat[ 0 ] ) && !IS_NAN( pEntTracker->animQuat[ 1 ] ) && !IS_NAN( pEntTracker->animQuat[ 2 ] ) && !IS_NAN( pEntTracker->animQuat[ 3 ] )") )
      __debugbreak();
    Vec4Normalize(rotationDeltaQuat);
    if ( ((LODWORD(rotationDeltaQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 279, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] ))", "%s\n\tNAN rotationDeltaQuat normalize", "!IS_NAN( rotationDeltaQuat[ 0 ] ) && !IS_NAN( rotationDeltaQuat[ 1 ] ) && !IS_NAN( rotationDeltaQuat[ 2 ] ) && !IS_NAN( rotationDeltaQuat[ 3 ] )") )
      __debugbreak();
    v20 = (float)(pEntTracker->numTotalFrames - v15 + 1) / (float)pEntTracker->numTotalFrames;
    if ( pEntTracker->useAnim )
    {
      QuatMultiply(&pEntTracker->naiveQuat, rotationDeltaQuat, &out);
      QuatTransform(&out, translationDeltaLocal, &v54);
      v21 = v54.v[1] + pEntTracker->naivePos.v[1];
      v52.v[0] = v54.v[0] + pEntTracker->naivePos.v[0];
      v52.v[2] = v54.v[2] + pEntTracker->naivePos.v[2];
      v52.v[1] = v21;
      QuatMultiply(&pEntTracker->animQuat, rotationDeltaQuat, &targetQuat);
      QuatTransform(&targetQuat, translationDeltaLocal, &v59);
      v22 = v59.v[1] + pEntTracker->animPos.v[1];
      endPos.v[0] = v59.v[0] + pEntTracker->animPos.v[0];
      endPos.v[2] = v59.v[2] + pEntTracker->animPos.v[2];
      endPos.v[1] = v22;
      p_out = &out;
    }
    else
    {
      v24 = pEntTracker->naivePos.v[1];
      v52.v[0] = pEntTracker->naivePos.v[0];
      v52.v[2] = pEntTracker->naivePos.v[2];
      endPos.v[1] = pEntTracker->animPos.v[1];
      naiveQuat = pEntTracker->naiveQuat;
      v52.v[1] = v24;
      v26 = pEntTracker->animPos.v[0];
      out = naiveQuat;
      animQuat = pEntTracker->animQuat;
      endPos.v[0] = v26;
      v28 = pEntTracker->animPos.v[2];
      targetQuat = animQuat;
      endPos.v[2] = v28;
      p_out = &quat;
    }
    ComputeFrameRotationDeltaQuat(p_out, &targetQuat, &quat, v20, &outRotationDeltaQuat);
    if ( pEntTracker->numTotalFrames <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 318, ASSERT_TYPE_ASSERT, "(pEntTracker->numTotalFrames > 0)", (const char *)&queryFormat, "pEntTracker->numTotalFrames > 0") )
      __debugbreak();
    if ( (LODWORD(v20) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 319, ASSERT_TYPE_ASSERT, "(!IS_NAN( scale ))", (const char *)&queryFormat, "!IS_NAN( scale )") )
      __debugbreak();
    v29 = DVARBOOL_ai_debugMotionWarp;
    worldVec.v[0] = (float)((float)((float)(endPos.v[0] - v52.v[0]) * v20) + v52.v[0]) - v17;
    worldVec.v[1] = (float)((float)((float)(endPos.v[1] - v52.v[1]) * v20) + v52.v[1]) - v18;
    worldVec.v[2] = (float)((float)((float)(endPos.v[2] - v52.v[2]) * v20) + v52.v[2]) - v19;
    if ( !DVARBOOL_ai_debugMotionWarp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugMotionWarp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      v30 = pEntTracker->expectedPos.v[0];
      v31 = pEntTracker->expectedPos.v[1];
      v32 = pEntTracker->entnum;
      v64 = v7;
      v63 = v8;
      v33 = g_entities[v32].r.currentOrigin.v[0];
      v34 = v33 + worldVec.v[0];
      v35 = (float)(v30 - v33) + pEntTracker->accumulatedTransError.v[0];
      v36 = pEntTracker->expectedPos.v[2];
      v54.v[0] = v33;
      v37 = g_entities[v32].r.currentOrigin.v[1];
      v38 = v37 + worldVec.v[1];
      v39 = (float)(v31 - v37) + pEntTracker->accumulatedTransError.v[1];
      v54.v[1] = v37;
      v40 = g_entities[v32].r.currentOrigin.v[2];
      v41 = v40 + worldVec.v[2];
      v42 = (float)(v36 - v40) + pEntTracker->accumulatedTransError.v[2];
      v54.v[2] = v40;
      G_DebugLineWithArrow(&pEntTracker->animPos, &endPos, &colorGreen, 100);
      G_DebugLineWithArrow(&pEntTracker->lastPos, &v54, &colorOrange, 100);
      G_DebugLineWithArrow(&pEntTracker->naivePos, &v52, &colorRed, 100);
      v43 = v54.v[1];
      pEntTracker->lastPos.v[0] = v54.v[0];
      pEntTracker->lastPos.v[2] = v54.v[2];
      pEntTracker->lastPos.v[1] = v43;
      pEntTracker->expectedPos.v[0] = v34;
      pEntTracker->expectedPos.v[1] = v38;
      pEntTracker->expectedPos.v[2] = v41;
      pEntTracker->accumulatedTransError.v[0] = v35;
      pEntTracker->accumulatedTransError.v[1] = v39;
      pEntTracker->accumulatedTransError.v[2] = v42;
    }
    QuatMultiply(&quat, &outRotationDeltaQuat, &v62);
    QuatToAngles(&v62, &angles);
    OrientVectorToLocalSpace(&worldVec, translationDeltaLocal, &angles);
    v44 = v52.v[1];
    *rotationDeltaQuat = outRotationDeltaQuat;
    pEntTracker->naivePos.v[0] = v52.v[0];
    v45 = v52.v[2];
    pEntTracker->naivePos.v[1] = v44;
    v46 = out;
    pEntTracker->naivePos.v[2] = v45;
    v47 = endPos.v[1];
    pEntTracker->naiveQuat = v46;
    pEntTracker->animPos.v[0] = endPos.v[0];
    v46.v[0] = endPos.v[2];
    pEntTracker->animPos.v[1] = v47;
    v48 = targetQuat;
    pEntTracker->animPos.v[2] = v46.v[0];
    pEntTracker->animQuat = v48;
    if ( ((LODWORD(translationDeltaLocal->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(translationDeltaLocal->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(translationDeltaLocal->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 345, ASSERT_TYPE_ASSERT, "(!IS_NAN( translationDeltaLocal[0] ) && !IS_NAN( translationDeltaLocal[1] ) && !IS_NAN( translationDeltaLocal[2] ))", "%s\n\tNAN translationDelta out!", "!IS_NAN( translationDeltaLocal[0] ) && !IS_NAN( translationDeltaLocal[1] ) && !IS_NAN( translationDeltaLocal[2] )") )
      __debugbreak();
    if ( (LODWORD(rotationDeltaQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotationDeltaQuat->v[1]) & 0x7F800000) == 2139095040 )
      goto LABEL_93;
    v49 = 0.0;
    if ( rotationDeltaQuat->v[2] != 0.0 && (LODWORD(rotationDeltaQuat->v[3]) & 0x7F800000) != 2139095040 )
      v49 = FLOAT_1_0;
    if ( (LODWORD(v49) & 0x7F800000) == 2139095040 )
    {
LABEL_93:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_motionwarp.cpp", 346, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotationDeltaQuat[0] ) && !IS_NAN( rotationDeltaQuat[1] ) && !IS_NAN( rotationDeltaQuat[2] && !IS_NAN( rotationDeltaQuat[3] ) ))", "%s\n\tNAN rotationDeltaQuat out!", "!IS_NAN( rotationDeltaQuat[0] ) && !IS_NAN( rotationDeltaQuat[1] ) && !IS_NAN( rotationDeltaQuat[2] && !IS_NAN( rotationDeltaQuat[3] ) )") )
        __debugbreak();
    }
    return 1i64;
  }
  else
  {
    MotionWarp_Cancel(pEntTracker);
    return 2i64;
  }
}

