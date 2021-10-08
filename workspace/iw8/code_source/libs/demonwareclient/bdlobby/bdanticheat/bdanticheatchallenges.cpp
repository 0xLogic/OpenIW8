/*
==============
bdAntiCheatChallenges::deserialize
==============
*/

bool __fastcall bdAntiCheatChallenges::deserialize(bdAntiCheatChallenges *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdAntiCheatChallenges@@QEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdAntiCheatChallenges::getNumChallenges
==============
*/

unsigned int __fastcall bdAntiCheatChallenges::getNumChallenges(bdAntiCheatChallenges *this)
{
  return ?getNumChallenges@bdAntiCheatChallenges@@QEBAIXZ(this);
}

/*
==============
bdAntiCheatChallenges::~bdAntiCheatChallenges
==============
*/

void __fastcall bdAntiCheatChallenges::~bdAntiCheatChallenges(bdAntiCheatChallenges *this)
{
  ??1bdAntiCheatChallenges@@UEAA@XZ(this);
}

/*
==============
bdAntiCheatChallenges::bdAntiCheatChallenges
==============
*/

void __fastcall bdAntiCheatChallenges::bdAntiCheatChallenges(bdAntiCheatChallenges *this)
{
  ??0bdAntiCheatChallenges@@QEAA@XZ(this);
}

/*
==============
bdAntiCheatChallenges::getChallengeByIndex
==============
*/

const bdAntiCheatChallenge *__fastcall bdAntiCheatChallenges::getChallengeByIndex(bdAntiCheatChallenges *this, unsigned int index)
{
  return ?getChallengeByIndex@bdAntiCheatChallenges@@QEBAAEBVbdAntiCheatChallenge@@I@Z(this, index);
}

/*
==============
bdAntiCheatChallenges::bdAntiCheatChallenges
==============
*/
void bdAntiCheatChallenges::bdAntiCheatChallenges(bdAntiCheatChallenges *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdAntiCheatChallenges_vtbl *)&bdAntiCheatChallenges::`vftable';
  this->m_challenges = NULL;
}

/*
==============
bdAntiCheatChallenges::~bdAntiCheatChallenges
==============
*/
void bdAntiCheatChallenges::~bdAntiCheatChallenges(bdAntiCheatChallenges *this)
{
  bdArray<bdAntiCheatChallenge> *m_challenges; 
  unsigned int m_size; 
  bdAntiCheatChallenge *m_data; 
  bdAntiCheatChallenge *v5; 
  __int64 v6; 

  this->__vftable = (bdAntiCheatChallenges_vtbl *)&bdAntiCheatChallenges::`vftable';
  m_challenges = this->m_challenges;
  if ( m_challenges )
  {
    m_size = m_challenges->m_size;
    m_data = m_challenges->m_data;
    if ( m_size )
    {
      v5 = m_challenges->m_data;
      v6 = m_size;
      do
      {
        ((void (__fastcall *)(bdAntiCheatChallenge *, _QWORD))m_data->~bdAntiCheatChallenge)(v5++, 0i64);
        ++m_data;
        --v6;
      }
      while ( v6 );
      m_data = m_challenges->m_data;
    }
    bdMemory::deallocate(m_data);
    m_challenges->m_data = NULL;
    *(_QWORD *)&m_challenges->m_capacity = 0i64;
    bdMemory::deallocate(m_challenges);
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdAntiCheatChallenges::deserialize
==============
*/
_BOOL8 bdAntiCheatChallenges::deserialize(bdAntiCheatChallenges *this, bdReference<bdByteBuffer> buffer)
{
  bdArray<bdAntiCheatChallenge> *m_challenges; 
  bool v5; 
  bdArray<bdAntiCheatChallenge> *v6; 
  __int64 v7; 
  bdAntiCheatChallenge *v8; 
  unsigned int m_capacity; 
  unsigned int v10; 
  bdAntiCheatChallenge *v11; 
  unsigned __int16 i; 
  bdArray<bdAntiCheatChallenge> *v13; 
  __int64 v14; 
  unsigned __int8 (__fastcall *v15)(__int64, bdByteBuffer_vtbl **); 
  bdByteBuffer_vtbl *v16; 
  __int64 v18; 
  bdAntiCheatChallenge other; 
  unsigned __int16 u; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer_vtbl *v22; 
  bdArray<bdAntiCheatChallenge> *v23; 

  m_ptr = buffer.m_ptr;
  v18 = -2i64;
  m_challenges = this->m_challenges;
  u = 0;
  bdAntiCheatChallenge::bdAntiCheatChallenge(&other);
  if ( m_challenges || !bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &u) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v6 = (bdArray<bdAntiCheatChallenge> *)bdMemory::allocate(0x10ui64);
    v23 = v6;
    if ( v6 )
    {
      v7 = u;
      v6->m_data = NULL;
      v6->m_capacity = v7;
      v6->m_size = v7;
      if ( (_DWORD)v7 )
      {
        v8 = (bdAntiCheatChallenge *)bdMemory::allocate(40 * v7);
        v6->m_data = v8;
        m_capacity = v6->m_capacity;
        v10 = 0;
        for ( LODWORD(v22) = 0; v10 < m_capacity; LODWORD(v22) = v10 )
        {
          v11 = &v8[v10];
          if ( v11 )
            bdAntiCheatChallenge::bdAntiCheatChallenge(v11, &other);
          ++v10;
        }
      }
    }
    else
    {
      v6 = NULL;
    }
    this->m_challenges = v6;
  }
  for ( i = 0; i < u; ++i )
  {
    if ( !v5 )
      break;
    v13 = this->m_challenges;
    bdHandleAssert(i < v13->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAntiCheatChallenge>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed", v18);
    v14 = (__int64)&v13->m_data[i];
    v15 = *(unsigned __int8 (__fastcall **)(__int64, bdByteBuffer_vtbl **))(*(_QWORD *)v14 + 8i64);
    v16 = buffer.m_ptr->__vftable;
    v22 = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->allocateBuffer, 1u);
    v5 = v15(v14, &v22) != 0;
  }
  bdAntiCheatChallenge::~bdAntiCheatChallenge(&other);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
bdAntiCheatChallenges::getChallengeByIndex
==============
*/
bdAntiCheatChallenge *bdAntiCheatChallenges::getChallengeByIndex(bdAntiCheatChallenges *this, unsigned int index)
{
  bdArray<bdAntiCheatChallenge> *m_challenges; 
  __int64 v3; 

  m_challenges = this->m_challenges;
  v3 = index;
  bdHandleAssert(index < m_challenges->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAntiCheatChallenge>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
  return &m_challenges->m_data[v3];
}

/*
==============
bdAntiCheatChallenges::getNumChallenges
==============
*/
__int64 bdAntiCheatChallenges::getNumChallenges(bdAntiCheatChallenges *this)
{
  return this->m_challenges->m_size;
}

