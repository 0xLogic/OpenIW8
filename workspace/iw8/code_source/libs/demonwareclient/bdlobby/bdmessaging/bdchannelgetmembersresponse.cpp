/*
==============
bdChannelGetMembersResponse::reset
==============
*/

void __fastcall bdChannelGetMembersResponse::reset(bdChannelGetMembersResponse *this)
{
  ?reset@bdChannelGetMembersResponse@@QEAAXXZ(this);
}

/*
==============
bdChannelGetMembersResponse::deserialize
==============
*/

bool __fastcall bdChannelGetMembersResponse::deserialize(bdChannelGetMembersResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdChannelGetMembersResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdChannelGetMembersResponse::bdChannelGetMembersResponse
==============
*/

void __fastcall bdChannelGetMembersResponse::bdChannelGetMembersResponse(bdChannelGetMembersResponse *this)
{
  ??0bdChannelGetMembersResponse@@QEAA@XZ(this);
}

/*
==============
bdChannelGetMembersResponse::bdChannelGetMembersResponse
==============
*/
void bdChannelGetMembersResponse::bdChannelGetMembersResponse(bdChannelGetMembersResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelGetMembersResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelGetMembersResponse_vtbl *)&bdChannelGetMembersResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelGetMembersResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelGetMembersResponse_vtbl *)&bdChannelGetMembersResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdArray<bdChannelMember>::destruct((bdArray<bdChannelMember> *)&this->__vftable + 1, NULL, 0);
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdChannelGetMembersResponse::deserialize
==============
*/
char bdChannelGetMembersResponse::deserialize(bdChannelGetMembersResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdChannelGetMembersResponse_vtbl **v3; 
  char v4; 
  char v5; 
  bdChannelMember value; 

  v3 = &this->__vftable + 2;
  bdArray<bdChannelMember>::destruct((bdArray<bdChannelMember> *)&this->__vftable + 1, *((bdChannelMember **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*v3);
  *v3 = NULL;
  v3[1] = NULL;
  v4 = 0;
  while ( !v4 )
  {
    bdChannelMember::bdChannelMember(&value);
    if ( bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&value.__vftable + 2)) )
    {
      v5 = 1;
      if ( bdStructBufferDeserializer::getLastReadResult(deserializer) == BD_READ_SUCCESS_TAG_NOT_FOUND )
        v4 = 1;
      else
        bdArray<bdChannelMember>::pushBack((bdArray<bdChannelMember> *)v3, &value);
    }
    else
    {
      v5 = 0;
    }
    bdChannelMember::~bdChannelMember((bdChannelMember *)(&value.m_subscribedTimestamp + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&value.m_subscribedTimestamp + 2));
    if ( !v5 )
      return 0;
  }
  return 1;
}

/*
==============
bdChannelGetMembersResponse::reset
==============
*/
void bdChannelGetMembersResponse::reset(bdChannelGetMembersResponse *this)
{
  bdChannelGetMembersResponse_vtbl **v1; 

  v1 = &this->__vftable + 2;
  bdArray<bdChannelMember>::destruct((bdArray<bdChannelMember> *)&this->__vftable + 1, *((bdChannelMember **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*v1);
  *v1 = NULL;
  v1[1] = NULL;
}

