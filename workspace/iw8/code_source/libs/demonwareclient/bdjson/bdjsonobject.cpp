/*
==============
bdJSONObject::containsKey
==============
*/

bool __fastcall bdJSONObject::containsKey(bdJSONObject *this, const bdString *key)
{
  return ?containsKey@bdJSONObject@@QEBA_NAEBVbdString@@@Z(this, key);
}

/*
==============
bdJSONObject::operator=
==============
*/

bdJSONObject *__fastcall bdJSONObject::operator=(bdJSONObject *this, const bdJSONObject *other)
{
  return ??4bdJSONObject@@IEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdJSONObject::operator[]
==============
*/

bdJSONValue *__fastcall bdJSONObject::operator[](bdJSONObject *this, const char *const key)
{
  return ??AbdJSONObject@@QEAAAEAVbdJSONValue@@QEBD@Z(this, key);
}

/*
==============
bdJSONObject::operator[]
==============
*/

bdJSONValue *__fastcall bdJSONObject::operator[](bdJSONObject *this, const bdString *key)
{
  return ??AbdJSONObject@@QEAAAEAVbdJSONValue@@AEBVbdString@@@Z(this, key);
}

/*
==============
bdJSONObject::parse
==============
*/

bool __fastcall bdJSONObject::parse(bdJSONObject *this, const char *jsonPtr, const char **outPtr)
{
  return ?parse@bdJSONObject@@IEAA_NPEBDPEAPEBD@Z(this, jsonPtr, outPtr);
}

/*
==============
bdJSONObject::removeKey
==============
*/

bool __fastcall bdJSONObject::removeKey(bdJSONObject *this, const bdString *key)
{
  return ?removeKey@bdJSONObject@@QEAA_NAEBVbdString@@@Z(this, key);
}

/*
==============
bdJSONObject::bdJSONObject
==============
*/

void __fastcall bdJSONObject::bdJSONObject(bdJSONObject *this, const bdJSONObject *other)
{
  ??0bdJSONObject@@IEAA@AEBV0@@Z(this, other);
}

/*
==============
bdJSONObject::removeKey
==============
*/

bool __fastcall bdJSONObject::removeKey(bdJSONObject *this, const char *const key)
{
  return ?removeKey@bdJSONObject@@QEAA_NQEBD@Z(this, key);
}

/*
==============
bdJSONObject::bdJSONObject
==============
*/

void __fastcall bdJSONObject::bdJSONObject(bdJSONObject *this)
{
  ??0bdJSONObject@@IEAA@XZ(this);
}

/*
==============
bdJSONObject::getAllKeys
==============
*/

void __fastcall bdJSONObject::getAllKeys(bdJSONObject *this, bdArray<bdString> *allKeys)
{
  ?getAllKeys@bdJSONObject@@QEBAXAEAV?$bdArray@VbdString@@@@@Z(this, allKeys);
}

/*
==============
bdJSONObject::containsKey
==============
*/

bool __fastcall bdJSONObject::containsKey(bdJSONObject *this, const char *const key)
{
  return ?containsKey@bdJSONObject@@QEBA_NQEBD@Z(this, key);
}

/*
==============
bdJSONObject::getMap
==============
*/

bdHashMap<bdString,bdJSONValue,bdHashingClass> *__fastcall bdJSONObject::getMap(bdJSONObject *this)
{
  return ?getMap@bdJSONObject@@IEAAAEAV?$bdHashMap@VbdString@@VbdJSONValue@@VbdHashingClass@@@@XZ(this);
}

/*
==============
bdJSONObject::~bdJSONObject
==============
*/

void __fastcall bdJSONObject::~bdJSONObject(bdJSONObject *this)
{
  ??1bdJSONObject@@IEAA@XZ(this);
}

/*
==============
bdJSONObject::serialize
==============
*/

int __fastcall bdJSONObject::serialize(bdJSONObject *this, char *const outBuffer, const unsigned int outBufferSz)
{
  return ?serialize@bdJSONObject@@IEBAHQEADI@Z(this, outBuffer, outBufferSz);
}

/*
==============
bdJSONObject::bdJSONObject
==============
*/
void bdJSONObject::bdJSONObject(bdJSONObject *this, const bdJSONObject *other)
{
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::bdHashMap<bdString,bdJSONValue,bdHashingClass>(&this->m_map, 4u, *(const float *)&_XMM2);
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::clear(&this->m_map);
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::putAll(&this->m_map, &other->m_map);
}

/*
==============
bdJSONObject::bdJSONObject
==============
*/
void bdJSONObject::bdJSONObject(bdJSONObject *this)
{
  __asm { vmovss  xmm2, cs:__real@3f400000; loadFactor }
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::bdHashMap<bdString,bdJSONValue,bdHashingClass>(&this->m_map, 4u, *(const float *)&_XMM2);
}

/*
==============
bdJSONObject::~bdJSONObject
==============
*/
void bdJSONObject::~bdJSONObject(bdJSONObject *this)
{
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::clear(&this->m_map);
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::clear(&this->m_map);
  bdMemory::deallocate(this->m_map.m_map);
}

/*
==============
bdJSONObject::operator=
==============
*/
bdJSONObject *bdJSONObject::operator=(bdJSONObject *this, const bdJSONObject *other)
{
  if ( this != other )
  {
    bdHashMap<bdString,bdJSONValue,bdHashingClass>::clear(&this->m_map);
    bdHashMap<bdString,bdJSONValue,bdHashingClass>::putAll(&this->m_map, &other->m_map);
  }
  return this;
}

/*
==============
bdJSONObject::operator[]
==============
*/
bdJSONValue *bdJSONObject::operator[](bdJSONObject *this, const bdString *key)
{
  const bdJSONValue *v4; 
  bdJSONValue *result; 
  bdJSONValue *v6; 
  bdJSONValue v7; 

  if ( !bdHashMap<bdString,bdJSONValue,bdHashingClass>::containsKey(&this->m_map, key) )
  {
    bdJSONValue::bdJSONValue(&v7);
    bdHashMap<bdString,bdJSONValue,bdHashingClass>::put(&this->m_map, key, v4);
    bdJSONValue::~bdJSONValue(&v7);
  }
  result = (bdJSONValue *)bdHashMap<bdString,bdJSONValue,bdHashingClass>::getIterator(&this->m_map, key);
  v6 = result;
  if ( result )
  {
    bdHandleAssert(this->m_map.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdString,class bdJSONValue,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator", -2i64);
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
    return v6;
  }
  return result;
}

/*
==============
bdJSONObject::operator[]
==============
*/
bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *bdJSONObject::operator[](bdJSONObject *this, const char *const key)
{
  const bdString *v4; 
  bool v5; 
  const bdJSONValue *v6; 
  const bdJSONValue *v7; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v8; 
  unsigned __int64 Length; 
  const char *Buffer; 
  int v11; 
  int i; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v13; 
  bdJSONValue v15; 
  bdString v16; 
  bdString keya; 
  bdString v18; 

  bdString::bdString(&v18, key);
  v5 = bdHashMap<bdString,bdJSONValue,bdHashingClass>::containsKey(&this->m_map, v4);
  bdString::~bdString(&v18);
  if ( !v5 )
  {
    bdJSONValue::bdJSONValue(&v15);
    v7 = v6;
    bdString::bdString(&keya, key);
    bdHashMap<bdString,bdJSONValue,bdHashingClass>::put(&this->m_map, &keya, v7);
    bdString::~bdString(&keya);
    bdJSONValue::~bdJSONValue(&v15);
  }
  bdString::bdString(&v16, key);
  if ( this->m_map.m_size )
  {
    Length = bdString::getLength(&v16);
    Buffer = bdString::getBuffer(&v16);
    v8 = NULL;
    v11 = 0;
    for ( i = 0; Length; --Length )
      v11 = (unsigned __int8)Buffer[i++] ^ (16777619 * v11);
    v13 = this->m_map.m_map[v11 & (this->m_map.m_capacity - 1)];
    if ( v13 )
    {
      while ( !bdString::operator==(&v16, &v13->m_key) )
      {
        v13 = v13->m_next;
        if ( !v13 )
          goto LABEL_12;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 1u);
      v8 = v13;
    }
  }
  else
  {
    v8 = NULL;
  }
LABEL_12:
  bdString::~bdString(&v16);
  if ( v8 )
  {
    bdHandleAssert(this->m_map.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdString,class bdJSONValue,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator", -2i64);
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
  }
  return v8;
}

/*
==============
bdJSONObject::containsKey
==============
*/

bool __fastcall bdJSONObject::containsKey(bdJSONObject *this, const bdString *key)
{
  return bdHashMap<bdString,bdJSONValue,bdHashingClass>::containsKey(&this->m_map, key);
}

/*
==============
bdJSONObject::containsKey
==============
*/
__int64 bdJSONObject::containsKey(bdJSONObject *this, const char *const key)
{
  const bdString *v3; 
  bdString v5; 

  bdString::bdString(&v5, key);
  LOBYTE(this) = bdHashMap<bdString,bdJSONValue,bdHashingClass>::containsKey(&this->m_map, v3);
  bdString::~bdString(&v5);
  return (unsigned __int8)this;
}

/*
==============
bdJSONObject::getAllKeys
==============
*/
void bdJSONObject::getAllKeys(bdJSONObject *this, bdArray<bdString> *allKeys)
{
  unsigned int m_size; 
  bdString *m_data; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int m_capacity; 
  __int64 v9; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node **m_map; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v11; 
  unsigned int v12; 
  bdString *v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 

  m_size = allKeys->m_size;
  m_data = allKeys->m_data;
  if ( m_size )
  {
    v6 = m_size;
    do
    {
      bdString::~bdString(m_data++);
      --v6;
    }
    while ( v6 );
    m_data = allKeys->m_data;
  }
  bdMemory::deallocate(m_data);
  v7 = 0;
  allKeys->m_data = NULL;
  *(_QWORD *)&allKeys->m_capacity = 0i64;
  if ( this->m_map.m_size )
  {
    bdArray<bdString>::increaseCapacity(allKeys, this->m_map.m_size);
    if ( this->m_map.m_size )
    {
      m_capacity = this->m_map.m_capacity;
      if ( m_capacity )
      {
        do
        {
          if ( this->m_map.m_map[v7] )
            break;
          ++v7;
        }
        while ( v7 < m_capacity );
      }
      v9 = v7;
      m_map = this->m_map.m_map;
      if ( m_map[v9] )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 1u);
        m_map = this->m_map.m_map;
      }
      v11 = m_map[v9];
LABEL_13:
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = allKeys->m_size;
          if ( v12 == allKeys->m_capacity )
          {
            bdArray<bdString>::increaseCapacity(allKeys, 1u);
            v12 = allKeys->m_size;
          }
          v13 = &allKeys->m_data[v12];
          if ( v13 )
          {
            bdString::bdString(v13, &v11->m_key);
            v12 = allKeys->m_size;
          }
          allKeys->m_size = v12 + 1;
          if ( v11->m_next )
          {
            v11 = v11->m_next;
            goto LABEL_13;
          }
          v14 = bdHashingClass::getHash<bdString>(&this->m_map.m_hashClass, &v11->m_key);
          v15 = this->m_map.m_capacity;
          v16 = (v14 & (v15 - 1)) + 1;
          if ( (unsigned int)v16 >= v15 )
            break;
          while ( 1 )
          {
            v11 = this->m_map.m_map[v16];
            if ( v11 )
              break;
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v15 )
              goto LABEL_23;
          }
        }
LABEL_23:
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
      }
    }
  }
}

