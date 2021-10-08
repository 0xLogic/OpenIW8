/*
==============
bdPlatformThread::threadExit
==============
*/

void __fastcall bdPlatformThread::threadExit(unsigned int ret)
{
  ?threadExit@bdPlatformThread@@SAXI@Z(ret);
}

/*
==============
bdPlatformThread::bdPlatformThread
==============
*/

void __fastcall bdPlatformThread::bdPlatformThread(bdPlatformThread *this)
{
  ??0bdPlatformThread@@AEAA@XZ(this);
}

/*
==============
bdPlatformThread::getThreadName
==============
*/

bool __fastcall bdPlatformThread::getThreadName(void **handle, char *threadName)
{
  return ?getThreadName@bdPlatformThread@@SA_NAEAPEAXPEAD@Z(handle, threadName);
}

/*
==============
bdPlatformThread::allocateStackPointer
==============
*/

void *__fastcall bdPlatformThread::allocateStackPointer(void *stackPointer, unsigned int stackSize)
{
  return ?allocateStackPointer@bdPlatformThread@@SAPEAXPEAXI@Z(stackPointer, stackSize);
}

/*
==============
bdPlatformThread::bdPlatformThread
==============
*/
void bdPlatformThread::bdPlatformThread(bdPlatformThread *this)
{
  ;
}

/*
==============
bdPlatformThread::allocateStackPointer
==============
*/
void *bdPlatformThread::allocateStackPointer(void *stackPointer, unsigned int stackSize)
{
  return 0i64;
}

/*
==============
bdPlatformThread::getThreadName
==============
*/
bool bdPlatformThread::getThreadName(void **handle, char *threadName)
{
  bool result; 

  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  result = 0;
  if ( threadName )
    *threadName = 0;
  return result;
}

/*
==============
bdPlatformThread::threadExit
==============
*/
void bdPlatformThread::threadExit(unsigned int ret)
{
  ;
}

