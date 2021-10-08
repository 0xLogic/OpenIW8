/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, unsigned __int8 layerIndex, unsigned __int64 userData)
{
  return ?isCollisionEnabled@HavokPhysicsShapeViewerCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@E_K@Z(this, queryType, layerIndex, userData);
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, bool targetShapeIsB, const hknpCollisionFilter::FilterInput *shapeInputA, const hknpCollisionFilter::FilterInput *shapeInputB)
{
  return ?isCollisionEnabled@HavokPhysicsShapeViewerCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@_NAEBUFilterInput@hknpCollisionFilter@@2@Z(this, queryType, targetShapeIsB, shapeInputA, shapeInputB);
}

/*
==============
HavokPhysicsShapeViewer::getConsumableCommands
==============
*/

void __fastcall HavokPhysicsShapeViewer::getConsumableCommands(HavokPhysicsShapeViewer *this, unsigned __int8 **commands, int *numCommands)
{
  ?getConsumableCommands@HavokPhysicsShapeViewer@@UEAAXAEAPEAEAEAH@Z(this, commands, numCommands);
}

/*
==============
HavokPhysicsShapeViewer::setConvexRadiusDisplayMode
==============
*/

void __fastcall HavokPhysicsShapeViewer::setConvexRadiusDisplayMode(HavokPhysicsShapeViewer *this, hknpShape::ConvexRadiusDisplayMode radiusMode)
{
  ?setConvexRadiusDisplayMode@HavokPhysicsShapeViewer@@QEAAXW4ConvexRadiusDisplayMode@hknpShape@@@Z(this, radiusMode);
}

/*
==============
HavokPhysicsShapeViewer::HavokPhysicsShapeViewer
==============
*/

void __fastcall HavokPhysicsShapeViewer::HavokPhysicsShapeViewer(HavokPhysicsShapeViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  ??0HavokPhysicsShapeViewer@@QEAA@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(this, contexts);
}

/*
==============
HavokPhysicsShapeViewer::removeBody
==============
*/

void __fastcall HavokPhysicsShapeViewer::removeBody(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpBodyId bodyId)
{
  ?removeBody@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@UhknpBodyId@@@Z(this, world, bodyId);
}

/*
==============
HavokPhysicsShapeViewer::refreshAllBodies
==============
*/

void __fastcall HavokPhysicsShapeViewer::refreshAllBodies(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpCollisionFlags mask)
{
  ?refreshAllBodies@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@UhknpCollisionFlags@@@Z(this, world, mask);
}

/*
==============
HavokPhysicsShapeViewer::worldAddedCallback
==============
*/

void __fastcall HavokPhysicsShapeViewer::worldAddedCallback(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  ?worldAddedCallback@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@@Z(this, world);
}

/*
==============
HavokPhysicsShapeViewer::addBody
==============
*/

void __fastcall HavokPhysicsShapeViewer::addBody(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId)
{
  ?addBody@HavokPhysicsShapeViewer@@QEAAXHUhknpBodyId@@@Z(this, worldIndex, bodyId);
}

/*
==============
HavokPhysicsShapeViewer::consumeCommand
==============
*/

void __fastcall HavokPhysicsShapeViewer::consumeCommand(HavokPhysicsShapeViewer *this, unsigned __int8 command)
{
  ?consumeCommand@HavokPhysicsShapeViewer@@UEAAXE@Z(this, command);
}

/*
==============
HavokPhysicsShapeViewer::onBodiesAddedSignal
==============
*/

void __fastcall HavokPhysicsShapeViewer::onBodiesAddedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, const hknpBodyId *bodyIds, int numBodyIds)
{
  ?onBodiesAddedSignal@HavokPhysicsShapeViewer@@QEAAXPEAVhknpWorld@@PEBUhknpBodyId@@H@Z(this, world, bodyIds, numBodyIds);
}

/*
==============
HavokPhysicsShapeViewer::registerViewer
==============
*/

void __fastcall HavokPhysicsShapeViewer::registerViewer(hkProcessFactory *factory)
{
  ?registerViewer@HavokPhysicsShapeViewer@@SAXAEAVhkProcessFactory@@@Z(factory);
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::filterBodyPairs
==============
*/

int __fastcall HavokPhysicsShapeViewerCollisionFilter::filterBodyPairs(HavokPhysicsShapeViewerCollisionFilter *this, const hknpWorld *world, hknpBodyIdPair *pairs, int numPairs)
{
  return ?filterBodyPairs@HavokPhysicsShapeViewerCollisionFilter@@UEBAHAEBVhknpWorld@@PEAUhknpBodyIdPair@@H@Z(this, world, pairs, numPairs);
}

/*
==============
HavokPhysicsShapeViewer::addWorld
==============
*/

void __fastcall HavokPhysicsShapeViewer::addWorld(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  ?addWorld@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@@Z(this, world);
}

/*
==============
HavokPhysicsShapeViewer::worldRemovedCallback
==============
*/

void __fastcall HavokPhysicsShapeViewer::worldRemovedCallback(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  ?worldRemovedCallback@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@@Z(this, world);
}

/*
==============
HavokPhysicsShapeViewer::~HavokPhysicsShapeViewer
==============
*/

void __fastcall HavokPhysicsShapeViewer::~HavokPhysicsShapeViewer(HavokPhysicsShapeViewer *this)
{
  ??1HavokPhysicsShapeViewer@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsShapeViewer::createDisplayObject
==============
*/

void __fastcall HavokPhysicsShapeViewer::createDisplayObject(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId, bool useInstancing)
{
  ?createDisplayObject@HavokPhysicsShapeViewer@@QEAAXHUhknpBodyId@@_N@Z(this, worldIndex, bodyId, useInstancing);
}

/*
==============
HavokPhysicsShapeViewer::create
==============
*/

hkProcess *__fastcall HavokPhysicsShapeViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  return ?create@HavokPhysicsShapeViewer@@SAPEAVhkProcess@@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(contexts);
}

/*
==============
HavokPhysicsShapeViewer::removeWorld
==============
*/

void __fastcall HavokPhysicsShapeViewer::removeWorld(HavokPhysicsShapeViewer *this, int worldIndex)
{
  ?removeWorld@HavokPhysicsShapeViewer@@QEAAXH@Z(this, worldIndex);
}

/*
==============
HavokPhysicsShapeViewer::step
==============
*/

void __fastcall HavokPhysicsShapeViewer::step(HavokPhysicsShapeViewer *this, float deltaTime)
{
  ?step@HavokPhysicsShapeViewer@@UEAAXM@Z(this, deltaTime);
}

/*
==============
HavokPhysicsShapeViewer::isWorldAdded
==============
*/

bool __fastcall HavokPhysicsShapeViewer::isWorldAdded(HavokPhysicsShapeViewer *this, const hknpWorld *world)
{
  return ?isWorldAdded@HavokPhysicsShapeViewer@@UEBA_NPEBVhknpWorld@@@Z(this, world);
}

/*
==============
HavokPhysicsShapeViewer::addBody
==============
*/

void __fastcall HavokPhysicsShapeViewer::addBody(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpBodyId bodyId)
{
  ?addBody@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@UhknpBodyId@@@Z(this, world, bodyId);
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, hknpBodyId bodyIdA, hknpBodyId bodyIdB)
{
  return ?isCollisionEnabled@HavokPhysicsShapeViewerCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@UhknpBodyId@@1@Z(this, queryType, bodyIdA, bodyIdB);
}

/*
==============
HavokPhysicsShapeViewer::destroyDisplayObject
==============
*/

void __fastcall HavokPhysicsShapeViewer::destroyDisplayObject(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId)
{
  ?destroyDisplayObject@HavokPhysicsShapeViewer@@QEAAXHUhknpBodyId@@@Z(this, worldIndex, bodyId);
}

/*
==============
HavokPhysicsShapeViewer::removeWorld
==============
*/

void __fastcall HavokPhysicsShapeViewer::removeWorld(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  ?removeWorld@HavokPhysicsShapeViewer@@UEAAXPEAVhknpWorld@@@Z(this, world);
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/

bool __fastcall HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, const hknpQueryFilterData *queryFilterData, const hknpBody *body)
{
  return ?isCollisionEnabled@HavokPhysicsShapeViewerCollisionFilter@@UEBA_NW4Enum@hknpCollisionQueryType@@AEBUhknpQueryFilterData@@AEBVhknpBody@@@Z(this, queryType, queryFilterData, body);
}

/*
==============
HavokPhysicsShapeViewer::onBodyShapeChangedSignal
==============
*/

void __fastcall HavokPhysicsShapeViewer::onBodyShapeChangedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpBodyId bodyId, hkRefPtr<hknpShape const > *originalShape)
{
  ?onBodyShapeChangedSignal@HavokPhysicsShapeViewer@@QEAAXPEAVhknpWorld@@UhknpBodyId@@AEAV?$hkRefPtr@$$CBVhknpShape@@@@@Z(this, world, bodyId, originalShape);
}

/*
==============
HavokPhysicsShapeViewer::onBodiesRemovedSignal
==============
*/

void __fastcall HavokPhysicsShapeViewer::onBodiesRemovedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, const hknpBodyId *bodyIds, int numBodyIds)
{
  ?onBodiesRemovedSignal@HavokPhysicsShapeViewer@@QEAAXPEAVhknpWorld@@PEBUhknpBodyId@@H@Z(this, world, bodyIds, numBodyIds);
}

/*
==============
HavokPhysicsShapeViewer::HavokPhysicsShapeViewer
==============
*/
void HavokPhysicsShapeViewer::HavokPhysicsShapeViewer(HavokPhysicsShapeViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  __int64 m_size; 
  hkArrayView<hkProcessContext *> contextsa; 

  m_size = contexts->m_size;
  contextsa.m_begin = contexts->m_data;
  contextsa.m_end = &contextsa.m_begin[m_size];
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+48h+contexts.m_begin]
    vmovdqa xmmword ptr [rsp+48h+contexts.m_begin], xmm0
  }
  hknpShapeViewer::hknpShapeViewer(this, &contextsa, HavokPhysicsShapeViewer::s_tag);
  this->hknpShapeViewer::hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsShapeViewer_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkReferencedObject'};
  this->hknpShapeViewer::hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkProcess'};
  this->m_worldDatas.m_data = NULL;
  this->m_worldDatas.m_size = 0;
  this->m_worldDatas.m_capacityAndFlags = 0x80000000;
  this->m_radiusDisplayMode = CONVEX_RADIUS_DISPLAY_NONE;
  this->m_instancingEnabled.m_bool = 1;
  this->m_keyToGroupMap.m_elem = NULL;
  this->m_keyToGroupMap.m_numElems = 0;
  this->m_keyToGroupMap.m_hashMod = -1;
  this->m_displayIdToGroupMap.m_elem = NULL;
  this->m_displayIdToGroupMap.m_numElems = 0;
  this->m_displayIdToGroupMap.m_hashMod = -1;
  this->m_groups.m_data = NULL;
  this->m_groups.m_size = 0;
  this->m_groups.m_capacityAndFlags = 0x80000000;
  this->m_colorScheme = NULL;
}

