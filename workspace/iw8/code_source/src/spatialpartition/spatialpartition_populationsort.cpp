/*
==============
SpatialPartition_PopulationSort_PostLoad
==============
*/

void __fastcall SpatialPartition_PopulationSort_PostLoad(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks)
{
  ?SpatialPartition_PopulationSort_PostLoad@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@@Z(clientData, callbacks);
}

/*
==============
SpatialPartition_PopulationSort_UpdateNeeded
==============
*/

bool __fastcall SpatialPartition_PopulationSort_UpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  return ?SpatialPartition_PopulationSort_UpdateNeeded@@YA_NPEAUSpatialPartition_PopulationSort_ClientData@@@Z(clientData);
}

/*
==============
SpatialPartition_PopulationSort_SortByDistance
==============
*/

void __fastcall SpatialPartition_PopulationSort_SortByDistance(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos)
{
  ?SpatialPartition_PopulationSort_SortByDistance@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBTvec3_t@@@Z(clientData, viewPos);
}

/*
==============
SpatialPartition_PopulationSort_Update
==============
*/

void __fastcall SpatialPartition_PopulationSort_Update(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks)
{
  ?SpatialPartition_PopulationSort_Update@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@@Z(clientData, callbacks);
}

/*
==============
SpatialPartition_PopulationSort_CheckTransients
==============
*/

void __fastcall SpatialPartition_PopulationSort_CheckTransients(SpatialPartition_PopulationSort_ClientData *clientData)
{
  ?SpatialPartition_PopulationSort_CheckTransients@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@@Z(clientData);
}

/*
==============
SpatialPartition_PopulationSort_DebugDrawWorld
==============
*/

void __fastcall SpatialPartition_PopulationSort_DebugDrawWorld(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const vec3_t *lastViewPos)
{
  ?SpatialPartition_PopulationSort_DebugDrawWorld@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@AEBTvec3_t@@@Z(clientData, callbacks, lastViewPos);
}

/*
==============
SpatialPartition_PopulationSort_DebugDrawOverlay
==============
*/

void __fastcall SpatialPartition_PopulationSort_DebugDrawOverlay(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const vec3_t *lastViewPos, float overlayWorldSize, SpatialPartition_Population_Node *extraList)
{
  ?SpatialPartition_PopulationSort_DebugDrawOverlay@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@AEBTvec3_t@@MPEAUSpatialPartition_Population_Node@@@Z(clientData, callbacks, lastViewPos, overlayWorldSize, extraList);
}

/*
==============
SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector::isExtentsInViewAngle
==============
*/

bool __fastcall SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector::isExtentsInViewAngle(SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector *this, const float4 *boxMinExtent, const float4 *boxMaxExtent)
{
  return ?isExtentsInViewAngle@SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector@@QEBA_NAEBUfloat4@@0@Z(this, boxMinExtent, boxMaxExtent);
}

/*
==============
SpatialPartition_PopulationSort_SortByDistanceWithViewAngle
==============
*/

void __fastcall SpatialPartition_PopulationSort_SortByDistanceWithViewAngle(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos, const float minViewAngleDistance, const vec3_t *lookAtDir, float fovInDegrees)
{
  ?SpatialPartition_PopulationSort_SortByDistanceWithViewAngle@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBTvec3_t@@M1M@Z(clientData, viewPos, minViewAngleDistance, lookAtDir, fovInDegrees);
}

/*
==============
SpatialPartition_PopulationSort_ActiveNodeIterator::Init
==============
*/

void __fastcall SpatialPartition_PopulationSort_ActiveNodeIterator::Init(SpatialPartition_PopulationSort_ActiveNodeIterator *this, SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, SpatialPartition_Population_Node *extraList)
{
  ?Init@SpatialPartition_PopulationSort_ActiveNodeIterator@@QEAAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@PEAUSpatialPartition_Population_Node@@@Z(this, clientData, callbacks, extraList);
}

/*
==============
SpatialPartition_PopulationSort_PreTransientPopulationAdded
==============
*/

void __fastcall SpatialPartition_PopulationSort_PreTransientPopulationAdded(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const SpatialPartition_TransientPopulation *subpop)
{
  ?SpatialPartition_PopulationSort_PreTransientPopulationAdded@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@PEBUSpatialPartition_TransientPopulation@@@Z(clientData, callbacks, subpop);
}

/*
==============
SpatialPartition_PopulationSort_PostTransientPopulationRemoved
==============
*/

void __fastcall SpatialPartition_PopulationSort_PostTransientPopulationRemoved(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const SpatialPartition_TransientPopulation *subpop, bool deactiveObjects)
{
  ?SpatialPartition_PopulationSort_PostTransientPopulationRemoved@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@PEBUSpatialPartition_TransientPopulation@@_N@Z(clientData, callbacks, subpop, deactiveObjects);
}

/*
==============
SpatialPartition_PopulationSort_RemoveAll
==============
*/

void __fastcall SpatialPartition_PopulationSort_RemoveAll(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, bool deactivateObjects)
{
  ?SpatialPartition_PopulationSort_RemoveAll@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBUSpatialPartition_PopulationSort_Callbacks@@_N@Z(clientData, callbacks, deactivateObjects);
}

/*
==============
SpatialPartition_PopulationSort_ActiveNodeIterator::Advance
==============
*/

bool __fastcall SpatialPartition_PopulationSort_ActiveNodeIterator::Advance(SpatialPartition_PopulationSort_ActiveNodeIterator *this)
{
  return ?Advance@SpatialPartition_PopulationSort_ActiveNodeIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_PopulationSort_InitializeClientData
==============
*/

void __fastcall SpatialPartition_PopulationSort_InitializeClientData(const LocalClientNum_t localClientNum, SpatialPartition_Population *population, SpatialPartition_Population_TransientMap *transientMap, const unsigned int maxPriority, SpatialPartition_PopulationSort_ClientData *clientData)
{
  ?SpatialPartition_PopulationSort_InitializeClientData@@YAXW4LocalClientNum_t@@PEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_TransientMap@@IPEAUSpatialPartition_PopulationSort_ClientData@@@Z(localClientNum, population, transientMap, maxPriority, clientData);
}

/*
==============
SpatialPartition_PopulationSort_ActiveNodeIterator::Advance
==============
*/
char SpatialPartition_PopulationSort_ActiveNodeIterator::Advance(SpatialPartition_PopulationSort_ActiveNodeIterator *this)
{
  SpatialPartition_Population_Node *m_curNode; 
  int v3; 
  SpatialPartition_Population_Node *v4; 
  const SpatialPartition_PopulationSort_Callbacks *m_callbacks; 
  SpatialPartition_PopulationSort_ClientData *m_clientData; 
  __int64 m_nextSortedIndex; 
  SpatialPartition_PopulationSort_Entry *v8; 
  unsigned int *p_spatialNodeNext; 
  SpatialPartition_Population_Node *v10; 
  const SpatialPartition_PopulationSort_Callbacks *v11; 
  __int64 v13; 
  __int64 v14; 

  if ( this->m_clientData )
  {
    while ( 1 )
    {
      m_curNode = this->m_curNode;
      v3 = 0;
      if ( m_curNode )
      {
        while ( m_curNode->spatialNodeNext != -1 )
        {
          v4 = (SpatialPartition_Population_Node *)((__int64 (*)(void))this->m_clientData->population->getNodeFromIndex)();
          m_callbacks = this->m_callbacks;
          this->m_curNode = v4;
          if ( m_callbacks->isActive(this->m_clientData, v4) )
            return 1;
          if ( ++v3 >= this->m_clientData->population->currentPopulation )
          {
            LODWORD(v14) = v3;
            LODWORD(v13) = this->m_clientData->sortedPartitions[this->m_nextSortedIndex].partitionIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1426, ASSERT_TYPE_ASSERT, "(iterations < m_clientData->population->currentPopulation)", "%s\n\tSpatialPartition_PopulationSort_ActiveNodeIterator: Infinite loop detected in partitionIndex [%u] after [%u] iterations\n", "iterations < m_clientData->population->currentPopulation", v13, v14) )
              __debugbreak();
          }
          m_curNode = this->m_curNode;
          if ( !m_curNode )
            goto LABEL_11;
        }
        this->m_curNode = NULL;
      }
LABEL_11:
      m_clientData = this->m_clientData;
      m_nextSortedIndex = this->m_nextSortedIndex;
      if ( (unsigned int)m_nextSortedIndex >= this->m_clientData->sortedPartitionCount )
        break;
      v8 = &m_clientData->sortedPartitions[m_nextSortedIndex];
      this->m_nextSortedIndex = m_nextSortedIndex + 1;
      if ( v8->anyActiveMask )
      {
        p_spatialNodeNext = &m_clientData->population->buckets[v8->partitionIndex].spatialNodeNext;
        if ( *p_spatialNodeNext == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1439, ASSERT_TYPE_ASSERT, "(bucketNode->spatialNodeNext != SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE)", (const char *)&queryFormat, "bucketNode->spatialNodeNext != SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE") )
          __debugbreak();
        v10 = this->m_clientData->population->getNodeFromIndex(this->m_clientData->population, *p_spatialNodeNext);
        v11 = this->m_callbacks;
        this->m_curNode = v10;
        if ( v11->isActive(this->m_clientData, v10) )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
SpatialPartition_PopulationSort_ActiveNodeIterator::Init
==============
*/
void SpatialPartition_PopulationSort_ActiveNodeIterator::Init(SpatialPartition_PopulationSort_ActiveNodeIterator *this, SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, SpatialPartition_Population_Node *extraList)
{
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1389, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1390, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  this->m_clientData = clientData;
  this->m_callbacks = callbacks;
  this->m_curNode = extraList;
  this->m_nextSortedIndex = 0;
}

/*
==============
SpatialPartition_PopulationSort_CheckTransients
==============
*/
void SpatialPartition_PopulationSort_CheckTransients(SpatialPartition_PopulationSort_ClientData *clientData)
{
  SpatialPartition_PopulationSort_ClientData *v1; 
  SpatialPartition_Population_TransientMap *transientMap; 
  unsigned int transientFrameNum; 
  __int64 v4; 
  _BOOL8 v5; 
  char *v6; 
  bitarray_dynamic *v7; 
  unsigned int i; 
  const bitarray<1536> *VisibilityBitArray; 
  bitarray_dynamic *p_partitionTransientLoadedBitfield; 
  bitarray_dynamic *p_partitionTransientUnloadedBitfield; 
  __int64 v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char v17; 
  SpatialPartition_Population_TransientMap *v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  bool v22; 
  bitarray_dynamic *partitionsForTransient; 
  unsigned int wordCount; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  char *v33; 
  int v35; 
  int j; 
  int v37; 

  v1 = clientData;
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 380, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( v1->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 381, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  transientMap = v1->transientMap;
  if ( transientMap && transientMap->transientCount )
  {
    transientFrameNum = v1->transientFrameNum;
    v4 = 224i64;
    v5 = transientFrameNum == 0;
    if ( transientFrameNum )
      v4 = 240i64;
    v1->transientFrameNum = v5;
    v6 = (char *)v1 + v4;
    v7 = &v1->transientLoadedBitfield[v5];
    v33 = v6;
    if ( v7->wordCount != *((_DWORD *)v6 + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 392, ASSERT_TYPE_ASSERT, "(currentBitfield.wordCount == previousBitfield.wordCount)", (const char *)&queryFormat, "currentBitfield.wordCount == previousBitfield.wordCount") )
      __debugbreak();
    if ( CL_TransientsSP_AreGameSystemsInitialized() )
    {
      bitarray_base<bitarray_dynamic>::resetAllBits(v7);
      for ( i = 0; i < v7->bitCount; ++i )
      {
        if ( CL_TransientsSP_IsGameSystemTransientLoaded(i) )
          bitarray_base<bitarray_dynamic>::setBit(v7, i);
      }
    }
    else
    {
      VisibilityBitArray = CL_TransientsWorld_GetVisibilityBitArray(v1->localClientNum);
      if ( 4 * (unsigned __int64)v7->wordCount > 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 411, ASSERT_TYPE_ASSERT, "(currentBitfield.wordCount * sizeof( uint32_t ) <= sizeof( worldVisibility.array ))", (const char *)&queryFormat, "currentBitfield.wordCount * sizeof( uint32_t ) <= sizeof( worldVisibility.array )") )
        __debugbreak();
      memcpy_0(v7->array, VisibilityBitArray, 4i64 * v7->wordCount);
    }
    p_partitionTransientLoadedBitfield = &v1->partitionTransientLoadedBitfield;
    *(_WORD *)&v1->anyPartitionTransientLoaded = 0;
    bitarray_base<bitarray_dynamic>::resetAllBits(&v1->partitionTransientLoadedBitfield);
    p_partitionTransientUnloadedBitfield = &v1->partitionTransientUnloadedBitfield;
    bitarray_base<bitarray_dynamic>::resetAllBits(&v1->partitionTransientUnloadedBitfield);
    v12 = 0i64;
    for ( j = 0; (unsigned int)v12 < v7->wordCount; j = v12 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v6 + 4 * v12) ^ v7->array[v12];
      if ( v13 )
      {
        v14 = 32 * v12;
        v37 = 32 * v12;
        do
        {
          v15 = __lzcnt(v13);
          v16 = v15 + v14;
          v17 = v15 & 0x1F;
          v18 = v1->transientMap;
          v13 &= ~(0x80000000 >> v17);
          v35 = v13;
          if ( v16 < v18->transientCount )
          {
            v19 = v16;
            if ( v18->partitionsForTransient[v16].wordCount )
            {
              if ( v16 >= v7->bitCount )
              {
                LODWORD(v32) = v7->bitCount;
                LODWORD(v31) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
                  __debugbreak();
              }
              v20 = 0x80000000 >> (v16 & 0x1F);
              v21 = (unsigned __int64)v16 >> 5;
              v22 = (v20 & v7->array[v21]) != 0;
              if ( v16 >= *((_DWORD *)v33 + 3) )
              {
                LODWORD(v32) = *((_DWORD *)v33 + 3);
                LODWORD(v31) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
                  __debugbreak();
              }
              if ( v22 == ((v20 & *(_DWORD *)(v21 * 4 + *(_QWORD *)v33)) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 435, ASSERT_TYPE_ASSERT, "(currentBitfield.testBit( transientIndex ) != previousBitfield.testBit( transientIndex ))", (const char *)&queryFormat, "currentBitfield.testBit( transientIndex ) != previousBitfield.testBit( transientIndex )") )
                __debugbreak();
              if ( v16 >= v7->bitCount )
              {
                LODWORD(v32) = v7->bitCount;
                LODWORD(v31) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
                  __debugbreak();
              }
              v1 = clientData;
              partitionsForTransient = clientData->transientMap->partitionsForTransient;
              wordCount = partitionsForTransient[v19].wordCount;
              if ( (v20 & v7->array[v21]) != 0 )
              {
                if ( p_partitionTransientLoadedBitfield->wordCount != wordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 106, ASSERT_TYPE_ASSERT, "(impl()->getWordCount() == otherBitSet.impl()->getWordCount())", (const char *)&queryFormat, "impl()->getWordCount() == otherBitSet.impl()->getWordCount()") )
                  __debugbreak();
                v25 = p_partitionTransientLoadedBitfield->wordCount;
                if ( v25 )
                {
                  v26 = 0i64;
                  v27 = v25;
                  do
                  {
                    ++v26;
                    p_partitionTransientLoadedBitfield->array[v26 - 1] |= partitionsForTransient[v19].array[v26 - 1];
                    --v27;
                  }
                  while ( v27 );
                }
                v13 = v35;
                clientData->anyPartitionTransientLoaded = 1;
              }
              else
              {
                if ( p_partitionTransientUnloadedBitfield->wordCount != wordCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 106, ASSERT_TYPE_ASSERT, "(impl()->getWordCount() == otherBitSet.impl()->getWordCount())", (const char *)&queryFormat, "impl()->getWordCount() == otherBitSet.impl()->getWordCount()") )
                  __debugbreak();
                v28 = p_partitionTransientUnloadedBitfield->wordCount;
                if ( v28 )
                {
                  v29 = 0i64;
                  v30 = v28;
                  do
                  {
                    ++v29;
                    p_partitionTransientUnloadedBitfield->array[v29 - 1] |= partitionsForTransient[v19].array[v29 - 1];
                    --v30;
                  }
                  while ( v30 );
                }
                v13 = v35;
                clientData->anyPartitionTransientUnloaded = 1;
              }
            }
            else
            {
              v1 = clientData;
            }
          }
          v14 = v37;
        }
        while ( v13 );
        v6 = v33;
        LODWORD(v12) = j;
      }
      v12 = (unsigned int)(v12 + 1);
    }
  }
}

