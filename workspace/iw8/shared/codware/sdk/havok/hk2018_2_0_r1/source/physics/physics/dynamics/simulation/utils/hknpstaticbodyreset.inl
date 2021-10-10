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
  __int64 v5; 
  hknpBody *v6; 
  hkMemoryAllocator *v7; 
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
        v5 = this->m_batchedIds.m_data[v4].m_serialAndIndex & 0xFFFFFF;
        v6 = &this->m_bodies.m_begin[v5];
        *(_QWORD *)&v6->m_collisionControl.m_storage = 0i64;
        this->m_previousAabbs.m_begin[v5] = v6->m_aabb;
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
  v7 = hkMemHeapAllocator();
  this->m_batchedIds.m_size = 0;
  m_capacityAndFlags = this->m_batchedIds.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_batchedIds.m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_batchedIds.m_data = NULL;
  this->m_batchedIds.m_capacityAndFlags = 0x80000000;
}

