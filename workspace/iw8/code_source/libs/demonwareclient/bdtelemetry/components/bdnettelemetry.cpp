/*
==============
bdNetTelemetry::startGetHostByName
==============
*/

unsigned int __fastcall bdNetTelemetry::startGetHostByName(bdNetTelemetry *this, const char *hostname)
{
  return ?startGetHostByName@bdNetTelemetry@@QEAAIPEBD@Z(this, hostname);
}

/*
==============
bdNetTelemetry::setNetStart
==============
*/

void __fastcall bdNetTelemetry::setNetStart(bdNetTelemetry *this, const bdNetStartParams *params)
{
  ?setNetStart@bdNetTelemetry@@QEAAXAEBVbdNetStartParams@@@Z(this, params);
}

/*
==============
bdNetTelemetry::setStatus
==============
*/

void __fastcall bdNetTelemetry::setStatus(bdNetTelemetry *this, char state)
{
  ?setStatus@bdNetTelemetry@@QEAAXC@Z(this, state);
}

/*
==============
bdNetTelemetry::bdNetTelemetry
==============
*/

void __fastcall bdNetTelemetry::bdNetTelemetry(bdNetTelemetry *this)
{
  ??0bdNetTelemetry@@QEAA@XZ(this);
}

/*
==============
bdNetTelemetry::finishGetHostByName
==============
*/

void __fastcall bdNetTelemetry::finishGetHostByName(bdNetTelemetry *this, unsigned int id, const bdSockAddr *addr)
{
  ?finishGetHostByName@bdNetTelemetry@@QEAAXIVbdSockAddr@@@Z(this, id, addr);
}

/*
==============
bdNetTelemetry::bdNetTelemetry
==============
*/
void bdNetTelemetry::bdNetTelemetry(bdNetTelemetry *this)
{
  bdNetTelemetry::GetHostInfo *m_getHostInfo; 
  __int64 v3; 
  __int64 v4; 
  bdSockAddr *m_localAddrs; 

  bdStopwatch::bdStopwatch(&this->m_age);
  m_getHostInfo = this->m_getHostInfo;
  v3 = 8i64;
  do
  {
    bdNetTelemetry::GetHostInfo::GetHostInfo(m_getHostInfo++);
    --v3;
  }
  while ( v3 );
  this->m_getHostInfoCount = 0;
  v4 = 10i64;
  m_localAddrs = this->m_localAddrs;
  do
  {
    bdSockAddr::bdSockAddr(m_localAddrs++);
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&this->m_localAddrCount = 0i64;
  this->m_result = 0;
}

/*
==============
bdNetTelemetry::finishGetHostByName
==============
*/
void bdNetTelemetry::finishGetHostByName(bdNetTelemetry *this, unsigned int id, const bdSockAddr *addr)
{
  __int64 v5; 
  double ElapsedTimeInSeconds; 

  if ( id < 8 )
  {
    v5 = id;
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_getHostInfo[v5].m_age);
    this->m_getHostInfo[v5].msToResolution = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
    this->m_getHostInfo[v5].addr = *addr;
  }
}

/*
==============
bdNetTelemetry::setNetStart
==============
*/
void bdNetTelemetry::setNetStart(bdNetTelemetry *this, const bdNetStartParams *params)
{
  unsigned int v4; 
  bdSockAddr *m_data; 
  __int64 v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  unsigned __int64 v11; 

  bdStopwatch::start(&this->m_age);
  v4 = 0;
  this->m_result = 0;
  *(_QWORD *)&this->m_localAddrCount = 0i64;
  for ( this->m_getHostInfoCount = 0; v4 < params->m_localAddresses.m_size; ++this->m_localAddrCount )
  {
    if ( v4 >= 0xA )
      break;
    bdHandleAssert(v4 < params->m_localAddresses.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdSockAddr>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    m_data = params->m_localAddresses.m_data;
    v6 = v4++;
    v6 <<= 7;
    v7 = *(__m256i *)((char *)&m_data->inUn.m_sockaddrStorage.ss_family + v6);
    v8 = *(__m256i *)((char *)&m_data->inUn.m_ipv6Sockaddr + v6 + 32);
    v9 = *(__m256i *)((char *)&m_data->inUn.m_ipv6Sockaddr + v6 + 64);
    v10 = *(__m256i *)((char *)&m_data->inUn.m_ipv6Sockaddr + v6 + 96);
    v11 = (unsigned __int64)this->m_localAddrCount << 7;
    *(__m256i *)((char *)&this->m_localAddrs[0].inUn.m_sockaddrStorage.ss_family + v11) = v7;
    *(__m256i *)((char *)&this->m_localAddrs[0].inUn.m_ipv6Sockaddr + v11 + 32) = v8;
    *(__m256i *)((char *)&this->m_localAddrs[0].inUn.m_ipv6Sockaddr + v11 + 64) = v9;
    *(__m256i *)((char *)&this->m_localAddrs[0].inUn.m_ipv6Sockaddr + v11 + 96) = v10;
  }
}

/*
==============
bdNetTelemetry::setStatus
==============
*/
void bdNetTelemetry::setStatus(bdNetTelemetry *this, char state)
{
  double ElapsedTimeInSeconds; 

  if ( (unsigned __int8)state >= 0xFCu || state == 0 || state == 2 )
  {
    this->m_result = state;
    ElapsedTimeInSeconds = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
    this->m_msToResult = (int)(float)(*(float *)&ElapsedTimeInSeconds * 1000.0);
  }
}

/*
==============
bdNetTelemetry::startGetHostByName
==============
*/
__int64 bdNetTelemetry::startGetHostByName(bdNetTelemetry *this, const char *hostname)
{
  __int64 m_getHostInfoCount; 
  char *v4; 
  __int64 v5; 
  __m256i *v6; 
  _BYTE *v7; 
  bdSockAddr v9; 

  m_getHostInfoCount = this->m_getHostInfoCount;
  if ( (unsigned int)m_getHostInfoCount >= 8 )
    return 0xFFFFFFFFi64;
  this->m_getHostInfoCount = m_getHostInfoCount + 1;
  v4 = (char *)this + 176 * m_getHostInfoCount;
  bdStopwatch::start((bdStopwatch *)v4 + 1);
  *((_DWORD *)v4 + 12) = -1;
  bdSockAddr::bdSockAddr(&v9, 0xFF00FF00);
  v5 = 31i64;
  *(__m256i *)(v4 + 56) = *v6;
  *(__m256i *)(v4 + 88) = v6[1];
  *(__m256i *)(v4 + 120) = v6[2];
  *(__m256i *)(v4 + 152) = v6[3];
  v7 = memchr_0(hostname, 0, 0x1Fui64);
  if ( v7 )
    v5 = v7 - hostname;
  bdStrlcpy(v4 + 16, hostname, v5 + 1);
  return (unsigned int)m_getHostInfoCount;
}

