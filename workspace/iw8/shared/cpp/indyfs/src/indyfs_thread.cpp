/*
==============
indyfs_thread_set_current_affinity
==============
*/

int __fastcall indyfs_thread_set_current_affinity(unsigned __int64 coreAffinity)
{
  return ?indyfs_thread_set_current_affinity@@YAH_K@Z(coreAffinity);
}

/*
==============
indyfs_thread_create
==============
*/

int __fastcall indyfs_thread_create(unsigned __int64 stackSize, unsigned int (__fastcall *startRoutine)(void *), void *arg, const char *name, void **returnThread)
{
  return ?indyfs_thread_create@@YAH_KP6AIPEAX@Z1PEBDPEAPEAX@Z(stackSize, startRoutine, arg, name, returnThread);
}

/*
==============
indyfs_thread_join
==============
*/

int __fastcall indyfs_thread_join(void *thread)
{
  return ?indyfs_thread_join@@YAHPEAX@Z(thread);
}

/*
==============
indyfs_thread_sleep
==============
*/

void __fastcall indyfs_thread_sleep(int msDuration)
{
  ?indyfs_thread_sleep@@YAXH@Z(msDuration);
}

/*
==============
indyfs_thread_create
==============
*/

int __fastcall indyfs_thread_create(unsigned __int64 stackSize, unsigned int (__fastcall *startRoutine)(void *), void *arg, const char *name, unsigned __int64 coreAffinity, void **returnThread)
{
  return ?indyfs_thread_create@@YAH_KP6AIPEAX@Z1PEBD0PEAPEAX@Z(stackSize, startRoutine, arg, name, coreAffinity, returnThread);
}

/*
==============
indyfs_thread_get_current
==============
*/

HANDLE __stdcall indyfs_thread_get_current()
{
  return ?indyfs_thread_get_current@@YAPEAXXZ();
}

/*
==============
indyfs_thread_end_current
==============
*/

void indyfs_thread_end_current(void)
{
  ?indyfs_thread_end_current@@YAXXZ();
}

/*
==============
indyfs_thread_yield
==============
*/

BOOL __stdcall indyfs_thread_yield()
{
  return ?indyfs_thread_yield@@YAXXZ();
}

/*
==============
indyfs_set_thread_name
==============
*/
void indyfs_set_thread_name(void *handle, const char *threadName)
{
  HMODULE ModuleHandleW; 
  FARPROC ProcAddress; 
  wchar_t Dest[128]; 

  mbstowcs(Dest, threadName, 0x80ui64);
  Dest[127] = 0;
  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "SetThreadDescription");
    if ( ProcAddress )
      ((void (__fastcall *)(void *, wchar_t *))ProcAddress)(handle, Dest);
    else
      indyfs_log_message(Started, "Failed to assign thread name (%s)!  Please update to Windows 10 Creators Update 2017, or newer, to have thread names associated with debugging, profiling, and crash dumps.\n", threadName);
  }
}

/*
==============
indyfs_thread_create
==============
*/
__int64 indyfs_thread_create(unsigned __int64 stackSize, unsigned int (*startRoutine)(void *), void *arg, const char *name, unsigned __int64 coreAffinity, void **returnThread)
{
  void *v7; 

  v7 = (void *)_beginthreadex(NULL, stackSize, startRoutine, arg, 4u, NULL);
  *returnThread = v7;
  indyfs_set_thread_name(v7, name);
  SetThreadAffinityMask(returnThread, 1i64 << coreAffinity);
  ResumeThread(returnThread);
  return 0i64;
}

/*
==============
indyfs_thread_create
==============
*/
__int64 indyfs_thread_create(unsigned __int64 stackSize, unsigned int (*startRoutine)(void *), void *arg, const char *name, void **returnThread)
{
  void *v6; 

  v6 = (void *)_beginthreadex(NULL, stackSize, startRoutine, arg, 0, NULL);
  *returnThread = v6;
  indyfs_set_thread_name(v6, name);
  return 0i64;
}

/*
==============
indyfs_thread_end_current
==============
*/
void indyfs_thread_end_current(void)
{
  _endthreadex(0);
}

/*
==============
indyfs_thread_get_current
==============
*/

HANDLE __stdcall indyfs_thread_get_current()
{
  return GetCurrentThread();
}

/*
==============
indyfs_thread_join
==============
*/
DWORD indyfs_thread_join(void *thread)
{
  DWORD result; 
  DWORD LastError; 

  result = WaitForSingleObject(thread, 0xFFFFFFFF);
  if ( result )
  {
    if ( result == 128 )
    {
      indyfs_log_message(Error, "Failed to join to thread. WAIT_ABANDONED");
    }
    else
    {
      LastError = GetLastError();
      indyfs_log_message(Error, "Failed to join to thread - %d", LastError);
    }
    return -1;
  }
  return result;
}

/*
==============
indyfs_thread_set_current_affinity
==============
*/
__int64 indyfs_thread_set_current_affinity(unsigned __int64 coreAffinity)
{
  HANDLE CurrentThread; 
  DWORD LastError; 

  CurrentThread = GetCurrentThread();
  if ( SetThreadAffinityMask(CurrentThread, coreAffinity) )
    return 0i64;
  LastError = GetLastError();
  indyfs_log_message(Error, "Failed to set current thread affinity - %d", LastError);
  return 0xFFFFFFFFi64;
}

/*
==============
indyfs_thread_sleep
==============
*/
void indyfs_thread_sleep(int msDuration)
{
  IndyFsScopedEvent v2; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v2, "Thread", "Sleep");
  Sleep(msDuration);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v2);
}

/*
==============
indyfs_thread_yield
==============
*/

BOOL __stdcall indyfs_thread_yield()
{
  return SwitchToThread();
}

