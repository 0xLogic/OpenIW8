/*
==============
bdGetAchievementStatesResponse::addState
==============
*/

bdGetAchievementStatesResponse *__fastcall bdGetAchievementStatesResponse::addState(bdGetAchievementStatesResponse *this, const bdAchievementState *state)
{
  return ?addState@bdGetAchievementStatesResponse@@QEAAAEAV1@AEBVbdAchievementState@@@Z(this, state);
}

/*
==============
bdGetAchievementStatesResponse::deserialize
==============
*/

bool __fastcall bdGetAchievementStatesResponse::deserialize(bdGetAchievementStatesResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetAchievementStatesResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetAchievementStatesResponse::operator==
==============
*/

bool __fastcall bdGetAchievementStatesResponse::operator==(bdGetAchievementStatesResponse *this, const bdGetAchievementStatesResponse *rhs)
{
  return ??8bdGetAchievementStatesResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetAchievementStatesResponse::bdGetAchievementStatesResponse
==============
*/

void __fastcall bdGetAchievementStatesResponse::bdGetAchievementStatesResponse(bdGetAchievementStatesResponse *this)
{
  ??0bdGetAchievementStatesResponse@@QEAA@XZ(this);
}

/*
==============
bdGetAchievementStatesResponse::setNextPageToken
==============
*/

bdGetAchievementStatesResponse *__fastcall bdGetAchievementStatesResponse::setNextPageToken(bdGetAchievementStatesResponse *this, const char *nextPageToken)
{
  return ?setNextPageToken@bdGetAchievementStatesResponse@@QEAAAEAV1@PEBD@Z(this, nextPageToken);
}

/*
==============
bdGetAchievementStatesResponse::operator!=
==============
*/

bool __fastcall bdGetAchievementStatesResponse::operator!=(bdGetAchievementStatesResponse *this, const bdGetAchievementStatesResponse *rhs)
{
  return ??9bdGetAchievementStatesResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetAchievementStatesResponse::getNextPageToken
==============
*/

const char *__fastcall bdGetAchievementStatesResponse::getNextPageToken(bdGetAchievementStatesResponse *this)
{
  return ?getNextPageToken@bdGetAchievementStatesResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetAchievementStatesResponse::getState
==============
*/

const bdAchievementState *__fastcall bdGetAchievementStatesResponse::getState(bdGetAchievementStatesResponse *this, unsigned int i)
{
  return ?getState@bdGetAchievementStatesResponse@@QEBAAEBVbdAchievementState@@I@Z(this, i);
}

/*
==============
bdGetAchievementStatesResponse::getNumStates
==============
*/

unsigned int __fastcall bdGetAchievementStatesResponse::getNumStates(bdGetAchievementStatesResponse *this)
{
  return ?getNumStates@bdGetAchievementStatesResponse@@QEBAIXZ(this);
}

/*
==============
bdGetAchievementStatesResponse::serialize
==============
*/

bool __fastcall bdGetAchievementStatesResponse::serialize(bdGetAchievementStatesResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGetAchievementStatesResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGetAchievementStatesResponse::reset
==============
*/

void __fastcall bdGetAchievementStatesResponse::reset(bdGetAchievementStatesResponse *this)
{
  ?reset@bdGetAchievementStatesResponse@@QEAAXXZ(this);
}

/*
==============
bdGetAchievementStatesResponse::toString
==============
*/

bdString *__fastcall bdGetAchievementStatesResponse::toString(bdGetAchievementStatesResponse *this, bdString *result)
{
  return ?toString@bdGetAchievementStatesResponse@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdGetAchievementStatesResponse::bdGetAchievementStatesResponse
==============
*/
void bdGetAchievementStatesResponse::bdGetAchievementStatesResponse(bdGetAchievementStatesResponse *this, int a2)
{
  unsigned __int64 v3; 
  size_t v4; 

  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetAchievementStatesResponse::`vbtable';
    *(_QWORD *)&this->gapDBB9[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gapDBB9[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetAchievementStatesResponse_vtbl *)&bdGetAchievementStatesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementStatesResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetAchievementStatesResponse_vtbl *)&bdGetAchievementStatesResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x228ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementState::bdAchievementState, (void (__fastcall *)(void *))bdAchievementState::`vbase destructor);
  *(_DWORD *)&this->m_states[55184] = 0;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdGetAchievementStatesResponse *)-55224i64 )
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
bdGetAchievementStatesResponse::operator==
==============
*/
char bdGetAchievementStatesResponse::operator==(bdGetAchievementStatesResponse *this, const bdGetAchievementStatesResponse *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 

  v2 = *(_DWORD *)&this->m_states[55184];
  if ( v2 == *(_DWORD *)&rhs->m_states[55184] )
  {
    v5 = 0;
    if ( v2 )
    {
      v6 = v2 != 0;
      while ( 1 )
      {
        bdHandleAssert(v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range");
        bdHandleAssert(v5 < *(_DWORD *)&rhs->m_states[55184], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range");
        if ( bdAchievementState::operator!=((bdAchievementState *)(&this->__vftable + 69 * v5 + 2), (const bdAchievementState *)(&rhs->__vftable + 69 * v5 + 2)) )
          break;
        v7 = *(_DWORD *)&this->m_states[55184];
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
bdGetAchievementStatesResponse::operator!=
==============
*/
bool bdGetAchievementStatesResponse::operator!=(bdGetAchievementStatesResponse *this, const bdGetAchievementStatesResponse *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  int v8; 

  v2 = *(_DWORD *)&this->m_states[55184];
  if ( v2 != *(_DWORD *)&rhs->m_states[55184] )
    goto LABEL_7;
  v5 = 0;
  if ( v2 )
  {
    v6 = v2 != 0;
    do
    {
      bdHandleAssert(v6, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range");
      bdHandleAssert(v5 < *(_DWORD *)&rhs->m_states[55184], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range");
      if ( bdAchievementState::operator!=((bdAchievementState *)(&this->__vftable + 69 * v5 + 2), (const bdAchievementState *)(&rhs->__vftable + 69 * v5 + 2)) )
        goto LABEL_7;
      v7 = *(_DWORD *)&this->m_states[55184];
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
bdGetAchievementStatesResponse::addState
==============
*/
bdGetAchievementStatesResponse *bdGetAchievementStatesResponse::addState(bdGetAchievementStatesResponse *this, const bdAchievementState *state)
{
  bdStructFixedSizeArray<bdAchievementState,100>::pushBack((bdStructFixedSizeArray<bdAchievementState,100> *)(&this->__vftable + 2), state);
  return this;
}

/*
==============
bdGetAchievementStatesResponse::deserialize
==============
*/
bool bdGetAchievementStatesResponse::deserialize(bdGetAchievementStatesResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdAchievementState,100>(deserializer, 1u, (bdStructFixedSizeArray<bdAchievementState,100> *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_nextPageToken.m_buffer, 0x401u);
}

/*
==============
bdGetAchievementStatesResponse::getNextPageToken
==============
*/
bdStructFixedSizeString<1024> *bdGetAchievementStatesResponse::getNextPageToken(bdGetAchievementStatesResponse *this)
{
  return &this->m_nextPageToken;
}

/*
==============
bdGetAchievementStatesResponse::getNumStates
==============
*/
__int64 bdGetAchievementStatesResponse::getNumStates(bdGetAchievementStatesResponse *this)
{
  return *(unsigned int *)&this->m_states[55184];
}

/*
==============
bdGetAchievementStatesResponse::getState
==============
*/
const bdAchievementState *bdGetAchievementStatesResponse::getState(bdGetAchievementStatesResponse *this, unsigned int i)
{
  bdGetAchievementStatesResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = i;
  bdHandleAssert(i < *(_DWORD *)&this->m_states[55184], "i < m_states.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementstatesresponse.cpp", "bdGetAchievementStatesResponse::getState", 0x32u, "getState out of range");
  v2 = (bdGetAchievementStatesResponse *)((char *)v2 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_states[55168], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range");
  return (const bdAchievementState *)((char *)v2 + 552 * v3);
}

/*
==============
bdGetAchievementStatesResponse::reset
==============
*/
void bdGetAchievementStatesResponse::reset(bdGetAchievementStatesResponse *this)
{
  *(_DWORD *)&this->m_states[55184] = 0;
  bdStructFixedSizeString<1024>::operator=(&this->m_nextPageToken, (const char *const)&queryFormat.fmt + 3);
}

/*
==============
bdGetAchievementStatesResponse::serialize
==============
*/
bool bdGetAchievementStatesResponse::serialize(bdGetAchievementStatesResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetachievementstatesresponse.cpp", "bdGetAchievementStatesResponse::serialize", 0x43u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetAchievementStatesResponse::setNextPageToken
==============
*/
bdGetAchievementStatesResponse *bdGetAchievementStatesResponse::setNextPageToken(bdGetAchievementStatesResponse *this, const char *nextPageToken)
{
  bdStructFixedSizeString<1024>::operator=(&this->m_nextPageToken, nextPageToken);
  return this;
}

/*
==============
bdGetAchievementStatesResponse::toString
==============
*/
bdString *bdGetAchievementStatesResponse::toString(bdGetAchievementStatesResponse *this, bdString *result)
{
  unsigned int v3; 
  bdStructFixedSizeString<1024> *p_m_nextPageToken; 
  bdGetAchievementStatesResponse_vtbl **v5; 
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
  if ( *((_DWORD *)v5 + 13800) )
  {
    do
    {
      if ( v3 )
        bdString::operator+=(&v14, " , ");
      bdHandleAssert(v3 < *((_DWORD *)v5 + 13800), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdAchievementState,100>::operator []", 0x54u, "i is out of range", v11, v12);
      bdAchievementState::toString((bdAchievementState *)&v5[69 * v3], &resulta);
      v8 |= 4u;
      LODWORD(v11) = v8;
      bdString::operator+=(&v14, &resulta);
      bdString::~bdString(&resulta);
      ++v3;
    }
    while ( v3 < *((_DWORD *)v5 + 13800) );
  }
  bdString::operator+=(&v14, "]");
  Buffer = bdString::getBuffer(v7);
  makeFormattedString(result, "{ states:%s , nextPageToken:%s }", Buffer, p_m_nextPageToken->m_buffer);
  bdString::~bdString(&v14);
  return result;
}

