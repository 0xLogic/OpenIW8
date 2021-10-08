/*
==============
ASM_History::ASM_History
==============
*/

void __fastcall ASM_History::ASM_History(ASM_History *this)
{
  ??0ASM_History@@QEAA@XZ(this);
}

/*
==============
ASM_Instance::HasSubtree_r
==============
*/

bool __fastcall ASM_Instance::HasSubtree_r(ASM_Instance *this, const ASM *pSubtree)
{
  return ?HasSubtree_r@ASM_Instance@@QEBA_NPEBUASM@@@Z(this, pSubtree);
}

/*
==============
ASM_TransitionList::IsEmpty
==============
*/

bool __fastcall ASM_TransitionList::IsEmpty(ASM_TransitionList *this)
{
  return ?IsEmpty@ASM_TransitionList@@QEAA_NXZ(this);
}

/*
==============
ASM_History::Size
==============
*/

unsigned int __fastcall ASM_History::Size(ASM_History *this)
{
  return ?Size@ASM_History@@QEBAIXZ(this);
}

/*
==============
ASM_History::AddEvent
==============
*/

void __fastcall ASM_History::AddEvent(ASM_History *this, int time, int fromState, const ASM_TransitionList *pTransitionList)
{
  ?AddEvent@ASM_History@@QEAAXHHPEBVASM_TransitionList@@@Z(this, time, fromState, pTransitionList);
}

/*
==============
ASM_ReleaseAllHistoryObjects
==============
*/

void ASM_ReleaseAllHistoryObjects(void)
{
  ?ASM_ReleaseAllHistoryObjects@@YAXXZ();
}

/*
==============
ASM_Instance::ASM_Instance
==============
*/

void __fastcall ASM_Instance::ASM_Instance(ASM_Instance *this)
{
  ??0ASM_Instance@@QEAA@XZ(this);
}

/*
==============
ASM_IsServerThread
==============
*/

bool __fastcall ASM_IsServerThread()
{
  return ?ASM_IsServerThread@@YA_NXZ();
}

/*
==============
ASM_Instance::HasSubtree
==============
*/

bool __fastcall ASM_Instance::HasSubtree(ASM_Instance *this, const ASM *pSubtree)
{
  return ?HasSubtree@ASM_Instance@@QEBA_NPEBUASM@@@Z(this, pSubtree);
}

/*
==============
ASM_TransitionList::Pop
==============
*/

const ASM_Transition *__fastcall ASM_TransitionList::Pop(ASM_TransitionList *this)
{
  return ?Pop@ASM_TransitionList@@QEAAPEBUASM_Transition@@XZ(this);
}

/*
==============
ASM_Instance::RemoveSubtree
==============
*/

void __fastcall ASM_Instance::RemoveSubtree(ASM_Instance *this, ASM_Instance *pSubInst)
{
  ?RemoveSubtree@ASM_Instance@@QEAAXPEAU1@@Z(this, pSubInst);
}

/*
==============
ASM_History::NextIndex
==============
*/

unsigned int __fastcall ASM_History::NextIndex(ASM_History *this, unsigned int index)
{
  return ?NextIndex@ASM_History@@QEBAII@Z(this, index);
}

/*
==============
ASM_HistoryEvent::ASM_HistoryEvent
==============
*/

void __fastcall ASM_HistoryEvent::ASM_HistoryEvent(ASM_HistoryEvent *this)
{
  ??0ASM_HistoryEvent@@QEAA@XZ(this);
}

/*
==============
ASM_TransitionList::ASM_TransitionList
==============
*/

void __fastcall ASM_TransitionList::ASM_TransitionList(ASM_TransitionList *this)
{
  ??0ASM_TransitionList@@QEAA@XZ(this);
}

/*
==============
ASM_HistoryEvent::Set
==============
*/

void __fastcall ASM_HistoryEvent::Set(ASM_HistoryEvent *this, int time, int fromState, const ASM_TransitionList *pTransitionList)
{
  ?Set@ASM_HistoryEvent@@QEAAXHHPEBVASM_TransitionList@@@Z(this, time, fromState, pTransitionList);
}

/*
==============
ASM_HistoryEvent::ASM_HistoryEvent
==============
*/

void __fastcall ASM_HistoryEvent::ASM_HistoryEvent(ASM_HistoryEvent *this, const ASM_HistoryEvent *pOther)
{
  ??0ASM_HistoryEvent@@QEAA@PEBV0@@Z(this, pOther);
}

