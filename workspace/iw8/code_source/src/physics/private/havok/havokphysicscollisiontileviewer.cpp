/*
==============
HavokPhysicsCollisionTileViewer::registerViewer
==============
*/

void __fastcall HavokPhysicsCollisionTileViewer::registerViewer(hkProcessFactory *factory)
{
  ?registerViewer@HavokPhysicsCollisionTileViewer@@SAXAEAVhkProcessFactory@@@Z(factory);
}

/*
==============
HavokPhysicsCollisionTileViewer::HavokPhysicsCollisionTileViewer
==============
*/

void __fastcall HavokPhysicsCollisionTileViewer::HavokPhysicsCollisionTileViewer(HavokPhysicsCollisionTileViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  ??0HavokPhysicsCollisionTileViewer@@IEAA@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(this, contexts);
}

/*
==============
HavokPhysicsCollisionTileViewer::create
==============
*/

hkProcess *__fastcall HavokPhysicsCollisionTileViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  return ?create@HavokPhysicsCollisionTileViewer@@SAPEAVhkProcess@@AEBV?$hkArray@PEAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z(contexts);
}

/*
==============
HavokPhysicsCollisionTileViewer::step
==============
*/

void __fastcall HavokPhysicsCollisionTileViewer::step(HavokPhysicsCollisionTileViewer *this, float deltaTime)
{
  ?step@HavokPhysicsCollisionTileViewer@@UEAAXM@Z(this, deltaTime);
}

/*
==============
HavokPhysicsCollisionTileViewer::~HavokPhysicsCollisionTileViewer
==============
*/

void __fastcall HavokPhysicsCollisionTileViewer::~HavokPhysicsCollisionTileViewer(HavokPhysicsCollisionTileViewer *this)
{
  ??1HavokPhysicsCollisionTileViewer@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsCollisionTileViewer::HavokPhysicsCollisionTileViewer
==============
*/
void HavokPhysicsCollisionTileViewer::HavokPhysicsCollisionTileViewer(HavokPhysicsCollisionTileViewer *this, const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
{
  __int64 m_size; 
  hkArrayView<hkProcessContext *> contextsa; 

  m_size = contexts->m_size;
  contextsa.m_begin = contexts->m_data;
  contextsa.m_end = &contextsa.m_begin[m_size];
  hknpViewer::hknpViewer(this, &contextsa);
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsCollisionTileViewer_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkProcess'};
}

/*
==============
HavokPhysicsCollisionTileViewer::~HavokPhysicsCollisionTileViewer
==============
*/
void HavokPhysicsCollisionTileViewer::~HavokPhysicsCollisionTileViewer(HavokPhysicsCollisionTileViewer *this)
{
  this->hknpViewer::hkReferencedObject::hkBaseObject::__vftable = (HavokPhysicsCollisionTileViewer_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkReferencedObject'};
  this->hknpViewer::hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkProcess'};
  hknpViewer::~hknpViewer(this);
}

/*
==============
HavokPhysicsCollisionTileViewer::create
==============
*/
hkProcess *HavokPhysicsCollisionTileViewer::create(const hkArray<hkProcessContext *,hkContainerHeapAllocator> *contexts)
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
    hknpViewer::hknpViewer(v3, &contextsa);
    v4->hkReferencedObject::hkBaseObject::__vftable = (hknpViewer_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkReferencedObject'};
    v4->hkProcess::__vftable = (hkProcess_vtbl *)&HavokPhysicsCollisionTileViewer::`vftable'{for `hkProcess'};
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
HavokPhysicsCollisionTileViewer::registerViewer
==============
*/
void HavokPhysicsCollisionTileViewer::registerViewer(hkProcessFactory *factory)
{
  HavokPhysicsCollisionTileViewer::s_tag = hkProcessFactory::registerProcess(factory, "IW Collision Tile Draw", HavokPhysicsCollisionTileViewer::create, 0);
}

/*
==============
HavokPhysicsCollisionTileViewer::step
==============
*/
void HavokPhysicsCollisionTileViewer::step(HavokPhysicsCollisionTileViewer *this, float deltaTime)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  int i; 
  int j; 
  char v19[4]; 
  char v20[4]; 
  char v21[4]; 
  char v22[4]; 
  __int64 v23; 
  hkMonitorStream *v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 

  v23 = -2i64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtIWCollisionTileViewer");
  v24 = v4;
  for ( i = 0; i < 32; ++i )
  {
    for ( j = 0; j < 32; ++j )
    {
      _XMM0 = 0i64;
      __asm
      {
        vinsertps xmm0, xmm0, xmm7, 0
        vinsertps xmm0, xmm0, xmm2, 10h
      }
      v26 = _XMM0;
      _XMM1 = 0i64;
      __asm
      {
        vinsertps xmm1, xmm1, xmm8, 0
        vinsertps xmm1, xmm1, xmm2, 10h
      }
      v28 = _XMM1;
      _XMM0 = 0i64;
      __asm
      {
        vinsertps xmm0, xmm0, xmm7, 0
        vinsertps xmm0, xmm0, xmm3, 10h
      }
      v25 = _XMM0;
      _XMM1 = 0i64;
      __asm
      {
        vinsertps xmm1, xmm1, xmm8, 0
        vinsertps xmm1, xmm1, xmm3, 10h
      }
      v27 = _XMM1;
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v19, 0i64, &v26, &v28, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v20, 0i64, &v25, &v27, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v21, 0i64, &v26, &v25, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v22, 0i64, &v28, &v27, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
    }
  }
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
}

