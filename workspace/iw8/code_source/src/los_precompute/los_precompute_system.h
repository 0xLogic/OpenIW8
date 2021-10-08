/*
==============
LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists
==============
*/

unsigned __int16 __fastcall LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(LOSPrecomputeSystem *this, unsigned __int16 *pathNodeIndexListA, unsigned int pathNodeListACount, unsigned __int16 *pathNodeIndexListB, unsigned int pathNodeListBCount)
{
  return ?GetMinimumValueBetweenNodeLists@LOSPrecomputeSystem@@QEAAGPEAGI0I@Z(this, pathNodeIndexListA, pathNodeListACount, pathNodeIndexListB, pathNodeListBCount);
}

/*
==============
LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists
==============
*/
unsigned __int16 LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(LOSPrecomputeSystem *this, unsigned __int16 *pathNodeIndexListA, unsigned int pathNodeListACount, unsigned __int16 *pathNodeIndexListB, unsigned int pathNodeListBCount)
{
  __int64 v5; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int16 *v12; 
  unsigned __int8 v13; 
  unsigned __int16 v14; 
  unsigned __int8 v15; 
  unsigned __int16 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int16 *v25; 

  v25 = pathNodeIndexListB;
  v5 = pathNodeListACount;
  if ( !this->m_timingData.m_initializedData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.h", 178, ASSERT_TYPE_ASSERT, "(m_timingData.m_initializedData)", (const char *)&queryFormat, "m_timingData.m_initializedData") )
      __debugbreak();
    pathNodeIndexListB = v25;
  }
  v8 = -1;
  v9 = -1;
  if ( (_DWORD)v5 )
  {
    v10 = pathNodeListBCount;
    v11 = v5;
    v23 = v5;
    do
    {
      if ( v10 )
      {
        v12 = pathNodeIndexListB;
        v24 = v10;
        do
        {
          v13 = v9;
          v14 = *v12;
          v15 = v8;
          v16 = *pathNodeIndexListA;
          if ( !this->m_timingData.m_initializedData && (unsigned int)(this->m_state - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.h", 130, ASSERT_TYPE_ASSERT, "(m_timingData.m_initializedData || (m_state == STATE_GENERATING_DATA_PASS_1) || (m_state == STATE_GENERATING_DATA_TESTING_DATA))", (const char *)&queryFormat, "m_timingData.m_initializedData || (m_state == STATE_GENERATING_DATA_PASS_1) || (m_state == STATE_GENERATING_DATA_TESTING_DATA)") )
            __debugbreak();
          v17 = v16;
          v18 = v14;
          if ( v16 >= v14 )
            v17 = v14;
          if ( v16 >= v14 )
            v18 = v16;
          v19 = v17 * (unsigned int)this->m_timingData.m_nodeCount + v18 - v17 * (v17 + 1) / 2;
          if ( (unsigned int)(2 * v19) >= this->m_timingData.m_allocatedNodesStorageSizeInBytes )
          {
            LODWORD(v22) = this->m_timingData.m_allocatedNodesStorageSizeInBytes;
            LODWORD(v21) = 2 * v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\los_precompute\\los_precompute_system.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( ( linearIndex * (2) ) ) < (unsigned)( m_timingData.m_allocatedNodesStorageSizeInBytes )", "( linearIndex * LOS_SIZEOF_BYTES_NEEDED_FOR_DATA_TIMING_ITEM ) doesn't index m_timingData.m_allocatedNodesStorageSizeInBytes\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v8 = HIBYTE(this->m_timingData.m_pathTimingStorage[v19]);
          v9 = this->m_timingData.m_pathTimingStorage[v19];
          if ( v15 <= v8 )
            v8 = v15;
          if ( v13 <= v9 )
            v9 = v13;
          ++v12;
          --v24;
        }
        while ( v24 );
        v11 = v23;
        v10 = pathNodeListBCount;
      }
      pathNodeIndexListB = v25;
      ++pathNodeIndexListA;
      v23 = --v11;
    }
    while ( v11 );
  }
  return (v8 << 8) | v9;
}

