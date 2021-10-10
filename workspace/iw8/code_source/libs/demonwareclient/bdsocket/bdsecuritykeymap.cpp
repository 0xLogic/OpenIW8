/*
==============
bdSecurityKeyMap::contains
==============
*/

bool __fastcall bdSecurityKeyMap::contains(bdSecurityKeyMap *this, const bdSecurityID *id)
{
  return ?contains@bdSecurityKeyMap@@QEBA_NAEBVbdSecurityID@@@Z(this, id);
}

/*
==============
bdSecurityKeyMap::unregisterKey
==============
*/

bool __fastcall bdSecurityKeyMap::unregisterKey(bdSecurityKeyMap *this, const bdSecurityID *id)
{
  return ?unregisterKey@bdSecurityKeyMap@@QEAA_NAEBVbdSecurityID@@@Z(this, id);
}

/*
==============
bdSecurityKeyMap::registerListener
==============
*/

void __fastcall bdSecurityKeyMap::registerListener(bdSecurityKeyMap *this, bdSecurityKeyMapListener *listener)
{
  ?registerListener@bdSecurityKeyMap@@QEAAXPEAVbdSecurityKeyMapListener@@@Z(this, listener);
}

/*
==============
bdSecurityKeyMap::bdSecurityKeyMap
==============
*/

void __fastcall bdSecurityKeyMap::bdSecurityKeyMap(bdSecurityKeyMap *this)
{
  ??0bdSecurityKeyMap@@QEAA@XZ(this);
}

/*
==============
bdSecurityKeyMap::get
==============
*/

bool __fastcall bdSecurityKeyMap::get(bdSecurityKeyMap *this, const bdSecurityID *id, bdSecurityKey *key)
{
  return ?get@bdSecurityKeyMap@@QEAA_NAEBVbdSecurityID@@AEAVbdSecurityKey@@@Z(this, id, key);
}

/*
==============
bdSecurityKeyMap::initKey
==============
*/

bool __fastcall bdSecurityKeyMap::initKey(bdSecurityID *id, bdSecurityKey *key)
{
  return ?initKey@bdSecurityKeyMap@@SA_NAEAVbdSecurityID@@AEAVbdSecurityKey@@@Z(id, key);
}

/*
==============
bdSecurityKeyMap::unregisterListener
==============
*/

void __fastcall bdSecurityKeyMap::unregisterListener(bdSecurityKeyMap *this)
{
  ?unregisterListener@bdSecurityKeyMap@@QEAAXXZ(this);
}

/*
==============
bdSecurityKeyMap::registerKey
==============
*/

bool __fastcall bdSecurityKeyMap::registerKey(bdSecurityKeyMap *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  return ?registerKey@bdSecurityKeyMap@@QEAA_NAEBVbdSecurityID@@AEBVbdSecurityKey@@@Z(this, id, key);
}

/*
==============
bdSecurityKeyMap::clear
==============
*/

void __fastcall bdSecurityKeyMap::clear(bdSecurityKeyMap *this)
{
  ?clear@bdSecurityKeyMap@@QEAAXXZ(this);
}

