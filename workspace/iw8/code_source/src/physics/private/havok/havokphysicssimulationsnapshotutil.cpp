/*
==============
exportCollisionCachePairParentChildren
==============
*/

hkResult __fastcall exportCollisionCachePairParentChildren(hknpWorld *world, hknpCollisionCacheStreams *streams, hkStreamWriter *writer)
{
  return ?exportCollisionCachePairParentChildren@@YA?AUhkResult@@AEAVhknpWorld@@AEAUhknpCollisionCacheStreams@@AEAVhkStreamWriter@@@Z(world, streams, writer);
}

/*
==============
resetBroadphase<hkStreamReader>
==============
*/

void __fastcall resetBroadphase<hkStreamReader>(hknpWorld *worldIn, hkStreamReader *s, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTree)
{
  ??$resetBroadphase@VhkStreamReader@@@@YAXAEAVhknpWorld@@AEAVhkStreamReader@@AEAV?$hkInplaceArray@V?$hkArray@UhknpBodyId@@UhkContainerHeapAllocator@@@@$0CA@UhkContainerHeapAllocator@@@@@Z(worldIn, s, bodyIdsPerTree);
}

/*
==============
exportCollisionCacheStream
==============
*/

hkResult __fastcall exportCollisionCacheStream(hknpCollisionCacheReader *cacheReader, hknpCollisionCacheReader *childCacheReader, hkStreamWriter *writer, hknpWorld *world)
{
  return ?exportCollisionCacheStream@@YA?AUhkResult@@AEAVhknpCollisionCacheReader@@PEAV2@AEAVhkStreamWriter@@AEAVhknpWorld@@@Z(cacheReader, childCacheReader, writer, world);
}

/*
==============
getBodyIdsPerTree
==============
*/

void __fastcall getBodyIdsPerTree(const hknpWorld *worldIn, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTreeOut)
{
  ?getBodyIdsPerTree@@YAXAEBVhknpWorld@@AEAV?$hkInplaceArray@V?$hkArray@UhknpBodyId@@UhkContainerHeapAllocator@@@@$0CA@UhkContainerHeapAllocator@@@@@Z(worldIn, bodyIdsPerTreeOut);
}

/*
==============
importCollisionCachePairParentChildren
==============
*/

hkResult __fastcall importCollisionCachePairParentChildren(hknpCollisionCacheStreams *cacheStreams, hkStreamReader *reader, hkThreadLocalBlockStreamAllocator *tlAllocator)
{
  return ?importCollisionCachePairParentChildren@@YA?AUhkResult@@AEAUhknpCollisionCacheStreams@@AEAVhkStreamReader@@PEAVhkThreadLocalBlockStreamAllocator@@@Z(cacheStreams, reader, tlAllocator);
}

/*
==============
NpSimulationSnapshot::importSimulationState
==============
*/

hkResult __fastcall NpSimulationSnapshot::importSimulationState(hknpWorld *pWorld, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *fixupUtil)
{
  return ?importSimulationState@NpSimulationSnapshot@@YA?AUhkResult@@AEAVhknpWorld@@AEAVhkStreamReader@@PEAUPostImportPatch@1@@Z(pWorld, reader, fixupUtil);
}

/*
==============
importCollisionCacheStream
==============
*/

hkResult __fastcall importCollisionCacheStream(hknpCollisionCacheWriter *cacheWriter, hknpCollisionCacheWriter *childCacheWriter, hkStreamReader *reader)
{
  return ?importCollisionCacheStream@@YA?AUhkResult@@AEAVhknpCollisionCacheWriter@@PEAV2@AEAVhkStreamReader@@@Z(cacheWriter, childCacheWriter, reader);
}

/*
==============
NpSimulationSnapshot::LoadShapesFromWorldSnapshot::getShapeForBody
==============
*/

const hknpShape *__fastcall NpSimulationSnapshot::LoadShapesFromWorldSnapshot::getShapeForBody(NpSimulationSnapshot::LoadShapesFromWorldSnapshot *this, hknpBody *body)
{
  return ?getShapeForBody@LoadShapesFromWorldSnapshot@NpSimulationSnapshot@@UEAAPEBVhknpShape@@AEAVhknpBody@@@Z(this, body);
}

/*
==============
resetBroadphase<hkStreamWriter>
==============
*/

void __fastcall resetBroadphase<hkStreamWriter>(hknpWorld *worldIn, hkStreamWriter *s, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTree)
{
  ??$resetBroadphase@VhkStreamWriter@@@@YAXAEAVhknpWorld@@AEAVhkStreamWriter@@AEAV?$hkInplaceArray@V?$hkArray@UhknpBodyId@@UhkContainerHeapAllocator@@@@$0CA@UhkContainerHeapAllocator@@@@@Z(worldIn, s, bodyIdsPerTree);
}

/*
==============
cacheRangeToSnapshotRange
==============
*/

void __fastcall cacheRangeToSnapshotRange(const hkArray<hknpCollisionCacheRange,hkContainerHeapAllocator> *ranges, hkArray<hkSnapShotRange,hkContainerHeapAllocator> *rangesOut)
{
  ?cacheRangeToSnapshotRange@@YAXAEBV?$hkArray@VhknpCollisionCacheRange@@UhkContainerHeapAllocator@@@@AEAV?$hkArray@UhkSnapShotRange@@UhkContainerHeapAllocator@@@@@Z(ranges, rangesOut);
}

/*
==============
NpSimulationSnapshot::exportSimulationState
==============
*/

hkResult __fastcall NpSimulationSnapshot::exportSimulationState(hknpWorld *world, hkStreamWriter *writer)
{
  return ?exportSimulationState@NpSimulationSnapshot@@YA?AUhkResult@@AEAVhknpWorld@@AEAVhkStreamWriter@@@Z(world, writer);
}

/*
==============
resetBroadphase<hkStreamReader>
==============
*/
void resetBroadphase<hkStreamReader>(hknpWorld *worldIn, hkStreamReader *s, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTree)
{
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v3; 
  hkStreamReader *v4; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  int m_size; 
  __int64 v9; 
  hkMonitorStream *Value; 
  __int64 v11; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **p_m_numBits; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> *v13; 
  __int64 v14; 
  hkMemoryRouter *v15; 
  int v16; 
  hkAabb16ext *m_cur; 
  char *v18; 
  __int64 v19; 
  hkAabb16ext *v20; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v21; 
  __int64 p_m_aabb; 
  __int64 m_worldId; 
  __int64 v24; 
  hkMonitorStream *v25; 
  hkMonitorStream *v26; 
  hkMonitorStream *v27; 
  hkMemoryRouter *v28; 
  int v29; 
  unsigned int *v30; 
  char *v31; 
  int v32; 
  int v33; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::LeafData *v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v41; 
  hkMonitorStream *v42; 
  int v43; 
  char *v44; 
  int v45; 
  hkMemoryRouter *v46; 
  signed int v47; 
  int v48; 
  hkMemoryAllocator *v49; 
  hkMemoryRouter *v50; 
  int v51; 
  bool v52; 
  hkMonitorStream *v53; 
  signed int v54; 
  hkMemoryAllocator *v55; 
  int v56; 
  int v57; 
  int v58; 
  unsigned int *p_m_maxAntilagBodiesBit; 
  __int64 v60; 
  __int64 v61; 
  void **v62; 
  signed int v63; 
  hkMemoryAllocator *v64; 
  int v65; 
  int v66; 
  int v67; 
  void **v68; 
  int v69; 
  hkMemoryAllocator *v70; 
  int v71; 
  int v72; 
  int v73; 
  signed int v74; 
  hkMemoryAllocator *v75; 
  int v76; 
  int v77; 
  int v78; 
  signed int v79; 
  hkMemoryAllocator *v80; 
  int v81; 
  int v82; 
  int v83; 
  __int64 v84; 
  int *v85; 
  hkArray<unsigned int,hkContainerHeapAllocator> leafIdxOut; 
  void *p; 
  int v88; 
  unsigned int v89; 
  hkStreamReader *v90; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v91; 
  void *v92; 

  v91 = bodyIdsPerTree;
  v90 = s;
  v3 = bodyIdsPerTree;
  v4 = s;
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(worldIn);
  m_data = worldIn->m_bodyManager.m_bodies.m_objects.m_data;
  if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
  {
    m_size = UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_words.m_size;
  }
  else if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 )
  {
    m_size = UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_size;
  }
  else
  {
    m_size = -1;
  }
  v9 = m_size;
  v84 = m_size;
  if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtBroadphase");
    if ( v9 > 0 )
    {
      v11 = 0i64;
      p_m_numBits = (hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_numBits;
      v85 = &UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_numBits;
      do
      {
        v13 = *p_m_numBits;
        v14 = v3->m_data[v11].m_size;
        v15 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v15 )
          v15 = hkMemoryRouter::s_fallbackRouter;
        v16 = (16 * v14 + 127) & 0xFFFFFF80;
        v89 = v16;
        m_cur = (hkAabb16ext *)v15->m_stack.m_cur;
        v92 = m_cur;
        v18 = (char *)m_cur + v16;
        if ( v16 > v15->m_stack.m_slabSize || v18 > v15->m_stack.m_end )
        {
          m_cur = (hkAabb16ext *)hkLifoAllocator::allocateFromNewSlab(&v15->m_stack, v16);
          v92 = m_cur;
        }
        else
        {
          v15->m_stack.m_cur = v18;
        }
        v19 = 0i64;
        if ( (int)v14 > 0 )
        {
          v20 = m_cur;
          v21 = v91;
          do
          {
            p_m_aabb = (__int64)&m_data[v21->m_data[v11].m_data[v19].m_serialAndIndex & 0xFFFFFF].m_pod.m_aabb;
            m_worldId = UndecoratedBroadPhase[6].m_worldId;
            v20->m_min[0] = *(_WORD *)&m_data[v21->m_data[v11].m_data[v19].m_serialAndIndex & 0xFFFFFF].m_pod.m_aabb.m_min.m_u8[6];
            v20->m_max[0] = *(_WORD *)(p_m_aabb + 14);
            v24 = 2 - (int)m_worldId;
            v20->m_min[v24] = *(_DWORD *)p_m_aabb >> 8;
            v20->m_max[v24] = *(_DWORD *)(p_m_aabb + 8) >> 8;
            v20->m_min[m_worldId + 1] = *(_WORD *)(p_m_aabb + 3);
            v20->m_max[m_worldId + 1] = *(_WORD *)(p_m_aabb + 11);
            ++v19;
            ++v20;
          }
          while ( v19 < v14 );
          m_cur = (hkAabb16ext *)v92;
        }
        v25 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v25 )
          hkMonitorStream::timerBegin(v25, "TtRebuild Tree");
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::clear(v13);
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::build(v13, m_cur, v91->m_data[v11].m_data, v14);
        v26 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v26 )
          hkMonitorStream::timerEnd(v26, "Et");
        v27 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v27 )
          hkMonitorStream::timerBegin(v27, "TtUpdate BroadPhaseIds");
        leafIdxOut.m_data = NULL;
        leafIdxOut.m_size = 0;
        leafIdxOut.m_capacityAndFlags = 0x80000000;
        v88 = v14;
        if ( (_DWORD)v14 )
        {
          v28 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !v28 )
            v28 = hkMemoryRouter::s_fallbackRouter;
          v29 = (4 * v14 + 127) & 0xFFFFFF80;
          v30 = (unsigned int *)v28->m_stack.m_cur;
          v31 = (char *)v30 + v29;
          if ( v29 > v28->m_stack.m_slabSize || v31 > v28->m_stack.m_end )
            v30 = (unsigned int *)hkLifoAllocator::allocateFromNewSlab(&v28->m_stack, v29);
          else
            v28->m_stack.m_cur = v31;
        }
        else
        {
          v30 = NULL;
        }
        leafIdxOut.m_data = v30;
        leafIdxOut.m_capacityAndFlags = v14 | 0x80000000;
        p = v30;
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::collectLeaves(v13->m_rootNodeIdx, v13, &leafIdxOut);
        v32 = 0;
        v33 = leafIdxOut.m_size;
        if ( leafIdxOut.m_size > 0 )
        {
          v34 = v13->m_leafDatas.m_data;
          v35 = 0i64;
          do
          {
            v36 = (__int64)&v13->m_nodeManager.m_nodes.m_data[leafIdxOut.m_data[v35]];
            v37 = 0;
            v38 = (__int64)*(int *)(v36 + 16) << 9;
            if ( *(int *)((char *)&v34->m_numAabbs + v38) > 0 )
            {
              v39 = (__int64)*(int *)(v36 + 16) << 9;
              do
              {
                v40 = leafIdxOut.m_data[v35];
                v41 = &m_data[(*(unsigned __int16 *)((char *)&v34->m_aabbs[0].m_min[3] + v39) | (*(unsigned __int16 *)((char *)&v34->m_aabbs[0].m_max[3] + v39) << 16)) & 0xFFFFFF];
                v41->m_pod.m_broadPhaseId &= 0xE0000000;
                v41->m_pod.m_broadPhaseId |= v40;
                ++v37;
                v39 += 16i64;
                v34 = v13->m_leafDatas.m_data;
              }
              while ( v37 < *(int *)((char *)&v34->m_numAabbs + v38) );
              v33 = leafIdxOut.m_size;
            }
            ++v32;
            ++v35;
          }
          while ( v32 < v33 );
        }
        v42 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v42 )
          hkMonitorStream::timerEnd(v42, "Et");
        v43 = leafIdxOut.m_size;
        v44 = (char *)p;
        if ( p == leafIdxOut.m_data )
          v43 = 0;
        leafIdxOut.m_size = v43;
        v45 = v88;
        v46 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v46 )
          v46 = hkMemoryRouter::s_fallbackRouter;
        v47 = (4 * v45 + 127) & 0xFFFFFF80;
        v48 = (v47 + 15) & 0xFFFFFFF0;
        if ( v47 > v46->m_stack.m_slabSize || &v44[v48] != v46->m_stack.m_cur || v46->m_stack.m_firstNonLifoEnd == v44 )
          hkLifoAllocator::slowBlockFree(&v46->m_stack, v44, v48);
        else
          v46->m_stack.m_cur = v44;
        v49 = hkMemHeapAllocator();
        leafIdxOut.m_size = 0;
        if ( leafIdxOut.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v49, leafIdxOut.m_data, 4, leafIdxOut.m_capacityAndFlags & 0x3FFFFFFF);
        leafIdxOut.m_data = NULL;
        leafIdxOut.m_capacityAndFlags = 0x80000000;
        v50 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v50 )
          v50 = hkMemoryRouter::s_fallbackRouter;
        v51 = (v89 + 15) & 0xFFFFFFF0;
        if ( (signed int)v89 > v50->m_stack.m_slabSize || (char *)v92 + v51 != v50->m_stack.m_cur || v50->m_stack.m_firstNonLifoEnd == v92 )
          hkLifoAllocator::slowBlockFree(&v50->m_stack, v92, v51);
        else
          v50->m_stack.m_cur = v92;
        p_m_numBits = (hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **)(v85 + 2);
        v85 += 2;
        ++v11;
        v52 = v84-- == 1;
        v3 = v91;
      }
      while ( !v52 );
      v4 = v90;
    }
    v53 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( v53 )
      hkMonitorStream::timerEnd(v53, "Et");
    v4->read(v4, &UndecoratedBroadPhase[2].m_worldId, 8);
    v4->read(v4, &UndecoratedBroadPhase[3].m_antilagBodies, 8);
    anonymous_namespace_::serializeArray_int_(v4, (hkArray<int,hkContainerHeapAllocator> *)&UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_numBits);
    v4->read(v4, &v89, 4);
    v54 = v89;
    v55 = hkMemHeapAllocator();
    v56 = *(&UndecoratedBroadPhase[3].m_worldId + 1) & 0x3FFFFFFF;
    if ( v56 < v54 )
    {
      v57 = 2 * v56;
      if ( (unsigned int)v57 >= 0x3FFFFFFF )
        v57 = 1073741822;
      v58 = v54;
      if ( v54 < v57 )
        v58 = v57;
      hkArrayUtil::_reserve(v55, &UndecoratedBroadPhase[3].m_world, v58, 4);
    }
    UndecoratedBroadPhase[3].m_worldId = v54;
    v4->read(v4, UndecoratedBroadPhase[3].m_world, 4 * v89);
    v4->read(v4, &UndecoratedBroadPhase[4], 4);
    v4->read(v4, &UndecoratedBroadPhase[4].m_antilagBodies, 4);
    p_m_maxAntilagBodiesBit = (unsigned int *)&UndecoratedBroadPhase[4].m_antilagBodies.m_storage.m_words.m_data + 1;
  }
  else
  {
    if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) != 2 )
      return;
    v60 = v9;
    if ( v9 > 0 )
    {
      v61 = 0i64;
      do
      {
        *(_BYTE *)(*(_QWORD *)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * v61] + 6620i64) = 1;
        v62 = *(void ***)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * v61];
        v4->read(v4, &v89, 4);
        v63 = v89;
        v64 = hkMemHeapAllocator();
        v65 = *((_DWORD *)v62 + 19) & 0x3FFFFFFF;
        if ( v65 < v63 )
        {
          v66 = 2 * v65;
          if ( (unsigned int)v66 >= 0x3FFFFFFF )
            v66 = 1073741822;
          v67 = v63;
          if ( v63 < v66 )
            v67 = v66;
          hkArrayUtil::_reserve(v64, v62 + 8, v67, 16);
        }
        *((_DWORD *)v62 + 18) = v63;
        v4->read(v4, v62[8], 16 * v89);
        v68 = *(void ***)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * v61];
        v4->read(v4, &v92, 4);
        v69 = (int)v92;
        v70 = hkMemHeapAllocator();
        v71 = *((_DWORD *)v68 + 5) & 0x3FFFFFFF;
        if ( v71 < v69 )
        {
          v72 = 2 * v71;
          if ( (unsigned int)v72 >= 0x3FFFFFFF )
            v72 = 1073741822;
          v73 = v69;
          if ( v69 < v72 )
            v73 = v72;
          hkArrayUtil::_reserve(v70, v68 + 1, v73, 128);
        }
        *((_DWORD *)v68 + 4) = v69;
        v4->read(v4, v68[1], (_DWORD)v92 << 7);
        ++v61;
      }
      while ( v61 < v60 );
    }
    v4->read(v4, &v89, 4);
    v74 = v89;
    v75 = hkMemHeapAllocator();
    v76 = HIDWORD(UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_data) & 0x3FFFFFFF;
    if ( v76 < v74 )
    {
      v77 = 2 * v76;
      if ( (unsigned int)v77 >= 0x3FFFFFFF )
        v77 = 1073741822;
      v78 = v74;
      if ( v74 < v77 )
        v78 = v77;
      hkArrayUtil::_reserve(v75, &UndecoratedBroadPhase[6], v78, 16);
    }
    LODWORD(UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_data) = v74;
    v4->read(v4, UndecoratedBroadPhase[6].__vftable, 16 * v89);
    v4->read(v4, &v89, 4);
    v79 = v89;
    v80 = hkMemHeapAllocator();
    v81 = *(&UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_numBits + 1) & 0x3FFFFFFF;
    if ( v81 < v79 )
    {
      v82 = 2 * v81;
      if ( (unsigned int)v82 >= 0x3FFFFFFF )
        v82 = 1073741822;
      v83 = v79;
      if ( v79 < v82 )
        v83 = v82;
      hkArrayUtil::_reserve(v80, &UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_size, v83, 1);
    }
    UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_numBits = v79;
    v4->read(v4, *(void **)&UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_size, v89);
    v4->read(v4, &UndecoratedBroadPhase[6].m_minAntilagBodiesBit, 4);
    p_m_maxAntilagBodiesBit = &UndecoratedBroadPhase[6].m_maxAntilagBodiesBit;
  }
  v4->read(v4, p_m_maxAntilagBodiesBit, 4);
}

