/*
==============
bdThread::wakeupJoiningThread
==============
*/

void __fastcall bdThread::wakeupJoiningThread(bdThread *this)
{
  ?wakeupJoiningThread@bdThread@@QEAAXXZ(this);
}

/*
==============
bdThread::getPriority
==============
*/

int __fastcall bdThread::getPriority(bdThread *this)
{
  return ?getPriority@bdThread@@QEAAHXZ(this);
}

/*
==============
bdThread::start
==============
*/

bool __fastcall bdThread::start(bdThread *this, const void *args, const unsigned __int64 size, const char *threadName)
{
  return ?start@bdThread@@QEAA_NPEBX_KPEBD@Z(this, args, size, threadName);
}

/*
==============
bdThread::getThreadHandle
==============
*/

void *__fastcall bdThread::getThreadHandle(bdThread *this)
{
  return ?getThreadHandle@bdThread@@QEAAPEAXXZ(this);
}

/*
==============
bdThread::~bdThread
==============
*/

void __fastcall bdThread::~bdThread(bdThread *this)
{
  ??1bdThread@@IEAA@XZ(this);
}

/*
==============
bdThread::cancel
==============
*/

void __fastcall bdThread::cancel(bdThread *this)
{
  ?cancel@bdThread@@QEAAXXZ(this);
}

/*
==============
bdThread::bdThread
==============
*/

void __fastcall bdThread::bdThread(bdThread *this, bdRunnable *runnable, int priority, unsigned int stackSize, int coreAffinity)
{
  ??0bdThread@@QEAA@PEAVbdRunnable@@HIH@Z(this, runnable, priority, stackSize, coreAffinity);
}

/*
==============
bdThread::stop
==============
*/

void __fastcall bdThread::stop(bdThread *this)
{
  ?stop@bdThread@@QEAAXXZ(this);
}

/*
==============
bdThread::threadProc
==============
*/

int __fastcall bdThread::threadProc(bdThreadArgs *args)
{
  return ?threadProc@bdThread@@KAHPEAUbdThreadArgs@@@Z(args);
}

/*
==============
bdThread::isRunning
==============
*/

bool __fastcall bdThread::isRunning(bdThread *this)
{
  return ?isRunning@bdThread@@QEBA_NXZ(this);
}

/*
==============
bdThread::cleanup
==============
*/

void __fastcall bdThread::cleanup(bdThread *this)
{
  ?cleanup@bdThread@@QEAAXXZ(this);
}

/*
==============
bdThread::getThreadName
==============
*/

bool __fastcall bdThread::getThreadName(bdThread *this, char *threadName)
{
  return ?getThreadName@bdThread@@QEAA_NPEAD@Z(this, threadName);
}

/*
==============
bdThread::getRunnable
==============
*/

bdRunnable *__fastcall bdThread::getRunnable(bdThread *this)
{
  return ?getRunnable@bdThread@@QEAAPEAVbdRunnable@@XZ(this);
}

/*
==============
bdThread::setPriority
==============
*/

void __fastcall bdThread::setPriority(bdThread *this, int priority)
{
  ?setPriority@bdThread@@QEAAXH@Z(this, priority);
}

/*
==============
bdThread::join
==============
*/

void __fastcall bdThread::join(bdThread *this)
{
  ?join@bdThread@@QEAAXXZ(this);
}

/*
==============
bdThread::bdThread
==============
*/
void bdThread::bdThread(bdThread *this, bdRunnable *runnable, int priority, unsigned int stackSize, int coreAffinity)
{
  this->m_runnable = runnable;
  this->m_threadArgs.m_args = NULL;
  this->m_threadArgs.m_runnable = NULL;
  this->m_threadArgs.m_thread = NULL;
  this->m_coreAffinity = coreAffinity;
  this->m_threadArgs.m_runnable = this->m_runnable;
  this->m_isRunning = 0;
  this->m_stackSize = stackSize;
  this->m_startPriority = priority;
  this->m_stackPointer = NULL;
  this->m_threadArgs.m_thread = this;
}

/*
==============
bdThread::~bdThread
==============
*/
void bdThread::~bdThread(bdThread *this)
{
  void *m_args; 
  void *m_stackPointer; 

  m_args = this->m_threadArgs.m_args;
  if ( m_args )
    bdMemory::deallocate(m_args);
  m_stackPointer = this->m_stackPointer;
  if ( m_stackPointer )
    bdMemory::alignedDeallocate(m_stackPointer);
  bdPlatformThread::deleteThread(&this->m_handle);
  this->m_runnable = NULL;
}

