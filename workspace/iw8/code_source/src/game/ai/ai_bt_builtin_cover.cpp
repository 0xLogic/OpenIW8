/*
==============
BT_Cover_MustChangeStance
==============
*/

int __fastcall BT_Cover_MustChangeStance(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_MustChangeStance@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_ConsiderArriveToExposed
==============
*/

int __fastcall BT_Cover_ConsiderArriveToExposed(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_ConsiderArriveToExposed@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_MayShuffle
==============
*/

int __fastcall BT_Cover_MayShuffle(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_MayShuffle@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_AttemptShuffle
==============
*/

int __fastcall BT_Cover_AttemptShuffle(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_AttemptShuffle@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_SetStateHide
==============
*/

int __fastcall BT_Cover_SetStateHide(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_SetStateHide@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
Cover_ConsiderArriveToExposed
==============
*/

bool __fastcall Cover_ConsiderArriveToExposed(int entNum, bool *bOutUseStepOutPos)
{
  return ?Cover_ConsiderArriveToExposed@@YA_NHAEA_N@Z(entNum, bOutUseStepOutPos);
}

/*
==============
BT_Cover_Reload_Update
==============
*/

int __fastcall BT_Cover_Reload_Update(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_Reload_Update@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_CanLook
==============
*/

int __fastcall BT_Cover_CanLook(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_CanLook@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_ShouldReload
==============
*/

int __fastcall BT_Cover_ShouldReload(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_ShouldReload@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_IsAtCover
==============
*/

int __fastcall BT_Cover_IsAtCover(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutIndexIndex)
{
  return ?BT_Cover_IsAtCover@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutIndexIndex);
}

/*
==============
BT_Cover_CanPeek
==============
*/

int __fastcall BT_Cover_CanPeek(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_CanPeek@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_Cover_ConsiderDropLMG
==============
*/

int __fastcall BT_Cover_ConsiderDropLMG(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_Cover_ConsiderDropLMG@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_UpdateEveryFrame_CheckCover
==============
*/

int __fastcall BT_UpdateEveryFrame_CheckCover(BehaviorTree *pTree, int entNum, int taskID, int paramsID, unsigned __int8 *pInOutInstIndex)
{
  return ?BT_UpdateEveryFrame_CheckCover@@YAHPEAUBehaviorTree@@HHHPEAE@Z(pTree, entNum, taskID, paramsID, pInOutInstIndex);
}

/*
==============
BT_UpdateEveryFrame_CheckCover
==============
*/
__int64 BT_UpdateEveryFrame_CheckCover(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  return 1i64;
}

/*
==============
BT_Cover_SetStateHide
==============
*/
__int64 BT_Cover_SetStateHide(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  ai_scripted_t *AIScripted; 

  Ent = BT_GetEnt(entNum);
  AIScripted = AI_GetAIScripted(Ent);
  Scr_SetString(&AIScripted->blackboard.m_CoverState, scr_const.hide);
  return 1i64;
}

/*
==============
BT_Cover_ShouldReload
==============
*/
_BOOL8 BT_Cover_ShouldReload(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  double FloatParam; 
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  const Weapon *v9; 
  AIWrapper v11; 

  FloatParam = BT_Builtin_GetFloatParam(pTree, taskID, paramsID);
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v11, Ent);
  m_pAI = v11.m_pAI;
  AIScripted = AI_GetAIScripted(Ent);
  v9 = m_pAI->GetEquippedWeapon(m_pAI);
  return (float)AIScripted->weaponInfo.bulletsInClip <= (float)((float)BG_GetClipSize(NULL, v9, 0) * *(float *)&FloatParam);
}

/*
==============
BT_Cover_Reload_Update
==============
*/
__int64 BT_Cover_Reload_Update(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  ai_scripted_t *AIScripted; 
  ai_scripted_t *v6; 
  Ai_Asm *v7; 
  ASM_Instance *Instance; 
  ASM_Instance *v9; 
  scr_string_t reload; 
  Ai_Asm *v11; 

  Ent = BT_GetEnt(entNum);
  AIScripted = AI_GetAIScripted(Ent);
  LODWORD(Ent) = Ent->s.number;
  v6 = AIScripted;
  v7 = Ai_Asm::Singleton();
  Instance = Ai_Asm::GetInstance(v7, NULL, (int)Ent);
  LODWORD(Ent) = scr_const.end;
  v9 = Instance;
  reload = scr_const.reload;
  v11 = Ai_Asm::Singleton();
  if ( Common_Asm::EphemeralEventFired(v11, v9, reload, (const scr_string_t)Ent) )
    return 1i64;
  v6->blackboard.m_bReload = 1;
  Scr_SetString(&v6->blackboard.m_CoverState, scr_const.hide);
  return 2i64;
}

/*
==============
BT_Cover_MustChangeStance
==============
*/
__int64 BT_Cover_MustChangeStance(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  pathnode_t *CoverNode; 
  __int16 type; 
  scr_string_t m_CrouchArrivalType; 
  AIWrapper v11; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v11, Ent);
  m_pAI = v11.m_pAI;
  if ( !v11.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 73, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(Ent);
  CoverNode = AIScriptedInterface::GetCoverNode(m_pAI);
  if ( !CoverNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 77, ASSERT_TYPE_ASSERT, "( pCoverNode )", "expecting Cover_MustChangeStance to only be called from within the cover bt.") )
    __debugbreak();
  type = CoverNode->constant.type;
  if ( type == 31 )
    type = CoverNode->dynamic.turretEntNumber;
  if ( type == 12 || type == 5 )
  {
    if ( AIScripted->eCurrentStance == STANCE_PRONE && AIScripted->blackboard.m_DesiredStance == STANCE_PRONE )
      return 0i64;
  }
  else if ( AIScriptedInterface::IsStanceAllowed(m_pAI, AIScripted->eCurrentStance) )
  {
    m_CrouchArrivalType = AIScripted->blackboard.m_CrouchArrivalType;
    if ( m_CrouchArrivalType == scr_const.cover_left_crouch_cc || m_CrouchArrivalType == scr_const.cover_right_crouch_cc )
      goto LABEL_19;
    if ( Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.stand) && !Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.crouch) )
    {
      AIScripted->blackboard.m_DesiredStance = STANCE_STAND;
      return 0i64;
    }
    if ( Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.crouch) && !Path_DoesNodeAllowStance(CoverNode, (const scr_string_t)scr_const.stand) )
LABEL_19:
      AIScripted->blackboard.m_DesiredStance = STANCE_CROUCH;
    return 0i64;
  }
  return 1i64;
}

/*
==============
BT_Cover_MayShuffle
==============
*/
_BOOL8 BT_Cover_MayShuffle(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  pathnode_t *CoverNode; 
  AIWrapper v12; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v12, Ent);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 112, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(Ent);
  CoverNode = AIScriptedInterface::GetCoverNode(m_pAI);
  if ( !CoverNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 116, ASSERT_TYPE_ASSERT, "( pCoverNode )", "expecting Cover_MayShuffle to only be called from within the cover bt.") )
    __debugbreak();
  return (paramsID == 0xFFFF || !BT_Builtin_GetBoolParam(pTree, taskID, paramsID) || G_irand(0, 3)) && AIScripted->coverInfo.startTime + 4000 <= level.time && AICommonInterface::GetTargetEntity(m_pAI) && CoverNode == AIScripted->sentient->pClaimedNode && !m_pAI->Is3D(m_pAI) && !AIScripted->fixedNode && !AIScripted->nodeSelect.keepClaimedNode && (unsigned int)(AIScripted->combat.combatMode - 4) > 1 && AIScripted->blackboard.m_CoverState == scr_const.hide && !AIScripted->arrivalInfo.arriving && !m_pAI->IsInPain(m_pAI);
}

/*
==============
BT_Cover_AttemptShuffle
==============
*/
__int64 BT_Cover_AttemptShuffle(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  pathnode_t *CoverNode; 
  pathnode_t *m_pShuffleNode; 
  pathnode_t *ShuffleCoverNode; 
  bool keepClaimedNodeIfValid; 
  AIWrapper v12; 
  vec3_t v13; 
  vec3_t pos; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v12, Ent);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 162, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(Ent);
  CoverNode = AIScriptedInterface::GetCoverNode(m_pAI);
  if ( !CoverNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 166, ASSERT_TYPE_ASSERT, "( pCoverNode )", "expecting Cover_AttemptShuffle to only be called from within the cover bt.") )
    __debugbreak();
  m_pShuffleNode = AIScripted->blackboard.m_pShuffleNode;
  if ( !m_pShuffleNode )
  {
    ShuffleCoverNode = AIScriptedInterface::Cover_FindShuffleCoverNode(m_pAI);
    m_pShuffleNode = ShuffleCoverNode;
    if ( !ShuffleCoverNode || ShuffleCoverNode == CoverNode || ShuffleCoverNode == AIScripted->sentient->pClaimedNode )
      return 0i64;
  }
  pathnode_t::GetPos(CoverNode, &pos);
  pathnode_t::GetPos(m_pShuffleNode, &v13);
  if ( (float)((float)((float)((float)(v13.v[1] - pos.v[1]) * (float)(v13.v[1] - pos.v[1])) + (float)((float)(v13.v[0] - pos.v[0]) * (float)(v13.v[0] - pos.v[0]))) + (float)((float)(v13.v[2] - pos.v[2]) * (float)(v13.v[2] - pos.v[2]))) < 16.0 )
    return 0i64;
  keepClaimedNodeIfValid = AIScripted->nodeSelect.keepClaimedNodeIfValid;
  AIScripted->nodeSelect.keepClaimedNodeIfValid = 0;
  if ( !AIScriptedInterface::Cover_UseCoverNode(m_pAI, m_pShuffleNode) )
  {
    AIScripted->nodeSelect.keepClaimedNodeIfValid = keepClaimedNodeIfValid;
    return 0i64;
  }
  AIScripted->blackboard.m_pShuffleNode = m_pShuffleNode;
  return 2i64;
}

