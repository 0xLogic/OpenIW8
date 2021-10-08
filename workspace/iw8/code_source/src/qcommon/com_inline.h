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
  unsigned int v2; 

  Sys_CheckAcquireLock(&s_timescaleRWLock);
  AcquireSRWLockShared((PSRWLOCK)&s_timescaleRWLock);
  v2 = (unsigned int)com_codeTimeScale.timeFloat ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2));
  ReleaseSRWLockShared((PSRWLOCK)&s_timescaleRWLock);
  Sys_CheckReleaseLock(&s_timescaleRWLock);
  __asm { vmovss  xmm0, [rsp+28h+arg_0] }
  return *(float *)&_XMM0;
}

/*
==============
Com_SetCodeTimeScale
==============
*/

void __fastcall Com_SetCodeTimeScale(double timescale, double _XMM1_8)
{
  int v3; 
  int v4; 

  __asm
  {
    vmovss  [rsp+arg_0], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  Sys_CheckAcquireLock(&s_timescaleRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
  s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_timescaleRWLock.writeThreadId )
  {
    v3 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v3, 0i64) )
      __debugbreak();
  }
  s_timescale_aab -= s_timescale_set_aab;
  s_timescaleRWLock.writeThreadId = 0;
  LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(v4 ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
  ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
  Sys_CheckReleaseLock(&s_timescaleRWLock);
}