/*
==============
HavokPhysicsShapeViewer::~HavokPhysicsShapeViewer
==============
*/
void HavokPhysicsShapeViewer::~HavokPhysicsShapeViewer(HavokPhysicsShapeViewer *this)
{
  hkMemoryAllocator *v2; 
  int v3; 
  __int64 v4; 
  int *p_m_capacityAndFlags; 
  hkMemoryAllocator *v6; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v8; 
  int v9; 

  this->hknpShapeViewer::hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsShapeViewer_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkReferencedObject'};
  this->hknpShapeViewer::hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkProcess'};
  hknpViewer::deinit(this);
  v2 = hkMemHeapAllocator();
  v3 = this->m_groups.m_size - 1;
  v4 = v3;
  if ( v3 >= 0 )
  {
    p_m_capacityAndFlags = &this->m_groups.m_data[v3].m_displayIds.m_capacityAndFlags;
    do
    {
      v6 = hkMemHeapAllocator();
      *(p_m_capacityAndFlags - 1) = 0;
      if ( *p_m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v6, *(void **)(p_m_capacityAndFlags - 3), 8, *p_m_capacityAndFlags & 0x3FFFFFFF);
      *(_QWORD *)(p_m_capacityAndFlags - 3) = 0i64;
      *p_m_capacityAndFlags = 0x80000000;
      p_m_capacityAndFlags -= 4;
      --v4;
    }
    while ( v4 >= 0 );
  }
  this->m_groups.m_size = 0;
  m_capacityAndFlags = this->m_groups.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_groups.m_data, 16, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_groups.m_data = NULL;
  this->m_groups.m_capacityAndFlags = 0x80000000;
  hkMap<unsigned __int64,int,hkMapOperations<unsigned __int64>,hkContainerHeapAllocator>::~hkMap<unsigned __int64,int,hkMapOperations<unsigned __int64>,hkContainerHeapAllocator>(&this->m_displayIdToGroupMap);
  hkMap<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps,hkContainerHeapAllocator>::~hkMap<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps,hkContainerHeapAllocator>(&this->m_keyToGroupMap);
  v8 = hkMemHeapAllocator();
  this->m_worldDatas.m_size = 0;
  v9 = this->m_worldDatas.m_capacityAndFlags;
  if ( v9 >= 0 )
    hkMemoryAllocator::bufFree2(v8, this->m_worldDatas.m_data, 8, v9 & 0x3FFFFFFF);
  this->m_worldDatas.m_data = NULL;
  this->m_worldDatas.m_capacityAndFlags = 0x80000000;
  hknpShapeViewer::~hknpShapeViewer(this);
}

/*
==============
HavokPhysicsShapeViewer::addBody
==============
*/
void HavokPhysicsShapeViewer::addBody(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId)
{
  HavokPhysicsShapeViewer::WorldData *v5; 
  hknpWorld *m_world; 
  int v7; 
  __int64 v8; 
  hknpBodyId *m_data; 
  hkMemoryAllocator *v10; 
  int m_size; 

  v5 = this->m_worldDatas.m_data[worldIndex];
  m_world = v5->m_world;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v5->m_world->getBody)(&v5->m_world->hknpWorldReader, bodyId.m_serialAndIndex) + 96) && ((unsigned __int8 (__fastcall *)(const hknpViewerColorScheme *, hknpWorld *, _QWORD, HavokPhysicsShapeViewer *))this->m_colorScheme->isBodyVisible)(this->m_colorScheme, m_world, bodyId.m_serialAndIndex, this) )
  {
    v7 = 0;
    if ( v5->m_bodiesToAdd.m_size <= 0 )
      goto LABEL_9;
    v8 = 0i64;
    m_data = v5->m_bodiesToAdd.m_data;
    while ( m_data->m_serialAndIndex != bodyId.m_serialAndIndex )
    {
      ++v7;
      ++v8;
      ++m_data;
      if ( v8 >= v5->m_bodiesToAdd.m_size )
        goto LABEL_9;
    }
    if ( v7 == -1 )
    {
LABEL_9:
      v10 = hkMemHeapAllocator();
      m_size = v5->m_bodiesToAdd.m_size;
      if ( m_size == (v5->m_bodiesToAdd.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v10, &v5->m_bodiesToAdd, 4);
        m_size = v5->m_bodiesToAdd.m_size;
      }
      v5->m_bodiesToAdd.m_data[m_size] = bodyId;
      ++v5->m_bodiesToAdd.m_size;
    }
  }
}

/*
==============
HavokPhysicsShapeViewer::addBody
==============
*/
void HavokPhysicsShapeViewer::addBody(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpBodyId bodyId)
{
  int v3; 
  int v7; 
  hkArray<HavokPhysicsShapeViewer::WorldData *,hkContainerHeapAllocator> *p_m_worldDatas; 
  __int64 m_size; 
  HavokPhysicsShapeViewer::WorldData **m_data; 
  __int64 v11; 
  hknpWorld **p_m_world; 
  hkMemoryRouter *Value; 
  __int64 v14; 
  hkMemoryAllocator *v15; 
  int v16; 
  HavokPhysicsShapeViewer::WorldData *v17; 
  hknpWorld *m_world; 
  __int64 v19; 
  hknpBodyId *v20; 
  hkMemoryAllocator *v21; 
  int v22; 

  v3 = 0;
  v7 = 0;
  if ( this->m_worldDatas.m_size <= 0 )
    goto LABEL_8;
  p_m_worldDatas = &this->m_worldDatas;
  m_size = this->m_worldDatas.m_size;
  m_data = this->m_worldDatas.m_data;
  v11 = 0i64;
  while ( 1 )
  {
    p_m_world = &m_data[v11]->m_world;
    if ( p_m_world )
    {
      if ( *p_m_world == world )
        break;
    }
    ++v7;
    if ( ++v11 >= m_size )
      goto LABEL_8;
  }
  if ( v7 == -1 )
  {
LABEL_8:
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v14 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
    if ( v14 )
    {
      *(_QWORD *)v14 = 0i64;
      *(_QWORD *)(v14 + 16) = 0i64;
      *(_QWORD *)(v14 + 32) = 0i64;
      *(_QWORD *)(v14 + 48) = 0i64;
      *(_QWORD *)(v14 + 8) = 0i64;
      *(_DWORD *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 20) = 0x80000000;
      *(_QWORD *)(v14 + 24) = 0i64;
      *(_DWORD *)(v14 + 32) = 0;
      *(_DWORD *)(v14 + 36) = 0x80000000;
      *(_QWORD *)(v14 + 40) = 0i64;
      *(_DWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 52) = 0x80000000;
    }
    else
    {
      v14 = 0i64;
    }
    *(_QWORD *)v14 = world;
    p_m_worldDatas = &this->m_worldDatas;
    v7 = this->m_worldDatas.m_size;
    v15 = hkMemHeapAllocator();
    v16 = this->m_worldDatas.m_size;
    if ( v16 == (this->m_worldDatas.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v15, &this->m_worldDatas, 8);
      v16 = this->m_worldDatas.m_size;
    }
    p_m_worldDatas->m_data[v16] = (HavokPhysicsShapeViewer::WorldData *)v14;
    ++this->m_worldDatas.m_size;
  }
  v17 = p_m_worldDatas->m_data[v7];
  m_world = v17->m_world;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD, __int64))v17->m_world->getBody)(&v17->m_world->hknpWorldReader, bodyId.m_serialAndIndex, m_size) + 96) && ((unsigned __int8 (__fastcall *)(const hknpViewerColorScheme *, hknpWorld *, _QWORD, HavokPhysicsShapeViewer *))this->m_colorScheme->isBodyVisible)(this->m_colorScheme, m_world, bodyId.m_serialAndIndex, this) )
  {
    if ( v17->m_bodiesToAdd.m_size <= 0 )
      goto LABEL_24;
    v19 = 0i64;
    v20 = v17->m_bodiesToAdd.m_data;
    while ( v20->m_serialAndIndex != bodyId.m_serialAndIndex )
    {
      ++v3;
      ++v19;
      ++v20;
      if ( v19 >= v17->m_bodiesToAdd.m_size )
        goto LABEL_24;
    }
    if ( v3 == -1 )
    {
LABEL_24:
      v21 = hkMemHeapAllocator();
      v22 = v17->m_bodiesToAdd.m_size;
      if ( v22 == (v17->m_bodiesToAdd.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v21, &v17->m_bodiesToAdd, 4);
        v22 = v17->m_bodiesToAdd.m_size;
      }
      v17->m_bodiesToAdd.m_data[v22] = bodyId;
      ++v17->m_bodiesToAdd.m_size;
    }
  }
}

