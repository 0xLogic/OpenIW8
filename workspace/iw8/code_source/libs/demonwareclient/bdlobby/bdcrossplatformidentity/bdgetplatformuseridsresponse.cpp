/*
==============
bdGetPlatformUserIDsResponse::deserialize
==============
*/

bool __fastcall bdGetPlatformUserIDsResponse::deserialize(bdGetPlatformUserIDsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdGetPlatformUserIDsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdGetPlatformUserIDsResponse::reset
==============
*/

void __fastcall bdGetPlatformUserIDsResponse::reset(bdGetPlatformUserIDsResponse *this)
{
  ?reset@bdGetPlatformUserIDsResponse@@QEAAXXZ(this);
}

/*
==============
bdGetPlatformUserIDsResponse::serialize
==============
*/

bool __fastcall bdGetPlatformUserIDsResponse::serialize(bdGetPlatformUserIDsResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdGetPlatformUserIDsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdGetPlatformUserIDsResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetPlatformUserIDsResponse::getNumUsers(bdGetPlatformUserIDsResponse *this)
{
  return ?getNumUsers@bdGetPlatformUserIDsResponse@@QEBAIXZ(this);
}

/*
==============
bdGetPlatformUserIDsResponse::getMappedUser
==============
*/

bdCrossPlatformIdentityMappedUser *__fastcall bdGetPlatformUserIDsResponse::getMappedUser(bdGetPlatformUserIDsResponse *this, unsigned int index)
{
  return ?getMappedUser@bdGetPlatformUserIDsResponse@@QEAAAEAVbdCrossPlatformIdentityMappedUser@@I@Z(this, index);
}

/*
==============
bdGetPlatformUserIDsResponse::bdGetPlatformUserIDsResponse
==============
*/

void __fastcall bdGetPlatformUserIDsResponse::bdGetPlatformUserIDsResponse(bdGetPlatformUserIDsResponse *this)
{
  ??0bdGetPlatformUserIDsResponse@@QEAA@XZ(this);
}

/*
==============
bdGetPlatformUserIDsResponse::bdGetPlatformUserIDsResponse
==============
*/
void bdGetPlatformUserIDsResponse::bdGetPlatformUserIDsResponse(bdGetPlatformUserIDsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetPlatformUserIDsResponse::`vbtable';
    *(_QWORD *)this->gap44D8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap44D8[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetPlatformUserIDsResponse_vtbl *)&bdGetPlatformUserIDsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetPlatformUserIDsResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetPlatformUserIDsResponse_vtbl *)&bdGetPlatformUserIDsResponse::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x58ui64, 0xC8ui64, (void (__fastcall *)(void *))bdCrossPlatformIdentityMappedUser::bdCrossPlatformIdentityMappedUser, (void (__fastcall *)(void *))bdCrossPlatformIdentityMappedUser::`vbase destructor);
  *(_DWORD *)&this->m_users[17584] = 0;
}

/*
==============
bdGetPlatformUserIDsResponse::deserialize
==============
*/
bool bdGetPlatformUserIDsResponse::deserialize(bdGetPlatformUserIDsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdCrossPlatformIdentityMappedUser,200>(deserializer, 1u, (bdStructFixedSizeArray<bdCrossPlatformIdentityMappedUser,200> *)(&this->__vftable + 2));
}

/*
==============
bdGetPlatformUserIDsResponse::getMappedUser
==============
*/
bdCrossPlatformIdentityMappedUser *bdGetPlatformUserIDsResponse::getMappedUser(bdGetPlatformUserIDsResponse *this, unsigned int index)
{
  bdGetPlatformUserIDsResponse *v2; 
  __int64 v3; 

  v2 = this;
  v3 = index;
  bdHandleAssert(index < *(_DWORD *)&this->m_users[17584], "index < m_users.getSize()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetplatformuseridsresponse.cpp", "bdGetPlatformUserIDsResponse::getMappedUser", 0x17u, "getMappedUser index out of range");
  v2 = (bdGetPlatformUserIDsResponse *)((char *)v2 + 16);
  bdHandleAssert((unsigned int)v3 < *(_DWORD *)&v2->m_users[17568], "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdCrossPlatformIdentityMappedUser,200>::operator []", 0x4Du, "i is out of range");
  return (bdCrossPlatformIdentityMappedUser *)((char *)v2 + 88 * v3);
}

/*
==============
bdGetPlatformUserIDsResponse::getNumUsers
==============
*/
__int64 bdGetPlatformUserIDsResponse::getNumUsers(bdGetPlatformUserIDsResponse *this)
{
  return *(unsigned int *)&this->m_users[17584];
}

/*
==============
bdGetPlatformUserIDsResponse::reset
==============
*/
void bdGetPlatformUserIDsResponse::reset(bdGetPlatformUserIDsResponse *this)
{
  *(_DWORD *)&this->m_users[17584] = 0;
}

/*
==============
bdGetPlatformUserIDsResponse::serialize
==============
*/
bool bdGetPlatformUserIDsResponse::serialize(bdGetPlatformUserIDsResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetplatformuseridsresponse.cpp", "bdGetPlatformUserIDsResponse::serialize", 0x22u, "NOT IMPLEMENTED");
  return 0;
}