/*
==============
resetBroadphase<hkStreamWriter>
==============
*/
void resetBroadphase<hkStreamWriter>(hknpWorld *worldIn, hkStreamWriter *s, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTree)
{
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v3; 
  hkStreamWriter *v4; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  int m_size; 
  __int64 v9; 
  hkMonitorStream *Value; 
  __int64 v11; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **p_m_numBits; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> *v13; 
  __int64 v14; 
  hkMemoryRouter *v15; 
  int v16; 
  hkAabb16ext *m_cur; 
  char *v18; 
  __int64 v19; 
  hkAabb16ext *v20; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v21; 
  __int64 p_m_aabb; 
  __int64 m_worldId; 
  __int64 v24; 
  hkMonitorStream *v25; 
  hkMonitorStream *v26; 
  hkMonitorStream *v27; 
  hkMemoryRouter *v28; 
  int v29; 
  unsigned int *v30; 
  char *v31; 
  int v32; 
  int v33; 
  hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::LeafData *v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v41; 
  hkMonitorStream *v42; 
  int v43; 
  char *v44; 
  int v45; 
  hkMemoryRouter *v46; 
  signed int v47; 
  int v48; 
  hkMemoryAllocator *v49; 
  hkMemoryRouter *v50; 
  int v51; 
  bool v52; 
  hkMonitorStream *v53; 
  unsigned int *p_m_maxAntilagBodiesBit; 
  __int64 i; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  hkArray<unsigned int,hkContainerHeapAllocator> leafIdxOut; 
  void *p; 
  int v62; 
  int m_minAntilagBodiesBit; 
  hkStreamWriter *v64; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v65; 
  int *v66; 

  v65 = bodyIdsPerTree;
  v64 = s;
  v3 = bodyIdsPerTree;
  v4 = s;
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(worldIn);
  m_data = worldIn->m_bodyManager.m_bodies.m_objects.m_data;
  if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
  {
    m_size = UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_words.m_size;
  }
  else if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 )
  {
    m_size = UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_size;
  }
  else
  {
    m_size = -1;
  }
  v9 = m_size;
  v59 = m_size;
  if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtBroadphase");
    if ( v9 > 0 )
    {
      v11 = 0i64;
      v58 = 0i64;
      p_m_numBits = (hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_numBits;
      v66 = &UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_numBits;
      do
      {
        v13 = *p_m_numBits;
        v14 = *(int *)((char *)&v3->m_data->m_size + v11);
        v15 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v15 )
          v15 = hkMemoryRouter::s_fallbackRouter;
        v16 = (16 * v14 + 127) & 0xFFFFFF80;
        m_minAntilagBodiesBit = v16;
        m_cur = (hkAabb16ext *)v15->m_stack.m_cur;
        v18 = (char *)m_cur + v16;
        if ( v16 > v15->m_stack.m_slabSize || v18 > v15->m_stack.m_end )
          m_cur = (hkAabb16ext *)hkLifoAllocator::allocateFromNewSlab(&v15->m_stack, v16);
        else
          v15->m_stack.m_cur = v18;
        v19 = 0i64;
        if ( (int)v14 > 0 )
        {
          v20 = m_cur;
          v21 = v65;
          do
          {
            p_m_aabb = (__int64)&m_data[(*(hknpBodyId **)((char *)&v21->m_data->m_data + v11))[v19].m_serialAndIndex & 0xFFFFFF].m_pod.m_aabb;
            m_worldId = UndecoratedBroadPhase[6].m_worldId;
            v20->m_min[0] = *(_WORD *)&m_data[(*(hknpBodyId **)((char *)&v21->m_data->m_data + v11))[v19].m_serialAndIndex & 0xFFFFFF].m_pod.m_aabb.m_min.m_u8[6];
            v20->m_max[0] = *(_WORD *)(p_m_aabb + 14);
            v24 = 2 - (int)m_worldId;
            v20->m_min[v24] = *(_DWORD *)p_m_aabb >> 8;
            v20->m_max[v24] = *(_DWORD *)(p_m_aabb + 8) >> 8;
            v20->m_min[m_worldId + 1] = *(_WORD *)(p_m_aabb + 3);
            v20->m_max[m_worldId + 1] = *(_WORD *)(p_m_aabb + 11);
            ++v19;
            ++v20;
          }
          while ( v19 < v14 );
        }
        v25 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v25 )
          hkMonitorStream::timerBegin(v25, "TtRebuild Tree");
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::clear(v13);
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::build(v13, m_cur, *(hknpBodyId **)((char *)&v65->m_data->m_data + v11), v14);
        v26 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v26 )
          hkMonitorStream::timerEnd(v26, "Et");
        v27 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v27 )
          hkMonitorStream::timerBegin(v27, "TtUpdate BroadPhaseIds");
        leafIdxOut.m_data = NULL;
        leafIdxOut.m_size = 0;
        leafIdxOut.m_capacityAndFlags = 0x80000000;
        v62 = v14;
        if ( (_DWORD)v14 )
        {
          v28 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !v28 )
            v28 = hkMemoryRouter::s_fallbackRouter;
          v29 = (4 * v14 + 127) & 0xFFFFFF80;
          v30 = (unsigned int *)v28->m_stack.m_cur;
          v31 = (char *)v30 + v29;
          if ( v29 > v28->m_stack.m_slabSize || v31 > v28->m_stack.m_end )
            v30 = (unsigned int *)hkLifoAllocator::allocateFromNewSlab(&v28->m_stack, v29);
          else
            v28->m_stack.m_cur = v31;
        }
        else
        {
          v30 = NULL;
        }
        leafIdxOut.m_data = v30;
        leafIdxOut.m_capacityAndFlags = v14 | 0x80000000;
        p = v30;
        hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext>::collectLeaves(v13->m_rootNodeIdx, v13, &leafIdxOut);
        v32 = 0;
        v33 = leafIdxOut.m_size;
        if ( leafIdxOut.m_size > 0 )
        {
          v34 = v13->m_leafDatas.m_data;
          v35 = 0i64;
          do
          {
            v36 = (__int64)&v13->m_nodeManager.m_nodes.m_data[leafIdxOut.m_data[v35]];
            v37 = 0;
            v38 = (__int64)*(int *)(v36 + 16) << 9;
            if ( *(int *)((char *)&v34->m_numAabbs + v38) > 0 )
            {
              v39 = (__int64)*(int *)(v36 + 16) << 9;
              do
              {
                v40 = leafIdxOut.m_data[v35];
                v41 = &m_data[(*(unsigned __int16 *)((char *)&v34->m_aabbs[0].m_min[3] + v39) | (*(unsigned __int16 *)((char *)&v34->m_aabbs[0].m_max[3] + v39) << 16)) & 0xFFFFFF];
                v41->m_pod.m_broadPhaseId &= 0xE0000000;
                v41->m_pod.m_broadPhaseId |= v40;
                ++v37;
                v39 += 16i64;
                v34 = v13->m_leafDatas.m_data;
              }
              while ( v37 < *(int *)((char *)&v34->m_numAabbs + v38) );
              v33 = leafIdxOut.m_size;
            }
            ++v32;
            ++v35;
          }
          while ( v32 < v33 );
        }
        v42 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v42 )
          hkMonitorStream::timerEnd(v42, "Et");
        v43 = leafIdxOut.m_size;
        v44 = (char *)p;
        if ( p == leafIdxOut.m_data )
          v43 = 0;
        leafIdxOut.m_size = v43;
        v45 = v62;
        v46 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v46 )
          v46 = hkMemoryRouter::s_fallbackRouter;
        v47 = (4 * v45 + 127) & 0xFFFFFF80;
        v48 = (v47 + 15) & 0xFFFFFFF0;
        if ( v47 > v46->m_stack.m_slabSize || &v44[v48] != v46->m_stack.m_cur || v46->m_stack.m_firstNonLifoEnd == v44 )
          hkLifoAllocator::slowBlockFree(&v46->m_stack, v44, v48);
        else
          v46->m_stack.m_cur = v44;
        v49 = hkMemHeapAllocator();
        leafIdxOut.m_size = 0;
        if ( leafIdxOut.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v49, leafIdxOut.m_data, 4, leafIdxOut.m_capacityAndFlags & 0x3FFFFFFF);
        leafIdxOut.m_data = NULL;
        leafIdxOut.m_capacityAndFlags = 0x80000000;
        v50 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v50 )
          v50 = hkMemoryRouter::s_fallbackRouter;
        v51 = (m_minAntilagBodiesBit + 15) & 0xFFFFFFF0;
        if ( m_minAntilagBodiesBit > v50->m_stack.m_slabSize || (char *)m_cur + v51 != v50->m_stack.m_cur || v50->m_stack.m_firstNonLifoEnd == m_cur )
          hkLifoAllocator::slowBlockFree(&v50->m_stack, m_cur, v51);
        else
          v50->m_stack.m_cur = m_cur;
        p_m_numBits = (hknpHybridAabbTree<hknpBodyId,unsigned int,hkAabb16ext> **)(v66 + 2);
        v66 += 2;
        v11 = v58 + 16;
        v58 += 16i64;
        v52 = v59-- == 1;
        v3 = v65;
      }
      while ( !v52 );
      v4 = v64;
    }
    v53 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( v53 )
      hkMonitorStream::timerEnd(v53, "Et");
    v4->write(v4, &UndecoratedBroadPhase[2].m_worldId, 8);
    v4->write(v4, &UndecoratedBroadPhase[3].m_antilagBodies, 8);
    m_minAntilagBodiesBit = UndecoratedBroadPhase[3].m_minAntilagBodiesBit;
    v4->write(v4, &m_minAntilagBodiesBit, 4);
    v4->write(v4, *(const void **)&UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_numBits, 4 * UndecoratedBroadPhase[3].m_minAntilagBodiesBit);
    ++callsToSerializeArray;
    m_minAntilagBodiesBit = UndecoratedBroadPhase[3].m_worldId;
    v4->write(v4, &m_minAntilagBodiesBit, 4);
    v4->write(v4, UndecoratedBroadPhase[3].m_world, 4 * UndecoratedBroadPhase[3].m_worldId);
    ++callsToSerializeArray;
    v4->write(v4, &UndecoratedBroadPhase[4], 4);
    v4->write(v4, &UndecoratedBroadPhase[4].m_antilagBodies, 4);
    p_m_maxAntilagBodiesBit = (unsigned int *)&UndecoratedBroadPhase[4].m_antilagBodies.m_storage.m_words.m_data + 1;
  }
  else
  {
    if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) != 2 )
      return;
    if ( v9 > 0 )
    {
      for ( i = 0i64; i < v9; ++i )
      {
        *(_BYTE *)(*(_QWORD *)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * i] + 6620i64) = 1;
        v56 = *(_QWORD *)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * i];
        m_minAntilagBodiesBit = *(_DWORD *)(v56 + 72);
        v4->write(v4, &m_minAntilagBodiesBit, 4);
        v4->write(v4, *(const void **)(v56 + 64), 16 * *(_DWORD *)(v56 + 72));
        ++callsToSerializeArray;
        v57 = *(_QWORD *)&UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_data[2 * i];
        m_minAntilagBodiesBit = *(_DWORD *)(v57 + 16);
        v4->write(v4, &m_minAntilagBodiesBit, 4);
        v4->write(v4, *(const void **)(v57 + 8), *(_DWORD *)(v57 + 16) << 7);
        ++callsToSerializeArray;
      }
    }
    m_minAntilagBodiesBit = (int)UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_data;
    v4->write(v4, &m_minAntilagBodiesBit, 4);
    v4->write(v4, UndecoratedBroadPhase[6].__vftable, 16 * LODWORD(UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_data));
    ++callsToSerializeArray;
    m_minAntilagBodiesBit = UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_numBits;
    v4->write(v4, &m_minAntilagBodiesBit, 4);
    v4->write(v4, *(const void **)&UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_words.m_size, UndecoratedBroadPhase[6].m_antilagBodies.m_storage.m_numBits);
    ++callsToSerializeArray;
    v4->write(v4, &UndecoratedBroadPhase[6].m_minAntilagBodiesBit, 4);
    p_m_maxAntilagBodiesBit = &UndecoratedBroadPhase[6].m_maxAntilagBodiesBit;
  }
  v4->write(v4, p_m_maxAntilagBodiesBit, 4);
}

/*
==============
cacheRangeToSnapshotRange
==============
*/
void cacheRangeToSnapshotRange(const hkArray<hknpCollisionCacheRange,hkContainerHeapAllocator> *ranges, hkArray<hkSnapShotRange,hkContainerHeapAllocator> *rangesOut)
{
  int v2; 
  __int64 v5; 
  hknpCollisionCacheRange *v6; 
  int m_numElements; 
  __int64 m_startByteOffset; 
  hkMemoryAllocator *v9; 
  int m_size; 
  int v11; 
  hkSnapShotRange *v12; 
  double v13; 

  v2 = 0;
  if ( ranges->m_size > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = &ranges->m_data[v5];
      m_numElements = v6->m_numElements;
      if ( m_numElements )
      {
        m_startByteOffset = v6->m_startByteOffset;
        if ( v6->m_startBlockNumElements )
        {
          if ( (hkBlockStream::Block *)((char *)v6->m_startBlock + m_startByteOffset) != (hkBlockStream::Block *)-32i64 )
            v13 = *(double *)&v6->m_startBlock->m_data[m_startByteOffset];
        }
      }
      v9 = hkMemHeapAllocator();
      m_size = rangesOut->m_size;
      v11 = m_size;
      if ( m_size == (rangesOut->m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v9, rangesOut, 12);
        m_size = rangesOut->m_size;
        v11 = m_size;
      }
      v12 = &rangesOut->m_data[m_size];
      if ( v12 )
      {
        *(double *)&v12->m_firstPair = v13;
        v12->m_numElements = m_numElements;
        v11 = rangesOut->m_size;
      }
      ++v2;
      ++v5;
      rangesOut->m_size = v11 + 1;
    }
    while ( v2 < ranges->m_size );
  }
}

/*
==============
exportBodiesAndBroadphase
==============
*/
__int64 exportBodiesAndBroadphase(hknpWorld *world, hkStreamWriter *writer)
{
  unsigned int i; 
  int v5; 
  int v6; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  unsigned int v8; 
  unsigned int v9; 
  const hknpBody *p_m_pod; 
  __int128 *v11; 
  __int64 v12; 
  hknpBodyId *p_m_id; 
  hkMemoryAllocator *v14; 
  __int64 v15; 
  int *p_m_capacityAndFlags; 
  hkMemoryAllocator *v17; 
  char v19[4]; 
  int v20; 
  __int64 v21; 
  int v22[3]; 
  unsigned int m_size; 
  hknpBody v24; 
  __int128 v25; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> bodyIdsPerTreeOut; 

  v21 = -2i64;
  world->commitAddBodies(&world->hknpWorldWriter);
  v22[0] = world->m_bodyManager.m_bodies.m_objects.m_size;
  v22[1] = world->m_bodyManager.m_bodies.m_numAllocated;
  v22[2] = world->m_bodyManager.m_activeBodyIds.m_size;
  m_size = world->m_bodyManager.m_scheduledBodyChanges.m_size;
  writer->write(writer, v22, 16);
  for ( i = 0; i < m_size; ++i )
    writer->write(writer, &world->m_bodyManager.m_scheduledBodyChanges.m_data[i], 12);
  v5 = 0;
  v20 = 0;
  if ( world->m_bodyManager.m_scheduledBodyChangeIndices.m_size > 0 )
  {
    v6 = 0;
    do
    {
      if ( world->m_bodyManager.m_scheduledBodyChangeIndices.m_data[v6] != -1 )
      {
        writer->write(writer, &v20, 4);
        writer->write(writer, &world->m_bodyManager.m_scheduledBodyChangeIndices.m_data[v20], 4);
        v5 = v20;
      }
      v20 = ++v5;
      v6 = v5;
    }
    while ( v5 < world->m_bodyManager.m_scheduledBodyChangeIndices.m_size );
  }
  m_data = world->m_bodyManager.m_bodies.m_objects.m_data;
  v8 = world->m_bodyManager.m_bodies.m_peakIndex + 1;
  v9 = 0;
  if ( world->m_bodyManager.m_bodies.m_numAllocated )
  {
    if ( (m_data->m_pod.m_flags.m_storage & 0xF) != 0 )
      goto LABEL_22;
    v9 = 1;
    if ( v8 > 1 )
    {
      while ( (m_data[v9].m_pod.m_flags.m_storage & 0xF) == 0 )
      {
        if ( ++v9 >= v8 )
          goto LABEL_23;
      }
      if ( v9 != -1 )
      {
LABEL_22:
        do
        {
          p_m_pod = &m_data[v9].m_pod;
          v11 = (__int128 *)&world->m_bodyManager.m_previousAabbs.m_data[p_m_pod->m_id.m_serialAndIndex & 0xFFFFFF];
          v24.m_shape = NULL;
          hknpBody::operator=(&v24, p_m_pod);
          v25 = *v11;
          writer->write(writer, &v24, 192);
          if ( hknpBody::s_isShapeReferenceCountingEnabled && v24.m_shape )
            hkReferencedObject::removeReference(&v24.m_shape->hkReferencedObject);
          if ( ++v9 >= v8 )
          {
LABEL_21:
            v9 = -1;
          }
          else
          {
            while ( (m_data[v9].m_pod.m_flags.m_storage & 0xF) == 0 )
            {
              if ( ++v9 >= v8 )
                goto LABEL_21;
            }
          }
        }
        while ( v9 != -1 );
      }
    }
  }
LABEL_23:
  hknpBodyManager::rebuildFreeList(&world->m_bodyManager);
  v12 = world->m_bodyManager.m_bodies.m_objects.m_size;
  if ( v12 > 0 )
  {
    p_m_id = &world->m_bodyManager.m_bodies.m_objects.m_data->m_pod.m_id;
    do
    {
      v19[0] = HIBYTE(p_m_id->m_serialAndIndex);
      writer->write(writer, v19, 1);
      p_m_id += 44;
      --v12;
    }
    while ( v12 );
  }
  bodyIdsPerTreeOut.m_data = (hkArray<hknpBodyId,hkContainerHeapAllocator> *)&bodyIdsPerTreeOut.m_storage;
  bodyIdsPerTreeOut.m_size = 0;
  bodyIdsPerTreeOut.m_capacityAndFlags = -2147483616;
  getBodyIdsPerTree(world, &bodyIdsPerTreeOut);
  resetBroadphase<hkStreamWriter>(world, writer, &bodyIdsPerTreeOut);
  v14 = hkMemHeapAllocator();
  v15 = bodyIdsPerTreeOut.m_size - 1;
  if ( bodyIdsPerTreeOut.m_size - 1 >= 0 )
  {
    p_m_capacityAndFlags = &bodyIdsPerTreeOut.m_data[v15].m_capacityAndFlags;
    do
    {
      v17 = hkMemHeapAllocator();
      *(p_m_capacityAndFlags - 1) = 0;
      if ( *p_m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v17, *(void **)(p_m_capacityAndFlags - 3), 4, *p_m_capacityAndFlags & 0x3FFFFFFF);
      *(_QWORD *)(p_m_capacityAndFlags - 3) = 0i64;
      *p_m_capacityAndFlags = 0x80000000;
      p_m_capacityAndFlags -= 4;
      --v15;
    }
    while ( v15 >= 0 );
  }
  bodyIdsPerTreeOut.m_size = 0;
  if ( bodyIdsPerTreeOut.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v14, bodyIdsPerTreeOut.m_data, 16, bodyIdsPerTreeOut.m_capacityAndFlags & 0x3FFFFFFF);
  return 0i64;
}

