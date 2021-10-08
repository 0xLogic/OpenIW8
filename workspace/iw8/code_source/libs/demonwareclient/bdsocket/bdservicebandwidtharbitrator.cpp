/*
==============
bdServiceBandwidthArbitrator::bdServiceBandwidthArbitrator
==============
*/

void __fastcall bdServiceBandwidthArbitrator::bdServiceBandwidthArbitrator(bdServiceBandwidthArbitrator *this)
{
  ??0bdServiceBandwidthArbitrator@@QEAA@XZ(this);
}

/*
==============
bdServiceBandwidthArbitrator::addSliceQuota
==============
*/

void __fastcall bdServiceBandwidthArbitrator::addSliceQuota(bdServiceBandwidthArbitrator *this, unsigned int bytes)
{
  ?addSliceQuota@bdServiceBandwidthArbitrator@@QEAAXI@Z(this, bytes);
}

/*
==============
bdServiceBandwidthArbitrator::send
==============
*/

void __fastcall bdServiceBandwidthArbitrator::send(bdServiceBandwidthArbitrator *this, unsigned int bytes)
{
  ?send@bdServiceBandwidthArbitrator@@QEAAXI@Z(this, bytes);
}

/*
==============
bdServiceBandwidthArbitrator::reset
==============
*/

void __fastcall bdServiceBandwidthArbitrator::reset(bdServiceBandwidthArbitrator *this)
{
  ?reset@bdServiceBandwidthArbitrator@@QEAAXXZ(this);
}

/*
==============
bdServiceBandwidthArbitrator::allowedSend
==============
*/

bool __fastcall bdServiceBandwidthArbitrator::allowedSend(bdServiceBandwidthArbitrator *this, unsigned int __formal)
{
  return ?allowedSend@bdServiceBandwidthArbitrator@@QEBA_NI@Z(this, __formal);
}

/*
==============
bdServiceBandwidthArbitrator::bdServiceBandwidthArbitrator
==============
*/
void bdServiceBandwidthArbitrator::bdServiceBandwidthArbitrator(bdServiceBandwidthArbitrator *this)
{
  this->m_allowedSend = 0;
  this->m_sentThisSlice = 0;
}

/*
==============
bdServiceBandwidthArbitrator::addSliceQuota
==============
*/
void bdServiceBandwidthArbitrator::addSliceQuota(bdServiceBandwidthArbitrator *this, unsigned int bytes)
{
  int m_allowedSend; 

  m_allowedSend = this->m_allowedSend;
  if ( this->m_allowedSend / (int)bytes < 2 && (m_allowedSend <= 0 || this->m_sentThisSlice) )
    this->m_allowedSend = m_allowedSend + bytes;
  this->m_sentThisSlice = 0;
}

/*
==============
bdServiceBandwidthArbitrator::allowedSend
==============
*/
bool bdServiceBandwidthArbitrator::allowedSend(bdServiceBandwidthArbitrator *this, unsigned int __formal)
{
  return this->m_allowedSend > 0;
}

/*
==============
bdServiceBandwidthArbitrator::reset
==============
*/
void bdServiceBandwidthArbitrator::reset(bdServiceBandwidthArbitrator *this)
{
  this->m_allowedSend = 0;
  this->m_sentThisSlice = 0;
}

/*
==============
bdServiceBandwidthArbitrator::send
==============
*/
void bdServiceBandwidthArbitrator::send(bdServiceBandwidthArbitrator *this, unsigned int bytes)
{
  this->m_allowedSend -= bytes;
  this->m_sentThisSlice = 1;
}

