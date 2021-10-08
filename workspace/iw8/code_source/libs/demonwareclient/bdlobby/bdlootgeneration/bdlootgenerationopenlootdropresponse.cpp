/*
==============
bdLootGenerationOpenLootDropResponse::bdLootGenerationOpenLootDropResponse
==============
*/

void __fastcall bdLootGenerationOpenLootDropResponse::bdLootGenerationOpenLootDropResponse(bdLootGenerationOpenLootDropResponse *this)
{
  ??0bdLootGenerationOpenLootDropResponse@@QEAA@XZ(this);
}

/*
==============
bdLootGenerationOpenLootDropResponse::serialize
==============
*/

bool __fastcall bdLootGenerationOpenLootDropResponse::serialize(bdLootGenerationOpenLootDropResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdLootGenerationOpenLootDropResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdLootGenerationOpenLootDropResponse::deserialize
==============
*/

bool __fastcall bdLootGenerationOpenLootDropResponse::deserialize(bdLootGenerationOpenLootDropResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdLootGenerationOpenLootDropResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdLootGenerationOpenLootDropResponse::reset
==============
*/

void __fastcall bdLootGenerationOpenLootDropResponse::reset(bdLootGenerationOpenLootDropResponse *this)
{
  ?reset@bdLootGenerationOpenLootDropResponse@@QEAAXXZ(this);
}

/*
==============
bdLootGenerationOpenLootDropResponse::bdLootGenerationOpenLootDropResponse
==============
*/
void bdLootGenerationOpenLootDropResponse::bdLootGenerationOpenLootDropResponse(bdLootGenerationOpenLootDropResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdLootGenerationOpenLootDropResponse::`vbtable';
    *(_QWORD *)&this->m_jsonScriptResponse[15984] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_jsonScriptResponse[15992] = 0;
  }
  bdHTTPProxyResponse::bdHTTPProxyResponse(this);
  this->__vftable = (bdLootGenerationOpenLootDropResponse_vtbl *)&bdLootGenerationOpenLootDropResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdLootGenerationOpenLootDropResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdLootGenerationOpenLootDropResponse_vtbl *)&bdLootGenerationOpenLootDropResponse::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x3E80ui64);
}

/*
==============
bdLootGenerationOpenLootDropResponse::deserialize
==============
*/
_BOOL8 bdLootGenerationOpenLootDropResponse::deserialize(bdLootGenerationOpenLootDropResponse *this, bdStructBufferDeserializer *deserializer)
{
  bool v4; 
  bool v5; 
  unsigned int status_code; 
  bdJSONDeserializer v8; 
  __int64 v9; 
  char body[16000]; 

  v9 = -2i64;
  status_code = 0;
  v4 = bdHTTPProxyResponse::deserializeStatusCode(this, deserializer, &status_code) && bdHTTPProxyResponse::deserializeBody(this, deserializer, body, 0x3E80u);
  bdJSONDeserializer::bdJSONDeserializer(&v8);
  v5 = v4 && bdJSONDeserializer::parse(&v8, body) && bdJSONDeserializer::isObject(&v8) && bdJSONDeserializer::getString(&v8, "scriptResponse", (char *const)&this->__vftable + 16, 0x3E80u);
  bdJSONDeserializer::~bdJSONDeserializer(&v8);
  return v5;
}

/*
==============
bdLootGenerationOpenLootDropResponse::reset
==============
*/
void bdLootGenerationOpenLootDropResponse::reset(bdLootGenerationOpenLootDropResponse *this)
{
  memset_0(&this->__vftable + 2, 0, 0x3E80ui64);
}

/*
==============
bdLootGenerationOpenLootDropResponse::serialize
==============
*/
bool bdLootGenerationOpenLootDropResponse::serialize(bdLootGenerationOpenLootDropResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlootgeneration\\bdlootgenerationopenlootdropresponse.cpp", "bdLootGenerationOpenLootDropResponse::serialize", 0x35u, "Cannot call bdLootGenerationOpenLootDropResponse::serialize");
  return 0;
}