/*
==============
exportCollisionCachePairParentChildren
==============
*/
hkResult exportCollisionCachePairParentChildren(hknpWorld *world, hknpCollisionCacheStreams *streams, hkStreamWriter *writer)
{
  hknpSimulationContext *m_simulationContext; 
  hknpCollisionCacheStream *p_m_children; 
  hknpSimulationThreadContext *ThreadContext; 
  hkBlockStream::Reader v10; 
  hkBlockStream::Reader v11; 

  m_simulationContext = world->m_simulationContext;
  if ( m_simulationContext )
  {
    ThreadContext = hknpSimulationContext::allocateThreadContext(m_simulationContext);
    hkBlockStream::fixupConsumedBlocks(&streams->m_caches, ThreadContext->m_blockAllocator);
    p_m_children = &streams->m_children;
    hkBlockStream::fixupConsumedBlocks(&streams->m_children, ThreadContext->m_blockAllocator);
    hknpSimulationContext::freeThreadContext(m_simulationContext, ThreadContext);
  }
  else
  {
    p_m_children = &streams->m_children;
  }
  hkBlockStream::Reader::setToStartOfStream(&v11, &streams->m_caches);
  hkBlockStream::Reader::setToStartOfStream(&v10, p_m_children);
  return exportCollisionCacheStream((hknpCollisionCacheReader *)&v11, (hknpCollisionCacheReader *)&v10, writer, world);
}

/*
==============
exportCollisionCacheStream
==============
*/
__int64 exportCollisionCacheStream(hknpCollisionCacheReader *cacheReader, hknpCollisionCacheReader *childCacheReader, hkStreamWriter *writer, hknpWorld *world)
{
  const char *m_currentByteLocation; 
  char v9; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  __int64 v11; 
  __int64 v12; 
  const hkBlockStream::Block *v13; 
  unsigned __int8 v14; 
  hkStreamWriter_vtbl *v15; 
  char v17[40]; 

  m_currentByteLocation = cacheReader->m_currentByteLocation;
  if ( m_currentByteLocation )
  {
    while ( 1 )
    {
      v9 = m_currentByteLocation[8];
      if ( v9 == 2 )
        break;
      if ( (unsigned __int8)(v9 - 4) > 2u )
        goto LABEL_9;
      m_data = world->m_bodyManager.m_bodies.m_objects.m_data;
      v11 = *((_DWORD *)m_currentByteLocation + 1) & 0xFFFFFF;
      v12 = *(_DWORD *)m_currentByteLocation & 0xFFFFFF;
      if ( (m_data[v11].m_pod.m_flags.m_storage & 3) != 0 && (m_data[v12].m_pod.m_flags.m_storage & 3) != 0 && ((LOBYTE(m_data[v11].m_pod.m_collisionControl.m_storage) | LOBYTE(m_data[v12].m_pod.m_collisionControl.m_storage)) & 1) == 0 )
        goto LABEL_9;
LABEL_14:
      v14 = m_currentByteLocation[9];
      if ( --cacheReader->m_numElementsToReadInThisBlock <= 0 )
      {
        m_currentByteLocation = (const char *)hkBlockStream::Reader::advanceToNewBlock(cacheReader);
      }
      else
      {
        m_currentByteLocation = &cacheReader->m_currentByteLocation[16 * v14];
        cacheReader->m_currentByteLocation = m_currentByteLocation;
      }
      if ( !m_currentByteLocation )
        goto LABEL_18;
    }
    if ( m_currentByteLocation[9] > 2u )
    {
      *((_QWORD *)m_currentByteLocation + 5) = 0i64;
      *((_WORD *)m_currentByteLocation + 24) = 0;
    }
LABEL_9:
    writer->write(writer, m_currentByteLocation, 16 * *((unsigned __int8 *)m_currentByteLocation + 9));
    if ( (unsigned __int8)(m_currentByteLocation[8] - 4) <= 2u )
    {
      if ( !*((_DWORD *)m_currentByteLocation + 11) || (v13 = (const hkBlockStream::Block *)*((_QWORD *)m_currentByteLocation + 4), childCacheReader->m_currentBlock = v13, childCacheReader->m_currentByteLocation = (const char *)&v13->m_data[*((unsigned __int16 *)m_currentByteLocation + 20)], LODWORD(v13) = *((unsigned __int16 *)m_currentByteLocation + 21), childCacheReader->m_numElementsToReadInThisBlock = (int)v13, childCacheReader->m_numElementsToReadInOtherBlocks = *((_DWORD *)m_currentByteLocation + 11) - (_DWORD)v13, !(_DWORD)v13) )
        childCacheReader->m_currentByteLocation = NULL;
      exportCollisionCacheStream(childCacheReader, NULL, writer, world);
    }
    goto LABEL_14;
  }
LABEL_18:
  v15 = writer->__vftable;
  v17[9] = 0;
  v15->write(writer, v17, 16);
  return 0i64;
}

/*
==============
exportCollisionCaches
==============
*/
__int64 exportCollisionCaches(hknpWorld *world, hkStreamWriter *writer)
{
  hknpCollisionCacheManager *m_collisionCacheManager; 
  __int64 i; 
  hkBlockStream *v6; 
  hknpSimulationContext *m_simulationContext; 
  const hkBlockStream *v8; 
  hknpSimulationThreadContext *ThreadContext; 
  hkBlockStream::Reader v11; 
  hkBlockStream::Reader v12; 
  hkThreadLocalBlockStreamAllocator tlAllocator; 
  hkBlockStream *stream[4]; 

  hkThreadLocalBlockStreamAllocator::hkThreadLocalBlockStreamAllocator(&tlAllocator, world->m_blockStreamAllocator.m_ptr);
  hkBlockStream::reset(&world->m_lastFrameContactData, &tlAllocator);
  m_collisionCacheManager = world->m_collisionCacheManager;
  stream[0] = &m_collisionCacheManager->m_existingCacheStream.m_caches;
  stream[1] = &m_collisionCacheManager->m_inactiveCacheStream.m_caches;
  stream[2] = &m_collisionCacheManager->m_newCacheStream.m_caches;
  stream[3] = &m_collisionCacheManager->m_reactivatedCacheStreams->m_caches;
  for ( i = 0i64; i < 4; ++i )
  {
    v6 = stream[i];
    m_simulationContext = world->m_simulationContext;
    if ( m_simulationContext )
    {
      ThreadContext = hknpSimulationContext::allocateThreadContext(m_simulationContext);
      hkBlockStream::fixupConsumedBlocks(v6, ThreadContext->m_blockAllocator);
      v8 = v6 + 1;
      hkBlockStream::fixupConsumedBlocks(v6 + 1, ThreadContext->m_blockAllocator);
      hknpSimulationContext::freeThreadContext(m_simulationContext, ThreadContext);
    }
    else
    {
      v8 = v6 + 1;
    }
    hkBlockStream::Reader::setToStartOfStream(&v12, v6);
    hkBlockStream::Reader::setToStartOfStream(&v11, v8);
    exportCollisionCacheStream((hknpCollisionCacheReader *)&v12, (hknpCollisionCacheReader *)&v11, writer, world);
  }
  hkThreadLocalBlockStreamAllocator::~hkThreadLocalBlockStreamAllocator(&tlAllocator);
  return 0i64;
}

/*
==============
exportConstraintDataAtoms
==============
*/
void exportConstraintDataAtoms(const hkReflect::Type *dataclass, hkpConstraintData *data, hkStreamWriter *writer)
{
  hkReflect::Type *m_type; 
  char *v6; 
  int v7; 
  __int64 v8; 
  hkReflect::Type *v9; 
  char *v10; 
  hkReflect::FieldDecl *Field; 
  __int64 (__fastcall ***v12)(const void *, char *); 
  hkReflect::Type *v13; 
  int v14; 
  const hkReflect::Type **v15; 
  int SizeOf; 
  char *v17; 
  hkReflect::FieldDecl *v18; 
  char *v19; 
  hkReflect::Type *v20; 
  int v21; 
  const hkReflect::Type **v22; 
  int v23; 
  __int64 (__fastcall ***v24)(_QWORD, char *); 
  hkReflect::Type *v25; 
  int v26; 
  const hkReflect::Type **v27; 
  int v28; 
  __int64 (__fastcall ***v29)(_QWORD, char *); 
  hkReflect::Type *v30; 
  int v31; 
  const hkReflect::Type **v32; 
  int v33; 
  hkArrayView<hkReflect::DataFieldDecl const > v34; 
  hkReflect::Decl result; 
  hkReflect::DataFieldDecl v36; 
  hkReflect::DataFieldDecl v37; 
  hkReflect::DataFieldDecl v38; 
  const hkReflect::Type **v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  hkReflect::FieldDecl v43; 
  hkReflect::FieldDecl v44; 
  char v45[16]; 
  char v46[16]; 
  char v47[16]; 
  char v48[24]; 
  char dst[104]; 
  int v50; 

  v42 = -2i64;
  hkReflect::Type::findDecl((hkReflect::Type *)dataclass, &result, "atoms", 1);
  m_type = (hkReflect::Type *)result.m_type.m_type;
  if ( result.m_type.m_type )
  {
    v39 = `anonymous namespace'::constraintMotorClasses;
    v40 = 3;
    v41 = -2147483645;
    hkReflect::DataFieldDecl::DataFieldDecl(&v36, result.m_type);
    v6 = (char *)data + hkReflect::FieldDecl::getOffset(&v36);
    hkReflect::Type::getDataFields(m_type, &v34);
    v7 = 0;
    if ( (int)(v34.m_end - v34.m_begin) > 0 )
    {
      v8 = 0i64;
      do
      {
        hkString::memSet(dst, 0, 108);
        v9 = (hkReflect::Type *)v34.m_begin[v8].m_type.m_type;
        if ( hkReflect::Type::equals(v9, &hkpAngMotorConstraintAtom::typeData) || hkReflect::Type::equals(v9, &hkpLinMotorConstraintAtom::typeData) )
        {
          v10 = &v6[hkReflect::FieldDecl::getOffset(&v34.m_begin[v7].hkReflect::FieldDecl)];
          Field = hkReflect::Type::findField(v9, &v43, "motor", 0);
          hkReflect::DataFieldDecl::DataFieldDecl(&v37, Field->m_type);
          v12 = *(__int64 (__fastcall ****)(const void *, char *))&v10[hkReflect::FieldDecl::getOffset(&v37)];
          if ( v12 )
          {
            v13 = *(hkReflect::Type **)((**v12)(v12, v45) + 8);
            v14 = 0;
            v15 = `anonymous namespace'::constraintMotorClasses;
            while ( *v15 != v13 )
            {
              ++v14;
              if ( (__int64)++v15 >= (__int64)&s_startTag )
              {
                v14 = -1;
                break;
              }
            }
            v50 = v14;
            SizeOf = hkReflect::Type::getSizeOf(v13);
            hkString::memCpy(dst, v12, SizeOf);
            writer->write(writer, dst, 108);
          }
        }
        if ( hkReflect::Type::equals(v9, &hkpRagdollMotorConstraintAtom::typeData) )
        {
          v17 = &v6[hkReflect::FieldDecl::getOffset(&v34.m_begin[v7].hkReflect::FieldDecl)];
          v18 = hkReflect::Type::findField(v9, &v44, "motors", 0);
          hkReflect::DataFieldDecl::DataFieldDecl(&v38, v18->m_type);
          v19 = &v17[hkReflect::FieldDecl::getOffset(&v38)];
          if ( *(_QWORD *)v19 )
          {
            v20 = *(hkReflect::Type **)((***(__int64 (__fastcall ****)(_QWORD, char *))v19)(*(_QWORD *)v19, v46) + 8);
            v21 = 0;
            v22 = `anonymous namespace'::constraintMotorClasses;
            while ( *v22 != v20 )
            {
              ++v21;
              if ( (__int64)++v22 >= (__int64)&s_startTag )
              {
                v21 = -1;
                break;
              }
            }
            v50 = v21;
            v23 = hkReflect::Type::getSizeOf(v20);
            hkString::memCpy(dst, v19, v23);
            writer->write(writer, dst, 108);
          }
          v24 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)v19 + 1);
          if ( v24 && v24 != *(__int64 (__fastcall ****)(_QWORD, char *))v19 )
          {
            v25 = *(hkReflect::Type **)((**v24)(v24, v47) + 8);
            v26 = 0;
            v27 = `anonymous namespace'::constraintMotorClasses;
            while ( *v27 != v25 )
            {
              ++v26;
              if ( (__int64)++v27 >= (__int64)&s_startTag )
              {
                v26 = -1;
                break;
              }
            }
            v50 = v26;
            v28 = hkReflect::Type::getSizeOf(v25);
            hkString::memCpy(dst, v19, v28);
            writer->write(writer, dst, 108);
          }
          v29 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)v19 + 2);
          if ( v29 && v29 != *((__int64 (__fastcall ****)(_QWORD, char *))v19 + 1) && v29 != *(__int64 (__fastcall ****)(_QWORD, char *))v19 )
          {
            v30 = *(hkReflect::Type **)((**v29)(v29, v48) + 8);
            v31 = 0;
            v32 = `anonymous namespace'::constraintMotorClasses;
            while ( *v32 != v30 )
            {
              ++v31;
              if ( (__int64)++v32 >= (__int64)&s_startTag )
              {
                v31 = -1;
                break;
              }
            }
            v50 = v31;
            v33 = hkReflect::Type::getSizeOf(v30);
            hkString::memCpy(dst, v19, v33);
            writer->write(writer, dst, 108);
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < (int)(v34.m_end - v34.m_begin) );
    }
    hkMemHeapAllocator();
  }
}

/*
==============
exportConstraints
==============
*/
__int64 exportConstraints(hknpWorld *world, hkStreamWriter *writer)
{
  hknpConstraintManager *m_constraintManager; 
  hknpThreadSafeObjectPoolElement<hknpConstraint> *m_data; 
  unsigned int v5; 
  unsigned int v6; 
  hknpThreadSafeObjectPoolElement<hknpConstraint> *v7; 
  __int16 m_runtimeSize; 
  hkpConstraintData *m_ptr; 
  hkReflect::Type *v10; 
  int v11; 
  const hkReflect::Type **v12; 
  hknpThreadSafeObjectPoolElement<hknpConstraintGroup> *v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int16 v17; 
  int v18[2]; 
  hknpConstraintManager *v19; 
  const hkReflect::Type **v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  hkReflect::Detail::AddrAndType v24; 
  unsigned int dst; 
  char v26[72]; 
  unsigned __int16 SizeOf; 
  __int16 v28; 
  int v29; 
  int v30[19]; 
  __int16 v31; 

  v23 = -2i64;
  v20 = `anonymous namespace'::constraintClasses;
  v21 = 18;
  v22 = -2147483630;
  m_constraintManager = world->m_constraintManager;
  v19 = m_constraintManager;
  v18[0] = m_constraintManager->m_constraints.m_numAllocated;
  v18[1] = m_constraintManager->m_constraintGroups.m_numAllocated;
  writer->write(writer, v18, 8);
  m_data = m_constraintManager->m_constraints.m_objects.m_data;
  v5 = m_constraintManager->m_constraints.m_peakIndex + 1;
  v6 = 0;
  if ( m_constraintManager->m_constraints.m_numAllocated )
  {
    if ( m_data->m_pod.m_id.m_value != 0x7FFFFFFF )
      goto LABEL_31;
    v6 = 1;
    if ( v5 > 1 )
    {
      while ( m_data[v6].m_pod.m_id.m_value == 0x7FFFFFFF )
      {
        if ( ++v6 >= v5 )
          goto LABEL_17;
      }
      if ( v6 != -1 )
      {
LABEL_31:
        do
        {
          v7 = &m_data[v6];
          m_runtimeSize = v7->m_pod.m_runtimeSize;
          v17 = m_runtimeSize;
          hkString::memSet(&dst, 0, 84);
          dst = v7->m_pod.m_id.m_value;
          hkString::memCpy(v26, &m_constraintManager->m_constraints.m_objects.m_data[dst], 72);
          v28 = m_runtimeSize;
          m_ptr = m_constraintManager->m_constraints.m_objects.m_data[dst].m_pod.m_data.m_ptr;
          v10 = *(hkReflect::Type **)(m_ptr->getExactType(m_ptr, &v24) + 8);
          SizeOf = hkReflect::Type::getSizeOf(v10);
          v11 = 0;
          v12 = `anonymous namespace'::constraintClasses;
          while ( *v12 != v10 )
          {
            ++v11;
            if ( (__int64)++v12 >= (__int64)`anonymous namespace'::constraintMotorClasses )
            {
              v11 = -1;
              break;
            }
          }
          v29 = v11;
          writer->write(writer, &dst, 84);
          writer->write(writer, m_ptr, SizeOf);
          exportConstraintDataAtoms(v10, m_ptr, writer);
          writer->write(writer, v7->m_pod.m_runtime, v17);
          if ( ++v6 >= v5 )
          {
LABEL_15:
            v6 = -1;
          }
          else
          {
            while ( m_data[v6].m_pod.m_id.m_value == 0x7FFFFFFF )
            {
              if ( ++v6 >= v5 )
                goto LABEL_15;
            }
          }
          m_constraintManager = v19;
        }
        while ( v6 != -1 );
      }
    }
  }
