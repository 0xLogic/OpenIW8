/*
==============
bdAchievementsUpdatedPushMessage::getNumStates
==============
*/

unsigned int __fastcall bdAchievementsUpdatedPushMessage::getNumStates(bdAchievementsUpdatedPushMessage *this)
{
  return ?getNumStates@bdAchievementsUpdatedPushMessage@@QEBAIXZ(this);
}

/*
==============
bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage
==============
*/

void __fastcall bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage(bdAchievementsUpdatedPushMessage *this)
{
  ??0bdAchievementsUpdatedPushMessage@@QEAA@XZ(this);
}

/*
==============
bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage
==============
*/

void __fastcall bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage(bdAchievementsUpdatedPushMessage *this, const bdAchievementState *state)
{
  ??0bdAchievementsUpdatedPushMessage@@QEAA@AEBVbdAchievementState@@@Z(this, state);
}

/*
==============
bdAchievementsUpdatedPushMessage::deserialize
==============
*/

bool __fastcall bdAchievementsUpdatedPushMessage::deserialize(bdAchievementsUpdatedPushMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementsUpdatedPushMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementsUpdatedPushMessage::operator!=
==============
*/

bool __fastcall bdAchievementsUpdatedPushMessage::operator!=(bdAchievementsUpdatedPushMessage *this, const bdAchievementsUpdatedPushMessage *rhs)
{
  return ??9bdAchievementsUpdatedPushMessage@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementsUpdatedPushMessage::getState
==============
*/

const bdAchievementState *__fastcall bdAchievementsUpdatedPushMessage::getState(bdAchievementsUpdatedPushMessage *this, unsigned int i)
{
  return ?getState@bdAchievementsUpdatedPushMessage@@QEBAAEBVbdAchievementState@@I@Z(this, i);
}

/*
==============
bdAchievementsUpdatedPushMessage::operator==
==============
*/

bool __fastcall bdAchievementsUpdatedPushMessage::operator==(bdAchievementsUpdatedPushMessage *this, const bdAchievementsUpdatedPushMessage *rhs)
{
  return ??8bdAchievementsUpdatedPushMessage@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementsUpdatedPushMessage::serialize
==============
*/

bool __fastcall bdAchievementsUpdatedPushMessage::serialize(bdAchievementsUpdatedPushMessage *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementsUpdatedPushMessage@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementsUpdatedPushMessage::toString
==============
*/

bdString *__fastcall bdAchievementsUpdatedPushMessage::toString(bdAchievementsUpdatedPushMessage *this, bdString *result)
{
  return ?toString@bdAchievementsUpdatedPushMessage@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage
==============
*/
void bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage(bdAchievementsUpdatedPushMessage *this, const bdAchievementState *state, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementsUpdatedPushMessage::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementsUpdatedPushMessage_vtbl *)&bdAchievementsUpdatedPushMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementsUpdatedPushMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementsUpdatedPushMessage_vtbl *)&bdAchievementsUpdatedPushMessage::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdArray<bdAchievementState>::pushBack((bdArray<bdAchievementState> *)&this->__vftable + 1, state);
}

/*
==============
bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage
==============
*/
void bdAchievementsUpdatedPushMessage::bdAchievementsUpdatedPushMessage(bdAchievementsUpdatedPushMessage *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementsUpdatedPushMessage::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementsUpdatedPushMessage_vtbl *)&bdAchievementsUpdatedPushMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementsUpdatedPushMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementsUpdatedPushMessage_vtbl *)&bdAchievementsUpdatedPushMessage::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdAchievementsUpdatedPushMessage::operator==
==============
*/
char bdAchievementsUpdatedPushMessage::operator==(bdAchievementsUpdatedPushMessage *this, const bdAchievementsUpdatedPushMessage *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  bdAchievementState *v8; 
  unsigned int v9; 

  v2 = *((_DWORD *)&this->__vftable + 7);
  if ( v2 != *((_DWORD *)&rhs->__vftable + 7) )
    return 0;
  v5 = 0;
  if ( !v2 )
    return 1;
  v6 = v2 != 0;
  while ( 1 )
  {
    bdHandleAssert(v6, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v7 = 552i64 * v5;
    v8 = (bdAchievementState *)(v7 + *((_QWORD *)&this->__vftable + 2));
    bdHandleAssert(v5 < *((_DWORD *)&rhs->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    if ( bdAchievementState::operator!=(v8, (const bdAchievementState *)(v7 + *((_QWORD *)&rhs->__vftable + 2))) )
      break;
    v9 = *((_DWORD *)&this->__vftable + 7);
    v6 = ++v5 < v9;
    if ( v5 >= v9 )
      return 1;
  }
  return 0;
}

/*
==============
bdAchievementsUpdatedPushMessage::operator!=
==============
*/
char bdAchievementsUpdatedPushMessage::operator!=(bdAchievementsUpdatedPushMessage *this, const bdAchievementsUpdatedPushMessage *rhs)
{
  int v2; 
  unsigned int v5; 
  bool v6; 
  __int64 v7; 
  bdAchievementState *v8; 
  unsigned int v9; 

  v2 = *((_DWORD *)&this->__vftable + 7);
  if ( v2 != *((_DWORD *)&rhs->__vftable + 7) )
    return 1;
  v5 = 0;
  if ( !v2 )
    return 0;
  v6 = v2 != 0;
  while ( 1 )
  {
    bdHandleAssert(v6, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v7 = 552i64 * v5;
    v8 = (bdAchievementState *)(v7 + *((_QWORD *)&this->__vftable + 2));
    bdHandleAssert(v5 < *((_DWORD *)&rhs->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    if ( bdAchievementState::operator!=(v8, (const bdAchievementState *)(v7 + *((_QWORD *)&rhs->__vftable + 2))) )
      break;
    v9 = *((_DWORD *)&this->__vftable + 7);
    v6 = ++v5 < v9;
    if ( v5 >= v9 )
      return 0;
  }
  return 1;
}

/*
==============
bdAchievementsUpdatedPushMessage::deserialize
==============
*/
bool bdAchievementsUpdatedPushMessage::deserialize(bdAchievementsUpdatedPushMessage *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdAchievementState>(deserializer, 1u, (bdArray<bdAchievementState> *)&this->__vftable + 1);
}

/*
==============
bdAchievementsUpdatedPushMessage::getNumStates
==============
*/
__int64 bdAchievementsUpdatedPushMessage::getNumStates(bdAchievementsUpdatedPushMessage *this)
{
  return *((unsigned int *)&this->__vftable + 7);
}

/*
==============
bdAchievementsUpdatedPushMessage::getState
==============
*/
const bdAchievementState *bdAchievementsUpdatedPushMessage::getState(bdAchievementsUpdatedPushMessage *this, unsigned int i)
{
  __int64 v3; 

  v3 = i;
  bdHandleAssert(i < *((_DWORD *)&this->__vftable + 7), "i < m_states.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsupdatedpushmessage.cpp", "bdAchievementsUpdatedPushMessage::getState", 0x2Au, "getState out of range");
  bdHandleAssert((unsigned int)v3 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
  return (const bdAchievementState *)(*((_QWORD *)&this->__vftable + 2) + 552 * v3);
}

/*
==============
bdAchievementsUpdatedPushMessage::serialize
==============
*/
bool bdAchievementsUpdatedPushMessage::serialize(bdAchievementsUpdatedPushMessage *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsupdatedpushmessage.cpp", "bdAchievementsUpdatedPushMessage::serialize", 0x30u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementsUpdatedPushMessage::toString
==============
*/
bdString *bdAchievementsUpdatedPushMessage::toString(bdAchievementsUpdatedPushMessage *this, bdString *result)
{
  unsigned int v4; 
  bdString *v5; 
  bdString *v6; 
  int v7; 
  const char *Buffer; 
  __int64 v10; 
  __int64 v11; 
  bdString resulta; 
  bdString v13; 

  v13.m_string = (char *)result;
  v11 = -2i64;
  v4 = 0;
  bdString::bdString(&v13);
  v6 = v5;
  v7 = 2;
  LODWORD(v10) = 2;
  bdString::operator+=(&v13, "[");
  if ( *((_DWORD *)&this->__vftable + 7) )
  {
    do
    {
      if ( v4 )
        bdString::operator+=(&v13, " , ");
      bdHandleAssert(v4 < *((_DWORD *)&this->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdAchievementState>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed", v10, v11);
      bdAchievementState::toString((bdAchievementState *)(*((_QWORD *)&this->__vftable + 2) + 552i64 * v4), &resulta);
      v7 |= 4u;
      LODWORD(v10) = v7;
      bdString::operator+=(&v13, &resulta);
      bdString::~bdString(&resulta);
      ++v4;
    }
    while ( v4 < *((_DWORD *)&this->__vftable + 7) );
  }
  bdString::operator+=(&v13, "]");
  Buffer = bdString::getBuffer(v6);
  makeFormattedString(result, "{ states:%s }", Buffer);
  bdString::~bdString(&v13);
  return result;
}

