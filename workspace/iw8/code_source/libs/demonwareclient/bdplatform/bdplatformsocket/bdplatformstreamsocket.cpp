/*
==============
bdPlatformStreamSocket::getBytesSent
==============
*/

unsigned __int64 __fastcall bdPlatformStreamSocket::getBytesSent()
{
  return ?getBytesSent@bdPlatformStreamSocket@@SA_KXZ();
}

/*
==============
bdPlatformStreamSocket::getBytesReceived
==============
*/

unsigned __int64 __fastcall bdPlatformStreamSocket::getBytesReceived()
{
  return ?getBytesReceived@bdPlatformStreamSocket@@SA_KXZ();
}

/*
==============
bdPlatformStreamSocket::bdPlatformStreamSocket
==============
*/

void __fastcall bdPlatformStreamSocket::bdPlatformStreamSocket(bdPlatformStreamSocket *this)
{
  ??0bdPlatformStreamSocket@@AEAA@XZ(this);
}

/*
==============
bdPlatformStreamSocket::bdPlatformStreamSocket
==============
*/
void bdPlatformStreamSocket::bdPlatformStreamSocket(bdPlatformStreamSocket *this)
{
  ;
}

/*
==============
bdPlatformStreamSocket::getBytesReceived
==============
*/
unsigned __int64 bdPlatformStreamSocket::getBytesReceived()
{
  return bdPlatformStreamSocket::m_totalBytesRecvd.m_value._My_val;
}

/*
==============
bdPlatformStreamSocket::getBytesSent
==============
*/
unsigned __int64 bdPlatformStreamSocket::getBytesSent()
{
  return bdPlatformStreamSocket::m_totalBytesSent.m_value._My_val;
}

