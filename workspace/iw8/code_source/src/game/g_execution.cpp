/*
==============
G_Execution_GetExecutionAnimDurationRemaining
==============
*/

int __fastcall G_Execution_GetExecutionAnimDurationRemaining(const gentity_s *const victimEnt, const int serverTime)
{
  return ?G_Execution_GetExecutionAnimDurationRemaining@@YAHQEBUgentity_s@@H@Z(victimEnt, serverTime);
}

/*
==============
G_Execution_Update
==============
*/

void __fastcall G_Execution_Update(gentity_s *playerEnt)
{
  ?G_Execution_Update@@YAXPEAUgentity_s@@@Z(playerEnt);
}

/*
==============
G_Execution_Cancel
==============
*/

void __fastcall G_Execution_Cancel(gentity_s *playerEnt)
{
  ?G_Execution_Cancel@@YAXPEAUgentity_s@@@Z(playerEnt);
}

/*
==============
G_Execution_UpdateHint
==============
*/

void __fastcall G_Execution_UpdateHint(gentity_s *playerEnt)
{
  ?G_Execution_UpdateHint@@YAXPEAUgentity_s@@@Z(playerEnt);
}

/*
==============
G_Execution_Begin
==============
*/

void __fastcall G_Execution_Begin(gentity_s *attackerEnt, gentity_s *victimEnt)
{
  ?G_Execution_Begin@@YAXPEAUgentity_s@@0@Z(attackerEnt, victimEnt);
}

/*
==============
G_Execution_Clear
==============
*/

void __fastcall G_Execution_Clear(gentity_s *ent)
{
  ?G_Execution_Clear@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Execution_IsAttackerInValidState
==============
*/

bool __fastcall G_Execution_IsAttackerInValidState(const gentity_s *const attackerEnt)
{
  return ?G_Execution_IsAttackerInValidState@@YA_NQEBUgentity_s@@@Z(attackerEnt);
}

/*
==============
G_Execution_IsBlocked
==============
*/

bool __fastcall G_Execution_IsBlocked(const gentity_s *const attackerEnt, const gentity_s *const victimEnt)
{
  return ?G_Execution_IsBlocked@@YA_NQEBUgentity_s@@0@Z(attackerEnt, victimEnt);
}

/*
==============
G_Execution_IsCandidateValid
==============
*/

bool __fastcall G_Execution_IsCandidateValid(const playerState_s *const attackerPs, const vec3_t *attackerEyeOrigin, const gentity_s *const entity, GHandler *handler)
{
  return ?G_Execution_IsCandidateValid@@YA_NQEBUplayerState_s@@AEBTvec3_t@@QEBUgentity_s@@PEAVGHandler@@@Z(attackerPs, attackerEyeOrigin, entity, handler);
}

/*
==============
G_Execution_InitializeCorpse
==============
*/

bool __fastcall G_Execution_InitializeCorpse(gentity_s *victimEnt, gentity_s *corpseEnt)
{
  return ?G_Execution_InitializeCorpse@@YA_NPEAUgentity_s@@0@Z(victimEnt, corpseEnt);
}

/*
==============
G_Execution_Check
==============
*/

void __fastcall G_Execution_Check(GClientTaskQueue *taskQueue, const usercmd_s *oldcmd, const usercmd_s *cmd, gentity_s *playerEnt)
{
  ?G_Execution_Check@@YAXAEAVGClientTaskQueue@@PEBUusercmd_s@@1PEAUgentity_s@@@Z(taskQueue, oldcmd, cmd, playerEnt);
}

/*
==============
G_Execution_IsInExecution
==============
*/

bool __fastcall G_Execution_IsInExecution(const gentity_s *const entity)
{
  return ?G_Execution_IsInExecution@@YA_NQEBUgentity_s@@@Z(entity);
}

/*
==============
G_Execution_Begin
==============
*/
void G_Execution_Begin(gentity_s *attackerEnt, gentity_s *victimEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const char *v8; 
  unsigned int equippedExecution; 
  ExecutionVictimStance v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 999, ASSERT_TYPE_ASSERT, "( attackerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attackerEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1002, ASSERT_TYPE_ASSERT, "( attackerPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPs", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( EntityPlayerStateConst->equippedExecution == 255 )
  {
    LODWORD(v12) = 255;
    LODWORD(v11) = 255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1003, ASSERT_TYPE_ASSERT, "( attackerPs->equippedExecution ) != ( ((1<<8)-1) )", "%s != %s\n\t%i, %i", "attackerPs->equippedExecution", "INVALID_EXECUTION_DEF", v11, v12) )
      __debugbreak();
  }
  v5 = G_GetEntityPlayerStateConst(victimEnt);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1006, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( v5->activeExecution != 255 )
  {
    v6 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer == 3 )
      goto LABEL_22;
    v7 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer == 4 )
    {
LABEL_22:
      v8 = j_va("player %i victim %i theirVictim %i: cancelling new victim's active execution", (unsigned int)attackerEnt->s.number, (unsigned int)victimEnt->s.number, (unsigned int)v5->activeExecutionPartnerEntNum);
      Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v8);
    }
    G_Execution_Exit(victimEnt);
  }
  equippedExecution = EntityPlayerStateConst->equippedExecution;
  v10 = G_Execution_CalcVictimStance(victimEnt);
  G_Execution_Begin_Internal(attackerEnt, victimEnt, equippedExecution, v10, 0, level.time);
  G_Execution_Begin_Internal(victimEnt, attackerEnt, equippedExecution, v10, 1, level.time);
}

/*
==============
G_Execution_Begin
==============
*/
void G_Execution_Begin(gentity_s *attackerEnt, GClientTaskQueue *outputQueue)
{
  unsigned __int8 *ParameterInternal; 
  gentity_s *GEntity; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_tasks.h", 213, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tShouldn't access parameters from within the user move system, must be done as a post-process.", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  ParameterInternal = (unsigned __int8 *)GClientTaskQueue::GetParameterInternal(outputQueue, 1u, 1u);
  GEntity = G_GetGEntity(*ParameterInternal);
  G_Execution_Begin(attackerEnt, GEntity);
}

/*
==============
G_Execution_Begin_Internal
==============
*/
void G_Execution_Begin_Internal(gentity_s *ent, gentity_s *otherEnt, unsigned int executionIndex, ExecutionVictimStance victimStance, bool isVictim, int startTime)
{
  unsigned __int64 v6; 
  __int64 v10; 
  playerState_s *EntityPlayerState; 
  const ExecutionDef *Def; 
  int v13; 
  gclient_s *client; 
  gagent_s *agent; 
  unsigned __int64 animType; 
  unsigned __int64 v17; 
  bool v18; 
  DObj *ServerDObjForEnt; 
  unsigned int *RandomSeed; 
  GHandler *Handler; 
  GPlayer_Asm *v22; 
  int number; 
  Ai_Asm *v24; 
  ASM_Instance *Instance; 
  scr_string_t aiasm_exec_attacker; 
  ASM_Instance *v27; 
  Ai_Asm *v28; 
  ASM_Error v29; 
  const XAnimParts *Parts; 
  const char *v31; 
  GHandler *v32; 
  GWeaponMap *v33; 
  unsigned int *holdrand; 
  PmoveASMArgs pmoveArgs; 
  ExecutionAnimError outError; 
  unsigned int outAnimIndex; 

  v6 = victimStance;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.number);
  if ( !*(_DWORD *)(v10 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 884, ASSERT_TYPE_ASSERT, "(ci->infoValid)", (const char *)&queryFormat, "ci->infoValid") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 887, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  Def = BG_Execution_GetDef(executionIndex);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 890, ASSERT_TYPE_ASSERT, "( execDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "execDef", "nullptr", NULL, NULL) )
    __debugbreak();
  G_Execution_Clear(ent);
  v13 = startTime;
  EntityPlayerState->activeExecutionIsVictim = isVictim;
  EntityPlayerState->activeExecution = executionIndex;
  EntityPlayerState->activeExecutionStartTime = v13;
  EntityPlayerState->activeExecutionVictimStance = v6;
  EntityPlayerState->activeExecutionPartnerEntNum = G_GetEntityIndex(otherEnt);
  *(_WORD *)&EntityPlayerState->activeExecutionIsPropVisible = 0;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0x38u);
  *(_QWORD *)EntityPlayerState->velocity.v = 0i64;
  if ( ent->client )
  {
    ent->client->executionState.partnerEntNum = G_GetEntityIndex(otherEnt);
    ent->client->executionState.prevTime = 0.0;
    client = ent->client;
    client->sess.cs.execution = executionIndex;
    client->sess.cs.executionStance = v6;
    client->sess.cs.executionStartTime = v13;
  }
  else
  {
    if ( !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 921, ASSERT_TYPE_ASSERT, "( ent->agent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent->agent", "nullptr", NULL, NULL) )
      __debugbreak();
    ent->agent->executionState.partnerEntNum = G_GetEntityIndex(otherEnt);
    ent->agent->executionState.prevTime = 0.0;
    agent = ent->agent;
    agent->agentState.execution = executionIndex;
    agent->agentState.executionStance = v6;
    agent->agentState.executionStartTime = v13;
  }
  animType = (int)Def->animType;
  v17 = animType;
  if ( (unsigned int)animType > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", animType, "unsigned", (unsigned int)animType) )
    __debugbreak();
  BG_SetConditionValue((characterInfo_t *)v10, 49, v17);
  BG_SetConditionValue((characterInfo_t *)v10, 50, v6);
  v18 = isVictim;
  BG_SetConditionValue((characterInfo_t *)v10, 51, isVictim);
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 938, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_DWORD *)(v10 + 14640) = executionIndex;
  *(_DWORD *)(v10 + 14644) = v6;
  *(_DWORD *)(v10 + 14648) = v13;
  BG_Execution_UpdateScrubTime((const characterInfo_t *const)v10, ServerDObjForEnt, level.time, 0);
  if ( SV_IsAgentScripted(ent) )
  {
    number = ent->s.number;
    v24 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v24, NULL, number);
    aiasm_exec_attacker = scr_const.aiasm_exec_attacker;
    v27 = Instance;
    if ( v18 )
      aiasm_exec_attacker = scr_const.aiasm_exec_victim;
    v28 = Ai_Asm::Singleton();
    v29 = Common_Asm::SetState(v28, NULL, v27, aiasm_exec_attacker, 0, NULL);
    if ( v29 )
    {
      LODWORD(holdrand) = v29;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D82CE0, 6324i64, (unsigned int)ent->s.number, v27->m_pASM->m_szName, holdrand);
    }
  }
  else
  {
    RandomSeed = G_GetRandomSeed();
    Handler = GHandler::getHandler();
    BG_AnimScriptEvent(Handler, EntityPlayerState, ANIM_ET_EXECUTION, 0, 1, RandomSeed);
    if ( PlayerASM_IsEnabled() )
    {
      memset(&pmoveArgs, 0, 24);
      *(_QWORD *)&pmoveArgs.delta = 0i64;
      pmoveArgs.handler = GHandler::getHandler();
      pmoveArgs.holdrand = G_GetRandomSeed();
      v22 = GPlayer_Asm::Singleton();
      if ( BgPlayer_Asm::TickPS(v22, EntityPlayerState, &pmoveArgs, 0, 1) )
        BG_PlayerASM_GetAnimLength(EntityPlayerState, MOVEMENT);
    }
    BG_AnimationMP_PlayerToEntityAnimation(EntityPlayerState, &ent->s);
  }
  outAnimIndex = 0;
  outError = UNKNOWN;
  if ( !BG_Execution_GetActiveAnimIndex(&ent->s, v18, &outAnimIndex, &outError) && outError != 2 )
  {
    Parts = XAnimGetParts(ServerDObjForEnt->tree->anims, outAnimIndex);
    if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 972, ASSERT_TYPE_ASSERT, "( parts ) != ( nullptr )", "%s != %s\n\t%p, %p", "parts", "nullptr", NULL, NULL) )
      __debugbreak();
    v31 = "attacker";
    if ( v18 )
      v31 = "victim";
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D82DA0, 5635i64, (unsigned int)ent->s.number, v31, Parts->name);
  }
  v32 = GHandler::getHandler();
  v33 = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(v33, EntityPlayerState, &ent->s, 0, v32);
}

