/*
==============
AIScriptedInterface::Negotiation_Start
==============
*/

bool __fastcall AIScriptedInterface::Negotiation_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Negotiation_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Negotiation_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Negotiation_Think(AIScriptedInterface *this)
{
  return ?Negotiation_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Negotiation_Finish
==============
*/

void __fastcall AIScriptedInterface::Negotiation_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Negotiation_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Negotiation_Finish
==============
*/
void AIScriptedInterface::Negotiation_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  this->m_pAI->bUseGoalWeight = 0;
  this->m_pAI->bInTraverseState = 0;
  if ( eNextState != AIS_DEATH )
    this->m_pAI->painDeath.forceRagdollImmediate = 0;
  bfx::LinkHandle::Release(&this->m_pAI->pNavigator->m_hLink);
  this->m_pAI->pNavigator->SetCurPos(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
}

/*
==============
AIScriptedInterface::Negotiation_Start
==============
*/
char AIScriptedInterface::Negotiation_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  scrContext_t *v4; 
  ai_scripted_t *m_pAI; 
  int number; 
  Ai_Asm *v7; 
  ASM_Instance *InstanceIfExists; 
  scr_string_t traverseName; 
  Ai_Asm *v10; 

  if ( bfx::LinkHandle::IsValid(&this->m_pAI->pNavigator->m_hLink) && AICommonInterface::HasPath(this) )
  {
    AIScriptedInterface::SetOrientMode(this, AI_ORIENT_DONT_CHANGE_RELATIVE);
    this->m_pAI->painDeath.forceRagdollImmediate = 1;
    this->m_pAI->animData.whizbyIndex = 0;
    this->m_pAI->prevMoveDir2D = 0i64;
    v4 = ScriptContext_Server();
    Scr_AddConstString(v4, this->m_pAI->traverseName);
    GScr_Notify(this->m_pAI->ent, scr_const.traverse_begin, 1u);
    m_pAI = this->m_pAI;
    if ( !m_pAI->bInTraverseState )
    {
      number = m_pAI->ent->s.number;
      v7 = Ai_Asm::Singleton();
      InstanceIfExists = Ai_Asm::GetInstanceIfExists(v7, NULL, number);
      if ( InstanceIfExists )
      {
        traverseName = this->m_pAI->traverseName;
        v10 = Ai_Asm::Singleton();
        Common_Asm::DoTraverse(v10, NULL, InstanceIfExists, traverseName);
        this->m_pAI->bInTraverseState = 1;
      }
    }
    return 1;
  }
  else
  {
    this->m_pAI->bInTraverseState = 0;
    return 0;
  }
}

/*
==============
AIScriptedInterface::Negotiation_Think
==============
*/
__int64 AIScriptedInterface::Negotiation_Think(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int eScriptSetAnimMode; 
  const dvar_t *v4; 
  ai_scripted_t *v5; 
  ai_scripted_t *v6; 
  int number; 
  Ai_Asm *v9; 
  int v10; 
  Ai_Asm *v11; 
  const ASM_Instance *InstanceIfExists; 
  Ai_Asm *v13; 
  gentity_s *ent; 
  __int64 v15; 
  __int64 v16; 

  m_pAI = this->m_pAI;
  eScriptSetAnimMode = 7;
  if ( m_pAI->eScriptSetAnimMode )
    eScriptSetAnimMode = m_pAI->eScriptSetAnimMode;
  m_pAI->eAnimMode = eScriptSetAnimMode;
  this->m_pAI->bUseGoalWeight = 1;
  this->m_pAI->grenade.bGrenadeTossValid = 0;
  this->m_pAI->safeToChangeScript = 1;
  v4 = DVARBOOL_ai_iw7;
  if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    this->m_pAI->eScriptSetAnimMode = AI_ANIM_UNKNOWN;
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_negotiation.cpp", 107, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  this->m_pAI->ent->flags.m_flags[0] &= ~0x800u;
  this->m_pAI->moveMode = 0;
  this->m_pAI->pushable = 1;
  this->ClearKeepClaimedNode(this);
  this->m_pAI->pushable = 0;
  this->m_pAI->orientation.faceMotion = 1;
  if ( AIScriptedInterface::IsTraversing(this) )
  {
    this->SetDebugInfo(this, "negotiation");
    AIScriptedInterface::PreThink(this);
    AIScriptedInterface::UpdateOriginAndAngles(this);
    number = this->m_pAI->ent->s.number;
    LODWORD(v15) = 47;
    v16 = 0i64;
    SV_Profile_BeginEvent(SVPROF_AI_ASM_TICK);
    v9 = Ai_Asm::Singleton();
    LOBYTE(number) = Common_Asm::Tick(v9, NULL, number, 0, 0);
    SV_Profile_EndEvent(SVPROF_AI_ASM_TICK);
    AIScriptedInterface::UpdateLookAtPos(this);
    AIScriptedInterface::UpdateLookAtTracking(this);
    AIScriptedInterface::UpdateGunPose(this);
    this->UpdateAnimGameParams(this, number);
    v10 = this->m_pAI->ent->s.number;
    v11 = Ai_Asm::Singleton();
    InstanceIfExists = Ai_Asm::GetInstanceIfExists(v11, NULL, v10);
    if ( InstanceIfExists )
    {
      v13 = Ai_Asm::Singleton();
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      ent = this->m_pAI->ent;
      v15 = *(_QWORD *)ent->r.currentOrigin.v;
      *(float *)&v16 = ent->r.currentOrigin.v[2];
      Ai_Asm::DebugRender(v13, InstanceIfExists, (vec3_t *)&v15, level.frameDuration);
    }
    return 0i64;
  }
  else
  {
    v5 = this->m_pAI;
    *(_QWORD *)v5->Physics.vWishDelta.v = 0i64;
    v5->Physics.vWishDelta.v[2] = 0.0;
    v6 = this->m_pAI;
    *(_QWORD *)v6->Physics.vVelocity.v = 0i64;
    v6->Physics.vVelocity.v[2] = 0.0;
    if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_negotiation.cpp", 125, ASSERT_TYPE_ASSERT, "(!Is3D())", "%s\n\tNeed to support actor_t->prevMoveDir2D for 3-dimensions", "!Is3D()") )
      __debugbreak();
    YawVectors2D(this->m_pAI->orientation.vDesiredAngles.v[1], &this->m_pAI->prevMoveDir2D, NULL);
    AIScriptedInterface::PopState(this);
    return 1i64;
  }
}

