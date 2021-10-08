/*
==============
bdGetHostByName::getAddressAt
==============
*/

bdSockAddr *__fastcall bdGetHostByName::getAddressAt(bdGetHostByName *this, bdSockAddr *result, unsigned int index)
{
  return ?getAddressAt@bdGetHostByName@@QEBA?AVbdSockAddr@@I@Z(this, result, index);
}

/*
==============
bdGetHostByName::getStatus
==============
*/

bdGetHostByName::bdStatus __fastcall bdGetHostByName::getStatus(bdGetHostByName *this)
{
  return ?getStatus@bdGetHostByName@@QEBA?AW4bdStatus@1@XZ(this);
}

/*
==============
bdGetHostByName::cancelLookup
==============
*/

void __fastcall bdGetHostByName::cancelLookup(bdGetHostByName *this)
{
  ?cancelLookup@bdGetHostByName@@IEAAXXZ(this);
}

/*
==============
bdGetHostByName::bdGetHostByName
==============
*/

void __fastcall bdGetHostByName::bdGetHostByName(bdGetHostByName *this, unsigned int threadStackSize)
{
  ??0bdGetHostByName@@QEAA@I@Z(this, threadStackSize);
}

/*
==============
bdGetHostByName::~bdGetHostByName
==============
*/

void __fastcall bdGetHostByName::~bdGetHostByName(bdGetHostByName *this)
{
  ??1bdGetHostByName@@UEAA@XZ(this);
}

/*
==============
bdGetHostByName::getNumAddresses
==============
*/

unsigned int __fastcall bdGetHostByName::getNumAddresses(bdGetHostByName *this)
{
  return ?getNumAddresses@bdGetHostByName@@QEBAIXZ(this);
}

/*
==============
bdGetHostByName::start
==============
*/

bool __fastcall bdGetHostByName::start(bdGetHostByName *this, const char *hostname, bdGetHostByNameConfig config)
{
  return ?start@bdGetHostByName@@QEAA_NPEBDVbdGetHostByNameConfig@@@Z(this, hostname, config);
}

/*
==============
bdGetHostByName::pump
==============
*/

void __fastcall bdGetHostByName::pump(bdGetHostByName *this)
{
  ?pump@bdGetHostByName@@QEAAXXZ(this);
}

/*
==============
bdGetHostByName::bdGetHostByName
==============
*/
void bdGetHostByName::bdGetHostByName(bdGetHostByName *this, unsigned int threadStackSize)
{
  bdSockAddr *m_addresses; 
  __int64 v5; 

  bdRunnable::bdRunnable(this);
  this->__vftable = (bdGetHostByName_vtbl *)&bdGetHostByName::`vftable';
  bdStopwatch::bdStopwatch(&this->m_timer);
  this->m_status = BD_LOOKUP_UNINITIALIZED;
  this->m_thread = NULL;
  bdGetHostByNameConfig::bdGetHostByNameConfig(&this->m_config);
  m_addresses = this->m_addresses;
  v5 = 4i64;
  do
  {
    bdSockAddr::bdSockAddr(m_addresses++);
    --v5;
  }
  while ( v5 );
  this->m_numAddresses = 0;
  this->m_threadStackSize = threadStackSize;
}

/*
==============
bdGetHostByName::~bdGetHostByName
==============
*/
void bdGetHostByName::~bdGetHostByName(bdGetHostByName *this)
{
  this->__vftable = (bdGetHostByName_vtbl *)&bdGetHostByName::`vftable';
  bdGetHostByName::quit(this);
  bdRunnable::~bdRunnable(this);
}

/*
==============
bdGetHostByName::cancelLookup
==============
*/
void bdGetHostByName::cancelLookup(bdGetHostByName *this)
{
  if ( this->m_status == BD_LOOKUP_PENDING )
  {
    bdPlatformSocket::abortGetHostByName(this->m_handle);
    this->m_status = BD_LOOKUP_CANCELLED;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::cancelLookup", 0x76u, "No pending lookup to cancel");
  }
}

