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
  const dvar_t *v8; 
  playerState_s *EntityPlayerState; 
  gentity_s *v10; 
  const playerState_s *EntityPlayerStateConst; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v12; 
  AIScriptedInterface *m_pAI; 
  bool IsAttackerInValidState; 
  bool v15; 
  unsigned int v16; 
  bool v17; 
  __int64 v18; 
  const char *v19; 
  GHandler *v20; 
  unsigned int BestCandidate; 
  const char *v22; 
  const char *v23; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  const gentity_s *GEntity; 
  GHandler *v27; 
  int v28; 
  double Float_Internal_DebugName; 
  const playerState_s *v30; 
  const char *v31; 
  GWeaponMap *v32; 
  const char *v33; 
  int v34; 
  char taskData[8]; 
  __int64 v36; 
  AIWrapper v37; 
  vec3_t outState[2]; 

  v36 = -2i64;
  v8 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    EntityPlayerState = G_GetEntityPlayerState(playerEnt);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 745, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
      __debugbreak();
    v10 = playerEnt;
    if ( EntityPlayerState->equippedExecution == 255 )
      goto LABEL_76;
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    v12 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)EntityPlayerStateConst;
    if ( EntityPlayerStateConst && !BG_IsPlayerInExecution(EntityPlayerStateConst) )
    {
      if ( SV_IsAgentScripted(playerEnt) )
      {
        AIWrapper::AIWrapper(&v37, playerEnt);
        m_pAI = v37.m_pAI;
        if ( !v37.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 192, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        IsAttackerInValidState = m_pAI->CanExecute(m_pAI);
LABEL_25:
        if ( IsAttackerInValidState )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_Check");
          *(_QWORD *)outState[0].v = 0i64;
          G_Execution_GetState(playerEnt, (GExecutionState **)outState);
          v18 = *(_QWORD *)outState[0].v;
          if ( *(int *)(*(_QWORD *)outState[0].v + 8i64) > 0 )
          {
            if ( (cmd->buttons & 4) != 0 )
            {
              Handler = GHandler::getHandler();
              Instance = GWeaponMap::GetInstance();
              G_Execution_GetEyePosition(0, Instance, EntityPlayerState, &EntityPlayerState->origin, Handler, outState);
              GEntity = G_GetGEntity(*(_DWORD *)(v18 + 12));
              v27 = GHandler::getHandler();
              if ( G_Execution_IsCandidateValid(EntityPlayerState, outState, GEntity, v27) )
              {
                v28 = level.time - *(_DWORD *)(v18 + 8);
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_hold_duration, "execution_hold_duration");
                if ( (float)((float)v28 * 0.001) < *(float *)&Float_Internal_DebugName )
                {
LABEL_74:
                  Sys_ProfEndNamedEvent();
                  return;
                }
                v30 = G_GetEntityPlayerStateConst(GEntity);
                if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 670, ASSERT_TYPE_ASSERT, "(attackerPs)", (const char *)&queryFormat, "attackerPs") )
                  __debugbreak();
                if ( PM_GetEffectiveStance(v30) && !G_Execution_CanStand(playerEnt, GEntity) || G_Execution_CalcVictimStance(GEntity) == HALF && !G_Execution_CanStand(GEntity, playerEnt) )
                {
                  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
                  {
                    v31 = j_va("player %i victim %i: failed to start execution due to blocked geo", (unsigned int)playerEnt->s.number, (unsigned int)GEntity->s.number);
                    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v31);
                  }
                  G_Execution_ClearButtonState(playerEnt);
                  v32 = GWeaponMap::GetInstance();
                  BG_AddUnPredictableEventToPlayerstate(EV_STANCE_INVALID, 1u, level.time, v32, EntityPlayerState);
                  goto LABEL_74;
                }
                if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
                {
                  v33 = j_va("player %i victim %i: starting execution at time %i", (unsigned int)playerEnt->s.number, (unsigned int)GEntity->s.number, (unsigned int)level.time);
                  Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v33);
                }
                v34 = *(_DWORD *)(v18 + 12);
                if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 703, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
                  __debugbreak();
                if ( (v34 < 0 || (unsigned int)v34 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v34, "signed", v34) )
                  __debugbreak();
                taskData[0] = v34;
                if ( !GClientTaskQueue::ValidateOwner(taskQueue, playerEnt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 708, ASSERT_TYPE_ASSERT, "( outTaskQueue.ValidateOwner( playerEnt ) )", (const char *)&queryFormat, "outTaskQueue.ValidateOwner( playerEnt )") )
                  __debugbreak();
                GClientTaskQueue::AddTaskInternal(taskQueue, G_Execution_Begin, taskData, 1u, 1u, "PlayerExecution");
LABEL_73:
                G_Execution_ClearButtonState(playerEnt);
                goto LABEL_74;
              }
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
                goto LABEL_73;
              v22 = j_va("player %i clearing button due to failure", (unsigned int)playerEnt->s.number);
            }
            else
            {
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
                goto LABEL_73;
              v22 = j_va("player %i released button", (unsigned int)playerEnt->s.number);
            }
          }
          else
          {
            if ( ((LOBYTE(cmd->buttons) >> 2) & ((unsigned __int8)~LOBYTE(oldcmd->buttons) >> 2) & 1) == 0 )
              goto LABEL_73;
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
            {
              v19 = j_va("player %i searching for candidate", (unsigned int)playerEnt->s.number);
              Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v19);
            }
            v20 = GHandler::getHandler();
            BestCandidate = G_Execution_FindBestCandidate(EntityPlayerState, v20);
            if ( BestCandidate != 2047 )
            {
              *(_DWORD *)(v18 + 8) = level.time;
              *(_DWORD *)(v18 + 12) = BestCandidate;
              if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
              {
                v23 = j_va("player %i started button hold with candidate %i", (unsigned int)playerEnt->s.number, BestCandidate);
                Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v23);
              }
              goto LABEL_74;
            }
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
              goto LABEL_73;
            v22 = j_va("player %i no candidate found", (unsigned int)playerEnt->s.number);
          }
          Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v22);
          goto LABEL_73;
        }
        goto LABEL_75;
      }
      v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v12 + 229, ACTIVE, 0x22u);
      v16 = v12[169].m_flags[1];
      v17 = v15 && (v16 - 7 <= 5 || v16 == 50);
      if ( v16 - 22 <= 2 || v17 )
      {
        IsAttackerInValidState = G_Execution_IsAttackerInValidState(playerEnt);
        goto LABEL_25;
      }
    }