/*
==============
BT_Cover_ConsiderDropLMG
==============
*/
__int64 BT_Cover_ConsiderDropLMG(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  ai_scripted_t *AIScripted; 
  gentity_s *TargetEntity; 
  float v8; 
  float v9; 
  float v10; 
  const Weapon *v11; 
  const scrContext_t *v12; 
  const Weapon *Weapon; 
  AIWrapper v15; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v15, Ent);
  m_pAI = v15.m_pAI;
  if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 210, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(Ent);
  if ( AIScriptedInterface::GetCoverNode(m_pAI) )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(m_pAI);
    if ( TargetEntity )
    {
      v8 = AIScripted->ent->r.currentOrigin.v[0] - TargetEntity->r.currentOrigin.v[0];
      v9 = AIScripted->ent->r.currentOrigin.v[1] - TargetEntity->r.currentOrigin.v[1];
      v10 = AIScripted->ent->r.currentOrigin.v[2] - TargetEntity->r.currentOrigin.v[2];
      if ( (float)((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10)) < 4294967300.0 )
      {
        v11 = m_pAI->GetEquippedWeapon(m_pAI);
        if ( BG_GetWeaponClass(v11, 0) == WEAPCLASS_MG )
        {
          v12 = ScriptContext_Server();
          Weapon = GScr_Weapon_GetWeapon(v12, (const scr_weapon_t)AIScripted->sidearmWeapon);
          if ( !Weapon->weaponIdx )
            AIScripted->blackboard.m_WeaponRequest = BG_GetWeaponClass(Weapon, 0);
        }
      }
    }
  }
  return 1i64;
}