/*
==============
G_Execution_CalcVictimStance
==============
*/
ExecutionVictimStance G_Execution_CalcVictimStance(const gentity_s *const victimEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  AIScriptedInterface *m_pAI; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 
  __int64 v6; 
  AIWrapper v7; 

  if ( !victimEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 611, ASSERT_TYPE_ASSERT, "( victimEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(victimEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 614, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !SV_IsAgentScripted(victimEnt) )
  {
    EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(EntityPlayerStateConst);
    if ( EffectiveStanceForWorldModelAnimation )
    {
      if ( EffectiveStanceForWorldModelAnimation == PM_EFF_STANCE_PRONE )
        return 2;
      if ( EffectiveStanceForWorldModelAnimation != PM_EFF_STANCE_DUCKED )
      {
        if ( EffectiveStanceForWorldModelAnimation == PM_EFF_STANCE_LASTSTANDCRAWL )
          return 3;
        LODWORD(v6) = EffectiveStanceForWorldModelAnimation;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 638, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown effectiveStance %i encountered.", v6) )
          __debugbreak();
      }
    }
    return 1;
  }
  AIWrapper::AIWrapper(&v7, victimEnt);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 620, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::GetExecutionVictimStance(m_pAI);
}

/*
==============
G_Execution_CanStand
==============
*/
bool G_Execution_CanStand(const gentity_s *const entity, const gentity_s *const otherEnt)
{
  const playerState_s *ps; 
  int skipEntities[2]; 
  Bounds bounds; 
  trace_t results; 

  ps = G_GetEntityPlayerStateConst(entity);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  G_Execution_GetBounds(entity, &bounds);
  skipEntities[0] = entity->s.number;
  skipEntities[1] = otherEnt->s.number;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &entity->r.currentOrigin, &entity->r.currentOrigin, &bounds, skipEntities, 2, 65553, ps, 0, NULL, NULL);
  return !results.allsolid && !results.startsolid;
}

/*
==============
G_Execution_Cancel
==============
*/
void G_Execution_Cancel(gentity_s *playerEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  __int16 activeExecutionPartnerEntNum; 
  gentity_s *GEntity; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const char *v7; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1549, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  activeExecutionPartnerEntNum = EntityPlayerStateConst->activeExecutionPartnerEntNum;
  if ( activeExecutionPartnerEntNum != 2047 )
  {
    GEntity = G_GetGEntity(activeExecutionPartnerEntNum);
    G_Execution_Clear(GEntity);
  }
  v5 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 3 )
    goto LABEL_14;
  v6 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 4 )
  {
LABEL_14:
    v7 = j_va("player %i victim %i execution cancelled", (unsigned int)playerEnt->s.number, (unsigned int)EntityPlayerStateConst->activeExecutionPartnerEntNum);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v7);
  }
  G_Execution_Clear(playerEnt);
}

/*
==============
G_Execution_Check
==============
*/
void G_Execution_Check(GClientTaskQueue *taskQueue, const usercmd_s *oldcmd, const usercmd_s *cmd, gentity_s *playerEnt)
{
  const dvar_t *v10; 
  playerState_s *EntityPlayerState; 
  gentity_s *v12; 
  const playerState_s *EntityPlayerStateConst; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v14; 
  AIScriptedInterface *m_pAI; 
  bool IsAttackerInValidState; 
  bool v17; 
  unsigned int v18; 
  bool v19; 
  __int64 v20; 
  const char *v21; 
  GHandler *v22; 
  unsigned int BestCandidate; 
  const char *v24; 
  const char *v25; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  const gentity_s *GEntity; 
  GHandler *v29; 
  char v33; 
  const playerState_s *v34; 
  const char *v35; 
  GWeaponMap *v36; 
  const char *v37; 
  int v38; 
  char taskData[8]; 
  __int64 v40; 
  AIWrapper v41; 
  vec3_t outState[2]; 

  v40 = -2i64;
  v10 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    EntityPlayerState = G_GetEntityPlayerState(playerEnt);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 745, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
      __debugbreak();
    v12 = playerEnt;
    if ( EntityPlayerState->equippedExecution == 255 )
      goto LABEL_76;
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    v14 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)EntityPlayerStateConst;
    if ( EntityPlayerStateConst && !BG_IsPlayerInExecution(EntityPlayerStateConst) )
    {
      if ( SV_IsAgentScripted(playerEnt) )
      {
        AIWrapper::AIWrapper(&v41, playerEnt);
        m_pAI = v41.m_pAI;
        if ( !v41.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 192, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        IsAttackerInValidState = m_pAI->CanExecute(m_pAI);
LABEL_25:
        if ( IsAttackerInValidState )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_Check");
          *(_QWORD *)outState[0].v = 0i64;
          G_Execution_GetState(playerEnt, (GExecutionState **)outState);
          v20 = *(_QWORD *)outState[0].v;
          if ( *(int *)(*(_QWORD *)outState[0].v + 8i64) > 0 )
          {
            if ( (cmd->buttons & 4) != 0 )
            {
              Handler = GHandler::getHandler();
              Instance = GWeaponMap::GetInstance();
              G_Execution_GetEyePosition(0, Instance, EntityPlayerState, &EntityPlayerState->origin, Handler, outState);
              GEntity = G_GetGEntity(*(_DWORD *)(v20 + 12));
              v29 = GHandler::getHandler();
              if ( G_Execution_IsCandidateValid(EntityPlayerState, outState, GEntity, v29) )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_hold_duration, "execution_hold_duration");
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, ebx
                  vmulss  xmm2, xmm1, cs:__real@3a83126f
                  vcomiss xmm2, xmm0
                }
                if ( v33 )
                {
LABEL_74:
                  Sys_ProfEndNamedEvent();
                  return;
                }
                v34 = G_GetEntityPlayerStateConst(GEntity);
                if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 670, ASSERT_TYPE_ASSERT, "(attackerPs)", (const char *)&queryFormat, "attackerPs") )
                  __debugbreak();
                if ( PM_GetEffectiveStance(v34) && !G_Execution_CanStand(playerEnt, GEntity) || G_Execution_CalcVictimStance(GEntity) == HALF && !G_Execution_CanStand(GEntity, playerEnt) )
                {
                  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
                  {
                    v35 = j_va("player %i victim %i: failed to start execution due to blocked geo", (unsigned int)playerEnt->s.number, (unsigned int)GEntity->s.number);
                    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v35);
                  }
                  G_Execution_ClearButtonState(playerEnt);
                  v36 = GWeaponMap::GetInstance();
                  BG_AddUnPredictableEventToPlayerstate(EV_STANCE_INVALID, 1u, level.time, v36, EntityPlayerState);
                  goto LABEL_74;
                }
                if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
                {
                  v37 = j_va("player %i victim %i: starting execution at time %i", (unsigned int)playerEnt->s.number, (unsigned int)GEntity->s.number, (unsigned int)level.time);
                  Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v37);
                }
                v38 = *(_DWORD *)(v20 + 12);
                if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 703, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
                  __debugbreak();
                if ( (v38 < 0 || (unsigned int)v38 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v38, "signed", v38) )
                  __debugbreak();
                taskData[0] = v38;
                if ( !GClientTaskQueue::ValidateOwner(taskQueue, playerEnt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 708, ASSERT_TYPE_ASSERT, "( outTaskQueue.ValidateOwner( playerEnt ) )", (const char *)&queryFormat, "outTaskQueue.ValidateOwner( playerEnt )") )
                  __debugbreak();
                GClientTaskQueue::AddTaskInternal(taskQueue, G_Execution_Begin, taskData, 1u, 1u, "PlayerExecution");
LABEL_73:
                G_Execution_ClearButtonState(playerEnt);
                goto LABEL_74;
              }
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
                goto LABEL_73;
              v24 = j_va("player %i clearing button due to failure", (unsigned int)playerEnt->s.number);
            }
            else
            {
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
                goto LABEL_73;
              v24 = j_va("player %i released button", (unsigned int)playerEnt->s.number);
            }
          }
          else
          {
            if ( ((LOBYTE(cmd->buttons) >> 2) & ((unsigned __int8)~LOBYTE(oldcmd->buttons) >> 2) & 1) == 0 )
              goto LABEL_73;
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
            {
              v21 = j_va("player %i searching for candidate", (unsigned int)playerEnt->s.number);
              Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v21);
            }
            v22 = GHandler::getHandler();
            BestCandidate = G_Execution_FindBestCandidate(EntityPlayerState, v22);
            if ( BestCandidate != 2047 )
            {
              *(_DWORD *)(v20 + 8) = level.time;
              *(_DWORD *)(v20 + 12) = BestCandidate;
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
              {
                v25 = j_va("player %i started button hold with candidate %i", (unsigned int)playerEnt->s.number, BestCandidate);
                Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v25);
              }
              goto LABEL_74;
            }
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
              goto LABEL_73;
            v24 = j_va("player %i no candidate found", (unsigned int)playerEnt->s.number);
          }
          Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v24);
          goto LABEL_73;
        }
        goto LABEL_75;
      }
      v17 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v14 + 229, ACTIVE, 0x22u);
      v18 = v14[169].m_flags[1];
      v19 = v17 && (v18 - 7 <= 5 || v18 == 50);
      if ( v18 - 22 <= 2 || v19 )
      {
        IsAttackerInValidState = G_Execution_IsAttackerInValidState(playerEnt);
        goto LABEL_25;
      }
    }
LABEL_75:
    v12 = playerEnt;
