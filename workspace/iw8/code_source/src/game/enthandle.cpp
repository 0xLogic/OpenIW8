/*
==============
UsableHandle::readFromSave
==============
*/

void __fastcall UsableHandle::readFromSave(UsableHandle *this, const int index)
{
  ?readFromSave@UsableHandle@@QEAAXH@Z(this, index);
}

/*
==============
UsableHandle::RemoveHandleInfo
==============
*/

void __fastcall UsableHandle::RemoveHandleInfo(UsableHandle *this)
{
  ?RemoveHandleInfo@UsableHandle@@AEAAXXZ(this);
}

/*
==============
EntHandleDissociate
==============
*/

void __fastcall EntHandleDissociate(gentity_s *ent)
{
  ?EntHandleDissociate@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
UsableHandle::setEntFromWorker
==============
*/

void __fastcall UsableHandle::setEntFromWorker(UsableHandle *this, const gentity_s *const ent)
{
  ?setEntFromWorker@UsableHandle@@QEAAXQEBUgentity_s@@@Z(this, ent);
}

/*
==============
UsableHandle::getUseCount
==============
*/

int __fastcall UsableHandle::getUseCount(UsableHandle *this)
{
  return ?getUseCount@UsableHandle@@QEBAHXZ(this);
}

/*
==============
SentientHandle::setSentient
==============
*/

void __fastcall SentientHandle::setSentient(SentientHandle *this, sentient_s *sentient)
{
  ?setSentient@SentientHandle@@QEAAXPEAUsentient_s@@@Z(this, sentient);
}

/*
==============
UsableHandle::shouldUpdateEnt
==============
*/

bool __fastcall UsableHandle::shouldUpdateEnt(UsableHandle *this, const gentity_s *const ent)
{
  return ?shouldUpdateEnt@UsableHandle@@AEBA_NQEBUgentity_s@@@Z(this, ent);
}

/*
==============
EntHandle::Init
==============
*/

void EntHandle::Init(void)
{
  ?Init@EntHandle@@SAXXZ();
}

/*
==============
ScriptableHandleDissociate
==============
*/

void __fastcall ScriptableHandleDissociate(const unsigned int scriptableIndex)
{
  ?ScriptableHandleDissociate@@YAXI@Z(scriptableIndex);
}

/*
==============
UsableHandle::writeToSave
==============
*/

int __fastcall UsableHandle::writeToSave(UsableHandle *this)
{
  return ?writeToSave@UsableHandle@@QEBAHXZ(this);
}

/*
==============
UsableHandle::setEnt
==============
*/

void __fastcall UsableHandle::setEnt(UsableHandle *this, const gentity_s *const ent)
{
  ?setEnt@UsableHandle@@QEAAXQEBUgentity_s@@@Z(this, ent);
}

/*
==============
UsableHandle::Init
==============
*/

void UsableHandle::Init(void)
{
  ?Init@UsableHandle@@SAXXZ();
}

/*
==============
UsableHandle::clear
==============
*/

void __fastcall UsableHandle::clear(UsableHandle *this)
{
  ?clear@UsableHandle@@QEAAXXZ(this);
}

/*
==============
SentientHandleDissociate
==============
*/

void __fastcall SentientHandleDissociate(sentient_s *sentient)
{
  ?SentientHandleDissociate@@YAXPEAUsentient_s@@@Z(sentient);
}

/*
==============
UsableHandle::setUsableFromWorker
==============
*/

void __fastcall UsableHandle::setUsableFromWorker(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, unsigned __int8 newData)
{
  ?setUsableFromWorker@UsableHandle@@QEAAXW4UsableClass@@IE@Z(this, newClass, newIndex, newData);
}

/*
==============
UsableHandle::setUsableInfo
==============
*/

void __fastcall UsableHandle::setUsableInfo(UsableHandle *this, const UsableClass usableClass, const unsigned int usableIndex, const unsigned __int8 usableData, const unsigned __int16 infoIndex)
{
  ?setUsableInfo@UsableHandle@@AEAAXW4UsableClass@@IEG@Z(this, usableClass, usableIndex, usableData, infoIndex);
}

/*
==============
EntHandle::setEnt
==============
*/

void __fastcall EntHandle::setEnt(EntHandle *this, const gentity_s *ent)
{
  ?setEnt@EntHandle@@QEAAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
UsableHandle::setUsable
==============
*/

void __fastcall UsableHandle::setUsable(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, unsigned __int8 newData)
{
  ?setUsable@UsableHandle@@QEAAXW4UsableClass@@IE@Z(this, newClass, newIndex, newData);
}

/*
==============
UsableHandle::shouldUpdateUsable
==============
*/

bool __fastcall UsableHandle::shouldUpdateUsable(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, const unsigned __int8 newData)
{
  return ?shouldUpdateUsable@UsableHandle@@AEBA_NW4UsableClass@@IE@Z(this, newClass, newIndex, newData);
}

/*
==============
EntHandle::Shutdown
==============
*/

void EntHandle::Shutdown(void)
{
  ?Shutdown@EntHandle@@SAXXZ();
}

/*
==============
SentientHandle::Init
==============
*/

void SentientHandle::Init(void)
{
  ?Init@SentientHandle@@SAXXZ();
}

/*
==============
AddEntHandleInfo
==============
*/
char AddEntHandleInfo(EntHandleList *entHandleList, void *handle, unsigned int *outInfoIndex)
{
  __int64 v3; 
  signed __int32 CurrentThreadContext; 
  unsigned int v9; 
  EntHandleInfo *v10; 
  unsigned int next; 
  unsigned __int16 infoIndex; 
  unsigned __int16 *p_next; 

  v3 = s_entHandleInfoHead;
  if ( !s_entHandleInfoHead )
    return 0;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_entHandleInfoOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 282, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
    __debugbreak();
  v9 = s_usedEntHandle + 1;
  v10 = &s_entHandleInfoArray[v3];
  s_usedEntHandle = v9;
  if ( s_maxUsedEntHandle > v9 )
    v9 = s_maxUsedEntHandle;
  next = v10->next;
  v10->handle = handle;
  infoIndex = entHandleList->infoIndex;
  s_entHandleInfoHead = next;
  s_maxUsedEntHandle = v9;
  if ( infoIndex )
  {
    p_next = &s_entHandleInfoArray[infoIndex].next;
    v10->next = *p_next;
    v10->prev = infoIndex;
    s_entHandleInfoArray[*p_next].prev = v3;
    *p_next = v3;
  }
  else
  {
    v10->next = v3;
    v10->prev = v3;
    entHandleList->infoIndex = v3;
  }
  if ( ((unsigned __int64)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange(&s_entHandleInfoOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 313, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx") )
    __debugbreak();
  *outInfoIndex = v3;
  return 1;
}

/*
==============
EntHandleDissociate
==============
*/
void EntHandleDissociate(gentity_s *ent)
{
  __int16 EntityIndex; 

  EntityIndex = G_GetEntityIndex(ent);
  EntHandleDissociateInternal(&s_entitiesHandleList[EntityIndex]);
}

/*
==============
EntHandleDissociateInternal
==============
*/
void EntHandleDissociateInternal(EntHandleList *entHandleList)
{
  __int64 infoIndex; 
  signed __int32 CurrentThreadContext; 
  unsigned int next; 
  EntHandleInfo *v5; 
  bool v6; 
  unsigned __int16 v7; 
  __int64 prev; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  infoIndex = entHandleList->infoIndex;
  if ( entHandleList->infoIndex )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 158, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
      __debugbreak();
    if ( ((unsigned __int8)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_entHandleInfoOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 159, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
      __debugbreak();
    if ( (unsigned int)infoIndex >= 0x1000 )
    {
      v11 = 4096;
      LODWORD(v9) = infoIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndexHead ) < (unsigned)( 4096 )", "infoIndexHead doesn't index ENT_HANDLE_COUNT\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    entHandleList->infoIndex = 0;
    next = infoIndex;
    while ( 1 )
    {
      v5 = &s_entHandleInfoArray[next];
      if ( !v5->handle )
      {
        LODWORD(v10) = next;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 170, ASSERT_TYPE_ASSERT, "(info->handle)", "%s\n\tinfoIndex: %d, info: %p", "info->handle", v10, &s_entHandleInfoArray[next]) )
          __debugbreak();
      }
      *(_DWORD *)v5->handle = 0;
      v6 = s_usedEntHandle == 0;
      v5->handle = NULL;
      if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 177, ASSERT_TYPE_ASSERT, "( s_usedEntHandle )", (const char *)&queryFormat, "s_usedEntHandle") )
        __debugbreak();
      --s_usedEntHandle;
      next = v5->next;
      if ( next == (_DWORD)infoIndex )
        break;
      if ( next >= 0x1000 )
      {
        LODWORD(v10) = 4096;
        LODWORD(v9) = v5->next;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 185, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( 4096 )", "infoIndex doesn't index ENT_HANDLE_COUNT\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
    }
    v7 = s_entHandleInfoHead;
    prev = s_entHandleInfoArray[infoIndex].prev;
    s_entHandleInfoHead = infoIndex;
    s_entHandleInfoArray[prev].next = v7;
    if ( ((unsigned __int64)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( CurrentThreadContext != _InterlockedCompareExchange(&s_entHandleInfoOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 195, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx") )
      __debugbreak();
  }
}

/*
==============
EntHandle_Lock
==============
*/
__int64 EntHandle_Lock()
{
  __int64 result; 

  while ( 1 )
  {
    if ( ((unsigned __int64)&s_entHandleInfoLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoLock) )
      __debugbreak();
    result = (unsigned int)_InterlockedCompareExchange(&s_entHandleInfoLock, 1, 0);
    if ( !(_DWORD)result )
      break;
    Sys_Sleep(0);
  }
  return result;
}

/*
==============
EntHandle_Unlock
==============
*/
char EntHandle_Unlock()
{
  signed __int32 v0; 

  if ( ((unsigned __int8)&s_entHandleInfoLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoLock) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_entHandleInfoLock, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 60, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_entHandleInfoLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoLock, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
EntHandle::Init
==============
*/
void EntHandle::Init(void)
{
  signed __int32 CurrentThreadContext; 
  unsigned int v1; 
  EntHandleInfo *v2; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 74, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_entHandleInfoOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 75, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
    __debugbreak();
  v1 = 1;
  v2 = &s_entHandleInfoArray[1];
  do
  {
    v2->handle = NULL;
    v2->next = ++v1;
    ++v2;
  }
  while ( v1 < 0x1000 );
  s_entHandleInfoArray[4095].next = 0;
  s_entHandleInfoHead = 1;
  memset_0(s_entitiesHandleList, 0, sizeof(s_entitiesHandleList));
  s_usedEntHandle = 0;
  if ( ((unsigned __int64)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange(&s_entHandleInfoOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 96, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx") )
    __debugbreak();
}

/*
==============
SentientHandle::Init
==============
*/
void SentientHandle::Init(void)
{
  memset_0(s_sentientsHandleList, 0, sizeof(s_sentientsHandleList));
}

/*
==============
UsableHandle::Init
==============
*/
void UsableHandle::Init(void)
{
  memset_0(s_scriptableUsableHandleList, 0, sizeof(s_scriptableUsableHandleList));
}

/*
==============
RemoveEntHandleInfo
==============
*/
void RemoveEntHandleInfo(EntHandleList *entHandleList, unsigned int oldInfoIndex)
{
  __int64 v3; 
  signed __int32 CurrentThreadContext; 
  unsigned __int16 next; 
  EntHandleInfo *v6; 
  bool v7; 
  int prev; 
  __int64 v9; 

  if ( oldInfoIndex )
  {
    v3 = oldInfoIndex;
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    if ( ((unsigned __int8)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_entHandleInfoOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 233, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
      __debugbreak();
    if ( entHandleList->infoIndex == (_DWORD)v3 )
    {
      next = 0;
      if ( s_entHandleInfoArray[v3].next != (_DWORD)v3 )
        next = s_entHandleInfoArray[v3].next;
      entHandleList->infoIndex = next;
    }
    v6 = &s_entHandleInfoArray[v3];
    if ( !v6->handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 245, ASSERT_TYPE_ASSERT, "(info->handle)", "%s\n\toldInfoIndex: %d, info: %p", "info->handle", v3, v6) )
      __debugbreak();
    v7 = s_usedEntHandle == 0;
    v6->handle = NULL;
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 247, ASSERT_TYPE_ASSERT, "( s_usedEntHandle )", (const char *)&queryFormat, "s_usedEntHandle") )
      __debugbreak();
    prev = v6->prev;
    v9 = v6->next;
    --s_usedEntHandle;
    s_entHandleInfoArray[v9].prev = prev;
    s_entHandleInfoArray[prev].next = v6->next;
    v6->next = s_entHandleInfoHead;
    s_entHandleInfoHead = v3;
    if ( ((unsigned __int64)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( CurrentThreadContext != _InterlockedCompareExchange(&s_entHandleInfoOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 261, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx") )
      __debugbreak();
  }
}

/*
==============
UsableHandle::RemoveHandleInfo
==============
*/
void UsableHandle::RemoveHandleInfo(UsableHandle *this)
{
  unsigned int number; 
  UsableClass m_useClass; 
  unsigned __int16 infoIndex; 
  EntHandleList *v5; 
  __int64 v6; 
  __int64 v7; 

  number = this->m_info.number;
  if ( !number )
    goto LABEL_25;
  m_useClass = this->m_useClass;
  if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 268, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
    __debugbreak();
  if ( !this->m_info.number )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 432, ASSERT_TYPE_ASSERT, "( isDefined() )", (const char *)&queryFormat, "isDefined()") )
      __debugbreak();
  }
  if ( this->m_useClass )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    v6 = this->m_info.number - 1;
    if ( (unsigned int)v6 >= 0xFDE8 )
    {
      LODWORD(v7) = this->m_info.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 442, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableUsableHandleList ) ) + 0 ) )", "scriptableIndex doesn't index ARRAY_COUNT( s_scriptableUsableHandleList )\n\t%i not in [0, %i)", v7, 65000) )
        __debugbreak();
    }
    v5 = &s_scriptableUsableHandleList[v6];
    infoIndex = this->m_info.infoIndex;
  }
  else
  {
    infoIndex = this->m_info.infoIndex;
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    v5 = &s_entitiesHandleList[this->m_info.number - 1];
  }
  RemoveEntHandleInfo(v5, infoIndex);
}

/*
==============
ScriptableHandleDissociate
==============
*/
void ScriptableHandleDissociate(const unsigned int scriptableIndex)
{
  __int64 v1; 

  v1 = scriptableIndex;
  if ( scriptableIndex >= 0xFDE8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 410, ASSERT_TYPE_ASSERT, "( scriptableIndex < ( sizeof( *array_counter( s_scriptableUsableHandleList ) ) + 0 ) )", "ScriptableHandleDissociate: Trying to disassociate out of bounds usable scriptable index %i", scriptableIndex) )
    __debugbreak();
  EntHandleDissociateInternal(&s_scriptableUsableHandleList[v1]);
}

/*
==============
SentientHandleDissociate
==============
*/
void SentientHandleDissociate(sentient_s *sentient)
{
  signed __int64 v2; 
  __int64 v3; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 209, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 210, ASSERT_TYPE_ASSERT, "( level.sentients )", (const char *)&queryFormat, "level.sentients") )
    __debugbreak();
  v2 = (char *)sentient - (char *)level.sentients;
  if ( (unsigned int)(v2 / 184) >= level.maxSentients )
  {
    LODWORD(v3) = v2 / 184;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( sentientIndex ) < (unsigned)( level.maxSentients )", "sentientIndex doesn't index level.maxSentients\n\t%i not in [0, %i)", v3, level.maxSentients) )
      __debugbreak();
  }
  EntHandleDissociateInternal(&s_sentientsHandleList[(unsigned int)(v2 / 184)]);
}

/*
==============
EntHandle::Shutdown
==============
*/
void EntHandle::Shutdown(void)
{
  signed __int32 CurrentThreadContext; 
  int v1; 
  EntHandleInfo *v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 

  if ( s_usedEntHandle )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 112, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
      __debugbreak();
    if ( ((unsigned __int8)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_entHandleInfoOwnership, CurrentThreadContext, 28) != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 113, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, ctx, INVALID_THREAD_CONTEXT ) == INVALID_THREAD_CONTEXT") )
      __debugbreak();
    Com_Printf(1, "EntHandle BEGIN\n");
    v1 = 0;
    v2 = &s_entHandleInfoArray[1];
    v3 = 4095i64;
    do
    {
      if ( v2->handle )
      {
        Com_Printf(1, "%p\n", v2);
        ++v1;
      }
      ++v2;
      --v3;
    }
    while ( v3 );
    Com_Printf(1, "EntHandle END\n");
    v4 = s_usedEntHandle;
    if ( v1 != s_usedEntHandle )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 128, ASSERT_TYPE_ASSERT, "(usedEntHandle == s_usedEntHandle)", "%s\n\t%d %d", "usedEntHandle == s_usedEntHandle", v1, s_usedEntHandle) )
        __debugbreak();
      v4 = s_usedEntHandle;
    }
    if ( v4 )
    {
      LODWORD(v5) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 129, ASSERT_TYPE_ASSERT, "( ( !s_usedEntHandle ) )", "%s\n\t( s_usedEntHandle ) = %i", "( !s_usedEntHandle )", v5) )
        __debugbreak();
    }
    if ( ((unsigned __int64)&s_entHandleInfoOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_entHandleInfoOwnership) )
      __debugbreak();
    if ( CurrentThreadContext != _InterlockedCompareExchange(&s_entHandleInfoOwnership, 28, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 131, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_entHandleInfoOwnership, INVALID_THREAD_CONTEXT, ctx ) == ctx") )
      __debugbreak();
  }
}

