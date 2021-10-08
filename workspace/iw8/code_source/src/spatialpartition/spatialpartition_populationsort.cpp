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
  SpatialPartition_Population_Node *v19; 
  SpatialPartition_Population *population; 
  bool v22; 
  bool v52; 
  const ScreenPlacement *v53; 
  unsigned int v55; 
  SpatialPartition_Population *v56; 
  SpatialPartition_Population *v57; 
  unsigned int v59; 
  unsigned int sortedPartitionCount; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  const vec4_t *v62; 
  float v63; 
  SpatialPartition_PopulationSort_Entry *v68; 
  const vec3_t *p_mins; 
  SpatialPartition_Population_Node *m_curNode; 
  bool v80; 
  unsigned int v81; 
  const vec4_t *v82; 
  SpatialPartition_Population_Node *v84; 
  bool v85; 
  const vec4_t *v86; 
  float v88; 
  SpatialPartition_PopulationSort_Entry *v90; 
  int v99; 
  int v100; 
  const vec4_t *v112; 
  unsigned int i; 
  unsigned int v116; 
  bool v117; 
  __int64 v133; 
  __int64 v134; 
  const vec3_t *v135; 
  vec2_t minPos; 
  vec4_t color; 
  vec3_t v139; 
  SpatialPartition_Population_NodeIterator v140; 
  vec2_t m_screenBoundsMax; 
  vec2_t v142; 
  vec2_t v143; 
  CL_DebugMapOverlay v144; 
  Bounds v145; 
  vec2_t screenBoundsMax; 
  vec2_t v147[20]; 
  char v148; 
  void *retaddr; 

  if ( clientData )
  {
    _RAX = &retaddr;
    _RBP = &v144.m_uniformScale;
    __asm
    {
      vmovaps xmmword ptr [rax-58h], xmm6
      vmovaps xmmword ptr [rax-68h], xmm7
      vmovaps xmmword ptr [rax-78h], xmm8
      vmovaps xmmword ptr [rax-88h], xmm9
      vmovaps xmmword ptr [rax-98h], xmm10
      vmovaps xmmword ptr [rax-0A8h], xmm11
      vmovaps xmmword ptr [rax-0B8h], xmm12
      vmovaps xmmword ptr [rax-0C8h], xmm13
      vmovaps xmm12, xmm3
    }
    _RSI = lastViewPos;
    _RDI = clientData;
    v19 = extraList;
    population = clientData->population;
    if ( population->partitionCount <= 2 )
    {
LABEL_74:
      _R11 = &v148;
      __asm
      {
        vmovaps xmm6, xmmword ptr [r11-18h]
        vmovaps xmm7, xmmword ptr [r11-28h]
        vmovaps xmm8, xmmword ptr [r11-38h]
        vmovaps xmm9, xmmword ptr [r11-48h]
        vmovaps xmm10, xmmword ptr [r11-58h]
        vmovaps xmm11, xmmword ptr [r11-68h]
        vmovaps xmm12, xmmword ptr [r11-78h]
        vmovaps xmm13, xmmword ptr [r11-88h]
      }
      return;
    }
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vucomiss xmm3, xmm11
    }
    v22 = population->partitionCount == 2;
    CL_DebugMapOverlay::CL_DebugMapOverlay(&v144);
    CL_DebugMapOverlay::GetDefaultScreenBounds(&v144, _RDI->localClientNum, v22, v147, &screenBoundsMax);
    _RAX = _RDI->population->tree->extents;
    __asm
    {
      vmovups xmm3, xmmword ptr [rax]
      vmovsd  xmm10, qword ptr [rax+10h]
      vshufps xmm9, xmm3, xmm3, 0FFh
      vaddss  xmm0, xmm9, xmm3
      vmovss  xmm13, cs:__real@3f000000
      vmulss  xmm8, xmm0, xmm13
      vmovss  dword ptr [rsp+208h+color], xmm8
      vmovsd  qword ptr [rbp-50h], xmm10
      vshufps xmm4, xmm3, xmm3, 55h ; 'U'
      vaddss  xmm0, xmm10, xmm4
      vmulss  xmm7, xmm0, xmm13
      vmovss  dword ptr [rsp+208h+color+4], xmm7
      vmovss  xmm6, dword ptr [rbp-4Ch]
      vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
      vaddss  xmm0, xmm1, xmm6
      vmulss  xmm2, xmm0, xmm13
      vmovss  dword ptr [rbp-80h], xmm2
      vsubss  xmm3, xmm8, xmm3
      vsubss  xmm4, xmm7, xmm4
      vsubss  xmm5, xmm2, xmm1
      vsubss  xmm0, xmm9, xmm8
      vsubss  xmm1, xmm10, xmm7
      vsubss  xmm2, xmm6, xmm2
      vmaxss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rbp-7Ch], xmm3
      vmaxss  xmm1, xmm1, xmm4
      vmovss  dword ptr [rbp-78h], xmm1
      vmaxss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rbp-74h], xmm0
    }
    if ( v22 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+208h+color]
        vmovups xmmword ptr [rbp+8], xmm0
        vmovsd  xmm1, qword ptr [rbp-78h]
        vmovsd  qword ptr [rbp+18h], xmm1
      }
    }
    else
    {
      __asm
      {
        vmaxss  xmm0, xmm1, xmm3
        vminss  xmm1, xmm12, xmm0
        vmovsd  xmm0, qword ptr [rsi]
        vmovsd  qword ptr [rbp+8], xmm0
      }
      v145.midPoint.v[2] = _RSI->v[2];
      __asm
      {
        vmovss  dword ptr [rbp-80h], xmm1
        vunpcklps xmm0, xmm1, xmm1
        vmovsd  qword ptr [rbp+14h], xmm0
      }
      v145.halfSize.v[2] = color.v[2];
    }
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v53 = scrPlaceViewDisplay;
        goto LABEL_13;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v52 )
        __debugbreak();
    }
    v53 = &scrPlaceFull;
