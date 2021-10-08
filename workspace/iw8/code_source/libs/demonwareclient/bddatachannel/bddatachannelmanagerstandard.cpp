/*
==============
bdDataChannelManagerStandardImpl::getChannel
==============
*/

bdReference<bdDataChannelStandard> *__fastcall bdDataChannelManagerStandardImpl::getChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> *result, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, bool *created)
{
  return ?getChannel@bdDataChannelManagerStandardImpl@@QEAA?AV?$bdReference@VbdDataChannelStandard@@@@QEBDQEBCIAEA_N@Z(this, result, msgName, msgSchemaGuid, msgSchemaGuidSize, created);
}

/*
==============
bdDataChannelManagerStandardImpl::getUserId
==============
*/

unsigned __int64 __fastcall bdDataChannelManagerStandardImpl::getUserId(bdDataChannelManagerStandardImpl *this)
{
  return ?getUserId@bdDataChannelManagerStandardImpl@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::destroy
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::destroy(bdDataChannelManagerStandardImpl *this)
{
  ?destroy@bdDataChannelManagerStandardImpl@@QEAAXXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::getTitleId
==============
*/

unsigned __int64 __fastcall bdDataChannelManagerStandardImpl::getTitleId(bdDataChannelManagerStandardImpl *this)
{
  return ?getTitleId@bdDataChannelManagerStandardImpl@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::hasMessageOnChannel
==============
*/

bool __fastcall bdDataChannelManagerStandardImpl::hasMessageOnChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> channel)
{
  return ?hasMessageOnChannel@bdDataChannelManagerStandardImpl@@IEAA_NV?$bdReference@VbdDataChannelStandard@@@@@Z(this, channel);
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate_v2
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::internalUpdate_v2(bdDataChannelManagerStandardImpl *this)
{
  ?internalUpdate_v2@bdDataChannelManagerStandardImpl@@IEAAXXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate_v1
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::internalUpdate_v1(bdDataChannelManagerStandardImpl *this)
{
  ?internalUpdate_v1@bdDataChannelManagerStandardImpl@@IEAAXXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::reset
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::reset(bdDataChannelManagerStandardImpl *this)
{
  ?reset@bdDataChannelManagerStandardImpl@@QEAAXXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::getUserAcctType
==============
*/

const char *__fastcall bdDataChannelManagerStandardImpl::getUserAcctType(bdDataChannelManagerStandardImpl *this)
{
  return ?getUserAcctType@bdDataChannelManagerStandardImpl@@QEBAPEBDXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::getHttp
==============
*/

bdHTTP *__fastcall bdDataChannelManagerStandardImpl::getHttp(bdDataChannelManagerStandardImpl *this)
{
  return ?getHttp@bdDataChannelManagerStandardImpl@@QEAAPEAVbdHTTP@@XZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::sendData
==============
*/

bool __fastcall bdDataChannelManagerStandardImpl::sendData(bdDataChannelManagerStandardImpl *this, const char *const msgName, const unsigned __int8 *data, unsigned int dataSize)
{
  return ?sendData@bdDataChannelManagerStandardImpl@@AEAA_NQEBDPEBEI@Z(this, msgName, data, dataSize);
}

/*
==============
bdDataChannelManagerStandardImpl::checkChannelAvailable
==============
*/

bool __fastcall bdDataChannelManagerStandardImpl::checkChannelAvailable(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> channel)
{
  return ?checkChannelAvailable@bdDataChannelManagerStandardImpl@@IEAA_NV?$bdReference@VbdDataChannelStandard@@@@@Z(this, channel);
}

/*
==============
bdDataChannelManagerStandardImpl::init
==============
*/

bool __fastcall bdDataChannelManagerStandardImpl::init(bdDataChannelManagerStandardImpl *this, const char *const endpoint, const char *const client, unsigned __int64 userId, const char *const authToken, unsigned __int64 tokenExpiry, unsigned __int64 titleId, const char *const userAcctType, bdHTTP *http)
{
  return ?init@bdDataChannelManagerStandardImpl@@QEAA_NQEBD0_K0110PEAVbdHTTP@@@Z(this, endpoint, client, userId, authToken, tokenExpiry, titleId, userAcctType, http);
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::internalUpdate(bdDataChannelManagerStandardImpl *this)
{
  ?internalUpdate@bdDataChannelManagerStandardImpl@@MEAAXXZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::setMaxMessageTransferRetries
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::setMaxMessageTransferRetries(bdDataChannelManagerStandardImpl *this, unsigned __int16 retries)
{
  ?setMaxMessageTransferRetries@bdDataChannelManagerStandardImpl@@QEAAXG@Z(this, retries);
}

/*
==============
bdDataChannelManagerStandardImpl::setMessageTransferRetryDelay
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::setMessageTransferRetryDelay(bdDataChannelManagerStandardImpl *this, unsigned int retryAfterInSeconds)
{
  ?setMessageTransferRetryDelay@bdDataChannelManagerStandardImpl@@QEAAXI@Z(this, retryAfterInSeconds);
}

/*
==============
bdDataChannelManagerStandardImpl::~bdDataChannelManagerStandardImpl
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::~bdDataChannelManagerStandardImpl(bdDataChannelManagerStandardImpl *this)
{
  ??1bdDataChannelManagerStandardImpl@@MEAA@XZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::init
==============
*/

bool __fastcall bdDataChannelManagerStandardImpl::init(bdDataChannelManagerStandardImpl *this, const char *const endpoint, const char *const client, unsigned __int64 titleId, const bdDataChannelUserInfoV2 *userInfo, const char *const authToken, unsigned __int64 tokenExpiry, bdHTTP *http)
{
  return ?init@bdDataChannelManagerStandardImpl@@QEAA_NQEBD0_KAEBVbdDataChannelUserInfoV2@@01PEAVbdHTTP@@@Z(this, endpoint, client, titleId, userInfo, authToken, tokenExpiry, http);
}

/*
==============
bdDataChannelManagerStandardImpl::bdDataChannelManagerStandardImpl
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::bdDataChannelManagerStandardImpl(bdDataChannelManagerStandardImpl *this)
{
  ??0bdDataChannelManagerStandardImpl@@IEAA@XZ(this);
}

/*
==============
bdDataChannelManagerStandardImpl::getNextChannel
==============
*/

bdReference<bdDataChannelStandard> *__fastcall bdDataChannelManagerStandardImpl::getNextChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> *result)
{
  return ?getNextChannel@bdDataChannelManagerStandardImpl@@IEAA?AV?$bdReference@VbdDataChannelStandard@@@@XZ(this, result);
}

/*
==============
bdDataChannelManagerStandardImpl::bdDataChannelManagerStandardImpl
==============
*/
void bdDataChannelManagerStandardImpl::bdDataChannelManagerStandardImpl(bdDataChannelManagerStandardImpl *this)
{
  bdDataChannelManagerBase::bdDataChannelManagerBase(this);
  this->__vftable = (bdDataChannelManagerStandardImpl_vtbl *)&bdDataChannelManagerStandardImpl::`vftable';
  this->m_dataChannels.m_data = NULL;
  *(_QWORD *)&this->m_dataChannels.m_capacity = 0i64;
  this->m_currChannelIndex = -1;
  this->m_activeDataChannel.m_ptr = NULL;
  this->m_maxMesgRetries = 5;
  this->m_msgRetryDelayInSeconds = 1;
}

/*
==============
bdDataChannelManagerStandardImpl::~bdDataChannelManagerStandardImpl
==============
*/
void bdDataChannelManagerStandardImpl::~bdDataChannelManagerStandardImpl(bdDataChannelManagerStandardImpl *this)
{
  bdDataChannelStandard *m_ptr; 
  bdDataChannelStandard *v3; 

  this->__vftable = (bdDataChannelManagerStandardImpl_vtbl *)&bdDataChannelManagerStandardImpl::`vftable';
  bdArray<bdReference<bdDataChannelStandard>>::clear(&this->m_dataChannels);
  m_ptr = this->m_activeDataChannel.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_activeDataChannel.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdDataChannelStandard *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_activeDataChannel.m_ptr = NULL;
  }
  bdArray<bdReference<bdDataChannelStandard>>::clear(&this->m_dataChannels);
  bdDataChannelManagerBase::~bdDataChannelManagerBase(this);
}

/*
==============
bdDataChannelManagerStandardImpl::checkChannelAvailable
==============
*/
char bdDataChannelManagerStandardImpl::checkChannelAvailable(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> channel)
{
  __int64 POSIXTimestamp; 

  if ( bdDataChannelBase::isEmpty((bdDataChannelBase *)channel.m_ptr->__vftable) || bdDataChannelBase::getState((bdDataChannelBase *)channel.m_ptr->__vftable) )
  {
    POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
    if ( bdDataChannelBase::isEmpty((bdDataChannelBase *)channel.m_ptr->__vftable) || bdDataChannelBase::getState((bdDataChannelBase *)channel.m_ptr->__vftable) != BD_DATACHANNEL_STATE_THROTTLED || POSIXTimestamp < (*((__int64 (__fastcall **)(bdDataChannelStandard_vtbl *))channel.m_ptr->~bdReferencable + 1))(channel.m_ptr->__vftable) )
    {
      if ( channel.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&channel.m_ptr->getThrottledRetryTime) )
      {
        if ( channel.m_ptr->__vftable )
          (*(void (__fastcall **)(bdDataChannelStandard_vtbl *, __int64))channel.m_ptr->~bdReferencable)(channel.m_ptr->__vftable, 1i64);
        channel.m_ptr->__vftable = NULL;
      }
      return 0;
    }
    else
    {
      bdDataChannelBase::setState((bdDataChannelBase *)channel.m_ptr->__vftable, BD_DATACHANNEL_STATE_OK);
      (*((void (__fastcall **)(bdDataChannelStandard_vtbl *, _QWORD))channel.m_ptr->~bdReferencable + 2))(channel.m_ptr->__vftable, 0i64);
      bdReference<bdDataChannelStandard>::~bdReference<bdDataChannelStandard>((bdReference<bdDataChannelStandard> *)channel.m_ptr);
      return 1;
    }
  }
  else
  {
    if ( channel.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&channel.m_ptr->getThrottledRetryTime) )
    {
      if ( channel.m_ptr->__vftable )
        (*(void (__fastcall **)(bdDataChannelStandard_vtbl *, __int64))channel.m_ptr->~bdReferencable)(channel.m_ptr->__vftable, 1i64);
      channel.m_ptr->__vftable = NULL;
    }
    return 1;
  }
}

/*
==============
bdDataChannelManagerStandardImpl::destroy
==============
*/
void bdDataChannelManagerStandardImpl::destroy(bdDataChannelManagerStandardImpl *this)
{
  bdArray<bdReference<bdDataChannelStandard>>::clear(&this->m_dataChannels);
  bdDataChannelManagerBase::destroy(this);
}

/*
==============
bdDataChannelManagerStandardImpl::getChannel
==============
*/
bdReference<bdDataChannelStandard> *bdDataChannelManagerStandardImpl::getChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> *result, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, bool *created)
{
  const char *v6; 
  const char *v7; 
  _BYTE *v10; 
  bdDataChannelStandard *v11; 
  unsigned int v12; 
  bdDataChannelStandard *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  const char *v15; 
  const char *v16; 
  bdDataChannelStandard *v17; 
  bdDataChannelStandard *v18; 
  unsigned int m_size; 
  bdReference<bdDataChannelStandard> value; 
  __int64 v22; 

  v22 = -2i64;
  v6 = msgSchemaGuid;
  v7 = msgName;
  *created = 0;
  if ( !msgName || (v10 = memchr_0(msgName, 0, 0x40ui64)) == NULL || (unsigned __int64)(v10 - v7) >= 0x40 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::getChannel", 0x89u, "Message name provided is either NULL or has exceeded the maximum length.");
    goto LABEL_33;
  }
  if ( !v6 || msgSchemaGuidSize > 0x20 )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::getChannel", 0x8Fu, "Message schema GUID provided is either NULL or has exceeded the maximum length.");
LABEL_33:
    result->m_ptr = NULL;
    return result;
  }
  m_size = this->m_dataChannels.m_size;
  v11 = NULL;
  v12 = 0;
  if ( m_size )
  {
    while ( 1 )
    {
      m_ptr = bdArray<bdReference<bdDataChannelStandard>>::operator[](&this->m_dataChannels, v12)->m_ptr;
      p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
      if ( m_ptr )
        _InterlockedExchangeAdd(p_m_refCount, 1u);
      v15 = bdDataChannelStandard::getMsgName(m_ptr);
      if ( !strncmp(v15, msgName, 0x40ui64) && bdDataChannelStandard::getMsgSchemaGuidSize(m_ptr) == msgSchemaGuidSize )
      {
        v16 = bdDataChannelStandard::getMsgSchemaGuid(m_ptr);
        if ( !memcmp_0(v16, msgSchemaGuid, msgSchemaGuidSize) )
          break;
      }
      if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChannelStandard *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
      if ( ++v12 >= m_size )
      {
        v7 = msgName;
        v6 = msgSchemaGuid;
        goto LABEL_17;
      }
    }
    bdDataChannelStandard::setChannelInfo(m_ptr, this->m_userid, this->m_userAcctType, this->m_titleId);
    result->m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChannelStandard *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  else
  {
LABEL_17:
    v17 = (bdDataChannelStandard *)bdMemory::allocate(0x1D8ui64);
    if ( v17 )
    {
      bdDataChannelStandard::bdDataChannelStandard(v17, this, this->m_userid, this->m_userAcctType, this->m_titleId, v7, v6, msgSchemaGuidSize);
      v11 = v18;
    }
    value.m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    bdArray<bdReference<bdDataChannelStandard>>::pushBack(&this->m_dataChannels, &value);
    *created = 1;
    result->m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChannelStandard *, __int64))v11->~bdReferencable)(v11, 1i64);
  }
  return result;
}

/*
==============
bdDataChannelManagerStandardImpl::getHttp
==============
*/
bdHTTP *bdDataChannelManagerStandardImpl::getHttp(bdDataChannelManagerStandardImpl *this)
{
  return this->m_http;
}

/*
==============
bdDataChannelManagerStandardImpl::getNextChannel
==============
*/
bdReference<bdDataChannelStandard> *bdDataChannelManagerStandardImpl::getNextChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> *result)
{
  bdReference<bdDataChannelStandard> *v2; 
  signed int m_size; 
  int v5; 
  __int64 v6; 
  bdDataChannelStandard *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  __int64 POSIXTimestamp; 
  bdDataChannelBase::bdDataChannelPacket *v10; 
  signed __int64 v11; 
  const char *MsgName; 
  bdDataChannelStandard *v13; 
  bdDataChannelStandard *v14; 
  signed int v15; 
  bdDataChannelBase *v17; 
  bdReference<bdDataChannelStandard> v18; 

  v2 = result;
  m_size = this->m_dataChannels.m_size;
  v15 = m_size;
  v5 = 0;
  if ( m_size <= 0 )
  {
LABEL_37:
    v2->m_ptr = NULL;
    return v2;
  }
  while ( 1 )
  {
    v6 = (unsigned int)((v5 + this->m_currChannelIndex + 1) % m_size);
    bdHandleAssert((unsigned int)v6 < this->m_dataChannels.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdDataChannelStandard> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    m_ptr = this->m_dataChannels.m_data[v6].m_ptr;
    v14 = m_ptr;
    p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( !m_ptr )
      goto LABEL_32;
    v17 = m_ptr;
    _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( !bdDataChannelBase::isEmpty(m_ptr) && bdDataChannelBase::getState(v17) == BD_DATACHANNEL_STATE_OK )
      break;
    POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
    if ( !bdDataChannelBase::isEmpty(v17) && bdDataChannelBase::getState(v17) == BD_DATACHANNEL_STATE_THROTTLED && POSIXTimestamp >= v17->getThrottledRetryTime(v17) )
    {
      bdDataChannelBase::setState(v17, BD_DATACHANNEL_STATE_OK);
      v17->setThrottledRetryTime(v17, 0i64);
      break;
    }
    if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v13 = (bdDataChannelStandard *)v17;
LABEL_29:
      if ( v13 )
        ((void (__fastcall *)(bdDataChannelStandard *, __int64))v13->~bdReferencable)(v13, 1i64);
    }
LABEL_31:
    m_ptr = v14;
    m_size = v15;
LABEL_32:
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChannelStandard *, __int64))v14->~bdReferencable)(v14, 1i64);
    }
    if ( ++v5 >= m_size )
    {
      v2 = result;
      goto LABEL_37;
    }
  }
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 && v17 )
    ((void (__fastcall *)(bdDataChannelBase *, __int64))v17->~bdReferencable)(v17, 1i64);
  v18.m_ptr = v14;
  _InterlockedExchangeAdd(p_m_refCount, 1u);
  v10 = bdDataChannelBase::peekQueuedData(v18.m_ptr);
  if ( !v10 )
  {
LABEL_23:
    if ( v18.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v18.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v13 = v18.m_ptr;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
  v11 = bdPlatformTiming::getPOSIXTimestamp();
  if ( !bdDataChannelBase::bdDataChannelPacket::getData(v10) || !bdDataChannelBase::bdDataChannelPacket::getSize(v10) || bdDataChannelBase::bdDataChannelPacket::getRetries(v10) > this->m_maxMesgRetries || v11 < (__int64)bdDataChannelBase::bdDataChannelPacket::getNextRetryTime(v10) )
  {
    if ( !bdDataChannelBase::bdDataChannelPacket::getData(v10) || !bdDataChannelBase::bdDataChannelPacket::getSize(v10) )
    {
      MsgName = bdDataChannelStandard::getMsgName(v18.m_ptr);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::hasMessageOnChannel", 0xE6u, "Invalid/null data found in the message queues, skipping this message. Message name is [%s]", MsgName);
      bdDataChannelBase::dequeData(v18.m_ptr, 1);
    }
    goto LABEL_23;
  }
  bdReference<bdDataChannelStandard>::~bdReference<bdDataChannelStandard>(&v18);
  this->m_currChannelIndex = v6;
  result->m_ptr = v14;
  _InterlockedExchangeAdd(p_m_refCount, 1u);
  if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdDataChannelStandard *, __int64))v14->~bdReferencable)(v14, 1i64);
  return result;
}