/*
==============
UsableHandle::clear
==============
*/
void UsableHandle::clear(UsableHandle *this)
{
  *(_WORD *)&this->m_useClass = 2;
  this->m_info.number = 0;
  this->m_info.infoIndex = 0;
}

/*
==============
UsableHandle::getUseCount
==============
*/
int UsableHandle::getUseCount(UsableHandle *this)
{
  unsigned int number; 
  UsableClass m_useClass; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 

  number = this->m_info.number;
  if ( !number )
    goto LABEL_25;
  m_useClass = this->m_useClass;
  if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 268, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
    __debugbreak();
  if ( !this->m_info.number )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 679, ASSERT_TYPE_ASSERT, "( isDefined() )", (const char *)&queryFormat, "isDefined()") )
      __debugbreak();
  }
  if ( this->m_useClass == USE_CLASS_GENTITY )
    return UsableHandle::ent(this)->useCount;
  if ( this->m_useClass == USE_CLASS_SCRIPTABLE )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    v5 = this->m_info.number - 1;
    if ( v5 >= 0xFDE8 )
    {
      v7 = 65000;
      LODWORD(v6) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( SCRIPTABLE_MAX_USABLE_INSTANCES )", "scriptableIndex doesn't index SCRIPTABLE_MAX_USABLE_INSTANCES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    return ScriptableSv_GetInstanceUseCount(v5);
  }
  else
  {
    LODWORD(v6) = (unsigned __int8)this->m_useClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 698, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled use class '%i'", v6) )
      __debugbreak();
    return 0;
  }
}