LABEL_17:
  hkString::memSet(v30, 0, 84);
  v30[0] = 0x7FFFFFFF;
  v31 = 0;
  writer->write(writer, v30, 84);
  v13 = m_constraintManager->m_constraintGroups.m_objects.m_data;
  v14 = m_constraintManager->m_constraintGroups.m_peakIndex + 1;
  v15 = 0;
  if ( m_constraintManager->m_constraintGroups.m_numAllocated )
  {
    if ( v13->m_pod.m_id.m_value != 0x7FFFFFFF )
      goto LABEL_24;
    v15 = 1;
    if ( v14 > 1 )
    {
      while ( v13[v15].m_pod.m_id.m_value == 0x7FFFFFFF )
      {
        if ( ++v15 >= v14 )
          goto LABEL_28;
      }
      if ( v15 != -1 )
      {
LABEL_24:
        writer->write(writer, &v13[v15], 24);
        while ( ++v15 < v14 )
        {
          if ( v13[v15].m_pod.m_id.m_value != 0x7FFFFFFF )
          {
            if ( v15 != -1 )
              goto LABEL_24;
            break;
          }
        }
      }
    }
  }
LABEL_28:
  hknpConstraintManager::rebuildFreeList(m_constraintManager);
  hkMemHeapAllocator();
  return 0i64;
}

/*
==============
exportDeactivation
==============
*/
__int64 exportDeactivation(hknpWorld *world, hkStreamWriter *writer)
{
  hknpDeactivationManager *m_deactivationManager; 
  __int64 v5; 
  __int64 i; 
  hknpDeactivatedIsland *v7; 
  hkStreamWriter_vtbl *v8; 
  hkStreamWriter_vtbl *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *m_currentByteLocation; 
  int m_numElementsToReadInThisBlock; 
  char v16; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  const char *v22; 
  unsigned __int8 v23; 
  const char *v24; 
  hkStreamWriter_vtbl *v25; 
  int v27; 
  int v28; 
  BOOL v29; 
  hkBlockStream::Reader v30; 
  hkBlockStream::Reader v31; 
  __int64 v32; 
  int m_size; 
  bool m_movingActivatedCaches; 
  char v35; 

  m_deactivationManager = world->m_deactivationManager;
  v35 = 0;
  v32 = *(_QWORD *)&m_deactivationManager->m_nopCachesAllowedPerBlock;
  m_size = m_deactivationManager->m_deactivatedIslands.m_size;
  m_movingActivatedCaches = m_deactivationManager->m_movingActivatedCaches;
  writer->write(writer, &v32, 16);
  exportCollisionCachePairParentChildren(world, &m_deactivationManager->m_narrowphaseOutputCaches, writer);
  v5 = m_deactivationManager->m_deactivatedIslands.m_size;
  if ( v5 > 0 )
  {
    for ( i = 0i64; i < v5; ++i )
    {
      v7 = m_deactivationManager->m_deactivatedIslands.m_data[i];
      v29 = v7 != NULL;
      writer->write(writer, &v29, 4);
      if ( v29 )
      {
        v28 = v7->m_bodies.m_size;
        writer->write(writer, &v28, 4);
        writer->write(writer, v7->m_bodies.m_data, 4 * v7->m_bodies.m_size);
        v8 = writer->__vftable;
        ++callsToSerializeArray;
        v8->write(writer, &v7->m_islandIndex, 4);
        v27 = v7->m_cacheInfos.m_size;
        writer->write(writer, &v27, 4);
        writer->write(writer, &v7->m_needsActivation, 1);
        writer->write(writer, &v7->m_markedDirty, 1);
        writer->write(writer, &v7->40, 8);
        v28 = v7->m_newLinks.m_size;
        writer->write(writer, &v28, 4);
        writer->write(writer, v7->m_newLinks.m_data, 8 * v7->m_newLinks.m_size);
        v9 = writer->__vftable;
        ++callsToSerializeArray;
        v9->write(writer, &v7->m_newLinksStepCounterOnSetup, 4);
      }
    }
  }
  v27 = m_deactivationManager->m_deactivationStates.m_size;
  writer->write(writer, &v27, 4);
  writer->write(writer, m_deactivationManager->m_deactivationStates.m_data, 32 * m_deactivationManager->m_deactivationStates.m_size);
  v10 = m_deactivationManager->m_midStepActivationEvents.m_size;
  ++callsToSerializeArray;
  v27 = v10;
  writer->write(writer, &v27, 4);
  writer->write(writer, m_deactivationManager->m_midStepActivationEvents.m_data, 16 * m_deactivationManager->m_midStepActivationEvents.m_size);
  v11 = m_deactivationManager->m_freeIslandIds.m_size;
  ++callsToSerializeArray;
  v27 = v11;
  writer->write(writer, &v27, 4);
  writer->write(writer, m_deactivationManager->m_freeIslandIds.m_data, 4 * m_deactivationManager->m_freeIslandIds.m_size);
  v12 = m_deactivationManager->m_dirtyIslands.m_size;
  ++callsToSerializeArray;
  v27 = v12;
  writer->write(writer, &v27, 4);
  writer->write(writer, m_deactivationManager->m_dirtyIslands.m_data, 4 * m_deactivationManager->m_dirtyIslands.m_size);
  v13 = m_deactivationManager->m_dirtyInactiveBodies.m_size;
  ++callsToSerializeArray;
  v27 = v13;
  writer->write(writer, &v27, 4);
  writer->write(writer, m_deactivationManager->m_dirtyInactiveBodies.m_data, 4 * m_deactivationManager->m_dirtyInactiveBodies.m_size);
  ++callsToSerializeArray;
  hkBlockStream::Reader::setToStartOfStream(&v30, &m_deactivationManager->m_inactiveParentCaches);
  m_currentByteLocation = v30.m_currentByteLocation;
  if ( v30.m_currentByteLocation )
  {
    m_numElementsToReadInThisBlock = v30.m_numElementsToReadInThisBlock;
    while ( 1 )
    {
      v16 = m_currentByteLocation[24];
      if ( v16 == 2 )
        break;
      if ( (unsigned __int8)(v16 - 4) > 2u )
        goto LABEL_15;
      m_data = world->m_bodyManager.m_bodies.m_objects.m_data;
      v18 = *((_DWORD *)m_currentByteLocation + 5) & 0xFFFFFF;
      v19 = *((_DWORD *)m_currentByteLocation + 4) & 0xFFFFFF;
      if ( (m_data[v18].m_pod.m_flags.m_storage & 3) != 0 && (m_data[v19].m_pod.m_flags.m_storage & 3) != 0 && ((LOBYTE(m_data[v18].m_pod.m_collisionControl.m_storage) | LOBYTE(m_data[v19].m_pod.m_collisionControl.m_storage)) & 1) == 0 )
        goto LABEL_15;
LABEL_21:
      v23 = m_currentByteLocation[25];
      v30.m_numElementsToReadInThisBlock = --m_numElementsToReadInThisBlock;
      if ( m_numElementsToReadInThisBlock <= 0 )
      {
        v24 = (const char *)hkBlockStream::Reader::advanceToNewBlock(&v30);
        m_numElementsToReadInThisBlock = v30.m_numElementsToReadInThisBlock;
        m_currentByteLocation = v24;
      }
      else
      {
        m_currentByteLocation = &v30.m_currentByteLocation[16 * v23 + 16];
        v30.m_currentByteLocation = m_currentByteLocation;
      }
      if ( !m_currentByteLocation )
        goto LABEL_25;
    }
    if ( m_currentByteLocation[25] > 2u )
    {
      *((_QWORD *)m_currentByteLocation + 7) = 0i64;
      *((_WORD *)m_currentByteLocation + 32) = 0;
    }
LABEL_15:
    writer->write(writer, m_currentByteLocation, 16 * (*((unsigned __int8 *)m_currentByteLocation + 25) + 1));
    if ( (unsigned __int8)(m_currentByteLocation[24] - 4) <= 2u )
    {
      hkBlockStream::Reader::setToStartOfStream(&v31, &m_deactivationManager->m_reactivatedCaches.m_children);
      v20 = *((_DWORD *)m_currentByteLocation + 15);
      if ( !v20 || (v21 = *((unsigned __int16 *)m_currentByteLocation + 28), v31.m_currentBlock = (const hkBlockStream::Block *)*((_QWORD *)m_currentByteLocation + 6), v22 = (const char *)&v31.m_currentBlock->m_data[v21], LODWORD(v21) = *((unsigned __int16 *)m_currentByteLocation + 29), v31.m_currentByteLocation = v22, v31.m_numElementsToReadInThisBlock = v21, v31.m_numElementsToReadInOtherBlocks = v20 - v21, !(_DWORD)v21) )
        v31.m_currentByteLocation = NULL;
      exportCollisionCacheStream((hknpCollisionCacheReader *)&v31, NULL, writer, world);
    }
    m_numElementsToReadInThisBlock = v30.m_numElementsToReadInThisBlock;
    goto LABEL_21;
  }
LABEL_25:
  v25 = writer->__vftable;
  v32 = -1i64;
  v25->write(writer, &v32, 16);
  return 0i64;
}

/*
==============
exportMotions
==============
*/
__int64 exportMotions(hknpWorld *world, hkStreamWriter *writer)
{
  hknpMotionManager *p_m_motionManager; 
  unsigned int v4; 
  hknpThreadSafeObjectPoolElement<hknpMotion> *m_data; 
  unsigned int v6; 
  unsigned int v7; 
  __int128 *v8; 
  __int128 v9; 
  hkStreamWriter_vtbl *v10; 
  unsigned int v12; 
  int v13; 
  __int128 v14[8]; 
  unsigned int v15; 

  p_m_motionManager = &world->m_motionManager;
  v12 = world->m_motionManager.m_motions.m_numAllocated - 1;
  v13 = world->m_motionManager.m_activeMotionsPerCell[0].m_size - 1;
  writer->write(writer, &v12, 8);
  v4 = 0;
  m_data = p_m_motionManager->m_motions.m_objects.m_data;
  v6 = p_m_motionManager->m_motions.m_peakIndex + 1;
  if ( !p_m_motionManager->m_motions.m_numAllocated )
    goto LABEL_6;
  if ( m_data->m_pod.m_spaceSplitterWeight )
    goto LABEL_7;
  v4 = 1;
  if ( v6 > 1 )
  {
    while ( !m_data[(unsigned __int64)v4].m_pod.m_spaceSplitterWeight )
    {
      if ( ++v4 >= v6 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v4 = -1;
  }
LABEL_7:
  v7 = v4 + 1;
  if ( v7 < v6 )
  {
    while ( !m_data[(unsigned __int64)v7].m_pod.m_spaceSplitterWeight )
    {
      if ( ++v7 >= v6 )
        goto LABEL_17;
    }
    while ( v7 != -1 )
    {
      v8 = (__int128 *)&m_data[(unsigned __int64)v7];
      v14[0] = *v8;
      v14[1] = v8[1];
      v14[2] = v8[2];
      v14[3] = v8[3];
      v14[4] = v8[4];
      v14[5] = v8[5];
      v14[6] = v8[6];
      v9 = v8[7];
      v10 = writer->__vftable;
      v14[7] = v9;
      v15 = v7;
      v10->write(writer, v14, 144);
      if ( ++v7 >= v6 )
      {
LABEL_15:
        v7 = -1;
      }
      else
      {
        while ( !m_data[(unsigned __int64)v7].m_pod.m_spaceSplitterWeight )
        {
          if ( ++v7 >= v6 )
            goto LABEL_15;
        }
      }
    }
  }
LABEL_17:
  if ( v13 )
    writer->write(writer, &p_m_motionManager->m_activeMotionsPerCell[0].m_data[1], 4 * v13);
  hknpMotionManager::rebuildFreeList(p_m_motionManager);
  return 0i64;
}

/*
==============
exportOther
==============
*/
__int64 exportOther(hknpWorld *worldIn, hkStreamWriter *writer)
{
  writer->write(writer, &worldIn->m_solverInfo, 368);
  return 0i64;
}

/*
==============
NpSimulationSnapshot::exportSimulationState
==============
*/
__int64 NpSimulationSnapshot::exportSimulationState(hknpWorld *world, hkStreamWriter *writer)
{
  unsigned int v4; 
  const char *v5; 
  int v6; 
  int v7; 
  __int64 *v8; 
  char *m_data; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  char v14[8]; 
  __int64 v15; 
  hkStringBuf v16; 
  __int64 v17[6]; 

  v15 = -2i64;
  v4 = 0;
  if ( writer->isOk(writer, v14)->m_bool )
  {
    v5 = s_startTag;
    v6 = hkString::strLen(s_startTag);
    writer->write(writer, v5, v6);
    v17[0] = (__int64)exportMotions;
    v17[1] = (__int64)exportBodiesAndBroadphase;
    v17[2] = (__int64)exportCollisionCaches;
    v17[3] = (__int64)exportConstraints;
    v17[4] = (__int64)exportDeactivation;
    v17[5] = (__int64)exportOther;
    v7 = 0;
    v8 = v17;
    while ( 1 )
    {
      v16.m_string.m_data = (char *)&v16.m_string.m_storage;
      v16.m_string.m_capacityAndFlags = -2147483520;
      v16.m_string.m_size = 1;
      v16.m_string.m_storage.m_storage.m_storage[0] = 0;
      hkStringBuf::printf(&v16, "\nSection %i\n", (unsigned int)v7);
      m_data = v16.m_string.m_data;
      v10 = (unsigned int)hkString::strLen(v16.m_string.m_data);
      if ( writer->write(writer, m_data, v10) != (_DWORD)v10 || ((int (__fastcall *)(hknpWorld *, hkStreamWriter *))*v8)(world, writer) < 0 )
        break;
      v16.m_string.m_size = 0;
      if ( v16.m_string.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v16.m_string.m_data, 1, v16.m_string.m_capacityAndFlags & 0x3FFFFFFF);
      ++v7;
      ++v8;
      if ( v7 >= 6 )
      {
        v11 = s_endTag;
        v12 = hkString::strLen(s_endTag);
        writer->write(writer, v11, v12);
        goto LABEL_9;
      }
    }
    v16.m_string.m_size = 0;
    if ( v16.m_string.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v16.m_string.m_data, 1, v16.m_string.m_capacityAndFlags & 0x3FFFFFFF);
    return 2147746304i64;
  }
  else
  {
LABEL_9:
    if ( !writer->isOk(writer, v14)->m_bool )
      return (unsigned int)-2147220992;
    return v4;
  }
}

/*
==============
getBodyIdsPerTree
==============
*/
void getBodyIdsPerTree(const hknpWorld *worldIn, hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *bodyIdsPerTreeOut)
{
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> *v2; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  int m_size; 
  int v6; 
  __int64 v7; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *m_data; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  int *p_m_capacityAndFlags; 
  hkMemoryAllocator *v13; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *v18; 
  int v19; 
  hkMemoryAllocator *v20; 
  int v21; 
  int v22; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v23; 
  unsigned int v24; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v25; 
  int v26; 
  __int64 v27; 

  v2 = bodyIdsPerTreeOut;
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(worldIn);
  if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
  {
    m_size = UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_words.m_size;
  }
  else if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 )
  {
    m_size = UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_size;
  }
  else
  {
    m_size = -1;
  }
  v6 = v2->m_size;
  v7 = m_size;
  m_data = v2->m_data;
  v9 = 0;
  v10 = v6 - m_size - 1;
  v11 = v10;
  if ( v10 >= 0 )
  {
    p_m_capacityAndFlags = &m_data[v10 + (__int64)m_size].m_capacityAndFlags;
    do
    {
      v13 = hkMemHeapAllocator();
      *(p_m_capacityAndFlags - 1) = 0;
      if ( *p_m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v13, *(void **)(p_m_capacityAndFlags - 3), 4, *p_m_capacityAndFlags & 0x3FFFFFFF);
      *(_QWORD *)(p_m_capacityAndFlags - 3) = 0i64;
      *p_m_capacityAndFlags = 0x80000000;
      p_m_capacityAndFlags -= 4;
      --v11;
    }
    while ( v11 >= 0 );
    v6 = v2->m_size;
    m_data = v2->m_data;
  }
  v14 = &m_data[v6];
  v15 = m_size - v6;
  v16 = m_size - v6;
  if ( v15 > 0 )
  {
    do
    {
      if ( v14 )
      {
        v14->m_data = NULL;
        v14->m_size = 0;
        v14->m_capacityAndFlags = 0x80000000;
      }
      ++v14;
      --v16;
    }
    while ( v16 );
  }
  v2->m_size = m_size;
  if ( m_size > 0 )
  {
    v17 = 0i64;
    do
    {
      v18 = &bodyIdsPerTreeOut->m_data[v17];
      v19 = ((__int64 (__fastcall *)(hknpWorldReader *, __int64))worldIn->getNumBodies)(&worldIn->hknpWorldReader, v16);
      v20 = hkMemHeapAllocator();
      v21 = v18->m_capacityAndFlags & 0x3FFFFFFF;
      if ( v21 < v19 )
      {
        v22 = 2 * v21;
        if ( (unsigned int)v22 >= 0x3FFFFFFF )
          v22 = 1073741822;
        if ( v19 < v22 )
          v19 = v22;
        hkArrayUtil::_reserve(v20, v18, v19, 4);
      }
      ++v17;
      --v7;
    }
    while ( v7 );
    v9 = 0;
    v2 = bodyIdsPerTreeOut;
  }
  v23 = worldIn->m_bodyManager.m_bodies.m_objects.m_data;
  v24 = worldIn->m_bodyManager.m_bodies.m_peakIndex + 1;
  if ( worldIn->m_bodyManager.m_bodies.m_numAllocated )
  {
    if ( (v23->m_pod.m_flags.m_storage & 0xF) != 0 )
      goto LABEL_33;
    v9 = 1;
    if ( v24 > 1 )
    {
      while ( (v23[v9].m_pod.m_flags.m_storage & 0xF) == 0 )
      {
        if ( ++v9 >= v24 )
          return;
      }
      if ( v9 != -1 )
      {
LABEL_33:
        v25 = &v23[v9];
        if ( v25->m_pod.m_broadPhaseId != -1 )
        {
          if ( ((unsigned int (__fastcall *)(hknpBroadPhase *, __int64))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase, v16) == 1 )
          {
            v26 = v25->m_pod.m_broadPhaseId >> 29;
          }
          else if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 )
          {
            v26 = v25->m_pod.m_broadPhaseId & 0x1F;
          }
          else
          {
            v26 = -1;
          }
          v27 = (__int64)&v2->m_data[v26];
          v16 = *(int *)(v27 + 8);
          *(_DWORD *)(*(_QWORD *)v27 + 4 * v16) = v25->m_pod.m_id.m_serialAndIndex;
          ++*(_DWORD *)(v27 + 8);
        }
        while ( ++v9 < v24 )
        {
          if ( (v23[v9].m_pod.m_flags.m_storage & 0xF) != 0 )
          {
            if ( v9 != -1 )
              goto LABEL_33;
            return;
          }
        }
      }
    }
  }
}

