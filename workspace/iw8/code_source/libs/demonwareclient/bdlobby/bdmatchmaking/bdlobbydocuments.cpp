/*
==============
bdLobbyDocuments::~bdLobbyDocuments
==============
*/

void __fastcall bdLobbyDocuments::~bdLobbyDocuments(bdLobbyDocuments *this)
{
  ??1bdLobbyDocuments@@UEAA@XZ(this);
}

/*
==============
bdLobbyDocuments::deallocate
==============
*/

void __fastcall bdLobbyDocuments::deallocate(bdLobbyDocuments *this)
{
  ?deallocate@bdLobbyDocuments@@AEAAXXZ(this);
}

/*
==============
bdLobbyDocuments::sizeOf
==============
*/

unsigned int __fastcall bdLobbyDocuments::sizeOf(bdLobbyDocuments *this)
{
  return ?sizeOf@bdLobbyDocuments@@UEAAIXZ(this);
}

/*
==============
bdLobbyDocuments::deserialize
==============
*/

bool __fastcall bdLobbyDocuments::deserialize(bdLobbyDocuments *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdLobbyDocuments@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdLobbyDocuments::bdLobbyDocuments
==============
*/

void __fastcall bdLobbyDocuments::bdLobbyDocuments(bdLobbyDocuments *this)
{
  ??0bdLobbyDocuments@@QEAA@XZ(this);
}

/*
==============
bdLobbyDocuments::bdLobbyDocuments
==============
*/
void bdLobbyDocuments::bdLobbyDocuments(bdLobbyDocuments *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdLobbyDocuments::`vbtable';
    *((_QWORD *)&this->m_backendDocLength + 1) = &bdReferencable::`vftable';
    *(&this->m_backendDocLength + 4) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdLobbyDocuments_vtbl *)&bdLobbyDocuments::`vftable'{for `bdTaskResult'};
  *(bdLobbyDocuments_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdLobbyDocuments_vtbl *)&bdLobbyDocuments::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  this->m_backendDoc = NULL;
  this->m_backendDocLength = 0;
}

/*
==============
bdLobbyDocuments::~bdLobbyDocuments
==============
*/
void bdLobbyDocuments::~bdLobbyDocuments(bdLobbyDocuments *this)
{
  char *m_backendDoc; 
  void *v3; 

  *((_QWORD *)&this[-1].__vftable + 2) = &bdLobbyDocuments::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 40) = &bdLobbyDocuments::`vftable'{for `bdReferencable'};
  m_backendDoc = this[-1].m_backendDoc;
  if ( m_backendDoc )
  {
    bdMemory::deallocate(m_backendDoc);
    this[-1].m_backendDoc = NULL;
    this[-1].m_backendDocLength = 0;
  }
  v3 = (void *)*((_QWORD *)&this[-1].m_backendDocLength + 1);
  if ( v3 )
  {
    bdMemory::deallocate(v3);
    *((_QWORD *)&this[-1].m_backendDocLength + 1) = 0i64;
    *(&this[-1].m_backendDocLength + 4) = 0;
  }
  bdTaskResult::~bdTaskResult((bdLobbyDocuments *)((char *)this - 32));
}

/*
==============
bdLobbyDocuments::deallocate
==============
*/
void bdLobbyDocuments::deallocate(bdLobbyDocuments *this)
{
  void *v2; 
  char *m_backendDoc; 

  v2 = (void *)*((_QWORD *)&this->__vftable + 2);
  if ( v2 )
  {
    bdMemory::deallocate(v2);
    *((_QWORD *)&this->__vftable + 2) = 0i64;
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  m_backendDoc = this->m_backendDoc;
  if ( m_backendDoc )
  {
    bdMemory::deallocate(m_backendDoc);
    this->m_backendDoc = NULL;
    this->m_backendDocLength = 0;
  }
}

/*
==============
bdLobbyDocuments::deserialize
==============
*/
__int64 bdLobbyDocuments::deserialize(bdLobbyDocuments *this, bdReference<bdByteBuffer> buffer)
{
  void *v4; 
  unsigned int *v5; 
  char *m_backendDoc; 
  bool StringLength; 
  char *v8; 
  bool v9; 
  char *v10; 
  unsigned __int8 v11; 
  void *v12; 
  char *v13; 

  v4 = (void *)*((_QWORD *)&this->__vftable + 2);
  if ( v4 )
  {
    bdMemory::deallocate(v4);
    *((_QWORD *)&this->__vftable + 2) = 0i64;
    v5 = (unsigned int *)(&this->__vftable + 3);
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  else
  {
    v5 = (unsigned int *)(&this->__vftable + 3);
  }
  m_backendDoc = this->m_backendDoc;
  if ( m_backendDoc )
  {
    bdMemory::deallocate(m_backendDoc);
    this->m_backendDoc = NULL;
    this->m_backendDocLength = 0;
  }
  StringLength = bdByteBuffer::getStringLength((bdByteBuffer *)buffer.m_ptr->__vftable, v5);
  v8 = (char *)bdMemory::allocate(*v5 + 1);
  *((_QWORD *)&this->__vftable + 2) = v8;
  v9 = StringLength && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, v8, *v5 + 1) && bdByteBuffer::getStringLength((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_backendDocLength);
  v10 = (char *)bdMemory::allocate(this->m_backendDocLength + 1);
  this->m_backendDoc = v10;
  if ( v9 && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, v10, this->m_backendDocLength + 1) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobbyDocuments", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmatchmaking\\bdlobbydocuments.cpp", "bdLobbyDocuments::deserialize", 0x2Bu, "Deserialization failed");
    v12 = (void *)*((_QWORD *)&this->__vftable + 2);
    if ( v12 )
    {
      bdMemory::deallocate(v12);
      *((_QWORD *)&this->__vftable + 2) = 0i64;
      *v5 = 0;
    }
    v13 = this->m_backendDoc;
    if ( v13 )
    {
      bdMemory::deallocate(v13);
      this->m_backendDoc = NULL;
      this->m_backendDocLength = 0;
    }
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v11;
}

/*
==============
bdLobbyDocuments::sizeOf
==============
*/
__int64 bdLobbyDocuments::sizeOf(bdLobbyDocuments *this)
{
  return *((_DWORD *)&this->__vftable + 6) + this->m_backendDocLength;
}