/*
==============
UsableHandle::readFromSave
==============
*/
void UsableHandle::readFromSave(UsableHandle *this, const int index)
{
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  const gentity_s *GEntity; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  UsableClass m_useClass; 
  unsigned int outInfoIndex; 

  *(_WORD *)&this->m_useClass = 2;
  this->m_info.number = 0;
  this->m_info.infoIndex = 0;
  if ( index )
  {
    v3 = index & 0x3FFFFF;
    v4 = (unsigned int)index >> 30;
    v5 = (unsigned int)index >> 22;
    if ( (unsigned int)index >> 30 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 484, ASSERT_TYPE_ASSERT, "( useClass < USE_CLASS_COUNT )", (const char *)&queryFormat, "useClass < USE_CLASS_COUNT") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 485, ASSERT_TYPE_ASSERT, "( useIndex != 0 )", (const char *)&queryFormat, "useIndex != USABLE_HANDLE_NONE") )
      __debugbreak();
    v6 = (unsigned int)(v3 - 1);
    if ( (_BYTE)v4 )
    {
      if ( UsableHandle::shouldUpdateUsable(this, (const UsableClass)v4, v6, v5) )
      {
        if ( UsableHandle::isDefined(this) )
        {
          UsableHandle::RemoveHandleInfo(this);
          this->m_info.number = 0;
          this->m_info.infoIndex = 0;
          *(_WORD *)&this->m_useClass = 2;
        }
        if ( (_BYTE)v4 != 2 )
        {
          if ( (_BYTE)v4 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 619, ASSERT_TYPE_ASSERT, "( newClass == USE_CLASS_SCRIPTABLE )", (const char *)&queryFormat, "newClass == USE_CLASS_SCRIPTABLE") )
            __debugbreak();
          if ( (unsigned int)v6 >= 0xFDE8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 620, ASSERT_TYPE_ASSERT, "( newIndex < ( sizeof( *array_counter( s_scriptableUsableHandleList ) ) + 0 ) )", (const char *)&queryFormat, "newIndex < ARRAY_COUNT( s_scriptableUsableHandleList )") )
            __debugbreak();
          if ( !AddEntHandleInfo(&s_scriptableUsableHandleList[v6], this, &outInfoIndex) )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 139i64);
          v8 = truncate_cast<unsigned short,unsigned int>(outInfoIndex);
          v9 = truncate_cast<unsigned short,unsigned int>(v3);
          UsableHandle::setUsableInfo(this, (const UsableClass)v4, v9, v5, v8);
        }
      }
    }
    else
    {
      GEntity = G_GetGEntity(v6);
      UsableHandle::setEnt(this, GEntity);
    }
    if ( this->m_info.number )
    {
      m_useClass = this->m_useClass;
      if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(this->m_info.number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 490, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
        __debugbreak();
    }
  }
}

