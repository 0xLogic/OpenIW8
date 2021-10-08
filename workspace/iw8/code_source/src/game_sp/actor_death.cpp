/*
==============
AIScriptedInterface::Death_Start
==============
*/

bool __fastcall AIScriptedInterface::Death_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Death_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Death_Cleanup
==============
*/

void __fastcall AIScriptedInterface::Death_Cleanup(AIScriptedInterface *this)
{
  ?Death_Cleanup@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Death_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Death_Think(AIScriptedInterface *this)
{
  return ?Death_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Death_ForceFall
==============
*/

void __fastcall AIScriptedInterface::Death_ForceFall(AIScriptedInterface *this)
{
  ?Death_ForceFall@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Death_Cleanup
==============
*/
void AIScriptedInterface::Death_Cleanup(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 88, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 89, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  Actor_BroadcastTeamEvent(this->m_pAI->sentient, AI_EV_DEATH);
  AIScriptedInterface::Grenade_DropIfHeld(this);
  Sentient_Dissociate(this->m_pAI->sentient);
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 98, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->Physics.bIsAlive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 99, ASSERT_TYPE_ASSERT, "(!m_pAI->Physics.bIsAlive)", (const char *)&queryFormat, "!m_pAI->Physics.bIsAlive") )
    __debugbreak();
  this->ClearPath(this);
}

/*
==============
AIScriptedInterface::Death_ForceFall
==============
*/
void AIScriptedInterface::Death_ForceFall(AIScriptedInterface *this)
{
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  unsigned __int16 EntityHitId; 
  vec3_t end; 
  trace_t results; 

  ent = this->m_pAI->ent;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( (ent->flags.m_flags[1] & 8) != 0 )
  {
    __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    }
    AIScriptedInterface::Physics_UpdatePrevGround(&this->m_pAI->Physics);
    this->m_pAI->eScriptSetAnimMode = AI_ANIM_NOPHYSICS;
    _RCX = this->m_pAI;
    _RAX = _RCX->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+0C8h+end], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+0C8h+end+4], xmm1
      vmovss  xmm0, dword ptr [rax+138h]
      vmulss  xmm1, xmm6, cs:__real@3e99999a
      vmovss  dword ptr [rsp+0C8h+end+8], xmm0
      vmovss  xmm0, dword ptr [rcx+0A34h]
      vsubss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rcx+0A34h], xmm1
    }
    m_pAI = this->m_pAI;
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rdx+0A34h]
      vmulss  xmm2, xmm0, cs:__real@3a83126f
      vaddss  xmm2, xmm2, dword ptr [rsp+0C8h+end+8]
      vmovss  dword ptr [rsp+0C8h+end+8], xmm2
    }
    G_Main_TraceCapsule(&results, &m_pAI->ent->r.currentOrigin, &end, &bounds_origin, 0, m_pAI->ent->clipmask & 0xFDFFBFFF);
    EntityHitId = Trace_GetEntityHitId(&results);
    _RCX = this->m_pAI;
    if ( EntityHitId == 2046 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+end]
        vmovss  xmm5, [rsp+0C8h+results.fraction]
        vsubss  xmm1, xmm0, dword ptr [rax+130h]
        vmovss  xmm0, dword ptr [rsp+0C8h+end+4]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm6, xmm1, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+0C8h+end], xmm6
        vsubss  xmm1, xmm0, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rsp+0C8h+end+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+0C8h+end+4], xmm3
        vsubss  xmm1, xmm0, dword ptr [rax+138h]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [rax+138h]
        vmovss  dword ptr [rsp+0C8h+end+8], xmm3
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [rsp+0C8h+end] }
    }
    _RAX = _RCX->ent;
    __asm
    {
      vmovss  dword ptr [rax+130h], xmm6
      vmovss  xmm0, dword ptr [rsp+0C8h+end+4]
      vmovaps xmm6, [rsp+0C8h+var_18]
      vmovss  dword ptr [rax+134h], xmm0
      vmovss  xmm1, dword ptr [rsp+0C8h+end+8]
      vmovss  dword ptr [rax+138h], xmm1
      vmovss  xmm0, dword ptr [rsp+0C8h+end]
      vmovss  dword ptr [rcx+82Ch], xmm0
      vmovss  xmm1, dword ptr [rsp+0C8h+end+4]
      vmovss  dword ptr [rcx+830h], xmm1
      vmovss  xmm0, dword ptr [rsp+0C8h+end+8]
      vmovss  dword ptr [rcx+834h], xmm0
    }
  }
}

