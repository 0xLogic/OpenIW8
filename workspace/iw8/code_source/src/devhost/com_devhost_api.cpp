/*
==============
Com_DevhostRegisterCallback
==============
*/

void __fastcall Com_DevhostRegisterCallback(int system, bool (__fastcall *callback)(ComDevhostReadHandle *))
{
  ?Com_DevhostRegisterCallback@@YAXHP6A_NAEAUComDevhostReadHandle@@@Z@Z(system, callback);
}

/*
==============
Com_DevhostInit
==============
*/

void __fastcall Com_DevhostInit(ComDevhostHarness *m_harness, ComDevhostConfig *config)
{
  ?Com_DevhostInit@@YAXPEAUComDevhostHarness@@PEAUComDevhostConfig@@@Z(m_harness, config);
}

/*
==============
Com_GetDevhostPortOffset
==============
*/

int __fastcall Com_GetDevhostPortOffset()
{
  return ?Com_GetDevhostPortOffset@@YAHXZ();
}

/*
==============
Com_DevhostUpdate
==============
*/

void __fastcall Com_DevhostUpdate(int mask)
{
  ?Com_DevhostUpdate@@YAXH@Z(mask);
}

/*
==============
Com_DevhostSendBody
==============
*/

void __fastcall Com_DevhostSendBody(int system, unsigned int msgSize, const char *msg)
{
  ?Com_DevhostSendBody@@YAXHIPEBD@Z(system, msgSize, msg);
}

/*
==============
Com_DevhostSendBodyBuffered
==============
*/

void __fastcall Com_DevhostSendBodyBuffered(int system, unsigned int msgSize, const char *msg)
{
  ?Com_DevhostSendBodyBuffered@@YAXHIPEBD@Z(system, msgSize, msg);
}

/*
==============
ScopedDevHostMessage::~ScopedDevHostMessage
==============
*/

void __fastcall ScopedDevHostMessage::~ScopedDevHostMessage(ScopedDevHostMessage *this)
{
  ??1ScopedDevHostMessage@@QEAA@XZ(this);
}

/*
==============
Com_DevhostSendMessage
==============
*/

void __fastcall Com_DevhostSendMessage(int system, unsigned int msgType, unsigned int msgSize, const char *msg)
{
  ?Com_DevhostSendMessage@@YAXHIIPEBD@Z(system, msgType, msgSize, msg);
}

/*
==============
Com_DevhostShutdown
==============
*/

void Com_DevhostShutdown(void)
{
  ?Com_DevhostShutdown@@YAXXZ();
}

/*
==============
ScopedDevHostMessageBuffered::~ScopedDevHostMessageBuffered
==============
*/

void __fastcall ScopedDevHostMessageBuffered::~ScopedDevHostMessageBuffered(ScopedDevHostMessageBuffered *this)
{
  ??1ScopedDevHostMessageBuffered@@QEAA@XZ(this);
}

/*
==============
Com_DevhostSystemActive
==============
*/

bool __fastcall Com_DevhostSystemActive(int system)
{
  return ?Com_DevhostSystemActive@@YA_NH@Z(system);
}

/*
==============
Com_DevhostGetInfo
==============
*/

void __fastcall Com_DevhostGetInfo(ComDevhostIinfo *info)
{
  ?Com_DevhostGetInfo@@YAXAEAUComDevhostIinfo@@@Z(info);
}

/*
==============
ScopedDevHostMessage::ScopedDevHostMessage
==============
*/

void __fastcall ScopedDevHostMessage::ScopedDevHostMessage(ScopedDevHostMessage *this, int system, unsigned int msgType, unsigned int msgSize)
{
  ??0ScopedDevHostMessage@@QEAA@HII@Z(this, system, msgType, msgSize);
}

/*
==============
ScopedDevHostMessageBuffered::ScopedDevHostMessageBuffered
==============
*/

void __fastcall ScopedDevHostMessageBuffered::ScopedDevHostMessageBuffered(ScopedDevHostMessageBuffered *this, int system, unsigned int msgType)
{
  ??0ScopedDevHostMessageBuffered@@QEAA@HI@Z(this, system, msgType);
}

