/*
==============
bdReportUserEventsRequest::serialize
==============
*/

bool __fastcall bdReportUserEventsRequest::serialize(bdReportUserEventsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdReportUserEventsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdReportUserEventsRequest::bdReportUserEventsRequest
==============
*/

void __fastcall bdReportUserEventsRequest::bdReportUserEventsRequest(bdReportUserEventsRequest *this, const char *context, unsigned int numEvents, const bdUserAchievementEvents **events, const char *requestID)
{
  ??0bdReportUserEventsRequest@@QEAA@PEBDIQEAPEBVbdUserAchievementEvents@@0@Z(this, context, numEvents, events, requestID);
}

/*
==============
bdReportUserEventsRequest::deserialize
==============
*/

bool __fastcall bdReportUserEventsRequest::deserialize(bdReportUserEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdReportUserEventsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdReportUserEventsRequest::restSerializeRequest
==============
*/

bool __fastcall bdReportUserEventsRequest::restSerializeRequest(bdReportUserEventsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdReportUserEventsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdReportUserEventsRequest::bdReportUserEventsRequest
==============
*/
void bdReportUserEventsRequest::bdReportUserEventsRequest(bdReportUserEventsRequest *this, const char *context, unsigned int numEvents, const bdUserAchievementEvents **events, const char *requestID, int a6)
{
  const char *v10; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdReportUserEventsRequest::`vbtable';
    *(_QWORD *)&this->gap109A[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap109A[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest((bdAchievementsEngineRestRequest *)(&this->__vftable + 2), context);
  this->__vftable = (bdReportUserEventsRequest_vtbl *)&bdReportUserEventsRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->__vftable + 2) = &bdReportUserEventsRequest::`vftable';
  *(bdReportUserEventsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdReportUserEventsRequest_vtbl *)&bdReportUserEventsRequest::`vftable'{for `bdReferencable'};
  this->m_numEvents = numEvents;
  this->m_events = events;
  v10 = (char *)&queryFormat.fmt + 3;
  if ( requestID )
    v10 = requestID;
  if ( bdStrlcpy(this->m_requestID.m_buffer, v10, 0x1Aui64) > 0x19 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdReportUserEventsRequest::deserialize
==============
*/
bool bdReportUserEventsRequest::deserialize(bdReportUserEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreportusereventsrequest.cpp", "bdReportUserEventsRequest::deserialize", 0x23u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdReportUserEventsRequest::restSerializeRequest
==============
*/
bool bdReportUserEventsRequest::restSerializeRequest(bdReportUserEventsRequest *this, bdRESTRequestBuilder *builder)
{
  unsigned int *p_m_numEvents; 
  unsigned int v5; 
  bdRESTURI *v6; 
  unsigned int v7; 
  bool BodyJSONSerializer; 
  bdJSONSerializer *v9; 
  bool result; 
  void *v11; 
  bdReportUserEventsRequest *v12; 
  bool v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  bool v29; 
  bdJSONSerializer *serializer; 
  bdReportUserEventsRequest *v31; 
  unsigned __int8 dest[16]; 
  char buf[40]; 

  p_m_numEvents = &this->m_numEvents;
  v31 = this;
  v5 = 25;
  if ( !strncmp((const char *)&this->m_numEvents, (const char *)&queryFormat.fmt + 3, 0x19ui64) )
    bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId((char *)p_m_numEvents, 0x1Au);
  if ( bdAchievementsEngineRestRequest::addCommonParams((bdAchievementsEngineRestRequest *)this, builder) && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "user_events", "report_user_events_batch") && (v6 = bdRESTRequestBuilder::uri(builder), bdRESTURI::formatPath(v6, "/v2/user-events/$batch/")) )
  {
    v7 = 0;
    serializer = NULL;
    BodyJSONSerializer = bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer);
    v9 = serializer;
    if ( BodyJSONSerializer )
    {
      result = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = 0;
    v9 = NULL;
    serializer = NULL;
  }
  result = 0;
LABEL_11:
  v29 = result;
  if ( v9 )
  {
    bdJSONSerializer::writeBeginObject(v9);
    bdJSONSerializer::writeUInt32(serializer, "titleID", *((_DWORD *)&this->__vftable + 2), 0);
    v11 = memchr_0(p_m_numEvents, 0, 0x19ui64);
    if ( v11 )
      v5 = (_DWORD)v11 - (_DWORD)p_m_numEvents;
    bdBase64::decodeURLSafe((const char *)p_m_numEvents, v5, dest, 0x10u);
    v28 = dest[0];
    v27 = dest[1];
    v26 = dest[2];
    v25 = dest[3];
    v24 = dest[4];
    v23 = dest[5];
    v22 = dest[6];
    v21 = dest[7];
    v20 = dest[8];
    v19 = dest[9];
    v18 = dest[10];
    v17 = dest[11];
    v16 = dest[12];
    v15 = dest[13];
    v14 = dest[14];
    bdSnprintf(buf, 0x25ui64, "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x", dest[15], v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28);
    bdJSONSerializer::writeString(serializer, "idempotentRequestID", buf);
    bdJSONSerializer::writeBeginArray(serializer, "userEvents");
    v12 = v31;
    if ( *(_DWORD *)&v31->_bytes_20[4160] )
    {
      v13 = v29;
      do
        v13 = v13 && bdUserAchievementEvents::serialize(*(bdUserAchievementEvents **)(*(_QWORD *)&v12->_bytes_20[4168] + 8i64 * v7++), serializer);
      while ( v7 < *(_DWORD *)&v12->_bytes_20[4160] );
      v29 = v13;
    }
    bdJSONSerializer::writeEndArray(serializer);
    bdJSONSerializer::writeEndObject(serializer);
    return v29;
  }
  return result;
}

/*
==============
bdReportUserEventsRequest::serialize
==============
*/
bool bdReportUserEventsRequest::serialize(bdReportUserEventsRequest *this, bdStructBufferSerializer *serializer)
{
  const char *v2; 
  unsigned int v5; 
  void *v6; 
  unsigned int m_numEvents; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  void *v12; 

  v2 = (char *)&this->__vftable + 28;
  v5 = 16;
  v6 = memchr_0((char *)&this->__vftable + 28, 0, 0x10ui64);
  if ( v6 )
    v5 = (_DWORD)v6 - (_DWORD)v2;
  if ( !bdStructBufferSerializer::writeString(serializer, 1u, v2, v5) )
    return 0;
  m_numEvents = this->m_numEvents;
  v8 = 1;
  if ( m_numEvents )
  {
    v9 = 0i64;
    v10 = m_numEvents;
    do
    {
      v8 = v8 && bdStructBufferSerializer::writeObject(serializer, 2u, this->m_events[v9++]);
      --v10;
    }
    while ( v10 );
    if ( !v8 )
      return 0;
  }
  v11 = 25;
  v12 = memchr_0(&this->m_requestID, 0, 0x19ui64);
  if ( v12 )
    v11 = (_DWORD)v12 - ((_DWORD)this + 4224);
  return bdStructBufferSerializer::writeString(serializer, 3u, this->m_requestID.m_buffer, v11);
}