/*
==============
ASM_Instance::AddSubtree
==============
*/

void __fastcall ASM_Instance::AddSubtree(ASM_Instance *this, ASM_Instance *pSubInst, const ASM *pSubtree, unsigned int maxSubtreesPerInstance, const bool findEventParamTableOffset)
{
  ?AddSubtree@ASM_Instance@@QEAAXPEAU1@PEBUASM@@I_N@Z(this, pSubInst, pSubtree, maxSubtreesPerInstance, findEventParamTableOffset);
}

/*
==============
ASM_TransitionList::Push
==============
*/

bool __fastcall ASM_TransitionList::Push(ASM_TransitionList *this, const ASM_Transition *pTransition)
{
  return ?Push@ASM_TransitionList@@QEAA_NPEBUASM_Transition@@@Z(this, pTransition);
}

/*
==============
ASM_Instance::InitInstance
==============
*/

void __fastcall ASM_Instance::InitInstance(ASM_Instance *this)
{
  ?InitInstance@ASM_Instance@@QEAAXXZ(this);
}

/*
==============
ASM_Instance::FindUnusedSubtreeOffset
==============
*/

int __fastcall ASM_Instance::FindUnusedSubtreeOffset(ASM_Instance *this, unsigned int maxSubtreesPerInstance)
{
  return ?FindUnusedSubtreeOffset@ASM_Instance@@QEBAHI@Z(this, maxSubtreesPerInstance);
}

/*
==============
ASM_TransitionList::ASM_TransitionList
==============
*/

void __fastcall ASM_TransitionList::ASM_TransitionList(ASM_TransitionList *this, const ASM_TransitionList *pOther)
{
  ??0ASM_TransitionList@@QEAA@PEBV0@@Z(this, pOther);
}

/*
==============
ASM_ReleaseHistoryObject
==============
*/

void __fastcall ASM_ReleaseHistoryObject(__int16 entNum)
{
  ?ASM_ReleaseHistoryObject@@YAXF@Z(entNum);
}

/*
==============
ASM_Instance::FreeInstance
==============
*/

void __fastcall ASM_Instance::FreeInstance(ASM_Instance *this)
{
  ?FreeInstance@ASM_Instance@@QEAAXXZ(this);
}

/*
==============
ASM_History::GetColor
==============
*/

vec4_t *__fastcall ASM_History::GetColor(vec4_t *result, const unsigned int index)
{
  return ?GetColor@ASM_History@@SA?ATvec4_t@@I@Z(result, index);
}

/*
==============
ASM_History::Reset
==============
*/

void __fastcall ASM_History::Reset(ASM_History *this)
{
  ?Reset@ASM_History@@QEAAXXZ(this);
}

/*
==============
ASM_GetHistoryObject
==============
*/

ASM_History *__fastcall ASM_GetHistoryObject(__int16 entNum)
{
  return ?ASM_GetHistoryObject@@YAPEAVASM_History@@F@Z(entNum);
}

/*
==============
ASM_History::BeginIndex
==============
*/

unsigned int __fastcall ASM_History::BeginIndex(ASM_History *this)
{
  return ?BeginIndex@ASM_History@@QEBAIXZ(this);
}

/*
==============
ASM_HistoryEvent::Reset
==============
*/

void __fastcall ASM_HistoryEvent::Reset(ASM_HistoryEvent *this)
{
  ?Reset@ASM_HistoryEvent@@QEAAXXZ(this);
}

/*
==============
ASM_History::ASM_History
==============
*/
void ASM_History::ASM_History(ASM_History *this)
{
  ASM_HistoryEvent *m_events; 
  __int64 v3; 
  unsigned __int64 v4; 

  m_events = this->m_events;
  v3 = 8i64;
  do
  {
    ASM_HistoryEvent::ASM_HistoryEvent(m_events++);
    --v3;
  }
  while ( v3 );
  this->m_frontIndex = 0;
  do
  {
    v4 = (unsigned __int64)this->m_frontIndex << 6;
    *(int *)((char *)&this->m_events[0].m_time + v4) = -1;
    *(_QWORD *)((char *)&this->m_events[0].m_fromState + v4) = 0i64;
    ++this->m_frontIndex;
  }
  while ( this->m_frontIndex < 8 );
  *((_BYTE *)this + 6) &= ~1u;
  this->m_entNum = 2047;
  this->m_frontIndex = 7;
}