/*
==============
HavokPhysicsShapeViewer::addWorld
==============
*/
void HavokPhysicsShapeViewer::addWorld(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  hknpProcessContext *m_ptr; 
  const hknpViewerColorScheme *p_m_defaultColorScheme; 
  hkMemoryRouter *Value; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  HavokPhysicsShapeViewer::WorldData **m_data; 
  hkMemoryAllocator *v11; 
  int m_size; 
  _DWORD *v13; 
  int v14; 
  hkMemoryAllocator *v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int m_serialAndIndex; 
  hkMemoryAllocator *v23; 
  int v24; 
  __int128 v28[3]; 

  m_ptr = this->m_context.m_ptr;
  if ( m_ptr->m_colorModifiers.m_size )
    p_m_defaultColorScheme = m_ptr->m_colorModifiers.m_data[m_ptr->m_colorModifiers.m_size - 1];
  else
    p_m_defaultColorScheme = &m_ptr->m_defaultColorScheme;
  this->m_colorScheme = p_m_defaultColorScheme;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v7 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
  if ( v7 )
  {
    *(_QWORD *)v7 = 0i64;
    *(_QWORD *)(v7 + 16) = 0i64;
    *(_QWORD *)(v7 + 32) = 0i64;
    *(_QWORD *)(v7 + 48) = 0i64;
    *(_QWORD *)(v7 + 8) = 0i64;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0x80000000;
    *(_QWORD *)(v7 + 24) = 0i64;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 36) = 0x80000000;
    *(_QWORD *)(v7 + 40) = 0i64;
    *(_DWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 52) = 0x80000000;
  }
  else
  {
    v7 = 0i64;
  }
  *(_QWORD *)v7 = world;
  v8 = 0;
  if ( this->m_worldDatas.m_size <= 0 )
  {
LABEL_13:
    v8 = -1;
  }
  else
  {
    v9 = 0i64;
    m_data = this->m_worldDatas.m_data;
    while ( *m_data )
    {
      ++v8;
      ++v9;
      ++m_data;
      if ( v9 >= this->m_worldDatas.m_size )
        goto LABEL_13;
    }
  }
  if ( v8 == -1 )
  {
    v11 = hkMemHeapAllocator();
    m_size = this->m_worldDatas.m_size;
    if ( m_size == (this->m_worldDatas.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v11, &this->m_worldDatas, 8);
      m_size = this->m_worldDatas.m_size;
    }
    this->m_worldDatas.m_data[m_size] = (HavokPhysicsShapeViewer::WorldData *)v7;
    ++this->m_worldDatas.m_size;
  }
  else
  {
    this->m_worldDatas.m_data[v8] = (HavokPhysicsShapeViewer::WorldData *)v7;
  }
  v13 = (_DWORD *)(v7 + 40);
  v14 = world->m_bodyManager.m_bodies.m_peakIndex + 1;
  v15 = hkMemHeapAllocator();
  v16 = v13[3] & 0x3FFFFFFF;
  if ( v16 < v14 )
  {
    v17 = 2 * v16;
    if ( (unsigned int)v17 >= 0x3FFFFFFF )
      v17 = 1073741822;
    if ( v14 < v17 )
      v14 = v17;
    hkArrayUtil::_reserve(v15, v13, v14, 4);
  }
  v18 = 0;
  v19 = world->m_bodyManager.m_bodies.m_objects.m_data;
  v20 = world->m_bodyManager.m_bodies.m_peakIndex + 1;
  if ( world->m_bodyManager.m_bodies.m_numAllocated )
  {
    if ( (v19->m_pod.m_flags.m_storage & 0xF) != 0 )
      goto LABEL_41;
    v18 = 1;
    if ( v20 > 1 )
    {
      while ( (v19[v18].m_pod.m_flags.m_storage & 0xF) == 0 )
      {
        if ( ++v18 >= v20 )
          goto LABEL_42;
      }
      if ( v18 != -1 )
      {
LABEL_41:
        do
        {
          v21 = v18;
          if ( v19[v21].m_pod.m_broadPhaseId != -1 && v19[v21].m_pod.m_shape )
          {
            m_serialAndIndex = v19[v21].m_pod.m_id.m_serialAndIndex;
            v23 = hkMemHeapAllocator();
            v24 = v13[2];
            if ( v24 == (v13[3] & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v23, v13, 4);
              v24 = v13[2];
            }
            *(_DWORD *)(*(_QWORD *)v13 + 4i64 * v24) = m_serialAndIndex;
            ++v13[2];
          }
          if ( ++v18 >= v20 )
            break;
          while ( (v19[v18].m_pod.m_flags.m_storage & 0xF) == 0 )
          {
            if ( ++v18 >= v20 )
              goto LABEL_42;
          }
        }
        while ( v18 != -1 );
      }
    }
  }
LABEL_42:
  DWORD2(v28[0]) = 0;
  *(_QWORD *)&v28[0] = HavokPhysicsShapeViewer::onBodiesAddedSignal;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_38]
    vmovdqa [rsp+58h+var_38], xmm0
  }
  hkSignal3<hknpWorld *,hknpBodyId const *,int>::subscribe<HavokPhysicsShapeViewer,void (HavokPhysicsShapeViewer::*)(hknpWorld *,hknpBodyId const *,int)>(&world->m_signals.m_bodiesAdded, this, v28, NULL);
  DWORD2(v28[0]) = 0;
  *(_QWORD *)&v28[0] = HavokPhysicsShapeViewer::onBodiesRemovedSignal;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_38]
    vmovdqa [rsp+58h+var_38], xmm0
  }
  hkSignal3<hknpWorld *,hknpBodyId const *,int>::subscribe<HavokPhysicsShapeViewer,void (HavokPhysicsShapeViewer::*)(hknpWorld *,hknpBodyId const *,int)>(&world->m_signals.m_bodiesRemoved, this, v28, NULL);
  DWORD2(v28[0]) = 0;
  *(_QWORD *)&v28[0] = HavokPhysicsShapeViewer::onBodyShapeChangedSignal;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_38]
    vmovdqa [rsp+58h+var_38], xmm0
  }
  hkSignal3<hknpWorld *,hknpBodyId,hkRefPtr<hknpShape const> &>::subscribe<HavokPhysicsShapeViewer,void (HavokPhysicsShapeViewer::*)(hknpWorld *,hknpBodyId,hkRefPtr<hknpShape const> &)>(&world->m_signals.m_bodyShapeChanged, this, v28, NULL);
}

/*
==============
HavokPhysicsShapeViewer::consumeCommand
==============
*/
void HavokPhysicsShapeViewer::consumeCommand(HavokPhysicsShapeViewer *this, unsigned __int8 command)
{
  ;
}

/*
==============
HavokPhysicsShapeViewer::create
==============
*/
hkProcess *HavokPhysicsShapeViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  hkMemoryRouter *Value; 
  hknpShapeViewer *v3; 
  hknpShapeViewer *v4; 
  __int64 m_size; 
  hkArrayView<hkProcessContext *> contextsa; 

  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (hknpShapeViewer *)Value->m_heap->blockAlloc(Value->m_heap, 336i64);
  v4 = v3;
  if ( v3 )
  {
    m_size = contexts->m_size;
    contextsa.m_begin = contexts->m_data;
    contextsa.m_end = &contextsa.m_begin[m_size];
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+contexts.m_begin]
      vmovdqa xmmword ptr [rsp+48h+contexts.m_begin], xmm0
    }
    hknpShapeViewer::hknpShapeViewer(v3, &contextsa, HavokPhysicsShapeViewer::s_tag);
    v4->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (hknpShapeViewer_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkReferencedObject'};
    v4->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsShapeViewer::`vftable'{for `hkProcess'};
    v4[1].m_outStream.m_ptr = NULL;
    LODWORD(v4[1].m_displayHandler.m_ptr) = 0;
    HIDWORD(v4[1].m_displayHandler.m_ptr) = 0x80000000;
    LODWORD(v4[1].m_objectHandler.m_ptr) = 0;
    BYTE4(v4[1].m_objectHandler.m_ptr) = 1;
    v4[1].m_fileHandler.m_ptr = NULL;
    LODWORD(v4[1].m_textHandler.m_ptr) = 0;
    HIDWORD(v4[1].m_textHandler.m_ptr) = -1;
    v4[1].m_processHandler = NULL;
    LODWORD(v4[1].m_context.m_ptr) = 0;
    HIDWORD(v4[1].m_context.m_ptr) = -1;
    *(_QWORD *)&v4[1].m_wasObjectInspectorEnabled = 0i64;
    v4[1].m_tag = 0;
    *(_DWORD *)&v4[1].m_options.m_levelOfDetail.m_maximum = 0x80000000;
    *(_QWORD *)&v4[1].m_options.m_levelOfDetail.m_approximate = 0i64;
  }
  else
  {
    v4 = NULL;
  }
  HIDWORD(v4[1].m_inStream.m_ptr) = HavokPhysicsShapeViewer::s_tag;
  return &v4->hkProcess;
}

