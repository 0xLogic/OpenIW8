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
__int64 BT_Cover_ShouldReload(BehaviorTree *pTree, int entNum, int taskID, int paramsID)
{
  const gentity_s *Ent; 
  AIScriptedInterface *m_pAI; 
  const Weapon *v11; 
  AIWrapper v19; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  *(double *)&_XMM0 = BT_Builtin_GetFloatParam(pTree, taskID, paramsID);
  __asm { vmovaps xmm6, xmm0 }
  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v19, Ent);
  m_pAI = v19.m_pAI;
  AI_GetAIScripted(Ent);
  v11 = m_pAI->GetEquippedWeapon(m_pAI);
  BG_GetClipSize(NULL, v11, 0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ecx
    vcomiss xmm2, xmm1
  }
  return 1i64;
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
  char v21; 
  bool keepClaimedNodeIfValid; 
  AIWrapper v24; 
  vec3_t v25; 
  vec3_t pos; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v24, Ent);
  m_pAI = v24.m_pAI;
  if ( !v24.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 162, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
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
  pathnode_t::GetPos(m_pShuffleNode, &v25);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+var_38]
    vsubss  xmm3, xmm0, dword ptr [rsp+0B8h+pos]
    vmovss  xmm1, dword ptr [rsp+0B8h+var_38+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+pos+4]
    vmovss  xmm0, dword ptr [rsp+0B8h+var_38+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+pos+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@41800000
  }
  if ( v21 )
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
  AIWrapper v20; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v20, Ent);
  m_pAI = v20.m_pAI;
  if ( !v20.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 210, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScripted = AI_GetAIScripted(Ent);
  if ( AIScriptedInterface::GetCoverNode(m_pAI) && AICommonInterface::GetTargetEntity(m_pAI) )
  {
    _RDX = AIScripted->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+130h]
      vsubss  xmm3, xmm0, dword ptr [rax+130h]
      vmovss  xmm1, dword ptr [rdx+134h]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vmovss  xmm0, dword ptr [rdx+138h]
      vsubss  xmm4, xmm0, dword ptr [rax+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@4f800000
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
  __int64 v8; 
  const pathnode_t *v9; 
  unsigned __int16 type; 
  unsigned __int16 v12; 
  __int64 result; 
  char v33; 
  char v34; 
  const char *v35; 
  __int64 v37; 
  bool v38; 
  AIWrapper v58; 
  vec3_t pos; 
  vec3_t vFinalGoal; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v58, Ent);
  m_pAI = v58.m_pAI;
  if ( !v58.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 263, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v8 = m_pAI->GetAI(m_pAI);
  v9 = *(const pathnode_t **)(*(_QWORD *)(v8 + 8) + 112i64);
  if ( v9 )
  {
    type = v9->constant.type;
    _EBP = 1;
    if ( ((1 << type) & 0x2000200) == 0 && type != 1 )
    {
      v12 = Path_ConvertNodeToIndex(v9);
      if ( !Path_IsNodeDisconnected(v12) )
      {
        if ( *(_DWORD *)(v8 + 1632) == 3 )
        {
          DebugLeaveCover(entNum, "no_cover combatmode");
          return 0i64;
        }
        if ( AIScriptedInterface::IsDoingReacquire(m_pAI) )
        {
          DebugLeaveCover(entNum, "reacquired");
          return 0i64;
        }
        __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
        if ( AICommonInterface::HasPath(m_pAI) )
        {
          _EAX = *(unsigned __int8 *)(v8 + 1835);
          __asm
          {
            vmovss  xmm2, cs:__real@43100000
            vmovd   xmm1, ebp
            vmovd   xmm0, eax
            vpcmpeqd xmm3, xmm0, xmm1
            vmovss  xmm1, cs:__real@41800000
            vblendvps xmm6, xmm1, xmm2, xmm3
          }
          AICommonInterface::GetPathFinalGoal(m_pAI, &vFinalGoal);
          _RAX = *(_QWORD *)v8;
          __asm
          {
            vmovss  [rsp+0D8h+var_A8], xmm6
            vmovss  xmm0, dword ptr [rax+130h]
            vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+vFinalGoal]
            vmovss  xmm1, dword ptr [rax+134h]
            vmovss  xmm0, dword ptr [rax+138h]
            vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+vFinalGoal+4]
            vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+vFinalGoal+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm6
          }
          if ( !(v33 | v34) )
          {
            v35 = "Has path and greater than 4 units from goal";
            goto LABEL_15;
          }
        }
        else if ( *(_BYTE *)(v8 + 1283) || m_pAI->ShouldArriveToCoverExposedStepOut(m_pAI) )
        {
          __asm { vmovss  xmm6, cs:__real@45610000 }
        }
        else
        {
          v37 = *(_QWORD *)(v8 + 552);
          if ( v37 && v37 == *(_QWORD *)(*(_QWORD *)(v8 + 8) + 112i64) )
            __asm { vmovss  xmm6, cs:__real@44100000 }
          else
            __asm { vmovss  xmm6, cs:__real@43610000 }
        }
        pathnode_t::GetPos(*(pathnode_t **)(*(_QWORD *)(v8 + 8) + 112i64), &pos);
        v38 = m_pAI->Is3D(m_pAI);
        _RCX = *(_QWORD *)v8;
        if ( v38 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+130h]
            vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+pos]
            vmovss  xmm1, dword ptr [rcx+134h]
            vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+pos+4]
            vmovss  xmm0, dword ptr [rcx+138h]
            vsubss  xmm4, xmm0, dword ptr [rsp+0D8h+pos+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0D8h+pos+8]
            vsubss  xmm1, xmm0, dword ptr [rcx+138h]
            vmulss  xmm2, xmm1, xmm1
            vcomiss xmm2, cs:__real@45c80000
            vmovss  xmm1, dword ptr [rsp+0D8h+pos+4]
            vsubss  xmm2, xmm1, dword ptr [rcx+134h]
            vmovss  xmm0, dword ptr [rsp+0D8h+pos]
            vsubss  xmm4, xmm0, dword ptr [rcx+130h]
            vmulss  xmm3, xmm2, xmm2
          }
        }
        __asm
        {
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm5, xmm3, xmm0
          vcomiss xmm5, xmm6
        }
        if ( !v38 || AIScriptedInterface::PathPending(m_pAI) )
        {
          result = 1i64;
          goto LABEL_16;
        }
        v35 = "Greater than X units from node";
