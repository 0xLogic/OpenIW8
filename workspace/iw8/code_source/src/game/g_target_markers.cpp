/*
==============
ScrCmd_ShowTargetMarkerGroupToPlayersInMask
==============
*/

void __fastcall ScrCmd_ShowTargetMarkerGroupToPlayersInMask(scrContext_t *scrContext)
{
  ?ScrCmd_ShowTargetMarkerGroupToPlayersInMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_AddTeamToTargetMarkerGroupMask
==============
*/

void __fastcall ScrCmd_AddTeamToTargetMarkerGroupMask(scrContext_t *scrContext)
{
  ?ScrCmd_AddTeamToTargetMarkerGroupMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_AddClientToTargetMarkerGroupMask
==============
*/

void __fastcall ScrCmd_AddClientToTargetMarkerGroupMask(scrContext_t *scrContext)
{
  ?ScrCmd_AddClientToTargetMarkerGroupMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_TargetMarkerGroups_Load
==============
*/

void __fastcall G_TargetMarkerGroups_Load(MemoryFile *memFile)
{
  ?G_TargetMarkerGroups_Load@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
ScrCmd_TargetMarkerGroupSetExtraState
==============
*/

void __fastcall ScrCmd_TargetMarkerGroupSetExtraState(scrContext_t *scrContext)
{
  ?ScrCmd_TargetMarkerGroupSetExtraState@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_TargetMarkerGroupRemoveEntity
==============
*/

void __fastcall ScrCmd_TargetMarkerGroupRemoveEntity(scrContext_t *scrContext)
{
  ?ScrCmd_TargetMarkerGroupRemoveEntity@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_RemoveClientFromTargetMarkerGroupMask
==============
*/

void __fastcall ScrCmd_RemoveClientFromTargetMarkerGroupMask(scrContext_t *scrContext)
{
  ?ScrCmd_RemoveClientFromTargetMarkerGroupMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_RemoveTeamFromTargetMarkerGroupMask
==============
*/

void __fastcall ScrCmd_RemoveTeamFromTargetMarkerGroupMask(scrContext_t *scrContext)
{
  ?ScrCmd_RemoveTeamFromTargetMarkerGroupMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_CreateTargetMarkerGroup
==============
*/

void __fastcall ScrCmd_CreateTargetMarkerGroup(scrContext_t *scrContext)
{
  ?ScrCmd_CreateTargetMarkerGroup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_HideTargetMarkerGroupFromPlayersInMask
==============
*/

void __fastcall ScrCmd_HideTargetMarkerGroupFromPlayersInMask(scrContext_t *scrContext)
{
  ?ScrCmd_HideTargetMarkerGroupFromPlayersInMask@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_TargetMarkerGroups_Update
==============
*/

void __fastcall G_TargetMarkerGroups_Update(gentity_s *player)
{
  ?G_TargetMarkerGroups_Update@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
ScrCmd_TargetMarkerGroupAddEntity
==============
*/

void __fastcall ScrCmd_TargetMarkerGroupAddEntity(scrContext_t *scrContext)
{
  ?ScrCmd_TargetMarkerGroupAddEntity@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_TargetMarkerGroups_Save
==============
*/

void __fastcall G_TargetMarkerGroups_Save(MemoryFile *memFile)
{
  ?G_TargetMarkerGroups_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
ScrCmd_DeleteTargetMarkerGroup
==============
*/

void __fastcall ScrCmd_DeleteTargetMarkerGroup(scrContext_t *scrContext)
{
  ?ScrCmd_DeleteTargetMarkerGroup@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScrCmd_TargetMarkerGroupSetEntityState
==============
*/

void __fastcall ScrCmd_TargetMarkerGroupSetEntityState(scrContext_t *scrContext)
{
  ?ScrCmd_TargetMarkerGroupSetEntityState@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_TargetMarkerGroups_Get
==============
*/
TargetMarkerGroup *G_TargetMarkerGroups_Get(scrContext_t *scrContext, const int markerGroupIndex)
{
  __int64 v2; 
  TargetMarkerGroup *v4; 

  v2 = markerGroupIndex;
  if ( (unsigned int)markerGroupIndex >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( markerGroupIndex ) < (unsigned)( 50 )", "markerGroupIndex doesn't index MAX_TARGET_MARKER_GROUPS\n\t%i not in [0, %i)", markerGroupIndex, 50) )
    __debugbreak();
  v4 = &level.targetMarkerGroups[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 21, ASSERT_TYPE_ASSERT, "(targetMarkerGroup)", (const char *)&queryFormat, "targetMarkerGroup") )
    __debugbreak();
  if ( (v4->flags & 1) == 0 )
    Scr_Error(COM_ERR_5217, scrContext, "Attempted to access an invalid target marker group slot.\n");
  return v4;
}

/*
==============
G_TargetMarkerGroups_Load
==============
*/
void G_TargetMarkerGroups_Load(MemoryFile *memFile)
{
  MemoryFile *v1; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v3; 
  ntl::red_black_tree_node_base *v4; 
  ntl::red_black_tree_node_base **p_mp_right; 
  ntl::red_black_tree_node_base **v6; 
  int v7; 
  int v8; 
  bool v9; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v11; 
  __int16 v12; 
  bool v13; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v16; 
  int v17; 
  int v18; 
  bool v19; 
  ntl::red_black_tree_node_base *v20; 
  __int16 v21; 
  bool v22; 
  ntl::red_black_tree_node_base *v23; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v26; 
  __int64 hintInsertLessElement; 
  __int64 v28; 
  __int16 v29[2]; 
  ntl::pair<short,bool> r_element; 
  ntl::pair<short,bool> v31; 
  int v32; 
  int p; 
  int v34; 
  ntl::red_black_tree_iterator<short,ntl::red_black_tree_node<ntl::pair<short,bool> >,ntl::pair<short,bool> *,ntl::pair<short,bool> &> v35; 
  ntl::red_black_tree_iterator<short,ntl::red_black_tree_node<ntl::pair<short,bool> >,ntl::pair<short,bool> *,ntl::pair<short,bool> &> result; 
  ntl::red_black_tree_iterator<short,ntl::red_black_tree_node<ntl::pair<short,bool> >,ntl::pair<short,bool> *,ntl::pair<short,bool> &> v37; 
  ntl::red_black_tree_iterator<short,ntl::red_black_tree_node<ntl::pair<short,bool> >,ntl::pair<short,bool> *,ntl::pair<short,bool> &> v38; 
  bool v40; 
  bool v41; 
  __int16 v42; 

  v1 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 165, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  memset_0(level.targetMarkerGroups, 0, sizeof(level.targetMarkerGroups));
  p_m_endNodeBase = &level.targetMarkerGroups[0].extraState.m_endNodeBase;
  do
  {
    v3 = p_m_endNodeBase - 27;
    v4 = p_m_endNodeBase - 27;
    do
    {
      v4 = (ntl::red_black_tree_node_base *)((char *)v4 - 40);
      *(_QWORD *)&v4->m_color = v3;
      v3 = v4;
    }
    while ( v4 > &p_m_endNodeBase[-52] );
    *(_QWORD *)&p_m_endNodeBase[-27].m_color = v4;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    p_m_endNodeBase[-26].mp_parent = NULL;
    LODWORD(p_m_endNodeBase[-27].mp_parent) = 0;
    p_mp_right = &p_m_endNodeBase[-1].mp_right;
    p_m_endNodeBase[-27].mp_right = (ntl::red_black_tree_node_base *)((char *)p_m_endNodeBase - 856);
    v6 = &p_m_endNodeBase[-1].mp_right;
    *(_QWORD *)&p_m_endNodeBase[-26].m_color = (char *)p_m_endNodeBase - 856;
    p_m_endNodeBase[-27].mp_left = NULL;
    do
    {
      v6 -= 5;
      *v6 = (ntl::red_black_tree_node_base *)p_mp_right;
      p_mp_right = v6;
    }
    while ( v6 > &p_m_endNodeBase[-26].mp_right );
    p_m_endNodeBase[-1].mp_right = (ntl::red_black_tree_node_base *)v6;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    *(_QWORD *)&p_m_endNodeBase[1].m_color = 0i64;
    p_m_endNodeBase->m_color = RB_NODE_COLOR_RED;
    p_m_endNodeBase->mp_parent = NULL;
    p_m_endNodeBase->mp_left = p_m_endNodeBase;
    p_m_endNodeBase->mp_right = p_m_endNodeBase;
    v32 = 20;
    MemFile_ReadData(v1, 4ui64, &p);
    v7 = 20;
    v8 = 0;
    if ( p < 20 )
      v7 = p;
    if ( v7 > 0 )
    {
      v9 = v7 != 0;
      while ( 1 )
      {
        if ( !v9 )
        {
          LODWORD(v28) = v7;
          LODWORD(hintInsertLessElement) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( entityStateNodeCount )", "i doesn't index entityStateNodeCount\n\t%i not in [0, %i)", hintInsertLessElement, v28) )
            __debugbreak();
        }
        MemFile_ReadData(v1, 2ui64, &v42);
        MemFile_ReadData(v1, 1ui64, &v40);
        mp_left = p_m_endNodeBase[-27].mp_left;
        v11 = (ntl::red_black_tree_node_base *)((char *)p_m_endNodeBase - 856);
        v12 = v42;
        v13 = 1;
        r_element.first = v42;
        r_element.second = v40;
        while ( mp_left )
        {
          v11 = mp_left;
          v13 = v42 < SLOWORD(mp_left[1].m_color);
          if ( v42 >= SLOWORD(mp_left[1].m_color) )
            mp_left = mp_left->mp_right;
          else
            mp_left = mp_left->mp_left;
        }
        mp_parent = v11;
        if ( !v13 )
          goto LABEL_42;
        if ( v11 != p_m_endNodeBase[-27].mp_right )
          break;
        ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node((ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool> >,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short> > *)&p_m_endNodeBase[-52], &v35, v11, &r_element, 1, 0);
LABEL_47:
        v1 = memFile;
        v9 = ++v8 < (unsigned int)v7;
        if ( v8 >= v7 )
          goto LABEL_48;
      }
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( v11->m_color || v11->mp_parent->mp_parent != v11 )
      {
        mp_parent = v11->mp_left;
        if ( mp_parent )
        {
          for ( i = mp_parent->mp_right; i; i = i->mp_right )
            mp_parent = i;
        }
        else
        {
          mp_parent = v11->mp_parent;
          if ( v11 == mp_parent->mp_left )
          {
            do
            {
              v16 = mp_parent;
              mp_parent = mp_parent->mp_parent;
            }
            while ( v16 == mp_parent->mp_left );
          }
        }
      }
      else
      {
        mp_parent = v11->mp_right;
      }
LABEL_42:
      if ( !mp_parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( SLOWORD(mp_parent[1].m_color) < v12 )
        ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node((ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool> >,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short> > *)&p_m_endNodeBase[-52], &result, v11, &r_element, 0, 0);
      goto LABEL_47;
    }
LABEL_48:
    v32 = 20;
    MemFile_ReadData(v1, 4ui64, &v34);
    v17 = 20;
    v18 = 0;
    if ( v34 < 20 )
      v17 = v34;
    if ( v17 > 0 )
    {
      v19 = v17 != 0;
      while ( 1 )
      {
        if ( !v19 )
        {
          LODWORD(v28) = v17;
          LODWORD(hintInsertLessElement) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 185, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( extraStateNodeCount )", "i doesn't index extraStateNodeCount\n\t%i not in [0, %i)", hintInsertLessElement, v28) )
            __debugbreak();
        }
        MemFile_ReadData(v1, 2ui64, v29);
        MemFile_ReadData(v1, 1ui64, &v41);
        v20 = p_m_endNodeBase;
        v21 = v29[0];
        v22 = 1;
        v31.second = v41;
        v23 = p_m_endNodeBase->mp_parent;
        v31.first = v29[0];
        while ( v23 )
        {
          v20 = v23;
          v22 = v29[0] < SLOWORD(v23[1].m_color);
          if ( v29[0] >= SLOWORD(v23[1].m_color) )
            v23 = v23->mp_right;
          else
            v23 = v23->mp_left;
        }
        mp_right = v20;
        if ( !v22 )
          goto LABEL_75;
        if ( v20 != p_m_endNodeBase->mp_left )
          break;
        ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node((ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool> >,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short> > *)&p_m_endNodeBase[-26].mp_right, &v37, v20, &v31, 1, 0);
LABEL_80:
        v1 = memFile;
        v19 = ++v18 < (unsigned int)v17;
        if ( v18 >= v17 )
          goto LABEL_81;
      }
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( v20->m_color || v20->mp_parent->mp_parent != v20 )
      {
        mp_right = v20->mp_left;
        if ( mp_right )
        {
          for ( j = mp_right->mp_right; j; j = j->mp_right )
            mp_right = j;
        }
        else
        {
          mp_right = v20->mp_parent;
          if ( v20 == mp_right->mp_left )
          {
            do
            {
              v26 = mp_right;
              mp_right = mp_right->mp_parent;
            }
            while ( v26 == mp_right->mp_left );
          }
        }
      }
      else
      {
        mp_right = v20->mp_right;
      }
LABEL_75:
      if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( SLOWORD(mp_right[1].m_color) < v21 )
        ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node((ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool> >,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short> > *)&p_m_endNodeBase[-26].mp_right, &v38, v20, &v31, 0, 0);
      goto LABEL_80;
    }
LABEL_81:
    MemFile_ReadData(v1, 4ui64, &p_m_endNodeBase[1].mp_left);
    MemFile_ReadData(v1, 4ui64, (char *)&p_m_endNodeBase[1].mp_left + 4);
    MemFile_ReadData(v1, 0x24ui64, &p_m_endNodeBase[1].mp_right);
    p_m_endNodeBase += 55;
  }
  while ( (__int64)p_m_endNodeBase < (__int64)&level.calloutMarkerPings[27].entNum );
}

/*
==============
G_TargetMarkerGroups_Save
==============
*/
void G_TargetMarkerGroups_Save(MemoryFile *memFile)
{
  int v2; 
  ntl::red_black_tree_node_base **p_mp_left; 
  bool v4; 
  __int64 v5; 
  ntl::red_black_tree_node_base *next; 
  __int64 v7; 
  ntl::red_black_tree_node_base *v8; 
  __int64 v9; 
  __int64 v10; 
  int p; 
  int v12; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 126, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  p_mp_left = &level.targetMarkerGroups[0].entityState.m_endNodeBase.mp_left;
  v12 = 0;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v10) = 50;
      LODWORD(v9) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( markerGroupIndex ) < (unsigned)( 50 )", "markerGroupIndex doesn't index MAX_TARGET_MARKER_GROUPS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v5 = *((unsigned int *)p_mp_left + 4);
    if ( (int)v5 > 20 )
    {
      LODWORD(v9) = *((_DWORD *)p_mp_left + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 133, ASSERT_TYPE_ASSERT, "( ( entityStateNodeCount <= 20 ) )", "( entityStateNodeCount ) = %i", v9) )
        __debugbreak();
    }
    p = v5;
    MemFile_WriteData(memFile, 4ui64, &p);
    next = *p_mp_left;
    if ( (int)v5 > 0 )
    {
      do
      {
        if ( next == (ntl::red_black_tree_node_base *)(p_mp_left - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 138, ASSERT_TYPE_ASSERT, "(it != markerGroup->entityState.end())", (const char *)&queryFormat, "it != markerGroup->entityState.end()") )
          __debugbreak();
        if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        LOWORD(p) = next[1].m_color;
        MemFile_WriteData(memFile, 2ui64, &p);
        LOBYTE(p) = BYTE2(next[1].m_color);
        MemFile_WriteData(memFile, 1ui64, &p);
        next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
        --v5;
      }
      while ( v5 );
      v2 = v12;
    }
    v7 = *((unsigned int *)p_mp_left + 218);
    if ( (int)v7 > 20 )
    {
      LODWORD(v9) = *((_DWORD *)p_mp_left + 218);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 145, ASSERT_TYPE_ASSERT, "( ( extraStateNodeCount <= 20 ) )", "( extraStateNodeCount ) = %i", v9) )
        __debugbreak();
    }
    p = v7;
    MemFile_WriteData(memFile, 4ui64, &p);
    v8 = p_mp_left[107];
    if ( (int)v7 > 0 )
    {
      do
      {
        if ( v8 == (ntl::red_black_tree_node_base *)(p_mp_left + 105) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 150, ASSERT_TYPE_ASSERT, "(it != markerGroup->extraState.end())", (const char *)&queryFormat, "it != markerGroup->extraState.end()") )
          __debugbreak();
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        LOWORD(p) = v8[1].m_color;
        MemFile_WriteData(memFile, 2ui64, &p);
        LOBYTE(p) = BYTE2(v8[1].m_color);
        MemFile_WriteData(memFile, 1ui64, &p);
        v8 = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(v8);
        --v7;
      }
      while ( v7 );
      v2 = v12;
    }
    MemFile_WriteData(memFile, 4ui64, p_mp_left + 111);
    MemFile_WriteData(memFile, 4ui64, (char *)p_mp_left + 892);
    MemFile_WriteData(memFile, 0x24ui64, p_mp_left + 112);
    ++v2;
    p_mp_left += 220;
    v12 = v2;
    v4 = (unsigned int)v2 < 0x32;
  }
  while ( v2 < 50 );
}

/*
==============
G_TargetMarkerGroups_Update
==============
*/
void G_TargetMarkerGroups_Update(gentity_s *player)
{
  const playerState_s *v2; 
  TargetMarkerGroupView *targetMarkerGroups; 
  __int64 v4; 
  __int16 *v5; 
  TargetMarkerGroupFlags *p_flags; 
  bool v7; 
  ntl::red_black_tree_node_base *next; 
  unsigned int v9; 
  bool *extraStates; 
  TargetMarkerGroupView *v11; 
  signed __int16 m_color; 
  TargetMarkerGroupFlags *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int16 *v18; 
  TargetMarkerGroupView *v19; 
  playerState_s *EntityPlayerState; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 28, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(player);
  v2 = EntityPlayerState;
  targetMarkerGroups = EntityPlayerState->targetMarkerGroups;
  v19 = EntityPlayerState->targetMarkerGroups;
  memset_0(EntityPlayerState->targetMarkerGroups, 0, sizeof(EntityPlayerState->targetMarkerGroups));
  v4 = 0i64;
  v5 = &EntityPlayerState->targetMarkerGroups[0].entityNumbers[1];
  v17 = 0i64;
  p_flags = &level.targetMarkerGroups[0].flags;
  v18 = &EntityPlayerState->targetMarkerGroups[0].entityNumbers[1];
  while ( 1 )
  {
    if ( p_flags == (TargetMarkerGroupFlags *)1716 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 21, ASSERT_TYPE_ASSERT, "(targetMarkerGroup)", (const char *)&queryFormat, "targetMarkerGroup") )
      __debugbreak();
    v7 = (*(_BYTE *)p_flags & 1) != 0 && G_PlayerMask_IsPlayerInMask((const PlayerMask *)(p_flags + 1), v2, NULL);
    if ( v4 < 2 )
    {
      *(_DWORD *)(v5 - 1) = 134154239;
      *(_DWORD *)(v5 + 1) = 134154239;
      *(_DWORD *)(v5 + 3) = 134154239;
      *(_DWORD *)(v5 + 5) = 134154239;
      *(_DWORD *)(v5 + 7) = 134154239;
      *(_DWORD *)(v5 + 9) = 134154239;
      *(_DWORD *)(v5 + 11) = 134154239;
      *(_DWORD *)(v5 + 13) = 134154239;
      *(_DWORD *)(v5 + 15) = 134154239;
      *(_DWORD *)(v5 + 17) = 134154239;
    }
    if ( !v7 )
      goto LABEL_41;
    if ( v4 >= 2 )
      break;
    next = *(ntl::red_black_tree_node_base **)(p_flags - 223);
    v9 = 0;
    if ( next != (ntl::red_black_tree_node_base *)(p_flags - 227) )
    {
      extraStates = targetMarkerGroups->extraStates;
      v11 = targetMarkerGroups;
      do
      {
        if ( v9 >= 0x14 )
        {
          LODWORD(v16) = 20;
          LODWORD(v15) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( 20 )", "entityIndex doesn't index MAX_ENTITIES_PER_MARKER_GROUP\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        m_color = next[1].m_color;
        if ( (unsigned __int16)m_color >= 0x800u )
        {
          LODWORD(v16) = 2048;
          LODWORD(v15) = m_color;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v11->entityNumbers[0] = m_color;
        v13 = p_flags - 13;
        *(extraStates - 20) = BYTE2(next[1].m_color);
        v14 = *(_QWORD *)(p_flags - 11);
        while ( v14 )
        {
          if ( *(__int16 *)(v14 + 32) < m_color )
          {
            v14 = *(_QWORD *)(v14 + 24);
          }
          else
          {
            v13 = (TargetMarkerGroupFlags *)v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
        }
        if ( v13 != p_flags - 13 && m_color < *((__int16 *)v13 + 16) )
          v13 = p_flags - 13;
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        *extraStates = *((_BYTE *)v13 + 34);
        ++v9;
        ++extraStates;
        v11 = (TargetMarkerGroupView *)((char *)v11 + 2);
        next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
      }
      while ( next != (ntl::red_black_tree_node_base *)(p_flags - 227) );
      targetMarkerGroups = v19;
      v4 = v17;
    }
    ++v4;
    v2 = EntityPlayerState;
    v5 = v18 + 44;
    targetMarkerGroups->widgetName = *(p_flags - 1);
    targetMarkerGroups->flags = *p_flags;
    v19 = ++targetMarkerGroups;
    v17 = v4;
    v18 += 44;
LABEL_41:
    p_flags += 440;
    if ( (__int64)p_flags >= (__int64)&level.calloutMarkerPings[28].clientMask.array[6] )
      return;
  }
  Com_PrintWarning(13, "Too many target marker groups on client %d. A maximum of %d per client are supported. Talk to UI Engineering for an increase in limits.\n", (unsigned int)v2->clientNum, 2i64);
}

/*
==============
ScrCmd_AddClientToTargetMarkerGroupMask
==============
*/
void ScrCmd_AddClientToTargetMarkerGroupMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 
  gentity_s *Entity; 
  gentity_s *v5; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  Entity = GScr_GetEntity(1u);
  v5 = Entity;
  if ( !Entity->client && !Entity->agent )
    Scr_Error(COM_ERR_5220, scrContext, "Entity must be a player or a bot.");
  G_PlayerMask_AddClient(&v3->visData, v5->s.clientNum);
}

/*
==============
ScrCmd_AddTeamToTargetMarkerGroupMask
==============
*/
void ScrCmd_AddTeamToTargetMarkerGroupMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 
  scr_string_t ConstString; 
  const char *v5; 
  const char *v6; 
  team_t outTeam; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  ConstString = Scr_GetConstString(scrContext, 1u);
  if ( Com_Teams_TeamFromString(ConstString, &outTeam) )
  {
    G_PlayerMask_AddTeam(&v3->visData, outTeam);
  }
  else
  {
    v5 = SL_ConvertToString(ConstString);
    v6 = j_va("unknown team '%s'", v5);
    Scr_Error(COM_ERR_5221, scrContext, v6);
  }
}

/*
==============
ScrCmd_CreateTargetMarkerGroup
==============
*/
void ScrCmd_CreateTargetMarkerGroup(scrContext_t *scrContext)
{
  TargetMarkerGroup *targetMarkerGroups; 
  int v3; 
  const char *String; 
  TargetMarkerGroup *v5; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<40> *v7; 
  ntl::internal::pool_allocator_freelist<40> *v8; 
  ntl::internal::pool_allocator_freelist<40> *v9; 
  const char *v10; 
  unsigned int outIndex; 

  targetMarkerGroups = level.targetMarkerGroups;
  v3 = 0;
  String = Scr_GetString(scrContext, 0);
  while ( 1 )
  {
    if ( !targetMarkerGroups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_target_markers.cpp", 21, ASSERT_TYPE_ASSERT, "(targetMarkerGroup)", (const char *)&queryFormat, "targetMarkerGroup") )
      __debugbreak();
    if ( (targetMarkerGroups->flags & 1) == 0 )
      break;
    ++v3;
    if ( (__int64)++targetMarkerGroups >= (__int64)level.calloutMarkerPings )
    {
      Scr_Error(COM_ERR_5216, scrContext, "Too many target marker groups are in use.\n");
      v3 = -1;
      goto LABEL_9;
    }
  }
  targetMarkerGroups->flags |= 1u;
LABEL_9:
  v5 = G_TargetMarkerGroups_Get(scrContext, v3);
  *(_QWORD *)v5->entityState.m_data.m_buffer = 0i64;
  p_m_freelist = &v5->entityState.m_freelist;
  v7 = &v5->entityState.m_freelist;
  do
  {
    p_m_freelist -= 5;
    p_m_freelist->m_head.mp_next = &v7->m_head;
    v7 = p_m_freelist;
  }
  while ( p_m_freelist > (ntl::internal::pool_allocator_freelist<40> *)v5 );
  v5->entityState.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v5->entityState.m_size = 0i64;
  v5->entityState.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v5->entityState.m_endNodeBase.mp_left = &v5->entityState.m_endNodeBase;
  v8 = &v5->extraState.m_freelist;
  v5->entityState.m_endNodeBase.mp_right = &v5->entityState.m_endNodeBase;
  v9 = &v5->extraState.m_freelist;
  v5->entityState.m_endNodeBase.mp_parent = NULL;
  do
  {
    v9 -= 5;
    v9->m_head.mp_next = &v8->m_head;
    v8 = v9;
  }
  while ( v9 > (ntl::internal::pool_allocator_freelist<40> *)&v5->extraState );
  v5->extraState.m_freelist.m_head.mp_next = &v9->m_head;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v5->extraState.m_size = 0i64;
  v5->extraState.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v5->extraState.m_endNodeBase.mp_left = &v5->extraState.m_endNodeBase;
  v5->extraState.m_endNodeBase.mp_right = &v5->extraState.m_endNodeBase;
  v5->extraState.m_endNodeBase.mp_parent = NULL;
  if ( !NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_LUI, String, &outIndex) )
  {
    v10 = j_va("'%s' is not a valid target marker widget. Please make sure it is included in the correct ncsluistrings.txt file.", String);
    Scr_Error(COM_ERR_5218, scrContext, v10);
  }
  v5->widgetName = outIndex;
  Scr_AddInt(scrContext, v3);
}

/*
==============
ScrCmd_DeleteTargetMarkerGroup
==============
*/
void ScrCmd_DeleteTargetMarkerGroup(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  memset_0(v3, 0, sizeof(TargetMarkerGroup));
}

/*
==============
ScrCmd_HideTargetMarkerGroupFromPlayersInMask
==============
*/
void ScrCmd_HideTargetMarkerGroupFromPlayersInMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  G_PlayerMask_SetInverted(&v3->visData, 1);
}

/*
==============
ScrCmd_RemoveClientFromTargetMarkerGroupMask
==============
*/
void ScrCmd_RemoveClientFromTargetMarkerGroupMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 
  gentity_s *Entity; 
  gentity_s *v5; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  Entity = GScr_GetEntity(1u);
  v5 = Entity;
  if ( !Entity->client && !Entity->agent )
    Scr_Error(COM_ERR_5222, scrContext, "Entity must be a player or a bot.");
  G_PlayerMask_RemoveClient(&v3->visData, v5->s.clientNum);
}

/*
==============
ScrCmd_RemoveTeamFromTargetMarkerGroupMask
==============
*/
void ScrCmd_RemoveTeamFromTargetMarkerGroupMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 
  scr_string_t ConstString; 
  const char *v5; 
  const char *v6; 
  team_t outTeam; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  ConstString = Scr_GetConstString(scrContext, 1u);
  if ( Com_Teams_TeamFromString(ConstString, &outTeam) )
  {
    G_PlayerMask_RemoveTeam(&v3->visData, outTeam);
  }
  else
  {
    v5 = SL_ConvertToString(ConstString);
    v6 = j_va("unknown team '%s'", v5);
    Scr_Error(COM_ERR_5223, scrContext, v6);
  }
}

/*
==============
ScrCmd_ShowTargetMarkerGroupToPlayersInMask
==============
*/
void ScrCmd_ShowTargetMarkerGroupToPlayersInMask(scrContext_t *scrContext)
{
  int Int; 
  TargetMarkerGroup *v3; 

  Int = Scr_GetInt(scrContext, 0);
  v3 = G_TargetMarkerGroups_Get(scrContext, Int);
  G_PlayerMask_SetInverted(&v3->visData, 0);
}

/*
==============
ScrCmd_TargetMarkerGroupAddEntity
==============
*/
void ScrCmd_TargetMarkerGroupAddEntity(scrContext_t *scrContext)
{
  int Int; 
  gentity_s *Entity; 
  TargetMarkerGroup *v4; 
  ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool> >,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short> > *p_entityState; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v8; 
  __int16 number; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base *v13; 
  ntl::red_black_tree_node_base *v14; 
  __int16 v15; 
  bool v16; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v19; 
  ntl::pair<short,bool> r_element; 
  ntl::red_black_tree_iterator<short,ntl::red_black_tree_node<ntl::pair<short,bool> >,ntl::pair<short,bool> *,ntl::pair<short,bool> &> result; 

  Int = Scr_GetInt(scrContext, 0);
  Entity = GScr_GetEntity(1u);
  v4 = G_TargetMarkerGroups_Get(scrContext, Int);
  p_entityState = &v4->entityState;
  if ( v4->entityState.m_size == 20 )
  {
    Scr_Error(COM_ERR_5219, scrContext, "Too many entities in this target marker group.\n");
    return;
  }
  mp_parent = v4->entityState.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v4->entityState.m_endNodeBase;
  v8 = 1;
  number = Entity->s.number;
  r_element.first = Entity->s.number;
  r_element.second = 0;
  while ( mp_parent )
  {
    p_m_endNodeBase = mp_parent;
    v8 = number < SLOWORD(mp_parent[1].m_color);
    if ( number >= SLOWORD(mp_parent[1].m_color) )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( v8 )
  {
    if ( p_m_endNodeBase == v4->entityState.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node(&v4->entityState, &result, p_m_endNodeBase, &r_element, 1, 0);
      goto LABEL_28;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v12 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v12 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
  }
  if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( SLOWORD(mp_left[1].m_color) < number )
    ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node(p_entityState, &result, p_m_endNodeBase, &r_element, 0, 0);
LABEL_28:
  v13 = p_entityState[1].m_endNodeBase.mp_parent;
  v14 = &p_entityState[1].m_endNodeBase;
  v15 = Entity->s.number;
  v16 = 1;
  r_element.first = Entity->s.number;
  r_element.second = 0;
  while ( v13 )
  {
    v14 = v13;
    v16 = v15 < SLOWORD(v13[1].m_color);
    if ( v15 >= SLOWORD(v13[1].m_color) )
      v13 = v13->mp_right;
    else
      v13 = v13->mp_left;
  }
  mp_right = v14;
  if ( v16 )
  {
    if ( v14 == p_entityState[1].m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node(p_entityState + 1, &result, v14, &r_element, 1, 0);
      return;
    }
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( v14->m_color || v14->mp_parent->mp_parent != v14 )
    {
      mp_right = v14->mp_left;
      if ( mp_right )
      {
        for ( j = mp_right->mp_right; j; j = j->mp_right )
          mp_right = j;
      }
      else
      {
        mp_right = v14->mp_parent;
        if ( v14 == mp_right->mp_left )
        {
          do
          {
            v19 = mp_right;
            mp_right = mp_right->mp_parent;
          }
          while ( v19 == mp_right->mp_left );
        }
      }
    }
    else
    {
      mp_right = v14->mp_right;
    }
  }
  if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( SLOWORD(mp_right[1].m_color) < v15 )
    ntl::red_black_tree<short,ntl::pair<short,bool>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<short,bool>>,20,8>,ntl::return_pair_first<short,bool>,ntl::less<short,short>>::insert_node(p_entityState + 1, &result, v14, &r_element, 0, 0);
}

/*
==============
ScrCmd_TargetMarkerGroupRemoveEntity
==============
*/
void ScrCmd_TargetMarkerGroupRemoveEntity(scrContext_t *scrContext)
{
  int Int; 
  gentity_s *Entity; 
  TargetMarkerGroup *v4; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v7; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base *v9; 
  ntl::red_black_tree_node_base *v10; 

  Int = Scr_GetInt(scrContext, 0);
  Entity = GScr_GetEntity(1u);
  v4 = G_TargetMarkerGroups_Get(scrContext, Int);
  mp_parent = v4->entityState.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v4->entityState.m_endNodeBase;
  v7 = &v4->entityState.m_endNodeBase;
  while ( mp_parent )
  {
    if ( SLOWORD(mp_parent[1].m_color) < Entity->s.number )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      v7 = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( v7 != p_m_endNodeBase && Entity->s.number >= SLOWORD(v7[1].m_color) )
  {
    if ( !v4->entityState.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    ntl::red_black_tree_node_base::get_next(v7);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v7 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
      __debugbreak();
    ntl::red_black_tree_node_base::rebalance_for_erase(v7, &v4->entityState.m_endNodeBase.mp_parent, &v4->entityState.m_endNodeBase.mp_left, &v4->entityState.m_endNodeBase.mp_right);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    *(_QWORD *)&v7->m_color = v4->entityState.m_freelist.m_head.mp_next;
    v4->entityState.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v7;
    --v4->entityState.m_size;
  }
  v8 = v4->extraState.m_endNodeBase.mp_parent;
  v9 = &v4->extraState.m_endNodeBase;
  v10 = &v4->extraState.m_endNodeBase;
  while ( v8 )
  {
    if ( SLOWORD(v8[1].m_color) < Entity->s.number )
    {
      v8 = v8->mp_right;
    }
    else
    {
      v10 = v8;
      v8 = v8->mp_left;
    }
  }
  if ( v10 != v9 && Entity->s.number >= SLOWORD(v10[1].m_color) )
  {
    if ( !v4->extraState.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    ntl::red_black_tree_node_base::get_next(v10);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v10 == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
      __debugbreak();
    ntl::red_black_tree_node_base::rebalance_for_erase(v10, &v4->extraState.m_endNodeBase.mp_parent, &v4->extraState.m_endNodeBase.mp_left, &v4->extraState.m_endNodeBase.mp_right);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    *(_QWORD *)&v10->m_color = v4->extraState.m_freelist.m_head.mp_next;
    v4->extraState.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v10;
    --v4->extraState.m_size;
  }
}

/*
==============
ScrCmd_TargetMarkerGroupSetEntityState
==============
*/
void ScrCmd_TargetMarkerGroupSetEntityState(scrContext_t *scrContext)
{
  int Int; 
  gentity_s *Entity; 
  bool v4; 
  TargetMarkerGroup *v5; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base *v9; 
  __int16 number; 
  ntl::red_black_tree_node_base *v11; 

  Int = Scr_GetInt(scrContext, 0);
  Entity = GScr_GetEntity(1u);
  v4 = Scr_GetInt(scrContext, 2u) != 0;
  v5 = G_TargetMarkerGroups_Get(scrContext, Int);
  mp_parent = v5->entityState.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v5->entityState.m_endNodeBase;
  v8 = &v5->entityState.m_endNodeBase;
  v9 = mp_parent;
  while ( v9 )
  {
    if ( SLOWORD(v9[1].m_color) < Entity->s.number )
    {
      v9 = v9->mp_right;
    }
    else
    {
      v8 = v9;
      v9 = v9->mp_left;
    }
  }
  if ( v8 != p_m_endNodeBase )
  {
    number = Entity->s.number;
    if ( Entity->s.number >= SLOWORD(v8[1].m_color) )
    {
      v11 = p_m_endNodeBase;
      if ( mp_parent )
      {
        do
        {
          if ( SLOWORD(mp_parent[1].m_color) < number )
          {
            mp_parent = mp_parent->mp_right;
          }
          else
          {
            v11 = mp_parent;
            mp_parent = mp_parent->mp_left;
          }
        }
        while ( mp_parent );
        if ( v11 != p_m_endNodeBase && number < SLOWORD(v11[1].m_color) )
          v11 = p_m_endNodeBase;
      }
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      BYTE2(v11[1].m_color) = v4;
    }
  }
}

/*
==============
ScrCmd_TargetMarkerGroupSetExtraState
==============
*/
void ScrCmd_TargetMarkerGroupSetExtraState(scrContext_t *scrContext)
{
  int Int; 
  gentity_s *Entity; 
  bool v4; 
  TargetMarkerGroup *v5; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base *v9; 
  ntl::red_black_tree_node_base *v10; 

  Int = Scr_GetInt(scrContext, 0);
  Entity = GScr_GetEntity(1u);
  v4 = Scr_GetInt(scrContext, 2u) != 0;
  v5 = G_TargetMarkerGroups_Get(scrContext, Int);
  mp_parent = v5->extraState.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &v5->extraState.m_endNodeBase;
  v8 = mp_parent;
  v9 = &v5->extraState.m_endNodeBase;
  while ( v8 )
  {
    if ( SLOWORD(v8[1].m_color) < Entity->s.number )
    {
      v8 = v8->mp_right;
    }
    else
    {
      v9 = v8;
      v8 = v8->mp_left;
    }
  }
  if ( v9 != p_m_endNodeBase )
  {
    if ( Entity->s.number < SLOWORD(v9[1].m_color) )
      v9 = &v5->extraState.m_endNodeBase;
    if ( v9 != p_m_endNodeBase )
    {
      v10 = &v5->extraState.m_endNodeBase;
      while ( mp_parent )
      {
        if ( SLOWORD(mp_parent[1].m_color) < Entity->s.number )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          v10 = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      if ( v10 != p_m_endNodeBase && Entity->s.number < SLOWORD(v10[1].m_color) )
        v10 = &v5->extraState.m_endNodeBase;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      BYTE2(v10[1].m_color) = v4;
    }
  }
}

