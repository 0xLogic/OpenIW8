/*
==============
bdAntiCheatChallenge::bdAntiCheatChallenge
==============
*/

void __fastcall bdAntiCheatChallenge::bdAntiCheatChallenge(bdAntiCheatChallenge *this)
{
  ??0bdAntiCheatChallenge@@QEAA@XZ(this);
}

/*
==============
bdAntiCheatChallenge::~bdAntiCheatChallenge
==============
*/

void __fastcall bdAntiCheatChallenge::~bdAntiCheatChallenge(bdAntiCheatChallenge *this)
{
  ??1bdAntiCheatChallenge@@UEAA@XZ(this);
}

/*
==============
bdAntiCheatChallenge::bdAntiCheatChallenge
==============
*/

void __fastcall bdAntiCheatChallenge::bdAntiCheatChallenge(bdAntiCheatChallenge *this, const bdAntiCheatChallenge *other)
{
  ??0bdAntiCheatChallenge@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdAntiCheatChallenge::deserialize
==============
*/

bool __fastcall bdAntiCheatChallenge::deserialize(bdAntiCheatChallenge *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdAntiCheatChallenge@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdAntiCheatChallenge::bdAntiCheatChallenge
==============
*/
void bdAntiCheatChallenge::bdAntiCheatChallenge(bdAntiCheatChallenge *this, const bdAntiCheatChallenge *other)
{
  __int64 m_capacity; 
  bdAntiCheatChallengeParam *v5; 
  unsigned int m_size; 
  bdAntiCheatChallengeParam *m_data; 
  bdAntiCheatChallengeParam *v8; 
  signed __int64 v9; 
  __int64 v10; 

  this->__vftable = (bdAntiCheatChallenge_vtbl *)&bdAntiCheatChallenge::`vftable';
  this->m_functionID = other->m_functionID;
  this->m_challengeID = other->m_challengeID;
  this->m_parameters.m_capacity = other->m_parameters.m_capacity;
  this->m_parameters.m_size = other->m_parameters.m_size;
  m_capacity = other->m_parameters.m_capacity;
  if ( (_DWORD)m_capacity )
  {
    v5 = (bdAntiCheatChallengeParam *)bdMemory::allocate(24 * m_capacity);
    m_size = other->m_parameters.m_size;
    m_data = other->m_parameters.m_data;
    if ( m_size )
    {
      v8 = v5;
      v9 = (char *)m_data - (char *)v5;
      v10 = m_size;
      do
      {
        if ( v8 )
          bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(v8, (bdAntiCheatChallengeParam *)((char *)v8 + v9));
        ++v8;
        --v10;
      }
      while ( v10 );
    }
    this->m_parameters.m_data = v5;
  }
  else
  {
    this->m_parameters.m_data = NULL;
  }
}

/*
==============
bdAntiCheatChallenge::bdAntiCheatChallenge
==============
*/
void bdAntiCheatChallenge::bdAntiCheatChallenge(bdAntiCheatChallenge *this)
{
  this->__vftable = (bdAntiCheatChallenge_vtbl *)&bdAntiCheatChallenge::`vftable';
  this->m_functionID = 0;
  this->m_challengeID = 0i64;
  this->m_parameters.m_data = NULL;
  *(_QWORD *)&this->m_parameters.m_capacity = 0i64;
}

/*
==============
bdAntiCheatChallenge::~bdAntiCheatChallenge
==============
*/
void bdAntiCheatChallenge::~bdAntiCheatChallenge(bdAntiCheatChallenge *this)
{
  this->__vftable = (bdAntiCheatChallenge_vtbl *)&bdAntiCheatChallenge::`vftable';
  bdArray<bdAntiCheatChallengeParam>::~bdArray<bdAntiCheatChallengeParam>(&this->m_parameters);
}

/*
==============
bdAntiCheatChallenge::deserialize
==============
*/
_BOOL8 bdAntiCheatChallenge::deserialize(bdAntiCheatChallenge *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int i; 
  unsigned __int64 v6; 
  unsigned int v7; 
  __int64 m_size; 
  unsigned int v9; 
  bdAntiCheatChallengeParam *m_data; 
  bdAntiCheatChallengeParam *v11; 
  unsigned int v12; 
  bdAntiCheatChallengeParam *v13; 
  bdAntiCheatChallengeParam *v14; 
  bool (__fastcall *deserialize)(bdAntiCheatChallengeParam *, bdReference<bdByteBuffer>); 
  bdByteBuffer_vtbl *v16; 
  __int64 v18; 
  bdAntiCheatChallengeParam *v19; 
  bdAntiCheatChallengeParam *v20; 
  bdAntiCheatChallengeParam *v21; 
  bdAntiCheatChallengeParam *v22; 
  bdAntiCheatChallengeParam other; 
  unsigned __int16 u; 
  bdByteBuffer *m_ptr; 
  unsigned int v26; 
  bdByteBuffer_vtbl *v27; 

  m_ptr = buffer.m_ptr;
  v18 = -2i64;
  u = 0;
  bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(&other);
  v4 = bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_functionID) && bdByteBuffer::readUInt64((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_challengeID) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &u);
  bdArray<bdAntiCheatChallengeParam>::ensureCapacity(&this->m_parameters, u);
  for ( i = 0; i < u; ++i )
  {
    if ( !v4 )
      break;
    if ( i >= this->m_parameters.m_size )
    {
      v7 = i + 1;
      bdArray<bdAntiCheatChallengeParam>::ensureCapacity(&this->m_parameters, i + 1);
      m_size = this->m_parameters.m_size;
      v9 = i - m_size;
      m_data = this->m_parameters.m_data;
      v11 = &m_data[m_size];
      v19 = v11;
      v12 = 0;
      v26 = 0;
      if ( i != (_DWORD)m_size )
      {
        do
        {
          v13 = &v11[v12];
          v20 = v13;
          if ( v13 )
            bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(v13);
          v26 = ++v12;
        }
        while ( v12 < v9 );
        m_data = this->m_parameters.m_data;
      }
      v6 = i;
      v21 = &m_data[v6];
      v22 = &m_data[v6];
      if ( &m_data[v6] )
        bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(&m_data[v6], &other);
      this->m_parameters.m_size = v7;
    }
    else
    {
      v6 = i;
      bdAntiCheatChallengeParam::operator=(&this->m_parameters.m_data[v6], &other);
      v7 = this->m_parameters.m_size;
    }
    bdHandleAssert(i < v7, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAntiCheatChallengeParam>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed", v18, v19, v20, v21, v22);
    v14 = &this->m_parameters.m_data[v6];
    deserialize = v14->deserialize;
    v16 = buffer.m_ptr->__vftable;
    v27 = v16;
    if ( v16 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v16->allocateBuffer, 1u);
    v4 = ((unsigned __int8 (__fastcall *)(bdAntiCheatChallengeParam *, bdByteBuffer_vtbl **))deserialize)(v14, &v27) != 0;
  }
  bdAntiCheatChallengeParam::~bdAntiCheatChallengeParam(&other);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