LABEL_15:
        DebugLeaveCover(entNum, v35);
        result = 0i64;
LABEL_16:
        __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
        return result;
      }
    }
  }
  DebugLeaveCover(entNum, "No cover node or goal is not a cover node");
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
  __int64 v6; 
  __int64 v7; 
  char result; 
  __int64 v10; 
  pathnode_t *v11; 
  unsigned int AngleIndex; 
  AIWrapper v43; 
  vec2_t vec; 
  vec3_t v46; 
  vec3_t pos; 

  Ent = BT_GetEnt(entNum);
  AIWrapper::AIWrapper(&v43, Ent);
  m_pAI = v43.m_pAI;
  if ( !v43.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_cover.cpp", 345, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v6 = m_pAI->GetAI(m_pAI);
  *bOutUseStepOutPos = 0;
  v7 = v6;
  if ( *(_DWORD *)(v6 + 1652) )
  {
    *bOutUseStepOutPos = *(_BYTE *)(v6 + 575);
    result = *(_BYTE *)(v6 + 574);
    if ( result )
      *(_DWORD *)(v7 + 560) = level.time + 1000;
  }
  else if ( AICommonInterface::HasPath(m_pAI) )
  {
    __asm { vmovss  xmm1, cs:__real@43e10000 }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 392) + 216i64))(*(_QWORD *)(v7 + 392)) && !AIScriptedInterface::GetCoverNode(m_pAI) && !*(_QWORD *)(v7 + 544) )
    {
      v10 = *(_QWORD *)(v7 + 8);
      v11 = *(pathnode_t **)(v10 + 112);
      if ( v11 )
      {
        pathnode_t::GetPos(*(pathnode_t **)(v10 + 112), &pos);
        if ( (unsigned __int16)(v11->constant.type - 10) <= 1u )
        {
          __asm { vmovaps [rsp+148h+var_38], xmm6 }
          pathnode_t::GetPos(v11, &v46);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+148h+var_68]
            vmovss  xmm2, dword ptr [rsp+148h+var_68+4]
            vsubss  xmm1, xmm0, dword ptr [rax+130h]
            vmovss  dword ptr [rsp+148h+vec], xmm1
            vsubss  xmm0, xmm2, dword ptr [rax+134h]
            vmovss  xmm1, dword ptr [rsp+148h+var_68+8]
            vmovss  dword ptr [rsp+148h+vec+4], xmm0
            vsubss  xmm2, xmm1, dword ptr [rax+138h]
            vmovss  [rsp+148h+var_70], xmm2
          }
          *(double *)&_XMM0 = vectoyaw(&vec);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = pathnode_t::GetAngle(v11);
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm5, xmm1, cs:__real@3b360b61
            vaddss  xmm2, xmm5, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vmovss  xmm3, xmm0, xmm2
            vxorps  xmm1, xmm1, xmm1
            vroundss xmm4, xmm1, xmm3, 1
            vmovss  xmm1, cs:__real@41b40000; threshold
            vsubss  xmm0, xmm5, xmm4
            vmulss  xmm0, xmm0, cs:__real@43b40000; angle
          }
          AngleIndex = G_GetAngleIndex(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm { vmovaps xmm6, [rsp+148h+var_38] }
          if ( AngleIndex <= 1 || AngleIndex - 7 <= 1 )
            return 1;
        }
      }
      else
      {
        AICommonInterface::GetPathFinalGoal(m_pAI, &pos);
      }
      if ( AICommonInterface::GetTargetEntity(m_pAI) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+130h]
          vmovss  xmm1, dword ptr [rax+134h]
          vsubss  xmm3, xmm0, dword ptr [rcx+130h]
          vsubss  xmm2, xmm1, dword ptr [rcx+134h]
          vmovss  xmm0, dword ptr [rax+138h]
          vsubss  xmm4, xmm0, dword ptr [rcx+138h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:__real@4893b480
        }
      }
    }
    return 0;
  }
  else
  {
    return *(_BYTE *)(v7 + 574) && *(_DWORD *)(v7 + 560) > level.time;
  }
  return result;
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

