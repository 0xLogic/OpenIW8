/*
==============
bdLobbyService::getService<bdPerformance>
==============
*/

bdPerformance *__fastcall bdLobbyService::getService<bdPerformance>(bdLobbyService *this)
{
  return ??$getService@VbdPerformance@@@bdLobbyService@@QEAAPEAVbdPerformance@@XZ(this);
}

/*
==============
bdLobbyService::getService<bdAsyncMatchMaking>
==============
*/

bdAsyncMatchMaking *__fastcall bdLobbyService::getService<bdAsyncMatchMaking>(bdLobbyService *this)
{
  return ??$getService@VbdAsyncMatchMaking@@@bdLobbyService@@QEAAPEAVbdAsyncMatchMaking@@XZ(this);
}

/*
==============
bdLobbyService::operator delete
==============
*/

void __fastcall bdLobbyService::operator delete(void *p)
{
  ??3bdLobbyService@@SAXPEAX@Z(p);
}

/*
==============
bdLobbyService::getService<bdAsyncMatchMaking>
==============
*/
bdService *bdLobbyService::getService<bdAsyncMatchMaking>(bdLobbyService *this)
{
  bdService *m_data; 
  unsigned __int64 Length; 
  const char *Buffer; 
  int v6; 
  int i; 
  bdHashMap<bdString,bdService *,bdHashingClass>::Node *v8; 
  char v9; 
  bdAsyncMatchMaking *v10; 
  bdService *v11; 
  bdString key; 
  bdService *value[2]; 
  char buf[24]; 

  value[1] = (bdService *)-2i64;
  if ( bdLobbyService::getStatus(this) == BD_NOT_CONNECTED )
  {
    bdString::bdString(&key);
    m_data = NULL;
    bdSnprintf(buf, 0x13ui64, "%p", bdLobbyService::getService<bdAsyncMatchMaking>);
    bdString::operator+=(&key, buf);
    if ( !this->m_services.m_size )
      goto LABEL_9;
    Length = bdString::getLength(&key);
    Buffer = bdString::getBuffer(&key);
    v6 = 0;
    for ( i = 0; Length; --Length )
      v6 = (unsigned __int8)Buffer[i++] ^ (16777619 * v6);
    v8 = this->m_services.m_map[v6 & (this->m_services.m_capacity - 1)];
    if ( v8 )
    {
      while ( !bdString::operator==(&key, &v8->m_key) )
      {
        v8 = v8->m_next;
        if ( !v8 )
          goto LABEL_9;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_services.m_numIterators, 1u);
      m_data = v8->m_data;
      bdHandleAssert(this->m_services.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdString,class bdService *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_services.m_numIterators, 0xFFFFFFFF);
      v9 = 1;
    }
    else
    {
LABEL_9:
      v9 = 0;
    }
    if ( !v9 )
      m_data = NULL;
    if ( !m_data )
    {
      v10 = (bdAsyncMatchMaking *)bdMemory::allocate(0x10ui64);
      value[0] = v10;
      if ( v10 )
      {
        bdAsyncMatchMaking::bdAsyncMatchMaking(v10, this->m_taskManager);
        m_data = v11;
      }
      else
      {
        m_data = NULL;
      }
      value[0] = m_data;
      bdHashMap<bdString,bdService *,bdHashingClass>::put(&this->m_services, &key, value);
    }
    bdString::~bdString(&key);
    return m_data;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbyservice.h", "bdLobbyService::getService", 0x14Cu, "Not connected.");
    return 0i64;
  }
}

/*
==============
bdLobbyService::getService<bdPerformance>
==============
*/
bdService *bdLobbyService::getService<bdPerformance>(bdLobbyService *this)
{
  bdService *m_data; 
  unsigned __int64 Length; 
  const char *Buffer; 
  int v6; 
  int i; 
  bdHashMap<bdString,bdService *,bdHashingClass>::Node *v8; 
  char v9; 
  bdPerformance *v10; 
  bdService *v11; 
  bdString key; 
  bdService *value[2]; 
  char buf[24]; 

  value[1] = (bdService *)-2i64;
  if ( bdLobbyService::getStatus(this) == BD_NOT_CONNECTED )
  {
    bdString::bdString(&key);
    m_data = NULL;
    bdSnprintf(buf, 0x13ui64, "%p", bdLobbyService::getService<bdPerformance>);
    bdString::operator+=(&key, buf);
    if ( !this->m_services.m_size )
      goto LABEL_9;
    Length = bdString::getLength(&key);
    Buffer = bdString::getBuffer(&key);
    v6 = 0;
    for ( i = 0; Length; --Length )
      v6 = (unsigned __int8)Buffer[i++] ^ (16777619 * v6);
    v8 = this->m_services.m_map[v6 & (this->m_services.m_capacity - 1)];
    if ( v8 )
    {
      while ( !bdString::operator==(&key, &v8->m_key) )
      {
        v8 = v8->m_next;
        if ( !v8 )
          goto LABEL_9;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_services.m_numIterators, 1u);
      m_data = v8->m_data;
      bdHandleAssert(this->m_services.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdString,class bdService *,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_services.m_numIterators, 0xFFFFFFFF);
      v9 = 1;
    }
    else
    {
LABEL_9:
      v9 = 0;
    }
    if ( !v9 )
      m_data = NULL;
    if ( !m_data )
    {
      v10 = (bdPerformance *)bdMemory::allocate(0x20ui64);
      value[0] = v10;
      if ( v10 )
      {
        bdPerformance::bdPerformance(v10, this->m_taskManager, NULL);
        m_data = v11;
      }
      else
      {
        m_data = NULL;
      }
      value[0] = m_data;
      bdHashMap<bdString,bdService *,bdHashingClass>::put(&this->m_services, &key, value);
    }
    bdString::~bdString(&key);
    return m_data;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyService", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbyservice.h", "bdLobbyService::getService", 0x14Cu, "Not connected.");
    return 0i64;
  }
}

/*
==============
bdLobbyService::operator delete
==============
*/
void bdLobbyService::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