LABEL_76:
    G_Execution_ClearButtonState(v12);
  }
}

/*
==============
G_Execution_CheckKill
==============
*/

__int64 __fastcall G_Execution_CheckKill(gentity_s *const attackerEnt, int victimEntNum, double prevTime, double curTime)
{
  char v13; 
  char v14; 
  const char *name; 
  unsigned __int8 v17; 
  __int64 result; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const char *v24; 
  gentity_s *GEntity; 
  damageReturnCode_t (__fastcall *Damage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  __int16 v27; 
  XAnimParts *outParts[7]; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  outParts[1] = (XAnimParts *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckKill");
  outParts[0] = NULL;
  *(float *)&_XMM0 = G_Execution_GetNotifyTime(attackerEnt, 0, scr_const.exec_kill, (const XAnimParts **)outParts);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v13 )
  {
    if ( outParts[0] )
      name = outParts[0]->name;
    else
      name = "<none>";
    Com_PrintError(16, "Execution Failed: attacker animation \"%s\" missing exec_kill notetrack.", name);
    goto LABEL_6;
  }
  __asm { vcomiss xmm7, xmm0 }
  if ( !v13 )
    goto LABEL_6;
  __asm { vcomiss xmm0, xmm6 }
  if ( !(v13 | v14) )
  {
LABEL_6:
    v17 = 0;
    goto LABEL_7;
  }
  v17 = 1;
  v22 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.integer == 3 )
    goto LABEL_18;
  v23 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.integer == 4 )
  {
LABEL_18:
    v24 = j_va("player %i killed victim %i", (unsigned int)attackerEnt->s.number, (unsigned int)victimEntNum);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v24);
  }
  GEntity = G_GetGEntity(victimEntNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1173, ASSERT_TYPE_ASSERT, "( victimEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  Damage = GCombat::ms_gCombatSystem->Damage;
  v27 = 0;
  Damage(GCombat::ms_gCombatSystem, GEntity, attackerEnt, attackerEnt, NULL, NULL, executionDamage, 0, 21, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)&v27);
LABEL_7:
  Sys_ProfEndNamedEvent();
  result = v17;
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
G_Execution_Clear
==============
*/
void G_Execution_Clear(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  gclient_s *client; 
  gclient_s *v5; 
  gagent_s *agent; 
  gagent_s *v7; 

  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( EntityPlayerState )
  {
    *(_QWORD *)&EntityPlayerState->activeExecution = 255i64;
    EntityPlayerState->activeExecutionVictimStance = NONE;
    *(_WORD *)&EntityPlayerState->activeExecutionIsVictim = 0;
    EntityPlayerState->activeExecutionPartnerEntNum = 2047;
    EntityPlayerState->activeExecutionIsPrimaryHidden = 0;
    p_otherFlags = &EntityPlayerState->otherFlags;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x38u);
  }
  client = ent->client;
  if ( client )
  {
    client->executionState.partnerEntNum = 2047;
    ent->client->executionState.prevTime = -1.0;
    ent->client->executionState.phase[0] = 0;
    ent->client->executionState.buttonStartTime = 0;
    ent->client->executionState.buttonEnt = 2047;
    v5 = ent->client;
    *(_QWORD *)&v5->sess.cs.execution = 255i64;
    v5->sess.cs.executionStartTime = 0;
  }
  else
  {
    agent = ent->agent;
    if ( agent )
    {
      agent->executionState.partnerEntNum = 2047;
      ent->agent->executionState.prevTime = -1.0;
      ent->agent->executionState.phase[0] = 0;
      ent->agent->executionState.buttonStartTime = 0;
      ent->agent->executionState.buttonEnt = 2047;
      v7 = ent->agent;
      *(_QWORD *)&v7->agentState.execution = 255i64;
      v7->agentState.executionStartTime = 0;
    }
  }
}

/*
==============
G_Execution_ClearButtonState
==============
*/
void G_Execution_ClearButtonState(gentity_s *playerEnt)
{
  GExecutionState *v2; 
  playerState_s *EntityPlayerState; 
  GExecutionState *outState; 

  outState = NULL;
  G_Execution_GetState(playerEnt, &outState);
  v2 = outState;
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 717, ASSERT_TYPE_ASSERT, "( state ) != ( nullptr )", "%s != %s\n\t%p, %p", "state", "nullptr", NULL, NULL) )
    __debugbreak();
  v2->buttonStartTime = 0;
  v2->buttonEnt = 2047;
  EntityPlayerState = G_GetEntityPlayerState(playerEnt);
  if ( EntityPlayerState )
    EntityPlayerState->pm_flags.m_flags[0] &= ~0x800000u;
}

/*
==============
G_Execution_EntityShapecast
==============
*/
float G_Execution_EntityShapecast(const gentity_s *const shapecastEnt, const gentity_s *const ignoreEnt, const vec3_t *goalOrigin, vec3_t *outResultOrigin)
{
  int number; 
  const dvar_t *v9; 
  PhysicsQuery_ContextSettings traceContext; 
  int skipEntities[2]; 
  Bounds bounds; 
  trace_t results; 

  _RSI = outResultOrigin;
  _RBP = goalOrigin;
  _RDI = shapecastEnt;
  G_Execution_GetBounds(shapecastEnt, &bounds);
  BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
  skipEntities[0] = _RDI->s.number;
  number = ignoreEnt->s.number;
  v9 = DVARBOOL_execution_shapecast_ignore_child_ents;
  skipEntities[1] = number;
  traceContext.m_flags = 0;
  if ( !DVARBOOL_execution_shapecast_ignore_child_ents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_shapecast_ignore_child_ents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    traceContext.m_flags |= 4;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &_RDI->r.currentOrigin, _RBP, &bounds, skipEntities, 2, 33636369, NULL, 0, NULL, &traceContext);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm2, dword ptr [rdi+130h]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm4, xmm1, dword ptr [rdi+134h]
    vsubss  xmm3, xmm0, xmm2
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm5, xmm0, dword ptr [rdi+138h]
  }
  if ( results.allsolid || results.startsolid )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vmovss  xmm0, [rsp+118h+results.fraction] }
  __asm
  {
    vmulss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rsi], xmm2
    vmulss  xmm3, xmm4, xmm0
    vaddss  xmm1, xmm3, dword ptr [rdi+134h]
    vmulss  xmm2, xmm5, xmm0
    vmovss  dword ptr [rsi+4], xmm1
    vaddss  xmm3, xmm2, dword ptr [rdi+138h]
    vmovss  dword ptr [rsi+8], xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
G_Execution_Exit
==============
*/
void G_Execution_Exit(gentity_s *playerEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  __int16 activeExecutionPartnerEntNum; 
  gentity_s *GEntity; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const char *v7; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1549, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  activeExecutionPartnerEntNum = EntityPlayerStateConst->activeExecutionPartnerEntNum;
  if ( activeExecutionPartnerEntNum != 2047 )
  {
    GEntity = G_GetGEntity(activeExecutionPartnerEntNum);
    G_Execution_Clear(GEntity);
  }
  v5 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 3 )
    goto LABEL_14;
  v6 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 4 )
  {
LABEL_14:
    v7 = j_va("player %i victim %i execution cancelled", (unsigned int)playerEnt->s.number, (unsigned int)EntityPlayerStateConst->activeExecutionPartnerEntNum);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v7);
  }
  G_Execution_Clear(playerEnt);
}

/*
==============
G_Execution_FindBestCandidate
==============
*/
__int64 G_Execution_FindBestCandidate(const playerState_s *const attackerPs, GHandler *handler)
{
  GWeaponMap *Instance; 
  const dvar_t *v7; 
  Physics_WorldId v17; 
  unsigned int v18; 
  unsigned int HitBodyId; 
  int Ref; 
  __int64 EntityNum; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  hkMemoryAllocator *v24; 
  hkMemoryAllocator *v25; 
  hkMemoryAllocator *v26; 
  __int64 v27; 
  hkMemoryAllocator *v29; 
  hkMemoryAllocator *v30; 
  hkMemoryAllocator *v31; 
  vec3_t *outOrigin; 
  __int64 v33; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  HavokPhysics_IgnoreBodies v35; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v37; 
  vec3_t max; 
  vec3_t min; 
  vec3_t attackerEyeOrigin; 
  void *retaddr; 

  _RAX = &retaddr;
  v37 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_FindBestCandidate");
  Instance = GWeaponMap::GetInstance();
  G_Execution_GetEyePosition(0, Instance, attackerPs, &attackerPs->origin, handler, &attackerEyeOrigin);
  v7 = DVARFLT_execution_distance;
  if ( !DVARFLT_execution_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  __asm
  {
    vmovss  xmm0, cs:broadphaseQueryScale
    vmulss  xmm6, xmm0, dword ptr [rdi+28h]
    vxorps  xmm4, xmm6, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm0, xmm4, dword ptr [r15+30h]
    vmovss  dword ptr [rbp+60h+min], xmm0
    vaddss  xmm1, xmm4, dword ptr [r15+34h]
    vmovss  dword ptr [rbp+60h+min+4], xmm1
    vaddss  xmm0, xmm4, dword ptr [r15+38h]
    vmovss  dword ptr [rbp+60h+min+8], xmm0
    vaddss  xmm1, xmm6, dword ptr [r15+30h]
    vmovss  dword ptr [rbp+60h+max], xmm1
    vaddss  xmm0, xmm6, dword ptr [r15+34h]
    vmovss  dword ptr [rbp+60h+max+4], xmm0
    vaddss  xmm1, xmm6, dword ptr [r15+38h]
    vmovss  dword ptr [rbp+60h+max+8], xmm1
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v35, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v35, -9);
  extendedData.phaseSelection = All;
  extendedData.ignoreBodies = &v35;
  extendedData.contents = 33570816;
  v17 = handler->GetPhysicsWorldId(handler);
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v17;
  Physics_AABBBroadphaseQuery(v17, &min, &max, &extendedData, &result);
  v18 = 0;
  if ( HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
    while ( 1 )
    {
      HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v18);
      Ref = Physics_GetRef(v17, HitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      if ( handler->IsClient(handler) )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), EntityNum);
        if ( Entity )
          p_nextState = &Entity->nextState;
        else
          p_nextState = NULL;
      }
      else
      {
        p_nextState = GHandler::GetEntityState(handler, EntityNum);
      }
      if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 576, ASSERT_TYPE_ASSERT, "( es ) != ( nullptr )", "%s != %s\n\t%p, %p", "es", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( p_nextState->number != attackerPs->clientNum && (p_nextState->eType == ET_PLAYER || p_nextState->eType == ET_AGENT) )
      {
        if ( (unsigned int)EntityNum >= 0x800 )
        {
          LODWORD(v33) = 2048;
          LODWORD(outOrigin) = EntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outOrigin, v33) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( G_Execution_IsCandidateValid(attackerPs, &attackerEyeOrigin, &g_entities[EntityNum], handler) )
          break;
      }
      if ( ++v18 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
        goto LABEL_24;
    }
    v29 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v29, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v30 = hkMemHeapAllocator();
    v35.m_ignoreBodies.m_size = 0;
    if ( v35.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v30, v35.m_ignoreBodies.m_data, 4, v35.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v35.m_ignoreBodies.m_data = NULL;
    v35.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v31 = hkMemHeapAllocator();
    v35.m_ignoreEntities.m_size = 0;
    if ( v35.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v31, v35.m_ignoreEntities.m_data, 8, v35.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
LABEL_24:
    v24 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v24, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v25 = hkMemHeapAllocator();
    v35.m_ignoreBodies.m_size = 0;
    if ( v35.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v25, v35.m_ignoreBodies.m_data, 4, v35.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v35.m_ignoreBodies.m_data = NULL;
    v35.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v26 = hkMemHeapAllocator();
    v35.m_ignoreEntities.m_size = 0;
    if ( v35.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v26, v35.m_ignoreEntities.m_data, 8, v35.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    LODWORD(EntityNum) = 2047;
  }
  Sys_ProfEndNamedEvent();
  v27 = (unsigned int)EntityNum;
  __asm { vmovaps xmm6, xmmword ptr [rsp+160h+var_48+8] }
  return v27;
}

/*
==============
G_Execution_GetBounds
==============
*/
void G_Execution_GetBounds(const gentity_s *const entity, Bounds *bounds)
{
  int suitIndex; 

  _RSI = bounds;
  _RBX = entity;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 65, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 66, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( SV_IsAgentScripted(_RBX) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+100h]
      vmovups xmmword ptr [rsi], xmm0
      vmovsd  xmm1, qword ptr [rbx+110h]
    }
    goto LABEL_20;
  }
  suitIndex = -1;
  if ( BG_IsPlayerOrAgentEntity(&_RBX->s) )
  {
    suitIndex = G_GetEntityPlayerStateConst(_RBX)->suitIndex;
  }
  else
  {
    if ( !BG_IsPlayerOrAgentCorpseEntity(&_RBX->s) )
      goto LABEL_14;
    suitIndex = _RBX->s.un.vehicleXModel;
  }
  if ( suitIndex < 0 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 84, ASSERT_TYPE_ASSERT, "( 0 ) <= ( suitIndex )", "%s <= %s\n\t%i, %i", "0", "suitIndex", 0i64, suitIndex) )
      __debugbreak();
  }
  _RBX = BG_Suit_GetBounds(suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 87, ASSERT_TYPE_ASSERT, "( suitBounds ) != ( nullptr )", "%s != %s\n\t%p, %p", "suitBounds", "nullptr", NULL, NULL) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsi], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
  }
