/*
==============
hkLocalBuffer<hkAabb16ext>::~hkLocalBuffer<hkAabb16ext>
==============
*/

void __fastcall hkLocalBuffer<hkAabb16ext>::~hkLocalBuffer<hkAabb16ext>(hkLocalBuffer<hkAabb16ext> *this)
{
  ??1?$hkLocalBuffer@UhkAabb16ext@@@@QEAA@XZ(this);
}

/*
==============
hkLocalBuffer<hkVector4f>::~hkLocalBuffer<hkVector4f>
==============
*/

void __fastcall hkLocalBuffer<hkVector4f>::~hkLocalBuffer<hkVector4f>(hkLocalBuffer<hkVector4f> *this)
{
  ??1?$hkLocalBuffer@VhkVector4f@@@@QEAA@XZ(this);
}

/*
==============
hkLocalBuffer<hkAabb16ext>::~hkLocalBuffer<hkAabb16ext>
==============
*/
void hkLocalBuffer<hkAabb16ext>::~hkLocalBuffer<hkAabb16ext>(hkLocalBuffer<hkAabb16ext> *this)
{
  int m_size; 
  hkAabb16ext *m_data; 
  hkMemoryRouter *Value; 
  signed int v4; 
  int v5; 

  m_size = this->m_size;
  m_data = this->m_data;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v4 = (16 * m_size + 127) & 0xFFFFFF80;
  v5 = (v4 + 15) & 0xFFFFFFF0;
  if ( v4 > Value->m_stack.m_slabSize || (char *)m_data + v5 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_data )
    hkLifoAllocator::slowBlockFree(&Value->m_stack, m_data, v5);
  else
    Value->m_stack.m_cur = m_data;
}

/*
==============
hkLocalBuffer<hkVector4f>::~hkLocalBuffer<hkVector4f>
==============
*/
void hkLocalBuffer<hkVector4f>::~hkLocalBuffer<hkVector4f>(hkLocalBuffer<hkVector4f> *this)
{
  int m_size; 
  hkVector4f *m_data; 
  hkMemoryRouter *Value; 
  signed int v4; 
  int v5; 

  m_size = this->m_size;
  m_data = this->m_data;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v4 = (16 * m_size + 127) & 0xFFFFFF80;
  v5 = (v4 + 15) & 0xFFFFFFF0;
  if ( v4 > Value->m_stack.m_slabSize || (char *)m_data + v5 != Value->m_stack.m_cur || Value->m_stack.m_firstNonLifoEnd == m_data )
    hkLifoAllocator::slowBlockFree(&Value->m_stack, m_data, v5);
  else
    Value->m_stack.m_cur = m_data;
}