/*
==============
EntHandle::setEnt
==============
*/
void EntHandle::setEnt(EntHandle *this, const gentity_s *ent)
{
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 
  const gentity_s *v11; 
  __int16 EntityIndex; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int outInfoIndex; 

  number = this->number;
  if ( !this->number )
    goto LABEL_33;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v15) = this->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  v8 = this->number;
  if ( !this->number )
  {
LABEL_33:
    if ( !ent )
      return;
    goto LABEL_34;
  }
  if ( (unsigned int)v8 - 1 >= 0x7FF )
  {
    LODWORD(v15) = 2047;
    LODWORD(v14) = v8 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v9 = this->number;
  if ( (unsigned int)(v9 - 1) >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v9 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(v15) = this->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  v11 = &g_entities[this->number - 1];
  if ( ent != v11 )
  {
    EntityIndex = G_GetEntityIndex(v11);
    RemoveEntHandleInfo(&s_entitiesHandleList[EntityIndex], this->infoIndex);
    if ( !ent )
    {
      *this = 0;
      return;
    }
LABEL_34:
    v13 = G_GetEntityIndex(ent);
    if ( !AddEntHandleInfo(&s_entitiesHandleList[v13], this, &outInfoIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 135i64);
    this->infoIndex = outInfoIndex;
    this->number = truncate_cast<unsigned short,int>((__int16)v13 + 1);
  }
}

/*
==============
UsableHandle::setEnt
==============
*/
void UsableHandle::setEnt(UsableHandle *this, const gentity_s *const ent)
{
  signed __int64 v4; 
  __int16 EntityIndex; 
  unsigned __int16 v6; 
  __int16 v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  int v10; 
  unsigned int outInfoIndex; 

  if ( (!UsableHandle::isDefined(this) || this->m_useClass || UsableHandle::ent(this) != ent) && (UsableHandle::isDefined(this) || ent) )
  {
    if ( UsableHandle::isDefined(this) )
    {
      UsableHandle::RemoveHandleInfo(this);
      *(_WORD *)&this->m_useClass = 2;
      this->m_info.number = 0;
      this->m_info.infoIndex = 0;
    }
    if ( ent )
    {
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v4 = ent - g_entities;
      if ( (unsigned int)v4 >= 0x800 )
      {
        v10 = 2048;
        LODWORD(v9) = ent - g_entities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( (unsigned __int16)v4 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 535, ASSERT_TYPE_ASSERT, "( G_GetEntityIndex( ent ) < ( sizeof( *array_counter( s_entitiesHandleList ) ) + 0 ) )", (const char *)&queryFormat, "G_GetEntityIndex( ent ) < ARRAY_COUNT( s_entitiesHandleList )") )
        __debugbreak();
      EntityIndex = G_GetEntityIndex(ent);
      if ( !AddEntHandleInfo(&s_entitiesHandleList[EntityIndex], this, &outInfoIndex) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 137i64);
      v6 = truncate_cast<unsigned short,unsigned int>(outInfoIndex);
      v7 = G_GetEntityIndex(ent);
      v8 = truncate_cast<unsigned short,int>(v7 + 1);
      UsableHandle::setUsableInfo(this, USE_CLASS_GENTITY, v8, 0, v6);
    }
  }
}

/*
==============
UsableHandle::setEntFromWorker
==============
*/
void UsableHandle::setEntFromWorker(UsableHandle *this, const gentity_s *const ent)
{
  signed __int64 v4; 
  __int16 EntityIndex; 
  char v6; 
  unsigned __int16 v7; 
  __int16 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  unsigned int outInfoIndex; 

  if ( (!UsableHandle::isDefined(this) || this->m_useClass || UsableHandle::ent(this) != ent) && (UsableHandle::isDefined(this) || ent) )
  {
    if ( UsableHandle::isDefined(this) )
    {
      EntHandle_Lock();
      UsableHandle::RemoveHandleInfo(this);
      EntHandle_Unlock();
      *(_WORD *)&this->m_useClass = 2;
      this->m_info.number = 0;
      this->m_info.infoIndex = 0;
    }
    if ( ent )
    {
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v4 = ent - g_entities;
      if ( (unsigned int)v4 >= 0x800 )
      {
        LODWORD(v10) = ent - g_entities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
          __debugbreak();
      }
      if ( (unsigned __int16)v4 >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 565, ASSERT_TYPE_ASSERT, "( G_GetEntityIndex( ent ) < ( sizeof( *array_counter( s_entitiesHandleList ) ) + 0 ) )", (const char *)&queryFormat, "G_GetEntityIndex( ent ) < ARRAY_COUNT( s_entitiesHandleList )") )
        __debugbreak();
      EntHandle_Lock();
      EntityIndex = G_GetEntityIndex(ent);
      v6 = AddEntHandleInfo(&s_entitiesHandleList[EntityIndex], this, &outInfoIndex);
      EntHandle_Unlock();
      if ( !v6 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 138i64);
      v7 = truncate_cast<unsigned short,unsigned int>(outInfoIndex);
      v8 = G_GetEntityIndex(ent);
      v9 = truncate_cast<unsigned short,int>(v8 + 1);
      UsableHandle::setUsableInfo(this, USE_CLASS_GENTITY, v9, 0, v7);
    }
  }
}

/*
==============
SentientHandle::setSentient
==============
*/
void SentientHandle::setSentient(SentientHandle *this, sentient_s *sentient)
{
  sentient_s *v4; 
  signed __int64 v5; 
  signed __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int outInfoIndex; 

  if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 364, ASSERT_TYPE_ASSERT, "( level.sentients )", (const char *)&queryFormat, "level.sentients") )
    __debugbreak();
  if ( SentientHandle::isDefined(this) )
  {
    v4 = SentientHandle::sentient(this);
    if ( sentient == v4 )
      return;
    v5 = v4 - level.sentients;
    if ( (unsigned int)v5 >= level.maxSentients )
    {
      LODWORD(v8) = ((int)v4 - LODWORD(level.sentients)) / 184;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 373, ASSERT_TYPE_ASSERT, "(unsigned)( oldSentientIndex ) < (unsigned)( level.maxSentients )", "oldSentientIndex doesn't index level.maxSentients\n\t%i not in [0, %i)", v8, level.maxSentients) )
        __debugbreak();
    }
    RemoveEntHandleInfo(&s_sentientsHandleList[(unsigned int)v5], this->infoIndex);
    if ( !sentient )
    {
      *this = 0;
      return;
    }
  }
  else if ( !sentient )
  {
    return;
  }
  v6 = (char *)sentient - (char *)level.sentients;
  v7 = v6 / 184;
  if ( (unsigned int)(v6 / 184) >= level.maxSentients )
  {
    LODWORD(v9) = level.maxSentients;
    LODWORD(v8) = (int)v6 / 184;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( sentientIndex ) < (unsigned)( level.maxSentients )", "sentientIndex doesn't index level.maxSentients\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !AddEntHandleInfo(&s_sentientsHandleList[(unsigned int)v7], this, &outInfoIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 136i64);
  this->infoIndex = outInfoIndex;
  this->number = v7 + 1;
}