/*
==============
HavokPhysicsShapeViewer::createDisplayObject
==============
*/
void HavokPhysicsShapeViewer::createDisplayObject(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId, bool useInstancing)
{
  signed __int64 v4; 
  void *v11; 
  __int64 v13; 
  hkMonitorStream *Value; 
  __int64 v16; 
  char v18; 
  unsigned __int64 v19; 
  int v20; 
  char v22; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  int m_hashMod; 
  __int64 v53; 
  int v54; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v56; 
  int val; 
  hkMemoryAllocator *v58; 
  int v59; 
  int v60; 
  __int64 v61; 
  int v62; 
  int v63; 
  int v64; 
  __int64 v65; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v66; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v67; 
  __int64 v68; 
  int v71; 
  HavokPhysicsShapeViewer::Group *v72; 
  hkMemoryAllocator *v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  unsigned __int32 v78; 
  unsigned __int32 v79; 
  unsigned int v80; 
  hkMapBase<unsigned __int64,int,hkMapOperations<unsigned __int64> >::Pair *v81; 
  unsigned __int64 key; 
  __int64 v83; 
  int v84; 
  hkMonitorStream *v147; 
  hkMemoryAllocator_vtbl *v148; 
  hknpShape *m_shape; 
  __int64 v158; 
  int i; 
  const hknpTriangleShape *TriangleShape; 
  hkMemoryAllocator *v162; 
  int v163; 
  __int64 v164; 
  hkMemoryAllocator *v165; 
  int m_size; 
  bool v174; 
  hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> dst; 
  hkMemoryAllocator alloc; 
  unsigned int v177; 
  __int64 v178; 
  __int64 v179; 
  hknpCollisionQueryDispatcher *m_collisionQueryDispatcher; 
  hkReferencedObject *v181; 
  hkReferencedObject *v182; 
  int v184; 
  unsigned __int64 v185; 
  hkMonitorStream *v186; 
  hkReferencedObject v187; 
  char v188; 
  hkErrStream v189; 
  __int128 v190; 
  __int64 v191; 
  __int64 v192[2]; 
  __int16 v193; 
  int v194; 
  __int64 v195; 
  int v196; 
  char v197; 
  hkAabb v198; 
  __int128 v199; 
  __int64 v200; 
  int v201; 
  int v202; 
  char v204; 
  int v205; 
  __int128 v209; 
  __int64 v210; 
  int v211; 
  int v212; 
  char v214; 
  int v215; 
  hkBaseObject v219; 
  char v220; 
  int v221; 
  char v223; 
  void *p; 
  int v225; 
  int v226; 
  char v227; 
  hknpInplaceTriangleShape v228; 
  hknpShapeCollector v229; 
  char buf[512]; 
  char v237; 

  v11 = alloca(v4);
  v191 = -2i64;
  __asm
  {
    vmovaps [rsp+16C0h+var_40], xmm6
    vmovaps [rsp+16C0h+var_50], xmm7
    vmovaps [rsp+16C0h+var_60], xmm8
    vmovaps [rsp+16C0h+var_70], xmm9
    vmovaps [rsp+16C0h+var_80], xmm10
    vmovaps [rsp+16C0h+var_90], xmm11
  }
  v174 = useInstancing;
  v13 = worldIndex;
  _R13 = this;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v16 = (__int64)Value;
  v186 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCreateDisplayObject");
  v179 = v16;
  _R12 = _R13->m_worldDatas.m_data[v13]->m_world;
  v178 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))_R12->getBody)(&_R12->hknpWorldReader, bodyId.m_serialAndIndex);
  v18 = (v179 ^ _R13->hknpShapeViewer::m_tag) & 0x7F ^ v179;
  v19 = ((unsigned __int64)hkServerObjectSerializer::getOrCreateTypeStreamId(_R13->m_objectHandler.m_ptr->m_serializer.m_ptr, &hknpVdbShapeDisplayMarker::typeData) << 38) + ((unsigned __int64)(v18 & 0x7F) << 26) + ((((unsigned int)v179 ^ bodyId.m_serialAndIndex & 0xFFFFFF) & 0x3FFFF ^ (unsigned int)v179) & 0x3FFFF) + ((unsigned __int64)HIBYTE(bodyId.m_serialAndIndex) << 18) + ((unsigned __int64)(v13 & 0xF) << 34);
  v185 = v19;
  v20 = ((__int64 (__fastcall *)(const hknpViewerColorScheme *, hknpWorld *, _QWORD, _QWORD))_R13->m_colorScheme->getBodyColor)(_R13->m_colorScheme, _R12, bodyId.m_serialAndIndex, 0i64);
  v177 = v20;
  _R14 = v178;
  if ( (!HavokPhysicsShapeViewer::ms_ignoreQuery || (*(_DWORD *)(v178 + 68) & 0x100) == 0) && (*(_DWORD *)(v178 + 108) & HavokPhysicsShapeViewer::ms_contents) != 0 )
  {
    v22 = 0;
    if ( !_R13->m_useAabb )
      goto LABEL_8;
    __asm
    {
      vmovdqu xmm2, xmmword ptr [r14+50h]
      vmovdqu xmm3, xmmword ptr [r12+5B0h]
      vpshufb xmm0, xmm2, xmmword ptr [r12+590h]
      vpand   xmm1, xmm0, xmm3
      vpaddd  xmm4, xmm1, xmmword ptr [r12+600h]
      vpshufb xmm0, xmm2, xmmword ptr [r12+5A0h]
      vpand   xmm1, xmm0, xmm3
      vpaddd  xmm2, xmm1, xmmword ptr [r12+5F0h]
      vcvtdq2ps xmm6, xmm4
      vcvtdq2ps xmm0, xmm2
      vmovups xmm4, xmmword ptr [r12+560h]
      vmovups xmm5, xmmword ptr [r12+540h]
      vmulps  xmm0, xmm0, xmm4
      vsubps  xmm2, xmm0, xmm5
      vmovups xmm1, xmmword ptr [r13+0D0h]
      vcmpleps xmm3, xmm1, xmm2
      vmulps  xmm0, xmm6, xmm4
      vsubps  xmm1, xmm0, xmm5
      vcmpleps xmm2, xmm1, xmmword ptr [r13+0E0h]
      vandps  xmm5, xmm3, xmm2
      vxorps  xmm4, xmm4, xmm4
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm4, xmm1, 7
      vpand   xmm0, xmm2, xmm5
      vptest  xmm0, xmm2
    }
    if ( _CF )
    {
LABEL_8:
      v50 = *(_QWORD *)(v178 + 96);
      v51 = v50;
      if ( (*(_BYTE *)(v50 + 24) & 1) == 0 )
        v51 = 0i64;
      if ( _R13->m_instancingEnabled.m_bool )
        v22 = v174;
      if ( ((unsigned __int8)v22 & (v51 != 0)) == 0 )
        goto LABEL_48;
      hkString::memSet(&dst, 0, 16);
      dst.m_data = (hkDisplayGeometry **)v50;
      dst.m_capacityAndFlags = v20;
      m_hashMod = _R13->m_keyToGroupMap.m_hashMod;
      if ( m_hashMod <= 0 )
        goto LABEL_18;
      v53 = m_hashMod & (-1640531535 * (unsigned int)(v50 >> 4));
      v54 = m_hashMod & (-1640531535 * (v50 >> 4));
      m_elem = _R13->m_keyToGroupMap.m_elem;
      v56 = &m_elem[v53];
      if ( v56->key.m_shape )
      {
        while ( v56->key.m_shape != (const hknpShape *)v50 || v56->key.m_color != v20 )
        {
          v53 = m_hashMod & (unsigned int)(v53 + 1);
          v54 = v53;
          v56 = &m_elem[v53];
          if ( !v56->key.m_shape )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v54 = m_hashMod + 1;
      }
      if ( v54 > m_hashMod )
      {
        m_size = _R13->m_groups.m_size;
        v58 = hkMemHeapAllocator();
        v59 = _R13->m_groups.m_size;
        v60 = v59;
        if ( v59 == (_R13->m_groups.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v58, &_R13->m_groups, 16);
          v59 = _R13->m_groups.m_size;
          v60 = v59;
        }
        v61 = (__int64)&_R13->m_groups.m_data[v59];
        if ( v61 )
        {
          *(_QWORD *)v61 = 0i64;
          *(_DWORD *)(v61 + 8) = 0;
          *(_DWORD *)(v61 + 12) = 0x80000000;
          v60 = _R13->m_groups.m_size;
        }
        _R13->m_groups.m_size = v60 + 1;
        v62 = (unsigned int)hkMemHeapAllocator();
        v63 = _R13->m_keyToGroupMap.m_hashMod;
        if ( 2 * _R13->m_keyToGroupMap.m_numElems > v63 )
        {
          hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(&_R13->m_keyToGroupMap, &alloc, v62);
          v63 = _R13->m_keyToGroupMap.m_hashMod;
        }
        v64 = 1;
        v65 = v63 & (-1640531535 * (unsigned int)((unsigned __int64)dst.m_data >> 4));
        v66 = _R13->m_keyToGroupMap.m_elem;
        while ( 1 )
        {
          v67 = &v66[v65];
          if ( !v67->key.m_shape )
            break;
          if ( v67->key.m_shape == (const hknpShape *)dst.m_data && v67->key.m_color == dst.m_capacityAndFlags )
          {
            v64 = 0;
            break;
          }
          v65 = _R13->m_keyToGroupMap.m_hashMod & (unsigned int)(v65 + 1);
        }
        _R13->m_keyToGroupMap.m_numElems += v64;
        v68 = (int)v65;
        if ( &v66[(int)v65] )
        {
          __asm
          {
            vmovups xmm0, [rsp+16C0h+dst]
            vmovups xmmword ptr [rax], xmm0
          }
        }
        v71 = m_size;
        _R13->m_keyToGroupMap.m_elem[v68].val = m_size;
        val = v71;
      }
      else
      {
        val = _R13->m_keyToGroupMap.m_elem[v54].val;
        m_size = val;
      }
      v72 = &_R13->m_groups.m_data[val];
      v73 = hkMemHeapAllocator();
      v74 = v72->m_displayIds.m_size;
      if ( v74 == (v72->m_displayIds.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v73, v72, 8);
        v74 = v72->m_displayIds.m_size;
      }
      v72->m_displayIds.m_data[v74] = v19;
      ++v72->m_displayIds.m_size;
      v75 = (unsigned int)hkMemHeapAllocator();
      v76 = _R13->m_displayIdToGroupMap.m_hashMod;
      if ( 2 * _R13->m_displayIdToGroupMap.m_numElems > v76 )
      {
        hkMapBase<unsigned __int64,int,hkMapOperations<unsigned __int64>>::resizeTable(&_R13->m_displayIdToGroupMap, &alloc, v75);
        v76 = _R13->m_displayIdToGroupMap.m_hashMod;
      }
      v77 = 1;
      v78 = _byteswap_ulong(-1640531535 * v19);
      v79 = _byteswap_ulong(-1640531535 * HIDWORD(v19));
      v80 = v76 & (v79 ^ ((v78 >> 2) + v78 + (v79 << 6) - 1640531527));
      v81 = _R13->m_displayIdToGroupMap.m_elem;
      key = v81[v80].key;
      if ( key != -1i64 )
      {
        while ( key != v19 )
        {
          v80 = _R13->m_displayIdToGroupMap.m_hashMod & (v80 + 1);
          key = v81[v80].key;
          if ( key == -1i64 )
            goto LABEL_45;
        }
        v77 = 0;
      }
LABEL_45:
      _R13->m_displayIdToGroupMap.m_numElems += v77;
      v83 = (int)v80;
      v81[v83].key = v19;
      _R13->m_displayIdToGroupMap.m_elem[v83].val = m_size;
      if ( v72->m_displayIds.m_size > 1 && (((void (__fastcall *)(hkDebugDisplayHandler *, int *, unsigned __int64, unsigned __int64, __int64, int))_R13->m_displayHandler.m_ptr->addGeometryInstance)(_R13->m_displayHandler.m_ptr, &m_size, v19, *v72->m_displayIds.m_data, _R14, _R13->m_tag), m_size >= 0) )
      {
        ((void (__fastcall *)(hkDebugDisplayHandler *, hkMemoryAllocator *, unsigned __int64, __int64))_R13->m_displayHandler.m_ptr->setGeometryFlagBits)(_R13->m_displayHandler.m_ptr, &alloc, v19, 1i64);
      }
      else
      {
LABEL_48:
        v84 = 0;
        dst.m_data = NULL;
        *(_QWORD *)&dst.m_size = 0x8000000000000000ui64;
        if ( !_R13->m_useAabb )
          goto LABEL_79;
        if ( (*(_BYTE *)(_R14 + 68) & 1) == 0 )
          goto LABEL_79;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14+30h]
          vdpps   xmm4, xmm0, xmm0, 7Fh
          vxorps  xmm11, xmm11, xmm11
          vcmpleps xmm3, xmm4, xmm11
          vrsqrtps xmm1, xmm4
          vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
          vmulps  xmm0, xmm1, xmm4
          vmulps  xmm1, xmm0, xmm1
          vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
          vsubps  xmm1, xmm0, xmm1
          vmulps  xmm2, xmm1, xmm2
          vmulps  xmm0, xmm2, xmm4
          vandnps xmm1, xmm3, xmm0
          vxorps  xmm10, xmm10, xmm10
          vucomiss xmm1, xmm10
        }
        if ( (*(_BYTE *)(_R14 + 68) & 1) == 0 )
        {
          v187.m_propertyBag.m_bag = NULL;
          *(_DWORD *)&v187.m_memSizeAndFlags = 0x1FFFF;
          v188 = 5;
          v187.__vftable = (hkReferencedObject_vtbl *)&HavokPhysicsShapeViewerCollisionFilter::`vftable';
          __asm { vxorps  xmm1, xmm1, xmm1; radius }
          hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v228, *(float *)&_XMM1);
          v181 = (hkReferencedObject *)&v228;
          v182 = (hkReferencedObject *)&v228;
          __asm { vmovss  [rbp+15C0h+var_1630], xmm10 }
          v184 = 1;
          m_collisionQueryDispatcher = _R12->m_collisionQueryDispatcher;
          v193 = -1;
          v195 = 0i64;
          v196 = 2;
          v197 = -5;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_1580.m_min.m_quad], xmm0
            vpxor   xmm9, xmm9, xmm9
          }
          v192[1] = (__int64)&v187;
          v194 = HavokPhysicsShapeViewer::ms_contents;
          v192[0] = (__int64)_R12->getShapeTagCodec(&_R12->hknpWorldReader);
          __asm
          {
            vmovups xmm3, xmmword ptr [r13+0E0h]
            vmovups xmm2, xmmword ptr [r13+0D0h]
            vaddps  xmm0, xmm2, xmm3
            vmulps  xmm8, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
            vsubps  xmm0, xmm3, xmm2
            vmulps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
            vmovups xmm1, xmmword ptr [r14]
            vmovups xmm0, xmmword ptr [r14+10h]
            vmovups xmm3, xmmword ptr [r14+20h]
            vunpcklps xmm2, xmm1, xmm0
            vunpckhps xmm0, xmm1, xmm0
            vblendps xmm7, xmm0, xmm3, 0Ch
            vmovlhps xmm4, xmm2, xmm3
            vmovhlps xmm0, xmm4, xmm2
            vshufps xmm6, xmm0, xmm3, 0D4h ; 'Ô'
            vshufps xmm1, xmm5, xmm5, 0
            vshufps xmm3, xmm5, xmm5, 55h ; 'U'
            vshufps xmm5, xmm5, xmm5, 0AAh ; 'ª'
            vmulps  xmm0, xmm4, xmm1
            vmovups xmm2, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
            vandnps xmm4, xmm2, xmm0
            vmulps  xmm0, xmm3, xmm6
            vandnps xmm3, xmm2, xmm0
            vmulps  xmm1, xmm5, xmm7
            vandnps xmm2, xmm2, xmm1
            vaddps  xmm0, xmm3, xmm4
            vaddps  xmm7, xmm0, xmm2
            vpinsrw xmm0, xmm9, eax, 1
            vpshufd xmm6, xmm0, 0
            vsubps  xmm5, xmm8, xmmword ptr [r14+30h]
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmm1, xmmword ptr [r14+10h]
            vmovups xmm3, xmmword ptr [r14+20h]
            vdpps   xmm4, xmm0, xmm5, 71h ; 'q'
            vdpps   xmm2, xmm1, xmm5, 72h ; 'r'
            vdpps   xmm3, xmm3, xmm5, 74h ; 't'
            vorps   xmm0, xmm2, xmm4
            vorps   xmm1, xmm0, xmm3
            vxorps  xmm0, xmm7, xmm6
            vaddps  xmm2, xmm0, xmm1
            vaddps  xmm1, xmm1, xmm7
            vmovups xmmword ptr [rbp+15C0h+var_1580.m_max.m_quad], xmm1
            vmovups xmmword ptr [rbp+15C0h+var_1580.m_min.m_quad], xmm2
          }
          LOWORD(v189.__vftable) = -1;
          HIDWORD(v189.__vftable) = 0;
          v189.m_propertyBag.m_bag = NULL;
          v201 = -1;
          v202 = 0;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu [rbp+15C0h+var_1560], xmm0
          }
          v200 = 0i64;
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vmovdqu [rbp+15C0h+var_1540], xmm1
          }
          v204 = 0;
          __asm
          {
            vmovups xmm6, cs:__xmm@3f8000003f8000003f8000003f800000
            vmovups [rbp+15C0h+var_1520], xmm6
          }
          v205 = 0;
          __asm
          {
            vmovups [rbp+15C0h+var_1510], xmm11
            vmovss  [rbp+15C0h+var_1528], xmm10
          }
          v219.__vftable = (hkBaseObject_vtbl *)hknpAllHitsCollector::`vftable';
          p = &v227;
          v226 = -2147483638;
          v221 = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+15C0h+var_1490], xmm0
          }
          v223 = 0;
          v225 = 0;
          v220 = 64;
          v147 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
          v148 = (hkMemoryAllocator_vtbl *)v147;
          if ( v147 )
            hkMonitorStream::timerBegin(v147, "TtQueryAabb");
          alloc.__vftable = v148;
          if ( hkAabb::isValid(&v198) )
          {
            v211 = -1;
            v212 = 0;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu [rbp+15C0h+var_1500], xmm0
            }
            v210 = 0i64;
            __asm
            {
              vpxor   xmm1, xmm1, xmm1
              vmovdqu [rbp+15C0h+var_14E0], xmm1
            }
            v214 = 0;
            __asm { vmovups [rbp+15C0h+var_14C0], xmm6 }
            v215 = 0;
            __asm
            {
              vmovups [rbp+15C0h+var_14B0], xmm11
              vmovss  [rbp+15C0h+var_14C8], xmm10
              vmovups xmm0, xmmword ptr [rbp+15C0h+var_15F0.baseclass_0.baseclass_0.baseclass_0.__vftable]
              vmovdqa [rbp+15C0h+var_15D0], xmm0
            }
            if ( v192[0] && (*(_BYTE *)(v192[0] + 24) & 1) != 0 )
              (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int128 *))(*(_QWORD *)v192[0] + 24i64))(v192[0], 5i64, v199, v50, &v190);
            (*(void (__fastcall **)(unsigned __int64, hknpCollisionQueryDispatcher **, __int64 *, __int128 *, __int128 *, __int128 *, hkBaseObject *, _QWORD))(*(_QWORD *)v50 + 200i64))(v50, &m_collisionQueryDispatcher, v192, &v209, &v190, &v199, &v219, 0i64);
            if ( v148 )
              hkMonitorStream::timerEnd((hkMonitorStream *)v148, "Et");
          }
          else
          {
            hkErrStream::hkErrStream(&v189, buf, 512);
            hkOstream::operator<<(&v189, "Invalid AABB query. Please check your input AABB.");
            hkErrorFwd::messageWarning(-1357677090, buf, "c:\\workspace\\iw8\\shared\\codware\\sdk\\havok\\hk2018_2_0_r1\\source\\physics\\physics\\collide\\shape\\hknpshapequeryinterface.inl", 215);
            hkErrStream::~hkErrStream(&v189);
            if ( v148 )
              hkMonitorStream::timerEnd((hkMonitorStream *)v148, "Et");
          }
          m_shape = NULL;
          v229.m_internal.m_shapeBuffer.m_shape = NULL;
          v229.m_internal.m_shapeBuffer.m_buffer = v229.m_internal.m_shapeBuffer.m_storage;
          v229.m_internal.m_shapeBuffer.m_bufferSize = 2048;
          v229.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
          v229.m_internal.m_shape = NULL;
          v229.m_parentShape = NULL;
          v229.m_shapeTagPath.m_size = 0;
          *(_QWORD *)&v229.m_internal.m_flags.m_storage = 13i64;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
            vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+210h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col1.m_quad], xmm1
            vmovups xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col2.m_quad], xmm2
            vmovups xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_translation.m_quad], xmm3
            vmovups xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rbp+15C0h+var_EF0.m_internal.m_scale.m_quad], xmm4
          }
          v229.m_internal.m_shapeTags[0] = -1;
          if ( v221 > 0 )
          {
            v158 = 0i64;
            while ( 1 )
            {
              m_size = *(_DWORD *)((char *)p + v158 + 76);
              v229.m_internal.m_shape = NULL;
              v229.m_parentShape = NULL;
              v229.m_shapeTagPath.m_size = 0;
              *(_QWORD *)&v229.m_internal.m_flags.m_storage = 13i64;
              __asm
              {
                vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
                vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col1.m_quad], xmm1
                vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_rotation.baseclass_0.m_col2.m_quad], xmm2
                vmovups xmmword ptr [rbp+15C0h+var_EF0.m_transform.m_translation.m_quad], xmm3
                vmovups xmmword ptr [rbp+15C0h+var_EF0.m_internal.m_scale.m_quad], xmm4
              }
              v229.m_internal.m_shapeTags[0] = -1;
              (*(void (__fastcall **)(unsigned __int64, int *, __int64, hknpShapeCollector *))(*(_QWORD *)v50 + 176i64))(v50, &m_size, 1i64, &v229);
              for ( i = 0; i < v229.m_internal.m_numShapesStored; ++i )
              {
                if ( (v229.m_internal.m_flags.m_storage & 0x10) != 0 )
                  TriangleShape = hknpShapeCollector::getTriangleShape(&v229, i, (hknpTriangleShape *)&v228);
                else
                  TriangleShape = (const hknpTriangleShape *)v229.m_internal.m_shape;
                hknpShapeUtil::buildShapeDisplayGeometries(TriangleShape, &v229.m_transform, _R13->m_radiusDisplayMode, &dst, 0);
              }
              ++v84;
              v158 += 112i64;
              if ( v84 >= v221 )
                break;
              __asm
              {
                vmovups xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
                vmovups xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+210h; __m128 const near * const g_vectorfConstants
                vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                vmovups xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
              }
            }
            m_shape = v229.m_internal.m_shapeBuffer.m_shape;
            v19 = v185;
            _R14 = v178;
          }
          v229.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
          if ( m_shape )
            ((void (__fastcall *)(hknpShape *, _QWORD))m_shape->~hkBaseObject)(m_shape, 0i64);
          v219.__vftable = (hkBaseObject_vtbl *)hknpAllHitsCollector::`vftable';
          v221 = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+15C0h+var_1490], xmm0
          }
          v223 = 0;
          v225 = 0;
          v162 = hkMemHeapAllocator();
          v225 = 0;
          if ( v226 >= 0 )
            hkMemoryAllocator::bufFree2(v162, p, 112, v226 & 0x3FFFFFFF);
          p = NULL;
          v226 = 0x80000000;
          v219.__vftable = (hkBaseObject_vtbl *)hknpCollisionQueryCollector::`vftable';
          hkBaseObject::~hkBaseObject(&v219);
          if ( !v184 )
          {
            hkReferencedObject::removeReference(v181);
            hkReferencedObject::removeReference(v182);
          }
          v187.__vftable = (hkReferencedObject_vtbl *)hknpCollisionFilter::`vftable';
          hkReferencedObject::~hkReferencedObject(&v187);
        }
        else
        {
LABEL_79:
          hknpShapeUtil::buildShapeDisplayGeometries((const hknpShape *)v50, _R13->m_radiusDisplayMode, &dst, 0);
        }
        ((void (__fastcall *)(hkDebugDisplayHandler *, hkMemoryAllocator *, unsigned __int64, hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> *, __int64, int))_R13->m_displayHandler.m_ptr->addGeometry)(_R13->m_displayHandler.m_ptr, &alloc, v19, &dst, _R14, _R13->m_tag);
        ((void (__fastcall *)(hkDebugDisplayHandler *, hkMemoryAllocator *, unsigned __int64, _QWORD))_R13->m_displayHandler.m_ptr->setGeometryColor)(_R13->m_displayHandler.m_ptr, &alloc, v19, v177);
        v163 = 0;
        if ( dst.m_size > 0 )
        {
          v164 = 0i64;
          do
          {
            hkReferencedObject::removeReference(dst.m_data[v164]);
            ++v163;
            ++v164;
          }
          while ( v163 < dst.m_size );
        }
        v165 = hkMemHeapAllocator();
        dst.m_size = 0;
        if ( dst.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v165, dst.m_data, 8, dst.m_capacityAndFlags & 0x3FFFFFFF);
      }
    }
  }
  if ( v186 )
    hkMonitorStream::timerEnd(v186, "Et");
  _R11 = &v237;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
HavokPhysicsShapeViewer::destroyDisplayObject
==============
*/
void HavokPhysicsShapeViewer::destroyDisplayObject(HavokPhysicsShapeViewer *this, int worldIndex, hknpBodyId bodyId)
{
  int m_tag; 
  unsigned __int64 v5; 
  int m_hashMod; 
  hkMapBase<unsigned __int64,int,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  unsigned __int32 v8; 
  unsigned __int32 v9; 
  unsigned int v10; 
  int v11; 
  unsigned __int64 key; 
  int v13; 
  HavokPhysicsShapeViewer::Group *v14; 
  __int64 m_size; 
  unsigned __int64 *m_data; 
  __int64 v17; 
  int v18; 
  hkMapBase<unsigned __int64,int,hkMapOperations<unsigned __int64> >::Pair *v19; 
  unsigned __int32 v20; 
  unsigned __int32 v21; 
  unsigned int v22; 
  Dummy *v23; 
  unsigned __int64 v24; 
  char v25; 

  m_tag = this->hknpShapeViewer::m_tag;
  v5 = (bodyId.m_serialAndIndex & 0x3FFFF) + ((((unsigned __int64)bodyId.m_serialAndIndex >> 24) + (((m_tag & 0x7F) + (((worldIndex & 0xF) + 16i64 * hkServerObjectSerializer::getOrCreateTypeStreamId(this->m_objectHandler.m_ptr->m_serializer.m_ptr, &hknpVdbShapeDisplayMarker::typeData)) << 8)) << 8)) << 18);
  ((void (__fastcall *)(hkDebugDisplayHandler *, char *, unsigned __int64))this->m_displayHandler.m_ptr->removeGeometry)(this->m_displayHandler.m_ptr, &v25, v5);
  m_hashMod = this->m_displayIdToGroupMap.m_hashMod;
  if ( m_hashMod <= 0 || (m_elem = this->m_displayIdToGroupMap.m_elem, v8 = _byteswap_ulong(-1640531535 * HIDWORD(v5)), v9 = _byteswap_ulong(-1640531535 * v5), v10 = m_hashMod & (v8 ^ ((v9 >> 2) + v9 + (v8 << 6) - 1640531527)), v11 = v10, key = m_elem[v10].key, key == -1i64) )
  {
LABEL_5:
    v11 = m_hashMod + 1;
  }
  else
  {
    while ( key != v5 )
    {
      v10 = m_hashMod & (v10 + 1);
      v11 = v10;
      key = m_elem[v10].key;
      if ( key == -1i64 )
        goto LABEL_5;
    }
  }
  if ( v11 <= m_hashMod )
  {
    v13 = 0;
    v14 = &this->m_groups.m_data[this->m_displayIdToGroupMap.m_elem[v11].val];
    m_size = v14->m_displayIds.m_size;
    if ( (int)m_size <= 0 )
    {
LABEL_11:
      v13 = -1;
    }
    else
    {
      m_data = v14->m_displayIds.m_data;
      v17 = 0i64;
      while ( *m_data != v5 )
      {
        ++v13;
        ++v17;
        ++m_data;
        if ( v17 >= m_size )
          goto LABEL_11;
      }
    }
    v14->m_displayIds.m_size = m_size - 1;
    if ( (_DWORD)m_size - 1 != v13 )
      v14->m_displayIds.m_data[v13] = v14->m_displayIds.m_data[m_size - 1];
    v18 = this->m_displayIdToGroupMap.m_hashMod;
    if ( v18 <= 0 || (v19 = this->m_displayIdToGroupMap.m_elem, v20 = _byteswap_ulong(-1640531535 * HIDWORD(v5)), v21 = _byteswap_ulong(-1640531535 * v5), v22 = v18 & (v20 ^ ((v21 >> 2) + v21 + (v20 << 6) - 1640531527)), v23 = (Dummy *)v22, v24 = v19[v22].key, v24 == -1i64) )
    {
LABEL_18:
      v23 = (Dummy *)(v18 + 1);
    }
    else
    {
      while ( v24 != v5 )
      {
        v22 = v18 & (v22 + 1);
        v23 = (Dummy *)v22;
        v24 = v19[v22].key;
        if ( v24 == -1i64 )
          goto LABEL_18;
      }
    }
    if ( (int)v23 <= v18 )
      hkMapBase<unsigned __int64,int,hkMapOperations<unsigned __int64>>::remove(&this->m_displayIdToGroupMap, v23);
  }
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::filterBodyPairs
==============
*/
__int64 HavokPhysicsShapeViewerCollisionFilter::filterBodyPairs(HavokPhysicsShapeViewerCollisionFilter *this, const hknpWorld *world, hknpBodyIdPair *pairs, int numPairs)
{
  hknpBodyIdPair *v5; 
  hknpBodyIdPair *v6; 
  hknpWorldReader *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  v5 = pairs;
  v6 = pairs;
  if ( numPairs > 0 )
  {
    v7 = &world->hknpWorldReader;
    v8 = (unsigned int)numPairs;
    do
    {
      v9 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v7->getBody)(v7, v6->m_bodyA.m_serialAndIndex);
      v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v7->getBody)(v7, v6->m_bodyB.m_serialAndIndex);
      v11 = *(_DWORD *)(v9 + 108);
      if ( !v11 || (v12 = *(_DWORD *)(v10 + 108)) == 0 || (v12 & v11) != 0 )
        *v5++ = *v6;
      ++v6;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)(v5 - pairs);
}

/*
==============
HavokPhysicsShapeViewer::getConsumableCommands
==============
*/
void HavokPhysicsShapeViewer::getConsumableCommands(HavokPhysicsShapeViewer *this, unsigned __int8 **commands, int *numCommands)
{
  hkServerFileHandler *m_ptr; 
  unsigned __int8 *v4; 

  m_ptr = this->m_fileHandler.m_ptr;
  v4 = NULL;
  if ( m_ptr )
    v4 = cmds;
  *commands = v4;
  *numCommands = m_ptr != NULL ? 3 : 0;
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/
bool HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, const hknpQueryFilterData *queryFilterData, const hknpBody *body)
{
  unsigned int m_collisionFilterInfo; 
  unsigned int v5; 
  bool result; 

  m_collisionFilterInfo = queryFilterData->m_collisionFilterInfo;
  result = 1;
  if ( m_collisionFilterInfo )
  {
    v5 = body->m_collisionFilterInfo;
    if ( v5 )
    {
      if ( (m_collisionFilterInfo & v5) == 0 )
        return 0;
    }
  }
  return result;
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/
char HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, unsigned __int8 layerIndex, unsigned __int64 userData)
{
  return 1;
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/
char HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, hknpBodyId bodyIdA, hknpBodyId bodyIdB)
{
  return 1;
}

/*
==============
HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled
==============
*/
bool HavokPhysicsShapeViewerCollisionFilter::isCollisionEnabled(HavokPhysicsShapeViewerCollisionFilter *this, hknpCollisionQueryType::Enum queryType, bool targetShapeIsB, const hknpCollisionFilter::FilterInput *shapeInputA, const hknpCollisionFilter::FilterInput *shapeInputB)
{
  unsigned int m_collisionFilterInfo; 
  unsigned int v6; 
  bool result; 

  m_collisionFilterInfo = shapeInputA->m_filterData.m_collisionFilterInfo;
  result = 1;
  if ( m_collisionFilterInfo )
  {
    v6 = shapeInputB->m_filterData.m_collisionFilterInfo;
    if ( v6 )
    {
      if ( (m_collisionFilterInfo & v6) == 0 )
        return 0;
    }
  }
  return result;
}

/*
==============
HavokPhysicsShapeViewer::isWorldAdded
==============
*/
bool HavokPhysicsShapeViewer::isWorldAdded(HavokPhysicsShapeViewer *this, const hknpWorld *world)
{
  int v3; 
  HavokPhysicsShapeViewer::WorldData **m_data; 
  __int64 m_size; 
  __int64 v6; 
  const hknpWorld **p_m_world; 

  v3 = 0;
  if ( this->m_worldDatas.m_size <= 0 )
  {
LABEL_6:
    v3 = -1;
  }
  else
  {
    m_data = this->m_worldDatas.m_data;
    m_size = this->m_worldDatas.m_size;
    v6 = 0i64;
    while ( 1 )
    {
      p_m_world = (const hknpWorld **)&m_data[v6]->m_world;
      if ( p_m_world )
      {
        if ( *p_m_world == world )
          break;
      }
      ++v3;
      if ( ++v6 >= m_size )
        goto LABEL_6;
    }
  }
  return v3 >= 0;
}

/*
==============
HavokPhysicsShapeViewer::onBodiesAddedSignal
==============
*/
void HavokPhysicsShapeViewer::onBodiesAddedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, const hknpBodyId *bodyIds, int numBodyIds)
{
  __int64 v5; 

  if ( numBodyIds > 0 )
  {
    v5 = (unsigned int)numBodyIds;
    do
    {
      ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, _QWORD))this->addBody)(this, world, bodyIds->m_serialAndIndex);
      ++bodyIds;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
HavokPhysicsShapeViewer::onBodiesRemovedSignal
==============
*/
void HavokPhysicsShapeViewer::onBodiesRemovedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, const hknpBodyId *bodyIds, int numBodyIds)
{
  __int64 v5; 

  if ( numBodyIds > 0 )
  {
    v5 = (unsigned int)numBodyIds;
    do
    {
      ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, _QWORD))this->removeBody)(this, world, bodyIds->m_serialAndIndex);
      ++bodyIds;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
HavokPhysicsShapeViewer::onBodyShapeChangedSignal
==============
*/
void HavokPhysicsShapeViewer::onBodyShapeChangedSignal(HavokPhysicsShapeViewer *this, hknpWorld *world, __int64 bodyId, hkRefPtr<hknpShape const > *originalShape)
{
  unsigned int v4; 

  v4 = bodyId;
  ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, __int64, hkRefPtr<hknpShape const > *))this->removeBody)(this, world, bodyId, originalShape);
  ((void (__fastcall *)(HavokPhysicsShapeViewer *, hknpWorld *, _QWORD))this->addBody)(this, world, v4);
}

/*
==============
HavokPhysicsShapeViewer::refreshAllBodies
==============
*/
void HavokPhysicsShapeViewer::refreshAllBodies(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpCollisionFlags mask)
{
  int v3; 
  __int64 m_size; 
  HavokPhysicsShapeViewer::WorldData **m_data; 
  __int64 v7; 
  hknpWorld **p_m_world; 
  HavokPhysicsShapeViewer::WorldData *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 

  v3 = 0;
  if ( this->m_worldDatas.m_size > 0 )
  {
    m_size = this->m_worldDatas.m_size;
    m_data = this->m_worldDatas.m_data;
    v7 = 0i64;
    while ( 1 )
    {
      p_m_world = &m_data[v7]->m_world;
      if ( p_m_world )
      {
        if ( *p_m_world == world )
          break;
      }
      ++v3;
      if ( ++v7 >= m_size )
        return;
    }
    if ( v3 != -1 )
    {
      v9 = m_data[v3];
      v10 = v9->m_dynamicBodyIds.m_size - 1;
      if ( v10 >= 0 )
      {
        v11 = v10;
        do
        {
          HavokPhysicsShapeViewer::destroyDisplayObject(this, v3, v9->m_dynamicBodyIds.m_data[v11]);
          HavokPhysicsShapeViewer::createDisplayObject(this, v3, v9->m_dynamicBodyIds.m_data[v11], 1);
          --v10;
          --v11;
        }
        while ( v10 >= 0 );
      }
      v12 = v9->m_staticBodyIds.m_size - 1;
      if ( v12 >= 0 )
      {
        v13 = v12;
        do
        {
          HavokPhysicsShapeViewer::destroyDisplayObject(this, v3, v9->m_staticBodyIds.m_data[v13]);
          HavokPhysicsShapeViewer::createDisplayObject(this, v3, v9->m_staticBodyIds.m_data[v13], 1);
          --v12;
          --v13;
        }
        while ( v12 >= 0 );
      }
    }
  }
}

/*
==============
HavokPhysicsShapeViewer::registerViewer
==============
*/
void HavokPhysicsShapeViewer::registerViewer(hkProcessFactory *factory)
{
  HavokPhysicsShapeViewer::s_tag = hkProcessFactory::registerProcess(factory, "IW Shape Viewer", HavokPhysicsShapeViewer::create, 0);
}

/*
==============
HavokPhysicsShapeViewer::removeBody
==============
*/
void HavokPhysicsShapeViewer::removeBody(HavokPhysicsShapeViewer *this, hknpWorld *world, hknpBodyId bodyId)
{
  __int64 v6; 
  int v7; 
  int v8; 
  HavokPhysicsShapeViewer::WorldData **m_data; 
  __int64 v10; 
  hknpWorld **p_m_world; 
  HavokPhysicsShapeViewer::WorldData *v12; 
  __int64 i; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  _DWORD *v18; 
  __int64 m_size; 
  hknpBodyId *v20; 
  __int64 v21; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *p_m_staticBodyIds; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> *p_m_dynamicBodyIds; 

  v6 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  if ( *(_QWORD *)(v6 + 96) )
  {
    if ( ((unsigned __int8 (__fastcall *)(const hknpViewerColorScheme *, hknpWorld *, _QWORD, HavokPhysicsShapeViewer *))this->m_colorScheme->isBodyVisible)(this->m_colorScheme, world, bodyId.m_serialAndIndex, this) )
    {
      v7 = 0;
      v8 = 0;
      if ( this->m_worldDatas.m_size > 0 )
      {
        m_data = this->m_worldDatas.m_data;
        v10 = 0i64;
        while ( 1 )
        {
          p_m_world = &m_data[v10]->m_world;
          if ( p_m_world )
          {
            if ( *p_m_world == world )
              break;
          }
          ++v8;
          if ( ++v10 >= this->m_worldDatas.m_size )
            return;
        }
        if ( v8 != -1 )
        {
          v12 = m_data[v8];
          if ( (*(_BYTE *)(v6 + 68) & 1) != 0 )
          {
            p_m_staticBodyIds = &v12->m_staticBodyIds;
            p_m_dynamicBodyIds = &v12->m_dynamicBodyIds;
          }
          else
          {
            p_m_staticBodyIds = &v12->m_dynamicBodyIds;
            p_m_dynamicBodyIds = &v12->m_staticBodyIds;
          }
          for ( i = 0i64; i < 2; ++i )
          {
            v14 = (__int64)*(&p_m_staticBodyIds + i);
            v15 = 0;
            v16 = 0i64;
            v17 = *(int *)(v14 + 8);
            if ( (int)v17 > 0 )
            {
              v18 = *(_DWORD **)v14;
              while ( *v18 != bodyId.m_serialAndIndex )
              {
                ++v15;
                ++v16;
                ++v18;
                if ( v16 >= v17 )
                  goto LABEL_20;
              }
              if ( v15 != -1 )
              {
                *(_DWORD *)(v14 + 8) = v17 - 1;
                if ( (_DWORD)v17 - 1 != v15 )
                  *(_DWORD *)(*(_QWORD *)v14 + 4i64 * v15) = *(_DWORD *)(*(_QWORD *)v14 + 4 * v17 - 4);
                HavokPhysicsShapeViewer::destroyDisplayObject(this, v8, bodyId);
                return;
              }
            }
LABEL_20:
            ;
          }
          m_size = v12->m_bodiesToAdd.m_size;
          if ( (int)m_size > 0 )
          {
            v20 = v12->m_bodiesToAdd.m_data;
            v21 = 0i64;
            while ( v20->m_serialAndIndex != bodyId.m_serialAndIndex )
            {
              ++v7;
              ++v21;
              ++v20;
              if ( v21 >= m_size )
                return;
            }
            if ( v7 != -1 )
            {
              v12->m_bodiesToAdd.m_size = m_size - 1;
              if ( (_DWORD)m_size - 1 != v7 )
                v12->m_bodiesToAdd.m_data[v7].m_serialAndIndex = v12->m_bodiesToAdd.m_data[m_size - 1].m_serialAndIndex;
            }
          }
        }
      }
    }
  }
}

/*
==============
HavokPhysicsShapeViewer::removeWorld
==============
*/
void HavokPhysicsShapeViewer::removeWorld(HavokPhysicsShapeViewer *this, int worldIndex)
{
  HavokPhysicsShapeViewer::WorldData **m_data; 
  __int64 v4; 
  HavokPhysicsShapeViewer::WorldData *v5; 
  hkSignal *m_world; 
  __int64 v7; 
  HavokPhysicsShapeViewer::WorldData *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  HavokPhysicsShapeViewer::WorldData *v13; 
  __int64 v14[2]; 

  if ( worldIndex >= 0 )
  {
    m_data = this->m_worldDatas.m_data;
    v4 = worldIndex;
    v5 = m_data[worldIndex];
    if ( v5 )
    {
      m_world = (hkSignal *)v5->m_world;
      if ( v5->m_world )
      {
        hkSignal::unsubscribeAll(m_world + 291, this);
        hkSignal::unsubscribeAll(m_world + 292, this);
        hkSignal::unsubscribeAll(m_world + 302, this);
        v7 = 0i64;
        v8 = this->m_worldDatas.m_data[v4];
        v14[0] = (__int64)&v8->m_dynamicBodyIds;
        v14[1] = (__int64)&v8->m_staticBodyIds;
        do
        {
          v9 = v14[v7];
          v10 = *(_DWORD *)(v9 + 8);
          if ( v10 > 0 )
          {
            v11 = 0i64;
            v12 = (unsigned int)v10;
            do
            {
              HavokPhysicsShapeViewer::destroyDisplayObject(this, v4, *(hknpBodyId *)(*(_QWORD *)v9 + v11));
              v11 += 4i64;
              --v12;
            }
            while ( v12 );
          }
          ++v7;
        }
        while ( v7 < 2 );
        m_data = this->m_worldDatas.m_data;
      }
      v13 = m_data[v4];
      if ( v13 )
      {
        HavokPhysicsShapeViewer::WorldData::`scalar deleting destructor'(v13, 1u);
        m_data = this->m_worldDatas.m_data;
      }
      m_data[v4] = NULL;
    }
  }
}

