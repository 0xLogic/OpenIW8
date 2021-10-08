/*
==============
bdMail::getMailInfoAndBodiesForCategories
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::getMailInfoAndBodiesForCategories(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfoAndBody *mailInfoAndBodies, const unsigned int startIndex, const unsigned int numMails, const unsigned __int16 *mailCategories, const unsigned int numCategories, const bool newestFirst, const bdUserAccountID *userID)
{
  return ?getMailInfoAndBodiesForCategories@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMailInfoAndBody@@IIQEBGI_NPEBVbdUserAccountID@@@Z(this, result, mailInfoAndBodies, startIndex, numMails, mailCategories, numCategories, newestFirst, userID);
}

/*
==============
bdMail::setMessageReadStatus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::setMessageReadStatus(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 mailID, const bool status, const bdUserAccountID *userID)
{
  return ?setMessageReadStatus@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_NPEBVbdUserAccountID@@@Z(this, result, mailID, status, userID);
}

/*
==============
bdMail::deleteMail
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::deleteMail(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, const bdUserAccountID *userID)
{
  return ?deleteMail@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIPEBVbdUserAccountID@@@Z(this, result, mailIDs, numMailIDs, userID);
}

/*
==============
bdMail::sendMail
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::sendMail(bdMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  return ?sendMail@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXIGQEBVbdUserAccountID@@IPEBV3@@Z(this, result, message, messageSize, mailCategory, userIDs, numUserIDs, senderID);
}

/*
==============
bdMail::bdMail
==============
*/

