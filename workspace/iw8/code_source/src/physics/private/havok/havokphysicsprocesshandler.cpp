/*
==============
HavokPhysicsProcessHandler::registerProcess
==============
*/

hkResult __fastcall HavokPhysicsProcessHandler::registerProcess(HavokPhysicsProcessHandler *this, const char *name, int tag, hkReflect::Var *processDefaultOptions, hkProcessRegisterFlags flagBits)
{
  return ?registerProcess@HavokPhysicsProcessHandler@@UEAA?AUhkResult@@PEBDHUVar@hkReflect@@UhkProcessRegisterFlags@@@Z(this, name, tag, processDefaultOptions, flagBits);
}

/*
==============
HavokPhysicsProcessHandler::selectProcess
==============
*/

hkResult __fastcall HavokPhysicsProcessHandler::selectProcess(HavokPhysicsProcessHandler *this, int id)
{
  return ?selectProcess@HavokPhysicsProcessHandler@@UEAA?AUhkResult@@H@Z(this, id);
}

/*
==============
HavokPhysicsProcessHandler::deleteProcess
==============
*/

hkResult __fastcall HavokPhysicsProcessHandler::deleteProcess(HavokPhysicsProcessHandler *this, int id)
{
  return ?deleteProcess@HavokPhysicsProcessHandler@@UEAA?AUhkResult@@H@Z(this, id);
}

/*
==============
HavokPhysicsProcessHandler::~HavokPhysicsProcessHandler
==============
*/