LABEL_75:
    v10 = playerEnt;
LABEL_76:
    G_Execution_ClearButtonState(v10);
  }
}

/*
==============
G_Execution_CheckKill
==============
*/
__int64 G_Execution_CheckKill(gentity_s *const attackerEnt, int victimEntNum, float prevTime, float curTime)
{
  float NotifyTime; 
  const char *name; 
  unsigned __int8 v8; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const char *v12; 
  gentity_s *GEntity; 
  damageReturnCode_t (__fastcall *Damage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  __int16 v15; 
  XAnimParts *outParts[7]; 

  outParts[1] = (XAnimParts *)-2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckKill");
  outParts[0] = NULL;
  NotifyTime = G_Execution_GetNotifyTime(attackerEnt, 0, scr_const.exec_kill, (const XAnimParts **)outParts);
  if ( NotifyTime < 0.0 )
  {
    if ( outParts[0] )
      name = outParts[0]->name;
    else
      name = "<none>";
    Com_PrintError(16, "Execution Failed: attacker animation \"%s\" missing exec_kill notetrack.", name);
    goto LABEL_6;
  }
  if ( prevTime >= NotifyTime || NotifyTime > curTime )
  {
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  v8 = 1;
  v10 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer == 3 )
    goto LABEL_18;
  v11 = DCONST_DVARINT_execution_debug;
  if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == 4 )
  {
LABEL_18:
    v12 = j_va("player %i killed victim %i", (unsigned int)attackerEnt->s.number, (unsigned int)victimEntNum);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v12);
  }
  GEntity = G_GetGEntity(victimEntNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1173, ASSERT_TYPE_ASSERT, "( victimEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  Damage = GCombat::ms_gCombatSystem->Damage;
  v15 = 0;
  Damage(GCombat::ms_gCombatSystem, GEntity, attackerEnt, attackerEnt, NULL, NULL, executionDamage, 0, 21, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)&v15);
