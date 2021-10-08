/*
==============
AIScriptedInterface::AnimSpecific
==============
*/

void __fastcall AIScriptedInterface::AnimSpecific(AIScriptedInterface *this, GScrAnimScriptFunc *func, ai_animmode_t eAnimMode, bool bUseGoalWeight)
{
  ?AnimSpecific@AIScriptedInterface@@QEBAXPEAUGScrAnimScriptFunc@@W4ai_animmode_t@@_N@Z(this, func, eAnimMode, bUseGoalWeight);
}

/*
==============
AIScriptedInterface::SetAnimScript
==============
*/

void __fastcall AIScriptedInterface::SetAnimScript(AIScriptedInterface *this, GScrAnimScriptFunc *pAnimScriptFunc, unsigned __int8 moveMode, ai_animmode_t animMode)
{
  ?SetAnimScript@AIScriptedInterface@@QEBAXPEAUGScrAnimScriptFunc@@EW4ai_animmode_t@@@Z(this, pAnimScriptFunc, moveMode, animMode);
}

/*
==============
AIActorInterface::DoXAnimUpdate
==============
*/

void __fastcall AIActorInterface::DoXAnimUpdate(AIActorInterface *this)
{
  ?DoXAnimUpdate@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AnimScripted
==============
*/

void __fastcall AIScriptedInterface::AnimScripted(AIScriptedInterface *this)
{
  ?AnimScripted@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsAnimScriptAlive
==============
*/

int __fastcall AIScriptedInterface::IsAnimScriptAlive(AIScriptedInterface *this)
{
  return ?IsAnimScriptAlive@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::AnimPain
==============
*/

void __fastcall AIScriptedInterface::AnimPain(AIScriptedInterface *this)
{
  ?AnimPain@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::InitAnim
==============
*/

void __fastcall AIScriptedInterface::InitAnim(AIScriptedInterface *this)
{
  ?InitAnim@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AnimDeath
==============
*/

void __fastcall AIScriptedInterface::AnimDeath(AIScriptedInterface *this)
{
  ?AnimDeath@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::KillAnimScript
==============
*/

void __fastcall AIScriptedInterface::KillAnimScript(AIScriptedInterface *this)
{
  ?KillAnimScript@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AnimDeath
==============
*/
void AIScriptedInterface::AnimDeath(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_animmode_t v2; 
  ai_animmode_t eScriptSetAnimMode; 
  __int64 species; 

  m_pAI = this->m_pAI;
  v2 = AI_ANIM_USE_BOTH_DELTAS;
  eScriptSetAnimMode = m_pAI->eScriptSetAnimMode;
  species = m_pAI->species;
  if ( eScriptSetAnimMode )
    v2 = eScriptSetAnimMode;
  AIScriptedInterface::SetAnimScript(this, &g_animScriptTable[species]->death, 0, v2);
  this->m_pAI->bUseGoalWeight = 0;
}

/*
==============
AIScriptedInterface::AnimPain
==============
*/
void AIScriptedInterface::AnimPain(AIScriptedInterface *this)
{
  AIScriptedInterface::SetAnimScript(this, &g_animScriptTable[this->m_pAI->species]->pain, 0, AI_ANIM_USE_BOTH_DELTAS);
  this->m_pAI->bUseGoalWeight = 0;
}

/*
==============
AIScriptedInterface::AnimScripted
==============
*/
void AIScriptedInterface::AnimScripted(AIScriptedInterface *this)
{
  AIScriptedInterface::SetAnimScript(this, &g_animScriptTable[this->m_pAI->species]->scripted, 0, AI_ANIM_USE_BOTH_DELTAS);
  this->m_pAI->bUseGoalWeight = 1;
}

/*
==============
AIScriptedInterface::AnimSpecific
==============
*/
void AIScriptedInterface::AnimSpecific(AIScriptedInterface *this, GScrAnimScriptFunc *func, ai_animmode_t eAnimMode, bool bUseGoalWeight)
{
  if ( !func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 193, ASSERT_TYPE_ASSERT, "(func)", (const char *)&queryFormat, "func") )
    __debugbreak();
  if ( this->m_pAI->eScriptSetAnimMode )
    eAnimMode = this->m_pAI->eScriptSetAnimMode;
  AIScriptedInterface::SetAnimScript(this, func, 0, eAnimMode);
  this->m_pAI->bUseGoalWeight = bUseGoalWeight;
}

/*
==============
AIActorInterface::DoXAnimUpdate
==============
*/
void AIActorInterface::DoXAnimUpdate(AIActorInterface *this)
{
  gentity_s *v1; 

  v1 = this->GetEntity(this);
  G_MainSP_XAnimUpdateEnt(v1);
}

/*
==============
AIScriptedInterface::InitAnim
==============
*/
void AIScriptedInterface::InitAnim(AIScriptedInterface *this)
{
  if ( this->m_pAI->AnimScriptHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 18, ASSERT_TYPE_ASSERT, "(m_pAI->AnimScriptHandle == NULL_OBJECT_VARIABLE_ID)", (const char *)&queryFormat, "m_pAI->AnimScriptHandle == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( this->m_pAI->pAnimScriptFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 19, ASSERT_TYPE_ASSERT, "(m_pAI->pAnimScriptFunc == 0)", (const char *)&queryFormat, "m_pAI->pAnimScriptFunc == NULL") )
    __debugbreak();
  if ( this->m_pAI->eAnimMode )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 20, ASSERT_TYPE_ASSERT, "(m_pAI->eAnimMode == AI_ANIM_UNKNOWN)", (const char *)&queryFormat, "m_pAI->eAnimMode == AI_ANIM_UNKNOWN") )
      __debugbreak();
  }
}

/*
==============
AIScriptedInterface::IsAnimScriptAlive
==============
*/
int AIScriptedInterface::IsAnimScriptAlive(AIScriptedInterface *this)
{
  const scrContext_t *v3; 

  if ( !this->m_pAI->AnimScriptHandle )
    return 0;
  v3 = ScriptContext_Server();
  return Scr_IsThreadAlive(v3, this->m_pAI->AnimScriptHandle);
}

/*
==============
AIScriptedInterface::KillAnimScript
==============
*/
void AIScriptedInterface::KillAnimScript(AIScriptedInterface *this)
{
  scrContext_t *v2; 
  ai_scripted_t *m_pAI; 

  v2 = ScriptContext_Server();
  if ( !Scr_IsSystemActive(v2, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 51, ASSERT_TYPE_ASSERT, "(Scr_IsSystemActive( scrContext, SCR_SYS_GAME ))", (const char *)&queryFormat, "Scr_IsSystemActive( scrContext, SCR_SYS_GAME )") )
    __debugbreak();
  this->m_pAI->pAnimScriptFunc = NULL;
  m_pAI = this->m_pAI;
  if ( m_pAI->AnimScriptHandle )
  {
    GScr_Notify(m_pAI->ent, scr_const.killanimscript, 0);
    Scr_FreeThread(v2, this->m_pAI->AnimScriptHandle);
    this->m_pAI->AnimScriptHandle = 0;
  }
}

/*
==============
AIScriptedInterface::SetAnimScript
==============
*/
void AIScriptedInterface::SetAnimScript(AIScriptedInterface *this, GScrAnimScriptFunc *pAnimScriptFunc, unsigned __int8 moveMode, ai_animmode_t animMode)
{
  const dvar_t *v8; 
  ai_scripted_t *m_pAI; 
  ai_animmode_t eScriptSetAnimMode; 
  const dvar_t *v11; 
  scrContext_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  ai_scripted_t *v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 72, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pAnimScriptFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 73, ASSERT_TYPE_ASSERT, "(pAnimScriptFunc)", (const char *)&queryFormat, "pAnimScriptFunc") )
    __debugbreak();
  v8 = DVARBOOL_ai_animscript;
  if ( !DVARBOOL_ai_animscript && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_animscript") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->pAnimScriptFunc == pAnimScriptFunc )
    {
      eScriptSetAnimMode = m_pAI->eScriptSetAnimMode;
      if ( eScriptSetAnimMode )
      {
        m_pAI->eAnimMode = eScriptSetAnimMode;
      }
      else
      {
        v11 = DVARBOOL_ai_iw7;
        if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( !v11->current.enabled || this->m_pAI->eAnimMode == AI_ANIM_UNKNOWN )
          this->m_pAI->eAnimMode = animMode;
      }
    }
    else
    {
      v12 = ScriptContext_Server();
      Scr_DecTime(v12);
      AIScriptedInterface::KillAnimScript(this);
      Scr_RunCurrentThreads(v12);
      AIScriptedInterface::ClearScriptOrient(this);
      this->m_pAI->grenade.bGrenadeTossValid = 0;
      this->m_pAI->safeToChangeScript = 1;
      v13 = DVARBOOL_ai_iw7;
      if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled )
        this->m_pAI->eScriptSetAnimMode = AI_ANIM_UNKNOWN;
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 114, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      this->m_pAI->ent->flags.m_flags[0] &= ~0x800u;
      this->m_pAI->pAnimScriptFunc = pAnimScriptFunc;
      v14 = DVARBOOL_ai_iw7;
      if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( !v14->current.enabled || (v15 = this->m_pAI, v15->eAnimMode == AI_ANIM_UNKNOWN) || animMode == v15->eScriptSetAnimMode )
      {
        this->m_pAI->eAnimMode = animMode;
        v15 = this->m_pAI;
      }
      v15->moveMode = moveMode;
      this->m_pAI->pushable = 1;
      this->ClearKeepClaimedNode(this);
      this->m_pAI->AnimScriptHandle = GScr_ExecEntThread(this->m_pAI->ent, pAnimScriptFunc->func, 0);
      if ( !this->m_pAI->AnimScriptHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animapi.cpp", 132, ASSERT_TYPE_ASSERT, "(m_pAI->AnimScriptHandle)", (const char *)&queryFormat, "m_pAI->AnimScriptHandle") )
        __debugbreak();
      this->DoXAnimUpdate(this);
      Scr_IncTime(v12);
    }
  }
  else
  {
    AIScriptedInterface::KillAnimScript(this);
  }
}

