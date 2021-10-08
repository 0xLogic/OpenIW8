/*
==============
PhysicsBodyIdVector_Remove
==============
*/

void __fastcall PhysicsBodyIdVector_Remove(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int bodyId)
{
  ?PhysicsBodyIdVector_Remove@@YAXPEAV?$hkArray@IUhkContainerHeapAllocator@@@@I@Z(vector, bodyId);
}

/*
==============
PhysicsBodyIdVector_Destroy
==============
*/

void __fastcall PhysicsBodyIdVector_Destroy(hkArray<unsigned int,hkContainerHeapAllocator> *vector)
{
  ?PhysicsBodyIdVector_Destroy@@YAXPEAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z(vector);
}

/*
==============
PhysicsBodyIdVector_Create
==============
*/

hkArray<unsigned int,hkContainerHeapAllocator> *__fastcall PhysicsBodyIdVector_Create()
{
  return ?PhysicsBodyIdVector_Create@@YAPEAV?$hkArray@IUhkContainerHeapAllocator@@@@XZ();
}

/*
==============
PhysicsBodyIdVector_GetSize
==============
*/

unsigned int __fastcall PhysicsBodyIdVector_GetSize(hkArray<unsigned int,hkContainerHeapAllocator> *vector)
{
  return ?PhysicsBodyIdVector_GetSize@@YAIPEAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z(vector);
}

/*
==============
PhysicsBodyIdVector_Get
==============
*/

unsigned int __fastcall PhysicsBodyIdVector_Get(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int index)
{
  return ?PhysicsBodyIdVector_Get@@YAIPEAV?$hkArray@IUhkContainerHeapAllocator@@@@I@Z(vector, index);
}

/*
==============
PhysicsBodyIdVector_Add
==============
*/

void __fastcall PhysicsBodyIdVector_Add(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int bodyId)
{
  ?PhysicsBodyIdVector_Add@@YAXPEAV?$hkArray@IUhkContainerHeapAllocator@@@@I@Z(vector, bodyId);
}

/*
==============
PhysicsBodyIdVector_Add
==============
*/
void PhysicsBodyIdVector_Add(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int bodyId)
{
  hkMemoryAllocator *v4; 
  int m_size; 

  if ( !vector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsbodyidvector.cpp", 36, ASSERT_TYPE_ASSERT, "(vector)", (const char *)&queryFormat, "vector") )
    __debugbreak();
  v4 = hkMemHeapAllocator();
  m_size = vector->m_size;
  if ( m_size == (vector->m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v4, vector, 4);
    m_size = vector->m_size;
  }
  vector->m_data[m_size] = bodyId;
  ++vector->m_size;
}

/*
==============
PhysicsBodyIdVector_Create
==============
*/
hkArray<unsigned int,hkContainerHeapAllocator> *PhysicsBodyIdVector_Create()
{
  hkMemoryRouter *Value; 
  hkArray<unsigned int,hkContainerHeapAllocator> *result; 

  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  result = (hkArray<unsigned int,hkContainerHeapAllocator> *)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  if ( result )
  {
    result->m_data = NULL;
    result->m_size = 0;
    result->m_capacityAndFlags = 0x80000000;
  }
  return result;
}

/*
==============
PhysicsBodyIdVector_Destroy
==============
*/
void PhysicsBodyIdVector_Destroy(hkArray<unsigned int,hkContainerHeapAllocator> *vector)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 
  hkMemoryRouter *Value; 

  if ( vector )
  {
    v2 = hkMemHeapAllocator();
    vector->m_size = 0;
    m_capacityAndFlags = vector->m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v2, vector->m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
    vector->m_data = NULL;
    vector->m_capacityAndFlags = 0x80000000;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, vector, 16);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsbodyidvector.cpp", 26, ASSERT_TYPE_ASSERT, "(vector)", (const char *)&queryFormat, "vector", -2i64) )
  {
    __debugbreak();
  }
}

/*
==============
PhysicsBodyIdVector_Get
==============
*/
__int64 PhysicsBodyIdVector_Get(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int index)
{
  __int64 v2; 

  v2 = (int)index;
  if ( !vector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsbodyidvector.cpp", 76, ASSERT_TYPE_ASSERT, "( vector )", (const char *)&queryFormat, "vector") )
    __debugbreak();
  return vector->m_data[v2];
}

/*
==============
PhysicsBodyIdVector_GetSize
==============
*/
__int64 PhysicsBodyIdVector_GetSize(hkArray<unsigned int,hkContainerHeapAllocator> *vector)
{
  if ( vector )
    return (unsigned int)vector->m_size;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsbodyidvector.cpp", 66, ASSERT_TYPE_ASSERT, "( vector )", (const char *)&queryFormat, "vector") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
PhysicsBodyIdVector_Remove
==============
*/
void PhysicsBodyIdVector_Remove(hkArray<unsigned int,hkContainerHeapAllocator> *vector, unsigned int bodyId)
{
  unsigned int *m_data; 
  int v5; 
  __int64 m_size; 
  unsigned int *v7; 
  unsigned int *v8; 

  if ( !vector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsbodyidvector.cpp", 46, ASSERT_TYPE_ASSERT, "(vector)", (const char *)&queryFormat, "vector") )
    __debugbreak();
  m_data = vector->m_data;
  v5 = 0;
  m_size = vector->m_size;
  v7 = vector->m_data;
  v8 = &vector->m_data[m_size];
  if ( vector->m_data != v8 )
  {
    while ( *v7 != bodyId )
    {
      ++v7;
      ++v5;
      if ( v7 == v8 )
        return;
    }
    vector->m_size = m_size - 1;
    if ( (_DWORD)m_size - 1 != v5 )
      m_data[v5] = m_data[m_size - 1];
  }
}