void __fastcall bdMail::bdMail(bdMail *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdMail@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdMail::getMail
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::getMail(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, bdMailBody *mails, const bool deleteOnRead, const bdUserAccountID *userID)
{
  return ?getMail@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdMailBody@@_NPEBVbdUserAccountID@@@Z(this, result, mailIDs, numMailIDs, mails, deleteOnRead, userID);
}

/*
==============
bdMail::getMailCountByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::getMailCountByCategory(bdMail *this, bdReference<bdRemoteTask> *result, bdMailCategoryCount *mailCounts, const unsigned int numCategories, const bdUserAccountID *userID)
{
  return ?getMailCountByCategory@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMailCategoryCount@@IPEBVbdUserAccountID@@@Z(this, result, mailCounts, numCategories, userID);
}

/*
==============
bdMail::sendMailWithDuration
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::sendMailWithDuration(bdMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const unsigned int messageDuration, const bool returnOnExpiration, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  return ?sendMailWithDuration@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXIGI_NQEBVbdUserAccountID@@IPEBV3@@Z(this, result, message, messageSize, mailCategory, messageDuration, returnOnExpiration, userIDs, numUserIDs, senderID);
}

/*
==============
bdMail::getMailInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::getMailInfo(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const bool newestFirst, const bdUserAccountID *userID)
{
  return ?getMailInfo@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMailInfo@@II_NPEBVbdUserAccountID@@@Z(this, result, mailInfos, startIndex, numMails, newestFirst, userID);
}

/*
==============
bdMail::getMailInfoForCategories
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMail::getMailInfoForCategories(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const unsigned __int16 *mailCategories, const unsigned int numCategories, const bool newestFirst, const bdUserAccountID *userID)
{
  return ?getMailInfoForCategories@bdMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMailInfo@@IIQEBGI_NPEBVbdUserAccountID@@@Z(this, result, mailInfos, startIndex, numMails, mailCategories, numCategories, newestFirst, userID);
}

/*
==============
bdMail::~bdMail
==============
*/

void __fastcall bdMail::~bdMail(bdMail *this)
{
  ??1bdMail@@UEAA@XZ(this);
}

/*
==============
bdMail::bdMail
==============
*/
void bdMail::bdMail(bdMail *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->__vftable = (bdMail_vtbl *)&bdMail::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdMail::~bdMail
==============
*/
void bdMail::~bdMail(bdMail *this)
{
  this->m_remoteTaskManager = NULL;
  this->__vftable = (bdMail_vtbl *)&bdMail::`vftable';
}

/*
==============
bdMail::deleteMail
==============
*/
bdReference<bdRemoteTask> *bdMail::deleteMail(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, const bdUserAccountID *userID)
{
  __int64 v5; 
  __int64 v8; 
  char *m_context; 
  int v10; 
  void *v11; 
  int v12; 
  const bdUserAccountID *v13; 
  unsigned int UserIDSize; 
  unsigned int v15; 
  bdTaskByteBuffer *v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v23; 

  v23 = -2i64;
  v5 = numMailIDs;
  v8 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v10 = 0;
  }
  else
  {
    v11 = memchr_0(this->m_context, 0, 0x10ui64);
    v12 = 16;
    if ( v11 )
      v12 = (_DWORD)v11 - (_DWORD)m_context;
    v10 = v12 + 2;
  }
  v13 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v15 = UserIDSize + v10 + 8 * (v5 + 8) + v5 + 8;
  v16 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v16;
  if ( v16 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v16, v15, 1);
    v8 = v17;
  }
  userID = (const bdUserAccountID *)v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 5u);
  v18 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64);
  bdByteBuffer::writeArrayStart((bdByteBuffer *)userID, 0xAu, v5, 8u);
  if ( (_DWORD)v5 )
  {
    v19 = v5;
    do
    {
      v18 = v18 && bdByteBuffer::writeUInt64((bdByteBuffer *)userID, *mailIDs++);
      --v19;
    }
    while ( v19 );
  }
  bdByteBuffer::writeArrayEnd((bdByteBuffer *)userID);
  if ( v13 )
  {
    if ( !v18 )
      goto LABEL_25;
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v13) )
      goto LABEL_25;
  }
  else if ( !v18 )
  {
LABEL_25:
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::deleteMail", 0x156u, "Failed to serialize the task buffer.");
    goto LABEL_26;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::deleteMail", 0x151u, "Failed to start task: Error %d", started);
LABEL_26:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::getMail
==============
*/
bdReference<bdRemoteTask> *bdMail::getMail(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, bdMailBody *mails, const bool deleteOnRead, const bdUserAccountID *userID)
{
  __int64 v7; 
  __int64 v11; 
  char *m_context; 
  int v13; 
  void *v14; 
  int v15; 
  const bdUserAccountID *v16; 
  unsigned int UserIDSize; 
  unsigned int v18; 
  bdTaskByteBuffer *v19; 
  __int64 v20; 
  bool v21; 
  __int64 v22; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v26; 

  v26 = result;
  v7 = numMailIDs;
  v11 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v13 = 0;
  }
  else
  {
    v14 = memchr_0(this->m_context, 0, 0x10ui64);
    v15 = 16;
    if ( v14 )
      v15 = (_DWORD)v14 - (_DWORD)m_context;
    v13 = v15 + 2;
  }
  v16 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v18 = v7 + v13 + 8 * v7 + UserIDSize + 74;
  v19 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v19;
  if ( v19 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v19, v18, 1);
    v11 = v20;
  }
  userID = (const bdUserAccountID *)v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 4u);
  v21 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64) && bdByteBuffer::writeBool((bdByteBuffer *)userID, deleteOnRead);
  bdByteBuffer::writeArrayStart((bdByteBuffer *)userID, 0xAu, v7, 8u);
  if ( (_DWORD)v7 )
  {
    v22 = v7;
    do
    {
      v21 = v21 && bdByteBuffer::writeUInt64((bdByteBuffer *)userID, *mailIDs++);
      --v22;
    }
    while ( v22 );
  }
  bdByteBuffer::writeArrayEnd((bdByteBuffer *)userID);
  if ( v16 )
  {
    if ( !v21 )
      goto LABEL_29;
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v16) )
      goto LABEL_29;
  }
  else if ( !v21 )
  {
LABEL_29:
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMail", 0x12Au, "Failed to serialize the task buffer.");
    goto LABEL_30;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMail", 0x121u, "Failed to start task: Error %d", started);
  else
    bdRemoteTask::setTaskResult(result->m_ptr, mails, v7);
LABEL_30:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::getMailCountByCategory
==============
*/
bdReference<bdRemoteTask> *bdMail::getMailCountByCategory(bdMail *this, bdReference<bdRemoteTask> *result, bdMailCategoryCount *mailCounts, const unsigned int numCategories, const bdUserAccountID *userID)
{
  __int64 v9; 
  char *m_context; 
  int v11; 
  void *v12; 
  int v13; 
  const bdUserAccountID *v14; 
  unsigned int UserIDSize; 
  unsigned int v16; 
  bdTaskByteBuffer *v17; 
  __int64 v18; 
  bool v19; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v23; 

  v23 = result;
  v9 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v11 = 0;
  }
  else
  {
    v12 = memchr_0(this->m_context, 0, 0x10ui64);
    v13 = 16;
    if ( v12 )
      v13 = (_DWORD)v12 - (_DWORD)m_context;
    v11 = v13 + 2;
  }
  v14 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v16 = v11 + UserIDSize + 77;
  v17 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v17;
  if ( v17 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v17, v16, 1);
    v9 = v18;
  }
  userID = (const bdUserAccountID *)v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 1u);
  v19 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, numCategories);
  if ( v14 )
  {
    if ( !v19 )
    {
LABEL_26:
      bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailCountByCategory", 0x54u, "Failed to serialize the task buffer.");
      goto LABEL_27;
    }
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    v19 = ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v14);
  }
  if ( !v19 )
    goto LABEL_26;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailCountByCategory", 0x4Bu, "Failed to start task: Error %d", started);
  else
    bdRemoteTask::setTaskResult(result->m_ptr, mailCounts, numCategories);
LABEL_27:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::getMailInfo
==============
*/
bdReference<bdRemoteTask> *bdMail::getMailInfo(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const bool newestFirst, const bdUserAccountID *userID)
{
  __int64 v11; 
  char *m_context; 
  int v13; 
  void *v14; 
  int v15; 
  const bdUserAccountID *v16; 
  unsigned int UserIDSize; 
  unsigned int v18; 
  bdTaskByteBuffer *v19; 
  __int64 v20; 
  bool v21; 
  unsigned int v22; 
  bool v23; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v27; 

  v27 = result;
  v11 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v13 = 0;
  }
  else
  {
    v14 = memchr_0(this->m_context, 0, 0x10ui64);
    v15 = 16;
    if ( v14 )
      v15 = (_DWORD)v14 - (_DWORD)m_context;
    v13 = v15 + 2;
  }
  v16 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v18 = v13 + UserIDSize + 84;
  v19 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v19;
  if ( v19 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v19, v18, 1);
    v11 = v20;
  }
  userID = (const bdUserAccountID *)v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 0xAu);
  v21 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64);
  v22 = numMails;
  v23 = v21 && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, startIndex) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, v22) && bdByteBuffer::writeBool((bdByteBuffer *)userID, newestFirst);
  if ( v16 )
  {
    if ( !v23 )
    {
LABEL_28:
      bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfo", 0x83u, "Failed to serialize the task buffer.");
      goto LABEL_29;
    }
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    v23 = ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v16);
  }
  if ( !v23 )
    goto LABEL_28;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfo", 0x7Au, "Failed to start task: Error %d", started);
  else
    bdRemoteTask::setTaskResult(result->m_ptr, mailInfos, v22);
LABEL_29:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::getMailInfoAndBodiesForCategories
==============
*/
bdReference<bdRemoteTask> *bdMail::getMailInfoAndBodiesForCategories(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfoAndBody *mailInfoAndBodies, const unsigned int startIndex, const unsigned int numMails, const unsigned __int16 *mailCategories, const unsigned int numCategories, const bool newestFirst, const bdUserAccountID *userID)
{
  __int64 v11; 
  char *m_context; 
  int v13; 
  void *v14; 
  int v15; 
  const bdUserAccountID *v16; 
  unsigned int UserIDSize; 
  __int64 v18; 
  unsigned int v19; 
  bdTaskByteBuffer *v20; 
  __int64 v21; 
  bool v22; 
  bool v24; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v28; 

  v28 = -2i64;
  v11 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v13 = 0;
  }
  else
  {
    v14 = memchr_0(this->m_context, 0, 0x10ui64);
    v15 = 16;
    if ( v14 )
      v15 = (_DWORD)v14 - (_DWORD)m_context;
    v13 = v15 + 2;
  }
  v16 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v18 = numCategories;
  v19 = UserIDSize + v13 + 2 * (numCategories + 28) + numCategories + 28;
  v20 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v20;
  if ( v20 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v20, v19, 1);
    v11 = v21;
  }
  userID = (const bdUserAccountID *)v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 0xCu);
  v22 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, startIndex) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, numMails);
  bdByteBuffer::writeArrayStart((bdByteBuffer *)userID, 6u, numCategories, 2u);
  if ( numCategories )
  {
    do
    {
      v22 = v22 && bdByteBuffer::writeUInt16((bdByteBuffer *)userID, *mailCategories++);
      --v18;
    }
    while ( v18 );
  }
  bdByteBuffer::writeArrayEnd((bdByteBuffer *)userID);
  v24 = v22 && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, newestFirst);
  if ( v16 )
  {
    if ( !v24 )
      goto LABEL_33;
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v16) )
      goto LABEL_33;
  }
  else if ( !v24 )
  {
LABEL_33:
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfoAndBodiesForCategories", 0xF7u, "Failed to serialize the task buffer.");
    goto LABEL_34;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfoAndBodiesForCategories", 0xEEu, "Failed to start task: Error %d", started);
  else
    bdRemoteTask::setTaskResult(result->m_ptr, mailInfoAndBodies, numMails);
LABEL_34:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::getMailInfoForCategories
==============
*/
bdReference<bdRemoteTask> *bdMail::getMailInfoForCategories(bdMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const unsigned __int16 *mailCategories, const unsigned int numCategories, const bool newestFirst, const bdUserAccountID *userID)
{
  __int64 v11; 
  char *m_context; 
  int v13; 
  void *v14; 
  int v15; 
  const bdUserAccountID *v16; 
  unsigned int UserIDSize; 
  __int64 v18; 
  unsigned int v19; 
  bdTaskByteBuffer *v20; 
  __int64 v21; 
  bool v22; 
  bool v24; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  __int64 v28; 

  v28 = -2i64;
  v11 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v13 = 0;
  }
  else
  {
    v14 = memchr_0(this->m_context, 0, 0x10ui64);
    v15 = 16;
    if ( v14 )
      v15 = (_DWORD)v14 - (_DWORD)m_context;
    v13 = v15 + 2;
  }
  v16 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v18 = numCategories;
  v19 = UserIDSize + v13 + 2 * (numCategories + 28) + numCategories + 28;
  v20 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v20;
  if ( v20 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v20, v19, 1);
    v11 = v21;
  }
  userID = (const bdUserAccountID *)v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 0xBu);
  v22 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, startIndex) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, numMails);
  bdByteBuffer::writeArrayStart((bdByteBuffer *)userID, 6u, numCategories, 2u);
  if ( numCategories )
  {
    do
    {
      v22 = v22 && bdByteBuffer::writeUInt16((bdByteBuffer *)userID, *mailCategories++);
      --v18;
    }
    while ( v18 );
  }
  bdByteBuffer::writeArrayEnd((bdByteBuffer *)userID);
  v24 = v22 && bdByteBuffer::writeBool((bdByteBuffer *)userID, newestFirst);
  if ( v16 )
  {
    if ( !v24 )
      goto LABEL_33;
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v16) )
      goto LABEL_33;
  }
  else if ( !v24 )
  {
LABEL_33:
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfoForCategories", 0xBDu, "Failed to serialize the task buffer.");
    goto LABEL_34;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::getMailInfoForCategories", 0xB4u, "Failed to start task: Error %d", started);
  else
    bdRemoteTask::setTaskResult(result->m_ptr, mailInfos, numMails);
LABEL_34:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

/*
==============
bdMail::sendMail
==============
*/
bdReference<bdRemoteTask> *bdMail::sendMail(bdMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  bdMail::sendMailWithDuration(this, result, message, messageSize, mailCategory, 0, 0, userIDs, numUserIDs, senderID);
  return result;
}

/*
==============
bdMail::sendMailWithDuration
==============
*/
bdReference<bdRemoteTask> *bdMail::sendMailWithDuration(bdMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const unsigned int messageDuration, const bool returnOnExpiration, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  bdReference<bdRemoteTask> *v10; 
  unsigned int v12; 
  char v13; 
  unsigned int v15; 
  const char *m_context; 
  int v17; 
  void *v18; 
  int v19; 
  unsigned int v20; 
  const bdUserAccountID *v21; 
  __int64 v22; 
  bdTaskByteBuffer *v23; 
  bdTaskByteBuffer *v24; 
  bdTaskByteBuffer *v25; 
  char v26; 
  bdLobbyErrorCode started; 
  bdReference<bdTaskByteBuffer> buffer; 
  bdReference<bdByteBuffer> v30; 
  bdReference<bdByteBuffer> v31; 
  __int64 v32; 
  unsigned int v36; 
  unsigned __int8 senderIDa; 

  v32 = -2i64;
  v10 = result;
  v12 = 0;
  result->m_ptr = NULL;
  v13 = 9;
  if ( senderID )
    v13 = 7;
  senderIDa = v13;
  v15 = 1024;
  if ( messageSize < 0x400 )
    v15 = messageSize;
  v36 = v15;
  if ( v15 < messageSize )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::sendMailWithDuration", 0x1A2u, "Exceeded maximum mail size, data will be truncated.");
  m_context = this->m_context;
  v31.m_ptr = (bdByteBuffer *)this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v17 = 0;
  }
  else
  {
    v18 = memchr_0(this->m_context, 0, 0x10ui64);
    v19 = 16;
    if ( v18 )
      v19 = (_DWORD)v18 - (_DWORD)m_context;
    v17 = v19 + 2;
  }
  v20 = numUserIDs + v17 + 8 * numUserIDs + v15 + 93;
  if ( senderID )
    v20 += ContextSerialization::getUserIDSize(senderID);
  if ( numUserIDs )
  {
    v21 = userIDs;
    v22 = numUserIDs;
    do
    {
      v20 += ContextSerialization::getUserIDSize(v21++);
      --v22;
    }
    while ( v22 );
    v15 = v36;
    m_context = (const char *)v31.m_ptr;
  }
  v23 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  v31.m_ptr = v23;
  if ( v23 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v23, v20, 1);
    v25 = v24;
  }
  else
  {
    v25 = NULL;
  }
  buffer.m_ptr = v25;
  if ( v25 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
  bdRemoteTaskManager::initTaskBuffer(&buffer, 0x1Du, senderIDa);
  if ( senderID )
  {
    v30.m_ptr = buffer.m_ptr;
    if ( buffer.m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 1u);
    if ( !ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&v30, senderID) )
      goto LABEL_32;
  }
  if ( bdByteBuffer::writeString(buffer.m_ptr, m_context, 0x10ui64) && bdByteBuffer::writeBlob(buffer.m_ptr, message, v15) && bdByteBuffer::writeUInt16(buffer.m_ptr, mailCategory) && bdByteBuffer::writeUInt32(buffer.m_ptr, numUserIDs) )
    v26 = 1;
  else
LABEL_32:
    v26 = 0;
  if ( numUserIDs )
  {
    do
    {
      if ( !v26 )
        goto LABEL_39;
      v31.m_ptr = buffer.m_ptr;
      if ( buffer.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 1u);
      if ( ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&v31, &userIDs[v12]) )
        v26 = 1;
      else
LABEL_39:
        v26 = 0;
      ++v12;
    }
    while ( v12 < numUserIDs );
    v10 = result;
  }
  if ( v26 && bdByteBuffer::writeUInt32(buffer.m_ptr, messageDuration) && bdByteBuffer::writeBool(buffer.m_ptr, returnOnExpiration) )
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, v10, &buffer);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::sendMailWithDuration", 0x1D0u, "Failed to start task: Error %d", started);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::sendMailWithDuration", 0x1D5u, "Failed to serialize the task buffer.");
  }
  if ( buffer.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && buffer.m_ptr )
    ((void (__fastcall *)(bdTaskByteBuffer *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr, 1i64);
  return v10;
}

/*
==============
bdMail::setMessageReadStatus
==============
*/
bdReference<bdRemoteTask> *bdMail::setMessageReadStatus(bdMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 mailID, const bool status, const bdUserAccountID *userID)
{
  __int64 v9; 
  char *m_context; 
  int v11; 
  void *v12; 
  int v13; 
  const bdUserAccountID *v14; 
  unsigned int UserIDSize; 
  unsigned int v16; 
  bdTaskByteBuffer *v17; 
  __int64 v18; 
  bool v19; 
  bdLobbyErrorCode started; 
  bdReference<bdByteBuffer> buffer; 
  bdReference<bdRemoteTask> *v23; 

  v23 = result;
  v9 = 0i64;
  result->m_ptr = NULL;
  m_context = this->m_context;
  if ( this == (bdMail *)-16i64 )
  {
    v11 = 0;
  }
  else
  {
    v12 = memchr_0(this->m_context, 0, 0x10ui64);
    v13 = 16;
    if ( v12 )
      v13 = (_DWORD)v12 - (_DWORD)m_context;
    v11 = v13 + 2;
  }
  v14 = userID;
  if ( userID )
    UserIDSize = ContextSerialization::getUserIDSize(userID);
  else
    UserIDSize = 0;
  v16 = v11 + UserIDSize + 91;
  v17 = (bdTaskByteBuffer *)bdMemory::allocate(0x58ui64);
  buffer.m_ptr = v17;
  if ( v17 )
  {
    bdTaskByteBuffer::bdTaskByteBuffer(v17, v16, 1);
    v9 = v18;
  }
  userID = (const bdUserAccountID *)v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 1u);
  bdRemoteTaskManager::initTaskBuffer((bdReference<bdTaskByteBuffer> *)&userID, 0x1Du, 8u);
  v19 = bdByteBuffer::writeString((bdByteBuffer *)userID, m_context, 0x10ui64) && bdByteBuffer::writeUInt64((bdByteBuffer *)userID, mailID) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, status) && bdByteBuffer::writeUInt32((bdByteBuffer *)userID, 0);
  if ( v14 )
  {
    if ( !v19 )
    {
LABEL_27:
      bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::setMessageReadStatus", 0x182u, "Failed to serialize the task buffer.");
      goto LABEL_28;
    }
    buffer.m_ptr = (bdByteBuffer *)userID;
    if ( userID )
      _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 1u);
    v19 = ContextSerialization::writeUserID((bdReference<bdByteBuffer>)&buffer, v14);
  }
  if ( !v19 )
    goto LABEL_27;
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, (bdReference<bdTaskByteBuffer> *)&userID);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "mail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmail\\bdmail.cpp", "bdMail::setMessageReadStatus", 0x17Du, "Failed to start task: Error %d", started);
LABEL_28:
  if ( userID && _InterlockedExchangeAdd((volatile signed __int32 *)&userID->__vftable + 2, 0xFFFFFFFF) == 1 && userID )
    ((void (__fastcall *)(const bdUserAccountID *, __int64))userID->deserialize)(userID, 1i64);
  return result;
}