LABEL_13:
    CL_DebugMapOverlay::Init(&v144, v53, v147, &screenBoundsMax, &v145);
    if ( !v22 || _RDI->localClientNum == LOCAL_CLIENT_0 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmmword ptr [rsp+208h+color], xmm0
      }
      m_screenBoundsMax = v144.m_screenBoundsMax;
      minPos = v144.m_screenBoundsMin;
      CL_DebugMapOverlay::DrawRect2D(&v144, &minPos, &m_screenBoundsMax, &color, Unclipped);
      v55 = 0;
      v56 = _RDI->population;
      if ( v56->partitionCount )
      {
        v57 = _RDI->population;
        do
        {
          if ( v56->buckets[v55].spatialNodeNext != -1 )
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@3f3333333f3333333f3333333f333333
              vmovups xmmword ptr [rsp+208h+color], xmm0
            }
            CL_DebugMapOverlay::DrawExtBox(&v144, &v57->tree->extents[v55], 0, &color, Clipped);
            v57 = _RDI->population;
          }
          v56 = v57;
          ++v55;
        }
        while ( v55 < v57->partitionCount );
      }
    }
    v59 = 0;
    sortedPartitionCount = _RDI->sortedPartitionCount;
    if ( sortedPartitionCount )
    {
      do
      {
        sortedPartitions = _RDI->sortedPartitions;
        v62 = &colorNearby;
        if ( sortedPartitions[v59].anyActiveMask )
          v62 = &colorActive;
        CL_DebugMapOverlay::DrawExtBox(&v144, &_RDI->population->tree->extents[sortedPartitions[v59++].partitionIndex], -1, v62, Clipped);
        sortedPartitionCount = _RDI->sortedPartitionCount;
      }
      while ( v59 < sortedPartitionCount );
      v19 = extraList;
    }
    v63 = 0.0;
    minPos.v[0] = 0.0;
    __asm
    {
      vmovss  xmm8, cs:__real@3d4ccccd
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3e800000
      vmovss  xmm7, cs:__real@40800000
    }
    if ( sortedPartitionCount )
    {
      do
      {
        v68 = _RDI->sortedPartitions;
        p_mins = &_RDI->population->tree->extents[v68[LODWORD(v63)].partitionIndex].mins;
        CL_DebugMapOverlay::TransformBox(&v144, p_mins, p_mins + 1, &v143, &v142);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp-40h]
          vsubss  xmm1, xmm0, dword ptr [rbp-38h]
          vmulss  xmm0, xmm1, xmm8; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm11; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcmpltss xmm1, xmm0, xmm10
          vblendvps xmm0, xmm0, xmm11, xmm1
          vmulss  xmm6, xmm0, xmm7
        }
        if ( v68[LODWORD(v63)].anyActiveMask )
        {
          __asm { vcomiss xmm6, xmm11 }
          if ( v68[LODWORD(v63)].anyActiveMask )
          {
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu xmmword ptr [rbp-60h], xmm0
            }
            v140.m_curIndex = -1;
            SpatialPartition_Population_NodeIterator::Init(&v140, _RDI->population, v68[LODWORD(v63)].partitionIndex);
            if ( SpatialPartition_Population_NodeIterator::Advance(&v140) )
            {
              do
              {
                m_curNode = v140.m_curNode;
                if ( !v140.m_curNode )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                    __debugbreak();
                  m_curNode = v140.m_curNode;
                }
                v80 = callbacks->isActive(_RDI, m_curNode);
                v81 = callbacks->getPriority(_RDI, m_curNode);
                callbacks->getPosition(_RDI, m_curNode, (vec3_t *)&color);
                if ( v80 )
                {
                  v82 = &colorActive;
                  if ( v81 )
                    v82 = &colorPriority;
                }
                else
                {
                  v82 = &colorNearby;
                }
                __asm
                {
                  vmovss  dword ptr [rbp-70h], xmm11
                  vmovss  dword ptr [rbp-6Ch], xmm11
                  vmovss  dword ptr [rbp-68h], xmm11
                  vmovaps xmm3, xmm6; size2D
                }
                CL_DebugMapOverlay::DrawImage(&v144, (const vec3_t *)&color, &v139, *(float *)&_XMM3, v82, Clipped, cgMedia.objectiveMaterials[0]);
              }
              while ( SpatialPartition_Population_NodeIterator::Advance(&v140) );
              v63 = minPos.v[0];
            }
          }
        }
        ++LODWORD(v63);
        minPos.v[0] = v63;
        sortedPartitionCount = _RDI->sortedPartitionCount;
      }
      while ( LODWORD(v63) < sortedPartitionCount );
      v19 = extraList;
    }
    if ( v19 && v19->spatialNodeNext != -1 )
    {
      do
      {
        v84 = (SpatialPartition_Population_Node *)((__int64 (*)(void))_RDI->population->getNodeFromIndex)();
        if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 1318, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        v85 = callbacks->isActive(_RDI, v84);
        callbacks->getPosition(_RDI, v84, (vec3_t *)&color);
        v86 = &colorNoSpatialDeactivated;
        if ( v85 )
          v86 = &colorAlways;
        __asm
        {
          vmovss  dword ptr [rbp-70h], xmm11
          vmovss  dword ptr [rbp-6Ch], xmm11
          vmovss  dword ptr [rbp-68h], xmm11
          vmovaps xmm3, xmm7; size2D
        }
        CL_DebugMapOverlay::DrawImage(&v144, (const vec3_t *)&color, &v139, *(float *)&_XMM3, v86, Clipped, cgMedia.objectiveMaterials[0]);
      }
      while ( v84->spatialNodeNext != -1 );
      sortedPartitionCount = _RDI->sortedPartitionCount;
    }
    v88 = 0.0;
    minPos.v[0] = 0.0;
    if ( sortedPartitionCount )
    {
      __asm { vmovss  xmm7, cs:__real@3e4ccccd }
      do
      {
        v90 = _RDI->sortedPartitions;
        v135 = &_RDI->population->tree->extents[v90[LODWORD(v88)].partitionIndex].mins;
        CL_DebugMapOverlay::TransformBox(&v144, v135, v135 + 1, &v142, &v143);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp-38h]
          vsubss  xmm1, xmm0, dword ptr [rbp-40h]
          vmulss  xmm0, xmm1, xmm8; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm11; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcmpltss xmm1, xmm0, xmm10
          vblendvps xmm0, xmm0, xmm11, xmm1
          vmulss  xmm6, xmm0, xmm7
          vucomiss xmm6, xmm11
        }
        if ( !v117 )
        {
          v99 = 0;
          v100 = 0;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr [rbp-60h], xmm0
          }
          v140.m_curIndex = -1;
          SpatialPartition_Population_NodeIterator::Init(&v140, _RDI->population, v90[LODWORD(v88)].partitionIndex);
          if ( SpatialPartition_Population_NodeIterator::Advance(&v140) )
          {
            do
            {
              if ( !v140.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                __debugbreak();
              ++v99;
              v100 += callbacks->isActive(_RDI, v140.m_curNode);
            }
            while ( SpatialPartition_Population_NodeIterator::Advance(&v140) );
            v88 = minPos.v[0];
          }
          _RCX = v135 + 1;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx]
            vaddss  xmm1, xmm0, dword ptr [rax]
            vmulss  xmm2, xmm1, xmm13
            vmovss  dword ptr [rsp+208h+color], xmm2
            vmovss  xmm0, dword ptr [rcx+4]
            vaddss  xmm1, xmm0, dword ptr [rax+4]
            vmulss  xmm2, xmm1, xmm13
            vmovss  dword ptr [rsp+208h+color+4], xmm2
            vmovss  xmm0, dword ptr [rcx+8]
            vaddss  xmm1, xmm0, dword ptr [rax+8]
            vmulss  xmm2, xmm1, xmm13
            vmovss  dword ptr [rbp-80h], xmm2
          }
          CL_DebugMapOverlay::TransformPos(&v144, (const vec3_t *)&color, (vec2_t *)&v139);
          v112 = &colorNearby;
          if ( v100 )
            v112 = &colorActive;
          LODWORD(v134) = v99;
          LODWORD(v133) = v100;
          __asm
          {
            vmovaps xmm3, xmm6; fontScale
            vmovd   r9d, xmm6
          }
          CL_DebugMapOverlay::DrawTextf2D(&v144, (const vec2_t *)&v139, &CL_DebugMapOverlay::TEXT_ANCHOR_CENTRE, *(float *)&_XMM3, v112, Clipped, "%u/%u", v133, v134);
        }
        ++LODWORD(v88);
        minPos.v[0] = v88;
      }
      while ( LODWORD(v88) < _RDI->sortedPartitionCount );
    }
    CL_DebugMapOverlay::DrawPlayerArrow(&v144, _RDI->localClientNum, Unclipped);
    for ( i = 0; i < _RDI->priorityCount; ++i )
    {
      v116 = 0;
      v117 = i == 0;
      if ( i )
      {
        _RAX = i;
        __asm { vmovss  xmm0, dword ptr [rdi+rax*4+20h] }
        while ( 1 )
        {
          _RAX = v116;
          __asm { vucomiss xmm0, dword ptr [rdi+rax*4+20h] }
          if ( v117 )
            break;
          v117 = ++v116 == i;
          if ( v116 >= i )
            goto LABEL_71;
        }
      }
      else
      {
LABEL_71:
        __asm
        {
          vmovups xmm0, cs:__xmm@3f8000003f0000003f0000003f000000
          vmovups xmmword ptr [rsp+208h+color], xmm0
        }
        _RAX = i;
        __asm { vmovss  xmm2, dword ptr [rdi+rax*4+20h]; radius }
        CL_DebugMapOverlay::DrawCircle(&v144, lastViewPos, *(float *)&_XMM2, &color, Clipped);
      }
    }
    CL_DebugMapOverlay::~CL_DebugMapOverlay(&v144);
    goto LABEL_74;
  }
}