LABEL_7:
  Sys_ProfEndNamedEvent();
  return v8;
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
  float v10; 
  float v11; 
  float result; 
  PhysicsQuery_ContextSettings traceContext; 
  int skipEntities[2]; 
  Bounds bounds; 
  trace_t results; 

  G_Execution_GetBounds(shapecastEnt, &bounds);
  BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
  skipEntities[0] = shapecastEnt->s.number;
  number = ignoreEnt->s.number;
  v9 = DVARBOOL_execution_shapecast_ignore_child_ents;
  skipEntities[1] = number;
  traceContext.m_flags = 0;
  if ( !DVARBOOL_execution_shapecast_ignore_child_ents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_shapecast_ignore_child_ents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    traceContext.m_flags |= 4;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &shapecastEnt->r.currentOrigin, goalOrigin, &bounds, skipEntities, 2, 33636369, NULL, 0, NULL, &traceContext);
  v10 = goalOrigin->v[1] - shapecastEnt->r.currentOrigin.v[1];
  v11 = goalOrigin->v[2] - shapecastEnt->r.currentOrigin.v[2];
  if ( results.allsolid || results.startsolid )
    result = 0.0;
  else
    result = results.fraction;
  outResultOrigin->v[0] = (float)((float)(goalOrigin->v[0] - shapecastEnt->r.currentOrigin.v[0]) * result) + shapecastEnt->r.currentOrigin.v[0];
  outResultOrigin->v[1] = (float)(v10 * result) + shapecastEnt->r.currentOrigin.v[1];
  outResultOrigin->v[2] = (float)(v11 * result) + shapecastEnt->r.currentOrigin.v[2];
  return result;
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
  const dvar_t *v5; 
  float v6; 
  Physics_WorldId v7; 
  unsigned int v8; 
  unsigned int HitBodyId; 
  int Ref; 
  __int64 EntityNum; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  hkMemoryAllocator *v14; 
  hkMemoryAllocator *v15; 
  hkMemoryAllocator *v16; 
  hkMemoryAllocator *v18; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  vec3_t *outOrigin; 
  __int64 v22; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  HavokPhysics_IgnoreBodies v24; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v26; 
  vec3_t max; 
  vec3_t min; 
  vec3_t attackerEyeOrigin; 

  v26 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_FindBestCandidate");
  Instance = GWeaponMap::GetInstance();
  G_Execution_GetEyePosition(0, Instance, attackerPs, &attackerPs->origin, handler, &attackerEyeOrigin);
  v5 = DVARFLT_execution_distance;
  if ( !DVARFLT_execution_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = broadphaseQueryScale * v5->current.value;
  min.v[0] = COERCE_FLOAT(LODWORD(v6) ^ _xmm) + attackerPs->origin.v[0];
  min.v[1] = COERCE_FLOAT(LODWORD(v6) ^ _xmm) + attackerPs->origin.v[1];
  min.v[2] = COERCE_FLOAT(LODWORD(v6) ^ _xmm) + attackerPs->origin.v[2];
  max.v[0] = v6 + attackerPs->origin.v[0];
  max.v[1] = v6 + attackerPs->origin.v[1];
  max.v[2] = v6 + attackerPs->origin.v[2];
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v24, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v24, -9);
  extendedData.phaseSelection = All;
  extendedData.ignoreBodies = &v24;
  extendedData.contents = 33570816;
  v7 = handler->GetPhysicsWorldId(handler);
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v7;
  Physics_AABBBroadphaseQuery(v7, &min, &max, &extendedData, &result);
  v8 = 0;
  if ( HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
    while ( 1 )
    {
      HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v8);
      Ref = Physics_GetRef(v7, HitBodyId);
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
          LODWORD(v22) = 2048;
          LODWORD(outOrigin) = EntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outOrigin, v22) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( G_Execution_IsCandidateValid(attackerPs, &attackerEyeOrigin, &g_entities[EntityNum], handler) )
          break;
      }
      if ( ++v8 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
        goto LABEL_24;
    }
    v18 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v18, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v19 = hkMemHeapAllocator();
    v24.m_ignoreBodies.m_size = 0;
    if ( v24.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v19, v24.m_ignoreBodies.m_data, 4, v24.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v24.m_ignoreBodies.m_data = NULL;
    v24.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v20 = hkMemHeapAllocator();
    v24.m_ignoreEntities.m_size = 0;
    if ( v24.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v20, v24.m_ignoreEntities.m_data, 8, v24.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
LABEL_24:
    v14 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v14, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v15 = hkMemHeapAllocator();
    v24.m_ignoreBodies.m_size = 0;
    if ( v24.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v15, v24.m_ignoreBodies.m_data, 4, v24.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v24.m_ignoreBodies.m_data = NULL;
    v24.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v16 = hkMemHeapAllocator();
    v24.m_ignoreEntities.m_size = 0;
    if ( v24.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v16, v24.m_ignoreEntities.m_data, 8, v24.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    LODWORD(EntityNum) = 2047;
  }
  Sys_ProfEndNamedEvent();
  return (unsigned int)EntityNum;
}

/*
==============
G_Execution_GetBounds
==============
*/
void G_Execution_GetBounds(const gentity_s *const entity, Bounds *bounds)
{
  double v4; 
  int suitIndex; 
  const Bounds *v6; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 65, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 66, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( SV_IsAgentScripted(entity) )
  {
    *(_OWORD *)bounds->midPoint.v = *(_OWORD *)entity->r.box.midPoint.v;
    v4 = *(double *)&entity->r.box.halfSize.y;
    goto LABEL_20;
  }
  suitIndex = -1;
  if ( BG_IsPlayerOrAgentEntity(&entity->s) )
  {
    suitIndex = G_GetEntityPlayerStateConst(entity)->suitIndex;
  }
  else
  {
    if ( !BG_IsPlayerOrAgentCorpseEntity(&entity->s) )
      goto LABEL_14;
    suitIndex = entity->s.un.vehicleXModel;
  }
  if ( suitIndex < 0 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 84, ASSERT_TYPE_ASSERT, "( 0 ) <= ( suitIndex )", "%s <= %s\n\t%i, %i", "0", "suitIndex", 0i64, suitIndex) )
      __debugbreak();
  }
  v6 = BG_Suit_GetBounds(suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 87, ASSERT_TYPE_ASSERT, "( suitBounds ) != ( nullptr )", "%s != %s\n\t%p, %p", "suitBounds", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_OWORD *)bounds->midPoint.v = *(_OWORD *)v6->midPoint.v;
  v4 = *(double *)&v6->halfSize.y;
LABEL_20:
  *(double *)&bounds->halfSize.y = v4;
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
  EffectiveStance v14; 
  __int32 v15; 
  int ProneViewHeight; 
  __int64 v17; 
  AIWrapper v18; 

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
      LODWORD(v17) = ps->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, 2048) )
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
    AIWrapper::AIWrapper(&v18, GEntity);
    m_pAI = v18.m_pAI;
    if ( !v18.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 347, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    AIScriptedInterface::GetApproxEyePos(m_pAI, outOrigin, 0);
    return;
  }
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( SuitDef )
  {
    v14 = BG_EstimateEffectiveStance(&GEntity->s);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
        goto LABEL_26;
      }
      if ( v15 == 1 )
      {
        ProneViewHeight = SuitDef->viewheight_crouch;
LABEL_26:
        *(_QWORD *)outOrigin->v = *(_QWORD *)GEntity->r.currentOrigin.v;
        outOrigin->v[2] = (float)ProneViewHeight + GEntity->r.currentOrigin.v[2];
        return;
      }
    }
    ProneViewHeight = SuitDef->viewheight_stand;
    goto LABEL_26;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 353, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  *outOrigin = GEntity->r.currentOrigin;
}

/*
==============
G_Execution_GetNotifyTime
==============
*/
float G_Execution_GetNotifyTime(const gentity_s *const ent, bool isVictim, scr_string_t notifyName, const XAnimParts **outParts)
{
  int v4; 
  DObj *ServerDObjForEnt; 
  const XAnimParts *Parts; 
  float *notify; 
  double v13; 
  __int64 v15; 
  unsigned int outAnimIndex; 

  v4 = 0;
  if ( outParts )
    *outParts = NULL;
  outAnimIndex = 0;
  if ( !BG_Execution_GetActiveAnimIndex(&ent->s, isVictim, &outAnimIndex, NULL) )
    return FLOAT_N1_0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1120, ASSERT_TYPE_ASSERT, "( obj ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !ServerDObjForEnt->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1121, ASSERT_TYPE_ASSERT, "( obj->tree ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !ServerDObjForEnt->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1122, ASSERT_TYPE_ASSERT, "( obj->tree->anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "obj->tree->anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outAnimIndex )
  {
    LODWORD(v15) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1123, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "%s != %s\n\t%i, %i", "animIndex", "0", v15, 0i64) )
      __debugbreak();
  }
  if ( !XAnimIsLeafNode(ServerDObjForEnt->tree->anims, outAnimIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1124, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, animIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, animIndex )") )
    __debugbreak();
  Parts = XAnimGetParts(ServerDObjForEnt->tree->anims, outAnimIndex);
  if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1126, ASSERT_TYPE_ASSERT, "( parts ) != ( nullptr )", "%s != %s\n\t%p, %p", "parts", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( outParts )
    *outParts = Parts;
  notify = (float *)Parts->notify;
  if ( !notify || !Parts->notifyCount )
    return FLOAT_N1_0;
  while ( *(_DWORD *)notify != notifyName )
  {
    ++v4;
    notify += 2;
    if ( v4 >= Parts->notifyCount )
      return FLOAT_N1_0;
  }
  _XMM1 = *((unsigned int *)notify + 1);
  if ( *(float *)&_XMM1 < 0.0 || *(float *)&_XMM1 > 1.0 )
  {
    v13 = *(float *)&_XMM1;
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1142, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( notify->time ) && ( notify->time ) <= ( 1.0f )", "notify->time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v13, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return notify[1];
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
char G_Execution_InitializeCorpse(gentity_s *victimEnt, gentity_s *corpseEnt)
{
  bool v5; 
  GExecutionState *v7; 
  gentity_s *GEntity; 
  gentity_s *v9; 
  playerState_s *EntityPlayerState; 
  GExecutionState *v11; 
  GCorpseInfoMP *CorpseInfo; 
  float NotifyTime; 
  const char *v14; 
  int DurationMs; 
  int v16; 
  __int64 v18; 
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
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1589, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  outState = NULL;
  G_Execution_GetState(victimEnt, &outState);
  v7 = outState;
  if ( !outState )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1598, ASSERT_TYPE_ASSERT, "( victimState ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimState", "nullptr", NULL, NULL) )
      return 0;
    goto LABEL_12;
  }
  if ( !G_IsEntityInUse(outState->partnerEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1605, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( victimState->partnerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( victimState->partnerEntNum )") )
    __debugbreak();
  GEntity = G_GetGEntity(v7->partnerEntNum);
  v9 = GEntity;
  if ( !GEntity )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1607, ASSERT_TYPE_ASSERT, "( attackerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerEnt", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  EntityPlayerState = G_GetEntityPlayerState(GEntity);
  if ( !EntityPlayerState )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1613, ASSERT_TYPE_ASSERT, "( attackerPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPs", "nullptr", 0i64, 0i64);
    goto LABEL_11;
  }
  outState = NULL;
  G_Execution_GetState(v9, &outState);
  v11 = outState;
  if ( !outState )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1622, ASSERT_TYPE_ASSERT, "( attackerState ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerState", "nullptr", NULL, NULL) )
      return 0;
    goto LABEL_12;
  }
  CorpseInfo = G_PlayerCorpseMP_FindCorpseInfo(corpseEnt);
  if ( !CorpseInfo )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1630, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", 0i64, 0i64);