/*
==============
BT_Cover_IsAtCover
==============
*/
__int64 BT_Cover_IsAtCover(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  const pathnode_t *v8; 
  unsigned __int16 type; 
  unsigned __int16 v10; 
  const char *v16; 
  __int64 v17; 
  bool v18; 
  float *v19; 
  float v20; 
  float v21; 
  AIWrapper v22; 
  vec3_t pos; 
  vec3_t vFinalGoal; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v22, Ent);
  m_pAI = v22.m_pAI;
  if ( !v22.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 263, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  v8 = *(const pathnode_t **)(*(_QWORD *)(v7 + 8) + 112i64);
  if ( !v8 || (type = v8->constant.type, ((1 << type) & 0x2000200) != 0) || type == 1 || (v10 = Path_ConvertNodeToIndex(v8), Path_IsNodeDisconnected(v10)) )
  {
    DebugLeaveCover(entNum, "No cover node or goal is not a cover node");
    return 0i64;
  }
  if ( *(_DWORD *)(v7 + 1632) == 3 )
  {
    DebugLeaveCover(entNum, "no_cover combatmode");
    return 0i64;
  }
  if ( AIScriptedInterface::IsDoingReacquire(m_pAI) )
  {
    DebugLeaveCover(entNum, "reacquired");
    return 0i64;
  }
  if ( !AICommonInterface::HasPath(m_pAI) )
  {
    if ( *(_BYTE *)(v7 + 1283) || m_pAI->ShouldArriveToCoverExposedStepOut(m_pAI) )
    {
      *(float *)&_XMM6 = FLOAT_3600_0;
    }
    else
    {
      v17 = *(_QWORD *)(v7 + 552);
      if ( v17 && v17 == *(_QWORD *)(*(_QWORD *)(v7 + 8) + 112i64) )
        *(float *)&_XMM6 = FLOAT_576_0;
      else
        *(float *)&_XMM6 = FLOAT_225_0;
    }
LABEL_24:
    pathnode_t::GetPos(*(pathnode_t **)(*(_QWORD *)(v7 + 8) + 112i64), &pos);
    v18 = m_pAI->Is3D(m_pAI);
    v19 = *(float **)v7;
    if ( v18 )
    {
      v20 = v19[78] - pos.v[2];
      v21 = (float)((float)(v19[77] - pos.v[1]) * (float)(v19[77] - pos.v[1])) + (float)((float)(v19[76] - pos.v[0]) * (float)(v19[76] - pos.v[0]));
    }
    else
    {
      if ( (float)((float)(pos.v[2] - v19[78]) * (float)(pos.v[2] - v19[78])) > 6400.0 )
      {
        v16 = "Different height";
        goto LABEL_15;
      }
      v20 = pos.v[0] - v19[76];
      v21 = (float)(pos.v[1] - v19[77]) * (float)(pos.v[1] - v19[77]);
    }
    if ( (float)(v21 + (float)(v20 * v20)) <= *(float *)&_XMM6 || AIScriptedInterface::PathPending(m_pAI) )
      return 1i64;
    v16 = "Greater than X units from node";
    goto LABEL_15;
  }
  _XMM0 = *(unsigned __int8 *)(v7 + 1835);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_16_0);
  __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  AICommonInterface::GetPathFinalGoal(m_pAI, &vFinalGoal);
  if ( (float)((float)((float)((float)(*(float *)(*(_QWORD *)v7 + 308i64) - vFinalGoal.v[1]) * (float)(*(float *)(*(_QWORD *)v7 + 308i64) - vFinalGoal.v[1])) + (float)((float)(*(float *)(*(_QWORD *)v7 + 304i64) - vFinalGoal.v[0]) * (float)(*(float *)(*(_QWORD *)v7 + 304i64) - vFinalGoal.v[0]))) + (float)((float)(*(float *)(*(_QWORD *)v7 + 312i64) - vFinalGoal.v[2]) * (float)(*(float *)(*(_QWORD *)v7 + 312i64) - vFinalGoal.v[2]))) <= *(float *)&_XMM6 )
    goto LABEL_24;
  v16 = "Has path and greater than 4 units from goal";
