/*
==============
bdAntiCheatResponses::clear
==============
*/

void __fastcall bdAntiCheatResponses::clear(bdAntiCheatResponses *this)
{
  ?clear@bdAntiCheatResponses@@QEAAXXZ(this);
}

/*
==============
bdAntiCheatResponses::findResponse
==============
*/

bool __fastcall bdAntiCheatResponses::findResponse(bdAntiCheatResponses *this, const bdAntiCheatChallenge *challenge, __int64 *response)
{
  return ?findResponse@bdAntiCheatResponses@@QEAA_NAEBVbdAntiCheatChallenge@@AEA_J@Z(this, challenge, response);
}

/*
==============
bdAntiCheatResponses::addResponse
==============
*/

void __fastcall bdAntiCheatResponses::addResponse(bdAntiCheatResponses *this, const bdAntiCheatChallenge *challenge, __int64 response)
{
  ?addResponse@bdAntiCheatResponses@@QEAAXAEBVbdAntiCheatChallenge@@_J@Z(this, challenge, response);
}

/*
==============
bdAntiCheatResponses::bdAntiCheatResponses
==============
*/

void __fastcall bdAntiCheatResponses::bdAntiCheatResponses(bdAntiCheatResponses *this)
{
  ??0bdAntiCheatResponses@@QEAA@XZ(this);
}

/*
==============
bdAntiCheatResponses::~bdAntiCheatResponses
==============
*/

void __fastcall bdAntiCheatResponses::~bdAntiCheatResponses(bdAntiCheatResponses *this)
{
  ??1bdAntiCheatResponses@@UEAA@XZ(this);
}

/*
==============
bdAntiCheatResponses::serialize
==============
*/

bool __fastcall bdAntiCheatResponses::serialize(bdAntiCheatResponses *this, bdByteBuffer *buffer)
{
  return ?serialize@bdAntiCheatResponses@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdAntiCheatResponses::setLogMessage
==============
*/

void __fastcall bdAntiCheatResponses::setLogMessage(bdAntiCheatResponses *this, const unsigned __int8 *logMessage, unsigned int logMessageSize)
{
  ?setLogMessage@bdAntiCheatResponses@@QEAAXQEBEI@Z(this, logMessage, logMessageSize);
}

/*
==============
bdAntiCheatResponses::bdAntiCheatResponses
==============
*/
void bdAntiCheatResponses::bdAntiCheatResponses(bdAntiCheatResponses *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAntiCheatResponses::`vbtable';
    *(_QWORD *)this->gap78 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap78[8] = 0;
  }
  bdSerializable::bdSerializable(this);
  this->__vftable = (bdAntiCheatResponses_vtbl *)&bdAntiCheatResponses::`vftable'{for `bdSerializable'};
  *(bdAntiCheatResponses_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAntiCheatResponses_vtbl *)&bdAntiCheatResponses::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_responses.m_data = NULL;
  *(_QWORD *)&this->m_responses.m_capacity = 0i64;
  this->m_numResponses = 0;
  this->m_logMessageSize = 0;
  *(_QWORD *)this->m_logMessage = 0i64;
  *(_QWORD *)&this->m_logMessage[8] = 0i64;
  *(_QWORD *)&this->m_logMessage[16] = 0i64;
  *(_QWORD *)&this->m_logMessage[24] = 0i64;
  *(_QWORD *)&this->m_logMessage[32] = 0i64;
  *(_QWORD *)&this->m_logMessage[40] = 0i64;
  *(_QWORD *)&this->m_logMessage[48] = 0i64;
  *(_QWORD *)&this->m_logMessage[56] = 0i64;
}

