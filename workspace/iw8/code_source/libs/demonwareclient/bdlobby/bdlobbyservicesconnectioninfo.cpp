/*
==============
bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo
==============
*/

void __fastcall bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo(bdLobbyServicesConnectionInfo *this, const char *address, unsigned __int16 port)
{
  ??0bdLobbyServicesConnectionInfo@@QEAA@PEBDG@Z(this, address, port);
}

/*
==============
bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo
==============
*/

void __fastcall bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo(bdLobbyServicesConnectionInfo *this, unsigned int xlspServiceId, unsigned __int16 xlspPort, const char *xlspServiceString)
{
  ??0bdLobbyServicesConnectionInfo@@QEAA@IGPEBD@Z(this, xlspServiceId, xlspPort, xlspServiceString);
}

/*
==============
bdLobbyServicesConnectionInfo::getXlspServiceId
==============
*/

unsigned int __fastcall bdLobbyServicesConnectionInfo::getXlspServiceId(bdLobbyServicesConnectionInfo *this)
{
  return ?getXlspServiceId@bdLobbyServicesConnectionInfo@@QEBAIXZ(this);
}

/*
==============
bdLobbyServicesConnectionInfo::getPort
==============
*/

unsigned __int16 __fastcall bdLobbyServicesConnectionInfo::getPort(bdLobbyServicesConnectionInfo *this)
{
  return ?getPort@bdLobbyServicesConnectionInfo@@QEBAGXZ(this);
}

/*
==============
bdLobbyServicesConnectionInfo::getXlspServiceString
==============
*/

const char *__fastcall bdLobbyServicesConnectionInfo::getXlspServiceString(bdLobbyServicesConnectionInfo *this)
{
  return ?getXlspServiceString@bdLobbyServicesConnectionInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdLobbyServicesConnectionInfo::getAddress
==============
*/

const char *__fastcall bdLobbyServicesConnectionInfo::getAddress(bdLobbyServicesConnectionInfo *this)
{
  return ?getAddress@bdLobbyServicesConnectionInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo
==============
*/
void bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo(bdLobbyServicesConnectionInfo *this, unsigned int xlspServiceId, unsigned __int16 xlspPort, const char *xlspServiceString)
{
  this->m_address = NULL;
  this->m_xlspServiceString = xlspServiceString;
  this->m_xlspServiceId = xlspServiceId;
  this->m_port = xlspPort;
}

/*
==============
bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo
==============
*/
void bdLobbyServicesConnectionInfo::bdLobbyServicesConnectionInfo(bdLobbyServicesConnectionInfo *this, const char *address, unsigned __int16 port)
{
  this->m_address = address;
  this->m_xlspServiceString = NULL;
  this->m_xlspServiceId = 0;
  this->m_port = port;
}

/*
==============
bdLobbyServicesConnectionInfo::getAddress
==============
*/
const char *bdLobbyServicesConnectionInfo::getAddress(bdLobbyServicesConnectionInfo *this)
{
  return this->m_address;
}

/*
==============
bdLobbyServicesConnectionInfo::getPort
==============
*/
__int64 bdLobbyServicesConnectionInfo::getPort(bdLobbyServicesConnectionInfo *this)
{
  return this->m_port;
}

/*
==============
bdLobbyServicesConnectionInfo::getXlspServiceId
==============
*/
__int64 bdLobbyServicesConnectionInfo::getXlspServiceId(bdLobbyServicesConnectionInfo *this)
{
  return this->m_xlspServiceId;
}

/*
==============
bdLobbyServicesConnectionInfo::getXlspServiceString
==============
*/
const char *bdLobbyServicesConnectionInfo::getXlspServiceString(bdLobbyServicesConnectionInfo *this)
{
  return this->m_xlspServiceString;
}