/*
==============
SpatialPartition_PopulationSort_DebugDrawOverlay
==============
*/

void __fastcall SpatialPartition_PopulationSort_DebugDrawOverlay(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const vec3_t *lastViewPos, double overlayWorldSize, SpatialPartition_Population_Node *extraList)
{
  SpatialPartition_Population_Node *v9; 
  bool v10; 
  ExtentBounds *extents; 
  __m128 v12; 
  __int128 v13; 
  __m128 v14; 
  __m128 v16; 
  __int128 v18; 
  __int128 v20; 
  bool v27; 
  const ScreenPlacement *v28; 
  unsigned int v29; 
  SpatialPartition_Population *population; 
  SpatialPartition_Population *v31; 
  unsigned int v32; 
  unsigned int sortedPartitionCount; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  const vec4_t *v35; 
  float v36; 
  SpatialPartition_PopulationSort_Entry *v37; 
  ExtentBounds *v38; 
  float v42; 
  SpatialPartition_Population_Node *m_curNode; 
  bool v45; 
  unsigned int v46; 
  const vec4_t *v47; 
  SpatialPartition_Population_Node *v48; 
  bool v49; 
  const vec4_t *v50; 
  unsigned int v51; 
  SpatialPartition_PopulationSort_Entry *v52; 
  float v56; 
  int v57; 
  int v58; 
  const vec4_t *v60; 
  unsigned int i; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  ExtentBounds *v65; 
  vec2_t minPos; 
  vec4_t color; 
  double v69; 
  vec3_t v70; 
  SpatialPartition_Population_NodeIterator v71; 
  vec2_t m_screenBoundsMax; 
  vec2_t v73; 
  vec2_t v74; 
  CL_DebugMapOverlay v75; 
  Bounds v76; 
  vec2_t screenBoundsMax; 
  vec2_t v78[20]; 

  if ( !clientData )
    return;
  _XMM12 = *(_OWORD *)&overlayWorldSize;
  v9 = extraList;
  if ( clientData->population->partitionCount <= 2 )
    return;
  v10 = *(float *)&overlayWorldSize == 0.0;
  CL_DebugMapOverlay::CL_DebugMapOverlay(&v75);
  CL_DebugMapOverlay::GetDefaultScreenBounds(&v75, clientData->localClientNum, *(float *)&overlayWorldSize == 0.0, v78, &screenBoundsMax);
  extents = clientData->population->tree->extents;
  v12 = *(__m128 *)extents->mins.v;
  v13 = *(unsigned __int64 *)&extents->maxs.y;
  v14 = _mm_shuffle_ps(v12, v12, 255);
  color.v[0] = (float)(v14.m128_f32[0] + COERCE_FLOAT(*(_OWORD *)extents->mins.v)) * 0.5;
  *(double *)&v71.m_curIndex = *(double *)&v13;
  color.v[1] = (float)(*(float *)&v13 + _mm_shuffle_ps(v12, v12, 85).m128_f32[0]) * 0.5;
  color.v[2] = (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] + *((float *)&v13 + 1)) * 0.5;
  v16 = v14;
  v16.m128_f32[0] = v14.m128_f32[0] - color.v[0];
  _XMM0 = v16;
  v18 = v13;
  *(float *)&v18 = *(float *)&v13 - color.v[1];
  _XMM1 = v18;
  v20 = *(&v71.m_curIndex + 1);
  *(float *)&v20 = *((float *)&v71.m_curIndex + 1) - color.v[2];
  _XMM2 = v20;
  __asm { vmaxss  xmm3, xmm0, xmm3 }
  color.v[3] = *(float *)&_XMM3;
  __asm { vmaxss  xmm1, xmm1, xmm4 }
  *(float *)&v69 = *(float *)&_XMM1;
  __asm { vmaxss  xmm0, xmm2, xmm5 }
  *((float *)&v69 + 1) = *(float *)&_XMM0;
  if ( v10 )
  {
    *(vec4_t *)v76.midPoint.v = color;
    *(double *)&v76.halfSize.y = v69;
  }
  else
  {
    __asm
    {
      vmaxss  xmm0, xmm1, xmm3
      vminss  xmm1, xmm12, xmm0
    }
    *(double *)v76.midPoint.v = *(double *)lastViewPos->v;
    v76.midPoint.v[2] = lastViewPos->v[2];
    color.v[2] = *(float *)&_XMM1;
    __asm { vunpcklps xmm0, xmm1, xmm1 }
    *(double *)v76.halfSize.v = *(double *)&_XMM0;
    LODWORD(v76.halfSize.v[2]) = _XMM1;
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v28 = scrPlaceViewDisplay;
      goto LABEL_13;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v27 )
      __debugbreak();
  }
  v28 = &scrPlaceFull;
LABEL_13:
  CL_DebugMapOverlay::Init(&v75, v28, v78, &screenBoundsMax, &v76);
  if ( !v10 || clientData->localClientNum == LOCAL_CLIENT_0 )
  {
    color = (vec4_t)_xmm;
    m_screenBoundsMax = v75.m_screenBoundsMax;
    minPos = v75.m_screenBoundsMin;
    CL_DebugMapOverlay::DrawRect2D(&v75, &minPos, &m_screenBoundsMax, &color, Unclipped);
    v29 = 0;
    population = clientData->population;
    if ( population->partitionCount )
    {
      v31 = clientData->population;
      do
      {
        if ( population->buckets[v29].spatialNodeNext != -1 )
        {
          color = (vec4_t)_xmm;
          CL_DebugMapOverlay::DrawExtBox(&v75, &v31->tree->extents[v29], 0, &color, Clipped);
          v31 = clientData->population;
        }
        population = v31;
        ++v29;
      }
      while ( v29 < v31->partitionCount );
    }
  }
  v32 = 0;
  sortedPartitionCount = clientData->sortedPartitionCount;
  if ( sortedPartitionCount )
  {
    do
    {
      sortedPartitions = clientData->sortedPartitions;
      v35 = &colorNearby;
      if ( sortedPartitions[v32].anyActiveMask )
        v35 = &colorActive;
      CL_DebugMapOverlay::DrawExtBox(&v75, &clientData->population->tree->extents[sortedPartitions[v32++].partitionIndex], -1, v35, Clipped);
      sortedPartitionCount = clientData->sortedPartitionCount;
    }
    while ( v32 < sortedPartitionCount );
    v9 = extraList;
  }
  v36 = 0.0;
  minPos.v[0] = 0.0;
  if ( sortedPartitionCount )
  {
    do
    {
      v37 = clientData->sortedPartitions;
      v38 = &clientData->population->tree->extents[v37[LODWORD(v36)].partitionIndex];
      CL_DebugMapOverlay::TransformBox(&v75, &v38->mins, &v38->maxs, &v74, &v73);
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(double *)&_XMM0 = I_fclamp((float)(v73.v[0] - v74.v[0]) * 0.050000001, 0.0, 1.0);
      __asm
      {
        vcmpltss xmm1, xmm0, xmm10
        vblendvps xmm0, xmm0, xmm11, xmm1
      }
      v42 = *(float *)&_XMM0 * 4.0;
      if ( v37[LODWORD(v36)].anyActiveMask )
      {
        if ( v42 > 0.0 )
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          *(_OWORD *)&v71.m_population = _XMM0;
          v71.m_curIndex = -1;
          SpatialPartition_Population_NodeIterator::Init(&v71, clientData->population, v37[LODWORD(v36)].partitionIndex);
          if ( SpatialPartition_Population_NodeIterator::Advance(&v71) )
          {
            do
            {
              m_curNode = v71.m_curNode;
              if ( !v71.m_curNode )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                  __debugbreak();
                m_curNode = v71.m_curNode;
              }
              v45 = callbacks->isActive(clientData, m_curNode);
              v46 = callbacks->getPriority(clientData, m_curNode);
              callbacks->getPosition(clientData, m_curNode, (vec3_t *)&color);
              if ( v45 )
              {
                v47 = &colorActive;
                if ( v46 )
                  v47 = &colorPriority;
              }
              else
              {
                v47 = &colorNearby;
              }
              v70.v[0] = 0.0;
              v70.v[1] = 0.0;
              v70.v[2] = 0.0;
              CL_DebugMapOverlay::DrawImage(&v75, (const vec3_t *)&color, &v70, v42, v47, Clipped, cgMedia.objectiveMaterials[0]);
            }
            while ( SpatialPartition_Population_NodeIterator::Advance(&v71) );
            v36 = minPos.v[0];
          }
        }
      }
      ++LODWORD(v36);
      minPos.v[0] = v36;
      sortedPartitionCount = clientData->sortedPartitionCount;
    }
    while ( LODWORD(v36) < sortedPartitionCount );
    v9 = extraList;
  }
  if ( v9 && v9->spatialNodeNext != -1 )
  {
    do
    {
      v48 = (SpatialPartition_Population_Node *)((__int64 (*)(void))clientData->population->getNodeFromIndex)();
      if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1318, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v49 = callbacks->isActive(clientData, v48);
      callbacks->getPosition(clientData, v48, (vec3_t *)&color);
      v50 = &colorNoSpatialDeactivated;
      if ( v49 )
        v50 = &colorAlways;
      v70.v[0] = 0.0;
      v70.v[1] = 0.0;
      v70.v[2] = 0.0;
      CL_DebugMapOverlay::DrawImage(&v75, (const vec3_t *)&color, &v70, 4.0, v50, Clipped, cgMedia.objectiveMaterials[0]);
    }
    while ( v48->spatialNodeNext != -1 );
    sortedPartitionCount = clientData->sortedPartitionCount;
  }
  v51 = 0;
  minPos.v[0] = 0.0;
  if ( sortedPartitionCount )
  {
    do
    {
      v52 = clientData->sortedPartitions;
      v65 = &clientData->population->tree->extents[v52[v51].partitionIndex];
      CL_DebugMapOverlay::TransformBox(&v75, &v65->mins, &v65->maxs, &v73, &v74);
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(double *)&_XMM0 = I_fclamp((float)(v74.v[0] - v73.v[0]) * 0.050000001, 0.0, 1.0);
      __asm
      {
        vcmpltss xmm1, xmm0, xmm10
        vblendvps xmm0, xmm0, xmm11, xmm1
      }
      v56 = *(float *)&_XMM0 * 0.2;
      if ( (float)(*(float *)&_XMM0 * 0.2) != 0.0 )
      {
        v57 = 0;
        v58 = 0;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v71.m_population = _XMM0;
        v71.m_curIndex = -1;
        SpatialPartition_Population_NodeIterator::Init(&v71, clientData->population, v52[v51].partitionIndex);
        if ( SpatialPartition_Population_NodeIterator::Advance(&v71) )
        {
          do
          {
            if ( !v71.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
              __debugbreak();
            ++v57;
            v58 += callbacks->isActive(clientData, v71.m_curNode);
          }
          while ( SpatialPartition_Population_NodeIterator::Advance(&v71) );
          v51 = LODWORD(minPos.v[0]);
        }
        color.v[0] = (float)(v65->maxs.v[0] + v65->mins.v[0]) * 0.5;
        color.v[1] = (float)(v65->maxs.v[1] + v65->mins.v[1]) * 0.5;
        color.v[2] = (float)(v65->maxs.v[2] + v65->mins.v[2]) * 0.5;
        CL_DebugMapOverlay::TransformPos(&v75, (const vec3_t *)&color, (vec2_t *)&v70);
        v60 = &colorNearby;
        if ( v58 )
          v60 = &colorActive;
        LODWORD(v64) = v57;
        LODWORD(v63) = v58;
        CL_DebugMapOverlay::DrawTextf2D(&v75, (const vec2_t *)&v70, &CL_DebugMapOverlay::TEXT_ANCHOR_CENTRE, v56, v60, Clipped, "%u/%u", v63, v64);
      }
      LODWORD(minPos.v[0]) = ++v51;
    }
    while ( v51 < clientData->sortedPartitionCount );
  }
  CL_DebugMapOverlay::DrawPlayerArrow(&v75, clientData->localClientNum, Unclipped);
  for ( i = 0; i < clientData->priorityCount; ++i )
  {
    v62 = 0;
    if ( i )
    {
      while ( clientData->settings.maxDistanceForPriority[i] != clientData->settings.maxDistanceForPriority[v62] )
      {
        if ( ++v62 >= i )
          goto LABEL_69;
      }
    }
    else
    {
LABEL_69:
      color = (vec4_t)_xmm;
      CL_DebugMapOverlay::DrawCircle(&v75, lastViewPos, clientData->settings.maxDistanceForPriority[i], &color, Clipped);
    }
  }
  CL_DebugMapOverlay::~CL_DebugMapOverlay(&v75);
}

