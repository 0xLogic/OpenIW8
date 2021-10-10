/*
==============
BT_GrenadeDefined
==============
*/

int __fastcall BT_GrenadeDefined(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeDefined@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAvoid_Terminate
==============
*/

int __fastcall BT_GrenadeAvoid_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAvoid_Terminate@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
AIScriptedInterface::Grenade_Acquire
==============
*/

int __fastcall AIScriptedInterface::Grenade_Acquire(AIScriptedInterface *this, int timeStarted)
{
  return ?Grenade_Acquire@AIScriptedInterface@@QEBAHH@Z(this, timeStarted);
}

/*
==============
BT_GrenadeAcquire
==============
*/

int __fastcall BT_GrenadeAcquire(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAcquire@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAttemptEscape
==============
*/

int __fastcall BT_GrenadeAttemptEscape(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAttemptEscape@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeEscape_Init
==============
*/

int __fastcall BT_GrenadeEscape_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeEscape_Init@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAcquire_Init
==============
*/

int __fastcall BT_GrenadeAcquire_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAcquire_Init@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAcquire_Terminate
==============
*/

int __fastcall BT_GrenadeAcquire_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAcquire_Terminate@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAvoid
==============
*/

int __fastcall BT_GrenadeAvoid(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAvoid@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_AttemptGrenadeReturn
==============
*/

int __fastcall BT_AttemptGrenadeReturn(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_AttemptGrenadeReturn@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeEscape
==============
*/

int __fastcall BT_GrenadeEscape(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeEscape@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeAvoid_Init
==============
*/

int __fastcall BT_GrenadeAvoid_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeAvoid_Init@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_GrenadeEscape_Terminate
==============
*/

int __fastcall BT_GrenadeEscape_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_GrenadeEscape_Terminate@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_ShouldGrenadeReturnThrow
==============
*/

int __fastcall BT_ShouldGrenadeReturnThrow(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_ShouldGrenadeReturnThrow@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_ShouldGrenadeReturnThrow
==============
*/
_BOOL8 BT_ShouldGrenadeReturnThrow(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v7, Ent);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
    return 0i64;
  if ( !Ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 28, ASSERT_TYPE_ASSERT, "(pEnt->sentient)", (const char *)&queryFormat, "pEnt->sentient") )
    __debugbreak();
  return AIScriptedInterface::HasGrenadeValid(m_pAI) && AIScriptedInterface::Grenade_ShouldReturnThrow(m_pAI);
}

/*
==============
BT_GrenadeDefined
==============
*/
_BOOL8 BT_GrenadeDefined(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIWrapper v6; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v6, Ent);
  return v6.m_pAI && AIScriptedInterface::HasGrenadeValid(v6.m_pAI);
}

/*
==============
BT_AttemptGrenadeReturn
==============
*/
_BOOL8 BT_AttemptGrenadeReturn(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v7, Ent);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 57, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Grenade_AttemptReturn(m_pAI, 22500.0);
}

/*
==============
BT_GrenadeAcquire
==============
*/
int BT_GrenadeAcquire(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_bt_instance_data *InstanceData; 
  AIWrapper v9; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v9, Ent);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 181, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( !AIScriptedInterface::HasGrenadeValid(m_pAI) )
    return 0;
  InstanceData = BT_GetInstanceData(*pInOutInstIndex);
  if ( !InstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 187, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  return AIScriptedInterface::Grenade_Acquire(m_pAI, InstanceData->m_TimeStarted);
}

/*
==============
BT_GrenadeAcquire_Init
==============
*/
int BT_GrenadeAcquire_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  ai_bt_instance_data *v6; 
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v9; 
  int result; 
  AIWrapper v11; 

  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 72, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  v6 = BT_AllocInstanceData(pInOutInstIndex);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 75, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  v6->m_TimeStarted = level.time;
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v11, Ent);
  m_pAI = v11.m_pAI;
  if ( !v11.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 80, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v9 = m_pAI->GetAI(m_pAI);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 82, ASSERT_TYPE_ASSERT, "(pScripted)", (const char *)&queryFormat, "pScripted") )
    __debugbreak();
  result = EntHandle::isDefined((EntHandle *)(v9 + 1192));
  if ( result )
  {
    *(_DWORD *)(v9 + 816) = *(_DWORD *)(v9 + 1244);
    *(_DWORD *)(v9 + 820) = *(_DWORD *)(v9 + 1248);
    *(_DWORD *)(v9 + 824) = *(_DWORD *)(v9 + 1252);
    *(_QWORD *)(v9 + 840) = 0i64;
    EntHandle::setEnt((EntHandle *)(v9 + 856), NULL);
    EntHandle::setEnt((EntHandle *)(v9 + 848), NULL);
    *(_BYTE *)(v9 + 864) = 1;
    v6->u.grenadeReturn.m_bOldBlocking = *(_BYTE *)(v9 + 2983);
    *(_BYTE *)(v9 + 2983) = 0;
    AIScriptedInterface::ClearBlockingEntity(m_pAI);
    return 1;
  }
  return result;
}

