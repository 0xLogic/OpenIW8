/*
==============
bdPlatformThread::cancelThread
==============
*/

void __fastcall bdPlatformThread::cancelThread(void **__formal)
{
  ?cancelThread@bdPlatformThread@@SAXAEAPEAX@Z(__formal);
}

/*
==============
bdPlatformThread::getPriority
==============
*/

int __fastcall bdPlatformThread::getPriority()
{
  return ?getPriority@bdPlatformThread@@SAHXZ();
}

/*
==============
bdPlatformThread::getThreadHandle
==============
*/

HANDLE __stdcall bdPlatformThread::getThreadHandle()
{
  return ?getThreadHandle@bdPlatformThread@@SAPEAXXZ();
}

/*
==============
bdPlatformThread::startThread
==============
*/

bool __fastcall bdPlatformThread::startThread(void **handle, void *__formal, unsigned int a3)
{
  return ?startThread@bdPlatformThread@@SA_NAEAPEAXPEAXI@Z(handle, __formal, a3);
}

/*
==============
bdPlatformThread::getPriority
==============
*/

int __fastcall bdPlatformThread::getPriority(void **handle)
{
  return ?getPriority@bdPlatformThread@@SAHAEAPEAX@Z(handle);
}

/*
==============
bdPlatformThread::setPriority
==============
*/

void __fastcall bdPlatformThread::setPriority(void **handle, const int priority)
{
  ?setPriority@bdPlatformThread@@SAXAEAPEAXH@Z(handle, priority);
}

/*
==============
bdPlatformThread::deleteThread
==============
*/

void __fastcall bdPlatformThread::deleteThread(void **handle)
{
  ?deleteThread@bdPlatformThread@@SAXAEAPEAX@Z(handle);
}

/*
==============
bdPlatformThread::createThread
==============
*/

bool __fastcall bdPlatformThread::createThread(unsigned int (__fastcall *threadProc)(void *), void *args, void **handle, int priority, unsigned int stackSize, void *__formal, int coreAffinity, const char *a8)
{
  return ?createThread@bdPlatformThread@@SA_NP6AKPEAX@Z0AEAPEAXHI0HPEBD@Z(threadProc, args, handle, priority, stackSize, __formal, coreAffinity, a8);
}

/*
==============
bdPlatformThread::nameThread
==============
*/

bool __fastcall bdPlatformThread::nameThread(void **handle, const char *threadName)
{
  return ?nameThread@bdPlatformThread@@SA_NAEAPEAXPEBD@Z(handle, threadName);
}

/*
==============
bdPlatformThread::joinThread
==============
*/

void __fastcall bdPlatformThread::joinThread(void **handle)
{
  ?joinThread@bdPlatformThread@@SAXAEAPEAX@Z(handle);
}

/*
==============
bdPlatformThread::cancelThread
==============
*/
void bdPlatformThread::cancelThread(void **__formal)
{
  ;
}

/*
==============
bdPlatformThread::createThread
==============
*/
bool bdPlatformThread::createThread(unsigned int (*threadProc)(void *), void *args, void **handle, int priority, unsigned int stackSize, void *__formal, int coreAffinity)
{
  HANDLE Thread; 

  Thread = CreateThread(NULL, stackSize, threadProc, args, 4u, NULL);
  *handle = Thread;
  if ( Thread )
  {
    SetThreadAffinityMask(Thread, 1i64 << coreAffinity);
    SetThreadPriority(*handle, priority);
    LOBYTE(Thread) = 1;
  }
  return (char)Thread;
}

/*
==============
bdPlatformThread::deleteThread
==============
*/
void bdPlatformThread::deleteThread(void **handle)
{
  CloseHandle(*handle);
}

/*
==============
bdPlatformThread::getPriority
==============
*/
int bdPlatformThread::getPriority(void **handle)
{
  return GetThreadPriority(*handle);
}

/*
==============
bdPlatformThread::getPriority
==============
*/
int bdPlatformThread::getPriority()
{
  HANDLE CurrentThread; 

  CurrentThread = GetCurrentThread();
  return GetThreadPriority(CurrentThread);
}

/*
==============
bdPlatformThread::getThreadHandle
==============
*/

HANDLE __stdcall bdPlatformThread::getThreadHandle()
{
  return GetCurrentThread();
}

/*
==============
bdPlatformThread::joinThread
==============
*/
void bdPlatformThread::joinThread(void **handle)
{
  WaitForSingleObject(*handle, 0xFFFFFFFF);
}

/*
==============
bdPlatformThread::nameThread
==============
*/
char bdPlatformThread::nameThread(void **handle, const char *threadName)
{
  void *v4; 
  DWORD ThreadId; 
  ULONG_PTR Arguments[2]; 
  DWORD v8; 
  int v9; 

  v4 = *handle;
  if ( !v4 )
    return 0;
  GetThreadContext(v4, NULL);
  ThreadId = GetThreadId(*handle);
  LODWORD(Arguments[0]) = 4096;
  Arguments[1] = (ULONG_PTR)threadName;
  v8 = ThreadId;
  v9 = 0;
  RaiseException(0x406D1388u, 0, 3u, Arguments);
  return 1;
}

/*
==============
bdPlatformThread::setPriority
==============
*/
void bdPlatformThread::setPriority(void **handle, const int priority)
{
  SetThreadPriority(*handle, priority);
}

/*
==============
bdPlatformThread::startThread
==============
*/
bool bdPlatformThread::startThread(void **handle, void *__formal, unsigned int a3)
{
  return ResumeThread(*handle) != -1;
}