LABEL_20:
  __asm { vmovsd  qword ptr [rsi+10h], xmm1 }
}

/*
==============
G_Execution_GetExecutionAnimDurationRemaining
==============
*/
__int64 G_Execution_GetExecutionAnimDurationRemaining(const gentity_s *const victimEnt, const int serverTime)
{
  const playerState_s *EntityPlayerStateConst; 
  int DurationMs; 
  int v5; 
  __int64 result; 
  __int64 v7; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(victimEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1566, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  DurationMs = BG_Execution_GetDurationMs(EntityPlayerStateConst->activeExecution, (const ExecutionVictimStance)EntityPlayerStateConst->activeExecutionVictimStance);
  v5 = DurationMs;
  if ( DurationMs <= 0 )
  {
    LODWORD(v7) = DurationMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1569, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v7) )
      __debugbreak();
  }
  result = (unsigned int)(v5 + EntityPlayerStateConst->activeExecutionStartTime - serverTime);
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
G_Execution_GetEyePosition
==============
*/
void G_Execution_GetEyePosition(bool estimateEyePosition, const BgWeaponMap *weaponMap, const playerState_s *ps, const vec3_t *playerOrigin, const BgHandler *handler, vec3_t *outOrigin)
{
  __int64 clientNum; 
  gentity_s *GEntity; 
  AIScriptedInterface *m_pAI; 
  const SuitDef *SuitDef; 
  EffectiveStance v16; 
  __int64 v20; 
  AIWrapper v21; 

  _RDI = outOrigin;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 333, ASSERT_TYPE_ASSERT, "( weaponMap )", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 334, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 335, ASSERT_TYPE_ASSERT, "( handler )", (const char *)&queryFormat, "handler") )
    __debugbreak();
  clientNum = ps->clientNum;
  if ( !estimateEyePosition )
  {
    if ( (unsigned int)clientNum >= 0x800 )
    {
      LODWORD(v20) = ps->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( SV_IsAgentScripted(&g_entities[clientNum]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 381, ASSERT_TYPE_ASSERT, "( !SV_IsAgentScripted( G_GetGEntity( ps->clientNum ) ) )", "G_Execution_GetEyePosition without estimating is not currently supported for scripted AI.  Will default to standing.") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    {
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
      {
        BG_GetPlayerEyePosition(weaponMap, ps, playerOrigin, handler, outOrigin);
        return;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
    }
    G_Client_GetEyePosition(ps, outOrigin);
    return;
  }
  GEntity = G_GetGEntity(clientNum);
  if ( SV_IsAgentScripted(GEntity) )
  {
    AIWrapper::AIWrapper(&v21, GEntity);
    m_pAI = v21.m_pAI;
    if ( !v21.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 347, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    AIScriptedInterface::GetApproxEyePos(m_pAI, outOrigin, 0);
  }
  else
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( SuitDef )
    {
      v16 = BG_EstimateEffectiveStance(&GEntity->s);
      if ( v16 && v16 == PM_EFF_STANCE_PRONE )
        BG_Suit_GetProneViewHeight(SuitDef);
      __asm { vxorps  xmm0, xmm0, xmm0 }
      outOrigin->v[0] = GEntity->r.currentOrigin.v[0];
      __asm { vcvtsi2ss xmm0, xmm0, ecx }
      outOrigin->v[1] = GEntity->r.currentOrigin.v[1];
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [rbx+138h]
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 353, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      *outOrigin = GEntity->r.currentOrigin;
    }
  }
}

/*
==============
G_Execution_GetNotifyTime
==============
*/
float G_Execution_GetNotifyTime(const gentity_s *const ent, bool isVictim, scr_string_t notifyName, const XAnimParts **outParts)
{
  int v5; 
  DObj *ServerDObjForEnt; 
  const XAnimParts *Parts; 
  double v19; 
  double v20; 
  __int64 v21; 
  double v22; 
  unsigned int outAnimIndex; 

  v5 = 0;
  if ( outParts )
    *outParts = NULL;
  outAnimIndex = 0;
  if ( !BG_Execution_GetActiveAnimIndex(&ent->s, isVictim, &outAnimIndex, NULL) )
    goto LABEL_28;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1120, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !ServerDObjForEnt->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1121, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !ServerDObjForEnt->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1122, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outAnimIndex )
  {
    LODWORD(v21) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1123, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v21, 0i64) )
      __debugbreak();
  }
  if ( !XAnimIsLeafNode(ServerDObjForEnt->tree->anims, outAnimIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1124, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  Parts = XAnimGetParts(ServerDObjForEnt->tree->anims, outAnimIndex);
  if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1126, ASSERT_TYPE_ASSERT, "( parts ) != ( nullptr )", "%s != %s\n\t%p, %p", "parts", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( outParts )
    *outParts = Parts;
  _RBX = Parts->notify;
  if ( _RBX && Parts->notifyCount )
  {
    while ( _RBX->name != notifyName )
    {
      ++v5;
      ++_RBX;
      if ( v5 >= Parts->notifyCount )
        goto LABEL_28;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+4]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( _RBX->name < (unsigned int)notifyName )
      goto LABEL_31;
    __asm { vcomiss xmm1, cs:__real@3f800000 }
    if ( _RBX->name > (unsigned int)notifyName )
    {
LABEL_31:
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+78h+var_40], xmm0
        vcvtss2sd xmm2, xmm1, xmm1
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+78h+var_48], xmm1
        vmovsd  [rsp+78h+var_50], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1142, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( notify->time ) && ( notify->time ) <= ( 1.0f )", "notify->time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, v20, v22) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rbx+4] }
  }
  else
  {
LABEL_28:
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
G_Execution_GetState
==============
*/
void G_Execution_GetState(gentity_s *ent, GExecutionState **outState)
{
  gentity_s *GEntity; 
  gclient_s *client; 

  GEntity = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((GEntity->s.eType - 2) & 0xFFEF) == 0 )
    GEntity = G_GetGEntity(GEntity->s.clientNum);
  client = GEntity->client;
  if ( client )
  {
    *outState = &client->executionState;
  }
  else
  {
    if ( !GEntity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 139, ASSERT_TYPE_ASSERT, "( ent->agent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent->agent", "nullptr", NULL, NULL) )
      __debugbreak();
    *outState = &GEntity->agent->executionState;
  }
}

/*
==============
G_Execution_InitializeCorpse
==============
*/
bool G_Execution_InitializeCorpse(gentity_s *victimEnt, gentity_s *corpseEnt)
{
  bool v8; 
  bool result; 
  GExecutionState *v10; 
  gentity_s *GEntity; 
  gentity_s *v12; 
  playerState_s *EntityPlayerState; 
  GExecutionState *v14; 
  GCorpseInfoMP *CorpseInfo; 
  char v18; 
  const char *v19; 
  int DurationMs; 
  bool v23; 
  bool v24; 
  double v33; 
  double v34; 
  double v35; 
  __int64 v36; 
  int EntityIndex; 
  GExecutionState *outState; 
  const playerState_s *EntityPlayerStateConst; 

  if ( !victimEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1581, ASSERT_TYPE_ASSERT, "(victimEnt)", (const char *)&queryFormat, "victimEnt") )
    __debugbreak();
  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1582, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  if ( !victimEnt || !corpseEnt )
    return 0;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(victimEnt);
  if ( !EntityPlayerStateConst )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1589, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  outState = NULL;
  G_Execution_GetState(victimEnt, &outState);
  v10 = outState;
  if ( !outState )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1598, ASSERT_TYPE_ASSERT, "( victimState ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimState", "nullptr", NULL, NULL) )
      return 0;
    goto LABEL_12;
  }
  if ( !G_IsEntityInUse(outState->partnerEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1605, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( victimState->partnerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( victimState->partnerEntNum )") )
    __debugbreak();
  GEntity = G_GetGEntity(v10->partnerEntNum);
  v12 = GEntity;
  if ( !GEntity )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1607, ASSERT_TYPE_ASSERT, "( attackerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerEnt", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  EntityPlayerState = G_GetEntityPlayerState(GEntity);
  if ( !EntityPlayerState )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1613, ASSERT_TYPE_ASSERT, "( attackerPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPs", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  outState = NULL;
  G_Execution_GetState(v12, &outState);
  v14 = outState;
  if ( !outState )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1622, ASSERT_TYPE_ASSERT, "( attackerState ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerState", "nullptr", NULL, NULL) )
      return 0;
    goto LABEL_12;
  }
  CorpseInfo = G_PlayerCorpseMP_FindCorpseInfo(corpseEnt);
  if ( !CorpseInfo )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1630, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", 0i64, 0i64);