/*
==============
ASM_HistoryEvent::ASM_HistoryEvent
==============
*/
void ASM_HistoryEvent::ASM_HistoryEvent(ASM_HistoryEvent *this, const ASM_HistoryEvent *pOther)
{
  int m_fromState; 

  _R9 = &pOther->m_transitionList;
  this->m_transitionList.m_transitionListCount = 0;
  _R8 = this;
  this->m_transitionList.m_transitionList[0] = NULL;
  this->m_transitionList.m_transitionList[1] = NULL;
  this->m_transitionList.m_transitionList[2] = NULL;
  this->m_transitionList.m_transitionList[3] = NULL;
  this->m_transitionList.m_transitionList[4] = NULL;
  this->m_transitionList.m_transitionList[5] = NULL;
  m_fromState = pOther->m_fromState;
  _R8->m_time = pOther->m_time;
  _R8->m_fromState = m_fromState;
  if ( pOther == (const ASM_HistoryEvent *)-8i64 )
  {
    _R8->m_transitionList.m_transitionListCount = 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r9]
      vmovups ymmword ptr [r8+8], ymm0
      vmovups xmm1, xmmword ptr [r9+20h]
      vmovups xmmword ptr [r8+28h], xmm1
      vmovsd  xmm0, qword ptr [r9+30h]
      vmovsd  qword ptr [r8+38h], xmm0
    }
  }
}

/*
==============
ASM_HistoryEvent::ASM_HistoryEvent
==============
*/
void ASM_HistoryEvent::ASM_HistoryEvent(ASM_HistoryEvent *this)
{
  this->m_transitionList.m_transitionList[0] = NULL;
  this->m_transitionList.m_transitionList[1] = NULL;
  this->m_transitionList.m_transitionList[2] = NULL;
  this->m_transitionList.m_transitionList[3] = NULL;
  this->m_transitionList.m_transitionList[4] = NULL;
  this->m_transitionList.m_transitionList[5] = NULL;
  *(_QWORD *)&this->m_fromState = 0i64;
  this->m_time = -1;
}

/*
==============
ASM_Instance::ASM_Instance
==============
*/
void ASM_Instance::ASM_Instance(ASM_Instance *this)
{
  ASM_Event *m_EventTable; 
  __int64 v3; 

  m_EventTable = this->m_EventTable;
  v3 = 8i64;
  do
  {
    ASM_Event::ASM_Event(m_EventTable++);
    --v3;
  }
  while ( v3 );
  this->m_bInUse = 0;
}

/*
==============
ASM_TransitionList::ASM_TransitionList
==============
*/
void ASM_TransitionList::ASM_TransitionList(ASM_TransitionList *this, const ASM_TransitionList *pOther)
{
  this->m_transitionListCount = pOther->m_transitionListCount;
  this->m_transitionList[0] = pOther->m_transitionList[0];
  this->m_transitionList[1] = pOther->m_transitionList[1];
  this->m_transitionList[2] = pOther->m_transitionList[2];
  this->m_transitionList[3] = pOther->m_transitionList[3];
  this->m_transitionList[4] = pOther->m_transitionList[4];
  this->m_transitionList[5] = pOther->m_transitionList[5];
}

/*
==============
ASM_TransitionList::ASM_TransitionList
==============
*/
void ASM_TransitionList::ASM_TransitionList(ASM_TransitionList *this)
{
  this->m_transitionListCount = 0;
  this->m_transitionList[0] = NULL;
  this->m_transitionList[1] = NULL;
  this->m_transitionList[2] = NULL;
  this->m_transitionList[3] = NULL;
  this->m_transitionList[4] = NULL;
  this->m_transitionList[5] = NULL;
}