/*
==============
bdJSONObject::getMap
==============
*/
bdJSONObject *bdJSONObject::getMap(bdJSONObject *this)
{
  return this;
}

/*
==============
bdJSONObject::parse
==============
*/
bool bdJSONObject::parse(bdJSONObject *this, const char *jsonPtr, const char **outPtr)
{
  const char *v4; 
  __int64 v6; 
  bool v7; 
  char *v8; 
  char v9; 
  _BYTE *v10; 
  char *v11; 
  char v12; 
  _BYTE *v13; 
  _BYTE *v14; 
  char v15; 
  bool result; 
  const char *v17; 
  char *jsonStr; 
  bdString key; 
  bdJSONValue value; 
  __int64 v21; 
  char input[256]; 
  char outBuffer[256]; 

  v21 = -2i64;
  v4 = jsonPtr;
  v6 = 0x100002600i64;
  if ( jsonPtr )
  {
    while ( *jsonPtr <= 0x20u && _bittest64(&v6, *jsonPtr) )
      ++jsonPtr;
  }
  jsonStr = (char *)jsonPtr;
  if ( *jsonPtr == 123 )
  {
    v7 = jsonPtr + 1 == NULL;
    v8 = (char *)(jsonPtr + 1);
    jsonStr = v8;
    if ( !v7 )
    {
      while ( (unsigned __int8)*v8 <= 0x20u && _bittest64(&v6, *v8) )
        ++v8;
    }
    jsonStr = v8;
    v9 = 1;
    while ( 2 )
    {
      switch ( *v8 )
      {
        case 9:
        case 10:
        case 13:
        case 32:
          while ( (unsigned __int8)*v8 <= 0x20u && _bittest64(&v6, *v8) )
            ++v8;
          goto LABEL_24;
        case 34:
          v10 = v8 + 1;
          jsonStr = v8 + 1;
          memset_0(input, 0, sizeof(input));
          v11 = input;
          v12 = *v10;
          v13 = v10;
          if ( *v10 )
          {
            v14 = v10;
            do
            {
              v13 = v14;
              if ( v12 == 34 )
                break;
              if ( v12 == 92 )
              {
                v10 = v14 + 1;
                jsonStr = v14 + 1;
                *v11++ = 92;
                ++v14;
              }
              v15 = *v10;
              v10 = v14 + 1;
              jsonStr = v14 + 1;
              *v11++ = v15;
              v12 = v14[1];
              v14 = v10;
              v13 = v10;
            }
            while ( v12 );
          }
          *v11 = 0;
          jsonStr = v13 + 1;
          jsonStr = (char *)bdJSONUtility::skipSeparator(v13 + 1, 58);
          bdJSONValue::bdJSONValue(&value);
          if ( !bdJSONValue::parse(&value, jsonStr, (const char **)&jsonStr) || bdJSONUtility::deescapeString(input, outBuffer, 0x100u) == -1 )
          {
            v9 = 0;
          }
          else
          {
            bdString::bdString(&key, outBuffer);
            bdHashMap<bdString,bdJSONValue,bdHashingClass>::put(&this->m_map, &key, &value);
            bdString::~bdString(&key);
          }
          bdJSONValue::~bdJSONValue(&value);
          v8 = jsonStr;
          goto LABEL_25;
        case 44:
          ++v8;
LABEL_24:
          jsonStr = v8;
LABEL_25:
          if ( !v9 )
            break;
          continue;
        case 125:
          v17 = v8 + 1;
          result = 1;
          if ( outPtr )
            *outPtr = v17;
          return result;
        default:
          goto LABEL_26;
      }
      break;
    }
  }
LABEL_26:
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONObject", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonobject.cpp", "bdJSONObject::parse", 0x144u, "Error: Failed to parsing JSON dict object from[%s]\n", v4);
  return 0;
}

