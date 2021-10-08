/*
==============
bdGetCrossPlatformUserIDsResponse::serialize
==============
*/

bool __fastcall bdGetCrossPlatformUserIDsResponse::serialize(bdGetCrossPlatformUserIDsResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGetCrossPlatformUserIDsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::getMappedUser
==============
*/

bdCrossPlatformIdentityMappedUser *__fastcall bdGetCrossPlatformUserIDsResponse::getMappedUser(bdGetCrossPlatformUserIDsResponse *this, unsigned int index)
{
  return ?getMappedUser@bdGetCrossPlatformUserIDsResponse@@QEAAAEAVbdCrossPlatformIdentityMappedUser@@I@Z(this, index);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::deserialize
==============
*/

bool __fastcall bdGetCrossPlatformUserIDsResponse::deserialize(bdGetCrossPlatformUserIDsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetCrossPlatformUserIDsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::reset
==============
*/

void __fastcall bdGetCrossPlatformUserIDsResponse::reset(bdGetCrossPlatformUserIDsResponse *this)
{
  ?reset@bdGetCrossPlatformUserIDsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::bdGetCrossPlatformUserIDsResponse
==============
*/

void __fastcall bdGetCrossPlatformUserIDsResponse::bdGetCrossPlatformUserIDsResponse(bdGetCrossPlatformUserIDsResponse *this)
{
  ??0bdGetCrossPlatformUserIDsResponse@@QEAA@XZ(this);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetCrossPlatformUserIDsResponse::getNumUsers(bdGetCrossPlatformUserIDsResponse *this)
{
  return ?getNumUsers@bdGetCrossPlatformUserIDsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::bdGetCrossPlatformUserIDsResponse
==============
*/
void bdGetCrossPlatformUserIDsResponse::bdGetCrossPlatformUserIDsResponse(bdGetCrossPlatformUserIDsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetCrossPlatformUserIDsResponse::`vbtable';
    *(_QWORD *)this->gap44D8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap44D8[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetCrossPlatformUserIDsResponse_vtbl *)&bdGetCrossPlatformUserIDsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetCrossPlatformUserIDsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetCrossPlatformUserIDsResponse_vtbl *)&bdGetCrossPlatformUserIDsResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x58ui64, 0xC8ui64, (void (__fastcall *)(void *))bdCrossPlatformIdentityMappedUser::bdCrossPlatformIdentityMappedUser, (void (__fastcall *)(void *))bdCrossPlatformIdentityMappedUser::`vbase destructor);
  *(_DWORD *)&this->m_users[17584] = 0;
}

/*
==============
bdGetCrossPlatformUserIDsResponse::deserialize
==============
*/
bool bdGetCrossPlatformUserIDsResponse::deserialize(bdGetCrossPlatformUserIDsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdCrossPlatformIdentityMappedUser,200>(deserializer, 1u, (bdStructFixedSizeArray<bdCrossPlatformIdentityMappedUser,200> *)(&this->__vftable + 2));
}

/*
==============
bdGetCrossPlatformUserIDsResponse::getMappedUser
==============
*/
bdCrossPlatformIdentityMappedUser *bdGetCrossPlatformUserIDsResponse::getMappedUser(bdGetCrossPlatformUserIDsResponse *this, unsigned int index)
{
  bdGetCrossPlatformUserIDsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < *(_DWORD *)&this->m_users[17584], "index < m_users.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetcrossplatformuseridsresponse.cpp", "bdGetCrossPlatformUserIDsResponse::getMappedUser", 0x17u, "getMappedUser index out of range");
  v2 = (bdGetCrossPlatformUserIDsResponse *)((char *)v2 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_users[17568], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformIdentityMappedUser,200>::operator []", 0x4Du, "i is out of range");
  return (bdCrossPlatformIdentityMappedUser *)((char *)v2 + 88 * v3);
}

/*
==============
bdGetCrossPlatformUserIDsResponse::getNumUsers
==============
*/
__int64 bdGetCrossPlatformUserIDsResponse::getNumUsers(bdGetCrossPlatformUserIDsResponse *this)
{
  return *(unsigned int *)&this->m_users[17584];
}

/*
==============
bdGetCrossPlatformUserIDsResponse::reset
==============
*/
void bdGetCrossPlatformUserIDsResponse::reset(bdGetCrossPlatformUserIDsResponse *this)
{
  *(_DWORD *)&this->m_users[17584] = 0;
}

/*
==============
bdGetCrossPlatformUserIDsResponse::serialize
==============
*/
bool bdGetCrossPlatformUserIDsResponse::serialize(bdGetCrossPlatformUserIDsResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetcrossplatformuseridsresponse.cpp", "bdGetCrossPlatformUserIDsResponse::serialize", 0x22u, "NOT IMPLEMENTED");
  return 0;
}