/*
==============
ASM_GetHistoryObject
==============
*/
ASM_History *ASM_GetHistoryObject(__int16 entNum)
{
  bool v2; 
  _BYTE *v3; 
  unsigned int i; 
  __int64 v5; 
  __int16 *j; 
  __int64 v8; 
  ASM_History *v9; 
  unsigned __int64 v10; 

  v2 = Sys_IsServerThread() || Sys_IsServerUserMoveWorker();
  if ( !Sys_IsServerThread() && !Sys_IsServerUserMoveWorker() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 300, ASSERT_TYPE_ASSERT, "(ASM_IsServerThread() || Sys_IsMainThread())", (const char *)&queryFormat, "ASM_IsServerThread() || Sys_IsMainThread()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
  v3 = (char *)s_objectPool + 6;
  for ( i = 0; i < 0x80; ++i )
  {
    if ( *((_WORD *)v3 - 1) == entNum && (*v3 & 1) == v2 )
    {
      Sys_LeaveCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
      return &s_objectPool[i];
    }
    v3 += 520;
  }
  v5 = 0i64;
  for ( j = &s_objectPool[0].m_entNum; *j != 2047; j += 260 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x80 )
    {
      Sys_LeaveCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
      Com_PrintWarning(18, "ASM_HistoryObjectPool : no more objects available.");
      return 0i64;
    }
  }
  v8 = v5;
  v9 = &s_objectPool[v5];
  v9->m_frontIndex = 0;
  do
  {
    v10 = (unsigned __int64)v9->m_frontIndex << 6;
    *(int *)((char *)&v9->m_events[0].m_time + v10) = -1;
    *(_QWORD *)((char *)&v9->m_events[0].m_fromState + v10) = 0i64;
    ++v9->m_frontIndex;
  }
  while ( v9->m_frontIndex < 8 );
  *((_BYTE *)v9 + 6) &= ~1u;
  v9->m_frontIndex = 7;
  v9->m_entNum = 2047;
  *((_BYTE *)&s_objectPool[v8] + 6) &= ~1u;
  *((_BYTE *)&s_objectPool[v8] + 6) |= v2;
  s_objectPool[v8].m_entNum = entNum;
  Sys_LeaveCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
  return v9;
}

/*
==============
ASM_IsServerThread
==============
*/
bool ASM_IsServerThread()
{
  bool result; 

  if ( Sys_IsServerThread() )
    return 1;
  result = Sys_IsServerUserMoveWorker();
  if ( result )
    return 1;
  return result;
}