/*
==============
SpatialPartition_PopulationSort_DebugDrawWorld
==============
*/
void SpatialPartition_PopulationSort_DebugDrawWorld(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const vec3_t *lastViewPos)
{
  __int128 v4; 
  __int128 v5; 
  SpatialPartition_Population *population; 
  unsigned int priorityCount; 
  const SpatialPartition_PopulationSort_Callbacks *v9; 
  const SpatialPartition_Population_Tree *tree; 
  unsigned int v12; 
  ExtentBounds *extents; 
  float *v14; 
  unsigned int v15; 
  __int64 v16; 
  float *v24; 
  __int64 v25; 
  unsigned int v27; 
  SpatialPartition_Population *v28; 
  unsigned int sortedPartitionCount; 
  int v30; 
  int v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v35; 
  __int128 v38; 
  __int128 v41; 
  double v43; 
  __int128 v45; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v51; 
  __int128 v53; 
  __int128 v55; 
  float v59; 
  vec4_t *v60; 
  vec4_t v61; 
  const SpatialPartition_Population_Tree *v62; 
  ExtentBounds *v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v67; 
  __int128 v70; 
  __int128 v72; 
  unsigned int v75; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  __int64 partitionIndex; 
  SpatialPartition_Population *v78; 
  ExtentBounds *v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v87; 
  float v88; 
  float v89; 
  __int128 v92; 
  __int128 v94; 
  bool (__fastcall *isActive)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *); 
  bool v99; 
  void (__fastcall *getPosition)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *, vec3_t *); 
  const vec4_t *v101; 
  unsigned int i; 
  Bounds bounds; 
  SpatialPartition_Population_NodeIterator color; 
  vec3_t origin; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 

  population = clientData->population;
  priorityCount = clientData->priorityCount;
  v109 = _XMM10;
  v9 = callbacks;
  v108 = v4;
  tree = population->tree;
  v12 = 0;
  v107 = v5;
  extents = tree->extents;
  LODWORD(_XMM10) = 0;
  if ( priorityCount >= 4 )
  {
    v14 = &clientData->settings.maxDistanceForPriority[1];
    v15 = ((priorityCount - 4) >> 2) + 1;
    v16 = v15;
    v12 = 4 * v15;
    do
    {
      _XMM0 = *((unsigned int *)v14 - 1);
      _XMM1 = *(unsigned int *)v14;
      v14 += 4;
      __asm { vmaxss  xmm2, xmm0, xmm10 }
      _XMM0 = *((unsigned int *)v14 - 3);
      __asm { vmaxss  xmm3, xmm1, xmm2 }
      _XMM1 = *((unsigned int *)v14 - 2);
      __asm
      {
        vmaxss  xmm2, xmm0, xmm3
        vmaxss  xmm10, xmm1, xmm2
      }
      --v16;
    }
    while ( v16 );
  }
  if ( v12 < priorityCount )
  {
    v24 = &clientData->settings.maxDistanceForPriority[v12];
    v25 = priorityCount - v12;
    do
    {
      _XMM0 = *(unsigned int *)v24++;
      __asm { vmaxss  xmm10, xmm0, xmm10 }
      --v25;
    }
    while ( v25 );
  }
  v27 = 0;
  if ( population->partitionCount )
  {
    v28 = population;
    while ( 1 )
    {
      if ( v28->buckets[v27].spatialNodeNext != -1 )
      {
        sortedPartitionCount = clientData->sortedPartitionCount;
        v30 = -1;
        v31 = 0;
        if ( sortedPartitionCount )
        {
          while ( v27 != clientData->sortedPartitions[v31].partitionIndex )
          {
            if ( ++v31 >= sortedPartitionCount )
              goto LABEL_15;
          }
          v30 = v31;
        }
LABEL_15:
        v32 = LODWORD(lastViewPos->v[1]);
        v33 = LODWORD(lastViewPos->v[0]);
        v35 = v33;
        *(float *)&v35 = *(float *)&v33 - extents[v27].maxs.v[0];
        _XMM0 = v35;
        __asm { vmaxss  xmm2, xmm0, xmm11 }
        v38 = LODWORD(extents[v27].mins.v[0]);
        *(float *)&v38 = extents[v27].mins.v[0] - *(float *)&v33;
        _XMM1 = v38;
        __asm { vmaxss  xmm1, xmm1, xmm11 }
        *(float *)&_XMM0 = *(float *)&_XMM2 + *(float *)&_XMM1;
        v41 = v32;
        *(float *)&v41 = *(float *)&v32 - extents[v27].maxs.v[1];
        _XMM1 = v41;
        __asm { vmaxss  xmm4, xmm1, xmm11 }
        v43 = *(float *)&_XMM0;
        v45 = LODWORD(extents[v27].mins.v[1]);
        *(float *)&v45 = extents[v27].mins.v[1] - *(float *)&v32;
        _XMM2 = v45;
        __asm { vmaxss  xmm1, xmm2, xmm11 }
        v47 = LODWORD(lastViewPos->v[2]);
        v49 = _XMM4;
        *(float *)&v49 = *(float *)&_XMM4 + *(float *)&_XMM1;
        v48 = v49;
        v51 = v47;
        *(float *)&v51 = *(float *)&v47 - extents[v27].maxs.v[2];
        _XMM1 = v51;
        __asm { vmaxss  xmm3, xmm1, xmm11 }
        *((_QWORD *)&v51 + 1) = *((_QWORD *)&v48 + 1);
        *(double *)&v51 = *(float *)&v48;
        v53 = v51;
        v55 = LODWORD(extents[v27].mins.v[2]);
        *(float *)&v55 = extents[v27].mins.v[2] - *(float *)&v47;
        _XMM2 = v55;
        __asm { vmaxss  xmm1, xmm2, xmm11 }
        *((_QWORD *)&v55 + 1) = *((_QWORD *)&v53 + 1);
        *(double *)&v55 = *(double *)&v53 * *(double *)&v53 + v43 * v43 + (float)(*(float *)&_XMM3 + *(float *)&_XMM1) * (float)(*(float *)&_XMM3 + *(float *)&_XMM1);
        _XMM2 = v55;
        __asm { vcvtsd2ss xmm1, xmm2, xmm2 }
        v59 = fsqrt(*(float *)&_XMM1);
        if ( v59 < (float)(*(float *)&_XMM10 + 5000.0) )
        {
          if ( v30 == -1 )
          {
            if ( v59 > *(float *)&_XMM10 )
              v61 = colorPartitionFar;
            else
              v61 = colorPartitionBad;
          }
          else
          {
LABEL_19:
            v60 = &colorPartitionInactive_0;
            if ( clientData->sortedPartitions[v30].anyActiveMask )
              v60 = &colorPartitionActive_0;
            v61 = *v60;
          }
          *(vec4_t *)&color.m_population = v61;
          v62 = population->tree;
          origin.v[0] = 0.0;
          origin.v[1] = 0.0;
          v63 = v62->extents;
          origin.v[2] = 0.0;
          bounds.midPoint.v[0] = (float)(v63[v27].mins.v[0] + v63[v27].maxs.v[0]) * 0.5;
          bounds.midPoint.v[1] = (float)(v63[v27].maxs.v[1] + v63[v27].mins.v[1]) * 0.5;
          bounds.midPoint.v[2] = (float)(v63[v27].maxs.v[2] + v63[v27].mins.v[2]) * 0.5;
          v64 = LODWORD(v63[v27].maxs.v[1]);
          v65 = LODWORD(v63[v27].maxs.v[2]);
          v67 = LODWORD(v63[v27].maxs.v[0]);
          *(float *)&v67 = v63[v27].maxs.v[0] - bounds.midPoint.v[0];
          _XMM2 = v67;
          __asm { vmaxss  xmm2, xmm2, xmm1 }
          bounds.halfSize.v[0] = *(float *)&_XMM2;
          v70 = v65;
          *(float *)&v70 = *(float *)&v65 - bounds.midPoint.v[2];
          _XMM2 = v70;
          v72 = v64;
          *(float *)&v72 = *(float *)&v64 - bounds.midPoint.v[1];
          _XMM3 = v72;
          __asm { vmaxss  xmm1, xmm3, xmm0 }
          bounds.halfSize.v[1] = *(float *)&_XMM1;
          __asm { vmaxss  xmm1, xmm2, xmm0 }
          bounds.halfSize.v[2] = *(float *)&_XMM1;
          CG_DebugBox(&origin, &bounds, 0.0, (const vec4_t *)&color, 0, 0);
          goto LABEL_26;
        }
        if ( v30 != -1 )
          goto LABEL_19;
      }
LABEL_26:
      population = clientData->population;
      ++v27;
      v28 = population;
      if ( v27 >= population->partitionCount )
      {
        v9 = callbacks;
        break;
      }
    }
  }
  v75 = 0;
  for ( i = 0; v75 < clientData->sortedPartitionCount; i = v75 )
  {
    sortedPartitions = clientData->sortedPartitions;
    if ( sortedPartitions[v75].anyActiveMask )
    {
      partitionIndex = sortedPartitions[v75].partitionIndex;
      v78 = clientData->population;
      v79 = v78->tree->extents;
      v80 = LODWORD(v79[partitionIndex].maxs.v[0]);
      *(float *)&v80 = (float)(v79[partitionIndex].maxs.v[0] + v79[partitionIndex].mins.v[0]) * 0.5;
      v81 = v80;
      bounds.midPoint.v[0] = *(float *)&v80;
      v82 = LODWORD(v79[partitionIndex].maxs.v[1]);
      *(float *)&v82 = (float)(v79[partitionIndex].maxs.v[1] + v79[partitionIndex].mins.v[1]) * 0.5;
      v83 = v82;
      bounds.midPoint.v[1] = *(float *)&v82;
      v84 = LODWORD(v79[partitionIndex].maxs.v[2]);
      *(float *)&v84 = (float)(v79[partitionIndex].maxs.v[2] + v79[partitionIndex].mins.v[2]) * 0.5;
      v85 = v84;
      bounds.midPoint.v[2] = *(float *)&v84;
      v87 = v81;
      *(float *)&v87 = *(float *)&v81 - v79[partitionIndex].mins.v[0];
      _XMM2 = v87;
      v88 = v79[partitionIndex].mins.v[1];
      v89 = v79[partitionIndex].mins.v[2];
      __asm { vmaxss  xmm2, xmm2, xmm1 }
      bounds.halfSize.v[0] = *(float *)&_XMM2;
      v92 = v85;
      *(float *)&v92 = *(float *)&v85 - v89;
      _XMM2 = v92;
      v94 = v83;
      *(float *)&v94 = *(float *)&v83 - v88;
      _XMM3 = v94;
      __asm { vmaxss  xmm1, xmm3, xmm0 }
      bounds.halfSize.v[1] = *(float *)&_XMM1;
      __asm
      {
        vmaxss  xmm1, xmm2, xmm0
        vpxor   xmm2, xmm2, xmm2
      }
      color.m_curIndex = -1;
      *(_OWORD *)&color.m_population = _XMM2;
      bounds.halfSize.v[2] = *(float *)&_XMM1;
      SpatialPartition_Population_NodeIterator::Init(&color, v78, partitionIndex);
      if ( SpatialPartition_Population_NodeIterator::Advance(&color) )
      {
        do
        {
          isActive = v9->isActive;
          if ( !color.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
            __debugbreak();
          v99 = isActive(clientData, color.m_curNode);
          getPosition = v9->getPosition;
          if ( !color.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
            __debugbreak();
          getPosition(clientData, color.m_curNode, &origin);
          v101 = &colorObjectInactive;
          if ( v99 )
            v101 = &colorObjectActive;
          CG_DebugLine(&origin, &bounds.midPoint, v101, 0, 0);
        }
        while ( SpatialPartition_Population_NodeIterator::Advance(&color) );
        v75 = i;
      }
    }
    ++v75;
  }
}

/*
==============
SpatialPartition_PopulationSort_Entry_LessThan
==============
*/
bool SpatialPartition_PopulationSort_Entry_LessThan(const SpatialPartition_PopulationSort_Entry *lhs, const SpatialPartition_PopulationSort_Entry *rhs)
{
  return lhs->distanceSq < rhs->distanceSq;
}

/*
==============
SpatialPartition_PopulationSort_InitializeClientData
==============
*/
void SpatialPartition_PopulationSort_InitializeClientData(const LocalClientNum_t localClientNum, SpatialPartition_Population *population, SpatialPartition_Population_TransientMap *transientMap, const unsigned int maxPriority, SpatialPartition_PopulationSort_ClientData *clientData)
{
  unsigned int partitionCount; 
  unsigned int sortedPartitionCapacity; 
  unsigned int v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  bitarray_dynamic *p_partitionTransientPopulationLoadedBitfield; 
  unsigned int v15; 
  unsigned int wordCount; 
  unsigned int *array; 
  unsigned int v18; 
  unsigned __int64 i; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  bitarray_dynamic *p_partitionTransientPopulationUnloadedBitfield; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int *v26; 
  unsigned int v27; 
  unsigned __int64 j; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 32, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( population )
    partitionCount = population->partitionCount;
  else
    partitionCount = 0;
  sortedPartitionCapacity = clientData->sortedPartitionCapacity;
  if ( g_usedDebugZone )
  {
    if ( sortedPartitionCapacity < partitionCount )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14411E870, 5692i64);
  }
  else if ( sortedPartitionCapacity != partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 48, ASSERT_TYPE_ASSERT, "( clientData->sortedPartitionCapacity ) == ( partitionCount )", "%s == %s\n\t%u, %u", "clientData->sortedPartitionCapacity", "partitionCount", clientData->sortedPartitionCapacity, partitionCount) )
  {
    __debugbreak();
  }
  clientData->transientMap = transientMap;
  v11 = 0;
  clientData->localClientNum = localClientNum;
  clientData->priorityCount = maxPriority;
  clientData->population = population;
  if ( partitionCount )
  {
    v12 = 0i64;
    v13 = 0i64;
    do
    {
      if ( population->buckets[v13].spatialNodeNext != -1 )
      {
        if ( v11 >= clientData->partitionCandidateBitfield.bitCount )
        {
          LODWORD(v33) = clientData->partitionCandidateBitfield.bitCount;
          LODWORD(v32) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
            __debugbreak();
        }
        clientData->partitionCandidateBitfield.array[v12 >> 5] |= 0x80000000 >> (v11 & 0x1F);
      }
      ++v11;
      ++v12;
      ++v13;
    }
    while ( v11 < partitionCount );
  }
  p_partitionTransientPopulationLoadedBitfield = &clientData->partitionTransientPopulationLoadedBitfield;
  v15 = 0;
  *(_WORD *)&clientData->anyPartitionTransientPopulationLoaded = 0;
  wordCount = clientData->partitionTransientPopulationLoadedBitfield.wordCount;
  if ( wordCount )
  {
    if ( wordCount >= 4 )
    {
      array = p_partitionTransientPopulationLoadedBitfield->array;
      if ( p_partitionTransientPopulationLoadedBitfield->array > (unsigned int *)p_partitionTransientPopulationLoadedBitfield || &p_partitionTransientPopulationLoadedBitfield->array[(unsigned __int64)(wordCount - 1)] < (unsigned int *)p_partitionTransientPopulationLoadedBitfield )
      {
        v18 = wordCount & 0xFFFFFFFC;
        do
          v15 += 4;
        while ( v15 < v18 );
        for ( i = (16 * ((unsigned __int64)v18 >> 2)) >> 2; i; --i )
          *array++ = 0;
      }
    }
    if ( v15 < wordCount )
    {
      v20 = v15;
      v21 = wordCount - v15;
      v22 = v20;
      do
      {
        p_partitionTransientPopulationLoadedBitfield->array[v22++] = 0;
        --v21;
      }
      while ( v21 );
    }
  }
  p_partitionTransientPopulationUnloadedBitfield = &clientData->partitionTransientPopulationUnloadedBitfield;
  v24 = 0;
  v25 = clientData->partitionTransientPopulationUnloadedBitfield.wordCount;
  if ( v25 )
  {
    if ( v25 >= 4 )
    {
      v26 = p_partitionTransientPopulationUnloadedBitfield->array;
      if ( p_partitionTransientPopulationUnloadedBitfield->array > (unsigned int *)p_partitionTransientPopulationUnloadedBitfield || &p_partitionTransientPopulationUnloadedBitfield->array[(unsigned __int64)(v25 - 1)] < (unsigned int *)p_partitionTransientPopulationUnloadedBitfield )
      {
        v27 = v25 & 0xFFFFFFFC;
        do
          v24 += 4;
        while ( v24 < v27 );
        for ( j = (16 * ((unsigned __int64)v27 >> 2)) >> 2; j; --j )
          *v26++ = 0;
      }
    }
    if ( v24 < v25 )
    {
      v29 = v24;
      v30 = v25 - v24;
      v31 = v29;
      do
      {
        p_partitionTransientPopulationUnloadedBitfield->array[v31++] = 0;
        --v30;
      }
      while ( v30 );
    }
  }
}

