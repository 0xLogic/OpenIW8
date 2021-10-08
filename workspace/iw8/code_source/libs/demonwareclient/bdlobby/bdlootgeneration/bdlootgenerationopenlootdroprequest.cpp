/*
==============
bdLootGenerationOpenLootDropRequest::bdLootGenerationOpenLootDropRequest
==============
*/

void __fastcall bdLootGenerationOpenLootDropRequest::bdLootGenerationOpenLootDropRequest(bdLootGenerationOpenLootDropRequest *this)
{
  ??0bdLootGenerationOpenLootDropRequest@@QEAA@XZ(this);
}

/*
==============
bdLootGenerationOpenLootDropRequest::deserialize
==============
*/

bool __fastcall bdLootGenerationOpenLootDropRequest::deserialize(bdLootGenerationOpenLootDropRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdLootGenerationOpenLootDropRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdLootGenerationOpenLootDropRequest::serializeWithLobbyService
==============
*/

bool __fastcall bdLootGenerationOpenLootDropRequest::serializeWithLobbyService(bdLootGenerationOpenLootDropRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  return ?serializeWithLobbyService@bdLootGenerationOpenLootDropRequest@@UEBA_NAEAVbdStructBufferSerializer@@PEAVbdLobbyService@@@Z(this, serializer, lobbyService);
}

/*
==============
bdLootGenerationOpenLootDropRequest::reset
==============
*/

void __fastcall bdLootGenerationOpenLootDropRequest::reset(bdLootGenerationOpenLootDropRequest *this)
{
  ?reset@bdLootGenerationOpenLootDropRequest@@QEAAXXZ(this);
}

/*
==============
bdLootGenerationOpenLootDropRequest::init
==============
*/

void __fastcall bdLootGenerationOpenLootDropRequest::init(bdLootGenerationOpenLootDropRequest *this, unsigned int lootDropID, const char *context, const char *jsonClientData)
{
  ?init@bdLootGenerationOpenLootDropRequest@@QEAAXIPEBD0@Z(this, lootDropID, context, jsonClientData);
}

/*
==============
bdLootGenerationOpenLootDropRequest::bdLootGenerationOpenLootDropRequest
==============
*/
void bdLootGenerationOpenLootDropRequest::bdLootGenerationOpenLootDropRequest(bdLootGenerationOpenLootDropRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdLootGenerationOpenLootDropRequest::`vbtable';
    *(_QWORD *)&this->m_jsonClientData[1004] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_jsonClientData[1012] = 0;
  }
  bdHTTPProxyRequest::bdHTTPProxyRequest(this);
  this->__vftable = (bdLootGenerationOpenLootDropRequest_vtbl *)&bdLootGenerationOpenLootDropRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdLootGenerationOpenLootDropRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdLootGenerationOpenLootDropRequest_vtbl *)&bdLootGenerationOpenLootDropRequest::`vftable'{for `bdReferencable'};
  *((_DWORD *)&this->__vftable + 4) = 0;
  memset_0((char *)&this->__vftable + 20, 0, 0x3F8ui64);
}

/*
==============
bdLootGenerationOpenLootDropRequest::deserialize
==============
*/
bool bdLootGenerationOpenLootDropRequest::deserialize(bdLootGenerationOpenLootDropRequest *this, bdStructBufferDeserializer *deserializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlootgeneration\\bdlootgenerationopenlootdroprequest.cpp", "bdLootGenerationOpenLootDropRequest::deserialize", 0x25u, "Cannot call deserialize on bdLootGenerationOpenLootDropRequest");
  return 0;
}

/*
==============
bdLootGenerationOpenLootDropRequest::init
==============
*/
void bdLootGenerationOpenLootDropRequest::init(bdLootGenerationOpenLootDropRequest *this, unsigned int lootDropID, const char *context, const char *jsonClientData)
{
  *((_DWORD *)&this->__vftable + 4) = lootDropID;
  bdStrlcpy((char *const)&this->__vftable + 20, context, 0x10ui64);
  bdStrlcpy(this->m_jsonClientData, jsonClientData, 0x3E8ui64);
}

/*
==============
bdLootGenerationOpenLootDropRequest::reset
==============
*/
void bdLootGenerationOpenLootDropRequest::reset(bdLootGenerationOpenLootDropRequest *this)
{
  *((_DWORD *)&this->__vftable + 4) = 0;
  memset_0((char *)&this->__vftable + 20, 0, 0x3F8ui64);
}

/*
==============
bdLootGenerationOpenLootDropRequest::serializeWithLobbyService
==============
*/
bool bdLootGenerationOpenLootDropRequest::serializeWithLobbyService(bdLootGenerationOpenLootDropRequest *this, bdStructBufferSerializer *serializer, bdLobbyService *lobbyService)
{
  bdAuthInfo *AuthInfo; 
  bool v7; 
  char v8; 
  bool v9; 
  int format; 
  bdJSONSerializer v11; 
  bdHTTPProxyHeader header; 
  char buffer[1008]; 
  char buf[1024]; 

  if ( lobbyService )
  {
    AuthInfo = bdLobbyService::getAuthInfo(lobbyService);
    v7 = 0;
    if ( bdHTTPProxyRequest::serializeMethod(this, serializer, "POST") )
    {
      format = *((_DWORD *)&this->__vftable + 4);
      if ( (unsigned int)(bdSnprintf(buf, 0x400ui64, "%s/v1/users/%s-%llu/loot-drop/%u/?client=%s&context=%s", "http:
        v7 = 1;
    }
    memset_0(buffer, 0, 0x3E8ui64);
    bdJSONSerializer::bdJSONSerializer(&v11, buffer, 0x400u);
    if ( v7 && bdJSONSerializer::writeBeginObject(&v11) && bdJSONSerializer::writeString(&v11, "clientData", this->m_jsonClientData) && bdJSONSerializer::writeEndObject(&v11) )
    {
      v8 = 1;
      bdHTTPProxyRequest::serializeBody(this, serializer, buffer, 0x400u);
    }
    else
    {
      v8 = 0;
    }
    bdHTTPProxyHeader::bdHTTPProxyHeader(&header);
    v9 = v8 && bdHTTPProxyHeader::set(&header, "Content-Type", "application/json") && bdHTTPProxyRequest::serializeHeader(this, serializer, &header);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&header.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&header.gap844[4]);
    bdJSONSerializer::~bdJSONSerializer(&v11);
    return v9;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLootGenerationOpenLootDropRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlootgeneration\\bdlootgenerationopenlootdroprequest.cpp", "bdLootGenerationOpenLootDropRequest::serializeWithLobbyService", 0x30u, "lobbyService cannot be NULL");
    return 0;
  }
}