/*
==============
AIScriptedInterface::Death_Start
==============
*/
char AIScriptedInterface::Death_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  ai_scripted_t *m_pAI; 
  __int64 health; 
  unsigned __int64 eTeam; 
  const bitarray<224> *AllCombatTeamFlags; 
  const bitarray<224> *v7; 
  pathnode_t *v8; 
  int number; 
  Ai_Asm *v10; 
  ASM_Instance *Instance; 
  Ai_Asm *v12; 
  const ASM_State *CurrentStateByAssetName; 
  const char *v14; 
  ai_scripted_t *v15; 
  gentity_s *ent; 
  trajectory_t_secure *p_pos; 
  __int64 v19; 
  int v20; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 25, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 26, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  health = (unsigned int)m_pAI->ent->health;
  if ( (int)health > 0 )
  {
    Com_PrintError(18, "AI %d tried to die with health %d", (unsigned int)m_pAI->ent->s.number, health);
    this->m_pAI->ent->health = 0;
    m_pAI = this->m_pAI;
  }
  eTeam = (unsigned int)m_pAI->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
  else
    AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v7 = AllCombatTeamFlags;
  if ( (unsigned int)eTeam >= 0xE0 )
  {
    v20 = 224;
    LODWORD(v19) = eTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (eTeam & 0x1F)) & v7->array[eTeam >> 5]) != 0 )
  {
    v8 = Sentient_NearestNode(this->m_pAI->sentient);
    if ( v8 )
      Path_ActorMarkAllConnectedNodesDangerous(v8, (team_t)eTeam);
  }
  this->ClearKeepClaimedNode(this);
  Sentient_ClaimNode(this->m_pAI->sentient, NULL);
  AIScriptedInterface::ClearLookAtEntity(this);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&this->m_pAI->ent->s.lerp.eFlags, ACTIVE, 0x11u);
  number = this->m_pAI->ent->s.number;
  v10 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v10, NULL, number);
  v12 = Ai_Asm::Singleton();
  if ( Common_Asm::Death(v12, NULL, Instance) )
  {
    CurrentStateByAssetName = Common_Asm::Utils::GetCurrentStateByAssetName(Instance, Instance->m_pASM->m_Name);
    v14 = SL_ConvertToString(CurrentStateByAssetName->m_Name);
    LODWORD(v19) = this->m_pAI->ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 60, ASSERT_TYPE_ASSERT, "( err == ASM_ERR_NONE )", "AI %d failed to properly transition into an ASM death state: ASM %s state %s", v19, Instance->m_pASM->m_szName, v14) )
      __debugbreak();
  }
  v15 = this->m_pAI;
  if ( !v15->painDeath.disableDeathOrient && v15->eAnimMode != AI_ANIM_NOPHYSICS )
  {
    ent = v15->ent;
    if ( !v15->ent->tagInfo )
    {
      p_pos = &ent->s.lerp.pos;
      if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
        __debugbreak();
      if ( (unsigned int)(p_pos->trType - 23) > 5 )
      {
        this->m_pAI->ProneInfo.iProneTime = level.time;
        this->m_pAI->ProneInfo.prone = 1;
        this->m_pAI->ProneInfo.bCorpseOrientation = 1;
        this->m_pAI->ProneInfo.iProneTrans = 500;
        this->m_pAI->ProneInfo.fTorsoPitch = 0.0;
        this->m_pAI->ProneInfo.fWaistPitch = 0.0;
        this->OrientCorpseToTheGround(this, 0);
      }
    }
  }
  AIScriptedInterface::SetSubState(this, STATE_DEATH_PRECLEANUP);
  return 1;
}

/*
==============
AIScriptedInterface::Death_Think
==============
*/
__int64 AIScriptedInterface::Death_Think(AIScriptedInterface *this)
{
  int number; 
  Ai_Asm *v3; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_death.cpp", 145, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->SetDebugInfo(this, "death");
  AI_BT_Tick(this->m_pAI->ent->s.number);
  number = this->m_pAI->ent->s.number;
  v3 = Ai_Asm::Singleton();
  Ai_Asm::ClearEphemeralEvents(v3, number);
  m_pAI = this->m_pAI;
  v5 = m_pAI;
  if ( m_pAI->eSubState[m_pAI->stateLevel] == STATE_DEATH_PRECLEANUP && level.time - m_pAI->iStateTime >= 800 )
  {
    AIScriptedInterface::Death_Cleanup(this);
    AIScriptedInterface::SetSubState(this, STATE_DEATH_POSTCLEANUP);
    v5 = this->m_pAI;
  }
  if ( (GScrAnimScriptListSP *)v5->pAnimScriptFunc != g_animScriptTable[v5->species] || AIScriptedInterface::IsAnimScriptAlive(this) )
  {
    AIScriptedInterface::SetOrientMode(this, AI_ORIENT_DONT_CHANGE_RELATIVE);
    this->AnimDeath(this);
    AIScriptedInterface::Death_ForceFall(this);
    AIScriptedInterface::PostThink(this);
    if ( this->m_pAI->ProneInfo.bCorpseOrientation )
      this->OrientCorpseToTheGround(this, 1);
    return 0i64;
  }
  else
  {
    if ( this->m_pAI->eSubState[this->m_pAI->stateLevel] == STATE_DEATH_PRECLEANUP )
      AIScriptedInterface::Death_Cleanup(this);
    return 2i64;
  }
}

