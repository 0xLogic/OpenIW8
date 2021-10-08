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
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+38h+contexts.m_begin]
    vmovdqa xmmword ptr [rsp+38h+contexts.m_begin], xmm0
  }
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+contexts.m_begin]
      vmovdqa xmmword ptr [rsp+48h+contexts.m_begin], xmm0
    }
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
  hkMonitorStream *v10; 
  int v11; 
  int v14; 
  char v40[4]; 
  char v41[4]; 
  char v42[4]; 
  char v43[4]; 
  __int64 v44; 
  hkMonitorStream *v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtIWCollisionTileViewer");
  v45 = v10;
  v11 = 0;
  __asm
  {
    vmovss  xmm9, cs:__real@41800000
    vmovss  xmm6, cs:__real@43800000
  }
  do
  {
    v14 = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vsubss  xmm1, xmm0, xmm9
      vmulss  xmm7, xmm1, xmm6
      vaddss  xmm8, xmm7, xmm6
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vsubss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm6
        vxorps  xmm0, xmm0, xmm0
        vinsertps xmm0, xmm0, xmm7, 0
        vinsertps xmm0, xmm0, xmm2, 10h
        vmovups [rsp+0F8h+var_88], xmm0
        vxorps  xmm1, xmm1, xmm1
        vinsertps xmm1, xmm1, xmm8, 0
        vinsertps xmm1, xmm1, xmm2, 10h
        vmovups [rsp+0F8h+var_68], xmm1
        vxorps  xmm0, xmm0, xmm0
        vinsertps xmm0, xmm0, xmm7, 0
        vinsertps xmm0, xmm0, xmm3, 10h
        vmovups [rsp+0F8h+var_98], xmm0
        vxorps  xmm1, xmm1, xmm1
        vinsertps xmm1, xmm1, xmm8, 0
        vinsertps xmm1, xmm1, xmm3, 10h
        vmovups [rsp+0F8h+var_78], xmm1
      }
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v40, 0i64, &v47, &v49, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v41, 0i64, &v46, &v48, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v42, 0i64, &v47, &v46, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      (*((void (__fastcall **)(hkProcess_vtbl *, char *, _QWORD, __int128 *, __int128 *, const unsigned int, int))this->~hkProcess + 22))(this->hknpViewer::hkProcess::__vftable, v43, 0i64, &v49, &v48, hkColor::RED, HavokPhysicsCollisionTileViewer::s_tag);
      ++v14;
    }
    while ( v14 < 32 );
    ++v11;
  }
  while ( v11 < 32 );
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