/*
==============
bdJSONObject::removeKey
==============
*/

bool __fastcall bdJSONObject::removeKey(bdJSONObject *this, const bdString *key)
{
  return bdHashMap<bdString,bdJSONValue,bdHashingClass>::remove(&this->m_map, key);
}

/*
==============
bdJSONObject::removeKey
==============
*/
__int64 bdJSONObject::removeKey(bdJSONObject *this, const char *const key)
{
  const bdString *v3; 
  bdString v5; 

  bdString::bdString(&v5, key);
  LOBYTE(this) = bdHashMap<bdString,bdJSONValue,bdHashingClass>::remove(&this->m_map, v3);
  bdString::~bdString(&v5);
  return (unsigned __int8)this;
}

/*
==============
bdJSONObject::serialize
==============
*/
__int64 bdJSONObject::serialize(bdJSONObject *this, char *const outBuffer, const unsigned int outBufferSz)
{
  unsigned int v3; 
  __int64 v5; 
  int v7; 
  int v8; 
  char v9; 
  unsigned int v10; 
  unsigned int m_capacity; 
  __int64 v12; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node **m_map; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *v14; 
  int v15; 
  const bdString *p_m_key; 
  const char *Buffer; 
  int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  char v23; 
  __int64 result; 
  char v25; 
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *Iterator; 
  __int64 v27; 
  const bdString *v28; 
  const char *v29; 
  __int64 v30; 
  __int64 v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  __int64 v35; 
  int v36; 

  v3 = outBufferSz;
  LODWORD(v5) = 1;
  v7 = 1;
  v8 = BD_JSON_CONFIG_3.m_prettyPrint + 1;
  v9 = 1;
  v36 = v8;
  if ( this->m_map.m_size )
  {
    m_capacity = this->m_map.m_capacity;
    v12 = 0i64;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_map.m_map[v12] )
          break;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < m_capacity );
      v8 = BD_JSON_CONFIG_3.m_prettyPrint + 1;
    }
    m_map = this->m_map.m_map;
    if ( m_map[v12] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 1u);
      m_map = this->m_map.m_map;
    }
    v14 = m_map[v12];
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = v8 + v7;
        p_m_key = &v14->m_key;
        if ( v9 )
          v15 = v7;
        Buffer = bdString::getBuffer((bdString *)&v14->m_key);
        v18 = bdJSONUtility::escapeString(Buffer, NULL, 0, BD_JSON_CONFIG_3.m_utf8Replace) + 2;
        v19 = bdJSONValue::serialize(&v14->m_data, NULL, 0);
        if ( v18 == 1 || v19 == -1 )
          break;
        v8 = v36;
        v14 = v14->m_next;
        v7 = v36 + v18 + v15 + v19;
        v9 = 0;
        if ( !v14 )
        {
          v20 = bdHashingClass::getHash<bdString>(&this->m_map.m_hashClass, p_m_key);
          v21 = this->m_map.m_capacity;
          v22 = (v20 & (v21 - 1)) + 1;
          if ( (unsigned int)v22 >= v21 )
          {
LABEL_18:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
            v3 = outBufferSz;
            goto LABEL_20;
          }
          while ( 1 )
          {
            v14 = this->m_map.m_map[v22];
            if ( v14 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_18;
          }
          v8 = v36;
        }
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdJSON/bdJSONObject", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonobject.cpp", "bdJSONObject::serialize", 0x8Fu, "Invalid JSON Object value serialization");
      v23 = 0;
      v7 = v15;
      bdHandleAssert(this->m_map.m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdString,class bdJSONValue,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
      v3 = outBufferSz;
    }
    else
    {
LABEL_20:
      v23 = 1;
    }
    v10 = v7 + 1;
    if ( !v23 )
      return 0xFFFFFFFFi64;
  }
  else
  {
    v10 = 2;
  }
  if ( !outBuffer )
    return v10;
  if ( v3 <= v10 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONObject", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonobject.cpp", "bdJSONObject::serialize", 0xDAu, "Error: Cannot write [%u]bytes, [%d]bytes left in buffer", v10, v3);
    return 0xFFFFFFFFi64;
  }
  *outBuffer = 123;
  v25 = 1;
  Iterator = (bdHashMap<bdString,bdJSONValue,bdHashingClass>::Node *)bdHashMap<bdString,bdJSONValue,bdHashingClass>::getIterator(&this->m_map);
  if ( Iterator )
  {
    while ( 1 )
    {
      do
      {
        if ( !v25 )
        {
          v27 = (unsigned int)v5;
          v5 = (unsigned int)(v5 + 1);
          outBuffer[v27] = 44;
          if ( BD_JSON_CONFIG_3.m_prettyPrint )
          {
            outBuffer[v5] = 32;
            LODWORD(v5) = v5 + 1;
          }
        }
        v28 = &Iterator->m_key;
        outBuffer[(unsigned int)v5] = 34;
        v29 = bdString::getBuffer((bdString *)&Iterator->m_key);
        v30 = (unsigned int)(bdJSONUtility::escapeString(v29, &outBuffer[(unsigned int)(v5 + 1)], v3 - (v5 + 1), BD_JSON_CONFIG_3.m_utf8Replace) + v5 + 1);
        outBuffer[v30] = 34;
        v31 = (unsigned int)(v30 + 1);
        outBuffer[v31] = 58;
        v5 = (unsigned int)(v31 + 1);
        if ( BD_JSON_CONFIG_3.m_prettyPrint )
        {
          outBuffer[v5] = 32;
          LODWORD(v5) = v5 + 1;
        }
        v32 = bdJSONValue::serialize(&Iterator->m_data, &outBuffer[(unsigned int)v5], v3 - v5);
        Iterator = Iterator->m_next;
        LODWORD(v5) = v32 + v5;
        v25 = 0;
      }
      while ( Iterator );
      v33 = bdHashingClass::getHash<bdString>(&this->m_map.m_hashClass, v28);
      v34 = this->m_map.m_capacity;
      v35 = (v33 & (v34 - 1)) + 1;
      if ( (unsigned int)v35 >= v34 )
        break;
      while ( 1 )
      {
        Iterator = this->m_map.m_map[v35];
        if ( Iterator )
          break;
        v35 = (unsigned int)(v35 + 1);
        if ( (unsigned int)v35 >= v34 )
          goto LABEL_36;
      }
    }
LABEL_36:
    Iterator = NULL;
    _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_map.m_numIterators, 0xFFFFFFFF);
  }
  bdHashMap<bdString,bdJSONValue,bdHashingClass>::releaseIterator(&this->m_map, Iterator);
  outBuffer[(unsigned int)v5] = 125;
  result = (unsigned int)(v5 + 1);
  outBuffer[result] = 0;
  return result;
}