/*
==============
SpatialPartition_PopulationSort_DebugDrawWorld
==============
*/
void SpatialPartition_PopulationSort_DebugDrawWorld(SpatialPartition_PopulationSort_ClientData *clientData, const SpatialPartition_PopulationSort_Callbacks *callbacks, const vec3_t *lastViewPos)
{
  SpatialPartition_Population *population; 
  unsigned int priorityCount; 
  const SpatialPartition_PopulationSort_Callbacks *v14; 
  const SpatialPartition_Population_Tree *tree; 
  unsigned int v17; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v32; 
  unsigned int v34; 
  SpatialPartition_Population *v37; 
  unsigned int sortedPartitionCount; 
  int v39; 
  unsigned int v40; 
  bool v41; 
  unsigned int partitionIndex; 
  const SpatialPartition_Population_Tree *v77; 
  unsigned int v103; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  __int64 v108; 
  SpatialPartition_Population *v109; 
  bool (__fastcall *isActive)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *); 
  bool v137; 
  void (__fastcall *getPosition)(SpatialPartition_PopulationSort_ClientData *, SpatialPartition_Population_Node *, vec3_t *); 
  const vec4_t *v139; 
  unsigned int v146; 
  Bounds bounds; 
  SpatialPartition_Population_NodeIterator color; 
  vec3_t origin; 

  __asm { vmovaps [rsp+130h+var_B0], xmm13 }
  population = clientData->population;
  priorityCount = clientData->priorityCount;
  _R12 = lastViewPos;
  __asm { vmovaps [rsp+130h+var_80], xmm10 }
  v14 = callbacks;
  __asm { vmovaps [rsp+130h+var_90], xmm11 }
  tree = population->tree;
  v17 = 0;
  __asm
  {
    vmovaps [rsp+130h+var_A0], xmm12
    vxorps  xmm11, xmm11, xmm11
  }
  _R15 = tree->extents;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( priorityCount >= 4 )
  {
    _RCX = &clientData->settings.maxDistanceForPriority[1];
    v22 = ((priorityCount - 4) >> 2) + 1;
    v23 = v22;
    v17 = 4 * v22;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx-4]
        vmovss  xmm1, dword ptr [rcx]
      }
      _RCX += 4;
      __asm
      {
        vmaxss  xmm2, xmm0, xmm10
        vmovss  xmm0, dword ptr [rcx-0Ch]
        vmaxss  xmm3, xmm1, xmm2
        vmovss  xmm1, dword ptr [rcx-8]
        vmaxss  xmm2, xmm0, xmm3
        vmaxss  xmm10, xmm1, xmm2
      }
      --v23;
    }
    while ( v23 );
  }
  if ( v17 < priorityCount )
  {
    _RCX = &clientData->settings.maxDistanceForPriority[v17];
    v32 = priorityCount - v17;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rcx] }
      ++_RCX;
      __asm { vmaxss  xmm10, xmm0, xmm10 }
      --v32;
    }
    while ( v32 );
  }
  v34 = 0;
  __asm
  {
    vaddss  xmm12, xmm10, cs:__real@459c4000
    vmovss  xmm13, cs:__real@3f000000
    vmovaps [rsp+130h+var_40], xmm6
    vmovaps [rsp+130h+var_50], xmm7
    vmovaps [rsp+130h+var_60], xmm8
    vmovaps [rsp+130h+var_70], xmm9
  }
  if ( population->partitionCount )
  {
    v37 = population;
    while ( 1 )
    {
      if ( v37->buckets[v34].spatialNodeNext != -1 )
      {
        sortedPartitionCount = clientData->sortedPartitionCount;
        v39 = -1;
        v40 = 0;
        v41 = 0;
        if ( sortedPartitionCount )
        {
          while ( 1 )
          {
            partitionIndex = clientData->sortedPartitions[v40].partitionIndex;
            v41 = v34 < partitionIndex;
            if ( v34 == partitionIndex )
              break;
            v41 = ++v40 < sortedPartitionCount;
            if ( v40 >= sortedPartitionCount )
              goto LABEL_15;
          }
          v39 = v40;
        }
LABEL_15:
        __asm
        {
          vmovss  xmm3, dword ptr [r12+4]
          vmovss  xmm1, dword ptr [r12]
        }
        _R8 = 3i64 * v34;
        __asm
        {
          vsubss  xmm0, xmm1, dword ptr [r15+r8*8+0Ch]
          vmaxss  xmm2, xmm0, xmm11
          vmovss  xmm0, dword ptr [r15+r8*8]
          vsubss  xmm1, xmm0, xmm1
          vmaxss  xmm1, xmm1, xmm11
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm1, xmm3, dword ptr [r15+r8*8+10h]
          vmaxss  xmm4, xmm1, xmm11
          vcvtss2sd xmm6, xmm0, xmm0
          vmovss  xmm0, dword ptr [r15+r8*8+4]
          vsubss  xmm2, xmm0, xmm3
          vmaxss  xmm1, xmm2, xmm11
          vmovss  xmm2, dword ptr [r12+8]
          vaddss  xmm0, xmm4, xmm1
          vsubss  xmm1, xmm2, dword ptr [r15+r8*8+14h]
          vmaxss  xmm3, xmm1, xmm11
          vcvtss2sd xmm5, xmm0, xmm0
          vmovss  xmm0, dword ptr [r15+r8*8+8]
          vsubss  xmm2, xmm0, xmm2
          vmaxss  xmm1, xmm2, xmm11
          vaddss  xmm0, xmm3, xmm1
          vcvtss2sd xmm4, xmm0, xmm0
          vmulsd  xmm2, xmm5, xmm5
          vmulsd  xmm1, xmm6, xmm6
          vmulsd  xmm0, xmm4, xmm4
          vaddsd  xmm3, xmm2, xmm1
          vaddsd  xmm2, xmm3, xmm0
          vcvtsd2ss xmm1, xmm2, xmm2
          vsqrtss xmm4, xmm1, xmm1
          vcomiss xmm4, xmm12
        }
        if ( v41 )
        {
          if ( v39 == -1 )
          {
            __asm
            {
              vcomiss xmm4, xmm10
              vmovups xmm0, xmmword ptr cs:colorPartitionBad
            }
          }
          else
          {
LABEL_19:
            _RDX = &colorPartitionInactive_0;
            if ( clientData->sortedPartitions[v39].anyActiveMask )
              _RDX = &colorPartitionActive_0;
            __asm { vmovups xmm0, xmmword ptr [rdx] }
          }
          __asm { vmovups xmmword ptr [rsp+130h+color], xmm0 }
          v77 = population->tree;
          __asm
          {
            vmovss  dword ptr [rbp+57h+origin], xmm11
            vmovss  dword ptr [rbp+57h+origin+4], xmm11
          }
          _RCX = v77->extents;
          __asm
          {
            vmovss  dword ptr [rbp+57h+origin+8], xmm11
            vmovss  xmm0, dword ptr [rcx+r8*8]
            vaddss  xmm1, xmm0, dword ptr [rcx+r8*8+0Ch]
            vmulss  xmm9, xmm1, xmm13
            vmovss  dword ptr [rsp+130h+bounds.midPoint], xmm9
            vmovss  xmm0, dword ptr [rcx+r8*8+10h]
            vaddss  xmm1, xmm0, dword ptr [rcx+r8*8+4]
            vmulss  xmm8, xmm1, xmm13
            vmovss  dword ptr [rsp+130h+bounds.midPoint+4], xmm8
            vmovss  xmm0, dword ptr [rcx+r8*8+14h]
            vaddss  xmm1, xmm0, dword ptr [rcx+r8*8+8]
            vmulss  xmm7, xmm1, xmm13
            vmovss  dword ptr [rsp+130h+bounds.midPoint+8], xmm7
            vmovss  xmm0, dword ptr [rcx+r8*8+0Ch]
            vsubss  xmm1, xmm9, dword ptr [rcx+r8*8]
            vmovss  xmm5, dword ptr [rcx+r8*8+4]
            vmovss  xmm3, dword ptr [rcx+r8*8+10h]
            vmovss  xmm6, dword ptr [rcx+r8*8+8]
            vmovss  xmm4, dword ptr [rcx+r8*8+14h]
            vsubss  xmm2, xmm0, xmm9
            vmaxss  xmm2, xmm2, xmm1
            vsubss  xmm0, xmm8, xmm5
            vmovss  dword ptr [rsp+130h+bounds.halfSize], xmm2
            vsubss  xmm2, xmm4, xmm7
            vsubss  xmm3, xmm3, xmm8
            vmaxss  xmm1, xmm3, xmm0
            vsubss  xmm0, xmm7, xmm6
            vmovss  dword ptr [rsp+130h+bounds.halfSize+4], xmm1
            vmaxss  xmm1, xmm2, xmm0
            vmovaps xmm2, xmm11; yaw
            vmovss  dword ptr [rsp+130h+bounds.halfSize+8], xmm1
          }
          CG_DebugBox(&origin, &bounds, *(float *)&_XMM2, (const vec4_t *)&color, 0, 0);
          goto LABEL_24;
        }
        if ( v39 != -1 )
          goto LABEL_19;
      }
LABEL_24:
      population = clientData->population;
      ++v34;
      v37 = population;
      if ( v34 >= population->partitionCount )
      {
        v14 = callbacks;
        break;
      }
    }
  }
  v103 = 0;
  __asm
  {
    vmovaps xmm12, [rsp+130h+var_A0]
    vmovaps xmm11, [rsp+130h+var_90]
    vmovaps xmm10, [rsp+130h+var_80]
  }
  v146 = 0;
  if ( clientData->sortedPartitionCount )
  {
    do
    {
      sortedPartitions = clientData->sortedPartitions;
      if ( sortedPartitions[v103].anyActiveMask )
      {
        v108 = sortedPartitions[v103].partitionIndex;
        v109 = clientData->population;
        _RDX = 3 * v108;
        _RCX = v109->tree->extents;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rdx*8+0Ch]
          vaddss  xmm1, xmm0, dword ptr [rcx+rdx*8]
          vmulss  xmm9, xmm1, xmm13
          vmovss  dword ptr [rsp+130h+bounds.midPoint], xmm9
          vmovss  xmm0, dword ptr [rcx+rdx*8+10h]
          vaddss  xmm1, xmm0, dword ptr [rcx+rdx*8+4]
          vmulss  xmm8, xmm1, xmm13
          vmovss  dword ptr [rsp+130h+bounds.midPoint+4], xmm8
          vmovss  xmm0, dword ptr [rcx+rdx*8+14h]
          vaddss  xmm1, xmm0, dword ptr [rcx+rdx*8+8]
          vmulss  xmm7, xmm1, xmm13
          vmovss  dword ptr [rsp+130h+bounds.midPoint+8], xmm7
          vmovss  xmm0, dword ptr [rcx+rdx*8+0Ch]
          vsubss  xmm2, xmm9, dword ptr [rcx+rdx*8]
          vmovss  xmm3, dword ptr [rcx+rdx*8+4]
          vmovss  xmm4, dword ptr [rcx+rdx*8+10h]
          vmovss  xmm6, dword ptr [rcx+rdx*8+8]
          vmovss  xmm5, dword ptr [rcx+rdx*8+14h]
          vsubss  xmm1, xmm0, xmm9
          vmaxss  xmm2, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vmovss  dword ptr [rsp+130h+bounds.halfSize], xmm2
          vsubss  xmm2, xmm7, xmm6
          vsubss  xmm3, xmm8, xmm3
          vmaxss  xmm1, xmm3, xmm0
          vsubss  xmm0, xmm5, xmm7
          vmovss  dword ptr [rsp+130h+bounds.halfSize+4], xmm1
          vmaxss  xmm1, xmm2, xmm0
          vpxor   xmm2, xmm2, xmm2
        }
        color.m_curIndex = -1;
        __asm
        {
          vmovdqu xmmword ptr [rsp+130h+color], xmm2
          vmovss  dword ptr [rsp+130h+bounds.halfSize+8], xmm1
        }
        SpatialPartition_Population_NodeIterator::Init(&color, v109, v108);
        if ( SpatialPartition_Population_NodeIterator::Advance(&color) )
        {
          do
          {
            isActive = v14->isActive;
            if ( !color.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
              __debugbreak();
            v137 = isActive(clientData, color.m_curNode);
            getPosition = v14->getPosition;
            if ( !color.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
              __debugbreak();
            getPosition(clientData, color.m_curNode, &origin);
            v139 = &colorObjectInactive;
            if ( v137 )
              v139 = &colorObjectActive;
            CG_DebugLine(&origin, &bounds.midPoint, v139, 0, 0);
          }
          while ( SpatialPartition_Population_NodeIterator::Advance(&color) );
          v103 = v146;
        }
      }
      v146 = ++v103;
    }
    while ( v103 < clientData->sortedPartitionCount );
  }
  __asm
  {
    vmovaps xmm9, [rsp+130h+var_70]
    vmovaps xmm8, [rsp+130h+var_60]
    vmovaps xmm7, [rsp+130h+var_50]
    vmovaps xmm6, [rsp+130h+var_40]
    vmovaps xmm13, [rsp+130h+var_B0]
  }
}