/*
==============
SpatialPartition_PopulationSort_PostLoad
==============
*/
void SpatialPartition_PopulationSort_PostLoad(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks)
{
  SpatialPartition_Population *population; 
  unsigned int i; 
  char v7; 
  int v8; 
  bool (__fastcall *isActive)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *); 
  unsigned int (__fastcall *getPriority)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *); 
  unsigned int v11; 
  __int64 sortedPartitionCount; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  unsigned __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  SpatialPartition_Population_NodeIterator v20; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1002, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  SpatialPartition_PopulationSort_RemoveAll(clientData, callbacks, 0);
  population = clientData->population;
  for ( i = 0; i < population->partitionCount; ++i )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v20.m_curIndex = -1;
    *(_OWORD *)&v20.m_population = _XMM0;
    v7 = 0;
    LOBYTE(v8) = 0;
    SpatialPartition_Population_NodeIterator::Init(&v20, population, i);
    if ( SpatialPartition_Population_NodeIterator::Advance(&v20) )
    {
      do
      {
        isActive = callbacks->isActive;
        if ( !v20.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
          __debugbreak();
        if ( isActive(clientData, v20.m_curNode) )
        {
          v7 = 1;
          getPriority = callbacks->getPriority;
          if ( !v20.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
            __debugbreak();
          v11 = getPriority(clientData, v20.m_curNode);
          ++clientData->numActivatedForPriority[v11];
          v8 = (unsigned __int8)v8 | (1 << v11);
        }
      }
      while ( SpatialPartition_Population_NodeIterator::Advance(&v20) );
      if ( v7 )
      {
        if ( clientData->sortedPartitionCount >= clientData->sortedPartitionCapacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1030, ASSERT_TYPE_ASSERT, "(clientData->sortedPartitionCount < clientData->sortedPartitionCapacity)", (const char *)&queryFormat, "clientData->sortedPartitionCount < clientData->sortedPartitionCapacity") )
          __debugbreak();
        sortedPartitionCount = clientData->sortedPartitionCount;
        sortedPartitions = clientData->sortedPartitions;
        clientData->sortedPartitionCount = sortedPartitionCount + 1;
        sortedPartitions[sortedPartitionCount].anyActiveMask = v8;
        sortedPartitions[sortedPartitionCount].anyAvailableMask = -1;
        sortedPartitions[sortedPartitionCount].distanceSq = 0.0;
        if ( i > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)i, "unsigned", i) )
          __debugbreak();
        sortedPartitions[sortedPartitionCount].partitionIndex = i;
        if ( i >= clientData->partitionCandidateBitfield.bitCount )
        {
          LODWORD(v17) = clientData->partitionCandidateBitfield.bitCount;
          LODWORD(v16) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
            __debugbreak();
        }
        v14 = (unsigned __int64)i >> 5;
        v15 = 0x80000000 >> (i & 0x1F);
        if ( (v15 & clientData->partitionCandidateBitfield.array[v14]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1039, ASSERT_TYPE_ASSERT, "(clientData->partitionCandidateBitfield.testBit( partitionIndex ))", (const char *)&queryFormat, "clientData->partitionCandidateBitfield.testBit( partitionIndex )") )
          __debugbreak();
        if ( i >= clientData->sortedPartitionBitfield.bitCount )
        {
          LODWORD(v17) = clientData->sortedPartitionBitfield.bitCount;
          LODWORD(v16) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
            __debugbreak();
        }
        if ( (v15 & clientData->sortedPartitionBitfield.array[v14]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1040, ASSERT_TYPE_ASSERT, "(!clientData->sortedPartitionBitfield.testBit( partitionIndex ))", (const char *)&queryFormat, "!clientData->sortedPartitionBitfield.testBit( partitionIndex )") )
          __debugbreak();
        if ( i >= clientData->partitionCandidateBitfield.bitCount )
        {
          LODWORD(v19) = clientData->partitionCandidateBitfield.bitCount;
          LODWORD(v18) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
            __debugbreak();
        }
        clientData->partitionCandidateBitfield.array[v14] &= ~v15;
        if ( i >= clientData->sortedPartitionBitfield.bitCount )
        {
          LODWORD(v19) = clientData->sortedPartitionBitfield.bitCount;
          LODWORD(v18) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
            __debugbreak();
        }
        clientData->sortedPartitionBitfield.array[v14] |= v15;
      }
    }
    population = clientData->population;
  }
}

/*
==============
SpatialPartition_PopulationSort_PostTransientPopulationRemoved
==============
*/
void SpatialPartition_PopulationSort_PostTransientPopulationRemoved(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const SpatialPartition_TransientPopulation *subpop, bool deactiveObjects)
{
  bool v5; 
  const SpatialPartition_TransientPopulation *v6; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  SpatialPartition_Population_Node *m_curNode; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  SpatialPartition_TransientPopulation_NodeIterator v20; 
  int i; 

  v5 = deactiveObjects;
  v6 = subpop;
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1075, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1076, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  v9 = 0i64;
  for ( i = 0; (unsigned int)v9 < v6->partitionCount; i = v9 )
  {
    v10 = v6->partitionIds[v9];
    if ( (unsigned int)v10 >= clientData->partitionCandidateBitfield.bitCount )
    {
      LODWORD(v17) = clientData->partitionCandidateBitfield.bitCount;
      LODWORD(v16) = v6->partitionIds[v9];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
        __debugbreak();
    }
    v11 = 0x80000000 >> (v10 & 0x1F);
    v12 = v10 >> 5;
    if ( (v11 & clientData->partitionCandidateBitfield.array[v12]) == 0 )
    {
      if ( (unsigned int)v10 >= clientData->sortedPartitionBitfield.bitCount )
      {
        LODWORD(v17) = clientData->sortedPartitionBitfield.bitCount;
        LODWORD(v16) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v16, v17) )
          __debugbreak();
      }
      if ( (v11 & clientData->sortedPartitionBitfield.array[v12]) != 0 )
      {
        if ( (unsigned int)v10 >= clientData->partitionTransientPopulationUnloadedBitfield.bitCount )
        {
          LODWORD(v19) = clientData->partitionTransientPopulationUnloadedBitfield.bitCount;
          LODWORD(v18) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
            __debugbreak();
        }
        clientData->partitionTransientPopulationUnloadedBitfield.array[v12] |= v11;
        clientData->anyPartitionTransientPopulationUnloaded = 1;
        if ( v5 )
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          *(_QWORD *)&v20.m_curIndex = -1i64;
          *(_OWORD *)&v20.m_population = _XMM0;
          SpatialPartition_TransientPopulation_NodeIterator::Init(&v20, v6, v9);
          if ( SpatialPartition_TransientPopulation_NodeIterator::Advance(&v20) )
          {
            do
            {
              m_curNode = v20.m_curNode;
              if ( !v20.m_curNode )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 124, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                  __debugbreak();
                m_curNode = v20.m_curNode;
              }
              if ( callbacks->isActive(clientData, m_curNode) )
              {
                v14 = callbacks->getPriority(clientData, m_curNode);
                v15 = v14;
                if ( v14 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1104, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
                  __debugbreak();
                callbacks->deactivate(clientData, m_curNode);
                if ( callbacks->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1106, ASSERT_TYPE_ASSERT, "(!callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "!callbacks.isActive( clientData, node )") )
                  __debugbreak();
                --clientData->numActivatedForPriority[v15];
              }
            }
            while ( SpatialPartition_TransientPopulation_NodeIterator::Advance(&v20) );
            LODWORD(v9) = i;
            v6 = subpop;
            v5 = deactiveObjects;
          }
        }
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
}

/*
==============
SpatialPartition_PopulationSort_PreTransientPopulationAdded
==============
*/
void SpatialPartition_PopulationSort_PreTransientPopulationAdded(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const SpatialPartition_TransientPopulation *subpop)
{
  __int64 i; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1051, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !subpop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1052, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < subpop->partitionCount; i = (unsigned int)(i + 1) )
  {
    v6 = subpop->partitionIds[i];
    if ( (unsigned int)v6 >= clientData->population->partitionCount )
    {
      LODWORD(v10) = clientData->population->partitionCount;
      LODWORD(v9) = subpop->partitionIds[i];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1056, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( clientData->population->partitionCount )", "partitionIndex doesn't index clientData->population->partitionCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (unsigned int)v6 >= clientData->sortedPartitionBitfield.bitCount )
    {
      LODWORD(v10) = clientData->sortedPartitionBitfield.bitCount;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
        __debugbreak();
    }
    v7 = 0x80000000 >> (v6 & 0x1F);
    v8 = v6 >> 5;
    if ( (v7 & clientData->sortedPartitionBitfield.array[v8]) != 0 )
    {
      if ( (unsigned int)v6 >= clientData->partitionTransientPopulationLoadedBitfield.bitCount )
      {
        LODWORD(v12) = clientData->partitionTransientPopulationLoadedBitfield.bitCount;
        LODWORD(v11) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
          __debugbreak();
      }
      clientData->partitionTransientPopulationLoadedBitfield.array[v8] |= v7;
      clientData->anyPartitionTransientPopulationLoaded = 1;
    }
    else
    {
      if ( (unsigned int)v6 >= clientData->partitionCandidateBitfield.bitCount )
      {
        LODWORD(v12) = clientData->partitionCandidateBitfield.bitCount;
        LODWORD(v11) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
          __debugbreak();
      }
      clientData->partitionCandidateBitfield.array[v8] |= v7;
    }
  }
}

/*
==============
SpatialPartition_PopulationSort_RemoveAll
==============
*/
void SpatialPartition_PopulationSort_RemoveAll(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, bool deactivateObjects)
{
  unsigned int v6; 
  bool i; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  unsigned __int64 partitionIndex; 
  SpatialPartition_Population *population; 
  unsigned int v11; 
  SpatialPartition_Population_Node *m_curNode; 
  bitarray_dynamic *p_sortedPartitionBitfield; 
  unsigned int v14; 
  unsigned int wordCount; 
  unsigned int *array; 
  unsigned int v17; 
  unsigned __int64 j; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int k; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  SpatialPartition_Population_NodeIterator v26; 

  v6 = 0;
  for ( i = deactivateObjects; v6 < clientData->sortedPartitionCount; clientData->partitionCandidateBitfield.array[partitionIndex >> 5] |= 0x80000000 >> (partitionIndex & 0x1F) )
  {
    sortedPartitions = clientData->sortedPartitions;
    partitionIndex = sortedPartitions[v6].partitionIndex;
    if ( i )
    {
      population = clientData->population;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v11 = sortedPartitions[v6].partitionIndex;
      v26.m_curIndex = -1;
      *(_OWORD *)&v26.m_population = _XMM0;
      SpatialPartition_Population_NodeIterator::Init(&v26, population, v11);
      if ( SpatialPartition_Population_NodeIterator::Advance(&v26) )
      {
        do
        {
          m_curNode = v26.m_curNode;
          if ( !v26.m_curNode )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
              __debugbreak();
            m_curNode = v26.m_curNode;
          }
          if ( callbacks->isActive(clientData, m_curNode) )
          {
            callbacks->deactivate(clientData, m_curNode);
            if ( callbacks->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 986, ASSERT_TYPE_ASSERT, "(!callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "!callbacks.isActive( clientData, node )") )
              __debugbreak();
          }
        }
        while ( SpatialPartition_Population_NodeIterator::Advance(&v26) );
        i = deactivateObjects;
      }
    }
    if ( (unsigned int)partitionIndex >= clientData->partitionCandidateBitfield.bitCount )
    {
      LODWORD(v25) = clientData->partitionCandidateBitfield.bitCount;
      LODWORD(v24) = partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v24, v25) )
        __debugbreak();
    }
    ++v6;
  }
  p_sortedPartitionBitfield = &clientData->sortedPartitionBitfield;
  v14 = 0;
  clientData->sortedPartitionCount = 0;
  wordCount = clientData->sortedPartitionBitfield.wordCount;
  if ( wordCount )
  {
    if ( wordCount >= 4 )
    {
      array = p_sortedPartitionBitfield->array;
      if ( p_sortedPartitionBitfield->array > (unsigned int *)p_sortedPartitionBitfield || &p_sortedPartitionBitfield->array[(unsigned __int64)(wordCount - 1)] < (unsigned int *)p_sortedPartitionBitfield )
      {
        v17 = wordCount & 0xFFFFFFFC;
        do
          v14 += 4;
        while ( v14 < v17 );
        for ( j = (16 * ((unsigned __int64)v17 >> 2)) >> 2; j; --j )
          *array++ = 0;
      }
    }
    if ( v14 < wordCount )
    {
      v19 = v14;
      v20 = wordCount - v14;
      v21 = v19;
      do
      {
        p_sortedPartitionBitfield->array[v21++] = 0;
        --v20;
      }
      while ( v20 );
    }
  }
  for ( k = 0; k < clientData->priorityCount; clientData->numActivatedForPriority[v23] = 0 )
    v23 = k++;
}