/*
==============
bdGetHostByName::getAddressAt
==============
*/
bdSockAddr *bdGetHostByName::getAddressAt(bdGetHostByName *this, bdSockAddr *result, unsigned int index)
{
  unsigned int v12; 

  _RSI = this;
  _RBX = result;
  bdSockAddr::bdSockAddr(result);
  if ( index >= _RSI->m_numAddresses )
  {
    v12 = index;
    if ( index >= 4 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::getAddressAt", 0x68u, "Address at index %u is outside the array, blank bdSockAddr returned", v12);
    else
      bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::getAddressAt", 0x64u, "No address at index %u, blank bdSockAddr returned", v12);
    return _RBX;
  }
  else
  {
    _RAX = (unsigned __int64)index << 7;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rsi+30h]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymm1, ymmword ptr [rax+rsi+50h]
      vmovups ymmword ptr [rbx+20h], ymm1
      vmovups ymm0, ymmword ptr [rax+rsi+70h]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups ymm1, ymmword ptr [rax+rsi+90h]
      vmovups ymmword ptr [rbx+60h], ymm1
    }
    return _RBX;
  }
}

/*
==============
bdGetHostByName::getNumAddresses
==============
*/
__int64 bdGetHostByName::getNumAddresses(bdGetHostByName *this)
{
  return this->m_numAddresses;
}

/*
==============
bdGetHostByName::getStatus
==============
*/
__int64 bdGetHostByName::getStatus(bdGetHostByName *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdGetHostByName::pump
==============
*/
void bdGetHostByName::pump(bdGetHostByName *this)
{
  bdGetHostByName *v3; 
  char v5; 
  char v6; 
  double v10; 

  v3 = this;
  if ( this->m_status == BD_LOOKUP_PENDING )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, dword ptr [rcx+28h]
    }
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v5 | v6) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+58h+var_20], xmm0
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::pump", 0x46u, "Lookup has timed out after %f seconds, cancelling thread.", v10);
      if ( v3->m_status == BD_LOOKUP_PENDING )
      {
        bdPlatformSocket::abortGetHostByName(v3->m_handle);
        __asm { vmovaps xmm6, [rsp+58h+var_18] }
        v3->m_status = BD_LOOKUP_TIMED_OUT;
        return;
      }
      bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::cancelLookup", 0x76u, "No pending lookup to cancel");
      v3->m_status = BD_LOOKUP_TIMED_OUT;
    }
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::pump", 0x4Du, "Pumping class while no active lookup. This is perfectly safe but not necessary.");
  }
}

/*
==============
bdGetHostByName::start
==============
*/
bool bdGetHostByName::start(bdGetHostByName *this, const char *hostname, bdGetHostByNameConfig config)
{
  bdThread *v5; 
  bdThread *v6; 
  bdThread *v7; 
  bdThread *m_thread; 
  __int64 v10; 
  bool v11; 
  bdGetHostByNameConfig v13; 
  __int64 v14; 

  v14 = -2i64;
  _RSI = this;
  v13.m_timeout = config.m_timeout;
  if ( this->m_status )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::start", 0x3Bu, "Cannot start a host name lookup unless class is in the uninitialized state.");
    return 0;
  }
  else
  {
    v5 = (bdThread *)bdMemory::allocate(0x40ui64);
    v6 = NULL;
    if ( v5 )
    {
      bdThread::bdThread(v5, _RSI, 0, _RSI->m_threadStackSize, 0);
      v6 = v7;
    }
    _RSI->m_thread = v6;
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_18.m_timeout]
      vmovss  dword ptr [rsi+28h], xmm0
    }
    bdStopwatch::reset(&_RSI->m_timer);
    bdStopwatch::start(&_RSI->m_timer);
    bdGetHostByNameConfig::sanityCheckConfig(&v13);
    _RSI->m_status = BD_LOOKUP_PENDING;
    m_thread = _RSI->m_thread;
    bdHandleAssert(hostname != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v10 = -1i64;
    do
      ++v10;
    while ( hostname[v10] );
    v11 = bdThread::start(m_thread, hostname, v10 + 1, "bdGetHostByName");
    if ( v11 )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::start", 0x2Fu, "Lookup started for %s.", hostname);
    }
    else
    {
      _RSI->m_status = BD_LOOKUP_ERROR;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::start", 0x36u, "Failed to start host name lookup thread for %s.", hostname);
    }
    return v11;
  }
}

