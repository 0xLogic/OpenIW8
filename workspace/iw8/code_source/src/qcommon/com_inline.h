/*
==============
Com_GetCodeTimeScale
==============
*/

double __fastcall Com_GetCodeTimeScale()
{
  double result; 

  *(float *)&result = ?Com_GetCodeTimeScale@@YAMXZ();
  return result;
}

/*
==============
Com_SetCodeTimeScale
==============
*/

void __fastcall Com_SetCodeTimeScale(const float timescale)
{
  ?Com_SetCodeTimeScale@@YAXM@Z(timescale);
}

/*
==============
Com_GetCodeTimeScale
==============
*/
float Com_GetCodeTimeScale()
{
  float v1; 

  Sys_CheckAcquireLock(&s_timescaleRWLock);
  AcquireSRWLockShared((PSRWLOCK)&s_timescaleRWLock);
  LODWORD(v1) = (unsigned int)com_codeTimeScale.timeFloat ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2));
  ReleaseSRWLockShared((PSRWLOCK)&s_timescaleRWLock);
  Sys_CheckReleaseLock(&s_timescaleRWLock);
  return v1;
}

/*
==============
Com_SetCodeTimeScale
==============
*/
void Com_SetCodeTimeScale(const float timescale)
{
  int v1; 

  if ( timescale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_inline.h", 47, ASSERT_TYPE_ASSERT, "(timescale > 0)", (const char *)&queryFormat, "timescale > 0") )
    __debugbreak();
  Sys_CheckAcquireLock(&s_timescaleRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
  s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_timescaleRWLock.writeThreadId )
  {
    v1 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v1, 0i64) )
      __debugbreak();
  }
  s_timescale_aab -= s_timescale_set_aab;
  s_timescaleRWLock.writeThreadId = 0;
  LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(LODWORD(timescale) ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
  ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
  Sys_CheckReleaseLock(&s_timescaleRWLock);
}

