/*
==============
HavokPhysicsDebugDrawViewer::step
==============
*/

void __fastcall HavokPhysicsDebugDrawViewer::step(HavokPhysicsDebugDrawViewer *this, float deltaTime)
{
  ?step@HavokPhysicsDebugDrawViewer@@UEAAXM@Z(this, deltaTime);
}

/*
==============
HavokPhysicsDebugDrawViewer::registerViewer
==============
*/

void __fastcall HavokPhysicsDebugDrawViewer::registerViewer(hkProcessFactory *factory)
{
  ?registerViewer@HavokPhysicsDebugDrawViewer@@SAXAEAVhkProcessFactory@@@Z(factory);
}

/*
==============
HavokPhysicsDebugDrawViewer::HavokPhysicsDebugDrawViewer
==============
*/

void __fastcall HavokPhysicsDebugDrawViewer::HavokPhysicsDebugDrawViewer(HavokPhysicsDebugDrawViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  ??0HavokPhysicsDebugDrawViewer@@IEAA@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(this, contexts);
}

/*
==============
HavokPhysicsDebugDrawViewer::~HavokPhysicsDebugDrawViewer
==============
*/

void __fastcall HavokPhysicsDebugDrawViewer::~HavokPhysicsDebugDrawViewer(HavokPhysicsDebugDrawViewer *this)
{
  ??1HavokPhysicsDebugDrawViewer@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsDebugDrawViewer::create
==============
*/

hkProcess *__fastcall HavokPhysicsDebugDrawViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  return ?create@HavokPhysicsDebugDrawViewer@@SAPEAVhkProcess@@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(contexts);
}

/*
==============
HavokPhysicsDebugDrawViewer::HavokPhysicsDebugDrawViewer
==============
*/
void HavokPhysicsDebugDrawViewer::HavokPhysicsDebugDrawViewer(HavokPhysicsDebugDrawViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  __int64 m_size; 
  hkArrayView<hkProcessContext *> contextsa; 

  m_size = contexts->m_size;
  contextsa.m_begin = contexts->m_data;
  contextsa.m_end = &contextsa.m_begin[m_size];
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+38h+contexts.m_begin]
    vmovdqa xmmword ptr [rsp+38h+contexts.m_begin], xmm0
  }
  hknpViewer::hknpViewer(this, &contextsa);
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsDebugDrawViewer_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkProcess'};
}

/*
==============
HavokPhysicsDebugDrawViewer::~HavokPhysicsDebugDrawViewer
==============
*/
void HavokPhysicsDebugDrawViewer::~HavokPhysicsDebugDrawViewer(HavokPhysicsDebugDrawViewer *this)
{
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsDebugDrawViewer_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkProcess'};
  hknpViewer::~hknpViewer(this);
}

/*
==============
HavokPhysicsDebugDrawViewer::create
==============
*/
hkProcess *HavokPhysicsDebugDrawViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  hkMemoryRouter *Value; 
  hknpViewer *v3; 
  hknpViewer *v4; 
  __int64 m_size; 
  hkProcess *result; 
  hkArrayView<hkProcessContext *> contextsa; 

  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (hknpViewer *)Value->m_heap->blockAlloc(Value->m_heap, 104i64);
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
    hknpViewer::hknpViewer(v3, &contextsa);
    v4->hkReferencedObject::hkBaseObject::__vftable = (hknpViewer_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkReferencedObject'};
    v4->hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsDebugDrawViewer::`vftable'{for `hkProcess'};
  }
  else
  {
    v4 = NULL;
  }
  result = &v4->hkProcess;
  if ( !v4 )
    return 0i64;
  return result;
}

/*
==============
HavokPhysicsDebugDrawViewer::registerViewer
==============
*/
void HavokPhysicsDebugDrawViewer::registerViewer(hkProcessFactory *factory)
{
  HavokPhysicsDebugDrawViewer::s_tag = hkProcessFactory::registerProcess(factory, "IW World-Debug Draw", HavokPhysicsDebugDrawViewer::create, 0);
}

/*
==============
HavokPhysicsDebugDrawViewer::step
==============
*/
void HavokPhysicsDebugDrawViewer::step(HavokPhysicsDebugDrawViewer *this, float deltaTime)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  hkServerFileHandler *m_ptr; 
  int v6; 
  int m_bag; 
  hkServerFileHandler_vtbl *v8; 
  Physics_WorldId WorldId; 
  hkArray<HavokPhysicsDebugLine,hkContainerHeapAllocator> *DebugLines; 
  HavokPhysicsDebugLine *i; 
  int v12; 
  char v13; 
  hkMonitorStream *v14; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtIWDebugDrawViewer");
  v14 = v4;
  m_ptr = this->m_fileHandler.m_ptr;
  v6 = 0;
  m_bag = (int)m_ptr[1].m_propertyBag.m_bag;
  if ( m_bag > 0 )
  {
    v8 = m_ptr[1].__vftable;
    while ( !*((_QWORD *)&v8->getExactType + 2 * v6) )
    {
      if ( ++v6 >= m_bag )
        goto LABEL_20;
    }
    while ( v6 != -1 )
    {
      WorldId = HavokPhysics_GetWorldId(*((const hknpWorld **)&v8->getExactType + 2 * v6));
      DebugLines = HavokPhysics_GetDebugLines(WorldId);
      if ( !DebugLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdebugdrawviewer.cpp", 58, ASSERT_TYPE_ASSERT, "(debugLines)", (const char *)&queryFormat, "debugLines") )
        __debugbreak();
      for ( i = DebugLines->m_data; i != &DebugLines->m_data[DebugLines->m_size]; ++i )
        (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, HavokPhysicsDebugLine *, hkVector4f *, unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, &v13, 0i64, i, &i->end, i->color, HavokPhysicsDebugDrawViewer::s_tag);
      ++v6;
      v12 = (int)m_ptr[1].m_propertyBag.m_bag;
      if ( v6 >= v12 )
        break;
      v8 = m_ptr[1].__vftable;
      while ( !*((_QWORD *)&v8->getExactType + 2 * v6) )
      {
        if ( ++v6 >= v12 )
          goto LABEL_20;
      }
    }
  }
LABEL_20:
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
}