/*
==============
ASM_ReleaseAllHistoryObjects
==============
*/
void ASM_ReleaseAllHistoryObjects(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 

  if ( !Sys_IsServerThread() && !Sys_IsServerUserMoveWorker() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 356, ASSERT_TYPE_ASSERT, "(ASM_IsServerThread() || Sys_IsMainThread())", (const char *)&queryFormat, "ASM_IsServerThread() || Sys_IsMainThread()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
  v0 = 2;
  do
  {
    v1 = v0 - 2;
    *((_BYTE *)&s_objectPool[v1] + 6) &= ~1u;
    s_objectPool[v1].m_entNum = 2047;
    v2 = v0 - 1;
    *((_BYTE *)&s_objectPool[v2] + 6) &= ~1u;
    s_objectPool[v2].m_entNum = 2047;
    v3 = v0;
    *((_BYTE *)&s_objectPool[v3] + 6) &= ~1u;
    s_objectPool[v3].m_entNum = 2047;
    v4 = v0 + 1;
    *((_BYTE *)&s_objectPool[v4] + 6) &= ~1u;
    s_objectPool[v4].m_entNum = 2047;
    v5 = v0 + 2;
    *((_BYTE *)&s_objectPool[v5] + 6) &= ~1u;
    s_objectPool[v5].m_entNum = 2047;
    v6 = v0 + 3;
    *((_BYTE *)&s_objectPool[v6] + 6) &= ~1u;
    s_objectPool[v6].m_entNum = 2047;
    v7 = v0 + 4;
    *((_BYTE *)&s_objectPool[v7] + 6) &= ~1u;
    s_objectPool[v7].m_entNum = 2047;
    v8 = v0 + 5;
    *((_BYTE *)&s_objectPool[v8] + 6) &= ~1u;
    s_objectPool[v8].m_entNum = 2047;
    v9 = v0 + 6;
    *((_BYTE *)&s_objectPool[v9] + 6) &= ~1u;
    s_objectPool[v9].m_entNum = 2047;
    v10 = v0 + 7;
    *((_BYTE *)&s_objectPool[v10] + 6) &= ~1u;
    s_objectPool[v10].m_entNum = 2047;
    v11 = v0 + 8;
    *((_BYTE *)&s_objectPool[v11] + 6) &= ~1u;
    s_objectPool[v11].m_entNum = 2047;
    v12 = v0 + 9;
    *((_BYTE *)&s_objectPool[v12] + 6) &= ~1u;
    s_objectPool[v12].m_entNum = 2047;
    v13 = v0 + 10;
    *((_BYTE *)&s_objectPool[v13] + 6) &= ~1u;
    s_objectPool[v13].m_entNum = 2047;
    v14 = v0 + 11;
    *((_BYTE *)&s_objectPool[v14] + 6) &= ~1u;
    s_objectPool[v14].m_entNum = 2047;
    v15 = v0 + 12;
    *((_BYTE *)&s_objectPool[v15] + 6) &= ~1u;
    s_objectPool[v15].m_entNum = 2047;
    v16 = v0 + 13;
    *((_BYTE *)&s_objectPool[v16] + 6) &= ~1u;
    s_objectPool[v16].m_entNum = 2047;
    v17 = v0 + 14;
    *((_BYTE *)&s_objectPool[v17] + 6) &= ~1u;
    s_objectPool[v17].m_entNum = 2047;
    v18 = v0 + 15;
    *((_BYTE *)&s_objectPool[v18] + 6) &= ~1u;
    s_objectPool[v18].m_entNum = 2047;
    v19 = v0 + 16;
    *((_BYTE *)&s_objectPool[v19] + 6) &= ~1u;
    s_objectPool[v19].m_entNum = 2047;
    v20 = v0 + 17;
    *((_BYTE *)&s_objectPool[v20] + 6) &= ~1u;
    s_objectPool[v20].m_entNum = 2047;
    v21 = v0 + 18;
    *((_BYTE *)&s_objectPool[v21] + 6) &= ~1u;
    s_objectPool[v21].m_entNum = 2047;
    v22 = v0 + 19;
    *((_BYTE *)&s_objectPool[v22] + 6) &= ~1u;
    s_objectPool[v22].m_entNum = 2047;
    v23 = v0 + 20;
    *((_BYTE *)&s_objectPool[v23] + 6) &= ~1u;
    s_objectPool[v23].m_entNum = 2047;
    v24 = v0 + 21;
    *((_BYTE *)&s_objectPool[v24] + 6) &= ~1u;
    s_objectPool[v24].m_entNum = 2047;
    v25 = v0 + 22;
    *((_BYTE *)&s_objectPool[v25] + 6) &= ~1u;
    s_objectPool[v25].m_entNum = 2047;
    v26 = v0 + 23;
    *((_BYTE *)&s_objectPool[v26] + 6) &= ~1u;
    s_objectPool[v26].m_entNum = 2047;
    v27 = v0 + 24;
    *((_BYTE *)&s_objectPool[v27] + 6) &= ~1u;
    s_objectPool[v27].m_entNum = 2047;
    v28 = v0 + 25;
    *((_BYTE *)&s_objectPool[v28] + 6) &= ~1u;
    s_objectPool[v28].m_entNum = 2047;
    v29 = v0 + 26;
    *((_BYTE *)&s_objectPool[v29] + 6) &= ~1u;
    s_objectPool[v29].m_entNum = 2047;
    v30 = v0 + 27;
    *((_BYTE *)&s_objectPool[v30] + 6) &= ~1u;
    s_objectPool[v30].m_entNum = 2047;
    v31 = v0 + 28;
    v32 = v0 + 29;
    v0 += 32;
    v33 = v32;
    *((_BYTE *)&s_objectPool[v31] + 6) &= ~1u;
    s_objectPool[v31].m_entNum = 2047;
    *((_BYTE *)&s_objectPool[v33] + 6) &= ~1u;
    s_objectPool[v33].m_entNum = 2047;
  }
  while ( v0 - 2 < 0x80 );
  Sys_LeaveCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
}

/*
==============
ASM_ReleaseHistoryObject
==============
*/
void ASM_ReleaseHistoryObject(__int16 entNum)
{
  bool v2; 
  unsigned int v3; 
  _BYTE *v4; 
  char v5; 
  __int64 v6; 

  v2 = Sys_IsServerThread() || Sys_IsServerUserMoveWorker();
  if ( !Sys_IsServerThread() && !Sys_IsServerUserMoveWorker() && !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 336, ASSERT_TYPE_ASSERT, "(ASM_IsServerThread() || Sys_IsMainThread())", (const char *)&queryFormat, "ASM_IsServerThread() || Sys_IsMainThread()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
  v3 = 0;
  v4 = (char *)s_objectPool + 6;
  while ( 1 )
  {
    if ( *((_WORD *)v4 - 1) == entNum )
    {
      v5 = *v4;
      if ( (*v4 & 1) == v2 )
        break;
    }
    ++v3;
    v4 += 520;
    if ( v3 >= 0x80 )
      goto LABEL_16;
  }
  v6 = v3;
  s_objectPool[v6].m_entNum = 2047;
  *((_BYTE *)&s_objectPool[v6] + 6) = v5 & 0xFE;
LABEL_16:
  Sys_LeaveCriticalSection(CRITSECT_ASM_HISTORY_OBJ_POOL);
}

/*
==============
ASM_History::AddEvent
==============
*/
void ASM_History::AddEvent(ASM_History *this, int time, int fromState, const ASM_TransitionList *pTransitionList)
{
  __int64 v4; 

  v4 = ((unsigned __int8)this->m_frontIndex + 1) & 7;
  this->m_frontIndex = v4;
  _R10 = v4 << 6;
  *(int *)((char *)&this->m_events[0].m_time + _R10) = time;
  *(int *)((char *)&this->m_events[0].m_fromState + _R10) = fromState;
  if ( pTransitionList )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r9]
      vmovups ymmword ptr [r10+rcx+10h], ymm0
      vmovups xmm1, xmmword ptr [r9+20h]
      vmovups xmmword ptr [r10+rcx+30h], xmm1
      vmovsd  xmm0, qword ptr [r9+30h]
      vmovsd  qword ptr [r10+rcx+40h], xmm0
    }
  }
  else
  {
    *(unsigned int *)((char *)&this->m_events[0].m_transitionList.m_transitionListCount + _R10) = 0;
  }
}