/*
==============
bdThread::cancel
==============
*/
void bdThread::cancel(bdThread *this)
{
  void *m_args; 

  if ( this->m_isRunning )
    bdPlatformThread::cancelThread(&this->m_handle);
  m_args = this->m_threadArgs.m_args;
  if ( m_args )
  {
    bdMemory::deallocate(m_args);
    this->m_threadArgs.m_args = NULL;
  }
}

/*
==============
bdThread::cleanup
==============
*/
void bdThread::cleanup(bdThread *this)
{
  void *m_args; 
  void *m_stackPointer; 

  m_args = this->m_threadArgs.m_args;
  if ( m_args )
  {
    bdMemory::deallocate(m_args);
    this->m_threadArgs.m_args = NULL;
  }
  m_stackPointer = this->m_stackPointer;
  if ( m_stackPointer )
    bdMemory::alignedDeallocate(m_stackPointer);
  bdPlatformThread::deleteThread(&this->m_handle);
  this->m_runnable = NULL;
  bdMemory::deallocate(this);
}

/*
==============
bdThread::getPriority
==============
*/
int bdThread::getPriority(bdThread *this)
{
  return bdPlatformThread::getPriority(&this->m_handle);
}

/*
==============
bdThread::getRunnable
==============
*/
bdRunnable *bdThread::getRunnable(bdThread *this)
{
  return this->m_runnable;
}

/*
==============
bdThread::getThreadHandle
==============
*/
void *bdThread::getThreadHandle(bdThread *this)
{
  return this->m_handle;
}

/*
==============
bdThread::getThreadName
==============
*/
bool bdThread::getThreadName(bdThread *this, char *threadName)
{
  return bdPlatformThread::getThreadName(&this->m_handle, threadName);
}

/*
==============
bdThread::isRunning
==============
*/
_BOOL8 bdThread::isRunning(bdThread *this)
{
  return this->m_isRunning;
}

/*
==============
bdThread::join
==============
*/
void bdThread::join(bdThread *this)
{
  void *m_args; 

  bdPlatformThread::joinThread(&this->m_handle);
  m_args = this->m_threadArgs.m_args;
  if ( m_args )
  {
    bdMemory::deallocate(m_args);
    this->m_threadArgs.m_args = NULL;
  }
}

/*
==============
bdThread::setPriority
==============
*/
void bdThread::setPriority(bdThread *this, int priority)
{
  bdPlatformThread::setPriority(&this->m_handle, priority);
}

/*
==============
bdThread::start
==============
*/
bool bdThread::start(bdThread *this, const void *args, const unsigned __int64 size, const char *threadName)
{
  bdRunnable *m_runnable; 
  bool result; 
  void *v10; 
  void *__formal; 
  int m_startPriority; 

  m_runnable = this->m_runnable;
  result = m_runnable && !this->m_isRunning;
  this->m_threadArgs.m_args = NULL;
  if ( result )
  {
    if ( size )
    {
      v10 = bdMemory::allocate(size);
      this->m_threadArgs.m_args = v10;
      memcpy_0(v10, args, size);
      m_runnable = this->m_runnable;
    }
    this->m_isRunning = 1;
    bdRunnable::start(m_runnable);
    __formal = bdPlatformThread::allocateStackPointer(this->m_stackPointer, this->m_stackSize);
    m_startPriority = this->m_startPriority;
    this->m_stackPointer = __formal;
    return bdPlatformThread::createThread((unsigned int (__fastcall *)(void *))bdThread::threadProc, &this->m_threadArgs, &this->m_handle, m_startPriority, this->m_stackSize, __formal, this->m_coreAffinity, threadName) && bdPlatformThread::startThread(&this->m_handle, &this->m_threadArgs, 0x18u) && bdPlatformThread::nameThread(&this->m_handle, threadName);
  }
  return result;
}

/*
==============
bdThread::stop
==============
*/
void bdThread::stop(bdThread *this)
{
  this->m_runnable->stop(this->m_runnable);
}

/*
==============
bdThread::threadProc
==============
*/
__int64 bdThread::threadProc(bdThreadArgs *args)
{
  unsigned int v2; 

  v2 = args->m_runnable->run(args->m_runnable, args->m_args);
  args->m_thread->m_isRunning = 0;
  bdPlatformThread::threadExit(v2);
  return v2;
}

/*
==============
bdThread::wakeupJoiningThread
==============
*/
void bdThread::wakeupJoiningThread(bdThread *this)
{
  this->m_isRunning = 0;
}

