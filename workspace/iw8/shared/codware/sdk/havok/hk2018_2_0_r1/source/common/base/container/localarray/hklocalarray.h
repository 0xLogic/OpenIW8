/*
==============
hkLocalArray<hkMassElement>::~hkLocalArray<hkMassElement>
==============
*/

void __fastcall hkLocalArray<hkMassElement>::~hkLocalArray<hkMassElement>(hkLocalArray<hkMassElement> *this)
{
  ??1?$hkLocalArray@UhkMassElement@@@@QEAA@XZ(this);
}

/*
==============
hkLocalArray<hknpBodyId>::~hkLocalArray<hknpBodyId>
==============
*/

void __fastcall hkLocalArray<hknpBodyId>::~hkLocalArray<hknpBodyId>(hkLocalArray<hknpBodyId> *this)
{
  ??1?$hkLocalArray@UhknpBodyId@@@@QEAA@XZ(this);
}

/*
==============
hkLocalArray<hkAabb>::~hkLocalArray<hkAabb>
==============
*/

void __fastcall hkLocalArray<hkAabb>::~hkLocalArray<hkAabb>(hkLocalArray<hkAabb> *this)
{
  ??1?$hkLocalArray@VhkAabb@@@@QEAA@XZ(this);
}

/*
==============
hkLocalArray<hknpBodyId>::~hkLocalArray<hknpBodyId>
==============
*/
void hkLocalArray<hknpBodyId>::~hkLocalArray<hknpBodyId>(hkLocalArray<hknpBodyId> *this)
{
  hknpBodyId *m_localMemory; 
  int m_initialCapacity; 
  hkMemoryRouter *Value; 
  signed int v5; 
  int v6; 
  hkMemoryAllocator *v7; 
  int m_capacityAndFlags; 

  m_localMemory = this->m_localMemory;
  if ( m_localMemory == this->m_data )
    this->m_size = 0;
  m_initialCapacity = this->m_initialCapacity;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v5 = (4 * m_initialCapacity + 127) & 0xFFFFFF80;
  v6 = (v5 + 15) & 0xFFFFFFF0;
  if ( v5 > Value->m_stack.m_slabSize || (char *)m_localMemory + v6 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_localMemory )
    hkLifoAllocator::slowBlockFree(&Value->m_stack, m_localMemory, v6);
  else
    Value->m_stack.m_cur = m_localMemory;
  v7 = hkMemHeapAllocator();
  this->m_size = 0;
  m_capacityAndFlags = this->m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_data = NULL;
  this->m_capacityAndFlags = 0x80000000;
}

/*
==============
hkLocalArray<hkMassElement>::~hkLocalArray<hkMassElement>
==============
*/
void hkLocalArray<hkMassElement>::~hkLocalArray<hkMassElement>(hkLocalArray<hkMassElement> *this)
{
  hkMassElement *m_localMemory; 
  int m_initialCapacity; 
  hkMemoryRouter *Value; 
  signed int v5; 
  int v6; 
  hkMemoryAllocator *v7; 
  int m_capacityAndFlags; 

  m_localMemory = this->m_localMemory;
  if ( m_localMemory == this->m_data )
    this->m_size = 0;
  m_initialCapacity = this->m_initialCapacity;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v5 = (144 * m_initialCapacity + 127) & 0xFFFFFF80;
  v6 = (v5 + 15) & 0xFFFFFFF0;
  if ( v5 > Value->m_stack.m_slabSize || (char *)m_localMemory + v6 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_localMemory )
    hkLifoAllocator::slowBlockFree(&Value->m_stack, m_localMemory, v6);
  else
    Value->m_stack.m_cur = m_localMemory;
  v7 = hkMemHeapAllocator();
  this->m_size = 0;
  m_capacityAndFlags = this->m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_data, 144, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_data = NULL;
  this->m_capacityAndFlags = 0x80000000;
}

/*
==============
hkLocalArray<hkAabb>::~hkLocalArray<hkAabb>
==============
*/
void hkLocalArray<hkAabb>::~hkLocalArray<hkAabb>(hkLocalArray<hkAabb> *this)
{
  hkAabb *m_localMemory; 
  int m_initialCapacity; 
  hkMemoryRouter *Value; 
  signed int v5; 
  int v6; 
  hkMemoryAllocator *v7; 
  int m_capacityAndFlags; 

  m_localMemory = this->m_localMemory;
  if ( m_localMemory == this->m_data )
    this->m_size = 0;
  m_initialCapacity = this->m_initialCapacity;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v5 = (32 * m_initialCapacity + 127) & 0xFFFFFF80;
  v6 = (v5 + 15) & 0xFFFFFFF0;
  if ( v5 > Value->m_stack.m_slabSize || (char *)m_localMemory + v6 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_localMemory )
    hkLifoAllocator::slowBlockFree(&Value->m_stack, m_localMemory, v6);
  else
    Value->m_stack.m_cur = m_localMemory;
  v7 = hkMemHeapAllocator();
  this->m_size = 0;
  m_capacityAndFlags = this->m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_data, 32, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_data = NULL;
  this->m_capacityAndFlags = 0x80000000;
}