/*
==============
UsableHandle::setUsable
==============
*/
void UsableHandle::setUsable(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, unsigned __int8 newData)
{
  __int64 v4; 
  const gentity_s *GEntity; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned int outInfoIndex; 

  v4 = newIndex;
  if ( newClass )
  {
    if ( UsableHandle::shouldUpdateUsable(this, newClass, newIndex, newData) )
    {
      if ( UsableHandle::isDefined(this) )
      {
        UsableHandle::RemoveHandleInfo(this);
        *(_WORD *)&this->m_useClass = 2;
        this->m_info.number = 0;
        this->m_info.infoIndex = 0;
      }
      if ( newClass != USE_CLASS_COUNT )
      {
        if ( newClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 619, ASSERT_TYPE_ASSERT, "( newClass == USE_CLASS_SCRIPTABLE )", (const char *)&queryFormat, "newClass == USE_CLASS_SCRIPTABLE") )
          __debugbreak();
        if ( (unsigned int)v4 >= 0xFDE8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 620, ASSERT_TYPE_ASSERT, "( newIndex < ( sizeof( *array_counter( s_scriptableUsableHandleList ) ) + 0 ) )", (const char *)&queryFormat, "newIndex < ARRAY_COUNT( s_scriptableUsableHandleList )") )
          __debugbreak();
        if ( !AddEntHandleInfo(&s_scriptableUsableHandleList[v4], this, &outInfoIndex) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 139i64);
        v9 = truncate_cast<unsigned short,unsigned int>(outInfoIndex);
        v10 = truncate_cast<unsigned short,unsigned int>(v4 + 1);
        UsableHandle::setUsableInfo(this, newClass, v10, newData, v9);
      }
    }
  }
  else
  {
    GEntity = G_GetGEntity(newIndex);
    UsableHandle::setEnt(this, GEntity);
  }
}

