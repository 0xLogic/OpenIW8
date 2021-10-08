/*
==============
hknpStaticBodyResetUtil::~hknpStaticBodyResetUtil
==============
*/

void __fastcall hknpStaticBodyResetUtil::~hknpStaticBodyResetUtil(hknpStaticBodyResetUtil *this)
{
  ??1hknpStaticBodyResetUtil@@QEAA@XZ(this);
}

/*
==============
hknpStaticBodyResetUtil::~hknpStaticBodyResetUtil
==============
*/
void hknpStaticBodyResetUtil::~hknpStaticBodyResetUtil(hknpStaticBodyResetUtil *this)
{
  __int64 m_size; 
  int v3; 
  __int64 v4; 
  hkMemoryAllocator *v9; 
  int m_capacityAndFlags; 

  m_size = (unsigned int)this->m_batchedIds.m_size;
  if ( (_DWORD)m_size )
  {
    v3 = 0;
    if ( (int)m_size > 0 )
    {
      v4 = 0i64;
      do
      {
        _RCX = this->m_batchedIds.m_data[v4].m_serialAndIndex & 0xFFFFFF;
        _RAX = &this->m_bodies.m_begin[_RCX];
        *(_QWORD *)&_RAX->m_collisionControl.m_storage = 0i64;
        __asm { vmovups xmm0, xmmword ptr [rax+50h] }
        _RCX *= 2i64;
        _RAX = this->m_previousAabbs.m_begin;
        __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
        ++v3;
        ++v4;
        m_size = (unsigned int)this->m_batchedIds.m_size;
      }
      while ( v3 < (int)m_size );
    }
    ((void (__fastcall *)(hknpBroadPhase *, hknpBodyId *, __int64, __int64, __int64))this->m_broadphase->markBodiesDirty)(this->m_broadphase, this->m_batchedIds.m_data, m_size, 4i64, -2i64);
    hkMemHeapAllocator();
    this->m_batchedIds.m_size = 0;
  }
  v9 = hkMemHeapAllocator();
  this->m_batchedIds.m_size = 0;
  m_capacityAndFlags = this->m_batchedIds.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v9, this->m_batchedIds.m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_batchedIds.m_data = NULL;
  this->m_batchedIds.m_capacityAndFlags = 0x80000000;
}