/*
==============
NpSimulationSnapshot::LoadShapesFromWorldSnapshot::getShapeForBody
==============
*/
const hknpShape *NpSimulationSnapshot::LoadShapesFromWorldSnapshot::getShapeForBody(NpSimulationSnapshot::LoadShapesFromWorldSnapshot *this, hknpBody *body)
{
  int v3; 
  hknpWorldSnapshot *m_worldSnapshot; 
  int m_size; 
  unsigned int m_serialAndIndex; 
  hknpBody *m_data; 
  hknpBodyId *p_m_id; 
  hkStringBuf v10; 

  v3 = 0;
  m_worldSnapshot = this->m_worldSnapshot;
  m_size = m_worldSnapshot->m_bodies.m_size;
  if ( m_size <= 0 )
  {
LABEL_5:
    v10.m_string.m_data = (char *)&v10.m_string.m_storage;
    v10.m_string.m_capacityAndFlags = -2147483520;
    v10.m_string.m_size = 1;
    v10.m_string.m_storage.m_storage.m_storage[0] = 0;
    hkStringBuf::printf(&v10, "Couldn't find matching body to grab shape in snapshot - assigning a null shape to body id: %x", body->m_id.m_serialAndIndex);
    v10.m_string.m_size = 0;
    if ( v10.m_string.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v10.m_string.m_data, 1, v10.m_string.m_capacityAndFlags & 0x3FFFFFFF);
    return 0i64;
  }
  else
  {
    m_serialAndIndex = body->m_id.m_serialAndIndex;
    m_data = m_worldSnapshot->m_bodies.m_data;
    p_m_id = &m_data->m_id;
    while ( p_m_id->m_serialAndIndex != m_serialAndIndex )
    {
      ++v3;
      p_m_id += 44;
      if ( v3 >= m_size )
        goto LABEL_5;
    }
    return m_data[v3].m_shape;
  }
}

/*
==============
importBodiesAndBroadphase
==============
*/
__int64 importBodiesAndBroadphase(hknpWorld *worldIn, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *fixupUtil)
{
  unsigned int v6; 
  int v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  _DWORD *v10; 
  unsigned int v11; 
  hkMemoryAllocator *v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  _DWORD *v16; 
  hknpBodyManager *p_m_bodyManager; 
  int v18; 
  hkMemoryAllocator *v19; 
  int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  int v26; 
  hkMemoryAllocator *v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  hknpBodyId *v32; 
  __int64 i; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  int m_size; 
  unsigned int v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  int *p_m_capacityAndFlags; 
  hkMemoryAllocator *v41; 
  int v42; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *v47; 
  int v48; 
  hkMemoryAllocator *v49; 
  int v50; 
  int v51; 
  unsigned __int8 v52; 
  int v53; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v54; 
  const hknpShape *v55; 
  int v56; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *v57; 
  const hknpShape *m_shape; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  unsigned int v64; 
  __int64 v65; 
  hkMemoryAllocator *v66; 
  __int64 v67; 
  int *v68; 
  hkMemoryAllocator *v69; 
  hkMemoryAllocator *v70; 
  char v71[8]; 
  int numInOut; 
  hknpBodyId desiredId[2]; 
  _DWORD *array; 
  int v75; 
  int v76; 
  unsigned int v77; 
  __int64 v78; 
  NpSimulationSnapshot::PostImportPatch *v79; 
  __int64 v80; 
  unsigned int v81; 
  unsigned int v82; 
  int v83; 
  unsigned int v84; 
  __int128 v85[4]; 
  __int128 v86; 
  hkAabb24_16_24 v87; 
  hkReferencedObject *v88[2]; 
  __int128 v89; 
  hkQuaternionf v90; 
  __int128 v91; 
  __int128 v92; 
  hkAabb24_16_24 v93; 
  hkInplaceArray<hkArray<hknpBodyId,hkContainerHeapAllocator>,32,hkContainerHeapAllocator> bodyIdsPerTree; 
  hknpDeactivationStepInfo v95; 

  v80 = -2i64;
  v79 = fixupUtil;
  if ( reader->read(reader, &v81, 16) != 16 )
    return 2147746304i64;
  hknpDeactivationStepInfo::hknpDeactivationStepInfo(&v95, worldIn->m_motionManager.m_motions.m_peakIndex + 1, 1);
  v6 = v82;
  *(_QWORD *)&desiredId[0].m_serialAndIndex = &array;
  array = NULL;
  v75 = 0;
  v76 = 0x80000000;
  v7 = (int)(v82 + 31) >> 5;
  numInOut = v7;
  v8 = hkMemHeapAllocator();
  v9 = v7;
  if ( v7 )
  {
    v10 = hkMemoryAllocator::bufAlloc2(v8, 4, &numInOut);
    v9 = numInOut;
  }
  else
  {
    v10 = NULL;
  }
  v11 = 0x80000000;
  if ( v9 )
    v11 = v9;
  array = v10;
  v75 = v7;
  v76 = v11;
  v77 = v6;
  v12 = hkMemHeapAllocator();
  if ( (v76 & 0x3FFFFFFF) < v7 )
  {
    v13 = 2 * (v76 & 0x3FFFFFFF);
    if ( (unsigned int)v13 >= 0x3FFFFFFF )
      v13 = 1073741822;
    v14 = v7;
    if ( v7 < v13 )
      v14 = v13;
    hkArrayUtil::_reserve(v12, &array, v14, 4);
  }
  v75 = v7;
  if ( v7 > 0 )
  {
    v15 = (unsigned int)v7;
    v16 = array;
    while ( v15 )
    {
      *v16++ = 0;
      --v15;
    }
  }
  p_m_bodyManager = &worldIn->m_bodyManager;
  hknpBodyManager::clearAllScheduledBodyChanges(&worldIn->m_bodyManager);
  v18 = v84;
  v19 = hkMemHeapAllocator();
  v20 = worldIn->m_bodyManager.m_scheduledBodyChanges.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v20 < v18 )
  {
    v21 = 2 * v20;
    if ( (unsigned int)v21 >= 0x3FFFFFFF )
      v21 = 1073741822;
    v22 = v18;
    if ( v18 < v21 )
      v22 = v21;
    hkArrayUtil::_reserve(v19, &worldIn->m_bodyManager.m_scheduledBodyChanges, v22, 12);
  }
  worldIn->m_bodyManager.m_scheduledBodyChanges.m_size = v18;
  v23 = 0;
  v24 = v84;
  if ( v84 )
  {
    while ( reader->read(reader, &worldIn->m_bodyManager.m_scheduledBodyChanges.m_data[v23], 12) == 12 )
    {
      ++v23;
      v24 = v84;
      if ( v23 >= v84 )
        goto LABEL_27;
    }
    goto LABEL_43;
  }
LABEL_27:
  v25 = 0;
  if ( !v24 )
  {
LABEL_31:
    worldIn->m_bodyManager.m_activeBodyIds.m_size = 0;
    v26 = v83;
    v27 = hkMemHeapAllocator();
    v28 = worldIn->m_bodyManager.m_activeBodyIds.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v28 < v26 )
    {
      v29 = 2 * v28;
      if ( (unsigned int)v29 >= 0x3FFFFFFF )
        v29 = 1073741822;
      v30 = v26;
      if ( v26 < v29 )
        v30 = v29;
      hkArrayUtil::_reserve(v27, &worldIn->m_bodyManager.m_activeBodyIds, v30, 4);
    }
    v31 = v26 - worldIn->m_bodyManager.m_activeBodyIds.m_size;
    v32 = &worldIn->m_bodyManager.m_activeBodyIds.m_data[worldIn->m_bodyManager.m_activeBodyIds.m_size];
    if ( v31 > 0 )
    {
      for ( i = v31; i; --i )
      {
        v32->m_serialAndIndex = 0xFFFFFF;
        ++v32;
      }
    }
    worldIn->m_bodyManager.m_activeBodyIds.m_size = v26;
    UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(worldIn);
    *(_QWORD *)&desiredId[0].m_serialAndIndex = UndecoratedBroadPhase;
    bodyIdsPerTree.m_data = (hkArray<hknpBodyId,hkContainerHeapAllocator> *)&bodyIdsPerTree.m_storage;
    bodyIdsPerTree.m_size = 0;
    bodyIdsPerTree.m_capacityAndFlags = -2147483616;
    if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
    {
      m_size = UndecoratedBroadPhase[3].m_antilagBodies.m_storage.m_words.m_size;
    }
    else if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 )
    {
      m_size = UndecoratedBroadPhase[1].m_antilagBodies.m_storage.m_words.m_size;
    }
    else
    {
      m_size = -1;
    }
    v37 = bodyIdsPerTree.m_size;
    v38 = m_size;
    v78 = m_size;
    v39 = bodyIdsPerTree.m_size - m_size - 1;
    if ( bodyIdsPerTree.m_size - m_size - 1 >= 0 )
    {
      p_m_capacityAndFlags = &bodyIdsPerTree.m_data[m_size + v39].m_capacityAndFlags;
      do
      {
        v41 = hkMemHeapAllocator();
        *(p_m_capacityAndFlags - 1) = 0;
        if ( *p_m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v41, *(void **)(p_m_capacityAndFlags - 3), 4, *p_m_capacityAndFlags & 0x3FFFFFFF);
        *(_QWORD *)(p_m_capacityAndFlags - 3) = 0i64;
        *p_m_capacityAndFlags = 0x80000000;
        p_m_capacityAndFlags -= 4;
        --v39;
      }
      while ( v39 >= 0 );
      v37 = bodyIdsPerTree.m_size;
      v38 = m_size;
    }
    v42 = m_size - v37;
    v43 = &bodyIdsPerTree.m_data[v37];
    v44 = m_size - v37;
    if ( v42 > 0 )
    {
      do
      {
        if ( v43 )
        {
          v43->m_data = NULL;
          v43->m_size = 0;
          v43->m_capacityAndFlags = 0x80000000;
        }
        ++v43;
        --v44;
      }
      while ( v44 );
    }
    bodyIdsPerTree.m_size = m_size;
    if ( v38 > 0 )
    {
      v45 = 0i64;
      v46 = v38;
      do
      {
        v47 = &bodyIdsPerTree.m_data[v45];
        v48 = v82;
        v49 = hkMemHeapAllocator();
        v50 = v47->m_capacityAndFlags & 0x3FFFFFFF;
        if ( v50 < v48 )
        {
          v51 = 2 * v50;
          if ( (unsigned int)v51 >= 0x3FFFFFFF )
            v51 = 1073741822;
          if ( v48 < v51 )
            v48 = v51;
          hkArrayUtil::_reserve(v49, v47, v48, 4);
        }
        ++v45;
        --v46;
      }
      while ( v46 );
      UndecoratedBroadPhase = *(hknpBroadPhase **)&desiredId[0].m_serialAndIndex;
      p_m_bodyManager = &worldIn->m_bodyManager;
    }
    v52 = hknpBody::s_isShapeReferenceCountingEnabled;
    v71[0] = hknpBody::s_isShapeReferenceCountingEnabled;
    hknpBody::s_isShapeReferenceCountingEnabled = 0;
    v53 = 0;
    if ( v82 )
    {
      while ( 1 )
      {
        v88[0] = NULL;
        if ( reader->read(reader, v85, 192) != 192 )
          break;
        hknpBodyManager::allocateBody(p_m_bodyManager, (hknpBodyId)desiredId);
        v54 = &p_m_bodyManager->m_bodies.m_objects.m_data[v89 & 0xFFFFFF];
        v54->m_pod.m_transform.m_rotation.m_col0 = (hkVector4f)v85[0];
        v54->m_pod.m_transform.m_rotation.m_col1 = (hkVector4f)v85[1];
        v54->m_pod.m_transform.m_rotation.m_col2 = (hkVector4f)v85[2];
        v54->m_pod.m_transform.m_translation = (hkVector4f)v85[3];
        *(_OWORD *)&v54->m_pod.m_motionId.m_value = v86;
        v54->m_pod.m_aabb = v87;
        *(_OWORD *)&v54->m_pod.m_shape = *(_OWORD *)v88;
        *(_OWORD *)&v54->m_pod.m_id.m_serialAndIndex = v89;
        v54->m_pod.m_motionToBodyRotation = (hkQuaternionf)v90.m_vec.m_quad;
        *(_OWORD *)&v54->m_pod.m_lodTypeToVariant[0].m_data = v91;
        *(_OWORD *)&v54->m_pod.m_userData = v92;
        p_m_bodyManager->m_previousAabbs.m_data[v89 & 0xFFFFFF] = v93;
        if ( (BYTE4(v86) & 8) != 0 )
          p_m_bodyManager->m_bodyIndexToCellIndexMap.m_data[v54->m_pod.m_id.m_serialAndIndex & 0xFFFFFF] = *(_BYTE *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))worldIn->getMotion)(&worldIn->hknpWorldReader, v54->m_pod.m_motionId.m_value) + 62);
        if ( v79 )
        {
          v55 = (const hknpShape *)v79->getShapeForBody(v79, &v54->m_pod);
          hknpBody::setShape(&v54->m_pod, v55);
        }
        if ( v54->m_pod.m_broadPhaseId != -1 )
        {
          if ( ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 1 )
            v56 = v54->m_pod.m_broadPhaseId >> 29;
          else
            v56 = ((unsigned int (__fastcall *)(hknpBroadPhase *))UndecoratedBroadPhase->getType)(UndecoratedBroadPhase) == 2 ? v54->m_pod.m_broadPhaseId & 0x1F : -1;
          v57 = &bodyIdsPerTree.m_data[v56];
          v57->m_data[v57->m_size++].m_serialAndIndex = v54->m_pod.m_id.m_serialAndIndex;
          m_shape = v54->m_pod.m_shape;
          if ( m_shape )
          {
            if ( m_shape->getMutationSignals(m_shape) )
              hknpShapeManager::registerBodyWithMutableShape(worldIn->m_shapeManager.m_ptr, &v54->m_pod);
          }
        }
        if ( hknpBody::s_isShapeReferenceCountingEnabled && v88[0] )
          hkReferencedObject::removeReference(v88[0]);
        if ( ++v53 >= v82 )
        {
          v52 = v71[0];
          goto LABEL_87;
        }
      }
      if ( hknpBody::s_isShapeReferenceCountingEnabled && v88[0] )
        hkReferencedObject::removeReference(v88[0]);
    }
    else
    {
LABEL_87:
      hknpBody::s_isShapeReferenceCountingEnabled = v52;
      hknpBodyManager::rebuildActiveBodyArray(p_m_bodyManager);
      hknpBodyManager::rebuildFreeList(p_m_bodyManager);
      if ( ((unsigned __int64)worldIn->m_signals.m_bodiesAdded.m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64) != 0 )
      {
        v59 = v78;
        if ( v78 > 0 )
        {
          v60 = 0i64;
          do
          {
            v61 = 0i64;
            v62 = bodyIdsPerTree.m_data[v60].m_size;
            if ( v62 > 0 )
            {
              do
              {
                desiredId[0] = bodyIdsPerTree.m_data[v60].m_data[v61];
                hkSignal3<hknpWorld *,hknpBodyId const *,int>::fire(&worldIn->m_signals.m_bodiesAdded, worldIn, desiredId, 1);
                ++v61;
              }
              while ( v61 < v62 );
            }
            ++v60;
            --v59;
          }
          while ( v59 );
        }
      }
      m_data = worldIn->m_bodyManager.m_bodies.m_objects.m_data;
      v64 = 0;
      if ( !v81 )
      {
LABEL_96:
        resetBroadphase<hkStreamReader>(worldIn, reader, &bodyIdsPerTree);
        v36 = 0;
LABEL_97:
        v66 = hkMemHeapAllocator();
        v67 = bodyIdsPerTree.m_size - 1;
        if ( bodyIdsPerTree.m_size - 1 >= 0 )
        {
          v68 = &bodyIdsPerTree.m_data[v67].m_capacityAndFlags;
          do
          {
            v69 = hkMemHeapAllocator();
            *(v68 - 1) = 0;
            if ( *v68 >= 0 )
              hkMemoryAllocator::bufFree2(v69, *(void **)(v68 - 3), 4, *v68 & 0x3FFFFFFF);
            *(_QWORD *)(v68 - 3) = 0i64;
            *v68 = 0x80000000;
            v68 -= 4;
            --v67;
          }
          while ( v67 >= 0 );
        }
        bodyIdsPerTree.m_size = 0;
        if ( bodyIdsPerTree.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v66, bodyIdsPerTree.m_data, 16, bodyIdsPerTree.m_capacityAndFlags & 0x3FFFFFFF);
        bodyIdsPerTree.m_data = NULL;
        bodyIdsPerTree.m_capacityAndFlags = 0x80000000;
        goto LABEL_105;
      }
      while ( reader->read(reader, v71, 1) == 1 )
      {
        v65 = v64;
        m_data[v65].m_pod.m_id.m_serialAndIndex &= 0xFFFFFFu;
        m_data[v65].m_pod.m_id.m_serialAndIndex |= (unsigned __int8)v71[0] << 24;
        if ( ++v64 >= v81 )
          goto LABEL_96;
      }
    }
    v36 = -2147220992;
    goto LABEL_97;
  }
  while ( reader->read(reader, &v78, 4) == 4 && reader->read(reader, desiredId, 4) == 4 )
  {
    worldIn->m_bodyManager.m_scheduledBodyChangeIndices.m_data[(int)v78] = (int)desiredId[0];
    if ( ++v25 >= v84 )
      goto LABEL_31;
  }