/*
==============
bdDataChannelManagerStandardImpl::getTitleId
==============
*/
unsigned __int64 bdDataChannelManagerStandardImpl::getTitleId(bdDataChannelManagerStandardImpl *this)
{
  return this->m_titleId;
}

/*
==============
bdDataChannelManagerStandardImpl::getUserAcctType
==============
*/
char *bdDataChannelManagerStandardImpl::getUserAcctType(bdDataChannelManagerStandardImpl *this)
{
  return this->m_userAcctType;
}

/*
==============
bdDataChannelManagerStandardImpl::getUserId
==============
*/
unsigned __int64 bdDataChannelManagerStandardImpl::getUserId(bdDataChannelManagerStandardImpl *this)
{
  return this->m_userid;
}

/*
==============
bdDataChannelManagerStandardImpl::hasMessageOnChannel
==============
*/
char bdDataChannelManagerStandardImpl::hasMessageOnChannel(bdDataChannelManagerStandardImpl *this, bdReference<bdDataChannelStandard> channel)
{
  bdDataChannelBase::bdDataChannelPacket *v4; 
  signed __int64 POSIXTimestamp; 
  const char *MsgName; 

  v4 = bdDataChannelBase::peekQueuedData((bdDataChannelBase *)channel.m_ptr->__vftable);
  if ( v4 )
  {
    POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
    if ( bdDataChannelBase::bdDataChannelPacket::getData(v4) && bdDataChannelBase::bdDataChannelPacket::getSize(v4) && bdDataChannelBase::bdDataChannelPacket::getRetries(v4) <= this->m_maxMesgRetries && POSIXTimestamp >= (__int64)bdDataChannelBase::bdDataChannelPacket::getNextRetryTime(v4) )
    {
      bdReference<bdDataChannelStandard>::~bdReference<bdDataChannelStandard>((bdReference<bdDataChannelStandard> *)channel.m_ptr);
      return 1;
    }
    if ( !bdDataChannelBase::bdDataChannelPacket::getData(v4) || !bdDataChannelBase::bdDataChannelPacket::getSize(v4) )
    {
      MsgName = bdDataChannelStandard::getMsgName((bdDataChannelStandard *)channel.m_ptr->__vftable);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::hasMessageOnChannel", 0xE6u, "Invalid/null data found in the message queues, skipping this message. Message name is [%s]", MsgName);
      bdDataChannelBase::dequeData((bdDataChannelBase *)channel.m_ptr->__vftable, 1);
    }
  }
  if ( channel.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&channel.m_ptr->getThrottledRetryTime) )
  {
    if ( channel.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChannelStandard_vtbl *, __int64))channel.m_ptr->~bdReferencable)(channel.m_ptr->__vftable, 1i64);
    channel.m_ptr->__vftable = NULL;
  }
  return 0;
}