/*
==============
ScopedDevHostMessage::ScopedDevHostMessage
==============
*/
void ScopedDevHostMessage::ScopedDevHostMessage(ScopedDevHostMessage *this, int system, unsigned int msgType, unsigned int msgSize)
{
  unsigned __int8 v5; 
  unsigned __int8 data[3]; 
  unsigned int v8; 

  this->m_system = system;
  v5 = msgType;
  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 127, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  g_devhost.m_harness->EnterCriticalSection();
  g_devhost.m_debugMessageSize = msgSize;
  g_devhost.m_debugMessageWritten = 0;
  g_devhost.m_debugMessageSystem = system;
  if ( Com_DevhostSystemActive(system) )
  {
    data[0] = system;
    data[1] = v5;
    data[2] = g_devhost.m_EndianTool.m_isBigEndian;
    if ( !g_devhost.m_EndianTool.m_isBigEndian )
      msgSize = _byteswap_ulong(msgSize);
    v8 = msgSize;
    Com_DevHost_Buffer_Write(data, 7);
    ++g_devhost.m_debugHeaderCount;
  }
}

/*
==============
ScopedDevHostMessageBuffered::ScopedDevHostMessageBuffered
==============
*/
void ScopedDevHostMessageBuffered::ScopedDevHostMessageBuffered(ScopedDevHostMessageBuffered *this, int system, unsigned int msgType)
{
  this->m_system = system;
  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 180, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  g_devhost.m_harness->EnterCriticalSection();
  g_devhost.m_debugMessageSystem = system;
  g_devhost.m_debugBufferedMessageSize = 0;
  g_devhost.m_debugMessageWritten = 0;
  g_devhost.m_debugBufferedMessageType = msgType;
}

/*
==============
ScopedDevHostMessage::~ScopedDevHostMessage
==============
*/
void ScopedDevHostMessage::~ScopedDevHostMessage(ScopedDevHostMessage *this)
{
  if ( this->m_system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 168, ASSERT_TYPE_SANITY, "( m_system < g_devhost.m_channelNum )", (const char *)&queryFormat, "m_system < g_devhost.m_channelNum", -2i64) )
    __debugbreak();
  if ( g_devhost.m_debugMessageSystem != this->m_system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 169, ASSERT_TYPE_SANITY, "( g_devhost.m_debugMessageSystem == m_system )", (const char *)&queryFormat, "g_devhost.m_debugMessageSystem == m_system") )
    __debugbreak();
  if ( g_devhost.m_debugMessageWritten != g_devhost.m_debugMessageSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 170, ASSERT_TYPE_SANITY, "( g_devhost.m_debugMessageWritten == g_devhost.m_debugMessageSize )", (const char *)&queryFormat, "g_devhost.m_debugMessageWritten == g_devhost.m_debugMessageSize") )
    __debugbreak();
  g_devhost.m_debugMessageWritten = 0;
  g_devhost.m_debugMessageSize = 0;
  g_devhost.m_harness->LeaveCriticalSection();
}

/*
==============
ScopedDevHostMessageBuffered::~ScopedDevHostMessageBuffered
==============
*/
void ScopedDevHostMessageBuffered::~ScopedDevHostMessageBuffered(ScopedDevHostMessageBuffered *this)
{
  ScopedDevHostMessage v2; 

  if ( this->m_system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 208, ASSERT_TYPE_SANITY, "( m_system < g_devhost.m_channelNum )", (const char *)&queryFormat, "m_system < g_devhost.m_channelNum", -2i64) )
    __debugbreak();
  ScopedDevHostMessage::ScopedDevHostMessage(&v2, this->m_system, g_devhost.m_debugBufferedMessageType, g_devhost.m_debugBufferedMessageSize);
  Com_DevhostSendBody(this->m_system, g_devhost.m_debugBufferedMessageSize, g_devhost.m_msgBuffer);
  g_devhost.m_debugBufferedMessageSize = 0;
  g_devhost.m_harness->LeaveCriticalSection();
  ScopedDevHostMessage::~ScopedDevHostMessage(&v2);
}