/*
==============
bdAntiCheatResponses::~bdAntiCheatResponses
==============
*/
void bdAntiCheatResponses::~bdAntiCheatResponses(bdAntiCheatResponses *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdAntiCheatResponses::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 112) = &bdAntiCheatResponses::`vftable'{for `bdReferencable'};
  *(_WORD *)&this[-1].m_logMessage[14] = 0;
  bdMemory::deallocate(*(void **)&this[-1].m_numResponses);
  *(_QWORD *)&this[-1].m_numResponses = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[6] = 0i64;
  bdMemory::deallocate(this[-1].m_responses.m_data);
  this[-1].m_responses.m_data = NULL;
  *(_QWORD *)&this[-1].m_responses.m_capacity = 0i64;
  *(_DWORD *)&this[-1].gap78[12] = 0;
  *(_QWORD *)&this[-1].m_logMessage[16] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[24] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[32] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[40] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[48] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[56] = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[64] = 0i64;
  *(_QWORD *)&this[-1].gap78[2] = 0i64;
  bdMemory::deallocate(*(void **)&this[-1].m_numResponses);
  *(_QWORD *)&this[-1].m_numResponses = 0i64;
  *(_QWORD *)&this[-1].m_logMessage[6] = 0i64;
  bdMemory::deallocate(this[-1].m_responses.m_data);
  this[-1].m_responses.m_data = NULL;
  *(_QWORD *)&this[-1].m_responses.m_capacity = 0i64;
  bdSerializable::~bdSerializable((bdAntiCheatResponses *)((char *)this - 104));
}

