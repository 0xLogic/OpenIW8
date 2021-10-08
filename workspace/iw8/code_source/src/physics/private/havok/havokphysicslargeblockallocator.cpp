/*
==============
HavokPhysicsLargeBlockAllocator::blockAllocInternal
==============
*/

void *__fastcall HavokPhysicsLargeBlockAllocator::blockAllocInternal(HavokPhysicsLargeBlockAllocator *this, int bytes)
{
  return ?blockAllocInternal@HavokPhysicsLargeBlockAllocator@@IEAAPEAXH@Z(this, bytes);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator(HavokPhysicsLargeBlockAllocator *this, HavokPhysicsLargeBlockAllocator *parentAllocator)
{
  ??0HavokPhysicsLargeBlockAllocator@@QEAA@PEAV0@@Z(this, parentAllocator);
}

/*
==============
HavokPhysicsLargeBlockAllocator::blockFree
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::blockFree(HavokPhysicsLargeBlockAllocator *this, void *mem, int numBytes)
{
  ?blockFree@HavokPhysicsLargeBlockAllocator@@UEAAXPEAXH@Z(this, mem, numBytes);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::HavokPhysicsFixedMemoryBlockServer
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::HavokPhysicsFixedMemoryBlockServer(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, HavokPhysicsLargeBlockAllocator *parentAllocator, void *start, int size)
{
  ??0HavokPhysicsFixedMemoryBlockServer@HavokPhysicsLargeBlockAllocator@@QEAA@PEAV1@PEAXH@Z(this, parentAllocator, start, size);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::initBuffer
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::initBuffer(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, void *buffer, unsigned int size)
{
  ?initBuffer@HavokPhysicsFixedMemoryBlockServer@HavokPhysicsLargeBlockAllocator@@QEAAXPEAXI@Z(this, buffer, size);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::outOfMemory
==============
*/

void *__fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::outOfMemory(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, const char *msg)
{
  return ?outOfMemory@HavokPhysicsFixedMemoryBlockServer@HavokPhysicsLargeBlockAllocator@@IEAAPEAXPEBD@Z(this, msg);
}

/*
==============
HavokPhysicsLargeBlockAllocator::blockAlloc
==============
*/

void *__fastcall HavokPhysicsLargeBlockAllocator::blockAlloc(HavokPhysicsLargeBlockAllocator *this, int bytes)
{
  return ?blockAlloc@HavokPhysicsLargeBlockAllocator@@UEAAPEAXH@Z(this, bytes);
}

/*
==============
HavokPhysicsLargeBlockAllocator::outOfMemory
==============
*/

void *__fastcall HavokPhysicsLargeBlockAllocator::outOfMemory(HavokPhysicsLargeBlockAllocator *this, const char *msg)
{
  return ?outOfMemory@HavokPhysicsLargeBlockAllocator@@IEAAPEAXPEBD@Z(this, msg);
}

/*
==============
HavokPhysicsLargeBlockAllocator::releaseBuffer
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::releaseBuffer(HavokPhysicsLargeBlockAllocator *this)
{
  ?releaseBuffer@HavokPhysicsLargeBlockAllocator@@QEAAXXZ(this);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::bufAlloc
==============
*/

void *__fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::bufAlloc(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, int *size)
{
  return ?bufAlloc@HavokPhysicsFixedMemoryBlockServer@HavokPhysicsLargeBlockAllocator@@UEAAPEAXAEAH@Z(this, size);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator(HavokPhysicsLargeBlockAllocator *this, void *block, int size)
{
  ??0HavokPhysicsLargeBlockAllocator@@QEAA@PEAXH@Z(this, block, size);
}

/*
==============
HavokPhysicsLargeBlockAllocator::setBuffer
==============
*/

void __fastcall HavokPhysicsLargeBlockAllocator::setBuffer(HavokPhysicsLargeBlockAllocator *this, void *buffer, unsigned int size)
{
  ?setBuffer@HavokPhysicsLargeBlockAllocator@@QEAAXPEAXI@Z(this, buffer, size);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::HavokPhysicsFixedMemoryBlockServer
==============
*/
void HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::HavokPhysicsFixedMemoryBlockServer(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, HavokPhysicsLargeBlockAllocator *parentAllocator, void *start, int size)
{
  hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer(this, start, size);
  this->m_parentAllocator = parentAllocator;
  this->__vftable = (HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer_vtbl *)&HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::`vftable';
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator
==============
*/
void HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator(HavokPhysicsLargeBlockAllocator *this, HavokPhysicsLargeBlockAllocator *parentAllocator)
{
  hkLargeBlockAllocator::hkLargeBlockAllocator(this, NULL);
  this->hkLargeBlockAllocator::hkMemoryAllocator::__vftable = (HavokPhysicsLargeBlockAllocator_vtbl *)&HavokPhysicsLargeBlockAllocator::`vftable'{for `hkMemoryAllocator'};
  this->hkLargeBlockAllocator::hkMemoryAllocator::ExtendedInterface::__vftable = (hkMemoryAllocator::ExtendedInterface_vtbl *)&HavokPhysicsLargeBlockAllocator::`vftable'{for `hkMemoryAllocator::ExtendedInterface'};
  this->m_parentAllocator = parentAllocator;
  hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer(&this->m_iwFixedBlockServer, NULL, 0);
  this->m_iwFixedBlockServer.__vftable = (HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer_vtbl *)&HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::`vftable';
  this->m_iwFixedBlockServer.m_parentAllocator = this;
  this->m_server = &this->m_iwFixedBlockServer;
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator
==============
*/
void HavokPhysicsLargeBlockAllocator::HavokPhysicsLargeBlockAllocator(HavokPhysicsLargeBlockAllocator *this, void *block, int size)
{
  hkLargeBlockAllocator::hkLargeBlockAllocator(this, block, size);
  this->hkLargeBlockAllocator::hkMemoryAllocator::__vftable = (HavokPhysicsLargeBlockAllocator_vtbl *)&HavokPhysicsLargeBlockAllocator::`vftable'{for `hkMemoryAllocator'};
  this->hkLargeBlockAllocator::hkMemoryAllocator::ExtendedInterface::__vftable = (hkMemoryAllocator::ExtendedInterface_vtbl *)&HavokPhysicsLargeBlockAllocator::`vftable'{for `hkMemoryAllocator::ExtendedInterface'};
  this->m_parentAllocator = NULL;
  hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer(&this->m_iwFixedBlockServer, NULL, 0);
  this->m_iwFixedBlockServer.__vftable = (HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer_vtbl *)&HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::`vftable';
  this->m_iwFixedBlockServer.m_parentAllocator = this;
}

/*
==============
HavokPhysicsLargeBlockAllocator::blockAlloc
==============
*/
void *HavokPhysicsLargeBlockAllocator::blockAlloc(HavokPhysicsLargeBlockAllocator *this, int bytes)
{
  void *result; 
  HavokPhysicsLargeBlockAllocator *m_parentAllocator; 

  result = HavokPhysicsLargeBlockAllocator::blockAllocInternal(this, bytes);
  if ( !result )
  {
    m_parentAllocator = this->m_parentAllocator;
    if ( m_parentAllocator )
      return m_parentAllocator->blockAlloc(m_parentAllocator, bytes);
  }
  return result;
}

/*
==============
HavokPhysicsLargeBlockAllocator::blockAllocInternal
==============
*/
void *HavokPhysicsLargeBlockAllocator::blockAllocInternal(HavokPhysicsLargeBlockAllocator *this, int bytes)
{
  unsigned __int64 v3; 
  void *v4; 
  hkLargeBlockAllocator::MemPage *p_m_pages; 
  hkLargeBlockAllocator::MemPage *v6; 
  unsigned __int64 v7; 
  hkLargeBlockAllocator::LimitedMemoryListener *v8; 
  hkBool *v9; 
  hkMemoryAllocator *m_server; 
  unsigned __int64 v11; 
  hkLargeBlockAllocator::LimitedMemoryListener *m_limitedListener; 
  hkMemoryAllocator *v13; 
  __int64 v14; 
  hkLargeBlockAllocator::MemPage *i; 
  unsigned __int64 *m_next; 
  __int64 v17; 
  hkLargeBlockAllocator::MemPage *v18; 
  hkBool result; 
  int v20; 

  v3 = (bytes + 31i64) & 0xFFFFFFFFFFFFFFF0ui64;
  if ( v3 < 0x100 )
    v3 = 256i64;
  v4 = hkLargeBlockAllocator::_alloc(this, v3);
  if ( v4 )
    return v4;
  p_m_pages = &this->m_pages;
  if ( !this->m_fixedBlockServer.m_start || (v6 = this->m_pages.m_next, v6 == p_m_pages) )
  {
    m_server = this->m_server;
    v20 = v3 + 328;
    v11 = (unsigned __int64)m_server->bufAlloc(m_server, &v20);
    if ( !v11 )
    {
      m_limitedListener = this->m_limitedListener;
      if ( !m_limitedListener )
      {
LABEL_21:
        if ( !this->m_parentAllocator )
          hkMemoryAllocator::outOfMemory(this, NULL);
        return 0i64;
      }
      m_limitedListener->cannotAllocate(m_limitedListener, v3);
      v4 = hkLargeBlockAllocator::_alloc(this, v3);
      if ( v4 )
        return v4;
      v13 = this->m_server;
      v20 = v3 + 328;
      v11 = (unsigned __int64)v13->bufAlloc(v13, &v20);
      if ( !v11 )
      {
        this->m_limitedListener->allocationFailure(this->m_limitedListener, v3);
        goto LABEL_21;
      }
    }
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 20) = v20;
    *(_QWORD *)(v11 + 24) = v11 + 40;
    v14 = v20;
    *(_QWORD *)(v11 + 24) = (v11 + 55) & 0xFFFFFFFFFFFFFFF0ui64;
    *(_QWORD *)(v11 + 32) = (v14 + v11) & 0xFFFFFFFFFFFFFFF0ui64;
    for ( i = p_m_pages->m_prev; i != p_m_pages; i = i->m_prev )
    {
      if ( (unsigned __int64)i < v11 )
        break;
    }
    *(_QWORD *)v11 = i;
    m_next = (unsigned __int64 *)i->m_next;
    *(_QWORD *)(v11 + 8) = m_next;
    *m_next = v11;
    i->m_next = (hkLargeBlockAllocator::MemPage *)v11;
    if ( this->m_top != &this->m_zeroChunk )
    {
      hkLargeBlockAllocator::_makeTopValid(this);
      hkLargeBlockAllocator::_insertLargeChunk(this, (hkLargeBlockAllocator::MemTreeChunk *)this->m_top, this->m_top->head & 0xFFFFFFFFFFFFFFFCui64);
    }
    this->m_topsize = *(_QWORD *)(v11 + 32) - *(_QWORD *)(v11 + 24) - 16i64;
    this->m_top = *(hkLargeBlockAllocator::MemChunk **)(v11 + 24);
    hkLargeBlockAllocator::_makeTopValid(this);
    v17 = *(_QWORD *)(v11 + 32) - 16i64;
    *(_QWORD *)(v17 + 8) = 2i64;
    v18 = *(hkLargeBlockAllocator::MemPage **)(v11 + 8);
    if ( v18 != p_m_pages )
      *(_QWORD *)(v17 + 8) = (__int64)&v18->m_start[-v17] | 2;
    if ( *(hkLargeBlockAllocator::MemPage **)v11 != p_m_pages )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 32i64) - 16i64 + 8) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 32i64) - 16i64 + 8) & 3 | ((unsigned __int64)&this->m_top[1] - *(_QWORD *)(*(_QWORD *)v11 + 32i64));
    return hkLargeBlockAllocator::_allocFromTop(this, v3);
  }
  if ( hkLargeBlockAllocator::_resizeSingleBlockServerPage(this, &result, v3 + v6->m_size)->m_bool )
  {
    v7 = v3;
    return hkLargeBlockAllocator::_allocFromTop(this, v7);
  }
  v8 = this->m_limitedListener;
  if ( v8 )
  {
    v8->cannotAllocate(v8, v3);
    v4 = hkLargeBlockAllocator::_alloc(this, v3);
    if ( v4 )
      return v4;
    v9 = hkLargeBlockAllocator::_resizeSingleBlockServerPage(this, &result, v3 + v6->m_size);
    v7 = v3;
    if ( v9->m_bool )
      return hkLargeBlockAllocator::_allocFromTop(this, v7);
    this->m_limitedListener->allocationFailure(this->m_limitedListener, v3);
  }
  if ( !this->m_parentAllocator )
    hkMemoryAllocator::outOfMemory(this, NULL);
  return 0i64;
}

/*
==============
HavokPhysicsLargeBlockAllocator::blockFree
==============
*/
void HavokPhysicsLargeBlockAllocator::blockFree(HavokPhysicsLargeBlockAllocator *this, void *mem, __int64 numBytes)
{
  HavokPhysicsLargeBlockAllocator *m_parentAllocator; 

  m_parentAllocator = this->m_parentAllocator;
  if ( (mem < this->m_iwFixedBlockServer.m_start || mem >= this->m_iwFixedBlockServer.m_end) && m_parentAllocator )
    m_parentAllocator->blockFree(this->m_parentAllocator, mem, numBytes);
  else
    hkLargeBlockAllocator::blockFree(this, mem, numBytes);
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::bufAlloc
==============
*/
char *HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::bufAlloc(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, int *size)
{
  char *m_start; 
  HavokPhysicsLargeBlockAllocator *m_parentAllocator; 
  int v6; 

  m_start = this->m_start;
  if ( this->m_break != m_start || (v6 = LODWORD(this->m_limit) - (_DWORD)m_start, v6 < *size) )
  {
    m_parentAllocator = this->m_parentAllocator;
    if ( m_parentAllocator )
    {
      if ( m_parentAllocator->m_parentAllocator )
        return 0i64;
      this = (HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *)this->m_parentAllocator;
    }
    hkMemoryAllocator::outOfMemory(this, NULL);
  }
  this->m_break = &m_start[v6];
  *size = v6;
  return this->m_start;
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::initBuffer
==============
*/
void HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::initBuffer(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, void *buffer, unsigned int size)
{
  __int64 v3; 
  char *m_start; 
  char *v7; 
  char *v8; 

  v3 = size;
  if ( buffer )
  {
    m_start = this->m_start;
    if ( m_start )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicslargeblockallocator.cpp", 130, ASSERT_TYPE_ASSERT, "( m_start ) == ( nullptr )", "%s == %s\n\t%p, %p", "m_start", "nullptr", m_start, NULL) )
        __debugbreak();
    }
  }
  v7 = (char *)(((unsigned __int64)buffer + 15) & 0xFFFFFFFFFFFFFFF0ui64);
  v8 = (char *)(((unsigned __int64)buffer + v3) & 0xFFFFFFFFFFFFFFF0ui64);
  this->m_start = v7;
  this->m_end = v8;
  this->m_limit = v8;
  this->m_break = v7;
}

/*
==============
HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::outOfMemory
==============
*/
void *HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::outOfMemory(HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer *this, const char *msg)
{
  hkMemoryAllocator *m_parentAllocator; 

  m_parentAllocator = this->m_parentAllocator;
  if ( !m_parentAllocator )
  {
    m_parentAllocator = this;
LABEL_5:
    hkMemoryAllocator::outOfMemory(m_parentAllocator, msg);
  }
  if ( !m_parentAllocator[54].__vftable )
    goto LABEL_5;
  return 0i64;
}

/*
==============
HavokPhysicsLargeBlockAllocator::outOfMemory
==============
*/
void *HavokPhysicsLargeBlockAllocator::outOfMemory(HavokPhysicsLargeBlockAllocator *this, const char *msg)
{
  if ( !this->m_parentAllocator )
    hkMemoryAllocator::outOfMemory(this, msg);
  return 0i64;
}

/*
==============
HavokPhysicsLargeBlockAllocator::releaseBuffer
==============
*/
void HavokPhysicsLargeBlockAllocator::releaseBuffer(HavokPhysicsLargeBlockAllocator *this)
{
  int v2; 

  if ( !this->m_parentAllocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicslargeblockallocator.cpp", 82, ASSERT_TYPE_ASSERT, "(m_parentAllocator)", (const char *)&queryFormat, "m_parentAllocator") )
    __debugbreak();
  this->garbageCollect(&this->hkMemoryAllocator::ExtendedInterface);
  if ( hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(this) )
  {
    v2 = hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicslargeblockallocator.cpp", 86, ASSERT_TYPE_ASSERT, "( calculateMemoryUsedByThisAllocator() ) == ( 0 )", "%s == %s\n\t%u, %u", "calculateMemoryUsedByThisAllocator()", "0", v2, 0i64) )
      __debugbreak();
  }
  this->m_iwFixedBlockServer.m_start = NULL;
  this->m_iwFixedBlockServer.m_end = NULL;
  this->m_iwFixedBlockServer.m_limit = NULL;
  this->m_iwFixedBlockServer.m_break = NULL;
}

/*
==============
HavokPhysicsLargeBlockAllocator::setBuffer
==============
*/
void HavokPhysicsLargeBlockAllocator::setBuffer(HavokPhysicsLargeBlockAllocator *this, void *buffer, unsigned int size)
{
  if ( !this->m_parentAllocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicslargeblockallocator.cpp", 72, ASSERT_TYPE_ASSERT, "(m_parentAllocator)", (const char *)&queryFormat, "m_parentAllocator") )
    __debugbreak();
  HavokPhysicsLargeBlockAllocator::HavokPhysicsFixedMemoryBlockServer::initBuffer(&this->m_iwFixedBlockServer, buffer, size);
}