LABEL_15:
  DebugLeaveCover(entNum, v16);
  return 0i64;
}

/*
==============
BT_Cover_CanPeek
==============
*/
__int64 BT_Cover_CanPeek(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v6; 
  pathnode_t *CoverNode; 
  __int16 type; 
  unsigned int spawnflags; 
  bool v10; 
  __int64 result; 
  AIWrapper v12; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v12, Ent);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 539, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v6 = m_pAI->GetAI(m_pAI);
  CoverNode = AIScriptedInterface::GetCoverNode(m_pAI);
  if ( !CoverNode )
    return 0i64;
  type = CoverNode->constant.type;
  if ( type == 31 )
    type = CoverNode->dynamic.turretEntNumber;
  switch ( type )
  {
    case 2:
    case 22:
      spawnflags = CoverNode->constant.spawnflags;
      if ( (CoverNode->constant.spawnflags & 0x200) != 0 && (spawnflags & 4) == 0 )
        goto $LN31_6;
      if ( (spawnflags & 0x100000) == 0 )
        return 0i64;
      v10 = (spawnflags & 8) == 0;
LABEL_13:
      if ( !v10 )
        return 0i64;
$LN31_6:
      result = 1i64;
      break;
    case 3:
    case 4:
    case 7:
    case 11:
    case 21:
      goto $LN31_6;
    case 6:
      v10 = *(_DWORD *)(v6 + 1728) == 1;
      goto LABEL_13;
    default:
      return 0i64;
  }
  return result;
}