/*
==============
SpatialPartition_PopulationSort_Entry_LessThan
==============
*/
bool SpatialPartition_PopulationSort_Entry_LessThan(const SpatialPartition_PopulationSort_Entry *lhs, const SpatialPartition_PopulationSort_Entry *rhs)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
  }
  return v2;
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
    __asm { vmovdqu xmmword ptr [rsp+98h+var_48.m_population], xmm0 }
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
          __asm { vmovdqu xmmword ptr [rsp+0A8h+var_58.m_population], xmm0 }
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
      __asm { vmovdqu xmmword ptr [rsp+98h+var_48.m_population], xmm0 }
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

void __fastcall SpatialPartition_PopulationSort_RemoveEmptyPartitions(SpatialPartition_PopulationSort_ClientData *clientData, double partitionDistanceSq)
{
  unsigned int sortedPartitionCount; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 141, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  sortedPartitionCount = clientData->sortedPartitionCount;
  if ( sortedPartitionCount )
  {
    _RBP = clientData->sortedPartitions;
    _RAX = sortedPartitionCount - 1;
    if ( !_RBP[_RAX].anyActiveMask )
      __asm { vcomiss xmm6, dword ptr [rbp+rax*8+4] }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
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
  unsigned int v7; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v20; 
  float v23; 
  SpatialPartition_PopulationSort_SortByDistanceIntersector extentIntersect; 
  Bounds bounds; 
  SpatialPartition_Population_Tree_AABBPartitionIterator treeIter; 
  char v32; 

  __asm { vmovaps [rsp+2B8h+var_18], xmm6 }
  _RDI = viewPos;
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 183, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 184, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  priorityCount = clientData->priorityCount;
  population = clientData->population;
  v7 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( priorityCount >= 4 )
  {
    _RCX = &clientData->settings.maxDistanceForPriority[1];
    v10 = ((priorityCount - 4) >> 2) + 1;
    v11 = v10;
    v7 = 4 * v10;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rcx-4]
        vmovss  xmm1, dword ptr [rcx]
      }
      _RCX += 4;
      __asm
      {
        vmaxss  xmm2, xmm0, xmm6
        vmovss  xmm0, dword ptr [rcx-0Ch]
        vmaxss  xmm3, xmm1, xmm2
        vmovss  xmm1, dword ptr [rcx-8]
        vmaxss  xmm2, xmm0, xmm3
        vmaxss  xmm6, xmm1, xmm2
      }
      --v11;
    }
    while ( v11 );
  }
  if ( v7 < priorityCount )
  {
    _RCX = &clientData->settings.maxDistanceForPriority[v7];
    v20 = priorityCount - v7;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rcx] }
      ++_RCX;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
      --v20;
    }
    while ( v20 );
  }
  __asm { vmovsd  xmm0, qword ptr [rdi] }
  v23 = _RDI->v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+2B8h+bounds.midPoint], xmm0
    vmovss  dword ptr [rsp+2B8h+bounds.halfSize], xmm6
    vmovss  dword ptr [rsp+2B8h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rsp+2B8h+bounds.halfSize+8], xmm6
  }
  bounds.midPoint.v[2] = v23;
  treeIter.m_tree = NULL;
  *(_QWORD *)&treeIter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&treeIter, population->tree, &bounds);
  __asm { vmovsd  xmm0, qword ptr [rdi] }
  extentIntersect.viewPos.v[2] = _RDI->v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+2B8h+extentIntersect.viewPos], xmm0
    vmovss  [rsp+2B8h+extentIntersect.partitionDistance], xmm6
  }
  SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, &treeIter, &extentIntersect);
  SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, _RDI, &extentIntersect);
  __asm { vmulss  xmm1, xmm6, xmm6; partitionDistanceSq }
  SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, *(double *)&_XMM1);
  _R11 = &v32;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
SpatialPartition_PopulationSort_SortByDistanceWithViewAngle
==============
*/

