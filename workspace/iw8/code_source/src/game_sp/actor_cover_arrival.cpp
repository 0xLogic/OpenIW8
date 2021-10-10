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
  double PathDistToGoal; 
  pathnode_t *pClaimedNode; 
  _BOOL8 result; 
  vec3_t pos; 
  vec3_t outRequestedGoalPos; 

  HasPath = AICommonInterface::HasPath(this);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 50, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 51, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
  result = 0;
  if ( *(float *)&PathDistToGoal <= 384.0 && !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasTraversalWithin)(this->m_pAI->pNavigator) )
  {
    this->m_pAI->arrivalInfo.arrivalNotifyRequested = 0;
    if ( HasPath )
    {
      pClaimedNode = this->m_pAI->sentient->pClaimedNode;
      if ( !pClaimedNode )
        return 1;
      pathnode_t::GetPos(pClaimedNode, &pos);
      Nav_GetRequestedGoalPos(this->m_pAI->pNavigator, &outRequestedGoalPos);
      if ( AICommonInterface::PointNearPoint(this, &outRequestedGoalPos, &pos, 1.0) )
        return 1;
    }
    if ( EntHandle::isDefined(&this->m_pAI->arrivalInfo.scriptedArrivalEnt) )
      return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::CoverApproachNotify
==============
*/
void AIScriptedInterface::CoverApproachNotify(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  int v4; 
  int NCorners; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  ai_scripted_t *v9; 
  gentity_s *v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  ai_scripted_t *v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  float v42; 
  scrContext_t *v46; 
  float value; 
  float v48; 
  float v49; 
  int v50[4]; 
  nav_cornerdata_t ptr[16]; 

  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 99, ASSERT_TYPE_ASSERT, "( HasPath() )", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  `eh vector constructor iterator'(ptr, 0x28ui64, 0x10ui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( AINavigator::ShouldPathOutOfBounds(this->m_pAI->pNavigator) )
  {
    this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v50);
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    value = *(float *)v50 - m_pAI->ent->r.currentOrigin.v[0];
    v48 = *(float *)&v50[1] - ent->r.currentOrigin.v[1];
    v49 = 0.0;
LABEL_28:
    v37 = LODWORD(v48);
    if ( AICommonInterface::Use3DPathing(this) )
    {
      *(float *)&v37 = fsqrt((float)((float)(v48 * v48) + (float)(value * value)) + (float)(v49 * v49));
      _XMM3 = v37;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm7, xmm0
      }
      v41 = 1.0 / *(float *)&_XMM1;
      value = value * (float)(1.0 / *(float *)&_XMM1);
      v42 = v48 * (float)(1.0 / *(float *)&_XMM1);
      v49 = v49 * v41;
    }
    else
    {
      *(float *)&v37 = fsqrt((float)(v48 * v48) + (float)(value * value));
      _XMM2 = v37;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm7, xmm0
      }
      *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
      value = value * *(float *)&_XMM1;
      v42 = v48 * *(float *)&_XMM1;
      v49 = 0.0;
    }
    v48 = v42;
    v46 = ScriptContext_Server();
    Scr_AddVector(v46, &value);
    GScr_Notify(this->m_pAI->ent, scr_const.cover_approach, 1u);
    goto LABEL_32;
  }
  v4 = 16;
  if ( AICommonInterface::Use3DPathing(this) )
    v4 = 9;
  AICommonInterface::Use3DPathing(this);
  NCorners = Nav_CalculateNextNCorners(this->m_pAI->pNavigator, v4, ptr, 512.0);
  v6 = NCorners;
  if ( NCorners >= 15 || ptr[NCorners - 1].m_bIsGoal )
  {
    if ( NCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 127, ASSERT_TYPE_ASSERT, "( nCorners > 0 )", (const char *)&queryFormat, "nCorners > 0") )
      __debugbreak();
    v7 = v6 - 1;
    v8 = v7;
    if ( !ptr[v7].m_bIsGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_cover_arrival.cpp", 128, ASSERT_TYPE_ASSERT, "(corners[nCorners - 1].m_bIsGoal)", "%s\n\tLast path corner is not goal - increase cMaxCorners or cPathDistThreshold.  nCorners: %i\n", "corners[nCorners - 1].m_bIsGoal", v6) )
      __debugbreak();
    if ( v6 == 1 )
    {
      v9 = this->m_pAI;
      v10 = v9->ent;
      value = ptr[0].m_Pos.v[0] - v9->ent->r.currentOrigin.v[0];
      v48 = ptr[0].m_Pos.v[1] - v10->r.currentOrigin.v[1];
      v49 = ptr[0].m_Pos.v[2] - v10->r.currentOrigin.v[2];
      goto LABEL_28;
    }
    v11 = ptr[v8].m_Pos.v[1];
    v12 = ptr[v8].m_Pos.v[2];
    v13 = v6 - 2;
    v14 = ptr[v13].m_Pos.v[0];
    v15 = LODWORD(ptr[v13].m_Pos.v[1]);
    v16 = ptr[v13].m_Pos.v[2];
    v17 = ptr[v8].m_Pos.v[0] - v14;
    value = v17;
    v18 = v11 - *(float *)&v15;
    v48 = v11 - *(float *)&v15;
    v19 = v12 - v16;
    v49 = v12 - v16;
    v20 = fsqrt((float)((float)(v18 * v18) + (float)(value * value)) + (float)(v19 * v19));
    if ( v20 == 0.0 )
      goto LABEL_32;
    if ( v20 >= 38.0 )
    {
      value = (float)(1.0 / v20) * v17;
      v35 = v18 * (float)(1.0 / v20);
      v36 = (float)(1.0 / v20) * v19;
      goto LABEL_27;
    }
    if ( v6 >= 3 )
    {
      v21 = v6 - 3;
      v22 = ptr[v21].m_Pos.v[0];
      v23 = ptr[v21].m_Pos.v[1];
      v24 = ptr[v21].m_Pos.v[2];
      if ( (float)((float)((float)((float)(*(float *)&v15 - v23) * (float)(*(float *)&v15 - v23)) + (float)((float)(v14 - v22) * (float)(v14 - v22))) + (float)((float)(v16 - v24) * (float)(v16 - v24))) >= 324.0 )
      {
LABEL_25:
        v27 = v14 - v22;
        v29 = v15;
        v28 = *(float *)&v15 - v23;
        v30 = v16 - v24;
        *(float *)&v29 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v30 * v30));
        _XMM3 = v29;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm1, xmm3, xmm7, xmm0
        }
        v34 = 1.0 / *(float *)&_XMM1;
        value = (float)(1.0 / *(float *)&_XMM1) * v27;
        v35 = (float)(1.0 / *(float *)&_XMM1) * v28;
        v36 = v34 * v30;
LABEL_27:
        v49 = v36;
        v48 = v35;
        goto LABEL_28;
      }
      if ( v6 >= 4 )
      {
        v25 = v6 - 4;
        v22 = ptr[v25].m_Pos.v[0];
        v23 = ptr[v25].m_Pos.v[1];
        v24 = ptr[v25].m_Pos.v[2];
        goto LABEL_25;
      }
    }
    v26 = this->m_pAI;
    v24 = v26->ent->r.currentOrigin.v[2];
    v23 = v26->ent->r.currentOrigin.v[1];
    v22 = v26->ent->r.currentOrigin.v[0];
    goto LABEL_25;
  }
LABEL_32:
  `eh vector destructor iterator'(ptr, 0x28ui64, 0x10ui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
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