/*
==============
BT_Cover_CanLook
==============
*/
__int64 BT_Cover_CanLook(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  pathnode_t *CoverNode; 
  __int16 type; 
  __int64 result; 
  AIWrapper v9; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v9, Ent);
  m_pAI = v9.m_pAI;
  if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 578, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  CoverNode = AIScriptedInterface::GetCoverNode(m_pAI);
  if ( !CoverNode )
    return 0i64;
  type = CoverNode->constant.type;
  if ( type == 31 )
    type = CoverNode->dynamic.turretEntNumber;
  switch ( type )
  {
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 11:
    case 22:
      result = 1i64;
      break;
    default:
      return 0i64;
  }
  return result;
}

/*
==============
BT_Cover_ConsiderArriveToExposed
==============
*/
__int64 BT_Cover_ConsiderArriveToExposed(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v7; 
  bool v8; 
  bool v9; 
  __int64 result; 
  bool bOutUseStepOutPos; 
  AIWrapper v12; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v12, Ent);
  m_pAI = v12.m_pAI;
  if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 526, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v7 = m_pAI->GetAI(m_pAI);
  v8 = Cover_ConsiderArriveToExposed(entNum, &bOutUseStepOutPos);
  v9 = bOutUseStepOutPos;
  *(_BYTE *)(v7 + 574) = v8;
  result = 1i64;
  *(_BYTE *)(v7 + 575) = v9;
  return result;
}