/*
==============
Com_DevhostCallback
==============
*/
char Com_DevhostCallback(ComDevhostReadHandle *handle)
{
  unsigned __int8 desbuf; 
  ScopedDevHostMessage v4; 

  if ( handle->m_channel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 16, ASSERT_TYPE_SANITY, "( handle.m_channel == COM_DEVHOST_SYSTEM_DEVHOST )", (const char *)&queryFormat, "handle.m_channel == COM_DEVHOST_SYSTEM_DEVHOST", -2i64) )
    __debugbreak();
  ComDevhostReadHandle::Read(handle, &desbuf, 1u);
  if ( handle->m_command == 1 )
  {
    g_devhost.m_subscriptions |= 1 << desbuf;
    return 1;
  }
  else if ( handle->m_command == 2 )
  {
    g_devhost.m_subscriptions &= ~(1 << desbuf);
    return 1;
  }
  else if ( handle->m_command == 4 )
  {
    if ( g_devhost.m_channelNum <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 221, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
      __debugbreak();
    ScopedDevHostMessage::ScopedDevHostMessage(&v4, 0, 4u, 0);
    Com_DevhostSendBody(0, 0, NULL);
    ScopedDevHostMessage::~ScopedDevHostMessage(&v4);
    return 1;
  }
  else
  {
    if ( handle->m_command == 14 )
      g_devhost.m_harness->SendGameInfo();
    return 1;
  }
}

/*
==============
Com_DevhostGetInfo
==============
*/
void Com_DevhostGetInfo(ComDevhostIinfo *info)
{
  info->m_maxSendSize = 0x4000;
  info->m_maxRecvSize = 0x4000;
}

/*
==============
Com_DevhostInit
==============
*/
void Com_DevhostInit(ComDevhostHarness *m_harness, ComDevhostConfig *config)
{
  int v4; 
  unsigned __int8 *v5; 

  m_harness->EnterCriticalSection();
  memset_0(&g_devhost, 0, sizeof(g_devhost));
  g_devhost.m_EndianTool.m_endianBuffer = 1;
  g_devhost.m_channelNum = config->m_channelNum;
  g_devhost.m_harness = m_harness;
  g_devhost.m_port = config->m_port;
  g_devhost.m_listenSocket = -1i64;
  g_devhost.m_clientSocket = -1i64;
  g_devhost.m_subscriptions = 1;
  v4 = config->m_allocMemPoolSize - 8 * g_devhost.m_channelNum;
  v5 = (unsigned __int8 *)&config->m_allocMemPool[2 * g_devhost.m_channelNum];
  g_devhost.m_systemCallbacks = (bool (__fastcall **)(ComDevhostReadHandle *))config->m_allocMemPool;
  Com_DevHost_Buffer_Init(v5, v4, config->m_channelNum);
  g_devhost.m_harness->EnterCriticalSection();
  if ( g_devhost.m_channelNum <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 243, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  *g_devhost.m_systemCallbacks = (bool (__fastcall *)(ComDevhostReadHandle *))Com_DevhostCallback;
  g_devhost.m_harness->LeaveCriticalSection();
  g_devhost.m_harness->LeaveCriticalSection();
}

/*
==============
Com_DevhostRegisterCallback
==============
*/
void Com_DevhostRegisterCallback(int system, bool (*callback)(ComDevhostReadHandle *))
{
  __int64 v3; 

  v3 = system;
  g_devhost.m_harness->EnterCriticalSection();
  if ( (int)v3 >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 243, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  g_devhost.m_systemCallbacks[v3] = callback;
  g_devhost.m_harness->LeaveCriticalSection();
}

/*
==============
Com_DevhostSendBody
==============
*/
void Com_DevhostSendBody(int system, unsigned int msgSize, const char *msg)
{
  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 156, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  if ( g_devhost.m_debugMessageSystem != system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 157, ASSERT_TYPE_SANITY, "( g_devhost.m_debugMessageSystem == system )", (const char *)&queryFormat, "g_devhost.m_debugMessageSystem == system") )
    __debugbreak();
  g_devhost.m_debugMessageWritten += msgSize;
  if ( Com_DevhostSystemActive(system) )
    Com_DevHost_Buffer_Write((const unsigned __int8 *)msg, msgSize);
}

/*
==============
Com_DevhostSendBodyBuffered
==============
*/
void Com_DevhostSendBodyBuffered(int system, unsigned int msgSize, const char *msg)
{
  size_t v4; 

  v4 = msgSize;
  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 195, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  if ( g_devhost.m_debugMessageSystem != system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 196, ASSERT_TYPE_SANITY, "( g_devhost.m_debugMessageSystem == system )", (const char *)&queryFormat, "g_devhost.m_debugMessageSystem == system") )
    __debugbreak();
  if ( (unsigned int)(v4 + g_devhost.m_debugBufferedMessageSize) >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 197, ASSERT_TYPE_SANITY, "( g_devhost.m_debugBufferedMessageSize + msgSize < (1<<14) )", (const char *)&queryFormat, "g_devhost.m_debugBufferedMessageSize + msgSize < COM_DEVHOST_MSG_BUFFER_SIZE") )
    __debugbreak();
  if ( Com_DevhostSystemActive(system) )
  {
    memcpy_0(&g_devhost.m_msgBuffer[g_devhost.m_debugBufferedMessageSize], msg, v4);
    g_devhost.m_debugBufferedMessageSize += v4;
  }
}

