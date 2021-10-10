/*
==============
AIScriptedInterface::ScriptedAnim_Start
==============
*/

bool __fastcall AIScriptedInterface::ScriptedAnim_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?ScriptedAnim_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::ScriptedAnim_Finish
==============
*/

void __fastcall AIScriptedInterface::ScriptedAnim_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?ScriptedAnim_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::CustomAnim_Finish
==============
*/

void __fastcall AIScriptedInterface::CustomAnim_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?CustomAnim_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::CustomAnim_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::CustomAnim_Think(AIScriptedInterface *this)
{
  return ?CustomAnim_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::ScriptedAnim_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::ScriptedAnim_Think(AIScriptedInterface *this)
{
  return ?ScriptedAnim_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::ScriptedAnim_Orient
==============
*/

void __fastcall AIScriptedInterface::ScriptedAnim_Orient(AIScriptedInterface *this)
{
  ?ScriptedAnim_Orient@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::CustomAnim_Start
==============
*/

bool __fastcall AIScriptedInterface::CustomAnim_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?CustomAnim_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::CustomAnim_Finish
==============
*/
void AIScriptedInterface::CustomAnim_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  scrContext_t *v3; 
  unsigned int v4; 

  if ( this->m_pAI->AnimScriptSpecific.endFunc )
  {
    v3 = ScriptContext_Server();
    v4 = GScr_ExecEntThread(this->m_pAI->ent, this->m_pAI->AnimScriptSpecific.endFunc, 0);
    Scr_FreeThread(v3, v4);
    this->m_pAI->AnimScriptSpecific.endFunc = 0;
  }
}

/*
==============
AIScriptedInterface::CustomAnim_Start
==============
*/
char AIScriptedInterface::CustomAnim_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  GScr_Notify(this->m_pAI->ent, scr_const.begin_custom_anim, 0);
  this->m_pAI->animData.whizbyIndex = 0;
  return 1;
}

/*
==============
AIScriptedInterface::CustomAnim_Think
==============
*/
__int64 AIScriptedInterface::CustomAnim_Think(AIScriptedInterface *this)
{
  int IsAnimScriptAlive; 
  ai_scripted_t *m_pAI; 
  scrContext_t *v4; 
  unsigned int v5; 
  bool v7; 
  int number; 
  Ai_Asm *v9; 
  const ASM_Instance *InstanceIfExists; 
  Ai_Asm *v11; 
  int FrameDuration; 
  gentity_s *ent; 
  double v14; 
  vec3_t v15; 

  if ( !this->m_pAI->AnimScriptSpecific.func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 187, ASSERT_TYPE_ASSERT, "( m_pAI->AnimScriptSpecific.func )", (const char *)&queryFormat, "m_pAI->AnimScriptSpecific.func") )
    __debugbreak();
  this->SetDebugInfo(this, "animcustom");
  if ( !this->m_pAI->nodeSelect.keepNodeDuringScriptedAnim )
  {
    this->ClearKeepClaimedNode(this);
    Sentient_ClaimNode(this->m_pAI->sentient, NULL);
  }
  this->ClearPath(this);
  this->m_pAI->bForceNextPathFindImmediate = 1;
  AIScriptedInterface::AnimSpecific(this, &this->m_pAI->AnimScriptSpecific, AI_ANIM_USE_BOTH_DELTAS, 1);
  Nav_Teleport(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
  IsAnimScriptAlive = AIScriptedInterface::IsAnimScriptAlive(this);
  m_pAI = this->m_pAI;
  if ( IsAnimScriptAlive )
  {
    if ( !m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 218, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    AIScriptedInterface::PreThink(this);
    if ( this->m_pAI->eAnimMode == AI_ANIM_UNKNOWN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 223, ASSERT_TYPE_ASSERT, "( m_pAI->eAnimMode != AI_ANIM_UNKNOWN )", (const char *)&queryFormat, "m_pAI->eAnimMode != AI_ANIM_UNKNOWN") )
      __debugbreak();
    AIScriptedInterface::UpdateOriginAndAngles(this);
    AIScriptedInterface::ScriptedAnim_Orient(this);
    v7 = AI_ASM_Tick(this->m_pAI->ent->s.number, 0);
    AIScriptedInterface::UpdateLookAtPos(this);
    AIScriptedInterface::UpdateLookAtTracking(this);
    AIScriptedInterface::UpdateGunPose(this);
    this->UpdateAnimGameParams(this, v7);
    number = this->m_pAI->ent->s.number;
    v9 = Ai_Asm::Singleton();
    InstanceIfExists = Ai_Asm::GetInstanceIfExists(v9, NULL, number);
    if ( InstanceIfExists )
    {
      v11 = Ai_Asm::Singleton();
      FrameDuration = G_Level_GetFrameDuration();
      ent = this->m_pAI->ent;
      v14 = *(double *)ent->r.currentOrigin.v;
      v15.v[2] = ent->r.currentOrigin.v[2];
      *(double *)v15.v = v14;
      Ai_Asm::DebugRender(v11, InstanceIfExists, &v15, FrameDuration);
    }
    return 0i64;
  }
  else
  {
    if ( m_pAI->AnimScriptSpecific.endFunc )
    {
      v4 = ScriptContext_Server();
      v5 = GScr_ExecEntThread(this->m_pAI->ent, this->m_pAI->AnimScriptSpecific.endFunc, 0);
      Scr_FreeThread(v4, v5);
      this->m_pAI->AnimScriptSpecific.endFunc = 0;
    }
    AIScriptedInterface::PopState(this);
    return 1i64;
  }
}

/*
==============
AIScriptedInterface::ScriptedAnim_Finish
==============
*/
void AIScriptedInterface::ScriptedAnim_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  gentity_s *ent; 

  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 38, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 42, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    MT_Free(ent->scripted, 0x60ui64);
    ent->scripted = NULL;
  }
  this->m_pAI->bUseGoalWeight = 0;
  this->m_pAI->pushable = 1;
}