/*
==============
Cover_ConsiderArriveToExposed
==============
*/
char Cover_ConsiderArriveToExposed(int entNum, bool *bOutUseStepOutPos)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  __int64 v5; 
  __int64 v6; 
  char result; 
  __int64 v8; 
  pathnode_t *v9; 
  __int64 v10; 
  double v11; 
  float v12; 
  double Angle; 
  unsigned int AngleIndex; 
  gentity_s *TargetEntity; 
  const gentity_s *v18; 
  float v19; 
  float v20; 
  float v21; 
  const sentient_s *sentient; 
  sentient_s *v23; 
  const tacpoint_t *v24; 
  const tacpoint_t *v25; 
  unsigned __int16 type; 
  const tacpoint_t *PointForPathnode; 
  const tacpoint_t *v28; 
  const tacpoint_t *v29; 
  const tacpoint_t *PointForPathnodeVis; 
  bool HasVis; 
  tacpoint_t *Point; 
  AIWrapper v33; 
  AIWrapper v34; 
  vec3_t vec; 
  vec3_t v36; 
  vec3_t pos; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v33, Ent);
  m_pAI = v33.m_pAI;
  if ( !v33.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 345, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v5 = m_pAI->GetAI(m_pAI);
  *bOutUseStepOutPos = 0;
  v6 = v5;
  if ( *(_DWORD *)(v5 + 1652) )
  {
    *bOutUseStepOutPos = *(_BYTE *)(v5 + 575);
    result = *(_BYTE *)(v5 + 574);
    if ( result )
      *(_DWORD *)(v6 + 560) = level.time + 1000;
    return result;
  }
  if ( AICommonInterface::HasPath(m_pAI) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 392) + 216i64))(*(_QWORD *)(v6 + 392)) || AIScriptedInterface::GetCoverNode(m_pAI) || *(_QWORD *)(v6 + 544) )
      return 0;
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(pathnode_t **)(v8 + 112);
    if ( v9 )
    {
      pathnode_t::GetPos(*(pathnode_t **)(v8 + 112), &pos);
      if ( (unsigned __int16)(v9->constant.type - 10) <= 1u )
      {
        pathnode_t::GetPos(v9, &v36);
        v10 = *(_QWORD *)v6;
        vec.v[0] = v36.v[0] - *(float *)(*(_QWORD *)v6 + 304i64);
        vec.v[1] = v36.v[1] - *(float *)(v10 + 308);
        vec.v[2] = v36.v[2] - *(float *)(v10 + 312);
        v11 = vectoyaw((const vec2_t *)&vec);
        v12 = *(float *)&v11;
        Angle = pathnode_t::GetAngle(v9);
        _XMM1 = 0i64;
        __asm { vroundss xmm4, xmm1, xmm3, 1 }
        AngleIndex = G_GetAngleIndex((float)((float)((float)(*(float *)&Angle - v12) * 0.0027777778) - *(float *)&_XMM4) * 360.0, 22.5);
        if ( AngleIndex <= 1 || AngleIndex - 7 <= 1 )
          return 1;
      }
    }
    else
    {
      AICommonInterface::GetPathFinalGoal(m_pAI, &pos);
    }
    TargetEntity = AICommonInterface::GetTargetEntity(m_pAI);
    v18 = TargetEntity;
    if ( !TargetEntity )
      return 0;
    v19 = TargetEntity->r.currentOrigin.v[0] - *(float *)(*(_QWORD *)v6 + 304i64);
    v20 = TargetEntity->r.currentOrigin.v[1] - *(float *)(*(_QWORD *)v6 + 308i64);
    v21 = TargetEntity->r.currentOrigin.v[2] - *(float *)(*(_QWORD *)v6 + 312i64);
    if ( (float)((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21)) >= 302500.0 || !*(_WORD *)(v6 + 1168) )
      return 0;
    if ( *(_DWORD *)(v6 + 560) > level.time )
    {
      *bOutUseStepOutPos = *(_BYTE *)(v6 + 575);
      return *(_BYTE *)(v6 + 574);
    }
    *(_DWORD *)(v6 + 560) = level.time + 1000;
    AIWrapper::AIWrapper(&v34, TargetEntity);
    if ( v34.m_pAI )
    {
      AIScriptedInterface::GetApproxEyePos(v34.m_pAI, &vec, 1);
    }
    else
    {
      sentient = v18->sentient;
      if ( sentient )
        Sentient_GetEyePosition(sentient, &vec);
      else
        G_Utils_EntityCentroid(v18, &vec);
    }
    v23 = v18->sentient;
    v24 = v23 ? Sentient_NearestTacPoint(v23) : TacGraph_FindClosestPoint(&vec);
    v25 = v24;
    if ( !v24 )
      return 0;
    if ( v9 )
    {
      type = v9->constant.type;
      if ( type == 31 )
        type = v9->dynamic.coverMultiType;
      PointForPathnode = TacGraph_GetPointForPathnode(v9);
      if ( AIScriptedInterface::Cover_IsValidAgainstEnemy(m_pAI, v9, 1) )
      {
        if ( type >= 2u )
        {
          if ( type <= 3u )
          {
            HasVis = TacVisGraph_HasVis(v25, PointForPathnode);
          }
          else
          {
            if ( type <= 5u || type > 7u )
              return 0;
            if ( (Path_AllowedStancesForNode(v9) & 1) == 0 && (v9->constant.spawnflags & 0x100000) != 0 && TacVisGraph_HasVis(v25, PointForPathnode) )
              return 1;
            if ( !*(_BYTE *)(v6 + 330) )
              return 0;
            PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(v9);
            if ( !TacVisGraph_HasVis(v25, PointForPathnodeVis) )
              return 0;
            HasVis = AIScriptedInterface::HasRoomToFullExposeCorner(m_pAI, v9);
          }
          if ( HasVis )
          {
            *bOutUseStepOutPos = 1;
            return 1;
          }
        }
        return 0;
      }
      v28 = PointForPathnode;
      v29 = v25;
    }
    else
    {
      if ( tacpoint_ref_t::IsDefined((tacpoint_ref_t *)(v6 + 3248)) )
        Point = tacpoint_ref_t::GetPoint((tacpoint_ref_t *)(v6 + 3248));
      else
        Point = (tacpoint_t *)TacGraph_FindClosestPoint(&pos);
      v29 = Point;
      v28 = v25;
    }
    return TacVisGraph_HasVis(v29, v28);
  }
  return *(_BYTE *)(v6 + 574) && *(_DWORD *)(v6 + 560) > level.time;
}

/*
==============
DebugLeaveCover
==============
*/
void DebugLeaveCover(int entNum, const char *reason)
{
  const dvar_t *VarByName; 
  const dvar_t *v5; 
  int integer; 

  VarByName = Dvar_FindVarByName("scr_ai_debugleavecover");
  if ( VarByName && atoi(VarByName->current.string) )
  {
    v5 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    integer = v5->current.integer;
    if ( integer == 2047 || integer == entNum )
      Com_Printf(18, (const char *)&queryFormat, reason);
  }
}