LABEL_11:
    if ( !v8 )
      return 0;
LABEL_12:
    __debugbreak();
    return 0;
  }
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm7
  }
  if ( v14->partnerEntNum != G_GetEntityIndex(victimEnt) )
  {
    EntityIndex = G_GetEntityIndex(victimEnt);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1637, ASSERT_TYPE_ASSERT, "( attackerState->partnerEntNum ) == ( G_GetEntityIndex( victimEnt ) )", "%s == %s\n\t%i, %i", "attackerState->partnerEntNum", "G_GetEntityIndex( victimEnt )", v14->partnerEntNum, EntityIndex) )
      __debugbreak();
  }
  v14->partnerEntNum = G_GetEntityIndex(corpseEnt);
  EntityPlayerState->activeExecutionPartnerEntNum = G_GetEntityIndex(corpseEnt);
  corpseEnt->s.lerp.pos.trType = victimEnt->s.lerp.pos.trType;
  corpseEnt->s.lerp.apos.trType = victimEnt->s.lerp.apos.trType;
  outState = NULL;
  *(float *)&_XMM0 = G_Execution_GetNotifyTime(victimEnt, 1, scr_const.start_ragdoll, (const XAnimParts **)&outState);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
    vmovaps xmm6, xmm0
  }
  if ( v18 )
  {
    if ( outState )
      v19 = *(const char **)&outState->prevTime;
    else
      v19 = "<none>";
    Com_PrintError(16, "Execution Ragdoll Failed: victim animation \"%s\" missing start_ragdoll notetrack.", v19);
    __asm { vmovaps xmm7, [rsp+0A8h+var_58] }
    result = 1;
    __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  }
  else
  {
    DurationMs = BG_Execution_GetDurationMs(EntityPlayerState->activeExecution, (const ExecutionVictimStance)EntityPlayerState->activeExecutionVictimStance);
    v23 = DurationMs == 0;
    if ( DurationMs <= 0 )
    {
      LODWORD(v36) = DurationMs;
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1655, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v36);
      v23 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm6, xmm7
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( !v23 )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+0A8h+var_70], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+0A8h+var_78], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_80], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1657, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( ragdollTime ) && ( ragdollTime ) <= ( 1.0f )", "ragdollTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v33, v34, v35) )
        __debugbreak();
    }
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_58]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+0A8h+var_48]
      vcvttss2si eax, xmm1
    }
    CorpseInfo->codeStartRagdollTime = EntityPlayerStateConst->activeExecutionStartTime + _EAX;
    return 1;
  }
  return result;
}

/*
==============
G_Execution_IsAttackerInValidState
==============
*/
char G_Execution_IsAttackerInValidState(const gentity_s *const attackerEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v3; 
  gclient_s *client; 
  gagent_s *agent; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attackerEnt);
  v3 = EntityPlayerStateConst;
  if ( !EntityPlayerStateConst || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 9u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v3->weapCommon.weapFlags, ACTIVE, 0x2Au) || !G_Execution_IsValidCommon(attackerEnt) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v3->otherFlags, ACTIVE, 0xBu) || PM_GetEffectiveStance(v3) == PM_EFF_STANCE_PRONE )
    return 0;
  client = attackerEnt->client;
  if ( client )
  {
    if ( (client->flags & 0x1000) != 0 )
      return 0;
  }
  else
  {
    agent = attackerEnt->agent;
    if ( agent && (agent->flags & 0x200) != 0 )
      return 0;
  }
  return 1;
}

/*
==============
G_Execution_IsAttackerVictimValid
==============
*/
bool G_Execution_IsAttackerVictimValid(const int attackerEntNum, const GExecutionState *const attackerState)
{
  __int64 partnerEntNum; 
  gentity_s *GEntity; 
  bool result; 
  __int64 v7; 
  GExecutionState *outState; 

  if ( !attackerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1352, ASSERT_TYPE_ASSERT, "(attackerState != nullptr)", (const char *)&queryFormat, "attackerState != nullptr") )
    __debugbreak();
  partnerEntNum = attackerState->partnerEntNum;
  if ( (unsigned int)partnerEntNum >= 0x800 )
  {
    LODWORD(v7) = attackerState->partnerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[partnerEntNum].r.isInUse != g_entityIsInUse[partnerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[partnerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1353, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerState->partnerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerState->partnerEntNum )") )
    __debugbreak();
  GEntity = G_GetGEntity(attackerState->partnerEntNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  result = 1;
  if ( ((GEntity->s.eType - 2) & 0xFFEF) != 0 )
  {
    outState = NULL;
    G_Execution_GetState(GEntity, &outState);
    if ( !BG_IsPlayerOrAgentEntity(&GEntity->s) || !outState || outState->partnerEntNum != attackerEntNum )
      return 0;
  }
  return result;
}

/*
==============
G_Execution_IsBlocked
==============
*/
bool G_Execution_IsBlocked(const gentity_s *const attackerEnt, const gentity_s *const victimEnt)
{
  const playerState_s *EntityPlayerStateConst; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(victimEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 670, ASSERT_TYPE_ASSERT, "(attackerPs)", (const char *)&queryFormat, "attackerPs") )
    __debugbreak();
  return PM_GetEffectiveStance(EntityPlayerStateConst) && !G_Execution_CanStand(attackerEnt, victimEnt) || G_Execution_CalcVictimStance(victimEnt) == HALF && !G_Execution_CanStand(victimEnt, attackerEnt);
}

/*
==============
G_Execution_IsCandidateValid
==============
*/
bool G_Execution_IsCandidateValid(const playerState_s *const attackerPs, const vec3_t *attackerEyeOrigin, const gentity_s *const entity, GHandler *handler)
{
  GUtils *v9; 
  GWeaponMap *Instance; 
  int clientNum; 
  const gentity_s *GEntity; 
  team_t v13; 
  team_t v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const char *v17; 
  int EntityIndex; 
  __int16 v19; 
  const dvar_t *v21; 
  GAntiLag *AntiLag; 
  const dvar_t *v26; 
  const dvar_t *v28; 
  GAntiLag *v29; 
  char v43; 
  char v44; 
  const dvar_t *v45; 
  const char *v47; 
  const playerState_s *EntityPlayerStateConst; 
  int Int_Internal_DebugName; 
  const char *v85; 
  bool result; 
  int entityNum; 
  int skipEntities[2]; 
  BgHandler *handlera; 
  BgWeaponMap *weaponMap; 
  vec3_t *start; 
  trace_t results; 
  vec3_t vec; 
  vec3_t outOrigin; 
  vec3_t origin; 
  float v102; 
  vec3_t angles; 
  vec3_t v104; 
  vec3_t end; 
  vec3_t outResultOrigin; 
  BgAntiLagEntityInfo outInfo; 

  _RDI = entity;
  handlera = handler;
  _R13 = attackerPs;
  start = (vec3_t *)attackerEyeOrigin;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v9 = GUtils::ms_gUtils;
  __asm
  {
    vmovaps [rsp+280h+var_50], xmm6
    vmovaps [rsp+280h+var_60], xmm7
    vmovaps [rsp+280h+var_70], xmm8
  }
  Instance = GWeaponMap::GetInstance();
  clientNum = _R13->clientNum;
  weaponMap = Instance;
  GEntity = G_GetGEntity(clientNum);
  v13 = v9->GetEntityTeam(v9, GEntity);
  v14 = v9->GetEntityTeam(v9, _RDI);
  if ( v13 && v13 == v14 )
  {
    v15 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer != 3 )
    {
      v16 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.integer != 4 )
        goto LABEL_79;
    }
    v17 = j_va("player %i reject %i: same team", (unsigned int)GEntity->s.number, (unsigned int)_RDI->s.number);
    goto LABEL_78;
  }
  if ( !G_Execution_IsValidVictim(GEntity, _RDI) )
  {
LABEL_79:
    result = 0;
    goto LABEL_80;
  }
  EntityIndex = G_GetEntityIndex(GEntity);
  v19 = G_GetEntityIndex(_RDI);
  __asm { vmovsd  xmm0, qword ptr [rdi+130h] }
  v21 = DVARBOOL_execution_antilag_victim;
  entityNum = v19;
  outOrigin.v[2] = _RDI->r.currentOrigin.v[2];
  v102 = _RDI->r.currentAngles.v[2];
  __asm
  {
    vmovsd  qword ptr [rbp+180h+outOrigin], xmm0
    vmovsd  xmm0, qword ptr [rdi+13Ch]
    vmovsd  [rbp+180h+var_160], xmm0
  }
  if ( !DVARBOOL_execution_antilag_victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_antilag_victim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    AntiLag = GAntiLag::GetAntiLag();
    if ( !AntiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 425, ASSERT_TYPE_ASSERT, "( antilag ) != ( nullptr )", "%s != %s\n\t%p, %p", "antilag", "nullptr", NULL, NULL) )
      __debugbreak();
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime(AntiLag, EntityIndex, entityNum, 3u, _R13->serverTime, &outInfo) )
    {
      BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+180h+var_110.baseclass_0.angles]
        vmovsd  [rbp+180h+var_160], xmm0
      }
    }
  }
  __asm { vmovsd  xmm0, qword ptr [r13+30h] }
  v26 = DVARBOOL_execution_antilag_victim;
  origin.v[2] = _R13->origin.v[2];
  angles.v[2] = _R13->viewangles.v[2];
  __asm
  {
    vmovsd  qword ptr [rbp+180h+origin], xmm0
    vmovsd  xmm0, qword ptr [r13+1D8h]
    vmovsd  qword ptr [rbp+180h+angles], xmm0
  }
  if ( !DVARBOOL_execution_antilag_victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_antilag_victim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    v28 = DCONST_DVARBOOL_usePmoveMoverSystem;
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( !v28->current.enabled && BGMovingPlatformPS::IsOnMovingPlatform(&_R13->movingPlatforms) )
    {
      v29 = GAntiLag::GetAntiLag();
      GAntiLag::RewindPlayerMuzzleTrace(v29, _R13->serverTime, GEntity->s.number, &origin, &angles);
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+outOrigin]
    vsubss  xmm4, xmm0, dword ptr [rbp+180h+origin]
    vmovss  xmm1, dword ptr [rbp+180h+outOrigin+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+180h+origin+4]
    vmovss  xmm0, dword ptr [rbp+180h+outOrigin+8]
    vsubss  xmm3, xmm0, dword ptr [rbp+180h+origin+8]
  }
  _RBX = DVARFLT_execution_distance;
  __asm
  {
    vmulss  xmm1, xmm2, xmm2
    vmovss  dword ptr [rbp+180h+vec+4], xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vmovss  dword ptr [rbp+180h+vec], xmm4
    vmovss  dword ptr [rbp+180h+vec+8], xmm3
  }
  if ( !DVARFLT_execution_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( !(v43 | v44) )
  {
    v45 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.integer != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
    v47 = "player %i reject %i: distance too far %f";
LABEL_77:
    __asm { vmovq   r9, xmm3 }
    v17 = j_va(v47, (unsigned int)GEntity->s.number, (unsigned int)_RDI->s.number, _R9);
LABEL_78:
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v17);
    goto LABEL_79;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+vec+4]
    vmovss  xmm1, dword ptr [rbp+180h+vec]
    vmulss  xmm3, xmm0, dword ptr cs:s_worldUp+4
    vmulss  xmm2, xmm1, dword ptr cs:s_worldUp
    vmovss  xmm0, dword ptr [rbp+180h+vec+8]
    vmulss  xmm1, xmm0, dword ptr cs:s_worldUp+8
  }
  _RBX = DVARFLT_execution_heightdiff;
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
    vandps  xmm6, xmm6, xmm8
  }
  if ( !DVARFLT_execution_heightdiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_heightdiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( !(v43 | v44) )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
    v47 = "player %i reject %i: height diff too great %f";
    goto LABEL_77;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+180h+vec+4]
    vmovss  xmm4, dword ptr [rbp+180h+vec]
    vmovss  xmm5, dword ptr [rbp+180h+vec+8]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+180h+vec], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+180h+vec+8], xmm0
    vmovss  dword ptr [rbp+180h+vec+4], xmm1
  }
  vectoangles(&vec, &v104);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+180h+var_140+4]; angle2
    vmovss  xmm0, dword ptr [rbp+180h+angles+4]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm { vandps  xmm6, xmm0, xmm8 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_angle_attackerview, "execution_angle_attackerview");
  __asm { vcomiss xmm0, xmm6 }
  if ( v43 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
    v47 = "player %i reject %i: attackerview angle too great %f";
    goto LABEL_77;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+180h+var_140+4]; angle2
    vmovss  xmm0, dword ptr [rbp+180h+var_160+4]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm { vandps  xmm6, xmm0, xmm8 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_angle_victimback, "execution_angle_victimback");
  __asm { vcomiss xmm0, xmm6 }
  if ( v43 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
    v47 = "player %i reject %i: victimback to attacker angle too great %f";
    goto LABEL_77;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(_RDI);
  if ( !EntityPlayerStateConst )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    v17 = j_va("player %i reject %i: victim has no playerstate", (unsigned int)GEntity->s.number, (unsigned int)_RDI->s.number);
    goto LABEL_78;
  }
  G_Execution_GetEyePosition(1, weaponMap, EntityPlayerStateConst, &outOrigin, handlera, &end);
  skipEntities[0] = _R13->clientNum;
  skipEntities[1] = entityNum;
  PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, &results, start, &end, &bounds_origin, skipEntities, 2, 1, 41968017, 0, NULL, All);
  if ( results.startsolid || results.allsolid )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm
    {
      vmovss  xmm3, [rbp+180h+results.fraction]
      vcvtss2sd xmm3, xmm3, xmm3
    }
    v47 = "player %i reject %i: trace to victim eye failed (frac %f)";
    goto LABEL_77;
  }
  __asm
  {
    vmovss  xmm0, [rbp+180h+results.fraction]
    vcomiss xmm0, xmm7
  }
  *(float *)&_XMM0 = G_Execution_EntityShapecast(GEntity, _RDI, &_RDI->r.currentOrigin, &outResultOrigin);
  __asm { vmovaps xmm6, xmm0 }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug");
  __asm { vcomiss xmm6, xmm7 }
  if ( v43 )
  {
    if ( Int_Internal_DebugName != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      goto LABEL_79;
    __asm { vcvtss2sd xmm3, xmm6, xmm6 }
    v47 = "player %i reject %i: shapecast to victim failed (frac %f)";
    goto LABEL_77;
  }
  if ( Int_Internal_DebugName == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
  {
    v85 = j_va("player %i valid candidate %i", (unsigned int)GEntity->s.number, (unsigned int)_RDI->s.number);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v85);
  }
  result = 1;
LABEL_80:
  __asm
  {
    vmovaps xmm8, [rsp+280h+var_70]
    vmovaps xmm7, [rsp+280h+var_60]
    vmovaps xmm6, [rsp+280h+var_50]
  }
  return result;
}