/*
==============
Com_DevhostSendMessage
==============
*/
void Com_DevhostSendMessage(int system, unsigned int msgType, unsigned int msgSize, const char *msg)
{
  ScopedDevHostMessage v8; 

  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 221, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum", -2i64) )
    __debugbreak();
  ScopedDevHostMessage::ScopedDevHostMessage(&v8, system, msgType, msgSize);
  Com_DevhostSendBody(system, msgSize, msg);
  ScopedDevHostMessage::~ScopedDevHostMessage(&v8);
}

/*
==============
Com_DevhostShutdown
==============
*/
void Com_DevhostShutdown(void)
{
  ComDevhostState m_state; 

  g_devhost.m_harness->EnterCriticalSection();
  m_state = g_devhost.m_state;
  g_devhost.m_shutdownInitiated = 1;
  if ( g_devhost.m_state < COM_DEVHOST_STATE_CLOSING )
    m_state = COM_DEVHOST_STATE_CLOSING;
  g_devhost.m_state = m_state;
  g_devhost.m_harness->LeaveCriticalSection();
}

/*
==============
Com_DevhostSystemActive
==============
*/
bool Com_DevhostSystemActive(int system)
{
  unsigned int m_subscriptions; 

  if ( system >= g_devhost.m_channelNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost_api.cpp", 230, ASSERT_TYPE_SANITY, "( system < g_devhost.m_channelNum )", (const char *)&queryFormat, "system < g_devhost.m_channelNum") )
    __debugbreak();
  m_subscriptions = g_devhost.m_subscriptions;
  return _bittest((const int *)&m_subscriptions, system) && g_devhost.m_state == COM_DEVHOST_STATE_ACTIVE;
}

/*
==============
Com_DevhostUpdate
==============
*/
void Com_DevhostUpdate(int mask)
{
  int m_channelNum; 
  signed int i; 

  if ( !g_devhost.m_pollingSpawned )
  {
    if ( g_devhost.m_anyDataReceived )
    {
      g_devhost.m_pollingSpawned = 1;
      g_devhost.m_harness->StartDevHostPollProcess();
    }
    else if ( (mask & 1) != 0 )
    {
      Com_DevhostPoll();
    }
  }
  m_channelNum = g_devhost.m_channelNum;
  for ( i = 0; i < m_channelNum; ++i )
  {
    if ( _bittest(&mask, i) )
    {
      Com_DevHost_Process_Msgs(i);
      m_channelNum = g_devhost.m_channelNum;
    }
  }
}

/*
==============
Com_GetDevhostPortOffset
==============
*/
__int64 Com_GetDevhostPortOffset()
{
  return (unsigned int)(g_devhost.m_port - 5235);
}