/*
==============
bdDataChannelManagerStandardImpl::init
==============
*/
bool bdDataChannelManagerStandardImpl::init(bdDataChannelManagerStandardImpl *this, const char *const endpoint, const char *const client, unsigned __int64 userId, const char *const authToken, unsigned __int64 tokenExpiry, unsigned __int64 titleId, const char *const userAcctType, bdHTTP *http)
{
  unsigned __int64 v13; 
  bool result; 

  this->m_sendSecurely = 1;
  bdHandleAssert(titleId != 0, "titleId > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x55u, "The 'titleId' must be valid and non-zero.");
  bdHandleAssert(userAcctType != NULL, "userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x56u, "The 'userAcctType' must not be null.");
  if ( bdDataChannelManagerBase::populateEndpointAndClient(this, endpoint, client, userId, http) )
  {
    bdDataChannelManagerBase::setAuthToken(this, authToken, tokenExpiry);
    bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x5Au, "Authorization token: '%s', Token expiry: '%llu'", this->m_authToken, this->m_tokenExpiry);
  }
  bdHandleAssert(userAcctType != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v13 = -1i64;
  do
    ++v13;
  while ( userAcctType[v13] );
  bdHandleAssert(v13 <= 0x20, "acctTypeStringLength <= BD_DATACHANNEL_MAX_USER_ACCOUNT_TYPE_LENGTH", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x5Fu, "The 'userAcctType' must not be longer than 32 in length.");
  if ( v13 != bdStrlcpy(this->m_userAcctType, userAcctType, v13 + 1) )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x62u, "Failed to copy the user account type string.");
    bdDataChannelManagerBase::setFailedOperation(this, BD_DATACHANNEL_FAILURE_SET_CLIENT);
  }
  result = this->m_currentStatus == BD_DATACHANNEL_STATUS_OK;
  this->m_titleId = titleId;
  return result;
}