void __fastcall HavokPhysicsProcessHandler::~HavokPhysicsProcessHandler(HavokPhysicsProcessHandler *this)
{
  ??1HavokPhysicsProcessHandler@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsProcessHandler::getProcessName
==============
*/

const char *__fastcall HavokPhysicsProcessHandler::getProcessName(HavokPhysicsProcessHandler *this, int tag)
{
  return ?getProcessName@HavokPhysicsProcessHandler@@UEAAPEBDH@Z(this, tag);
}

/*
==============
HavokPhysicsProcessHandler::getProcessesByType
==============
*/

void __fastcall HavokPhysicsProcessHandler::getProcessesByType(HavokPhysicsProcessHandler *this, int type, hkArray<hkProcess *,hkContainerHeapAllocator> *processes)
{
  ?getProcessesByType@HavokPhysicsProcessHandler@@UEAAXHAEAV?$hkArray@PEAVhkProcess@@UhkContainerHeapAllocator@@@@@Z(this, type, processes);
}

/*
==============
HavokPhysicsProcessHandler::step
==============
*/

void __fastcall HavokPhysicsProcessHandler::step(HavokPhysicsProcessHandler *this, float deltaTime)
{
  ?step@HavokPhysicsProcessHandler@@QEAAXM@Z(this, deltaTime);
}

/*
==============
HavokPhysicsProcessHandler::getProcessByTag
==============
*/

hkProcess *__fastcall HavokPhysicsProcessHandler::getProcessByTag(HavokPhysicsProcessHandler *this, int tag)
{
  return ?getProcessByTag@HavokPhysicsProcessHandler@@UEAAPEAVhkProcess@@H@Z(this, tag);
}

/*
==============
HavokPhysicsProcessHandler::createProcess
==============
*/

hkResult __fastcall HavokPhysicsProcessHandler::createProcess(HavokPhysicsProcessHandler *this, int id, hkReflect::Var *processOptions)
{
  return ?createProcess@HavokPhysicsProcessHandler@@UEAA?AUhkResult@@HUVar@hkReflect@@@Z(this, id, processOptions);
}

/*
==============
HavokPhysicsProcessHandler::HavokPhysicsProcessHandler
==============
*/

void __fastcall HavokPhysicsProcessHandler::HavokPhysicsProcessHandler(HavokPhysicsProcessHandler *this, hclClothContext *clothContext, hkDebugDisplayHandler *displayHandler)
{
  ??0HavokPhysicsProcessHandler@@QEAA@PEAVhclClothContext@@PEAVhkDebugDisplayHandler@@@Z(this, clothContext, displayHandler);
}

/*
==============
HavokPhysicsProcessHandler::getProcessTag
==============
*/

int __fastcall HavokPhysicsProcessHandler::getProcessTag(HavokPhysicsProcessHandler *this, const char *name)
{
  return ?getProcessTag@HavokPhysicsProcessHandler@@UEAAHPEBD@Z(this, name);
}

/*
==============
HavokPhysicsProcessHandler::tweakProcess
==============
*/

hkResult __fastcall HavokPhysicsProcessHandler::tweakProcess(HavokPhysicsProcessHandler *this, int id, const hkHashMap<hkStringPtr,hkReflect::Var> *tweakedValues)
{
  return ?tweakProcess@HavokPhysicsProcessHandler@@UEAA?AUhkResult@@HAEBV?$hkHashMap@VhkStringPtr@@UVar@hkReflect@@@@@Z(this, id, tweakedValues);
}

/*
==============
HavokPhysicsProcessHandler::HavokPhysicsProcessHandler
==============
*/
void HavokPhysicsProcessHandler::HavokPhysicsProcessHandler(HavokPhysicsProcessHandler *this, hclClothContext *clothContext, hkDebugDisplayHandler *displayHandler)
{
  hkServerObjectSerializer *v4; 
  hkMemoryRouter *Value; 
  hkServerObjectSerializer *v6; 
  hkServerObjectSerializer *v7; 
  hkServerObjectSerializer *m_ptr; 

  this->__vftable = (HavokPhysicsProcessHandler_vtbl *)&HavokPhysicsProcessHandler::`vftable';
  this->m_clothContext = clothContext;
  this->m_displayHandler = displayHandler;
  v4 = NULL;
  this->m_vdbObjectSerializer.m_ptr = NULL;
  this->m_localDebugProcesses.m_data = NULL;
  this->m_localDebugProcesses.m_size = 0;
  this->m_localDebugProcesses.m_capacityAndFlags = 0x80000000;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v6 = (hkServerObjectSerializer *)Value->m_heap->blockAlloc(Value->m_heap, 192i64);
  if ( v6 )
  {
    hkServerObjectSerializer::hkServerObjectSerializer(v6, NULL, NULL, NULL);
    v4 = v7;
  }
  m_ptr = this->m_vdbObjectSerializer.m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
  this->m_vdbObjectSerializer.m_ptr = v4;
}

/*
==============
HavokPhysicsProcessHandler::~HavokPhysicsProcessHandler
==============
*/
void HavokPhysicsProcessHandler::~HavokPhysicsProcessHandler(HavokPhysicsProcessHandler *this)
{
  int v2; 
  __int64 v3; 
  hkProcess *v4; 
  hkMemoryAllocator *v5; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v7; 
  int v8; 
  hkServerObjectSerializer *m_ptr; 

  this->__vftable = (HavokPhysicsProcessHandler_vtbl *)&HavokPhysicsProcessHandler::`vftable';
  v2 = 0;
  if ( this->m_localDebugProcesses.m_size > 0 )
  {
    v3 = 0i64;
    do
    {
      v4 = this->m_localDebugProcesses.m_data[v3];
      if ( v4 )
        ((void (__fastcall *)(hkProcess *, __int64))v4->~hkProcess)(v4, 1i64);
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_localDebugProcesses.m_size );
  }
  v5 = hkMemHeapAllocator();
  this->m_localDebugProcesses.m_size = 0;
  m_capacityAndFlags = this->m_localDebugProcesses.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v5, this->m_localDebugProcesses.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_localDebugProcesses.m_data = NULL;
  this->m_localDebugProcesses.m_capacityAndFlags = 0x80000000;
  v7 = hkMemHeapAllocator();
  this->m_localDebugProcesses.m_size = 0;
  v8 = this->m_localDebugProcesses.m_capacityAndFlags;
  if ( v8 >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_localDebugProcesses.m_data, 8, v8 & 0x3FFFFFFF);
  this->m_localDebugProcesses.m_data = NULL;
  this->m_localDebugProcesses.m_capacityAndFlags = 0x80000000;
  m_ptr = this->m_vdbObjectSerializer.m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
  this->__vftable = (HavokPhysicsProcessHandler_vtbl *)hkProcessHandler::`vftable';
}

/*
==============
HavokPhysicsProcessHandler::createProcess
==============
*/
_DWORD *HavokPhysicsProcessHandler::createProcess(HavokPhysicsProcessHandler *this, _DWORD *id, hkReflect::Var *processOptions, __int64 a4)
{
  int v5; 
  hclClothContext *m_clothContext; 
  hkProcessContext *v9; 
  hkMemoryAllocator *v10; 
  int m_size; 
  hkProcessFactory *m_ptr; 
  hkReflect::Detail::Impl *v13; 
  hkProcess *v14; 
  hkDebugDisplayHandler *m_displayHandler; 
  hkReferencedObject *v16; 
  hkServerObjectSerializer *v17; 
  hkMemoryRouter *Value; 
  hkServerObjectHandler *v19; 
  hkServerObjectHandler *v20; 
  hkServerObjectHandler *v21; 
  hkReferencedObject *v22; 
  hkMemoryAllocator *v23; 
  int v24; 
  hkMemoryAllocator *v25; 
  hkArray<hkProcessContext *,hkContainerHeapAllocator> array; 
  hkReflect::Var v28; 

  v5 = (int)processOptions;
  if ( this->getProcessByTag(this, (unsigned int)processOptions) )
  {
    *id = 0;
    if ( (*(_BYTE *)(a4 + 16) & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFEui64));
  }
  else
  {
    array.m_data = NULL;
    array.m_size = 0;
    array.m_capacityAndFlags = 0x80000000;
    m_clothContext = this->m_clothContext;
    v9 = &m_clothContext->hkProcessContext;
    if ( !m_clothContext )
      v9 = NULL;
    v10 = hkMemHeapAllocator();
    m_size = array.m_size;
    if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v10, &array, 8);
      m_size = array.m_size;
    }
    array.m_data[m_size] = v9;
    ++array.m_size;
    m_ptr = hkProcessFactory::singleton.m_ptr;
    v28.m_addr = *(void **)a4;
    v28.m_type.m_type = *(const hkReflect::Type **)(a4 + 8);
    v13 = *(hkReflect::Detail::Impl **)(a4 + 16);
    v28.m_impl.m_ptrAndInt = v13;
    if ( ((unsigned __int8)v13 & 1) != 0 )
      hkReflect::Detail::Impl::addReference((hkReflect::Detail::Impl *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFEui64));
    v14 = hkProcessFactory::createProcess(m_ptr, v5, &array, &v28);
    if ( v14 )
    {
      m_displayHandler = this->m_displayHandler;
      if ( m_displayHandler )
        hkReferencedObject::addReference(this->m_displayHandler);
      v16 = v14->m_displayHandler.m_ptr;
      if ( v16 )
        hkReferencedObject::removeReference(v16);
      v14->m_displayHandler.m_ptr = m_displayHandler;
      v17 = this->m_vdbObjectSerializer.m_ptr;
      Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !Value )
        Value = hkMemoryRouter::s_fallbackRouter;
      v19 = (hkServerObjectHandler *)Value->m_heap->blockAlloc(Value->m_heap, 112i64);
      if ( v19 )
      {
        hkServerObjectHandler::hkServerObjectHandler(v19, v17);
        v21 = v20;
      }
      else
      {
        v21 = NULL;
      }
      v22 = v14->m_objectHandler.m_ptr;
      if ( v22 )
        hkReferencedObject::removeReference(v22);
      v14->m_objectHandler.m_ptr = v21;
      v14->m_processHandler = this;
      v14->init(v14);
      v23 = hkMemHeapAllocator();
      v24 = this->m_localDebugProcesses.m_size;
      if ( v24 == (this->m_localDebugProcesses.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v23, &this->m_localDebugProcesses, 8);
        v24 = this->m_localDebugProcesses.m_size;
      }
      this->m_localDebugProcesses.m_data[v24] = v14;
      ++this->m_localDebugProcesses.m_size;
    }
    *id = 0;
    v25 = hkMemHeapAllocator();
    array.m_size = 0;
    if ( array.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v25, array.m_data, 8, array.m_capacityAndFlags & 0x3FFFFFFF);
    array.m_data = NULL;
    array.m_capacityAndFlags = 0x80000000;
    if ( (*(_BYTE *)(a4 + 16) & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFEui64));
  }
  return id;
}

/*
==============
HavokPhysicsProcessHandler::deleteProcess
==============
*/
_DWORD *HavokPhysicsProcessHandler::deleteProcess(HavokPhysicsProcessHandler *this, _DWORD *id, unsigned int a3)
{
  hkProcess *v5; 
  hkProcess *v6; 
  int m_size; 
  __int64 v8; 
  hkProcess **m_data; 
  __int64 v10; 
  __int64 v11; 
  hkProcess **v12; 
  hkProcess *v13; 

  v5 = this->getProcessByTag(this, a3);
  v6 = v5;
  if ( v5 )
  {
    m_size = this->m_localDebugProcesses.m_size;
    v8 = 0i64;
    if ( m_size > 0 )
    {
      m_data = this->m_localDebugProcesses.m_data;
      while ( *m_data != v5 )
      {
        v8 = (unsigned int)(v8 + 1);
        ++m_data;
        if ( (int)v8 >= m_size )
          goto LABEL_13;
      }
      if ( (int)v8 < m_size )
      {
        v10 = (int)v8;
        v11 = v10 * 8;
        do
        {
          v12 = this->m_localDebugProcesses.m_data;
          v13 = *(hkProcess **)((char *)v12 + v11);
          if ( v13 == v6 )
          {
            this->m_localDebugProcesses.m_size = --m_size;
          }
          else
          {
            v12[v10] = v13;
            v8 = (unsigned int)(v8 + 1);
            m_size = this->m_localDebugProcesses.m_size;
            ++v10;
          }
          v11 += 8i64;
        }
        while ( (int)v8 < m_size );
      }
    }
LABEL_13:
    ((void (__fastcall *)(hkProcess *, __int64, __int64))v6->~hkProcess)(v6, 1i64, v8);
  }
  *id = 0;
  return id;
}

/*
==============
HavokPhysicsProcessHandler::getProcessByTag
==============
*/
hkProcess *HavokPhysicsProcessHandler::getProcessByTag(HavokPhysicsProcessHandler *this, int tag)
{
  int v2; 
  __int64 i; 

  v2 = 0;
  if ( this->m_localDebugProcesses.m_size <= 0 )
    return 0i64;
  for ( i = 0i64; this->m_localDebugProcesses.m_data[i]->getProcessTag(this->m_localDebugProcesses.m_data[i]) != tag; ++i )
  {
    if ( ++v2 >= this->m_localDebugProcesses.m_size )
      return 0i64;
  }
  return this->m_localDebugProcesses.m_data[v2];
}

/*
==============
HavokPhysicsProcessHandler::getProcessName
==============
*/
const char *HavokPhysicsProcessHandler::getProcessName(HavokPhysicsProcessHandler *this, int tag)
{
  return hkProcessFactory::getProcessName(hkProcessFactory::singleton.m_ptr, tag);
}

/*
==============
HavokPhysicsProcessHandler::getProcessTag
==============
*/
int HavokPhysicsProcessHandler::getProcessTag(HavokPhysicsProcessHandler *this, const char *name)
{
  return hkProcessFactory::getProcessTag(hkProcessFactory::singleton.m_ptr, name);
}

/*
==============
HavokPhysicsProcessHandler::getProcessesByType
==============
*/
void HavokPhysicsProcessHandler::getProcessesByType(HavokPhysicsProcessHandler *this, int type, hkArray<hkProcess *,hkContainerHeapAllocator> *processes)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsprocesshandler.cpp", 63, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
HavokPhysicsProcessHandler::registerProcess
==============
*/
const char *HavokPhysicsProcessHandler::registerProcess(HavokPhysicsProcessHandler *this, const char *name, int tag, hkReflect::Var *processDefaultOptions, __int64 flagBits)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsprocesshandler.cpp", 31, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false", -2i64) )
    __debugbreak();
  *(_DWORD *)name = -2147220992;
  if ( (*(_BYTE *)(flagBits + 16) & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)(*(_QWORD *)(flagBits + 16) & 0xFFFFFFFFFFFFFFFEui64));
  return name;
}

/*
==============
HavokPhysicsProcessHandler::selectProcess
==============
*/
__int64 HavokPhysicsProcessHandler::selectProcess(HavokPhysicsProcessHandler *this, __int64 id, __int64 a3)
{
  HavokPhysicsProcessHandler_vtbl *v4; 
  __int128 v8; 
  __int64 v9; 

  v4 = this->__vftable;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v9 = 0i64;
  v8 = _XMM0;
  ((void (__fastcall *)(HavokPhysicsProcessHandler *, __int64, __int64, __int128 *))v4->createProcess)(this, id, a3, &v8);
  return id;
}

/*
==============
HavokPhysicsProcessHandler::step
==============
*/
void HavokPhysicsProcessHandler::step(HavokPhysicsProcessHandler *this, float deltaTime)
{
  hkProcess **m_data; 

  m_data = this->m_localDebugProcesses.m_data;
  if ( m_data != &m_data[this->m_localDebugProcesses.m_size] )
  {
    do
    {
      ((void (__fastcall *)(hkProcess *))(*m_data)->step)(*m_data);
      ++m_data;
    }
    while ( m_data != &this->m_localDebugProcesses.m_data[this->m_localDebugProcesses.m_size] );
  }
}

/*
==============
HavokPhysicsProcessHandler::tweakProcess
==============
*/
_DWORD *HavokPhysicsProcessHandler::tweakProcess(HavokPhysicsProcessHandler *this, _DWORD *id, const hkHashMap<hkStringPtr,hkReflect::Var> *tweakedValues)
{
  _DWORD *result; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsprocesshandler.cpp", 112, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
  result = id;
  *id = -2147220992;
  return result;
}