/*
==============
BT_GrenadeAcquire_Terminate
==============
*/
__int64 BT_GrenadeAcquire_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  AIWrapper v9; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v9, Ent);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 195, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 198, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  *(_BYTE *)(v7 + 2983) = BT_GetInstanceData(*pInOutInstIndex)->u.grenadeReturn.m_bOldBlocking;
  BT_FreeInstanceData(pInOutInstIndex);
  AIScriptedInterface::ClearBTGoal(m_pAI, AI_BT_GOAL_PRIORITY_CRITICAL);
  return 1i64;
}

/*
==============
BT_GrenadeAttemptEscape
==============
*/
_BOOL8 BT_GrenadeAttemptEscape(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  AIWrapper v7; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v7, Ent);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 213, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::HasGrenadeValid(m_pAI) && AIScriptedInterface::Grenade_AttemptEscape(m_pAI);
}

/*
==============
BT_GrenadeEscape_Init
==============
*/
__int64 BT_GrenadeEscape_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  ai_bt_instance_data *v8; 
  AIWrapper v10; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v10, Ent);
  m_pAI = v10.m_pAI;
  if ( !v10.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 224, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 227, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  v8 = BT_AllocInstanceData(pInOutInstIndex);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 230, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  v8->m_TimeStarted = level.time;
  v8->u.grenadeReturn.m_bOldBlocking = *(_BYTE *)(v7 + 2983);
  *(_BYTE *)(v7 + 2983) = 0;
  *(_BYTE *)(v7 + 1207) = 1;
  AIScriptedInterface::ClearBlockingEntity(m_pAI);
  return 1i64;
}

/*
==============
BT_GrenadeEscape
==============
*/
__int64 BT_GrenadeEscape(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_bt_instance_data *InstanceData; 
  bool v8; 
  AIWrapper v10; 
  float v11; 
  float v12; 
  float v13; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v10, Ent);
  m_pAI = v10.m_pAI;
  if ( !v10.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 247, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  InstanceData = BT_GetInstanceData(*pInOutInstIndex);
  if ( !InstanceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 250, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  m_pAI->GetVelocity(m_pAI, (vec3_t *)&v11);
  v8 = level.time > InstanceData->m_TimeStarted && !AICommonInterface::HasPath(m_pAI) && !AIScriptedInterface::PathPending(m_pAI) && fsqrt((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13)) <= 0.0099999998;
  if ( !AIScriptedInterface::HasGrenadeValid(m_pAI) || v8 )
    return 0i64;
  else
    return 2i64;
}

/*
==============
BT_GrenadeEscape_Terminate
==============
*/
__int64 BT_GrenadeEscape_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  AIWrapper v9; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v9, Ent);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 264, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  AIScriptedInterface::ClearBTGoal(m_pAI, AI_BT_GOAL_PRIORITY_CRITICAL);
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 269, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  *(_BYTE *)(v7 + 2983) = BT_GetInstanceData(*pInOutInstIndex)->u.grenadeReturn.m_bOldBlocking;
  *(_BYTE *)(v7 + 1207) = 0;
  BT_FreeInstanceData(pInOutInstIndex);
  return 1i64;
}

