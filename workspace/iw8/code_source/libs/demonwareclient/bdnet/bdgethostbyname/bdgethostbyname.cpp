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
  unsigned __int64 v6; 
  unsigned int v8; 

  bdSockAddr::bdSockAddr(result);
  if ( index >= this->m_numAddresses )
  {
    v8 = index;
    if ( index >= 4 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::getAddressAt", 0x68u, "Address at index %u is outside the array, blank bdSockAddr returned", v8);
    else
      bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::getAddressAt", 0x64u, "No address at index %u, blank bdSockAddr returned", v8);
    return result;
  }
  else
  {
    v6 = (unsigned __int64)index << 7;
    *(__m256i *)&result->inUn.m_sockaddrStorage.ss_family = *(__m256i *)((char *)&this->m_addresses[0].inUn.m_sockaddrStorage.ss_family + v6);
    *((__m256i *)&result->inUn.m_ipv6Sockaddr + 1) = *(__m256i *)((char *)&this->m_addresses[0].inUn.m_ipv6Sockaddr + v6 + 32);
    *((__m256i *)&result->inUn.m_ipv6Sockaddr + 2) = *(__m256i *)((char *)&this->m_addresses[0].inUn.m_ipv6Sockaddr + v6 + 64);
    *((__m256i *)&result->inUn.m_ipv6Sockaddr + 3) = *(__m256i *)((char *)&this->m_addresses[0].inUn.m_ipv6Sockaddr + v6 + 96);
    return result;
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
  float m_timeout; 
  double ElapsedTimeInSeconds; 

  if ( this->m_status == BD_LOOKUP_PENDING )
  {
    m_timeout = this->m_config.m_timeout;
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_timer);
    if ( *(float *)&ElapsedTimeInSeconds > m_timeout )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::pump", 0x46u, "Lookup has timed out after %f seconds, cancelling thread.", m_timeout);
      if ( this->m_status == BD_LOOKUP_PENDING )
      {
        bdPlatformSocket::abortGetHostByName(this->m_handle);
        this->m_status = BD_LOOKUP_TIMED_OUT;
      }
      else
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::cancelLookup", 0x76u, "No pending lookup to cancel");
        this->m_status = BD_LOOKUP_TIMED_OUT;
      }
    }
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
  __int64 v9; 
  bool v10; 
  bdGetHostByNameConfig v12; 
  __int64 v13; 

  v13 = -2i64;
  v12.m_timeout = config.m_timeout;
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
      bdThread::bdThread(v5, this, 0, this->m_threadStackSize, 0);
      v6 = v7;
    }
    this->m_thread = v6;
    this->m_config.m_timeout = v12.m_timeout;
    bdStopwatch::reset(&this->m_timer);
    bdStopwatch::start(&this->m_timer);
    bdGetHostByNameConfig::sanityCheckConfig(&v12);
    this->m_status = BD_LOOKUP_PENDING;
    m_thread = this->m_thread;
    bdHandleAssert(hostname != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v9 = -1i64;
    do
      ++v9;
    while ( hostname[v9] );
    v10 = bdThread::start(m_thread, hostname, v9 + 1, "bdGetHostByName");
    if ( v10 )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::start", 0x2Fu, "Lookup started for %s.", hostname);
    }
    else
    {
      this->m_status = BD_LOOKUP_ERROR;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname.cpp", "bdGetHostByName::start", 0x36u, "Failed to start host name lookup thread for %s.", hostname);
    }
    return v10;
  }
}