/*
==============
UsableHandle::setUsableFromWorker
==============
*/
void UsableHandle::setUsableFromWorker(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, unsigned __int8 newData)
{
  __int64 v4; 
  const gentity_s *GEntity; 
  char v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned int outInfoIndex; 

  v4 = newIndex;
  if ( newClass )
  {
    if ( UsableHandle::shouldUpdateUsable(this, newClass, newIndex, newData) )
    {
      if ( UsableHandle::isDefined(this) )
      {
        EntHandle_Lock();
        UsableHandle::RemoveHandleInfo(this);
        EntHandle_Unlock();
        *(_WORD *)&this->m_useClass = 2;
        this->m_info.number = 0;
        this->m_info.infoIndex = 0;
      }
      if ( newClass != USE_CLASS_COUNT )
      {
        if ( newClass != USE_CLASS_SCRIPTABLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 658, ASSERT_TYPE_ASSERT, "( newClass == USE_CLASS_SCRIPTABLE )", (const char *)&queryFormat, "newClass == USE_CLASS_SCRIPTABLE") )
          __debugbreak();
        if ( (unsigned int)v4 >= 0xFDE8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 659, ASSERT_TYPE_ASSERT, "( newIndex < ( sizeof( *array_counter( s_scriptableUsableHandleList ) ) + 0 ) )", (const char *)&queryFormat, "newIndex < ARRAY_COUNT( s_scriptableUsableHandleList )") )
          __debugbreak();
        EntHandle_Lock();
        v9 = AddEntHandleInfo(&s_scriptableUsableHandleList[v4], this, &outInfoIndex);
        EntHandle_Unlock();
        if ( !v9 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FA0928, 140i64);
        v10 = truncate_cast<unsigned short,unsigned int>(outInfoIndex);
        v11 = truncate_cast<unsigned short,unsigned int>(v4 + 1);
        UsableHandle::setUsableInfo(this, newClass, v11, newData, v10);
      }
    }
  }
  else
  {
    GEntity = G_GetGEntity(newIndex);
    UsableHandle::setEntFromWorker(this, GEntity);
  }
}

