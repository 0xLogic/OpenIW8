/*
==============
bdAchievementArchetypeParameter::bdAchievementArchetypeParameter
==============
*/

void __fastcall bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(bdAchievementArchetypeParameter *this)
{
  ??0bdAchievementArchetypeParameter@@QEAA@XZ(this);
}

/*
==============
bdAchievementArchetypeParameter::serialize
==============
*/

bool __fastcall bdAchievementArchetypeParameter::serialize(bdAchievementArchetypeParameter *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdAchievementArchetypeParameter@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdAchievementArchetypeParameter::operator!=
==============
*/

bool __fastcall bdAchievementArchetypeParameter::operator!=(bdAchievementArchetypeParameter *this, const bdAchievementArchetypeParameter *rhs)
{
  return ??9bdAchievementArchetypeParameter@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementArchetypeParameter::bdAchievementArchetypeParameter
==============
*/

void __fastcall bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(bdAchievementArchetypeParameter *this, unsigned __int64 key, unsigned __int64 value)
{
  ??0bdAchievementArchetypeParameter@@QEAA@_K0@Z(this, key, value);
}

/*
==============
bdAchievementArchetypeParameter::deserialize
==============
*/

bool __fastcall bdAchievementArchetypeParameter::deserialize(bdAchievementArchetypeParameter *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdAchievementArchetypeParameter@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdAchievementArchetypeParameter::operator==
==============
*/

bool __fastcall bdAchievementArchetypeParameter::operator==(bdAchievementArchetypeParameter *this, const bdAchievementArchetypeParameter *rhs)
{
  return ??8bdAchievementArchetypeParameter@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdAchievementArchetypeParameter::toString
==============
*/

bdString *__fastcall bdAchievementArchetypeParameter::toString(bdAchievementArchetypeParameter *this, bdString *result)
{
  return ?toString@bdAchievementArchetypeParameter@@QEBA?AVbdString@@XZ(this, result);
}

/*
==============
bdAchievementArchetypeParameter::getKey
==============
*/

unsigned __int64 __fastcall bdAchievementArchetypeParameter::getKey(bdAchievementArchetypeParameter *this)
{
  return ?getKey@bdAchievementArchetypeParameter@@QEBA_KXZ(this);
}

/*
==============
bdAchievementArchetypeParameter::getValue
==============
*/

unsigned __int64 __fastcall bdAchievementArchetypeParameter::getValue(bdAchievementArchetypeParameter *this)
{
  return ?getValue@bdAchievementArchetypeParameter@@QEBA_KXZ(this);
}

/*
==============
bdAchievementArchetypeParameter::bdAchievementArchetypeParameter
==============
*/
void bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(bdAchievementArchetypeParameter *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementArchetypeParameter::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementArchetypeParameter_vtbl *)&bdAchievementArchetypeParameter::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementArchetypeParameter_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementArchetypeParameter_vtbl *)&bdAchievementArchetypeParameter::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdAchievementArchetypeParameter::bdAchievementArchetypeParameter
==============
*/
void bdAchievementArchetypeParameter::bdAchievementArchetypeParameter(bdAchievementArchetypeParameter *this, unsigned __int64 key, unsigned __int64 value, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdAchievementArchetypeParameter::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdAchievementArchetypeParameter_vtbl *)&bdAchievementArchetypeParameter::`vftable'{for `bdStructBufferSerializable'};
  *(bdAchievementArchetypeParameter_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdAchievementArchetypeParameter_vtbl *)&bdAchievementArchetypeParameter::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = key;
  *((_QWORD *)&this->__vftable + 3) = value;
}

/*
==============
bdAchievementArchetypeParameter::operator==
==============
*/
bool bdAchievementArchetypeParameter::operator==(bdAchievementArchetypeParameter *this, const bdAchievementArchetypeParameter *rhs)
{
  return *((_QWORD *)&this->__vftable + 2) == *((_QWORD *)&rhs->__vftable + 2) && *((_QWORD *)&this->__vftable + 3) == *((_QWORD *)&rhs->__vftable + 3);
}

/*
==============
bdAchievementArchetypeParameter::operator!=
==============
*/
bool bdAchievementArchetypeParameter::operator!=(bdAchievementArchetypeParameter *this, const bdAchievementArchetypeParameter *rhs)
{
  return *((_QWORD *)&this->__vftable + 2) != *((_QWORD *)&rhs->__vftable + 2) || *((_QWORD *)&this->__vftable + 3) != *((_QWORD *)&rhs->__vftable + 3);
}

/*
==============
bdAchievementArchetypeParameter::deserialize
==============
*/
bool bdAchievementArchetypeParameter::deserialize(bdAchievementArchetypeParameter *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this->__vftable + 2) && bdStructBufferDeserializer::readUInt64(deserializer, 2u, (unsigned __int64 *)&this->__vftable + 3);
}

/*
==============
bdAchievementArchetypeParameter::getKey
==============
*/
unsigned __int64 bdAchievementArchetypeParameter::getKey(bdAchievementArchetypeParameter *this)
{
  return *((_QWORD *)&this->__vftable + 2);
}

/*
==============
bdAchievementArchetypeParameter::getValue
==============
*/
unsigned __int64 bdAchievementArchetypeParameter::getValue(bdAchievementArchetypeParameter *this)
{
  return *((_QWORD *)&this->__vftable + 3);
}

/*
==============
bdAchievementArchetypeParameter::serialize
==============
*/
bool bdAchievementArchetypeParameter::serialize(bdAchievementArchetypeParameter *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementarchetypeparameter.cpp", "bdAchievementArchetypeParameter::serialize", 0x2Du, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdAchievementArchetypeParameter::toString
==============
*/
bdString *bdAchievementArchetypeParameter::toString(bdAchievementArchetypeParameter *this, bdString *result)
{
  makeFormattedString(result, "{ key:%I64u ,  value:%I64u }", *((_QWORD *)&this->__vftable + 2), *((_QWORD *)&this->__vftable + 3));
  return result;
}

