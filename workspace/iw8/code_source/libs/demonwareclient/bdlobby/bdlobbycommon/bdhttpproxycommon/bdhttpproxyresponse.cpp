/*
==============
bdHTTPProxyResponse::reset
==============
*/

void __fastcall bdHTTPProxyResponse::reset(bdHTTPProxyResponse *this)
{
  ?reset@bdHTTPProxyResponse@@QEAAXXZ(this);
}

/*
==============
bdHTTPProxyResponse::bdHTTPProxyResponse
==============
*/

void __fastcall bdHTTPProxyResponse::bdHTTPProxyResponse(bdHTTPProxyResponse *this)
{
  ??0bdHTTPProxyResponse@@QEAA@XZ(this);
}

/*
==============
bdHTTPProxyResponse::deserializeHeaders
==============
*/

bool __fastcall bdHTTPProxyResponse::deserializeHeaders(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, bdStructFixedSizeArray<bdHTTPProxyHeader,4> *headers)
{
  return ?deserializeHeaders@bdHTTPProxyResponse@@IEAA_NAEAVbdStructBufferDeserializer@@AEAV?$bdStructFixedSizeArray@VbdHTTPProxyHeader@@$03@@@Z(this, deserializer, headers);
}

/*
==============
bdHTTPProxyResponse::deserializeBody
==============
*/

bool __fastcall bdHTTPProxyResponse::deserializeBody(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, char *body, unsigned int bodySize)
{
  return ?deserializeBody@bdHTTPProxyResponse@@IEAA_NAEAVbdStructBufferDeserializer@@PEADI@Z(this, deserializer, body, bodySize);
}

/*
==============
bdHTTPProxyResponse::deserializeStatusCode
==============
*/

bool __fastcall bdHTTPProxyResponse::deserializeStatusCode(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, unsigned int *status_code)
{
  return ?deserializeStatusCode@bdHTTPProxyResponse@@IEAA_NAEAVbdStructBufferDeserializer@@AEAI@Z(this, deserializer, status_code);
}

/*
==============
bdHTTPProxyResponse::bdHTTPProxyResponse
==============
*/
void bdHTTPProxyResponse::bdHTTPProxyResponse(bdHTTPProxyResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdHTTPProxyResponse::`vbtable';
    *((_QWORD *)&this->__vftable + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->__vftable + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdHTTPProxyResponse_vtbl *)&bdHTTPProxyResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdHTTPProxyResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdHTTPProxyResponse_vtbl *)&bdHTTPProxyResponse::`vftable'{for `bdReferencable'};
}

/*
==============
bdHTTPProxyResponse::deserializeBody
==============
*/
bool bdHTTPProxyResponse::deserializeBody(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, char *body, unsigned int bodySize)
{
  return bdStructBufferDeserializer::readString(deserializer, 3u, body, bodySize);
}

/*
==============
bdHTTPProxyResponse::deserializeHeaders
==============
*/
__int64 bdHTTPProxyResponse::deserializeHeaders(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, bdStructFixedSizeArray<bdHTTPProxyHeader,4> *headers)
{
  unsigned __int8 v5; 
  char v6; 
  __int64 m_size; 
  __int64 v9; 
  __int64 v10; 
  bdHTTPProxyHeader __that; 

  v5 = 1;
  headers->m_size = 0;
  v6 = 0;
  while ( !v6 )
  {
    bdHTTPProxyHeader::bdHTTPProxyHeader(&__that);
    if ( !bdStructBufferDeserializer::readObject(deserializer, 1u, &__that) )
      goto LABEL_9;
    v5 = 1;
    if ( bdStructBufferDeserializer::getLastReadResult(deserializer) != BD_READ_SUCCESS_TAG_NOT_FOUND )
    {
      if ( headers->m_size < 4 )
      {
        bdHandleAssert(1, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdHTTPProxyHeader,4>::pushBack", 0x40u, "No more capacity for pushBack");
        m_size = headers->m_size;
        if ( (unsigned int)m_size < 4 )
        {
          headers->m_size = m_size + 1;
          bdHTTPProxyHeader::operator=(&headers->m_elements[m_size], &__that);
        }
        goto LABEL_10;
      }
      LODWORD(v10) = 4;
      LODWORD(v9) = 1;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "lobby/common/structbufferdeserializer", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructbufferdeserializer.inl", "bdStructBufferDeserializer::readObjectArray", 0x61u, "No capacity to push back deserialized object. tag=%d , capacity=%d", v9, v10);
LABEL_9:
      v5 = 0;
      goto LABEL_10;
    }
    v6 = 1;
LABEL_10:
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&__that.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&__that.gap844[4]);
    if ( !v5 )
      return v5;
  }
  return v5;
}

/*
==============
bdHTTPProxyResponse::deserializeStatusCode
==============
*/
bool bdHTTPProxyResponse::deserializeStatusCode(bdHTTPProxyResponse *this, bdStructBufferDeserializer *deserializer, unsigned int *status_code)
{
  bool result; 
  unsigned int value; 

  result = bdStructBufferDeserializer::readUInt32(deserializer, 2u, &value);
  *status_code = value;
  return result;
}

/*
==============
bdHTTPProxyResponse::reset
==============
*/
void bdHTTPProxyResponse::reset(bdHTTPProxyResponse *this)
{
  ;
}