/*
==============
UsableHandle::setUsableInfo
==============
*/
void UsableHandle::setUsableInfo(UsableHandle *this, const UsableClass usableClass, const unsigned int usableIndex, const unsigned __int8 usableData, const unsigned __int16 infoIndex)
{
  if ( usableIndex > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 496, ASSERT_TYPE_ASSERT, "(usableIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "usableIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  this->m_useClass = usableClass;
  this->m_useData = usableData;
  this->m_info.infoIndex = infoIndex;
  this->m_info.number = usableIndex;
}

/*
==============
UsableHandle::shouldUpdateEnt
==============
*/
bool UsableHandle::shouldUpdateEnt(UsableHandle *this, const gentity_s *const ent)
{
  return (!UsableHandle::isDefined(this) || this->m_useClass || UsableHandle::ent(this) != ent) && (UsableHandle::isDefined(this) || ent);
}

/*
==============
UsableHandle::shouldUpdateUsable
==============
*/
bool UsableHandle::shouldUpdateUsable(UsableHandle *this, const UsableClass newClass, const unsigned int newIndex, const unsigned __int8 newData)
{
  return (!UsableHandle::isDefined(this) || this->m_useClass != newClass || UsableHandle::getUseIndex(this) != newIndex || this->m_useData != newData) && (UsableHandle::isDefined(this) || newClass != USE_CLASS_COUNT);
}

/*
==============
UsableHandle::writeToSave
==============
*/
__int64 UsableHandle::writeToSave(UsableHandle *this)
{
  unsigned int number; 
  UsableClass m_useClass; 
  unsigned int v4; 
  unsigned __int8 m_useData; 
  UsableClass v6; 
  unsigned int v7; 

  number = this->m_info.number;
  if ( !number )
    return 0i64;
  m_useClass = this->m_useClass;
  if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 450, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
    __debugbreak();
  v4 = this->m_info.number;
  if ( !this->m_info.number )
    return 0i64;
  m_useData = this->m_useData;
  v6 = this->m_useClass;
  if ( v4 > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 210, ASSERT_TYPE_ASSERT, "(useIndex <= ( 0x3FFFFF ))", (const char *)&queryFormat, "useIndex <= USABLEKEY_INDEX_MASK") )
    __debugbreak();
  v7 = v4 | ((m_useData | ((unsigned __int8)v6 << 8)) << 22);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\enthandle.cpp", 461, ASSERT_TYPE_ASSERT, "( useKey )", (const char *)&queryFormat, "useKey") )
    __debugbreak();
  return v7;
}