void __fastcall SpatialPartition_PopulationSort_SortByDistanceWithViewAngle(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos, double minViewAngleDistance, const vec3_t *lookAtDir, float fovInDegrees)
{
  bool v15; 
  bool v16; 
  SpatialPartition_Population *population; 
  unsigned int priorityCount; 
  SpatialPartition_Population *v25; 
  unsigned int v26; 
  unsigned int v29; 
  __int64 v30; 
  float *v38; 
  __int64 v39; 
  float v41; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v53; 
  __int64 v54; 
  float *v61; 
  __int64 v62; 
  float v64; 
  SpatialPartition_PopulationSort_SortByDistanceIntersector extentIntersect; 
  Bounds bounds; 
  Bounds v101; 
  SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector v102; 
  SpatialPartition_Population_Tree_AABBPartitionIterator treeIter; 
  SpatialPartition_Population_Tree_AABBPartitionIterator v104; 

  __asm { vmovaps [rsp+5C0h+var_80], xmm11 }
  _RSI = lookAtDir;
  _RDI = viewPos;
  __asm { vmovaps xmm11, xmm2 }
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 344, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  v15 = !clientData->jobInProgress;
  if ( clientData->jobInProgress )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 345, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress");
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+4]
  }
  population = clientData->population;
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm4, xmm1, xmm1
    vcomiss xmm4, cs:__real@80000000
    vmovaps [rsp+5C0h+var_30], xmm6
  }
  if ( v15 )
  {
    if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 184, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
      __debugbreak();
    priorityCount = clientData->priorityCount;
    v25 = clientData->population;
    v26 = 0;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( priorityCount >= 4 )
    {
      _RCX = &clientData->settings.maxDistanceForPriority[1];
      v29 = ((priorityCount - 4) >> 2) + 1;
      v30 = v29;
      v26 = 4 * v29;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx-4]
          vmovss  xmm1, dword ptr [rcx]
        }
        _RCX += 4;
        __asm
        {
          vmaxss  xmm2, xmm0, xmm6
          vmovss  xmm0, dword ptr [rcx-0Ch]
          vmaxss  xmm3, xmm1, xmm2
          vmovss  xmm1, dword ptr [rcx-8]
          vmaxss  xmm2, xmm0, xmm3
          vmaxss  xmm6, xmm1, xmm2
        }
        --v30;
      }
      while ( v30 );
    }
    if ( v26 < priorityCount )
    {
      v38 = &clientData->settings.maxDistanceForPriority[v26];
      v39 = priorityCount - v26;
      do
      {
        __asm { vmaxss  xmm6, xmm6, dword ptr [rcx] }
        ++v38;
        --v39;
      }
      while ( v39 );
    }
    __asm { vmovsd  xmm0, qword ptr [rdi] }
    v41 = _RDI->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+5C0h+bounds.midPoint], xmm0
      vmovss  dword ptr [rsp+5C0h+bounds.halfSize], xmm6
      vmovss  dword ptr [rsp+5C0h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rsp+5C0h+bounds.halfSize+8], xmm6
    }
    bounds.midPoint.v[2] = v41;
    treeIter.m_tree = NULL;
    *(_QWORD *)&treeIter.m_curPartition = 0i64;
    SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&treeIter, v25->tree, &bounds);
    __asm { vmovsd  xmm0, qword ptr [rdi] }
    extentIntersect.viewPos.v[2] = _RDI->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+5C0h+extentIntersect.viewPos], xmm0
      vmovss  [rsp+5C0h+extentIntersect.partitionDistance], xmm6
    }
    SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, &treeIter, &extentIntersect);
    SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceIntersector_(clientData, _RDI, &extentIntersect);
    __asm { vmulss  xmm1, xmm6, xmm6; partitionDistanceSq }
    SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, *(double *)&_XMM1);
  }
  else
  {
    v44 = clientData->priorityCount;
    __asm { vmovaps [rsp+5C0h+var_40], xmm7 }
    v45 = 0;
    __asm
    {
      vmovaps [rsp+5C0h+var_50], xmm8
      vmovaps [rsp+5C0h+var_60], xmm9
      vmovaps [rsp+5C0h+var_70], xmm10
      vmovss  xmm7, cs:__real@3f800000
      vdivss  xmm0, xmm7, xmm4
      vmulss  xmm8, xmm0, xmm2
      vmulss  xmm10, xmm0, xmm3
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm6, xmm6, xmm6
    }
    if ( v44 >= 4 )
    {
      _RCX = &clientData->settings.maxDistanceForPriority[1];
      v53 = ((v44 - 4) >> 2) + 1;
      v54 = v53;
      v45 = 4 * v53;
      do
      {
        __asm { vmovss  xmm0, dword ptr [rcx-4] }
        _RCX += 4;
        __asm
        {
          vmaxss  xmm1, xmm0, xmm6
          vmaxss  xmm2, xmm1, dword ptr [rcx-10h]
          vmovss  xmm0, dword ptr [rcx-0Ch]
          vmovss  xmm1, dword ptr [rcx-8]
          vmaxss  xmm3, xmm0, xmm2
          vmaxss  xmm6, xmm1, xmm3
        }
        --v54;
      }
      while ( v54 );
    }
    if ( v45 < v44 )
    {
      v61 = &clientData->settings.maxDistanceForPriority[v45];
      v62 = v44 - v45;
      do
      {
        __asm { vmaxss  xmm6, xmm6, dword ptr [rcx] }
        ++v61;
        --v62;
      }
      while ( v62 );
    }
    __asm { vmovsd  xmm0, qword ptr [rdi] }
    v64 = _RDI->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+5C0h+var_568.midPoint], xmm0
      vmovss  dword ptr [rsp+5C0h+var_568.halfSize], xmm6
      vmovss  dword ptr [rsp+5C0h+var_568.halfSize+4], xmm6
      vmovss  dword ptr [rsp+5C0h+var_568.halfSize+8], xmm6
    }
    v101.midPoint.v[2] = v64;
    v104.m_tree = NULL;
    *(_QWORD *)&v104.m_curPartition = 0i64;
    SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&v104, population->tree, &v101);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vucomiss xmm10, xmm9
    }
    extentIntersect.partitionDistance = 0.0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+5C0h+extentIntersect.viewPos]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
      vshufps xmm0, xmm3, xmm3, 55h ; 'U'
      vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
      vshufps xmm2, xmm3, xmm3, 0FFh
      vinsertps xmm3, xmm3, xmm0, 10h
      vinsertps xmm3, xmm3, xmm1, 20h ; ' '
      vinsertps xmm3, xmm3, xmm2, 30h ; '0'
      vshufps xmm0, xmm3, xmm3, 44h ; 'D'
      vmovups xmmword ptr [rbp+4C0h+var_550.m_viewPosXYXY.v], xmm0
      vmulss  xmm0, xmm11, xmm11
      vmovaps xmm1, xmm8
      vinsertps xmm1, xmm1, xmm10, 10h
      vinsertps xmm1, xmm1, xmm8, 20h ; ' '
      vmulss  xmm6, xmm6, xmm6
      vinsertps xmm1, xmm1, xmm10, 30h ; '0'
      vmovss  [rbp+4C0h+var_550.m_minViewAngleDistanceSq], xmm0
      vmovss  xmm0, cs:__real@7f7fffff
      vmovss  [rbp+4C0h+var_550.m_partitionDistanceSq], xmm6
      vmovups xmmword ptr [rsp+5C0h+var_550.m_viewPos.v], xmm3
      vmovups xmmword ptr [rbp+4C0h+var_550.m_lookAtDirXYXY.v], xmm1
      vmovaps xmm3, xmm0
      vucomiss xmm8, xmm9
      vmovaps xmm2, xmm0
      vucomiss xmm10, xmm9
      vmovaps xmm1, xmm0
      vmovaps xmm10, [rsp+5C0h+var_70]
      vucomiss xmm8, xmm9
      vmovaps xmm9, [rsp+5C0h+var_60]
      vinsertps xmm0, xmm0, xmm1, 10h
      vinsertps xmm0, xmm0, xmm2, 20h ; ' '
      vinsertps xmm0, xmm0, xmm3, 30h ; '0'
      vmovups xmmword ptr [rbp+4C0h+var_550.m_lookAtDirInv_XYXY.v], xmm0
      vmovss  xmm0, [rbp+4C0h+fovInDegrees]
      vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm { vmovss  [rbp+4C0h+var_550.m_cos_halfFOV], xmm0 }
    SpatialPartition_PopulationSort_GatherPartitions_SpatialPartition_Population_Tree_AABBPartitionIterator_SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector_(clientData, &v104, &v102);
    SpatialPartition_PopulationSort_SortPartitions_SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector_(clientData, _RDI, &v102);
    __asm { vmovaps xmm1, xmm6; partitionDistanceSq }
    SpatialPartition_PopulationSort_RemoveEmptyPartitions(clientData, *(double *)&_XMM1);
    __asm
    {
      vmovaps xmm8, [rsp+5C0h+var_50]
      vmovaps xmm7, [rsp+5C0h+var_40]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+5C0h+var_30]
    vmovaps xmm11, [rsp+5C0h+var_80]
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
  bool v16; 
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
    _RDX = (char *)cutoffDistancesSq - (char *)clientData;
    _RAX = clientData->settings.maxActivatedForPriority;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rax-10h] }
      v4 += *_RAX++;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmovss  dword ptr [rdx+rax-34h], xmm1
      }
      --priorityCount;
    }
    while ( priorityCount );
  }
  v16 = clientData->settings.maxActivatedTotal >= v4;
  UpdateAddObjects(clientData, callbacks, cutoffDistancesSq, v16, out_numToEvictForPrio, &requestedNumToEvictAcrossPriorities, lastAddSortIndex, &lastAddPriority);
  UpdateRemoveObjects(clientData, callbacks, cutoffDistancesSq, v16, out_numToEvictForPrio, requestedNumToEvictAcrossPriorities, lastAddSortIndex, lastAddPriority);
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
  unsigned int v12; 
  __int64 v13; 
  __int64 v24; 
  unsigned __int8 v27; 
  unsigned __int8 v28; 
  unsigned int v29; 
  unsigned __int8 v31; 
  char v32; 
  int v33; 
  int v34; 
  unsigned int v35; 
  bool v37; 
  unsigned int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  bool v43; 
  int v44; 
  int v45; 
  int v46; 
  bool v47; 
  int v48; 
  int v49; 
  int v50; 
  bool v51; 
  int v52; 
  int v53; 
  char v54; 
  bool v56; 
  __int64 v57; 
  char v59; 
  char v60; 
  char v61; 
  unsigned int v62; 
  int v63; 
  int v64; 
  unsigned int v65; 
  int *maxActivatedForPriority; 
  int maxActivatedTotal; 
  char v68; 
  unsigned __int8 v70; 
  unsigned __int8 v71; 
  int v72; 
  unsigned int v73; 
  char v74[4]; 
  char v75[4]; 
  char v76; 
  char v77; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 459, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( clientData->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 460, ASSERT_TYPE_ASSERT, "(!clientData->jobInProgress)", (const char *)&queryFormat, "!clientData->jobInProgress") )
    __debugbreak();
  if ( !clientData->anyPartitionTransientLoaded && !clientData->anyPartitionTransientUnloaded && !clientData->anyPartitionCollisionTransientMissing )
  {
    priorityCount = clientData->priorityCount;
    sortedPartitionCount = clientData->sortedPartitionCount;
    sortedPartitions = clientData->sortedPartitions;
    v73 = sortedPartitionCount;
    if ( priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 472, ASSERT_TYPE_ASSERT, "(priorityCount <= SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "priorityCount <= SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
      __debugbreak();
    v5 = 0;
    v6 = 0;
    if ( priorityCount >= 4 )
    {
      _R8 = v74 - (char *)clientData;
      _R10 = v75 - (char *)clientData;
      _R11 = &v76 - (char *)clientData;
      _RBX = &v77 - (char *)clientData;
      _RCX = &clientData->settings.maxDistanceForPriority[1];
      v12 = ((priorityCount - 4) >> 2) + 1;
      v13 = v12;
      v6 = 4 * v12;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx-4]
          vmovss  xmm2, dword ptr [rcx]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vmovss  dword ptr [r8+rcx-24h], xmm1
          vmovss  xmm1, dword ptr [rcx+4]
          vmovss  dword ptr [r10+rcx-24h], xmm0
          vmovss  xmm0, dword ptr [rcx+8]
          vmulss  xmm2, xmm1, xmm1
          vmulss  xmm1, xmm0, xmm0
          vmovss  dword ptr [rbx+rcx-24h], xmm1
          vmovss  dword ptr [r11+rcx-24h], xmm2
        }
        _RCX += 4;
        --v13;
      }
      while ( v13 );
    }
    if ( v6 < priorityCount )
    {
      _RCX = &v74[4 * v6];
      _R8 = (char *)clientData - v74;
      v24 = priorityCount - v6;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r8+rcx+20h]
          vmulss  xmm1, xmm0, xmm0
          vmovss  dword ptr [rcx], xmm1
        }
        _RCX += 4;
        --v24;
      }
      while ( v24 );
    }
    v27 = 0;
    v72 = 0;
    v28 = 0;
    v70 = 0;
    v71 = 0;
    v29 = 1;
    if ( sortedPartitionCount )
    {
      _R14 = &sortedPartitions->distanceSq;
      while ( 1 )
      {
        v31 = *((_BYTE *)_R14 - 2);
        if ( (v31 & v27) != 0 )
          break;
        v32 = 0;
        v33 = 0;
        v34 = 1;
        v35 = 0;
        if ( priorityCount >= 4 )
        {
          __asm { vmovss  xmm0, dword ptr [r14] }
          v37 = __CFSHR__(priorityCount - 4, 2);
          _R8 = v75;
          v39 = ((priorityCount - 4) >> 2) + 1;
          v40 = v39;
          v35 = 4 * v39;
          do
          {
            __asm { vcomiss xmm0, dword ptr [r8-4] }
            v41 = 0;
            if ( v37 )
              v41 = v34;
            v42 = v41 | v33;
            if ( (*((_BYTE *)_R14 - 2) & (unsigned __int8)v34) != 0 && !v37 )
              v32 = 1;
            v43 = __CFADD__(v34, v34);
            v44 = 2 * v34;
            v45 = 0;
            __asm { vcomiss xmm0, dword ptr [r8] }
            if ( v43 )
              v45 = v44;
            v46 = v45 | v42;
            if ( (*((_BYTE *)_R14 - 2) & (unsigned __int8)v44) != 0 && !v43 )
              v32 = 1;
            v47 = __CFADD__(v44, v44);
            v48 = 2 * v44;
            v49 = 0;
            __asm { vcomiss xmm0, dword ptr [r8+4] }
            if ( v47 )
              v49 = v48;
            v50 = v49 | v46;
            if ( (*((_BYTE *)_R14 - 2) & (unsigned __int8)v48) != 0 && !v47 )
              v32 = 1;
            v51 = __CFADD__(v48, v48);
            v52 = 2 * v48;
            v53 = 0;
            __asm { vcomiss xmm0, dword ptr [r8+8] }
            if ( v51 )
              v53 = v52;
            v33 = v53 | v50;
            if ( (*((_BYTE *)_R14 - 2) & (unsigned __int8)v52) != 0 )
            {
              v54 = v32;
              if ( !v51 )
                v54 = 1;
              v32 = v54;
            }
            v34 = 2 * v52;
            _R8 += 16;
            v37 = v40-- == 0;
          }
          while ( v40 );
        }
        if ( v35 < priorityCount )
        {
          __asm { vmovss  xmm0, dword ptr [r14] }
          v56 = priorityCount < v35;
          v57 = priorityCount - v35;
          _R8 = &v74[4 * v35];
          do
          {
            __asm { vcomiss xmm0, dword ptr [r8] }
            v59 = 0;
            if ( v56 )
              v59 = v34;
            LOBYTE(v33) = v59 | v33;
            if ( (*((_BYTE *)_R14 - 2) & (unsigned __int8)v34) != 0 )
            {
              v60 = v32;
              if ( !v56 )
                v60 = 1;
              v32 = v60;
            }
            LOBYTE(v34) = 2 * v34;
            _R8 += 4;
            v56 = v57-- == 0;
          }
          while ( v57 );
        }
        if ( v32 )
          break;
        v61 = *((_BYTE *)_R14 - 1);
        _R14 += 2;
        v27 = v33 & v61 | v70;
        v28 = v31 | v71;
        v70 = v27;
        v71 |= v31;
        if ( ++v72 >= v73 )
          goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      v62 = clientData->priorityCount;
      LOBYTE(v63) = 0;
      LOBYTE(v64) = 0;
      v65 = 0;
      if ( v62 )
      {
        maxActivatedForPriority = clientData->settings.maxActivatedForPriority;
        do
        {
          v5 += maxActivatedForPriority[4];
          if ( maxActivatedForPriority[4] >= *maxActivatedForPriority )
          {
            if ( maxActivatedForPriority[4] > *maxActivatedForPriority )
              v64 = (unsigned __int8)v64 | (1 << v65);
          }
          else
          {
            v63 = (unsigned __int8)v63 | (1 << v65);
          }
          ++v65;
          ++maxActivatedForPriority;
        }
        while ( v65 < v62 );
        v27 = v70;
        v28 = v71;
      }
      maxActivatedTotal = clientData->settings.maxActivatedTotal;
      if ( (!(_BYTE)v63 || v5 >= maxActivatedTotal || !v27) && !(_BYTE)v64 && v5 <= maxActivatedTotal )
      {
        v68 = 2;
        if ( v62 <= 1 )
          return 0;
        while ( (v27 & (unsigned __int8)v68) == 0 || ((unsigned __int8)v63 & (unsigned __int8)v68) == 0 || (v28 & (unsigned __int8)(v68 - 1)) == 0 )
        {
          ++v29;
          v68 *= 2;
          if ( v29 >= v62 )
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
  int v29; 
  int v31; 
  bool v32; 
  unsigned int v33; 
  int *v36; 
  unsigned int partitionIndex; 
  unsigned __int8 v38; 
  SpatialPartition_Population *population; 
  char v41; 
  int v42; 
  SpatialPartition_Population_Node *m_curNode; 
  char v44; 
  unsigned int v45; 
  unsigned int v46; 
  bool v47; 
  int v48; 
  int v49; 
  char v50; 
  __int64 v51; 
  __int64 v52; 
  signed __int64 v53; 
  int v54; 
  int v55; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  unsigned __int8 v60; 
  char v61; 
  unsigned int v63; 
  int v64; 
  int v65; 
  unsigned int v66; 
  int v67; 
  int v68; 
  signed __int64 v70; 
  signed __int64 v72; 
  int v73; 
  signed __int64 v74; 
  signed __int64 v75; 
  SpatialPartition_Population_NodeIterator v76; 
  int *v77; 
  __int64 v78; 
  SpatialPartition_PopulationSort_Entry *v79; 
  int *v80; 
  int v81[4]; 

  v8 = 0;
  v10 = callbacks;
  v11 = out_lastAddSortedIndex;
  *out_lastAddPriority = -1;
  v13 = 0;
  *out_numToEvictAcrossPriorities = 0;
  v14 = 0;
  v15 = 0;
  v80 = out_numToEvictAcrossPriorities;
  v77 = out_lastAddPriority;
  v67 = 0;
  v73 = 0;
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
    v73 = v13;
    v67 = v14;
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
  v65 = v21;
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
        LODWORD(v58) = maxAddPerUpdate;
        LODWORD(v57) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v57, v58) )
          __debugbreak();
      }
      priorityCount = clientData->priorityCount;
      if ( maxAddPerUpdate < v25 )
        v25 = maxAddPerUpdate;
      if ( v25 < 0 )
        v25 = 0;
      ++v23;
      v81[v24] = v25;
    }
    while ( v23 < priorityCount );
    v10 = callbacks;
    v11 = out_lastAddSortedIndex;
  }
  v26 = priorityCount - 1;
  v63 = priorityCount - 1;
  if ( (int)(priorityCount - 1) >= 0 )
  {
    v27 = (char *)v11 - (char *)clientData;
    v74 = (char *)out_numToEvictForPrio - (char *)clientData;
    _R10 = (char *)cutoffDistancesSq - (char *)clientData;
    v70 = (char *)cutoffDistancesSq - (char *)clientData;
    v29 = __ROL4__(1, v26);
    v64 = v29;
    _R12 = &clientData->numActivatedForPriority[v26];
    v75 = v27;
    v72 = (char *)v81 - (char *)clientData;
    v31 = 0;
    while ( 1 )
    {
      v32 = clientData->sortedPartitionCount == 0;
      v33 = 0;
      v66 = 0;
      if ( clientData->sortedPartitionCount )
        break;
LABEL_101:
      v27 = v75;
      --v26;
      v29 = __ROR4__(v29, 1);
      --_R12;
      v63 = v26;
      v64 = v29;
      if ( v26 < 0 )
        return;
    }
LABEL_36:
    _RDX = clientData->sortedPartitions;
    __asm { vmovss  xmm0, dword ptr [r10+r12-40h] }
    v78 = v33;
    v79 = _RDX;
    __asm { vcomiss xmm0, dword ptr [rdx+rcx*8+4] }
    if ( v32 )
      goto LABEL_101;
    v36 = v77;
    *(int *)((char *)_R12 + v27 - 64) = v33;
    *v36 = v26;
    if ( ((unsigned __int8)v29 & _RDX[v33].anyAvailableMask) == 0 )
      goto LABEL_78;
    partitionIndex = _RDX[v33].partitionIndex;
    v38 = 0;
    population = clientData->population;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v41 = 0;
    v60 = 0;
    v61 = 0;
    v42 = 0;
    __asm { vmovdqu xmmword ptr [rsp+128h+var_90.m_population], xmm0 }
    v68 = 0;
    v76.m_curIndex = -1;
    SpatialPartition_Population_NodeIterator::Init(&v76, population, partitionIndex);
    if ( !SpatialPartition_Population_NodeIterator::Advance(&v76) )
      goto LABEL_73;
    while ( 1 )
    {
      m_curNode = v76.m_curNode;
      if ( !v76.m_curNode )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
          __debugbreak();
        m_curNode = v76.m_curNode;
      }
      v44 = v10->isActive(clientData, m_curNode);
      v45 = v10->getPriority(clientData, m_curNode);
      if ( v45 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 731, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
        __debugbreak();
      v46 = v10->getTransient(clientData, m_curNode);
      if ( v44 )
      {
        if ( v46 && !bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v46) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 578, ASSERT_TYPE_ASSERT, "(GetTransientLoaded( clientData, node, getTransient ))", (const char *)&queryFormat, "GetTransientLoaded( clientData, node, getTransient )") )
          __debugbreak();
        v47 = 1;
      }
      else
      {
        if ( v46 )
          v47 = bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v46);
        else
          v47 = 1;
        if ( v47 && v45 == v63 && v10->canActivate(clientData, m_curNode) )
        {
          if ( v65 > 0 )
          {
            v48 = *(int *)((char *)_R12 + v72 - 64);
            if ( v48 > 0 )
            {
              v10->activate(clientData, m_curNode, v66);
              if ( !v10->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 740, ASSERT_TYPE_ASSERT, "(callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "callbacks.isActive( clientData, node )") )
              {
                __debugbreak();
                v48 = *(int *)((char *)_R12 + v72 - 64);
              }
              ++*_R12;
              v44 = 1;
              --v65;
              ++v67;
              *(int *)((char *)_R12 + v72 - 64) = v48 - 1;
              v31 = 0;
              goto LABEL_66;
            }
            v31 = 0;
          }
          ++v68;
        }
      }
