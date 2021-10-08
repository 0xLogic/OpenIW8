/*
==============
bdCommsGetMessagesResponse::reset
==============
*/

void __fastcall bdCommsGetMessagesResponse::reset(bdCommsGetMessagesResponse *this)
{
  ?reset@bdCommsGetMessagesResponse@@QEAAXXZ(this);
}

/*
==============
bdCommsGetMessagesResponse::serialize
==============
*/

bool __fastcall bdCommsGetMessagesResponse::serialize(bdCommsGetMessagesResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsGetMessagesResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsGetMessagesResponse::bdCommsGetMessagesResponse
==============
*/

void __fastcall bdCommsGetMessagesResponse::bdCommsGetMessagesResponse(bdCommsGetMessagesResponse *this)
{
  ??0bdCommsGetMessagesResponse@@QEAA@XZ(this);
}

/*
==============
bdCommsGetMessagesResponse::deserialize
==============
*/

bool __fastcall bdCommsGetMessagesResponse::deserialize(bdCommsGetMessagesResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsGetMessagesResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsGetMessagesResponse::bdCommsGetMessagesResponse
==============
*/
void bdCommsGetMessagesResponse::bdCommsGetMessagesResponse(bdCommsGetMessagesResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsGetMessagesResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsGetMessagesResponse_vtbl *)&bdCommsGetMessagesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsGetMessagesResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsGetMessagesResponse_vtbl *)&bdCommsGetMessagesResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdMemory::deallocate(NULL);
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdCommsGetMessagesResponse::deserialize
==============
*/
__int64 bdCommsGetMessagesResponse::deserialize(bdCommsGetMessagesResponse *this, bdStructBufferDeserializer *deserializer)
{
  unsigned __int8 v4; 
  char v5; 
  int v6; 
  int v7; 
  char *v8; 
  unsigned int v9; 
  __int64 v10; 
  bdCommsMessage Src; 

  v4 = 1;
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  v5 = 0;
  do
  {
    if ( v5 )
      break;
    bdCommsMessage::bdCommsMessage(&Src);
    if ( bdStructBufferDeserializer::readObject(deserializer, 1u, &Src) )
    {
      v4 = 1;
      if ( bdStructBufferDeserializer::getLastReadResult(deserializer) == BD_READ_SUCCESS_TAG_NOT_FOUND )
      {
        v5 = 1;
      }
      else
      {
        v6 = *((_DWORD *)&this->__vftable + 6);
        if ( *((_DWORD *)&this->__vftable + 7) == v6 )
        {
          v7 = *((_DWORD *)&this->__vftable + 6);
          if ( !v6 )
            v7 = 1;
          v8 = NULL;
          v9 = v6 + v7;
          if ( v9 )
          {
            v8 = (char *)bdMemory::allocate(7328i64 * v9);
            v10 = *((unsigned int *)&this->__vftable + 7);
            if ( (_DWORD)v10 )
              memcpy_0(v8, *((const void **)&this->__vftable + 2), 7328 * v10);
          }
          bdMemory::deallocate(*((void **)&this->__vftable + 2));
          *((_QWORD *)&this->__vftable + 2) = v8;
          *((_DWORD *)&this->__vftable + 6) = v9;
        }
        else
        {
          v8 = (char *)*((_QWORD *)&this->__vftable + 2);
        }
        memcpy_0(&v8[7328 * *((unsigned int *)&this->__vftable + 7)], &Src, 0x1CA0ui64);
        ++*((_DWORD *)&this->__vftable + 7);
      }
    }
    else
    {
      v4 = 0;
    }
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Src.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&Src.m_locationID + 2));
  }
  while ( v4 );
  return v4;
}

/*
==============
bdCommsGetMessagesResponse::reset
==============
*/
void bdCommsGetMessagesResponse::reset(bdCommsGetMessagesResponse *this)
{
  bdMemory::deallocate(*((void **)&this->__vftable + 2));
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdCommsGetMessagesResponse::serialize
==============
*/
bool bdCommsGetMessagesResponse::serialize(bdCommsGetMessagesResponse *this, bdStructBufferSerializer *serializer)
{
  return 0;
}