/*
==============
bdAntiCheatResponses::addResponse
==============
*/
void bdAntiCheatResponses::addResponse(bdAntiCheatResponses *this, const bdAntiCheatChallenge *challenge, __int64 response)
{
  unsigned int v3; 
  void *v4; 
  unsigned int v8; 
  __int64 m_numResponses; 
  unsigned int m_capacity; 
  unsigned int v11; 
  unsigned int v12; 
  void *v13; 
  unsigned int m_size; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 

  v3 = *((_DWORD *)&this->__vftable + 7);
  v4 = NULL;
  v8 = 0;
  if ( v3 )
  {
    while ( challenge->m_challengeID != *(_QWORD *)(*((_QWORD *)&this->__vftable + 2) + 8i64 * v8) )
    {
      if ( ++v8 >= v3 )
        goto LABEL_4;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "anticheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheatresponses.cpp", "bdAntiCheatResponses::addResponse", 0x2Bu, "Overriding existing response for challengeID %I64u", challenge->m_challengeID);
    bdHandleAssert(v8 < this->m_responses.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<__int64>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    this->m_responses.m_data[v8] = response;
  }
  else
  {
LABEL_4:
    m_numResponses = this->m_numResponses;
    if ( (unsigned int)m_numResponses >= this->m_responses.m_size )
    {
      m_capacity = this->m_responses.m_capacity;
      v11 = m_numResponses + 1;
      if ( m_capacity < (int)m_numResponses + 1 )
      {
        v12 = m_numResponses + 1;
        v13 = NULL;
        if ( v11 - m_capacity <= m_capacity )
          v12 = 2 * m_capacity;
        if ( v12 )
        {
          v13 = bdMemory::allocate(8i64 * v12);
          m_size = this->m_responses.m_size;
          if ( m_size )
            memcpy_0(v13, this->m_responses.m_data, 8i64 * m_size);
        }
        bdMemory::deallocate(this->m_responses.m_data);
        this->m_responses.m_data = (__int64 *)v13;
        this->m_responses.m_capacity = v12;
      }
      this->m_responses.m_size = v11;
    }
    this->m_responses.m_data[m_numResponses] = response;
    v15 = this->m_numResponses;
    if ( (unsigned int)v15 >= *((_DWORD *)&this->__vftable + 7) )
    {
      v16 = *((_DWORD *)&this->__vftable + 6);
      v17 = v15 + 1;
      if ( v16 < (int)v15 + 1 )
      {
        v18 = v15 + 1;
        if ( v17 - v16 <= v16 )
          v18 = 2 * v16;
        if ( v18 )
        {
          v4 = bdMemory::allocate(8i64 * v18);
          v19 = *((_DWORD *)&this->__vftable + 7);
          if ( v19 )
            memcpy_0(v4, *((const void **)&this->__vftable + 2), 8i64 * v19);
        }
        bdMemory::deallocate(*((void **)&this->__vftable + 2));
        *((_QWORD *)&this->__vftable + 2) = v4;
        *((_DWORD *)&this->__vftable + 6) = v18;
      }
      *((_DWORD *)&this->__vftable + 7) = v17;
    }
    *(_QWORD *)(*((_QWORD *)&this->__vftable + 2) + 8 * v15) = challenge->m_challengeID;
    ++this->m_numResponses;
  }
}

/*
==============
bdAntiCheatResponses::clear
==============
*/
void bdAntiCheatResponses::clear(bdAntiCheatResponses *this)
{
  this->m_numResponses = 0;
  bdMemory::deallocate(this->m_responses.m_data);
  this->m_responses.m_data = NULL;
  *(_QWORD *)&this->m_responses.m_capacity = 0i64;
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_logMessageSize = 0;
  *(_QWORD *)this->m_logMessage = 0i64;
  *(_QWORD *)&this->m_logMessage[8] = 0i64;
  *(_QWORD *)&this->m_logMessage[16] = 0i64;
  *(_QWORD *)&this->m_logMessage[24] = 0i64;
  *(_QWORD *)&this->m_logMessage[32] = 0i64;
  *(_QWORD *)&this->m_logMessage[40] = 0i64;
  *(_QWORD *)&this->m_logMessage[48] = 0i64;
  *(_QWORD *)&this->m_logMessage[56] = 0i64;
}

/*
==============
bdAntiCheatResponses::findResponse
==============
*/
bool bdAntiCheatResponses::findResponse(bdAntiCheatResponses *this, const bdAntiCheatChallenge *challenge, __int64 *response)
{
  __int64 v3; 
  bool result; 

  v3 = 0i64;
  if ( !this->m_numResponses )
    return 0;
  while ( 1 )
  {
    bdHandleAssert((unsigned int)v3 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned __int64>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    if ( *(_QWORD *)(*((_QWORD *)&this->__vftable + 2) + 8 * v3) == challenge->m_challengeID )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= this->m_numResponses )
      return 0;
  }
  bdHandleAssert((unsigned int)v3 < this->m_responses.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<__int64>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
  result = 1;
  *response = this->m_responses.m_data[v3];
  return result;
}

/*
==============
bdAntiCheatResponses::serialize
==============
*/
char bdAntiCheatResponses::serialize(bdAntiCheatResponses *this, bdByteBuffer *buffer)
{
  __int64 v4; 
  bool v5; 

  v4 = 0i64;
  v5 = bdByteBuffer::writeUInt16(buffer, this->m_numResponses);
  if ( this->m_numResponses )
  {
    while ( v5 )
    {
      bdHandleAssert((unsigned int)v4 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<unsigned __int64>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
      v5 = 0;
      if ( bdByteBuffer::writeUInt64(buffer, *(_QWORD *)(*((_QWORD *)&this->__vftable + 2) + 8 * v4)) )
      {
        bdHandleAssert((unsigned int)v4 < this->m_responses.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<__int64>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
        if ( bdByteBuffer::writeInt64(buffer, this->m_responses.m_data[v4]) )
          v5 = 1;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= this->m_numResponses )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v5 && bdByteBuffer::writeBlob(buffer, this->m_logMessage, this->m_logMessageSize) )
      return 1;
  }
  return 0;
}

/*
==============
bdAntiCheatResponses::setLogMessage
==============
*/
void bdAntiCheatResponses::setLogMessage(bdAntiCheatResponses *this, const unsigned __int8 *logMessage, unsigned int logMessageSize)
{
  unsigned int v3; 

  v3 = logMessageSize;
  if ( logMessage && logMessageSize )
  {
    if ( logMessageSize > 0x40 )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "anticheat", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdanticheatresponses.cpp", "bdAntiCheatResponses::setLogMessage", 0x52u, "Truncating response blob as size exceeds max allowed");
      v3 = 64;
    }
    memcpy_0(this->m_logMessage, logMessage, v3);
    this->m_logMessageSize = v3;
  }
  else
  {
    this->m_logMessageSize = 0;
    *(_QWORD *)this->m_logMessage = 0i64;
    *(_QWORD *)&this->m_logMessage[8] = 0i64;
    *(_QWORD *)&this->m_logMessage[16] = 0i64;
    *(_QWORD *)&this->m_logMessage[24] = 0i64;
    *(_QWORD *)&this->m_logMessage[32] = 0i64;
    *(_QWORD *)&this->m_logMessage[40] = 0i64;
    *(_QWORD *)&this->m_logMessage[48] = 0i64;
    *(_QWORD *)&this->m_logMessage[56] = 0i64;
  }
}