LABEL_11:
    if ( !v5 )
      return 0;
LABEL_12:
    __debugbreak();
    return 0;
  }
  if ( v11->partnerEntNum != G_GetEntityIndex(victimEnt) )
  {
    EntityIndex = G_GetEntityIndex(victimEnt);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1637, ASSERT_TYPE_ASSERT, "( attackerState->partnerEntNum ) == ( G_GetEntityIndex( victimEnt ) )", "%s == %s\n\t%i, %i", "attackerState->partnerEntNum", "G_GetEntityIndex( victimEnt )", v11->partnerEntNum, EntityIndex) )
      __debugbreak();
  }
  v11->partnerEntNum = G_GetEntityIndex(corpseEnt);
  EntityPlayerState->activeExecutionPartnerEntNum = G_GetEntityIndex(corpseEnt);
  corpseEnt->s.lerp.pos.trType = victimEnt->s.lerp.pos.trType;
  corpseEnt->s.lerp.apos.trType = victimEnt->s.lerp.apos.trType;
  outState = NULL;
  NotifyTime = G_Execution_GetNotifyTime(victimEnt, 1, scr_const.start_ragdoll, (const XAnimParts **)&outState);
  if ( NotifyTime >= 0.0 )
  {
    DurationMs = BG_Execution_GetDurationMs(EntityPlayerState->activeExecution, (const ExecutionVictimStance)EntityPlayerState->activeExecutionVictimStance);
    v16 = DurationMs;
    if ( DurationMs <= 0 )
    {
      LODWORD(v18) = DurationMs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1655, ASSERT_TYPE_ASSERT, "( 0 ) < ( durationMs )", "%s < %s\n\t%i, %i", "0", "durationMs", 0i64, v18) )
        __debugbreak();
    }
    if ( NotifyTime < 0.0 || NotifyTime > 1.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1657, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( ragdollTime ) && ( ragdollTime ) <= ( 1.0f )", "ragdollTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", NotifyTime, *(double *)&_XMM1, DOUBLE_1_0) )
        __debugbreak();
    }
    CorpseInfo->codeStartRagdollTime = EntityPlayerStateConst->activeExecutionStartTime + (int)(float)((float)v16 * NotifyTime);
    return 1;
  }
  else
  {
    if ( outState )
      v14 = *(const char **)&outState->prevTime;
    else
      v14 = "<none>";
    Com_PrintError(16, "Execution Ragdoll Failed: victim animation \"%s\" missing start_ragdoll notetrack.", v14);
    return 1;
  }
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
char G_Execution_IsCandidateValid(const playerState_s *const attackerPs, const vec3_t *attackerEyeOrigin, const gentity_s *const entity, GHandler *handler)
{
  GUtils *v6; 
  GWeaponMap *Instance; 
  int clientNum; 
  const gentity_s *GEntity; 
  team_t v10; 
  team_t v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const char *v14; 
  int EntityIndex; 
  __int16 v16; 
  double v17; 
  const dvar_t *v18; 
  GAntiLag *AntiLag; 
  double v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  GAntiLag *v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  float v28; 
  __int128 v29; 
  float v33; 
  double v34; 
  float v35; 
  double Float_Internal_DebugName; 
  const playerState_s *EntityPlayerStateConst; 
  float v38; 
  int Int_Internal_DebugName; 
  const char *v40; 
  int entityNum; 
  int skipEntities[2]; 
  BgHandler *handlera; 
  BgWeaponMap *weaponMap; 
  vec3_t *start; 
  trace_t results; 
  vec3_t vec; 
  vec3_t outOrigin; 
  vec3_t origin; 
  __int64 v51; 
  float v52; 
  vec3_t angles; 
  vec3_t v54; 
  vec3_t end; 
  vec3_t outResultOrigin; 
  BgAntiLagEntityInfo outInfo; 

  handlera = handler;
  start = (vec3_t *)attackerEyeOrigin;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v6 = GUtils::ms_gUtils;
  Instance = GWeaponMap::GetInstance();
  clientNum = attackerPs->clientNum;
  weaponMap = Instance;
  GEntity = G_GetGEntity(clientNum);
  v10 = v6->GetEntityTeam(v6, GEntity);
  v11 = v6->GetEntityTeam(v6, entity);
  if ( v10 && v10 == v11 )
  {
    v12 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer != 3 )
    {
      v13 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.integer != 4 )
        return 0;
    }
    v14 = j_va("player %i reject %i: same team", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number);
    goto LABEL_78;
  }
  if ( !G_Execution_IsValidVictim(GEntity, entity) )
    return 0;
  EntityIndex = G_GetEntityIndex(GEntity);
  v16 = G_GetEntityIndex(entity);
  v17 = *(double *)entity->r.currentOrigin.v;
  v18 = DVARBOOL_execution_antilag_victim;
  entityNum = v16;
  outOrigin.v[2] = entity->r.currentOrigin.v[2];
  v52 = entity->r.currentAngles.v[2];
  *(double *)outOrigin.v = v17;
  v51 = *(__int64 *)entity->r.currentAngles.v;
  if ( !DVARBOOL_execution_antilag_victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_antilag_victim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    AntiLag = GAntiLag::GetAntiLag();
    if ( !AntiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 425, ASSERT_TYPE_ASSERT, "( antilag ) != ( nullptr )", "%s != %s\n\t%p, %p", "antilag", "nullptr", NULL, NULL) )
      __debugbreak();
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime(AntiLag, EntityIndex, entityNum, 3u, attackerPs->serverTime, &outInfo) )
    {
      BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
      v51 = *(__int64 *)outInfo.angles.v;
    }
  }
  v20 = *(double *)attackerPs->origin.v;
  v21 = DVARBOOL_execution_antilag_victim;
  origin.v[2] = attackerPs->origin.v[2];
  angles.v[2] = attackerPs->viewangles.v[2];
  *(double *)origin.v = v20;
  *(_QWORD *)angles.v = *(_QWORD *)attackerPs->viewangles.v;
  if ( !DVARBOOL_execution_antilag_victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_antilag_victim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    v22 = DCONST_DVARBOOL_usePmoveMoverSystem;
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !v22->current.enabled && BGMovingPlatformPS::IsOnMovingPlatform(&attackerPs->movingPlatforms) )
    {
      v23 = GAntiLag::GetAntiLag();
      GAntiLag::RewindPlayerMuzzleTrace(v23, attackerPs->serverTime, GEntity->s.number, &origin, &angles);
    }
  }
  v24 = DVARFLT_execution_distance;
  vec.v[1] = outOrigin.v[1] - origin.v[1];
  v25 = fsqrt((float)((float)((float)(outOrigin.v[1] - origin.v[1]) * (float)(outOrigin.v[1] - origin.v[1])) + (float)((float)(outOrigin.v[0] - origin.v[0]) * (float)(outOrigin.v[0] - origin.v[0]))) + (float)((float)(outOrigin.v[2] - origin.v[2]) * (float)(outOrigin.v[2] - origin.v[2])));
  vec.v[0] = outOrigin.v[0] - origin.v[0];
  vec.v[2] = outOrigin.v[2] - origin.v[2];
  if ( !DVARFLT_execution_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v25 > v24->current.value )
  {
    v26 = DCONST_DVARINT_execution_debug;
    if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: distance too far %f", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, v25);
LABEL_78:
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v14);
    return 0;
  }
  v27 = DVARFLT_execution_heightdiff;
  LODWORD(v28) = COERCE_UNSIGNED_INT((float)((float)(vec.v[1] * s_worldUp.v[1]) + (float)(vec.v[0] * s_worldUp.v[0])) + (float)(vec.v[2] * s_worldUp.v[2])) & _xmm;
  if ( !DVARFLT_execution_heightdiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_heightdiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v28 > v27->current.value )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: height diff too great %f", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, v28);
    goto LABEL_78;
  }
  v29 = LODWORD(vec.v[1]);
  *(float *)&v29 = fsqrt((float)((float)(*(float *)&v29 * *(float *)&v29) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v29;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  vectoangles(&vec, &v54);
  *(double *)&_XMM0 = AngleDelta(angles.v[1], v54.v[1]);
  LODWORD(v33) = _XMM0 & _xmm;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_angle_attackerview, "execution_angle_attackerview");
  if ( *(float *)&_XMM0 < v33 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: attackerview angle too great %f", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, v33);
    goto LABEL_78;
  }
  v34 = AngleDelta(*((const float *)&v51 + 1), v54.v[1]);
  LODWORD(v35) = LODWORD(v34) & _xmm;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_angle_victimback, "execution_angle_victimback");
  if ( *(float *)&Float_Internal_DebugName < v35 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: victimback to attacker angle too great %f", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, v35);
    goto LABEL_78;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
  if ( !EntityPlayerStateConst )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: victim has no playerstate", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number);
    goto LABEL_78;
  }
  G_Execution_GetEyePosition(1, weaponMap, EntityPlayerStateConst, &outOrigin, handlera, &end);
  skipEntities[0] = attackerPs->clientNum;
  skipEntities[1] = entityNum;
  PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, &results, start, &end, &bounds_origin, skipEntities, 2, 1, 41968017, 0, NULL, All);
  if ( results.startsolid || results.allsolid || results.fraction < 1.0 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: trace to victim eye failed (frac %f)", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, results.fraction);
    goto LABEL_78;
  }
  v38 = G_Execution_EntityShapecast(GEntity, entity, &entity->r.currentOrigin, &outResultOrigin);
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug");
  if ( v38 < 1.0 )
  {
    if ( Int_Internal_DebugName != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
      return 0;
    v14 = j_va("player %i reject %i: shapecast to victim failed (frac %f)", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number, v38);
    goto LABEL_78;
  }
  if ( Int_Internal_DebugName == 3 || Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") == 4 )
  {
    v40 = j_va("player %i valid candidate %i", (unsigned int)GEntity->s.number, (unsigned int)entity->s.number);
    Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v40);
  }
  return 1;
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
  DObj *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v23; 
  tmat43_t<vec3_t> out; 
  vec3_t angles; 
  vec3_t outResultOrigin; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in1; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(referenceEnt);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1063, ASSERT_TYPE_ASSERT, "( referenceEntObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "referenceEntObj", "nullptr", NULL, NULL) )
    __debugbreak();
  v11 = Com_GetServerDObjForEnt(moveEnt);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1065, ASSERT_TYPE_ASSERT, "( moveEntObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "moveEntObj", "nullptr", NULL, NULL) )
    __debugbreak();
  BG_Execution_CalcRootOffsetAtTime(ServerDObjForEnt, referenceAnimIndex, v11, moveAnimIndex, time, &in1);
  AnglesAndOriginToMatrix43(&referenceEnt->r.currentAngles, &referenceEnt->r.currentOrigin, &result);
  MatrixMultiply43(&in1, &result, &out);
  if ( maxMoveEntAdjustUp < 3.4028235e38 )
  {
    v12 = s_worldUp.v[0];
    v13 = s_worldUp.v[1];
    v14 = s_worldUp.v[2];
    v15 = out.m[3].v[0] - moveEnt->r.currentOrigin.v[0];
    v17 = LODWORD(out.m[3].v[1]);
    *(float *)&v17 = out.m[3].v[1] - moveEnt->r.currentOrigin.v[1];
    v16 = v17;
    v18 = out.m[3].v[2] - moveEnt->r.currentOrigin.v[2];
    v19 = (float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0020000001 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1083, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( s_worldUp ) )", "(%g, %g, %g) len %g", s_worldUp.v[0], s_worldUp.v[1], s_worldUp.v[2], fsqrt(v19)) )
        __debugbreak();
      v12 = s_worldUp.v[0];
      v13 = s_worldUp.v[1];
      v14 = s_worldUp.v[2];
    }
    v20 = v16;
    *(float *)&v20 = (float)((float)(*(float *)&v16 * v13) + (float)(v15 * v12)) + (float)(v18 * v14);
    _XMM3 = v20;
    __asm { vminss  xmm0, xmm3, xmm9 }
    out.m[3].v[0] = (float)(v12 * (float)(*(float *)&_XMM0 - *(float *)&v20)) + out.m[3].v[0];
    out.m[3].v[1] = (float)(v13 * (float)(*(float *)&_XMM0 - *(float *)&v20)) + out.m[3].v[1];
    out.m[3].v[2] = (float)(v14 * (float)(*(float *)&_XMM0 - *(float *)&v20)) + out.m[3].v[2];
  }
  v23 = G_Execution_EntityShapecast(moveEnt, referenceEnt, &out.m[3], &outResultOrigin);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &angles);
  G_Execution_SetEntityTransform(moveEnt, &outResultOrigin, &angles);
  return v23 < 1.0;
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
void G_Execution_Update(gentity_s *playerEnt)
{
  const dvar_t *v3; 
  const playerState_s *EntityPlayerStateConst; 
  int v5; 
  const char *v6; 
  __int16 activeExecutionPartnerEntNum; 
  GExecutionState *v8; 
  float v9; 
  char v10; 
  bool v11; 
  bool v16; 
  playerState_s *v17; 
  GWeaponMap *Instance; 
  playerState_s *EntityPlayerState; 
  __int64 v22; 
  GExecutionState *outState; 

  v3 = DVARBOOL_execution_enabled;
  if ( !DVARBOOL_execution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(playerEnt);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1393, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( EntityPlayerStateConst->activeExecution != 255 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_Update");
      if ( EntityPlayerStateConst->activeExecutionStartTime <= 0 )
      {
        LODWORD(v22) = EntityPlayerStateConst->activeExecutionStartTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1403, ASSERT_TYPE_ASSERT, "( 0 ) < ( ps->activeExecutionStartTime )", "%s < %s\n\t%i, %i", "0", "ps->activeExecutionStartTime", 0i64, v22) )
          __debugbreak();
      }
      v5 = 0;
      if ( level.time - EntityPlayerStateConst->activeExecutionStartTime > 0 )
        v5 = level.time - EntityPlayerStateConst->activeExecutionStartTime;
      if ( EntityPlayerStateConst->activeExecutionIsVictim )
        goto LABEL_71;
      if ( !SV_IsAgentScripted(playerEnt) && BG_IsInAir(EntityPlayerStateConst, 0) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&EntityPlayerStateConst->otherFlags, FLAG_COUNT|AIM_ASSIST|0x20) )
      {
        if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
          goto LABEL_23;
        v6 = j_va("player %i, attacker in air", (unsigned int)playerEnt->s.number);
        goto LABEL_22;
      }
      if ( G_Execution_IsAttackerInValidState(playerEnt) )
      {
LABEL_71:
        if ( BG_Execution_GetDurationMs(EntityPlayerStateConst->activeExecution, (const ExecutionVictimStance)EntityPlayerStateConst->activeExecutionVictimStance) < v5 )
          goto LABEL_23;
        activeExecutionPartnerEntNum = EntityPlayerStateConst->activeExecutionPartnerEntNum;
        if ( activeExecutionPartnerEntNum == 2047 || !G_IsEntityInUse(activeExecutionPartnerEntNum) )
          goto LABEL_23;
        outState = NULL;
        G_Execution_GetState(playerEnt, &outState);
        v8 = outState;
        if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1450, ASSERT_TYPE_ASSERT, "( state ) != ( nullptr )", "%s != %s\n\t%p, %p", "state", "nullptr", NULL, NULL) )
          __debugbreak();
        *(double *)&_XMM0 = BG_Execution_GetScrubTime(EntityPlayerStateConst->activeExecution, (const ExecutionVictimStance)EntityPlayerStateConst->activeExecutionVictimStance, EntityPlayerStateConst->activeExecutionStartTime, level.time, 0);
        v9 = *(float *)&_XMM0;
        if ( EntityPlayerStateConst->activeExecutionIsVictim )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckPrimaryVisibility");
          *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 1, scr_const.exec_victim_weapon_hide, NULL);
          __asm
          {
            vcmpltss xmm3, xmm0, xmm1
            vblendvps xmm0, xmm0, xmm2, xmm3
          }
          EntityPlayerState = G_GetEntityPlayerState(playerEnt);
          if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1231, ASSERT_TYPE_ASSERT, "( victimPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimPs", "nullptr", NULL, NULL) )
            __debugbreak();
          EntityPlayerState->activeExecutionIsPrimaryHidden = v9 >= *(float *)&_XMM0;
          Sys_ProfEndNamedEvent();
          goto LABEL_24;
        }
        if ( G_Execution_IsAttackerVictimValid(EntityPlayerStateConst->clientNum, v8) )
        {
          v10 = G_Execution_CheckKill(playerEnt, v8->partnerEntNum, v8->prevTime, *(float *)&_XMM0);
          v11 = EntityPlayerStateConst->activeExecution != 255 && v8->partnerEntNum != 2047;
          if ( !v10 || v11 && G_Execution_IsAttackerVictimValid(EntityPlayerStateConst->clientNum, v8) )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_CheckPropVisibility");
            *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 0, scr_const.exec_weapon_show, NULL);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm7
              vblendvps xmm8, xmm0, xmm6, xmm1
            }
            *(float *)&_XMM0 = G_Execution_GetNotifyTime(playerEnt, 0, scr_const.exec_weapon_hide, NULL);
            __asm
            {
              vcmpltss xmm1, xmm0, xmm7
              vblendvps xmm0, xmm0, xmm6, xmm1
            }
            *(float *)&outState = *(float *)&_XMM0;
            v16 = *(float *)&_XMM8 <= v9 && v9 <= *(float *)&outState;
            v17 = G_GetEntityPlayerState(playerEnt);
            if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1206, ASSERT_TYPE_ASSERT, "( attackerPs ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerPs", "nullptr", NULL, NULL) )
              __debugbreak();
            v17->activeExecutionIsPropVisible = v16;
            if ( v16 )
            {
              Instance = GWeaponMap::GetInstance();
              BG_Weapon_UpdateExecutionWeapon(Instance, v17);
            }
            Sys_ProfEndNamedEvent();
            if ( G_Execution_UpdateDeltaMotionGoal(playerEnt, v5, v8->prevTime, v9) )
            {
              v8->prevTime = v9;
              goto LABEL_24;
            }
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
            {
LABEL_23:
              G_Execution_Exit(playerEnt);
LABEL_24:
              Sys_ProfEndNamedEvent();
              return;
            }
            v6 = j_va("player %i victim %i, cancelled to update delta motion", (unsigned int)playerEnt->s.number, (unsigned int)v8->partnerEntNum);
          }
          else
          {
            if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
              goto LABEL_23;
            v6 = j_va("player %i victim %i, post-kill victim invalid", (unsigned int)playerEnt->s.number, (unsigned int)v8->partnerEntNum);
          }
        }
        else
        {
          if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
            goto LABEL_23;
          v6 = j_va("player %i victim %i, active victim invalid", (unsigned int)playerEnt->s.number, (unsigned int)v8->partnerEntNum);
        }
      }
      else
      {
        if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 3 && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") != 4 )
          goto LABEL_23;
        v6 = j_va("player %i, attacker in invalid state", (unsigned int)playerEnt->s.number);
      }
