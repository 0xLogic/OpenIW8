/*
==============
LockMutex
==============
*/

void __fastcall LockMutex(void *mutex)
{
  ?LockMutex@@YAXPEAX@Z(mutex);
}

/*
==============
FreeMutex
==============
*/

void __fastcall FreeMutex(void *mutex)
{
  ?FreeMutex@@YAXPEAX@Z(mutex);
}

/*
==============
UnlockMutex
==============
*/

BOOL __stdcall UnlockMutex(HANDLE hMutex)
{
  return ?UnlockMutex@@YAXPEAX@Z(hMutex);
}

/*
==============
NewMutex
==============
*/

void *__fastcall NewMutex()
{
  return ?NewMutex@@YAPEAXXZ();
}

/*
==============
FreeMutex
==============
*/
void FreeMutex(void *mutex)
{
  ReleaseMutex(mutex);
  CloseHandle(mutex);
}

/*
==============
LockMutex
==============
*/
void LockMutex(void *mutex)
{
  WaitForSingleObject(mutex, 0xFFFFFFFF);
}

/*
==============
NewMutex
==============
*/
HANDLE NewMutex()
{
  return CreateMutexW(NULL, 0, NULL);
}

/*
==============
UnlockMutex
==============
*/

BOOL __stdcall UnlockMutex(HANDLE hMutex)
{
  return ReleaseMutex(hMutex);
}

