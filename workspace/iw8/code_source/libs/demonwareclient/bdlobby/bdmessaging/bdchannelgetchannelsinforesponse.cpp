/*
==============
bdChannelGetChannelInfosResponse::deserialize
==============
*/

bool __fastcall bdChannelGetChannelInfosResponse::deserialize(bdChannelGetChannelInfosResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdChannelGetChannelInfosResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdChannelGetChannelInfosResponse::reset
==============
*/

void __fastcall bdChannelGetChannelInfosResponse::reset(bdChannelGetChannelInfosResponse *this)
{
  ?reset@bdChannelGetChannelInfosResponse@@QEAAXXZ(this);
}

/*
==============
bdChannelGetChannelInfosResponse::bdChannelGetChannelInfosResponse
==============
*/

void __fastcall bdChannelGetChannelInfosResponse::bdChannelGetChannelInfosResponse(bdChannelGetChannelInfosResponse *this)
{
  ??0bdChannelGetChannelInfosResponse@@QEAA@XZ(this);
}

/*
==============
bdChannelGetChannelInfosResponse::bdChannelGetChannelInfosResponse
==============
*/
void bdChannelGetChannelInfosResponse::bdChannelGetChannelInfosResponse(bdChannelGetChannelInfosResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelGetChannelInfosResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelGetChannelInfosResponse_vtbl *)&bdChannelGetChannelInfosResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelGetChannelInfosResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelGetChannelInfosResponse_vtbl *)&bdChannelGetChannelInfosResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdArray<bdChannelInfo>::destruct((bdArray<bdChannelInfo> *)&this->__vftable + 1, NULL, 0);
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdChannelGetChannelInfosResponse::deserialize
==============
*/
char bdChannelGetChannelInfosResponse::deserialize(bdChannelGetChannelInfosResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdChannelGetChannelInfosResponse_vtbl **v3; 
  char v4; 
  char v5; 
  unsigned int v6; 
  bdChannelInfo *v7; 
  bdChannelInfo __that; 

  v3 = &this->__vftable + 2;
  bdArray<bdChannelInfo>::destruct((bdArray<bdChannelInfo> *)&this->__vftable + 1, *((bdChannelInfo **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*v3);
  *v3 = NULL;
  v3[1] = NULL;
  v4 = 0;
  while ( !v4 )
  {
    bdChannelInfo::bdChannelInfo(&__that);
    if ( bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&__that.__vftable + 2)) )
    {
      v5 = 1;
      if ( bdStructBufferDeserializer::getLastReadResult(deserializer) == BD_READ_SUCCESS_TAG_NOT_FOUND )
      {
        v4 = 1;
      }
      else
      {
        v6 = *((_DWORD *)v3 + 3);
        if ( v6 == *((_DWORD *)v3 + 2) )
        {
          bdArray<bdChannelInfo>::increaseCapacity((bdArray<bdChannelInfo> *)v3, 1u);
          v6 = *((_DWORD *)v3 + 3);
        }
        v7 = (bdChannelInfo *)&(*v3)[3 * v6];
        if ( v7 )
        {
          bdChannelInfo::bdChannelInfo(v7, &__that);
          v6 = *((_DWORD *)v3 + 3);
        }
        *((_DWORD *)v3 + 3) = v6 + 1;
      }
    }
    else
    {
      v5 = 0;
    }
    bdChannelInfo::~bdChannelInfo((bdChannelInfo *)(&__that.m_dataVersion + 1));
    bdReferencable::~bdReferencable((bdReferencable *)(&__that.m_dataVersion + 1));
    if ( !v5 )
      return 0;
  }
  return 1;
}

/*
==============
bdChannelGetChannelInfosResponse::reset
==============
*/
void bdChannelGetChannelInfosResponse::reset(bdChannelGetChannelInfosResponse *this)
{
  bdChannelGetChannelInfosResponse_vtbl **v1; 

  v1 = &this->__vftable + 2;
  bdArray<bdChannelInfo>::destruct((bdArray<bdChannelInfo> *)&this->__vftable + 1, *((bdChannelInfo **)&this->__vftable + 2), *((_DWORD *)&this->__vftable + 7));
  bdMemory::deallocate(*v1);
  *v1 = NULL;
  v1[1] = NULL;
}