/*
==============
bdSecurityKeyMap::bdSecurityKeyMap
==============
*/
void bdSecurityKeyMap::bdSecurityKeyMap(bdSecurityKeyMap *this)
{
  unsigned int PowerOf2; 
  float v3; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node **v4; 

  this->m_listener = NULL;
  this->m_map.m_numIterators.m_value._My_val = 0;
  this->m_map.m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  this->m_map.m_capacity = PowerOf2;
  this->m_map.m_loadFactor = 0.75;
  v3 = (float)PowerOf2;
  this->m_map.m_threshold = (int)(float)(v3 * 0.75);
  v4 = (bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  this->m_map.m_map = v4;
  memset_0(v4, 0, 8i64 * this->m_map.m_capacity);
  bdSharedMutex::bdSharedMutex(&this->m_mutex);
}

/*
==============
bdSecurityKeyMap::clear
==============
*/
void bdSecurityKeyMap::clear(bdSecurityKeyMap *this)
{
  bdSharedMutex *p_m_mutex; 
  __int64 v3; 
  unsigned int m_capacity; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node **m_map; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node *v6; 
  unsigned __int8 *p_m_key; 
  unsigned int v8; 
  __int64 v9; 
  bdSharedMutex *v10; 

  p_m_mutex = &this->m_mutex;
  v10 = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  if ( this->m_listener && this->m_map.m_size )
  {
    v3 = 0i64;
    m_capacity = this->m_map.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_map.m_map[v3] )
          break;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < m_capacity );
    }
    m_map = this->m_map.m_map;
    if ( m_map[v3] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 1u);
      m_map = this->m_map.m_map;
      p_m_mutex = v10;
    }
    v6 = m_map[v3];
    if ( v6 )
    {
      while ( 1 )
      {
        do
        {
          p_m_key = (unsigned __int8 *)&v6->m_key;
          this->m_listener->onSecurityKeyRemove(this->m_listener, &v6->m_key);
          v6 = v6->m_next;
        }
        while ( v6 );
        v8 = this->m_map.m_capacity;
        v9 = ((p_m_key[7] ^ (16777619 * (p_m_key[6] ^ (16777619 * (p_m_key[5] ^ (16777619 * (p_m_key[4] ^ (16777619 * (p_m_key[3] ^ (16777619 * (p_m_key[2] ^ (16777619 * ((16777619 * *p_m_key) ^ p_m_key[1]))))))))))))) & (v8 - 1)) + 1;
        if ( (unsigned int)v9 >= v8 )
          break;
        while ( 1 )
        {
          v6 = this->m_map.m_map[v9];
          if ( v6 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_13;
        }
      }
LABEL_13:
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
      p_m_mutex = v10;
    }
  }
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::clear(&this->m_map);
  bdSharedMutex::unlock(p_m_mutex);
}

/*
==============
bdSecurityKeyMap::contains
==============
*/
_BOOL8 bdSecurityKeyMap::contains(bdSecurityKeyMap *this, const bdSecurityID *id)
{
  bdSharedMutex *p_m_mutex; 
  bool v5; 
  char buffer[40]; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  v5 = bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::containsKey(&this->m_map, id);
  bdSecurityInfo::toString(id, buffer, 0x24u);
  if ( v5 )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::contains", 0x83u, "Found bdSecurityID: [%s]", buffer);
  else
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::contains", 0x87u, "bdSecurityID: [%s] not present", buffer);
  bdSharedMutex::unlock_shared(p_m_mutex);
  return v5;
}