/*
==============
BT_GrenadeAvoid
==============
*/
__int64 BT_GrenadeAvoid(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  ai_bt_instance_data *InstanceData; 
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  bool HasGrenadeValid; 
  bool v10; 
  Ai_Asm *v11; 
  ASM_Instance *Instance; 
  scr_string_t end; 
  scr_string_t grenade_dive; 
  Ai_Asm *v15; 
  scr_string_t v16; 
  scr_string_t grenade_cower; 
  Ai_Asm *v18; 
  bool v19; 
  int v20; 
  int FuseEndTime; 
  int v22; 
  int v23; 
  int m_GrenadeExplodeTime; 
  __int64 result; 
  AIWrapper v26; 

  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 280, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  InstanceData = BT_GetInstanceData(*pInOutInstIndex);
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v26, Ent);
  m_pAI = v26.m_pAI;
  if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 285, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  HasGrenadeValid = AIScriptedInterface::HasGrenadeValid(m_pAI);
  v10 = !HasGrenadeValid;
  if ( !HasGrenadeValid && InstanceData->u.grenadeAvoid.m_GrenadeExplodeTime < 0 )
    InstanceData->u.grenadeAvoid.m_GrenadeExplodeTime = level.time;
  v11 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v11, NULL, entNum);
  if ( Instance )
  {
    end = scr_const.end;
    grenade_dive = scr_const.grenade_dive;
    v15 = Ai_Asm::Singleton();
    if ( Common_Asm::EphemeralEventFired(v15, Instance, grenade_dive, end) )
      return 1i64;
    v16 = scr_const.end;
    grenade_cower = scr_const.grenade_cower;
    v18 = Ai_Asm::Singleton();
    if ( Common_Asm::EphemeralEventFired(v18, Instance, grenade_cower, v16) )
    {
      v19 = InstanceData->u.grenadeAvoid.m_GrenadeExplodeTime < 0;
      InstanceData->u.grenadeAvoid.m_bCowerLooping = 1;
      if ( v19 )
      {
        v20 = G_irand(-300, 300) + 3000;
        FuseEndTime = AIScriptedInterface::Grenade_GetFuseEndTime(m_pAI);
        v22 = level.time + v20;
        v23 = G_irand(100, 500) + FuseEndTime;
        if ( v23 > v22 )
          v22 = v23;
        InstanceData->u.grenadeAvoid.m_EndTime = v22;
      }
      else
      {
        InstanceData->u.grenadeAvoid.m_EndTime = level.time;
      }
    }
  }
  if ( InstanceData->u.grenadeAvoid.m_bCowerLooping )
  {
    m_GrenadeExplodeTime = InstanceData->u.grenadeAvoid.m_GrenadeExplodeTime;
    if ( m_GrenadeExplodeTime >= 0 && level.time - m_GrenadeExplodeTime > 500 )
      return 1i64;
LABEL_23:
    result = 2i64;
    if ( level.time <= InstanceData->u.grenadeAvoid.m_EndTime )
      return result;
    return 1i64;
  }
  if ( !v10 )
    goto LABEL_23;
  return 1i64;
}

/*
==============
BT_GrenadeAvoid_Init
==============
*/
__int64 BT_GrenadeAvoid_Init(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  __int64 v5; 
  ai_bt_instance_data *v6; 
  int v7; 
  ai_scripted_t *AIScripted; 
  __int64 v10; 

  v5 = entNum;
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 330, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  v6 = BT_AllocInstanceData(pInOutInstIndex);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 332, ASSERT_TYPE_ASSERT, "(pData)", (const char *)&queryFormat, "pData") )
    __debugbreak();
  v6->m_TimeStarted = level.time;
  v7 = level.time + 10000;
  v6->u.grenadeAvoid.m_GrenadeExplodeTime = -1;
  v6->u.grenadeAvoid.m_EndTime = v7;
  v6->u.grenadeAvoid.m_bCowerLooping = 0;
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  AIScripted = AI_GetAIScripted(&g_entities[v5]);
  if ( AIScripted )
  {
    AIScripted->blackboard.m_bGrenadeAvoid = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 341, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    MEMORY[0x235] = 1;
  }
  return 1i64;
}

