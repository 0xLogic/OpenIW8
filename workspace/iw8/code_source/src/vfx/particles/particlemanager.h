/*
==============
ParticleManager::UnlockHandleManager
==============
*/

void __fastcall ParticleManager::UnlockHandleManager(ParticleManager *this)
{
  ?UnlockHandleManager@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::UnlockCommandStreamProcess
==============
*/

void __fastcall ParticleManager::UnlockCommandStreamProcess(ParticleManager *this)
{
  ?UnlockCommandStreamProcess@ParticleManager@@AEAAXXZ(this);
}

/*
==============
Particle_GetParticleSystemPointerUnsafe
==============
*/

ParticleSystem *__fastcall Particle_GetParticleSystemPointerUnsafe(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle)
{
  return ?Particle_GetParticleSystemPointerUnsafe@@YAPEAVParticleSystem@@W4LocalClientNum_t@@W4ParticleSystemHandle@@@Z(localClientNum, particleSystemHandle);
}

/*
==============
ParticleManager::UnlockReadHandleManager
==============
*/

void __fastcall ParticleManager::UnlockReadHandleManager(ParticleManager *this)
{
  ?UnlockReadHandleManager@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::LockCommandStreamAdd
==============
*/

void __fastcall ParticleManager::LockCommandStreamAdd(ParticleManager *this)
{
  ?LockCommandStreamAdd@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleSystemHandleManager::restoreEnd
==============
*/

void __fastcall ParticleSystemHandleManager::restoreEnd(ParticleSystemHandleManager *this)
{
  ?restoreEnd@ParticleSystemHandleManager@@QEAAXXZ(this);
}

/*
==============
ParticleSystemHandleManager::releaseRestore
==============
*/

void __fastcall ParticleSystemHandleManager::releaseRestore(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  ?releaseRestore@ParticleSystemHandleManager@@QEAAXW4ParticleSystemHandle@@@Z(this, handle);
}

/*
==============
ParticleManager::GetParticleManager
==============
*/

ParticleManager *__fastcall ParticleManager::GetParticleManager(LocalClientNum_t localClientNum)
{
  return ?GetParticleManager@ParticleManager@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ParticleManager::LockReadHandleManager
==============
*/

void __fastcall ParticleManager::LockReadHandleManager(ParticleManager *this)
{
  ?LockReadHandleManager@ParticleManager@@QEAAXXZ(this);
}

/*
==============
ParticleManager::LockCommandStreamProcess
==============
*/

void __fastcall ParticleManager::LockCommandStreamProcess(ParticleManager *this)
{
  ?LockCommandStreamProcess@ParticleManager@@AEAAXXZ(this);
}

/*
==============
ParticleSystemHandleManager::incGeneration
==============
*/

void __fastcall ParticleSystemHandleManager::incGeneration(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  ?incGeneration@ParticleSystemHandleManager@@QEAAXW4ParticleSystemHandle@@@Z(this, handle);
}

/*
==============
ParticleManager::GetParticleManager
==============
*/
ParticleManager *ParticleManager::GetParticleManager(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &g_particleManager[v1];
}

/*
==============
Particle_GetParticleSystemPointerUnsafe
==============
*/
ParticleSystem *Particle_GetParticleSystemPointerUnsafe(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle)
{
  __int64 v2; 

  v2 = ((__int64)(int)localClientNum << 12) + (particleSystemHandle & 0xFFF);
  if ( g_particleSystemsGeneration[v2].__all32 != particleSystemHandle && particleSystemHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  return g_particleSystems[0][v2];
}

/*
==============
ParticleManager::LockCommandStreamAdd
==============
*/
void ParticleManager::LockCommandStreamAdd(ParticleManager *this)
{
  volatile int *p_m_commandStreamAccessCheck; 

  p_m_commandStreamAccessCheck = &this->m_commandStreamAccessCheck;
  if ( (((_BYTE)this - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &this->m_commandStreamAccessCheck) )
    __debugbreak();
  if ( *p_m_commandStreamAccessCheck )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 774, ASSERT_TYPE_ASSERT, "(Sys_InterlockedLoad( &m_commandStreamAccessCheck ) == 0)", (const char *)&queryFormat, "Sys_InterlockedLoad( &m_commandStreamAccessCheck ) == 0") )
      __debugbreak();
  }
}

/*
==============
ParticleManager::LockCommandStreamProcess
==============
*/
void ParticleManager::LockCommandStreamProcess(ParticleManager *this)
{
  volatile int *p_m_commandStreamAccessCheck; 

  p_m_commandStreamAccessCheck = &this->m_commandStreamAccessCheck;
  if ( (((_BYTE)this - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_commandStreamAccessCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_commandStreamAccessCheck, 1, 0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 785, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_commandStreamAccessCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_commandStreamAccessCheck, 1, 0 ) == 0") )
      __debugbreak();
  }
}

/*
==============
ParticleManager::LockReadHandleManager
==============
*/
void ParticleManager::LockReadHandleManager(ParticleManager *this)
{
  FastCriticalSection *p_m_handleManagerLock; 

  p_m_handleManagerLock = &this->m_handleManagerLock;
  if ( this->m_handleManagerLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
    __debugbreak();
  _InterlockedIncrement(&p_m_handleManagerLock->readCount);
  while ( p_m_handleManagerLock->writeCount )
    Sys_Sleep(0);
}

/*
==============
ParticleManager::UnlockCommandStreamProcess
==============
*/
void ParticleManager::UnlockCommandStreamProcess(ParticleManager *this)
{
  volatile int *p_m_commandStreamAccessCheck; 

  p_m_commandStreamAccessCheck = &this->m_commandStreamAccessCheck;
  if ( (((_BYTE)this - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_commandStreamAccessCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_commandStreamAccessCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 789, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_commandStreamAccessCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_commandStreamAccessCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
ParticleManager::UnlockHandleManager
==============
*/
void ParticleManager::UnlockHandleManager(ParticleManager *this)
{
  volatile int *p_writeCount; 
  TempThreadPriority v3; 
  int v4; 
  int v5; 
  TempThreadPriority tempPriority; 

  p_writeCount = &this->m_handleManagerLock.writeCount;
  if ( this->m_handleManagerLock.writeCount != 1 )
  {
    v5 = 1;
    v4 = *p_writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v4, v5) )
      __debugbreak();
  }
  if ( this->m_handleManagerLock.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  v3 = this->m_handleManagerLock.tempPriority;
  this->m_handleManagerLock.writeThreadId = 0;
  tempPriority = v3;
  if ( ((unsigned __int8)p_writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
ParticleManager::UnlockReadHandleManager
==============
*/
void ParticleManager::UnlockReadHandleManager(ParticleManager *this)
{
  FastCriticalSection *p_m_handleManagerLock; 
  volatile int readCount; 

  p_m_handleManagerLock = &this->m_handleManagerLock;
  if ( this->m_handleManagerLock.readCount <= 0 )
  {
    readCount = p_m_handleManagerLock->readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
    __debugbreak();
  _InterlockedDecrement(&p_m_handleManagerLock->readCount);
}

/*
==============
ParticleSystemHandleManager::incGeneration
==============
*/
void ParticleSystemHandleManager::incGeneration(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  __int16 v2; 
  int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = handle;
  if ( !this->m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 189, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v4 = v2 & 0xFFF;
  if ( (v2 & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 193, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
    __debugbreak();
  v5 = v2 & 0xFFF;
  if ( (g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_localClientNum + v5].__all32 & 0xFFF) != v4 )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 195, ASSERT_TYPE_ASSERT, "( ( g_particleSystemsGeneration[m_localClientNum][handleImpl._index]._index == handleImpl._index ) )", "( handleImpl._index ) = %u", v6) )
      __debugbreak();
  }
  g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_localClientNum + v5].__all32 += 4096;
}

/*
==============
ParticleSystemHandleManager::releaseRestore
==============
*/
void ParticleSystemHandleManager::releaseRestore(ParticleSystemHandleManager *this, ParticleSystemHandle handle)
{
  __int16 v2; 
  int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = handle;
  if ( !this->m_numAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 202, ASSERT_TYPE_ASSERT, "(!empty())", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  if ( !this->m_restoring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 203, ASSERT_TYPE_ASSERT, "(m_restoring)", (const char *)&queryFormat, "m_restoring") )
    __debugbreak();
  v4 = v2 & 0xFFF;
  if ( (v2 & 0xFFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 207, ASSERT_TYPE_ASSERT, "(handleImpl._index > 0)", (const char *)&queryFormat, "handleImpl._index > 0") )
    __debugbreak();
  if ( this->m_freelistDequeue != 1 )
  {
    LODWORD(v6) = this->m_freelistDequeue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 209, ASSERT_TYPE_ASSERT, "( ( m_freelistDequeue == 1 ) )", "( m_freelistDequeue ) = %u", v6) )
      __debugbreak();
  }
  if ( this->m_freelistEnqueue != 4095 )
  {
    LODWORD(v6) = this->m_freelistEnqueue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 210, ASSERT_TYPE_ASSERT, "( ( m_freelistEnqueue == PARTICLE_SYSTEM_COUNT_MAX - 1 ) )", "( m_freelistEnqueue ) = %u", v6) )
      __debugbreak();
  }
  v5 = v2 & 0xFFF;
  if ( (g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_localClientNum + v5].__all32 & 0xFFF) != v4 )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 211, ASSERT_TYPE_ASSERT, "( ( g_particleSystemsGeneration[m_localClientNum][handleImpl._index]._index == handleImpl._index ) )", "( handleImpl._index ) = %u", v6) )
      __debugbreak();
  }
  g_particleSystems[(unsigned __int64)this->m_localClientNum][v5] = NULL;
  g_particleSystemsGeneration[4096 * (unsigned __int64)this->m_localClientNum + v5].__all32 += 4096;
  --this->m_numAllocated;
}

/*
==============
ParticleSystemHandleManager::restoreEnd
==============
*/
void ParticleSystemHandleManager::restoreEnd(ParticleSystemHandleManager *this)
{
  unsigned int m_freelistDequeue; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int m_freelistEnqueue; 
  __int64 v10; 

  if ( !this->m_restoring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 241, ASSERT_TYPE_ASSERT, "(m_restoring)", (const char *)&queryFormat, "m_restoring") )
    __debugbreak();
  m_freelistDequeue = this->m_freelistDequeue;
  this->m_restoring = 0;
  if ( m_freelistDequeue != 1 )
  {
    LODWORD(v10) = m_freelistDequeue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 243, ASSERT_TYPE_ASSERT, "( ( m_freelistDequeue == 1 ) )", "( m_freelistDequeue ) = %u", v10) )
      __debugbreak();
  }
  if ( this->m_freelistEnqueue != 4095 )
  {
    LODWORD(v10) = this->m_freelistEnqueue;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 244, ASSERT_TYPE_ASSERT, "( ( m_freelistEnqueue == PARTICLE_SYSTEM_COUNT_MAX - 1 ) )", "( m_freelistEnqueue ) = %u", v10) )
      __debugbreak();
  }
  v3 = 1;
  *(_QWORD *)&this->m_freelistDequeue = 0i64;
  v4 = 1i64;
  v5 = -1;
  do
  {
    v6 = (unsigned __int64)this->m_localClientNum << 12;
    if ( !*((_QWORD *)&g_particleSystems[0][v6] + v4) )
    {
      if ( !this->m_freelistDequeue )
        this->m_freelistDequeue = v3;
      if ( v5 != -1 )
      {
        v7 = v6 + v5;
        LODWORD(g_particleSystems[0][v7]) = v3;
        HIDWORD(g_particleSystems[0][v7]) = 0;
      }
      v5 = v3;
      this->m_freelistEnqueue = v3;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x1000 );
  if ( !this->m_freelistDequeue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 269, ASSERT_TYPE_ASSERT, "(m_freelistDequeue != 0)", (const char *)&queryFormat, "m_freelistDequeue != 0") )
    __debugbreak();
  if ( !this->m_freelistEnqueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 270, ASSERT_TYPE_ASSERT, "(m_freelistEnqueue != 0)", (const char *)&queryFormat, "m_freelistEnqueue != 0") )
    __debugbreak();
  v8 = this->m_freelistDequeue;
  m_freelistEnqueue = this->m_freelistEnqueue;
  if ( this->m_numAllocated == 4094 )
  {
    if ( v8 == m_freelistEnqueue )
      return;
  }
  else if ( v8 != m_freelistEnqueue )
  {
    return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 273, ASSERT_TYPE_ASSERT, "(( full() && m_freelistDequeue == m_freelistEnqueue ) || ( !full() && m_freelistDequeue != m_freelistEnqueue ))", (const char *)&queryFormat, "( full() && m_freelistDequeue == m_freelistEnqueue ) || ( !full() && m_freelistDequeue != m_freelistEnqueue )") )
    __debugbreak();
}