/*
==============
HavokPhysicsShapeViewer::removeWorld
==============
*/
void HavokPhysicsShapeViewer::removeWorld(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  int v3; 
  __int64 v4; 
  HavokPhysicsShapeViewer::WorldData *v5; 

  v3 = 0;
  if ( this->m_worldDatas.m_size <= 0 )
  {
LABEL_6:
    v3 = -1;
  }
  else
  {
    v4 = 0i64;
    while ( 1 )
    {
      v5 = this->m_worldDatas.m_data[v4];
      if ( v5 )
      {
        if ( v5->m_world == world )
          break;
      }
      ++v3;
      if ( ++v4 >= this->m_worldDatas.m_size )
        goto LABEL_6;
    }
  }
  HavokPhysicsShapeViewer::removeWorld(this, v3);
}

/*
==============
HavokPhysicsShapeViewer::setConvexRadiusDisplayMode
==============
*/
void HavokPhysicsShapeViewer::setConvexRadiusDisplayMode(HavokPhysicsShapeViewer *this, hknpShape::ConvexRadiusDisplayMode radiusMode)
{
  this->m_radiusDisplayMode = radiusMode;
}

/*
==============
HavokPhysicsShapeViewer::step
==============
*/
void HavokPhysicsShapeViewer::step(HavokPhysicsShapeViewer *this, float deltaTime)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  HavokPhysicsShapeViewer *v12; 
  __int64 v13; 
  int *v14; 
  __int64 v15; 
  int *v16; 
  int v17; 
  hknpBodyId v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  _DWORD *v23; 
  hkMemoryAllocator *v24; 
  _DWORD *v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  HavokPhysicsShapeViewer *v38; 
  __int64 v39; 
  HavokPhysicsShapeViewer *v40; 
  __int64 v41; 
  int *v42; 
  HavokPhysicsShapeViewer *v43; 
  HavokPhysicsShapeViewer *v44; 
  HavokPhysicsShapeViewer *v45; 
  unsigned __int64 v46; 
  HavokPhysicsShapeViewer *v47; 
  unsigned __int64 v48; 
  HavokPhysicsShapeViewer *v49; 
  __int64 v50; 
  HavokPhysicsShapeViewer *v51; 
  HavokPhysicsShapeViewer *v52; 
  HavokPhysicsShapeViewer *v53; 
  char v54[4]; 
  char v55[4]; 
  hkMonitorStream *v56; 
  __int64 v57; 
  hkMonitorStream *v58; 
  int worldIndex; 
  _DWORD *array; 
  int arraya; 
  int arrayb; 

  v57 = -2i64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  v56 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtShapeViewer");
  v58 = v4;
  worldIndex = 0;
  if ( this->m_aabb.m_max.m_quad.m128_i32[2] > 0 )
  {
    v50 = 0i64;
    v5 = (unsigned __int64)this;
    v47 = this;
    v6 = (unsigned __int64)this;
    v45 = this;
    v7 = (unsigned __int64)this;
    v40 = this;
    v51 = this;
    v8 = (unsigned __int64)this;
    v49 = this;
    v9 = (unsigned __int64)this;
    v44 = this;
    v53 = this;
    v52 = this;
    v10 = (unsigned __int64)this;
    v38 = this;
    v11 = (unsigned __int64)this;
    v43 = this;
    v12 = this;
    v13 = 0i64;
    do
    {
      v14 = *(int **)(v13 + v12->m_aabb.m_max.m_quad.m128_u64[0]);
      v42 = v14;
      if ( v14 )
      {
        if ( v14[12] > 0 )
        {
          v15 = 0i64;
          v16 = v14;
          v17 = 0;
          do
          {
            v18.m_serialAndIndex = *(_DWORD *)(v15 + *((_QWORD *)v16 + 5));
            v19 = (__int64)&v16[4 * (*(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v16 + 32i64) + 104i64))(*(_QWORD *)v16 + 32i64, v18.m_serialAndIndex) + 68) & 1) + 2];
            array = (_DWORD *)v19;
            v20 = *(int *)(v19 + 8);
            v21 = 0;
            v22 = 0i64;
            if ( (int)v20 <= 0 )
              goto LABEL_14;
            v23 = *(_DWORD **)v19;
            while ( *v23 != v18.m_serialAndIndex )
            {
              ++v21;
              ++v22;
              ++v23;
              if ( v22 >= v20 )
                goto LABEL_14;
            }
            if ( v21 == -1 )
            {
LABEL_14:
              v24 = hkMemHeapAllocator();
              v25 = array;
              v26 = array[2];
              if ( v26 == (array[3] & 0x3FFFFFFF) )
              {
                hkArrayUtil::_reserveMore(v24, array, 4);
                v25 = array;
                v26 = array[2];
              }
              *(hknpBodyId *)(*(_QWORD *)v25 + 4i64 * v26) = v18;
              ++v25[2];
              HavokPhysicsShapeViewer::createDisplayObject((HavokPhysicsShapeViewer *)((char *)this - 24), worldIndex, v18, 1);
            }
            ++v17;
            v15 += 4i64;
          }
          while ( v17 < v16[12] );
          v8 = (unsigned __int64)v49;
          v9 = (unsigned __int64)v44;
          v10 = (unsigned __int64)v38;
          v11 = (unsigned __int64)v43;
          v7 = (unsigned __int64)v40;
          v14 = v42;
          v12 = this;
        }
        v14[12] = 0;
        arraya = 0;
        if ( v14[4] > 0 )
        {
          v27 = worldIndex & 0xF;
          v28 = 0i64;
          v41 = 0i64;
          v29 = (unsigned __int64)v51;
          do
          {
            v30 = *(_DWORD *)(v28 + *((_QWORD *)v42 + 1));
            v5 = v27 | v5 & 0xFFFFFFFFFFFFFFF0ui64;
            v7 &= ~1ui64;
            v8 ^= ((unsigned __int8)v8 ^ (unsigned __int8)LODWORD(this->m_processHandler)) & 0x7F;
            v29 = v29 & 0xFFFFFFFFFFFFFF00ui64 | ((unsigned __int64)v30 >> 24);
            v9 ^= ((unsigned int)v9 ^ v30 & 0xFFFFFF) & 0x3FFFF;
            v48 = ((unsigned __int64)hkServerObjectSerializer::getOrCreateTypeStreamId(*(hkServerObjectSerializer **)&this->m_inStream.m_ptr[1].m_memSizeAndFlags, &hknpVdbShapeDisplayMarker::typeData) << 38) + ((v5 & 0xF) << 34) + ((v7 & 1) << 33) + ((v8 & 0x7F) << 26) + ((unsigned __int64)(unsigned __int8)v29 << 18) + (v9 & 0x3FFFF);
            v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v42 + 32i64) + 104i64))(*(_QWORD *)v42 + 32i64, v30);
            (*((void (__fastcall **)(hkProcess_vtbl *, char *, unsigned __int64, __int64))this->~hkProcess + 12))(this->hknpShapeViewer::hknpViewer::hkProcess::__vftable, v54, v48, v31);
            ++arraya;
            v28 = v41 + 4;
            v41 += 4i64;
            v27 = worldIndex & 0xF;
          }
          while ( arraya < v42[4] );
          v51 = (HavokPhysicsShapeViewer *)v29;
          v40 = (HavokPhysicsShapeViewer *)v7;
          v44 = (HavokPhysicsShapeViewer *)v9;
          v49 = (HavokPhysicsShapeViewer *)v8;
          v47 = (HavokPhysicsShapeViewer *)v5;
          v6 = (unsigned __int64)v45;
          v10 = (unsigned __int64)v38;
          v11 = (unsigned __int64)v43;
          v14 = v42;
          v12 = this;
        }
        if ( LOBYTE(v12->m_tag) )
        {
          arrayb = 0;
          if ( v14[8] > 0 )
          {
            v32 = worldIndex & 0xF;
            v33 = 0i64;
            v39 = 0i64;
            v34 = (unsigned __int64)v53;
            v35 = (unsigned __int64)v52;
            do
            {
              v36 = *(_DWORD *)(v33 + *((_QWORD *)v42 + 3));
              v6 = v32 | v6 & 0xFFFFFFFFFFFFFFF0ui64;
              v34 &= ~1ui64;
              v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)LODWORD(this->m_processHandler)) & 0x7F;
              v35 = v35 & 0xFFFFFFFFFFFFFF00ui64 | ((unsigned __int64)v36 >> 24);
              v11 ^= ((unsigned int)v11 ^ v36 & 0xFFFFFF) & 0x3FFFF;
              v46 = ((unsigned __int64)hkServerObjectSerializer::getOrCreateTypeStreamId(*(hkServerObjectSerializer **)&this->m_inStream.m_ptr[1].m_memSizeAndFlags, &hknpVdbShapeDisplayMarker::typeData) << 38) + ((v6 & 0xF) << 34) + ((v34 & 1) << 33) + ((v10 & 0x7F) << 26) + ((unsigned __int64)(unsigned __int8)v35 << 18) + (v11 & 0x3FFFF);
              v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v42 + 32i64) + 104i64))(*(_QWORD *)v42 + 32i64, v36);
              (*((void (__fastcall **)(hkProcess_vtbl *, char *, unsigned __int64, __int64))this->~hkProcess + 12))(this->hknpShapeViewer::hknpViewer::hkProcess::__vftable, v55, v46, v37);
              ++arrayb;
              v33 = v39 + 4;
              v39 += 4i64;
              v32 = worldIndex & 0xF;
            }
            while ( arrayb < v42[8] );
            v52 = (HavokPhysicsShapeViewer *)v35;
            v53 = (HavokPhysicsShapeViewer *)v34;
            v43 = (HavokPhysicsShapeViewer *)v11;
            v38 = (HavokPhysicsShapeViewer *)v10;
            v45 = (HavokPhysicsShapeViewer *)v6;
            v5 = (unsigned __int64)v47;
            v8 = (unsigned __int64)v49;
            v9 = (unsigned __int64)v44;
            v7 = (unsigned __int64)v40;
            v12 = this;
          }
        }
      }
      ++worldIndex;
      v13 = v50 + 8;
      v50 += 8i64;
    }
    while ( worldIndex < v12->m_aabb.m_max.m_quad.m128_i32[2] );
    v4 = v56;
  }
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
}

/*
==============
HavokPhysicsShapeViewer::worldAddedCallback
==============
*/
void HavokPhysicsShapeViewer::worldAddedCallback(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  this->addWorld(this, world);
}

/*
==============
HavokPhysicsShapeViewer::worldRemovedCallback
==============
*/
void HavokPhysicsShapeViewer::worldRemovedCallback(HavokPhysicsShapeViewer *this, hknpWorld *world)
{
  int v3; 
  __int64 v4; 
  HavokPhysicsShapeViewer::WorldData *v5; 

  v3 = 0;
  if ( this->m_worldDatas.m_size > 0 )
  {
    v4 = 0i64;
    while ( 1 )
    {
      v5 = this->m_worldDatas.m_data[v4];
      if ( v5 )
      {
        if ( v5->m_world == world )
          break;
      }
      ++v3;
      if ( ++v4 >= this->m_worldDatas.m_size )
        return;
    }
    if ( v3 >= 0 )
      HavokPhysicsShapeViewer::removeWorld(this, v3);
  }
}

