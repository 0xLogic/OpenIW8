/*
==============
IWMem_FixedID_Remove
==============
*/

void __fastcall IWMem_FixedID_Remove(const unsigned int index)
{
  ?IWMem_FixedID_Remove@@YAXI@Z(index);
}

/*
==============
IWMem_FixedID_Init
==============
*/

void IWMem_FixedID_Init(void)
{
  ?IWMem_FixedID_Init@@YAXXZ();
}

/*
==============
IWMem_FixedID_IsValid
==============
*/

bool __fastcall IWMem_FixedID_IsValid(const unsigned int index)
{
  return ?IWMem_FixedID_IsValid@@YA_NI@Z(index);
}

/*
==============
IWMem_FixedID_Add
==============
*/

unsigned int __fastcall IWMem_FixedID_Add()
{
  return ?IWMem_FixedID_Add@@YAIXZ();
}

/*
==============
IWMem_FixedID_Add
==============
*/
__int64 IWMem_FixedID_Add()
{
  unsigned int New; 

  AcquireSRWLockExclusive(&s_iwMemFixedIDGlob.lock.m_lock);
  New = IWMem_FixedID_AllocateNew();
  ReleaseSRWLockExclusive(&s_iwMemFixedIDGlob.lock.m_lock);
  return New;
}

/*
==============
IWMem_FixedID_AllocateNew
==============
*/
__int64 IWMem_FixedID_AllocateNew()
{
  unsigned int v0; 
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  IWMemAllocator *AllocatorByIndex; 
  __int64 result; 
  __int64 v7; 

  v0 = s_iwMemFixedIDGlob.lastGivenID + 1;
  do
  {
    if ( v0 < 0x180 )
    {
      if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_fixed_id.cpp", 62, ASSERT_TYPE_ASSERT, "(index != 0)", (const char *)&queryFormat, "index != 0") )
        __debugbreak();
    }
    else
    {
      v0 = 1;
    }
    if ( v0 >= 0x180ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v1 = (unsigned __int64)v0 >> 6;
    v2 = 0x8000000000000000ui64 >> (v0 & 0x3F);
    if ( (v2 & s_iwMemFixedIDGlob.usedIDs.m_data[v1]) == 0 )
    {
      s_iwMemFixedIDGlob.usedIDs.m_data[v1] |= v2;
      result = v0;
      s_iwMemFixedIDGlob.lastGivenID = v0;
      return result;
    }
    ++v0;
  }
  while ( v0 != s_iwMemFixedIDGlob.lastGivenID );
  Com_Printf(0, "List of allocators:\n");
  v3 = 0;
  v4 = 0i64;
  do
  {
    if ( v4 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (v4 & 0x3F)) & s_iwMemFixedIDGlob.usedIDs.m_data[v4 >> 6]) != 0 )
    {
      AllocatorByIndex = IWMem_AllocatorManager_GetAllocatorByIndex(v3);
      Com_Printf(0, "\t%s\n", AllocatorByIndex->m_name);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x180 );
  LODWORD(v7) = 384;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_fixed_id.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "IWMEM_MAX_ALLOCATORS(%d) limit hit.", v7) )
    __debugbreak();
  return 0i64;
}

/*
==============
IWMem_FixedID_Init
==============
*/
void IWMem_FixedID_Init(void)
{
  __int64 v0; 

  if ( s_iwMemFixedIDGlob.lastGivenID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_fixed_id.cpp", 100, ASSERT_TYPE_ASSERT, "(s_iwMemFixedIDGlob.lastGivenID == 0)", (const char *)&queryFormat, "s_iwMemFixedIDGlob.lastGivenID == 0") )
    __debugbreak();
  v0 = 0i64;
  while ( !s_iwMemFixedIDGlob.usedIDs.m_data[v0] )
  {
    if ( (unsigned __int64)++v0 >= 6 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_fixed_id.cpp", 101, ASSERT_TYPE_ASSERT, "(s_iwMemFixedIDGlob.usedIDs.none())", (const char *)&queryFormat, "s_iwMemFixedIDGlob.usedIDs.none()") )
    __debugbreak();
LABEL_10:
  InitializeSRWLock(&s_iwMemFixedIDGlob.lock.m_lock);
}

/*
==============
IWMem_FixedID_IsValid
==============
*/
bool IWMem_FixedID_IsValid(const unsigned int index)
{
  unsigned __int64 v1; 

  v1 = index;
  if ( index >= 0x180ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_iwMemFixedIDGlob.usedIDs.m_data[v1 >> 6]) != 0;
}

/*
==============
IWMem_FixedID_Remove
==============
*/
void IWMem_FixedID_Remove(const unsigned int index)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  v1 = index;
  AcquireSRWLockExclusive(&s_iwMemFixedIDGlob.lock.m_lock);
  if ( v1 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v2 = (unsigned __int64)(unsigned int)v1 >> 6;
  v3 = 0x8000000000000000ui64 >> (v1 & 0x3F);
  if ( (v3 & s_iwMemFixedIDGlob.usedIDs.m_data[v2]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_fixed_id.cpp", 132, ASSERT_TYPE_ASSERT, "(s_iwMemFixedIDGlob.usedIDs.test( index ))", (const char *)&queryFormat, "s_iwMemFixedIDGlob.usedIDs.test( index )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_iwMemFixedIDGlob.usedIDs.m_data[v2] &= ~v3;
  ReleaseSRWLockExclusive(&s_iwMemFixedIDGlob.lock.m_lock);
}