/*
==============
bdSecurityKeyMap::get
==============
*/
__int64 bdSecurityKeyMap::get(bdSecurityKeyMap *this, const bdSecurityID *id, bdSecurityKey *key)
{
  bdSharedMutex *p_m_mutex; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass> *p_m_map; 
  bdSecurityKey *Iterator; 
  unsigned __int8 v9; 
  bdSharedMutex *v11; 
  char buffer[40]; 

  p_m_mutex = &this->m_mutex;
  v11 = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  p_m_map = &this->m_map;
  Iterator = (bdSecurityKey *)bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::getIterator(p_m_map, id);
  if ( Iterator )
  {
    *key = *Iterator;
    bdHandleAssert(p_m_map->m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdSecurityID,class bdSecurityKey,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
    _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_map->m_numIterators, 0xFFFFFFFF);
    v9 = 1;
    p_m_mutex = v11;
  }
  else
  {
    v9 = 0;
  }
  bdSecurityInfo::toString(id, buffer, 0x24u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::get", 0x67u, "Searching for bdSecurityID: [%s]", buffer);
  if ( v9 )
  {
    bdSecurityInfo::toString(key, buffer, 0x24u);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::get", 0x6Cu, "Found bdSecurityKey: [%s]", buffer);
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::get", 0x70u, "bdSecurityID: [%s] not present", buffer);
  }
  bdSharedMutex::unlock_shared(p_m_mutex);
  return v9;
}

/*
==============
bdSecurityKeyMap::initKey
==============
*/
char bdSecurityKeyMap::initKey(bdSecurityID *id, bdSecurityKey *key)
{
  bdTrulyRandomImpl *Instance; 
  bdTrulyRandomImpl *v5; 
  char buffer[40]; 

  Instance = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(Instance, (unsigned __int8 *)id, 8u);
  v5 = bdSingleton<bdTrulyRandomImpl>::getInstance();
  bdTrulyRandomImpl::getRandomUByte8(v5, key->ab, 0x10u);
  bdSecurityInfo::toString(id, buffer, 0x24u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::initKey", 0x22u, "Created bdSecurityID: [%s]", buffer);
  bdSecurityInfo::toString(key, buffer, 0x24u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::initKey", 0x24u, "Created bdSecurityKey: [%s]", buffer);
  return 1;
}

/*
==============
bdSecurityKeyMap::registerKey
==============
*/
_BOOL8 bdSecurityKeyMap::registerKey(bdSecurityKeyMap *this, const bdSecurityID *id, const bdSecurityKey *key)
{
  bdSharedMutex *p_m_mutex; 
  bool v7; 
  char buffer[40]; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  v7 = bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::put(&this->m_map, id, key);
  bdSecurityInfo::toString(id, buffer, 0x24u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::registerKey", 0x34u, "Putting bdSecurityID: [%s]", buffer);
  if ( v7 )
  {
    bdSecurityInfo::toString(key, buffer, 0x24u);
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::registerKey", 0x39u, "Putting bdSecurityKey: [%s]", buffer);
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::registerKey", 0x3Du, "bdSecurityID: [%s] already present", buffer);
  }
  bdSharedMutex::unlock(p_m_mutex);
  return v7;
}

/*
==============
bdSecurityKeyMap::registerListener
==============
*/
void bdSecurityKeyMap::registerListener(bdSecurityKeyMap *this, bdSecurityKeyMapListener *listener)
{
  bdSharedMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  bdHandleAssert(this->m_listener == NULL, "m_listener == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::registerListener", 0xA2u, "Only one listener is allowed at once.", -2i64);
  this->m_listener = listener;
  bdSharedMutex::unlock(p_m_mutex);
}

/*
==============
bdSecurityKeyMap::unregisterKey
==============
*/
__int64 bdSecurityKeyMap::unregisterKey(bdSecurityKeyMap *this, const bdSecurityID *id)
{
  __int64 v4; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node *v5; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node *v6; 
  unsigned __int8 v7; 
  bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::Node *m_next; 
  bdSharedMutex *p_m_mutex; 
  char buffer[40]; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  if ( this->m_listener && bdHashMap<bdSecurityID,bdSecurityKey,bdHashingClass>::containsKey(&this->m_map, id) )
    this->m_listener->onSecurityKeyRemove(this->m_listener, id);
  bdHandleAssert(this->m_map.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdSecurityID,class bdSecurityKey,class bdHashingClass>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
  v4 = (id->ab[7] ^ (16777619 * (id->ab[6] ^ (16777619 * (id->ab[5] ^ (16777619 * (id->ab[4] ^ (16777619 * (id->ab[3] ^ (16777619 * (id->ab[2] ^ (16777619 * (id->ab[1] ^ (16777619 * id->ab[0])))))))))))))) & (this->m_map.m_capacity - 1);
  v5 = this->m_map.m_map[v4];
  v6 = NULL;
  if ( v5 )
  {
    while ( !bdSecurityID::operator==((bdSecurityID *)id, &v5->m_key) )
    {
      v6 = v5;
      v5 = v5->m_next;
      if ( !v5 )
        goto LABEL_7;
    }
    m_next = v5->m_next;
    if ( v6 )
      v6->m_next = m_next;
    else
      this->m_map.m_map[v4] = m_next;
    bdSecurityID::~bdSecurityID((bdSecurityID *)&v5->m_key);
    bdSecurityKey::~bdSecurityKey(&v5->m_data);
    bdMemory::deallocate(v5);
    --this->m_map.m_size;
    v7 = 1;
  }
  else
  {
LABEL_7:
    v7 = 0;
  }
  bdSecurityInfo::toString(id, buffer, 0x24u);
  bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::unregisterKey", 0x52u, "Removing bdSecurityID: [%s]", buffer);
  if ( !v7 )
    bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/bdSecurityKeyMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdsecuritykeymap.cpp", "bdSecurityKeyMap::unregisterKey", 0x56u, "bdSecurityID: [%s] not present", buffer);
  bdSharedMutex::unlock(p_m_mutex);
  return v7;
}

/*
==============
bdSecurityKeyMap::unregisterListener
==============
*/
void bdSecurityKeyMap::unregisterListener(bdSecurityKeyMap *this)
{
  bdSharedMutex::lock(&this->m_mutex);
  this->m_listener = NULL;
  bdSharedMutex::unlock(&this->m_mutex);
}