LABEL_66:
      v49 = 1 << v45;
      v50 = 1 << v45;
      if ( !v44 )
        v50 = 0;
      v60 |= v50;
      if ( v44 || !v47 )
        LOBYTE(v49) = 0;
      v41 = v49 | v61;
      v61 |= v49;
      if ( !SpatialPartition_Population_NodeIterator::Advance(&v76) )
      {
        v21 = v65;
        v42 = v68;
        v38 = v60;
LABEL_73:
        v51 = v78;
        v52 = (__int64)v79;
        v79[v78].anyActiveMask = v38;
        *(_BYTE *)(v52 + 8 * v51 + 3) = v41;
        if ( *(int *)((char *)_R12 + v72 - 64) && v21 || !treatPrioritiesSeparately && !v42 )
        {
          v27 = v75;
          v29 = v64;
          v26 = v63;
          v33 = v66;
LABEL_78:
          _R10 = v70;
          v66 = ++v33;
          v32 = v33 <= clientData->sortedPartitionCount;
          if ( v33 >= clientData->sortedPartitionCount )
            goto LABEL_101;
          goto LABEL_36;
        }
        v53 = (char *)out_numToEvictForPrio - (char *)clientData;
        if ( v42 + *_R12 - *(_R12 - 4) > 0 )
          v31 = v42 + *_R12 - *(_R12 - 4);
        v54 = v67 + v42 - clientData->settings.maxActivatedTotal;
        v55 = 0;
        if ( v54 > 0 )
          v55 = v54;
        if ( *(int *)((char *)_R12 + v74 - 64) )
        {
          LODWORD(v59) = *(int *)((char *)_R12 + v74 - 64);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 765, ASSERT_TYPE_ASSERT, "( out_numToEvictForPrio[addPrio] ) == ( 0 )", "%s == %s\n\t%i, %i", "out_numToEvictForPrio[addPrio]", "0", v59, 0i64) )
            __debugbreak();
          v53 = (char *)out_numToEvictForPrio - (char *)clientData;
        }
        if ( treatPrioritiesSeparately )
        {
          *(int *)((char *)_R12 + v53 - 64) = v31;
          if ( !v31 && v55 && !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 770, ASSERT_TYPE_ASSERT, "(numEvictForPriority || numEvictForTotal == 0 || totalNumToEvictForPrios)", (const char *)&queryFormat, "numEvictForPriority || numEvictForTotal == 0 || totalNumToEvictForPrios") )
            __debugbreak();
          if ( v21 )
          {
LABEL_100:
            _R10 = v70;
            v31 = 0;
            v29 = v64;
            v26 = v63;
            goto LABEL_101;
          }
        }
        else
        {
          if ( v31 > v55 )
            v55 = v31;
          v56 = v55 + *v80;
          *v80 = v56;
          if ( v21 || v56 <= 0 )
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
  const float *v10; 
  int v11; 
  unsigned int priorityCount; 
  const SpatialPartition_PopulationSort_Callbacks *v13; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  int *v28; 
  signed __int64 v29; 
  __int64 v30; 
  int v31; 
  int v33; 
  __int64 v34; 
  const int *v35; 
  __int64 v36; 
  int v37; 
  signed int v38; 
  bool v41; 
  bool v42; 
  bool v45; 
  int v46; 
  unsigned int partitionIndex; 
  unsigned __int8 v48; 
  SpatialPartition_Population *population; 
  unsigned __int8 v51; 
  SpatialPartition_Population_Node *m_curNode; 
  bool v53; 
  unsigned int v54; 
  __int64 v55; 
  unsigned int v56; 
  bool v57; 
  int v58; 
  char v59; 
  int v60; 
  int v61; 
  bool v62; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  signed int v68; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  SpatialPartition_Population_NodeIterator v74; 
  SpatialPartition_PopulationSort_Entry *v75; 
  __int64 v76; 
  __int128 v77; 
  const int *lastAddSortIndexa; 

  _ESI = clientData->settings.maxRemovePerUpdate;
  v10 = cutoffDistancesSq;
  v11 = _ESI;
  priorityCount = clientData->priorityCount;
  v13 = callbacks;
  if ( requestedNumToEvictAcrossPriorities < _ESI )
    v11 = requestedNumToEvictAcrossPriorities;
  __asm { vmovaps [rsp+128h+var_48], xmm6 }
  v67 = v11;
  v66 = _ESI;
  __asm
  {
    vmovd   xmm6, esi
    vpshufd xmm6, xmm6, 0
  }
  if ( priorityCount > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 813, ASSERT_TYPE_ASSERT, "( clientData->priorityCount ) <= ( SPATIAL_PARTITION_POPULATION_MAX_PRIORITY )", "%s <= %s\n\t%i, %i", "clientData->priorityCount", "SPATIAL_PARTITION_POPULATION_MAX_PRIORITY", priorityCount, 4) )
    __debugbreak();
  v17 = (int)clientData->priorityCount;
  v18 = 0;
  if ( (_DWORD)v17 )
  {
    if ( (unsigned int)v17 >= 0x10 )
    {
      v19 = 8;
      do
      {
        _RAX = v18;
        v18 += 16;
        __asm
        {
          vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4]
          vmovdqu [rsp+rax*4+128h+var_68], xmm1
        }
        _RAX = v19 - 4;
        __asm
        {
          vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4]
          vmovdqu [rsp+rax*4+128h+var_68], xmm1
        }
        _RAX = v19;
        __asm
        {
          vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4]
          vmovdqu [rsp+rax*4+128h+var_68], xmm1
        }
        _RAX = v19 + 4;
        v19 += 16;
        __asm
        {
          vpminsd xmm1, xmm6, xmmword ptr [r8+rax*4]
          vmovdqu [rsp+rax*4+128h+var_68], xmm1
        }
      }
      while ( v18 < ((unsigned int)v17 & 0xFFFFFFF0) );
    }
    if ( v18 < (unsigned int)v17 )
    {
      v28 = (int *)&v77 + v18;
      v29 = (char *)requestedNumToEvictForPrio - (char *)&v77;
      v30 = (unsigned int)v17 - v18;
      do
      {
        v31 = _ESI;
        if ( *(int *)((char *)v28 + v29) < _ESI )
          v31 = *(int *)((char *)v28 + v29);
        *v28++ = v31;
        --v30;
      }
      while ( v30 );
    }
  }
  __asm { vmovaps xmm6, [rsp+128h+var_48] }
  v33 = 0;
  v64 = 0;
  v65 = v17;
  if ( (int)v17 > 0 )
  {
    v34 = 0i64;
    v35 = (const int *)((char *)lastAddSortIndex - (char *)v10);
    lastAddSortIndexa = (const int *)((char *)lastAddSortIndex - (char *)v10);
    v36 = v17;
    v73 = 0i64;
    while ( 1 )
    {
      v37 = 1 << v33;
      v38 = clientData->sortedPartitionCount - 1;
      v71 = 1 << v33;
      _RCX = v38;
      v72 = v38;
      v68 = v38;
      if ( v38 >= 0 )
        break;
LABEL_70:
      ++v33;
      ++v34;
      v64 = v33;
      v73 = v34;
      if ( v34 >= v36 )
        return;
    }
    _RAX = (__int64)&v10[v34];
    v76 = _RAX;
    while ( 1 )
    {
      v41 = (unsigned int)v38 < *(const int *)((char *)v35 + _RAX);
      v42 = v38 == *(const int *)((char *)v35 + _RAX);
      if ( v38 == *(const int *)((char *)v35 + _RAX) )
        break;
      _RBX = clientData->sortedPartitions;
      __asm { vmovss  xmm0, dword ptr [rax] }
      v75 = _RBX;
      __asm { vcomiss xmm0, dword ptr [rbx+rcx*8+4] }
      v45 = v41 || v42;
      v62 = v41 || v42;
      if ( v41 || v42 )
      {
        if ( !_ESI )
          return;
        v46 = _ESI;
      }
      else
      {
        v46 = v11 + *((_DWORD *)&v77 + v34);
        if ( !v46 )
          goto LABEL_68;
      }
      if ( ((unsigned __int8)v37 & _RBX[_RCX].anyActiveMask) != 0 )
      {
        partitionIndex = _RBX[_RCX].partitionIndex;
        v48 = 0;
        population = clientData->population;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+128h+var_90.m_population], xmm0
        }
        v51 = 0;
        v74.m_curIndex = -1;
        SpatialPartition_Population_NodeIterator::Init(&v74, population, partitionIndex);
        if ( SpatialPartition_Population_NodeIterator::Advance(&v74) )
        {
          do
          {
            m_curNode = v74.m_curNode;
            if ( !v74.m_curNode )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
                __debugbreak();
              m_curNode = v74.m_curNode;
            }
            v53 = v13->isActive(clientData, m_curNode);
            v54 = v13->getPriority(clientData, m_curNode);
            v55 = v54;
            if ( v54 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 875, ASSERT_TYPE_ASSERT, "(nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY)", (const char *)&queryFormat, "nodePrio < SPATIAL_PARTITION_POPULATION_MAX_PRIORITY") )
              __debugbreak();
            v56 = v13->getTransient(clientData, m_curNode);
            if ( v53 )
            {
              if ( v56 && !bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v56) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 578, ASSERT_TYPE_ASSERT, "(GetTransientLoaded( clientData, node, getTransient ))", (const char *)&queryFormat, "GetTransientLoaded( clientData, node, getTransient )") )
                __debugbreak();
              v57 = 1;
            }
            else if ( v56 )
            {
              v57 = bitarray_base<bitarray_dynamic>::testBit(&clientData->transientLoadedBitfield[clientData->transientFrameNum], v56);
            }
            else
            {
              v57 = 1;
            }
            if ( v46 > 0 && v53 && (_DWORD)v55 == v64 )
            {
              callbacks->deactivate(clientData, m_curNode);
              v53 = 0;
              if ( callbacks->isActive(clientData, m_curNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 884, ASSERT_TYPE_ASSERT, "(!callbacks.isActive( clientData, node ))", (const char *)&queryFormat, "!callbacks.isActive( clientData, node )") )
                __debugbreak();
              if ( clientData->numActivatedForPriority[v55] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_populationsort.cpp", 886, ASSERT_TYPE_ASSERT, "(clientData->numActivatedForPriority[nodePrio] > 0)", (const char *)&queryFormat, "clientData->numActivatedForPriority[nodePrio] > 0") )
                __debugbreak();
              --clientData->numActivatedForPriority[v55];
              --v46;
            }
            v58 = 1 << v55;
            v59 = 1 << v55;
            if ( !v53 )
              v59 = 0;
            v48 |= v59;
            if ( v53 || !v57 )
              LOBYTE(v58) = 0;
            v51 |= v58;
            v13 = callbacks;
          }
          while ( SpatialPartition_Population_NodeIterator::Advance(&v74) );
          _RBX = v75;
          _ESI = v66;
          v45 = v62;
        }
        _RCX = v72;
        v38 = v68;
        v34 = v73;
        LOBYTE(v37) = v71;
        v35 = lastAddSortIndexa;
        _RBX[v72].anyActiveMask = v48;
        _RBX[v72].anyAvailableMask = v51;
        v11 = v67;
      }
      if ( v45 )
      {
        _ESI = v46;
        v66 = v46;
      }
      else
      {
        v11 = 0;
        if ( v46 - *((_DWORD *)&v77 + v34) > 0 )
          v11 = v46 - *((_DWORD *)&v77 + v34);
        v60 = 0;
        v61 = v46 - v11;
        v67 = v11;
        if ( v61 > 0 )
          v60 = v61;
        *((_DWORD *)&v77 + v34) = v60;
      }
      _RAX = v76;
      --v38;
      --_RCX;
      v68 = v38;
      v72 = _RCX;
      if ( _RCX < 0 )
      {
LABEL_68:
        v33 = v64;
LABEL_69:
        v36 = v65;
        v10 = cutoffDistancesSq;
        goto LABEL_70;
      }
    }
    v33 = v64;
    if ( treatPrioritiesSeparately || requestedNumToEvictAcrossPriorities <= 0 || v64 != lastAddPriority )
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
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+98h+var_50.m_population], xmm0
      }
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

