/*
==============
bdHTTPProxyRequest::serializeHeader
==============
*/

bool __fastcall bdHTTPProxyRequest::serializeHeader(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const bdHTTPProxyHeader *header)
{
  return ?serializeHeader@bdHTTPProxyRequest@@QEBA_NAEAVbdStructBufferSerializer@@AEBVbdHTTPProxyHeader@@@Z(this, serializer, header);
}

/*
==============
bdHTTPProxyRequest::serializeURL
==============
*/

bool __fastcall bdHTTPProxyRequest::serializeURL(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const url)
{
  return ?serializeURL@bdHTTPProxyRequest@@QEBA_NAEAVbdStructBufferSerializer@@QEBD@Z(this, serializer, url);
}

/*
==============
bdHTTPProxyRequest::bdHTTPProxyRequest
==============
*/

void __fastcall bdHTTPProxyRequest::bdHTTPProxyRequest(bdHTTPProxyRequest *this)
{
  ??0bdHTTPProxyRequest@@QEAA@XZ(this);
}

/*
==============
bdHTTPProxyRequest::serializeBody
==============
*/

bool __fastcall bdHTTPProxyRequest::serializeBody(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const body, const unsigned int bodySize)
{
  return ?serializeBody@bdHTTPProxyRequest@@QEBA_NAEAVbdStructBufferSerializer@@QEBDI@Z(this, serializer, body, bodySize);
}

/*
==============
bdHTTPProxyRequest::serializeMethod
==============
*/

bool __fastcall bdHTTPProxyRequest::serializeMethod(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const method)
{
  return ?serializeMethod@bdHTTPProxyRequest@@QEBA_NAEAVbdStructBufferSerializer@@QEBD@Z(this, serializer, method);
}

/*
==============
bdHTTPProxyRequest::bdHTTPProxyRequest
==============
*/
void bdHTTPProxyRequest::bdHTTPProxyRequest(bdHTTPProxyRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdHTTPProxyRequest::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdHTTPProxyRequest_vtbl *)&bdHTTPProxyRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdHTTPProxyRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdHTTPProxyRequest_vtbl *)&bdHTTPProxyRequest::`vftable'{for `bdReferencable'};
}

/*
==============
bdHTTPProxyRequest::serializeBody
==============
*/
char bdHTTPProxyRequest::serializeBody(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const body, const unsigned int bodySize)
{
  if ( body )
  {
    if ( bdStructBufferSerializer::writeString(serializer, 3u, body, bodySize) )
    {
      return 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeBody", 0x4Du, "serializeBody: unable to write string %s", body);
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeBody", 0x45u, "serializeBody: body cannot be NULL");
    return 0;
  }
}

/*
==============
bdHTTPProxyRequest::serializeHeader
==============
*/
bool bdHTTPProxyRequest::serializeHeader(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const bdHTTPProxyHeader *header)
{
  return bdStructBufferSerializer::writeObject(serializer, 4u, header);
}

/*
==============
bdHTTPProxyRequest::serializeMethod
==============
*/
char bdHTTPProxyRequest::serializeMethod(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const method)
{
  if ( method )
  {
    if ( bdStructBufferSerializer::writeString(serializer, 1u, method, 0x10u) )
    {
      return 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeMethod", 0x20u, "serializeMethod: unable to write string %s", method);
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeMethod", 0x18u, "serializeMethod: method cannot be NULL");
    return 0;
  }
}

/*
==============
bdHTTPProxyRequest::serializeURL
==============
*/
char bdHTTPProxyRequest::serializeURL(bdHTTPProxyRequest *this, bdStructBufferSerializer *serializer, const char *const url)
{
  if ( url )
  {
    if ( bdStructBufferSerializer::writeString(serializer, 2u, url, 0x400u) )
    {
      return 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHttpProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeURL", 0x36u, "serializeURL: unable to write string %s", url);
      return 0;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyRequest", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyrequest.cpp", "bdHTTPProxyRequest::serializeURL", 0x2Eu, "serializeURL: url cannot be NULL");
    return 0;
  }
}

