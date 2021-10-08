/*
==============
bdAchievementPeriod::toString
==============
*/

bdString *__fastcall bdAchievementPeriod::toString(bdAchievementPeriod *this, bdString *result)
{
  return ?toString@bdAchievementPeriod@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementPeriod::bdAchievementPeriod
==============
*/

void __fastcall bdAchievementPeriod::bdAchievementPeriod(bdAchievementPeriod *this)
{
  ??0bdAchievementPeriod@@QEAA@XZ(this);
}

/*
==============
bdAchievementPeriod::getEnd
==============
*/

unsigned __int64 __fastcall bdAchievementPeriod::getEnd(bdAchievementPeriod *this)
{
  return ?getEnd@bdAchievementPeriod@@QEBA_KXZ(this);
}

/*
==============
bdAchievementPeriod::operator!=
==============
*/

bool __fastcall bdAchievementPeriod::operator!=(bdAchievementPeriod *this, const bdAchievementPeriod *rhs)
{
  return ??9bdAchievementPeriod@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementPeriod::bdAchievementPeriod
==============
*/

void __fastcall bdAchievementPeriod::bdAchievementPeriod(bdAchievementPeriod *this, unsigned __int64 start, unsigned __int64 end)
{
  ??0bdAchievementPeriod@@QEAA@_K0@Z(this, start, end);
}

/*
==============
bdAchievementPeriod::serialize
==============
*/

bool __fastcall bdAchievementPeriod::serialize(bdAchievementPeriod *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementPeriod@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementPeriod::operator==
==============
*/

bool __fastcall bdAchievementPeriod::operator==(bdAchievementPeriod *this, const bdAchievementPeriod *rhs)
{
  return ??8bdAchievementPeriod@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementPeriod::deserialize
==============
*/

bool __fastcall bdAchievementPeriod::deserialize(bdAchievementPeriod *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementPeriod@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementPeriod::getStart
==============
*/

unsigned __int64 __fastcall bdAchievementPeriod::getStart(bdAchievementPeriod *this)
{
  return ?getStart@bdAchievementPeriod@@QEBA_KXZ(this);
}

/*
==============
bdAchievementPeriod::bdAchievementPeriod
==============
*/
void bdAchievementPeriod::bdAchievementPeriod(bdAchievementPeriod *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementPeriod::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementPeriod_vtbl *)&bdAchievementPeriod::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementPeriod_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementPeriod_vtbl *)&bdAchievementPeriod::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdAchievementPeriod::bdAchievementPeriod
==============
*/
void bdAchievementPeriod::bdAchievementPeriod(bdAchievementPeriod *this, unsigned __int64 start, unsigned __int64 end, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementPeriod::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementPeriod_vtbl *)&bdAchievementPeriod::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementPeriod_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementPeriod_vtbl *)&bdAchievementPeriod::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = start;
  *((_QWORD *)&this->__vftable + 3) = end;
}

/*
==============
bdAchievementPeriod::operator==
==============
*/
bool bdAchievementPeriod::operator==(bdAchievementPeriod *this, const bdAchievementPeriod *rhs)
{
  return *((_QWORD *)&this->__vftable + 2) == *((_QWORD *)&rhs->__vftable + 2) && *((_QWORD *)&this->__vftable + 3) == *((_QWORD *)&rhs->__vftable + 3);
}

/*
==============
bdAchievementPeriod::operator!=
==============
*/
bool bdAchievementPeriod::operator!=(bdAchievementPeriod *this, const bdAchievementPeriod *rhs)
{
  return *((_QWORD *)&this->__vftable + 2) != *((_QWORD *)&rhs->__vftable + 2) || *((_QWORD *)&this->__vftable + 3) != *((_QWORD *)&rhs->__vftable + 3);
}

/*
==============
bdAchievementPeriod::deserialize
==============
*/
bool bdAchievementPeriod::deserialize(bdAchievementPeriod *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this->__vftable + 2) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)&this->__vftable + 3);
}

/*
==============
bdAchievementPeriod::getEnd
==============
*/
unsigned __int64 bdAchievementPeriod::getEnd(bdAchievementPeriod *this)
{
  return *((_QWORD *)&this->__vftable + 3);
}

/*
==============
bdAchievementPeriod::getStart
==============
*/
unsigned __int64 bdAchievementPeriod::getStart(bdAchievementPeriod *this)
{
  return *((_QWORD *)&this->__vftable + 2);
}

/*
==============
bdAchievementPeriod::serialize
==============
*/
bool bdAchievementPeriod::serialize(bdAchievementPeriod *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementperiod.cpp", "bdAchievementPeriod::serialize", 0x30u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementPeriod::toString
==============
*/
bdString *bdAchievementPeriod::toString(bdAchievementPeriod *this, bdString *result)
{
  makeFormattedString(result, "{ start:%lu , end:%lu }", *((_QWORD *)&this->__vftable + 2), *((_QWORD *)&this->__vftable + 3));
  return result;
}