LABEL_43:
  v36 = -2147220992;
LABEL_105:
  v70 = hkMemHeapAllocator();
  v75 = 0;
  if ( v76 >= 0 )
    hkMemoryAllocator::bufFree2(v70, array, 4, v76 & 0x3FFFFFFF);
  array = NULL;
  v76 = 0x80000000;
  hknpDeactivationStepInfo::~hknpDeactivationStepInfo(&v95);
  return v36;
}

/*
==============
importCollisionCachePairParentChildren
==============
*/
__int64 importCollisionCachePairParentChildren(hknpCollisionCacheStreams *cacheStreams, hkStreamReader *reader, hkThreadLocalBlockStreamAllocator *tlAllocator)
{
  unsigned int m_code; 
  hkBlockStream::Writer v8; 
  hkBlockStream::Writer v9; 

  hkBlockStream::reset(&cacheStreams->m_caches, tlAllocator);
  hkBlockStream::reset(&cacheStreams->m_children, tlAllocator);
  v8.m_accessSize.member = 0;
  v8.m_blockStream = NULL;
  v9.m_accessSize.member = 0;
  v9.m_blockStream = NULL;
  hkBlockStream::Writer::setToStartOfStream(&v8, tlAllocator, &cacheStreams->m_caches);
  hkBlockStream::Writer::setToStartOfStream(&v9, tlAllocator, &cacheStreams->m_children);
  m_code = importCollisionCacheStream((hknpCollisionCacheWriter *)&v8, (hknpCollisionCacheWriter *)&v9, reader).m_code;
  hkBlockStream::Writer::finalize(&v8);
  hkBlockStream::Writer::finalize(&v9);
  return m_code;
}

/*
==============
importCollisionCacheStream
==============
*/
__int64 importCollisionCacheStream(hknpCollisionCacheWriter *cacheWriter, hknpCollisionCacheWriter *childCacheWriter, hkStreamReader *reader)
{
  unsigned int i; 
  __int64 m_currentByteOffset; 
  unsigned __int8 *v8; 
  unsigned __int8 v9; 
  __int16 m_currentBlockNumElems; 
  __int16 v11; 
  hkBlockStream::Block *m_currentBlock; 
  __int128 v14; 

  reader->read(reader, &v14, 16);
  for ( i = 16 * BYTE9(v14); i; i = 16 * BYTE9(v14) )
  {
    m_currentByteOffset = cacheWriter->m_currentByteOffset;
    if ( (int)(m_currentByteOffset + i) > 3808 )
      v8 = (unsigned __int8 *)hkBlockStream::Writer::allocateAndAccessNewBlock(cacheWriter);
    else
      v8 = &cacheWriter->m_currentBlock->m_data[m_currentByteOffset];
    *(_OWORD *)v8 = v14;
    if ( i > 0x10 )
      reader->read(reader, v8 + 16, i - 16);
    cacheWriter->m_currentByteOffset += i;
    ++cacheWriter->m_currentBlockNumElems;
    v9 = v8[8];
    if ( v9 >= 4u && v9 <= 6u )
    {
      m_currentBlockNumElems = childCacheWriter->m_currentBlockNumElems;
      v11 = childCacheWriter->m_currentByteOffset;
      m_currentBlock = childCacheWriter->m_currentBlock;
      *((_DWORD *)v8 + 11) = -(childCacheWriter->m_currentBlockNumElems + childCacheWriter->m_blockStream->m_numTotalElements);
      *((_WORD *)v8 + 21) = m_currentBlockNumElems;
      *((_QWORD *)v8 + 4) = m_currentBlock;
      *((_WORD *)v8 + 20) = v11;
      importCollisionCacheStream(childCacheWriter, NULL, reader);
      hkBlockStream::Range::setEndPoint((hkBlockStream::Range *)v8 + 2, childCacheWriter);
    }
    reader->read(reader, &v14, 16);
  }
  return 0i64;
}

/*
==============
importCollisionCaches
==============
*/
__int64 importCollisionCaches(hknpWorld *world, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *__formal)
{
  hknpCollisionCacheManager *m_collisionCacheManager; 
  __int64 i; 
  hknpCollisionCacheStreams *v7; 
  hkBlockStream::Writer v9; 
  hkBlockStream::Writer v10; 
  hkThreadLocalBlockStreamAllocator tlAllocator; 
  hknpCollisionCacheStreams *v12[4]; 

  m_collisionCacheManager = world->m_collisionCacheManager;
  v12[0] = &m_collisionCacheManager->m_existingCacheStream;
  v12[1] = &m_collisionCacheManager->m_inactiveCacheStream;
  v12[2] = &m_collisionCacheManager->m_newCacheStream;
  v12[3] = m_collisionCacheManager->m_reactivatedCacheStreams;
  hkThreadLocalBlockStreamAllocator::hkThreadLocalBlockStreamAllocator(&tlAllocator, world->m_blockStreamAllocator.m_ptr);
  hkBlockStream::reset(&world->m_lastFrameContactData, &tlAllocator);
  for ( i = 0i64; i < 4; ++i )
  {
    v7 = v12[i];
    hknpCollisionCacheStreams::reset(v7, &tlAllocator);
    hkBlockStream::reset(&v7->m_caches, &tlAllocator);
    hkBlockStream::reset(&v7->m_children, &tlAllocator);
    v9.m_accessSize.member = 0;
    v9.m_blockStream = NULL;
    v10.m_accessSize.member = 0;
    v10.m_blockStream = NULL;
    hkBlockStream::Writer::setToStartOfStream(&v9, &tlAllocator, &v7->m_caches);
    hkBlockStream::Writer::setToStartOfStream(&v10, &tlAllocator, &v7->m_children);
    importCollisionCacheStream((hknpCollisionCacheWriter *)&v9, (hknpCollisionCacheWriter *)&v10, reader);
    hkBlockStream::Writer::finalize(&v9);
    hkBlockStream::Writer::finalize(&v10);
  }
  hkThreadLocalBlockStreamAllocator::~hkThreadLocalBlockStreamAllocator(&tlAllocator);
  return 0i64;
}

/*
==============
importConstraintAtoms
==============
*/
hkpConstraintAtom *importConstraintAtoms(const hkReflect::Type *dataClass, hkpConstraintData *data, hkStreamReader *reader)
{
  hkStreamReader *v3; 
  hkReflect::Type *m_type; 
  char *v6; 
  int v7; 
  __int64 v8; 
  hkReflect::Type *v9; 
  hkReflect::FieldDecl *Field; 
  __int64 Offset; 
  char *v12; 
  hkReflect::Type *v13; 
  unsigned int SizeOf; 
  hkMemoryRouter *Value; 
  void *v16; 
  int v17; 
  char *v18; 
  hkReflect::FieldDecl *v19; 
  __int64 v20; 
  __int64 v21; 
  void *v22; 
  hkReflect::Type *v23; 
  unsigned int v24; 
  hkMemoryRouter *v25; 
  void *v26; 
  int v27; 
  void *v28; 
  hkReflect::Type *v29; 
  unsigned int v30; 
  hkMemoryRouter *v31; 
  int v32; 
  hkReflect::Type *v33; 
  unsigned int v34; 
  hkMemoryRouter *v35; 
  int v36; 
  __int64 v38; 
  char *v39; 
  hkArrayView<hkReflect::DataFieldDecl const > v41; 
  void *v42; 
  hkReflect::Decl result; 
  hkReflect::DataFieldDecl v44; 
  hkReflect::DataFieldDecl v45; 
  hkReflect::DataFieldDecl v46; 
  void *v47; 
  const hkReflect::Type **v48; 
  int v49; 
  int v50; 
  __int64 v51; 
  hkReflect::FieldDecl v52; 
  hkReflect::FieldDecl v53; 
  char dst[104]; 
  int v55; 

  v51 = -2i64;
  v3 = reader;
  hkReflect::Type::findDecl((hkReflect::Type *)dataClass, &result, "atoms", 1);
  m_type = (hkReflect::Type *)result.m_type.m_type;
  if ( result.m_type.m_type )
  {
    hkReflect::DataFieldDecl::DataFieldDecl(&v44, result.m_type);
    v6 = (char *)data + hkReflect::FieldDecl::getOffset(&v44);
    v39 = v6;
    v48 = `anonymous namespace'::constraintMotorClasses;
    v49 = 3;
    v50 = -2147483645;
    hkReflect::Type::getDataFields(m_type, &v41);
    v7 = 0;
    if ( (int)(v41.m_end - v41.m_begin) > 0 )
    {
      v8 = 0i64;
      v38 = 0i64;
      do
      {
        hkString::memSet(dst, 0, 108);
        v9 = *(hkReflect::Type **)((char *)&v41.m_begin->m_type.m_type + v8);
        if ( hkReflect::Type::equals(v9, &hkpAngMotorConstraintAtom::typeData) || hkReflect::Type::equals(v9, &hkpLinMotorConstraintAtom::typeData) )
        {
          Field = hkReflect::Type::findField(v9, &v52, "motor", 0);
          hkReflect::DataFieldDecl::DataFieldDecl(&v45, Field->m_type);
          Offset = hkReflect::FieldDecl::getOffset(&v45);
          v12 = &v6[hkReflect::FieldDecl::getOffset(&v41.m_begin[v7].hkReflect::FieldDecl) + Offset];
          if ( *(_QWORD *)v12 )
          {
            v3->read(v3, dst, 108);
            v13 = (hkReflect::Type *)`anonymous namespace'::constraintMotorClasses[v55];
            SizeOf = hkReflect::Type::getSizeOf(v13);
            Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
            if ( !Value )
              Value = hkMemoryRouter::s_fallbackRouter;
            v16 = Value->m_heap->blockAlloc(Value->m_heap, SizeOf);
            v17 = hkReflect::Type::getSizeOf(v13);
            hkString::memCpy(v16, dst, v17);
            hkReflect::Detail::initializeVtables(v16, v13, 1);
            *(_QWORD *)v12 = v16;
          }
          v8 = v38;
        }
        if ( !hkReflect::Type::equals(v9, &hkpRagdollMotorConstraintAtom::typeData) )
          goto LABEL_33;
        v18 = &v6[hkReflect::FieldDecl::getOffset(&v41.m_begin[v7].hkReflect::FieldDecl)];
        v19 = hkReflect::Type::findField(v9, &v53, "motors", 0);
        hkReflect::DataFieldDecl::DataFieldDecl(&v46, v19->m_type);
        v20 = hkReflect::FieldDecl::getOffset(&v46);
        v21 = *(_QWORD *)&v18[v20];
        v42 = (void *)v21;
        v22 = *(void **)&v18[v20 + 8];
        v47 = *(void **)&v18[v20 + 16];
        if ( v21 )
        {
          v3->read(v3, dst, 108);
          v23 = (hkReflect::Type *)`anonymous namespace'::constraintMotorClasses[v55];
          v24 = hkReflect::Type::getSizeOf(v23);
          v25 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !v25 )
            v25 = hkMemoryRouter::s_fallbackRouter;
          v26 = v25->m_heap->blockAlloc(v25->m_heap, v24);
          v27 = hkReflect::Type::getSizeOf(v23);
          hkString::memCpy(v26, dst, v27);
          hkReflect::Detail::initializeVtables(v26, v23, 1);
          *(_QWORD *)&v18[v20] = v26;
          v28 = *(void **)&v18[v20 + 8];
          v21 = (__int64)v42;
        }
        else
        {
          v26 = NULL;
          v28 = v22;
        }
        if ( v28 )
        {
          if ( (void *)v21 != v22 )
          {
            v3 = reader;
            reader->read(reader, dst, 108);
            v29 = (hkReflect::Type *)`anonymous namespace'::constraintMotorClasses[v55];
            v30 = hkReflect::Type::getSizeOf(v29);
            v31 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
            if ( !v31 )
              v31 = hkMemoryRouter::s_fallbackRouter;
            v28 = v31->m_heap->blockAlloc(v31->m_heap, v30);
            v32 = hkReflect::Type::getSizeOf(v29);
            hkString::memCpy(v28, dst, v32);
            hkReflect::Detail::initializeVtables(v28, v29, 1);
            *(_QWORD *)&v18[v20 + 8] = v28;
            goto LABEL_21;
          }
          *(_QWORD *)&v18[v20 + 8] = v26;
          v28 = v26;
        }
        v3 = reader;
