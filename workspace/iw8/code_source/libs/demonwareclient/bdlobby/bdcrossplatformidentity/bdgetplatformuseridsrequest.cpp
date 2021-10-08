/*
==============
bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest
==============
*/

void __fastcall bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest(bdGetPlatformUserIDsRequest *this, const unsigned int numUsers, const bdUserAccountID *users)
{
  ??0bdGetPlatformUserIDsRequest@@QEAA@IPEBVbdUserAccountID@@@Z(this, numUsers, users);
}

/*
==============
bdGetPlatformUserIDsRequest::serialize
==============
*/

bool __fastcall bdGetPlatformUserIDsRequest::serialize(bdGetPlatformUserIDsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdGetPlatformUserIDsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdGetPlatformUserIDsRequest::deserialize
==============
*/

bool __fastcall bdGetPlatformUserIDsRequest::deserialize(bdGetPlatformUserIDsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdGetPlatformUserIDsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest
==============
*/
void bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest(bdGetPlatformUserIDsRequest *this, const unsigned int numUsers, const bdUserAccountID *users, int a4)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  bdGetPlatformUserIDsRequest_vtbl **v9; 
  int v10; 
  bdStructUserAccountID v12; 

  v5 = numUsers;
  v10 = 0;
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdGetPlatformUserIDsRequest::`vbtable';
    *(_QWORD *)this->gap44D8 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap44D8[8] = 0;
    v10 = 1;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdGetPlatformUserIDsRequest_vtbl *)&bdGetPlatformUserIDsRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetPlatformUserIDsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdGetPlatformUserIDsRequest_vtbl *)&bdGetPlatformUserIDsRequest::`vftable'{for `bdReferencable'};
  `eh vector vbase constructor iterator'(&this->__vftable + 2, 0x58ui64, 0xC8ui64, (void (__fastcall *)(void *))bdStructUserAccountID::bdStructUserAccountID, (void (__fastcall *)(void *))bdStructUserAccountID::`vbase destructor);
  *(_DWORD *)&this->m_users[17584] = 0;
  bdHandleAssert((unsigned int)v5 <= 0xC8, "numUsers <= BD_CROSS_PLATFORM_IDENTITY_MAX_NUM_USERS", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetplatformuseridsrequest.cpp", "bdGetPlatformUserIDsRequest::bdGetPlatformUserIDsRequest", 0xEu, "Number of users in the request exceeded the max limit.", v10, -2i64, this, &this->__vftable + 2);
  if ( (_DWORD)v5 )
  {
    v7 = v5;
    do
    {
      bdStructUserAccountID::bdStructUserAccountID(&v12, users);
      bdHandleAssert(*(_DWORD *)&this->m_users[17584] < 0xC8u, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,200>::pushBack", 0x40u, "No more capacity for pushBack");
      v8 = *(unsigned int *)&this->m_users[17584];
      if ( (unsigned int)v8 < 0xC8 )
      {
        v9 = &this->__vftable + 11 * v8 + 2;
        *(_DWORD *)&this->m_users[17584] = v8 + 1;
        bdUserAccountID::operator=((bdUserAccountID *)v9, &v12);
        bdReferencable::operator=((bdReferencable *)((char *)v9 + SHIDWORD(v9[8]->serialize) + 64), (const bdReferencable *)&v12.gap38[*(int *)(*(_QWORD *)&v12.gap38[8] + 4i64) + 8]);
      }
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v12._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v12.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v12._bytes_48);
      ++users;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
bdGetPlatformUserIDsRequest::deserialize
==============
*/
bool bdGetPlatformUserIDsRequest::deserialize(bdGetPlatformUserIDsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdgetplatformuseridsrequest.cpp", "bdGetPlatformUserIDsRequest::deserialize", 0x1Cu, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdGetPlatformUserIDsRequest::serialize
==============
*/
bool bdGetPlatformUserIDsRequest::serialize(bdGetPlatformUserIDsRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int v2; 
  bdGetPlatformUserIDsRequest_vtbl **v3; 
  unsigned int v4; 
  bool result; 

  v2 = *(_DWORD *)&this->m_users[17584];
  v3 = &this->__vftable + 2;
  v4 = 0;
  for ( result = 1; v4 < v2; ++v4 )
    result = result && (bdHandleAssert(v4 < *((_DWORD *)v3 + 4400), "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdStructUserAccountID,200>::operator []", 0x54u, "i is out of range"), bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)&v3[11 * v4 + 7]));
  return result;
}

