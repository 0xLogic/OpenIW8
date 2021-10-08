/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/

void __fastcall bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this, const bdStructFixedSizeArray<bdAchievementDefinition,100> *definitions, const char *nextPageToken)
{
  ??0bdGetAchievementDefinitionsResponse@@QEAA@AEBV?$bdStructFixedSizeArray@VbdAchievementDefinition@@$0GE@@@PEBD@Z(this, definitions, nextPageToken);
}

/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/

void __fastcall bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this, const bdArray<bdAchievementDefinition> *definitions, const char *nextPageToken)
{
  ??0bdGetAchievementDefinitionsResponse@@QEAA@AEBV?$bdArray@VbdAchievementDefinition@@@@PEBD@Z(this, definitions, nextPageToken);
}

/*
==============
bdGetAchievementDefinitionsResponse::getNextPageToken
==============
*/

const char *__fastcall bdGetAchievementDefinitionsResponse::getNextPageToken(bdGetAchievementDefinitionsResponse *this)
{
  return ?getNextPageToken@bdGetAchievementDefinitionsResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetAchievementDefinitionsResponse::getNumDefinitions
==============
*/

unsigned int __fastcall bdGetAchievementDefinitionsResponse::getNumDefinitions(bdGetAchievementDefinitionsResponse *this)
{
  return ?getNumDefinitions@bdGetAchievementDefinitionsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetAchievementDefinitionsResponse::deserialize
==============
*/

bool __fastcall bdGetAchievementDefinitionsResponse::deserialize(bdGetAchievementDefinitionsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetAchievementDefinitionsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/

void __fastcall bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this)
{
  ??0bdGetAchievementDefinitionsResponse@@QEAA@XZ(this);
}

/*
==============
bdGetAchievementDefinitionsResponse::operator==
==============
*/

bool __fastcall bdGetAchievementDefinitionsResponse::operator==(bdGetAchievementDefinitionsResponse *this, const bdGetAchievementDefinitionsResponse *rhs)
{
  return ??8bdGetAchievementDefinitionsResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetAchievementDefinitionsResponse::serialize
==============
*/

bool __fastcall bdGetAchievementDefinitionsResponse::serialize(bdGetAchievementDefinitionsResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGetAchievementDefinitionsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGetAchievementDefinitionsResponse::toString
==============
*/

bdString *__fastcall bdGetAchievementDefinitionsResponse::toString(bdGetAchievementDefinitionsResponse *this, bdString *result)
{
  return ?toString@bdGetAchievementDefinitionsResponse@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdGetAchievementDefinitionsResponse::operator!=
==============
*/

bool __fastcall bdGetAchievementDefinitionsResponse::operator!=(bdGetAchievementDefinitionsResponse *this, const bdGetAchievementDefinitionsResponse *rhs)
{
  return ??9bdGetAchievementDefinitionsResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetAchievementDefinitionsResponse::getDefinition
==============
*/

const bdAchievementDefinition *__fastcall bdGetAchievementDefinitionsResponse::getDefinition(bdGetAchievementDefinitionsResponse *this, unsigned int i)
{
  return ?getDefinition@bdGetAchievementDefinitionsResponse@@QEBAAEBVbdAchievementDefinition@@I@Z(this, i);
}

/*
==============
bdGetAchievementDefinitionsResponse::reset
==============
*/

void __fastcall bdGetAchievementDefinitionsResponse::reset(bdGetAchievementDefinitionsResponse *this)
{
  ?reset@bdGetAchievementDefinitionsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/
void bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this, const bdArray<bdAchievementDefinition> *definitions, const char *nextPageToken, int a4)
{
  unsigned int v7; 
  unsigned int m_size; 
  bool v9; 
  const bdAchievementDefinition *v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 

  v13 = -2i64;
  v7 = 0;
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementDefinitionsResponse::`vbtable';
    *(_QWORD *)&this->gap4B0F9[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4B0F9[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementDefinitionsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0xBF8ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementDefinition::bdAchievementDefinition, (void (__fastcall *)(void *))bdAchievementDefinition::`vbase destructor);
  *(_DWORD *)&this->m_definitions[306384] = 0;
  bdStructFixedSizeString<1024>::copy(&this->m_nextPageToken, nextPageToken);
  m_size = definitions->m_size;
  if ( m_size )
  {
    v9 = m_size != 0;
    do
    {
      bdHandleAssert(v9, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementDefinition>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed", v13);
      v10 = &definitions->m_data[v7];
      bdHandleAssert(*(_DWORD *)&this->m_definitions[306384] < 0x64u, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::pushBack", 0x40u, "No more capacity for pushBack");
      v11 = *(unsigned int *)&this->m_definitions[306384];
      if ( (unsigned int)v11 < 0x64 )
      {
        *(_DWORD *)&this->m_definitions[306384] = v11 + 1;
        bdAchievementDefinition::operator=((bdAchievementDefinition *)(&this->__vftable + 383 * v11 + 2), v10);
      }
      ++v7;
      v12 = definitions->m_size;
      v9 = v7 < v12;
    }
    while ( v7 < v12 );
  }
}

/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/
void bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this, const bdStructFixedSizeArray<bdAchievementDefinition,100> *definitions, const char *nextPageToken, int a4)
{
  unsigned int v7; 
  unsigned int m_size; 

  v7 = 0;
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementDefinitionsResponse::`vbtable';
    *(_QWORD *)&this->gap4B0F9[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4B0F9[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementDefinitionsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0xBF8ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementDefinition::bdAchievementDefinition, (void (__fastcall *)(void *))bdAchievementDefinition::`vbase destructor);
  *(_DWORD *)&this->m_definitions[306384] = 0;
  m_size = definitions->m_size;
  *(_DWORD *)&this->m_definitions[306384] = m_size;
  if ( m_size )
  {
    do
    {
      bdAchievementDefinition::operator=((bdAchievementDefinition *)(&this->__vftable + 383 * v7 + 2), &definitions->m_elements[v7]);
      ++v7;
    }
    while ( v7 < *(_DWORD *)&this->m_definitions[306384] );
  }
  bdStructFixedSizeString<1024>::copy(&this->m_nextPageToken, nextPageToken);
}

/*
==============
bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse
==============
*/
void bdGetAchievementDefinitionsResponse::bdGetAchievementDefinitionsResponse(bdGetAchievementDefinitionsResponse *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementDefinitionsResponse::`vbtable';
    *(_QWORD *)&this->gap4B0F9[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap4B0F9[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementDefinitionsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementDefinitionsResponse_vtbl *)&bdGetAchievementDefinitionsResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0xBF8ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementDefinition::bdAchievementDefinition, (void (__fastcall *)(void *))bdAchievementDefinition::`vbase destructor);
  *(_DWORD *)&this->m_definitions[306384] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetAchievementDefinitionsResponse *)-306424i64 )
  {
    v4 = 1024i64;
    if ( v3 < 0x400 )
      v4 = v3;
    memcpy_0(&this->m_nextPageToken, (char *)&queryFormat.fmt + 3, v4);
    this->m_nextPageToken.m_buffer[v4] = 0;
  }
}

/*
==============
bdGetAchievementDefinitionsResponse::operator==
==============
*/
char bdGetAchievementDefinitionsResponse::operator==(bdGetAchievementDefinitionsResponse *this, const bdGetAchievementDefinitionsResponse *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 

  v2 = *(_DWORD *)&this->m_definitions[306384];
  if ( v2 == *(_DWORD *)&rhs->m_definitions[306384] )
  {
    v5 = 0;
    if ( v2 )
    {
      v6 = v2 != 0;
      while ( 1 )
      {
        bdHandleAssert(v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range");
        bdHandleAssert(v5 < *(_DWORD *)&rhs->m_definitions[306384], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range");
        if ( bdAchievementDefinition::operator!=((bdAchievementDefinition *)(&this->__vftable + 383 * v5 + 2), (const bdAchievementDefinition *)(&rhs->__vftable + 383 * v5 + 2)) )
          break;
        v7 = *(_DWORD *)&this->m_definitions[306384];
        v6 = ++v5 < v7;
        if ( v5 >= v7 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( !strncmp(this->m_nextPageToken.m_buffer, rhs->m_nextPageToken.m_buffer, 0x400ui64) )
        return 1;
    }
  }
  return 0;
}

/*
==============
bdGetAchievementDefinitionsResponse::operator!=
==============
*/
bool bdGetAchievementDefinitionsResponse::operator!=(bdGetAchievementDefinitionsResponse *this, const bdGetAchievementDefinitionsResponse *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 

  v2 = *(_DWORD *)&this->m_definitions[306384];
  if ( v2 != *(_DWORD *)&rhs->m_definitions[306384] )
    goto LABEL_7;
  v5 = 0;
  if ( v2 )
  {
    v6 = v2 != 0;
    do
    {
      bdHandleAssert(v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range");
      bdHandleAssert(v5 < *(_DWORD *)&rhs->m_definitions[306384], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range");
      if ( bdAchievementDefinition::operator!=((bdAchievementDefinition *)(&this->__vftable + 383 * v5 + 2), (const bdAchievementDefinition *)(&rhs->__vftable + 383 * v5 + 2)) )
        goto LABEL_7;
      v7 = *(_DWORD *)&this->m_definitions[306384];
      v6 = ++v5 < v7;
    }
    while ( v5 < v7 );
  }
  v8 = strncmp(this->m_nextPageToken.m_buffer, rhs->m_nextPageToken.m_buffer, 0x400ui64);
  if ( v8 )
LABEL_7:
    LOBYTE(v8) = 1;
  return v8;
}

/*
==============
bdGetAchievementDefinitionsResponse::deserialize
==============
*/
bool bdGetAchievementDefinitionsResponse::deserialize(bdGetAchievementDefinitionsResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdGetAchievementDefinitionsResponse_vtbl **v4; 
  char v5; 
  char v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  bdAchievementDefinition __that; 

  v4 = &this->__vftable + 2;
  *(_DWORD *)&this->m_definitions[306384] = 0;
  v5 = 0;
  while ( !v5 )
  {
    bdAchievementDefinition::bdAchievementDefinition(&__that);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &__that) )
      goto LABEL_8;
    v6 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( *((_DWORD *)v4 + 76600) < 0x64u )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::pushBack", 0x40u, "No more capacity for pushBack");
        v8 = *((unsigned int *)v4 + 76600);
        if ( (unsigned int)v8 < 0x64 )
        {
          *((_DWORD *)v4 + 76600) = v8 + 1;
          bdAchievementDefinition::operator=((bdAchievementDefinition *)&v4[383 * v8], &__that);
        }
        goto LABEL_9;
      }
      LODWORD(v10) = 100;
      LODWORD(v9) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v9, v10);
LABEL_8:
      v6 = 0;
      goto LABEL_9;
    }
    v5 = 1;
LABEL_9:
    bdAchievementDefinition::~bdAchievementDefinition((bdAchievementDefinition *)__that.gapBE8);
    bdReferencable::~bdReferencable((bdReferencable *)__that.gapBE8);
    if ( !v6 )
      return 0;
  }
  return bdStructBufferDeserializer::readString(deserializer, 2u, this->m_nextPageToken.m_buffer, 0x401u);
}

/*
==============
bdGetAchievementDefinitionsResponse::getDefinition
==============
*/
const bdAchievementDefinition *bdGetAchievementDefinitionsResponse::getDefinition(bdGetAchievementDefinitionsResponse *this, unsigned int i)
{
  bdGetAchievementDefinitionsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = i;
  bdHandleAssert(i < *(_DWORD *)&this->m_definitions[306384], "i < m_definitions.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementdefinitionsresponse.cpp", "bdGetAchievementDefinitionsResponse::getDefinition", 0x37u, "getDefinition out of range");
  v2 = (bdGetAchievementDefinitionsResponse *)((char *)v2 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_definitions[306368], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range");
  return (const bdAchievementDefinition *)((char *)v2 + 3064 * v3);
}

/*
==============
bdGetAchievementDefinitionsResponse::getNextPageToken
==============
*/
bdStructFixedSizeString<1024> *bdGetAchievementDefinitionsResponse::getNextPageToken(bdGetAchievementDefinitionsResponse *this)
{
  return &this->m_nextPageToken;
}

/*
==============
bdGetAchievementDefinitionsResponse::getNumDefinitions
==============
*/
__int64 bdGetAchievementDefinitionsResponse::getNumDefinitions(bdGetAchievementDefinitionsResponse *this)
{
  return *(unsigned int *)&this->m_definitions[306384];
}

/*
==============
bdGetAchievementDefinitionsResponse::reset
==============
*/
void bdGetAchievementDefinitionsResponse::reset(bdGetAchievementDefinitionsResponse *this)
{
  *(_DWORD *)&this->m_definitions[306384] = 0;
  bdStructFixedSizeString<1024>::copy(&this->m_nextPageToken, (const char *const)&queryFormat.fmt + 3);
}

/*
==============
bdGetAchievementDefinitionsResponse::serialize
==============
*/
bool bdGetAchievementDefinitionsResponse::serialize(bdGetAchievementDefinitionsResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementdefinitionsresponse.cpp", "bdGetAchievementDefinitionsResponse::serialize", 0x48u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetAchievementDefinitionsResponse::toString
==============
*/
bdString *bdGetAchievementDefinitionsResponse::toString(bdGetAchievementDefinitionsResponse *this, bdString *result)
{
  unsigned int v3; 
  bdStructFixedSizeString<1024> *p_m_nextPageToken; 
  bdGetAchievementDefinitionsResponse_vtbl **v5; 
  bdString *v6; 
  bdString *v7; 
  int v8; 
  const char *Buffer; 
  __int64 v11; 
  __int64 v12; 
  bdString resulta; 
  bdString v14; 

  v14.m_string = (char *)result;
  v12 = -2i64;
  v3 = 0;
  p_m_nextPageToken = &this->m_nextPageToken;
  v5 = &this->__vftable + 2;
  bdString::bdString(&v14);
  v7 = v6;
  v8 = 2;
  LODWORD(v11) = 2;
  bdString::operator+=(&v14, "[");
  if ( *((_DWORD *)v5 + 76600) )
  {
    do
    {
      if ( v3 )
        bdString::operator+=(&v14, " , ");
      bdHandleAssert(v3 < *((_DWORD *)v5 + 76600), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementDefinition,100>::operator []", 0x54u, "i is out of range", v11, v12);
      bdAchievementDefinition::toString((bdAchievementDefinition *)&v5[383 * v3], &resulta);
      v8 |= 4u;
      LODWORD(v11) = v8;
      bdString::operator+=(&v14, &resulta);
      bdString::~bdString(&resulta);
      ++v3;
    }
    while ( v3 < *((_DWORD *)v5 + 76600) );
  }
  bdString::operator+=(&v14, "]");
  Buffer = bdString::getBuffer(v7);
  makeFormattedString(result, "{ definitions:%s , nextPageToken:%s }", Buffer, p_m_nextPageToken->m_buffer);
  bdString::~bdString(&v14);
  return result;
}

