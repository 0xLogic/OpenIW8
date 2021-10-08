/*
==============
bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse
==============
*/

void __fastcall bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse(bdRetrievePublisherVariablesResponse *this)
{
  ??0bdRetrievePublisherVariablesResponse@@QEAA@XZ(this);
}

/*
==============
bdRetrievePublisherVariablesResponse::deserialize
==============
*/

bool __fastcall bdRetrievePublisherVariablesResponse::deserialize(bdRetrievePublisherVariablesResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdRetrievePublisherVariablesResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse
==============
*/

void __fastcall bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse(bdRetrievePublisherVariablesResponse *this, const unsigned __int16 numNameSpaces, bdPublisherVariablesInfo *refreshPublisherVariablesResult)
{
  ??0bdRetrievePublisherVariablesResponse@@QEAA@GPEAVbdPublisherVariablesInfo@@@Z(this, numNameSpaces, refreshPublisherVariablesResult);
}

/*
==============
bdRetrievePublisherVariablesResponse::serialize
==============
*/

bool __fastcall bdRetrievePublisherVariablesResponse::serialize(bdRetrievePublisherVariablesResponse *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdRetrievePublisherVariablesResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdRetrievePublisherVariablesResponse::init
==============
*/

void __fastcall bdRetrievePublisherVariablesResponse::init(bdRetrievePublisherVariablesResponse *this, const unsigned __int16 numNameSpaces, bdPublisherVariablesInfo *refreshPublisherVariablesResult)
{
  ?init@bdRetrievePublisherVariablesResponse@@QEAAXGPEAVbdPublisherVariablesInfo@@@Z(this, numNameSpaces, refreshPublisherVariablesResult);
}

/*
==============
bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse
==============
*/
void bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse(bdRetrievePublisherVariablesResponse *this, const unsigned __int16 numNameSpaces, bdPublisherVariablesInfo *refreshPublisherVariablesResult, int a4)
{
  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRetrievePublisherVariablesResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRetrievePublisherVariablesResponse_vtbl *)&bdRetrievePublisherVariablesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdRetrievePublisherVariablesResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRetrievePublisherVariablesResponse_vtbl *)&bdRetrievePublisherVariablesResponse::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = numNameSpaces;
  *((_QWORD *)&this->__vftable + 3) = refreshPublisherVariablesResult;
}

/*
==============
bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse
==============
*/
void bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse(bdRetrievePublisherVariablesResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRetrievePublisherVariablesResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdRetrievePublisherVariablesResponse_vtbl *)&bdRetrievePublisherVariablesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdRetrievePublisherVariablesResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRetrievePublisherVariablesResponse_vtbl *)&bdRetrievePublisherVariablesResponse::`vftable'{for `bdReferencable'};
  *((_WORD *)&this->__vftable + 8) = 0;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdRetrievePublisherVariablesResponse::deserialize
==============
*/
bool bdRetrievePublisherVariablesResponse::deserialize(bdRetrievePublisherVariablesResponse *this, bdStructBufferDeserializer *deserializer)
{
  unsigned int v2; 
  bool result; 

  v2 = 0;
  for ( result = 1; v2 < *((unsigned __int16 *)&this->__vftable + 8); ++v2 )
    result = result && bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(*((_QWORD *)&this->__vftable + 3) + 16i64));
  return result;
}

/*
==============
bdRetrievePublisherVariablesResponse::init
==============
*/
void bdRetrievePublisherVariablesResponse::init(bdRetrievePublisherVariablesResponse *this, const unsigned __int16 numNameSpaces, bdPublisherVariablesInfo *refreshPublisherVariablesResult)
{
  *((_WORD *)&this->__vftable + 8) = numNameSpaces;
  *((_QWORD *)&this->__vftable + 3) = refreshPublisherVariablesResult;
}

/*
==============
bdRetrievePublisherVariablesResponse::serialize
==============
*/
bool bdRetrievePublisherVariablesResponse::serialize(bdRetrievePublisherVariablesResponse *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdretrievepublishervariablesresponse.cpp", "bdRetrievePublisherVariablesResponse::serialize", 0x22u, "NOT IMPLEMENTED");
  return 0;
}

