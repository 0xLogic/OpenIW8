/*
==============
IWMem_DynamicID_Add
==============
*/

unsigned int __fastcall IWMem_DynamicID_Add(const unsigned __int64 refPtr)
{
  return ?IWMem_DynamicID_Add@@YAI_K@Z(refPtr);
}

/*
==============
IWMem_DynamicID_Lookup
==============
*/

unsigned int __fastcall IWMem_DynamicID_Lookup(const unsigned __int64 refPtr)
{
  return ?IWMem_DynamicID_Lookup@@YAI_K@Z(refPtr);
}

/*
==============
IWMem_DynamicID_Remove
==============
*/

void __fastcall IWMem_DynamicID_Remove(const unsigned __int64 refPtr)
{
  ?IWMem_DynamicID_Remove@@YAX_K@Z(refPtr);
}

/*
==============
IWMem_DynamicID_Init
==============
*/

void IWMem_DynamicID_Init(void)
{
  ?IWMem_DynamicID_Init@@YAXXZ();
}

/*
==============
IWMem_DynamicID_Add
==============
*/
__int64 IWMem_DynamicID_Add(const unsigned __int64 refPtr)
{
  unsigned int v2; 
  bool v3; 
  unsigned __int64 v4; 
  IWMemDynamicIDGlob *v5; 
  signed __int64 v6; 
  signed __int64 v8; 
  bool v11; 
  __int64 v15; 
  __int64 v16; 
  __int128 v17[2]; 

  if ( !refPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 62, ASSERT_TYPE_ASSERT, "(refPtr != 0)", (const char *)&queryFormat, "refPtr != 0") )
    __debugbreak();
  v2 = IWMem_FixedID_Add();
  if ( v2 )
  {
    if ( v2 < 0x180 )
      goto LABEL_10;
    LODWORD(v15) = v2;
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( newIndex ) < (unsigned)( IWMEM_MAX_ALLOCATORS )", "newIndex doesn't index IWMEM_MAX_ALLOCATORS\n\t%i not in [0, %i)", v15, 384);
  }
  else
  {
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 65, ASSERT_TYPE_ASSERT, "(newIndex)", (const char *)&queryFormat, "newIndex");
  }
  if ( v3 )
    __debugbreak();
