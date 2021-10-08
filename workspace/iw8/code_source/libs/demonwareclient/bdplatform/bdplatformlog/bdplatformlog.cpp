/*
==============
bdLogSubscriber::addChannel
==============
*/

bool __fastcall bdLogSubscriber::addChannel(bdLogSubscriber *this, const char *const channel)
{
  return ?addChannel@bdLogSubscriber@@QEAA_NQEBD@Z(this, channel);
}

/*
==============
bdLogSubscriber::~bdLogSubscriber
==============
*/

void __fastcall bdLogSubscriber::~bdLogSubscriber(bdLogSubscriber *this)
{
  ??1bdLogSubscriber@@UEAA@XZ(this);
}

/*
==============
bdLogSubscriber::removeChannel
==============
*/

bool __fastcall bdLogSubscriber::removeChannel(bdLogSubscriber *this, const char *const channel)
{
  return ?removeChannel@bdLogSubscriber@@QEAA_NQEBD@Z(this, channel);
}

/*
==============
bdLogSubscriber::removeAllChannels
==============
*/

void __fastcall bdLogSubscriber::removeAllChannels(bdLogSubscriber *this)
{
  ?removeAllChannels@bdLogSubscriber@@QEAAXXZ(this);
}

/*
==============
bdLogSubscriber::bdLogSubscriber
==============
*/

void __fastcall bdLogSubscriber::bdLogSubscriber(bdLogSubscriber *this)
{
  ??0bdLogSubscriber@@QEAA@XZ(this);
}

/*
==============
bdLogSubscriber::logMessage
==============
*/

void __fastcall bdLogSubscriber::logMessage(bdLogSubscriber *this, const bdLogMessageType type, const char *const channelName, const char *const file, const char *const function, const unsigned int line, const char *const msg)
{
  ?logMessage@bdLogSubscriber@@QEBAXW4bdLogMessageType@@QEBD11I1@Z(this, type, channelName, file, function, line, msg);
}

/*
==============
bdLogMessage
==============
*/

void bdLogMessage(const bdLogMessageType type, const char *const baseChannel, const char *const channel, const char *const file, const char *const function, const unsigned int line, const char *const format, ...)
{
  ?bdLogMessage@@YAXW4bdLogMessageType@@QEBD111I1ZZ(type, baseChannel, channel, file, function, line, format);
}

/*
==============
bdLogSubscriber::publish
==============
*/

void __fastcall bdLogSubscriber::publish(bdLogSubscriber *this, const bdLogMessageType type, const char *const __formal, const char *const file, const char *const a5, const unsigned int line, const char *const msg)
{
  ?publish@bdLogSubscriber@@UEBAXW4bdLogMessageType@@QEBD11I1@Z(this, type, __formal, file, a5, line, msg);
}

/*
==============
bdLogSubscriber::bdLogSubscriber
==============
*/
void bdLogSubscriber::bdLogSubscriber(bdLogSubscriber *this)
{
  bdLinkable::bdLinkable(this);
  this->__vftable = (bdLogSubscriber_vtbl *)&bdLogSubscriber::`vftable';
  this->m_channels[0] = NULL;
  this->m_channels[1] = NULL;
  this->m_channels[2] = NULL;
  this->m_channels[3] = NULL;
  this->m_channels[4] = NULL;
}

/*
==============
bdLogSubscriber::~bdLogSubscriber
==============
*/
void bdLogSubscriber::~bdLogSubscriber(bdLogSubscriber *this)
{
  this->__vftable = (bdLogSubscriber_vtbl *)&bdLogSubscriber::`vftable';
  bdLinkable::~bdLinkable(this);
}

/*
==============
bdLogSubscriber::addChannel
==============
*/
__int64 bdLogSubscriber::addChannel(bdLogSubscriber *this, const char *const channel)
{
  unsigned __int8 v2; 
  __int64 v4; 

  v2 = 0;
  v4 = 0i64;
  while ( (unsigned int)v4 < 5 )
  {
    if ( !this->m_channels[v4] )
    {
      v2 = 1;
      this->m_channels[v4] = channel;
    }
    v4 = (unsigned int)(v4 + 1);
    if ( v2 )
    {
      if ( !bdLinkable::find(g_logSubscriberList, this) )
        bdLinkable::link(this, &g_logSubscriberList);
      return v2;
    }
  }
  return v2;
}

