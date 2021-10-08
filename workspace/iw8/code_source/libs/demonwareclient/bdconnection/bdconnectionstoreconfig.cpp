/*
==============
bdConnectionStoreConfig::bdConnectionStoreConfig
==============
*/

void __fastcall bdConnectionStoreConfig::bdConnectionStoreConfig(bdConnectionStoreConfig *this)
{
  ??0bdConnectionStoreConfig@@QEAA@XZ(this);
}

/*
==============
bdConnectionStoreConfig::reset
==============
*/

void __fastcall bdConnectionStoreConfig::reset(bdConnectionStoreConfig *this)
{
  ?reset@bdConnectionStoreConfig@@QEAAXXZ(this);
}

/*
==============
bdConnectionStoreConfig::bdConnectionStoreConfig
==============
*/
void bdConnectionStoreConfig::bdConnectionStoreConfig(bdConnectionStoreConfig *this)
{
  this->m_maxReceiveIterations = 100;
  this->m_maxShutdownDuration = 5.0;
  this->m_maxFlushIterations = 5;
  this->m_acceptOutOfOrder = 0;
}

/*
==============
bdConnectionStoreConfig::reset
==============
*/
void bdConnectionStoreConfig::reset(bdConnectionStoreConfig *this)
{
  this->m_maxReceiveIterations = 100;
  this->m_maxShutdownDuration = 5.0;
  this->m_maxFlushIterations = 5;
  this->m_acceptOutOfOrder = 0;
}