LABEL_21:
        if ( *(_QWORD *)&v18[v20 + 16] )
        {
          if ( v42 == v47 )
          {
            *(_QWORD *)&v18[v20 + 16] = *(_QWORD *)&v18[v20];
          }
          else
          {
            if ( v22 != v47 )
            {
              v3->read(v3, dst, 108);
              v33 = (hkReflect::Type *)`anonymous namespace'::constraintMotorClasses[v55];
              v34 = hkReflect::Type::getSizeOf(v33);
              v35 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
              if ( !v35 )
                v35 = hkMemoryRouter::s_fallbackRouter;
              v28 = v35->m_heap->blockAlloc(v35->m_heap, v34);
              v36 = hkReflect::Type::getSizeOf(v33);
              hkString::memCpy(v28, dst, v36);
              hkReflect::Detail::initializeVtables(v28, v33, 1);
            }
            *(_QWORD *)&v18[v20 + 16] = v28;
          }
        }
        v6 = v39;
        v8 = v38;
LABEL_33:
        ++v7;
        v8 += 8i64;
        v38 = v8;
      }
      while ( v7 < (int)(v41.m_end - v41.m_begin) );
    }
    hkMemHeapAllocator();
    return (hkpConstraintAtom *)v6;
  }
  else
  {
    return 0i64;
  }
}

/*
==============
importConstraints
==============
*/
__int64 importConstraints(hknpWorld *world, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *__formal)
{
  hknpConstraintManager *m_constraintManager; 
  signed int v6; 
  hkMemoryAllocator *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  hknpBodyToConstraintsMap::ConstraintMapHead *v12; 
  __int64 i; 
  __int64 v14; 
  unsigned int v15; 
  hkMemoryRouter *Value; 
  hkpConstraintData *v17; 
  hkpConstraintData *v18; 
  const hkReflect::Type *v19; 
  unsigned __int16 v20; 
  unsigned int v21; 
  hkMemoryRouter *v22; 
  void *v23; 
  const hknpConstraint *p_m_pod; 
  unsigned int m_value; 
  hknpBodyId *p_m_bodyIdA; 
  int v28; 
  unsigned int v29; 
  unsigned int v30; 
  const hkReflect::Type **v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  char v35[4]; 
  unsigned int v36; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> dst; 
  char src[72]; 
  unsigned __int16 v39; 
  unsigned __int16 v40; 
  int v41; 

  v34 = -2i64;
  v31 = `anonymous namespace'::constraintClasses;
  v32 = 18;
  v33 = -2147483630;
  if ( reader->read(reader, &v29, 8) != 8 )
    goto LABEL_31;
  m_constraintManager = world->m_constraintManager;
  v6 = world->getBodyCapacity(&world->hknpWorldReader);
  if ( m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_size < (unsigned int)v6 )
  {
    v7 = hkMemHeapAllocator();
    v8 = m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v8 < v6 )
    {
      v9 = 2 * v8;
      if ( (unsigned int)v9 >= 0x3FFFFFFF )
        v9 = 1073741822;
      v10 = v6;
      if ( v6 < v9 )
        v10 = v9;
      hkArrayUtil::_reserve(v7, &m_constraintManager->m_bodyIdToConstraintIdsMap, v10, 4);
    }
    v11 = v6 - m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_size;
    v12 = &m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_data[m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_size];
    if ( v11 > 0 )
    {
      for ( i = v11; i; --i )
      {
        v12->m_serialAndIndex = -1;
        ++v12;
      }
    }
    m_constraintManager->m_bodyIdToConstraintIdsMap.m_bodyIndexToFirstAttachedConstraintId.m_size = v6;
  }
  hkString::memSet(&dst, 0, 84);
  if ( reader->read(reader, &dst, 84) != 84 )
  {
LABEL_31:
    hkMemHeapAllocator();
    return 2147746304i64;
  }
  while ( dst.m_value != 0x7FFFFFFF )
  {
    v14 = (__int64)&m_constraintManager->m_constraints.m_objects.m_data[dst.m_value];
    hkString::memCpy((void *)v14, src, 72);
    if ( v39 )
    {
      v15 = v39;
      Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !Value )
        Value = hkMemoryRouter::s_fallbackRouter;
      v17 = (hkpConstraintData *)Value->m_heap->blockAlloc(Value->m_heap, v15);
      reader->read(reader, v17, v39);
      *(_QWORD *)(v14 + 8) = 0i64;
      v18 = NULL;
      if ( v17 )
      {
        *(_QWORD *)(v14 + 8) = v17;
        v18 = v17;
      }
      v18->m_refCount = 1;
      v19 = `anonymous namespace'::constraintClasses[v41];
      hkReflect::Detail::initializeVtables(v17, v19, 1);
      *(_QWORD *)(v14 + 40) = importConstraintAtoms(v19, v17, reader);
    }
    v20 = *(_WORD *)(v14 + 54);
    if ( v20 )
    {
      v21 = v20;
      v22 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !v22 )
        v22 = hkMemoryRouter::s_fallbackRouter;
      v23 = v22->m_heap->blockAlloc(v22->m_heap, v21);
      *(_QWORD *)(v14 + 56) = v23;
      reader->read(reader, v23, v40);
    }
    p_m_pod = &m_constraintManager->m_constraints.m_objects.m_data->m_pod;
    m_value = dst.m_value;
    p_m_bodyIdA = &p_m_pod[dst.m_value].m_bodyIdA;
    if ( (p_m_bodyIdA->m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
      hknpBodyToConstraintsMap::attachConstraintToBody(&m_constraintManager->m_bodyIdToConstraintIdsMap, dst, &m_constraintManager->m_constraints.m_objects.m_data->m_pod, (hknpBodyId)p_m_bodyIdA->m_serialAndIndex);
    if ( (p_m_bodyIdA[1].m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
      hknpBodyToConstraintsMap::attachConstraintToBody(&m_constraintManager->m_bodyIdToConstraintIdsMap, (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>)m_value, p_m_pod, p_m_bodyIdA[1]);
    hkString::memSet(&dst, 0, 84);
    if ( reader->read(reader, &dst, 84) != 84 )
      goto LABEL_31;
  }
  v28 = 0;
  if ( v30 )
  {
    while ( reader->read(reader, v35, 24) == 24 )
    {
      hkString::memCpy(&m_constraintManager->m_constraintGroups.m_objects.m_data[v36], v35, 24);
      if ( ++v28 >= v30 )
        goto LABEL_35;
    }
    goto LABEL_31;
  }
LABEL_35:
  m_constraintManager->m_constraints.m_numAllocated = v29;
  m_constraintManager->m_constraintGroups.m_numAllocated = v30;
  hknpConstraintManager::rebuildFreeList(m_constraintManager);
  hkMemHeapAllocator();
  return 0i64;
}

/*
==============
importDeactivatedIsland
==============
*/
hknpDeactivatedIsland *importDeactivatedIsland(hkStreamReader *reader)
{
  hkMemoryRouter *Value; 
  __int64 v4; 
  __int64 v5; 
  hkStreamReader_vtbl *v6; 
  int v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  hkMemoryAllocator *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  void *v19; 
  __int64 v20; 
  int v21; 

  reader->read(reader, &v21, 4);
  if ( !v21 )
    return 0i64;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v4 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 112i64);
  v20 = v4;
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0i64;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0x80000000;
    *(_QWORD *)(v4 + 16) = 0i64;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 28) = 0xFFFFFFFF80000000ui64;
    *(_WORD *)(v4 + 36) = 0;
    *(_QWORD *)(v4 + 40) = -1i64;
    *(_QWORD *)(v4 + 48) = v4 + 64;
    *(_DWORD *)(v4 + 56) = 0;
    *(_DWORD *)(v4 + 60) = -2147483647;
    *(_DWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 88) = 0i64;
    *(_DWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 100) = 0x80000000;
    *(_DWORD *)(v4 + 104) = 0;
  }
  else
  {
    v5 = 0i64;
  }
  anonymous_namespace_::serializeArray_hknpBodyId_(reader, (hkArray<hknpBodyId,hkContainerHeapAllocator> *)v5);
  reader->read(reader, (void *)(v5 + 32), 4);
  v6 = reader->__vftable;
  LODWORD(v20) = 0;
  v6->read(reader, &v20, 4);
  v7 = v20;
  v8 = hkMemHeapAllocator();
  v9 = *(_DWORD *)(v5 + 28) & 0x3FFFFFFF;
  if ( v9 < v7 )
  {
    v10 = 2 * v9;
    v11 = v7;
    if ( (unsigned int)v10 >= 0x3FFFFFFF )
      v10 = 1073741822;
    if ( v7 < v10 )
      v11 = v10;
    hkArrayUtil::_reserve(v8, (void *)(v5 + 16), v11, 8);
  }
  v12 = v7 - *(_DWORD *)(v5 + 24);
  if ( v12 > 0 )
    memset((void *)(*(_QWORD *)(v5 + 16) + 8i64 * *(int *)(v5 + 24)), 0, 8i64 * v12);
  *(_DWORD *)(v5 + 24) = v7;
  reader->read(reader, (void *)(v5 + 36), 1);
  reader->read(reader, (void *)(v5 + 37), 1);
  reader->read(reader, (void *)(v5 + 40), 8);
  reader->read(reader, &v20, 4);
  v13 = v20;
  v14 = hkMemHeapAllocator();
  v15 = *(_DWORD *)(v5 + 100) & 0x3FFFFFFF;
  if ( v15 < v13 )
  {
    v16 = 2 * v15;
    v17 = v13;
    if ( (unsigned int)v16 >= 0x3FFFFFFF )
      v16 = 1073741822;
    if ( v13 < v16 )
      v17 = v16;
    hkArrayUtil::_reserve(v14, (void *)(v5 + 88), v17, 8);
  }
  v18 = v20;
  v19 = *(void **)(v5 + 88);
  *(_DWORD *)(v5 + 96) = v13;
  reader->read(reader, v19, 8 * v18);
  reader->read(reader, (void *)(v5 + 104), 4);
  return (hknpDeactivatedIsland *)v5;
}

/*
==============
importDeactivation
==============
*/
__int64 importDeactivation(hknpWorld *world, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *__formal)
{
  hknpDeactivationManager *m_deactivationManager; 
  hkArray<hknpDeactivatedIsland *,hkContainerHeapAllocator> *p_m_deactivatedIslands; 
  int v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  int v10; 
  hkResult v11; 
  __int64 m_size; 
  __int64 v13; 
  __int64 i; 
  hknpDeactivatedIsland *v15; 
  hkMemoryAllocator *v16; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v18; 
  int v19; 
  hkMemoryAllocator *v20; 
  int v21; 
  hkMemoryAllocator *v22; 
  int v23; 
  hkMemoryRouter *Value; 
  int v25; 
  hkMemoryAllocator *v26; 
  int v27; 
  int v28; 
  int v29; 
  hkResult v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  hkMemoryAllocator *v35; 
  int v36; 
  int v37; 
  int v38; 
  hkResult v39; 
  int v40; 
  hkMemoryAllocator *v41; 
  int v42; 
  int v43; 
  hkResult v44; 
  int j; 
  hkMemoryAllocator *v46; 
  int v47; 
  int v48; 
  hknpBodyActivationCommand *v49; 
  int v50; 
  hkMemoryAllocator *v51; 
  int v52; 
  int v53; 
  int v54; 
  hkResult v55; 
  int v56; 
  hkMemoryAllocator *v57; 
  int v58; 
  int v59; 
  int v60; 
  hkResult v61; 
  int v62; 
  hkMemoryAllocator *v63; 
  int v64; 
  int v65; 
  int v66; 
  hkResult v67; 
  unsigned int v68; 
  unsigned int v69; 
  hkBlockStream::Range *v70; 
  char v71; 
  unsigned __int16 m_currentByteOffset; 
  unsigned __int16 m_currentBlockNumElems; 
  int v74; 
  hknpDeactivatedIsland *v75; 
  __int64 v76; 
  hknpDeactivatedIsland *v77; 
  int v78; 
  int v79; 
  int v80; 
  __int64 v81; 
  __int64 v82; 
  hknpDeactivatedIsland::InactiveCacheHeader **m_data; 
  hknpDeactivatedIsland::InactiveCacheHeader *v84; 
  int v85; 
  __int64 v87; 
  __int64 v88; 
  hkBlockStream::Writer v89; 
  hkBlockStream::Writer it; 
  hkArray<hknpDeactivatedIsland *,hkContainerHeapAllocator> *v91; 
  __int64 v92; 
  hkThreadLocalBlockStreamAllocator tlAllocator; 
  int v94[2]; 
  int v95; 
  bool v96; 
  bool v97; 
  hknpBodyActivationCommand v98; 
  int src; 
  int v100; 
  char v101[8]; 
  char v102; 
  unsigned __int8 v103; 
  char v104[368]; 

  v92 = -2i64;
  m_deactivationManager = world->m_deactivationManager;
  reader->read(reader, v94, 16);
  m_deactivationManager->m_numBlocksToDefragmentPerStep = v94[1];
  m_deactivationManager->m_nopCachesAllowedPerBlock = v94[0];
  m_deactivationManager->m_defragmentationInProgress = v97;
  m_deactivationManager->m_movingActivatedCaches = v96;
  p_m_deactivatedIslands = &m_deactivationManager->m_deactivatedIslands;
  v91 = &m_deactivationManager->m_deactivatedIslands;
  v7 = v95;
  v8 = hkMemHeapAllocator();
  v9 = m_deactivationManager->m_deactivatedIslands.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v9 >= v7 )
  {
    v11.m_code = 0;
  }
  else
  {
    v10 = 2 * v9;
    if ( (unsigned int)v10 >= 0x3FFFFFFF )
      v10 = 1073741822;
    if ( v7 < v10 )
      v7 = v10;
    v11.m_code = hkArrayUtil::_reserve(v8, &m_deactivationManager->m_deactivatedIslands, v7, 8).m_code;
  }
  LODWORD(v87) = v11;
  hkThreadLocalBlockStreamAllocator::hkThreadLocalBlockStreamAllocator(&tlAllocator, world->m_blockStreamAllocator.m_ptr);
  importCollisionCachePairParentChildren(&m_deactivationManager->m_narrowphaseOutputCaches, reader, &tlAllocator);
  m_size = m_deactivationManager->m_deactivatedIslands.m_size;
  v13 = 0i64;
  if ( m_size > 0 )
  {
    for ( i = 0i64; i < m_size; ++i )
    {
      v15 = p_m_deactivatedIslands->m_data[i];
      if ( v15 )
      {
        v16 = hkMemHeapAllocator();
        v15->m_newLinks.m_size = 0;
        m_capacityAndFlags = v15->m_newLinks.m_capacityAndFlags;
        if ( m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v16, v15->m_newLinks.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
        v15->m_newLinks.m_data = NULL;
        v15->m_newLinks.m_capacityAndFlags = 0x80000000;
        v18 = hkMemHeapAllocator();
        v15->m_constraints.m_size = 0;
        v19 = v15->m_constraints.m_capacityAndFlags;
        if ( v19 >= 0 )
          hkMemoryAllocator::bufFree2(v18, v15->m_constraints.m_data, 16, v19 & 0x3FFFFFFF);
        v15->m_constraints.m_data = NULL;
        v15->m_constraints.m_capacityAndFlags = 0x80000000;
        v20 = hkMemHeapAllocator();
        v15->m_cacheInfos.m_size = 0;
        v21 = v15->m_cacheInfos.m_capacityAndFlags;
        if ( v21 >= 0 )
          hkMemoryAllocator::bufFree2(v20, v15->m_cacheInfos.m_data, 8, v21 & 0x3FFFFFFF);
        v15->m_cacheInfos.m_data = NULL;
        v15->m_cacheInfos.m_capacityAndFlags = 0x80000000;
        v22 = hkMemHeapAllocator();
        v15->m_bodies.m_size = 0;
        v23 = v15->m_bodies.m_capacityAndFlags;
        if ( v23 >= 0 )
          hkMemoryAllocator::bufFree2(v22, v15->m_bodies.m_data, 4, v23 & 0x3FFFFFFF);
        v15->m_bodies.m_data = NULL;
        v15->m_bodies.m_capacityAndFlags = 0x80000000;
        Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !Value )
          Value = hkMemoryRouter::s_fallbackRouter;
        Value->m_heap->blockFree(Value->m_heap, v15, 112);
      }
    }
  }
  m_deactivationManager->m_deactivatedIslands.m_size = 0;
  v25 = v95;
  v26 = hkMemHeapAllocator();
  v27 = m_deactivationManager->m_deactivatedIslands.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v27 >= v25 )
  {
    v30.m_code = 0;
  }
  else
  {
    v28 = 2 * v27;
    if ( (unsigned int)v28 >= 0x3FFFFFFF )
      v28 = 1073741822;
    v29 = v25;
    if ( v25 < v28 )
      v29 = v28;
    v30.m_code = hkArrayUtil::_reserve(v26, &m_deactivationManager->m_deactivatedIslands, v29, 8).m_code;
  }
  LODWORD(v87) = v30;
  v31 = v25 - m_deactivationManager->m_deactivatedIslands.m_size;
  if ( v31 > 0 )
    memset(&p_m_deactivatedIslands->m_data[m_deactivationManager->m_deactivatedIslands.m_size], 0, 8i64 * v31);
  m_deactivationManager->m_deactivatedIslands.m_size = v25;
  v32 = v95;
  if ( v95 > 0 )
  {
    v33 = 0i64;
    do
      p_m_deactivatedIslands->m_data[v33++] = importDeactivatedIsland(reader);
    while ( v33 < v32 );
  }
  m_deactivationManager->m_deactivationStates.m_size = 0;
  reader->read(reader, &v87, 4);
  v34 = v87;
  v35 = hkMemHeapAllocator();
  v36 = m_deactivationManager->m_deactivationStates.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v36 >= v34 )
  {
    v39.m_code = 0;
  }
  else
  {
    v37 = 2 * v36;
    if ( (unsigned int)v37 >= 0x3FFFFFFF )
      v37 = 1073741822;
    v38 = v34;
    if ( v34 < v37 )
      v38 = v37;
    v39.m_code = hkArrayUtil::_reserve(v35, &m_deactivationManager->m_deactivationStates, v38, 32).m_code;
  }
  LODWORD(v88) = v39;
  m_deactivationManager->m_deactivationStates.m_size = v34;
  reader->read(reader, m_deactivationManager->m_deactivationStates.m_data, 32 * v87);
  LODWORD(v87) = 0;
  reader->read(reader, &v87, 4);
  m_deactivationManager->m_midStepActivationEvents.m_size = 0;
  v40 = v87;
  if ( (int)v87 > 0 )
  {
    v41 = hkMemHeapAllocator();
    v42 = m_deactivationManager->m_midStepActivationEvents.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v42 >= v40 )
    {
      v44.m_code = 0;
    }
    else
    {
      v43 = 2 * v42;
      if ( (unsigned int)v43 >= 0x3FFFFFFF )
        v43 = 1073741822;
      if ( v40 < v43 )
        v40 = v43;
      v44.m_code = hkArrayUtil::_reserve(v41, &m_deactivationManager->m_midStepActivationEvents, v40, 16).m_code;
    }
    LODWORD(v88) = v44;
    for ( j = 0; j < (int)v87; ++j )
    {
      reader->read(reader, &v98, 16);
      v46 = hkMemHeapAllocator();
      v47 = m_deactivationManager->m_midStepActivationEvents.m_size;
      v48 = v47;
      if ( v47 == (m_deactivationManager->m_midStepActivationEvents.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v46, &m_deactivationManager->m_midStepActivationEvents, 16);
        v47 = m_deactivationManager->m_midStepActivationEvents.m_size;
        v48 = v47;
      }
      v49 = &m_deactivationManager->m_midStepActivationEvents.m_data[v47];
      if ( v49 )
      {
        *v49 = v98;
        v48 = m_deactivationManager->m_midStepActivationEvents.m_size;
      }
      m_deactivationManager->m_midStepActivationEvents.m_size = v48 + 1;
    }
  }
  m_deactivationManager->m_freeIslandIds.m_size = 0;
  reader->read(reader, &v87, 4);
  v50 = v87;
  v51 = hkMemHeapAllocator();
  v52 = m_deactivationManager->m_freeIslandIds.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v52 >= v50 )
  {
    v55.m_code = 0;
  }
  else
  {
    v53 = 2 * v52;
    if ( (unsigned int)v53 >= 0x3FFFFFFF )
      v53 = 1073741822;
    v54 = v50;
    if ( v50 < v53 )
      v54 = v53;
    v55.m_code = hkArrayUtil::_reserve(v51, &m_deactivationManager->m_freeIslandIds, v54, 4).m_code;
  }
  LODWORD(v88) = v55;
  m_deactivationManager->m_freeIslandIds.m_size = v50;
  reader->read(reader, m_deactivationManager->m_freeIslandIds.m_data, 4 * v87);
  m_deactivationManager->m_dirtyIslands.m_size = 0;
  reader->read(reader, &v87, 4);
  v56 = v87;
  v57 = hkMemHeapAllocator();
  v58 = m_deactivationManager->m_dirtyIslands.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v58 >= v56 )
  {
    v61.m_code = 0;
  }
  else
  {
    v59 = 2 * v58;
    if ( (unsigned int)v59 >= 0x3FFFFFFF )
      v59 = 1073741822;
    v60 = v56;
    if ( v56 < v59 )
      v60 = v59;
    v61.m_code = hkArrayUtil::_reserve(v57, &m_deactivationManager->m_dirtyIslands, v60, 4).m_code;
  }
  LODWORD(v88) = v61;
  m_deactivationManager->m_dirtyIslands.m_size = v56;
  reader->read(reader, m_deactivationManager->m_dirtyIslands.m_data, 4 * v87);
  m_deactivationManager->m_dirtyInactiveBodies.m_size = 0;
  reader->read(reader, &v87, 4);
  v62 = v87;
  v63 = hkMemHeapAllocator();
  v64 = m_deactivationManager->m_dirtyInactiveBodies.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v64 >= v62 )
  {
    v67.m_code = 0;
  }
  else
  {
    v65 = 2 * v64;
    if ( (unsigned int)v65 >= 0x3FFFFFFF )
      v65 = 1073741822;
    v66 = v62;
    if ( v62 < v65 )
      v66 = v65;
    v67.m_code = hkArrayUtil::_reserve(v63, &m_deactivationManager->m_dirtyInactiveBodies, v66, 4).m_code;
  }
  LODWORD(v88) = v67;
  m_deactivationManager->m_dirtyInactiveBodies.m_size = v62;
  reader->read(reader, m_deactivationManager->m_dirtyInactiveBodies.m_data, 4 * v87);
  hkBlockStream::reset(&m_deactivationManager->m_inactiveParentCaches, &tlAllocator);
  hkBlockStream::reset(&m_deactivationManager->m_reactivatedCaches.m_children, &tlAllocator);
  v89.m_accessSize.member = 0;
  v89.m_blockStream = NULL;
  hkBlockStream::Writer::setToStartOfStream(&v89, &tlAllocator, &m_deactivationManager->m_inactiveParentCaches);
  it.m_accessSize.member = 0;
  it.m_blockStream = NULL;
  hkBlockStream::Writer::setToStartOfStream(&it, &tlAllocator, &m_deactivationManager->m_reactivatedCaches.m_children);
  while ( 1 )
  {
    reader->read(reader, &src, 16);
    if ( src == -1 && v100 == -1 )
      break;
    reader->read(reader, v101, 16);
    v68 = 16 * v103;
    if ( v68 > 0x10 )
      reader->read(reader, v104, v68 - 16);
    v69 = v68 + 16;
    if ( (int)(v89.m_currentByteOffset + v69) > 3808 )
      v70 = (hkBlockStream::Range *)hkBlockStream::Writer::allocateAndAccessNewBlock(&v89);
    else
      v70 = (hkBlockStream::Range *)&v89.m_currentBlock->m_data[v89.m_currentByteOffset];
    hkString::memCpy(v70, &src, v69);
    v89.m_currentByteOffset += v69;
    ++v89.m_currentBlockNumElems;
    v71 = v102;
    if ( (unsigned __int8)(v102 - 4) <= 2u )
    {
      m_currentByteOffset = it.m_currentByteOffset;
      m_currentBlockNumElems = it.m_currentBlockNumElems;
      v74 = -(it.m_currentBlockNumElems + it.m_blockStream->m_numTotalElements);
      v70[3].m_startBlock = it.m_currentBlock;
      v70[3].m_startByteOffset = m_currentByteOffset;
      v70[3].m_startBlockNumElements = m_currentBlockNumElems;
      v70[3].m_numElements = v74;
      importCollisionCacheStream((hknpCollisionCacheWriter *)&it, NULL, reader);
      hkBlockStream::Range::setEndPoint(v70 + 3, &it);
      v71 = v102;
    }
    v75 = p_m_deactivatedIslands->m_data[src];
    if ( v75 )
    {
      if ( v71 )
        v75->m_cacheInfos.m_data[v100] = (hknpDeactivatedIsland::InactiveCacheHeader *)v70;
    }
  }
  v76 = v95;
  v87 = v95;
  if ( v95 > 0 )
  {
    v88 = 0i64;
    do
    {
      v77 = p_m_deactivatedIslands->m_data[v13];
      if ( v77 )
      {
        v78 = 0;
        v79 = 0;
        v80 = v77->m_cacheInfos.m_size;
        if ( v80 > 0 )
        {
          v81 = 0i64;
          v82 = 0i64;
          do
          {
            m_data = v77->m_cacheInfos.m_data;
            v84 = m_data[v82];
            if ( v84 )
            {
              m_data[v82] = NULL;
              if ( v77->m_cacheInfos.m_data[v81] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimulationsnapshotutil.cpp", 1440, ASSERT_TYPE_ASSERT, "( island->m_cacheInfos[cacheSize] == nullptr )", "Should not be stomping valid cache info") )
                __debugbreak();
              v77->m_cacheInfos.m_data[v81] = v84;
              v77->m_cacheInfos.m_data[v81++]->m_cacheInIslandIndex = v78++;
            }
            ++v79;
            ++v82;
            v80 = v77->m_cacheInfos.m_size;
          }
          while ( v79 < v80 );
          v13 = v88;
          v76 = v87;
          p_m_deactivatedIslands = v91;
        }
        v85 = v79 - v78;
        if ( v85 > 0 )
          v77->m_cacheInfos.m_size = v80 - v85;
      }
      v88 = ++v13;
    }
    while ( v13 < v76 );
  }
  hkBlockStream::Writer::finalize(&v89);
  hkBlockStream::Writer::finalize(&it);
  hkThreadLocalBlockStreamAllocator::~hkThreadLocalBlockStreamAllocator(&tlAllocator);
  return 0i64;
}

/*
==============
importMotions
==============
*/
__int64 importMotions(hknpWorld *world, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *__formal)
{
  unsigned int v5; 
  hknpThreadSafeObjectPoolElement<hknpMotion> *v6; 
  __int128 v9; 
  hkInplaceArray<hknpMotionId,1,hkContainerHeapAllocator> *m_activeMotionsPerCell; 
  __int64 v11; 
  hkInplaceArray<hknpMotionId,1,hkContainerHeapAllocator> *v12; 
  hkMemoryAllocator *v13; 
  __int64 m_size; 
  int v15; 
  hknpMotionId *v16; 
  __int64 v17; 
  int v18; 
  int (__fastcall *read)(hkStreamReader *, void *, int); 
  hkMemoryAllocator *v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v28; 
  int v29; 
  __int128 v30[8]; 
  int v31; 

  if ( reader->read(reader, &v28, 8) != 8 )
    return 2147746304i64;
  v5 = 0;
  if ( v28 )
  {
    while ( reader->read(reader, v30, 144) == 144 )
    {
      ++v5;
      v6 = &world->m_motionManager.m_motions.m_objects.m_data[(__int64)v31];
      v6->m_pod.m_spaceSplitterWeight = 1;
      _XMM0 = world->m_motionManager.m_motions.m_peakIndex;
      __asm { vpmaxud xmm1, xmm0, xmm1 }
      v9 = v30[0];
      world->m_motionManager.m_motions.m_peakIndex = _XMM1;
      ++world->m_motionManager.m_motions.m_numAllocated;
      v6->m_pod.m_centerOfMass = (hkVector4f)v9;
      v6->m_pod.m_orientation = (hkQuaternionf)v30[1];
      *(_OWORD *)&v6->m_pod.m_inverseInertia[0].m_value = v30[2];
      *(_OWORD *)&v6->m_pod.m_linearVelocityCage[0].m_value = v30[3];
      v6->m_pod.m_linearVelocityAndSpeedLimit = (hkVector4f)v30[4];
      v6->m_pod.m_angularVelocityLocalAndSpeedLimit = (hkVector4f)v30[5];
      v6->m_pod.m_previousStepLinearVelocity = (hkVector4f)v30[6];
      v6->m_pod.m_previousStepAngularVelocityLocal = (hkVector4f)v30[7];
      if ( v5 >= v28 )
        goto LABEL_5;
    }
    return 2147746304i64;
  }
LABEL_5:
  hknpMotionManager::rebuildFreeList(&world->m_motionManager);
  m_activeMotionsPerCell = world->m_motionManager.m_activeMotionsPerCell;
  v11 = 32i64;
  v12 = world->m_motionManager.m_activeMotionsPerCell;
  do
  {
    v13 = hkMemHeapAllocator();
    if ( (v12->m_capacityAndFlags & 0x3FFFFFFF) == 0 )
      hkArrayUtil::_reserve(v13, v12, 1, 4);
    m_size = v12->m_size;
    v15 = 1 - m_size;
    v16 = &v12->m_data[m_size];
    v17 = 1 - (int)m_size;
    if ( v15 > 0 )
    {
      do
      {
        if ( v16 )
          v16->m_value = 0;
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    v12->m_size = 1;
    ++v12;
    --v11;
  }
  while ( v11 );
  v18 = v29;
  read = reader->read;
  v20 = hkMemHeapAllocator();
  v21 = m_activeMotionsPerCell->m_size;
  v22 = v21;
  v23 = m_activeMotionsPerCell->m_capacityAndFlags & 0x3FFFFFFF;
  v24 = v21 + v18;
  if ( v23 < (int)v21 + v18 )
  {
    v25 = 2 * v23;
    if ( (unsigned int)v25 >= 0x3FFFFFFF )
      v25 = 1073741822;
    if ( v24 < v25 )
      v24 = v25;
    hkArrayUtil::_reserve(v20, m_activeMotionsPerCell, v24, 4);
    v22 = m_activeMotionsPerCell->m_size;
  }
  v26 = v29;
  m_activeMotionsPerCell->m_size = v22 + v18;
  read(reader, &m_activeMotionsPerCell->m_data[v21], 4 * v26);
  return 0i64;
}

/*
==============
importOther
==============
*/
__int64 importOther(hknpWorld *worldIn, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *__formal)
{
  reader->read(reader, &worldIn->m_solverInfo, 368);
  return 0i64;
}

/*
==============
NpSimulationSnapshot::importSimulationState
==============
*/
__int64 NpSimulationSnapshot::importSimulationState(hknpWorld *pWorld, hkStreamReader *reader, NpSimulationSnapshot::PostImportPatch *fixupUtil)
{
  hkStreamReader *v3; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  hkMemoryRouter *Value; 
  int v9; 
  hknpBodyId *m_cur; 
  char *v11; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  unsigned int v13; 
  unsigned int v14; 
  bool v15; 
  hkMemoryRouter *v16; 
  signed int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  hkMemoryRouter *v21; 
  int v22; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *v23; 
  char *v24; 
  hknpConstraintManager *m_constraintManager; 
  hknpThreadSafeObjectPoolElement<hknpConstraint> *v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  hknpConstraintManager *v30; 
  hknpThreadSafeObjectPoolElement<hknpConstraintGroup> *v31; 
  unsigned int v32; 
  unsigned int v33; 
  hkMemoryRouter *v34; 
  signed int v35; 
  int v36; 
  int v37; 
  __int64 (__fastcall **v38)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  char *v39; 
  __int64 v40; 
  const char *v41; 
  __int64 v42; 
  char v44[4]; 
  unsigned int v45; 
  hknpWorld *v46; 
  hkStreamReader *v47; 
  NpSimulationSnapshot::PostImportPatch *v48; 
  __int64 v49; 
  hkStringBuf v50; 
  __int64 (__fastcall *v51)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  __int64 (__fastcall *v52)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  __int64 (__fastcall *v53)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  __int64 (__fastcall *v54)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  __int64 (__fastcall *v55)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  __int64 (__fastcall *v56)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *); 
  char buf1[128]; 

  v49 = -2i64;
  v48 = fixupUtil;
  v3 = reader;
  v47 = reader;
  v46 = pWorld;
  v5 = 0;
  if ( reader->isOk(reader, v44)->m_bool )
  {
    if ( importTag(s_startTag, v3).m_code < 0 )
    {
      return 2147746304i64;
    }
    else
    {
      v6 = pWorld->getNumBodies(&pWorld->hknpWorldReader);
      v51 = NULL;
      v7 = 0;
      v52 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))0x8000000000000000i64;
      LODWORD(v54) = v6;
      if ( v6 )
      {
        Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !Value )
          Value = hkMemoryRouter::s_fallbackRouter;
        v9 = (4 * v6 + 127) & 0xFFFFFF80;
        m_cur = (hknpBodyId *)Value->m_stack.m_cur;
        v11 = (char *)m_cur + v9;
        if ( v9 > Value->m_stack.m_slabSize || v11 > Value->m_stack.m_end )
        {
          m_cur = (hknpBodyId *)hkLifoAllocator::allocateFromNewSlab(&Value->m_stack, v9);
          v51 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))m_cur;
        }
        else
        {
          Value->m_stack.m_cur = v11;
          v51 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))m_cur;
        }
      }
      else
      {
        m_cur = NULL;
        v51 = NULL;
      }
      HIDWORD(v52) = v6 | 0x80000000;
      v53 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))m_cur;
      m_data = pWorld->m_bodyManager.m_bodies.m_objects.m_data;
      v13 = pWorld->m_bodyManager.m_bodies.m_peakIndex + 1;
      v14 = 0;
      if ( pWorld->m_bodyManager.m_bodies.m_numAllocated )
      {
        if ( (m_data->m_pod.m_flags.m_storage & 0xF) != 0 )
          goto LABEL_18;
        v14 = 1;
        if ( v13 > 1 )
        {
          while ( (m_data[v14].m_pod.m_flags.m_storage & 0xF) == 0 )
          {
            if ( ++v14 >= v13 )
              goto LABEL_23;
          }
          if ( v14 != -1 )
          {
LABEL_18:
            m_cur[v7++] = m_data[v14].m_pod.m_id;
            while ( ++v14 < v13 )
            {
              if ( (m_data[v14].m_pod.m_flags.m_storage & 0xF) != 0 )
              {
                if ( v14 != -1 )
                  goto LABEL_18;
                break;
              }
            }
            LODWORD(v52) = v7;
          }
        }
      }
LABEL_23:
      v15 = hknpBody::s_isShapeReferenceCountingEnabled;
      hknpBody::s_isShapeReferenceCountingEnabled = 0;
      pWorld->destroyBodies(&pWorld->hknpWorldWriter, m_cur, v7, DONT_ACTIVATE);
      hknpBody::s_isShapeReferenceCountingEnabled = v15;
      v16 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !v16 )
        v16 = hkMemoryRouter::s_fallbackRouter;
      v17 = (4 * v6 + 127) & 0xFFFFFF80;
      v18 = (v17 + 15) & 0xFFFFFFF0;
      if ( v17 > v16->m_stack.m_slabSize || (char *)m_cur + v18 != v16->m_stack.m_cur || v16->m_stack.m_firstNonLifoEnd == m_cur )
        hkLifoAllocator::slowBlockFree(&v16->m_stack, m_cur, v18);
      else
        v16->m_stack.m_cur = m_cur;
      hkMemHeapAllocator();
      v19 = pWorld->getNumConstraints(&pWorld->hknpWorldReader);
      v45 = v19;
      v5 = 0;
      v51 = NULL;
      v20 = 0;
      v52 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))0x8000000000000000i64;
      LODWORD(v54) = v19;
      if ( v19 )
      {
        v21 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v21 )
          v21 = hkMemoryRouter::s_fallbackRouter;
        v22 = (4 * v19 + 127) & 0xFFFFFF80;
        v23 = (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)v21->m_stack.m_cur;
        v24 = (char *)v23 + v22;
        if ( v22 > v21->m_stack.m_slabSize || v24 > v21->m_stack.m_end )
        {
          v23 = (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *)hkLifoAllocator::allocateFromNewSlab(&v21->m_stack, v22);
          v51 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))v23;
        }
        else
        {
          v21->m_stack.m_cur = v24;
          v51 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))v23;
        }
      }
      else
      {
        v23 = NULL;
        v51 = NULL;
      }
      HIDWORD(v52) = v19 | 0x80000000;
      v53 = (__int64 (__fastcall *)(hknpWorld *, hkStreamReader *, NpSimulationSnapshot::PostImportPatch *))v23;
      m_constraintManager = v46->m_constraintManager;
      v26 = m_constraintManager->m_constraints.m_objects.m_data;
      v27 = m_constraintManager->m_constraints.m_peakIndex + 1;
      v28 = 0;
      if ( m_constraintManager->m_constraints.m_numAllocated )
      {
        if ( v26->m_pod.m_id.m_value != 0x7FFFFFFF )
          goto LABEL_45;
        v28 = 1;
        if ( v27 > 1 )
        {
          while ( v26[v28].m_pod.m_id.m_value == 0x7FFFFFFF )
          {
            if ( ++v28 >= v27 )
              goto LABEL_50;
          }
          if ( v28 != -1 )
          {
LABEL_45:
            v23[v20++] = v26[v28].m_pod.m_id;
            while ( ++v28 < v27 )
            {
              if ( v26[v28].m_pod.m_id.m_value != 0x7FFFFFFF )
              {
                if ( v28 != -1 )
                  goto LABEL_45;
                break;
              }
            }
            LODWORD(v52) = v20;
          }
        }
      }
LABEL_50:
      pWorld->destroyConstraints(&pWorld->hknpWorldWriter, v23, v20, ACTIVATE);
      v29 = (__int64)v46;
      v30 = v46->m_constraintManager;
      v31 = v30->m_constraintGroups.m_objects.m_data;
      v32 = v30->m_constraintGroups.m_peakIndex + 1;
      v33 = 0;
      if ( v30->m_constraintGroups.m_numAllocated )
      {
        if ( v31->m_pod.m_id.m_value != 0x7FFFFFFF )
          goto LABEL_57;
        v33 = 1;
        if ( v32 > 1 )
        {
          while ( v31[v33].m_pod.m_id.m_value == 0x7FFFFFFF )
          {
            if ( ++v33 >= v32 )
              goto LABEL_61;
          }
          if ( v33 != -1 )
          {
LABEL_57:
            hknpConstraintManager::destroyConstraintGroup(*(hknpConstraintManager **)(v29 + 1192), v31[v33].m_pod.m_id);
            while ( ++v33 < v32 )
            {
              if ( v31[v33].m_pod.m_id.m_value != 0x7FFFFFFF )
              {
                if ( v33 != -1 )
                  goto LABEL_57;
                break;
              }
            }
          }
        }
      }
LABEL_61:
      v34 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !v34 )
        v34 = hkMemoryRouter::s_fallbackRouter;
      v35 = (4 * v45 + 127) & 0xFFFFFF80;
      v36 = (v35 + 15) & 0xFFFFFFF0;
      if ( v35 > v34->m_stack.m_slabSize || (char *)v23 + v36 != v34->m_stack.m_cur || v34->m_stack.m_firstNonLifoEnd == v23 )
        hkLifoAllocator::slowBlockFree(&v34->m_stack, v23, v36);
      else
        v34->m_stack.m_cur = v23;
      hkMemHeapAllocator();
      v51 = importMotions;
      v52 = importBodiesAndBroadphase;
      v53 = importCollisionCaches;
      v54 = importConstraints;
      v55 = importDeactivation;
      v56 = importOther;
      v37 = 0;
      v38 = &v51;
      v3 = v47;
      do
      {
        v50.m_string.m_data = (char *)&v50.m_string.m_storage;
        v50.m_string.m_capacityAndFlags = -2147483520;
        v50.m_string.m_size = 1;
        v50.m_string.m_storage.m_storage.m_storage[0] = 0;
        hkStringBuf::printf(&v50, "\nSection %i\n", (unsigned int)v37);
        v39 = v50.m_string.m_data;
        v40 = (unsigned int)hkString::strLen(v50.m_string.m_data);
        v3->read(v3, buf1, v40);
        if ( hkString::memCmp(buf1, v39, v40) || (int)(*v38)((hknpWorld *)v29, v3, v48) < 0 )
        {
          v50.m_string.m_size = 0;
          if ( v50.m_string.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v50.m_string.m_data, 1, v50.m_string.m_capacityAndFlags & 0x3FFFFFFF);
          return 2147746304i64;
        }
        v50.m_string.m_size = 0;
        if ( v50.m_string.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, v50.m_string.m_data, 1, v50.m_string.m_capacityAndFlags & 0x3FFFFFFF);
        ++v37;
        ++v38;
      }
      while ( v37 < 6 );
      v41 = s_endTag;
      v42 = (unsigned int)hkString::strLen(s_endTag);
      v3->read(v3, buf1, v42);
      if ( !hkString::memCmp(buf1, v41, v42) )
        goto LABEL_79;
      return 2147746304i64;
    }
  }
  else
  {
LABEL_79:
    if ( !v3->isOk(v3, (hkBool *)v44)->m_bool )
      return (unsigned int)-2147220992;
    return v5;
  }
}

/*
==============
importTag
==============
*/
__int64 importTag(const char *tag, hkStreamReader *reader)
{
  __int64 v4; 
  char buf1[128]; 

  v4 = (unsigned int)hkString::strLen(tag);
  reader->read(reader, buf1, v4);
  return hkString::memCmp(buf1, tag, v4) != 0 ? 0x80040200 : 0;
}

