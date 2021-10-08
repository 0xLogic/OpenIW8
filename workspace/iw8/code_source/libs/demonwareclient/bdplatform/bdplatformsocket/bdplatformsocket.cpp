/*
==============
bdPlatformSocket::getBytesReceived
==============
*/

unsigned __int64 __fastcall bdPlatformSocket::getBytesReceived()
{
  return ?getBytesReceived@bdPlatformSocket@@SA_KXZ();
}

/*
==============
bdPlatformSocket::getPacketsRecvd
==============
*/

unsigned __int64 __fastcall bdPlatformSocket::getPacketsRecvd()
{
  return ?getPacketsRecvd@bdPlatformSocket@@SA_KXZ();
}

/*
==============
bdPlatformSocket::getBytesSent
==============
*/

unsigned __int64 __fastcall bdPlatformSocket::getBytesSent()
{
  return ?getBytesSent@bdPlatformSocket@@SA_KXZ();
}

/*
==============
bdPlatformSocket::bdPlatformSocket
==============
*/

void __fastcall bdPlatformSocket::bdPlatformSocket(bdPlatformSocket *this)
{
  ??0bdPlatformSocket@@AEAA@XZ(this);
}

/*
==============
bdPlatformSocket::getPacketsSent
==============
*/

unsigned __int64 __fastcall bdPlatformSocket::getPacketsSent()
{
  return ?getPacketsSent@bdPlatformSocket@@SA_KXZ();
}

/*
==============
bdPlatformSocket::bdPlatformSocket
==============
*/
void bdPlatformSocket::bdPlatformSocket(bdPlatformSocket *this)
{
  ;
}

/*
==============
bdPlatformSocket::getBytesReceived
==============
*/
unsigned __int64 bdPlatformSocket::getBytesReceived()
{
  return bdPlatformSocket::s_totalBytesRecvd.m_value._My_val;
}

/*
==============
bdPlatformSocket::getBytesSent
==============
*/
unsigned __int64 bdPlatformSocket::getBytesSent()
{
  return bdPlatformSocket::s_totalBytesSent.m_value._My_val;
}

/*
==============
bdPlatformSocket::getPacketsRecvd
==============
*/
unsigned __int64 bdPlatformSocket::getPacketsRecvd()
{
  return bdPlatformSocket::s_totalPacketsRecvd.m_value._My_val;
}

/*
==============
bdPlatformSocket::getPacketsSent
==============
*/
unsigned __int64 bdPlatformSocket::getPacketsSent()
{
  return bdPlatformSocket::s_totalPacketsSent.m_value._My_val;
}