/*
==============
ASM_Instance::AddSubtree
==============
*/
void ASM_Instance::AddSubtree(ASM_Instance *this, ASM_Instance *pSubInst, const ASM *pSubtree, unsigned int maxSubtreesPerInstance, const bool findEventParamTableOffset)
{
  unsigned int v9; 
  unsigned int v10; 
  int m_NumSubtrees; 
  int v12; 
  ASM_Instance **m_Subtrees; 

  if ( !pSubInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 75, ASSERT_TYPE_ASSERT, "(pSubInst)", (const char *)&queryFormat, "pSubInst") )
    __debugbreak();
  pSubInst->m_pASM = pSubtree;
  pSubInst->m_EntNum = this->m_EntNum;
  pSubInst->m_bPrimary = 0;
  if ( findEventParamTableOffset )
  {
    if ( this->m_NumSubtrees >= (signed int)maxSubtreesPerInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 48, ASSERT_TYPE_ASSERT, "(m_NumSubtrees < static_cast<int>( maxSubtreesPerInstance ))", (const char *)&queryFormat, "m_NumSubtrees < static_cast<int>( maxSubtreesPerInstance )") )
      __debugbreak();
    v9 = 0;
    v10 = this->m_EventParamTableOffset + 8 * maxSubtreesPerInstance + 8;
    if ( maxSubtreesPerInstance )
    {
      m_NumSubtrees = this->m_NumSubtrees;
      while ( 1 )
      {
        v12 = 0;
        if ( m_NumSubtrees <= 0 )
          break;
        m_Subtrees = this->m_Subtrees;
        while ( (*m_Subtrees)->m_EventParamTableOffset != v10 )
        {
          ++v12;
          ++m_Subtrees;
          if ( v12 >= m_NumSubtrees )
            goto LABEL_20;
        }
        ++v9;
        v10 += 8;
        if ( v9 >= maxSubtreesPerInstance )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 68, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "should never get here. unable to find unused subtree offset.") )
        __debugbreak();
      v10 = -1;
    }
  }
  else
  {
    v10 = 0;
  }
LABEL_20:
  pSubInst->m_EventParamTableOffset = v10;
  this->m_Subtrees[this->m_NumSubtrees++] = pSubInst;
}

/*
==============
ASM_History::BeginIndex
==============
*/
__int64 ASM_History::BeginIndex(ASM_History *this)
{
  return this->m_frontIndex;
}