/*
==============
G_Execution_IsInExecution
==============
*/
bool G_Execution_IsInExecution(const gentity_s *const entity)
{
  const playerState_s *EntityPlayerStateConst; 

  return Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && (EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity)) != NULL && EntityPlayerStateConst->activeExecution != 255;
}

/*
==============
G_Execution_IsValidCommon
==============
*/
bool G_Execution_IsValidCommon(const gentity_s *const entity)
{
  const playerState_s *EntityPlayerStateConst; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool result; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
  result = 0;
  if ( EntityPlayerStateConst )
  {
    if ( EntityPlayerStateConst->pm_type <= 1u )
    {
      p_pm_flags = &EntityPlayerStateConst->pm_flags;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 0x1Du) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Eu) )
        return 1;
    }
  }
  return result;
}

/*
==============
G_Execution_IsValidVictim
==============
*/
char G_Execution_IsValidVictim(const gentity_s *const attackerEnt, const gentity_s *const victimEnt)
{
  const playerState_s *EntityPlayerStateConst; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  const playerState_s *v6; 
  gclient_s *client; 
  gagent_s *agent; 
  const char *v10; 
  AIScriptedInterface *m_pAI; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const char *v14; 
  AIWrapper v15; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(victimEnt);
  if ( !EntityPlayerStateConst || EntityPlayerStateConst->pm_type > 1u || (p_pm_flags = &EntityPlayerStateConst->pm_flags, GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 0x1Du)) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Eu) )
  {
    v12 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == 3 )
      goto LABEL_32;
    v13 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer == 4 )
    {
LABEL_32:
      v14 = j_va("player %i reject %i: invalid victim state", (unsigned int)attackerEnt->s.number, (unsigned int)victimEnt->s.number);
      Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v14);
    }
    return 0;
  }
  v6 = G_GetEntityPlayerStateConst(victimEnt);
  if ( !BG_IsPlayerInExecution(v6) || !v6->activeExecutionIsVictim )
  {
    client = victimEnt->client;
    if ( client )
    {
      if ( (client->flags & 0x2000) == 0 )
        return 1;
      goto LABEL_12;
    }
    agent = victimEnt->agent;
    if ( !agent )
      return 1;
    if ( (agent->flags & 0x400) != 0 )
    {
LABEL_12:
      if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
      {
        v10 = j_va("player %i reject %i: execution victim disabled", (unsigned int)attackerEnt->s.number, (unsigned int)victimEnt->s.number);
LABEL_15:
        Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v10);
        return 0;
      }
      return 0;
    }
    if ( !SV_IsAgentScripted(victimEnt) )
      return 1;
    AIWrapper::AIWrapper(&v15, victimEnt);
    m_pAI = v15.m_pAI;
    if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 300, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( m_pAI->CanBeExecuted(m_pAI) )
      return 1;
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
    {
      v10 = j_va("player %i reject %i: execution victim invalid", (unsigned int)attackerEnt->s.number, (unsigned int)victimEnt->s.number);
      goto LABEL_15;
    }
  }
  return 0;
}

/*
==============
G_Execution_MoveToRelativeOffsetAtTime
==============
*/
bool G_Execution_MoveToRelativeOffsetAtTime(const gentity_s *const referenceEnt, const unsigned int referenceAnimIndex, gentity_s *const moveEnt, const unsigned int moveAnimIndex, const float maxMoveEntAdjustUp, const float time)
{
  DObj *ServerDObjForEnt; 
  DObj *v18; 
  bool v20; 
  bool v60; 
  float fmt; 
  tmat43_t<vec3_t> *outReferenceEntToMoveEnt; 
  double v65; 
  double v66; 
  double v67; 
  tmat43_t<vec3_t> out; 
  vec3_t angles; 
  vec3_t outResultOrigin; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in1; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(referenceEnt);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1063, ASSERT_TYPE_ASSERT, "( referenceEntObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "referenceEntObj", "nullptr", NULL, NULL) )
    __debugbreak();
  v18 = Com_GetServerDObjForEnt(moveEnt);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1065, ASSERT_TYPE_ASSERT, "( moveEntObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "moveEntObj", "nullptr", NULL, NULL) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+1B8h+time]
    vmovss  dword ptr [rsp+1B8h+fmt], xmm0
  }
  BG_Execution_CalcRootOffsetAtTime(ServerDObjForEnt, referenceAnimIndex, v18, moveAnimIndex, fmt, &in1);
  AnglesAndOriginToMatrix43(&referenceEnt->r.currentAngles, &referenceEnt->r.currentOrigin, &result);
  MatrixMultiply43(&in1, &result, &out);
  __asm
  {
    vmovss  xmm9, [rsp+1B8h+maxMoveEntAdjustUp]
    vcomiss xmm9, cs:__real@7f7fffff
  }
  if ( v20 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1B8h+out+24h]
      vmovss  xmm1, dword ptr [rsp+1B8h+out+28h]
      vmovss  xmm5, dword ptr cs:s_worldUp
      vmovss  xmm6, dword ptr cs:s_worldUp+4
      vmovaps [rsp+1B8h+var_68], xmm7
      vmovss  xmm7, dword ptr cs:s_worldUp+8
      vmovaps [rsp+1B8h+var_88], xmm10
      vsubss  xmm10, xmm0, dword ptr [rbx+130h]
      vmovss  xmm0, dword ptr [rsp+1B8h+out+2Ch]
      vmovaps [rsp+1B8h+var_98], xmm11
      vsubss  xmm11, xmm1, dword ptr [rbx+134h]
      vmulss  xmm1, xmm5, xmm5
      vmovaps [rsp+1B8h+var_A8], xmm12
      vsubss  xmm12, xmm0, dword ptr [rbx+138h]
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm3, cs:__real@3f800000
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v20 )
    {
      __asm
      {
        vsqrtss xmm0, xmm3, xmm3
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+1B8h+var_178], xmm1
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+1B8h+var_180], xmm2
        vcvtss2sd xmm3, xmm6, xmm6
        vmovsd  [rsp+1B8h+var_188], xmm3
        vcvtss2sd xmm0, xmm5, xmm5
        vmovsd  [rsp+1B8h+outReferenceEntToMoveEnt], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1083, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( s_worldUp ) )", "(%g, %g, %g) len %g", *(double *)&outReferenceEntToMoveEnt, v65, v66, v67) )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr cs:s_worldUp
        vmovss  xmm6, dword ptr cs:s_worldUp+4
        vmovss  xmm7, dword ptr cs:s_worldUp+8
      }
    }
    __asm
    {
      vmulss  xmm1, xmm11, xmm6
      vmovaps xmm11, [rsp+1B8h+var_98]
      vmulss  xmm0, xmm10, xmm5
      vmovaps xmm10, [rsp+1B8h+var_88]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm12, xmm7
      vmovaps xmm12, [rsp+1B8h+var_A8]
      vaddss  xmm3, xmm2, xmm1
      vminss  xmm0, xmm3, xmm9
      vsubss  xmm4, xmm0, xmm3
      vmulss  xmm2, xmm5, xmm4
      vaddss  xmm0, xmm2, dword ptr [rsp+1B8h+out+24h]
      vmovss  dword ptr [rsp+1B8h+out+24h], xmm0
      vmulss  xmm2, xmm7, xmm4
      vmovaps xmm7, [rsp+1B8h+var_68]
      vmulss  xmm3, xmm6, xmm4
      vaddss  xmm0, xmm3, dword ptr [rsp+1B8h+out+28h]
      vmovss  dword ptr [rsp+1B8h+out+28h], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsp+1B8h+out+2Ch]
      vmovss  dword ptr [rsp+1B8h+out+2Ch], xmm0
    }
  }
  *(float *)&_XMM0 = G_Execution_EntityShapecast(moveEnt, referenceEnt, &out.m[3], &outResultOrigin);
  __asm { vmovaps xmm6, xmm0 }
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &angles);
  G_Execution_SetEntityTransform(moveEnt, &outResultOrigin, &angles);
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  v60 = v20;
  __asm
  {
    vmovaps xmm6, [rsp+1B8h+var_58]
    vmovaps xmm9, [rsp+1B8h+var_78]
  }
  return v60;
}

