/*
==============
bdDataChannelStandard::getMsgSchemaGuid
==============
*/

const char *__fastcall bdDataChannelStandard::getMsgSchemaGuid(bdDataChannelStandard *this)
{
  return ?getMsgSchemaGuid@bdDataChannelStandard@@QEBAPEBCXZ(this);
}

/*
==============
bdDataChannelStandard::setChannelInfo
==============
*/

void __fastcall bdDataChannelStandard::setChannelInfo(bdDataChannelStandard *this, unsigned __int64 userId, char *const userAcctType, unsigned __int64 titleId)
{
  ?setChannelInfo@bdDataChannelStandard@@QEAAX_KQEAD0@Z(this, userId, userAcctType, titleId);
}

/*
==============
bdDataChannelStandard::getMsgSchemaGuidSize
==============
*/

unsigned int __fastcall bdDataChannelStandard::getMsgSchemaGuidSize(bdDataChannelStandard *this)
{
  return ?getMsgSchemaGuidSize@bdDataChannelStandard@@QEBAIXZ(this);
}

/*
==============
bdDataChannelStandard::getUserAcctType
==============
*/

const char *__fastcall bdDataChannelStandard::getUserAcctType(bdDataChannelStandard *this)
{
  return ?getUserAcctType@bdDataChannelStandard@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelStandard::write
==============
*/

bdReference<bdDataChannelTask> *__fastcall bdDataChannelStandard::write(bdDataChannelStandard *this, bdReference<bdDataChannelTask> *result, const unsigned __int8 *const data, unsigned int dataSize, bool skipMessageEnvelope, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  return ?write@bdDataChannelStandard@@QEAA?AV?$bdReference@VbdDataChannelTask@@@@QEBEI_NW4bdMsgSerializationType@bdMessageEnvelopeBase@@W4bdMsgCompressionType@4@@Z(this, result, data, dataSize, skipMessageEnvelope, msgSerializationType, msgCompressionType);
}

/*
==============
bdDataChannelStandard::bdDataChannelStandard
==============
*/

void __fastcall bdDataChannelStandard::bdDataChannelStandard(bdDataChannelStandard *this, bdDataChannelManagerBase *manager, unsigned __int64 userId, char *const userAcctType, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize)
{
  ??0bdDataChannelStandard@@QEAA@PEAVbdDataChannelManagerBase@@_KQEAD1QEBDQEBCI@Z(this, manager, userId, userAcctType, titleId, msgName, msgSchemaGuid, msgSchemaGuidSize);
}

/*
==============
bdDataChannelStandard::getTitle
==============
*/

unsigned __int64 __fastcall bdDataChannelStandard::getTitle(bdDataChannelStandard *this)
{
  return ?getTitle@bdDataChannelStandard@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelStandard::getUserId
==============
*/

unsigned __int64 __fastcall bdDataChannelStandard::getUserId(bdDataChannelStandard *this)
{
  return ?getUserId@bdDataChannelStandard@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelStandard::createMessageEnvelope
==============
*/

bool __fastcall bdDataChannelStandard::createMessageEnvelope(bdDataChannelStandard *this, unsigned __int8 *outputData, unsigned int *outputDataSize, const unsigned __int8 *const data, unsigned int dataSize, unsigned int maxOutputDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  return ?createMessageEnvelope@bdDataChannelStandard@@QEAA_NPEAEAEAIQEBEIIW4bdMsgSerializationType@bdMessageEnvelopeBase@@W4bdMsgCompressionType@3@@Z(this, outputData, outputDataSize, data, dataSize, maxOutputDataSize, msgSerializationType, msgCompressionType);
}

/*
==============
bdDataChannelStandard::getMsgName
==============
*/

const char *__fastcall bdDataChannelStandard::getMsgName(bdDataChannelStandard *this)
{
  return ?getMsgName@bdDataChannelStandard@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelStandard::bdDataChannelStandard
==============
*/
void bdDataChannelStandard::bdDataChannelStandard(bdDataChannelStandard *this, bdDataChannelManagerBase *manager, unsigned __int64 userId, char *const userAcctType, unsigned __int64 titleId, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize)
{
  _BYTE *v12; 
  unsigned __int64 v13; 

  bdDataChannelBase::bdDataChannelBase(this, manager);
  this->__vftable = (bdDataChannelStandard_vtbl *)&bdDataChannelStandard::`vftable';
  this->m_userId = userId;
  this->m_userAcctType = userAcctType;
  this->m_titleId = titleId;
  bdUUIDGenerator::bdUUIDGenerator(&this->m_uuidGenerator);
  bdHandleAssert(manager != NULL, "manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::bdDataChannelStandard", 0x1Fu, "The manager must not be null.", -2i64);
  bdHandleAssert(msgName != NULL, "msgName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::bdDataChannelStandard", 0x21u, "The message name must not be null.");
  v12 = memchr_0(msgName, 0, 0x40ui64);
  v13 = 64i64;
  if ( v12 )
    v13 = v12 - msgName;
  bdHandleAssert(v13 <= 0x40, "bdStrnlen(msgName, BD_DATACHANNEL_MAX_CATEGORY_LENGTH) <= BD_DATACHANNEL_MAX_CATEGORY_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::bdDataChannelStandard", 0x23u, "The length of the message name string is longer than the buffer.");
  bdStrlcpy(this->m_msgName, msgName, 0x40ui64);
  bdHandleAssert(msgSchemaGuid != NULL, "msgSchemaGuid != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::bdDataChannelStandard", 0x26u, "The message schema GUID must not be null.");
  bdHandleAssert(msgSchemaGuidSize <= 0x20, "msgSchemaGuidSize <= BD_DATACHANNEL_MAX_SCHEMA_GUID_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::bdDataChannelStandard", 0x28u, "The number of bytes in the message schema GUID must be less or equals to BD_DATACHANNEL_MAX_SCHEMA_GUID_LENGTH.");
  *(_QWORD *)this->m_msgSchemaGuid = 0i64;
  *(_QWORD *)&this->m_msgSchemaGuid[8] = 0i64;
  *(_QWORD *)&this->m_msgSchemaGuid[16] = 0i64;
  *(_QWORD *)&this->m_msgSchemaGuid[24] = 0i64;
  memcpy_0(this->m_msgSchemaGuid, msgSchemaGuid, msgSchemaGuidSize);
  this->m_msgSchemaGuidSize = msgSchemaGuidSize;
}

/*
==============
bdDataChannelStandard::createMessageEnvelope
==============
*/
__int64 bdDataChannelStandard::createMessageEnvelope(bdDataChannelStandard *this, unsigned __int8 *outputData, unsigned int *outputDataSize, const unsigned __int8 *const data, unsigned int dataSize, unsigned int maxOutputDataSize, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  bdByteBuffer *v13; 
  bdByteBuffer *v14; 
  bdDataChannelUserInfo *v15; 
  const bdDataChannelUserInfoV2 *UserInfo; 
  bool v17; 
  bdReferencable *v18; 
  unsigned int v19; 
  unsigned __int8 v20; 
  __int64 msgSchemaGuidSize; 
  bdReference<bdByteBuffer> buffer; 
  unsigned int *v24; 
  void *v25; 
  __int64 v26; 
  bdByteBuffer *v27; 
  bdMessageEnvelopeV2 v28; 
  bdMessageEnvelope v29; 
  bdStructBufferSerializer v30; 
  unsigned __int8 uuid[8]; 
  __int64 v32; 

  v26 = -2i64;
  v24 = outputDataSize;
  v25 = outputData;
  bdHandleAssert(data != NULL, "data != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::createMessageEnvelope", 0x72u, "Data must not be empty.");
  bdHandleAssert(dataSize != 0, "dataSize > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::createMessageEnvelope", 0x73u, "Data to write cannot be empty.");
  v10 = bdPlatformTiming::getHiResTimeStamp() % 0xF4240;
  v11 = v10 + 1000000 * bdPlatformTiming::getPOSIXTimestamp();
  *(_QWORD *)uuid = 0i64;
  v32 = 0i64;
  bdUUIDGenerator::generateV1(&this->m_uuidGenerator, uuid, this->m_userId);
  v12 = dataSize + bdMessageEnvelope::getMaxBaseByteSize();
  v13 = (bdByteBuffer *)bdMemory::allocate(0x38ui64);
  v14 = v13;
  buffer.m_ptr = v13;
  if ( v13 )
  {
    v13->m_refCount.m_value._My_val = 0;
    v13->__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
    v13->m_size = v12;
    v13->m_data = NULL;
    *(_WORD *)&v13->m_typeChecked = 0;
    v13->m_allocatedData = 0;
    bdByteBuffer::init(v13, v12);
  }
  else
  {
    v14 = NULL;
  }
  v27 = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  buffer.m_ptr = v14;
  if ( v14 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  bdStructBufferSerializer::bdStructBufferSerializer(&v30, (bdReference<bdByteBuffer>)&buffer, v12, 0);
  if ( bdDataChannelManagerBase::getUserInfo(this->m_manager) && (v15 = bdDataChannelManagerBase::getUserInfo(this->m_manager), v15->getVersion(v15) == 2) )
  {
    UserInfo = (const bdDataChannelUserInfoV2 *)bdDataChannelManagerBase::getUserInfo(this->m_manager);
    bdMessageEnvelopeV2::bdMessageEnvelopeV2(&v28, this->m_titleId, UserInfo, v11, uuid, this->m_msgName, this->m_msgSchemaGuid, this->m_msgSchemaGuidSize, (unsigned __int8 *const)data, dataSize, msgSerializationType, msgCompressionType);
    v17 = bdStructBufferSerializer::writeObject(&v30, 1u, &v28);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v28.m_resourceOwner);
    bdReferencable::~bdReferencable((bdReferencable *)&v28.m_resourceOwner[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v28.m_msgSchema.bdMessageEnvelopeBase::__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v28.m_msgSchema.gap34[4]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v28.__vftable + 2));
    v18 = (bdReferencable *)v28.gap108;
  }
  else
  {
    bdMessageEnvelope::bdMessageEnvelope(&v29, this->m_titleId, this->m_userId, this->m_userAcctType, v11, uuid, this->m_msgName, this->m_msgSchemaGuid, this->m_msgSchemaGuidSize, (unsigned __int8 *const)data, dataSize, msgSerializationType, msgCompressionType);
    v17 = bdStructBufferSerializer::writeObject(&v30, 1u, &v29);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v29.m_resourceOwner);
    bdReferencable::~bdReferencable((bdReferencable *)&v29.m_resourceOwner[48]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v29.m_msgSchema.bdMessageEnvelopeBase::__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&v29.m_msgSchema.gap34[4]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v29.__vftable + 2));
    v18 = (bdReferencable *)v29.gap118;
  }
  bdReferencable::~bdReferencable(v18);
  if ( !v17 || !bdStructBufferSerializer::getWrittenSize(&v30) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannelStandard", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::createMessageEnvelope", 0xA7u, "Cannot serialize the provided data into DW Message Envelope.");
    goto LABEL_18;
  }
  v19 = bdByteBuffer::getDataSize(v14);
  *v24 = v19;
  if ( v19 > maxOutputDataSize )
  {
    LODWORD(msgSchemaGuidSize) = v19;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannelStandard", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::createMessageEnvelope", 0xAEu, "A minimum of '%d' bytes are required by createMessageEnvelope for the given data. Retry with a bigger buffer or the message envelope will be truncated.", msgSchemaGuidSize);
LABEL_18:
    v20 = 0;
    goto LABEL_19;
  }
  memcpy_0(v25, v14->m_data, v19);
  v20 = 1;
LABEL_19:
  bdStructBufferSerializer::~bdStructBufferSerializer(&v30);
  if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdByteBuffer *, __int64))v14->~bdReferencable)(v14, 1i64);
  return v20;
}

/*
==============
bdDataChannelStandard::getMsgName
==============
*/
char *bdDataChannelStandard::getMsgName(bdDataChannelStandard *this)
{
  return this->m_msgName;
}

/*
==============
bdDataChannelStandard::getMsgSchemaGuid
==============
*/
char *bdDataChannelStandard::getMsgSchemaGuid(bdDataChannelStandard *this)
{
  return this->m_msgSchemaGuid;
}

/*
==============
bdDataChannelStandard::getMsgSchemaGuidSize
==============
*/
__int64 bdDataChannelStandard::getMsgSchemaGuidSize(bdDataChannelStandard *this)
{
  return this->m_msgSchemaGuidSize;
}

/*
==============
bdDataChannelStandard::getTitle
==============
*/
unsigned __int64 bdDataChannelStandard::getTitle(bdDataChannelStandard *this)
{
  return this->m_titleId;
}

/*
==============
bdDataChannelStandard::getUserAcctType
==============
*/
char *bdDataChannelStandard::getUserAcctType(bdDataChannelStandard *this)
{
  return this->m_userAcctType;
}

/*
==============
bdDataChannelStandard::getUserId
==============
*/
unsigned __int64 bdDataChannelStandard::getUserId(bdDataChannelStandard *this)
{
  return this->m_userId;
}

/*
==============
bdDataChannelStandard::setChannelInfo
==============
*/
void bdDataChannelStandard::setChannelInfo(bdDataChannelStandard *this, unsigned __int64 userId, char *const userAcctType, unsigned __int64 titleId)
{
  this->m_userId = userId;
  this->m_userAcctType = userAcctType;
  this->m_titleId = titleId;
}

/*
==============
bdDataChannelStandard::write
==============
*/
bdReference<bdDataChannelTask> *bdDataChannelStandard::write(bdDataChannelStandard *this, bdReference<bdDataChannelTask> *result, const unsigned __int8 *const data, unsigned int dataSize, bool skipMessageEnvelope, bdMessageEnvelopeBase::bdMsgSerializationType msgSerializationType, bdMessageEnvelopeBase::bdMsgCompressionType msgCompressionType)
{
  bdDataChannelTask *v11; 
  bdTask *m_ptr; 
  bdDataChannelBase::bdDataChannelPacket *v13; 
  bdDataChannelTask *v14; 
  bdDataChannelTask *v15; 
  bdDataChannelTask *v16; 
  const bdReference<bdDataChannelTask> *Task; 
  unsigned __int64 maxOutputDataSize; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  bdDataChannelBase::bdDataChannelPacket *v21; 
  bdDataChannelTask *v22; 
  bdDataChannelTask *v23; 
  bdDataChannelTask *v24; 
  const bdReference<bdDataChannelTask> *v25; 
  unsigned int outputDataSize; 
  int v28; 
  bdReference<bdDataChannelTask> taskRef; 
  bdDataChannelBase::bdDataChannelPacket *value; 
  bdReference<bdDataChannelTask> resulta; 
  bdReference<bdDataChannelTask> v32; 
  bdDataChannelBase::bdDataChannelPacket *v33; 
  bdReference<bdDataChannelTask> v34; 
  void *v35; 
  void *v36; 
  __int64 v37; 

  v37 = -2i64;
  v11 = NULL;
  v28 = 0;
  m_ptr = bdTask::bdFailed.m_ptr;
  result->m_ptr = (bdDataChannelTask *)bdTask::bdFailed.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v28 = 1;
  if ( skipMessageEnvelope )
  {
    if ( bdDataChannelBase::tryReserveMessageQueueSize(this, dataSize) )
    {
      v13 = (bdDataChannelBase::bdDataChannelPacket *)bdMemory::allocate(0x58ui64);
      v35 = v13;
      if ( v13 )
      {
        v14 = (bdDataChannelTask *)bdMemory::allocate(0x18ui64);
        v36 = v14;
        if ( v14 )
        {
          bdDataChannelTask::bdDataChannelTask(v14);
          v11 = v15;
        }
        taskRef.m_ptr = v11;
        if ( v11 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
        bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket(v13, (bdReference<bdDataChannelTask>)&taskRef, data, dataSize);
        v11 = v16;
      }
      value = (bdDataChannelBase::bdDataChannelPacket *)v11;
      bdFastArray<bdDataChannelBase::bdDataChannelPacket *>::pushBack(&this->m_messageQueue, &value);
      Task = bdDataChannelBase::bdDataChannelPacket::getTask(value, &resulta);
      bdReference<bdDataChannelTask>::operator=(result, Task);
      if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
        ((void (__fastcall *)(bdDataChannelTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    }
  }
  else
  {
    maxOutputDataSize = dataSize + bdMessageEnvelope::getMaxBaseByteSize();
    outputDataSize = 0;
    v19 = (unsigned __int8 *)bdMemory::allocate(maxOutputDataSize);
    if ( bdDataChannelStandard::createMessageEnvelope(this, v19, &outputDataSize, data, dataSize, maxOutputDataSize, msgSerializationType, msgCompressionType) )
    {
      v20 = outputDataSize;
      if ( bdDataChannelBase::tryReserveMessageQueueSize(this, outputDataSize) )
      {
        v21 = (bdDataChannelBase::bdDataChannelPacket *)bdMemory::allocate(0x58ui64);
        v36 = v21;
        if ( v21 )
        {
          v22 = (bdDataChannelTask *)bdMemory::allocate(0x18ui64);
          v35 = v22;
          if ( v22 )
          {
            bdDataChannelTask::bdDataChannelTask(v22);
            v11 = v23;
          }
          v32.m_ptr = v11;
          if ( v11 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
            v20 = outputDataSize;
          }
          bdDataChannelBase::bdDataChannelPacket::bdDataChannelPacket(v21, (bdReference<bdDataChannelTask>)&v32, v19, v20);
          v11 = v24;
        }
        v33 = (bdDataChannelBase::bdDataChannelPacket *)v11;
        bdFastArray<bdDataChannelBase::bdDataChannelPacket *>::pushBack(&this->m_messageQueue, &v33);
        v25 = bdDataChannelBase::bdDataChannelPacket::getTask(v33, &v34);
        bdReference<bdDataChannelTask>::operator=(result, v25);
        if ( v34.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v34.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v34.m_ptr )
          ((void (__fastcall *)(bdDataChannelTask *, __int64))v34.m_ptr->~bdReferencable)(v34.m_ptr, 1i64);
      }
    }
    else
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdDataChannelStandard", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelstandard.cpp", "bdDataChannelStandard::write", 0x5Fu, "Failed to create message envelope, not going to store the data.");
    }
    if ( v19 )
      bdMemory::deallocate(v19);
  }
  return result;
}