LABEL_10:
  AcquireSRWLockExclusive(&s_iwMemDynamicIDGlob.lock.m_lock);
  v4 = 16 * s_iwMemDynamicIDGlob.idMap.m_size;
  v5 = &s_iwMemDynamicIDGlob;
  v6 = (signed __int64)(16 * s_iwMemDynamicIDGlob.idMap.m_size) >> 4;
  while ( v6 > 0 )
  {
    if ( *(_QWORD *)&v5->idMap.m_data.m_buffer[16 * (v6 >> 1)] >= refPtr )
    {
      v6 >>= 1;
    }
    else
    {
      v5 = (IWMemDynamicIDGlob *)((char *)v5 + 16 * (v6 >> 1) + 16);
      v6 += -1 - (v6 >> 1);
    }
  }
  if ( v5 != (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v4) )
  {
    if ( refPtr < *(_QWORD *)v5->idMap.m_data.m_buffer )
      v5 = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v4);
    if ( v5 != (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 70, ASSERT_TYPE_ASSERT, "(s_iwMemDynamicIDGlob.idMap.find( refPtr ) == s_iwMemDynamicIDGlob.idMap.end())", "%s\n\tAlready have an entry for allocator at 0x%zx", "s_iwMemDynamicIDGlob.idMap.find( refPtr ) == s_iwMemDynamicIDGlob.idMap.end()", refPtr) )
      __debugbreak();
  }
  if ( s_iwMemDynamicIDGlob.idMap.m_size >= 0x80 )
  {
    LODWORD(v16) = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 71, ASSERT_TYPE_ASSERT, "(s_iwMemDynamicIDGlob.idMap.capacity() > s_iwMemDynamicIDGlob.idMap.size())", "%s\n\tIWMEM_MAX_DYNAMICIDS(%d) limit hit", "s_iwMemDynamicIDGlob.idMap.capacity() > s_iwMemDynamicIDGlob.idMap.size()", v16) )
      __debugbreak();
  }
  _RDI = &s_iwMemDynamicIDGlob;
  *(_QWORD *)&v17[0] = refPtr;
  v8 = (signed __int64)(16 * s_iwMemDynamicIDGlob.idMap.m_size) >> 4;
  DWORD2(v17[0]) = v2;
  while ( v8 > 0 )
  {
    if ( *(_QWORD *)&_RDI->idMap.m_data.m_buffer[16 * (v8 >> 1)] >= refPtr )
    {
      v8 >>= 1;
    }
    else
    {
      _RDI = (IWMemDynamicIDGlob *)((char *)_RDI + 16 * (v8 >> 1) + 16);
      v8 += -1 - (v8 >> 1);
    }
  }
  if ( _RDI == (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size) || refPtr < *(_QWORD *)_RDI->idMap.m_data.m_buffer )
  {
    if ( 128 == s_iwMemDynamicIDGlob.idMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (_RDI < &s_iwMemDynamicIDGlob || _RDI > (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    if ( (((_BYTE)_RDI - (unsigned __int8)&s_iwMemDynamicIDGlob) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v17 >= (__int128 *)_RDI && v17 < (__int128 *)&s_iwMemDynamicIDGlob.idMap.m_data.m_buffer[16 * s_iwMemDynamicIDGlob.idMap.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    _RBX = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size);
    if ( _RDI != _RBX )
    {
      _RSI = &s_iwMemDynamicIDGlob.idMap.m_data.m_buffer[16 * s_iwMemDynamicIDGlob.idMap.m_size + 16];
      if ( _RDI == (IWMemDynamicIDGlob *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( _RBX == (IWMemDynamicIDGlob *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v11 = _RBX <= _RDI;
      if ( _RBX < _RDI )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v11 = _RBX <= _RDI;
      }
      if ( !v11 )
      {
        do
        {
          __asm { vmovups xmm0, xmmword ptr [rbx-10h] }
          _RBX = (IWMemDynamicIDGlob *)((char *)_RBX - 16);
          _RSI -= 16;
          __asm { vmovups xmmword ptr [rsi], xmm0 }
        }
        while ( _RBX > _RDI );
      }
    }
    __asm { vmovups xmm0, [rsp+68h+var_28] }
    ++s_iwMemDynamicIDGlob.idMap.m_size;
    __asm { vmovups xmmword ptr [rdi], xmm0 }
  }
  ReleaseSRWLockExclusive(&s_iwMemDynamicIDGlob.lock.m_lock);
  return v2;
}

/*
==============
IWMem_DynamicID_Init
==============
*/
void IWMem_DynamicID_Init(void)
{
  if ( s_iwMemDynamicIDGlob.idMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 50, ASSERT_TYPE_ASSERT, "(s_iwMemDynamicIDGlob.idMap.empty())", (const char *)&queryFormat, "s_iwMemDynamicIDGlob.idMap.empty()") )
    __debugbreak();
  InitializeSRWLock(&s_iwMemDynamicIDGlob.lock.m_lock);
}

/*
==============
IWMem_DynamicID_Lookup
==============
*/
__int64 IWMem_DynamicID_Lookup(const unsigned __int64 refPtr)
{
  unsigned __int64 v2; 
  IWMemDynamicIDGlob *v3; 
  signed __int64 v4; 
  unsigned int v5; 

  AcquireSRWLockShared(&s_iwMemDynamicIDGlob.lock.m_lock);
  v2 = 16 * s_iwMemDynamicIDGlob.idMap.m_size;
  v3 = &s_iwMemDynamicIDGlob;
  v4 = (signed __int64)(16 * s_iwMemDynamicIDGlob.idMap.m_size) >> 4;
  while ( v4 > 0 )
  {
    if ( *(_QWORD *)&v3->idMap.m_data.m_buffer[16 * (v4 >> 1)] >= refPtr )
    {
      v4 >>= 1;
    }
    else
    {
      v3 = (IWMemDynamicIDGlob *)((char *)v3 + 16 * (v4 >> 1) + 16);
      v4 += -1 - (v4 >> 1);
    }
  }
  if ( v3 == (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v2) )
    goto LABEL_15;
  if ( refPtr < *(_QWORD *)v3->idMap.m_data.m_buffer )
    v3 = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v2);
  if ( v3 == (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v2) )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 116, ASSERT_TYPE_ASSERT, "(it != s_iwMemDynamicIDGlob.idMap.end())", "%s\n\tIWMEM: Allocator ID (0x%zx) not found", "it != s_iwMemDynamicIDGlob.idMap.end()", refPtr) )
      __debugbreak();
  }
  v5 = *(_DWORD *)&v3->idMap.m_data.m_buffer[8];
  ReleaseSRWLockShared(&s_iwMemDynamicIDGlob.lock.m_lock);
  return v5;
}

/*
==============
IWMem_DynamicID_Remove
==============
*/
void IWMem_DynamicID_Remove(const unsigned __int64 refPtr)
{
  unsigned __int64 v2; 
  IWMemDynamicIDGlob *v3; 
  signed __int64 v4; 
  unsigned int v5; 
  bool v6; 
  IWMemDynamicIDGlob *v7; 
  IWMemDynamicIDGlob *v9; 
  bool v10; 

  AcquireSRWLockExclusive(&s_iwMemDynamicIDGlob.lock.m_lock);
  v2 = 16 * s_iwMemDynamicIDGlob.idMap.m_size;
  v3 = &s_iwMemDynamicIDGlob;
  v4 = (signed __int64)(16 * s_iwMemDynamicIDGlob.idMap.m_size) >> 4;
  while ( v4 > 0 )
  {
    if ( *(_QWORD *)&v3->idMap.m_data.m_buffer[16 * (v4 >> 1)] >= refPtr )
    {
      v4 >>= 1;
    }
    else
    {
      v3 = (IWMemDynamicIDGlob *)((char *)v3 + 16 * (v4 >> 1) + 16);
      v4 += -1 - (v4 >> 1);
    }
  }
  if ( v3 != (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v2) && refPtr < *(_QWORD *)v3->idMap.m_data.m_buffer )
    v3 = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + v2);
  v5 = *(_DWORD *)&v3->idMap.m_data.m_buffer[8];
  if ( v5 )
  {
    if ( v5 < 0x180 )
      goto LABEL_15;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 94, ASSERT_TYPE_ASSERT, "(unsigned)( allocatorIndex ) < (unsigned)( IWMEM_MAX_ALLOCATORS )", "allocatorIndex doesn't index IWMEM_MAX_ALLOCATORS\n\t%i not in [0, %i)", *(_DWORD *)&v3->idMap.m_data.m_buffer[8], 384);
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\id\\iwmem_dynamic_id.cpp", 93, ASSERT_TYPE_ASSERT, "(allocatorIndex)", (const char *)&queryFormat, "allocatorIndex");
  }
  if ( v6 )
    __debugbreak();
LABEL_15:
  if ( !s_iwMemDynamicIDGlob.idMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
    __debugbreak();
  if ( (v3 < &s_iwMemDynamicIDGlob || v3 > (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
    __debugbreak();
  if ( (((_BYTE)v3 - (unsigned __int8)&s_iwMemDynamicIDGlob) & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
    __debugbreak();
  if ( v3 == (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
    __debugbreak();
  v7 = &s_iwMemDynamicIDGlob;
  if ( s_iwMemDynamicIDGlob.idMap.m_size )
    v7 = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + (((char *)v3 - (char *)&s_iwMemDynamicIDGlob) & 0xFFFFFFFFFFFFFFF0ui64));
  _RBX = &v7->idMap.m_data.m_buffer[16];
  v9 = (IWMemDynamicIDGlob *)((char *)&s_iwMemDynamicIDGlob + 16 * s_iwMemDynamicIDGlob.idMap.m_size);
  if ( &v7->idMap.m_data.m_buffer[16] == (char *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
    __debugbreak();
  if ( v9 == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
    __debugbreak();
  v10 = _RBX < (char *)v9;
  if ( _RBX > (char *)v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v10 = _RBX < (char *)v9;
  }
  if ( v10 )
  {
    _RAX = v7;
    do
    {
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      _RBX += 16;
      __asm { vmovups xmmword ptr [rax], xmm0 }
      _RAX = (IWMemDynamicIDGlob *)((char *)_RAX + 16);
    }
    while ( _RBX < (char *)v9 );
  }
  --s_iwMemDynamicIDGlob.idMap.m_size;
  ReleaseSRWLockExclusive(&s_iwMemDynamicIDGlob.lock.m_lock);
  IWMem_FixedID_Remove(v5);
}

