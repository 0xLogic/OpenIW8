/*
==============
bdGetHostByName::run
==============
*/

unsigned int __fastcall bdGetHostByName::run(bdGetHostByName *this, void *args)
{
  return ?run@bdGetHostByName@@MEAAIPEAX@Z(this, args);
}

/*
==============
bdGetHostByName::quit
==============
*/

void __fastcall bdGetHostByName::quit(bdGetHostByName *this)
{
  ?quit@bdGetHostByName@@QEAAXXZ(this);
}

/*
==============
bdGetHostByName::quit
==============
*/
void bdGetHostByName::quit(bdGetHostByName *this)
{
  bdGetHostByName::bdStatus m_status; 
  bdThread *m_thread; 

  m_status = this->m_status;
  if ( m_status )
  {
    if ( m_status == BD_LOOKUP_PENDING )
      bdGetHostByName::cancelLookup(this);
    m_thread = this->m_thread;
    if ( m_thread )
    {
      bdThread::join(m_thread);
      bdThread::cleanup(this->m_thread);
      this->m_thread = NULL;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname-win32.cpp", "bdGetHostByName::quit", 0x45u, "Thread pointer already null during quit, this is unexpected.");
    }
    this->m_status = BD_LOOKUP_UNINITIALIZED;
  }
}

/*
==============
bdGetHostByName::run
==============
*/
__int64 bdGetHostByName::run(bdGetHostByName *this, void *args)
{
  unsigned int HostByName; 

  if ( this->m_status == BD_LOOKUP_PENDING )
  {
    HostByName = bdPlatformSocket::getHostByName((const char *const)args, this->m_addresses, 4u, this->m_handle);
    this->m_numAddresses = HostByName;
    this->m_status = (HostByName == 0) + 2;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "gethostbyname", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdnet\\bdgethostbyname\\bdgethostbyname-win32.cpp", "bdGetHostByName::run", 0x26u, "Host name lookup thread cannot be started unless a request is pending.");
  }
  return 0i64;
}