/*
==============
ASM_Instance::FindUnusedSubtreeOffset
==============
*/
__int64 ASM_Instance::FindUnusedSubtreeOffset(ASM_Instance *this, unsigned int maxSubtreesPerInstance)
{
  unsigned int v4; 
  unsigned int v5; 
  __int64 m_NumSubtrees; 
  __int64 v7; 
  ASM_Instance **i; 

  if ( this->m_NumSubtrees >= (signed int)maxSubtreesPerInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 48, ASSERT_TYPE_ASSERT, "(m_NumSubtrees < static_cast<int>( maxSubtreesPerInstance ))", (const char *)&queryFormat, "m_NumSubtrees < static_cast<int>( maxSubtreesPerInstance )") )
    __debugbreak();
  v4 = 0;
  v5 = this->m_EventParamTableOffset + 8 * maxSubtreesPerInstance + 8;
  if ( maxSubtreesPerInstance )
  {
    m_NumSubtrees = this->m_NumSubtrees;
    while ( 1 )
    {
      v7 = 0i64;
      if ( m_NumSubtrees <= 0 )
        return v5;
      for ( i = this->m_Subtrees; (*i)->m_EventParamTableOffset != v5; ++i )
      {
        if ( ++v7 >= m_NumSubtrees )
          return v5;
      }
      ++v4;
      v5 += 8;
      if ( v4 >= maxSubtreesPerInstance )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 68, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "should never get here. unable to find unused subtree offset.") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
}

/*
==============
ASM_Instance::FreeInstance
==============
*/
void ASM_Instance::FreeInstance(ASM_Instance *this)
{
  int v1; 
  ASM_Instance **m_Subtrees; 

  v1 = 0;
  if ( this->m_NumSubtrees <= 0 )
  {
    this->m_bInUse = 0;
  }
  else
  {
    m_Subtrees = this->m_Subtrees;
    do
    {
      ASM_Instance::FreeInstance(*m_Subtrees);
      ++v1;
      ++m_Subtrees;
    }
    while ( v1 < this->m_NumSubtrees );
    this->m_bInUse = 0;
  }
}

/*
==============
ASM_History::GetColor
==============
*/
vec4_t *ASM_History::GetColor(vec4_t *result, const unsigned int index)
{
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
    vmovups xmm1, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
  }
  _RAX = 2i64 * (index & 1);
  __asm
  {
    vmovups [rsp+38h+var_38], xmm0
    vmovups [rsp+38h+var_28], xmm1
    vmovups xmm0, [rsp+rax*8+38h+var_38]
    vmovups xmmword ptr [rcx], xmm0
  }
  return result;
}

/*
==============
ASM_Instance::HasSubtree
==============
*/
char ASM_Instance::HasSubtree(ASM_Instance *this, const ASM *pSubtree)
{
  __int64 m_NumSubtrees; 
  __int64 v3; 
  ASM_Instance **i; 

  if ( !pSubtree )
    return 0;
  m_NumSubtrees = this->m_NumSubtrees;
  if ( m_NumSubtrees <= 0 )
    return 0;
  v3 = 0i64;
  for ( i = this->m_Subtrees; (*i)->m_pASM != pSubtree; ++i )
  {
    if ( ++v3 >= m_NumSubtrees )
      return 0;
  }
  return 1;
}

/*
==============
ASM_Instance::HasSubtree_r
==============
*/
char ASM_Instance::HasSubtree_r(ASM_Instance *this, const ASM *pSubtree)
{
  int v2; 
  ASM_Instance **i; 

  v2 = 0;
  if ( this->m_NumSubtrees <= 0 )
    return 0;
  for ( i = this->m_Subtrees; (*i)->m_pASM != pSubtree && !ASM_Instance::HasSubtree_r(*i, pSubtree); ++i )
  {
    if ( ++v2 >= this->m_NumSubtrees )
      return 0;
  }
  return 1;
}

/*
==============
ASM_Instance::InitInstance
==============
*/
void ASM_Instance::InitInstance(ASM_Instance *this)
{
  this->m_bInUse = 1;
  *(_QWORD *)&this->m_NumSubtrees = 0i64;
  *(_QWORD *)&this->m_EphemeralEventParamTableID = 0i64;
  *(_QWORD *)&this->m_PrevState = -1i64;
  this->m_EphemeralTableIndex = -1;
  this->m_pScrContext = ScriptContext_Server();
}

/*
==============
ASM_TransitionList::IsEmpty
==============
*/
bool ASM_TransitionList::IsEmpty(ASM_TransitionList *this)
{
  return this->m_transitionListCount == 0;
}

/*
==============
ASM_History::NextIndex
==============
*/
__int64 ASM_History::NextIndex(ASM_History *this, unsigned int index)
{
  __int64 result; 

  result = index - 1;
  if ( (int)result < 0 )
    return 7i64;
  return result;
}