bool __fastcall SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector::isExtentsInViewAngle(SpatialPartition_PopulationSort_SortByDistanceWithViewAngleIntersector *this, const float4 *boxMinExtent, const float4 *boxMaxExtent, double _XMM3_8)
{
  bool result; 
  __int64 v36; 

  __asm
  {
    vmovaps [rsp+28h+var_18], xmm6
    vmovups xmm1, xmmword ptr [rdx]
    vmovups xmm0, xmmword ptr [r8]
    vmovlhps xmm2, xmm1, xmm0
    vsubps  xmm6, xmm2, xmmword ptr [rcx+10h]
    vmovups xmm2, xmmword ptr [rcx+30h]
    vmulps  xmm1, xmm6, xmmword ptr [rcx+40h]
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovaps xmm4, xmm0
    vcomiss xmm2, xmm3
    vmovaps xmm0, xmm1
    vmaxss  xmm5, xmm0, xmm4
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vcomiss xmm0, xmm3
    vshufps xmm4, xmm1, xmm1, 0FFh
    vmovaps xmm4, xmm4
    vcomiss xmm2, xmm3
    vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
    vmovaps xmm1, xmm1
    vminss  xmm0, xmm1, xmm4
    vcomiss xmm5, xmm0
  }
  if ( (unsigned __int64)&v36 != _security_cookie )
  {
    __asm
    {
      vmulps  xmm5, xmm6, xmm2
      vbroadcastss xmm2, dword ptr [rcx+50h]
      vmulps  xmm1, xmm6, xmm6
      vshufps xmm0, xmm1, xmm1, 39h ; '9'
      vaddps  xmm1, xmm0, xmm1
      vsqrtps xmm3, xmm1
      vshufps xmm0, xmm5, xmm5, 39h ; '9'
      vmulps  xmm4, xmm3, xmm2
      vaddps  xmm1, xmm0, xmm5
      vcmpltps xmm2, xmm1, xmm4
      vmovmskps eax, xmm2
    }
    result = (_EAX & 0xF) != 15;
  }
  else
  {
    __asm { vcomiss xmm0, xmm3 }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+28h+var_18] }
  return result;
}