/*
==============
SpatialPartition_PopulationSort_RemoveEmptyPartitions
==============
*/
void SpatialPartition_PopulationSort_RemoveEmptyPartitions(SpatialPartition_PopulationSort_ClientData *clientData, const float partitionDistanceSq)
{
  unsigned int i; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int64 partitionIndex; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 141, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  for ( i = clientData->sortedPartitionCount; i; clientData->sortedPartitionCount = i )
  {
    sortedPartitions = clientData->sortedPartitions;
    v5 = i - 1;
    v6 = (unsigned int)v5;
    if ( sortedPartitions[v5].anyActiveMask || partitionDistanceSq >= sortedPartitions[v5].distanceSq )
      break;
    if ( sortedPartitions[v5].partitionIndex >= clientData->population->partitionCount )
    {
      LODWORD(v12) = clientData->population->partitionCount;
      LODWORD(v11) = sortedPartitions[v5].partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( entry.partitionIndex ) < (unsigned)( clientData->population->partitionCount )", "entry.partitionIndex doesn't index clientData->population->partitionCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    partitionIndex = sortedPartitions[v6].partitionIndex;
    if ( (unsigned int)partitionIndex >= clientData->partitionCandidateBitfield.bitCount )
    {
      LODWORD(v12) = clientData->partitionCandidateBitfield.bitCount;
      LODWORD(v11) = sortedPartitions[v6].partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (partitionIndex & 0x1F)) & clientData->partitionCandidateBitfield.array[partitionIndex >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 150, ASSERT_TYPE_ASSERT, "(!clientData->partitionCandidateBitfield.testBit( entry.partitionIndex ))", (const char *)&queryFormat, "!clientData->partitionCandidateBitfield.testBit( entry.partitionIndex )") )
      __debugbreak();
    v8 = sortedPartitions[v6].partitionIndex;
    if ( (unsigned int)v8 >= clientData->sortedPartitionBitfield.bitCount )
    {
      LODWORD(v12) = clientData->sortedPartitionBitfield.bitCount;
      LODWORD(v11) = sortedPartitions[v6].partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v8 & 0x1F)) & clientData->sortedPartitionBitfield.array[v8 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 151, ASSERT_TYPE_ASSERT, "(clientData->sortedPartitionBitfield.testBit( entry.partitionIndex ))", (const char *)&queryFormat, "clientData->sortedPartitionBitfield.testBit( entry.partitionIndex )") )
      __debugbreak();
    v9 = sortedPartitions[v6].partitionIndex;
    if ( (unsigned int)v9 >= clientData->partitionCandidateBitfield.bitCount )
    {
      LODWORD(v14) = clientData->partitionCandidateBitfield.bitCount;
      LODWORD(v13) = sortedPartitions[v6].partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    clientData->partitionCandidateBitfield.array[v9 >> 5] |= 0x80000000 >> (v9 & 0x1F);
    v10 = sortedPartitions[v6].partitionIndex;
    if ( (unsigned int)v10 >= clientData->sortedPartitionBitfield.bitCount )
    {
      LODWORD(v14) = clientData->sortedPartitionBitfield.bitCount;
      LODWORD(v13) = sortedPartitions[v6].partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    clientData->sortedPartitionBitfield.array[v10 >> 5] &= ~(0x80000000 >> (v10 & 0x1F));
    i = clientData->sortedPartitionCount - 1;
  }
}

/*
==============
SpatialPartition_PopulationSort_SortByDistance
==============
*/
void SpatialPartition_PopulationSort_SortByDistance(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos)
{
  unsigned int priorityCount; 
  SpatialPartition_Population *population; 
  unsigned int v6; 
  float *v8; 
  unsigned int v9; 
  __int64 v10; 
  float *v18; 
  __int64 v19; 
  float v21; 
  double v22; 
  SpatialPartition_PopulationSort_SortByDistanceIntersector extentIntersect; 
  Bounds bounds; 
  SpatialPartition_Population_Tree_AABBPartitionIterator treeIter; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 183, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 184, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  priorityCount = clientData->priorityCount;
  population = clientData->population;
  v6 = 0;
  LODWORD(_XMM6) = 0;
  if ( priorityCount >= 4 )
  {
    v8 = &clientData->settings.maxDistanceForPriority[1];
    v9 = ((priorityCount - 4) >> 2) + 1;
    v10 = v9;
    v6 = 4 * v9;
    do
    {
      _XMM0 = *((unsigned int *)v8 - 1);
      _XMM1 = *(unsigned int *)v8;
      v8 += 4;
      __asm { vmaxss  xmm2, xmm0, xmm6 }
      _XMM0 = *((unsigned int *)v8 - 3);
      __asm { vmaxss  xmm3, xmm1, xmm2 }
      _XMM1 = *((unsigned int *)v8 - 2);
      __asm
      {
        vmaxss  xmm2, xmm0, xmm3
        vmaxss  xmm6, xmm1, xmm2
      }
      --v10;
    }
    while ( v10 );
  }
  if ( v6 < priorityCount )
  {
    v18 = &clientData->settings.maxDistanceForPriority[v6];
    v19 = priorityCount - v6;
    do
    {
      _XMM0 = *(unsigned int *)v18++;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
      --v19;
    }
    while ( v19 );
  }
  v21 = viewPos->v[2];
  *(_QWORD *)bounds.midPoint.v = *(_QWORD *)viewPos->v;
  bounds.halfSize.v[0] = *(float *)&_XMM6;
  bounds.halfSize.v[1] = *(float *)&_XMM6;
  bounds.halfSize.v[2] = *(float *)&_XMM6;
  bounds.midPoint.v[2] = v21;
  treeIter.m_tree = NULL;
  *(_QWORD *)&treeIter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&treeIter, population->tree, &bounds);
  v22 = *(double *)viewPos->v;
  extentIntersect.viewPos.v[2] = viewPos->v[2];
  *(double *)extentIntersect.viewPos.v = v22;
  extentIntersect.partitionDistance = *(float *)&_XMM6;
  SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, &treeIter, &extentIntersect);
  SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, viewPos, &extentIntersect);
  SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, *(float *)&_XMM6 * *(float *)&_XMM6);
}

/*
==============
SpatialPartition_PopulationSort_SortByDistanceWithViewAngle
==============
*/
void SpatialPartition_PopulationSort_SortByDistanceWithViewAngle(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos, const float minViewAngleDistance, const vec3_t *lookAtDir, float fovInDegrees)
{
  float v9; 
  SpatialPartition_Population *population; 
  float v11; 
  unsigned int v12; 
  SpatialPartition_Population *v13; 
  unsigned int v14; 
  float *v16; 
  unsigned int v17; 
  __int64 v18; 
  float *v26; 
  __int64 v27; 
  float v28; 
  double v29; 
  unsigned int priorityCount; 
  unsigned int v31; 
  __int128 v32; 
  __int128 v33; 
  float *v35; 
  unsigned int v36; 
  __int64 v37; 
  float *v44; 
  __int64 v45; 
  float v46; 
  float v47; 
  SpatialPartition_PopulationSort_SortByDistanceIntersector v49; 
  float v58; 
  __int128 v61; 
  SpatialPartition_PopulationSort_SortByDistanceIntersector extentIntersect; 
  Bounds bounds; 
  Bounds v67; 
  SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector v68; 
  SpatialPartition_Population_Tree_AABBPartitionIterator treeIter; 
  SpatialPartition_Population_Tree_AABBPartitionIterator v70; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 344, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 345, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  v9 = lookAtDir->v[0];
  population = clientData->population;
  v11 = fsqrt((float)(lookAtDir->v[1] * lookAtDir->v[1]) + (float)(v9 * v9));
  if ( v11 > -0.0 )
  {
    priorityCount = clientData->priorityCount;
    v31 = 0;
    v32 = LODWORD(FLOAT_1_0);
    *(float *)&v32 = (float)(1.0 / v11) * v9;
    v33 = v32;
    _XMM6 = 0i64;
    if ( priorityCount >= 4 )
    {
      v35 = &clientData->settings.maxDistanceForPriority[1];
      v36 = ((priorityCount - 4) >> 2) + 1;
      v37 = v36;
      v31 = 4 * v36;
      do
      {
        _XMM0 = *((unsigned int *)v35 - 1);
        v35 += 4;
        __asm
        {
          vmaxss  xmm1, xmm0, xmm6
          vmaxss  xmm2, xmm1, dword ptr [rcx-10h]
        }
        _XMM0 = *((unsigned int *)v35 - 3);
        _XMM1 = *((unsigned int *)v35 - 2);
        __asm
        {
          vmaxss  xmm3, xmm0, xmm2
          vmaxss  xmm6, xmm1, xmm3
        }
        --v37;
      }
      while ( v37 );
    }
    if ( v31 < priorityCount )
    {
      v44 = &clientData->settings.maxDistanceForPriority[v31];
      v45 = priorityCount - v31;
      do
      {
        __asm { vmaxss  xmm6, xmm6, dword ptr [rcx] }
        ++v44;
        --v45;
      }
      while ( v45 );
    }
    v46 = viewPos->v[2];
    *(_QWORD *)v67.midPoint.v = *(_QWORD *)viewPos->v;
    v67.halfSize.v[0] = *(float *)&_XMM6;
    v67.halfSize.v[1] = *(float *)&_XMM6;
    v67.halfSize.v[2] = *(float *)&_XMM6;
    v67.midPoint.v[2] = v46;
    v70.m_tree = NULL;
    *(_QWORD *)&v70.m_curPartition = 0i64;
    SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&v70, population->tree, &v67);
    v47 = viewPos->v[0];
    extentIntersect.partitionDistance = 0.0;
    v49 = extentIntersect;
    v49.viewPos.v[0] = v47;
    _XMM3 = v49;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
    }
    _mm_shuffle_ps(_XMM3, _XMM3, 85);
    _mm_shuffle_ps(_XMM3, _XMM3, 170);
    _mm_shuffle_ps(_XMM3, _XMM3, 255);
    __asm
    {
      vinsertps xmm3, xmm3, xmm0, 10h
      vinsertps xmm3, xmm3, xmm1, 20h ; ' '
      vinsertps xmm3, xmm3, xmm2, 30h ; '0'
    }
    v68.m_viewPosXYXY.v = _mm_shuffle_ps(_XMM3.v, _XMM3.v, 68);
    _XMM1 = v33;
    __asm
    {
      vinsertps xmm1, xmm1, xmm10, 10h
      vinsertps xmm1, xmm1, xmm8, 20h ; ' '
    }
    v58 = *(float *)&_XMM6 * *(float *)&_XMM6;
    __asm { vinsertps xmm1, xmm1, xmm10, 30h ; '0' }
    v68.m_minViewAngleDistanceSq = minViewAngleDistance * minViewAngleDistance;
    _XMM0 = LODWORD(FLOAT_3_4028235e38);
    v68.m_partitionDistanceSq = v58;
    v68.m_viewPos = (float4)_XMM3.v;
    v68.m_lookAtDirXYXY = (float4)_XMM1.v;
    if ( *(float *)&v33 != 0.0 )
    {
      v61 = LODWORD(FLOAT_1_0);
      *(float *)&v61 = 1.0 / *(float *)&v33;
      _XMM0 = v61;
    }
    __asm
    {
      vinsertps xmm0, xmm0, xmm1, 10h
      vinsertps xmm0, xmm0, xmm2, 20h ; ' '
      vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    }
    v68.m_lookAtDirInv_XYXY = (float4)_XMM0.v;
    v68.m_cos_halfFOV = cosf_0(fovInDegrees * 0.0087266462);
    SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector_(clientData, &v70, &v68);
    SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector_(clientData, viewPos, &v68);
    SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, v58);
  }
  else
  {
    if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 184, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
      __debugbreak();
    v12 = clientData->priorityCount;
    v13 = clientData->population;
    v14 = 0;
    _XMM6 = 0i64;
    if ( v12 >= 4 )
    {
      v16 = &clientData->settings.maxDistanceForPriority[1];
      v17 = ((v12 - 4) >> 2) + 1;
      v18 = v17;
      v14 = 4 * v17;
      do
      {
        _XMM0 = *((unsigned int *)v16 - 1);
        _XMM1 = *(unsigned int *)v16;
        v16 += 4;
        __asm { vmaxss  xmm2, xmm0, xmm6 }
        _XMM0 = *((unsigned int *)v16 - 3);
        __asm { vmaxss  xmm3, xmm1, xmm2 }
        _XMM1 = *((unsigned int *)v16 - 2);
        __asm
        {
          vmaxss  xmm2, xmm0, xmm3
          vmaxss  xmm6, xmm1, xmm2
        }
        --v18;
      }
      while ( v18 );
    }
    if ( v14 < v12 )
    {
      v26 = &clientData->settings.maxDistanceForPriority[v14];
      v27 = v12 - v14;
      do
      {
        __asm { vmaxss  xmm6, xmm6, dword ptr [rcx] }
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    v28 = viewPos->v[2];
    *(_QWORD *)bounds.midPoint.v = *(_QWORD *)viewPos->v;
    bounds.halfSize.v[0] = *(float *)&_XMM6;
    bounds.halfSize.v[1] = *(float *)&_XMM6;
    bounds.halfSize.v[2] = *(float *)&_XMM6;
    bounds.midPoint.v[2] = v28;
    treeIter.m_tree = NULL;
    *(_QWORD *)&treeIter.m_curPartition = 0i64;
    SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&treeIter, v13->tree, &bounds);
    v29 = *(double *)viewPos->v;
    extentIntersect.viewPos.v[2] = viewPos->v[2];
    *(double *)extentIntersect.viewPos.v = v29;
    extentIntersect.partitionDistance = *(float *)&_XMM6;
    SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, &treeIter, &extentIntersect);
    SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, viewPos, &extentIntersect);
    SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, *(float *)&_XMM6 * *(float *)&_XMM6);
  }
}