/*
==============
G_Execution_SetEntityTransform
==============
*/
void G_Execution_SetEntityTransform(gentity_s *const ent, const vec3_t *origin, const vec3_t *angles)
{
  GUtils *v6; 
  const playerState_s *EntityPlayerStateConst; 
  int IsRagdollTrajectory; 
  trType_t v9; 
  __int64 trType; 

  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v6 = GUtils::ms_gUtils;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((ent->s.eType - 1) & 0xFFEF) != 0 )
  {
    if ( BG_IsPlayerOrAgentCorpseEntity(&ent->s) )
    {
      IsRagdollTrajectory = BG_IsRagdollTrajectory(&ent->s.lerp.pos);
      v9 = TR_INTERPOLATE;
      if ( IsRagdollTrajectory )
        v9 = TR_RAGDOLL_INTERPOLATE;
      G_SetOriginAndAngleTrajectory(ent, origin, angles, 0, 0, v9);
      G_PlayerCorpseMP_SnapOrigin(ent);
      G_UpdateLinkInfoForClients(ent);
      *(_DWORD *)&ent->s.clientLinkInfo &= 0xFFFFF800;
    }
    else
    {
      LODWORD(trType) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1055, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_Execution_SetEntityTransform: unknown entity %i eType %i", trType, ent->s.eType) )
        __debugbreak();
    }
  }
  else
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( EntityPlayerStateConst && BG_Execution_CanUpdateViewangles(EntityPlayerStateConst) )
      v6->SetPlayerViewAngles(v6, ent, angles);
    else
      G_SetOriginAndAngleTrajectory(ent, origin, angles, 0, 0, TR_INTERPOLATE);
    v6->SetPlayerOrigin(v6, ent, origin, 0, 0);
  }
}

/*
==============
G_Execution_Update
==============
*/

void __fastcall G_Execution_Update(gentity_s *playerEnt, double _XMM1_8)
{
  const dvar_t *v9; 
  const playerState_s *EntityPlayerStateConst; 
  int v11; 
  const char *v12; 
  __int16 activeExecutionPartnerEntNum; 
  char v23; 
  bool v24; 
  char v29; 
  char v30; 
  char v33; 
  playerState_s *v34; 
  GWeaponMap *Instance; 
  bool v42; 
  playerState_s *EntityPlayerState; 
  __int64 v44; 
  char v45; 
  void *retaddr; 
  GExecutionState *outState; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v9 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1393, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( EntityPlayerStateConst->activeExecution != 255 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_Update");
      if ( EntityPlayerStateConst->activeExecutionStartTime <= 0 )
      {
        LODWORD(v44) = EntityPlayerStateConst->activeExecutionStartTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1403, ASSERT_TYPE_ASSERT, "( 0 ) < ( ps->activeExecutionStartTime )", "%s < %s\n\t%i, %i", "0", "ps->activeExecutionStartTime", 0i64, v44) )
          __debugbreak();
      }
      v11 = 0;
      if ( level.time - EntityPlayerStateConst->activeExecutionStartTime > 0 )
        v11 = level.time - EntityPlayerStateConst->activeExecutionStartTime;
      if ( EntityPlayerStateConst->activeExecutionIsVictim )
        goto LABEL_71;
      if ( !SV_IsAgentScripted(playerEnt) && BG_IsInAir(EntityPlayerStateConst, 0) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&EntityPlayerStateConst->otherFlags, FLAG_COUNT|AIM_ASSIST|0x20) )
      {
        if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
          goto LABEL_23;
        v12 = j_va("player %i, attacker in air", (unsigned int)playerEnt->s.number);
        goto LABEL_22;
      }
      if ( G_Execution_IsAttackerInValidState(playerEnt) )
      {
LABEL_71:
        if ( BG_Execution_GetDurationMs(EntityPlayerStateConst->activeExecution, (const ExecutionVictimStance)EntityPlayerStateConst->activeExecutionVictimStance) < v11 )
          goto LABEL_23;
        activeExecutionPartnerEntNum = EntityPlayerStateConst->activeExecutionPartnerEntNum;
        if ( activeExecutionPartnerEntNum == 2047 || !G_IsEntityInUse(activeExecutionPartnerEntNum) )
          goto LABEL_23;
        outState = NULL;
        G_Execution_GetState(playerEnt, &outState);
        _RSI = outState;
        if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1450, ASSERT_TYPE_ASSERT, "( state ) != ( nullptr )", "%s != %s\n\t%p, %p", "state", "nullptr", NULL, NULL) )
          __debugbreak();
        *(double *)&_XMM0 = BG_Execution_GetScrubTime(EntityPlayerStateConst->activeExecution, (const ExecutionVictimStance)EntityPlayerStateConst->activeExecutionVictimStance, EntityPlayerStateConst->activeExecutionStartTime, level.time, 0);
        __asm { vmovaps xmm9, xmm0 }
        if ( EntityPlayerStateConst->activeExecutionIsVictim )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckPrimaryVisibility");
          *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 1, scr_const.exec_victim_weapon_hide, NULL);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcmpltss xmm3, xmm0, xmm1
            vmovss  xmm2, cs:__real@7f7fffff
            vblendvps xmm0, xmm0, xmm2, xmm3
            vcomiss xmm9, xmm0
          }
          v42 = !v29;
          EntityPlayerState = G_GetEntityPlayerState(playerEnt);
          if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1231, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", NULL, NULL) )
            __debugbreak();
          EntityPlayerState->activeExecutionIsPrimaryHidden = v42;
          Sys_ProfEndNamedEvent();
          goto LABEL_24;
        }
        if ( G_Execution_IsAttackerVictimValid(EntityPlayerStateConst->clientNum, _RSI) )
        {
          __asm
          {
            vmovaps xmm3, xmm9; curTime
            vmovss  xmm2, dword ptr [rsi]; prevTime
          }
          v23 = G_Execution_CheckKill(playerEnt, _RSI->partnerEntNum, *(double *)&_XMM2, *(double *)&_XMM3);
          v24 = EntityPlayerStateConst->activeExecution != 255 && _RSI->partnerEntNum != 2047;
          if ( !v23 || v24 && G_Execution_IsAttackerVictimValid(EntityPlayerStateConst->clientNum, _RSI) )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckPropVisibility");
            *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 0, scr_const.exec_weapon_show, NULL);
            __asm
            {
              vxorps  xmm7, xmm7, xmm7
              vcmpltss xmm1, xmm0, xmm7
              vmovss  xmm6, cs:__real@7f7fffff
              vblendvps xmm8, xmm0, xmm6, xmm1
            }
            *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 0, scr_const.exec_weapon_hide, NULL);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm7
              vblendvps xmm0, xmm0, xmm6, xmm1
              vmovss  dword ptr [rsp+0D8h+outState], xmm0
              vcomiss xmm8, xmm9
            }
            if ( !(v29 | v30) )
              goto LABEL_54;
            __asm { vcomiss xmm9, dword ptr [rsp+0D8h+outState] }
            if ( v29 | v30 )
              v33 = 1;
            else
LABEL_54:
              v33 = 0;
            v34 = G_GetEntityPlayerState(playerEnt);
            if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1206, ASSERT_TYPE_ASSERT, "( attackerPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPs", "nullptr", NULL, NULL) )
              __debugbreak();
            v34->activeExecutionIsPropVisible = v33;
            if ( v33 )
            {
              Instance = GWeaponMap::GetInstance();
              BG_Weapon_UpdateExecutionWeapon(Instance, v34);
            }
            Sys_ProfEndNamedEvent();
            __asm
            {
              vmovaps xmm3, xmm9; time
              vmovss  xmm2, dword ptr [rsi]; prevTime
            }
            if ( G_Execution_UpdateDeltaMotionGoal(playerEnt, v11, *(const float *)&_XMM2, *(const float *)&_XMM3) )
            {
              __asm { vmovss  dword ptr [rsi], xmm9 }
              goto LABEL_24;
            }
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
            {
LABEL_23:
              G_Execution_Exit(playerEnt);
LABEL_24:
              Sys_ProfEndNamedEvent();
              goto LABEL_25;
            }
            v12 = j_va("player %i victim %i, cancelled to update delta motion", (unsigned int)playerEnt->s.number, (unsigned int)_RSI->partnerEntNum);
          }
          else
          {
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
              goto LABEL_23;
            v12 = j_va("player %i victim %i, post-kill victim invalid", (unsigned int)playerEnt->s.number, (unsigned int)_RSI->partnerEntNum);
          }
        }
        else
        {
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
            goto LABEL_23;
          v12 = j_va("player %i victim %i, active victim invalid", (unsigned int)playerEnt->s.number, (unsigned int)_RSI->partnerEntNum);
        }
      }
      else
      {
        if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
          goto LABEL_23;
        v12 = j_va("player %i, attacker in invalid state", (unsigned int)playerEnt->s.number);
      }
LABEL_22:
      Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v12);
      goto LABEL_23;
    }
  }
LABEL_25:
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
G_Execution_UpdateDeltaMotionGoal
==============
*/