/*
==============
AIScriptedInterface::ScriptedAnim_Orient
==============
*/
void AIScriptedInterface::ScriptedAnim_Orient(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_orient_mode_t eMode; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 56, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  eMode = m_pAI->ScriptOrient.eMode;
  if ( eMode == AI_ORIENT_INVALID )
    eMode = m_pAI->CodeOrient.eMode;
  m_pAI->orientation.faceMotion = eMode != AI_ORIENT_TO_ENEMY;
}

/*
==============
AIScriptedInterface::ScriptedAnim_Start
==============
*/
char AIScriptedInterface::ScriptedAnim_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  this->m_pAI->ScriptOrient.eMode = AI_ORIENT_INVALID;
  this->m_pAI->animData.whizbyIndex = 0;
  return 1;
}

/*
==============
AIScriptedInterface::ScriptedAnim_Think
==============
*/
__int64 AIScriptedInterface::ScriptedAnim_Think(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  float v3; 
  float v4; 
  float v5; 
  int IsAnimScriptAlive; 
  ai_scripted_t *v7; 
  gentity_s *ent; 
  AIScriptedInterface_vtbl *v10; 
  bool v11; 
  ai_scripted_t *v12; 
  ai_orient_mode_t eMode; 
  AIScriptedInterface_vtbl *v14; 
  bool v15; 
  gentity_s *v16; 
  ai_scripted_t *v17; 
  ai_scripted_t *v18; 
  float v19; 
  bool v20; 
  int number; 
  Ai_Asm *v22; 
  const ASM_Instance *InstanceIfExists; 
  Ai_Asm *v24; 
  int FrameDuration; 
  gentity_s *v26; 
  double v27; 
  vec3_t v28; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 80, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  this->SetDebugInfo(this, "animscripted");
  if ( !this->m_pAI->nodeSelect.keepNodeDuringScriptedAnim )
  {
    this->ClearKeepClaimedNode(this);
    Sentient_ClaimNode(this->m_pAI->sentient, NULL);
  }
  this->ClearPath(this);
  this->m_pAI->bForceNextPathFindImmediate = 1;
  AIScriptedInterface::AnimScripted(this);
  this->m_pAI->pushable = 0;
  AIScriptedInterface::Physics_UpdatePrevGround(&this->m_pAI->Physics);
  m_pAI = this->m_pAI;
  v3 = m_pAI->ent->r.currentOrigin.v[0];
  v4 = m_pAI->ent->r.currentOrigin.v[1];
  v5 = m_pAI->ent->r.currentOrigin.v[2];
  IsAnimScriptAlive = AIScriptedInterface::IsAnimScriptAlive(this);
  v7 = this->m_pAI;
  if ( IsAnimScriptAlive )
  {
    ent = v7->ent;
    if ( !v7->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 112, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    G_Animscripted_Think(ent);
    Nav_Teleport(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
    if ( ent->scripted )
    {
      AIScriptedInterface::PreThink(this);
      AIScriptedInterface::ScriptedAnim_Orient(this);
      v10 = this->__vftable;
      v11 = this->Is3D(this);
      v10->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &ent->r.currentAngles, v11);
      v12 = this->m_pAI;
      eMode = v12->ScriptOrient.eMode;
      if ( eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || eMode == AI_ORIENT_DONT_CHANGE )
      {
        v12->ScriptOrient.eMode = AI_ORIENT_DONT_CHANGE_RELATIVE;
        v14 = this->__vftable;
        v15 = this->Is3D(this);
        v14->SetDesiredBodyAngles(this, &this->m_pAI->ScriptOrient, &this->m_pAI->ent->r.currentAngles, v15);
        v12 = this->m_pAI;
      }
      v16 = v12->ent;
      v12->Physics.vWishDelta.v[0] = v12->ent->r.currentOrigin.v[0] - v3;
      v12->Physics.vWishDelta.v[1] = v16->r.currentOrigin.v[1] - v4;
      v12->Physics.vWishDelta.v[2] = v16->r.currentOrigin.v[2] - v5;
      v17 = this->m_pAI;
      v17->Physics.vWishDelta.v[0] = v17->Physics.vWishDelta.v[0] - v17->Physics.appliedGroundDelta.v[0];
      v17->Physics.vWishDelta.v[1] = v17->Physics.vWishDelta.v[1] - v17->Physics.appliedGroundDelta.v[1];
      v17->Physics.vWishDelta.v[2] = v17->Physics.vWishDelta.v[2] - v17->Physics.appliedGroundDelta.v[2];
      v18 = this->m_pAI;
      v19 = 1000.0 / (float)v18->Physics.iMsec;
      v18->Physics.vVelocity.v[0] = v19 * v18->Physics.vWishDelta.v[0];
      v18->Physics.vVelocity.v[1] = v19 * v18->Physics.vWishDelta.v[1];
      v18->Physics.vVelocity.v[2] = v19 * v18->Physics.vWishDelta.v[2];
      v20 = AI_ASM_Tick(this->m_pAI->ent->s.number, 0);
      AIScriptedInterface::UpdateLookAtPos(this);
      AIScriptedInterface::UpdateLookAtTracking(this);
      AIScriptedInterface::UpdateGunPose(this);
      this->UpdateAnimGameParams(this, v20);
      number = this->m_pAI->ent->s.number;
      v22 = Ai_Asm::Singleton();
      InstanceIfExists = Ai_Asm::GetInstanceIfExists(v22, NULL, number);
      if ( InstanceIfExists )
      {
        v24 = Ai_Asm::Singleton();
        FrameDuration = G_Level_GetFrameDuration();
        v26 = this->m_pAI->ent;
        v27 = *(double *)v26->r.currentOrigin.v;
        v28.v[2] = v26->r.currentOrigin.v[2];
        *(double *)v28.v = v27;
        Ai_Asm::DebugRender(v24, InstanceIfExists, &v28, FrameDuration);
      }
      return 0i64;
    }
    else
    {
      AIScriptedInterface::PopState(this);
      return 1i64;
    }
  }
  else
  {
    if ( v7->eSimulatedState[v7->simulatedStateLevel] != AIS_SCRIPTEDANIM && v7->eState[v7->stateLevel] != AIS_DEATH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 101, ASSERT_TYPE_ASSERT, "( m_pAI->eSimulatedState[m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM || m_pAI->eState[m_pAI->stateLevel] == AIS_DEATH )", (const char *)&queryFormat, "m_pAI->eSimulatedState[m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM || m_pAI->eState[m_pAI->stateLevel] == AIS_DEATH") )
      __debugbreak();
    if ( this->m_pAI->eSimulatedState[this->m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM )
      AIScriptedInterface::PopState(this);
    return 1i64;
  }
}

