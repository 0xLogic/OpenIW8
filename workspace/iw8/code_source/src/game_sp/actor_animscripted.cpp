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
      _RDX = this->m_pAI->ent;
      __asm { vmovsd  xmm0, qword ptr [rdx+130h] }
      v15.v[2] = _RDX->r.currentOrigin.v[2];
      __asm { vmovsd  [rsp+48h+var_18], xmm0 }
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
  int IsAnimScriptAlive; 
  ai_scripted_t *m_pAI; 
  __int64 result; 
  gentity_s *ent; 
  AIScriptedInterface_vtbl *v13; 
  bool v14; 
  ai_orient_mode_t eMode; 
  AIScriptedInterface_vtbl *v17; 
  bool v18; 
  bool v41; 
  int number; 
  Ai_Asm *v43; 
  const ASM_Instance *InstanceIfExists; 
  Ai_Asm *v45; 
  int FrameDuration; 
  vec3_t v52; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
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
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+130h]
    vmovss  xmm7, dword ptr [rcx+134h]
    vmovss  xmm8, dword ptr [rcx+138h]
  }
  IsAnimScriptAlive = AIScriptedInterface::IsAnimScriptAlive(this);
  m_pAI = this->m_pAI;
  if ( IsAnimScriptAlive )
  {
    ent = m_pAI->ent;
    if ( !m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 112, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    G_Animscripted_Think(ent);
    Nav_Teleport(this->m_pAI->pNavigator, &this->m_pAI->ent->r.currentOrigin);
    if ( ent->scripted )
    {
      AIScriptedInterface::PreThink(this);
      AIScriptedInterface::ScriptedAnim_Orient(this);
      v13 = this->__vftable;
      v14 = this->Is3D(this);
      v13->SetDesiredBodyAngles(this, &this->m_pAI->CodeOrient, &ent->r.currentAngles, v14);
      _RCX = this->m_pAI;
      eMode = _RCX->ScriptOrient.eMode;
      if ( eMode == AI_ORIENT_DONT_CHANGE_RELATIVE || eMode == AI_ORIENT_DONT_CHANGE )
      {
        _RCX->ScriptOrient.eMode = AI_ORIENT_DONT_CHANGE_RELATIVE;
        v17 = this->__vftable;
        v18 = this->Is3D(this);
        v17->SetDesiredBodyAngles(this, &this->m_pAI->ScriptOrient, &this->m_pAI->ent->r.currentAngles, v18);
        _RCX = this->m_pAI;
      }
      _RAX = _RCX->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rcx+888h], xmm1
        vmovss  xmm2, dword ptr [rax+134h]
        vsubss  xmm0, xmm2, xmm7
        vmovss  dword ptr [rcx+88Ch], xmm0
        vmovss  xmm1, dword ptr [rax+138h]
        vsubss  xmm2, xmm1, xmm8
        vmovss  dword ptr [rcx+890h], xmm2
      }
      _RAX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+888h]
        vsubss  xmm1, xmm0, dword ptr [rax+87Ch]
        vmovss  dword ptr [rax+888h], xmm1
        vmovss  xmm2, dword ptr [rax+88Ch]
        vsubss  xmm0, xmm2, dword ptr [rax+880h]
        vmovss  dword ptr [rax+88Ch], xmm0
        vmovss  xmm1, dword ptr [rax+890h]
        vsubss  xmm2, xmm1, dword ptr [rax+884h]
        vmovss  xmm0, cs:__real@447a0000
        vmovss  dword ptr [rax+890h], xmm2
      }
      _RAX = this->m_pAI;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rax+8B0h]
        vdivss  xmm2, xmm0, xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+888h]
        vmovss  dword ptr [rax+838h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rax+88Ch]
        vmovss  dword ptr [rax+83Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+890h]
        vmovss  dword ptr [rax+840h], xmm0
      }
      v41 = AI_ASM_Tick(this->m_pAI->ent->s.number, 0);
      AIScriptedInterface::UpdateLookAtPos(this);
      AIScriptedInterface::UpdateLookAtTracking(this);
      AIScriptedInterface::UpdateGunPose(this);
      this->UpdateAnimGameParams(this, v41);
      number = this->m_pAI->ent->s.number;
      v43 = Ai_Asm::Singleton();
      InstanceIfExists = Ai_Asm::GetInstanceIfExists(v43, NULL, number);
      if ( InstanceIfExists )
      {
        v45 = Ai_Asm::Singleton();
        FrameDuration = G_Level_GetFrameDuration();
        _RDX = this->m_pAI->ent;
        __asm { vmovsd  xmm0, qword ptr [rdx+130h] }
        v52.v[2] = _RDX->r.currentOrigin.v[2];
        __asm { vmovsd  [rsp+78h+var_48], xmm0 }
        Ai_Asm::DebugRender(v45, InstanceIfExists, &v52, FrameDuration);
      }
      result = 0i64;
    }
    else
    {
      AIScriptedInterface::PopState(this);
      result = 1i64;
    }
  }
  else
  {
    if ( m_pAI->eSimulatedState[m_pAI->simulatedStateLevel] != AIS_SCRIPTEDANIM && m_pAI->eState[m_pAI->stateLevel] != AIS_DEATH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_animscripted.cpp", 101, ASSERT_TYPE_ASSERT, "( m_pAI->eSimulatedState[m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM || m_pAI->eState[m_pAI->stateLevel] == AIS_DEATH )", (const char *)&queryFormat, "m_pAI->eSimulatedState[m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM || m_pAI->eState[m_pAI->stateLevel] == AIS_DEATH") )
      __debugbreak();
    if ( this->m_pAI->eSimulatedState[this->m_pAI->simulatedStateLevel] == AIS_SCRIPTEDANIM )
      AIScriptedInterface::PopState(this);
    result = 1i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return result;
}