/*
==============
BT_GrenadeAvoid_Terminate
==============
*/
__int64 BT_GrenadeAvoid_Terminate(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  ai_scripted_t *AIScripted; 

  AIScripted = AI_GetAIScripted(&g_entities[entNum]);
  if ( !AIScripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 350, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted->blackboard.m_bGrenadeAvoid = 0;
  if ( !pInOutInstIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 353, ASSERT_TYPE_ASSERT, "(pInOutInstIndex)", (const char *)&queryFormat, "pInOutInstIndex") )
    __debugbreak();
  BT_FreeInstanceData(pInOutInstIndex);
  return 1i64;
}

/*
==============
AIScriptedInterface::Grenade_Acquire
==============
*/
__int64 AIScriptedInterface::Grenade_Acquire(AIScriptedInterface *this, int timeStarted)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  ai_scripted_t *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  gentity_s *v13; 
  ai_scripted_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  ai_scripted_t *v18; 
  float v19; 
  float v20; 
  AINavigator2D *v21; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *pOutArea; 
  vec3_t endPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 111, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_61;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    LODWORD(outClosestPos) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(pOutArea) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", pOutArea) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 112, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  if ( level.time - timeStarted <= 250 && !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
    return 2i64;
  v9 = this->m_pAI;
  v10 = v9->grenade.pGrenade.number;
  if ( (unsigned int)(v10 - 1) >= 0x7FF )
  {
    LODWORD(pOutArea) = 2047;
    LODWORD(outClosestPos) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
      __debugbreak();
  }
  v11 = v9->grenade.pGrenade.number;
  if ( (unsigned int)(v11 - 1) >= 0x800 )
  {
    LODWORD(pOutArea) = 2048;
    LODWORD(outClosestPos) = v11 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v12 = v11 - 1;
  if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v12] )
  {
    LODWORD(pOutArea) = v9->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", pOutArea) )
      __debugbreak();
  }
  v13 = &g_entities[v9->grenade.pGrenade.number - 1];
  v14 = this->m_pAI;
  v15 = v13->r.currentOrigin.v[1] - v14->ent->r.currentOrigin.v[1];
  v16 = v13->r.currentOrigin.v[0] - v14->ent->r.currentOrigin.v[0];
  v17 = (float)(v15 * v15) + (float)(v16 * v16);
  if ( v14->combat.damageShield && v13->nextthink - level.time < 2000 && v17 < AI_GRENADE_RETURN_SANITY_DIST_SQ )
    v13->nextthink = level.time + 2000;
  if ( v17 >= AI_GRENADE_PICKUP_DIST_SQ )
  {
    v18 = this->m_pAI;
    v19 = v18->grenade.pickupPos.v[1] - v18->ent->r.currentOrigin.v[1];
    v20 = v18->grenade.pickupPos.v[0] - v18->ent->r.currentOrigin.v[0];
    if ( (float)((float)(v19 * v19) + (float)(v20 * v20)) >= AI_GRENADE_PICKUP_DIST_SQ )
      goto LABEL_62;
  }
  if ( AICommonInterface::HasPath(this) )
  {
    if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 130, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
      __debugbreak();
    if ( !AICommonInterface::Use3DPathing(this) )
    {
      v21 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
      pPathSpec = *AINavigator2D::GetPathSpec(v21);
      AINavigator::GetUpVector(v21, &outUp);
      Nav_GetClosestVerticalPos(&this->m_pAI->grenade.pickupPos, &outUp, v21->m_Layer, &v21->m_pSpace->hSpace, &pPathSpec, &endPos, NULL);
      if ( !AINavigator::IsStraightLineReachable(this->m_pAI->pNavigator, &endPos) )
      {
LABEL_62:
        if ( AICommonInterface::HasPath(this) )
          return 2i64;
        return 0i64;
      }
    }
  }
  if ( AICommonInterface::HasPath(this) )
  {
    AICommonInterface::GetPathFinalGoal(this, &endPos);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_pAI->ent->r.currentOrigin.v[2] - endPos.v[2]) & _xmm) > 32.0 )
      return 0i64;
  }
  if ( !G_Missile_IsGrenade(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_grenade.cpp", 167, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  v13->c.missile.flags |= 0x800u;
  return 1i64;
}