/*
==============
bdDataChannelManagerStandardImpl::init
==============
*/
bool bdDataChannelManagerStandardImpl::init(bdDataChannelManagerStandardImpl *this, const char *const endpoint, const char *const client, unsigned __int64 titleId, const bdDataChannelUserInfoV2 *userInfo, const char *const authToken, unsigned __int64 tokenExpiry, bdHTTP *http)
{
  unsigned __int64 UserId; 
  const char *v13; 
  bool result; 

  this->m_sendSecurely = 1;
  bdHandleAssert(titleId != 0, "titleId > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x35u, "The 'titleId' must be valid and non-zero.");
  bdDataChannelManagerBase::setUserInfo(this, userInfo);
  UserId = bdDataChannelUserInfoV2::getUserId((bdDataChannelUserInfoV2 *)userInfo);
  if ( bdDataChannelManagerBase::populateEndpointAndClient(this, endpoint, client, UserId, http) )
  {
    bdDataChannelManagerBase::setAuthToken(this, authToken, tokenExpiry);
    bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::init", 0x3Cu, "Authorization token: '%s', Token expiry: '%llu'", this->m_authToken, this->m_tokenExpiry);
  }
  *(_QWORD *)this->m_userAcctType = 0i64;
  *(_QWORD *)&this->m_userAcctType[8] = 0i64;
  *(_QWORD *)&this->m_userAcctType[16] = 0i64;
  *(_QWORD *)&this->m_userAcctType[24] = 0i64;
  v13 = bdDataChannelUserInfoV2::acctTypeEnumToString((bdDataChannelUserInfoV2 *)userInfo);
  bdStrlcpy(this->m_userAcctType, v13, 0x20ui64);
  result = this->m_currentStatus == BD_DATACHANNEL_STATUS_OK;
  this->m_titleId = titleId;
  return result;
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate
==============
*/

void __fastcall bdDataChannelManagerStandardImpl::internalUpdate(bdDataChannelManagerStandardImpl *this)
{
  bdDataChannelManagerStandardImpl::internalUpdate_v2(this);
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate_v1
==============
*/
void bdDataChannelManagerStandardImpl::internalUpdate_v1(bdDataChannelManagerStandardImpl *this)
{
  bdHTTP::bdStatus v2; 
  int v3; 
  bool v4; 
  __int32 v5; 
  __int32 v6; 
  bdDataChannelStandard *v7; 
  bdDataChannelManagerBase::bdDataChannelFailureCode v8; 
  signed int m_msgRetryDelayInSeconds; 
  bdDataChannelStandard *v10; 
  void (__fastcall *setThrottledRetryTime)(bdDataChannelBase *, __int64); 
  __int64 POSIXTimestamp; 
  bdDataChannelStandard *m_ptr; 
  bdDataChannelStandard *v14; 
  bdDataChannelStandard *v15; 
  bdDataChannelStandard *v16; 
  bdDataChannelStandard *v17; 
  bdDataChannelStandard *v18; 
  bdDataChannelStandard *v19; 
  bdReference<bdDataChannelStandard> *m_data; 
  __int64 m_size; 
  bdReference<bdDataChannelStandard> *v22; 
  __int64 v23; 
  const char *v24; 
  const char *MsgName; 
  bdHTTP *m_http; 
  char *streamName; 
  char *streamNamea; 
  char *streamNameb; 
  int v30; 
  unsigned int size; 
  unsigned __int8 *data; 
  char v33[256]; 
  char result[1024]; 

  v2 = this->m_http->getStatus(this->m_http);
  v3 = this->m_http->getLastHTTPStatus(this->m_http);
  v4 = !this->m_reset;
  this->m_httpStatusCode = v3;
  if ( !v4 && v2 == BD_MAX_STATUS )
    v2 = BD_CANCELLED;
  v5 = v2 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( !v6 )
    {
      this->m_currentStatus = BD_DATACHANNEL_STATUS_PENDING;
      return;
    }
    if ( v6 != 2 )
    {
      v30 = this->m_http->getInternalError(this->m_http);
      bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v1", 0x23Du, "Failed to transfer. Error %d - internal error %d", this->m_httpStatusCode, v30);
      if ( this->m_httpStatusCode == 401 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v1", 0x254u, "User authentication failed. Make sure the Umbrella access token is valid and not expired");
        m_ptr = this->m_activeDataChannel.m_ptr;
        if ( m_ptr )
          bdDataChannelBase::setState(m_ptr, BD_DATACHANNEL_STATE_ERROR);
        v8 = BD_DATACHANNEL_FAILURE_AUTHENTICATION;
        goto LABEL_19;
      }
      if ( this->m_httpStatusCode == 429 )
      {
        if ( this->m_activeDataChannel.m_ptr )
        {
          memset_0(v33, 0, 0xFFui64);
          this->m_http->getHeader(this->m_http, "Retry-After", v33, 255u);
          m_msgRetryDelayInSeconds = atoi(v33);
          if ( !m_msgRetryDelayInSeconds )
            m_msgRetryDelayInSeconds = this->m_msgRetryDelayInSeconds;
          LODWORD(streamName) = m_msgRetryDelayInSeconds;
          bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v1", 0x24Du, "Throttled - retrying in %d seconds", streamName);
          bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_THROTTLED);
          v10 = this->m_activeDataChannel.m_ptr;
          setThrottledRetryTime = v10->setThrottledRetryTime;
          POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
          setThrottledRetryTime(v10, m_msgRetryDelayInSeconds + POSIXTimestamp);
        }
      }
      else
      {
        v7 = this->m_activeDataChannel.m_ptr;
        if ( v7 )
        {
          bdDataChannelBase::setState(v7, BD_DATACHANNEL_STATE_ERROR);
          v8 = BD_DATACHANNEL_FAILURE_HTTP_TRANSMIT;
LABEL_19:
          bdDataChannelManagerBase::setFailedOperation(this, v8);
          v14 = this->m_activeDataChannel.m_ptr;
          if ( v14 )
            bdDataChannelBase::dequeData(v14, 0);
          v15 = this->m_activeDataChannel.m_ptr;
          if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 0xFFFFFFFF) == 1 )
          {
            v16 = this->m_activeDataChannel.m_ptr;
            if ( v16 )
              ((void (__fastcall *)(bdDataChannelStandard *, __int64))v16->~bdReferencable)(v16, 1i64);
          }
          this->m_activeDataChannel.m_ptr = NULL;
          return;
        }
      }
      v8 = BD_DATACHANNEL_FAILURE_HTTP_TRANSMIT;
      goto LABEL_19;
    }
  }
  if ( this->m_currentStatus == BD_DATACHANNEL_STATUS_PENDING )
  {
    v17 = this->m_activeDataChannel.m_ptr;
    if ( v17 )
    {
      bdDataChannelBase::setState(v17, BD_DATACHANNEL_STATE_OK);
      bdDataChannelBase::dequeData(this->m_activeDataChannel.m_ptr, 1);
    }
    bdDataChannelManagerBase::setSuccessfulOperation(this);
  }
  v18 = this->m_activeDataChannel.m_ptr;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v19 = this->m_activeDataChannel.m_ptr;
      if ( v19 )
        ((void (__fastcall *)(bdDataChannelStandard *, __int64))v19->~bdReferencable)(v19, 1i64);
    }
  }
  this->m_activeDataChannel.m_ptr = NULL;
  m_data = this->m_dataChannels.m_data;
  m_size = this->m_dataChannels.m_size;
  data = NULL;
  size = 0;
  v22 = &m_data[m_size];
  v23 = bdPlatformTiming::getPOSIXTimestamp();
  if ( m_data != v22 )
  {
    while ( 1 )
    {
      if ( bdDataChannelBase::getState(m_data->m_ptr) == BD_DATACHANNEL_STATE_THROTTLED && v23 > m_data->m_ptr->getThrottledRetryTime(m_data->m_ptr) )
      {
        bdDataChannelBase::setState(m_data->m_ptr, BD_DATACHANNEL_STATE_OK);
        m_data->m_ptr->setThrottledRetryTime(m_data->m_ptr, 0i64);
      }
      if ( bdDataChannelBase::getState(m_data->m_ptr) == BD_DATACHANNEL_STATE_OK && bdDataChannelBase::peekQueuedData(m_data->m_ptr, (const unsigned __int8 **)&data, &size) && data && size )
        break;
      if ( ++m_data == v22 )
        return;
    }
    this->m_reset = 0;
    v24 = bdDataChannelUtilities::DEFAULT_MESSAGE_STREAM_NAME;
    MsgName = bdDataChannelStandard::getMsgName(m_data->m_ptr);
    bdDataChannelUtilities::buildEndpointURLV2(result, this->m_gluttonEndpoint, this->m_client, this->m_userid, this->m_titleId, this->m_userAcctType, MsgName, v24);
    if ( ((unsigned __int8 (__fastcall *)(bdHTTP *, __int64, char *))this->m_http->initRequest)(this->m_http, 3i64, result) )
    {
      m_http = this->m_http;
      if ( this->m_sendSecurely )
        bdDataChannelUtilities::generateSecureHeaders(m_http, "*/*", this->m_authToken);
      else
        bdDataChannelUtilities::generateInsecureHeaders(m_http, "*/*");
      this->m_http->setHeader(this->m_http, "Content-Type", "application/octet-stream");
      bdHTTP::setUploadData(this->m_http, data, size);
      bdHTTP::setDownloadBuffer(this->m_http, this->m_httpDownloadBuffer, 0x400u);
      this->m_http->sendRequest(this->m_http);
      LODWORD(streamNamea) = size;
      bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v1", 0x224u, "bdDataChannelManagerStandardImpl::sendData dataSize:%u, endpoint:%s", streamNamea, result);
      if ( this->m_http->getStatus(this->m_http) == BD_MAX_STATUS )
      {
        LODWORD(streamNameb) = this->m_http->getInternalError(this->m_http);
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v1", 0x228u, "Failed to transfer: %d", streamNameb);
        bdDataChannelManagerBase::setFailedOperation(this, BD_DATACHANNEL_FAILURE_HTTP_TRANSMIT);
      }
      else
      {
        this->m_currentStatus = BD_DATACHANNEL_STATUS_PENDING;
        bdDataChannelBase::setState(m_data->m_ptr, BD_DATACHANNEL_STATE_INTRANSIT);
        bdReference<bdDataChannelStandard>::operator=(&this->m_activeDataChannel, m_data);
      }
    }
    else
    {
      this->m_currentStatus = BD_DATACHANNEL_STATUS_FAILED;
    }
  }
}

