/*
==============
bdReportEventsRequest::setAccountType
==============
*/

void __fastcall bdReportEventsRequest::setAccountType(bdReportEventsRequest *this, const char *accountType)
{
  ?setAccountType@bdReportEventsRequest@@IEBAXPEBD@Z(this, accountType);
}

/*
==============
bdReportEventsRequest::bdReportEventsRequest
==============
*/

void __fastcall bdReportEventsRequest::bdReportEventsRequest(bdReportEventsRequest *this, const char *context, unsigned int numEvents, const bdAchievementEvent **events, const char *requestID)
{
  ??0bdReportEventsRequest@@QEAA@PEBDIQEAPEBVbdAchievementEvent@@0@Z(this, context, numEvents, events, requestID);
}

/*
==============
bdReportEventsRequest::restSerializeRequest
==============
*/

bool __fastcall bdReportEventsRequest::restSerializeRequest(bdReportEventsRequest *this, bdRESTRequestBuilder *builder)
{
  return ?restSerializeRequest@bdReportEventsRequest@@UEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdReportEventsRequest::deserialize
==============
*/

bool __fastcall bdReportEventsRequest::deserialize(bdReportEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdReportEventsRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdReportEventsRequest::setUserID
==============
*/

void __fastcall bdReportEventsRequest::setUserID(bdReportEventsRequest *this, unsigned __int64 userID)
{
  ?setUserID@bdReportEventsRequest@@IEBAX_K@Z(this, userID);
}

/*
==============
bdReportEventsRequest::serialize
==============
*/

bool __fastcall bdReportEventsRequest::serialize(bdReportEventsRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdReportEventsRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdReportEventsRequest::bdReportEventsRequest
==============
*/
void bdReportEventsRequest::bdReportEventsRequest(bdReportEventsRequest *this, const char *context, unsigned int numEvents, const bdAchievementEvent **events, const char *requestID, int a6)
{
  const char *v10; 

  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdReportEventsRequest::`vbtable';
    *(_QWORD *)&this->gap10F2[6] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap10F2[14] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest((bdAchievementsEngineRestRequest *)(&this->__vftable + 2), context);
  this->__vftable = (bdReportEventsRequest_vtbl *)&bdReportEventsRequest::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->__vftable + 2) = &bdReportEventsRequest::`vftable';
  *(bdReportEventsRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdReportEventsRequest_vtbl *)&bdReportEventsRequest::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID(&this->m_accountID);
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
bdReportEventsRequest::deserialize
==============
*/
bool bdReportEventsRequest::deserialize(bdReportEventsRequest *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsrequest.cpp", "bdReportEventsRequest::deserialize", 0x34u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdReportEventsRequest::restSerializeRequest
==============
*/
bool bdReportEventsRequest::restSerializeRequest(bdReportEventsRequest *this, bdRESTRequestBuilder *builder)
{
  bdUserAccountID *v2; 
  unsigned __int64 UserID; 
  __int64 v6; 
  const char *AccountType; 
  _BYTE *v8; 
  unsigned int v9; 
  bdRESTURI *v10; 
  unsigned int v11; 
  bool BodyJSONSerializer; 
  bdJSONSerializer *v13; 
  bool result; 
  void *v15; 
  const char *v16; 
  unsigned __int64 v17; 
  bdReportEventsRequest *v18; 
  __int64 line; 
  char *format; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  bool v34; 
  bdJSONSerializer *serializer; 
  bdUserAccountID *v36; 
  bdReportEventsRequest *v37; 
  unsigned __int8 dest[16]; 
  char buf[40]; 

  v2 = (bdUserAccountID *)&this->_bytes_20[4160];
  v37 = this;
  v36 = (bdUserAccountID *)&this->_bytes_20[4160];
  UserID = bdUserAccountID::getUserID((bdUserAccountID *)&this->_bytes_20[4160]);
  bdHandleAssert(UserID != 0, "m_accountID.getUserID() != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsrequest.cpp", "bdReportEventsRequest::restSerializeRequest", 0x3Au, "User ID must be set for REST requests");
  v6 = 10i64;
  AccountType = bdUserAccountID::getAccountType(v2);
  v8 = memchr_0(AccountType, 0, 0xAui64);
  if ( v8 )
    v6 = v8 - AccountType;
  bdHandleAssert(v6 != 0, "bdStrnlen(m_accountID.getAccountType(), BD_MAX_ACCOUNT_TYPE_LENGTH) != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdreporteventsrequest.cpp", "bdReportEventsRequest::restSerializeRequest", 0x3Bu, "Account type must be set for REST requests");
  v9 = 25;
  if ( !strncmp((const char *)&this->m_numEvents, (const char *)&queryFormat.fmt + 3, 0x19ui64) )
    bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId((char *)&this->m_numEvents, 0x1Au);
  if ( bdAchievementsEngineRestRequest::addCommonParams((bdAchievementsEngineRestRequest *)this, builder) && bdRESTRequestBuilder::setMethod(builder, (bdREST::bdMethod)1347375956) && bdRESTRequestBuilder::setResourceName(builder, "user_events", "report_user_events_batch") && (v10 = bdRESTRequestBuilder::uri(builder), bdRESTURI::formatPath(v10, "/v2/user-events/$batch/")) )
  {
    v11 = 0;
    serializer = NULL;
    BodyJSONSerializer = bdRESTRequestBuilder::getBodyJSONSerializer(builder, &serializer);
    v13 = serializer;
    if ( BodyJSONSerializer )
    {
      result = 1;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = 0;
    v13 = NULL;
    serializer = NULL;
  }
  result = 0;
LABEL_13:
  v34 = result;
  if ( v13 )
  {
    bdJSONSerializer::writeBeginObject(v13);
    bdJSONSerializer::writeUInt32(serializer, "titleID", *((_DWORD *)&this->__vftable + 2), 0);
    v15 = memchr_0(&this->m_numEvents, 0, 0x19ui64);
    if ( v15 )
      v9 = (_DWORD)v15 - ((_DWORD)this + 4296);
    bdBase64::decodeURLSafe((const char *)&this->m_numEvents, v9, dest, 0x10u);
    v33 = dest[0];
    v32 = dest[1];
    v31 = dest[2];
    v30 = dest[3];
    v29 = dest[4];
    v28 = dest[5];
    v27 = dest[6];
    v26 = dest[7];
    v25 = dest[8];
    v24 = dest[9];
    v23 = dest[10];
    v22 = dest[11];
    v21 = dest[12];
    LODWORD(format) = dest[13];
    LODWORD(line) = dest[14];
    bdSnprintf(buf, 0x25ui64, "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x", dest[15], line, format, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
    bdJSONSerializer::writeString(serializer, "idempotentRequestID", buf);
    bdJSONSerializer::writeBeginArray(serializer, "userEvents");
    bdJSONSerializer::writeBeginObject(serializer);
    v16 = bdUserAccountID::getAccountType(v36);
    bdJSONSerializer::writeString(serializer, "accountType", v16);
    v17 = bdUserAccountID::getUserID(v36);
    bdJSONSerializer::writeUInt64(serializer, "userID", v17, 0);
    bdJSONSerializer::writeBeginArray(serializer, "events");
    v18 = v37;
    if ( *(_DWORD *)v37->m_accountID._bytes_48 )
    {
      do
        bdAchievementEvent::serialize(*(bdAchievementEvent **)(*(_QWORD *)&v18->m_accountID._bytes_48[8] + 8i64 * v11++), serializer);
      while ( v11 < *(_DWORD *)v18->m_accountID._bytes_48 );
    }
    bdJSONSerializer::writeEndArray(serializer);
    bdJSONSerializer::writeEndObject(serializer);
    bdJSONSerializer::writeEndArray(serializer);
    bdJSONSerializer::writeEndObject(serializer);
    return v34 && bdJSONSerializer::validate(serializer);
  }
  return result;
}

/*
==============
bdReportEventsRequest::serialize
==============
*/
bool bdReportEventsRequest::serialize(bdReportEventsRequest *this, bdStructBufferSerializer *serializer)
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
    v11 = (_DWORD)v12 - ((_DWORD)this + 4312);
  return bdStructBufferSerializer::writeString(serializer, 3u, this->m_requestID.m_buffer, v11);
}

/*
==============
bdReportEventsRequest::setAccountType
==============
*/
void bdReportEventsRequest::setAccountType(bdReportEventsRequest *this, const char *accountType)
{
  bdUserAccountID::setAccountType(&this->m_accountID, accountType);
}

/*
==============
bdReportEventsRequest::setUserID
==============
*/
void bdReportEventsRequest::setUserID(bdReportEventsRequest *this, unsigned __int64 userID)
{
  bdUserAccountID::setUserID(&this->m_accountID, userID);
}

