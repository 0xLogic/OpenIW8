/*
==============
NetListener::Destroy
==============
*/

void __fastcall NetListener::Destroy(NetListener *this)
{
  ?Destroy@NetListener@@QEAAXXZ(this);
}

/*
==============
NetListener::HasEvents
==============
*/

bool __fastcall NetListener::HasEvents(NetListener *this)
{
  return ?HasEvents@NetListener@@QEBA_NXZ(this);
}

/*
==============
NetListener::Wait
==============
*/

unsigned int __fastcall NetListener::Wait(NetListener *this, const int timeout)
{
  return ?Wait@NetListener@@QEAAIH@Z(this, timeout);
}

/*
==============
NetListener::Init
==============
*/

bool __fastcall NetListener::Init(NetListener *this, const unsigned __int64 socket)
{
  return ?Init@NetListener@@QEAA_N_K@Z(this, socket);
}

/*
==============
NetListener::Signal
==============
*/

void __fastcall NetListener::Signal(NetListener *this, const NetEvent event)
{
  ?Signal@NetListener@@QEAAXW4NetEvent@@@Z(this, event);
}

/*
==============
NetListener::Consume
==============
*/

void __fastcall NetListener::Consume(NetListener *this, const NetEvent event)
{
  ?Consume@NetListener@@QEAAXW4NetEvent@@@Z(this, event);
}

/*
==============
NetListener::Consume
==============
*/
void NetListener::Consume(NetListener *this, const NetEvent event)
{
  this->m_events &= ~(unsigned __int8)event;
}

/*
==============
NetListener::Destroy
==============
*/
void NetListener::Destroy(NetListener *this)
{
  Sys_CloseEvent(&this->m_recvEvent);
  Sys_CloseEvent(&this->m_sendEvent);
}

/*
==============
NetListener::HasEvents
==============
*/
bool NetListener::HasEvents(NetListener *this)
{
  return this->m_events != 0;
}

/*
==============
NetListener::Init
==============
*/
bool NetListener::Init(NetListener *this, const unsigned __int64 socket)
{
  unsigned int Error; 
  bool result; 

  Sys_CreateEvent(0, 0, &this->m_sendEvent);
  Sys_CreateEvent(0, 0, &this->m_recvEvent);
  if ( WSAEventSelect(socket, this->m_recvEvent, 1) )
  {
    Error = WSAGetLastError();
    Com_Printf(25, "WSAEventSelect failed with %d\n", Error);
    return 0;
  }
  else
  {
    result = 1;
    this->m_events = 0;
    this->m_sendSignaled = 0;
  }
  return result;
}

/*
==============
NetListener::Signal
==============
*/
void NetListener::Signal(NetListener *this, const NetEvent event)
{
  if ( event != SEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_listener_ms.cpp", 54, ASSERT_TYPE_ASSERT, "(event == NetEvent::SEND)", (const char *)&queryFormat, "event == NetEvent::SEND") )
    __debugbreak();
  this->m_sendSignaled = 1;
  Sys_SetEvent(&this->m_sendEvent);
}

/*
==============
NetListener::Wait
==============
*/
__int64 NetListener::Wait(NetListener *this, const int timeout)
{
  signed int v3; 
  unsigned int Error; 
  HANDLE Handles[3]; 

  Handles[0] = this->m_recvEvent;
  Handles[1] = this->m_sendEvent;
  v3 = WaitForMultipleObjects(2u, Handles, 0, timeout);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      this->m_events |= 1u;
    }
    else
    {
      if ( v3 > 127 )
      {
        if ( v3 <= 129 )
        {
          Com_PrintError(25, "WaitForMultipleObjects indicated recv event was abandoned\n", (unsigned int)(v3 - 128));
          this->m_events |= 8u;
          goto LABEL_11;
        }
        if ( v3 == 258 )
        {
          this->m_events |= 4u;
          goto LABEL_11;
        }
      }
      Error = WSAGetLastError();
      Com_PrintError(25, "WaitForMultipleObjects failed for recv/send events with %d\n", Error);
      this->m_events |= 8u;
    }
  }
  else
  {
    this->m_events |= 2u;
  }
LABEL_11:
  if ( this->m_sendSignaled )
  {
    this->m_events |= 1u;
    this->m_sendSignaled = 0;
  }
  return this->m_events;
}

