/*
==============
bdGetUserStateResponse::setUserState
==============
*/

bdGetUserStateResponse *__fastcall bdGetUserStateResponse::setUserState(bdGetUserStateResponse *this, const char *userState)
{
  return ?setUserState@bdGetUserStateResponse@@QEAAAEAV1@PEBD@Z(this, userState);
}

/*
==============
bdGetUserStateResponse::operator!=
==============
*/

bool __fastcall bdGetUserStateResponse::operator!=(bdGetUserStateResponse *this, const bdGetUserStateResponse *rhs)
{
  return ??9bdGetUserStateResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetUserStateResponse::reset
==============
*/

void __fastcall bdGetUserStateResponse::reset(bdGetUserStateResponse *this)
{
  ?reset@bdGetUserStateResponse@@QEAAXXZ(this);
}

/*
==============
bdGetUserStateResponse::serialize
==============
*/

bool __fastcall bdGetUserStateResponse::serialize(bdGetUserStateResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGetUserStateResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGetUserStateResponse::bdGetUserStateResponse
==============
*/

void __fastcall bdGetUserStateResponse::bdGetUserStateResponse(bdGetUserStateResponse *this)
{
  ??0bdGetUserStateResponse@@QEAA@XZ(this);
}

/*
==============
bdGetUserStateResponse::getUserState
==============
*/

const char *__fastcall bdGetUserStateResponse::getUserState(bdGetUserStateResponse *this)
{
  return ?getUserState@bdGetUserStateResponse@@QEBAPEBDXZ(this);
}

/*
==============
bdGetUserStateResponse::operator==
==============
*/

bool __fastcall bdGetUserStateResponse::operator==(bdGetUserStateResponse *this, const bdGetUserStateResponse *rhs)
{
  return ??8bdGetUserStateResponse@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
bdGetUserStateResponse::deserialize
==============
*/

bool __fastcall bdGetUserStateResponse::deserialize(bdGetUserStateResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetUserStateResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetUserStateResponse::bdGetUserStateResponse
==============
*/
void bdGetUserStateResponse::bdGetUserStateResponse(bdGetUserStateResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetUserStateResponse::`vbtable';
    *(_QWORD *)&this->gap1011[7] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1011[15] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetUserStateResponse_vtbl *)&bdGetUserStateResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetUserStateResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetUserStateResponse_vtbl *)&bdGetUserStateResponse::`vftable'{for `bdReferencable'};
  bdStructFixedSizeString<4096>::copy((bdStructFixedSizeString<4096> *)(&this->__vftable + 2), (const char *const)&stru_143ED3684);
}

/*
==============
bdGetUserStateResponse::operator==
==============
*/
bool bdGetUserStateResponse::operator==(bdGetUserStateResponse *this, const bdGetUserStateResponse *rhs)
{
  return strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x1000ui64) == 0;
}

/*
==============
bdGetUserStateResponse::operator!=
==============
*/
bool bdGetUserStateResponse::operator!=(bdGetUserStateResponse *this, const bdGetUserStateResponse *rhs)
{
  return strncmp((const char *)&this->__vftable + 16, (const char *)&rhs->__vftable + 16, 0x1000ui64) != 0;
}

/*
==============
bdGetUserStateResponse::deserialize
==============
*/
bool bdGetUserStateResponse::deserialize(bdGetUserStateResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x1001u);
}

/*
==============
bdGetUserStateResponse::getUserState
==============
*/
bdGetUserStateResponse_vtbl **bdGetUserStateResponse::getUserState(bdGetUserStateResponse *this)
{
  return &this->__vftable + 2;
}

/*
==============
bdGetUserStateResponse::reset
==============
*/
void bdGetUserStateResponse::reset(bdGetUserStateResponse *this)
{
  bdStructFixedSizeString<4096>::copy((bdStructFixedSizeString<4096> *)(&this->__vftable + 2), (const char *const)&stru_143ED3684);
}

/*
==============
bdGetUserStateResponse::serialize
==============
*/
bool bdGetUserStateResponse::serialize(bdGetUserStateResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdgetuserstateresponse.cpp", "bdGetUserStateResponse::serialize", 0x2Du, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetUserStateResponse::setUserState
==============
*/
bdGetUserStateResponse *bdGetUserStateResponse::setUserState(bdGetUserStateResponse *this, const char *userState)
{
  bdStructFixedSizeString<4096>::copy((bdStructFixedSizeString<4096> *)(&this->__vftable + 2), userState);
  return this;
}