/*
==============
SpatialPartition_PopulationSort_Update
==============
*/
void SpatialPartition_PopulationSort_Update(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks)
{
  int v4; 
  unsigned int v5; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  unsigned __int64 partitionIndex; 
  char v8; 
  unsigned __int64 v9; 
  char v10; 
  __int64 priorityCount; 
  int *maxActivatedForPriority; 
  float v13; 
  bool v14; 
  int *out_numToEvictAcrossPriorities; 
  int *out_lastAddSortedIndex; 
  int lastAddPriority; 
  int requestedNumToEvictAcrossPriorities; 
  float cutoffDistancesSq[4]; 
  int lastAddSortIndex[4]; 
  int out_numToEvictForPrio[4]; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 915, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !callbacks->getTransient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 916, ASSERT_TYPE_ASSERT, "(callbacks.getTransient)", (const char *)&queryFormat, "callbacks.getTransient") )
    __debugbreak();
  if ( !callbacks->getPriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 917, ASSERT_TYPE_ASSERT, "(callbacks.getPriority)", (const char *)&queryFormat, "callbacks.getPriority") )
    __debugbreak();
  if ( !callbacks->canActivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 918, ASSERT_TYPE_ASSERT, "(callbacks.canActivate)", (const char *)&queryFormat, "callbacks.canActivate") )
    __debugbreak();
  if ( !callbacks->activate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 919, ASSERT_TYPE_ASSERT, "(callbacks.activate)", (const char *)&queryFormat, "callbacks.activate") )
    __debugbreak();
  if ( !callbacks->deactivate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 920, ASSERT_TYPE_ASSERT, "(callbacks.deactivate)", (const char *)&queryFormat, "callbacks.deactivate") )
    __debugbreak();
  v4 = 0;
  if ( clientData->anyPartitionTransientLoaded || clientData->anyPartitionTransientPopulationLoaded )
  {
    v5 = 0;
    if ( clientData->sortedPartitionCount )
    {
      do
      {
        sortedPartitions = clientData->sortedPartitions;
        if ( !clientData->anyPartitionTransientLoaded )
          goto LABEL_28;
        partitionIndex = sortedPartitions[v5].partitionIndex;
        if ( (unsigned int)partitionIndex >= clientData->partitionTransientLoadedBitfield.bitCount )
        {
          LODWORD(out_lastAddSortedIndex) = clientData->partitionTransientLoadedBitfield.bitCount;
          LODWORD(out_numToEvictAcrossPriorities) = sortedPartitions[v5].partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", out_numToEvictAcrossPriorities, out_lastAddSortedIndex) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (partitionIndex & 0x1F)) & clientData->partitionTransientLoadedBitfield.array[partitionIndex >> 5]) != 0 )
          v8 = 1;
        else
LABEL_28:
          v8 = 0;
        if ( !clientData->anyPartitionTransientPopulationLoaded )
          goto LABEL_35;
        v9 = sortedPartitions[v5].partitionIndex;
        if ( (unsigned int)v9 >= clientData->partitionTransientPopulationLoadedBitfield.bitCount )
        {
          LODWORD(out_lastAddSortedIndex) = clientData->partitionTransientPopulationLoadedBitfield.bitCount;
          LODWORD(out_numToEvictAcrossPriorities) = sortedPartitions[v5].partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", out_numToEvictAcrossPriorities, out_lastAddSortedIndex) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v9 & 0x1F)) & clientData->partitionTransientPopulationLoadedBitfield.array[v9 >> 5]) != 0 )
          v10 = 1;
        else
LABEL_35:
          v10 = 0;
        if ( v8 || v10 )
          sortedPartitions[v5].anyAvailableMask = -1;
        ++v5;
      }
      while ( v5 < clientData->sortedPartitionCount );
      v4 = 0;
    }
    clientData->anyPartitionTransientPopulationLoaded = 0;
    bitarray_base<bitarray_dynamic>::resetAllBits(&clientData->partitionTransientPopulationLoadedBitfield);
  }
  if ( clientData->anyPartitionTransientUnloaded || clientData->anyPartitionTransientPopulationUnloaded || clientData->anyPartitionCollisionTransientMissing )
    UpdateTransientUnloadedOrCollisionTileMissing(clientData, callbacks);
  if ( clientData->priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 934, ASSERT_TYPE_ASSERT, "( clientData->priorityCount ) <= ( SPATIAL_PARTITION_POPULATION_MAX_PRIORITY )", "%s <= %s\n\t%i, %i", "clientData->priorityCount", "SPATIAL_PARTITION_POPULATION_MAX_PRIORITY", clientData->priorityCount, 4) )
    __debugbreak();
  priorityCount = clientData->priorityCount;
  if ( (_DWORD)priorityCount )
  {
    maxActivatedForPriority = clientData->settings.maxActivatedForPriority;
    do
    {
      v13 = *((float *)maxActivatedForPriority - 4);
      v4 += *maxActivatedForPriority++;
      *(float *)((char *)maxActivatedForPriority + (char *)cutoffDistancesSq - (char *)clientData - 52) = v13 * v13;
      --priorityCount;
    }
    while ( priorityCount );
  }
  v14 = clientData->settings.maxActivatedTotal >= v4;
  UpdateAddObjects(clientData, callbacks, cutoffDistancesSq, v14, out_numToEvictForPrio, &requestedNumToEvictAcrossPriorities, lastAddSortIndex, &lastAddPriority);
  UpdateRemoveObjects(clientData, callbacks, cutoffDistancesSq, v14, out_numToEvictForPrio, requestedNumToEvictAcrossPriorities, lastAddSortIndex, lastAddPriority);
}

