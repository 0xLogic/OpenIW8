/*
==============
AIScriptedInterface::CheckCoverApproach
==============
*/

int __fastcall AIScriptedInterface::CheckCoverApproach(AIScriptedInterface *this)
{
  return ?CheckCoverApproach@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::CoverApproachNotify
==============
*/

void __fastcall AIScriptedInterface::CoverApproachNotify(AIScriptedInterface *this)
{
  ?CoverApproachNotify@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsInCoverArrival
==============
*/

bool __fastcall AIScriptedInterface::IsInCoverArrival(AIScriptedInterface *this)
{
  return ?IsInCoverArrival@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ShouldArriveToCoverExposedStepOut
==============
*/

bool __fastcall AIScriptedInterface::ShouldArriveToCoverExposedStepOut(AIScriptedInterface *this)
{
  return ?ShouldArriveToCoverExposedStepOut@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::StartArrivalState
==============
*/

void __fastcall AIScriptedInterface::StartArrivalState(AIScriptedInterface *this, ai_state_t newState)
{
  ?StartArrivalState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, newState);
}

/*
==============
AIScriptedInterface::CheckCoverApproach
==============
*/
_BOOL8 AIScriptedInterface::CheckCoverApproach(AIScriptedInterface *this)
{
  bool HasPath; 
  char v5; 
  char v6; 
  pathnode_t *pClaimedNode; 
  vec3_t pos; 
  vec3_t outRequestedGoalPos; 

  HasPath = AICommonInterface::HasPath(this);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 50, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 51, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
  __asm
  {
    vmovss  xmm1, cs:__real@43c00000
    vcomiss xmm0, xmm1
  }
  if ( !(v5 | v6) || ((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasTraversalWithin)(this->m_pAI->pNavigator) )
    return 0i64;
  this->m_pAI->arrivalInfo.arrivalNotifyRequested = 0;
  if ( HasPath )
  {
    pClaimedNode = this->m_pAI->sentient->pClaimedNode;
    if ( !pClaimedNode )
      return 1i64;
    pathnode_t::GetPos(pClaimedNode, &pos);
    Nav_GetRequestedGoalPos(this->m_pAI->pNavigator, &outRequestedGoalPos);
    __asm { vmovss  xmm3, cs:__real@3f800000; buffer }
    if ( AICommonInterface::PointNearPoint(this, &outRequestedGoalPos, &pos, *(float *)&_XMM3) )
      return 1i64;
  }
  return EntHandle::isDefined(&this->m_pAI->arrivalInfo.scriptedArrivalEnt) != 0;
}

/*
==============
AIScriptedInterface::CoverApproachNotify
==============
*/
void AIScriptedInterface::CoverApproachNotify(AIScriptedInterface *this)
{
  int v15; 
  int NCorners; 
  int v18; 
  __int64 v19; 
  scrContext_t *v89; 
  float value; 
  int v100[4]; 
  nav_cornerdata_t ptr[16]; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 99, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  `eh vector constructor iterator'(ptr, 0x28ui64, 0x10ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( AINavigator::ShouldPathOutOfBounds(this->m_pAI->pNavigator) )
  {
    this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v100);
    __asm
    {
      vmovss  xmm0, [rsp+370h+var_310]
      vsubss  xmm1, xmm0, dword ptr [rcx+130h]
      vmovss  [rsp+370h+value], xmm1
      vmovss  xmm2, [rsp+370h+var_30C]
      vsubss  xmm0, xmm2, dword ptr [rcx+134h]
      vmovss  [rsp+370h+var_31C], xmm0
      vmovss  [rsp+370h+var_318], xmm8
    }
LABEL_23:
    if ( AICommonInterface::Use3DPathing(this) )
    {
      __asm
      {
        vmovss  xmm6, [rsp+370h+var_31C]
        vmulss  xmm1, xmm6, xmm6
        vmovss  xmm4, [rsp+370h+value]
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm5, [rsp+370h+var_318]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm2
        vmovss  [rsp+370h+value], xmm0
        vmulss  xmm1, xmm6, xmm2
        vmulss  xmm0, xmm5, xmm2
        vmovss  [rsp+370h+var_318], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm4, [rsp+370h+var_31C]
        vmulss  xmm1, xmm4, xmm4
        vmovss  xmm3, [rsp+370h+value]
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm7, xmm0
        vdivss  xmm1, xmm7, xmm1
        vmulss  xmm0, xmm3, xmm1
        vmovss  [rsp+370h+value], xmm0
        vmulss  xmm1, xmm4, xmm1
        vmovss  [rsp+370h+var_318], xmm8
      }
    }
    __asm { vmovss  [rsp+370h+var_31C], xmm1 }
    v89 = ScriptContext_Server();
    Scr_AddVector(v89, &value);
    GScr_Notify(this->m_pAI->ent, scr_const.cover_approach, 1u);
    goto LABEL_27;
  }
  v15 = 16;
  if ( AICommonInterface::Use3DPathing(this) )
    v15 = 9;
  AICommonInterface::Use3DPathing(this);
  __asm { vmovss  xmm3, cs:__real@44000000; pathDistThreshold }
  NCorners = Nav_CalculateNextNCorners(this->m_pAI->pNavigator, v15, ptr, *(float *)&_XMM3);
  v18 = NCorners;
  if ( NCorners >= 15 || ptr[NCorners - 1].m_bIsGoal )
  {
    if ( NCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 127, ASSERT_TYPE_ASSERT, "( nCorners > 0 )", (const char *)&queryFormat, "nCorners > 0") )
      __debugbreak();
    v19 = v18 - 1;
    _RSI = 5 * v19;
    if ( !ptr[v19].m_bIsGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 128, ASSERT_TYPE_ASSERT, "(corners[nCorners - 1].m_bIsGoal)", "%s\n\tLast path corner is not goal - increase cMaxCorners or cPathDistThreshold.  nCorners: %i\n", "corners[nCorners - 1].m_bIsGoal", v18) )
      __debugbreak();
    if ( v18 == 1 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+370h+ptr]
        vsubss  xmm1, xmm0, dword ptr [rcx+130h]
        vmovss  [rsp+370h+value], xmm1
        vmovss  xmm2, [rsp+370h+var_2FC]
        vsubss  xmm0, xmm2, dword ptr [rcx+134h]
        vmovss  [rsp+370h+var_31C], xmm0
        vmovss  xmm1, [rsp+370h+var_2F8]
        vsubss  xmm2, xmm1, dword ptr [rcx+138h]
        vmovss  [rsp+370h+var_318], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+rsi*8+370h+ptr]
        vmovss  xmm1, [rsp+rsi*8+370h+var_2FC]
        vmovss  xmm2, [rsp+rsi*8+370h+var_2F8]
      }
      _RAX = 5i64 * (v18 - 2);
      __asm
      {
        vmovss  xmm9, [rsp+rax*8+370h+ptr]
        vmovss  xmm10, [rsp+rax*8+370h+var_2FC]
        vmovss  xmm11, [rsp+rax*8+370h+var_2F8]
        vsubss  xmm3, xmm0, xmm9
        vmovss  [rsp+370h+value], xmm3
        vsubss  xmm4, xmm1, xmm10
        vmovss  [rsp+370h+var_31C], xmm4
        vsubss  xmm5, xmm2, xmm11
        vmovss  [rsp+370h+var_318], xmm5
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vucomiss xmm0, xmm8
        vcomiss xmm0, cs:__real@42180000
      }
      if ( v18 )
      {
        __asm
        {
          vdivss  xmm2, xmm7, xmm0
          vmulss  xmm0, xmm2, xmm3
          vmovss  [rsp+370h+value], xmm0
          vmulss  xmm1, xmm4, xmm2
          vmulss  xmm0, xmm2, xmm5
        }
      }
      else
      {
        _RCX = this->m_pAI->ent;
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+138h]
          vmovss  xmm5, dword ptr [rcx+134h]
          vmovss  xmm4, dword ptr [rcx+130h]
          vsubss  xmm4, xmm9, xmm4
          vsubss  xmm5, xmm10, xmm5
          vsubss  xmm6, xmm11, xmm6
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm7, xmm0
          vdivss  xmm2, xmm7, xmm1
          vmulss  xmm0, xmm2, xmm4
          vmovss  [rsp+370h+value], xmm0
          vmulss  xmm1, xmm2, xmm5
          vmulss  xmm0, xmm2, xmm6
        }
      }
      __asm
      {
        vmovss  [rsp+370h+var_318], xmm0
        vmovss  [rsp+370h+var_31C], xmm1
      }
    }
    goto LABEL_23;
  }
LABEL_27:
  `eh vector destructor iterator'(ptr, 0x28ui64, 0x10ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
AIScriptedInterface::IsInCoverArrival
==============
*/
bool AIScriptedInterface::IsInCoverArrival(AIScriptedInterface *this)
{
  return this->m_pAI->arrivalInfo.arriving == 1;
}

/*
==============
AIScriptedInterface::ShouldArriveToCoverExposedStepOut
==============
*/
_BOOL8 AIScriptedInterface::ShouldArriveToCoverExposedStepOut(AIScriptedInterface *this)
{
  return this->m_pAI->blackboard.m_bShouldArriveToCoverExposedStepOut;
}

/*
==============
AIScriptedInterface::StartArrivalState
==============
*/
void AIScriptedInterface::StartArrivalState(AIScriptedInterface *this, __int64 newState)
{
  this->m_pAI->arrivalInfo.arriving = 1;
  this->m_pAI->bUseGoalWeight = 1;
  this->m_pAI->ScriptOrient.eMode = AI_ORIENT_DONT_CHANGE_RELATIVE;
  this->m_pAI->CodeOrient.eMode = AI_ORIENT_DONT_CHANGE_RELATIVE;
  this->m_pAI->eAnimMode = 8 - (((unsigned __int8 (__fastcall *)(AIScriptedInterface *, __int64))this->Is3D)(this, newState) != 0);
  this->ClearPath(this);
}