/*
==============
bdDataChannelManagerStandardImpl::internalUpdate_v2
==============
*/
void bdDataChannelManagerStandardImpl::internalUpdate_v2(bdDataChannelManagerStandardImpl *this)
{
  bdHTTP::bdStatus v2; 
  bdDataChannelManagerBase::bdDataChannelStatus m_currentStatus; 
  bdDataChannelManagerBase::bdDataChannelStatus v4; 
  __int32 v5; 
  __int32 v6; 
  int m_httpStatusCode; 
  bdDataChannelStandard *v8; 
  bdDataChannelStandard *v9; 
  unsigned int m_msgRetryDelayInSeconds; 
  bdDataChannelStandard *v11; 
  void (__fastcall *setThrottledRetryTime)(bdDataChannelBase *, __int64); 
  __int64 POSIXTimestamp; 
  bdDataChannelBase::bdDataChannelPacket *v14; 
  bdDataChannelBase::bdDataChannelPacket *v15; 
  unsigned __int16 Retries; 
  unsigned __int16 m_maxMesgRetries; 
  unsigned __int16 v18; 
  __int64 v19; 
  bdDataChannelStandard *m_ptr; 
  bdDataChannelStandard *v21; 
  bdDataChannelBase::bdDataChannelPacket *v22; 
  bdDataChannelBase::bdDataChannelPacket *v23; 
  unsigned int Size; 
  const unsigned __int8 *Data; 
  const char *MsgName; 
  char v27; 
  bdHTTP *m_http; 
  bool v29; 
  char *streamName; 
  int v31; 
  __int64 v32; 
  bdReference<bdDataChannelStandard> result; 
  __int64 v34; 
  char v35[256]; 
  char v36[1024]; 

  v34 = -2i64;
  v2 = this->m_http->getStatus(this->m_http);
  this->m_httpStatusCode = this->m_http->getLastHTTPStatus(this->m_http);
  if ( this->m_reset && v2 == BD_MAX_STATUS )
  {
    m_currentStatus = this->m_currentStatus;
    goto LABEL_6;
  }
  v4 = this->m_currentStatus;
  if ( v4 != BD_DATACHANNEL_STATUS_OK )
  {
LABEL_7:
    if ( v4 != BD_DATACHANNEL_STATUS_PENDING && v2 == BD_MAX_STATUS )
      v2 = BD_CANCELLED;
    goto LABEL_10;
  }
  m_currentStatus = BD_DATACHANNEL_STATUS_OK;
  if ( v2 == BD_MAX_STATUS )
  {
LABEL_6:
    v2 = BD_CANCELLED;
    v4 = m_currentStatus;
    goto LABEL_7;
  }
LABEL_10:
  v5 = v2 - 1;
  if ( !v5 )
    goto LABEL_59;
  v6 = v5 - 2;
  if ( !v6 )
  {
    this->m_currentStatus = BD_DATACHANNEL_STATUS_PENDING;
    return;
  }
  if ( v6 == 2 )
  {
LABEL_59:
    if ( v4 == BD_DATACHANNEL_STATUS_PENDING )
    {
      m_ptr = this->m_activeDataChannel.m_ptr;
      if ( m_ptr )
      {
        bdDataChannelBase::setState(m_ptr, BD_DATACHANNEL_STATE_OK);
        bdDataChannelBase::dequeData(this->m_activeDataChannel.m_ptr, 1);
      }
    }
    bdDataChannelManagerBase::setSuccessfulOperation(this);
    bdDataChannelManagerStandardImpl::getNextChannel(this, &result);
    v21 = result.m_ptr;
    if ( result.m_ptr )
    {
      v22 = bdDataChannelBase::peekQueuedData(result.m_ptr);
      v23 = v22;
      if ( v22 )
      {
        Size = bdDataChannelBase::bdDataChannelPacket::getSize(v22);
        Data = bdDataChannelBase::bdDataChannelPacket::getData(v23);
        MsgName = bdDataChannelStandard::getMsgName(v21);
        bdDataChannelUtilities::buildEndpointURLV2(v36, this->m_gluttonEndpoint, this->m_client, this->m_userid, this->m_titleId, this->m_userAcctType, MsgName, bdDataChannelUtilities::DEFAULT_MESSAGE_STREAM_NAME);
        v27 = ((__int64 (__fastcall *)(bdHTTP *, __int64, char *))this->m_http->initRequest)(this->m_http, 3i64, v36);
        m_http = this->m_http;
        if ( this->m_sendSecurely )
          bdDataChannelUtilities::generateSecureHeaders(m_http, "*/*", this->m_authToken);
        else
          bdDataChannelUtilities::generateInsecureHeaders(m_http, "*/*");
        v29 = v27 && this->m_http->setHeader(this->m_http, "Content-Type", "application/octet-stream") && bdHTTP::setUploadData(this->m_http, Data, Size) && bdHTTP::setDownloadBuffer(this->m_http, this->m_httpDownloadBuffer, 0x400u) && this->m_http->sendRequest(this->m_http) == BD_FAILED;
        bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::sendData", 0x1BFu, "bdDataChannelManagerStandardImpl::sendData msgName=%s dataSize:%u, endpoint:%s", MsgName, Size, v36);
        if ( v29 )
        {
          this->m_reset = 0;
          bdReference<bdDataChannelStandard>::operator=(&this->m_activeDataChannel, &result);
          this->m_currentStatus = BD_DATACHANNEL_STATUS_PENDING;
          bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_INTRANSIT);
        }
      }
    }
    if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChannelStandard *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(bdHTTP *, __int64))this->m_http->getInternalError)(this->m_http, 5i64);
    bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x140u, "HTTP Error %d - internal error %d", this->m_httpStatusCode, v31);
    if ( !this->m_activeDataChannel.m_ptr )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x144u, "No active dataChannel found, skip processing this response.");
      return;
    }
    m_httpStatusCode = this->m_httpStatusCode;
    if ( m_httpStatusCode != 401 )
    {
      if ( m_httpStatusCode == 429 )
      {
        if ( bdDataChannelBase::getState(this->m_activeDataChannel.m_ptr) != BD_DATACHANNEL_STATE_THROTTLED )
        {
          memset_0(v35, 0, 0xFFui64);
          if ( !this->m_http->getHeader(this->m_http, "Retry-After", v35, 255u) || (m_msgRetryDelayInSeconds = atoi(v35)) == 0 )
            m_msgRetryDelayInSeconds = this->m_msgRetryDelayInSeconds;
          LODWORD(streamName) = m_msgRetryDelayInSeconds;
          bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x193u, "Channel is throttled because of too many requests - retrying in %d seconds", streamName);
          bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_THROTTLED);
          v11 = this->m_activeDataChannel.m_ptr;
          setThrottledRetryTime = v11->setThrottledRetryTime;
          POSIXTimestamp = bdPlatformTiming::getPOSIXTimestamp();
          setThrottledRetryTime(v11, m_msgRetryDelayInSeconds + POSIXTimestamp);
        }
        return;
      }
      if ( ((m_httpStatusCode - 500) & 0xFFFFFFFC) != 0 || m_httpStatusCode == 501 )
      {
        LODWORD(streamName) = this->m_httpStatusCode;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x19Cu, "Message failed with http status [%d].", streamName);
        bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_ERROR);
        v8 = this->m_activeDataChannel.m_ptr;
        if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v9 = this->m_activeDataChannel.m_ptr;
          if ( v9 )
            ((void (__fastcall *)(bdDataChannelStandard *, __int64))v9->~bdReferencable)(v9, 1i64);
        }
        this->m_activeDataChannel.m_ptr = NULL;
        bdDataChannelManagerBase::setFailedOperation(this, BD_DATACHANNEL_FAILURE_HTTP_TRANSMIT);
        return;
      }
    }
    v14 = bdDataChannelBase::peekQueuedData(this->m_activeDataChannel.m_ptr);
    v15 = v14;
    if ( !v14 )
      return;
    Retries = bdDataChannelBase::bdDataChannelPacket::getRetries(v14);
    m_maxMesgRetries = this->m_maxMesgRetries;
    if ( Retries < m_maxMesgRetries )
    {
      v18 = Retries + 1;
      LODWORD(v32) = m_maxMesgRetries;
      LODWORD(streamName) = v18;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x173u, "Message send failed, will retry [%d out %d time].", streamName, v32);
      bdDataChannelBase::bdDataChannelPacket::setRetries(v15, v18);
      v19 = bdPlatformTiming::getPOSIXTimestamp();
      bdDataChannelBase::bdDataChannelPacket::setNextRetryTime(v15, v19 + this->m_msgRetryDelayInSeconds);
      bdDataChannelBase::rotateQueue(this->m_activeDataChannel.m_ptr);
    }
    else
    {
      if ( this->m_httpStatusCode == 401 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x15Au, "Message not sent due to failed user authentication. Make sure the Umbrella access token is valid and not expired.");
        bdDataChannelBase::bdDataChannelPacket::setRetries(v15, 0);
        bdDataChannelBase::bdDataChannelPacket::setNextRetryTime(v15, 0i64);
        bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_ERROR);
        bdDataChannelManagerBase::setFailedOperation(this, BD_DATACHANNEL_FAILURE_AUTHENTICATION);
        return;
      }
      LODWORD(streamName) = Retries;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::internalUpdate_v2", 0x166u, "Message failed to send after %d retries, will be dropped.", streamName);
      bdDataChannelBase::dequeData(this->m_activeDataChannel.m_ptr, 0);
    }
    bdDataChannelBase::setState(this->m_activeDataChannel.m_ptr, BD_DATACHANNEL_STATE_OK);
    this->m_currentStatus = BD_DATACHANNEL_STATUS_OK;
  }
}