/*
==============
SpatialPartition_PopulationSort_UpdateNeeded
==============
*/
char SpatialPartition_PopulationSort_UpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  unsigned int priorityCount; 
  unsigned int sortedPartitionCount; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  int v5; 
  unsigned int v6; 
  float *v7; 
  unsigned int v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float *v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  unsigned int v16; 
  float *p_distanceSq; 
  unsigned __int8 v18; 
  char v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  float v23; 
  float *v24; 
  unsigned int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  char v37; 
  float v38; 
  __int64 v39; 
  float *v40; 
  char v41; 
  char v42; 
  char v43; 
  unsigned int v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  int *maxActivatedForPriority; 
  int maxActivatedTotal; 
  char v50; 
  unsigned __int8 v52; 
  unsigned __int8 v53; 
  int v54; 
  unsigned int v55; 
  char v56[4]; 
  char v57[4]; 
  char v58; 
  char v59; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 459, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 460, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  if ( !clientData->anyPartitionTransientLoaded && !clientData->anyPartitionTransientUnloaded && !clientData->anyPartitionCollisionTransientMissing )
  {
    priorityCount = clientData->priorityCount;
    sortedPartitionCount = clientData->sortedPartitionCount;
    sortedPartitions = clientData->sortedPartitions;
    v55 = sortedPartitionCount;
    if ( priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 472, ASSERT_TYPE_ASSERT, "(priorityCount <= SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "priorityCount <= SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
      __debugbreak();
    v5 = 0;
    v6 = 0;
    if ( priorityCount >= 4 )
    {
      v7 = &clientData->settings.maxDistanceForPriority[1];
      v8 = ((priorityCount - 4) >> 2) + 1;
      v9 = v8;
      v6 = 4 * v8;
      do
      {
        v10 = *v7 * *v7;
        *(float *)((char *)v7 + v56 - (char *)clientData - 36) = *(v7 - 1) * *(v7 - 1);
        v11 = v7[1];
        *(float *)((char *)v7 + v57 - (char *)clientData - 36) = v10;
        *(float *)((char *)v7 + &v59 - (char *)clientData - 36) = v7[2] * v7[2];
        *(float *)((char *)v7 + &v58 - (char *)clientData - 36) = v11 * v11;
        v7 += 4;
        --v9;
      }
      while ( v9 );
    }
    if ( v6 < priorityCount )
    {
      v12 = (float *)&v56[4 * v6];
      v13 = priorityCount - v6;
      do
      {
        *v12 = *(float *)((char *)v12 + (char *)clientData - v56 + 32) * *(float *)((char *)v12 + (char *)clientData - v56 + 32);
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    v14 = 0;
    v54 = 0;
    v15 = 0;
    v52 = 0;
    v53 = 0;
    v16 = 1;
    if ( sortedPartitionCount )
    {
      p_distanceSq = &sortedPartitions->distanceSq;
      while ( 1 )
      {
        v18 = *((_BYTE *)p_distanceSq - 2);
        if ( (v18 & v14) != 0 )
          break;
        v19 = 0;
        v20 = 0;
        v21 = 1;
        v22 = 0;
        if ( priorityCount >= 4 )
        {
          v23 = *p_distanceSq;
          v24 = (float *)v57;
          v25 = ((priorityCount - 4) >> 2) + 1;
          v26 = v25;
          v22 = 4 * v25;
          do
          {
            v27 = 0;
            if ( v23 < *(v24 - 1) )
              v27 = v21;
            v28 = v27 | v20;
            if ( (*((_BYTE *)p_distanceSq - 2) & (unsigned __int8)v21) != 0 && v23 >= *(v24 - 1) )
              v19 = 1;
            v29 = 2 * v21;
            v30 = 0;
            if ( v23 < *v24 )
              v30 = v29;
            v31 = v30 | v28;
            if ( (*((_BYTE *)p_distanceSq - 2) & (unsigned __int8)v29) != 0 && v23 >= *v24 )
              v19 = 1;
            v32 = 2 * v29;
            v33 = 0;
            if ( v23 < v24[1] )
              v33 = v32;
            v34 = v33 | v31;
            if ( (*((_BYTE *)p_distanceSq - 2) & (unsigned __int8)v32) != 0 && v23 >= v24[1] )
              v19 = 1;
            v35 = 2 * v32;
            v36 = 0;
            if ( v23 < v24[2] )
              v36 = v35;
            v20 = v36 | v34;
            if ( (*((_BYTE *)p_distanceSq - 2) & (unsigned __int8)v35) != 0 )
            {
              v37 = v19;
              if ( v23 >= v24[2] )
                v37 = 1;
              v19 = v37;
            }
            v21 = 2 * v35;
            v24 += 4;
            --v26;
          }
          while ( v26 );
        }
        if ( v22 < priorityCount )
        {
          v38 = *p_distanceSq;
          v39 = priorityCount - v22;
          v40 = (float *)&v56[4 * v22];
          do
          {
            v41 = 0;
            if ( v38 < *v40 )
              v41 = v21;
            LOBYTE(v20) = v41 | v20;
            if ( (*((_BYTE *)p_distanceSq - 2) & (unsigned __int8)v21) != 0 )
            {
              v42 = v19;
              if ( v38 >= *v40 )
                v42 = 1;
              v19 = v42;
            }
            LOBYTE(v21) = 2 * v21;
            ++v40;
            --v39;
          }
          while ( v39 );
        }
        if ( v19 )
          break;
        v43 = *((_BYTE *)p_distanceSq - 1);
        p_distanceSq += 2;
        v14 = v20 & v43 | v52;
        v15 = v18 | v53;
        v52 = v14;
        v53 |= v18;
        if ( ++v54 >= v55 )
          goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      v44 = clientData->priorityCount;
      LOBYTE(v45) = 0;
      LOBYTE(v46) = 0;
      v47 = 0;
      if ( v44 )
      {
        maxActivatedForPriority = clientData->settings.maxActivatedForPriority;
        do
        {
          v5 += maxActivatedForPriority[4];
          if ( maxActivatedForPriority[4] >= *maxActivatedForPriority )
          {
            if ( maxActivatedForPriority[4] > *maxActivatedForPriority )
              v46 = (unsigned __int8)v46 | (1 << v47);
          }
          else
          {
            v45 = (unsigned __int8)v45 | (1 << v47);
          }
          ++v47;
          ++maxActivatedForPriority;
        }
        while ( v47 < v44 );
        v14 = v52;
        v15 = v53;
      }
      maxActivatedTotal = clientData->settings.maxActivatedTotal;
      if ( (!(_BYTE)v45 || v5 >= maxActivatedTotal || !v14) && !(_BYTE)v46 && v5 <= maxActivatedTotal )
      {
        v50 = 2;
        if ( v44 <= 1 )
          return 0;
        while ( (v14 & (unsigned __int8)v50) == 0 || ((unsigned __int8)v45 & (unsigned __int8)v50) == 0 || (v15 & (unsigned __int8)(v50 - 1)) == 0 )
        {
          ++v16;
          v50 *= 2;
          if ( v16 >= v44 )
            return 0;
        }
      }
    }
  }
  return 1;
}

/*
==============
UpdateAddObjects
==============
*/
void UpdateAddObjects(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const float *cutoffDistancesSq, const bool treatPrioritiesSeparately, int *out_numToEvictForPrio, int *out_numToEvictAcrossPriorities, int *out_lastAddSortedIndex, int *out_lastAddPriority)
{
  int v8; 
  const SpatialPartition_PopulationSort_Callbacks *v10; 
  int *v11; 
  int v13; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  int maxActivatedTotal; 
  int v19; 
  int maxAddPerUpdate; 
  int v21; 
  unsigned int priorityCount; 
  unsigned int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  signed __int64 v27; 
  signed __int64 v28; 
  int v29; 
  int *v30; 
  int v31; 
  unsigned int v32; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  int *v35; 
  unsigned int partitionIndex; 
  unsigned __int8 v37; 
  SpatialPartition_Population *population; 
  char v40; 
  int v41; 
  SpatialPartition_Population_Node *m_curNode; 
  char v43; 
  unsigned int v44; 
  unsigned int v45; 
  bool v46; 
  int v47; 
  int v48; 
  char v49; 
  __int64 v50; 
  __int64 v51; 
  signed __int64 v52; 
  int v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  unsigned __int8 v59; 
  char v60; 
  unsigned int v62; 
  int v63; 
  int v64; 
  unsigned int v65; 
  int v66; 
  int v67; 
  signed __int64 v69; 
  signed __int64 v71; 
  int v72; 
  signed __int64 v73; 
  signed __int64 v74; 
  SpatialPartition_Population_NodeIterator v75; 
  int *v76; 
  __int64 v77; 
  SpatialPartition_PopulationSort_Entry *v78; 
  int *v79; 
  int v80[4]; 

  v8 = 0;
  v10 = callbacks;
  v11 = out_lastAddSortedIndex;
  *out_lastAddPriority = -1;
  v13 = 0;
  *out_numToEvictAcrossPriorities = 0;
  v14 = 0;
  v15 = 0;
  v79 = out_numToEvictAcrossPriorities;
  v76 = out_lastAddPriority;
  v66 = 0;
  v72 = 0;
  if ( clientData->priorityCount )
  {
    do
    {
      v16 = v15;
      v17 = 0;
      v14 += clientData->numActivatedForPriority[v15];
      out_lastAddSortedIndex[v15] = -1;
      if ( clientData->numActivatedForPriority[v15] - clientData->settings.maxActivatedForPriority[v15] > 0 )
        v17 = clientData->numActivatedForPriority[v15] - clientData->settings.maxActivatedForPriority[v15];
      ++v15;
      v13 += v17;
      out_numToEvictForPrio[v16] = v17;
    }
    while ( v15 < clientData->priorityCount );
    v72 = v13;
    v66 = v14;
  }
  maxActivatedTotal = clientData->settings.maxActivatedTotal;
  if ( v14 > maxActivatedTotal )
  {
    v19 = v14 - maxActivatedTotal - v13;
    if ( v19 > 0 )
      v8 = v19;
    *out_numToEvictAcrossPriorities = v8;
    if ( v8 && treatPrioritiesSeparately && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 683, ASSERT_TYPE_ASSERT, "(*out_numToEvictAcrossPriorities == 0 || !treatPrioritiesSeparately)", (const char *)&queryFormat, "*out_numToEvictAcrossPriorities == 0 || !treatPrioritiesSeparately") )
      __debugbreak();
    return;
  }
  maxAddPerUpdate = clientData->settings.maxAddPerUpdate;
  v21 = maxActivatedTotal - v14;
  if ( maxAddPerUpdate < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", 0, clientData->settings.maxAddPerUpdate) )
    __debugbreak();
  if ( maxAddPerUpdate < v21 )
    v21 = maxAddPerUpdate;
  if ( v21 < 0 )
    v21 = 0;
  v64 = v21;
  if ( clientData->priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 693, ASSERT_TYPE_ASSERT, "( clientData->priorityCount ) <= ( SPATIAL_PARTITION_POPULATION_MAX_PRIORITY )", "%s <= %s\n\t%i, %i", "clientData->priorityCount", "SPATIAL_PARTITION_POPULATION_MAX_PRIORITY", clientData->priorityCount, 4) )
    __debugbreak();
  priorityCount = clientData->priorityCount;
  v23 = 0;
  if ( priorityCount )
  {
    do
    {
      v24 = v23;
      v25 = clientData->settings.maxActivatedForPriority[v23] - clientData->numActivatedForPriority[v23];
      if ( maxAddPerUpdate < 0 )
      {
        LODWORD(v57) = maxAddPerUpdate;
        LODWORD(v56) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v56, v57) )
          __debugbreak();
      }
      priorityCount = clientData->priorityCount;
      if ( maxAddPerUpdate < v25 )
        v25 = maxAddPerUpdate;
      if ( v25 < 0 )
        v25 = 0;
      ++v23;
      v80[v24] = v25;
    }
    while ( v23 < priorityCount );
    v10 = callbacks;
    v11 = out_lastAddSortedIndex;
  }
  v26 = priorityCount - 1;
  v62 = priorityCount - 1;
  if ( (int)(priorityCount - 1) >= 0 )
  {
    v27 = (char *)v11 - (char *)clientData;
    v73 = (char *)out_numToEvictForPrio - (char *)clientData;
    v28 = (char *)cutoffDistancesSq - (char *)clientData;
    v69 = (char *)cutoffDistancesSq - (char *)clientData;
    v29 = __ROL4__(1, v26);
    v63 = v29;
    v30 = &clientData->numActivatedForPriority[v26];
    v74 = v27;
    v71 = (char *)v80 - (char *)clientData;
    v31 = 0;
    while ( 1 )
    {
      v32 = 0;
      v65 = 0;
      if ( clientData->sortedPartitionCount )
        break;
LABEL_101:
      v27 = v74;
      --v26;
      v29 = __ROR4__(v29, 1);
      --v30;
      v62 = v26;
      v63 = v29;
      if ( v26 < 0 )
        return;
    }
LABEL_36:
    sortedPartitions = clientData->sortedPartitions;
    _XMM0 = *(unsigned int *)((char *)v30 + v28 - 64);
    v77 = v32;
    v78 = sortedPartitions;
    if ( *(float *)&_XMM0 <= sortedPartitions[v32].distanceSq )
      goto LABEL_101;
    v35 = v76;
    *(int *)((char *)v30 + v27 - 64) = v32;
    *v35 = v26;
    if ( ((unsigned __int8)v29 & sortedPartitions[v32].anyAvailableMask) == 0 )
      goto LABEL_78;
    partitionIndex = sortedPartitions[v32].partitionIndex;
    v37 = 0;
    population = clientData->population;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v40 = 0;
    v59 = 0;
    v60 = 0;
    v41 = 0;
    *(_OWORD *)&v75.m_population = _XMM0;
    v67 = 0;
    v75.m_curIndex = -1;
    SpatialPartition_Population_NodeIterator::Init(&v75, population, partitionIndex);
    if ( !SpatialPartition_Population_NodeIterator::Advance(&v75) )
      goto LABEL_73;
    while ( 1 )
    {
      m_curNode = v75.m_curNode;
      if ( !v75.m_curNode )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
          __debugbreak();
        m_curNode = v75.m_curNode;
      }
      v43 = v10->isActive(clientData, m_curNode);
      v44 = v10->getPriority(clientData, m_curNode);
      if ( v44 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 731, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
        __debugbreak();
      v45 = v10->getTransient(clientData, m_curNode);
      if ( v43 )
      {
        if ( v45 && !bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 578, ASSERT_TYPE_ASSERT, "(GetTransientLoaded( clientData, node, getTransient ))", (const char *)&queryFormat, "GetTransientLoaded( clientData, node, getTransient )") )
          __debugbreak();
        v46 = 1;
      }
      else
      {
        if ( v45 )
          v46 = bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v45);
        else
          v46 = 1;
        if ( v46 && v44 == v62 && v10->canActivate(clientData, m_curNode) )
        {
          if ( v64 > 0 )
          {
            v47 = *(int *)((char *)v30 + v71 - 64);
            if ( v47 > 0 )
            {
              v10->activate(clientData, m_curNode, v65);
              if ( !v10->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 740, ASSERT_TYPE_ASSERT, "(callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "callbacks.isActive( clientData, node )") )
              {
                __debugbreak();
                v47 = *(int *)((char *)v30 + v71 - 64);
              }
              ++*v30;
              v43 = 1;
              --v64;
              ++v66;
              *(int *)((char *)v30 + v71 - 64) = v47 - 1;
              v31 = 0;
              goto LABEL_66;
            }
            v31 = 0;
          }
          ++v67;
        }
      }
LABEL_66:
      v48 = 1 << v44;
      v49 = 1 << v44;
      if ( !v43 )
        v49 = 0;
      v59 |= v49;
      if ( v43 || !v46 )
        LOBYTE(v48) = 0;
      v40 = v48 | v60;
      v60 |= v48;
      if ( !SpatialPartition_Population_NodeIterator::Advance(&v75) )
      {
        v21 = v64;
        v41 = v67;
        v37 = v59;
LABEL_73:
        v50 = v77;
        v51 = (__int64)v78;
        v78[v77].anyActiveMask = v37;
        *(_BYTE *)(v51 + 8 * v50 + 3) = v40;
        if ( *(int *)((char *)v30 + v71 - 64) && v21 || !treatPrioritiesSeparately && !v41 )
        {
          v27 = v74;
          v29 = v63;
          v26 = v62;
          v32 = v65;
LABEL_78:
          v28 = v69;
          v65 = ++v32;
          if ( v32 >= clientData->sortedPartitionCount )
            goto LABEL_101;
          goto LABEL_36;
        }
        v52 = (char *)out_numToEvictForPrio - (char *)clientData;
        if ( v41 + *v30 - *(v30 - 4) > 0 )
          v31 = v41 + *v30 - *(v30 - 4);
        v53 = v66 + v41 - clientData->settings.maxActivatedTotal;
        v54 = 0;
        if ( v53 > 0 )
          v54 = v53;
        if ( *(int *)((char *)v30 + v73 - 64) )
        {
          LODWORD(v58) = *(int *)((char *)v30 + v73 - 64);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 765, ASSERT_TYPE_ASSERT, "( out_numToEvictForPrio[addPrio] ) == ( 0 )", "%s == %s\n\t%i, %i", "out_numToEvictForPrio[addPrio]", "0", v58, 0i64) )
            __debugbreak();
          v52 = (char *)out_numToEvictForPrio - (char *)clientData;
        }
        if ( treatPrioritiesSeparately )
        {
          *(int *)((char *)v30 + v52 - 64) = v31;
          if ( !v31 && v54 && !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 770, ASSERT_TYPE_ASSERT, "(numEvictForPriority || numEvictForTotal == 0 || totalNumToEvictForPrios)", (const char *)&queryFormat, "numEvictForPriority || numEvictForTotal == 0 || totalNumToEvictForPrios") )
            __debugbreak();
          if ( v21 )
          {
LABEL_100:
            v28 = v69;
            v31 = 0;
            v29 = v63;
            v26 = v62;
            goto LABEL_101;
          }
        }
        else
        {
          if ( v31 > v54 )
            v54 = v31;
          v55 = v54 + *v79;
          *v79 = v55;
          if ( v21 || v55 <= 0 )
            goto LABEL_100;
        }
        return;
      }
    }
  }
}