/*
==============
bdLogMessage
==============
*/
void bdLogMessage(const bdLogMessageType type, const char *const baseChannel, const char *const channel, const char *const file, const char *const function, const unsigned int line, const char *const format, ...)
{
  unsigned __int64 *v11; 
  int v12; 
  bdLogSubscriber *i; 
  const char **m_channels; 
  __int64 v15; 
  char buf[256]; 
  char Buffer[1024]; 
  va_list va; 

  va_start(va, format);
  if ( g_logSubscriberList )
  {
    memset_0(Buffer, 0, sizeof(Buffer));
    v11 = j___local_stdio_printf_options();
    v12 = __stdio_common_vsprintf(*v11 | 2, NULL, 0i64, format, NULL, va);
    __stdio_common_vsnprintf_s(*v11, Buffer, 0x400ui64, 0xFFFFFFFFFFFFFFFFui64, format, NULL, va);
    if ( v12 < 0 )
      v12 = -1;
    if ( (unsigned int)v12 >= 0x400 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformLog", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformlog\\bdplatformlog.cpp", "bdLogMessage", 0x107u, "Message truncated.", 0i64);
    if ( baseChannel && channel )
    {
      if ( bdSnprintf(buf, 0x100ui64, "%s%s", baseChannel, channel) >= 256 )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformLog", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformlog\\bdplatformlog.cpp", "bdLogMessage", 0x115u, "Channel name truncated: %s%s", baseChannel, channel);
      baseChannel = buf;
    }
    for ( i = g_logSubscriberList; i; i = (bdLogSubscriber *)bdLinkable::getNext(i) )
    {
      m_channels = i->m_channels;
      v15 = 5i64;
      do
      {
        if ( *m_channels )
        {
          if ( bdDelimSubstr(baseChannel, *m_channels, "\\/") )
            i->publish(i, type, baseChannel, file, function, line, Buffer);
        }
        ++m_channels;
        --v15;
      }
      while ( v15 );
    }
  }
}

/*
==============
bdLogSubscriber::logMessage
==============
*/
void bdLogSubscriber::logMessage(bdLogSubscriber *this, const bdLogMessageType type, const char *const channelName, const char *const file, const char *const function, const unsigned int line, const char *const msg)
{
  const char **m_channels; 
  __int64 v12; 

  m_channels = this->m_channels;
  v12 = 5i64;
  do
  {
    if ( *m_channels )
    {
      if ( bdDelimSubstr(channelName, *m_channels, "\\/") )
        this->publish(this, type, channelName, file, function, line, msg);
    }
    ++m_channels;
    --v12;
  }
  while ( v12 );
}

/*
==============
bdLogSubscriber::publish
==============
*/
void bdLogSubscriber::publish(bdLogSubscriber *this, const bdLogMessageType type, const char *const __formal, const char *const file, const char *const __formala, const unsigned int line, const char *const msg)
{
  const char *v8; 
  char *v9; 
  const char *v10; 
  char *v11; 
  const char *v12; 
  char buf[128]; 
  char v14[2048]; 

  if ( type == BD_LOG_WARNING )
  {
    v8 = "WARN";
  }
  else
  {
    v8 = "ERR ";
    if ( type != BD_LOG_ERROR )
      v8 = "INFO";
  }
  v9 = strrchr_0(file, 92);
  if ( v9 || (v9 = strrchr_0(file, 47)) != NULL )
    v10 = v9 + 1;
  else
    v10 = file;
  v11 = strrchr_0(v10, 47);
  if ( v11 )
    v12 = v11 + 1;
  else
    v12 = v10;
  bdSnprintf(buf, 0x80ui64, "%s(%u):", v12, line);
  if ( (unsigned __int64)bdSnprintf(v14, 0x800ui64, "%-30s [%s] %s\n", buf, v8, msg) >= 0x800 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformLog", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformlog\\bdplatformlog.cpp", "bdLogSubscriber::publish", 0xBAu, "Log message truncated.");
  Sys_XB3OutputDebugString(v14);
}

/*
==============
bdLogSubscriber::removeAllChannels
==============
*/
void bdLogSubscriber::removeAllChannels(bdLogSubscriber *this)
{
  this->m_channels[0] = NULL;
  this->m_channels[1] = NULL;
  this->m_channels[2] = NULL;
  this->m_channels[3] = NULL;
  this->m_channels[4] = NULL;
  bdLinkable::unlink(this);
}

/*
==============
bdLogSubscriber::removeChannel
==============
*/
__int64 bdLogSubscriber::removeChannel(bdLogSubscriber *this, const char *const channel)
{
  unsigned __int8 v2; 
  const char **m_channels; 
  int v6; 
  __int64 v7; 

  v2 = 0;
  m_channels = this->m_channels;
  v6 = 0;
  v7 = 5i64;
  do
  {
    if ( *m_channels )
    {
      if ( v2 || _strcmpi(*m_channels, channel) )
      {
        ++v6;
      }
      else
      {
        v2 = 1;
        *m_channels = NULL;
      }
    }
    ++m_channels;
    --v7;
  }
  while ( v7 );
  if ( !v6 )
    bdLinkable::unlink(this);
  return v2;
}