/*
==============
bdDataChannelManagerStandardImpl::reset
==============
*/
void bdDataChannelManagerStandardImpl::reset(bdDataChannelManagerStandardImpl *this)
{
  __int64 v2; 
  bool v3; 

  this->m_reset = 1;
  bdDataChannelManagerBase::setSuccessfulOperation(this);
  v2 = 0i64;
  if ( this->m_dataChannels.m_size )
  {
    v3 = this->m_dataChannels.m_size != 0;
    do
    {
      bdHandleAssert(v3, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdDataChannelStandard> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      if ( bdDataChannelBase::getState(this->m_dataChannels.m_data[v2].m_ptr) == BD_DATACHANNEL_STATE_ERROR )
      {
        bdHandleAssert((unsigned int)v2 < this->m_dataChannels.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdDataChannelStandard> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        bdDataChannelBase::setState(this->m_dataChannels.m_data[v2].m_ptr, BD_DATACHANNEL_STATE_OK);
      }
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)v2 < this->m_dataChannels.m_size;
    }
    while ( (unsigned int)v2 < this->m_dataChannels.m_size );
  }
}

/*
==============
bdDataChannelManagerStandardImpl::sendData
==============
*/
_BOOL8 bdDataChannelManagerStandardImpl::sendData(bdDataChannelManagerStandardImpl *this, const char *const msgName, const unsigned __int8 *data, unsigned int dataSize)
{
  char v8; 
  bdHTTP *m_http; 
  char v10; 
  bool v11; 
  unsigned int v13; 
  char result[1024]; 

  bdDataChannelUtilities::buildEndpointURLV2(result, this->m_gluttonEndpoint, this->m_client, this->m_userid, this->m_titleId, this->m_userAcctType, msgName, bdDataChannelUtilities::DEFAULT_MESSAGE_STREAM_NAME);
  v8 = ((__int64 (__fastcall *)(bdHTTP *, __int64, char *))this->m_http->initRequest)(this->m_http, 3i64, result);
  m_http = this->m_http;
  v10 = v8;
  if ( this->m_sendSecurely )
    bdDataChannelUtilities::generateSecureHeaders(m_http, "*/*", this->m_authToken);
  else
    bdDataChannelUtilities::generateInsecureHeaders(m_http, "*/*");
  v11 = v10 && this->m_http->setHeader(this->m_http, "Content-Type", "application/octet-stream") && bdHTTP::setUploadData(this->m_http, data, dataSize) && bdHTTP::setDownloadBuffer(this->m_http, this->m_httpDownloadBuffer, 0x400u) && this->m_http->sendRequest(this->m_http) == BD_FAILED;
  v13 = dataSize;
  bdLogMessage(BD_LOG_INFO, "info/", "bdOutOfBand/bdDataChannelEventManagerImpl", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelmanagerstandard.cpp", "bdDataChannelManagerStandardImpl::sendData", 0x1BFu, "bdDataChannelManagerStandardImpl::sendData msgName=%s dataSize:%u, endpoint:%s", msgName, v13, result);
  return v11;
}

/*
==============
bdDataChannelManagerStandardImpl::setMaxMessageTransferRetries
==============
*/
void bdDataChannelManagerStandardImpl::setMaxMessageTransferRetries(bdDataChannelManagerStandardImpl *this, unsigned __int16 retries)
{
  this->m_maxMesgRetries = retries;
}

/*
==============
bdDataChannelManagerStandardImpl::setMessageTransferRetryDelay
==============
*/
void bdDataChannelManagerStandardImpl::setMessageTransferRetryDelay(bdDataChannelManagerStandardImpl *this, unsigned int retryAfterInSeconds)
{
  this->m_msgRetryDelayInSeconds = retryAfterInSeconds;
}