LABEL_22:
      Com_Printf(15, "[execution srv] %i %s\n", (unsigned int)level.time, v6);
      goto LABEL_23;
    }
  }
}

/*
==============
G_Execution_UpdateDeltaMotionGoal
==============
*/
__int64 G_Execution_UpdateDeltaMotionGoal(gentity_s *const attackerEnt, const int elapsedMs, const float prevTime, const float time)
{
  __int64 v6; 
  __int64 v7; 
  gentity_s *GEntity; 
  DObj *ServerDObjForEnt; 
  DObj *v10; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int v15; 
  float v16; 
  double v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  unsigned __int8 v24; 
  vec3_t *p_currentOrigin; 
  double Float_Internal_DebugName; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  DObj *victimObj; 
  __int64 victimAnimIndex; 
  unsigned int outAnimIndex; 
  unsigned int moveAnimIndex; 
  __int64 v34; 
  __int64 v35; 
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

  v35 = -2i64;
  LODWORD(v34) = elapsedMs;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Execution_UpdateDeltaMotionGoal");
  if ( !attackerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1240, ASSERT_TYPE_ASSERT, "( attackerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_QWORD *)outState.v = 0i64;
  G_Execution_GetState(attackerEnt, (GExecutionState **)&outState);
  v6 = *(_QWORD *)outState.v;
  if ( !*(_QWORD *)outState.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1244, ASSERT_TYPE_ASSERT, "( attackerState ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerState", "nullptr", NULL, NULL) )
    __debugbreak();
  v7 = *(int *)(v6 + 4);
  if ( (unsigned int)v7 >= 0x800 )
  {
    LODWORD(victimAnimIndex) = 2048;
    LODWORD(victimObj) = *(_DWORD *)(v6 + 4);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", victimObj, victimAnimIndex) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1246, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerState->partnerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerState->partnerEntNum )") )
    __debugbreak();
  GEntity = G_GetGEntity(*(_DWORD *)(v6 + 4));
  outAnimIndex = 0;
  if ( BG_Execution_GetActiveAnimIndex(&attackerEnt->s, 0, &outAnimIndex, NULL) && (moveAnimIndex = 0, BG_Execution_GetActiveAnimIndex(&GEntity->s, 1, &moveAnimIndex, NULL)) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(attackerEnt);
    if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1263, ASSERT_TYPE_ASSERT, "( attackerObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "attackerObj", "nullptr", NULL, NULL) )
      __debugbreak();
    v10 = Com_GetServerDObjForEnt(GEntity);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_execution.cpp", 1265, ASSERT_TYPE_ASSERT, "( victimObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "victimObj", "nullptr", NULL, NULL) )
      __debugbreak();
    v11 = DVARFLT_execution_blend_duration;
    if ( !DVARFLT_execution_blend_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_blend_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = (int)(float)(v11->current.value * 1000.0);
    if ( elapsedMs >= v12 )
    {
      BG_Execution_CalcRootRel(ServerDObjForEnt, outAnimIndex, prevTime, time, &outRootTransform);
      p_currentOrigin = &attackerEnt->r.currentOrigin;
      AnglesAndOriginToMatrix43(&attackerEnt->r.currentAngles, &attackerEnt->r.currentOrigin, &result);
      MatrixMultiply43(&outRootTransform, &result, &out);
      G_Execution_EntityShapecast(attackerEnt, GEntity, &out.m[3], &outResultOrigin);
      AxisToAngles((const tmat33_t<vec3_t> *)&out, &origin);
      G_Execution_SetEntityTransform(attackerEnt, &outResultOrigin, &origin);
      if ( G_Execution_MoveToRelativeOffsetAtTime(attackerEnt, outAnimIndex, GEntity, moveAnimIndex, 3.4028235e38, time) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_attacker_max_up_adjust, "execution_attacker_max_up_adjust");
        G_Execution_MoveToRelativeOffsetAtTime(GEntity, moveAnimIndex, attackerEnt, outAnimIndex, *(const float *)&Float_Internal_DebugName, time);
      }
      v27 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( v27->current.integer == 2 )
      {
        G_DebugSphere(p_currentOrigin, debugRadius, &colorGreen, 1, 0);
        G_DebugString(p_currentOrigin, &colorGreen, debugTextScale, "attacker pos", 0);
      }
      v28 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.integer == 2 )
      {
        G_DebugSphere(&GEntity->r.currentOrigin, debugRadius, &colorRed, 1, 0);
        G_DebugString(&GEntity->r.currentOrigin, &colorRed, debugTextScale, "victim pos", 0);
      }
      v24 = 1;
    }
    else
    {
      BG_Execution_CalcWorldGoal(&attackerEnt->r.currentOrigin, &attackerEnt->r.currentAngles, &GEntity->r.currentOrigin, ServerDObjForEnt, outAnimIndex, v10, moveAnimIndex, time, &outState, &center, &outVictimGoalAngles);
      v13 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.integer == 2 )
      {
        G_DebugSphere(&outState, debugRadius, &colorGreen, 1, 0);
        G_DebugString(&outState, &colorGreen, debugTextScale, "attacker goal", 0);
      }
      v14 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.integer == 2 )
      {
        G_DebugSphere(&center, debugRadius, &colorRed, 1, 0);
        G_DebugString(&center, &colorRed, debugTextScale, "victim goal", 0);
      }
      v15 = v12 - v34;
      if ( v15 < 0 )
        v15 = 0;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v16 = (float)level.frameDuration / (float)v15;
      v17 = I_fclamp(v16, 0.0, 1.0);
      point.v[0] = (float)((float)(outState.v[0] - attackerEnt->r.currentOrigin.v[0]) * *(float *)&v17) + attackerEnt->r.currentOrigin.v[0];
      point.v[1] = (float)((float)(outState.v[1] - attackerEnt->r.currentOrigin.v[1]) * *(float *)&v17) + attackerEnt->r.currentOrigin.v[1];
      point.v[2] = (float)((float)(outState.v[2] - attackerEnt->r.currentOrigin.v[2]) * v16) + attackerEnt->r.currentOrigin.v[2];
      v18 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.integer == 2 )
      {
        G_DebugSphere(&point, debugRadius, &colorGreen, 1, 0);
        G_DebugString(&point, &colorGreen, debugTextScale, "attacker pos", 0);
      }
      G_Execution_EntityShapecast(attackerEnt, GEntity, &point, &outResultOrigin);
      G_Execution_SetEntityTransform(attackerEnt, &outResultOrigin, &attackerEnt->r.currentAngles);
      goalOrigin.v[0] = (float)((float)(center.v[0] - GEntity->r.currentOrigin.v[0]) * v16) + GEntity->r.currentOrigin.v[0];
      goalOrigin.v[1] = (float)((float)(center.v[1] - GEntity->r.currentOrigin.v[1]) * v16) + GEntity->r.currentOrigin.v[1];
      goalOrigin.v[2] = (float)((float)(center.v[2] - GEntity->r.currentOrigin.v[2]) * v16) + GEntity->r.currentOrigin.v[2];
      v19 = DCONST_DVARINT_execution_debug;
      if ( !DCONST_DVARINT_execution_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.integer == 2 )
      {
        G_DebugSphere(&goalOrigin, debugRadius, &colorRed, 1, 0);
        G_DebugString(&goalOrigin, &colorRed, debugTextScale, "victim pos", 0);
      }
      G_Execution_EntityShapecast(GEntity, attackerEnt, &goalOrigin, &origin);
      _XMM7 = 0i64;
      __asm { vroundss xmm0, xmm7, xmm2, 1 }
      angles.v[0] = (float)((float)((float)((float)((float)(outVictimGoalAngles.v[0] - GEntity->r.currentAngles.v[0]) * 0.0027777778) - *(float *)&_XMM0) * 360.0) * v16) + GEntity->r.currentAngles.v[0];
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      angles.v[1] = (float)((float)((float)((float)((float)(outVictimGoalAngles.v[1] - GEntity->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v16) + GEntity->r.currentAngles.v[1];
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      angles.v[2] = (float)((float)((float)((float)((float)(outVictimGoalAngles.v[2] - GEntity->r.currentAngles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v16) + GEntity->r.currentAngles.v[2];
      G_Execution_SetEntityTransform(GEntity, &origin, &angles);
      v24 = 1;
    }
  }
  else
  {
    v24 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v24;
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
  GExecutionState *v4; 
  float v5; 
  double Float_Internal_DebugName; 
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
    v4 = outState;
    if ( !outState )
      return;
    if ( !EntityPlayerState->activeExecutionStartTime )
    {
      EntityPlayerState->activeExecutionHint = 1;
      if ( !v4->buttonStartTime )
      {
        EntityPlayerState->holdExecutionTime = 0;
        return;
      }
      v5 = (float)EntityPlayerState->holdExecutionTime * 0.001;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_execution_hold_duration, "execution_hold_duration");
      if ( v5 < *(float *)&Float_Internal_DebugName )
      {
        EntityPlayerState->holdExecutionTime = level.time - v4->buttonStartTime;
        return;
      }
    }
  }
  EntityPlayerState->activeExecutionHint = 0;
}