__int64 __fastcall G_Execution_UpdateDeltaMotionGoal(gentity_s *const attackerEnt, const int elapsedMs, double prevTime, double time)
{
  __int64 v14; 
  __int64 v15; 
  DObj *ServerDObjForEnt; 
  DObj *v18; 
  const dvar_t *v23; 
  const dvar_t *v25; 
  const dvar_t *v47; 
  const dvar_t *v62; 
  unsigned __int8 v99; 
  vec3_t *p_currentOrigin; 
  const dvar_t *v104; 
  const dvar_t *v107; 
  __int64 v110; 
  float fmt; 
  float fmta; 
  DObj *victimObj; 
  float victimObja; 
  float victimObjb; 
  __int64 victimAnimIndex; 
  float timea; 
  unsigned int outAnimIndex; 
  unsigned int moveAnimIndex[3]; 
  __int64 v126; 
  vec3_t outState; 
  vec3_t point; 
  vec3_t center; 
  vec3_t goalOrigin; 
  vec3_t outVictimGoalAngles; 
  vec3_t angles; 
  vec3_t outResultOrigin; 
  vec3_t origin; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> outRootTransform; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  v126 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  moveAnimIndex[1] = elapsedMs;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_UpdateDeltaMotionGoal");
  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1240, ASSERT_TYPE_ASSERT, "( attackerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_QWORD *)outState.v = 0i64;
  G_Execution_GetState(attackerEnt, (GExecutionState **)&outState);
  v14 = *(_QWORD *)outState.v;
  if ( !*(_QWORD *)outState.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1244, ASSERT_TYPE_ASSERT, "( attackerState ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerState", "nullptr", NULL, NULL) )
    __debugbreak();
  v15 = *(int *)(v14 + 4);
  if ( (unsigned int)v15 >= 0x800 )
  {
    LODWORD(victimAnimIndex) = 2048;
    LODWORD(victimObj) = *(_DWORD *)(v14 + 4);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", victimObj, victimAnimIndex) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1246, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerState->partnerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerState->partnerEntNum )") )
    __debugbreak();
  _RDI = G_GetGEntity(*(_DWORD *)(v14 + 4));
  outAnimIndex = 0;
  if ( BG_Execution_GetActiveAnimIndex(&attackerEnt->s, 0, &outAnimIndex, NULL) && (moveAnimIndex[0] = 0, BG_Execution_GetActiveAnimIndex(&_RDI->s, 1, moveAnimIndex, NULL)) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(attackerEnt);
    if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1263, ASSERT_TYPE_ASSERT, "( attackerObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerObj", "nullptr", NULL, NULL) )
      __debugbreak();
    v18 = Com_GetServerDObjForEnt(_RDI);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1265, ASSERT_TYPE_ASSERT, "( victimObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimObj", "nullptr", NULL, NULL) )
      __debugbreak();
    _RSI = DVARFLT_execution_blend_duration;
    if ( !DVARFLT_execution_blend_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_blend_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si r14d, xmm1
    }
    if ( elapsedMs >= _ER14 )
    {
      __asm
      {
        vmovaps xmm3, xmm6; curTime
        vmovaps xmm2, xmm7; prevTime
      }
      BG_Execution_CalcRootRel(ServerDObjForEnt, outAnimIndex, *(const float *)&_XMM2, *(const float *)&_XMM3, &outRootTransform);
      p_currentOrigin = &attackerEnt->r.currentOrigin;
      AnglesAndOriginToMatrix43(&attackerEnt->r.currentAngles, &attackerEnt->r.currentOrigin, &result);
      MatrixMultiply43(&outRootTransform, &result, &out);
      G_Execution_EntityShapecast(attackerEnt, _RDI, &out.m[3], &outResultOrigin);
      AxisToAngles((const tmat33_t<vec3_t> *)&out, &origin);
      G_Execution_SetEntityTransform(attackerEnt, &outResultOrigin, &origin);
      __asm
      {
        vmovss  dword ptr [rsp+220h+victimObj], xmm6
        vmovss  xmm0, cs:__real@7f7fffff
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      if ( G_Execution_MoveToRelativeOffsetAtTime(attackerEnt, outAnimIndex, _RDI, moveAnimIndex[0], fmt, victimObja) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_attacker_max_up_adjust, "execution_attacker_max_up_adjust");
        __asm
        {
          vmovss  dword ptr [rsp+220h+victimObj], xmm6
          vmovss  dword ptr [rsp+220h+fmt], xmm0
        }
        G_Execution_MoveToRelativeOffsetAtTime(_RDI, moveAnimIndex[0], attackerEnt, outAnimIndex, fmta, victimObjb);
      }
      v104 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v104);
      if ( v104->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(p_currentOrigin, *(float *)&_XMM1, &colorGreen, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(p_currentOrigin, &colorGreen, *(float *)&_XMM2, "attacker pos", 0);
      }
      v107 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v107);
      if ( v107->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(&_RDI->r.currentOrigin, *(float *)&_XMM1, &colorRed, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(&_RDI->r.currentOrigin, &colorRed, *(float *)&_XMM2, "victim pos", 0);
      }
      v99 = 1;
    }
    else
    {
      __asm { vmovss  [rsp+220h+time], xmm6 }
      BG_Execution_CalcWorldGoal(&attackerEnt->r.currentOrigin, &attackerEnt->r.currentAngles, &_RDI->r.currentOrigin, ServerDObjForEnt, outAnimIndex, v18, moveAnimIndex[0], timea, &outState, &center, &outVictimGoalAngles);
      v23 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(&outState, *(float *)&_XMM1, &colorGreen, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(&outState, &colorGreen, *(float *)&_XMM2, "attacker goal", 0);
      }
      v25 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(&center, *(float *)&_XMM1, &colorRed, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(&center, &colorRed, *(float *)&_XMM2, "victim goal", 0);
      }
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vdivss  xmm0, xmm1, xmm0; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm10, xmm0
        vmovss  xmm1, dword ptr [rsp+220h+outState]
        vsubss  xmm2, xmm1, dword ptr [rbx+130h]
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm4, xmm3, dword ptr [rbx+130h]
        vmovss  dword ptr [rbp+120h+point], xmm4
        vmovss  xmm1, dword ptr [rsp+220h+outState+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm4, xmm3, dword ptr [rbx+134h]
        vmovss  dword ptr [rbp+120h+point+4], xmm4
        vmovss  xmm0, [rbp+120h+var_1A0]
        vsubss  xmm1, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [rbx+138h]
        vmovss  dword ptr [rbp+120h+point+8], xmm3
      }
      v47 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( v47->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(&point, *(float *)&_XMM1, &colorGreen, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(&point, &colorGreen, *(float *)&_XMM2, "attacker pos", 0);
      }
      G_Execution_EntityShapecast(attackerEnt, _RDI, &point, &outResultOrigin);
      G_Execution_SetEntityTransform(attackerEnt, &outResultOrigin, &attackerEnt->r.currentAngles);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+120h+center]
        vsubss  xmm1, xmm0, dword ptr [rdi+130h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [rdi+130h]
        vmovss  dword ptr [rbp+120h+goalOrigin], xmm3
        vmovss  xmm0, dword ptr [rbp+120h+center+4]
        vsubss  xmm1, xmm0, dword ptr [rdi+134h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [rdi+134h]
        vmovss  dword ptr [rbp+120h+goalOrigin+4], xmm3
        vmovss  xmm0, dword ptr [rbp+120h+center+8]
        vsubss  xmm1, xmm0, dword ptr [rdi+138h]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, dword ptr [rdi+138h]
        vmovss  dword ptr [rbp+120h+goalOrigin+8], xmm3
      }
      v62 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      if ( v62->current.integer == 2 )
      {
        __asm { vmovss  xmm1, cs:debugRadius; radius }
        G_DebugSphere(&goalOrigin, *(float *)&_XMM1, &colorRed, 1, 0);
        __asm { vmovss  xmm2, cs:debugTextScale; scale }
        G_DebugString(&goalOrigin, &colorRed, *(float *)&_XMM2, "victim pos", 0);
      }
      G_Execution_EntityShapecast(_RDI, attackerEnt, &goalOrigin, &origin);
      __asm
      {
        vmovss  xmm4, dword ptr [rdi+13Ch]
        vmovss  xmm0, dword ptr [rbp+120h+var_168]
        vsubss  xmm1, xmm0, xmm4
        vmovss  xmm9, cs:__real@3b360b61
        vmulss  xmm3, xmm1, xmm9
        vmovss  xmm8, cs:__real@3f000000
        vaddss  xmm2, xmm3, xmm8
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm0, xmm7, xmm2, 1
        vsubss  xmm0, xmm3, xmm0
        vmovss  xmm6, cs:__real@43b40000
        vmulss  xmm0, xmm0, xmm6
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbp+120h+angles], xmm2
        vmovss  xmm5, dword ptr [rdi+140h]
        vmovss  xmm0, dword ptr [rbp+120h+var_168+4]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm4, xmm1, xmm9
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbp+120h+angles+4], xmm3
        vmovss  xmm5, dword ptr [rdi+144h]
        vmovss  xmm0, dword ptr [rbp+120h+var_168+8]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm4, xmm1, xmm9
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbp+120h+angles+8], xmm3
      }
      G_Execution_SetEntityTransform(_RDI, &origin, &angles);
      v99 = 1;
    }
  }
  else
  {
    v99 = 0;
  }
  Sys_ProfEndNamedEvent();
  v110 = v99;
  _R11 = &v138;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return v110;
}

/*
==============
G_Execution_UpdateHint
==============
*/
void G_Execution_UpdateHint(gentity_s *playerEnt)
{
  playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  GExecutionState *v6; 
  char v11; 
  GExecutionState *outState; 

  EntityPlayerState = G_GetEntityPlayerState(playerEnt);
  if ( !G_Execution_IsAttackerInValidState(playerEnt) || (Handler = GHandler::getHandler(), (unsigned int)G_Execution_FindBestCandidate(EntityPlayerState, Handler) == 2047) )
  {
    EntityPlayerState->holdExecutionTime = 0;
  }
  else
  {
    outState = NULL;
    G_Execution_GetState(playerEnt, &outState);
    v6 = outState;
    if ( !outState )
      return;
    if ( !EntityPlayerState->activeExecutionStartTime )
    {
      EntityPlayerState->activeExecutionHint = 1;
      if ( !v6->buttonStartTime )
      {
        EntityPlayerState->holdExecutionTime = 0;
        return;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1168h]
        vmovaps [rsp+38h+var_18], xmm6
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_hold_duration, "execution_hold_duration");
      __asm
      {
        vcomiss xmm6, xmm0
        vmovaps xmm6, [rsp+38h+var_18]
      }
      if ( v11 )
      {
        EntityPlayerState->holdExecutionTime = level.time - v6->buttonStartTime;
        return;
      }
    }
  }
  EntityPlayerState->activeExecutionHint = 0;
}