/*
==============
UpdateRemoveObjects
==============
*/
void UpdateRemoveObjects(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const float *cutoffDistancesSq, const bool treatPrioritiesSeparately, const int *requestedNumToEvictForPrio, const int requestedNumToEvictAcrossPriorities, const int *lastAddSortIndex, const int lastAddPriority)
{
  __int128 v8; 
  int maxRemovePerUpdate; 
  const float *v10; 
  int v11; 
  unsigned int priorityCount; 
  const SpatialPartition_PopulationSort_Callbacks *v13; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v24; 
  __int128 *v26; 
  signed __int64 v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  const int *v32; 
  __int64 v33; 
  int v34; 
  signed int v35; 
  __int64 v36; 
  const float *v37; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  bool v40; 
  int v41; 
  unsigned int partitionIndex; 
  unsigned __int8 v43; 
  SpatialPartition_Population *population; 
  unsigned __int8 v46; 
  SpatialPartition_Population_Node *m_curNode; 
  bool v48; 
  unsigned int v49; 
  __int64 v50; 
  unsigned int v51; 
  bool v52; 
  int v53; 
  char v54; 
  int v55; 
  int v56; 
  bool v57; 
  int v59; 
  __int64 v60; 
  int v61; 
  int v62; 
  signed int v63; 
  int v66; 
  __int64 v67; 
  __int64 v68; 
  SpatialPartition_Population_NodeIterator v69; 
  SpatialPartition_PopulationSort_Entry *v70; 
  const float *v71; 
  __int128 v72[6]; 
  const int *lastAddSortIndexa; 

  maxRemovePerUpdate = clientData->settings.maxRemovePerUpdate;
  v10 = cutoffDistancesSq;
  v11 = maxRemovePerUpdate;
  priorityCount = clientData->priorityCount;
  v13 = callbacks;
  if ( requestedNumToEvictAcrossPriorities < maxRemovePerUpdate )
    v11 = requestedNumToEvictAcrossPriorities;
  v72[2] = v8;
  v62 = v11;
  v61 = maxRemovePerUpdate;
  _XMM6 = (unsigned int)maxRemovePerUpdate;
  __asm { vpshufd xmm6, xmm6, 0 }
  if ( priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 813, ASSERT_TYPE_ASSERT, "( clientData->priorityCount ) <= ( SPATIAL_PARTITION_POPULATION_MAX_PRIORITY )", "%s <= %s\n\t%i, %i", "clientData->priorityCount", "SPATIAL_PARTITION_POPULATION_MAX_PRIORITY", priorityCount, 4) )
    __debugbreak();
  v17 = (int)clientData->priorityCount;
  v18 = 0;
  if ( (_DWORD)v17 )
  {
    if ( (unsigned int)v17 >= 0x10 )
    {
      v19 = 2;
      do
      {
        v20 = v18;
        v18 += 16;
        __asm { vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4] }
        *(__int128 *)((char *)v72 + 4 * v20) = _XMM1;
        __asm { vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4] }
        v72[v19 - 1] = _XMM1;
        __asm { vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4] }
        v72[v19] = _XMM1;
        v24 = v19 * 4 + 4;
        v19 += 4;
        __asm { vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4] }
        *(__int128 *)((char *)v72 + 4 * v24) = _XMM1;
      }
      while ( v18 < ((unsigned int)v17 & 0xFFFFFFF0) );
    }
    if ( v18 < (unsigned int)v17 )
    {
      v26 = &v72[v18 / 4];
      v27 = (char *)requestedNumToEvictForPrio - (char *)v72;
      v28 = (unsigned int)v17 - v18;
      do
      {
        v29 = maxRemovePerUpdate;
        if ( *(_DWORD *)((char *)v26 + v27) < maxRemovePerUpdate )
          v29 = *(_DWORD *)((char *)v26 + v27);
        *(_DWORD *)v26 = v29;
        v26 = (__int128 *)((char *)v26 + 4);
        --v28;
      }
      while ( v28 );
    }
  }
  v30 = 0;
  v59 = 0;
  v60 = v17;
  if ( (int)v17 > 0 )
  {
    v31 = 0i64;
    v32 = (const int *)((char *)lastAddSortIndex - (char *)v10);
    lastAddSortIndexa = (const int *)((char *)lastAddSortIndex - (char *)v10);
    v33 = v17;
    v68 = 0i64;
    while ( 1 )
    {
      v34 = 1 << v30;
      v35 = clientData->sortedPartitionCount - 1;
      v66 = 1 << v30;
      v36 = v35;
      v67 = v35;
      v63 = v35;
      if ( v35 >= 0 )
        break;
LABEL_70:
      ++v30;
      ++v31;
      v59 = v30;
      v68 = v31;
      if ( v31 >= v33 )
        return;
    }
    v37 = &v10[v31];
    v71 = v37;
    while ( v35 != *(const int *)((char *)v32 + (_QWORD)v37) )
    {
      sortedPartitions = clientData->sortedPartitions;
      _XMM0 = *(unsigned int *)v37;
      v70 = sortedPartitions;
      v40 = *(float *)&_XMM0 <= sortedPartitions[v36].distanceSq;
      v57 = v40;
      if ( *(float *)&_XMM0 > sortedPartitions[v36].distanceSq )
      {
        v41 = v11 + *((_DWORD *)v72 + v31);
        if ( !v41 )
          goto LABEL_68;
      }
      else
      {
        if ( !maxRemovePerUpdate )
          return;
        v41 = maxRemovePerUpdate;
      }
      if ( ((unsigned __int8)v34 & sortedPartitions[v36].anyActiveMask) != 0 )
      {
        partitionIndex = sortedPartitions[v36].partitionIndex;
        v43 = 0;
        population = clientData->population;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v69.m_population = _XMM0;
        v46 = 0;
        v69.m_curIndex = -1;
        SpatialPartition_Population_NodeIterator::Init(&v69, population, partitionIndex);
        if ( SpatialPartition_Population_NodeIterator::Advance(&v69) )
        {
          do
          {
            m_curNode = v69.m_curNode;
            if ( !v69.m_curNode )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                __debugbreak();
              m_curNode = v69.m_curNode;
            }
            v48 = v13->isActive(clientData, m_curNode);
            v49 = v13->getPriority(clientData, m_curNode);
            v50 = v49;
            if ( v49 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 875, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
              __debugbreak();
            v51 = v13->getTransient(clientData, m_curNode);
            if ( v48 )
            {
              if ( v51 && !bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v51) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 578, ASSERT_TYPE_ASSERT, "(GetTransientLoaded( clientData, node, getTransient ))", (const char *)&queryFormat, "GetTransientLoaded( clientData, node, getTransient )") )
                __debugbreak();
              v52 = 1;
            }
            else if ( v51 )
            {
              v52 = bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v51);
            }
            else
            {
              v52 = 1;
            }
            if ( v41 > 0 && v48 && (_DWORD)v50 == v59 )
            {
              callbacks->deactivate(clientData, m_curNode);
              v48 = 0;
              if ( callbacks->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 884, ASSERT_TYPE_ASSERT, "(!callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "!callbacks.isActive( clientData, node )") )
                __debugbreak();
              if ( clientData->numActivatedForPriority[v50] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 886, ASSERT_TYPE_ASSERT, "(clientData->numActivatedForPriority[nodePrio] > 0)", (const char *)&queryFormat, "clientData->numActivatedForPriority[nodePrio] > 0") )
                __debugbreak();
              --clientData->numActivatedForPriority[v50];
              --v41;
            }
            v53 = 1 << v50;
            v54 = 1 << v50;
            if ( !v48 )
              v54 = 0;
            v43 |= v54;
            if ( v48 || !v52 )
              LOBYTE(v53) = 0;
            v46 |= v53;
            v13 = callbacks;
          }
          while ( SpatialPartition_Population_NodeIterator::Advance(&v69) );
          sortedPartitions = v70;
          maxRemovePerUpdate = v61;
          v40 = v57;
        }
        v36 = v67;
        v35 = v63;
        v31 = v68;
        LOBYTE(v34) = v66;
        v32 = lastAddSortIndexa;
        sortedPartitions[v67].anyActiveMask = v43;
        sortedPartitions[v67].anyAvailableMask = v46;
        v11 = v62;
      }
      if ( v40 )
      {
        maxRemovePerUpdate = v41;
        v61 = v41;
      }
      else
      {
        v11 = 0;
        if ( v41 - *((_DWORD *)v72 + v31) > 0 )
          v11 = v41 - *((_DWORD *)v72 + v31);
        v55 = 0;
        v56 = v41 - v11;
        v62 = v11;
        if ( v56 > 0 )
          v55 = v56;
        *((_DWORD *)v72 + v31) = v55;
      }
      v37 = v71;
      --v35;
      --v36;
      v63 = v35;
      v67 = v36;
      if ( v36 < 0 )
      {
LABEL_68:
        v30 = v59;
LABEL_69:
        v33 = v60;
        v10 = cutoffDistancesSq;
        goto LABEL_70;
      }
    }
    v30 = v59;
    if ( treatPrioritiesSeparately || requestedNumToEvictAcrossPriorities <= 0 || v59 != lastAddPriority )
      goto LABEL_69;
  }
}

/*
==============
UpdateTransientUnloadedOrCollisionTileMissing
==============
*/
void UpdateTransientUnloadedOrCollisionTileMissing(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks)
{
  unsigned int v5; 
  SpatialPartition_PopulationSort_Entry *v6; 
  unsigned __int64 partitionIndex; 
  char v8; 
  unsigned __int64 v9; 
  char v10; 
  unsigned __int64 v11; 
  char v12; 
  unsigned int v13; 
  SpatialPartition_Population *population; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  SpatialPartition_Population_Node *m_curNode; 
  bool v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  bool v22; 
  bool v23; 
  int v24; 
  char v25; 
  __int64 v26; 
  __int64 v27; 
  SpatialPartition_PopulationSort_Entry *v28; 
  SpatialPartition_Population_NodeIterator v29; 
  char v30; 
  char v31; 
  unsigned int i; 

  if ( clientData->anyPartitionCollisionTransientMissing && !callbacks->isCollisionTileMissing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 606, ASSERT_TYPE_ASSERT, "(!clientData->anyPartitionCollisionTransientMissing || callbacks.isCollisionTileMissing)", (const char *)&queryFormat, "!clientData->anyPartitionCollisionTransientMissing || callbacks.isCollisionTileMissing") )
    __debugbreak();
  v5 = 0;
  for ( i = 0; v5 < clientData->sortedPartitionCount; i = v5 )
  {
    v6 = &clientData->sortedPartitions[v5];
    v28 = v6;
    if ( !clientData->anyPartitionTransientUnloaded )
      goto LABEL_12;
    partitionIndex = v6->partitionIndex;
    if ( (unsigned int)partitionIndex >= clientData->partitionTransientUnloadedBitfield.bitCount )
    {
      LODWORD(v27) = clientData->partitionTransientUnloadedBitfield.bitCount;
      LODWORD(v26) = v6->partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (partitionIndex & 0x1F)) & clientData->partitionTransientUnloadedBitfield.array[partitionIndex >> 5]) != 0 )
      v8 = 1;
    else
LABEL_12:
      v8 = 0;
    v30 = v8;
    if ( !clientData->anyPartitionTransientPopulationUnloaded )
      goto LABEL_19;
    v9 = v6->partitionIndex;
    if ( (unsigned int)v9 >= clientData->partitionTransientPopulationUnloadedBitfield.bitCount )
    {
      LODWORD(v27) = clientData->partitionTransientPopulationUnloadedBitfield.bitCount;
      LODWORD(v26) = v6->partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v9 & 0x1F)) & clientData->partitionTransientPopulationUnloadedBitfield.array[v9 >> 5]) != 0 )
      v10 = 1;
    else
LABEL_19:
      v10 = 0;
    if ( !clientData->anyPartitionCollisionTransientMissing )
      goto LABEL_26;
    v11 = v6->partitionIndex;
    if ( (unsigned int)v11 >= clientData->partitionCollisionTransientMissingBitfield.bitCount )
    {
      LODWORD(v27) = clientData->partitionCollisionTransientMissingBitfield.bitCount;
      LODWORD(v26) = v6->partitionIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v11 & 0x1F)) & clientData->partitionCollisionTransientMissingBitfield.array[v11 >> 5]) != 0 )
      v12 = 1;
    else
LABEL_26:
      v12 = 0;
    v31 = v12;
    if ( v6->anyActiveMask && (v8 || v10 || v12) )
    {
      v13 = v6->partitionIndex;
      population = clientData->population;
      v15 = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v29.m_population = _XMM0;
      v16 = 0;
      v29.m_curIndex = -1;
      SpatialPartition_Population_NodeIterator::Init(&v29, population, v13);
      if ( SpatialPartition_Population_NodeIterator::Advance(&v29) )
      {
        do
        {
          m_curNode = v29.m_curNode;
          if ( !v29.m_curNode )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
              __debugbreak();
            m_curNode = v29.m_curNode;
          }
          v18 = callbacks->isActive(clientData, m_curNode);
          v19 = callbacks->getPriority(clientData, m_curNode);
          v20 = v19;
          if ( v19 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 629, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
            __debugbreak();
          v22 = 1;
          if ( v30 )
          {
            v21 = callbacks->getTransient(clientData, m_curNode);
            if ( v21 )
            {
              if ( !bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v21) )
                v22 = 0;
            }
          }
          if ( v18 )
          {
            v23 = v31 && callbacks->isCollisionTileMissing(clientData, m_curNode);
            if ( !v22 || v23 )
            {
              callbacks->deactivate(clientData, m_curNode);
              if ( callbacks->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 637, ASSERT_TYPE_ASSERT, "(!callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "!callbacks.isActive( clientData, node )") )
                __debugbreak();
              --clientData->numActivatedForPriority[v20];
              v18 = 0;
            }
          }
          v24 = 1 << v20;
          v25 = 1 << v20;
          if ( !v18 )
            v25 = 0;
          v15 |= v25;
          if ( v18 || !v22 )
            LOBYTE(v24) = 0;
          v16 |= v24;
        }
        while ( SpatialPartition_Population_NodeIterator::Advance(&v29) );
        v6 = v28;
      }
      v6->anyAvailableMask = v16;
      v6->anyActiveMask = v15;
    }
    v5 = i + 1;
  }
  clientData->anyPartitionTransientPopulationUnloaded = 0;
  bitarray_base<bitarray_dynamic>::resetAllBits(&clientData->partitionTransientPopulationUnloadedBitfield);
}

/*
==============
SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector::isExtentsInViewAngle
==============
*/
bool SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector::isExtentsInViewAngle(SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector *this, const float4 *boxMinExtent, const float4 *boxMaxExtent)
{
  __m128 v5; 
  float4 v6; 
  __m128 v12; 
  __m128 v14; 

  _XMM1 = boxMinExtent->v;
  __asm { vmovlhps xmm2, xmm1, xmm0 }
  v5 = _mm128_sub_ps(_XMM2, this->m_viewPosXYXY.v);
  v6.v = (__m128)this->m_lookAtDirXYXY;
  _XMM1 = _mm128_mul_ps(v5, this->m_lookAtDirInv_XYXY.v);
  if ( _mm_shuffle_ps(v6.v, v6.v, 85).m128_f32[0] >= 0.0 )
    _mm_shuffle_ps(_XMM1, _XMM1, 85);
  else
    _mm_shuffle_ps(_XMM1, _XMM1, 255);
  if ( v6.v.m128_f32[0] >= 0.0 )
    _XMM0 = _XMM1;
  else
    _XMM0 = _mm_shuffle_ps(_XMM1, _XMM1, 170);
  __asm { vmaxss  xmm5, xmm0, xmm4 }
  if ( _mm_shuffle_ps(v6.v, v6.v, 85).m128_f32[0] >= 0.0 )
    _mm_shuffle_ps(_XMM1, _XMM1, 255);
  else
    _mm_shuffle_ps(_XMM1, _XMM1, 85);
  if ( v6.v.m128_f32[0] >= 0.0 )
    _XMM1 = _mm_shuffle_ps(_XMM1, _XMM1, 170);
  __asm { vminss  xmm0, xmm1, xmm4 }
  if ( *(float *)&_XMM5 <= *(float *)&_XMM0 && *(float *)&_XMM0 >= 0.0 )
    return 1;
  v12 = _mm128_mul_ps(v5, v6.v);
  __asm { vbroadcastss xmm2, dword ptr [rcx+50h] }
  v14 = _mm128_mul_ps(v5, v5);
  _mm128_mul_ps(_mm_sqrt_ps(_mm128_add_ps(_mm_shuffle_ps(v14, v14, 57), v14)), _XMM2);
  _XMM1 = _mm128_add_ps(_mm_shuffle_ps(v12, v12, 57), v12);
  __asm
  {
    vcmpltps xmm2, xmm1, xmm4
    vmovmskps eax, xmm2
  }
  return (_EAX & 0xF) != 15;
}

