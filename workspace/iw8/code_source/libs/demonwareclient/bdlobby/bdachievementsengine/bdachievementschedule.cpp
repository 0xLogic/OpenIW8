/*
==============
bdAchievementSchedule::hasNextPeriod
==============
*/

bool __fastcall bdAchievementSchedule::hasNextPeriod(bdAchievementSchedule *this)
{
  return ?hasNextPeriod@bdAchievementSchedule@@QEBA_NXZ(this);
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/

void __fastcall bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this, bdAchievementPeriod *nextPeriod)
{
  ??0bdAchievementSchedule@@QEAA@VbdAchievementPeriod@@@Z(this, nextPeriod);
}

/*
==============
bdAchievementSchedule::toString
==============
*/

bdString *__fastcall bdAchievementSchedule::toString(bdAchievementSchedule *this, bdString *result)
{
  return ?toString@bdAchievementSchedule@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementSchedule::operator!=
==============
*/

bool __fastcall bdAchievementSchedule::operator!=(bdAchievementSchedule *this, const bdAchievementSchedule *rhs)
{
  return ??9bdAchievementSchedule@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementSchedule::serialize
==============
*/

bool __fastcall bdAchievementSchedule::serialize(bdAchievementSchedule *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementSchedule@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementSchedule::getNextPeriod
==============
*/

const bdAchievementPeriod *__fastcall bdAchievementSchedule::getNextPeriod(bdAchievementSchedule *this)
{
  return ?getNextPeriod@bdAchievementSchedule@@QEBAAEBVbdAchievementPeriod@@XZ(this);
}

/*
==============
bdAchievementSchedule::operator==
==============
*/

bool __fastcall bdAchievementSchedule::operator==(bdAchievementSchedule *this, const bdAchievementSchedule *rhs)
{
  return ??8bdAchievementSchedule@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/

void __fastcall bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this, const bdAchievementSchedule *__that)
{
  ??0bdAchievementSchedule@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/

void __fastcall bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this)
{
  ??0bdAchievementSchedule@@QEAA@XZ(this);
}

/*
==============
bdAchievementSchedule::deserialize
==============
*/

bool __fastcall bdAchievementSchedule::deserialize(bdAchievementSchedule *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementSchedule@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/
void bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this, bdAchievementPeriod *nextPeriod, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementSchedule::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementSchedule_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 1;
  *(_QWORD *)this->m_nextPeriod = &bdAchievementPeriod::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_nextPeriod[24], (const bdReferencable *)((char *)&nextPeriod->__vftable + *(int *)(*((_QWORD *)&nextPeriod->__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 3), nextPeriod);
  *((_QWORD *)&this->__vftable + 3) = &bdAchievementPeriod::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&this->m_nextPeriod[*(int *)(*(_QWORD *)this->m_nextPeriod + 4i64)] = &bdAchievementPeriod::`vftable'{for `bdReferencable'};
  *(_QWORD *)&this->m_nextPeriod[8] = *((_QWORD *)&nextPeriod->__vftable + 2);
  *(_QWORD *)&this->m_nextPeriod[16] = *((_QWORD *)&nextPeriod->__vftable + 3);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&nextPeriod->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)nextPeriod->gap20);
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/
void bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementSchedule::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementSchedule_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = 0;
  bdAchievementPeriod::bdAchievementPeriod((bdAchievementPeriod *)(&this->__vftable + 3));
}

/*
==============
bdAchievementSchedule::operator==
==============
*/
bool bdAchievementSchedule::operator==(bdAchievementSchedule *this, const bdAchievementSchedule *rhs)
{
  char v2; 

  v2 = *((_BYTE *)&this->__vftable + 16);
  if ( v2 != *((_BYTE *)&rhs->__vftable + 16) )
    return 0;
  if ( !v2 )
    return 1;
  bdHandleAssert(v2, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value");
  bdHandleAssert(*((_BYTE *)&rhs->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value");
  return bdAchievementPeriod::operator==((bdAchievementPeriod *)(&this->__vftable + 3), (const bdAchievementPeriod *)(&rhs->__vftable + 3));
}

/*
==============
bdAchievementSchedule::operator!=
==============
*/
bool bdAchievementSchedule::operator!=(bdAchievementSchedule *this, const bdAchievementSchedule *rhs)
{
  char v2; 

  v2 = *((_BYTE *)&this->__vftable + 16);
  if ( v2 != *((_BYTE *)&rhs->__vftable + 16) )
    return 1;
  if ( !v2 )
    return 0;
  bdHandleAssert(v2, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value");
  bdHandleAssert(*((_BYTE *)&rhs->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value");
  return !bdAchievementPeriod::operator==((bdAchievementPeriod *)(&this->__vftable + 3), (const bdAchievementPeriod *)(&rhs->__vftable + 3));
}

/*
==============
bdAchievementSchedule::deserialize
==============
*/
__int64 bdAchievementSchedule::deserialize(bdAchievementSchedule *this, bdStructBufferDeserializer *deserializer)
{
  unsigned __int8 v4; 
  bdAchievementPeriod v6; 

  *((_BYTE *)&this->__vftable + 16) = 0;
  bdAchievementPeriod::bdAchievementPeriod(&v6);
  if ( bdStructBufferDeserializer::readObject(deserializer, 1u, &v6) )
  {
    v4 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      *((_BYTE *)&this->__vftable + 16) = 1;
      bdReferencable::operator=((bdReferencable *)&this->m_nextPeriod[*(int *)(*(_QWORD *)this->m_nextPeriod + 4i64)], (const bdReferencable *)&v6.gap20[*(int *)(*((_QWORD *)&v6.__vftable + 1) + 4i64) - 24]);
      *(_QWORD *)&this->m_nextPeriod[8] = *((_QWORD *)&v6.__vftable + 2);
      *(_QWORD *)&this->m_nextPeriod[16] = *((_QWORD *)&v6.__vftable + 3);
    }
  }
  else
  {
    v4 = 0;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v6.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)v6.gap20);
  return v4;
}

/*
==============
bdAchievementSchedule::getNextPeriod
==============
*/
bdAchievementSchedule_vtbl **bdAchievementSchedule::getNextPeriod(bdAchievementSchedule *this)
{
  bdHandleAssert(*((_BYTE *)&this->__vftable + 16), "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value");
  return &this->__vftable + 3;
}

/*
==============
bdAchievementSchedule::hasNextPeriod
==============
*/
__int64 bdAchievementSchedule::hasNextPeriod(bdAchievementSchedule *this)
{
  return *((unsigned __int8 *)&this->__vftable + 16);
}

/*
==============
bdAchievementSchedule::serialize
==============
*/
bool bdAchievementSchedule::serialize(bdAchievementSchedule *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementschedule.cpp", "bdAchievementSchedule::serialize", 0x2Du, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementSchedule::toString
==============
*/
bdString *bdAchievementSchedule::toString(bdAchievementSchedule *this, bdString *result)
{
  char v4; 
  bdString *p_resulta; 
  char v6; 
  char v7; 
  const char *Buffer; 
  int v10; 
  bdString v11; 
  bdString resulta; 
  bdString v13; 

  resulta.m_string = (char *)result;
  v10 = 0;
  v4 = *((_BYTE *)&this->__vftable + 16);
  if ( v4 )
  {
    bdHandleAssert(v4, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdAchievementPeriod>::getValue", 0x3Cu, "Has no value", v10, -2i64);
    bdAchievementPeriod::toString((bdAchievementPeriod *)(&this->__vftable + 3), &resulta);
    p_resulta = &resulta;
    v6 = 18;
  }
  else
  {
    bdString::bdString(&v13, "none");
    v6 = 4;
  }
  bdString::bdString(&v11, p_resulta);
  v7 = v6 | 8;
  if ( (v7 & 4) != 0 )
  {
    v7 &= ~4u;
    bdString::~bdString(&v13);
  }
  if ( (v7 & 2) != 0 )
    bdString::~bdString(&resulta);
  Buffer = bdString::getBuffer(&v11);
  makeFormattedString(result, "{ nextPeriod:%s }", Buffer);
  bdString::~bdString(&v11);
  return result;
}

/*
==============
bdAchievementSchedule::bdAchievementSchedule
==============
*/
void bdAchievementSchedule::bdAchievementSchedule(bdAchievementSchedule *this, const bdAchievementSchedule *__that, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementSchedule::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)this->gap48, (const bdReferencable *)((char *)&__that->__vftable + *(int *)(*((_QWORD *)&__that->__vftable + 1) + 4i64) + 8));
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this, __that);
  this->__vftable = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementSchedule_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementSchedule_vtbl *)&bdAchievementSchedule::`vftable'{for `bdReferencable'};
  *((_BYTE *)&this->__vftable + 16) = *((_BYTE *)&__that->__vftable + 16);
  *(_QWORD *)this->m_nextPeriod = &bdAchievementPeriod::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_nextPeriod[24], (const bdReferencable *)&__that->m_nextPeriod[*(int *)(*(_QWORD *)__that->m_nextPeriod + 4i64)]);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 3), (const bdStructBufferSerializable *)(&__that->__vftable + 3));
  *((_QWORD *)&this->__vftable + 3) = &bdAchievementPeriod::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)&this->m_nextPeriod[*(int *)(*(_QWORD *)this->m_nextPeriod + 4i64)] = &bdAchievementPeriod::`vftable'{for `bdReferencable'};
  *(_QWORD *)&this->m_nextPeriod[8] = *(_QWORD *)&__that->m_nextPeriod[8];
  *(_QWORD *)&this->m_nextPeriod[16] = *(_QWORD *)&__that->m_nextPeriod[16];
}