/*
==============
ASM_TransitionList::Pop
==============
*/
const ASM_Transition *ASM_TransitionList::Pop(ASM_TransitionList *this)
{
  unsigned int v2; 

  if ( this->m_transitionListCount )
  {
    v2 = this->m_transitionListCount - 1;
    this->m_transitionListCount = v2;
    return this->m_transitionList[v2];
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 186, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ASM_TransitionList : out of bounds pop.") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
ASM_TransitionList::Push
==============
*/
bool ASM_TransitionList::Push(ASM_TransitionList *this, const ASM_Transition *pTransition)
{
  __int64 m_transitionListCount; 
  bool result; 

  m_transitionListCount = this->m_transitionListCount;
  if ( (unsigned int)m_transitionListCount < 6 )
  {
    this->m_transitionList[m_transitionListCount] = pTransition;
    result = 1;
    ++this->m_transitionListCount;
  }
  else
  {
    Com_PrintWarning(18, "ASM_TransitionList : out of bounds push.");
    return 0;
  }
  return result;
}

/*
==============
ASM_Instance::RemoveSubtree
==============
*/
void ASM_Instance::RemoveSubtree(ASM_Instance *this, ASM_Instance *pSubInst)
{
  int m_NumSubtrees; 
  int v5; 
  int v6; 
  ASM_Instance **m_Subtrees; 
  ASM_Instance **v8; 

  if ( !pSubInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 90, ASSERT_TYPE_ASSERT, "(pSubInst)", (const char *)&queryFormat, "pSubInst") )
    __debugbreak();
  m_NumSubtrees = this->m_NumSubtrees;
  v5 = 0;
  v6 = 0;
  if ( m_NumSubtrees <= 0 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\common_asm_instance.cpp", 104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find subtree %s in ASM %s of ent num %d", pSubInst->m_pASM->m_szName, this->m_pASM->m_szName, this->m_EntNum) )
      __debugbreak();
  }
  else
  {
    m_Subtrees = this->m_Subtrees;
    while ( *m_Subtrees != pSubInst )
    {
      ++v6;
      ++m_Subtrees;
      if ( v6 >= m_NumSubtrees )
        goto LABEL_8;
    }
    if ( pSubInst->m_NumSubtrees > 0 )
    {
      v8 = pSubInst->m_Subtrees;
      do
      {
        ASM_Instance::FreeInstance(*v8);
        ++v5;
        ++v8;
      }
      while ( v5 < pSubInst->m_NumSubtrees );
    }
    pSubInst->m_bInUse = 0;
    this->m_Subtrees[v6] = (ASM_Instance *)*((_QWORD *)&this->m_CurState + this->m_NumSubtrees--);
  }
}

/*
==============
ASM_History::Reset
==============
*/
void ASM_History::Reset(ASM_History *this)
{
  unsigned __int64 v1; 

  this->m_frontIndex = 0;
  do
  {
    v1 = (unsigned __int64)this->m_frontIndex << 6;
    *(int *)((char *)&this->m_events[0].m_time + v1) = -1;
    *(_QWORD *)((char *)&this->m_events[0].m_fromState + v1) = 0i64;
    ++this->m_frontIndex;
  }
  while ( this->m_frontIndex < 8 );
  *((_BYTE *)this + 6) &= ~1u;
  this->m_entNum = 2047;
  this->m_frontIndex = 7;
}

/*
==============
ASM_HistoryEvent::Reset
==============
*/
void ASM_HistoryEvent::Reset(ASM_HistoryEvent *this)
{
  this->m_time = -1;
  *(_QWORD *)&this->m_fromState = 0i64;
}

/*
==============
ASM_HistoryEvent::Set
==============
*/
void ASM_HistoryEvent::Set(ASM_HistoryEvent *this, int time, int fromState, const ASM_TransitionList *pTransitionList)
{
  this->m_time = time;
  this->m_fromState = fromState;
  if ( pTransitionList )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r9]
      vmovups ymmword ptr [rcx+8], ymm0
      vmovups xmm1, xmmword ptr [r9+20h]
      vmovups xmmword ptr [rcx+28h], xmm1
      vmovsd  xmm0, qword ptr [r9+30h]
      vmovsd  qword ptr [rcx+38h], xmm0
    }
  }
  else
  {
    this->m_transitionList.m_transitionListCount = 0;
  }
}

/*
==============
ASM_History::Size
==============
*/
__int64 ASM_History::Size(ASM_History *this)
{
  return 8i64;
}

